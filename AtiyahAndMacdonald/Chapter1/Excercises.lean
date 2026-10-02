import AtiyahAndMacdonald.Chapter1.Theorems


variable {R : Type} [CommutativeRing R]

/-- Exercise 1.2: Characterization of the Jacobson radical -/
theorem exercise_1_2 (x : R) :
    x ∈ JacobsonRadical R ↔ ∀ y : R, IsUnit (1 + -(x * y)) := by
  sorry
