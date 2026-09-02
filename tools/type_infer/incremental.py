"""
T15: Incremental type re-propagation engine.

When a single function is modified (or its type annotation changes), only
re-propagate through affected equivalence classes — not full re-run of all
19,067 functions.

Architecture:
  1. Loads existing type_map.json → baseline per-eq_root types
  2. Takes a list of modified function addresses
  3. Identifies affected eq classes via constraint graph edges
  4. Creates a sub-worklist of only affected nodes + their dependents
  5. Re-runs propagation on the sub-worklist (reusing existing UF/adjacency)
  6. Updates type_map.json with new/diff entries only

Target: < 10 seconds for single-function change.

Usage:
    from tools.type_infer.engine import TypeInferenceEngine
    from tools.type_infer.incremental import IncrementalEngine

    engine = TypeInferenceEngine()
    engine.load_all()
    engine.step_steensgaard()

    inc = IncrementalEngine(engine)
    inc.build_caches()
    baseline = inc.load_baseline("type_map.json")

    # After modifying a function's type annotation:
    changed, stats = inc.incremental_update(
        modified_func_addrs=["0x004011C0"],
        new_annotations={"0x004011C0_RET": "BuildingClass"},
        baseline_types=baseline,
    )
    inc.update_type_map(changed, "type_map.json")
"""

import json
import os
import sys
import time
from collections import deque
from typing import Any, Optional

from tools.type_infer.engine import TypeInferenceEngine
from tools.type_infer.lattice import (
    BOTTOM, VOID_PTR, TOP, LatticeElement, _is_concrete, _name
)


# ── Incremental Engine ─────────────────────────────────────────────────────

