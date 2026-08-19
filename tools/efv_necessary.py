#!/usr/bin/env python3
"""
efv_necessary.py -- STEP3(0): the function-level, bijection-INDEPENDENT
necessary-condition check for the execution-flow verifier.

Authoritative spec: `.omo/plans/code-verifier.md` Section D-STEP3(0).

WHAT THIS IS
------------
A CHEAP, ALWAYS-RUNS necessary condition that backstops the structural bijection
(`efv_match.cfg_match`). It flattens both already-event-extracted CFGs to a SET
of EXTERNAL OPERATIONS -- every CALL target and every WRITE offset/address -- and
requires that EVERY IDA-side external operation appears AT LEAST ONCE on the C++
side. A missing one is the unmistakable signature of a local stub that commented
an external CALL/WRITE out, and we detect it WITHOUT a structural bijection, so a
bijection timeout / abandonment / skip can NEVER hide "an external op was deleted
wholesale" (D-STEP4 unified invariant: STEP3(0) runs whenever there is IDA
pseudocode to read).

WHY PRESENCE-ONLY (>=1x), NEVER COUNT-BASED  (zero-false-positive, MANDATORY)
----------------------------------------------------------------------------
A faithful C++ translation contains every original external operation AT LEAST
ONCE, but the binary may emit MORE of them than the source: tail duplication and
loop unrolling clone a CALL/WRITE across several machine blocks while the source
keeps one. Requiring equal COUNTS would therefore reject faithful code. We only
ask "does it appear at all", which a faithful translation always satisfies. The
count-level discrimination (a WRITE/CALL that appears fewer times) is left to the
structural bijection (1), and -- under a bijection timeout -- is an accepted,
designed-in false-negative (honestly declared in the plan).

WHAT COUNTS AS AN EXTERNAL OPERATION
------------------------------------
  CALL(0xADDR) / CALL(vfptr+N)            -- a call target
  WRITE(member,N) / WRITE(global,0xADDR)  -- a write offset / address
READ and RET are NOT external operations for this gate: READ is advisory (the
plan demotes it), RET is existential/structural. The event strings are the
canonical `efv_model` encodings, identical on both producers, so set membership
is a plain string test (match by byte OFFSET / address, never by name).

REACHABLE-ONLY, BOTH SIDES
--------------------------
Ops are collected over each CFG's REACHABLE blocks (`reachable_blocks()`), exactly
the universe `cfg_match` considers. Using reachable-only on the IDA side keeps the
requirement from demanding an op that lives in IDA dead code (which a faithful C++
legitimately omits); using reachable-only on the C++ side keeps the two views
symmetric.

ELEMENT-EXEMPTION HOOK (future task -- empty on the active path)
----------------------------------------------------------------
`element_exempt` is a clean seam for a FUTURE element-level exemption SET
(unresolved-member WRITEs, trivial-getter untranslated-inline regions, ...). It
is EMPTY on the active path -- the goldens are fully offset-mapped -- so nothing
is exempted today; the parameter exists so a later task can excuse a single
un-encodable element WITHOUT weakening the rest of the check. Each element is the
exact canonical event STRING to excuse (e.g. "WRITE(member,704)").

INLINE EXPANSION IS THE CALLER'S JOB
------------------------------------
The C++ CFG passed in SHOULD already have its TRANSLATED inlined callees spliced
in (see `efv_inline.expand_cpp_cfg`) so an inlined callee's CALLs/WRITEs count on
the C++ side. This module is deliberately CFG-only (single dependency on
`efv_model`); it does not import the inliner.

Dependency: efv_model only.
"""

import os
import sys

try:
    from . import efv_model
except ImportError:  # pragma: no cover - script / direct import path
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    import efv_model

__all__ = [
    "collect_external_ops",
    "missing_external_ops",
    "step3_0_holds",
    "count_member_write_wildcards",
    "apply_member_wildcard_exemption",
]

# The verbs that name an EXTERNAL OPERATION for STEP3(0). READ is advisory and
# RET is existential/structural -- neither participates here.
_EXTERNAL_VERBS = frozenset({efv_model.VERB_CALL, efv_model.VERB_WRITE})

