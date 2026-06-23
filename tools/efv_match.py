#!/usr/bin/env python3
"""
efv_match.py -- Per-block event matcher for the execution-flow verifier (CFG).

This module decides whether ONE IDA-side CFG block and ONE C++-side CFG block
"agree" on what they do, under the v2 matching policy fixed in
`.omo/plans/code-verifier.md` §C / §D-STEP3(1) (the v0->v1->v2 note):

    CALL / WRITE / RET  ->  block-internal SET   (intra-block order IGNORED)
    READ (member/global)->  ADVISORY             (never gates / never FAILs)

v2 RELAXATION (user-approved; supersedes the v1 ordered-gating policy):

  * CALL/WRITE/RET are the *observable external operations* of a block. In v2 we
    compare them as a per-block PYTHON SET (presence within the block), NOT an
    ordered list: a faithful translation that performs the SAME set of external
    operations in a DIFFERENT intra-block order is accepted. Block-internal
    reorder is therefore a DESIGNED-IN false-negative relaxation -- deliberately
    chosen, and backstopped downstream by the runtime shadow-comparison (对拍)
    pipeline, which catches behaviour differences an order swap could hide. It is
    a SET, NOT a multiset: intra-block multiplicity is also relaxed (a CALL/WRITE
    is compared by PRESENCE, not count); RET is thus compared by presence too.
    Cross-block ordering is still fully constrained by the CFG structure
    (`cfg_match`'s successor correspondence), so the relaxation is purely
    block-INTERNAL.

  * READ(member,N) / READ(global,0xADDR) are *value loads* and are DEMOTED to
    ADVISORY in v2: they NEVER cause a block-pair to be rejected. (The MSVC-6.0
    compiler freely caches a member in a register / re-reads it via CSE, so reads
    are an unreliable discriminator; gating on them risked false-negatives.) READ
    may at most serve as a deterministic tiebreak in search ordering -- it can
    never reject a pair -- and this module simply does not consult it in
    `block_match` / `block_signature` at all.

This file deliberately does NOT re-derive which events are SEQUENCED vs SET --
that classification is owned by `efv_model.event_class()` and surfaced through
`Block.sequenced_events()` / `Block.set_events()`. We only consume those.

Scope: per-block match (`block_match`) + a signature helper
(`block_signature`) for bijection-search pruning + the full CFG bijection
search (`cfg_match`, T18) that consumes both.

`cfg_match(ida_cfg, cpp_cfg) -> bool` (T18)
-------------------------------------------
Decides whether the WHOLE IDA-side CFG and the WHOLE C++-side CFG describe the
same execution flow, by searching for a STRUCTURAL bijection between their
blocks (entry-anchored backtracking). See the `cfg_match` docstring for the
full algorithm + complexity guard. Two contract points that callers must know:

  * PRECONDITION -- NORMALIZED CFGs. `cfg_match` does NOT normalize; it expects
    BOTH CFGs to have already been run through `efv_normalize.normalize()` (T17)
    so they are comparable at block granularity (short-circuit `||`/`&&`
    reconciled, empty joins removed, fallthrough chains merged, unreachable
    pruned). The T17 pipeline order is: build structural CFG -> normalize ->
    extract events (T8/T14) -> `cfg_match`. We deliberately do NOT import
    `efv_normalize` here (it would pull in efv_cpp_cfg/efv_ida_cfg); this module
    keeps the SAME single dependency as T16 (`efv_model` only).

  * T9 EDGE-LABEL POLICY. Successor correspondence compares DISTINCT successor
    TARGETS (not raw edge counts) and matches edge labels by KIND
    (true/false/fallthrough/back/default, and ALL `case:<V>` collapsed to the
    single kind "case"). This is mandatory: a jump table renders as several
    `case:<V>` edges to ONE shared body block on the pseudocode side, which the
    other side may dedup -- so the count of distinct targets, and the SET of
    label-kinds per distinct target, are the quantities invariant across both
    representations (T9 finding). Case VALUES are intentionally not compared.

T18 contract (block_signature):
  `block_signature(block)` is a hashable PRUNING key. It remains a NECESSARY
  condition for `block_match` -- the property the bijection search relies on:

      block_match(a, b) == True   ==>   block_signature(a) == block_signature(b)

  so T18 may safely bucket blocks by signature and only run `block_match` on
  pairs sharing a signature, WITHOUT ever pruning away a true match. Under the
  v2 SET policy the signature IS the canonical form of the match key (the
  sorted-unique sequenced event SET), so the relation is in fact an EQUIVALENCE
  -- signature-equal blocks always `block_match`. T18 still calls `block_match`
  per candidate (now a redundant-but-harmless confirmation); keeping the call
  means the prune contract holds verbatim even if the signature/match definitions
  later diverge again.
"""

