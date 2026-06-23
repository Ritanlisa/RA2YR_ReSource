#!/usr/bin/env python3
"""
efv_normalize.py -- CFG normalization passes for the execution-flow verifier.

Task T17 of the execution-flow-cfg pipeline. A SINGLE `normalize(cfg) -> CFG`
function is applied IDENTICALLY to BOTH the IDA-side CFG (T7 `efv_ida_cfg`) and
the C++-side CFG (T12 `efv_cpp_cfg`) so that a faithful translation produces two
CFGs that are comparable at BLOCK GRANULARITY. T18's bijection search runs on the
normalized CFGs.

------------------------------------------------------------------------------
WHAT NORMALIZATION DOES (block-granularity only -- never event order)
------------------------------------------------------------------------------
normalize() runs these passes (the first once, the rest to a fixpoint):

  1. short-circuit `||`/`&&` reconciliation  (`_split_short_circuit_conditions`)
       Hex-Rays renders short-circuit boolean tests FLATTENED -- a single block
       `if ( *(_BYTE*)(v3+5806) || *(_BYTE*)(v3+5807) )` (T7 keeps it as ONE
       block). The C++ side (T12) SPLITS such a test into one CONDITION BLOCK per
       short-circuit atom. To make a faithful translation align, this pass SPLITS
       the IDA flattened condition STRING into the SAME chain of condition blocks,
       reusing the EXACT splitter the C++ side uses (`efv_cpp_cfg._split_top_level`)
       and reproducing `efv_cpp_cfg._CppBuilder._lower_cond`'s wiring bit-for-bit.
       The pass is IDEMPOTENT on already-split conditions (single atom -> no-op),
       so running it on the C++ side changes nothing while the IDA side catches up.

  2. empty-block elimination  (`_eliminate_empty_blocks`)
       A block with NO events and EXACTLY ONE successor (a structural join /
       pre-header artifact) is bypassed: every edge `P -> E` is redirected to
       `P -> T` keeping P's edge label, and E is removed. Removes nothing from the
       observable event stream (the block was empty).

  3. fallthrough merge  (`_merge_fallthrough_chains`)
       Two blocks A, B are coalesced iff A's ONLY outgoing edge is a FALLTHROUGH to
       B and B's ONLY incoming edge is that edge (single-in / single-out chain).
       Merged events = A.events ++ B.events (A ran before B), merged successors =
       B.successors. NEVER merges across a branch / loop boundary (true/false/
       case/default/back edges, or any block with >1 in/out edge, are left alone).

  4. unreachable prune  (`_prune_unreachable`)
       Blocks with no path from the entry (e.g. T7's `_fresh()` dead-text blocks
       created after a return/goto) are dropped. They are on no execution path, so
       they never appear in the flattened event stream anyway.

------------------------------------------------------------------------------
THE INVARIANT (asserted by the self-test, both before & after)
------------------------------------------------------------------------------
normalization changes ONLY structural granularity, NEVER observable event order.
Concretely: the global flattened CALL/WRITE/RET sequence -- the events of class
SEQUENCED with verb CALL/WRITE/RET, in entry-rooted DFS pre-order -- is INVARIANT
under `normalize()`. `flatten_events(cfg)` computes it; the self-test asserts
`flatten_events(cfg) == flatten_events(normalize(cfg))`.

Why each pass preserves it:
  * merge concatenates predecessor-then-successor (A before B), preserving order;
  * empty-elim removes only EMPTY blocks and redirects edge TARGETS in place
    (keeping each predecessor's edge POSITION), so DFS pre-order is unchanged;
  * the `||`/`&&` split only rewrites `if/while/for-cond` MARKER events (which are
    NOT CALL/WRITE/RET) and inserts marker-only blocks while keeping the true-edge
    before the false-edge, so the CALL/WRITE/RET stream is untouched;
  * pruning drops blocks that are unreachable from entry, which never contributed
    to the entry-rooted flatten.

------------------------------------------------------------------------------
STAGE-AGNOSTIC
------------------------------------------------------------------------------
normalize() works at the STRUCTURAL stage (T7/T12 raw text with `if (...)`
markers -- where the `||` reconciliation actually fires, since the condition text
is still present) AND harmlessly at the EVENT stage (after T8/T14 have replaced
raw text with canonical CALL/READ/WRITE/RET -- no markers remain, so the split
pass is a no-op while empty-elim / merge / prune still reduce granularity).

This module imports `efv_model` (the T5 data-model contract) and the pure-text
splitter `_split_top_level` from `efv_cpp_cfg` (importing does not modify it). It
does NOT modify efv_ida_cfg / efv_cpp_cfg / efv_model and adds NO dependencies.

Public API:  normalize(cfg) -> efv_model.CFG
             flatten_events(cfg, kinds=...) -> list[str]   (invariant helper)
"""