class IncrementalEngine:
    """Incremental type propagation on top of a fully-loaded TypeInferenceEngine.

    Pre-builds caches from UF + adjacency, then supports fast sub-worklist
    propagation for single-function changes.
    """

    def __init__(self, engine: TypeInferenceEngine):
        if engine.uf is None:
            raise RuntimeError(
                "Engine has no UF state. Run engine.load_all() + "
                "engine.step_steensgaard() first."
            )

        self.engine = engine

        # Caches (built by build_caches())
        self._eq_members: dict[int, list[int]] = {}    # eq_root → [var_id, ...]
        self._eq_neighbors: dict[int, set[int]] = {}   # eq_root → {neighbor_root, ...}
        self._n_variables: int = 0
        self._caches_built: bool = False

    # ── Cache building ────────────────────────────────────────────────────

    def build_caches(self) -> None:
        """Pre-build eq_members and eq_neighbors caches from UF + adjacency.

        Must be called after Steensgaard but before any incremental update.
        Runtime: O(N) for membership, O(E) for neighbors.
        """
        t0 = time.perf_counter()
        n = len(self.engine.id_to_var)
        self._n_variables = n

        # ── eq_members: O(N) scan ──
        for vid in range(n):
            root = self.engine.uf.find(vid)
            if root not in self._eq_members:
                self._eq_members[root] = []
            self._eq_members[root].append(vid)

        print(f"  eq_members: {len(self._eq_members)} classes, "
              f"{n} variables", file=sys.stderr)

        # ── eq_neighbors: O(E) from adjacency ──
        for root, members in self._eq_members.items():
            neighbors: set[int] = set()
            for vid in members:
                for nid in self.engine.adjacency.get(vid, ()):
                    nroot = self.engine.uf.find(nid)
                    if nroot != root:
                        neighbors.add(nroot)
            if neighbors:
                self._eq_neighbors[root] = neighbors

        n_edges = sum(len(v) for v in self._eq_neighbors.values())
        print(f"  eq_neighbors: {len(self._eq_neighbors)} classes with edges, "
              f"{n_edges} edges", file=sys.stderr)

        elapsed = time.perf_counter() - t0
        print(f"  caches built in {elapsed:.2f}s", file=sys.stderr)
        self._caches_built = True

    def _ensure_caches(self) -> None:
        """Ensure caches are built before use."""
        if not self._caches_built:
            self.build_caches()

    # ── Baseline loading ──────────────────────────────────────────────────

    def load_baseline(self, type_map_path: str) -> dict[int, LatticeElement]:
        """Load baseline types from an existing type_map.json.

        Returns dict mapping eq_root → LatticeElement (current type).
        """
        if not os.path.exists(type_map_path):
            print(f"  type_map.json not found at {type_map_path}, "
                  f"starting from scratch", file=sys.stderr)
            return {}

        with open(type_map_path, "r", encoding="utf-8") as f:
            data = json.load(f)

        type_map = data.get("type_map", {})
        baseline: dict[int, LatticeElement] = {}

        for var_name, info in type_map.items():
            eq_root = info.get("eq_root")
            if eq_root is None:
                continue
            typ_name = info["type"]
            lattice_type = self._parse_type_string(typ_name)
            # All variables in same eq class should have same type.
            # Take the first one (or verify consistency).
            existing = baseline.get(eq_root)
            if existing is not None and existing != lattice_type:
                # Inconsistency in type_map — resolve via meet
                baseline[eq_root] = self.engine.lattice.meet(
                    existing, lattice_type
                )
            else:
                baseline[eq_root] = lattice_type

        print(f"  baseline: {len(baseline)} eq_roots with types", file=sys.stderr)
        return baseline

    def _parse_type_string(self, name: str) -> LatticeElement:
        """Convert a type name string to a lattice element."""
        if name == "BOTTOM":
            return BOTTOM
        if name == "VOID_PTR":
            return VOID_PTR
        if name == "TOP":
            return TOP
        return name  # concrete class name

    @staticmethod
    def _type_name(t: LatticeElement) -> str:
        """Convert a lattice element back to type name string."""
        return _name(t)

    # ── Save/Load equivalence classes ─────────────────────────────────────

    def save_equivalence_classes(self, path: str) -> None:
        """Save equivalence_classes.json for fast reload.

        Format:
        {
          "n_variables": 19067,
          "n_classes": 1234,
          "classes": {
            "<root>": {
              "members": ["var1", "var2", ...],
              "neighbors": ["<nroot>", ...],
              "label": {"lattice_type": "...", "source": "...", "var_name": "..."}
            }
          }
        }
        """
        self._ensure_caches()

        classes = {}
        for root, members in self._eq_members.items():
            var_names = [self.engine.id_to_var[vid] for vid in members]
            neighbors = [
                str(nr) for nr in self._eq_neighbors.get(root, ())
            ]
            label = self.engine.uf.get_label(members[0])

            label_serializable = None
            if label:
                label_serializable = {
                    "lattice_type": _name(label.get("lattice_type", BOTTOM)),
                    "source": label.get("source", ""),
                    "var_name": label.get("var_name", ""),
                }

            classes[str(root)] = {
                "members": var_names,
                "neighbors": neighbors,
                "label": label_serializable,
            }

        output = {
            "n_variables": self._n_variables,
            "n_classes": len(self._eq_members),
            "classes": classes,
        }

        with open(path, "w", encoding="utf-8") as f:
            json.dump(output, f, indent=2, sort_keys=True)
        print(f"  saved {len(classes)} classes to {path}", file=sys.stderr)

    def load_equivalence_classes(self, path: str) -> None:
        """Load equivalence_classes.json to rebuild caches."""
        with open(path, "r", encoding="utf-8") as f:
            data = json.load(f)

        classes = data.get("classes", {})
        self._eq_members.clear()
        self._eq_neighbors.clear()

        # Build reverse lookup: var_name → var_id
        var_to_id = self.engine.var_to_id

        for root_str, info in classes.items():
            root = int(root_str)
            # Map variable names to IDs
            members = []
            for vname in info.get("members", []):
                vid = var_to_id.get(vname)
                if vid is not None:
                    members.append(vid)
            self._eq_members[root] = members

            # Neighbors are other eq_roots
            neighbors = set()
            for nstr in info.get("neighbors", []):
                neighbors.add(int(nstr))
            if neighbors:
                self._eq_neighbors[root] = neighbors

        self._n_variables = data.get("n_variables", len(self.engine.id_to_var))
        self._caches_built = True
        print(f"  loaded {len(classes)} classes from {path}", file=sys.stderr)

    # ── Seed root identification ──────────────────────────────────────────

    def find_seed_roots(
        self,
        modified_func_addrs: list[str],
    ) -> set[int]:
        """Find eq_roots of variables belonging to modified functions.

        For each function address:
          - Scoped register vars: e.g., "0x004011C0::eax"
          - Return value vars: e.g., "0x004011C0_RET"
          - Member .return vars if the function has a name

        Returns set of eq_root integers.
        """
        self._ensure_caches()
        var_to_id = self.engine.var_to_id
        uf = self.engine.uf
        roots: set[int] = set()

        for addr in modified_func_addrs:
            # 1. Scoped register variables: addr::reg
            prefix = addr + "::"
            for var_name, var_id in var_to_id.items():
                if var_name.startswith(prefix):
                    roots.add(uf.find(var_id))

            # 2. Return value variable: addr_RET
            ret_var = addr + "_RET"
            ret_id = var_to_id.get(ret_var)
            if ret_id is not None:
                roots.add(uf.find(ret_id))

            # 3. Also search for that address appearing as a callee in CALL
            #    constraints. The callee_name might be the function name.
            #    Check if any variable starts with this address prefix
            #    (for function names like "0x004011C0" used as callee_name)

        return roots

    def find_seed_roots_by_names(
        self,
        modified_var_names: list[str],
    ) -> set[int]:
        """Find eq_roots of specific variable names."""
        self._ensure_caches()
        var_to_id = self.engine.var_to_id
        uf = self.engine.uf
        roots: set[int] = set()

        for vname in modified_var_names:
            vid = var_to_id.get(vname)
            if vid is not None:
                roots.add(uf.find(vid))

        return roots

    # ── Anchor type computation ───────────────────────────────────────────

    def _compute_anchor_type(self, root: int) -> LatticeElement:
        """Compute the meet of all anchor types for an equivalence class.

        Returns BOTTOM if no anchors are attached to this class.
        """
        result: LatticeElement = BOTTOM
        for vid in self._eq_members.get(root, []):
            for anchor in self.engine.anchor_by_var.get(vid, []):
                result = self.engine.lattice.meet(result, anchor.lattice_type)

        # Also check UF label (set during Steensgaard)
        members = self._eq_members.get(root, [])
        if members:
            label = self.engine.uf.get_label(members[0])
            if label:
                lt = label.get("lattice_type", BOTTOM)
                result = self.engine.lattice.meet(result, lt)

        return result

    # ── Incremental propagation ───────────────────────────────────────────

    def incremental_propagate(
        self,
        seed_roots: set[int],
        baseline_types: dict[int, LatticeElement],
        max_iterations: int = 5000,
    ) -> tuple[dict[int, tuple[LatticeElement, LatticeElement]],
               dict[str, int]]:
        """Run incremental propagation through subgraph reachable from seeds.

        Args:
            seed_roots: Set of eq_roots where type information changed.
            baseline_types: Current type assignments (eq_root → type).
            max_iterations: Safety limit on propagation iterations.

        Returns:
            (changes, stats) where:
              changes: {eq_root: (old_type, new_type)} for changed roots
              stats: {"nodes_checked": N, "nodes_updated": M, "iterations": I}
        """
        self._ensure_caches()
        t_start = time.perf_counter()

        # Working copy of types
        root_types: dict[int, LatticeElement] = dict(baseline_types)
        changes: dict[int, tuple[LatticeElement, LatticeElement]] = {}

        # ── Phase 1: Recompute anchor types for seed roots ──
        worklist: deque[int] = deque()
        in_worklist: set[int] = set()

        for root in seed_roots:
            anchor_type = self._compute_anchor_type(root)
            old_type = root_types.get(root, BOTTOM)
            # Meet with old_type ensures monotonicity:
            # - anchor=BOTTOM, old=TOP → meet=TOP (no spurious change)
            # - anchor=BuildingClass, old=ObjectClass → meet=BuildingClass (more specific)
            new_type = self.engine.lattice.meet(anchor_type, old_type)
            if new_type != old_type:
                root_types[root] = new_type
                changes[root] = (old_type, new_type)
                worklist.append(root)
                in_worklist.add(root)

        # ── Phase 2: Propagation through affected subgraph ──
        visited: set[int] = set(seed_roots)
        iteration = 0

        while worklist and iteration < max_iterations:
            iteration += 1
            root = worklist.popleft()
            in_worklist.discard(root)

            root_type = root_types.get(root, BOTTOM)
            if root_type == BOTTOM:
                continue

            # Get neighbor eq_roots
            neighbors = self._eq_neighbors.get(root, ())
            for neighbor_root in neighbors:
                if neighbor_root == root:
                    continue

                visited.add(neighbor_root)
                old_type = root_types.get(neighbor_root, BOTTOM)
                new_type = self.engine.lattice.meet(old_type, root_type)

                if new_type != old_type:
                    root_types[neighbor_root] = new_type

                    # Record change (overwrite: last change wins)
                    if neighbor_root in changes:
                        # Keep the original old_type from first change
                        changes[neighbor_root] = (
                            changes[neighbor_root][0], new_type
                        )
                    else:
                        changes[neighbor_root] = (old_type, new_type)

                    if neighbor_root not in in_worklist:
                        worklist.append(neighbor_root)
                        in_worklist.add(neighbor_root)

        elapsed = time.perf_counter() - t_start

        stats = {
            "nodes_checked": len(visited),
            "nodes_updated": len(changes),
            "iterations": iteration,
            "elapsed_seconds": round(elapsed, 3),
            "converged": not bool(worklist),
        }

        return changes, stats

    # ── Incremental update (convenience method) ───────────────────────────

    def incremental_update(
        self,
        modified_func_addrs: list[str],
        new_annotations: dict[str, str] | None = None,
        baseline_types: dict[int, LatticeElement] | None = None,
        type_map_path: str = "type_map.json",
        max_iterations: int = 5000,
    ) -> tuple[dict[int, tuple[LatticeElement, LatticeElement]],
               dict[str, int]]:
        """Convenience: full incremental update from function addresses.

        Args:
            modified_func_addrs: Function addresses that changed.
            new_annotations: Optional {var_name: type_name} for new type info.
            baseline_types: Pre-loaded baseline, or None to load from type_map_path.
            type_map_path: Path to type_map.json (used if baseline_types is None).
            max_iterations: Propagation limit.

        Returns:
            (changes, stats)
        """
        # ── Load baseline if not provided ──
        if baseline_types is None:
            baseline_types = self.load_baseline(type_map_path)

        # ── Apply new annotations as temporary anchors ──
        temp_anchor_roots: set[int] = set()
        if new_annotations:
            var_to_id = self.engine.var_to_id
            for vname, type_name in new_annotations.items():
                vid = var_to_id.get(vname)
                if vid is not None:
                    lt = self._parse_type_string(type_name)
                    root = self.engine.uf.find(vid)
                    temp_anchor_roots.add(root)
                    # Add a synthetic anchor entry
                    from tools.type_infer.engine import Anchor
                    anchor = Anchor(
                        var_id=vid,
                        var_name=vname,
                        lattice_type=lt,
                        source="incremental_update",
                    )
                    self.engine.anchor_by_var[vid].append(anchor)

        # ── Find seed roots ──
        seed_roots = self.find_seed_roots(modified_func_addrs)
        seed_roots |= temp_anchor_roots

        if not seed_roots:
            print("  WARNING: No seed roots found for modified functions",
                  file=sys.stderr)
            return {}, {"nodes_checked": 0, "nodes_updated": 0,
                        "iterations": 0, "elapsed_seconds": 0.0,
                        "converged": True}

        print(f"  seed roots: {len(seed_roots)}", file=sys.stderr)

        # ── Run propagation ──
        changes, stats = self.incremental_propagate(
            seed_roots, baseline_types, max_iterations
        )

        # ── Clean up temporary anchors ──
        if new_annotations:
            for vname in new_annotations:
                vid = self.engine.var_to_id.get(vname)
                if vid is not None:
                    # Remove last-added anchor (our synthetic one)
                    if self.engine.anchor_by_var.get(vid):
                        self.engine.anchor_by_var[vid].pop()

        # ── Auto-save type_map if changes exist ──
        if changes and type_map_path:
            self.update_type_map(changes, type_map_path, baseline_types)

        return changes, stats

    # ── Output generation ─────────────────────────────────────────────────

    def update_type_map(
        self,
        changes: dict[int, tuple[LatticeElement, LatticeElement]],
        type_map_path: str = "type_map.json",
        baseline_types: dict[int, LatticeElement] | None = None,
        new_root_types: dict[int, LatticeElement] | None = None,
    ) -> dict:
        """Patch type_map.json with changed entries only.

        For each changed eq_root, updates all variable entries that share
        that root to the new type.

        Args:
            changes: {eq_root: (old_type, new_type)} from incremental_propagate.
            type_map_path: Path to type_map.json.
            baseline_types: Original baseline (for computing full new state).
            new_root_types: If provided, the full new type state after propagation.
                           Otherwise derived from baseline + changes.

        Returns:
            Summary dict with counts.
        """
        if not changes:
            print("  No changes to write.", file=sys.stderr)
            return {"updated_entries": 0, "changed_roots": 0}

        # Read existing type_map
        if os.path.exists(type_map_path):
            with open(type_map_path, "r", encoding="utf-8") as f:
                data = json.load(f)
        else:
            data = {"_summary": {}, "type_map": {}}

        type_map = data.get("type_map", {})

        # Build changed_root → new_type_name
        changed_types: dict[int, str] = {}
        for root, (old, new) in changes.items():
            changed_types[root] = self._type_name(new)

        # Also compute the full finalized type state if provided
        if new_root_types:
            for root, lt in new_root_types.items():
                if root not in changed_types:
                    changed_types[root] = self._type_name(lt)

        # Index: find all variable names per eq_root
        # We need reverse lookup: var_name → eq_root
        # Build from type_map entries that already exist
        known_vars: dict[str, int] = {}
        for vname, info in type_map.items():
            er = info.get("eq_root")
            if er is not None:
                known_vars[vname] = er

        updated_count = 0
        for vname, info in type_map.items():
            er = info.get("eq_root")
            if er is None:
                continue
            if er in changed_types:
                new_type_name = changed_types[er]
                if info["type"] != new_type_name:
                    type_map[vname]["type"] = new_type_name
                    updated_count += 1

        # Also add entries for variables in changed eq_roots that are not
        # yet in type_map (they might be new or were BOTTOM before)
        for changed_root, (old_ty, new_ty) in changes.items():
            for vid in self._eq_members.get(changed_root, []):
                vname = self.engine.id_to_var[vid]
                if vname not in type_map:
                    type_name = self._type_name(new_ty)
                    if type_name not in ("BOTTOM",):
                        type_map[vname] = {
                            "type": type_name,
                            "confidence": "INFERRED",
                            "eq_root": changed_root,
                        }
                        updated_count += 1

        # Update summary
        from collections import Counter
        type_counts = Counter(v["type"] for v in type_map.values())
        conf_counts = Counter(v["confidence"] for v in type_map.values())

        data["_summary"] = {
            "total_entries": len(type_map),
            "type_distribution": dict(type_counts.most_common()),
            "confidence_distribution": dict(conf_counts),
        }
        data["type_map"] = type_map

        # Write
        with open(type_map_path, "w", encoding="utf-8") as f:
            json.dump(data, f, indent=2, sort_keys=True)

        result = {
            "updated_entries": updated_count,
            "changed_roots": len(changes),
            "total_entries": len(type_map),
        }
        print(f"  type_map: {updated_count} entries updated "
              f"({len(changes)} roots), {len(type_map)} total",
              file=sys.stderr)

        return result

    # ── Recompute confidence for changed roots ────────────────────────────

    def recompute_confidence(
        self,
        changed_roots: set[int],
        current_confidences: dict[int, int],
    ) -> dict[int, int]:
        """Recompute confidence tiers for changed roots via BFS.

        This is a lightweight BFS from anchors that only explores the subgraph
        reachable from changed roots.
        """
        from tools.type_infer.engine import Confidence

        new_confidences = dict(current_confidences)

        # Find anchored roots
        anchored: set[int] = set()
        for root in changed_roots:
            anchor_type = self._compute_anchor_type(root)
            if anchor_type != BOTTOM:
                anchored.add(root)

        if not anchored:
            return new_confidences

        # BFS from anchored roots
        distance: dict[int, int] = {}
        queue: deque[tuple[int, int]] = deque()

        for root in anchored:
            distance[root] = 0
            queue.append((root, 0))

        # Also seed from pre-existing anchored nodes in the subgraph
        for anchor in self.engine.anchors:
            root = self.engine.uf.find(anchor.var_id)
            if root in changed_roots:
                continue  # Already handled
            # Check if this anchor's eq_root connects to changed roots
            for changed_root in changed_roots:
                # If they share a neighbor or adjacency path, include
                neighbors = self._eq_neighbors.get(root, set())
                if root in neighbors or changed_root in neighbors:
                    if root not in distance:
                        distance[root] = 0
                        queue.append((root, 0))
                    break

        while queue:
            current_root, dist = queue.popleft()
            next_dist = dist + 1

            for neighbor_root in self._eq_neighbors.get(current_root, ()):
                if neighbor_root in distance:
                    continue
                distance[neighbor_root] = next_dist
                queue.append((neighbor_root, next_dist))

        # Update confidences
        for root, dist in distance.items():
            new_confidences[root] = min(dist, 4)  # cap at INFERRED

        return new_confidences


