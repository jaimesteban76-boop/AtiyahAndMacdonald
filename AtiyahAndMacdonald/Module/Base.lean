import AtiyahAndMacdonald.Ring.Base


variable (A : Type) [CommutativeRing A]
class zMul (A : Type) (M : Type) where
  zmul : A → M → M

infixr:73 " • " => zMul.zmul

class Module (A : Type) [CommutativeRing A] (M : Type) extends Add M, Zero M, zMul A M where
  add_assoc : ∀ x y z : M, x + y + z = x + (y + z)
  add_zero : ∀ x : M, x + 0 = x
  add_comm : ∀ x y : M, x + y = y + x
  smul_add : ∀ (a : A) (x y : M), a • (x + y) = a • x + a • y
  add_smul : ∀ (a b : A) (x : M), (a + b) • x = a • x + b • x
  mul_smul : ∀ (a b : A) (x : M), (a * b) • x = a • (b • x)
  one_smul : ∀ x : M, (1 : A) • x = x

-- 1. Define scalar multiplication of A on itself as standard ring multiplication
instance self_zMul (A : Type) [CommutativeRing A] : zMul A A where
  zmul := fun a b => a * b

-- 2. Declare A as a module over itself
instance self_Module (A : Type) [CommutativeRing A] : Module A A where
  add_assoc := by sorry
  add_zero := by sorry
  add_comm := by sorry
  smul_add := by sorry -- a(x + y) = ax + ay (Ring distributivity)
  add_smul := by sorry -- (a + b)x = ax + bx (Ring distributivity)
  mul_smul := by sorry -- (ab)x = a(bx) (Ring associativity)
  one_smul := by sorry -- 1x = x (Ring identity)

-- 1. Create a base class for addition and zero that DOES NOT depend on A
class IsAddSubgroup {M : Type} [Zero M] [Add M] (N : Set M) : Prop where
  zero_mem : (0 : M) ∈ N
  add_mem : ∀ x y : M, x ∈ N → y ∈ N → x + y ∈ N

-- 2. IsSubmodule extends IsAddSubgroup, adding the scalar multiplication that DOES depend on A
class IsSubmodule (A : Type) [CommutativeRing A] {M : Type} [Module A M] (N : Set M) extends IsAddSubgroup N : Prop where
  smul_mem : ∀ (a : A) (x : M), x ∈ N → a • x ∈ N

-- 2. Pass A explicitly to IsSubmodule
def SubmodulesContaining {M : Type} [Module A M] (V : Set M) : Set (Set M) :=
  { N : Set M | IsSubmodule A N ∧ V ⊆ N }

-- 3. Pass A explicitly to SubmodulesContaining
def Span  {M : Type} [Module A M] (V : Set M) : Set M :=
  sInter (SubmodulesContaining A V)

def IsFinitelyGenerated (A : Type) [CommutativeRing A] (M : Type) [Module A M] : Prop :=
  ∃ V : Set M,  Span A V={m|m:M} ∧ ∃ U : List M, V = { u : M | u ∈ U }

-- 1. Arbitrary Direct Product
/-- The direct product of a family of modules M_i indexed by I.
    It is the set of all functions f : I → ∪ M_i such that f(i) ∈ M_i. -/
def DirectProduct (I : Type) (M : I → Type) [∀ i, Module A (M i)] : Type :=
  (i : I) → M i

-- 2. Arbitrary Direct Sum
/-- The direct sum of a family of modules M_i indexed by I.
    It consists of elements of the direct product where all but finitely many components are zero.
    We use a List to enforce the finiteness of non-zero elements. -/
