import AtiyahAndMacdonald.Ring.PolRings
import AtiyahAndMacdonald.Module.Base


variable {A B : Type} [CommutativeRing A] [CommutativeRing B]

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

/-- 1. Create a distinct Type for the integral closure using Lean's Subtype. -/
def IntegralClosureType {A B : Type} [CommutativeRing A] [CommutativeRing B] (f : Subring A B) : Type :=
  { x : B // x ∈ IntegralClosure f }

/-- 2. Equip this new Type with a CommutativeRing instance.
    (Use `instance` instead of `def` so Lean automatically recognizes it as a ring). -/
instance IntegralClosurering {A B : Type} [CommutativeRing A] [CommutativeRing B] (f : Subring A B) :
    CommutativeRing (IntegralClosureType f) where
  add := by sorry
  mul := by sorry
  zero := by sorry
  one := by sorry
  neg := by sorry
  add_assoc := by sorry
  add_zero := by sorry
  add_left_neg := by sorry
  add_comm := by sorry
  mul_assoc := by sorry
  mul_one := by sorry
  mul_comm := by sorry
  left_distrib := by sorry

/-- 3. Bundle the canonical inclusion from the IntegralClosure into B. -/
def hom_integral_closure_to_B {A B : Type} [CommutativeRing A] [CommutativeRing B] (f : Subring A B) :
    RingHom (IntegralClosureType f) B where
  toFun := fun x => x.val
  map_add := by sorry
  map_mul := by sorry
  map_one := by sorry

/-- 4. Package the integral closure as a Subring of B. -/
def Subring_integral_closure {A B : Type} [CommutativeRing A] [CommutativeRing B] (f : Subring A B) :
    Subring (IntegralClosureType f) B where
  hom := hom_integral_closure_to_B f
  is_inj := by sorry

/-- 5. Bundle the canonical injection from A into the IntegralClosure. -/
def hom_A_to_integral_closure {A B : Type} [CommutativeRing A] [CommutativeRing B] (f : Subring A B) :
    RingHom A (IntegralClosureType f) where
  toFun := fun a => ⟨f.hom a, by
    -- You must prove that f(a) is integral over A (typically by using the polynomial x - a)
    sorry⟩
  map_add := by sorry
  map_mul := by sorry
  map_one := by sorry

/-- 6. Package A as a Subring of the IntegralClosure. -/
def Supring_integral_closure {A B : Type} [CommutativeRing A] [CommutativeRing B] (f : Subring A B) :
    Subring A (IntegralClosureType f) where
  hom := hom_A_to_integral_closure f
  is_inj := by sorry
