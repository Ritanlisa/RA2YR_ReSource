"""
Step 3 of class inference: Greedy constraint propagation + minimization.

Loads 1,019 candidate classes, then greedily merges them using a compatibility
score until no valid merges remain. Uses a priority queue (max-heap) for
efficiency: O(N^2) initial build + O(N^2) total across all merge iterations.

Algorithm:
  1. Build max-heap of all valid merge pairs scored by compatibility
  2. Pop best pair, merge it, push new pairs for merged class
  3. Repeat until no valid merges remain

Usage:
    python tools/minimize_classes.py

Input:  tools/type_infer/candidate_classes.json
Output:
  tools/type_infer/minimal_classes.json  (final class set)
  tools/type_infer/merge_log.json        (list of [a_id, b_id, score])
"""

import json
import os
import sys
import heapq
from collections import defaultdict
from typing import Any

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
CANDIDATE_PATH = os.path.join(SCRIPT_DIR, "type_infer", "candidate_classes.json")
OUTPUT_PATH = os.path.join(SCRIPT_DIR, "type_infer", "minimal_classes.json")


# ── helpers ─────────────────────────────────────────────────────────────────

def jaccard(s1: set, s2: set) -> float:
    """Jaccard similarity of two sets. Returns 0.0 for empty-union."""
    union = s1 | s2
    if not union:
        return 0.0
    return len(s1 & s2) / len(union)


def load_classes(path: str) -> dict[str, dict]:
    with open(path, encoding="utf-8") as f:
        data = json.load(f)
    for cid, cls in data.items():
        cls.setdefault("members", [])
        cls.setdefault("vtable_slots", [])
        cls.setdefault("calls", [])
        cls.setdefault("funcs", [])
    return data


def save_classes(classes: dict[str, dict], path: str) -> None:
    with open(path, "w", encoding="utf-8") as f:
        json.dump(classes, f, indent=2, ensure_ascii=False)
    print(f"  Wrote {len(classes)} classes to {path}")


def merge_two(a: dict, b: dict) -> dict:
    return {
        "members": sorted(set(a["members"]) | set(b["members"])),
        "vtable_slots": sorted(set(a.get("vtable_slots", [])) | set(b.get("vtable_slots", []))),
        "calls": sorted(set(a.get("calls", [])) | set(b.get("calls", []))),
        "funcs": sorted(set(a.get("funcs", [])) | set(b.get("funcs", []))),
    }


# ── precomputation ──────────────────────────────────────────────────────────

def compute_rare_offsets(classes: dict[str, dict]) -> set[int]:
    """Member offsets appearing in <= 5 classes are 'rare' - strong merge signal."""
    counts: dict[int, int] = defaultdict(int)
    for cls in classes.values():
        for off in set(cls["members"]):
            counts[off] += 1
    return {off for off, cnt in counts.items() if cnt <= 5}


