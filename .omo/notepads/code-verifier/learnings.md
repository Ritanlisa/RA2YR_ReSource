# code-verifier — learnings (boulder active)

## Baseline (2026-06-23)
- Plan `.omo/plans/code-verifier.md` passed Oracle (GO). Boulder active.
- REGRESSION GATE: `python tools/efv_golden_test.py` -> exit 0 (3 faithful PASS, 3 stub FAIL, 4 negatives FAIL, FP=0 FN=0). Never weaken the harness to pass a change; reclassify only with documented design rationale.
- 2026-06-23: Mechanical dedup of `check_pointer_arithmetic.py` — removed old Pass 2 (pointer [] operator ban + stub detection) duplicating `check_translated_functions.py` and B.2's signals.json. Also removed dead helpers (`_is_func_header`, `extract_functions`, `_collect_pointer_vars`, `_is_real_code_line`, `_build_ptr_subscript_re`, 6 regex patterns). Tool now 335 lines (-353). Kept: C++ casts, ptr-arithmetic patterns, IDA artifacts, goto check. Golden tests still green.

## FINDING (实证, grep-confirmed): the `(member,?name)` sentinel is DEAD CODE on the active path
- verify_execution_flow.py::make_cpp_leaf (line 601) + make_ida_leaf (520) hold the `(member,?name)`/`(global,?...)` sentinels (lines 626,647). grep: NO external caller. Active verdict path uses efv_cpp_events.make_cpp_leaf / efv_ida_events.make_ida_leaf instead.
- Active leaf (efv_cpp_events line 276) returns None (NO event) for an unresolved member -> C++ block silently misses it -> if IDA has WRITE(member,N), block_match differs -> FAIL = false-positive. So unresolved-member FP is REAL on the active path, via SILENT-DROP not the sentinel.
- CORRECTED P1.2(a): fix = element-scoped exemption + WARN in efv_cpp_events (excuse that one member symmetrically), NOT "fix the dead sentinel".
- 2026-06-23: structural try-block now uses cfg_match_status (tri-state: MATCH/MISMATCH/INDETERMINATE); pre-call to cfg_match preserved for crash-isolation test monkeypatch compat. INDETERMINATE (timeout/over-cap) treated as "skip structural verdict, rely on STEP3(0)".

## DESIGN CONSEQUENCE of v2 (CALL/WRITE -> per-block SET)
- Golden negative probe (b) "swapped CALL order in block 20 must FAIL" relies on v1 ORDERED CALL. Under v2 (CALL as set), it flips to PASS = user-approved "block-internal reorder = designed-in FN". When doing v2: RECLASSIFY probe (b) negative->designed-FN, document. NOT gaming.
- probe (c) WRITE-DELETE stays FAIL (missing WRITE -> set differs); (a)/(a2) branch-polarity stay FAIL (structural); goldens stay PASS.

## User decisions (2026-06-23)
- APPROVED modifying protected verifier files (verify_execution_flow.py, efv_match.py, efv_cpp_events.py, efv_inline.py). Show diffs.
- Translation-test workflow: AFTER gate builds clean, I spawn a sub-agent to translate a few unit.cpp functions, I review output, USER supplies the sub-agent full thinking for my scrutiny.

## Execution order (sequential; P1 share verify_execution_flow.py/efv_match.py)
1 STEP3(0) necessary check (additive, low-risk) FIRST
2 v2 migration efv_match.py + reclassify probe (b)
3 unresolved-member element exemption in efv_cpp_events (corrected P1.2a)
4 untranslated-inline element rule (efv_inline + verify)
5 gate-control wiring (completed-scope, flow-equiv, timeout/unmodeled -> structural-only skip + STEP3(0) still runs, crash-isolation)
6 anti-gaming output + human verbose
7 validation (corpus + combined-evasion + skip-rate + taxonomy)
then P2 (offsets) -> P3 (B.5/B.4) -> translation test.

## DONE (2026-06-23) -- Step 1: STEP3(0) necessary-condition gate (additive, golden stays GREEN)
- WHAT: function-level, bijection-INDEPENDENT necessary condition. Every IDA-side
  external op (CALL target / WRITE offset) must appear >=1x on the C++ side
  (presence-only, NEVER count-based; READ/RET excluded). Missing => FAIL.