import os
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
if _HERE not in sys.path:
    sys.path.insert(0, _HERE)

# Stable data-model contract (T5). MUST use this exact API.
from efv_model import (
    CFG,
    Block,
    EDGE_TRUE,
    EDGE_FALSE,
    EDGE_FALLTHROUGH,
    EDGE_BACK,
    VERB_CALL,
    VERB_WRITE,
    VERB_RET,
    event_verb,
)

# The C++ side's depth-0 `||`/`&&` text splitter (T12). Reused VERBATIM so the
# IDA-side split decomposes a condition into EXACTLY the same atoms the C++ side
# did -- guaranteeing the two normalized CFGs align at every short-circuit. Import
# only (efv_cpp_cfg has no import-time side effects; its self-test is __main__-gated).
from efv_cpp_cfg import _split_top_level

__all__ = ["normalize", "flatten_events"]


# Recognised condition-test markers (the C++ side also emits "switch (...)", which
# is NOT a short-circuit and is deliberately NOT split here).
_TEST_KEYWORDS = ("for-cond", "while", "if")

# CALL/WRITE/RET verbs -- the SEQUENCED events whose global order must be invariant.
_SEQ_KINDS = (VERB_CALL, VERB_WRITE, VERB_RET)


# ============================================================
# Test-marker event parsing  ("if (<cond>)" / "while (<cond>)" / "for-cond (<cond>)")
# ============================================================

def _parse_test_event(event_str):
    """If `event_str` is a condition-test marker, return (keyword, inner_cond);
    else (None, None). Recognises `if (...)`, `while (...)`, `for-cond (...)` and
    strips the outer parentheses. `switch (...)` is intentionally NOT matched."""
    if not event_str:
        return None, None
    for kw in _TEST_KEYWORDS:
        prefix = kw + " ("
        if event_str.startswith(prefix) and event_str.endswith(")"):
            return kw, event_str[len(prefix):-1]
    return None, None


def _make_test_event(kw, cond):
    """Canonical test-marker string: `kw + " (" + cond + ")"`."""
    return kw + " (" + cond + ")"


def _is_test_event(event_str):
    """True if `event_str` is a condition-test marker."""
    return _parse_test_event(event_str)[0] is not None


# ============================================================
# CFG copy + id allocation
# ============================================================

def _copy_cfg(cfg):
    """A deep-enough copy: new CFG with new Block objects and copied event /
    successor lists, so normalize() never mutates the caller's CFG."""
    new = CFG(cfg.entry_id)
    for bid, b in cfg.blocks.items():
        new.add_block(Block(bid, list(b.ordered_events), list(b.successors)))
    return new


def _alloc_block(g):
    """Create + register a fresh Block whose id collides with no existing id.
    Integer ids extend past the current max; mixed/other id types probe upward."""
    int_ids = [k for k in g.blocks if isinstance(k, int)]
    nid = (max(int_ids) + 1) if int_ids else 0
    while nid in g.blocks:
        nid += 1
    return g.new_block(nid)


def _incoming_edge_counts(g):
    """dict[target_id -> number of incoming EDGES] over all current blocks."""
    counts = {}
    for b in g.blocks.values():
        for (tgt, _lbl) in b.successors:
            counts[tgt] = counts.get(tgt, 0) + 1
    return counts


# ============================================================
# Pass 1 : short-circuit `||` / `&&` reconciliation
# ============================================================

