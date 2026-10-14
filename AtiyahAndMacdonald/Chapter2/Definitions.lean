import AtiyahAndMacdonald.Module.Quotient_Module




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

-- 4. Free Module
/-- A free A-module is one that is isomorphic to a direct sum of copies of the base ring A.
    Here, the family of modules is simply M_i = A for all i ∈ I. -/
def IsFreeModule (A : Type) [CommutativeRing A] (M : Type) [Module A M] : Prop :=
  ∃ (I : Type), Nonempty (ModIso A M (ArbitraryDirectSum A I (fun _ => A)))