import os
import sys

# --- import the shared data model (sibling in tools/) ---------------------
# Works both as `python tools/efv_match.py` (script dir on sys.path[0]) and
# as `import efv_match` from another tools/ module. Defensive sys.path insert
# keeps it robust regardless of the caller's CWD.
try:
    from . import efv_model  # package-style import (python -m tools.efv_match)
except ImportError:  # pragma: no cover - exercised by the script entry point
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    import efv_model


# ============================================================
# Per-block match
# ============================================================

# An unresolved-member WRITE wildcard ('WRITE(member,?)', efv_model) is emitted by
# the C++ leaf when a `this->Member` is syntactically certain to be a member but
# signals.json has no byte offset for it (the P2 address-mapping gap). It must NOT
# make a faithful block fail to match (that would be a false-positive). It is the
# ONLY trigger for the identity-free member-WRITE comparison below; a normal
# (resolved) block never sees it, so non-wildcard blocks -- the goldens included --
# stay on the EXACT v2 set-equality path and are a strict NO-OP.
_MEMBER_WRITE_PREFIX = "WRITE(member,"
_MEMBER_WRITE_WILDCARD = "WRITE(member,?)"
_MEMBER_WRITE_BLIND_TOKEN = "WRITE(member,#)"


def _has_member_write_wildcard(seq_set):
    """True iff the sequenced-event SET contains an unresolved-member WRITE wildcard."""
    return _MEMBER_WRITE_WILDCARD in seq_set


def _member_write_blind(seq_set):
    """The block's sequenced-event SET with the member-WRITE DIMENSION made
    identity-free: every this-relative member WRITE (resolved 'WRITE(member,N)' OR
    the unresolved 'WRITE(member,?)' wildcard) is collapsed to a single presence
    token 'WRITE(member,#)'. CALL targets, global WRITEs and RET are untouched.

    This is the canonical form used BOTH as the prune signature and in the
    wildcard-aware match branch, which makes the prune invariant
    `block_match(a,b) ==> block_signature(a) == block_signature(b)` an exact
    equivalence on the wildcard path (signature == this collapsed set)."""
    out = set()
    has_member_write = False
    for e in seq_set:
        if e.startswith(_MEMBER_WRITE_PREFIX):     # resolved offset OR '?' wildcard
            has_member_write = True
            continue
        out.add(e)
    if has_member_write:
        out.add(_MEMBER_WRITE_BLIND_TOKEN)
    return out


def block_match(ida_block, cpp_block):
    """Return True iff the two blocks' events match under the v2 SET policy, with the
    P1.3 element-scoped exemption for an UNRESOLVED-member WRITE wildcard.

    Both arguments are `efv_model.Block` instances. The SEQUENCED check (CALL /
    WRITE / RET) is a per-block PYTHON SET equality (intra-block ORDER and COUNT
    relaxed -- presence only). READ is ADVISORY in v2 and is NOT consulted (it can
    never reject a pair). Two empty blocks match. Never raises for well-formed Blocks.

    FAST PATH (the goldens + every fully-mapped block -- a strict NO-OP vs the prior
    v2 matcher): when NEITHER block carries an unresolved-member WRITE wildcard, the
    decision is exact `set(ida.sequenced) == set(cpp.sequenced)`. A wrong member
    WRITE offset, a deleted WRITE, a wrong/extra CALL target -- all still gate here.

    WILDCARD-AWARE PATH (element-scoped exemption): when a `WRITE(member,?)` is
    present in the pair, the C++ side genuinely cannot name the exact member-WRITE
    offset it failed to resolve, so the member-WRITE DIMENSION is compared
    identity-free (`_member_write_blind`): every member WRITE on either side
    collapses to one presence token. CALL targets, global WRITEs and RET STILL gate
    by EXACT PRESENCE here, so a dropped resolvable CALL is still caught. The narrow
    count-level evasion this relaxes -- dropping a RESOLVABLE member WRITE while an
    unresolved one is present -- is backstopped by STEP3(0)'s count-based element
    exemption (1 wildcard excuses exactly 1 missing member WRITE), which gates the
    SAME final verdict (`passed = step3_0_ok AND matched`)."""
    ida_seq = set(ida_block.sequenced_events())
    cpp_seq = set(cpp_block.sequenced_events())
    if (not _has_member_write_wildcard(cpp_seq)
            and not _has_member_write_wildcard(ida_seq)):
        # No unresolved-member wildcard anywhere -> verbatim v2 set equality.
        return ida_seq == cpp_seq
    # A wildcard is present -> compare the member-WRITE dimension identity-free.
    return _member_write_blind(ida_seq) == _member_write_blind(cpp_seq)


# ============================================================
# Block signature (T18 bijection-search pruning key)
# ============================================================

