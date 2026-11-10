import AtiyahAndMacdonald.Chapter5.Theorems
import AtiyahAndMacdonald.Chapter1.Excercises


variable {A B: Type} [CommutativeRing A] [CommutativeRing B]


--Ex 1--
lemma f_int_commutative_diag (f:RingHom A B) (hf:integral_hom f)(b:Set B)(hb:IsIdeal b): integral_hom (quotient_induced_hom f b hb):= by
    sorry

/-- Bridge lemma to connect integral_hom definition to the bundled Subring format. -/
lemma integral_bridge {A B : Type} [CommutativeRing A] [CommutativeRing B]
    (f : RingHom A B) (h_inj : Isinj_hom f) (h_int : integral_hom f) :
    IsIntegralRingExtension ⟨f, h_inj⟩ := by
  sorry

/-- Spectrum-specific image lemma to bypass bundle issues. -/
lemma pideal_image_is_pideal {A B : Type} [CommutativeRing A] [CommutativeRing B] (f : RingHom A B) (hf : Issurj_hom f) (p : Spectrum A) (hp : kernel f ⊆ p.val) : IsPrimeIdeal (f '' p.val) := by
  rw [ideal_extension_surj_image_mem f p.val p.property.2.1 hf]
  exact (pideal_extension_is_pideal f p.val p.property hf).mpr hp

theorem f_int_hom_closed_mapping (f: RingHom A B) (hf: integral_hom f) (b: Set B) (hb: IsIdeal b) :
    f_star f '' (PrimeIdealsContaining b) = PrimeIdealsContaining (ideal_contraction f b) := by
  ext p
  simp [PrimeIdealsContaining, f_star, ideal_contraction]
  constructor
  intro hP
  obtain ⟨q, ⟨hqb, ⟨_, hfq⟩⟩⟩ := hP
  intro x hx
  rw [← hfq]
  apply hqb hx

  intro hp
  have : ∃ qbar : Spectrum (QuotientRing b hb), (ideal_contraction (quotient_induced_hom f b hb) qbar) = ideal_extension (quotient_pi_hom (ideal_contraction f b) (ideal_contraction_is_ideal f b hb)) p := by
    let f_sub : Subring (QuotientRing (ideal_contraction f b) (ideal_contraction_is_ideal f b hb)) (QuotientRing b hb) :=
      ⟨quotient_induced_hom f b hb, quotient_induced_hom_inj f b hb⟩
    have h_integral : IsIntegralRingExtension f_sub := by
        apply integral_bridge (quotient_induced_hom f b hb) (quotient_induced_hom_inj f b hb)
        exact f_int_commutative_diag f hf b hb
    have hp_bar_prime : IsPrimeIdeal ((quotient_pi_hom (ideal_contraction f b) (ideal_contraction_is_ideal f b hb)) '' p.val) := by
      apply pideal_image_is_pideal
      exact quotient_pi_surjective (ideal_contraction f b) (ideal_contraction_is_ideal f b hb)
      rw [ideal_is_kernel (ideal_contraction f b) (ideal_contraction_is_ideal f b hb)]
      exact hp
    have h_chain := chain_continuation f_sub h_integral ((quotient_pi_hom (ideal_contraction f b) (ideal_contraction_is_ideal f b hb)) '' p.val) hp_bar_prime
    obtain ⟨q, hq_spec, hq_eq⟩ := h_chain
    use ⟨q, hq_spec⟩
    rw [pideal_extension_surj_mem (quotient_pi_hom (ideal_contraction f b) (ideal_contraction_is_ideal f b hb)) p (quotient_pi_surjective (ideal_contraction f b) (ideal_contraction_is_ideal f b hb))] at hq_eq
    exact hq_eq
  obtain ⟨qbar, hqbar⟩ := this

  use f_star (quotient_pi_hom b hb) qbar
  constructor
  intro x hx
  have h_proj_zero : x ∈ kernel ( quotient_pi_hom b hb) := by
    rw [ideal_is_kernel b hb]
    exact hx
  simp [kernel] at h_proj_zero
  simp [f_star,ideal_contraction, h_proj_zero]
  apply qbar.2.2.1.1

  simp
  ext y
  change (quotient_pi_hom b hb) (f y) ∈ qbar.val ↔ y ∈ p.val
  have h_comm : (quotient_pi_hom b hb) (f y) = (quotient_induced_hom f b hb) ((quotient_pi_hom (ideal_contraction f b) (ideal_contraction_is_ideal f b hb)) y) := by rfl
  rw [h_comm]
  change ((quotient_pi_hom (ideal_contraction f b) (ideal_contraction_is_ideal f b hb)) y) ∈ ideal_contraction (quotient_induced_hom f b hb) qbar.val ↔ y ∈ p.val
  rw [hqbar]
  rw [← pideal_extension_surj_mem (quotient_pi_hom (ideal_contraction f b) (ideal_contraction_is_ideal f b hb)) p (quotient_pi_surjective (ideal_contraction f b) (ideal_contraction_is_ideal f b hb))]
  rw [mem_image_quotient_pi_prime_iff (ideal_contraction f b) (ideal_contraction_is_ideal f b hb) p hp]

--Ex 3--
--Ex 10--
