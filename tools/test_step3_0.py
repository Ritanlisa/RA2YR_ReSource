#!/usr/bin/env python3
"""
test_step3_0.py -- Proves STEP3(0)'s independent value for the execution-flow
verifier (.omo/plans/code-verifier.md  §D-STEP3(0)).

CLAIM UNDER TEST
----------------
STEP3(0) -- the function-level, BIJECTION-INDEPENDENT necessary condition -- FAILs
a faithful golden from which ONE resolvable CALL has been deleted on the C++ side,
*** even when the structural bijection is forced to be skipped / short-circuited
(simulated by forcing cfg_match to return True) ***. This is the whole point of
STEP3(0): a bijection timeout / abandonment / optimistic-skip must NOT be able to
hide "an external operation was deleted wholesale".

This complements (does NOT replace, does NOT weaken) tools/efv_golden_test.py:
that harness proves the bijection itself rejects WRITE-delete / CALL-order / arm
swaps; THIS file proves STEP3(0) catches a deleted CALL with the bijection
neutralised.

PROBES
------
  A  primitive, bijection-independent BY CONSTRUCTION (no cfg_match call at all):
       A1  faithful G1  ->  step3_0_check holds (no missing external op)
       A2  G1 with one resolvable CALL target deleted from the C++ side ->
           step3_0_check FAILs, witness == the deleted CALL
  B  integrated verdict through the REAL verify_single_function, with cfg_match
     MONKEYPATCHED to always return True (the bijection cannot reject anything):
       B1  faithful G1            -> PASS  (step3_0 holds AND forced-match True)
       B2  G1 with the CALL gone  -> FAIL  (only STEP3(0) can fail it now; the
                                      forced-True bijection proves the FAIL is
                                      STEP3(0)'s and not the structural check's)

Exit 0 iff every probe meets its expectation; non-zero otherwise.

Usage:
    python tools/test_step3_0.py
    python tools/test_step3_0.py -v
"""

import os
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
if _HERE not in sys.path:
    sys.path.insert(0, _HERE)

import verify_execution_flow as vef

G1_ADDR = 0x44E7B0          # BuildingClass::GetPowerOutput (faithful golden)
G1_NAME = "BuildingClass::GetPowerOutput"


def _drop_direct_call_target(cfg, efv):
    """Delete EVERY occurrence of the FIRST direct `CALL(0xADDR)` target found in
    `cfg` (a resolvable CALL), IN PLACE. Returns the deleted target event string,
    or None if the CFG has no direct CALL. Removing ALL occurrences guarantees the
    target is truly ABSENT (presence-only coverage), so STEP3(0) must report it
    missing."""
    event_verb = efv["model"].event_verb
    VERB_CALL = efv["model"].VERB_CALL
    target = None
    for bid in cfg.traverse(order="dfs"):
        b = cfg.get_block(bid)
        for ev in b.ordered_events:
            if event_verb(ev) == VERB_CALL and ev.startswith("CALL(0x"):
                target = ev
                break
        if target is not None:
            break
    if target is None:
        return None
    for b in cfg.blocks.values():
        b.ordered_events = [e for e in b.ordered_events if e != target]
    return target


