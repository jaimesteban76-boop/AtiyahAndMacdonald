import AtiyahAndMacdonald.Chapter5.Definitions
import AtiyahAndMacdonald.Module.Base
import AtiyahAndMacdonald.Chapter1.Theorems


variable {A B:Type} [CommutativeRing A][CommutativeRing B]
--Prop 5.1 (i)-(iv)--
--Cor 5.2--
--Cor 5.3--
--Cor 5.4--
--Cor 5.5 --
--Proposition 5.6--

theorem int_ring_over_quotientring_int_over (f:Subring A B) (b:Set B)(hb:IsIdeal b)(hi:IsIntegralRingExtension f ): IsIntegralRingExtension (Commutative_Diagrams f b hb):= by
  intro y
  sorry
--Going up--
--Proposition 5.7--
theorem field_iff_field (f:Subring A B) (hi:IsIntegralRingExtension f ) (hA:IsIntegralDomain A)(hB:IsIntegralDomain B): IsField A ↔ IsField B := by
  sorry
--Cor 5.8--
theorem max_id_iff_max (f:Subring A B)(hi:IsIntegralRingExtension f ) (p: Set B) (hp: IsPrimeIdeal p): IsMaximalIdeal p ↔ IsMaximalIdeal (ideal_contraction f.1 p) := by
  sorry
--Cor 5.9--
theorem same_contraction_same_id (f:Subring A B)(hi:IsIntegralRingExtension f ) (p: Set B) (hp: IsPrimeIdeal p)(p':Set B)(hp': IsPrimeIdeal p')(hpp': ideal_contraction f.1 p = ideal_contraction f.1 p'): p=p' := by
  sorry
--Theorem 5.10--
theorem chain_continuation (f:Subring A B) (hi:IsIntegralRingExtension f ) (p: Set A)(hp: IsPrimeIdeal p): ∃ q∈ Spectrum B, ideal_contraction f.1 q = p := by
  sorry
--Theorem 5.11--

--Going down--
--Prop 5.12--
--Prop 5.13--
--Lemma 5.14--
--Proposition 5.15--
--Theorem 5.16--
--Proposition 5.17--

--Valuation Theory--
