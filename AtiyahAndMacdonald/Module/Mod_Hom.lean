import AtiyahAndMacdonald.Module.Base
import AtiyahAndMacdonald.Ring.Ring_Hom

variable (A : Type) [CommutativeRing A]



/-- An A-module homomorphism f : M → N preserves addition and scalar multiplication. -/
structure ModHom (M N : Type) [Module A M] [Module A N] where
  toFun : M → N
  map_add : ∀ x y : M, toFun (x + y) = toFun x + toFun y
  map_smul : ∀ (a : A) (x : M), toFun (a • x) = a • toFun x

/-- Allows using the homomorphism as a normal function `f x` instead of `f.toFun x`. -/
instance {A : Type} [CommutativeRing A] {M N : Type} [Module A M] [Module A N] :
    CoeFun (ModHom A M N) (fun _ => M → N) where
  coe f := f.toFun

/-- The zero homomorphism mapping every element to 0. -/
def ModHom_zero (M N : Type) [Module A M] [Module A N] : ModHom A M N where
  toFun := fun _ => 0
  map_add := by sorry
  map_smul := by sorry

/-- Pointwise addition of two module homomorphisms (f + g)(x) = f(x) + g(x). -/
def ModHom_add {A:Type}[CommutativeRing A]{M N : Type} [Module A M] [Module A N]
    (f g : ModHom A M N) : ModHom A M N where
  toFun := fun x => f x + g x
  map_add := by sorry
  map_smul := by sorry

/-- Pointwise scalar multiplication of a module homomorphism (af)(x) = a f(x).[cite: 7] -/
def ModHom_smul {A:Type}[CommutativeRing A] {M N : Type} [Module A M] [Module A N]
    (a : A) (f : ModHom A M N) : ModHom A M N where
  toFun := fun x => a • (f x)
  map_add := by sorry
  map_smul := by sorry

/-- Bundles Hom_A(M, N) into an A-module using the pointwise operations defined above.[cite: 7] -/
instance Hom_Module (M N : Type) [Module A M] [Module A N] :
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
def induced_hom
    {M M' N N' : Type} [Module A M] [Module A M'] [Module A N] [Module A N']
    (u : ModHom A M' M) (v : ModHom A N N') : ModHom A (ModHom A M N) (ModHom A M' N') where
  toFun := fun f =>
    { toFun := fun x => v (f (u x))
      map_add := by sorry
      map_smul := by sorry }
  map_add := by sorry
  map_smul := by sorry

def ker_mod (M N : Type) [Module A M] [Module A N] (f: ModHom A M N ): Set M :=
{x | f x = 0 }

/-- The image of an A-module homomorphism f : M → N is the set f(M) and is a submodule of N.[cite: 4] -/
def im_mod (M N : Type) [Module A M] [Module A N] (f : ModHom A M N) : Set N :=
  { y | ∃ x : M, f x = y }

/-- Proof that the image is a valid submodule of N. -/
theorem im_is_submodule (M N : Type) [Module A M] [Module A N] (f : ModHom A M N) :
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
/-- The kernel of an A-module homomorphism f : M → N is a submodule of M. -/
theorem ker_is_submodule {M N : Type} [Module A M] [Module A N] (f : ModHom A M N) :
    IsSubmodule A (ker_mod A M N f) where
  zero_mem := by
    -- 0 ∈ Ker(f) because f(0) = 0 for any module homomorphism
    sorry
  add_mem := by
    -- If x, y ∈ Ker(f), then f(x) = 0 and f(y) = 0.
    -- Thus f(x + y) = f(x) + f(y) = 0 + 0 = 0, meaning x + y ∈ Ker(f).
    sorry
  smul_mem := by
    -- If x ∈ Ker(f), then f(x) = 0.
    -- Thus f(a • x) = a • f(x) = a • 0 = 0, meaning a • x ∈ Ker(f).
    sorry
-- 3. Module Isomorphism
/-- An isomorphism between two A-modules M and N is a bijective module homomorphism.
    We define it structurally as a homomorphism with a two-sided inverse. -/
structure ModIso (M N : Type) [Module A M] [Module A N] where
  hom : ModHom A M N
  inv : ModHom A N M
  left_inv : ∀ x : M, inv (hom x) = x
  right_inv : ∀ y : N, hom (inv y) = y

