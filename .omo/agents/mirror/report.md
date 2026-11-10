# TU-Mirror Mode -- existing-translation byte-compare pilot

- date: 2026-11-10
- tool: tools/codegen_match/mirror.py
- loop: src body extract (read-only) -> registry shell TU -> era cl (.vc6-8447+era_shim) -> COFF -> diffasm -> ledger (via=mirror)
- src/ untouched; .omo/agents/mirror/ holds TUs + artifacts

## Distance distribution (10 functions)

| bucket | count |
|---|---|
| match | 1 |
| morphology_fixable | 3 |
| semantic | 5 |
| era_wall | 1 |

MISMATCH pathologies: cc_mismatch=1, codegen_shape=4, extern_reloc=2, width_mismatch=1

## Per-function ledger

| addr | name | verdict | bucket | pathology | first diff | src |
|---|---|---|---|---|---|---|
| 0x5b2950 | Math::Sub16 | MISMATCH | morphology_fixable | width_mismatch | +0 mov ax, word ptr [ecx] &#8596; +0 mov eax, dword ptr [ecx] | src\e4\Math_e4.cpp:361 |
| 0x5b2990 | Math::Abs16Cmp | MISMATCH | semantic | cc_mismatch | +0 mov eax, dword ptr [esp + 4] &#8596; +0 mov eax, dword ptr [esp + 8] | src\e4\Math_e4.cpp:373 |
| 0x4cadb0 | Math::ArcTan2_Table | MISMATCH | morphology_fixable | extern_reloc | +4 fadd dword ptr [0x7e2ac8] &#8596; +4 fadd qword ptr [0] | src\e4\Math_e4.cpp:329 |
| 0x4cade0 | Math::ArcTan | MISMATCH | morphology_fixable | extern_reloc | +0 fld qword ptr [esp + 4] &#8596; +0 fld dword ptr [0] | src\e4\Math_e4.cpp:340 |
| 0x4865b0 | CellClass::IsTerrainType | MISMATCH | semantic | codegen_shape | +0 mov eax, dword ptr [ecx + 0x38] &#8596; +0 push ecx | src\system\gap2_defs.cpp:4341 |
| 0x486650 | CellClass::InMapDataRange | MISMATCH | semantic | codegen_shape | +0 mov eax, dword ptr [ecx + 0x38] &#8596; +0 push ecx | src\system\gap2_defs.cpp:4351 |
| 0x486670 | CellClass::InBounds | MISMATCH | semantic | codegen_shape | +0 mov eax, dword ptr [ecx + 0x38] &#8596; +0 push ecx | src\system\gap2_defs.cpp:4361 |
| 0x4722c0 | CellClass::HasContent | MATCH | match |  |  | src\system\gap2_defs.cpp:1175 |
| 0x486900 | CellClass::IsActiveOrNext | MISMATCH | semantic | codegen_shape | +0 mov eax, dword ptr [ecx + 0x38] &#8596; +0 push ecx | src\system\gap2_defs.cpp:4435 |
| 0x439080 | TechnoClass::checkRange | COMPILE_FAIL | era_wall |  |  | src\object\gap2_defs.cpp:794 |

## Reading the distribution

* **chain proof**: CellClass::HasContent reaches a byte-exact MATCH through the full mirror chain (extract -> registry shell -> VC6 /O2 -> COFF -> normalized diff), so the pipeline can certify existing translations, not just reject them.
* **the era wall is gone as a *uniform* blocker**: only 1/10 functions dies on era compilation (TechnoClass::checkRange: VC6 C4234 has no `__thiscall` function-pointer casts -- the e4 translation introduced a construct the original compiler could not even emit; the original dispatch is a plain `call [edx+8]`).  The prior whole-file channel died 50/50 (21/21 TUs: 19 on `enum class` C2236, 1 on NSDMI C2252); the mirror TU carries zero C++11 tokens by construction.
* **shell quality**: 0 shell-gap failures.  Registry member arbitration (offset majority + width-majority, ties to the wider record) matched every binary access width it faced (TechnoClass chain trio vs 0x439080 dword loads).
* **dominant real distance = load width + evaluation order in the gap2 Cell family**: translations read `*&this->__pad_038` as the member's narrow type while the binary loads dword at 0x38 and compares in eax; the body shape (int local + byte-poke + return int) then forces push/pop + setne frames the original never emits (orig: `mov al,1; ret` bool tails).  Fixing these is a source-level retranslation task, not a shell task.
* **Math family**: `__pad_0` scalar spelling (e4-header universe) makes `*(unsigned short*)this->__pad_0` a value-deref -- the binary does a single `mov ax,[ecx]`.  Registry Math is empty so the fallback is universe-ambiguous; flagged as translation defect (the shipped e4 header makes the MAIN BUILD wrong the same way).
* **evaluation-order** (Abs16Cmp/ArcTan): the binary consumes args in a different order than the C++ source expression; VC6 will not reorder to match.  Morphology-level, fixable by statement reordering in src.
* **const-fold shape** (ArcTan2_Table/ArcTan): VC6 folds `1.0` into a `__real@` qword with DIR32; the binary uses `fadd dword[.rdata float]`.  Fixable via explicit float spelling of literals in the mirror (future lever) or source constant forms.

## Repro

```
python tools/codegen_match/mirror.py --pilot     # rerun batch
python tools/codegen_match/mirror.py --report     # re-render this file
```


## Shell gaps / notes

(none)
