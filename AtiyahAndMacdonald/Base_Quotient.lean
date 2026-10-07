import AtiyahAndMacdonald.Base
import AtiyahAndMacdonald.Ring_Hom

variable {R:Type} [CommutativeRing R]

-- Defines the relation a ~ b iff a - b ∈ I
def ideal_equiv (I : Set R) : R → R → Prop :=
  fun a b => a + -b ∈ I

-- Bundles the relation with proofs that it is an equivalence relation
def ideal_setoid (I : Set R) (hI : IsIdeal I) : Setoid R where
  r := ideal_equiv I
  iseqv := {
    refl := by
      intro x
      rw[ideal_equiv]
      rw[add_comm]
      rw[ add_left_neg]
      exact hI.zero_mem
    symm := by
      intro x y
      simp [ideal_equiv]
      intro hxy
      have : -(1:R)*(x+ -y)∈ I := by
        apply hI.3 (-(1:R))
        apply h_in_set_mul
        exact ⟨rfl, hxy⟩
      rw[left_distrib,neg_one_element, neg_one_element,neg_neg_positive] at this
      rw [add_comm] at this
      exact this
    trans := by
      intro x y z hxy hyz
      simp [ideal_equiv] at hxy hyz ⊢
      have h1 : -(1:R)*(y+ -z)∈ I := by
        apply hI.3 (-(1:R))
        apply h_in_set_mul
        exact ⟨rfl, hyz⟩
      rw [neg_one_element] at h1
      have h2 : (x + -y) + -(-(y + -z)) ∈ I := hI.2 (x + -y) (-(y + -z)) hxy h1
      rw [neg_neg_positive] at h2
      have heq : (x + -y) + (y + -z) = x + -z := by
        calc
          (x + -y) + (y + -z) = x + (-y + (y + -z)) := add_assoc x (-y) (y + -z)
          _ = x + ((-y + y) + -z) := by rw [(add_assoc (-y) y (-z)).symm]
          _ = x + (0 + -z) := by rw [add_left_neg y]
          _ = x + (-z + 0) := by rw [add_comm 0 (-z)]
          _ = x + -z := by rw [add_zero (-z)]
      rw [heq] at h2
      exact h2
  }

-- Constructs the quotient type using the setoid
def QuotientRing (I : Set R) (hI : IsIdeal I) : Type :=
  Quotient (ideal_setoid I hI)
-- Define addition on the quotient ring
def quotient_add {I : Set R} (hI : IsIdeal I) (a b : QuotientRing I hI) : QuotientRing I hI :=
  Quotient.liftOn₂ a b
    (fun x y => Quotient.mk (ideal_setoid I hI) (x + y))
    (by
      intro a₁ b₁ a₂ b₂ a_1 a_2
      -- Proof that addition is well-defined independent of the chosen representatives
      sorry
    )

-- Define multiplication on the quotient ring
def quotient_mul {I : Set R} (hI : IsIdeal I) (a b : QuotientRing I hI) : QuotientRing I hI :=
  Quotient.liftOn₂ a b
    (fun x y => Quotient.mk (ideal_setoid I hI) (x * y))
    (by
      -- Proof that multiplication is well-defined
      sorry
    )

-- Finally, bundle this into a CommutativeRing instance
instance {I : Set R} (hI : IsIdeal I) : CommutativeRing (QuotientRing I hI) where
  add := quotient_add hI
  mul := quotient_mul hI
  zero := Quotient.mk (ideal_setoid I hI) 0
  one := Quotient.mk (ideal_setoid I hI) 1
  neg := fun a => Quotient.liftOn a (fun x => Quotient.mk (ideal_setoid I hI) (-x)) (by sorry)

  -- The ring axioms are proven by lifting the properties from the base ring R
  add_assoc := by sorry
  add_zero := by sorry
  add_left_neg := by sorry
  add_comm := by sorry
  mul_assoc := by sorry
  mul_one := by sorry
  mul_comm := by sorry
  left_distrib := by sorry


