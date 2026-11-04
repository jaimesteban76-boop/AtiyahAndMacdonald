import AtiyahAndMacdonald.Chapter1.Theorems


variable {A B : Type} [CommutativeRing A] [CommutativeRing B]

theorem pideal_extension_is_pideal (f:RingHom A B) (I:Set A)(hI: IsPrimeIdeal I) (hf:Issurj_hom f): IsPrimeIdeal (ideal_extension f I) ↔ kernel f ⊆ I := by
  constructor
  sorry
  intro kf
  constructor
  intro x y hxy hy
  sorry
  constructor
  apply ideal_gen_by_is_ideal
  rw [← ideal_extension_surj_image_mem]
  by_contra h
  simp at h
  obtain ⟨x,⟨hx1,hx2⟩⟩ := h
  sorry
  exact hI.2.1
  exact hf
