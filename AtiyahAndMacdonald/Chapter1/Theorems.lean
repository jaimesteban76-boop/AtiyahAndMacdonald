import AtiyahAndMacdonald.Chapter1.Definitions

variable {R : Type} [CommutativeRing R]

/-- Proposition 1.2: Let R be a ring ≠ 0. Then the following are equivalent:
    (i) R is a field;
    (ii) the only ideals in R are {0} and R;
    (iii) every homomorphism of R into a non-zero ring B is injective. -/

theorem prop_1_2_i_iff_ii (h_nonzero : (1 : R) ≠ (0 : R)) : IsField R ↔ ∀ I : Set R, IsIdeal I → I = {(0 : R)} ∨ 1∈ I := by
  constructor
  intro hF I hI
  by_cases(1∈ I)
  (expose_names; exact Or.inr h)
  simp_all
  ext x
  change x∈ I ↔ x=0
  constructor
  intro hx
  by_contra h
  have : IsUnit x := by
    apply hF.2
    exact h
  obtain ⟨ a,ha ⟩:= this
  rw[mul_comm] at ha
  have ahh: 1∈ I := by
    rw[← ha]
    apply hI.3 a
    use a, x
    simp_all
    exact Set.mem_of_subset_of_mem (fun ⦃a_1⦄ a => a) rfl
  simp_all
  intro hx
  rw[hx]
  exact hI.zero_mem
  intro hI
  constructor
  exact Ne.symm (Ne.intro (id (Ne.symm h_nonzero)))
  intro x hx
  let P:= ideal_generated_by {x}
  have hP_ideal : IsIdeal P := ideal_gen_by_is_ideal {x}
  cases hI P hP_ideal with
  | inl h_zero =>

    have hx_in_P : x ∈ P := by
      intro I hI
      exact hI.right rfl
    rw [h_zero] at hx_in_P
    exact False.elim (hx hx_in_P)

  | inr h_one =>

    have h_mult_ideal : IsIdeal (multiples_of x) := multiples_of_is_ideal x
    have h_x_subset : {x} ⊆ multiples_of x := by
      intro x1 hx1
      rw[hx1]
      use 1,x
      constructor
      simp
      constructor
      exact Set.mem_of_subset_of_mem (fun ⦃a⦄ a_1 => a_1) rfl
      rw[mul_comm]
      exact CommutativeRing.mul_one x


    have h_1_in_mult : 1 ∈ multiples_of x :=
      h_one (multiples_of x) ⟨h_mult_ideal, h_x_subset⟩


    obtain ⟨r, ⟨x', ⟨hr, ⟨hx', heq⟩⟩⟩⟩ := h_1_in_mult
    obtain rfl := hx'


    use r
    rw [mul_comm]
    exact heq



theorem prop_1_2_i_iff_iii (h_nonzero : (1 : R) ≠ (0 : R)) : IsField R ↔ ∀ {B : Type} [CommutativeRing B], (1 : B) ≠ (0 : B) → ∀ (f : RingHom R B), Function.Injective f := by
  sorry

--Theorem 1.3 Every Ring has at least one maximal ideal--
theorem Thm1_3 : ¬ (MaximalIdealsof R= ∅):= by
  sorry

--Corollary 1.4 If a is an ideal of A then there is maximal ideal containing a--
theorem cor_1_4 (I :Set R)(hI: IsIdeal I ): ∃ M: Set R, IsMaximalIdeal M ∧ I ⊆ M := by
  sorry

--Corllary 1.5--
theorem non_unit_in_maximal_ideal (x:R) (hx : ¬(IsUnit x)): ∃ M: Set R, x∈ M ∧  IsMaximalIdeal M := by
    sorry
--Proposition 1.6 Characterization of a Local Ring--
/-- Proposition 1.6 i): Let A be a ring and m ≠ (1) an ideal of A such that every
    x ∈ A - m is a unit in A. Then A is a local ring and m its maximal ideal. -/
theorem prop_1_6_i (M : Set R) (hM : IsIdeal M) (hM_proper : ¬((1 : R) ∈ M))(h_units : ∀ x : R, x ∉ M → IsUnit x) : IsLocalRing R ∧ (MaximalIdealsof R={M}):= by
  sorry

/-- Proposition 1.6 ii): Let A be a ring and m a maximal ideal of A, such that every
    element of 1 + m (i.e., every 1 + x, where x ∈ m) is a unit in A. Then A is a local ring. -/
theorem prop_1_6_ii (M : Set R) (hM : IsIdeal M) (hM_max : IsMaximalIdeal M) (h_units : ∀ x ∈ M, IsUnit ((1 : R) + x)) : IsLocalRing R := by
  sorry
--Proposition 1.7 The nilradical is an ideal and A/R has no nilpotent elements--
theorem nilradical_is_ideal : IsIdeal (Nilradical R) := by
  sorry
theorem A_has_no_nilpotent_elements : Nilradical (QuotientRing (Nilradical R) (nilradical_is_ideal))=∅ := by
  sorry

/-- Proposition 1.8: Nilradical is the intersection of all prime ideals -/
theorem nilradical_eq_inter_prime : Nilradical R = sInter (PrimeIdealsof R) := by
    sorry
