import AtiyahAndMacdonald.Ring.PolRings
import AtiyahAndMacdonald.Module.Base
import AtiyahAndMacdonald.Ring.Ring_Hom

variable {R B : Type} [CommutativeRing B] [CommutativeRing R]

/-- Evaluates a polynomial with coefficients in a subring A at an element x in the larger ring B. -/
def eval_subring (A : Subring B) (f : Polynomial A.carrier) (x : B) : B :=
  sum_range (fun i => (f.coeff i).val * x ^ i) (f.bound + 1)

/-- An element x of B is said to be integral over A if x is a root of a monic polynomial with coefficients in A. -/
def IsIntegralElement (A : Subring B) (x : B) : Prop :=
  ∃ f : Polynomial A.carrier, IsMonic f ∧ eval_subring A f x = 0

/-- The set C of elements of B which are integral over A is called the integral closure of A in B. -/
def IntegralClosure (A : Subring B) : Set B :=
  { x : B | IsIntegralElement A x }

/-- If C = A, then A is said to be integrally closed in B[cite: 2]. -/
def IsIntegrallyClosedIn (A : Subring B) : Prop :=
  IntegralClosure A = A.carrier

/-- If C = B, the ring B is said to be integral over A[cite: 2]. -/
def IsIntegralRingExtension (A : Subring B) : Prop :=
  ∀ x : B, IsIntegralElement A x

-- Add this to your Integrality/Valuations file

/-- The extension A[x], defined as the set of all evaluations of polynomials from A at x. -/
def adjoin_element (A : Subring B) (x : B) : Set B :=
  { y : B | ∃ f : Polynomial A.carrier, eval_subring A f x = y }


instance adjoin_is_submodule (A : Subring B) (x : B) :
    IsSubmodule A.carrier (adjoin_element A x) where
  zero_mem := by sorry
  add_mem := by sorry
  smul_mem := by sorry

def integral_hom (f:RingHom R B): Prop :=
  IsIntegralRingExtension (hom_image f)
