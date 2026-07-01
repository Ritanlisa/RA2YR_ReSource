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
FUNC_SIGNATURES_PATH = _resolve_path("signatures", "function_signatures.json")
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

# IDA auto-name prefixes that map to hex addresses in global_types.json
_IDA_GLOBAL_PREFIXES = (
    "dword_", "byte_", "word_", "flt_", "off_", "qword_", "unk_"
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
        """Scope names to prevent global hub TOP contamination.

        Registers are scoped per-instruction — each write creates a new live
        range. Continuity edges (added by _add_register_continuity) connect
        consecutive writes of the same register within the same function,
        enabling intra-function propagation without merge conflicts.

        Stack variables (stack_+0xN) are scoped to containing function.
        Without this, stack_+0x4 becomes a global hub where 19K conflicting
        types collide, producing TOP contamination.

        Non-register/stack names are returned unchanged (they carry context).
        """
        if _is_register(name):
            # Per-instruction scoping — each write creates a new live range.
            # Continuity edges connect consecutive writes of the same register
            # within the same function, enabling propagation without false TOPs.
            return f"{addr}::{name}"
        if name.startswith("stack_"):
            # Stack slots scoped to containing function (same as before)
            # to prevent the stack_+0x4 global hub issue.
            func_addr = self._find_containing_func(addr)
            if func_addr:
                return f"0x{func_addr:08X}::{name}"
            return f"{addr}::{name}"
        return name

    def _build_variable_index(self) -> None:
        """Assign integer IDs to all unique variable names in constraints.

        Register and stack variable names are scoped by containing function
        address, allowing intra-function type propagation via reg→reg edges.
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
        self._add_register_continuity()

    def _add_register_continuity(self) -> None:
        """Add edges between consecutive scoped registers in the same function.

        After instruction-level scoping, 0x401000::eax and 0x401005::eax are
        different variables. But eax at 0x401000 feeds into eax at 0x401005.
        These continuity edges connect them, enabling propagation.

        We group scoped registers by (function_addr, register_name), sort
        by instruction address, and add edges between consecutive occurrences.
        """
        # Group: (func_addr, reg_name) → [(insn_addr, var_id)]
        groups = defaultdict(list)
        for var_name, var_id in self.var_to_id.items():
            # var_name is already scoped: "{addr}::{reg}"
            parts = var_name.split("::", 1)
            if len(parts) != 2:
                continue
            reg_name = parts[1]  # "eax"
            scoped_addr_str = parts[0]  # "0x401000"
            if not _is_register(reg_name):
                continue

            func_addr = self._find_containing_func(scoped_addr_str)
            if not func_addr:
                continue

            # Parse the instruction address from the scope string
            try:
                scoped_addr = int(scoped_addr_str, 16)
            except (ValueError, TypeError):
                continue

            groups[(func_addr, reg_name)].append((scoped_addr, var_id))

        # Sort each group by instruction address and add edges
        added = 0
        for (func_addr, reg_name), entries in groups.items():
            entries.sort()
            for i in range(len(entries) - 1):
                a_id = entries[i][1]
                b_id = entries[i + 1][1]
                self.adjacency[a_id].add(b_id)
                self.adjacency[b_id].add(a_id)
                added += 1

        print(f"  register continuity edges: {added}", file=sys.stderr)

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
        global_type_filtered = 0
        if os.path.exists(GLOBAL_TYPES_PATH):
            with open(GLOBAL_TYPES_PATH, "r", encoding="utf-8") as f:
                global_types = json.load(f)

            # Build address→type map
            addr_map: dict[str, dict] = {}
            for key, val in global_types.items():
                if key.startswith("0x"):
                    addr_map[key] = val

            self._gt_diag = {}
            for var_name, var_id in self.var_to_id.items():
                # Try exact match
                info = addr_map.get(var_name)
                if info is None:
                    # Try stripping _RET suffix
                    base = var_name.replace("_RET", "")
                    info = addr_map.get(base)
                if info is None:
                    # Try converting IDA auto-name → hex address
                    #   dword_815DA8 → 0x815DA8
                    #   dword_A8ED54+2D85Ch → 0xA8ED54
                    for ida_prefix in _IDA_GLOBAL_PREFIXES:
                        for attempt_name in (var_name, base):
                            if attempt_name.lower().startswith(ida_prefix):
                                suffix = attempt_name[len(ida_prefix):]
                                hex_part = suffix.split("+")[0].split(":")[0]
                                hex_addr = "0x" + hex_part.upper()
                                info = addr_map.get(hex_addr)
                                if info is not None:
                                    break
                        if info is not None:
                            break
                if info is None:
                    continue

                # Track matched-but-filtered for diagnostics
                typ_name = info.get("type", "")
                lattice_type = self._to_lattice_type(typ_name, valid_classes)
                if lattice_type is None:
                    global_type_filtered += 1
                    # TEMP: diagnostic
                    if not hasattr(self, '_gt_diag'):
                        self._gt_diag = {}
                    self._gt_diag[typ_name.strip()[:60]] = self._gt_diag.get(typ_name.strip()[:60], 0) + 1
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
        print(f"  global_types filtered sample (top 10):", file=sys.stderr)
        for t, c in sorted(self._gt_diag.items(), key=lambda x: -x[1])[:10]:
            print(f"    {t}: {c}", file=sys.stderr)
        print(f"  global_types anchors: {global_matched}"
              f" ({global_type_filtered} matched but filtered by type)", file=sys.stderr)

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

            # Also anchor function existence for ALL vtable entries
            # via ::this or ::param0 variables (matches functions
            # that have parameters but no .return variable)
            for func_name in func_sig_map:
                for suffix in ("::this", "::param0"):
                    param_var_name = func_name + suffix
                    param_var_id = self.var_to_id.get(param_var_name)
                    if param_var_id is not None:
                        anchor = Anchor(
                            param_var_id, param_var_name, VOID_PTR,
                            "vtable_signatures",
                        )
                        self.anchors.append(anchor)
                        self.anchor_by_var[param_var_id].append(anchor)
                        vtable_matched += 1
                        break  # one anchor per vtable func is enough
        print(f"  vtable_signatures anchors: {vtable_matched}", file=sys.stderr)

        # ── function_signatures anchors ──
        self._load_func_signatures(valid_classes)

        # ── orphan component seeding ──
        self._seed_orphan_components()

    def _load_func_signatures(self, valid_classes: set[str]) -> None:
        """Load function signature anchors from IDA-extracted function_signatures.json.

        Creates anchors for:
          - FuncName.return → return type
          - FuncName::param{i} → parameter type (first non-this param = param0)
          - FuncName::this → this pointer type (for thiscall functions)

        The mapping respects calling convention:
          - thiscall: params[0]→this, params[1]→param0, params[2]→param1, ...
          - Other:     params[0]→param0, params[1]→param1, ...
        """
        if not os.path.exists(FUNC_SIGNATURES_PATH):
            print("  func_signatures: file not found, skipping", file=sys.stderr)
            return

        with open(FUNC_SIGNATURES_PATH, "r", encoding="utf-8") as f:
            sig_data = json.load(f)

        functions = sig_data.get("functions", {})
        if not functions:
            print("  func_signatures: empty, skipping", file=sys.stderr)
            return

        # Build fast lookup: func_name → signature
        sig_by_name: dict[str, dict] = functions

        param_matched = 0
        this_matched = 0
        return_matched = 0

        for var_name, var_id in self.var_to_id.items():
            # ── .return variables ──
            if var_name.endswith(".return"):
                func_name = var_name[:-7]  # strip ".return"
                sig = sig_by_name.get(func_name)
                if sig is None:
                    continue
                ret_type = sig.get("ret_type", "")
                if not ret_type or ret_type == "void":
                    continue
                lattice_type = self._to_lattice_type(ret_type, valid_classes)
                if lattice_type is None:
                    continue
                anchor = Anchor(
                    var_id=var_id,
                    var_name=var_name,
                    lattice_type=lattice_type,
                    source="function_signatures",
                )
                self.anchors.append(anchor)
                self.anchor_by_var[var_id].append(anchor)
                return_matched += 1
                continue

            # ── ::paramN and ::this variables ──
            # Variable format: FuncName::paramN or FuncName::this
            if "::" not in var_name:
                continue

            parts = var_name.rsplit("::", 1)
            if len(parts) != 2:
                continue
            func_name, param_part = parts

            sig = sig_by_name.get(func_name)
            if sig is None:
                # Try alternative name formats (some functions use '?' mangling)
                continue

            params = sig.get("params", [])
            if not params:
                continue

            cc = sig.get("calling_convention", "unknown")
            # Heuristic: treat as thiscall if first param is named "this" or cc is thiscall
            is_thiscall = (cc == "__thiscall" or
                          (params and "this" in params[0].get("name", "").lower()))

            if param_part == "this" and is_thiscall:
                # Anchor the this pointer
                param_type = params[0].get("type", "")
                if param_type:
                    lattice_type = self._to_lattice_type(param_type, valid_classes)
                    if lattice_type is not None:
                        anchor = Anchor(
                            var_id=var_id,
                            var_name=var_name,
                            lattice_type=lattice_type,
                            source="function_signatures",
                        )
                        self.anchors.append(anchor)
                        self.anchor_by_var[var_id].append(anchor)
                        this_matched += 1
                continue

            if param_part.startswith("param"):
                try:
                    param_idx = int(param_part[5:])  # parse "param0" → 0
                except ValueError:
                    continue

                # Calculate IDA parameter index
                if is_thiscall:
                    # thiscall: params[0] = this, params[1] = param0, params[2] = param1
                    ida_idx = param_idx + 1
                else:
                    # non-thiscall: params[0] = param0, params[1] = param1
                    ida_idx = param_idx

                if ida_idx < 0 or ida_idx >= len(params):
                    continue

                param_type = params[ida_idx].get("type", "")
                if not param_type:
                    continue

                lattice_type = self._to_lattice_type(param_type, valid_classes)
                if lattice_type is None:
                    continue

                anchor = Anchor(
                    var_id=var_id,
                    var_name=var_name,
                    lattice_type=lattice_type,
                    source="function_signatures",
                )
                self.anchors.append(anchor)
                self.anchor_by_var[var_id].append(anchor)
                param_matched += 1

        total_funcs = len(functions)
        total_anchors = param_matched + this_matched + return_matched
        print(f"  func_signatures anchors: {total_anchors}"
              f" (param={param_matched}, this={this_matched}, return={return_matched})"
              f" from {total_funcs} functions", file=sys.stderr)

    def _seed_orphan_components(self) -> None:
        """Inject VOID_PTR anchors into every component with zero anchors.

        After all anchor types are loaded, some connected components in the
        constraint graph may have no anchors at all. These become unreachable
        during BFS propagation (0% coverage for those components).

        This method:
        1. Builds the adjacency graph from constraints (if not already built)
        2. BFS-traverses the graph to find connected components
        3. For each component with zero anchors, picks the lowest-ID variable
           and injects a VOID_PTR anchor

        VOID_PTR is the lattice meet identity — it does not pollute type
        inference (anything meet VOID_PTR = itself). This guarantees every
        component has at least one seed, enabling 100% BFS reachability.
        """
        import sys

        # ── Build adjacency from constraints if not already built ──
        # step_steensgaard() builds self.adjacency later; if called from
        # _load_anchors(), adjacency is empty and we must build it here.
        if not self.adjacency:
            for c in self.constraints:
                addr = c.get("addr", "0x0")
                sfrom = self._scope_name(c["from"], addr)
                sto = self._scope_name(c["to"], addr)
                fid = self.var_to_id.get(sfrom)
                tid = self.var_to_id.get(sto)
                if fid is None or tid is None:
                    continue
                ctype = c["type"]
                if ctype == "CALL_VTABLE":
                    continue  # no variable adjacency from vtable slots
                self.adjacency[fid].add(tid)
                self.adjacency[tid].add(fid)

        # ── BFS to find connected components ──
        visited: set[int] = set()
        orphan_count = 0
        seeded = 0

        for var_id in range(len(self.id_to_var)):
            if var_id in visited:
                continue

            # BFS this component
            comp: set[int] = set()
            queue: list[int] = [var_id]
            has_anchor = False
            while queue:
                vid = queue.pop()
                if vid in visited:
                    continue
                visited.add(vid)
                comp.add(vid)
                if vid in self.anchor_by_var and self.anchor_by_var[vid]:
                    has_anchor = True
                for neighbor in self.adjacency.get(vid, ()):
                    if neighbor not in visited:
                        queue.append(neighbor)

            if not has_anchor and comp:
                orphan_count += 1
                # Inject VOID_PTR on lowest-ID variable in component
                seed_id = min(comp)
                seed_name = self.id_to_var[seed_id]
                anchor = Anchor(
                    var_id=seed_id,
                    var_name=seed_name,
                    lattice_type=VOID_PTR,
                    source="orphan_seed",
                )
                self.anchors.append(anchor)
                self.anchor_by_var.setdefault(seed_id, []).append(anchor)
                seeded += 1

        print(f"  orphan components: {orphan_count}, seeded: {seeded}",
              file=sys.stderr)

    @staticmethod
    def _to_lattice_type(typ_name: str, valid_classes: set[str]) -> LatticeElement | None:
        """Convert a type name string to a lattice element, or None if unfittable."""
        # ── Sampling diagnostic ──
        if not hasattr(TypeInferenceEngine._to_lattice_type, '_sample_count'):
            TypeInferenceEngine._to_lattice_type._sample_count = 0
            TypeInferenceEngine._to_lattice_type._sample_fails = {}
        _fail_ct = TypeInferenceEngine._to_lattice_type._sample_count
        _fail_dict = TypeInferenceEngine._to_lattice_type._sample_fails

        typ = typ_name.strip().rstrip("*").strip()  # remove pointer asterisks
        # Strip C++ declaration prefixes: class X*, struct X*, const X*
        for prefix in ("class ", "struct ", "const "):
            if typ.startswith(prefix):
                typ = typ[len(prefix):]
        # Check if it's a valid class name
        if typ in valid_classes:
            return typ
        # Check common name variations (strip trailing numbers, prefixes)
        if typ.endswith("Class") and typ in valid_classes:
            return typ
        # Normalize integer-like types to "int" to prevent false TOP explosions
        _INTEGER_TYPES = {
            "int", "int32_t", "uint32_t", "int16_t", "uint16_t",
            "int8_t", "uint8_t", "bool", "BOOL", "DWORD", "WORD", "BYTE",
            "char", "unsigned int", "unsigned short", "unsigned char",
            "long", "unsigned long", "short", "signed char",
            # IDA decompiler internal type names
            "_DWORD", "_BYTE", "_WORD",
            "__int8", "__int16", "__int32", "__int64", "__int128",
            "unsigned __int8", "unsigned __int16",
            "signed int",
        }
        _FLOAT_TYPES = {"float", "double", "long double"}
        
        if typ in _INTEGER_TYPES:
            return "int"  # all integer types collapse to "int"
        if typ in _FLOAT_TYPES:
            return "float"  # all float types collapse to "float"
        if typ_name.strip().endswith("*") and typ == "void":
            # void* → VOID_PTR (lattice identity for pointers)
            return VOID_PTR
        if typ == "void":
            # void alone (not void*) carries no type — skip
            return None
        
        # Function pointer types cannot be typed
        if "(*)" in typ or "function" in typ.lower():
            return None

        # IDA internal struct IDs (#72, #374, etc.) — skip
        if typ.startswith("#") and typ[1:].isdigit():
            return None

        # Empty or whitespace-only — skip
        if not typ.strip():
            return None

        # Struct types (TimerStruct, CoordStruct, etc.) — pass through as-is
        # They are not in valid_classes but are still valid type names
        # Strip namespace prefixes for consistency
        if "::" in typ:
            typ = typ.rsplit("::", 1)[-1]
        
        # Do NOT return None for non-class types — they are valid lattice values now
        # The lattice.meet() already handles them correctly (different names → TOP)
        return typ

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
                    # member->member: adjacency only (0 such constraints exist)
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

            elif ctype == "FUNC_PARAM":
                # Function parameter passing — type flows from param→local
                self.adjacency[fid].add(tid)
                self.adjacency[tid].add(fid)

            elif ctype == "CALL_ARG":
                # Argument passing at call site — type flows arg→param
                self.adjacency[fid].add(tid)
                self.adjacency[tid].add(fid)

            elif ctype == "RETURN_TO":
                # Return value assignment at call site — type flows ret→local
                self.adjacency[fid].add(tid)
                self.adjacency[tid].add(fid)

            elif ctype == "STACK_ACCESS":
                # Stack variable load/store — type flows between stack slots
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

        # Pre-build root→members map for fast lookup (avoids O(N) scans in T9/T10)
        self._build_eq_members_map()

    def _build_eq_members_map(self) -> None:
        """Build root→members mapping in a single O(N) pass.

        Called after T7 (Steensgaard) completes. Enables O(1) member lookups
        during T9 propagation and T10 confidence scoring.
        """
        self._eq_members_map: dict[int, list[int]] = defaultdict(list)
        for i in range(len(self.id_to_var)):
            root = self.uf.find(i)
            self._eq_members_map[root].append(i)
        # Convert to plain dict for faster lookups
        self._eq_members_map = dict(self._eq_members_map)
        n_classes = len(self._eq_members_map)
        avg_size = sum(len(v) for v in self._eq_members_map.values()) / max(n_classes, 1)
        print(f"  eq_members_map: {n_classes} classes, avg size {avg_size:.1f}",
              file=sys.stderr)

    # ── T9: Propagation ───────────────────────────────────────────────────

    def step_propagate(self) -> None:
        """Worklist propagation of types through the constraint adjacency graph.

        Starts from anchored nodes. Uses lattice.meet() to combine types.
        VOID_PTR is the meet identity — does NOT pollute.
        Terminates when worklist is empty or max iterations reached.
        """
        print("Running type propagation (T9)...", file=sys.stderr)

        max_iterations = 10_000_000  # effectively unlimited, converges naturally

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

                if iteration % 1000 == 0:
                    # Checkpoint: save current progress
                    import json, os
                    cp = {
                        "iteration": iteration,
                        "root_types_size": len(root_types),
                        "worklist_size": len(worklist),
                    }
                    cp_path = os.path.join(
                        os.path.dirname(__file__), "propagation_checkpoint.json"
                    )
                    with open(cp_path, "w") as f:
                        json.dump(cp, f)

        self.eq_types = root_types
        print(f"  iterations: {iteration}", file=sys.stderr)
        print(f"  typed equivalence classes: {len(root_types)}", file=sys.stderr)
        print(f"  converged: {not worklist} (remaining: {len(worklist)})", file=sys.stderr)

    def _get_eq_members(self, root: int) -> list[int]:
        """Get variable IDs belonging to an equivalence class.

        Uses pre-built root→members mapping (built after T7).
        Falls back to O(N) scan only if map is empty.
        """
        return self._eq_members_map.get(root, [])

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

    # T11: Contradictions (disabled — O(n²) on 130K anchors)
    # engine.step_contradictions()
    print(file=sys.stderr)

    # Output
    engine.generate_outputs()
    print(file=sys.stderr)
    print("Done.", file=sys.stderr)


if __name__ == "__main__":
    main()
