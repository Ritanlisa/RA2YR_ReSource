#!/usr/bin/env python3
"""
efv_inline.py -- T22 inline-expansion matching for the execution-flow verifier.

PROBLEM
-------
When the ORIGINAL binary INLINED a small callee, the IDA Hex-Rays pseudocode
shows the callee's BODY in place (member reads/writes, sub-calls) with NO `CALL`
to that callee, while a FAITHFUL C++ translation still writes `Callee(args)` and
therefore emits a `CALL(0xADDR)` event. The two CFGs then differ ONLY at that
call site, and `cfg_match` (correctly, on its own terms) returns False -- a
FALSE-FAIL caused purely by inlining.

  Confirmed real example in gamemd.exe (see .omo/evidence/t22-inline.txt):
    BuildingClass::GetHealthRatio (0x5F5C60) -- body `health / (vtable[136]()
      ->Strength)` -- is INLINED into BuildingClass::IsHealthLow (0x5F5CD0) and
      BuildingClass::GetSellPriority (0x5F5DD0): their IDA pseudocode carries the
      health-ratio computation inline, with NO direct CALL to 0x5F5C60.

FIX (this module)
-----------------
When the normal `cfg_match` FAILS, `try_inline_match` rebuilds the C++ CFG by
recursively SUBSTITUTING, at every C++ `CALL(addr)` whose `addr` is ABSENT from
the *caller's* IDA call-set, the callee's own (translated) CFG -- splicing the
callee body in at the call site -- then re-NORMALIZES and re-runs the SAME,
UNCHANGED `cfg_match`. A faithful translation whose only discrepancy was the
inlined call now matches; anything structurally wrong still fails (this never
relaxes the matcher -- it only changes the C++ CFG's block granularity to mirror
what the binary actually did).

WHY "absent from the CALLER's IDA call-set" is exactly the inline test
---------------------------------------------------------------------
If the binary really CALLED the callee, the caller's IDA pseudocode contains
`CALL(callee)` -> the addr IS in the caller's IDA call-set -> we do NOT expand
(the direct call must match a direct call). If the binary INLINED the callee,
the caller's IDA has the callee body but NO `CALL(callee)` -> the addr is ABSENT
-> we expand. This holds at every depth: a sub-callee that the binary called
(not inlined) appears as a real `CALL` in the caller's inlined body, so its addr
is in the caller's IDA call-set and is left alone; a sub-callee the binary ALSO
inlined is likewise absent and is expanded. So the single rule "expand iff the
target addr is absent from the caller's IDA call-set" is self-terminating except
across a recursion cycle, which the cycle guard + depth cap stop.

SPLICE (faithful CFG substitution -- NOT a matcher weakening)
------------------------------------------------------------
At a block B with `CALL(addr)` at index k:
  * pre  = B's events[:k]                      (keeps B.id, the entry if B was)
  * post = B's events[k+1:]                    (inherits B's original successors)
  * the callee CFG is cloned with FRESH ids and stitched BETWEEN: pre -> callee
    entry (fallthrough); every callee EXIT block (no successors) has its inlined
    `RET` event(s) DROPPED (an inlined return does not RETURN from the caller --
    it falls through to the continuation) and a fallthrough edge to post.
Multiple `CALL`s in one block chain through (`pre -> c0 -> seg1 -> c1 -> ... ->
post`), so a callee inlined several times at sibling sites all expand. A later
`efv_normalize.normalize` collapses the empty/fallthrough seams, so the spliced
C++ CFG reaches the same block granularity as the IDA side.

LIMITATION (documented): the callee must be TRANSLATED -- `get_callee_cfg(addr)`
must return its CFG (built from its C++ source). If the callee has no source (or
a stub source whose events do not reproduce the inlined body) the re-match still
FAILS -- such a function stays FAIL, by design (no false PASS).

DEPENDENCIES: `efv_model` only (CFG/Block ops). The matcher, normalizer, and
branch-polarity canonicaliser are INJECTED as callables by the caller
(`verify_execution_flow`), so this module adds no import cycle and cannot reach
into / weaken the proven matcher.
"""

import os
import sys

try:
    from . import efv_model
except ImportError:  # pragma: no cover - script / direct import path
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    import efv_model

__all__ = ["try_inline_match", "ida_call_addrs"]

