import Mathlib.Data.Set.Basic
set_option linter.style.header false
set_option linter.style.whitespace false
set_option linter.style.longLine false
set_option linter.style.multiGoal false
set_option linter.style.emptyLine false
set_option linter.flexible false
set_option linter.style.setOption false


-- Redefining as a class to inherit built-in notation
class CommutativeRing (R : Type) extends Add R, Mul R, Zero R, One R, Neg R where
  add_assoc : ∀ a b c : R, (a + b) + c = a + (b + c)
  add_zero : ∀ a : R, a + 0 = a
  add_left_neg : ∀ a : R, -a + a = 0
  add_comm : ∀ a b : R, a + b = b + a
  mul_assoc : ∀ a b c : R, (a * b) * c = a * (b * c)
  mul_one : ∀ a : R, a * 1 = a
  mul_comm : ∀ a b : R, a * b = b * a
  left_distrib : ∀ a b c : R, a * (b + c) = a * b + a * c

export CommutativeRing (add_zero add_left_neg add_comm add_assoc mul_comm left_distrib)

variable {R : Type} [CommutativeRing R]
theorem ahh (a:R): a*(1:R)=a := by exact CommutativeRing.mul_one a
theorem add_self_cancel (a b : R) (h : a + b = a) : b = 0 := by
  calc
    b = b + 0 := (add_zero b).symm
    _ = 0 + b := add_comm b 0
    _ = (-a + a) + b := by rw [add_left_neg a]
    _ = -a + (a + b) := (add_assoc (-a) a b)
    _ = -a + a := by rw [h]
    _ = 0 := add_left_neg a
theorem zero_mul (a:R): (0:R) * a= (0:R) := by
  have ha: 0*a=0*a+0*a := by
    calc
    0*a= (0+0)*a := by rw [add_zero (0:R)]
    _= a*(0+0) := mul_comm (0 + 0) a
    _=a*0+ a*0 := left_distrib a 0 0
    _=0*a + 0*a := by simp [mul_comm 0 a]
  exact add_self_cancel (0 * a) (0 * a) (id (Eq.symm ha))
variable {R : Type} [CommutativeRing R]

theorem add_right_cancel (a x y : R) (h : x + a = y + a) : x = y := by
  calc
    x = x + 0 := (add_zero x).symm
    _ = 0 + x := add_comm x 0
    _ = (-a + a) + x := by rw [add_left_neg a]
    _ = -a + (a + x) := (add_assoc (-a) a x)
    _ = -a + (x + a) := by rw [add_comm a x]
    _ = -a + (y + a) := by rw [h]
    _ = -a + (a + y) := by rw [add_comm y a]
    _ = (-a + a) + y := by rw [add_assoc (-a) a y]
    _ = 0 + y := by rw [add_left_neg a]
    _ = y + 0 := add_comm 0 y
    _ = y := add_zero y

theorem neg_one_element (a : R) : -(1 : R) * a = -a := by
  have ha : -(1 : R) * a + a = -a + a := by
    calc
      -(1 : R) * a + a = a * -(1 : R) + a  := by rw [mul_comm (-(1 : R)) a]
      _= a * -(1 : R) + a * 1 :=  by rw [CommutativeRing.mul_one a]
      _ = a * (-(1 : R) + 1) := (left_distrib a (-(1 : R)) 1).symm
      _ = a * 0 := by rw [add_left_neg 1]
      _ = 0 * a := mul_comm a 0
      _ = 0 := zero_mul a
      _ = -a + a := (add_left_neg a).symm
  exact add_right_cancel a (-(1 : R) * a) (-a) ha

theorem neg_neg_positive (a : R) : -(-a) = a := by
  have h : -(-a) + -a = a + -a := by
    calc
      -(-a) + -a = 0 := add_left_neg (-a)
      _ = -a + a := (add_left_neg a).symm
      _ = a + -a := add_comm (-a) a
  exact add_right_cancel (-a) (-(-a)) a h
-- Defines scalar multiplication recursively
def nsmul : Nat → R → R
  | 0, _ => (0 : R)
  | n + 1, a => a + nsmul n a

infix:70 " ** " => nsmul

-- Defines powers recursively
def npow : R → Nat → R
  | _, 0 => (1 : R)
  | a, n + 1 => a * npow a n

-- Instantiates the built-in ^ notation
instance : HPow R Nat R where
  hPow := npow
def IsNilpotent (a : R) : Prop :=
  ∃ n : Nat, a ^ n = (0 : R)