# Unresolved-member WRITE wildcard (efv_model): a this-relative member WRITE whose
# byte offset the C++ leaf could not resolve (signals.json has no entry, the P2
# address-mapping gap). Each occurrence element-scoped-excuses exactly ONE
# otherwise-missing IDA this-relative member WRITE (see
# apply_member_wildcard_exemption). It is NOT a real external op the IDA side has,
# so it never covers an IDA op by string equality.
_MEMBER_WRITE_PREFIX = "WRITE(member,"
_MEMBER_WRITE_WILDCARD = "WRITE(member,?)"


def collect_external_ops(cfg):
    """The SET of EXTERNAL-OPERATION event strings (CALL targets + WRITE
    offsets/addresses) over every REACHABLE block of `cfg`.

    READ and RET are excluded. The result is a plain `set[str]` of canonical
    `efv_model` event strings, so two producers' ops compare by exact string
    (i.e. by byte offset / address). Empty CFG -> empty set."""
    ops = set()
    if cfg is None:
        return ops
    for bid in cfg.reachable_blocks():
        blk = cfg.get_block(bid)
        if blk is None:
            continue
        for ev in blk.ordered_events:
            if efv_model.event_verb(ev) in _EXTERNAL_VERBS:
                ops.add(ev)
    return ops


def count_member_write_wildcards(cfg):
    """Number of UNRESOLVED member-WRITE wildcard occurrences ('WRITE(member,?)')
    over the REACHABLE blocks of `cfg` (the same universe `collect_external_ops`
    uses). Each one element-scoped-excuses exactly ONE otherwise-missing IDA
    this-relative member WRITE in STEP3(0). Counting OCCURRENCES (not a set) keeps
    the exemption count-bounded and SOUND: it can only ever remove up to
    `min(count, #missing-member-writes)` from `missing`, so a dropped RESOLVABLE
    member WRITE (which ADDS to #missing without adding a wildcard) still leaves a
    witness -> FAIL. CALL targets and global WRITEs are NEVER counted/excused."""
    if cfg is None:
        return 0
    n = 0
    for bid in cfg.reachable_blocks():
        blk = cfg.get_block(bid)
        if blk is None:
            continue
        for ev in blk.ordered_events:
            if ev == _MEMBER_WRITE_WILDCARD:
                n += 1
    return n


def apply_member_wildcard_exemption(missing, n_wild):
    """Remove up to `n_wild` this-relative member WRITE strings from the (sorted)
    `missing` witness list -- the element-scoped, count-bounded exemption for
    unresolved members. ONLY resolved member WRITEs ('WRITE(member,N)') are
    removable; CALL(...) targets, WRITE(global,...) and the wildcard itself are
    NEVER removed (so a dropped resolvable CALL/global-WRITE still FAILs, and the
    exemption can never excuse more member WRITEs than there are wildcards).
    Deterministic given a sorted `missing`."""
    if n_wild <= 0:
        return missing
    out = []
    excused = 0
    for ev in missing:
        if (excused < n_wild
                and ev.startswith(_MEMBER_WRITE_PREFIX)
                and ev != _MEMBER_WRITE_WILDCARD):
            excused += 1
            continue
        out.append(ev)
    return out


def missing_external_ops(ida_cfg, cpp_cfg, element_exempt=None):
    """IDA-side external operations ABSENT from the C++ side -- the STEP3(0)
    failure witnesses.

    Presence-only (>=1x) set-coverage: the SORTED list of IDA CALL/WRITE event
    strings that do NOT appear anywhere in the C++ external-op set (after removing
    any static `element_exempt` strings), THEN minus the P1.3 unresolved-member
    exemption: each `WRITE(member,?)` wildcard on the C++ side excuses exactly one
    otherwise-missing IDA this-relative member WRITE (CALLs / global WRITEs never
    excused). An EMPTY list means STEP3(0) HOLDS.

    `cpp_cfg` SHOULD already have its translated inlined callees spliced in (so an
    inlined callee's ops count on the C++ side); expansion is the caller's job.
    `element_exempt` is a STATIC set of exact canonical event strings to excuse
    (EMPTY on the active path).

    Computed purely from the two event-extracted CFGs -> INDEPENDENT of the
    structural bijection search: it can run, and FAIL, even when `cfg_match`
    returns False or is abandoned/skipped."""
    exempt = set(element_exempt) if element_exempt else set()
    ida_ops = collect_external_ops(ida_cfg)
    cpp_ops = collect_external_ops(cpp_cfg)
    missing = sorted((ida_ops - cpp_ops) - exempt)
    return apply_member_wildcard_exemption(
        missing, count_member_write_wildcards(cpp_cfg))