def block_signature(block):
    """A hashable PRUNING key for T18's bijection search (v2 SET policy + P1.3
    wildcard awareness).

    Shape: a flat tuple of the block's sorted, deduped SEQUENCED events with the
    member-WRITE dimension collapsed (`_member_write_blind`): every member WRITE
    (resolved 'WRITE(member,N)' or unresolved 'WRITE(member,?)') becomes the single
    token 'WRITE(member,#)'; CALL targets / global WRITEs / RET are kept exact.

        tuple[str]   # e.g. ('CALL(0x401000)', 'RET', 'WRITE(member,#)')

    This is exactly the canonical form `block_match` compares on its wildcard path,
    so the NECESSARY-condition prune contract holds (in fact as an EQUIVALENCE on
    that path):

        block_match(a, b) ==> block_signature(a) == block_signature(b)

    * On the FAST (non-wildcard) path block_match is EXACT set equality; exact-equal
      sets collapse to equal blind sets, so the invariant still holds. Collapsing the
      member-WRITE offset only COARSENS the prune (it can MERGE buckets that
      block_match still distinguishes exactly) -- a coarser prune never drops a true
      match and never lets a wrong block through (block_match remains the authority),
      so NO verdict changes for the goldens.
    * On the WILDCARD path a faithful unresolved-member WRITE wildcard now buckets
      together with the IDA-side resolved WRITE it matches, so the true pair is not
      pruned away.

    READ is ADVISORY and excluded (it is not a sequenced event)."""
    return tuple(sorted(_member_write_blind(set(block.sequenced_events()))))


# ============================================================
# CFG bijection search (T18 -- cfg_match)
# ============================================================
#
# `cfg_match(ida_cfg, cpp_cfg)` searches for a STRUCTURAL bijection
#   phi : reachable(ida) -> reachable(cpp)
# such that
#   (anchor) phi(ida.entry) == cpp.entry
#   (a)      block_match(u, phi(u))                                for every u
#   (b)      the DISTINCT successor TARGETS of u, mapped through phi, equal the
#            distinct successor targets of phi(u), AND for every such target the
#            SET of edge-label KINDS agrees (T9: case-values collapse to "case").
#
# The search is entry-anchored backtracking with three layers of pruning that
# make it tractable on real (post-T17-normalize) CFGs:
#
#   1. signature-bucket histogram  -- block_match(a,b) ==> signature(a)==
#      signature(b) (T16), so phi maps each signature bucket onto the same
#      bucket bijectively; if the two sides' per-signature bucket SIZES differ,
#      no bijection exists -> reject immediately (cheap, catches most negatives).
#   2. per-variable candidate domain -- each IDA block u may only map to a C++
#      block sharing its signature AND confirmed by block_match (signature is
#      NECESSARY-not-sufficient, T16); an empty domain -> reject.
#   3. entry-anchored BFS variable order + incremental edge consistency -- we
#      assign blocks in IDA entry-rooted BFS order, so every block (after the
#      anchored entry) has an already-assigned BFS-parent; mapping u->v is only
#      tried if it is consistent with EVERY already-assigned neighbour of u (and
#      of v) under the edge-label-kind rule. This propagates the structure hard.
#
# Determinism: successors are expanded in a fixed order keyed by
# (sorted label-kinds, target signature repr, str(target)); candidate C++ blocks
# are tried in C++ entry-rooted BFS order. Same inputs -> same search -> same
# result and same (first) bijection found.
#
# Complexity guard ("attempt, then give up gracefully"): the backtracker counts
# every candidate assignment; if it exceeds `_MATCH_STEP_BUDGET` the search is
# abandoned and `cfg_match` returns False rather than hang. A CFG with more than
# `_MATCH_HARD_CAP` reachable blocks is rejected up-front (the candidate space is
# too large to attempt safely). `_MATCH_BLOCK_THRESHOLD` documents the size
# beyond which completion within budget is no longer guaranteed.

# -- complexity guards -------------------------------------------------------
_MATCH_BLOCK_THRESHOLD = 64       # documented tractability boundary (blocks)
_MATCH_HARD_CAP = 512             # > this many reachable blocks -> give up
_MATCH_STEP_BUDGET = 100000       # max candidate assignments before giving up


class _BudgetExceeded(Exception):
    """Internal: raised to unwind the backtracker when the step budget is hit."""


def _label_kind(label):
    """Edge label reduced to its KIND for T9-robust comparison: every parametric
    `case:<V>` collapses to the single kind "case"; all other labels (true /
    false / fallthrough / back / default) map to themselves."""
    return "case" if efv_model.is_case_label(label) else label