# ── CLI ────────────────────────────────────────────────────────────────────

def main() -> None:
    """CLI entry point for incremental type re-propagation.

    Usage:
      python -m tools.type_infer.incremental <func_addr> [<func_addr> ...]
          [--annotation var=Type] [--type-map path]
    """
    import argparse

    parser = argparse.ArgumentParser(
        description="Incremental type re-propagation (T15)"
    )
    parser.add_argument(
        "addrs", nargs="+",
        help="Modified function addresses (e.g., 0x004011C0)"
    )
    parser.add_argument(
        "--annotation", "-a", action="append", default=[],
        metavar="VAR=TYPE",
        help="New type annotation (e.g., 0x004011C0_RET=BuildingClass)"
    )
    parser.add_argument(
        "--type-map", default="type_map.json",
        help="Path to type_map.json (default: type_map.json)"
    )
    parser.add_argument(
        "--eq-classes", default=None,
        help="Path to equivalence_classes.json (save if provided)"
    )
    parser.add_argument(
        "--max-iters", type=int, default=5000,
        help="Max propagation iterations (default: 5000)"
    )
    parser.add_argument(
        "--no-save", action="store_true",
        help="Don't update type_map.json (dry-run)"
    )

    args = parser.parse_args()

    print("=" * 60, file=sys.stderr)
    print("Incremental Type Propagation (T15)", file=sys.stderr)
    print("=" * 60, file=sys.stderr)

    # ── Load engine ──
    print("Loading engine...", file=sys.stderr)
    engine = TypeInferenceEngine()
    engine.load_all()
    engine.step_steensgaard()

    # ── Build caches ──
    inc = IncrementalEngine(engine)
    inc.build_caches()

    # ── Save equivalence classes if requested ──
    if args.eq_classes:
        inc.save_equivalence_classes(args.eq_classes)

    # ── Parse annotations ──
    annotations: dict[str, str] = {}
    for ann in args.annotation:
        if "=" in ann:
            var, typ = ann.split("=", 1)
            annotations[var.strip()] = typ.strip()

    # ── Run incremental update ──
    t_start = time.perf_counter()

    changes, stats = inc.incremental_update(
        modified_func_addrs=args.addrs,
        new_annotations=annotations or None,
        type_map_path=args.type_map,
        max_iterations=args.max_iters,
    )

    total_elapsed = time.perf_counter() - t_start

    # ── Print results ──
    print(file=sys.stderr)
    print("=" * 60, file=sys.stderr)
    print("RESULTS", file=sys.stderr)
    print("=" * 60, file=sys.stderr)
    print(f"  Nodes checked:  {stats['nodes_checked']}", file=sys.stderr)
    print(f"  Nodes updated:  {stats['nodes_updated']}", file=sys.stderr)
    print(f"  Iterations:     {stats['iterations']}", file=sys.stderr)
    print(f"  Converged:      {stats['converged']}", file=sys.stderr)
    print(f"  Time:           {stats['elapsed_seconds']:.3f}s", file=sys.stderr)
    print(file=sys.stderr)

    if changes:
        print("Changed equivalence classes:", file=sys.stderr)
        for root, (old, new) in sorted(changes.items()):
            old_name = _name(old)
            new_name = _name(new)
            print(f"  eq_root {root}: {old_name} → {new_name}", file=sys.stderr)
            # Show sample variables
            members = inc._eq_members.get(root, [])[:3]
            for vid in members:
                vname = inc.engine.id_to_var[vid]
                print(f"    - {vname}", file=sys.stderr)

    # ── Save ──
    if not args.no_save and changes:
        inc.update_type_map(changes, args.type_map)

    print(file=sys.stderr)
    print(f"Total time: {total_elapsed:.3f}s", file=sys.stderr)


if __name__ == "__main__":
    main()