- FILES:
  - NEW tools/efv_necessary.py  (model-only dep): collect_external_ops(cfg) ->
    set of CALL/WRITE event strings over reachable blocks; missing_external_ops /
    step3_0_holds(ida,cpp,element_exempt). Self-test PASS.
  - tools/efv_inline.py  +public expand_cpp_cfg(cpp,ida,get_callee,normalize,
    canonicalize) reusing _expand_cfg (try_inline_match UNCHANGED). Returns the
    inline-EXPANDED C++ CFG so a translated inlined callee's ops count on C++ side.
  - tools/verify_execution_flow.py: _load_efv += efv_necessary ("necessary");
    module const STEP3_0_ELEMENT_EXEMPT=frozenset() (future element-exemption hook,
    EMPTY now); helper step3_0_check(); verify_single_function wiring.
  - NEW tools/test_step3_0.py (the new value test).
  - DID NOT touch: efv_match.py, efv_cpp_events.py, functions.json, any REVERSE
    pipeline file. efv_golden_test.py UNCHANGED (no weakened expectations).
- EXACT INTEGRATION POINT: verify_single_function, the verdict section AFTER cpp_cfg
  is built. step3_0_ok is computed via step3_0_check() BEFORE/INDEPENDENT of
  cfg_match; final verdict `passed = bool(step3_0_ok and matched)` (matched =
  existing cfg_match + try_inline_match fallback, untouched). info dict gains
  info["step3_0_ok"] and (on fail) info["step3_0_missing"]; return shape (passed,info)
  preserved -- callers only read reject/reason.
- UNION (zero-FP): C++ op-set = collect_external_ops(cpp_cfg) UNION
  collect_external_ops(expand_cpp_cfg(...)). Presence-only => a union can only ADD
  ops, never invent the IDA side's missing one.
- SOUNDNESS (why no new FP, proven): the bijection already forces per-block
  CALL/WRITE list EQUALITY across a bijection, so cfg_match PASS => every IDA
  CALL/WRITE appears on C++ => STEP3(0) HOLDS. STEP3(0) is strictly weaker; it can
  never flip a current PASS to FAIL. Confirmed empirically: goldens stay PASS.
- GOLDEN before/after (harness identical): both exit 0, ALL EXPECTATIONS MET --
  4 faithful PASS / 3 stub FAIL / 4 negative FAIL / FP=0 FN=0.
- NEW TEST tools/test_step3_0.py: 4/4 PASS. A1/A2 exercise step3_0_check with NO
  cfg_match call (bijection-independent BY CONSTRUCTION): faithful holds; dropping
  the resolvable CALL(0x5F5C60) => missing==[CALL(0x5F5C60)]. B1/B2 drive the REAL
  verify_single_function with efv_match.cfg_match MONKEYPATCHED to always-True
  (bijection forced to pass/skip): faithful B1 PASS; dropped-CALL B2 FAIL with
  step3_0_ok=False & witness present -> proves the FAIL is STEP3(0)'s, NOT the
  (neutralised) bijection's. Evidence: .omo/evidence/cv-step3-0.txt.
- expand_cpp_cfg RESIDUAL GAP (documented, not silently ignored): a callee the
  binary INLINED but that is NOT translated (no C++ source / lambda/goto/asm) is
  left as its CALL, so its inlined CALL/WRITE ops cannot appear on C++ -> STEP3(0)
  FAILs. This is the intended FAIL-by-contract (§D-STEP3: mirror the inline body or
  translate the callee), NOT a FP on the active path (no golden inlines an
  untranslated callee). A TRIVIAL (READ/RET-only) inlined region already cannot
  trip the gate (no CALL/WRITE to miss). The narrow element-level exemption for the
  remaining case is the NEXT-tasks element rule, wired through `element_exempt`.
- DECOUPLING scope: this task decouples STEP3(0) from the bijection SEARCH only.
  "Run even when CFG-BUILD throws" (crash-isolation) is explicitly a LATER task;
  expand_cpp_cfg is wrapped best-effort (try/except) so an expansion crash can only
  forgo extra inlined ops (over-FAIL at worst), never manufacture a false PASS.
- NOT changed (per task): CALL/WRITE stay v1 ORDERED in cfg_match; READ stays SET;
  STEP3(0) is purely additive (PASS-eligibility / forced-FAIL, no third verdict).