/-- Notation for module isomorphism -/
infix:50 " ≅ " => ModIso

-- 4. Exact Sequences
/-- A sequence M --f--> N --g--> P is exact at N if Im(f) = Ker(g).[cite: 8] -/
def IsExactAt {M N P : Type} [Module A M] [Module A N] [Module A P] (f : ModHom A M N) (g : ModHom A N P) : Prop :=
  im_mod A M N f = ker_mod A N P g

/-- A short exact sequence 0 → M' -f→ M -g→ M'' → 0 is exact at all three modules.[cite: 8]
    This is equivalent to f being injective, Im(f) = Ker(g), and g being surjective.[cite: 8] -/
def IsShortExactSequence {M' M M'' : Type} [Module A M'] [Module A M] [Module A M''] (f : ModHom A M' M) (g : ModHom A M M'') : Prop :=
  Function.Injective f ∧
  IsExactAt A f g ∧
  Function.Surjective g

-- 5. Long Exact Sequences
/-- A long sequence of modules M_0 → M_1 → M_2 → ... is exact if Im(f_i) = Ker(f_{i+1}) everywhere.
    We represent the family of modules as a function from ℕ to Type. -/
def IsLongExactSequence (A : Type) [CommutativeRing A] {M : ℕ → Type} [∀ i, Module A (M i)]
    (f : ∀ i, ModHom A (M i) (M (i + 1))) : Prop :=
  ∀ i, IsExactAt A (f i) (f (i + 1))


-- 6. Morphism Composition
/-- Composition of two module homomorphisms g ∘ f.
    This is required to "paste" maps together. -/
def ModHom_comp {M N P : Type} [Module A M] [Module A N] [Module A P]
    (g : ModHom A N P) (f : ModHom A M N) : ModHom A M P where
  toFun := fun x => g (f x)
  map_add := by sorry
  map_smul := by sorry


-- 8. Additive Functions
/-- A function λ taking modules in a class C to ℤ is additive if
    λ(M') - λ(M) + λ(M'') = 0 for every short exact sequence in C.[cite: 8] -/
def IsAdditiveFunction (A : Type) [CommutativeRing A](C : (M : Type) → [Module A M] → Prop)(lambda : (M : Type) → [Module A M] → ℤ) : Prop :=
  ∀ (M' M M'' : Type) [Module A M'] [Module A M] [Module A M''] (f : ModHom A M' M) (g : ModHom A M M''), C M' → C M → C M'' → IsShortExactSequence A f g → lambda M' - lambda M + lambda M'' = 0

--Useful lemmas--
/-- Theorem: A long sequence is exact if and only if every local 3-term subsequence
    M_i → M_{i+1} → M_{i+2} is exact.
    Because Lean unfolds the definition of IsLongExactSequence to exactly this forall
    statement, the proof is closed instantly by reflexivity (rfl). -/
theorem long_exact_iff_local_exact (A : Type) [CommutativeRing A] {M : ℕ → Type} [∀ i, Module A (M i)]
    (f : ∀ i, ModHom A (M i) (M (i + 1))) :
    IsLongExactSequence A f ↔ ∀ i, IsExactAt A (f i) (f (i + 1)) := by
  rfl
-- 7. Splitting and Pasting Long Exact Sequences
/-- A long sequence f_i is exact if and only if it can be spliced from short exact sequences.
    Specifically, there must exist intermediate modules N_i and maps u_i, v_i such that
    f_i is the composition of v_i and u_{i+1}, and each overlapping link is a short exact sequence. -/
theorem long_exact_iff_short_exact_splice (A : Type) [CommutativeRing A] {M : ℕ → Type} [∀ i, Module A (M i)](f : ∀ i, ModHom A (M i) (M (i + 1))) :IsLongExactSequence A f ↔  ∃ (N : ℕ → Type) (_ : ∀ i, Module A (N i)) (u : ∀ i, ModHom A (N i) (M i))(v : ∀ i, ModHom A (M i) (N (i + 1))), (∀ i, IsShortExactSequence A (u i) (v i)) ∧ (∀ i, ∀ x : M i, f i x = u (i + 1) (v i x)) := by
  sorry
