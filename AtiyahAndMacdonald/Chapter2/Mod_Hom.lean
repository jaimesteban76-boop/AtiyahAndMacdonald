import AtiyahAndMacdonald.Chapter2.Definitions
import AtiyahAndMacdonald.Ring_Hom


/-- An A-algebra is a ring B together with a ring homomorphism f : A → B.[cite: 3] -/
structure AAlgebra (A B : Type) [CommutativeRing A] [CommutativeRing B] where
  hom : RingHom A B

/-- An A-module homomorphism f : M → N preserves addition and scalar multiplication. -/
structure ModHom (A : Type) [CommutativeRing A] (M N : Type) [Module A M] [Module A N] where
  toFun : M → N
  map_add : ∀ x y : M, toFun (x + y) = toFun x + toFun y
  map_smul : ∀ (a : A) (x : M), toFun (a • x) = a • toFun x

/-- Allows using the homomorphism as a normal function `f x` instead of `f.toFun x`. -/
instance {A : Type} [CommutativeRing A] {M N : Type} [Module A M] [Module A N] :
    CoeFun (ModHom A M N) (fun _ => M → N) where
  coe f := f.toFun

/-- The zero homomorphism mapping every element to 0. -/
def ModHom_zero (A : Type) [CommutativeRing A] (M N : Type) [Module A M] [Module A N] : ModHom A M N where
  toFun := fun _ => 0
  map_add := by sorry
  map_smul := by sorry

/-- Pointwise addition of two module homomorphisms (f + g)(x) = f(x) + g(x). -/
def ModHom_add {A : Type} [CommutativeRing A] {M N : Type} [Module A M] [Module A N]
    (f g : ModHom A M N) : ModHom A M N where
  toFun := fun x => f x + g x
  map_add := by sorry
  map_smul := by sorry

/-- Pointwise scalar multiplication of a module homomorphism (af)(x) = a f(x).[cite: 7] -/
def ModHom_smul {A : Type} [CommutativeRing A] {M N : Type} [Module A M] [Module A N]
    (a : A) (f : ModHom A M N) : ModHom A M N where
  toFun := fun x => a • (f x)
  map_add := by sorry
  map_smul := by sorry

/-- Bundles Hom_A(M, N) into an A-module using the pointwise operations defined above.[cite: 7] -/
instance Hom_Module (A : Type) [CommutativeRing A] (M N : Type) [Module A M] [Module A N] :
    Module A (ModHom A M N) where
  add := ModHom_add
  zero := ModHom_zero A M N
  zmul := ModHom_smul
  add_assoc := by sorry
  add_zero := by sorry
  add_comm := by sorry
  smul_add := by sorry
  add_smul := by sorry
  mul_smul := by sorry
  one_smul := by sorry

/-- The induced morphism from Hom(M, N) to Hom(M', N') given by mappings u : M' → M and v : N → N'.
    It maps a homomorphism f to the composition v ∘ f ∘ u.[cite: 7] -/
def induced_hom {A : Type} [CommutativeRing A]
    {M M' N N' : Type} [Module A M] [Module A M'] [Module A N] [Module A N']
    (u : ModHom A M' M) (v : ModHom A N N') : ModHom A (ModHom A M N) (ModHom A M' N') where
  toFun := fun f =>
    { toFun := fun x => v (f (u x))
      map_add := by sorry
      map_smul := by sorry }
  map_add := by sorry
  map_smul := by sorry

def ker_mod (A : Type) [CommutativeRing A] (M N : Type) [Module A M] [Module A N] (f: ModHom A M N ): Set M :=
{x | f x = 0 }

/-- The image of an A-module homomorphism f : M → N is the set f(M) and is a submodule of N.[cite: 4] -/
def im_mod (A : Type) [CommutativeRing A] (M N : Type) [Module A M] [Module A N] (f : ModHom A M N) : Set N :=
  { y | ∃ x : M, f x = y }

/-- Proof that the image is a valid submodule of N. -/
theorem im_is_submodule (A : Type) [CommutativeRing A] (M N : Type) [Module A M] [Module A N] (f : ModHom A M N) :
    IsSubmodule A (im_mod A M N f) where
  zero_mem := by
    -- 0 ∈ Im(f) because f(0) = 0
    sorry
  add_mem := by
    -- If y₁, y₂ ∈ Im(f), then y₁ + y₂ = f(x₁) + f(x₂) = f(x₁ + x₂) ∈ Im(f)
    sorry
  smul_mem := by
    -- If y ∈ Im(f), then a • y = a • f(x) = f(a • x) ∈ Im(f)
    sorry