def _succ_label_kinds(cfg, id_set):
    """For each block in `id_set`, the dict {distinct successor target ->
    frozenset(edge-label KINDS to it)}, with targets restricted to `id_set`.

    DISTINCT targets (not raw edges) + label KINDS (case-collapsed) is exactly
    the T9-invariant view of a block's out-edges: multiple `case:<V>` edges to
    one shared body block fold into a single `{... "case" ...}` entry, so a side
    that dedups case-edges still compares equal to one that does not."""
    out = {}
    for bid in id_set:
        b = cfg.get_block(bid)
        kinds = {}
        for (tgt, lbl) in b.successors:
            if tgt not in id_set:
                continue                     # dangling/unreachable edge: ignore
            kinds.setdefault(tgt, set()).add(_label_kind(lbl))
        out[bid] = {t: frozenset(ks) for t, ks in kinds.items()}
    return out


def _pred_label_kinds(succ_lk):
    """Invert `succ_lk` to {block -> {predecessor -> frozenset(kinds on pred->block)}}."""
    out = {b: {} for b in succ_lk}
    for src, targets in succ_lk.items():
        for tgt, ks in targets.items():
            out.setdefault(tgt, {})[src] = ks
    return out


def _bfs_order(cfg, entry_id, id_set, succ_lk):
    """Entry-rooted BFS order of `id_set`, expanding each block's successors in a
    DETERMINISTIC order (sorted label-kinds, then target signature repr, then
    str(target)). Entry is first; any block not reached (shouldn't happen on a
    reachable set) is appended in str order so the result always covers id_set."""
    from collections import deque
    if entry_id not in id_set:
        return sorted(id_set, key=str)
    seen = {entry_id}
    order = [entry_id]
    queue = deque([entry_id])
    while queue:
        b = queue.popleft()
        targets = sorted(
            succ_lk[b].keys(),
            key=lambda t: (sorted(succ_lk[b][t]),
                           repr(block_signature(cfg.get_block(t))),
                           str(t)))
        for t in targets:
            if t in id_set and t not in seen:
                seen.add(t)
                order.append(t)
                queue.append(t)
    for b in sorted(id_set, key=str):
        if b not in seen:
            seen.add(b)
            order.append(b)
    return order


def _verify_full_bijection(forward, succ_i, succ_c):
    """Authoritative check that a COMPLETE mapping `forward` (ida_id -> cpp_id)
    satisfies the successor-correspondence requirement (b) for every block: the
    IDA block's distinct-target -> label-kind-set map, remapped through `forward`,
    must EQUAL the C++ block's. (block_match (a) is already guaranteed by every
    pair coming from a block_match-confirmed candidate domain.)"""
    for u, v in forward.items():
        remapped = {forward[t]: ks for t, ks in succ_i[u].items()}
        if remapped != succ_c[v]:
            return False
    return True