def IdealsOfQuotient (I : Set R) (hI : IsIdeal I) : Set (Set (QuotientRing I hI)) :=
  { J' : Set (QuotientRing I hI) | IsIdeal J' }

/-- The canonical projection map π : R → R/I, bundled as a RingHom -/
def quotient_pi_hom (I : Set R) (hI : IsIdeal I) : RingHom R (QuotientRing I hI) where
  toFun := fun x => Quotient.mk (ideal_setoid I hI) x
  map_add := by intro x y; rfl
  map_mul := by intro x y; rfl
  map_one := by rfl

/-- Prove the canonical morphism is surjective.
    This allows you to say: if y ∈ A/I, there exists x ∈ A such that f(x) = y. -/
theorem quotient_pi_surjective (I : Set R) (hI : IsIdeal I) :
    Function.Surjective (quotient_pi_hom I hI) := by
  intro y
  rcases Quotient.exists_rep y with ⟨x, hx⟩
  use x
  exact hx

theorem ideal_is_kernel (I : Set R) (hI : IsIdeal I) : kernel (quotient_pi_hom I hI) = I := by
  ext x
  simp only [kernel, quotient_pi_hom]
  change Quotient.mk (ideal_setoid I hI) x = Quotient.mk (ideal_setoid I hI) 0 ↔ x ∈ I
  simp [Quotient.eq,ideal_setoid,ideal_equiv]
  rw[← neg_one_element 0, mul_comm, zero_mul,add_zero x]

/-- The forward mapping φ that takes an ideal J ⊇ I to its extended ideal J/I in the quotient ring.
    Defined natively using ideal_extension. -/
def phi (I : Set R) (hI : IsIdeal I) (J : IdealsContaining I) : IdealsOfQuotient I hI :=
  ⟨ideal_extension (quotient_pi_hom I hI) J.1, by apply ideal_gen_by_is_ideal⟩


/-- The pullback (contraction) Q^c of a set Q ⊆ R/I under the canonical map π : R → R/I.
    Defined natively using the general ideal_contraction. -/
def quotient_comap (I : Set R) (hI : IsIdeal I) (Q : Set (QuotientRing I hI)) : Set R :=
  ideal_contraction (quotient_pi_hom I hI) Q


/-- Proposition 1.1: The explicitly defined map phi is an order-preserving bijection[cite: 11]. -/
theorem prop_1_1_correspondence (I : Set R) (hI : IsIdeal I) : Function.Bijective (phi I hI) ∧  ∀ J1 J2 : IdealsContaining I, J1.1 ⊆ J2.1 ↔ (phi I hI J1).1 ⊆ (phi I hI J2).1 := by
  sorry

/-- Prime ideal correspondence: An ideal J containing I is prime in R if and only if its image phi(J) in R/I is prime--/
theorem prop_1_1_prime_correspondence (I : Set R) (hI : IsIdeal I) : ∀ J : IdealsContaining I, IsPrimeIdeal J.1 ↔ IsPrimeIdeal (phi I hI J).1 := by
  sorry

-- Forward direction helpers (phi)
lemma mem_of_mem_phi (I : Set R) (hI : IsIdeal I) (J : IdealsContaining I) (x : R) (hx : quotient_pi_hom I hI x ∈ (phi I hI J).1) : x ∈ J.1 := by
  sorry

lemma phi_prime (I : Set R) (hI : IsIdeal I) (J : IdealsContaining I) (h_prime : IsPrimeIdeal J.1) : IsPrimeIdeal (phi I hI J).1 := by
  sorry

-- Reverse direction helpers (comap)
lemma comap_is_prime_containing (I : Set R) (hI : IsIdeal I) (P : Set (QuotientRing I hI)) (hP : IsPrimeIdeal P) : IsPrimeIdeal (quotient_comap I hI P) ∧ I ⊆ quotient_comap I hI P := by
  constructor
  apply pideal_contraction_is_pideal
  exact hP
  intro x hx
  simp[quotient_comap,ideal_contraction]
  simp[← ideal_is_kernel I hI,kernel] at hx
  rw[hx]
  exact (hP.2.1)