## DONE (2026-06-23) -- Step 2: block-matcher v1 -> v2 migration (efv_match.py)
- SCOPE: surgical. Touched ONLY tools/efv_match.py + tools/efv_golden_test.py.
  Did NOT touch verify_execution_flow.py / efv_necessary.py / efv_cpp_events.py /
  efv_inline.py / functions.json / any REVERSE pipeline file.
- WHAT (v2):
  - block_match: SEQUENCED (CALL/WRITE/RET) now compared as a per-block SET
    `set(ida.sequenced_events()) == set(cpp.sequenced_events())` -- intra-block
    ORDER **and** COUNT relaxed (presence only; SET not multiset; RET by presence).
    The READ check is REMOVED entirely (`set(ida.set_events()) != set(cpp.set_events())`
    deleted). READ is ADVISORY -- it can NEVER reject a pair / cause a FAIL.
  - block_signature: now `tuple(sorted(set(block.sequenced_events())))` -- the
    sorted-unique tuple of the SEQUENCED EVENT STRINGS (full CALL/WRITE/RET set).
    read_set component DROPPED (keeping it would OVER-prune the bijection search
    and miss true matches). Docstring invariant updated.
  - cfg_match / _find_bijection: UNCHANGED (bucket histogram + candidate domain
    still consume signature/match correctly via the invariant below).
- INVARIANT (restated, PROVABLY true for v2; self-test asserts match=>sig-eq):
    block_match(a,b)==True ==> block_signature(a)==block_signature(b).
  Proof: block_match <=> equal sequenced SETs; signature = sorted-unique of that
  set; equal sets => equal sorted-unique tuples. Under v2 it is in fact an
  EQUIVALENCE (signature IS the canonical match key) -> prune never drops a true
  match. block_match call per candidate kept as redundant-but-harmless confirm.
- TWO RECLASSIFIED EXPECTATIONS (the only allowed ones; documented designed-FN):
  1. efv_match self-test `b_CALL-order-differs`: expect False -> True (note +
     inline comment updated). Block-internal CALL reorder = same sequenced SET ->
     MATCHES. User-approved designed-in FN, backstopped by runtime shadow-compare.
  2. efv_golden_test probe (b) "swapped CALL(0x5F5C60)<->CALL(0x7C5F00) in block
     20": moved OUT of must-FAIL NEGATIVES into a NEW clearly-labelled
     "DESIGNED-FN (must PASS by design)" group (expect PASS). Added: docstring
     reclass, a `designed_fn` results category, a dedicated metrics line, a
     violation-loop clause (DESIGNED-FN that does NOT pass is flagged honestly,
     never mislabeled "faithful"), and a "v2 MUTATION-TAXONOMY NOTE" in output.
     NOT deleted, assertion NOT inverted.
- UNCHANGED (verified still correct): positives/controls PASS; stubs FAIL;
  negative (a)/(a2) branch-polarity FAIL (structural); negative (c) WRITE-DELETE
  FAIL (missing WRITE changes the SET -> caught by PRESENCE). v2 relaxes only
  intra-block ORDER/COUNT, never presence; cross-block order still bound by CFG.
- TEST RESULTS (before/after; both exit 0):
  - efv_match.py: BEFORE ALL PASS (case b expect=False, got=False). AFTER ALL
    PASS (case b expect=True, got=True); all 6 T18 CFG cases unchanged.
  - efv_golden_test.py: BEFORE ALL EXPECTATIONS MET (4 faithful / 3 stub / 4 neg).
    AFTER ALL EXPECTATIONS MET (4 faithful PASS / 3 stub FAIL / 3 neg FAIL /
    1 designed-FN PASS-by-design / FP=0 FN=0).
  - test_step3_0.py: 4/4 BEFORE and AFTER (set-based already; v2 unaffected).
- ENCODING NOTE: CJK/§ kept in DOCSTRINGS/COMMENTS (UTF-8 source parses fine) but
  removed from PRINTED strings (cp936 console mojibake would pollute evidence).
- EVIDENCE: .omo/evidence/cv-v2-migration.txt (full before/after for all three;
  0 mojibake). Also refreshed .omo/evidence/task-{16,18,20}-*.txt via the runs.

## DONE (2026-06-23) -- Step 3: unresolved-member element-scoped exemption (P1.3)
- DEFECT (active path, as predicted): efv_cpp_events.make_cpp_leaf SILENTLY DROPPED
  an unresolved this->Member event (_member_or_global_event -> None). C++ block then
  MISSED a READ/WRITE the IDA side has -> v2 set-comparison block sets differ ->
  bijection fails -> FALSE POSITIVE on faithful code touching a not-yet-mapped member.
  (Confirmed the dead verify_execution_flow sentinel is NOT it -- active leaf is the
  silent drop, exactly the corrected-P1.2a notepad finding above.)
