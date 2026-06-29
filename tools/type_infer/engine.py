"""
Type Inference Engine — Steensgaard + Propagation + Confidence + Contradictions.

Pipeline:
  T7  — Steensgaard union-find merging, anchor labeling
  T9  — Worklist type propagation via lattice.meet()
  T10 — Confidence scoring (BFS distance from nearest anchor)
  T11 — Contradiction detection (TOP nodes, dual-path evidence)

Inputs:
  tools/type_infer/constraints/raw_constraints.json  — ~97K type constraints
  tools/type_infer/constraints/call_graph.json       — ~46K call-graph edges
  tools/type_infer/anchors/vtable_signatures.json    — ~13K vtable entries
  anchors/member_types.json                          — ~5K member→type anchors
  anchors/global_types.json                          — ~1.3K global→type anchors

Outputs:
  type_map.json        — variable→type mapping with confidence
  contradictions.md    — human-readable contradiction report

Usage:
  python -m tools.type_infer.engine
"""

import json
import os
import re
import sys
from collections import defaultdict, deque
from dataclasses import dataclass, field
from typing import Any, Optional

import bisect

from tools.type_infer.union_find import UnionFind
from tools.type_infer.lattice import (
    TypeLattice, BOTTOM, VOID_PTR, TOP, LatticeElement, _is_concrete, _name
)

# ── register names (x86, must be scoped by function) ───────────────────────

_X86_REGISTERS = frozenset({
    "eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp",
    "al",  "ah",  "bl",  "bh",  "cl",  "ch",  "dl",  "dh",
    "ax",  "bx",  "cx",  "dx",  "si",  "di",  "bp",  "sp",
})


def _is_register(name: str) -> bool:
    """Check if a variable name is an x86 register (needs function scoping)."""
    return name.lower() in _X86_REGISTERS


# ── paths ──────────────────────────────────────────────────────────────────

def _resolve_path(*parts: str) -> str:
    """Resolve path relative to the tools/type_infer directory."""
    base = os.path.dirname(os.path.abspath(__file__))
    return os.path.normpath(os.path.join(base, *parts))

CONSTRAINTS_PATH = _resolve_path("constraints", "raw_constraints.json")
CALL_GRAPH_PATH = _resolve_path("constraints", "call_graph.json")
VTABLE_SIG_PATH = _resolve_path("anchors", "vtable_signatures.json")
MEMBER_TYPES_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "anchors", "member_types.json"
))
GLOBAL_TYPES_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "anchors", "global_types.json"
))
CLASS_LAYOUTS_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
    "class_layouts.json"
))


# ── regex patterns for variable name parsing ───────────────────────────────

_RE_MEMBER_VAR = re.compile(
    r"^(.+?)(?:::.*?)?\.this\.member\((0x[0-9a-fA-F]+)\)$"
)
_RE_MEMBER_ALT = re.compile(
    r"^([A-Za-z_]\w*(?:Class)?)\+0x([0-9a-fA-F]+)$"
)


def _parse_member_var(name: str) -> tuple[str, int] | None:
    """Extract (class_name, offset) from a member variable name.

    Examples:
      'ObjectClass::ClearFlags2.this.member(0x50)' → ('ObjectClass', 0x50)
      'BuildingClass::GetType.this.member(0x70c)' → ('BuildingClass', 0x70c)
    """
    m = _RE_MEMBER_VAR.match(name)
    if m:
        cls = m.group(1)
        offset = int(m.group(2), 16)
        return (cls, offset)
    return None


def _find_function_return_var(variables: dict[str, int], func_name: str) -> int | None:
    """Find the variable ID for a function's .return variable."""
    key = func_name + ".return"
    return variables.get(key)


# ── confidence tier ────────────────────────────────────────────────────────

