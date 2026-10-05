import AtiyahAndMacdonald.Chapter1.Definitions

variable {R : Type} [CommutativeRing R]

/-- Proposition 1.8: Nilradical is the intersection of all prime ideals -/
theorem nilradical_eq_inter_prime : Nilradical R = { x : R | ∀ P : Set R, ∀ hP : IsIdeal P, IsPrimeIdeal P hP → x ∈ P } := by
    sorry
theorem non_unit_in_maximal_ideal (x:R) (hx : ¬(IsUnit x)): ∃ M: Set R, x∈ M ∧  IsMaximalIdeal M := by
    sorry

/-- Proposition 1.1: There is a one-to-one order-preserving correspondence between
    the ideals of R which contain a, and the ideals of R/a[cite: 6]. -/
theorem prop_1_1_correspondence (I : Set R) (hI : IsIdeal I) : ∃ f : IdealsContaining I → IdealsOfQuotient I hI, Function.Bijective f := by
  sorry

/-- The kernel of a ring homomorphism is an ideal[cite: 6]. -/
theorem kernel_is_ideal {A B : Type} [CommutativeRing A] [CommutativeRing B] (f : RingHom A B) : IsIdeal (kernel f) := by
  sorry

/-- Proposition 1.10 (i): If ideals are coprime, their product equals their intersection[cite: 6].
    Stated here for two ideals to match the available set_mul definition. -/
theorem prop_1_10_i (I J : Set R) (hI : IsIdeal I) (hJ : IsIdeal J)(h_coprime : AreCoprime I J) : ideal_mul I J = I ∩ J := by
  sorry

/-- Proposition 1.11 i): Prime avoidance lemma.
    Let P_1, ..., P_n be prime ideals and let a be an ideal contained in their union.
    Then a is contained in P_i for some i[cite: 6]. -/
theorem prop_1_11_i (P : Nat → Set R) (hP : ∀ i, ∃ hp : IsIdeal (P i), IsPrimeIdeal (P i) hp) (n : Nat) (I : Set R) (hI : IsIdeal I) (h_subset : ∀ x ∈ I, ∃ i < n, x ∈ P i) : ∃ i < n, I ⊆ P i := by
  sorry

/-- Proposition 1.15: The set of zero-divisors is the union of r(Ann(x)) for x ≠ 0[cite: 6]. -/
theorem prop_1_15 :{ y : R | IsZeroDivisor y } = { y : R | ∃ x : R, x ≠ (0 : R) ∧ y ∈ Radical (Annihilator x) } := by
  sorry

/-- Proposition 1.16: Let a, b be ideals in a ring R such that r(a), r(b) are coprime.
    Then a, b are coprime[cite: 6]. -/
theorem prop_1_16 (I J : Set R) (hI : IsIdeal I) (hJ : IsIdeal J)(h_rad_coprime : AreCoprime (Radical I) (Radical J)) : AreCoprime I J := by
  sorry
