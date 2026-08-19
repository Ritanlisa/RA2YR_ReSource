#!/usr/bin/env python3
"""
test_unresolved_member.py -- P1.3 synthetic test: unresolved-member element-scoped
exemption (.omo/plans/code-verifier.md §D-STEP4.4 + §D-STEP4 总原则).

THE DEFECT THIS PROVES FIXED
----------------------------
When a C++ `this->Member` access is syntactically certain to be a member but
signals.json has NO byte offset for it, the active leaf `efv_cpp_events.make_cpp_leaf`
USED to silently DROP the event. The C++ block then MISSED a READ/WRITE the IDA
side has -> under the v2 SET matcher the block sets differ -> the bijection FAILs
-> a FALSE POSITIVE on FAITHFUL code that merely touches a not-yet-mapped member.

The goldens are fully offset-mapped (BuildingClass), so they have NO unresolved
members and can NOT exercise this path -- hence this dedicated synthetic test. It
drives the REAL `make_cpp_leaf` on a genuinely-unresolved `this->Member` and then
runs the REAL matcher (`efv_match`) + the REAL function-level necessary condition
(`efv_necessary` / `verify_execution_flow.step3_0_check`) over hand-built CFGs
where the IDA side carries the resolved `WRITE(member,N)` the C++ side could not
encode.

WHAT IT ASSERTS
---------------
  (a) NO FALSE-POSITIVE: a faithful function touching an UNRESOLVED member is NOT
      forced to FAIL on its account -- BOTH gates (bijection + STEP3(0)) accept it,
      so the combined verdict `passed = step3_0_ok AND matched` is True.
  (b) WARN + offset-TODO RECORDED: the leaf emits a stderr WARN naming the
      class + member, and appends the member to .omo/evidence/offset-todo.txt
      (NOT silently swallowed).
  (c) NO EVASION (precedence preserved):
      (c1) additionally dropping a RESOLVABLE CALL still FAILs (a member wildcard
           never excuses a CALL target);
      (c2) additionally dropping a RESOLVABLE member WRITE (beyond the wildcard
           count) still FAILs (1 wildcard excuses exactly 1 missing member WRITE).
  (d) NO-OP / EXACTNESS preserved: with NO wildcard, a resolved WRITE matches its
      twin (PASS) and a WRONG member-WRITE offset still FAILs (the element
      exemption does not blur resolved offsets).

Exit 0 iff every assertion holds; non-zero otherwise.

Usage:
    python tools/test_unresolved_member.py
    python tools/test_unresolved_member.py -v
"""

import io
import os
import sys
import contextlib

_HERE = os.path.dirname(os.path.abspath(__file__))
if _HERE not in sys.path:
    sys.path.insert(0, _HERE)

import efv_model as M
import efv_match
import efv_necessary
import efv_cpp_events
import verify_execution_flow as vef

# A class that IS in signals.json (so resolved members work) ...
_CLASS = "BuildingClass"
# ... and a member name guaranteed NOT in its signals.json layout (the P2 gap).
_UNRESOLVED_MEMBER = "ZZ_Unmapped_QQ_Member_DoesNotExist_1234"

# Concrete offsets/targets for the hand-built IDA side (what IDA actually resolves).
_IDA_UNRESOLVED_OFFSET = 704     # IDA's resolved offset for the un-mapped member
_RESOLVABLE_OFFSET = 800         # a second, RESOLVABLE member write (for c2)
_RESOLVABLE_CALL = 0x401000      # a resolvable CALL target (for c1)


def _one_block_cfg(events):
    """A single-block CFG (entry id 0, no successors) carrying `events`."""
    g = M.CFG(0)
    g.new_block(0, list(events), [])
    return g


def _verdict(ida_cfg, cpp_cfg):
    """Replicate verify_single_function's combined verdict EXACTLY:
        passed = bool(step3_0_ok AND matched)
    using the REAL matcher and the REAL necessary-condition check."""
    matched = bool(efv_match.cfg_match(ida_cfg, cpp_cfg))
    step3_0_ok = efv_necessary.step3_0_holds(ida_cfg, cpp_cfg)
    return bool(step3_0_ok and matched), matched, step3_0_ok


