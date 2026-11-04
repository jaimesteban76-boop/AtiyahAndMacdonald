import AtiyahAndMacdonald.Ring.Base
import AtiyahAndMacdonald.Nat.Nat_Stuff
set_option linter.defProp false



variable {R : Type} [CommutativeRing R]

/-- A polynomial is a sequence of coefficients that eventually becomes zero. -/
structure Polynomial (R : Type) [CommutativeRing R] where
  coeff : ℕ → R
  bound : ℕ
  vanishes : ∀ n > bound, coeff n = 0

-- Addition is simple pointwise addition.
-- The new bound is the max of the two bounds.
def add_poly (f g : Polynomial R) : Polynomial R where
  coeff := fun n => f.coeff n + g.coeff n
  bound := max f.bound g.bound
  vanishes := by
    -- Proof that for n > max f.bound g.bound, f.coeff n + g.coeff n = 0 + 0 = 0
    sorry


/-- Helper to sum a function over natural numbers from 0 to n-1 -/
def sum_range (f : Nat → R) : Nat → R
  | 0 => 0
  | n + 1 => f n + sum_range f n

def zero_poly : Polynomial R where
  coeff := fun _ => 0
  bound := 0
  vanishes := by intro n hn; rfl

def one_poly : Polynomial R where
  coeff := fun n => match n with
    | 0 => 1
    | _ + 1 => 0
  bound := 0
  vanishes := by intro n hn; cases n; contradiction; rfl


def neg_poly (f : Polynomial R) : Polynomial R where
  coeff := fun n => -f.coeff n
  bound := f.bound
  vanishes := by
    -- Proof that -0 = 0
    sorry

/-- Cauchy multiplication of two polynomials -/
def mul_poly (f g : Polynomial R) : Polynomial R where
  coeff := fun n => sum_range (fun i => f.coeff i * g.coeff (n - i)) (n + 1)
  bound := f.bound + g.bound
  vanishes := by
    -- Proof that the sum vanishes when n > f.bound + g.bound
    sorry

-- Assemble the operations into your custom CommutativeRing class
instance polynomial_is_ring : CommutativeRing (Polynomial R) where
  add := add_poly
  mul := mul_poly
  zero := zero_poly
  one := one_poly
  neg := neg_poly
  add_assoc := by sorry
  add_zero := by sorry
  add_left_neg := by sorry
  add_comm := by sorry
  mul_assoc := by sorry
  mul_one := by sorry
  mul_comm := by sorry
  left_distrib := by sorry


/-- Evaluates a polynomial at a given value x ∈ R.
    It sums the terms (coefficient_i * x^i) up to the polynomial's bound. -/
def eval (f : Polynomial R) (x : R) : R :=
  sum_range (fun i => f.coeff i * x ^ i) (f.bound + 1)

/-- Allows using the polynomial as a normal function `f x` instead of `eval f x`. -/
instance : CoeFun (Polynomial R) (fun _ => R → R) where
  coe f := fun x => eval f x

/-- An element x ∈ R is a root of the polynomial f if f(x) = 0. -/
def IsRoot (f : Polynomial R) (x : R) : Prop :=
  f x = 0

/-- The property that m is a valid upper bound for the polynomial. -/
def ValidBound (f : Polynomial R) (m : Nat) : Prop :=
  ∀ n > m, f.coeff n = 0

/-- The set of all valid bounds for a polynomial. -/
def ValidBoundsSet (f : Polynomial R) : Set Nat :=
  { m | ValidBound f m }

/-- Proof that the set of valid bounds is non-empty, using the polynomial's built-in bound. -/
lemma valid_bounds_nonempty (f : Polynomial R) : Nonempty (ValidBoundsSet f) :=
  ⟨f.bound, f.vanishes⟩

open Classical

/-- We apply your `wop` theorem to prove a strict minimum bound exists. -/
noncomputable def min_bound_exists (f : Polynomial R) :
    ∃ a ∈ ValidBoundsSet f, ∀ b : Nat, b ∈ ValidBoundsSet f → b ≠ a → a < b :=
  wop (ValidBoundsSet f) (valid_bounds_nonempty f)

/-- We extract the minimum bound using Classical.choose to define the degree. -/
noncomputable def degree (f : Polynomial R) : Nat :=
  Classical.choose (min_bound_exists f)

/-- The leading coefficient evaluated at the exact minimum bound. -/
noncomputable def leading_coeff (f : Polynomial R) : R :=
  f.coeff (degree f)

/-- A polynomial is monic if its leading coefficient is 1. -/
def IsMonic (f : Polynomial R) : Prop :=
  leading_coeff f = 1
