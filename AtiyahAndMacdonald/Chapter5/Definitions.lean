import AtiyahAndMacdonald.Ring.PolRings
import AtiyahAndMacdonald.Module.Base
import AtiyahAndMacdonald.Ring.Ring_Hom

variable {A B : Type} [CommutativeRing A] [CommutativeRing B]

/-- Evaluates a polynomial with coefficients in A at an element x in B,
    using the ring homomorphism f : A → B to map the coefficients. -/
def eval_hom (f : RingHom A B) (p : Polynomial A) (x : B) : B :=
  sum_range (fun i => (f (p.coeff i)) * x ^ i) (p.bound + 1)

/-- An element x of B is integral over A (along f) if it is a root of a monic polynomial with coefficients in A[cite: 3]. -/
def IsIntegralElement (f : Subring A B) (x : B) : Prop :=
  ∃ p : Polynomial A, IsMonic p ∧ eval_hom f.hom p x = 0

/-- The integral closure of A in B (along f) is the set of elements in B integral over A[cite: 3]. -/
def IntegralClosure (f : Subring A B) : Set B :=
  { x : B | IsIntegralElement f x }

/-- A is integrally closed in B if its integral closure exactly equals its image in B[cite: 3]. -/
def IsIntegrallyClosedIn (f : Subring A B) : Prop :=
  IntegralClosure f = { y : B | ∃ a : A, f.hom a = y }

/-- The ring B is integral over A if every element of B is integral over A[cite: 3]. -/
def IsIntegralRingExtension (f : Subring A B) : Prop :=
  ∀ x : B, IsIntegralElement f x

/-- The extension A[x] inside B, defined as the set of all evaluations of polynomials from A at x. -/
def adjoin_element (f : Subring A B) (x : B) : Set B :=
  { y : B | ∃ p : Polynomial A, eval_hom f.hom p x = y }

/-- A ring homomorphism f : A → B is integral if B is integral over its subring f(A). -/
def integral_hom (f : RingHom A B) : Prop :=
  IsIntegralRingExtension (hom_image f)
