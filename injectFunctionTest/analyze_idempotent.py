#!/usr/bin/env python3
"""
SCC fixed-point idempotency analysis.

Reads purity_effects.json (direct .data R/W per function) and propagates
effects through the direct callgraph using Tarjan SCC + fixed-point iteration.

Determines three-state idempotency:
  TRUE      — R ∩ W = ∅ AND no unresolved indirect calls
  FALSE     — R ∩ W ≠ ∅ (direct or transitive)
  UNCERTAIN — has indirect calls that cannot be resolved statically

Output: idempotent_results.json + idempotent_audit.txt

Phase 1+2 only. Phase 3 (vtable resolution) will reduce UNCERTAIN count.
"""

import json
import sys
import time
from collections import defaultdict
from pathlib import Path


# ============================================================
# Tarjan SCC algorithm
# ============================================================

def tarjan_scc(graph: dict[str, set[str]]) -> list[list[str]]:
    """Return SCCs in reverse topological order (leaves first)."""
    index_counter = [0]
    index: dict[str, int] = {}
    lowlink: dict[str, int] = {}
    onstack: dict[str, bool] = defaultdict(bool)
    stack: list[str] = []
    sccs: list[list[str]] = []

    def strongconnect(v: str):
        index[v] = index_counter[0]
        lowlink[v] = index_counter[0]
        index_counter[0] += 1
        stack.append(v)
        onstack[v] = True

        for w in graph.get(v, set()):
            if w not in index:
                strongconnect(w)
                lowlink[v] = min(lowlink[v], lowlink[w])
            elif onstack.get(w, False):
                lowlink[v] = min(lowlink[v], index[w])

        if lowlink[v] == index[v]:
            scc = []
            while True:
                w = stack.pop()
                onstack[w] = False
                scc.append(w)
                if w == v:
                    break
            sccs.append(scc)

    for v in graph:
        if v not in index:
            strongconnect(v)

    return sccs  # Already in reverse topological order (leaf SCCs first)


# ============================================================
# Core analysis
# ============================================================