def ArbitraryDirectSum (I : Type) (M : I → Type) [∀ i, Module A (M i)] : Type :=
  { f : (i : I) → M i // ∃ L : List I, ∀ i, i ∉ L → f i = (0 : M i) }

-- 1. Define the Zero element for ArbitraryDirectSum (the all-zero function with an empty list)
instance arbitrary_direct_sum_zero (A : Type) [CommutativeRing A] (I : Type) (M : I → Type) [∀ i, Module A (M i)] :
    Zero (ArbitraryDirectSum A I M) where
  zero := ⟨fun _ => 0, ⟨[], by sorry⟩⟩

-- 2. Define Addition for ArbitraryDirectSum (pointwise addition)
instance arbitrary_direct_sum_add (A : Type) [CommutativeRing A] (I : Type) (M : I → Type) [∀ i, Module A (M i)] :
    Add (ArbitraryDirectSum A I M) where
  add f g := ⟨fun i => f.val i + g.val i, by sorry⟩

-- 3. Define Scalar Multiplication for ArbitraryDirectSum (pointwise scalar multiplication)
instance arbitrary_direct_sum_zmul (A : Type) [CommutativeRing A] (I : Type) (M : I → Type) [∀ i, Module A (M i)] :
    zMul A (ArbitraryDirectSum A I M) where
  zmul a f := ⟨fun i => a • f.val i, by sorry⟩

-- 4. Declare ArbitraryDirectSum as a valid A-Module
instance arbitrary_direct_sum_module (A : Type) [CommutativeRing A] (I : Type) (M : I → Type) [∀ i, Module A (M i)] :
    Module A (ArbitraryDirectSum A I M) where
  add_assoc := by sorry
  add_zero := by sorry
  add_comm := by sorry
  smul_add := by sorry
  add_smul := by sorry
  mul_smul := by sorry
  one_smul := by sorry


/-- Scalar multiplication of a subring A on the parent ring B. -/
instance subring_zMul {B : Type} [CommutativeRing B] (A : Subring B) : zMul A.carrier B where
  zmul a b := a.val * b

/-- The parent ring B is a module over any of its subrings A. -/
instance subring_Module {B : Type} [CommutativeRing B] (A : Subring B) : Module A.carrier B where
  add_assoc := add_assoc
  add_zero := add_zero
  add_comm := add_comm
  smul_add := by sorry
  add_smul := by sorry
  mul_smul := by sorry
  one_smul := by sorry


-- 3. Define Zero using ONLY IsAddSubgroup (Notice: No 'A' anywhere!)
instance submodule_zero {M : Type} [Zero M] [Add M]
    (N : Set M) [hN : IsAddSubgroup N] : Zero {x : M // x ∈ N} where
  zero := ⟨0, hN.zero_mem⟩

-- 4. Define Add using ONLY IsAddSubgroup (Notice: No 'A' anywhere!)
instance submodule_add {M : Type} [Zero M] [Add M]
    (N : Set M) [hN : IsAddSubgroup N] : Add {x : M // x ∈ N} where
  add x y := ⟨x.val + y.val, hN.add_mem x.val y.val x.property y.property⟩

-- 5. zMul has 'A' explicitly in its target type (`zMul A ...`), so Lean easily infers A automatically
instance submodule_zMul {A : Type} [CommutativeRing A] {M : Type} [Module A M]
    (N : Set M) [hN : IsSubmodule A N] : zMul A {x : M // x ∈ N} where
  zmul a x := ⟨a • x.val, hN.smul_mem a x.val x.property⟩

instance submodule_is_module {A : Type} [CommutativeRing A] {M : Type} [Module A M]
    (N : Set M) [hN : IsSubmodule A N] : Module A {x : M // x ∈ N} where
  add_assoc := by intro x y z; apply Subtype.ext; exact Module.add_assoc x.val y.val z.val
  add_zero := by intro x; apply Subtype.ext; exact Module.add_zero x.val
  add_comm := by intro x y; apply Subtype.ext; exact Module.add_comm x.val y.val
  smul_add := by intro a x y; apply Subtype.ext; exact Module.smul_add a x.val y.val
  add_smul := by intro a b x; apply Subtype.ext; exact Module.add_smul a b x.val
  mul_smul := by intro a b x; apply Subtype.ext; exact Module.mul_smul a b x.val
  one_smul := by intro x; apply Subtype.ext; exact Module.one_smul x.val