def compute_initial_stats(classes: dict[str, dict]) -> dict:
    total = len(classes)
    ms = [len(c["members"]) for c in classes.values()]
    vs = [len(c.get("vtable_slots", [])) for c in classes.values()]
    fs = [len(c.get("funcs", [])) for c in classes.values()]
    return {
        "total_classes": total,
        "with_members": sum(1 for c in classes.values() if len(c["members"]) > 0),
        "with_vtable": sum(1 for c in classes.values() if len(c.get("vtable_slots", [])) > 0),
        "total_func_assignments": sum(fs),
        "min_members": min(ms), "max_members": max(ms),
        "median_members": sorted(ms)[total // 2],
        "min_vtable": min(vs), "max_vtable": max(vs),
    }


# ── validity ────────────────────────────────────────────────────────────────

def _is_valid_merge(a: dict, b: dict, merged: dict, rare_offsets: set[int],
                    calls_a: set, calls_b: set) -> tuple[bool, str]:
    """
    Check validity of merging classes A and B.

    Rules:
    1. Merged class <= 50 member offsets
    2. Coherent: >= 30% of functions share >= 1 member offset
    3. If class has vtable slots: all member-accessing functions share
       at least one common offset (shared base class)
    """
    if len(merged["members"]) > 50:
        return False, ">50 members"

    m_a = set(a["members"])
    m_b = set(b["members"])

    # Both empty -> no coherence data, allow
    if not m_a and not m_b:
        return True, ""

    # One side empty -> allow (missing data)
    if not m_a or not m_b:
        return True, ""

    overlap = m_a & m_b
    f_a = set(a.get("funcs", []))
    f_b = set(b.get("funcs", []))
    total_members = len(m_a | m_b)

    if overlap:
        pass  # All functions share overlap -> 100% coherence
    else:
        # No overlapping members -> check calls similarity
        calls_j = jaccard(calls_a, calls_b)
        if calls_j >= 0.3:
            pass  # Related through shared calls
        elif len(f_a) <= 2 and len(f_b) <= 2 and total_members <= 8:
            pass  # Small sparse classes
        else:
            return False, f"no shared members (calls_j={calls_j:.3f})"

    # Vtable coherence
    if len(merged.get("vtable_slots", [])) > 0 and not overlap:
        return False, "vtable class needs shared members"

    return True, ""


# ── compatibility scoring ───────────────────────────────────────────────────

def _compat_score(a: dict, b: dict, rare_offsets: set[int],
                  calls_a: set, calls_b: set) -> float:
    """
    Compute merge compatibility score.

    Components:
    - Member Jaccard (0..1)
    - Vtable Jaccard x 2 (strong signal, 0..2)
    - Shared rare offset bonus (+0.5 per)
    - Calls similarity as fallback (0..0.5)
    - Large class penalty (-0.5 if >100, -0.2 if >70)
    - Imbalance penalty (-0.3 if 10x+ size difference)
    """
    score = 0.0

    m_a = set(a["members"])
    m_b = set(b["members"])
    score += jaccard(m_a, m_b)

    v_a = set(a.get("vtable_slots", []))
    v_b = set(b.get("vtable_slots", []))
    if v_a or v_b:
        score += jaccard(v_a, v_b) * 2.0

    shared_rare = (m_a & m_b) & rare_offsets
    score += len(shared_rare) * 0.5

    if not (m_a & m_b):
        score += jaccard(calls_a, calls_b) * 0.5

    total_mem = len(m_a | m_b)
    if total_mem > 100:
        score -= 0.5
    elif total_mem > 70:
        score -= 0.2

    func_count_a = len(a.get("funcs", []))
    func_count_b = len(b.get("funcs", []))
    if func_count_a > 0 and func_count_b > 0:
        ratio = min(func_count_a, func_count_b) / max(func_count_a, func_count_b)
        if ratio < 0.1:
            score -= 0.3
        elif ratio < 0.25:
            score -= 0.1

    return score


# ── greedy merge via priority queue ────────────────────────────────────────

def greedy_minimize(
    classes: dict[str, dict],
    rare_offsets: set[int],
) -> dict[str, dict]:
    """
    Greedy merge using a max-heap priority queue.

    Phase 1: Build heap of all valid pairs with scores
    Phase 2: Pop best pair, merge, push new pairs for merged class
    """
    current: dict[str, dict] = {k: dict(v) for k, v in classes.items()}
    merge_log: list[list] = []

    cls_ids = list(current.keys())
    n = len(cls_ids)

    # Precompute call sets for fast access
    calls_sets: dict[str, set] = {}
    for cid in cls_ids:
        calls_sets[cid] = set(current[cid].get("calls", []))

    print(f"  Building initial heap over {n} classes...")

    heap: list[tuple[float, str, str]] = []
    valid_count = 0
    invalid_count = 0

    for i in range(n):
        a_id = cls_ids[i]
        a = current[a_id]
        ca = calls_sets[a_id]

        for j in range(i + 1, n):
            b_id = cls_ids[j]
            b = current[b_id]
            cb = calls_sets[b_id]

            # Quick pre-filters
            v_a = a.get("vtable_slots", [])
            v_b = b.get("vtable_slots", [])
            if v_a and v_b and not (set(v_a) & set(v_b)):
                invalid_count += 1
                continue
            if not a["members"] and not b["members"] and not v_a and not v_b:
                if not (ca & cb):
                    invalid_count += 1
                    continue

            merged = merge_two(a, b)
            valid, reason = _is_valid_merge(a, b, merged, rare_offsets, ca, cb)
            if not valid:
                invalid_count += 1
                continue

            score = _compat_score(a, b, rare_offsets, ca, cb)
            if score > 0:
                heapq.heappush(heap, (-score, a_id, b_id))
                valid_count += 1

    print(f"  Heap built: {valid_count} valid pairs, {invalid_count} filtered out")

    # Phase 2: Greedy merge
    iteration = 0
    stale = 0
    while heap:
        neg_score, a_id, b_id = heapq.heappop(heap)

        if a_id not in current or b_id not in current:
            stale += 1
            continue

        score = -neg_score
        a = current[a_id]
        b = current[b_id]
        ca = calls_sets.get(a_id, set(a.get("calls", [])))
        cb = calls_sets.get(b_id, set(b.get("calls", [])))

        merged = merge_two(a, b)
        valid, _ = _is_valid_merge(a, b, merged, rare_offsets, ca, cb)
        if not valid:
            continue

        iteration += 1
        merge_log.append([a_id, b_id, score])

        # Merge: keep a_id, remove b_id
        current[a_id] = merged
        del current[b_id]
        calls_sets[a_id] = set(merged.get("calls", []))
        calls_sets.pop(b_id, None)

        if iteration <= 5 or iteration % 200 == 0:
            print(f"  Iter {iteration}: merged {a_id}+{b_id} "
                  f"(score={score:.4f}), remain={len(current)}")

        # Push new pairs for merged class A' against all others
        ma = current[a_id]
        m_ca = calls_sets[a_id]
        for c_id in list(current.keys()):
            if c_id == a_id:
                continue
            mc = current[c_id]

            v_a2 = ma.get("vtable_slots", [])
            v_c = mc.get("vtable_slots", [])
            if v_a2 and v_c and not (set(v_a2) & set(v_c)):
                continue
            if not ma["members"] and not mc["members"] and not v_a2 and not v_c:
                if not (m_ca & calls_sets[c_id]):
                    continue

            merged_ac = merge_two(ma, mc)
            valid_ac, _ = _is_valid_merge(ma, mc, merged_ac, rare_offsets,
                                          m_ca, calls_sets[c_id])
            if not valid_ac:
                continue

            s = _compat_score(ma, mc, rare_offsets, m_ca, calls_sets[c_id])
            if s > 0:
                heapq.heappush(heap, (-s, a_id, c_id))

    print(f"\n  Merged {len(merge_log)} pairs in {iteration} iterations "
          f"(+ {stale} stale pops)")
    print(f"  Final class count: {len(current)}")

    log_path = os.path.join(SCRIPT_DIR, "type_infer", "merge_log.json")
    with open(log_path, "w", encoding="utf-8") as f:
        json.dump(merge_log, f, indent=2)

    return current


# ── verification ────────────────────────────────────────────────────────────

def verify_output(original: dict[str, dict],
                  minimized: dict[str, dict]) -> dict:
    """Verify integrity and run special checks."""
    orig_funcs: set[str] = set()
    for cls in original.values():
        orig_funcs.update(cls.get("funcs", []))
    min_funcs: set[str] = set()
    for cls in minimized.values():
        min_funcs.update(cls.get("funcs", []))
    missing = orig_funcs - min_funcs

    seen: set[str] = set()
    duplicated: set[str] = set()
    for cls in minimized.values():
        for f in cls.get("funcs", []):
            if f in seen:
                duplicated.add(f)
            seen.add(f)

    issues = []
    if missing:
        issues.append(f"{len(missing)} functions lost!")
    if duplicated:
        issues.append(f"{len(duplicated)} functions in multiple classes!")

    ms = [len(c["members"]) for c in minimized.values()]
    vs = [len(c.get("vtable_slots", [])) for c in minimized.values()]
    fs = [len(c.get("funcs", [])) for c in minimized.values()]

    # Locomotion
    walk_ids, jump_ids = [], []
    for cid, cls in minimized.items():
        fn = set(cls.get("funcs", []))
        if any("WalkLocomotion" in f for f in fn):
            walk_ids.append(cid)
        if any("JumpjetLocomotion" in f for f in fn):
            jump_ids.append(cid)

    # Voxel
    voxel = []
    for cid, cls in minimized.items():
        fn = set(cls.get("funcs", []))
        has_model = any("VoxelModel" in f for f in fn)
        has_renderer = any("VoxelRenderer" in f for f in fn)
        if has_model or has_renderer:
            voxel.append({"class": cid, "model": has_model, "renderer": has_renderer})

    # COM 28-slot interface (slots 129-156)
    com = []
    for cid, cls in minimized.items():
        vslots = cls.get("vtable_slots", [])
        overlap_28 = [s for s in vslots if 129 <= s <= 156]
        if len(overlap_28) >= 20:
            com.append({"class": cid, "overlap": len(overlap_28),
                        "vtable_count": len(vslots),
                        "members": len(cls["members"])})
    if not com:
        for cid, cls in minimized.items():
            vslots = cls.get("vtable_slots", [])
            if len(vslots) >= 200:
                overlap_28 = [s for s in vslots if 129 <= s <= 156]
                com.append({"class": cid, "overlap": len(overlap_28),
                            "vtable_count": len(vslots),
                            "members": len(cls["members"])})

    return {
        "original_class_count": len(original),
        "minimized_class_count": len(minimized),
        "merged_count": len(original) - len(minimized),
        "total_functions": len(orig_funcs),
        "functions_lost": len(missing),
        "functions_duplicated": len(duplicated),
        "issues": issues,
        "size_distribution": {
            "min_members": min(ms), "max_members": max(ms),
            "median_members": sorted(ms)[len(ms) // 2] if ms else 0,
            "min_vtable": min(vs), "max_vtable": max(vs),
            "min_funcs": min(fs), "max_funcs": max(fs),
        },
        "member_buckets": {
            "0": sum(1 for c in minimized.values() if len(c["members"]) == 0),
            "1-5": sum(1 for c in minimized.values() if 1 <= len(c["members"]) <= 5),
            "6-10": sum(1 for c in minimized.values() if 6 <= len(c["members"]) <= 10),
            "11-25": sum(1 for c in minimized.values() if 11 <= len(c["members"]) <= 25),
            "26-50": sum(1 for c in minimized.values() if 26 <= len(c["members"]) <= 50),
        },
        "classes_with_vtable": sum(1 for c in minimized.values()
                                   if len(c.get("vtable_slots", [])) > 0),
        "special_checks": {
            "locomotion": {"walk": walk_ids, "jumpjet": jump_ids},
            "voxel": voxel,
            "com_28slot": com,
        },
    }


def print_report(init: dict, r: dict) -> None:
    print("=" * 60)
    print("  CLASS MINIMIZATION REPORT")
    print("=" * 60)

    print("\n  --- Initial ---")
    print(f"    Classes:          {init['total_classes']}")
    print(f"    With members:     {init['with_members']}")
    print(f"    With vtable:      {init['with_vtable']}")
    print(f"    Func assignments: {init['total_func_assignments']}")
    print(f"    Members:          {init['min_members']}-{init['max_members']} "
          f"(median {init['median_members']})")
    print(f"    Vtable slots:     {init['min_vtable']}-{init['max_vtable']}")

    print("\n  --- After Minimization ---")
    print(f"    Classes:          {r['original_class_count']} -> {r['minimized_class_count']} "
          f"(-{r['merged_count']})")
    print(f"    Functions:        {r['total_functions']} total")
    if r["functions_lost"]:
        print(f"    ** LOST:          {r['functions_lost']}")
    if r["functions_duplicated"]:
        print(f"    ** DUPLICATED:    {r['functions_duplicated']}")

    sd = r["size_distribution"]
    print(f"    Members:          {sd['min_members']}-{sd['max_members']} "
          f"(median {sd['median_members']})")
    print(f"    Vtable slots:     {sd['min_vtable']}-{sd['max_vtable']}")
    print(f"    Funcs/class:      {sd['min_funcs']}-{sd['max_funcs']}")

    print("    Size buckets:")
    for label, count in r["member_buckets"].items():
        pct = count / r['minimized_class_count'] * 100
        bar = "#" * max(1, int(pct / 4))
        print(f"      {label:>8s}: {count:4d} ({pct:5.1f}%)  {bar}")

    print("\n  --- Special ---")
    sc = r["special_checks"]
    if sc["com_28slot"]:
        for c in sc["com_28slot"]:
            print(f"    COM 28-slot: {c['class']} ({c['overlap']}/28 slots, "
                  f"v={c['vtable_count']}, m={c['members']})")
    else:
        print("    COM 28-slot: NOT FOUND")
    print(f"    WalkLocomotion:   {len(sc['locomotion']['walk'])} classes")
    print(f"    JumpjetLocomotion: {len(sc['locomotion']['jumpjet'])} classes")
    print(f"    Voxel classes:    {len(sc['voxel'])}")
    for v in sc["voxel"]:
        tags = [t for t in ("model", "renderer") if v[t]]
        print(f"      {v['class']}: {', '.join(tags)}")

    if r["issues"]:
        print("\n  ** " + "; ".join(r["issues"]))
    print()


# --- main -------------------------------------------------

def main() -> None:
    print("Loading candidate classes...")
    classes = load_classes(CANDIDATE_PATH)
    init_stats = compute_initial_stats(classes)
    print(f"  Loaded {len(classes)} classes")

    print("Computing rare offsets...")
    rare_offsets = compute_rare_offsets(classes)
    print(f"  {len(rare_offsets)} rare offsets (in <= 5 classes)")

    print("Running greedy minimization...")
    minimized = greedy_minimize(classes, rare_offsets)

    print("Saving...")
    save_classes(minimized, OUTPUT_PATH)

    print("Verifying...")
    report = verify_output(classes, minimized)
    print_report(init_stats, report)

    if report["issues"]:
        print(f"ISSUES: {'; '.join(report['issues'])}")
        sys.exit(1)

    print("Done.")


if __name__ == "__main__":
    main()