def _find_bijection(ida_cfg, cpp_cfg):
    """Return a bijection dict {ida_id -> cpp_id} proving `ida_cfg` and `cpp_cfg`
    are execution-flow equivalent (entry-anchored, block_match per pair, T9
    successor correspondence), or None if no such bijection exists / the search
    is abandoned under the complexity guard.

    PRECONDITION: both CFGs are already NORMALIZED (T17). This function does not
    normalize and adds no dependency on efv_normalize."""
    ie = ida_cfg.entry()
    ce = cpp_cfg.entry()
    if ie is None or ce is None:
        return None

    ida_ids = ida_cfg.reachable_blocks()
    cpp_ids = cpp_cfg.reachable_blocks()
    if len(ida_ids) != len(cpp_ids):
        return None
    n = len(ida_ids)
    if n == 0:
        return None
    if n > _MATCH_HARD_CAP:                 # too large to attempt safely
        return None

    # Anchor: the two entry blocks must themselves match.
    if not block_match(ie, ce):
        return None

    # Prune 1: signature-bucket histograms must be identical (match => sig-equal,
    # so phi maps bucket -> same-signature bucket bijectively).
    def _buckets(cfg, ids):
        d = {}
        for b in ids:
            d.setdefault(block_signature(cfg.get_block(b)), []).append(b)
        return d

    ida_buckets = _buckets(ida_cfg, ida_ids)
    cpp_buckets = _buckets(cpp_cfg, cpp_ids)
    if set(ida_buckets) != set(cpp_buckets):
        return None
    for sig, members in ida_buckets.items():
        if len(members) != len(cpp_buckets.get(sig, ())):
            return None

    # Prune 2: per-variable candidate domain (same signature AND block_match).
    cand = {}
    for u in ida_ids:
        ub = ida_cfg.get_block(u)
        usig = block_signature(ub)
        dom = [v for v in cpp_buckets.get(usig, ())
               if block_match(ub, cpp_cfg.get_block(v))]
        if not dom:
            return None
        cand[u] = dom

    # Edge views (distinct-target -> label-kind-set) for incremental + final checks.
    succ_i = _succ_label_kinds(ida_cfg, ida_ids)
    succ_c = _succ_label_kinds(cpp_cfg, cpp_ids)
    pred_i = _pred_label_kinds(succ_i)
    pred_c = _pred_label_kinds(succ_c)

    # Deterministic orderings.
    ida_order = _bfs_order(ida_cfg, ie.id, ida_ids, succ_i)
    cpp_order = _bfs_order(cpp_cfg, ce.id, cpp_ids, succ_c)
    cpp_pos = {b: i for i, b in enumerate(cpp_order)}
    for u in cand:
        cand[u].sort(key=lambda v: (cpp_pos.get(v, n), str(v)))

    forward = {ie.id: ce.id}
    backward = {ce.id: ie.id}
    steps = [0]

    def _consistent(u, v):
        # u -> assigned successor: phi must preserve the edge + its label-kinds.
        for t, ks in succ_i[u].items():
            tv = forward.get(t)
            if tv is not None and succ_c[v].get(tv) != ks:
                return False
        # assigned predecessor -> u: phi(pred) -> v must carry the same kinds.
        for p, ks in pred_i[u].items():
            pv = forward.get(p)
            if pv is not None and succ_c[pv].get(v) != ks:
                return False
        # v -> assigned successor: pre-image must be a successor of u (same kinds).
        for tv, ks in succ_c[v].items():
            t = backward.get(tv)
            if t is not None and succ_i[u].get(t) != ks:
                return False
        # assigned predecessor -> v: its pre-image -> u must carry the same kinds.
        for pv, ks in pred_c[v].items():
            p = backward.get(pv)
            if p is not None and succ_i[p].get(u) != ks:
                return False
        return True

    def _bt(idx):
        if idx >= len(ida_order):
            return _verify_full_bijection(forward, succ_i, succ_c)
        u = ida_order[idx]
        if u in forward:                    # the anchored entry
            return _bt(idx + 1)
        for v in cand[u]:
            steps[0] += 1
            if steps[0] > _MATCH_STEP_BUDGET:
                raise _BudgetExceeded()
            if v in backward:
                continue
            if not _consistent(u, v):
                continue
            forward[u] = v
            backward[v] = u
            if _bt(idx + 1):
                return True
            del forward[u]
            del backward[v]
        return False

    try:
        if _bt(0):
            return dict(forward)
        return None
    except _BudgetExceeded:
        return None


def cfg_match(ida_cfg, cpp_cfg):
    """True iff `ida_cfg` and `cpp_cfg` (BOTH already NORMALIZED, T17) describe
    the same execution flow: there exists an entry-anchored STRUCTURAL bijection
    between their reachable blocks where every paired block satisfies
    `block_match` and the paired successor structure corresponds under the
    bijection (distinct targets + label KINDS, T9). Returns False (never raises)
    if no bijection exists or the search is abandoned by the complexity guard."""
    return _find_bijection(ida_cfg, cpp_cfg) is not None


# ============================================================
# Self-test (python tools/efv_match.py)
# ============================================================