-- Bundles a subset of R with its closure properties
structure Subring (R : Type) [CommutativeRing R] where
  carrier : Set R
  zero_mem : (0 : R) ∈ carrier
  one_mem : (1 : R) ∈ carrier
  add_mem {a b : R} : a ∈ carrier → b ∈ carrier → a + b ∈ carrier
  mul_mem {a b : R} : a ∈ carrier → b ∈ carrier → a * b ∈ carrier
  neg_mem {a : R} : a ∈ carrier → -a ∈ carrier
def set_mul (A B : Set R) : Set R :=
  fun x => ∃ a b : R, a ∈ A ∧ b ∈ B ∧ a * b = x
theorem h_in_set_mul (A B: Set R)(a b :R): (a∈ A ∧ b ∈ B)→ a * b ∈ set_mul A B := by
  intro ⟨ha, hb  ⟩
  exact ⟨a,b, ha, hb ,rfl ⟩
structure IsIdeal (I : Set R) : Prop where
  zero_mem : (0 : R) ∈ I
  additive_subgroup : ∀ a b : R, a ∈ I → b ∈ I → a + -b ∈ I
  absorb : ∀ a : R, set_mul {a} I ⊆ I
theorem elementwise_to_absorb (I : Set R) : (∀ a x : R, x ∈ I → a * x ∈ I) ↔    ∀ a : R, set_mul  {a} I ⊆ I := by
  constructor
  intro ha a y hy
  have ⟨u, v, hu, hv, heq⟩ := hy
  subst hu
  rw[← heq]
  apply ha
  exact hv
  intro ha a y hy
  apply ha a
  apply h_in_set_mul
  exact ⟨ Set.mem_of_subset_of_mem (fun ⦃a_1⦄ a ↦ a) rfl, hy ⟩


theorem Ideal_is_Ring (I:Set R)(hI: IsIdeal I ): (1:R)∈ I↔ ∀r:R, r∈ I := by
  constructor
  intro h1 r
  have hr: r*(1:R)=r := by exact CommutativeRing.mul_one r
  rw[← hr]
  apply hI.3 r
  apply h_in_set_mul
  exact⟨rfl, h1  ⟩
  intro hr
  exact Set.mem_preimage.mp (hr 1)

structure IsPrimeIdeal (P : Set R) (hP : IsIdeal P) : Prop where
  proper : ¬((1 : R) ∈ P)
  primality : ∀ x y : R, x * y ∈ P → ¬(y ∈ P) → x ∈ P

-- Defines the relation a ~ b iff a - b ∈ I
def ideal_equiv (I : Set R) : R → R → Prop :=
  fun a b => a + -b ∈ I

-- Bundles the relation with proofs that it is an equivalence relation
def ideal_setoid (I : Set R) (hI : IsIdeal I) : Setoid R where
  r := ideal_equiv I
  iseqv := {
    refl := by
      intro x
      rw[ideal_equiv]
      rw[add_comm]
      rw[ add_left_neg]
      exact hI.zero_mem
    symm := by
      intro x y
      simp [ideal_equiv]
      intro hxy
      have : -(1:R)*(x+ -y)∈ I := by
        apply hI.3 (-(1:R))
        apply h_in_set_mul
        exact ⟨rfl, hxy⟩
      rw[left_distrib,neg_one_element, neg_one_element,neg_neg_positive] at this
      rw [add_comm] at this
      exact this
    trans := by
      intro x y z hxy hyz
      simp [ideal_equiv] at hxy hyz ⊢
      have h1 : -(1:R)*(y+ -z)∈ I := by
        apply hI.3 (-(1:R))
        apply h_in_set_mul
        exact ⟨rfl, hyz⟩
      rw [neg_one_element] at h1
      have h2 : (x + -y) + -(-(y + -z)) ∈ I := hI.2 (x + -y) (-(y + -z)) hxy h1
      rw [neg_neg_positive] at h2
      have heq : (x + -y) + (y + -z) = x + -z := by
        calc
          (x + -y) + (y + -z) = x + (-y + (y + -z)) := add_assoc x (-y) (y + -z)
          _ = x + ((-y + y) + -z) := by rw [(add_assoc (-y) y (-z)).symm]
          _ = x + (0 + -z) := by rw [add_left_neg y]
          _ = x + (-z + 0) := by rw [add_comm 0 (-z)]
          _ = x + -z := by rw [add_zero (-z)]
      rw [heq] at h2
      exact h2
  }

-- Constructs the quotient type using the setoid
def QuotientRing (I : Set R) (hI : IsIdeal I) : Type :=
  Quotient (ideal_setoid I hI)
-- Blu blu blu