def _split_atoms(cond):
    """Decompose `cond` into short-circuit atoms EXACTLY as
    `efv_cpp_cfg._CppBuilder._lower_cond` does: split at depth-0 `||` into OR
    operands, then each operand at depth-0 `&&` into AND atoms. Returns
    `(atoms, num_or_operands)` where each atom is
    `(text, or_operand_index, is_last_and_in_operand)`."""
    or_ops = _split_top_level(cond, "||")
    if not or_ops:
        or_ops = [cond.strip()]
    atoms = []
    for oi, or_op in enumerate(or_ops):
        and_ops = _split_top_level(or_op, "&&")
        if not and_ops:
            and_ops = [or_op.strip()]
        for aj, atom in enumerate(and_ops):
            atoms.append((atom, oi, aj == len(and_ops) - 1))
    return atoms, len(or_ops)


def _try_split_condition_block(g, block):
    """If `block` is a flattened short-circuit condition block, split it into a
    chain of single-atom condition blocks mirroring the C++ side. Returns True if
    a split happened.

    A block qualifies iff its LAST event is a test marker (if/while/for-cond) and
    it has EXACTLY two successors -- one EDGE_FALSE and one non-FALSE (EDGE_TRUE
    for if/while/for, EDGE_BACK for a do-while tail) -- and the condition contains
    a depth-0 `||` or `&&` (>1 atom). The wiring reproduces
    `efv_cpp_cfg._CppBuilder._lower_cond` bit-for-bit."""
    if not block.ordered_events:
        return False
    ti = len(block.ordered_events) - 1
    kw, cond = _parse_test_event(block.ordered_events[ti])
    if kw is None:
        return False

    if len(block.successors) != 2:
        return False
    false_succ = [(t, l) for (t, l) in block.successors if l == EDGE_FALSE]
    true_succ = [(t, l) for (t, l) in block.successors if l != EDGE_FALSE]
    if len(false_succ) != 1 or len(true_succ) != 1:
        return False
    false_id = false_succ[0][0]
    true_id = true_succ[0][0]
    final_true_edge = true_succ[0][1]   # EDGE_TRUE, or EDGE_BACK for a do-while tail

    atoms, n_or = _split_atoms(cond)
    if len(atoms) <= 1:
        return False                    # single atom: nothing to reconcile

    # The first atom REUSES `block` (keeping its id + pre-test events); the rest
    # become fresh blocks. Replace the flattened test with the first atom's test.
    pre = block.ordered_events[:ti]
    block.ordered_events = list(pre)
    block.ordered_events.append(_make_test_event(kw, atoms[0][0]))

    chain = [block]
    for k in range(1, len(atoms)):
        nb = _alloc_block(g)
        nb.add_event(_make_test_event(kw, atoms[k][0]))
        chain.append(nb)

    # First block of each OR operand = short-circuit-failure target of the operand
    # before it (mirrors `_lower_cond`'s `operand_first`).
    operand_first = {}
    for k, (_atom, oi, _last) in enumerate(atoms):
        operand_first.setdefault(oi, chain[k])

    def or_fail_target(oi):
        if oi >= n_or - 1:
            return false_id
        return operand_first[oi + 1].id

    for k, (_atom, oi, is_last_and) in enumerate(atoms):
        bk = chain[k]
        bk.successors = []
        if is_last_and:
            bk.add_successor(true_id, final_true_edge)
        else:
            bk.add_successor(chain[k + 1].id, EDGE_TRUE)
        bk.add_successor(or_fail_target(oi), EDGE_FALSE)
    return True


def _split_short_circuit_conditions(g):
    """Split every flattened short-circuit condition block. Returns True if any
    split happened. Iterates over a snapshot of the original ids (the new atom
    blocks are single-atom -> never re-split, so one snapshot pass suffices)."""
    changed = False
    for bid in list(g.blocks.keys()):
        b = g.blocks.get(bid)
        if b is not None and _try_split_condition_block(g, b):
            changed = True
    return changed


# ============================================================
# Pass 2 : empty-block elimination
# ============================================================

def _eliminate_empty_blocks(g):
    """Bypass + remove ONE empty single-successor block; return True if removed.
    Every edge `P -> E` becomes `P -> T` (keeping P's label); E is dropped. If E
    was the entry, the entry moves to T. Returns after one removal so the caller's
    fixpoint loop re-derives state (kept simple; CFGs are tiny)."""
    for eid in list(g.blocks.keys()):
        e = g.blocks[eid]
        if len(e.ordered_events) != 0:
            continue
        if len(e.successors) != 1:
            continue
        target = e.successors[0][0]
        if target == eid:
            continue                    # degenerate empty self-loop: leave it
        for p in g.blocks.values():
            if p is e:
                continue
            redirected = []
            touched = False
            for (tgt, lbl) in p.successors:
                if tgt == eid:
                    redirected.append((target, lbl))
                    touched = True
                else:
                    redirected.append((tgt, lbl))
            if touched:
                p.successors = redirected
        if g.entry_id == eid:
            g.entry_id = target
        del g.blocks[eid]
        return True
    return False