def _build_blocks():
    """Construct the three self-test block pairs using efv_model builders.

    Returns a list of (label, ida_block, cpp_block, expect_match, note) tuples.
    """
    m = efv_model

    # -- Case (a): same sequenced SET (WRITE,CALL,RET) on both sides -> must
    #    MATCH (TRUE). The READ count AND order differ (IDA reads member,4 twice
    #    and reorders its reads vs faithful C++ reading it once) -- but under v2
    #    READ is ADVISORY and ignored entirely, so the differing reads are a
    #    no-op for the match. (Pre-v2 this case existed to prove READ-set
    #    tolerance; under v2 it proves READ is simply not consulted.)
    a_ida = m.Block("a_ida", [
        m.write_member(8),        # SEQUENCED
        m.call_direct(0x401000),  # SEQUENCED
        m.read_member(4),         # SET
        m.read_member(4),         # SET (duplicate -- count differs)
        m.read_global(0x812000),  # SET
        m.RET,                    # SEQUENCED
    ])
    a_cpp = m.Block("a_cpp", [
        m.read_global(0x812000),  # SET (reordered)
        m.write_member(8),        # SEQUENCED (same order as IDA)
        m.read_member(4),         # SET (single occurrence -- count differs)
        m.call_direct(0x401000),  # SEQUENCED
        m.RET,                    # SEQUENCED
    ])

    # -- Case (b): block-INTERNAL CALL reorder -> MATCHES under v2 (TRUE).
    #    v2 RECLASSIFICATION (was FALSE under v1's ordered-CALL gating). Under
    #    the v2 SET policy CALL/WRITE/RET are compared by PRESENCE within the
    #    block, so swapping two CALLs inside one block is a DESIGNED-IN
    #    false-negative relaxation (user-approved; backstopped by runtime 对拍),
    #    NOT a weakening to hide a bug. The two blocks have the SAME sequenced
    #    SET {CALL(0x401000),CALL(0x402000),RET}, hence the SAME signature and a
    #    v2 match. (Reads identical/none -- READ is advisory and ignored anyway.)
    b_ida = m.Block("b_ida", [
        m.call_direct(0x401000),
        m.call_direct(0x402000),
        m.RET,
    ])
    b_cpp = m.Block("b_cpp", [
        m.call_direct(0x402000),  # swapped order -- v2 ignores intra-block order
        m.call_direct(0x401000),
        m.RET,
    ])

    # -- Case (c): one extra WRITE on the C++ side -> must NOT match (FALSE).
    #    Reads identical. The sequenced SETs DIFFER -- the C++ side has an extra
    #    WRITE(member,12) absent on the IDA side -- so signatures differ and T18
    #    would even prune this pair before block_match. This is the v2 backstop:
    #    set-PRESENCE still catches a genuinely extra/missing external op (only
    #    intra-block ORDER and COUNT are relaxed, never presence).
    c_ida = m.Block("c_ida", [
        m.write_member(8),
        m.call_direct(0x401000),
        m.RET,
    ])
    c_cpp = m.Block("c_cpp", [
        m.write_member(8),
        m.write_member(12),       # extra WRITE -- not present on IDA side
        m.call_direct(0x401000),
        m.RET,
    ])

    return [
        ("a_READ-count/order-differs",
         a_ida, a_cpp, True,
         "same sequenced SET; READ count+order differ (READ advisory, ignored)"),
        ("b_CALL-order-differs",
         b_ida, b_cpp, True,
         "v2 DESIGNED-FN: block-internal CALL reorder -> same sequenced SET -> "
         "MATCHES (was False under v1 ordered-CALL; user-approved relaxation, "
         "backstopped by runtime shadow-comparison, NOT a bug-hiding weakening)"),
        ("c_extra-WRITE",
         c_ida, c_cpp, False,
         "extra WRITE on C++ side -> sequenced SET differs -> no match (presence, "
         "not order, so a real extra external op is still caught)"),
    ]


def _run_self_test():
    """Run the 3 graded-policy self-test cases; return (all_ok, report_lines)."""
    lines = []
    lines.append("=== T16 efv_match.block_match / block_signature self-test ===")
    lines.append("policy (v2): CALL/WRITE/RET = per-block SET-equality "
                 "(intra-block order AND count relaxed, presence only); "
                 "READ = ADVISORY (not consulted, never gates)")
    lines.append("")

    all_ok = True
    for label, ida_b, cpp_b, expect, note in _build_blocks():
        got = block_match(ida_b, cpp_b)
        sig_i = block_signature(ida_b)
        sig_c = block_signature(cpp_b)
        sig_eq = (sig_i == sig_c)

        ok = (got == expect)

        # Invariant check: a match MUST imply equal signatures (necessary cond).
        invariant_ok = True
        if got and not sig_eq:
            invariant_ok = False
            ok = False

        all_ok = all_ok and ok
        status = "PASS" if ok else "FAIL"

        lines.append("[{}] {}".format(status, label))
        lines.append("    note          : {}".format(note))
        lines.append("    IDA sequenced : {}".format(ida_b.sequenced_events()))
        lines.append("    CPP sequenced : {}".format(cpp_b.sequenced_events()))
        lines.append("    IDA reads     : {}".format(ida_b.set_events()))
        lines.append("    CPP reads     : {}".format(cpp_b.set_events()))
        lines.append("    block_match   : got={} expect={}".format(got, expect))
        lines.append("    signature IDA : {}".format(sig_i))
        lines.append("    signature CPP : {}".format(sig_c))
        lines.append("    sig equal     : {}".format(sig_eq))
        lines.append("    match=>sig-eq : {}".format(
            "OK" if invariant_ok else "VIOLATED"))
        lines.append("")

    # Extra assertion: two identical empty blocks match (degenerate case).
    e1 = efv_model.Block("e1", [])
    e2 = efv_model.Block("e2", [])
    empty_ok = (block_match(e1, e2) is True
                and block_signature(e1) == block_signature(e2))
    all_ok = all_ok and empty_ok
    lines.append("[{}] d_empty-blocks-match  (block_match={}, sig-eq={})".format(
        "PASS" if empty_ok else "FAIL",
        block_match(e1, e2), block_signature(e1) == block_signature(e2)))
    lines.append("")

    lines.append("RESULT: {}".format("ALL PASS" if all_ok else "FAILURES PRESENT"))
    return all_ok, lines


