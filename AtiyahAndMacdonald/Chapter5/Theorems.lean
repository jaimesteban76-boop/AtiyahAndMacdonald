import AtiyahAndMacdonald.Chapter5.Definitions
import AtiyahAndMacdonald.Module.Base



variable {R:Type} [CommutativeRing R]

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