# ============================================================
# Pass 3 : fallthrough merge
# ============================================================

def _merge_fallthrough_chains(g):
    """Coalesce ONE single-in/single-out fallthrough pair A -> B; return True if
    merged. A's only edge must be a FALLTHROUGH to B, and B's only incoming edge
    must be that edge. Merged: A.events ++= B.events, A.successors = B.successors,
    B removed. NEVER crosses a branch/loop boundary."""
    incoming = _incoming_edge_counts(g)
    for aid in list(g.blocks.keys()):
        a = g.blocks.get(aid)
        if a is None or len(a.successors) != 1:
            continue
        (bid, lbl) = a.successors[0]
        if lbl != EDGE_FALLTHROUGH:
            continue
        if bid == aid or bid == g.entry_id or bid not in g.blocks:
            continue
        if incoming.get(bid, 0) != 1:   # B must have exactly one predecessor edge
            continue
        b = g.blocks[bid]
        a.ordered_events = a.ordered_events + b.ordered_events
        a.successors = list(b.successors)
        del g.blocks[bid]
        return True
    return False


# ============================================================
# Pass 4 : unreachable prune
# ============================================================

def _prune_unreachable(g):
    """Drop every block with no path from the entry; return True if any removed.
    Reachable blocks never point to unreachable ones, so survivors keep no
    dangling edges."""
    reachable = g.reachable_blocks()
    removed = False
    for bid in list(g.blocks.keys()):
        if bid not in reachable:
            del g.blocks[bid]
            removed = True
    return removed


# ============================================================
# Public : normalize
# ============================================================

def normalize(cfg):
    """Normalize `cfg` and return a NEW CFG (the input is never mutated).

    Reconciles short-circuit `||`/`&&` (splitting flattened IDA conditions to
    mirror the C++ side), eliminates empty blocks, merges single-in/single-out
    fallthrough chains, and prunes unreachable blocks -- reducing block-granularity
    differences between the IDA and C++ CFGs WITHOUT changing observable event
    order (the global flattened CALL/WRITE/RET sequence is invariant)."""
    g = _copy_cfg(cfg)

    # Pass 1 (once): reconcile short-circuits. New atom blocks are single-atom so
    # they are never re-split -- a single snapshot pass is sufficient.
    _split_short_circuit_conditions(g)

    # Passes 2-4 to a fixpoint. Each pass only removes/merges blocks, so the block
    # count is monotonically non-increasing and the loop terminates.
    changed = True
    while changed:
        changed = False
        if _prune_unreachable(g):
            changed = True
        if _eliminate_empty_blocks(g):
            changed = True
        if _merge_fallthrough_chains(g):
            changed = True
    return g


# ============================================================
# Invariant helper : flattened SEQUENCED (CALL/WRITE/RET) event stream
# ============================================================

def flatten_events(cfg, kinds=_SEQ_KINDS):
    """The global flattened event stream used to assert order-invariance: events
    whose verb is in `kinds` (default CALL/WRITE/RET), collected in entry-rooted
    DFS pre-order (honouring successor edge order, each block once). This is the
    quantity normalize() must NOT change."""
    kindset = set(kinds)
    out = []
    for bid in cfg.traverse(order="dfs"):
        for e in cfg.get_block(bid).ordered_events:
            if event_verb(e) in kindset:
                out.append(e)
    return out


def _flatten_nonmarker(cfg):
    """All events in entry-rooted DFS pre-order EXCEPT condition-test markers
    (if/while/for-cond). Used as a STRONGER structural order check at the raw-text
    stage, where canonical CALL/WRITE/RET events do not yet exist: the split pass
    only rewrites markers, so this stream must also be invariant."""
    out = []
    for bid in cfg.traverse(order="dfs"):
        for e in cfg.get_block(bid).ordered_events:
            if not _is_test_event(e):
                out.append(e)
    return out


