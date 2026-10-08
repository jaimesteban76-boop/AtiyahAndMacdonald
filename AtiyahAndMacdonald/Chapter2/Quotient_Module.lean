import AtiyahAndMacdonald.Base
import AtiyahAndMacdonald.Ring_Hom
import AtiyahAndMacdonald.Chapter2.Definitions
import AtiyahAndMacdonald.Chapter2.Mod_Hom

variable {A : Type} [CommutativeRing A]
variable {M : Type} [Module A M]

-- 1. Equivalence Relation and Setoid
-- Defines the relation x ~ y iff x - y ∈ N.
-- We use -(1:A) • y because Module does not extend Neg.
def submodule_equiv (A : Type) [CommutativeRing A] {M : Type} [Module A M] (N : Set M) : M → M → Prop :=
  fun x y => x + (-(1 : A)) • y ∈ N

-- 2. Make A explicit here as well, and pass it down to submodule_equiv
def submodule_setoid (A : Type) [CommutativeRing A] {M : Type} [Module A M] (N : Set M) (hN : IsSubmodule A N) : Setoid M where
  r := submodule_equiv A N
  iseqv := {
    refl := by sorry
    symm := by sorry
    trans := by sorry
  }

-- 2. The Quotient Type
def QuotientModule (N : Set M) (hN : IsSubmodule A N) : Type :=
  Quotient (submodule_setoid A N hN)

-- 3. Well-Defined Operations on the Quotient
def quotient_module_add {N : Set M} (hN : IsSubmodule A N) (x y : QuotientModule N hN) : QuotientModule N hN :=
  Quotient.liftOn₂ x y
    (fun a b => Quotient.mk (submodule_setoid A N hN) (a + b))
    (by sorry)

def quotient_module_zmul {N : Set M} (hN : IsSubmodule A N) (c : A) (x : QuotientModule N hN) : QuotientModule N hN :=
  Quotient.liftOn x
    (fun a => Quotient.mk (submodule_setoid A N hN) (c • a))
    (by sorry)

-- 4. Bundling into a Module Instance
-- We first instantiate zMul for the quotient to enable the `•` notation
instance {N : Set M} (hN : IsSubmodule A N) : zMul A (QuotientModule N hN) where
  zmul := quotient_module_zmul hN

instance {N : Set M} (hN : IsSubmodule A N) : Module A (QuotientModule N hN) where
  add := quotient_module_add hN
  zero := Quotient.mk (submodule_setoid A N hN) 0
  add_assoc := by sorry
  add_zero := by sorry
  add_comm := by sorry
  smul_add := by sorry
  add_smul := by sorry
  mul_smul := by sorry
  one_smul := by sorry

/-- The cokernel of f is the quotient module N / Im(f).[cite: 4] -/
def coker_mod (A : Type) [CommutativeRing A] (M N : Type) [Module A M] [Module A N] (f : ModHom A M N) : Type :=
  QuotientModule (im_mod A M N f) (im_is_submodule A M N f)

-- 5. The Canonical Projection Morphism
/-- The natural map of M onto M/N is an A-module homomorphism. -/
def quotient_module_pi_hom (N : Set M) (hN : IsSubmodule A N) : ModHom A M (QuotientModule N hN) where
  toFun := fun x => Quotient.mk (submodule_setoid A N hN) x
  map_add := by
    intro x y
    rfl
  map_smul := by
    intro a x
    rfl

/-- Prove the canonical morphism is surjective to allow pulling representatives. -/
theorem quotient_module_pi_surjective (N : Set M) (hN : IsSubmodule A N) :
    Function.Surjective (quotient_module_pi_hom N hN) := by
  intro y
  rcases Quotient.exists_rep y with ⟨x, hx⟩
  use x
  exact hx