def analyze(purity_path: Path, annotations_path: Path,
            output_dir: Path) -> tuple[dict, dict]:
    """Run full SCC fixed-point idempotency analysis."""

    t0 = time.time()

    # --- Load data ---
    with open(purity_path, "r", encoding="utf-8") as f:
        purity = json.load(f)

    funcs = purity["funcs"]
    total = len(funcs)
    print(f"Loaded {total} functions from {purity_path}")

    # --- Build callgraph (direct calls only) ---
    # Graph: addr → set{callee_addrs}
    callgraph: dict[str, set[str]] = {}
    # Reverse graph for callers lookup
    callers: dict[str, set[str]] = defaultdict(set)

    for addr, entry in funcs.items():
        callees = set()
        for cd in entry.get("cd", []):
            callee_addr = cd[2:] if cd.startswith("0x") else cd  # strip "0x" prefix
            if callee_addr in funcs:
                callees.add(callee_addr)
                callers[callee_addr].add(addr)
        if callees:
            callgraph[addr] = callees

    # All functions are nodes (even if no callees)
    for addr in funcs:
        if addr not in callgraph:
            callgraph[addr] = set()

    print(f"Callgraph: {sum(1 for v in callgraph.values() if v)} functions with direct calls")
    print(f"Edges: {sum(len(v) for v in callgraph.values())}")

    # --- SCC decomposition ---
    sccs = tarjan_scc(callgraph)
    print(f"SCCs: {len(sccs)} (largest {max(len(s) for s in sccs)})")

    # --- Initialize summaries ---
    # Summary per function
    class Summary:
        __slots__ = ("R", "W")
        def __init__(self):
            self.R: set[str] = set()
            self.W: set[str] = set()
        def __repr__(self):
            return f"R={len(self.R)} W={len(self.W)}"

    summary: dict[str, Summary] = {}
    for addr, entry in funcs.items():
        s = Summary()
        for r in entry.get("r", []):
            s.R.add(r)
        for w in entry.get("w", []):
            s.W.add(w)
        summary[addr] = s

    # --- Fixed-point propagation (bottom-up through SCCs) ---
    iterations = 0
    for scc in sccs:
        if len(scc) == 1:
            addr = scc[0]
            # Check self-loop (function calls itself)
            has_self_loop = addr in callgraph.get(addr, set())
            if not has_self_loop:
                # Single node, no self-loop: add callee effects once
                for callee in callgraph.get(addr, set()):
                    if callee in summary:
                        summary[addr].R |= summary[callee].R
                        summary[addr].W |= summary[callee].W
                iterations += 1
                continue

        # SCC or self-loop: iterate to fixed point
        changed = True
        while changed:
            changed = False
            for addr in scc:
                s = summary[addr]
                prev_R = s.R.copy()
                prev_W = s.W.copy()
                for callee in callgraph.get(addr, set()):
                    if callee in summary:
                        s.R |= summary[callee].R
                        s.W |= summary[callee].W
                if s.R != prev_R or s.W != prev_W:
                    changed = True
            iterations += 1

    print(f"Propagation: {iterations} iterations over {len(sccs)} SCCs")

    # --- Determine idempotency ---
    results: dict[str, str] = {}       # addr → "TRUE" | "FALSE" | "UNCERTAIN"
    audit_info: dict[str, str] = {}    # addr → reason string

    stats = {"TRUE": 0, "FALSE": 0, "UNCERTAIN": 0,
             "direct_false": 0, "transitive_false": 0, "indirect_uncertain": 0}

    for addr, entry in funcs.items():
        s = summary[addr]
        has_indirect = entry.get("ci", False)
        has_vtable = entry.get("cv", False)
        has_ptr_param = entry.get("pp", False)

        # Direct .data conflict?
        direct_R = set(entry.get("r", []))
        direct_W = set(entry.get("w", []))
        if direct_R & direct_W:
            results[addr] = "FALSE"
            audit_info[addr] = "direct R∩W≠∅"
            stats["FALSE"] += 1
            stats["direct_false"] += 1
            continue

        # Transitive .data conflict?
        if s.R & s.W:
            results[addr] = "FALSE"
            audit_info[addr] = f"transitive R∩W≠∅ (R:{len(s.R)} W:{len(s.W)} overlap:{len(s.R & s.W)})"
            stats["FALSE"] += 1
            stats["transitive_false"] += 1
            continue

        # Has unresolvable indirect calls?
        if has_indirect:
            results[addr] = "UNCERTAIN"
            detail = "vtable" if has_vtable else "indirect"
            audit_info[addr] = f"unresolved {detail} calls"
            stats["UNCERTAIN"] += 1
            stats["indirect_uncertain"] += 1
            continue

        # Has pointer params (Phase 3 handles these)
        if has_ptr_param:
            results[addr] = "UNCERTAIN"
            audit_info[addr] = "has pointer parameters (Phase 3)"
            stats["UNCERTAIN"] += 1
            continue

        # Clean — idempotent
        results[addr] = "TRUE"
        audit_info[addr] = f"R∩W=∅ (R:{len(s.R)} W:{len(s.W)})"
        stats["TRUE"] += 1

    # --- Write results ---
    output_dir.mkdir(parents=True, exist_ok=True)

    results_path = output_dir / "idempotent_results.json"
    with open(results_path, "w", encoding="utf-8") as f:
        json.dump(results, f, indent=2, ensure_ascii=False)

    # --- Audit report ---
    elapsed = time.time() - t0
    audit_path = output_dir / "idempotent_audit.txt"
    with open(audit_path, "w", encoding="utf-8") as f:
        f.write("=" * 60 + "\n")
        f.write("IDEMPOTENCY ANALYSIS REPORT\n")
        f.write("=" * 60 + "\n\n")
        f.write(f"Total functions analyzed: {total:,}\n")
        f.write(f"  TRUE:      {stats['TRUE']:>8,} ({stats['TRUE']*100/total:.1f}%)\n")
        f.write(f"  FALSE:     {stats['FALSE']:>8,} ({stats['FALSE']*100/total:.1f}%)\n")
        f.write(f"    direct R∩W≠∅:      {stats['direct_false']:,}\n")
        f.write(f"    transitive R∩W≠∅:  {stats['transitive_false']:,}\n")
        f.write(f"  UNCERTAIN: {stats['UNCERTAIN']:>8,} ({stats['UNCERTAIN']*100/total:.1f}%)\n")
        f.write(f"    unresolved indirect/vtable calls: {stats['indirect_uncertain']:,}\n")
        f.write(f"\nAnalysis time: {elapsed:.1f}s\n")
        f.write(f"SCCs: {len(sccs)}, largest: {max(len(s) for s in sccs) if sccs else 0}\n\n")

        # --- Top conflicts (FALSE + UNCERTAIN for commonly hooked functions) ---
        f.write("-" * 60 + "\n")
        f.write("FALSE — non-idempotent (direct R∩W≠∅):\n")
        false_direct = [(a, audit_info.get(a, ""))
                        for a, r in results.items() if r == "FALSE"
                        and "direct" in audit_info.get(a, "")]
        false_direct.sort()
        for addr, reason in false_direct[:20]:
            name = funcs[addr].get("n", "?")
            f.write(f"  {addr} {name}\n    {reason}\n")

        f.write("\n" + "-" * 60 + "\n")
        f.write("UNCERTAIN — unresolved indirect calls (top 20):\n")
        uncertain = [(a, audit_info.get(a, ""))
                     for a, r in results.items() if r == "UNCERTAIN"
                     and "unresolved" in audit_info.get(a, "")]
        uncertain.sort()
        for addr, reason in uncertain[:20]:
            name = funcs[addr].get("n", "?")
            f.write(f"  {addr} {name}\n    {reason}\n")

        # --- XSurface function verdicts ---
        xsurface_addrs = ["007BAEB0", "007BAE60", "007BAF90", "007BAF10",
                          "007BAB90", "007BA610", "007BA5E0", "007BA8C0",
                          "007BBAB0", "007BADC0", "007BAD90", "007BB350",
                          "007BC2B0"]
        f.write("\n" + "-" * 60 + "\n")
        f.write("XSurface (13 current Inject hooks):\n")
        for addr in xsurface_addrs:
            verdict = results.get(addr, "MISSING")
            name = funcs.get(addr, {}).get("n", "?")
            reason = audit_info.get(addr, "")
            f.write(f"  {addr} {verdict:10s} {name}\n    {reason}\n")

    print(f"\nResults: {stats}")
    print(f"Written: {results_path}")
    print(f"Written: {audit_path}")
    return results, audit_info


# ============================================================
# CLI entry point
# ============================================================

def main():
    script_dir = Path(__file__).parent

    purity_path = script_dir / "purity_effects.json"
    annotations_path = script_dir / "annotations.json"
    output_dir = script_dir  # write to same dir (build system can override)

    # Allow output dir override via argv
    if len(sys.argv) > 1:
        output_dir = Path(sys.argv[1])

    if not purity_path.exists():
        print(f"FATAL: {purity_path} not found. Run ida_extract_purity.py first.")
        sys.exit(1)

    results, audit = analyze(purity_path, annotations_path, output_dir)


if __name__ == "__main__":
    main()