def _count_test_markers(cfg):
    """Number of condition-test marker EVENTS reachable from entry (== number of
    condition blocks, since each holds exactly one)."""
    n = 0
    for bid in cfg.traverse(order="dfs"):
        for e in cfg.get_block(bid).ordered_events:
            if _is_test_event(e):
                n += 1
    return n


def _has_flattened_or_and(cfg):
    """True if ANY reachable test marker still carries a depth-0 `||`/`&&` (i.e. an
    UNreconciled flattened short-circuit)."""
    for bid in cfg.traverse(order="dfs"):
        for e in cfg.get_block(bid).ordered_events:
            kw, cond = _parse_test_event(e)
            if kw is None:
                continue
            atoms, _n = _split_atoms(cond)
            if len(atoms) > 1:
                return True
    return False


# ============================================================
# CLI : dump normalized CFG from a cache JSON / source file
# ============================================================

def _main(argv):
    import json
    if not argv:
        print("usage: efv_normalize.py <func_0xADDR.json | raw.txt>", file=sys.stderr)
        return 2
    path = argv[0]
    with open(path, "r", encoding="utf-8") as f:
        raw = f.read()
    try:
        data = json.loads(raw)
        text = data.get("decompiled") or data.get("code") or data.get("source") or ""
    except json.JSONDecodeError:
        text = raw
    from efv_ida_cfg import build_ida_cfg
    cfg = build_ida_cfg(text)
    norm = normalize(cfg)
    print("raw  CFG entry={} blocks={}".format(cfg.entry_id, len(cfg)))
    print("norm CFG entry={} blocks={}".format(norm.entry_id, len(norm)))
    for b in norm:
        print("  block {!r:>4} -> {}".format(b.id, b.successors))
        for e in b.ordered_events:
            print("        | {}".format(e))
    return 0


# ============================================================
# Self-test / evidence generator
# ============================================================

# Faithful C++ mirror of BuildingClass::GetPowerOutput @ 0x44E7B0 (structure
# follows the IDA pseudocode: two `||` short-circuits, a do-while loop, nested
# ifs). It does NOT need to compile -- only to parse + reproduce the structure.
_GET_POWER_OUTPUT_CPP = (
    "int BuildingClass::GetPowerOutput()\n"
    "{\n"
    "    int v2 = Type->PowerOutput;\n"
    "    int v10 = v2;\n"
    "    if (IsPoweredDown()) return 0;\n"
    "    if (IsOverpowered) { v2 += Type->OverpowerBonus; v10 = v2; }\n"
    "    if (HasFlag5806 || HasFlag5807) {\n"
    "        int v4 = Type->Field3816;\n"
    "        if (v4 > 0) {\n"
    "            int v5 = ChargeLevel;\n"
    "            if (v5 > 0) { v2 += v5 * v4; v10 = v2; }\n"
    "        }\n"
    "    }\n"
    "    if (HasAnims) {\n"
    "        AnimClass** v6 = Anims;\n"
    "        int v7 = 3;\n"
    "        do {\n"
    "            if (*v6) v2 += (*v6)->Type->Power;\n"
    "            ++v6;\n"
    "            --v7;\n"
    "        } while (v7);\n"
    "        v10 = v2;\n"
    "    }\n"
    "    if (v2 <= 0 || !IsOnline) return 0;\n"
    "    double HealthRatio = GetHealthRatio();\n"
    "    return Math::RoundToInt(HealthRatio * (double)v10);\n"
    "}\n"
)


def _build_synthetic_event_cfg():
    """A small EVENT-stage CFG (canonical CALL/WRITE/RET events) with empty join
    blocks + a fallthrough chain, to test the CALL/WRITE/RET order invariant and
    that normalize() reduces block granularity. Shape:

        0 (CALL,WRITE) --ft--> 1 (CALL) --ft--> 2 (empty join)
        0 ----------------------------------true--> 3 (WRITE,RET)  [a branch]
        2 --ft--> 4 (CALL,RET)

    Here block 0 is a real condition (true->3, fallthrough->1); 1->2 and 2->4 are
    single-in/single-out fallthroughs (mergeable); 2 is an empty join (removable).
    """
    from efv_model import call_direct, write_member
    g = CFG(0)
    b0 = g.new_block(0, [call_direct(0x401000), write_member(8)])
    b1 = g.new_block(1, [call_direct(0x402000)])
    b2 = g.new_block(2, [])                                  # empty join
    b3 = g.new_block(3, [write_member(12), VERB_RET])
    b4 = g.new_block(4, [call_direct(0x403000), VERB_RET])
    b0.add_successor(b3.id, EDGE_TRUE)                       # branch: true -> 3
    b0.add_successor(b1.id, EDGE_FALLTHROUGH)                # else fallthrough -> 1
    b1.add_successor(b2.id, EDGE_FALLTHROUGH)
    b2.add_successor(b4.id, EDGE_FALLTHROUGH)
    return g


