import AtiyahAndMacdonald.Chapter5.Definitions
import AtiyahAndMacdonald.Module.Base
import AtiyahAndMacdonald.Ring.Base_Quotient


variable {R:Type} [CommutativeRing R]
--Prop 5.1 (i)-(iv)--
theorem integral_implies_fg_module (A : Subring R) (x : R) : IsIntegralElement A x → IsFinitelyGenerated A.carrier {y : R // y ∈ adjoin_element A x} := by
  intro hA
  obtain ⟨P, ⟨hm, hr⟩⟩ := hA
  let n := degree P
  have h_pow : ∀ (t : Nat), x^t ∈ adjoin_element A x := by sorry
  let gen_list : List {y : R // y ∈ adjoin_element A x} := (List.range n).map (fun t => ⟨x^t, h_pow t⟩)
  use { u | u ∈ gen_list }
  constructor
  simp
  ext m
  simp [Span,sInter,SubmodulesContaining]
  intro I hs hI
  sorry
  use gen_list
--Cor 5.2--
--Cor 5.3--
--Cor 5.4--
--Cor 5.5 --
--Proposition 5.6--

--Going up--
--Proposition 5.7--
--Cor 5.8--
--Cor 5.9--
--Theorem 5.10--
--Theorem 5.11--

--Going down--
--Prop 5.12--
--Prop 5.13--
--Lemma 5.14--
--Proposition 5.15--
--Theorem 5.16--
--Proposition 5.17--

--Valuation Theory--