@dataclass
class Confidence:
    """Confidence tier for type assignments."""
    ANCHORED = 0       # direct anchor (member_types, global_types, vtable)
    DIRECT_PROP = 1     # 1 hop from anchor
    CHAIN_PROP = 2       # 2 hops from anchor
    FAR_PROP = 3         # 3 hops from anchor
    INFERRED = 4         # >3 hops from anchor, or no anchor path

    _NAMES = {
        0: "ANCHORED",
        1: "DIRECT_PROP",
        2: "CHAIN_PROP",
        3: "CHAIN_PROP",
        4: "INFERRED",
    }

    @classmethod
    def name(cls, tier: int) -> str:
        if tier <= 0:
            return cls._NAMES[0]
        if tier == 1:
            return cls._NAMES[1]
        if tier <= 3:
            return cls._NAMES[2]
        return cls._NAMES[4]


# ── anchor data ────────────────────────────────────────────────────────────

@dataclass
class Anchor:
    """A known type assignment from pre-extracted data."""
    var_id: int
    var_name: str
    lattice_type: LatticeElement
    source: str  # 'member_types', 'global_types', 'vtable_signatures'


# ── engine ─────────────────────────────────────────────────────────────────

class TypeInferenceEngine:
    """Core type inference engine."""

    def __init__(self):
        self.uf: UnionFind | None = None
        self.lattice = TypeLattice(CLASS_LAYOUTS_PATH)
        self.var_to_id: dict[str, int] = {}
        self.id_to_var: list[str] = []
        self.constraints: list[dict] = []
        self.call_graph: dict[str, list] = {}
        self.anchors: list[Anchor] = []
        self.anchor_by_var: dict[int, list[Anchor]] = defaultdict(list)

        # Function address ranges for register scoping
        self._func_addrs: list[int] = []  # sorted start addresses

        # Adjacency graph for propagation (var_id → set of neighbor var_ids)
        self.adjacency: dict[int, set[int]] = defaultdict(set)

        # Results
        self.eq_types: dict[int, LatticeElement] = {}  # root → type
        self.confidences: dict[int, int] = {}           # root → confidence tier
        self.contradictions: list[dict] = []             # contradiction reports

    # ── T7: Data loading ──────────────────────────────────────────────────

    def load_all(self) -> None:
        """Load all input data files."""
        print("Loading constraints...", file=sys.stderr)
        self._load_constraints()

        print("Loading call graph...", file=sys.stderr)
        self._load_call_graph()

        print("Building variable name index...", file=sys.stderr)
        self._build_variable_index()

        print("Loading anchors...", file=sys.stderr)
        self._load_anchors()

    def _load_constraints(self) -> None:
        with open(CONSTRAINTS_PATH, "r", encoding="utf-8") as f:
            data = json.load(f)
        self.constraints = data["constraints"]

    def _load_call_graph(self) -> None:
        with open(CALL_GRAPH_PATH, "r", encoding="utf-8") as f:
            data = json.load(f)
        self.call_graph = data.get("graph", {})

        # Build sorted function address list for binary-search lookup
        addrs: set[int] = set()
        for key in self.call_graph:
            try:
                addrs.add(int(key, 16))
            except ValueError:
                pass
        # Also collect function addresses from constraint callee_names
        # (these might not be in call_graph keys)
        self._func_addrs = sorted(addrs)
        print(f"  function start addresses: {len(self._func_addrs)}", file=sys.stderr)

    def _find_containing_func(self, addr_str: str) -> int:
        """Find the function start address that contains the given instruction address.

        Uses binary search on sorted function start addresses.
        Returns the function address (as int) or 0 if not found.
        """
        try:
            addr = int(addr_str, 16)
        except ValueError:
            return 0
        if not self._func_addrs:
            return 0
        idx = bisect.bisect_right(self._func_addrs, addr) - 1
        if idx >= 0:
            return self._func_addrs[idx]
        return 0

    def _scope_name(self, name: str, addr: str) -> str:
        """Scope a register variable name by the containing function address.

        Non-register names are returned unchanged (they already carry context).
        """
        if _is_register(name):
            func_addr = self._find_containing_func(addr)
            return f"0x{func_addr:08X}::{name}"
        return name

    def _build_variable_index(self) -> None:
        """Assign integer IDs to all unique variable names in constraints.

        Register names (eax, edx, etc.) are scoped by their containing function
        to prevent global merging across unrelated functions.
        """
        seen: dict[str, str] = {}  # scoped_name → original_name
        for c in self.constraints:
            addr = c.get("addr", "0x0")
            sfrom = self._scope_name(c["from"], addr)
            sto = self._scope_name(c["to"], addr)
            seen[sfrom] = c["from"]
            seen[sto] = c["to"]

        # Sort for deterministic IDs
        sorted_names = sorted(seen.keys())
        self.var_to_id = {name: i for i, name in enumerate(sorted_names)}
        self.id_to_var = sorted_names
        self.uf = UnionFind(len(self.id_to_var))

        # Store original name lookup for anchor matching
        self._scoped_to_original = seen
        print(f"  scoped variables: {len(seen)}", file=sys.stderr)

    def _load_anchors(self) -> None:
        """Load anchors from member_types.json, global_types.json, vtable_signatures.json."""
        valid_classes = set(self.lattice._ancestors.keys())

        # ── member_types anchors ──
        member_types = {}
        if os.path.exists(MEMBER_TYPES_PATH):
            with open(MEMBER_TYPES_PATH, "r", encoding="utf-8") as f:
                raw = json.load(f)
            # Filter to only entries where key matches ClassName+Offset pattern
            for key, val in raw.items():
                m = _RE_MEMBER_ALT.match(key)
                if m:
                    cls_name = m.group(1)
                    offset = int(m.group(2), 16)
                    typ = val.get("type", "")
                    member_types[(cls_name, offset)] = val
                else:
                    member_types[(key, 0)] = val  # fallback

        matched = 0
        for var_name, var_id in self.var_to_id.items():
            parsed = _parse_member_var(var_name)
            if parsed is None:
                continue
            cls_name, offset = parsed
            anchor_info = member_types.get((cls_name, offset))
            if anchor_info is None:
                continue
            typ_name = anchor_info.get("type", "")
            if not typ_name:
                continue

            lattice_type = self._to_lattice_type(typ_name, valid_classes)
            if lattice_type is None:
                continue

            anchor = Anchor(
                var_id=var_id,
                var_name=var_name,
                lattice_type=lattice_type,
                source="member_types",
            )
            self.anchors.append(anchor)
            self.anchor_by_var[var_id].append(anchor)
            matched += 1
        print(f"  member_types anchors: {matched}", file=sys.stderr)

        # ── global_types anchors ──
        global_matched = 0
        if os.path.exists(GLOBAL_TYPES_PATH):
            with open(GLOBAL_TYPES_PATH, "r", encoding="utf-8") as f:
                global_types = json.load(f)

            # Build address→type map
            addr_map: dict[str, dict] = {}
            for key, val in global_types.items():
                if key.startswith("0x"):
                    addr_map[key] = val

            for var_name, var_id in self.var_to_id.items():
                # Try exact match
                info = addr_map.get(var_name)
                if info is None:
                    # Try stripping _RET suffix
                    base = var_name.replace("_RET", "")
                    info = addr_map.get(base)
                if info is None:
                    continue

                typ_name = info.get("type", "")
                lattice_type = self._to_lattice_type(typ_name, valid_classes)
                if lattice_type is None:
                    continue

                anchor = Anchor(
                    var_id=var_id,
                    var_name=var_name,
                    lattice_type=lattice_type,
                    source="global_types",
                )
                self.anchors.append(anchor)
                self.anchor_by_var[var_id].append(anchor)
                global_matched += 1
        print(f"  global_types anchors: {global_matched}", file=sys.stderr)

        # ── vtable_signatures anchors ──
        vtable_matched = 0
        if os.path.exists(VTABLE_SIG_PATH):
            with open(VTABLE_SIG_PATH, "r", encoding="utf-8") as f:
                vt_data = json.load(f)
            signatures = vt_data.get("signatures", {})

            # Build func_name → signature map
            func_sig_map: dict[str, dict] = {}
            for key, sig in signatures.items():
                fname = sig.get("func_name", "")
                if fname:
                    func_sig_map[fname] = sig

            for var_name, var_id in self.var_to_id.items():
                if not var_name.endswith(".return"):
                    continue
                func_name = var_name[:-7]  # strip ".return"
                sig = func_sig_map.get(func_name)
                if sig is None:
                    continue
                # vtable signatures mark that the function exists — use VOID_PTR
                # as a weak anchor (we know it's a valid pointer)
                anchor = Anchor(
                    var_id=var_id,
                    var_name=var_name,
                    lattice_type=VOID_PTR,
                    source="vtable_signatures",
                )
                self.anchors.append(anchor)
                self.anchor_by_var[var_id].append(anchor)
                vtable_matched += 1
        print(f"  vtable_signatures anchors: {vtable_matched}", file=sys.stderr)

    @staticmethod
    def _to_lattice_type(typ_name: str, valid_classes: set[str]) -> LatticeElement | None:
        """Convert a type name string to a lattice element, or None if unfittable."""
        typ = typ_name.strip().rstrip("*").strip()  # remove pointer asterisks
        # Check if it's a valid class name
        if typ in valid_classes:
            return typ
        # Check common name variations (strip trailing numbers, prefixes)
        if typ.endswith("Class") and typ in valid_classes:
            return typ
        # Skip primitives — they don't participate in lattice
        if typ in (
            "int", "int32_t", "uint32_t", "int16_t", "uint16_t",
            "int8_t", "uint8_t", "bool", "float", "double",
            "void", "void (*)()", "DWORD", "WORD", "BYTE",
            "char", "unsigned int", "unsigned short", "unsigned char",
        ):
            return None
        # Skip function pointer types
        if "(*)" in typ or "function" in typ.lower():
            return None
        # For any other type name, check if it's in the valid classes
        if typ in valid_classes:
            return typ
        # Try with Class suffix
        if typ + "Class" in valid_classes:
            return typ + "Class"
        return None

    # ── T7: Steensgaard unification ───────────────────────────────────────

    def step_steensgaard(self) -> None:
        """Run Steensgaard-style unification: union ASSIGN, RETURN, and CALL edges.

        Output: equivalence classes in self.uf, with anchor labels set.
        """
        print("Running Steensgaard unification (T7)...", file=sys.stderr)

        # ── Build adjacency while processing ──
        for c in self.constraints:
            addr = c.get("addr", "0x0")
            sfrom = self._scope_name(c["from"], addr)
            sto = self._scope_name(c["to"], addr)

            fid = self.var_to_id.get(sfrom)
            tid = self.var_to_id.get(sto)
            if fid is None or tid is None:
                continue

            ctype = c["type"]
            if ctype == "ASSIGN":
                f_is_reg = _is_register(c.get("from", ""))
                t_is_reg = _is_register(c.get("to", ""))
                if f_is_reg or t_is_reg:
                    # member->register or register->register:
                    # adjacency only — prevents Steensgaard from unioning
                    # all members that write to the same register,
                    # which caused 74% TOP rate via mega-equivalence-class.
                    self.adjacency[fid].add(tid)
                    self.adjacency[tid].add(fid)
                else:
                    # member->member: keep full union + adjacency
                    self.uf.union(fid, tid)
                    self.adjacency[fid].add(tid)
                    self.adjacency[tid].add(fid)

            elif ctype == "RETURN":
                # adjacency-only: multiple RET sites in one function can have
                # different types (different code paths), don't union them
                self.adjacency[fid].add(tid)
                self.adjacency[tid].add(fid)

            elif ctype == "CALL":
                # Connect callee's .return to the caller's return receivers
                # The callee_name is unscoped; try both scoped and unscoped lookup
                callee_name = c.get("callee_name", "")
                if callee_name:
                    callee_ret_id = _find_function_return_var(
                        self.var_to_id, callee_name
                    )
                    if callee_ret_id is not None:
                        # adjacency-only: callee return type propagates to call site
                        # without union pollution across different call sites
                        self.adjacency[fid].add(callee_ret_id)
                        self.adjacency[callee_ret_id].add(fid)

            elif ctype == "CALL_VTABLE":
                # vtable calls — slot info, no direct var connection for Steensgaard
                pass

            elif ctype == "STACK_VAR":
                self.adjacency[fid].add(tid)
                self.adjacency[tid].add(fid)

        # ── Set anchor labels on equivalence classes ──
        for anchor in self.anchors:
            root = self.uf.find(anchor.var_id)
            existing = self.uf.get_label(root)
            if existing is None:
                self.uf.set_label(root, {
                    "lattice_type": anchor.lattice_type,
                    "source": anchor.source,
                    "var_name": anchor.var_name,
                })
            else:
                # Multiple anchors on same equivalence class — meet them
                existing_type = existing.get("lattice_type", BOTTOM)
                new_type = self.lattice.meet(existing_type, anchor.lattice_type)
                existing["lattice_type"] = new_type
                existing["source"] = existing["source"] + "+" + anchor.source

        # ── Statistics ──
        n_roots = self.uf.root_count()
        n_labeled = self.uf.label_count()
        print(f"  equivalence classes: {n_roots}", file=sys.stderr)
        print(f"  labeled classes: {n_labeled}", file=sys.stderr)

    # ── T9: Propagation ───────────────────────────────────────────────────

    def step_propagate(self) -> None:
        """Worklist propagation of types through the constraint adjacency graph.

        Starts from anchored nodes. Uses lattice.meet() to combine types.
        VOID_PTR is the meet identity — does NOT pollute.
        Terminates when worklist is empty or max iterations reached.
        """
        print("Running type propagation (T9)...", file=sys.stderr)

        max_iterations = self.lattice.class_count + 10  # generous bound
        if max_iterations < 10:
            max_iterations = 10

        # Initialize: root → current best type
        root_types: dict[int, LatticeElement] = {}
        worklist: deque[int] = deque()
        in_worklist: set[int] = set()

        # Seed with anchored roots
        for anchor in self.anchors:
            root = self.uf.find(anchor.var_id)
            current = root_types.get(root, BOTTOM)
            new_type = self.lattice.meet(current, anchor.lattice_type)
            if new_type != current:
                root_types[root] = new_type
                if root not in in_worklist:
                    worklist.append(root)
                    in_worklist.add(root)

        iteration = 0
        while worklist and iteration < max_iterations:
            iteration += 1
            root = worklist.popleft()
            in_worklist.discard(root)

            root_type = root_types.get(root, BOTTOM)
            if root_type == BOTTOM:
                continue

            # Find all variable IDs in this equivalence class
            # (we need to iterate over all members to find neighbors)
            # Optimization: precompute eq_class members for labeled classes
            eq_members = self._get_eq_members(root)

            for member_id in eq_members:
                for neighbor_id in self.adjacency.get(member_id, ()):
                    neighbor_root = self.uf.find(neighbor_id)
                    if neighbor_root == root:
                        continue

                    neighbor_current = root_types.get(neighbor_root, BOTTOM)
                    # Propagate: neighbor receives root_type via meet
                    new_neighbor_type = self.lattice.meet(
                        neighbor_current, root_type
                    )

                    if new_neighbor_type != neighbor_current:
                        root_types[neighbor_root] = new_neighbor_type
                        if neighbor_root not in in_worklist:
                            worklist.append(neighbor_root)
                            in_worklist.add(neighbor_root)

        self.eq_types = root_types
        print(f"  iterations: {iteration}", file=sys.stderr)
        print(f"  typed equivalence classes: {len(root_types)}", file=sys.stderr)
        print(f"  converged: {not worklist}", file=sys.stderr)

    def _get_eq_members(self, root: int) -> list[int]:
        """Get variable IDs belonging to an equivalence class.

        Since lookup is O(N), cache for common roots.
        """
        if not hasattr(self, '_eq_cache'):
            self._eq_cache: dict[int, list[int]] = {}
        if root in self._eq_cache:
            return self._eq_cache[root]

        members = [
            i for i in range(len(self.id_to_var))
            if self.uf.find(i) == root
        ]
        # Only cache for small-to-medium classes to avoid memory blowup
        if len(members) <= 200:
            self._eq_cache[root] = members
        return members

    # ── T10: Confidence scoring ───────────────────────────────────────────

    def step_confidence(self) -> None:
        """Compute confidence tiers via BFS distance from nearest anchor."""
        print("Computing confidence scores (T10)...", file=sys.stderr)

        # BFS from all anchored roots
        # distance[root] = minimum hops from an anchor
        distance: dict[int, int] = {}

        # Seed with anchored roots (distance 0)
        queue: deque[tuple[int, int]] = deque()  # (root, distance)
        for anchor in self.anchors:
            root = self.uf.find(anchor.var_id)
            if root not in distance:
                distance[root] = 0
                queue.append((root, 0))

        # BFS along adjacency edges
        while queue:
            current_root, dist = queue.popleft()
            next_dist = dist + 1

            eq_members = self._get_eq_members(current_root)
            for member_id in eq_members:
                for neighbor_id in self.adjacency.get(member_id, ()):
                    neighbor_root = self.uf.find(neighbor_id)
                    if neighbor_root == current_root:
                        continue
                    if neighbor_root in distance:
                        continue
                    distance[neighbor_root] = next_dist
                    queue.append((neighbor_root, next_dist))

        self.confidences = distance
        n_anchored = sum(1 for d in distance.values() if d == 0)
        n_direct = sum(1 for d in distance.values() if d == 1)
        n_chain = sum(1 for d in distance.values() if 2 <= d <= 3)
        n_inferred = sum(1 for d in distance.values() if d > 3)

        print(f"  ANCHORED: {n_anchored}", file=sys.stderr)
        print(f"  DIRECT_PROP: {n_direct}", file=sys.stderr)
        print(f"  CHAIN_PROP: {n_chain}", file=sys.stderr)
        print(f"  INFERRED: {n_inferred}", file=sys.stderr)
        print(f"  unreachable (no anchor path): {self.uf.root_count() - len(distance)}",
              file=sys.stderr)

    # ── T11: Contradiction detection ──────────────────────────────────────

    def step_contradictions(self) -> None:
        """Detect TOP (contradiction) equivalence classes and trace conflicting paths."""
        print("Detecting contradictions (T11)...", file=sys.stderr)

        top_roots: list[int] = []
        for root, typ in self.eq_types.items():
            if typ == TOP:
                top_roots.append(root)

        contradictions: list[dict] = []
        for root in top_roots:
            # Find conflicting anchors for this equivalence class
            conflicting_anchors = self._find_conflicting_anchors(root)

            # Get sample variable names for this eq class
            sample_vars = self._get_sample_vars(root, max_samples=5)

            if conflicting_anchors:
                contradictions.append({
                    "eq_root": root,
                    "sample_variables": sample_vars,
                    "conflicting_paths": conflicting_anchors,
                })

        self.contradictions = contradictions
        print(f"  TOP (contradiction) nodes: {len(top_roots)}", file=sys.stderr)
        print(f"  with traced paths: {len(contradictions)}", file=sys.stderr)

    def _find_conflicting_anchors(self, root: int) -> list[dict]:
        """Trace back from a TOP node to find conflicting anchor paths.

        Returns list of paths, each a list of (anchor_type, var_name, source).
        """
        # Collect all anchors that can reach this root via BFS
        reachable_anchors: list[Anchor] = []

        # BFS from root backwards along adjacency
        visited: set[int] = {root}
        queue: deque[int] = deque([root])

        while queue:
            current = queue.popleft()
            eq_members = self._get_eq_members(current)
            for member_id in eq_members:
                for neighbor_id in self.adjacency.get(member_id, ()):
                    neighbor_root = self.uf.find(neighbor_id)
                    if neighbor_root in visited:
                        continue
                    visited.add(neighbor_root)
                    queue.append(neighbor_root)
                    # Check if this neighbor has anchors
                    for anchor_id in self._get_eq_members(neighbor_root):
                        for anchor in self.anchor_by_var.get(anchor_id, []):
                            if anchor not in reachable_anchors:
                                reachable_anchors.append(anchor)

        if len(reachable_anchors) < 2:
            return []

        # Find pairs of incompatible anchors
        conflicting: list[dict] = []
        for i in range(len(reachable_anchors)):
            for j in range(i + 1, len(reachable_anchors)):
                a = reachable_anchors[i]
                b = reachable_anchors[j]
                if not self.lattice.is_compatible(a.lattice_type, b.lattice_type):
                    conflicting.append({
                        "anchor_a": {
                            "var_name": a.var_name,
                            "type": _name(a.lattice_type),
                            "source": a.source,
                        },
                        "anchor_b": {
                            "var_name": b.var_name,
                            "type": _name(b.lattice_type),
                            "source": b.source,
                        },
                        "meet_result": _name(TOP),
                    })

        return conflicting[:5]  # limit to 5 per TOP node

    def _get_sample_vars(self, root: int, max_samples: int = 5) -> list[str]:
        """Get sample variable names for an equivalence class."""
        samples: list[str] = []
        for i in range(len(self.id_to_var)):
            if self.uf.find(i) == root:
                samples.append(self.id_to_var[i])
                if len(samples) >= max_samples:
                    break
        return samples

    # ── Output generation ─────────────────────────────────────────────────

    def generate_outputs(self) -> None:
        """Generate type_map.json and contradictions.md."""
        self._generate_type_map()
        self._generate_contradictions_report()

    def _generate_type_map(self) -> None:
        """Generate type_map.json: variable → type with confidence."""
        print("Generating type_map.json...", file=sys.stderr)

        output: dict[str, dict] = {}
        processed_roots: set[int] = set()

        # Process all variables through their equivalence class roots
        for var_id in range(len(self.id_to_var)):
            root = self.uf.find(var_id)
            if root in processed_roots:
                continue
            processed_roots.add(root)

            var_name = self.id_to_var[var_id]
            typ = self.eq_types.get(root, BOTTOM)
            conf_tier = self.confidences.get(root, -1)

            if conf_tier >= 0 and typ != BOTTOM:
                output[var_name] = {
                    "type": _name(typ),
                    "confidence": Confidence.name(conf_tier),
                    "eq_root": root,
                }

        # Also add entries for all variables sharing the same eq class root
        for var_id in range(len(self.id_to_var)):
            root = self.uf.find(var_id)
            var_name = self.id_to_var[var_id]
            if var_name in output:
                continue
            if root in processed_roots and root in self.eq_types:
                typ = self.eq_types.get(root, BOTTOM)
                conf_tier = self.confidences.get(root, -1)
                if conf_tier >= 0 and typ != BOTTOM:
                    output[var_name] = {
                        "type": _name(typ),
                        "confidence": Confidence.name(conf_tier),
                        "eq_root": root,
                    }

        # Write output
        out_path = os.path.join(os.getcwd(), "type_map.json")
        with open(out_path, "w", encoding="utf-8") as f:
            # Write as JSON with a summary first
            from collections import Counter
            type_counts = Counter(v["type"] for v in output.values())
            conf_counts = Counter(v["confidence"] for v in output.values())
            summary = {
                "total_entries": len(output),
                "type_distribution": dict(type_counts.most_common()),
                "confidence_distribution": dict(conf_counts),
            }
            result = {
                "_summary": summary,
                "type_map": output,
            }
            json.dump(result, f, indent=2, sort_keys=True)
        print(f"  wrote {len(output)} entries to {out_path}", file=sys.stderr)

    def _generate_contradictions_report(self) -> None:
        """Generate contradictions.md: human-readable contradiction report.

        Includes a summary of conflicting anchor types, then top contradictions
        with sample variables and traced anchor paths.
        """
        print("Generating contradictions.md...", file=sys.stderr)

        out_path = os.path.join(os.getcwd(), "contradictions.md")
        with open(out_path, "w", encoding="utf-8") as f:
            f.write("# Type Contradiction Report\n\n")
            f.write(f"**Total contradictions**: {len(self.contradictions)}\n\n")

            # ── Summary: most frequent conflicting type pairs ──
            from collections import Counter
            pair_counts = Counter()
            for c in self.contradictions:
                for path in c.get("conflicting_paths", []):
                    ta = path["anchor_a"]["type"]
                    tb = path["anchor_b"]["type"]
                    pair = tuple(sorted([ta, tb]))
                    pair_counts[pair] += 1

            f.write("## Summary: Top conflicting type pairs\n\n")
            f.write("| Type A | Type B | Frequency |\n")
            f.write("|---|---|---|\n")
            for (ta, tb), n in pair_counts.most_common(20):
                f.write(f"| `{ta}` | `{tb}` | {n} |\n")
            f.write("\n---\n\n")

            # ── Top contradictions (limit to 50 for readability) ──
            n_show = min(50, len(self.contradictions))
            f.write(f"## Top {n_show} contradictions (of {len(self.contradictions)})\n\n")

            for i, c in enumerate(self.contradictions[:n_show]):
                f.write(f"### Contradiction #{i + 1}\n\n")
                f.write(f"**Equivalence class root**: {c['eq_root']}\n\n")

                f.write("**Sample variables**:\n")
                for v in c["sample_variables"]:
                    f.write(f"- `{v}`\n")
                f.write("\n")

                f.write("**Conflicting anchor paths**:\n\n")
                for j, path in enumerate(c["conflicting_paths"][:3]):
                    f.write(f"#### Pair {j + 1}\n")
                    f.write(f"- Anchor A: `{path['anchor_a']['var_name']}`\n")
                    f.write(f"  - Type: `{path['anchor_a']['type']}`\n")
                    f.write(f"  - Source: `{path['anchor_a']['source']}`\n")
                    f.write(f"- Anchor B: `{path['anchor_b']['var_name']}`\n")
                    f.write(f"  - Type: `{path['anchor_b']['type']}`\n")
                    f.write(f"  - Source: `{path['anchor_b']['source']}`\n")
                    f.write(f"- **Meet result**: `{path['meet_result']}` (contradiction)\n\n")

                f.write("---\n\n")

        print(f"  wrote to {out_path}", file=sys.stderr)


