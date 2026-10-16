# _absorbed/convergence/ — X47 one-shot convergence absorption

Closes the one-shot gap classified by `.omo/evidence/optimization/x46/oneshot_audit.md`
(the 13 tree-editing fixers that lived only in gitignored evidence dirs + the
"lost" X44 Stage-1 applier + the orphaned generators).

- `ORDER.json` — the machine-readable canonical stage order (23 entries).
- `convergence_driver.py` (at `tools/csp_export/`) — walks ORDER.json;
  `--verify-current` is the acceptance test (every `replay: verified` stage
  must measure 0 pending edits on the converged tree).
- `_ledgers/` — dry/apply ledger outputs emitted by the absorbed X44 applier
  and the driver's verify runs.

## Acceptance run (2026-10-16, HEAD 95f74626 = tag x47-pre)

```
23 stages | PASS-0PENDING 16 | MEASURED-UNVERIFIED 4 | INPUT-MISSING 0 | FAIL 0
```

16 stages measure 0 pending on the current tree — the absorbed wave lost
nothing and the tree is at the convergence fixpoint for every state-driven
fixer. The 4 honest exceptions (all measured, reasons recorded in ORDER.json,
none fakeable without a behavior rewrite):

| stage | measured pending | why not 0 |
|---|---|---|
| carrier_regen (gen_x30) | 202 retypes / 91 files | regenerator over live `type_map.json` (evolved post-X30) |
| callshape (gen_x31) | 56 sites / 18 files | log-driven over the live ~19.9K error pool |
| miniscope (gen_x37) | 180 decls / 18 files | re-derives from tree shape; post-X37 reshaping (X44 merge inits, X45 edits) |
| qmark_supply (x34_l4_qmark) | 2 sites + 1 extern | re-plans exactly the sites its own hotfixes reverted (self-canceling pair in wave order; registry predates hotfix rulings) |

## Absorption table (G1–G14 of the audit gap list)

| # | script (absorbed copy) | round | fidelity | inputs consumed | committed effect (ledger) | idempotence |
|---|---|---|---|---|---|---|
| G1 | x33_l1_heads.py | X33 | byte-identical | edits in-script | −521 raw / 12 files | expected-old-text asserts; 2nd run 0 writes |
| G2 | x33_l2_twinguards.py | X33 | byte-identical | edits in-script | twin-guard family 86/86 | block/include-present checks |
| G3 | x33_l3_supply.py | X33 | byte-identical | tracked fix_c2027_include_supply.py (L3c leg) | −125 raw / 66 files | needle-present checks |
| G4 | x34_l4_qmark.py | X34 | byte-identical | x34/l4_registry.json (evidence data) + tracked gen_e4_globals_decls.py | 410 sites + 7 blob externs | pattern disappears after rewrite |
| G5 | x34_l5_globals.py | X34 | byte-identical | atom table in-script | 41 decl/def retypes | already-array skips |
| G6 | x34_l4_hotfix_820320.py | X34 | byte-identical | edits in-script | 820320 collision repair | fragment-present |
| G7 | x34_l4_hotfix2_clobber.py | X34 | byte-identical | edits in-script | 3-line clobber repair | bad/good form check |
| G8 | x35_l7_memberkind.py | X35 | byte-identical | anchors/member_types.json (tracked) | 686 retypes / 239 files | current≠target detector |
| G9 | x36_a8b230.py | X36 | byte-identical | edits in-script | AbstractClass[435] elem array, 248 sites | fail-loud FATALs + applied-skips |
| G10 | x38_l2_vtinst.py | X38 | byte-identical | tree scan | 47 qmark vt-install elisions | marker shape can't re-match |
| G11 | x39_l1_gstr.py | X39 | 1-line path normalization (EV) | x39/gstr_verify_all.json (evidence data) | 2,825 decl rewrites (486 atoms) | skip-already-equal |
| G12 | x39_l1b_astr.py | X39 | 1-line path normalization (EV) | x39/astr_decls.json + astr_verify.json | 346 arg1 retypes (822 atoms) | skip-already-equal |
| G13 | x43_fix_casts.py + x43_fix_casts2.py | X43 | byte-identical | x43/x43_cast_pool2.json + x42/x42_census2.py (evidence data) | 58 cast-spelling retypes | cast-count-preserving guard |
| G14 | x44_stage1_merge_apply.py | X44 | **RECOVERED ORIGINAL** (audit believed lost; found intact at `.omo/x44_stage1_merge.py`) with 2-line path normalization (ROOT, OUT_DIR) | tree scan (e4 + _generated + _gap2) | 6,436 merge ops / 396 files; ops ledger = machine-readable truth | merged form not re-matched |

De-orphanned tracked generators (referenced by ORDER.json, single source of
truth stays at `tools/csp_export/`): gen_x30_merge.py, gen_x31_callshape.py,
gen_x37_miniscope.py, x44b_format.py, x44b_merge_verify.py (+ cast_budget.py
as the per-wave budget gate).

## Path-normalization disclosure (the ONLY deltas from the originals)

1. `x39_l1_gstr.py` / `x39_l1b_astr.py`: `EV = Path(__file__).resolve().parent`
   → absolute evidence dir (the original derived its evidence dir from
   `__file__`; the absorbed copy no longer lives in that dir). ROOT walk left
   intact (self-heals to the repo root from the new location).
2. `x44_stage1_merge_apply.py`: `ROOT` derived from `__file__` parents (the
   original lived in `.omo/`) → hardcoded repo root; `OUT_DIR` →
   `_ledgers/` beside the script so dry/apply re-runs never clobber the
   historical `.omo/evidence/optimization/x44/` ledger artifacts.

All other 12 files are byte-identical to their evidence-dir originals
(MD5-verified at absorption time).

## Fresh-clone honesty

Several stages consume gitignored evidence data (recorded per stage in
ORDER.json `inputs`, with `inputs_note`). On a working machine these exist;
on a fresh clone the X-round evidence archive must be restored before those
stages can run — the driver reports such stages INPUT-MISSING (accounted,
never a silent pass). The one-shot replay of the *whole wave* additionally
requires the post-X29 pipeline state as its starting point; from a git
checkout, history IS the artifact (audit §0).