def step3_0_holds(ida_cfg, cpp_cfg, element_exempt=None):
    """True iff every IDA-side external operation appears on the C++ side
    (STEP3(0) necessary condition holds). Convenience wrapper over
    `missing_external_ops`."""
    return not missing_external_ops(ida_cfg, cpp_cfg, element_exempt=element_exempt)


# ============================================================
# Self-test (python tools/efv_necessary.py)
# ============================================================

def _selftest():
    m = efv_model
    ok = True

    def check(name, cond):
        nonlocal ok
        ok = ok and bool(cond)
        print("  [{}] {}".format("PASS" if cond else "FAIL", name))

    print("=== efv_necessary STEP3(0) self-test ===")

    # IDA: a CALL + a virtual CALL + a member WRITE + a READ + RET (across 2 blocks)
    ida = m.CFG(0)
    ida.new_block(0, [m.read_member(4), m.call_direct(0x401000), m.write_member(8)],
                  [(1, m.EDGE_FALLTHROUGH)])
    ida.new_block(1, [m.call_virtual(44), m.write_global(0x812000), m.RET], [])

    # faithful C++: SAME external ops, reordered + extra READ, counts differ -> HOLDS
    cpp_ok = m.CFG(0)
    cpp_ok.new_block(0, [m.write_member(8), m.read_member(4), m.read_member(4),
                         m.call_direct(0x401000)], [(1, m.EDGE_FALLTHROUGH)])
    cpp_ok.new_block(1, [m.write_global(0x812000), m.call_virtual(44), m.RET], [])

    check("READ/RET ignored; external-op set is CALL+WRITE only",
          collect_external_ops(ida) == {m.call_direct(0x401000), m.write_member(8),
                                        m.call_virtual(44), m.write_global(0x812000)})
    check("faithful C++ (reordered, extra READ, count differs) -> STEP3(0) HOLDS",
          step3_0_holds(ida, cpp_ok) and missing_external_ops(ida, cpp_ok) == [])

    # stub C++: the direct CALL was commented out -> STEP3(0) FAILS (witness it)
    cpp_stub = m.CFG(0)
    cpp_stub.new_block(0, [m.read_member(4), m.write_member(8)],
                       [(1, m.EDGE_FALLTHROUGH)])
    cpp_stub.new_block(1, [m.call_virtual(44), m.write_global(0x812000), m.RET], [])
    miss = missing_external_ops(ida, cpp_stub)
    check("dropped CALL detected (presence-only) -> FAIL with the exact witness",
          miss == [m.call_direct(0x401000)] and not step3_0_holds(ida, cpp_stub))

    # element-exemption excuses exactly that witness -> HOLDS again
    check("element_exempt excuses the one missing op -> HOLDS",
          step3_0_holds(ida, cpp_stub, element_exempt={m.call_direct(0x401000)}))

    # presence-only: IDA emits a WRITE twice, C++ once -> still HOLDS (not count-based)
    ida_dup = m.CFG(0)
    ida_dup.new_block(0, [m.write_member(8)], [(1, m.EDGE_FALLTHROUGH)])
    ida_dup.new_block(1, [m.write_member(8), m.RET], [])
    cpp_one = m.CFG(0)
    cpp_one.new_block(0, [m.write_member(8), m.RET], [])
    check("count differs (IDA WRITE x2, C++ x1) -> presence-only HOLDS",
          step3_0_holds(ida_dup, cpp_one))

    # IDA dead code is ignored (unreachable IDA block's CALL not required)
    ida_dead = m.CFG(0)
    ida_dead.new_block(0, [m.RET], [])
    ida_dead.new_block(9, [m.call_direct(0x999999)], [])  # unreachable from entry 0
    cpp_empty = m.CFG(0)
    cpp_empty.new_block(0, [m.RET], [])
    check("unreachable IDA op is NOT required (reachable-only, both sides)",
          step3_0_holds(ida_dead, cpp_empty))

    print("RESULT:", "ALL PASS" if ok else "FAILURES PRESENT")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(_selftest())
