import AtiyahAndMacdonald.Chapter5.Theorems

variable {A B: Type} [CommutativeRing A] [CommutativeRing B]

theorem f_int_hom_closed_mapping (f: RingHom A B) (hf: integral_hom f)(b:Set B )(hb: IsIdeal b ):  f_star f '' (PrimeIdealsContaining b) = PrimeIdealsContaining (ideal_contraction f b):= by
    ext p
    simp[PrimeIdealsContaining,f_star,ideal_contraction]
    constructor
    intro hP
    obtain ⟨q,⟨hqb,⟨_,hfq⟩⟩ ⟩:= hP
    intro x hx
    rw[← hfq]
    apply hqb hx
    intro hp

    sorry