--Proposition 1.9--
theorem Prop_1_9 (x : R) :  x ∈ Nilradical R ↔ ∀ y : R, IsUnit (1 + -(x * y)) := by
  sorry


--Proposition 1.10 Product Morphism Properties--
/-- Proposition 1.10 i): If the ideals are pairwise coprime (a_i, a_j coprime for i ≠ j),
    then their product equals their intersection[cite: 5]. -/
theorem prop_1_10_i (P : ℕ → Set R) (n : ℕ) (hP : IsIdealFamily P n) : (∀ i < n, ∀ j < n, i ≠ j → AreCoprime (P i) (P j)) → ideal_prod P n = sInter {P j|j<n}:= by
  sorry
/-- Proposition 1.10 ii): φ is surjective ↔ a_i, a_j are coprime whenever i ≠ j. -/
theorem prop_1_10_ii (P : ℕ → Set R) (n : ℕ) (hP : IsIdealFamily P n) :Function.Surjective (phi_prod P n hP) ↔ ∀ i < n, ∀ j < n, i ≠ j → AreCoprime (P i) (P j) := by
  sorry

/-- Proposition 1.10 iii): φ is bijective ↔ a_i, a_j are coprime whenever i ≠ j
    and the intersection ⋂ a_i = (0). -/
theorem prop_1_10_iii (P : ℕ → Set R) (n : ℕ) (hP : IsIdealFamily P n) :
    Function.Bijective (phi_prod P n hP) ↔
    (∀ i < n, ∀ j < n, i ≠ j → AreCoprime (P i) (P j)) ∧
    sInter {P j|j<n} = {(0 : R)} := by
  sorry
--Proposition 1.11 i): Prime avoidance lemma. --
theorem prop_1_11_i (P : Nat → Set R) (n : Nat)(hP: IsPrimeFamily P n) (I : Set R) (hI : IsIdeal I) (h_subset : I⊆ sUnion {P i| i<n}) : ∃ i < n , I ⊆ P i := by
  sorry
--Part (ii)--
theorem prop_1_11_ii (P : Nat → Set R) (n: Nat)(hP : IsIdealFamily P n)  (I : Set R) (hI : IsPrimeIdeal I) (h_subset : sInter {P i| i<n}⊆ I ) : ∃ i < n, P i ⊆ I  := by
  sorry

/-- Proposition 1.14: The radical of an ideal a is the intersection of the prime ideals which contain a. -/
theorem prop_1_14 (I : Set R) (hI : IsIdeal I) : Radical I = sInter (PrimeIdealsContaining I) := by
  ext x
  rw [mem_radical_iff_quotient_nilradical I hI, nilradical_eq_inter_prime]
  constructor
  intro hx J hJ
  let J_bundled : IdealsContaining I := ⟨J, ⟨hJ.1.2, hJ.2⟩⟩
  exact mem_of_mem_phi I hI J_bundled x (hx (phi I hI J_bundled).1 (phi_prime I hI J_bundled hJ.1))
  intro hx P hP
  exact hx (quotient_comap I hI P) (comap_is_prime_containing I hI P hP)

/-- Proposition 1.15: The set of zero-divisors is the union of r(Ann(x)) for x ≠ 0. -/
theorem prop_1_15 :{ y : R | IsZeroDivisor y } = sUnion {P|∃ x≠0, Radical (Annihilator x) =P } := by
  sorry

/-- Proposition 1.16: Let a, b be ideals in a ring R such that r(a), r(b) are coprime.
    Then a, b are coprime]. -/
theorem prop_1_16 (I J : Set R) (hI : IsIdeal I) (hJ : IsIdeal J)(h_rad_coprime : AreCoprime (Radical I) (Radical J)) : AreCoprime I J := by
  sorry

--Proposition 1.17--
variable {A B:Type}[CommutativeRing A][CommutativeRing B]

theorem prop_1_17_ia (a: Set A)(ha: IsIdeal a)(f: RingHom A B): (a⊆ ideal_contraction  f (ideal_extension  f a )) := by
  sorry
theorem prop_1_17_ib (b: Set B)(hb: IsIdeal b)(f: RingHom A B): ideal_extension  f (ideal_contraction  f b ) ⊆ b:= by
  sorry
theorem prop_1_17_iib (b: Set B)(hb: IsIdeal b)(f: RingHom A B): (ideal_contraction f b = ideal_contraction f (ideal_extension f (ideal_contraction f b))):= by
  sorry
theorem prop_1_17_iia (a :Set A) (ha: IsIdeal a)(f: RingHom A B) : ideal_extension f (ideal_contraction f (ideal_extension f a))=ideal_extension f a:= by
  sorry
theorem characterization_of_contracted_ideals (f:RingHom A B): ContractedIdeals f = {a:Set A | IsIdeal a ∧ ideal_contraction f (ideal_extension f a)=a}:= by
  sorry
theorem characterization_of_extended_ideals (f:RingHom A B): ExtendedIdeals f= {b: Set B|IsIdeal b∧ ideal_extension f (ideal_contraction f b)=b}:= by
  sorry