def _evidence_path():
    """Absolute path to .omo/evidence/task-16-blockmatch.txt (repo-root anchored)."""
    here = os.path.dirname(os.path.abspath(__file__))      # .../tools
    repo_root = os.path.dirname(here)                      # repo root
    return os.path.join(repo_root, ".omo", "evidence",
                        "task-16-blockmatch.txt")


def _cfg_evidence_path():
    """Absolute path to .omo/evidence/task-18-bijection.txt (repo-root anchored)."""
    here = os.path.dirname(os.path.abspath(__file__))      # .../tools
    repo_root = os.path.dirname(here)                      # repo root
    return os.path.join(repo_root, ".omo", "evidence",
                        "task-18-bijection.txt")


# ------------------------------------------------------------
# T18 cfg_match self-test
# ------------------------------------------------------------

def _mk_cfg(entry_id, spec):
    """Build a CFG from `spec` = list of (block_id, ordered_events, successors)
    where each successor is a (target_id, edge_label) tuple."""
    g = efv_model.CFG(entry_id)
    for (bid, events, succ) in spec:
        g.new_block(bid, list(events), list(succ))
    return g


def _build_cfg_pairs():
    """Return [(label, ida_cfg, cpp_cfg, expect_match, note), ...] exercising:

      1. an ISOMORPHIC diamond (different block ids, REORDERED successors, READ
         count+order differing) -> True;
      2a. a MISSING block (block count differs) -> False;
      2b. a NON-MATCHING block at equal count (wrong CALL target) -> False;
      3. STUB-vs-REAL (1-block `return` vs a real multi-block body) -> False;
      4. T9 case-edge dedup (IDA emits 4 `case:<V>` edges to one shared body
         block; the C++ side dedups to a single `case` edge) -> True;
      5. an EDGE-LABEL swap (true/false transposed) -> False.
    """
    m = efv_model
    T, F, FT = m.EDGE_TRUE, m.EDGE_FALSE, m.EDGE_FALLTHROUGH
    DFLT = m.EDGE_DEFAULT

    # ---- 1: isomorphic diamond -------------------------------------------
    iso_ida = _mk_cfg(0, [
        (0, [m.read_member(4), m.call_direct(0x401000)], [(1, T), (2, F)]),
        (1, [m.write_member(8)],                          [(3, FT)]),
        (2, [m.call_direct(0x402000)],                    [(3, FT)]),
        (3, [m.RET],                                      []),
    ])
    iso_cpp = _mk_cfg("A", [
        # reads reordered + duplicated; successors reordered (false before true).
        ("A", [m.call_direct(0x401000), m.read_member(4), m.read_member(4)],
              [("C", F), ("B", T)]),
        ("B", [m.write_member(8)],     [("D", FT)]),
        ("C", [m.call_direct(0x402000)], [("D", FT)]),
        ("D", [m.RET],                 []),
    ])

    # ---- 2a: missing block (cpp drops block C; 0->3 join shrinks to 3 blocks)
    miss_ida = iso_ida
    miss_cpp = _mk_cfg("A", [
        ("A", [m.call_direct(0x401000), m.read_member(4)], [("B", T), ("D", F)]),
        ("B", [m.write_member(8)],     [("D", FT)]),
        ("D", [m.RET],                 []),
    ])  # 3 blocks vs IDA's 4

    # ---- 2b: non-matching block, equal count (cpp block C has wrong CALL) -
    nm_ida = iso_ida
    nm_cpp = _mk_cfg("A", [
        ("A", [m.call_direct(0x401000), m.read_member(4)], [("B", T), ("C", F)]),
        ("B", [m.write_member(8)],     [("D", FT)]),
        ("C", [m.call_direct(0x999999)], [("D", FT)]),   # wrong target -> no match
        ("D", [m.RET],                 []),
    ])

    # ---- 3: stub-vs-real --------------------------------------------------
    stub_cpp = _mk_cfg("S", [
        ("S", [m.RET], []),                              # `return 0;`
    ])
    real_ida = _mk_cfg(0, [
        (0, [m.call_direct(0x401000)], [(1, FT)]),
        (1, [m.write_member(8), m.RET], []),
    ])

    # ---- 4: T9 case-edge dedup -------------------------------------------
    # IDA dispatch carries 4 case-value edges to ONE shared body block (1);
    # the C++ side dedups them to a single `case` edge. Distinct-target +
    # label-KIND comparison makes these MATCH.
    sw_ida = _mk_cfg(0, [
        (0, [m.call_virtual(44)],
            [(1, m.edge_case(1)), (1, m.edge_case(2)),
             (1, m.edge_case(6)), (1, m.edge_case(15)), (2, DFLT)]),
        (1, [m.write_member(8), m.RET], []),
        (2, [m.RET],                    []),
    ])
    sw_cpp = _mk_cfg("D", [
        ("D", [m.call_virtual(44)],
              [("body", m.edge_case(1)), ("def", DFLT)]),   # case-edges dedupped
        ("body", [m.write_member(8), m.RET], []),
        ("def",  [m.RET],                    []),
    ])

    # ---- 5: edge-label swap (true/false transposed on the cpp side) ------
    swap_ida = iso_ida
    swap_cpp = _mk_cfg("A", [
        ("A", [m.call_direct(0x401000), m.read_member(4)], [("B", F), ("C", T)]),
        ("B", [m.write_member(8)],     [("D", FT)]),
        ("C", [m.call_direct(0x402000)], [("D", FT)]),
        ("D", [m.RET],                 []),
    ])

    return [
        ("1_isomorphic-diamond", iso_ida, iso_cpp, True,
         "different ids, reordered successors, READ count+order differ"),
        ("2a_missing-block", miss_ida, miss_cpp, False,
         "cpp has 3 reachable blocks vs IDA's 4 (count mismatch)"),
        ("2b_nonmatching-block", nm_ida, nm_cpp, False,
         "equal block count; cpp block C has a wrong CALL target (no block_match)"),
        ("3_stub-vs-real", real_ida, stub_cpp, False,
         "real 2-block body vs a 1-block `return 0;` stub"),
        ("4_T9-case-dedup", sw_ida, sw_cpp, True,
         "IDA 4 case-edges to one body; cpp dedups to one case-edge (distinct-target+kind)"),
        ("5_edge-label-swap", swap_ida, swap_cpp, False,
         "true/false edge labels transposed on the cpp side"),
    ]