def _build_synthetic_marker_cfg():
    """A small STRUCTURAL-stage CFG that interleaves a FLATTENED `||` condition
    marker with canonical CALL/WRITE/RET events, to prove the split pass does NOT
    perturb the CALL/WRITE/RET stream. Shape:

        0: [CALL(0x1), if (a || b)]  true->1  false->2
        1: [WRITE(member,4), RET]
        2: [CALL(0x2), RET]
    """
    from efv_model import call_direct, write_member
    g = CFG(0)
    b0 = g.new_block(0, [call_direct(0x1), "if (a || b)"])
    b1 = g.new_block(1, [write_member(4), VERB_RET])
    b2 = g.new_block(2, [call_direct(0x2), VERB_RET])
    b0.add_successor(b1.id, EDGE_TRUE)
    b0.add_successor(b2.id, EDGE_FALSE)
    return g


def _selftest():
    out = []

    def line(s=""):
        out.append(s)

    checks = []

    def check(name, cond):
        checks.append((name, bool(cond)))
        return bool(cond)

    from efv_ida_cfg import build_ida_cfg
    from efv_cpp_cfg import build_cpp_cfg

    # ---- A: CALL/WRITE/RET order invariant (event-stage synthetic) ----------
    line("=" * 70)
    line("A: CALL/WRITE/RET order invariant + granularity reduction (synthetic)")
    line("=" * 70)
    ce = _build_synthetic_event_cfg()
    before = flatten_events(ce)
    n = len(ce)
    norm = normalize(ce)
    after = flatten_events(norm)
    line("  before blocks={} flatten={}".format(n, before))
    line("  after  blocks={} flatten={}".format(len(norm), after))
    check("A: CALL/WRITE/RET flatten invariant under normalize", before == after)
    check("A: block count reduced (empty join + fallthrough merged)", len(norm) < n)
    check("A: input CFG NOT mutated by normalize", len(ce) == n)

    # ---- B: split must not perturb the CALL/WRITE/RET stream ----------------
    line("")
    line("=" * 70)
    line("B: `||` split preserves CALL/WRITE/RET order (structural synthetic)")
    line("=" * 70)
    cm = _build_synthetic_marker_cfg()
    before_b = flatten_events(cm)
    norm_b = normalize(cm)
    after_b = flatten_events(norm_b)
    line("  before markers={} flatten={}".format(_count_test_markers(cm), before_b))
    line("  after  markers={} flatten={}".format(_count_test_markers(norm_b), after_b))
    check("B: CALL/WRITE/RET flatten invariant despite split", before_b == after_b)
    check("B: flattened `if (a || b)` was split into 2 markers",
          _count_test_markers(cm) == 1 and _count_test_markers(norm_b) == 2)
    check("B: no flattened `||`/`&&` marker remains", not _has_flattened_or_and(norm_b))

    # ---- C: GetPowerOutput -- IDA vs C++ reconciliation ---------------------
    line("")
    line("=" * 70)
    line("C: BuildingClass::GetPowerOutput 0x44E7B0 -- IDA vs C++ normalize")
    line("=" * 70)
    cache_path = os.path.join(_HERE, "..", ".omo", "ida_cache", "func_0x44E7B0.json")
    ida_text = ""
    if os.path.exists(cache_path):
        import json
        with open(cache_path, "r", encoding="utf-8") as f:
            ida_text = json.load(f).get("decompiled", "")
    check("C: IDA cache func_0x44E7B0.json present + decompiled text loaded",
          bool(ida_text))

    ida_cfg = build_ida_cfg(ida_text)
    cpp_cfg = build_cpp_cfg(_GET_POWER_OUTPUT_CPP)

    ida_blocks_before = len(ida_cfg)
    cpp_blocks_before = len(cpp_cfg)
    ida_markers_before = _count_test_markers(ida_cfg)
    cpp_markers_before = _count_test_markers(cpp_cfg)
    ida_flat_struct_before = _flatten_nonmarker(ida_cfg)
    cpp_flat_struct_before = _flatten_nonmarker(cpp_cfg)

    ida_norm = normalize(ida_cfg)
    cpp_norm = normalize(cpp_cfg)

    ida_blocks_after = len(ida_norm)
    cpp_blocks_after = len(cpp_norm)
    ida_markers_after = _count_test_markers(ida_norm)
    cpp_markers_after = _count_test_markers(cpp_norm)

    gap_before = abs(ida_blocks_before - cpp_blocks_before)
    gap_after = abs(ida_blocks_after - cpp_blocks_after)

    line("  block counts : IDA {} -> {}   C++ {} -> {}".format(
        ida_blocks_before, ida_blocks_after, cpp_blocks_before, cpp_blocks_after))
    line("  block-count gap (|IDA-C++|): before={}  after={}".format(
        gap_before, gap_after))
    line("  condition markers : IDA {} -> {}   C++ {} -> {}".format(
        ida_markers_before, ida_markers_after, cpp_markers_before, cpp_markers_after))
    line("  IDA  flattened `||`/`&&` remaining after normalize : {}".format(
        _has_flattened_or_and(ida_norm)))
    line("  C++  flattened `||`/`&&` remaining after normalize : {}".format(
        _has_flattened_or_and(cpp_norm)))

    # The headline: the two `||` short-circuits flatten on the IDA side BEFORE
    # normalize, so IDA has 2 FEWER condition markers than the (pre-split) C++
    # side. After normalize, the IDA side has split them and the counts EQUALISE.
    check("C: BEFORE -- IDA markers fewer than C++ (the `||` divergence)",
          ida_markers_before < cpp_markers_before)
    check("C: BEFORE -- IDA still carries a flattened `||`/`&&` marker",
          _has_flattened_or_and(ida_cfg))
    check("C: AFTER -- IDA & C++ condition-marker counts ALIGN",
          ida_markers_after == cpp_markers_after)
    check("C: AFTER -- no flattened `||`/`&&` survives on EITHER side",
          (not _has_flattened_or_and(ida_norm))
          and (not _has_flattened_or_and(cpp_norm)))
    check("C: AFTER -- block-count gap did NOT grow (became comparable)",
          gap_after <= gap_before)
    check("C: the two `||` sites each became 2 markers on the IDA side (+2)",
          ida_markers_after == ida_markers_before + 2)

    # Structural order invariant on the real GetPowerOutput CFGs (raw-text stage):
    # the non-marker event stream must be untouched by normalize on BOTH sides.
    check("C: IDA non-marker event order invariant under normalize",
          _flatten_nonmarker(ida_norm) == ida_flat_struct_before)
    check("C: C++ non-marker event order invariant under normalize",
          _flatten_nonmarker(cpp_norm) == cpp_flat_struct_before)

    # ---- D: idempotence + entry preservation --------------------------------
    line("")
    line("=" * 70)
    line("D: idempotence + entry preservation")
    line("=" * 70)
    twice = normalize(ida_norm)
    check("D: normalize is idempotent (normalize(normalize(x)) == normalize(x))",
          len(twice) == len(ida_norm)
          and flatten_events(twice) == flatten_events(ida_norm))
    check("D: entry block survives normalization (IDA)", ida_norm.entry() is not None)
    check("D: entry block survives normalization (C++)", cpp_norm.entry() is not None)

    # ---- summary ------------------------------------------------------------
    line("")
    line("=" * 70)
    line("CHECKS")
    line("=" * 70)
    all_pass = True
    for name, ok in checks:
        line("  [{}] {}".format("PASS" if ok else "FAIL", name))
        all_pass = all_pass and ok
    line("")
    line("RESULT: {} ({} checks)".format(
        "ALL PASS" if all_pass else "FAILURE", len(checks)))

    report = "\n".join(out)
    print(report)
    return 0 if all_pass else 1


if __name__ == "__main__":
    if len(sys.argv) > 1 and sys.argv[1] != "--selftest":
        sys.exit(_main(sys.argv[1:]))
    sys.exit(_selftest())