- KEY NARROWING (实证): only unresolved member WRITE causes FPs. READ is advisory
  everywhere (block_match ignores it, signature drops it, STEP3(0) excludes it), so a
  dropped unresolved member READ is harmless for the verdict. We still WARN+TODO for
  READ (P2 needs it) but the verdict-critical exemption is WRITE-only.
- MECHANISM (element-scoped wildcard, symmetric, NO whole-function skip):
  - efv_model.py (+additive grammar): MEMBER_WILDCARD="?", read_member_unresolved()
    -> 'READ(member,?)', write_member_unresolved() -> 'WRITE(member,?)',
    is_member_wildcard(). Single-source grammar (never hand-spell).
  - efv_cpp_events.py: the `this->Member` value-access path (SYNTACTICALLY CERTAIN
    member) that the Resolver MISSES now emits the wildcard instead of dropping, +
    _record_unresolved_member() -> stderr WARN (Class::member + READ/WRITE) + append
    .omo/evidence/offset-todo.txt (dedup per-process by (class,member,verb) AND
    against existing file lines; best-effort I/O; ASCII-only for cp936 safety;
    absolute repo-anchored path -- CWD trap). BARE-identifier path UNCHANGED: a bare
    miss is genuinely ambiguous (type/keyword/callee per the docstring), so treating
    it as a member would be UNSOUND (over-WARN + bogus TODO). Scoping the wildcard to
    `this->` is the principled, sound boundary. RESIDUAL (documented): a faithful
    member accessed ONLY in bare form while unresolved would still under-emit -- but
    that is the existing "bare unknown = no event" semantics, and P2 makes all offsets
    resolvable, eliminating it.
  - efv_match.py: block_match is wildcard-aware -- when a 'WRITE(member,?)' is present
    in the PAIR, the member-WRITE DIMENSION is compared identity-free
    (_member_write_blind: every member WRITE, resolved or '?', collapses to one
    presence token 'WRITE(member,#)'); CALL targets / global WRITEs / RET STILL gate
    by EXACT PRESENCE. NO wildcard in the pair -> verbatim v2 set equality (the FAST
    path = strict NO-OP for goldens, and EXACT so a wrong member-WRITE offset is still
    caught). block_signature collapses member-WRITE offsets to 'WRITE(member,#)'
    ALWAYS, so the prune invariant block_match(a,b)=>sig(a)==sig(b) holds (exact on
    fast path; an EQUIVALENCE -- sig == _member_write_blind -- on the wildcard path).
    Collapsing only COARSENS the prune (merges buckets block_match still distinguishes
    exactly) -> never drops a true match, never changes a golden verdict.
  - efv_necessary.py: count_member_write_wildcards(cfg) + apply_member_wildcard_
    exemption(missing,n_wild): each 'WRITE(member,?)' OCCURRENCE excuses EXACTLY ONE
    otherwise-missing IDA this-relative member WRITE (count-bounded; CALL / global
    WRITE NEVER excused). missing_external_ops routed through them.
  - verify_execution_flow.py::step3_0_check: applies the count-based exemption after
    the static element_exempt subtraction; n_wild counted over the RAW cpp_cfg (the
    function's own unresolved members; an inlined-callee wildcard would only
    UNDER-exempt here = the safe over-FAIL direction).
