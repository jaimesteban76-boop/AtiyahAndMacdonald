import AtiyahAndMacdonald.Chapter1.Definitions

variable {R : Type} [CommutativeRing R]

/-- Proposition 1.8: Nilradical is the intersection of all prime ideals -/
theorem nilradical_eq_inter_prime :
    Nilradical R = { x : R | ∀ P : Set R, ∀ hP : IsIdeal P, IsPrimeIdeal P hP → x ∈ P } := by
    sorry
