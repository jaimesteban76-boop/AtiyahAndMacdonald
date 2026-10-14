import AtiyahAndMacdonald.Chapter1.Theorems


variable {A B : Type} [CommutativeRing A] [CommutativeRing B]

theorem pideal_extension_is_pideal (f:RingHom A B) (I:Set A)(hI: IsPrimeIdeal I) (hf:Issurj_hom f): IsPrimeIdeal (ideal_extension f I) ↔ kernel f ⊆ I := by
  sorry
