import AtiyahAndMacdonald.Base

variable {R : Type} [CommutativeRing R]

def IsUnit (x : R) : Prop :=
  ∃ y : R, x * y = 1

def IsZeroDivisor (x : R) : Prop :=
  ∃ y : R, y ≠ 0 ∧ x * y = 0

def IsMaximalIdeal (M : Set R) (hM : IsIdeal M) : Prop :=
  ¬((1 : R) ∈ M) ∧ ∀ I : Set R, IsIdeal I → M ⊆ I → (∀ x, x ∈ I → x ∈ M) ∨ (1 : R) ∈ I

def Radical (I : Set R) : Set R :=
  { x : R | ∃ n : Nat, x ^ n ∈ I }

def Nilradical (R : Type) [CommutativeRing R] : Set R :=
  { x : R | IsNilpotent x }

def JacobsonRadical (R : Type) [CommutativeRing R] : Set R :=
  { x : R | ∀ M : Set R, ∀ hM : IsIdeal M, IsMaximalIdeal M hM → x ∈ M }
