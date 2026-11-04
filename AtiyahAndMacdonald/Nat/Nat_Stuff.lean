import Mathlib.Data.Set.Basic
set_option linter.style.whitespace false
set_option linter.style.longLine false
set_option linter.style.multiGoal false
set_option linter.style.emptyLine false
set_option linter.flexible false
set_option linter.style.setOption false

theorem wop (A :Set (Nat))(hA: Nonempty A ): ∃ a∈ A, ∀ b:Nat,  b ∈ A → b≠a → a<b := by
  sorry