def run(verbose=False):
    results = []   # (label, ok, detail)

    def record(label, ok, detail=""):
        results.append((label, bool(ok), detail))

    M = vef.load_all_maps()
    efv = vef._load_efv()
    signals = efv["cpp_events"].get_signals()

    # ---- load G1 IDA pseudocode + faithful C++ source ----
    ida_text, _cached = vef.load_ida_cache(G1_ADDR)
    if not ida_text or not ida_text.strip():
        record("harness: G1 IDA cache present", False, "no IDA cache for 0x%X" % G1_ADDR)
        return _emit(results, verbose)

    body = vef.find_cpp_function(G1_NAME) or vef.find_cpp_function_by_addr(G1_ADDR)
    if not body:
        record("harness: G1 C++ source located", False, "C++ source not found")
        return _emit(results, verbose)
    class_name = body.get("class_name") or G1_NAME.split("::")[0]
    cpp_text = "".join(body["lines"])

    # ---- build CFGs through the verifier's own pipeline ----
    this_type = vef.detect_this_type(ida_text)
    ida_cfg = vef._build_ida_cfg_events(efv, ida_text, this_type, M)

    def build_faithful_cpp():
        return vef._build_cpp_cfg_events(efv, cpp_text, class_name, M, signals)

    # ====================================================================
    # PROBE A -- STEP3(0) primitive (bijection-INDEPENDENT by construction)
    # ====================================================================
    cpp_faithful = build_faithful_cpp()
    ok_a1, missing_a1 = vef.step3_0_check(efv, ida_cfg, cpp_faithful, M, signals)
    record("A1 faithful G1: STEP3(0) holds (no missing external op)",
           ok_a1 and not missing_a1, "missing=%r" % (missing_a1,))

    cpp_dropped = build_faithful_cpp()
    dropped = _drop_direct_call_target(cpp_dropped, efv)
    if dropped is None:
        record("A2 setup: a resolvable direct CALL exists in faithful G1", False,
               "no CALL(0x..) found to delete")
        return _emit(results, verbose)
    ok_a2, missing_a2 = vef.step3_0_check(efv, ida_cfg, cpp_dropped, M, signals)
    record("A2 dropped CALL %s: STEP3(0) FAILs with that exact witness" % dropped,
           (not ok_a2) and (dropped in missing_a2),
           "missing=%r (cfg_match NOT consulted on this path)" % (missing_a2,))

    # ====================================================================
    # PROBE B -- integrated verify_single_function verdict with the bijection
    #            FORCED to pass/skip (cfg_match -> always True). Only STEP3(0)
    #            can fail the dropped-CALL variant in this world.
    # ====================================================================
    import efv_match
    orig_cfg_match = efv_match.cfg_match
    orig_build = vef._build_cpp_cfg_events
    disp = M.addr_to_name.get(G1_ADDR) or G1_NAME

    # B1: faithful + forced-True bijection -> PASS.
    try:
        efv_match.cfg_match = lambda *a, **k: True   # bijection cannot reject
        passed_b1, info_b1 = vef.verify_single_function(
            G1_ADDR, G1_NAME, disp, M, ida_text, verbose=verbose, signals=signals)
    finally:
        efv_match.cfg_match = orig_cfg_match
    record("B1 faithful G1 + cfg_match FORCED True -> PASS (STEP3(0) holds)",
           passed_b1 and info_b1.get("step3_0_ok") is True,
           "passed=%s step3_0_ok=%s" % (passed_b1, info_b1.get("step3_0_ok")))

    # B2: drop the CALL by patching the C++ CFG builder (one-shot, top-level
    #     build only), AND force cfg_match True. Verdict must still be FAIL, and
    #     the cause must be STEP3(0) (step3_0_ok False, witness present).
    drop_state = {"done": False, "removed": None}

    def patched_build(efv_, text, cls, M_, sig_):
        cfg = orig_build(efv_, text, cls, M_, sig_)
        if not drop_state["done"]:
            drop_state["done"] = True
            drop_state["removed"] = _drop_direct_call_target(cfg, efv_)
        return cfg

    try:
        efv_match.cfg_match = lambda *a, **k: True   # bijection FORCED to pass
        vef._build_cpp_cfg_events = patched_build      # delete a resolvable CALL
        passed_b2, info_b2 = vef.verify_single_function(
            G1_ADDR, G1_NAME, disp, M, ida_text, verbose=verbose, signals=signals)
    finally:
        efv_match.cfg_match = orig_cfg_match
        vef._build_cpp_cfg_events = orig_build

    removed = drop_state["removed"]
    b2_missing = info_b2.get("step3_0_missing", [])
    record("B2 dropped CALL %s + cfg_match FORCED True -> FAIL via STEP3(0)"
           % removed,
           (removed is not None)
           and (passed_b2 is False)
           and (info_b2.get("step3_0_ok") is False)
           and (removed in b2_missing),
           "passed=%s step3_0_ok=%s missing=%r (bijection forced True -> only "
           "STEP3(0) could fail it)" % (passed_b2, info_b2.get("step3_0_ok"),
                                        b2_missing))

    return _emit(results, verbose)


def _emit(results, verbose):
    print("=" * 72)
    print("STEP3(0) independent-value test (drop-a-CALL, bijection forced skipped)")
    print("=" * 72)
    all_ok = True
    for label, ok, detail in results:
        all_ok = all_ok and ok
        print("  [%s] %s" % ("PASS" if ok else "FAIL", label))
        if detail and (verbose or not ok):
            print("        %s" % detail)
    print("-" * 72)
    print("RESULT: %s (%d/%d probes met expectation)" % (
        "ALL PASS" if all_ok else "FAILURES PRESENT",
        sum(1 for _l, ok, _d in results if ok), len(results)))
    return 0 if all_ok else 1


def main():
    import argparse
    p = argparse.ArgumentParser(description="STEP3(0) drop-a-CALL independent-value test.")
    p.add_argument("-v", "--verbose", action="store_true")
    args = p.parse_args()
    sys.exit(run(verbose=args.verbose))


if __name__ == "__main__":
    main()
