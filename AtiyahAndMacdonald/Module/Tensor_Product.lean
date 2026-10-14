import AtiyahAndMacdonald.Module.Mod_Hom

variable (A : Type) [CommutativeRing A]

/-- A mapping f: M × N → P is A-bilinear if it is A-linear in each variable. -/
structure BilinearMap (M N P : Type) [Module A M] [Module A N] [Module A P] where
  toFun : M × N → P
  map_add_left : ∀ (x x' : M) (y : N), toFun (x + x', y) = toFun (x, y) + toFun (x', y)
  map_smul_left : ∀ (a : A) (x : M) (y : N), toFun (a • x, y) = a • toFun (x, y)
  map_add_right : ∀ (x : M) (y y' : N), toFun (x, y + y') = toFun (x, y) + toFun (x, y')
  map_smul_right : ∀ (a : A) (x : M) (y : N), toFun (x, a • y) = a • toFun (x, y)

/-- Allows using the bilinear map as a normal function `f (x, y)`. -/
instance {M N P : Type} [Module A M] [Module A N] [Module A P] : CoeFun (BilinearMap A M N P) (fun _ => M × N → P) where
  coe f := f.toFun

/-- The universal property defining a Tensor Product (T, g).
    For any A-module P and bilinear mapping f: M × N → P, there exists a unique
    A-linear mapping f': T → P such that f = f' ∘ g.--/
def IsTensorProduct {M N T : Type} [Module A M] [Module A N] [Module A T] (g : BilinearMap A M N T) : Prop := ∀ (P : Type) [Module A P] (f : BilinearMap A M N P),
    ∃! (f' : ModHom A T P), ∀ (x : M) (y : N), f (x, y) = f' (g (x, y))



-- 2. Tensor Product of Algebras (Universal Property)
/-- The tensor product of two A-algebras B and C is an A-algebra T equipped with
    A-algebra homomorphisms iB : B → T and iC : C → T.
    It satisfies the universal property: for any A-algebra D and A-algebra homomorphisms
    u : B → D and v : C → D, there exists a unique A-algebra homomorphism w : T → D
    such that w(iB(b)) = u(b) and w(iC(c)) = v(c) for all b ∈ B, c ∈ C.--/
def IsAlgebraTensorProduct (A B C T : Type) [CommutativeRing A] [CommutativeRing B] [CommutativeRing C] [CommutativeRing T] (algB : AAlgebra A B) (algC : AAlgebra A C) (algT : AAlgebra A T)(iB : AlgHom A B T algB algT) (iC : AlgHom A C T algC algT) : Prop :=
  ∀ (D : Type) [CommutativeRing D] (algD : AAlgebra A D) (u : AlgHom A B D algB algD) (v : AlgHom A C D algC algD), ∃! (w : AlgHom A T D algT algD),  (∀ b : B, w.hom (iB.hom b) = u.hom b) ∧  (∀ c : C, w.hom (iC.hom c) = v.hom c)

-- 3. Induced Tensor Maps
/-- Given a homomorphism f : M → M', this represents the induced homomorphism
    f ⊗ id : M ⊗ N → M' ⊗ N.
    Because we defined the tensor product via a universal property, we assume
    the existence of a concrete mapping function for the functor. -/
def tensor_induced_map (A : Type) [CommutativeRing A]
    {M M' N : Type} [Module A M] [Module A M'] [Module A N]
    {T T' : Type} [Module A T] [Module A T']
    (f : ModHom A M M')
    (g : BilinearMap A M N T) (hT : IsTensorProduct A g)
    (g' : BilinearMap A M' N T') (hT' : IsTensorProduct A g') :
    ModHom A T T' :=
  -- The proof would use the universal property hT applied to the composition of f and g'
  sorry

-- 4. Flat Modules
/-- An A-module N is flat if tensoring with N preserves exact sequences.
    We state this locally: if M' → M → M'' is exact at M, then
    M'⊗N → M⊗N → M''⊗N is exact at M⊗N. -/
def IsFlatModule (A : Type) [CommutativeRing A] (N : Type) [Module A N] : Prop :=
  ∀ (M' M M'' : Type) [Module A M'] [Module A M] [Module A M'']
    (f : ModHom A M' M) (g : ModHom A M M'')
    (T' T T'' : Type) [Module A T'] [Module A T] [Module A T'']
    (bilin' : BilinearMap A M' N T') (hT' : IsTensorProduct A bilin')
    (bilin  : BilinearMap A M  N T)  (hT  : IsTensorProduct A bilin)
    (bilin'': BilinearMap A M'' N T'') (hT'': IsTensorProduct A bilin''),
    IsExactAt A f g →
    IsExactAt A (tensor_induced_map A f bilin' hT' bilin hT)
                (tensor_induced_map A g bilin hT bilin'' hT'')