def _fmt_bijection(mapping):
    """Render a bijection dict deterministically as 'ida->cpp, ...' (by str key)."""
    if mapping is None:
        return "(none)"
    items = sorted(mapping.items(), key=lambda kv: str(kv[0]))
    return ", ".join("{!r}->{!r}".format(k, v) for k, v in items)


def _run_cfg_self_test():
    """Run the T18 cfg_match cases; return (all_ok, report_lines)."""
    lines = []
    lines.append("=== T18 efv_match.cfg_match self-test ===")
    lines.append("policy: entry-anchored structural bijection; per-pair block_match; "
                 "successor correspondence by DISTINCT TARGET + edge-label KIND "
                 "(case-values collapse to 'case', T9)")
    lines.append("precondition: BOTH CFGs already NORMALIZED (T17)")
    lines.append("guards: hard_cap={} step_budget={} (threshold={})".format(
        _MATCH_HARD_CAP, _MATCH_STEP_BUDGET, _MATCH_BLOCK_THRESHOLD))
    lines.append("")

    all_ok = True
    for label, ida_cfg, cpp_cfg, expect, note in _build_cfg_pairs():
        got = cfg_match(ida_cfg, cpp_cfg)
        bij = _find_bijection(ida_cfg, cpp_cfg)
        ok = (got == expect)
        # consistency: cfg_match True  <=>  a bijection was found.
        if (got is True) != (bij is not None):
            ok = False
        all_ok = all_ok and ok
        lines.append("[{}] {}".format("PASS" if ok else "FAIL", label))
        lines.append("    note          : {}".format(note))
        lines.append("    IDA blocks     : {} (reachable {})".format(
            len(ida_cfg), len(ida_cfg.reachable_blocks())))
        lines.append("    CPP blocks     : {} (reachable {})".format(
            len(cpp_cfg), len(cpp_cfg.reachable_blocks())))
        lines.append("    cfg_match      : got={} expect={}".format(got, expect))
        lines.append("    bijection      : {}".format(_fmt_bijection(bij)))
        lines.append("")

    lines.append("RESULT: {}".format("ALL PASS" if all_ok else "FAILURES PRESENT"))
    return all_ok, lines


def _write_evidence(path, report):
    """Write `report` to `path` (utf-8), creating dirs; never raise on I/O."""
    try:
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, "w", encoding="utf-8") as fh:
            fh.write(report)
        sys.stdout.write("evidence written: {}\n".format(path))
    except OSError as exc:  # pragma: no cover - never block the test on I/O
        sys.stdout.write("WARN: could not write evidence ({}): {}\n".format(
            path, exc))


def main():
    # --- T16 block_match / block_signature ---
    ok16, lines16 = _run_self_test()
    report16 = "\n".join(lines16) + "\n"
    sys.stdout.write(report16)
    _write_evidence(_evidence_path(), report16)

    sys.stdout.write("\n")

    # --- T18 cfg_match ---
    ok18, lines18 = _run_cfg_self_test()
    report18 = "\n".join(lines18) + "\n"
    sys.stdout.write(report18)
    _write_evidence(_cfg_evidence_path(), report18)

    return 0 if (ok16 and ok18) else 1


if __name__ == "__main__":
    sys.exit(main())