# Belt-and-suspenders guard against pathological expansion (the absent-from-IDA
# rule + cycle guard already terminate; this caps total inline depth regardless).
_MAX_INLINE_DEPTH = 3


# ============================================================
# Small helpers
# ============================================================

def _call_addr(event):
    """int addr of a `CALL(0xADDR)` event, or None (RET / vfptr / non-call)."""
    if not event.startswith("CALL(0x"):
        return None
    try:
        return int(event[event.find("0x") + 2:event.find(")")], 16)
    except ValueError:
        return None


def ida_call_addrs(ida_cfg):
    """The set of int addresses the CALLER's IDA pseudocode CALLs directly
    (`CALL(0xADDR)` events). A C++ CALL whose target is NOT in this set is the
    inline marker this module expands."""
    out = set()
    for blk in ida_cfg.blocks.values():
        for ev in blk.ordered_events:
            a = _call_addr(ev)
            if a is not None:
                out.add(a)
    return out


def _clone_cfg(cfg):
    """Deep copy a CFG (fresh Block objects; same ids/events/successors)."""
    g = efv_model.CFG(cfg.entry_id)
    for bid, b in cfg.blocks.items():
        g.add_block(efv_model.Block(bid, list(b.ordered_events),
                                    list(b.successors)))
    return g


def _is_ret(event):
    return efv_model.event_verb(event) == efv_model.VERB_RET


# ============================================================
# CFG substitution (the splice)
# ============================================================

class _Counter:
    """Monotonic source of globally-unique fresh block ids for clones."""
    __slots__ = ("n",)

    def __init__(self):
        self.n = 0

    def fresh(self, tag):
        self.n += 1
        return ("inl", tag, self.n)


def _relabel_callee(callee_cfg, counter):
    """Clone `callee_cfg` with FRESH ids. Returns (blocks, entry_id, exit_ids):
      blocks   : list[Block] (fresh ids, successor targets remapped)
      entry_id : fresh id of the callee entry block
      exit_ids : fresh ids of callee EXIT blocks (no successors) -- their inlined
                 RET events are dropped and they are rewired to the continuation
                 by the caller of this function."""
    idmap = {old: counter.fresh("c") for old in callee_cfg.blocks}
    blocks = []
    exit_ids = []
    for old, b in callee_cfg.blocks.items():
        new_id = idmap[old]
        succ = [(idmap[t], lbl) for (t, lbl) in b.successors if t in idmap]
        events = list(b.ordered_events)
        if not b.successors:                       # an exit / return block
            events = [e for e in events if not _is_ret(e)]   # drop inlined RET
            exit_ids.append(new_id)
        blocks.append(efv_model.Block(new_id, events, succ))
    return blocks, idmap[callee_cfg.entry_id], exit_ids