def run(verbose=False):
    checks = []   # (label, ok, detail)

    def check(label, ok, detail=""):
        checks.append((label, bool(ok), detail))

    # ---- load the REAL symbol sources (the goldens' own pipeline uses these) ----
    try:
        maps = efv_cpp_events.get_maps()
        signals = efv_cpp_events.get_signals()
    except Exception as exc:  # signals.json / functions.json missing
        check("symbol sources (signals.json / functions.json) load", False, repr(exc))
        return _emit(checks, verbose)

    # ============================================================
    # GENUINELY exercise the unresolved-member path of the REAL leaf
    # ============================================================
    leaf = efv_cpp_events.make_cpp_leaf(_CLASS, set(), maps, signals)

    # sanity: the member really is UNRESOLVED (a Resolver miss), not secretly mapped
    from efv_cpp_resolve import Resolver
    kind, val = Resolver(_CLASS, set(), signals=signals).resolve(_UNRESOLVED_MEMBER)
    check("precondition: %s::%s is genuinely UNRESOLVED (Resolver -> (None,None))"
          % (_CLASS, _UNRESOLVED_MEMBER),
          kind is None and val is None, "got (%r,%r)" % (kind, val))

    # capture stderr so we can assert the WARN is emitted (process is fresh, so the
    # per-process dedup set is empty -> the WARN fires on first sight).
    warn_buf = io.StringIO()
    with contextlib.redirect_stderr(warn_buf):
        wr_events = leaf("this->%s = 1" % _UNRESOLVED_MEMBER)   # a WRITE access
        rd_events = leaf("if (this->%s)" % _UNRESOLVED_MEMBER)  # a READ access (advisory)
    warn_text = warn_buf.getvalue()

    # (genuine exercise) the WRITE access emits the element-scoped WRITE wildcard ...
    check("leaf: unresolved 'this->%s = 1' -> ['WRITE(member,?)'] (not dropped)"
          % _UNRESOLVED_MEMBER,
          wr_events == [M.write_member_unresolved()], "got %r" % (wr_events,))
    # ... and the READ access emits the advisory READ wildcard (also not dropped)
    check("leaf: unresolved 'if (this->%s)' -> ['READ(member,?)'] (advisory, not dropped)"
          % _UNRESOLVED_MEMBER,
          rd_events == [M.read_member_unresolved()], "got %r" % (rd_events,))

    # ---- (b) WARN recorded to stderr (names class + member) ----
    warn_ok = ("WARN [efv_cpp_events] unresolved member offset" in warn_text
               and _CLASS in warn_text and _UNRESOLVED_MEMBER in warn_text)
    check("(b) stderr WARN emitted naming class + member",
          warn_ok, "stderr=%r" % (warn_text.strip()[:200],))

    # ---- (b) offset-TODO recorded on disk ----
    todo_path = efv_cpp_events._offset_todo_path()
    todo_has = False
    try:
        with open(todo_path, "r", encoding="utf-8", errors="replace") as fh:
            body = fh.read()
        todo_has = (_UNRESOLVED_MEMBER in body and _CLASS in body)
    except OSError:
        pass
    check("(b) offset-TODO line appended to .omo/evidence/offset-todo.txt",
          todo_has, "path=%s" % todo_path)

    # ============================================================
    # (a) NO FALSE-POSITIVE: faithful function touching the unresolved member
    # ============================================================
    # IDA side: the binary RESOLVED the same member access to WRITE(member,704), and
    # also performs a resolvable CALL and RET.
    ida_faithful = _one_block_cfg([
        M.write_member(_IDA_UNRESOLVED_OFFSET),     # the (C++-unresolved) member write
        M.call_direct(_RESOLVABLE_CALL),
        M.RET,
    ])
    # C++ side: same shape, but the member could not be encoded -> wildcard (from the
    # REAL leaf), plus the SAME resolvable CALL + RET.
    cpp_faithful = _one_block_cfg(wr_events + [M.call_direct(_RESOLVABLE_CALL), M.RET])

    passed, matched, s3 = _verdict(ida_faithful, cpp_faithful)
    check("(a) NO-FP: faithful w/ unresolved member -> PASS "
          "(matched AND step3_0 both hold)",
          passed and matched and s3,
          "passed=%s matched=%s step3_0=%s" % (passed, matched, s3))

    # also prove the verdict-path function itself (vef.step3_0_check) applies the
    # exemption (not just our local step3_0_holds reimplementation).
    efv = vef._load_efv()
    s3_real, miss_real = vef.step3_0_check(
        efv, ida_faithful, cpp_faithful, maps, signals,
        get_callee=lambda *a, **k: None)
    check("(a) vef.step3_0_check (the real verdict-path fn) HOLDS for the faithful case",
          s3_real and not miss_real, "missing=%r" % (miss_real,))

    # ============================================================
    # (c1) NO EVASION -- additionally drop a RESOLVABLE CALL -> STILL FAIL
    # ============================================================
    # IDA still has the CALL; the C++ side has the member wildcard but the CALL is
    # commented out. A member wildcard NEVER excuses a CALL target.
    cpp_drop_call = _one_block_cfg(wr_events + [M.RET])     # CALL removed
    passed_c1, matched_c1, s3_c1 = _verdict(ida_faithful, cpp_drop_call)
    miss_c1 = efv_necessary.missing_external_ops(ida_faithful, cpp_drop_call)
    check("(c1) NO-EVASION: dropped resolvable CALL still FAILs "
          "(wildcard does not excuse a CALL)",
          (passed_c1 is False) and (M.call_direct(_RESOLVABLE_CALL) in miss_c1),
          "passed=%s matched=%s step3_0=%s missing=%r"
          % (passed_c1, matched_c1, s3_c1, miss_c1))

    # ============================================================
    # (c2) NO EVASION -- drop a RESOLVABLE member WRITE beyond the wildcard count
    # ============================================================
    # IDA has TWO member writes: 704 (the C++-unresolved one) + 800 (resolvable).
    # The C++ side has ONLY the wildcard (the resolvable WRITE(800) was commented
    # out). 1 wildcard excuses exactly 1 missing member write -> 1 still missing.
    ida_two_writes = _one_block_cfg([
        M.write_member(_IDA_UNRESOLVED_OFFSET),     # 704 -> excused by the wildcard
        M.write_member(_RESOLVABLE_OFFSET),         # 800 -> resolvable, dropped on C++
        M.call_direct(_RESOLVABLE_CALL),
        M.RET,
    ])
    cpp_one_wild = _one_block_cfg(wr_events + [M.call_direct(_RESOLVABLE_CALL), M.RET])
    passed_c2, matched_c2, s3_c2 = _verdict(ida_two_writes, cpp_one_wild)
    miss_c2 = efv_necessary.missing_external_ops(ida_two_writes, cpp_one_wild)
    check("(c2) NO-EVASION: 1 wildcard cannot shield 2 missing member WRITEs -> FAIL",
          (passed_c2 is False)
          and (s3_c2 is False)
          and (len([e for e in miss_c2 if e.startswith("WRITE(member,")]) == 1),
          "passed=%s step3_0=%s missing=%r" % (passed_c2, s3_c2, miss_c2))

    # ============================================================
    # (d) NO-OP / EXACTNESS -- with NO wildcard the matcher is unchanged
    # ============================================================
    # (d1) a RESOLVED member write matches its IDA twin -> PASS (no wildcard at all).
    cpp_resolved = _one_block_cfg([
        M.write_member(_IDA_UNRESOLVED_OFFSET),     # resolved 704 (no wildcard)
        M.call_direct(_RESOLVABLE_CALL),
        M.RET,
    ])
    passed_d1, _, _ = _verdict(ida_faithful, cpp_resolved)
    check("(d1) NO-OP: resolved WRITE(member,704) matches its IDA twin -> PASS",
          passed_d1 is True, "passed=%s" % passed_d1)

    # (d2) a WRONG resolved member-write offset STILL FAILs (exemption never blurs
    #      resolved offsets -- the signature collapse is a prune only; block_match
    #      stays exact on the non-wildcard path).
    cpp_wrong = _one_block_cfg([
        M.write_member(999),                        # WRONG offset (not 704), no wildcard
        M.call_direct(_RESOLVABLE_CALL),
        M.RET,
    ])
    passed_d2, matched_d2, s3_d2 = _verdict(ida_faithful, cpp_wrong)
    miss_d2 = efv_necessary.missing_external_ops(ida_faithful, cpp_wrong)
    check("(d2) EXACTNESS: a WRONG member-WRITE offset (no wildcard) STILL FAILs",
          (passed_d2 is False) and (M.write_member(_IDA_UNRESOLVED_OFFSET) in miss_d2),
          "passed=%s matched=%s step3_0=%s missing=%r"
          % (passed_d2, matched_d2, s3_d2, miss_d2))

    return _emit(checks, verbose)


def _emit(checks, verbose):
    print("=" * 74)
    print("P1.3 unresolved-member element-scoped exemption -- synthetic test")
    print("=" * 74)
    all_ok = True
    for label, ok, detail in checks:
        all_ok = all_ok and ok
        print("  [%s] %s" % ("PASS" if ok else "FAIL", label))
        if detail and (verbose or not ok):
            print("        %s" % detail)
    print("-" * 74)
    print("RESULT: %s (%d/%d checks passed)" % (
        "ALL PASS" if all_ok else "FAILURES PRESENT",
        sum(1 for _l, ok, _d in checks if ok), len(checks)))
    return 0 if all_ok else 1


def main():
    import argparse
    p = argparse.ArgumentParser(description="P1.3 unresolved-member synthetic test.")
    p.add_argument("-v", "--verbose", action="store_true")
    args = p.parse_args()
    sys.exit(run(verbose=args.verbose))


if __name__ == "__main__":
    main()
