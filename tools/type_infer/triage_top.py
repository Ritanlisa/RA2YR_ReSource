"""T11-lite TOP triage: evidence chains from anchors to TOP conflict roots.

For a given conflict pair (typeA, typeB), reconstructs the shortest labeled
propagation path from an anchor of each type to a recorded TOP root. The path
shows exactly which constraint edges (ASSIGN/CALL/CALL_ARG/RETURN/...) bridge
the conflicting evidence — the input for follow-up IDA decompilation.

Usage:
  python -m tools.type_infer.triage_top [--pair "MouseClass|int"] [--roots N]
"""

import argparse
import contextlib
import sys
from collections import Counter, defaultdict, deque

from .engine import TypeInferenceEngine, _name, _edge_skips_adjacency


def build_labeled_adjacency(engine):
    """Mirror step_steensgaard's adjacency construction but keep edge labels."""
    ssa = engine._scoped_to_name
    labeled = defaultdict(list)  # var_id -> [(other_id, ctype, callee, raw_from, raw_to)]
    for i, c in enumerate(engine.constraints):
        sfrom, sto = ssa[i]
        fid = engine.var_to_id.get(sfrom)
        tid = engine.var_to_id.get(sto)
        if fid is None or tid is None:
            continue
        if _edge_skips_adjacency(sfrom, sto):
            continue
        ctype = c.get("type", "?")
        callee = c.get("callee_name", "")
        labeled[fid].append((tid, ctype, callee, c.get("from", ""), c.get("to", "")))
        labeled[tid].append((fid, ctype, callee, c.get("to", ""), c.get("from", "")))
    return labeled


def bfs_anchor_path(engine, labeled, start_root, wanted_type, max_depth=8):
    """Shortest path start_root → nearest anchor whose type == wanted_type."""
    anchor_by_var = engine.anchor_by_var
    prev = {start_root: None}
    q = deque([(start_root, 0)])
    while q:
        vid, d = q.popleft()
        if d > max_depth:
            continue
        for anch in anchor_by_var.get(vid, ()):
            if _name(anch.lattice_type) == wanted_type:
                # reconstruct path
                path = []
                cur = vid
                while cur is not None:
                    path.append(cur)
                    cur = prev[cur]
                path.reverse()
                return anch, path
        if d == max_depth:
            continue
        for (nxt, ctype, callee, rf, rt) in labeled.get(vid, ()):
            if nxt not in prev:
                prev[nxt] = vid
                q.append((nxt, d + 1))
    return None, None


def render_path(engine, labeled, path):
    parts = [engine.id_to_var[path[0]]]
    for i in range(1, len(path)):
        # find the edge label between path[i-1] and path[i]
        labels = [
            (ct, callee)
            for (nxt, ct, callee, rf, rt) in labeled.get(path[i - 1], ())
            if nxt == path[i]
        ]
        ct = labels[0][0] if labels else "?"
        callee = labels[0][1] if labels else ""
        edge = f" --{ct}"
        if callee:
            edge += f"({callee})"
        parts.append(edge)
        parts.append(engine.id_to_var[path[i]])
    return "".join(parts)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--pair", default="MouseClass|int",
                    help="conflict pair as typeA|typeB")
    ap.add_argument("--roots", type=int, default=5,
                    help="max TOP roots to trace")
    ap.add_argument("--max-depth", type=int, default=8)
    args = ap.parse_args()

    ta, tb = args.pair.split("|")

    engine = TypeInferenceEngine()
    with contextlib.redirect_stdout(sys.stderr):
        engine.load_all()
        engine.step_steensgaard()
        engine.step_propagate()

    labeled = build_labeled_adjacency(engine)

    # find TOP roots that have both types within reach
    eq = engine.eq_types
    anchors_by_type = defaultdict(list)
    for a in engine.anchors:
        anchors_by_type[_name(a.lattice_type)].append(a)

    print(f"# triage pair: {ta} x {tb}")
    print(f"# anchors: {len(anchors_by_type.get(ta, []))} x "
          f"{len(anchors_by_type.get(tb, []))}", flush=True)

    # For each anchor of type_a, check whether a type_b anchor is within
    # max_depth through the labeled graph — report shortest bridging chains.
    traced = 0
    pairs_seen = set()
    for anch_a in anchors_by_type.get(ta, []):
        aid = anch_a.var_id
        root_a = engine.uf.find(aid)
        # BFS from anchor a to nearest anchor of type b
        anch_b, path = bfs_anchor_path(
            engine, labeled, aid, tb, max_depth=args.max_depth)
        if path is None:
            continue
        key = (engine.id_to_var[path[0]], engine.id_to_var[path[-1]])
        if key in pairs_seen:
            continue
        pairs_seen.add(key)
        traced += 1
        print(f"\n== chain {traced}: {ta} anchor -> {tb} anchor (len {len(path)-1}) ==")
        print(f"  root type at meet site: {_name(eq.get(root_a, 0))}")
        print("  " + render_path(engine, labeled, path))
        # show anchor details
        for vid in (path[0], path[-1]):
            for anch in engine.anchor_by_var.get(vid, ()):
                print(f"    anchor@{engine.id_to_var[vid]}: "
                      f"{_name(anch.lattice_type)} ({anch.source})")
        if traced >= args.roots:
            break

    if traced == 0:
        print(f"# no {ta}|{tb} anchor pairs within {args.max_depth} hops")


if __name__ == "__main__":
    main()