def _expand_cfg(cfg, ida_calls, get_callee_cfg, depth, in_progress, counter):
    """Return a NEW CFG with every expandable C++ `CALL(addr)` replaced by the
    (recursively expanded) callee CFG.

    A `CALL(addr)` is expandable iff:
      * addr is NOT in `ida_calls` (the caller's IDA did not call it -> inlined),
      * addr is NOT in `in_progress` (cycle guard: we are not already inside an
        expansion of addr on this path), and
      * `depth < _MAX_INLINE_DEPTH`, and
      * `get_callee_cfg(addr)` returns a CFG (the callee is translated).
    """
    out = efv_model.CFG(cfg.entry_id)
    if depth >= _MAX_INLINE_DEPTH:
        return _clone_cfg(cfg)

    for bid, b in cfg.blocks.items():
        # indices of expandable CALLs in this block, in order
        plan = []   # (event_index, callee_blocks, callee_entry, callee_exits)
        for i, ev in enumerate(b.ordered_events):
            a = _call_addr(ev)
            if a is None or a in ida_calls or a in in_progress:
                continue
            callee = get_callee_cfg(a)
            if callee is None or not callee.blocks:
                continue
            # recursively expand the callee FIRST (so nested inlines splice in)
            callee_x = _expand_cfg(callee, ida_calls, get_callee_cfg,
                                   depth + 1, in_progress | {a}, counter)
            cblocks, centry, cexits = _relabel_callee(callee_x, counter)
            plan.append((i, cblocks, centry, cexits))

        if not plan:
            out.add_block(efv_model.Block(bid, list(b.ordered_events),
                                          list(b.successors)))
            continue

        # Rebuild B as a CHAIN of segment blocks interleaved with callee bodies:
        #   seg0 (id=bid) -> callee0 -> seg1 -> callee1 -> ... -> segN (orig succ)
        evs = b.ordered_events
        cut_points = [p[0] for p in plan]
        seg_bounds = []
        prev = 0
        for c in cut_points:
            seg_bounds.append((prev, c))      # events[prev:c]  (CALL at c removed)
            prev = c + 1
        seg_bounds.append((prev, len(evs)))   # tail segment

        # segment block ids: first reuses bid; rest are fresh
        seg_ids = [bid] + [counter.fresh("seg") for _ in range(len(seg_bounds) - 1)]
        for si, (lo, hi) in enumerate(seg_bounds):
            out.add_block(efv_model.Block(seg_ids[si], evs[lo:hi], []))
        # tail segment inherits B's original successors
        out.get_block(seg_ids[-1]).successors = list(b.successors)

        # stitch: seg_i -> callee_i.entry ; callee_i exits -> seg_{i+1}
        for ci, (_idx, cblocks, centry, cexits) in enumerate(plan):
            for cb in cblocks:
                out.add_block(cb)
            out.get_block(seg_ids[ci]).add_successor(
                centry, efv_model.EDGE_FALLTHROUGH)
            nxt = seg_ids[ci + 1]
            for ex in cexits:
                out.get_block(ex).add_successor(nxt, efv_model.EDGE_FALLTHROUGH)

    return out


# ============================================================
# Public entry point
# ============================================================

def try_inline_match(ida_cfg, cpp_cfg, get_callee_cfg,
                     cfg_match, normalize, canonicalize,
                     max_depth=_MAX_INLINE_DEPTH):
    """Attempt to match `cpp_cfg` against `ida_cfg` AFTER inline-expanding every
    C++ `CALL` the binary inlined. Returns True iff, after the faithful CFG
    substitution + re-normalize + canonicalize, the UNCHANGED `cfg_match`
    accepts the expanded C++ CFG.

    Parameters
    ----------
    ida_cfg, cpp_cfg : already-NORMALIZED, event-stage CFGs (the same objects
        `verify_single_function` would pass to `cfg_match`).
    get_callee_cfg(addr) -> CFG | None : returns the callee's NORMALIZED,
        event-stage CFG (built from its C++ source) or None if the callee is not
        translated. A None / stub callee => no PASS (the function stays FAIL).
    cfg_match(ida, cpp) -> bool        : the PROVEN matcher (injected, unchanged).
    normalize(cfg) -> cfg              : T17 normalizer (injected).
    canonicalize(cfg) -> cfg | None    : branch-polarity canonicaliser (injected;
        applied in place, mirroring the IDA side).

    Side-effect free w.r.t. the inputs (operates on clones).
    """
    global _MAX_INLINE_DEPTH
    if max_depth != _MAX_INLINE_DEPTH:
        # honour an explicit cap without leaking module state across calls
        saved = _MAX_INLINE_DEPTH
        _MAX_INLINE_DEPTH = max_depth
        try:
            return _try(ida_cfg, cpp_cfg, get_callee_cfg, cfg_match,
                        normalize, canonicalize)
        finally:
            _MAX_INLINE_DEPTH = saved
    return _try(ida_cfg, cpp_cfg, get_callee_cfg, cfg_match,
                normalize, canonicalize)


def _try(ida_cfg, cpp_cfg, get_callee_cfg, cfg_match, normalize, canonicalize):
    ida_calls = ida_call_addrs(ida_cfg)

    # Nothing to do if the C++ side has no CALL the IDA side lacks: no inline
    # marker present -> the FAIL is for some other (genuine) reason.
    cpp_calls = ida_call_addrs(cpp_cfg)
    if not (cpp_calls - ida_calls):
        return False

    expanded = _expand_cfg(cpp_cfg, ida_calls, get_callee_cfg,
                           depth=0, in_progress=frozenset(), counter=_Counter())
    expanded = normalize(expanded)
    if canonicalize is not None:
        canonicalize(expanded)
    return bool(cfg_match(ida_cfg, expanded))