- ZERO-FP + NO-EVASION (how guaranteed):
  * Faithful unresolved member: bijection blinds the member-WRITE dimension (PASS)
    AND STEP3(0) count-excuses the 1 missing IDA member WRITE (HOLDS) -> verdict
    `passed = step3_0_ok AND matched` = True. NO false-positive.
  * Dropped resolvable CALL: a member wildcard never touches CALL (resolved by
    ADDRESS, §D-STEP4.4) -> STEP3(0) reports it missing AND block_match's exact CALL
    presence fails -> FAIL. (Plugs the "comment out CALL + write an unmapped member ->
    force skip" evasion the plan calls out.)
  * Dropped resolvable member WRITE BEYOND the wildcard count: 1 wildcard excuses
    only 1 missing member WRITE -> the extra one stays in STEP3(0)'s witness -> FAIL.
    STEP3(0)'s COUNT-based exemption backstops the bijection's presence-blind branch
    (this is exactly the "STEP3(0) runs independent of the bijection" design value).
  * A WRONG resolved member-WRITE offset (no wildcard) stays on the EXACT fast path
    -> block_match rejects + STEP3(0) reports it -> FAIL (signature collapse is a
    prune only; it never blurs resolved offsets in the verdict).
- FILES CHANGED & WHY: efv_model (grammar), efv_cpp_events (the leaf -- the defect
  site), efv_match (bijection must not FP on the wildcard yet stay exact otherwise),
  efv_necessary (count-based element exemption), verify_execution_flow::step3_0_check
  (wire the exemption into the verdict path). User pre-approved touching these
  (2026-06-23 decision). DID NOT touch the DEAD verify_execution_flow sentinel
  (`(member,?name)`), functions.json, or any REVERSE pipeline file. STEP3(0)(22abf2c)
  + v2(330365d) semantics UNCHANGED (both additive-around, not reverted).
- TEST: NEW tools/test_unresolved_member.py drives the REAL make_cpp_leaf on a
  genuinely-unresolved BuildingClass member and the REAL matcher + vef.step3_0_check.
  11/11 PASS: precondition (Resolver miss), leaf emits WRITE/READ(member,?) (not
  dropped), WARN + offset-TODO recorded, (a) no-FP PASS, (a) real step3_0_check holds,
  (c1) dropped CALL -> FAIL (missing CALL), (c2) 1 wildcard cannot shield 2 missing
  member WRITEs -> FAIL, (d1) resolved twin -> PASS, (d2) wrong offset -> FAIL.
- REGRESSION (BEFORE == AFTER, all GREEN; goldens have NO unresolved members so P1.3
  is a NO-OP for them): efv_golden_test ALL EXPECTATIONS MET (4 faithful PASS / 3 stub
  FAIL / 3 neg FAIL / 1 designed-FN PASS / FP=0 FN=0); test_step3_0 4/4; efv_match ALL
  PASS; efv_necessary ALL PASS. py_compile clean on all 6 changed files.
- EVIDENCE: .omo/evidence/cv-unresolved-member.txt (before/after + new test full
  output); .omo/evidence/offset-todo.txt (the P2 backlog log, the test's entries).
2026-06-23: Added §D-STEP4.6 completed-scope gating to --auto in verify_execution_flow.py: completed!=true funcs print 'SKIP (completed != true): <name>' and are skipped (not verified, not FAIL, no exit-code effect). +6 lines; py_compile=0, golden ALL EXPECTATIONS MET FP=0 FN=0, step3_0 4/4, unresolved 11/11, efv_match/efv_necessary ALL PASS, --auto runs clean.
2026-06-23: Added D-STEP4 crash-path isolation to verify_single_function (tools/verify_execution_flow.py): wrapped step3_0_check and the structural pipeline (cfg_match + inline fallback) in try/except. A per-fn exception now NEVER crashes --auto and NEVER silently PASSes -- step3_0 crash -> step3_0_ok=True (loud WARN, info[step3_0_error]); structural crash -> structural_crashed=True so structural_ok=True, verdict falls back to STEP3(0) (loud WARN, info[structural_error]); final passed=step3_0_ok and (matched or structural_crashed). MATCH/MISMATCH verdict unchanged for non-crash paths. New tools/test_crash_isolation.py 9/9. py_compile=0, golden ALL EXPECTATIONS MET FP=0 FN=0, step3_0 4/4, unresolved 11/11, efv_match ALL PASS.
- 2026-06-23: efv_match.py — exposed bijection abandonment (over-cap/step-budget) as tri-state cfg_match_status (MATCH/MISMATCH/INDETERMINATE) via optional status dict on _find_bijection; cfg_match delegates, bool/return-type unchanged. Forced-INDETERMINATE self-test by temporarily setting _MATCH_STEP_BUDGET=1 (needs global decl before first read in fn, else UnboundLocalError). Goldens/FP=FN=0 unaffected.
- 2026-06-23: P3 B.5 wired — `check_pointer_arithmetic.py` added as second COMMAND to `check_code_quality` target in root CMakeLists.txt (commit aa4bc93), scanning `src/` and `app/` on every gamemd build. B.4 confirmed: `audit_names` target is NOT a dependency of `gamemd` → sync tool, not a gate.
