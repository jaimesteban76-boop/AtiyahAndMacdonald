import AtiyahAndMacdonald.Base


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

-- 1. Make A an explicit argument `(A : Type)` so Lean always knows the base ring
structure IsSubmodule (A : Type) [CommutativeRing A] {M : Type} [Module A M] (N : Set M) : Prop where
  zero_mem : (0 : M) ∈ N
  add_mem : ∀ x y : M, x ∈ N → y ∈ N → x + y ∈ N
  smul_mem : ∀ (a : A) (x : M), x ∈ N → a • x ∈ N

-- 2. Pass A explicitly to IsSubmodule
def SubmodulesContaining (A : Type) [CommutativeRing A] {M : Type} [Module A M] (V : Set M) : Set (Set M) :=
  { N : Set M | IsSubmodule A N ∧ V ⊆ N }

-- 3. Pass A explicitly to SubmodulesContaining
def Span (A : Type) [CommutativeRing A] {M : Type} [Module A M] (V : Set M) : Set M :=
  sInter (SubmodulesContaining A V)

-- 4. Pass A explicitly to Span
def IsFinitelyGenerated (A : Type) [CommutativeRing A] (M : Type) [Module A M] : Prop :=
  ∃ V : Set M, (∀ x : M, x ∈ Span A V) ∧ (∃ L : List M, V = { y | y ∈ L })

/-- The direct sum M ⊕ N is the set of all pairs (x, y) with x ∈ M, y ∈ N.[cite: 3] -/
def DirectSum (A:Type)[CommutativeRing A] (M N : Type) [Module A M] [Module A N] : Type :=
  M × N
/-- If N, P are submodules of M, (N:P) is the set of all a ∈ A such that aP ⊆ N.
    It is an ideal of A.[cite: 4] -/
def colon_mod (A : Type) [CommutativeRing A] {M : Type} [Module A M] (N P : Set M) : Set A :=
  { a : A | ∀ x ∈ P, a • x ∈ N }

/-- The annihilator of M, denoted Ann(M) or (0:M), is the set of all a ∈ A such that aM = 0.[cite: 4] -/
def ann_mod (A : Type) [CommutativeRing A] (M : Type) [Module A M] : Set A :=
  { a : A | ∀ x : M, a • x = (0 : M) }

/-- An A-module is faithful if Ann(M) = {0}.[cite: 4] -/
def IsFaithfulModule (A : Type) [CommutativeRing A] (M : Type) [Module A M] : Prop :=
  ann_mod A M = { (0 : A) }

/-- The product 𝔞M, where 𝔞 is an ideal (Set A) and M is an A-module.
    It is the set of all finite sums ∑ a_i x_i with a_i ∈ 𝔞, x_i ∈ M.[cite: 4]
    By applying `Span A` to the pointwise products, we automatically generate the closure of finite sums. -/
def ideal_smul_mod (A : Type) [CommutativeRing A] {M : Type} [Module A M] (I : Set A) (N : Set M) : Set M :=
  Span A { y | ∃ a x, a ∈ I ∧ x ∈ N ∧ y = a • x }