# ── main ───────────────────────────────────────────────────────────────────

def main() -> None:
    """Run the full type inference pipeline."""
    print("=" * 60, file=sys.stderr)
    print("Type Inference Engine — T7+T9+T10+T11", file=sys.stderr)
    print("=" * 60, file=sys.stderr)

    engine = TypeInferenceEngine()

    # Load data
    engine.load_all()
    print(f"  variables: {len(engine.var_to_id)}", file=sys.stderr)
    print(f"  constraints: {len(engine.constraints)}", file=sys.stderr)
    print(f"  call_graph nodes: {len(engine.call_graph)}", file=sys.stderr)
    print(f"  anchors: {len(engine.anchors)}", file=sys.stderr)
    print(f"  lattice classes: {engine.lattice.class_count}", file=sys.stderr)
    print(file=sys.stderr)

    # T7: Steensgaard
    engine.step_steensgaard()
    print(file=sys.stderr)

    # T9: Propagation
    engine.step_propagate()
    print(file=sys.stderr)

    # T10: Confidence
    engine.step_confidence()
    print(file=sys.stderr)

    # T11: Contradictions
    engine.step_contradictions()
    print(file=sys.stderr)

    # Output
    engine.generate_outputs()
    print(file=sys.stderr)
    print("Done.", file=sys.stderr)


if __name__ == "__main__":
    main()
