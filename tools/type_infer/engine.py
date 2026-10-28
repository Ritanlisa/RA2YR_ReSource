#!/usr/bin/env python3
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
from collections import Counter, defaultdict, deque
from dataclasses import dataclass, field
from typing import Any, Optional

from tools.type_infer.union_find import UnionFind
from tools.type_infer.lattice import (
    TypeLattice, BOTTOM, VOID_PTR, TOP, LatticeElement, _is_concrete, _name
)
from tools.type_infer.scope_vars import (
    X86_REGISTERS, is_register as _is_register,
    build_scoped_index as _build_scoped_index,
    _scope_one_var,
)

# ── _X86_REGISTERS and _is_register now in scope_vars.py ───────────────────

# ── paths ──────────────────────────────────────────────────────────────────

def _resolve_path(*parts: str) -> str:
    """Resolve path relative to the tools/type_infer directory."""
    base = os.path.dirname(os.path.abspath(__file__))
    return os.path.normpath(os.path.join(base, *parts))

CONSTRAINTS_PATH = _resolve_path("constraints", "raw_constraints.json")
CALL_GRAPH_PATH = _resolve_path("constraints", "call_graph.json")
VTABLE_SIG_PATH = _resolve_path("anchors", "vtable_signatures.json")
FUNC_SIGNATURES_PATH = _resolve_path("signatures", "function_signatures.json")
# RTTI 重锚定提取器 (ida_extract.py 实模式) 的 CSP 签名产物：地址式变量
# （`0xADDR:this` / `0xADDR::paramN` / `0xADDR.return`）的锚点数据源
CSP_FUNCS_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
    "csp", "full_report", "csp_functions.json"
))
MEMBER_TYPES_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "anchors", "member_types.json"
))
GLOBAL_TYPES_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "anchors", "global_types.json"
))

# 构造存储推导的全局实例锚（mov [G], vtable → G 是 vtable 类实例；
# 由 gen_singleton_anchors.py 从 RTTI vtable xref 扫描生成）
SINGLETON_TYPES_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "anchors", "singleton_types.json"
))

# RTTI vtable → 类 真值（col_offset==0 主 vtable）
RTTI_VTABLE_CLASS_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "anchors", "rtti_vtable_class.json"
))

# IDA 字符串字面量表（a* 标签 → 地址）
STRING_LITERALS_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "anchors", "string_literals.json"
))

# vtable 安装者（ctor/dtor/Construct：入口附近向 this-链寄存器安装 vtable
# 的函数——三者都接收正确类型的 this）。IDA 侧扫描生成。
CTOR_TYPES_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "anchors", "ctor_types.json"
))
# 结构真值（离线快照汇编扫描: vtable 安装自证 + 槽位 LCA）。
STRUCTURAL_TRUTH_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "anchors", "structural_truth.json"
))
# X173: signals.json 提供函数名 -> 归属类。`Class::Method` 的 this 就是
# Class；无 `::` 的名字是自由函数（根本没有 this）。
SIGNALS_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "signals.json"
))

# 外部库字符串函数锚（CRT/Win32 —— 用户许可的库函数例外）：
# 地址 → {paramN: 'char*'}，'ret' 键为返回 char*。均为 cdecl 栈参数。
_LIB_STRING_FUNCS = {
    0x7C9CC2: {0: "char*", 1: "char*", "ret": "char*"},  # strtok
    0x7CDA90: {0: "char*", 1: "char*"},                  # strcmp
    0x7C8D20: {0: "char*", 1: "char*"},                  # _strcmpi
    0x7CD680: {0: "char*", 1: "char*"},                  # _strnicmp
    0x7CE049: {0: "char*", 1: "char*", "ret": "char*"},  # strcat
    0x7CA4B0: {0: "char*", 1: "char*", "ret": "char*"},  # strstr
    0x7CAF30: {0: "char*", "ret": "char*"},              # strchr
    0x7D15A0: {0: "char*"},                              # strlen
    0x7C8470: {0: "char*"},                              # lstrlenA
    0x7C8542: {0: "char*", 1: "char*", "ret": "char*"},  # lstrcpyA
    0x7C846A: {0: "char*", 1: "char*", "ret": "char*"},  # lstrcatA
    0x7C85EA: {0: "char*"},                              # wsprintfA (fmt)
    0x7C8EF4: {0: "char*", 1: "char*"},                  # sprintf (dest, fmt)
    0x7CB7BA: {0: "char*", 1: "char*"},                  # vsprintf
    # 宽字符族 + 补充（round 8；宽字符串指针与窄串共用 char* 伪域）
    0x7DCFC4: {0: "char*", "ret": "char*"},              # _strupr
    0x7DD0F8: {0: "char*", 1: "char*"},                  # _wcsicmp
    0x7C91D0: {0: "char*", 1: "char*"},                  # strncpy
    0x7CA45F: {0: "char*", 1: "char*", "ret": "char*"},  # wcscat
    0x7CA5D3: {0: "char*", 1: "char*"},                  # wcscmp
    0x7CA489: {0: "char*", 1: "char*", "ret": "char*"},  # wcscpy
    0x7CA405: {0: "char*"},                              # wcslen
    0x7DCF94: {0: "char*"},                              # lstrlenW
}
CLASS_LAYOUTS_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
    "class_layouts.json"
))
CLASS_ALIGN_PATH = os.path.normpath(os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "anchors", "class_name_align.json"
))

# 缺口 1（OO 路线图）: RTTI 修饰名 → canon（header）名对齐表。惰性单次
# 加载；_to_lattice_type 是所有锚值进 lattice 的唯一漏斗，在这里归一化
# 即可让 vtable/ctor/CSP/member 各通道与层次图、member_types 键同一体系。
_ALIGN_TO_CANON: dict[str, str] | None = None


def _align_canon(name: str) -> str:
    global _ALIGN_TO_CANON
    if _ALIGN_TO_CANON is None:
        m: dict[str, str] = {}
        try:
            with open(CLASS_ALIGN_PATH, "r", encoding="utf-8") as f:
                for k, v in json.load(f).get("rtti_to_canon", {}).items():
                    if isinstance(v, dict) and v.get("canon"):
                        m[k] = v["canon"]
        except Exception:
            pass
        _ALIGN_TO_CANON = m
    return _ALIGN_TO_CANON.get(name, name)


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

# IDA 风格十六进制字面量：纯 hex 数字 + 尾缀 h（'0FFFFFFFFh'、'0Ch'）
_RE_IDA_HEX_LITERAL = re.compile(r"^[0-9A-Fa-f]+h$")
_RE_FRAME_PTR = re.compile(r"^0x[0-9A-Fa-f]{8}::(esp|ebp|sp|bp)_v0x")


def _is_var_literal(name: str) -> bool:
    """True if the variable name is a numeric literal ('0', '0Ch', '-1',
    '0FFFFFFFFh').

    Literals are meet-identity values: an edge into a literal carries no
    type information, but the literal NODE bridges the typed domains on its
    other edges (e.g. `mov [esp+0x48], 0` and `mov byte_G, 0` both reference
    literal 0, merging a pointer stack slot with an int global). Edges with
    a literal endpoint must not create adjacency.
    """
    if not name:
        return False
    n = name.strip()
    try:
        int(n, 0)
        return True
    except ValueError:
        pass
    return bool(_RE_IDA_HEX_LITERAL.match(n))



def _is_output_noise(name: str) -> bool:
    """True for graph pseudo-nodes with no type semantics (excluded from
    type_map/suggested_types output — honest coverage accounting):
    - `*def@0xADDR` B4 SSA version markers
    - `0xF::(esp|ebp)_v*` frame-pointer SSA slices
    - `0xADDR_call` call-site plumbing pseudos
    - `vtable_slot_*` shared slot pseudos
    - numeric literals ('0', '0A0h', '0BF800000h', ...)
    """
    if name.startswith("*def@") or name.startswith("vtable_slot_"):
        return True
    if name.endswith("_call"):
        return True
    if _RE_FRAME_PTR.match(name):
        return True
    return _is_var_literal(name)

def _edge_skips_adjacency(sfrom: str, sto: str) -> bool:
    """Shared guard for constraint edges that must not build adjacency.

    - vtable_slot_* pseudo-vars: shared slot hubs would bridge every class.
    - numeric literals: meet-identity bridges (see _is_var_literal).
    - `*def@0xADDR` SSA version markers (extractor B4): instruction-unique
      pseudo sources emitted only to register SSA write points — they carry
      no type and must stay isolated.
    """
    if sfrom.startswith("vtable_slot_") or sto.startswith("vtable_slot_"):
        return True
    if sfrom.startswith("*def@"):
        return True
    # Raw operand-text names (`dword ptr [esi]`) are cross-function shared
    # hubs — extractor B5 removes them at the source; guard here too.
    if " ptr [" in sfrom or " ptr [" in sto:
        return True
    return _is_var_literal(sfrom) or _is_var_literal(sto)


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


def _load_all_function_addrs() -> list[int]:
    """完整函数起始地址表（signals.json kind=='function'）。

    call_graph 只含 caller/callee（~10K），叶子函数缺失会导致 scope_vars
    把其指令错误归属到上一个函数（模板簇 637 假 TOP 根因），此处补全。
    """
    global _ALL_FUNC_ADDR_CACHE
    if _ALL_FUNC_ADDR_CACHE is not None:
        return _ALL_FUNC_ADDR_CACHE
    path = os.path.normpath(os.path.join(
        os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
        "signals.json",
    ))
    addrs: list[int] = []
    try:
        with open(path, "r", encoding="utf-8") as f:
            data = json.load(f)
        for key, sym in data.get("symbols", {}).items():
            if sym.get("kind") != "function":
                continue
            try:
                addrs.append(int(sym.get("address", key), 16))
            except (ValueError, TypeError):
                pass
    except (OSError, json.JSONDecodeError) as e:
        print(f"  signals.json load failed ({e}); scoping falls back to call_graph only",
              file=sys.stderr)
    _ALL_FUNC_ADDR_CACHE = addrs
    return addrs


_ALL_FUNC_ADDR_CACHE = None


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
        if tier < 0:
            return "ORPHAN"  # no anchor path (anchor-less component)
        if tier == 0:
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

        # Directed channels (T9 v2 semantics):
        # param_in[arg_id] → {param_id}: CALL_ARG bindings. A parameter receives
        #   values from MANY call sites; its true type is a SUPERTYPE of every
        #   argument (polymorphic this/param), so the accumulation operator at
        #   the param end is JOIN (least common ancestor), and nothing flows
        #   BACK from the param to the call-site expressions.
        # return_out[ret_id] → {receiver_id}: return channel (CALL + RETURN_TO).
        #   The callee's .return has ONE type (meet of its RET sites); it flows
        #   OUT to every receiver (meet at each receiver); receivers never flow
        #   back into .return (which would pollute the callee for all callers).
        self.param_in: dict[int, set[int]] = defaultdict(set)
        self.return_out: dict[int, set[int]] = defaultdict(set)

        # B7: (receiver_var_id, slot_idx) pairs captured from CALL_VTABLE
        self._vtcall_routes: list[tuple[int, int]] = []

        # T9e (X142b): arithmetic-typing rule firings.
        # root_id → (rule, tier, edge_description). Auditable evidence ledger:
        # feeds T10 BFS seeding (confidence honest for rule-typed roots) and
        # t9e_evidence.json (per-rule yield attribution).
        self._t9e_fired: dict[int, tuple[str, int, str]] = {}

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

    def _build_variable_index(self) -> None:
        """Assign integer IDs to all unique SSA-scoped variable names.

        Uses scope_vars.build_scoped_index() for SSA-based register scoping.
        Each register write creates a new SSA version, eliminating false
        cross-live-range hub contamination. No continuity edges needed.
        """
        result = _build_scoped_index(
            self.constraints, self.call_graph,
            extra_func_addrs=_load_all_function_addrs(),
        )

        # Pre-computed scoped names per constraint (for step_steensgaard)
        self._scoped_to_name = result["scoped_to_name"]

        # Build variable index from SSA-scoped names
        seen = result["scoped_to_original"]

        # Sort for deterministic IDs
        sorted_names = sorted(seen.keys())
        self.var_to_id = {name: i for i, name in enumerate(sorted_names)}
        self.id_to_var = sorted_names
        self.uf = UnionFind(len(self.id_to_var))

        # Store original name lookup for anchor matching
        self._scoped_to_original = seen
        # Write map (function, reg) → sorted write addrs — reused by T9e for
        # ad-hoc SSA scoping of PTR_ARITH operands (X3/I91: PTR_ARITH edges
        # are excluded from build_scoped_index's variable registration, so
        # their from/to must be scoped on demand).
        self._writes = result["writes"]
        # Sorted function start addresses (signals.json-complete) for
        # instruction→function containment (TYPE_SEED scoping)
        self._func_addrs = sorted(set(_load_all_function_addrs()))
        print(f"  scoped variables: {len(seen)}", file=sys.stderr)

    # _add_register_continuity removed: SSA scoping in scope_vars.py
    # handles live-range isolation natively (each write → new SSA version).

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
        # T9b lookup: 'Class+0xOff' → entry (legacy class names)
        self._member_types_by_class = {
            k: v for k, v in raw.items() if _RE_MEMBER_ALT.match(k)
        } if os.path.exists(MEMBER_TYPES_PATH) else {}
        self._member_types_by_class_classes = set(self.lattice._ancestors)

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

        # ── csp_functions 签名锚点（RTTI 重锚定提取器的地址式变量）──
        self._load_csp_signature_anchors(valid_classes, member_types)

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
                # Try exact match; normalize `offset NAME` (lea-style global
                # reference) and _RET suffix before matching
                norm = var_name
                if norm.startswith("offset "):
                    norm = norm[len("offset "):]
                info = addr_map.get(norm)
                if info is None:
                    # Try stripping _RET suffix
                    base = norm.replace("_RET", "")
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

        # ── singleton_types anchors（构造存储推导：mov [G], vtable）──
        singleton_matched = 0
        if os.path.exists(SINGLETON_TYPES_PATH):
            with open(SINGLETON_TYPES_PATH, "r", encoding="utf-8") as f:
                singleton_types = json.load(f)

            by_name = {v["name"]: v for v in singleton_types.values()
                       if isinstance(v, dict) and v.get("name")}
            by_addr = {k.upper(): v for k, v in singleton_types.items()}
            singleton_unfit = 0
            for var_name, var_id in self.var_to_id.items():
                norm = var_name[len("offset "):] if var_name.startswith("offset ") else var_name
                info = by_name.get(norm)
                if info is None:
                    for ida_prefix in _IDA_GLOBAL_PREFIXES:
                        if norm.lower().startswith(ida_prefix):
                            hex_part = norm[len(ida_prefix):].split("+")[0].split(":")[0]
                            info = by_addr.get("0x" + hex_part.upper())
                            if info is not None:
                                break
                if info is None:
                    continue
                lattice_type = self._to_lattice_type(info.get("type", ""), valid_classes)
                if lattice_type is None:
                    singleton_unfit += 1
                    continue
                anchor = Anchor(
                    var_id=var_id,
                    var_name=var_name,
                    lattice_type=lattice_type,
                    source="singleton_ctor_store",
                )
                self.anchors.append(anchor)
                self.anchor_by_var[var_id].append(anchor)
                singleton_matched += 1
            print(f"  singleton_types anchors: {singleton_matched}"
                  f" ({singleton_unfit} filtered, {len(singleton_types)} globals)",
                  file=sys.stderr)

        # ── 字符串字面量锚（IDA a* 标签 → char*）──
        string_matched = 0
        if os.path.exists(STRING_LITERALS_PATH):
            with open(STRING_LITERALS_PATH, "r", encoding="utf-8") as f:
                str_lits = json.load(f)
            for var_name, var_id in self.var_to_id.items():
                norm = var_name[len("offset "):] if var_name.startswith("offset ") else var_name
                if norm not in str_lits:
                    continue
                anchor = Anchor(
                    var_id=var_id, var_name=var_name,
                    lattice_type="char*", source="string_literal",
                )
                self.anchors.append(anchor)
                self.anchor_by_var[var_id].append(anchor)
                string_matched += 1
            print(f"  string_literal anchors: {string_matched}"
                  f" ({len(str_lits)} literals)", file=sys.stderr)

        # ── vtable 安装者 this 锚（ctor/dtor/Construct，rank 3 二进制直证）──
        ctor_matched = 0
        if os.path.exists(CTOR_TYPES_PATH):
            with open(CTOR_TYPES_PATH, "r", encoding="utf-8") as f:
                ctor_types = json.load(f)
            for addr_str, cls in ctor_types.items():
                lattice_type = self._to_lattice_type(cls, valid_classes)
                if lattice_type is None or lattice_type in (VOID_PTR, TOP):
                    continue
                var_name = f"0x{int(addr_str, 16):08X}:this"
                var_id = self.var_to_id.get(var_name)
                if var_id is None:
                    continue
                anchor = Anchor(
                    var_id=var_id, var_name=var_name,
                    lattice_type=lattice_type, source="ctor_vtable_install",
                )
                self.anchors.append(anchor)
                self.anchor_by_var[var_id].append(anchor)
                ctor_matched += 1
            print(f"  ctor/installer this anchors: {ctor_matched}", file=sys.stderr)

        # ── 结构真值 this 锚（离线快照汇编扫描, t14_pool_extender）──
        # vtable_install: 函数向 this 安装 vtable 的二进制自证（rank 3,
        #   与 ctor_vtable_install 同级——快照扫描覆盖了 IDA 侧扫描漏掉的
        #   模板实例化, 且取最深安装类）
        # slot_this: vtable 槽位成员资格 → 包含类最深公共祖先（rank 2
        #   结构事实; 与更精确锚 meet 时精确者存活, 无关冲突交 T11 暴露）
        st_path = STRUCTURAL_TRUTH_PATH
        # X173: name-derived this owner (highest trust). Offline vtable-install
        # scanning attributes `mov [reg], offset vt` to THIS even when reg is a
        # fresh allocation (factory) or a member subobject — measured: 801/1398
        # install anchors contradict the function's own name and 280 sit on
        # free functions (no this at all). The name is the reliable signal.
        _name_owner = {}
        try:
            with open(SIGNALS_PATH, "r", encoding="utf-8") as _f:
                _sig = json.load(_f)
            for _a, _e in (_sig.get("symbols") or {}).items():
                if not isinstance(_e, dict):
                    continue
                _nm = _e.get("name") or ""
                try:
                    _ai = int(str(_a), 16)
                except Exception:
                    continue
                _name_owner[_ai] = _nm.split("::")[0] if "::" in _nm else ""
        except Exception as _e:
            print(f"  signals name-owner load failed ({_e})", file=sys.stderr)
        n_name_skipped = 0
        n_inst = n_slot = 0
        if os.path.exists(st_path):
            with open(st_path, "r", encoding="utf-8") as f:
                st = json.load(f)
            for section, src_name in (("vtable_install",
                                       "structural_vtable_install"),
                                      ("slot_this", "structural_slot"),
                                      ("this_pass", "structural_slot")):
                for addr_str, cls in (st.get(section) or {}).items():
                    try:
                        _own = _name_owner.get(int(addr_str, 16))
                    except Exception:
                        _own = None
                    if _own is not None and _own != cls:
                        # name says otherwise (or it is a free function) -> drop
                        n_name_skipped += 1
                        continue
                    lattice_type = self._to_lattice_type(cls, valid_classes)
                    if lattice_type is None or lattice_type in (VOID_PTR, TOP):
                        continue
                    var_name = f"0x{int(addr_str, 16):08X}:this"
                    var_id = self.var_to_id.get(var_name)
                    if var_id is None:
                        # 真值在手但提取器未物化该函数的 this 变量——
                        # 创建孤立变量节点让锚落地（T10 记 ANCHORED）;
                        # 同步扩 UnionFind 域（锚加载先于任何 union）
                        var_id = len(self.id_to_var)
                        self.id_to_var.append(var_name)
                        self.var_to_id[var_name] = var_id
                        self.uf.grow(var_id + 1)
                    anchor = Anchor(
                        var_id=var_id, var_name=var_name,
                        lattice_type=lattice_type, source=src_name,
                    )
                    self.anchors.append(anchor)
                    self.anchor_by_var[var_id].append(anchor)
                    if section == "vtable_install":
                        n_inst += 1
                    else:
                        n_slot += 1
            print(f"  structural truth anchors: install={n_inst} "
                  f"slot={n_slot}", file=sys.stderr)
            print(f"  structural anchors dropped by name-owner rule: {n_name_skipped}",
                  file=sys.stderr)

        # X173: inject name-derived this anchors (rank 4, above ctor/structural)
        n_name = 0
        for _ai, _own in _name_owner.items():
            if not _own:
                continue
            lattice_type = self._to_lattice_type(_own, valid_classes)
            if lattice_type is None or lattice_type in (VOID_PTR, TOP):
                continue
            var_name = f"0x{_ai:08X}:this"
            var_id = self.var_to_id.get(var_name)
            if var_id is None:
                continue
            anchor = Anchor(var_id=var_id, var_name=var_name,
                            lattice_type=lattice_type, source="name_owner")
            self.anchors.append(anchor)
            self.anchor_by_var[var_id].append(anchor)
            n_name += 1
        print(f"  name_owner this anchors: {n_name}", file=sys.stderr)

        # X173: explicit-cast anchors. A cast `y = (T)x` is a LEGAL kind
        # crossing: y is authoritative T and is frozen against value-flow
        # joins, so the strict pointer/scalar rule cannot turn it into a
        # contradiction. Source: anchors/cast_anchors.json (cast facts from
        # ida_cache_x128 joined to constraint-var ids via x117 ssa_key).
        n_cast = 0
        _cast_path = os.path.normpath(os.path.join(
            os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
            "anchors", "cast_anchors.json"))
        if os.path.exists(_cast_path):
            try:
                with open(_cast_path, "r", encoding="utf-8") as _cf:
                    _casts = json.load(_cf)
                for _key, _spec in _casts.items():
                    _vid = self.var_to_id.get(_key)
                    if _vid is None:
                        continue
                    _lt = self._to_lattice_type(_spec.get("type"), valid_classes)
                    if _lt is None or _lt in (VOID_PTR, TOP):
                        continue
                    _a = Anchor(var_id=_vid, var_name=_key,
                                lattice_type=_lt, source="cast_explicit")
                    self.anchors.append(_a)
                    self.anchor_by_var[_vid].append(_a)
                    n_cast += 1
            except Exception as _e:
                print(f"  cast anchors load failed ({_e})", file=sys.stderr)
        print(f"  explicit cast anchors: {n_cast}", file=sys.stderr)

        # X178: 全局变量的"一个变量一个类型"锚 —— 取该全局所有 (T*)&g 类类型
        # cast 的多数派（视图 cast int*/char*/void*/_DWORD* 已排除）。这把
        # "变量自身类型固定"作为强约束注入，覆盖被视图 join 污染成 VOID_PTR
        # 的全局（如 dword_87F7E8 之前落到 VOID_PTR）。
        n_gcast = 0
        _g_path = os.path.normpath(os.path.join(
            os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
            "anchors", "global_cast_types.json"))
        if os.path.exists(_g_path):
            try:
                with open(_g_path, "r", encoding="utf-8") as _gf:
                    _gmap = json.load(_gf)
                for _gname, _spec in _gmap.items():
                    _vid = self.var_to_id.get(_gname)
                    if _vid is None:
                        continue
                    _lt = self._to_lattice_type(_spec.get("type"), valid_classes)
                    if _lt is None or _lt in (VOID_PTR, TOP):
                        continue
                    _a = Anchor(var_id=_vid, var_name=_gname,
                                lattice_type=_lt, source="global_cast")
                    self.anchors.append(_a)
                    self.anchor_by_var[_vid].append(_a)
                    n_gcast += 1
            except Exception as _e:
                print(f"  global cast anchors load failed ({_e})", file=sys.stderr)
        print(f"  global_cast anchors: {n_gcast}", file=sys.stderr)

        # X184: IDA 侧的全局类型（Step-1 证据直取）。只收类/指针型
        # （字符串/标量已过滤）——这是 IDA 自身对全局的声明，优先级与
        # global_cast 同级但来源独立。
        n_ida_g = 0
        _ida_g_path = os.path.normpath(os.path.join(
            os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
            "anchors", "ida_global_type_anchors.json"))
        if os.path.exists(_ida_g_path):
            try:
                with open(_ida_g_path, "r", encoding="utf-8") as _gf2:
                    _gmap2 = json.load(_gf2)
                _cast_names = set()
                if os.path.exists(_g_path):
                    try:
                        with open(_g_path, "r", encoding="utf-8") as _cf2:
                            _cast_names = set(json.load(_cf2))
                    except Exception:
                        _cast_names = set()
                for _gname, _spec in _gmap2.items():
                    if _gname in _cast_names:
                        continue      # usage (cast) evidence outranks IDA's data typing
                    _vid = self.var_to_id.get(_gname)
                    if _vid is None:
                        continue
                    _lt = self._to_lattice_type(_spec.get("type"), valid_classes)
                    if _lt is None or _lt in (VOID_PTR, TOP):
                        continue
                    _a = Anchor(var_id=_vid, var_name=_gname,
                                lattice_type=_lt, source="ida_global_type")
                    self.anchors.append(_a)
                    self.anchor_by_var[_vid].append(_a)
                    n_ida_g += 1
            except Exception as _e:
                print(f"  ida_global_type load failed ({_e})", file=sys.stderr)
        print(f"  ida_global_type anchors: {n_ida_g}", file=sys.stderr)

        # ── 库字符串函数参数/返回锚（CRT/Win32 例外）──
        lib_matched = 0
        for addr, spec in _LIB_STRING_FUNCS.items():
            addr_key = f"0x{addr:08X}"
            for slot, typ in spec.items():
                if slot == "ret":
                    var_name = f"{addr_key}.return"
                else:
                    var_name = f"{addr_key}::param{slot}"
                var_id = self.var_to_id.get(var_name)
                if var_id is None:
                    continue
                anchor = Anchor(
                    var_id=var_id, var_name=var_name,
                    lattice_type=typ, source="libc_string",
                )
                self.anchors.append(anchor)
                self.anchor_by_var[var_id].append(anchor)
                lib_matched += 1
        print(f"  libc_string anchors: {lib_matched}", file=sys.stderr)

        # ── VOID_PTR 锚统一滤除 ──
        # void*（"未知指针"）锚不携带类型信息，但作为 rank≥2 锚会冻结 root、
        # 且作为传播源经 join(X, VOID_PTR)=VOID_PTR 擦除邻居的具体类型
        # （member_types 42% void* 经 csp_member 通道成锚的实测回归链：
        # member(VOID_PTR 锚)→传播→al_v 的 int 种子被 join 成 VOID_PTR）。
        _before = len(self.anchors)
        self.anchors = [a for a in self.anchors if a.lattice_type != VOID_PTR]
        self.anchor_by_var = defaultdict(list)
        for a in self.anchors:
            self.anchor_by_var[a.var_id].append(a)
        _dropped = _before - len(self.anchors)
        if _dropped:
            print(f"  VOID_PTR anchors dropped (info-free): {_dropped}", file=sys.stderr)

        # ── RTTI vtable this 锚（槽位函数的 this = vtable RTTI 类）──
        # 对每个主 vtable（col_offset==0）的每个槽位函数 F 收集其 vtable
        # 类，按函数 JOIN 聚合为单一锚：一个虚方法可出现在家族多个
        # vtable（继承），其 this 的真实类型是所有包含者的最小公共
        # 祖先（TechnoClass::selectTarget ∈ Building/Infantry/Unit 家族
        # → TechnoClass；SidebarClass 层定义的 LoadResources → SidebarClass）。
        # MEET 聚合在兄弟分支 vtable（Building × Infantry 无公共子类型）
        # 上会爆 TOP——那是继承多态不是矛盾。
        vtable_matched = 0
        if os.path.exists(VTABLE_SIG_PATH) and os.path.exists(RTTI_VTABLE_CLASS_PATH):
            with open(VTABLE_SIG_PATH, "r", encoding="utf-8") as f:
                vt_sigs = json.load(f).get("signatures", {})
            with open(RTTI_VTABLE_CLASS_PATH, "r", encoding="utf-8") as f:
                vt_class = {
                    int(k, 16): v["class"]
                    for k, v in json.load(f).get("vtables", {}).items()
                    if v.get("col_offset", 0) == 0 and v.get("class")
                }
            func_join: dict[str, list[LatticeElement]] = defaultdict(list)
            # B7 路由表：槽位 → 定义类集合（≤4 类才路由——精度有界；
            # 宽槽如 dtor slot 0 覆盖几十个类，不路由）
            slot_classes: dict[int, set[str]] = defaultdict(set)
            for slot_key, info in vt_sigs.items():
                try:
                    vt = int(info["vtable_base"], 16)
                    func_addr = int(info["addr"], 16)
                    slot_idx = int(info.get("slot", -1))
                except (KeyError, ValueError, TypeError):
                    continue
                cls = vt_class.get(vt)
                if not cls:
                    continue
                lattice_type = self._to_lattice_type(cls, valid_classes)
                if lattice_type is None or lattice_type in (VOID_PTR, TOP):
                    continue
                func_join[f"0x{func_addr:08X}:this"].append(lattice_type)
                if slot_idx >= 0:
                    slot_classes[slot_idx].add(cls)
            # 精度闸（通用，非硬编码）：① 定义类 ≤8；② join 的子类数 ≤32
            # （子类数大的祖先——如全多态根——路由无信息量，RTTI 反向计数）
            subclass_count: dict[str, int] = defaultdict(int)
            for _cn, _anc in self.lattice._ancestors.items():
                for _a in _anc:
                    subclass_count[_a] += 1
            self._slot_route: dict[int, LatticeElement] = {}
            for slot_idx, classes in slot_classes.items():
                if not classes or len(classes) > 8:
                    continue
                joined_s: LatticeElement = BOTTOM
                for cls in classes:
                    lt = self._to_lattice_type(cls, valid_classes)
                    if lt is None or lt in (VOID_PTR, TOP):
                        joined_s = VOID_PTR
                        break
                    joined_s = lt if joined_s == BOTTOM else self.lattice.join(joined_s, lt)
                if not _is_concrete(joined_s):
                    continue
                if subclass_count.get(joined_s, 0) > 32:
                    continue  # 过宽祖先：路由无信息量
                self._slot_route[slot_idx] = joined_s
            for var_name, types in func_join.items():
                var_id = self.var_to_id.get(var_name)
                if var_id is None:
                    continue
                joined = types[0]
                for t in types[1:]:
                    joined = self.lattice.join(joined, t)
                if joined in (VOID_PTR, TOP):
                    continue
                anchor = Anchor(
                    var_id=var_id,
                    var_name=var_name,
                    lattice_type=joined,
                    source="rtti_vtable_class",
                )
                self.anchors.append(anchor)
                self.anchor_by_var[var_id].append(anchor)
                vtable_matched += 1
        print(f"  rtti_vtable this anchors: {vtable_matched}", file=sys.stderr)

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
        # ── TYPE_SEED 标量种子锚（提取器 Step 3 的立即数/浮点证据）──
        # itype 归一：整型族 → 'int'，浮点族 → 'float'；void*/char* 无类
        # 价值跳过。已作用域 var 直接锚；raw reg/stack 用 addr 定位函数，
        # 前缀匹配全部 SSA 版本（标量在 meet/join 中对类让位——指针
        # 版本不受污染）。
        _SEED_INT = {"int", "bool", "long", "unsigned int", "short", "char"}
        _SEED_FLOAT = {"float", "double", "float*"}
        seed_matched = 0
        func_addrs = self._func_addrs or []

        def _containing_func(addr: int):
            import bisect
            i = bisect.bisect_right(func_addrs, addr) - 1
            return func_addrs[i] if i >= 0 else None

        # Pre-build prefix index once: '0xFUNC::rawname' → [var ids of all
        # SSA versions] (version suffix `_v0x...` stripped), for O(1) seed
        # → version mapping.
        _RE_SSA_VER = re.compile(r"_v0x[0-9A-Fa-f]+$")
        prefix_index: dict[str, list[int]] = defaultdict(list)
        for name, vid2 in self.var_to_id.items():
            if "::" not in name:
                continue
            prefix_index[_RE_SSA_VER.sub("", name)].append(vid2)

        for c in self.constraints:
            if c.get("type") != "TYPE_SEED":
                continue
            itype = c.get("itype", "")
            if itype in _SEED_INT:
                lt: LatticeElement = "int"
            elif itype in _SEED_FLOAT:
                lt = "float"
            else:
                continue
            var = c.get("var", "")
            if not var:
                continue
            try:
                addr = int(c.get("addr", ""), 16)
            except ValueError:
                addr = None

            target_ids: list[int] = []
            if "::" in var or ".member(" in var or var.startswith(
                    ("dword_", "byte_", "word_", "flt_")):
                # already-scoped member names (`0xF:this.member(...)`) and
                # globals resolve directly; SSA versions via prefix index
                vid = self.var_to_id.get(var)
                if vid is not None:
                    target_ids.append(vid)
                target_ids.extend(prefix_index.get(var, ()))
            elif addr is not None and func_addrs:
                func = _containing_func(addr)
                if func is not None:
                    target_ids.extend(
                        prefix_index.get(f"0x{func:08X}::{var}", ()))
            for vid in target_ids:
                if any(a.source == "type_seed"
                       for a in self.anchor_by_var.get(vid, ())):
                    continue
                anchor = Anchor(
                    var_id=vid, var_name=self.id_to_var[vid],
                    lattice_type=lt, source="type_seed",
                )
                self.anchors.append(anchor)
                self.anchor_by_var[vid].append(anchor)
                seed_matched += 1
        print(f"  type_seed anchors: {seed_matched}", file=sys.stderr)

        self._seed_orphan_components()

    def _load_csp_signature_anchors(
        self, valid_classes: set[str], member_types: dict
    ) -> None:
        """RTTI 重锚定提取器 (Phase 2) 的地址式签名锚点通道。

        新提取器变量为地址式命名（地址稳定，符号名随 IDB 演化漂移）：
          - ``0xADDR:this``    ← thiscall this → csp params[0].real_type
          - ``0xADDR::paramN`` ← 第 N 个栈参数 → csp params[..].real_type
          - ``0xADDR.return``  ← 返回值 → csp return_type
          - ``0xADDR:this.member(0xOFF)`` ← 成员访问：类 = 该函数 this 类型
            （csp），偏移查 member_types 复用既有锚点数据

        仅锚定类指针类型（real_type 去掉 ``*`` 后在 valid_classes 中），
        避免 int/void 噪音锚。同时构建 symbol→addr 索引供 CALL 返回值
        解析（提取器 callee_name 仍是符号名，.return 变量是地址式）。
        """
        if not os.path.exists(CSP_FUNCS_PATH):
            print("  csp_functions: file not found, skipping", file=sys.stderr)
            self._csp_sym_to_addr = {}
            return

        with open(CSP_FUNCS_PATH, "r", encoding="utf-8") as f:
            csp_data = json.load(f)
        funcs = csp_data.get("functions", {})

        sig_by_addr: dict[int, dict] = {}
        sym_to_addr: dict[str, int] = {}
        this_class_by_addr: dict[int, str] = {}
        for addr_str, sig in funcs.items():
            try:
                addr = int(addr_str, 16)
            except (ValueError, TypeError):
                continue
            sig_by_addr[addr] = sig
            for name_key in ("original_name", "inferred_name"):
                n = sig.get(name_key, "")
                if n:
                    sym_to_addr.setdefault(n, addr)
            params = sig.get("params", [])
            if sig.get("calling_convention") == "thiscall" and params:
                base = str(params[0].get("real_type", "")).rstrip("*").strip()
                if base.endswith("_csp"):
                    base = base[: -len("_csp")]
                if base not in ("unknown", "?", "") and base in valid_classes:
                    this_class_by_addr[addr] = base
        self._csp_sym_to_addr = sym_to_addr

        def _class_lattice(real_type: str):
            base = str(real_type or "").rstrip("*").strip()
            for prefix in ("class ", "struct ", "const "):
                if base.startswith(prefix):
                    base = base[len(prefix):]
            if base.endswith("_csp"):
                # 提取器对 IDA 已有类型名的冲突隔离后缀，剥掉还原真实类名
                base = base[: -len("_csp")]
            if base in ("unknown", "?", ""):
                # CSP 投票失败的兜底值，不是类——锚它会与真实类 meet 出 TOP
                # （实证：TacticalClass::ProcessScroll this 被投票成 unknown）
                return None
            if base in valid_classes:
                return base
            return None

        n_this = n_param = n_return = n_member = 0

        # T9e R5 (X142b W3): 可靠签名表供 call-arg 反传（arg ← param 类型）。
        # (cc, params, sig_reliable) —— sig_reliable 门与上方 param 锚同一把：
        # 含 unknown 参数的签名（varargs 等）不反传，防调用方污染。
        self._csp_sig_by_addr = {
            addr: (
                sig.get("calling_convention", ""),
                sig.get("params", []),
                all(p.get("real_type") not in (None, "", "unknown", "?")
                    for p in sig.get("params", [])),
            )
            for addr, sig in sig_by_addr.items()
        }

        def _anchor(var_name: str, lattice_type, source: str) -> None:
            nonlocal n_this, n_param, n_return, n_member
            var_id = self.var_to_id.get(var_name)
            if var_id is None:
                return
            anchor = Anchor(
                var_id=var_id,
                var_name=var_name,
                lattice_type=lattice_type,
                source=source,
            )
            self.anchors.append(anchor)
            self.anchor_by_var[var_id].append(anchor)
            if source == "csp_this":
                n_this += 1
            elif source == "csp_param":
                n_param += 1
            elif source == "csp_return":
                n_return += 1
            else:
                n_member += 1

        for addr, sig in sig_by_addr.items():
            addr_key = f"0x{addr:08X}"
            cc = sig.get("calling_convention", "")
            params = sig.get("params", [])

            # this / param 通道（fastcall 的 ECX/EDX 实参无栈 param 变量，跳过）
            if cc in ("thiscall", "stdcall", "cdecl"):
                # 签名可靠性门控：CSP 对含 unknown 参数的函数（varargs 如
                # Debug::Log、以及推断不全者）会把某一调用方的实参类型
                # 投票成 param 类型；这样的 param 锚点经 CALL_ARG 汇流
                # 污染所有调用方（IPXManagerClass 81K 泛滥根因）。
                # this 锚来自 vtable truth，证据独立，不受此门控。
                sig_reliable = all(
                    p.get("real_type") not in (None, "", "unknown", "?")
                    for p in params
                )
                for i, p in enumerate(params):
                    lt = _class_lattice(p.get("real_type", ""))
                    if lt is None:
                        continue
                    if cc == "thiscall" and i == 0:
                        _anchor(f"{addr_key}:this", lt, "csp_this")
                    elif sig_reliable:
                        stack_idx = i - 1 if cc == "thiscall" else i
                        _anchor(f"{addr_key}::param{stack_idx}", lt, "csp_param")

            # return 通道
            lt = _class_lattice(sig.get("return_type", ""))
            if lt is not None:
                _anchor(f"{addr_key}.return", lt, "csp_return")

        # member 通道：0xADDR:this.member(0xOFF) → (this 类, offset) 查 member_types
        if member_types:
            member_re = re.compile(
                r"^(0x[0-9A-Fa-f]{8}):this\.member\(0x([0-9A-Fa-f]+)\)$"
            )
            for var_name in self.var_to_id:
                if "this.member(" not in var_name:
                    continue
                m = member_re.match(var_name)
                if not m:
                    continue
                try:
                    addr = int(m.group(1), 16)
                    offset = int(m.group(2), 16)
                except ValueError:
                    continue
                cls = this_class_by_addr.get(addr)
                if not cls:
                    continue
                info = member_types.get((cls, offset))
                if not info:
                    continue
                lt = self._to_lattice_type(info.get("type", ""), valid_classes)
                if lt is None:
                    continue
                _anchor(var_name, lt, "csp_member")

        print(
            f"  csp_functions anchors: this={n_this} param={n_param} "
            f"return={n_return} member={n_member} "
            f"(funcs={len(sig_by_addr)}, sym_to_addr={len(sym_to_addr)})",
            file=sys.stderr,
        )

    def _resolve_callee_return_var(self, callee_name: str) -> int | None:
        """CALL 边 callee 返回值变量解析（兼容符号名与地址式 .return）。

        提取器 callee_name 为符号名而 .return 变量为地址式
        （``0xADDR.return``）；经 _csp_sym_to_addr 桥接，符号本身是
        地址串（如 vtable_slot）时直接格式化。
        """
        rid = self.var_to_id.get(callee_name + ".return")
        if rid is not None:
            return rid
        addr = None
        if callee_name.startswith(("0x", "0X")):
            try:
                addr = int(callee_name, 16)
            except ValueError:
                addr = None
        else:
            mapping = getattr(self, "_csp_sym_to_addr", None) or {}
            addr = mapping.get(callee_name)
        if addr is not None:
            return self.var_to_id.get(f"0x{addr:08X}.return")
        return None

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

    def _build_combined_adjacency(self) -> None:
        """Undirected union of every channel (meet / param-in / return-out).

        Used by orphan-component seeding (T7-pre) and confidence BFS (T10):
        both need reachability over ALL evidence edges, regardless of the
        per-channel direction used by type propagation (T9).
        """
        combined: dict[int, set[int]] = defaultdict(set)
        for a, nbrs in self.adjacency.items():
            combined[a] |= nbrs
            for b in nbrs:
                combined[b].add(a)
        for arg, params in self.param_in.items():
            for p in params:
                combined[arg].add(p)
                combined[p].add(arg)
        for ret, recvs in self.return_out.items():
            for r in recvs:
                combined[ret].add(r)
                combined[r].add(ret)
        self._combined_adjacency = combined

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
            ssa = self._scoped_to_name
            for i, c in enumerate(self.constraints):
                sfrom, sto = ssa[i]
                fid = self.var_to_id.get(sfrom)
                tid = self.var_to_id.get(sto)
                if fid is None or tid is None:
                    continue
                ctype = c["type"]
                if ctype == "CALL_VTABLE":
                    continue  # no variable adjacency from vtable slots
                if _edge_skips_adjacency(sfrom, sto):
                    # vtable_slot_* 共享槽位枢纽 / 数值字面量桥接：
                    # 均不建邻接（见 _edge_skips_adjacency 注释）
                    continue
                if ctype == "CALL_ARG":
                    self.param_in[fid].add(tid)
                elif ctype in ("CALL", "RETURN_TO"):
                    if ctype == "RETURN_TO":
                        self.return_out[fid].add(tid)
                    else:
                        callee_name = c.get("callee_name", "")
                        if callee_name:
                            callee_ret_id = self._resolve_callee_return_var(callee_name)
                            if callee_ret_id is not None:
                                self.return_out[callee_ret_id].add(fid)
                elif ctype in ("ASSIGN", "RETURN", "STACK_VAR",
                               "FUNC_PARAM", "STACK_ACCESS"):
                    # T9 v3: value edges are DIRECTED source→destination
                    self.adjacency[fid].add(tid)
                # else: X3 (I91 ①) — MEMBER_ACCESS / PTR_ARITH (and any
                # future unknown kind) build NO type adjacency. PTR_ARITH's
                # from/to register pairs describe address arithmetic; wiring
                # them into the value graph joins index(int) with class-typed
                # destinations (spurious meets/TOP). Layout-evidence only.

        # Combined UNDIRECTED reachability for confidence BFS: every
        # channel (value / param / return) is real evidence connectivity.
        self._build_combined_adjacency()

        # ── Count anchor-less components (no seeding — T9 v3) ──
        # Orphan VOID_PTR seeds previously guaranteed BFS reachability, but a
        # VOID_PTR fact also JOINED into every value reaching the component
        # (join(VOID_PTR, X) = VOID_PTR), erasing class evidence downstream.
        # T9 v3 drops the seeds: untyped roots get the VOID_PTR *fallback*
        # after propagation (honest "no type info") and are reported as
        # ORPHAN confidence instead of fake ANCHORED.
        visited: set[int] = set()
        orphan_count = 0
        orphan_vars = 0

        for var_id in range(len(self.id_to_var)):
            if var_id in visited:
                continue

            # BFS this component
            comp_size = 0
            queue: list[int] = [var_id]
            has_anchor = False
            while queue:
                vid = queue.pop()
                if vid in visited:
                    continue
                visited.add(vid)
                comp_size += 1
                if vid in self.anchor_by_var and self.anchor_by_var[vid]:
                    has_anchor = True
                for neighbor in self._combined_adjacency.get(vid, ()):
                    if neighbor not in visited:
                        queue.append(neighbor)

            if not has_anchor:
                orphan_count += 1
                orphan_vars += comp_size

        print(f"  anchor-less components: {orphan_count} ({orphan_vars} vars,"
              f" typed as VOID_PTR fallback)",
              file=sys.stderr)

    @staticmethod
    def _to_lattice_type(typ_name: str, valid_classes: set[str]) -> LatticeElement | None:
        """Convert a type name string to a lattice element, or None if unfittable."""
        # G32: anchor tables may carry type:null entries (registered members
        # without a type) — treat as unfittable instead of crashing.
        if not typ_name:
            return None
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
        # 缺口 1: RTTI 修饰名（?$VectorClass@PAVTechnoClass@@ 等）归一到
        # canon 命名空间——lattice 层次图与 member_types 键均为该体系
        typ = _align_canon(typ)
        # char* is a first-class pseudo-domain (string evidence) — check
        # before the integer map collapses 'char' into 'int'
        if typ_name.strip() in ("char*", "const char*", "char *", "const char *"):
            return "char*"
        # Check if it's a valid class name
        if typ in valid_classes:
            return typ
        # Truncated-suffix name normalization: CSP/IDA artifacts like
        # 'UDPInterfaceClass_Destru' (destructor-thunk cluster names) carry
        # a real class as prefix — normalize to the longest matching class.
        if typ and len(typ) > 4:
            prefix_cands = [
                c for c in valid_classes
                if typ.startswith(c) and len(c) >= 5 and len(c) < len(typ)
            ]
            if prefix_cands:
                return max(prefix_cands, key=len)
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
        
        if typ in ("bool", "BOOL"):
            # G34: bool 不再折叠进 int——1 字节旗标语义必须在 CSP 中存活，
            # 否则字节长度信息在摄入层销毁（type_map 中 bool=0 的根因）。
            return "bool"
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
        ssa = self._scoped_to_name
        for i, c in enumerate(self.constraints):
            sfrom, sto = ssa[i]

            fid = self.var_to_id.get(sfrom)
            tid = self.var_to_id.get(sto)
            if fid is None or tid is None:
                continue

            ctype = c["type"]
            if ctype == "CALL_VTABLE":
                # 先于守卫处理：槽位伪目标是本类边的合法形态（守卫只针对
                # 值边邻接）。B7 接收者路由收集。
                recv = c.get("receiver")
                if recv:
                    recv_id = self.var_to_id.get(recv)
                    if recv_id is not None:
                        slot_idx = c.get("vtable_slot", -1)
                        if slot_idx in getattr(self, "_slot_route", {}):
                            self._vtcall_routes.append((recv_id, slot_idx))
                continue
            if _edge_skips_adjacency(sfrom, sto):
                # vtable_slot_* 共享槽位枢纽 / 数值字面量桥接 / *def@ 版本
                # 标记 / 操作数原文枢纽：均不建邻接
                continue
            if ctype == "ASSIGN":
                # Value flow from→to (extractor orients every constraint as
                # source→destination). T9 v3: directed JOIN at the
                # destination — a variable that receives values of several
                # classes (polymorphic storage: gadget globals, cell/object
                # arrays, reused slots) HOLDS the common ancestor, not the
                # glb (glb of siblings has no common subtype → phantom TOP).
                self.adjacency[fid].add(tid)

            elif ctype == "RETURN":
                # RET-site value → .return var, same directed-join semantics.
                self.adjacency[fid].add(tid)

            elif ctype == "CALL":
                # Return channel (caller side): call-site pseudo var receives
                # the callee's return value — directed OUTFLOW from callee
                # .return (no backflow into the callee, see param_in comment).
                callee_name = c.get("callee_name", "")
                if callee_name:
                    callee_ret_id = self._resolve_callee_return_var(callee_name)
                    if callee_ret_id is not None:
                        self.return_out[callee_ret_id].add(fid)


            elif ctype == "STACK_VAR":
                self.adjacency[fid].add(tid)

            elif ctype == "FUNC_PARAM":
                # Function parameter passing — type flows from param→local
                self.adjacency[fid].add(tid)

            elif ctype == "CALL_ARG":
                # Argument binding at call site — DIRECTED arg→param, JOIN at
                # the param end (polymorphic accumulation). The old undirected
                # meet here (a) declared multi-caller params TOP (glb of
                # sibling argument types has no common subtype) and (b) leaked
                # callee param types back into every caller's argument domain.
                self.param_in[fid].add(tid)

            elif ctype == "RETURN_TO":
                # Return value assignment at call site — directed OUTFLOW
                # .return → receiver.
                self.return_out[fid].add(tid)

            elif ctype == "STACK_ACCESS":
                # Stack load (stack→reg) / store (reg→stack), oriented
                # by the extractor — directed join at the destination.
                self.adjacency[fid].add(tid)

            elif ctype in ("MEMBER_ACCESS", "PTR_ARITH"):
                # X3 (I91 ①): layout-evidence kinds (X2 binary member access
                # + pointer arithmetic) — explicitly NOT fed into the type
                # propagation graph. PTR_ARITH's from/to register pairs would
                # create value edges joining index(int) with class-typed
                # destinations (spurious meets / TOP pollution); their
                # semantics are layout, consumed by the X3 solver. (These rows
                # are also placeholder-scoped in scope_vars.build_scoped_index
                # — this branch is the second, explicit line of defense.)
                continue

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
        # Rebuild combined reachability from the final (post-T7) channels
        self._build_combined_adjacency()

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

        # TOP-cause tracker: exact histogram of (type_a, type_b) meets that
        # produced TOP. Generic triage data — identifies which *kinds* of
        # constraint conflicts dominate, without hardcoding any address.
        top_causes: Counter[tuple[str, str]] = Counter()
        top_cause_roots: dict[tuple[str, str], set[int]] = defaultdict(set)

        def record_meet(rec_root: int, t_a: LatticeElement, t_b: LatticeElement,
                        result: LatticeElement) -> None:
            if result == TOP and t_a != TOP and t_b != TOP:
                key = tuple(sorted((_name(t_a), _name(t_b))))
                top_causes[key] += 1
                if len(top_cause_roots[key]) < 64:
                    top_cause_roots[key].add(rec_root)

        # Seed with anchored roots. Anchors are FACTS, but facts carry
        # PROVENANCE: binary-structure truth (RTTI vtable slot membership,
        # ctor vtable stores) outranks CSP solver votes (cross-function
        # flow pooling can mis-vote — IDA-verified: 0x54A190 is a
        # DynamicVector<PAG> method whose CSP vote said IsometricTileClass,
        # while the vtable membership proves the vector). Within one root,
        # only the highest-provenance tier meets; lower tiers abstain.
        # Remaining same-tier contradictions surface as TOP — the
        # reportable conflict set. Anchored roots are FROZEN against
        # value-flow joins below.
        _SRC_RANK = {
            "name_owner": 4,
            "cast_explicit": 3,
            "global_cast": 3,
            "ida_global_type": 3,
            "rtti_vtable_class": 3,
            "singleton_ctor_store": 3,
            "ctor_vtable_install": 3,
            "structural_vtable_install": 3,
            "structural_slot": 2,
            "csp_this": 2,
            "csp_member": 2,
            "csp_param": 2,
            "csp_return": 2,
        }
        anchors_by_root: dict[int, list] = defaultdict(list)
        for anchor in self.anchors:
            anchors_by_root[self.uf.find(anchor.var_id)].append(anchor)
        anchored_roots: set[int] = set(anchors_by_root)
        # FREEZE only high-provenance roots: type_seed (rank 1) is weak
        # scalar evidence — freezing on it would block class evidence from
        # reaching the root via value-flow joins (327K int seeds froze and
        # erased ~5K class-typed vars before this fix). Weak-seeded roots
        # stay joinable; higher evidence simply wins (scalar yields).
        frozen_roots: set[int] = {
            root for root, alist in anchors_by_root.items()
            if any(_SRC_RANK.get(a.source, 1) >= 2 for a in alist)
        }
        for root, root_anchors in anchors_by_root.items():
            best_rank = max(_SRC_RANK.get(a.source, 1) for a in root_anchors)
            current = BOTTOM
            for anchor in root_anchors:
                if _SRC_RANK.get(anchor.source, 1) < best_rank:
                    continue  # lower provenance abstains
                new_type = self.lattice.meet(current, anchor.lattice_type)
                record_meet(root, current, anchor.lattice_type, new_type)
                current = new_type
            if current != BOTTOM:
                root_types[root] = current
                worklist.append(root)
                in_worklist.add(root)

        iteration = 0
        while worklist and iteration < max_iterations:
            iteration += 1
            root = worklist.popleft()
            in_worklist.discard(root)

            root_type = root_types.get(root, BOTTOM)
            # VOID_PTR = 无信息：惰性（不外传）。join(X, VOID_PTR)=VOID_PTR
            # 会擦除邻居具体类型——VOID_PTR 源传播纯属信息破坏。
            if root_type == BOTTOM or root_type == VOID_PTR:
                continue

            # Find all variable IDs in this equivalence class
            # (we need to iterate over all members to find neighbors)
            # Optimization: precompute eq_class members for labeled classes
            eq_members = self._get_eq_members(root)

            def push_join(dst_id: int) -> None:
                """T9 v3: dst's value domain ⊇ root's — join, unless dst
                carries an anchor fact (frozen)."""
                dst_root = self.uf.find(dst_id)
                if dst_root == root or dst_root in frozen_roots:
                    return
                dst_current = root_types.get(dst_root, BOTTOM)
                new_type = self.lattice.join(dst_current, root_type)
                if new_type != dst_current:
                    root_types[dst_root] = new_type
                    if dst_root not in in_worklist:
                        worklist.append(dst_root)
                        in_worklist.add(dst_root)

            for member_id in eq_members:
                # 1. Value channel (DIRECTED source→dest, JOIN at dest):
                #    ASSIGN / FUNC_PARAM / STACK_ACCESS / RETURN / STACK_VAR.
                #    A variable receiving several classes (polymorphic
                #    storage) holds the least common ancestor.
                for dst_id in self.adjacency.get(member_id, ()):
                    push_join(dst_id)

                # 2. Param channel (DIRECTED arg→param, JOIN at param): a
                #    parameter shared by many call sites is polymorphic —
                #    its type is the least common ANCESTOR of the arguments.
                for param_id in self.param_in.get(member_id, ()):
                    push_join(param_id)

                # 3. Return channel (DIRECTED .return→receiver): the callee
                #    return type flows out; receivers never flow back.
                for recv_id in self.return_out.get(member_id, ()):
                    push_join(recv_id)

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

        # ── T9b: member-anchor derivation from resolved this/param0 types ──
        # First pass resolves `0xFUNC:this`; member_types.json (1,120 class
        # headers) then types `0xFUNC:this.member(0xOFF)` vars, whose values
        # flow onward in a second worklist round. Provenance: below binary
        # truth, above scalar seeds.
        if self._member_types_by_class:
            _mem_re = re.compile(
                r"^(0x[0-9A-Fa-f]{8}):(this|::param0)\.member\(0x([0-9A-Fa-f]+)\)$"
            )
            derived = 0
            for var_name, var_id in self.var_to_id.items():
                m = _mem_re.match(var_name)
                if not m:
                    continue
                base_var = f"{m.group(1)}:{'this' if m.group(2) == 'this' else '::param0'}"
                base_root = self.var_to_id.get(base_var)
                if base_root is None:
                    continue
                base_root = self.uf.find(base_root)
                base_type = root_types.get(base_root, BOTTOM)
                if not _is_concrete(base_type) or base_type in ("int", "float"):
                    continue
                off = int(m.group(3), 16)
                # try the class and each of its legacy aliases? member_types
                # is keyed by legacy class names — direct hit only
                mt = self._member_types_by_class.get(f"{base_type}+{off:#x}")
                if not mt:
                    continue
                lt = self._to_lattice_type(
                    mt.get("type", ""), set(self._member_types_by_class_classes))
                if lt is None or lt in (VOID_PTR, TOP) or lt in ("int", "float"):
                    continue
                if var_id in frozen_roots:
                    continue
                anchored_roots.add(var_id)
                root_types[var_id] = lt
                worklist.append(var_id)
                in_worklist.add(var_id)
                derived += 1
            if derived:
                print(f"  T9b member anchors derived: {derived}", file=sys.stderr)
                # second round
                while worklist and iteration < max_iterations:
                    iteration += 1
                    root = worklist.popleft()
                    in_worklist.discard(root)
                    root_type = root_types.get(root, BOTTOM)
                    if root_type in (BOTTOM, VOID_PTR):
                        continue  # VOID_PTR 惰性（见主循环注释）
                    eq_members = self._get_eq_members(root)

                    def push_join2(dst_id: int) -> None:
                        dst_root = self.uf.find(dst_id)
                        if dst_root == root or dst_root in frozen_roots:
                            return
                        dst_current = root_types.get(dst_root, BOTTOM)
                        new_type = self.lattice.join(dst_current, root_type)
                        if new_type != dst_current:
                            root_types[dst_root] = new_type
                            if dst_root not in in_worklist:
                                worklist.append(dst_root)
                                in_worklist.add(dst_root)

                    for member_id in eq_members:
                        for dst_id in self.adjacency.get(member_id, ()):
                            push_join2(dst_id)
                        for param_id in self.param_in.get(member_id, ()):
                            push_join2(param_id)
                        for recv_id in self.return_out.get(member_id, ()):
                            push_join2(recv_id)
                print(f"  T9b converged: {not worklist}", file=sys.stderr)

        # ── T9c/T9d: 跨函数成员聚合 + 反向 join 推断（交替至多 3 轮）──
        # T9c: 同一 (基类, 偏移) 的所有成员访问变量（跨函数）join 聚合——
        #      少数函数里的类型证据（store from typed reg / 子对象虚调用）
        #      扩散到全部同类访问点。member_types.json 42% void* 占位，
        #      header 聚合数据源不可依赖，约束图本身才是证据。
        # T9d: 反向推断——无类型变量的全部前向目的地（值边/CALL_ARG/
        #      return 通道）类型 join 回填。四通道受益：
        #      参数 ← 成员存储边（*(this+14)=a2 实证）；
        #      成员 ← 子对象虚调用（lea ecx,[this+off]; call 已锚方法）；
        #      全局 ← lea ecx,offset G; call 已锚 this；
        #      返回值 ← 接收者（.return 无锚时从用点反推）。
        #      语义：值域 V ⊑ join(所有流入方使用域)——上界安全。
        def _propagate_round() -> None:
            nonlocal iteration
            while worklist:
                iteration += 1
                root = worklist.popleft()
                in_worklist.discard(root)
                root_type = root_types.get(root, BOTTOM)
                if root_type in (BOTTOM, VOID_PTR):
                    continue  # VOID_PTR 惰性（见主循环注释）
                eq_members = self._get_eq_members(root)
                for member_id in eq_members:
                    for dst_id in self.adjacency.get(member_id, ()):
                        dr = self.uf.find(dst_id)
                        if dr == root or dr in frozen_roots:
                            continue
                        cur = root_types.get(dr, BOTTOM)
                        nt = self.lattice.join(cur, root_type)
                        if nt != cur:
                            root_types[dr] = nt
                            if dr not in in_worklist:
                                worklist.append(dr)
                                in_worklist.add(dr)
                    for pid in self.param_in.get(member_id, ()):
                        pr = self.uf.find(pid)
                        if pr == root or pr in frozen_roots:
                            continue
                        cur = root_types.get(pr, BOTTOM)
                        nt = self.lattice.join(cur, root_type)
                        if nt != cur:
                            root_types[pr] = nt
                            if pr not in in_worklist:
                                worklist.append(pr)
                                in_worklist.add(pr)
                    for rid in self.return_out.get(member_id, ()):
                        rr = self.uf.find(rid)
                        if rr == root or rr in frozen_roots:
                            continue
                        cur = root_types.get(rr, BOTTOM)
                        nt = self.lattice.join(cur, root_type)
                        if nt != cur:
                            root_types[rr] = nt
                            if rr not in in_worklist:
                                worklist.append(rr)
                                in_worklist.add(rr)

        t9c_total = t9d_total = 0
        for _round in range(3):
            changed = 0

            # T9c: aggregate member types per (base class, offset)
            member_groups: dict[tuple, list[int]] = defaultdict(list)
            for var_name, var_id in self.var_to_id.items():
                if ".member(" not in var_name:
                    continue
                m = _mem_re.match(var_name)
                if not m:
                    continue
                base_name = (
                    f"{m.group(1)}:this" if m.group(2) == "this"
                    else f"{m.group(1)}::param0"
                )
                base_id = self.var_to_id.get(base_name)
                if base_id is None:
                    continue
                base_root = self.uf.find(base_id)
                base_t = root_types.get(base_root, BOTTOM)
                if not _is_concrete(base_t) or base_t in ("int", "float", "char*"):
                    continue
                member_groups[(base_t, int(m.group(3), 16))].append(var_id)

            for (cls, off), vids in member_groups.items():
                joined = BOTTOM
                for vid in vids:
                    r = self.uf.find(vid)
                    t = root_types.get(r, BOTTOM)
                    if t in (BOTTOM, VOID_PTR, TOP):
                        continue
                    joined = t if joined == BOTTOM else self.lattice.join(joined, t)
                if joined in (BOTTOM, VOID_PTR, TOP):
                    continue
                for vid in vids:
                    r = self.uf.find(vid)
                    if r in anchored_roots:
                        continue
                    if root_types.get(r, BOTTOM) in (BOTTOM, VOID_PTR):
                        root_types[r] = joined
                        if r not in in_worklist:
                            worklist.append(r)
                            in_worklist.add(r)
                        changed += 1
                        t9c_total += 1

            # T9d: backward join for untyped vars
            for var_id in range(len(self.id_to_var)):
                r = self.uf.find(var_id)
                if r in anchored_roots:
                    continue
                if root_types.get(r, BOTTOM) not in (BOTTOM, VOID_PTR):
                    continue
                joined = BOTTOM
                for dst in self.adjacency.get(var_id, ()):
                    dr = self.uf.find(dst)
                    if dr == r:
                        continue
                    dt = root_types.get(dr, BOTTOM)
                    if dt in (BOTTOM, VOID_PTR, TOP):
                        continue
                    joined = dt if joined == BOTTOM else self.lattice.join(joined, dt)
                for dst in self.param_in.get(var_id, ()):
                    dr = self.uf.find(dst)
                    if dr == r:
                        continue
                    dt = root_types.get(dr, BOTTOM)
                    if dt in (BOTTOM, VOID_PTR, TOP):
                        continue
                    joined = dt if joined == BOTTOM else self.lattice.join(joined, dt)
                for dst in self.return_out.get(var_id, ()):
                    dr = self.uf.find(dst)
                    if dr == r:
                        continue
                    dt = root_types.get(dr, BOTTOM)
                    if dt in (BOTTOM, VOID_PTR, TOP):
                        continue
                    joined = dt if joined == BOTTOM else self.lattice.join(joined, dt)
                if joined not in (BOTTOM, VOID_PTR, TOP):
                    root_types[r] = joined
                    if r not in in_worklist:
                        worklist.append(r)
                        in_worklist.add(r)
                    changed += 1
                    t9d_total += 1

            if not changed:
                break
            _propagate_round()

        # ── B7: vtable 槽位路由——接收者未定型时回填槽位定义类 join ──
        routed = 0
        for recv_id, slot_idx in getattr(self, "_vtcall_routes", ()):
            r = self.uf.find(recv_id)
            if r in frozen_roots:
                continue
            if root_types.get(r, BOTTOM) not in (BOTTOM, VOID_PTR):
                continue
            joined = self._slot_route.get(slot_idx)
            if not _is_concrete(joined):
                continue
            root_types[r] = joined
            if r not in in_worklist:
                worklist.append(r)
                in_worklist.add(r)
            routed += 1
        if routed:
            print(f"  B7 vtable-slot routed receivers: {routed}", file=sys.stderr)
            _propagate_round()

        # ── B10c: int 软升级——完成被求值顺序拒绝的单调 join ──
        # B6 int 种子（rank-1，不冻结）先于传播占位；T9d 只处理 BOTTOM/
        # VOID_PTR 变量，导致"值流入类指针槽位"的 int 种子变量永远停在
        # int。lattice.join(int, C) = C（标量让位）本就是单调合并的正确
        # 结果——此处对【仅弱种子证据】的 int 变量补做：前向目的地（值
        # 边/CALL_ARG/返回通道）中全部具体类证据的 join 若为类类型，升
        # 级之。frozen_roots（rank≥2 真锚）不动；anchored_roots 里 rank-1
        # 的纯种子根正是升级目标，不得误挡。
        _SCALARS = ("int", "float", "char*")
        upgraded = 0
        for var_id in range(len(self.id_to_var)):
            r = self.uf.find(var_id)
            if r in frozen_roots:
                continue
            if root_types.get(r, BOTTOM) != "int":
                continue
            joined = BOTTOM
            for chan in (self.adjacency, self.param_in, self.return_out):
                for dst in chan.get(var_id, ()):
                    dr = self.uf.find(dst)
                    if dr == r:
                        continue
                    dt = root_types.get(dr, BOTTOM)
                    if not _is_concrete(dt) or dt in _SCALARS:
                        continue
                    joined = dt if joined == BOTTOM else self.lattice.join(joined, dt)
            if _is_concrete(joined) and joined not in _SCALARS:
                root_types[r] = joined
                if r not in in_worklist:
                    worklist.append(r)
                    in_worklist.add(r)
                upgraded += 1
        if upgraded:
            print(f"  B10c int-soft-upgraded vars: {upgraded}", file=sys.stderr)
            _propagate_round()

        print(f"  T9c member-aggregated: {t9c_total}, T9d back-inferred: {t9d_total}",
              file=sys.stderr)

        # Directional channels leave vars that only sit on the UPSTREAM side
        # of a directed edge (e.g. an argument expression whose only edge is
        # arg→param) without any type reaching them — they are reachable
        # against channel direction only. Honest label: VOID_PTR (no type
        # information), same as anchor-less orphan components.
        untyped = 0
        for root in range(len(self.id_to_var)):
            if self.uf.find(root) == root and root not in root_types:
                root_types[root] = VOID_PTR
                untyped += 1
        if untyped:
            print(f"  VOID_PTR fallback (direction-isolated roots): {untyped}",
                  file=sys.stderr)

        # ── T9e (X142b): arithmetic typing rules ──────────────────────────
        # C 类型规则补全（用户裁定：常量/计算临时值可从其运算定型）。
        # 此前 PTR_ARITH 边不建任何类型邻接（X3/I91——裸 index(int) 与类
        # 指针目的地的假 join 防御），算术结果一律落 VOID_PTR→ORPHAN。
        # T9e 在传播收敛后把算术结果接回类型图（只写入无型根——BOTTOM/
        # VOID_PTR——绝不改写既有类型，零新 TOP）：
        #   R1 const-store : x = <字面量>            → int（rank-0 二进制事实）
        #   R2 ptr-plus    : x = p ± n（p 类类型）    → x 同类。ADD/SUB 双向
        #                    同构（指针±整数仍同类，from/to 两侧互推）。
        #                    （W3 将补：reg±reg 的加数寄存器=索引操作数 → int）
        #   R3 ptr-cast    : 约束库无独立 cast 种类（汇编层 cast 是 no-op；
        #                    类型化 cast 证据经 ASSIGN(成员/全局→reg) 已由
        #                    既有传播覆盖）——零产量，记录在案不实现。
        #   R4 int-arith   : x = a ∘ b（int/unknown）→ int（弱证据 INFERRED）
        #   R5 call-arg    : x 为 sig_reliable 被调方第 k 实参 → 该参数位类型
        #                    （类=tier 1 / int=弱 tier 4；与 csp_param 锚同门）
        #   R6 cmp-result  : x = (a<b) → int/bool——提取器层已覆盖（setcc →
        #                    TYPE_SEED bool 18,841 条；旗标不物化值），约束库
        #                    无独立种类——零产量，记录在案不实现。
        # 类证据（R2）先于标量证据（R4 下一阶段）——复合 lea [B+idx*S] 的
        # ADD 与 SCALE 共享目的地时类优先。每个定型根记录 (rule, tier,
        # edge) 供 T10 播种与 t9e_evidence.json 审计。
        _ARITH_GPRS = ("eax", "ebx", "ecx", "edx", "esi", "edi")
        _SCALARS_T9E = ("int", "float", "char*", "bool")
        # R5: CALL_ARG 目的地 `0xADDR::paramN` 解析 + int 族参数白名单
        _RE_T9E_PARAM = re.compile(r"^(0x[0-9A-Fa-f]{8})::param(\d+)$")
        _T9E_INT_PARAMS = frozenset({
            "int", "unsigned int", "bool", "BOOL", "long", "short", "char",
            "DWORD", "BYTE", "WORD", "_DWORD", "_BYTE", "_WORD",
            "__int8", "__int16", "__int32", "size_t",
        })
        _t9e_fired: dict[int, tuple[str, int, str]] = {}
        _arith_writes = getattr(self, "_writes", None)
        if _arith_writes is not None:
            _arith_edges: list[tuple[str, int, int, int | None, str]] = []
            for _c in self.constraints:
                if _c.get("type") != "PTR_ARITH":
                    continue
                try:
                    _a = int(_c.get("addr", ""), 16)
                except (ValueError, TypeError):
                    continue
                _fr = self.var_to_id.get(_scope_one_var(
                    _c.get("from", ""), _a, self._func_addrs, _arith_writes))
                _to = self.var_to_id.get(_scope_one_var(
                    _c.get("to", ""), _a, self._func_addrs, _arith_writes))
                if _fr is None or _to is None:
                    continue
                _imm_id: int | None = None
                _imm = _c.get("imm")
                if isinstance(_imm, str) and _imm.strip().lower() in _ARITH_GPRS:
                    _imm_id = self.var_to_id.get(_scope_one_var(
                        _imm.strip().lower(), _a, self._func_addrs, _arith_writes))
                _arith_edges.append(
                    (_c.get("op", ""), _fr, _to, _imm_id, _c.get("addr", "")))
            # R1 const-store 目的地（ASSIGN/STACK_ACCESS 字面量源；去重保序）
            _const_dsts: list[int] = []
            _const_seen: set[int] = set()
            for _i, _c in enumerate(self.constraints):
                if _c.get("type") not in ("ASSIGN", "STACK_ACCESS"):
                    continue
                _sf, _st = self._scoped_to_name[_i]
                if _sf is None or _st is None or not _is_var_literal(_sf):
                    continue
                _tid = self.var_to_id.get(_st)
                if _tid is None or _tid in _const_seen:
                    continue
                _const_seen.add(_tid)
                _const_dsts.append(_tid)

            for _t9e_round in range(3):
                _changed = 0
                # R1: const-store（每轮重查无型；事实无传播依赖）
                for _tid in _const_dsts:
                    _r = self.uf.find(_tid)
                    if (root_types.get(_r, BOTTOM) in (BOTTOM, VOID_PTR)
                            and _r not in frozen_roots):
                        root_types[_r] = "int"
                        _t9e_fired.setdefault(_r, (
                            "const-store", 0,
                            "literal store → %s" % self.id_to_var[_tid]))
                        if _r not in in_worklist:
                            worklist.append(_r)
                            in_worklist.add(_r)
                        _changed += 1
                # Phase A: R2 ptr-plus — 类指针流（优先于标量）
                for _op, _fr, _to, _imm, _as in _arith_edges:
                    if _op not in ("ADD", "SUB"):
                        continue
                    _fr_r = self.uf.find(_fr)
                    _to_r = self.uf.find(_to)
                    _fr_t = root_types.get(_fr_r, BOTTOM)
                    _to_t = root_types.get(_to_r, BOTTOM)
                    _fr_cls = (_is_concrete(_fr_t)
                               and _fr_t not in _SCALARS_T9E)
                    _to_cls = (_is_concrete(_to_t)
                               and _to_t not in _SCALARS_T9E)
                    if _fr_r != _to_r:
                        if (_fr_cls and _to_t in (BOTTOM, VOID_PTR)
                                and _to_r not in frozen_roots):
                            root_types[_to_r] = _fr_t
                            _t9e_fired.setdefault(_to_r, (
                                "ptr-plus", 1,
                                "%s from=%s @ %s" % (
                                    _op, self.id_to_var[_fr], _as)))
                            if _to_r not in in_worklist:
                                worklist.append(_to_r)
                                in_worklist.add(_to_r)
                            _changed += 1
                        elif (_to_cls and _fr_t in (BOTTOM, VOID_PTR)
                                and _fr_r not in frozen_roots):
                            root_types[_fr_r] = _to_t
                            _t9e_fired.setdefault(_fr_r, (
                                "ptr-plus", 1,
                                "%s reverse to=%s @ %s" % (
                                    _op, self.id_to_var[_to], _as)))
                            if _fr_r not in in_worklist:
                                worklist.append(_fr_r)
                                in_worklist.add(_fr_r)
                            _changed += 1
                # Phase B (W3): R4 int-arith — 标量流（仅仍无型者）。
                #   SCALE      : index×const（imul/shl/lea 复合寻址变址项）
                #                → int（弱证据 INFERRED）
                #   ADD/SUB    : from 已有正 int 证据（非指针门控情形）→ to int
                #   reg±reg    : 加数寄存器是指针运算的索引操作数 → int
                # 注意：复合 lea [B+idx*S] 的 SCALE 与 ADD 共享 to——Phase A
                # 已给 to 定类时此处 to_t 检查自然跳过（类优先于标量）。
                for _op, _fr, _to, _imm, _as in _arith_edges:
                    _to_r = self.uf.find(_to)
                    _to_t = root_types.get(_to_r, BOTTOM)
                    if _to_t not in (BOTTOM, VOID_PTR) or _to_r in frozen_roots:
                        continue
                    if _op == "SCALE":
                        root_types[_to_r] = "int"
                        _t9e_fired.setdefault(_to_r, (
                            "int-arith", 4, "SCALE @ %s" % _as))
                        if _to_r not in in_worklist:
                            worklist.append(_to_r)
                            in_worklist.add(_to_r)
                        _changed += 1
                    elif _op in ("ADD", "SUB"):
                        _fr_r2 = self.uf.find(_fr)
                        if (_fr_r2 != _to_r
                                and root_types.get(_fr_r2, BOTTOM) == "int"):
                            root_types[_to_r] = "int"
                            _t9e_fired.setdefault(_to_r, (
                                "int-arith", 4,
                                "%s int-operand from=%s @ %s" % (
                                    _op, self.id_to_var[_fr], _as)))
                            if _to_r not in in_worklist:
                                worklist.append(_to_r)
                                in_worklist.add(_to_r)
                            _changed += 1
                    if _imm is not None:
                        _imm_r2 = self.uf.find(_imm)
                        if (root_types.get(_imm_r2, BOTTOM) in (BOTTOM, VOID_PTR)
                                and _imm_r2 not in frozen_roots):
                            root_types[_imm_r2] = "int"
                            _t9e_fired.setdefault(_imm_r2, (
                                "int-arith", 4,
                                "%s index operand of %s @ %s" % (
                                    _op, self.id_to_var[_fr], _as)))
                            if _imm_r2 not in in_worklist:
                                worklist.append(_imm_r2)
                                in_worklist.add(_imm_r2)
                            _changed += 1
                # Phase C (W3): R5 call-arg — 可靠签名参数类型反传到实参。
                # x 作为第 k 实参传入 sig_reliable 的被调方 → x 得该参数位
                # 类型。类参数 = tier 1（与 csp_param 锚一跳之隔）；int 参数
                # = 弱标量 tier 4。只写入无型根（BOTTOM/VOID_PTR），
                # 不改写既有类型 → 零新 TOP。
                _sig_by_addr = getattr(self, "_csp_sig_by_addr", None)
                if _sig_by_addr:
                    for _i, _c in enumerate(self.constraints):
                        if _c.get("type") != "CALL_ARG":
                            continue
                        _sf, _st = self._scoped_to_name[_i]
                        if _sf is None or _st is None:
                            continue
                        _m9 = _RE_T9E_PARAM.match(_st)
                        if not _m9:
                            continue
                        _sig9 = _sig_by_addr.get(int(_m9.group(1), 16))
                        if _sig9 is None or not _sig9[2]:
                            continue
                        _cc9, _params9, _ = _sig9
                        _idx9 = int(_m9.group(2)) + (1 if _cc9 == "thiscall" else 0)
                        if _idx9 < 0 or _idx9 >= len(_params9):
                            continue
                        _rt9 = str(_params9[_idx9].get("real_type", "") or "")
                        _rt9 = _rt9.rstrip("*").strip()
                        if _rt9.endswith("_csp"):
                            _rt9 = _rt9[:-4]
                        if _rt9 in ("unknown", "?", ""):
                            continue
                        _arg_id = self.var_to_id.get(_sf)
                        if _arg_id is None:
                            continue
                        _arg_r = self.uf.find(_arg_id)
                        if (root_types.get(_arg_r, BOTTOM) not in (BOTTOM, VOID_PTR)
                                or _arg_r in frozen_roots):
                            continue
                        if _rt9 in _T9E_INT_PARAMS:
                            root_types[_arg_r] = "int"
                            _t9e_fired.setdefault(_arg_r, (
                                "call-arg", 4,
                                "param%d of %s (%s) int @ %s" % (
                                    _idx9, _m9.group(1), _cc9,
                                    _c.get("addr", ""))))
                            if _arg_r not in in_worklist:
                                worklist.append(_arg_r)
                                in_worklist.add(_arg_r)
                            _changed += 1
                        else:
                            for _pfx9 in ("class ", "struct ", "const "):
                                if _rt9.startswith(_pfx9):
                                    _rt9 = _rt9[len(_pfx9):]
                            if _rt9 in self._member_types_by_class_classes:
                                root_types[_arg_r] = _rt9
                                _t9e_fired.setdefault(_arg_r, (
                                    "call-arg", 1,
                                    "param%d of %s (%s) → %s @ %s" % (
                                        _idx9, _m9.group(1), _cc9, _rt9,
                                        _c.get("addr", ""))))
                                if _arg_r not in in_worklist:
                                    worklist.append(_arg_r)
                                    in_worklist.add(_arg_r)
                                _changed += 1
                if _changed and _t9e_round < 2:
                    _propagate_round()
            if _t9e_fired:
                _by_rule: Counter = Counter(
                    r for r, _t, _e in _t9e_fired.values())
                print(f"  T9e arithmetic-typing fired: "
                      f"{dict(_by_rule.most_common())}", file=sys.stderr)
                self._t9e_fired = _t9e_fired
                _propagate_round()


        # ── B10d (X29 Stage 1): usage-driven pointer promotion, rules A/B ──
        # 背景（L297 / I251 / slow_convergence_diagnosis §3.2）: 提取器给成员
        # 打的 int 种子、B6b 原始寄存器 int 种子（引擎按“函数内全部 SSA 版本”
        # 锚定）与 T9d 反传，把二进制里明显作指针使用的存储定型为 int；B10c
        # 只升级“前向目的地带具体类”的情形，void*/char*/float* 种子目的地与
        # deref 证据（MEMBER_ACCESS base）被忽略。此步在传播收敛后对仍是 int
        # 的变量做一次【单向】升级：只要约束图里有指针用法边，就升级为
        # VOID_PTR（指针族上界；int ⊑ VOID_PTR，单调）。
        # 证据通道（每条升级都引用一条图边，落盘审计）：
        #   C1 deref    — MEMBER_ACCESS base == v（成员值被当类类型基址解引用）
        #   C2 ptr-arg  — v →(值边/CALL_ARG) d，d 带 void*/char*/float* 种子
        #   C3 receiver — v →(CALL_ARG) X:this（值被当接收者传递 = 指针）
        #   C4 bridge   — v=F:(this|:param0).member(O) 且同函数同偏移的链族
        #                 兄弟 F::reg.member(O) 有 CALL_ARG → X:this / ptr 种子
        #   C5 two-hop  — v → reg_vSSA →(CALL_ARG) X:this / ptr 种子（SSA 精确）
        #   C6 raw-walk — CALL_ARG 实参寄存器按【明文行】回溯：最近一条
        #                 严格早于调用地址的写（跳同址 RETURN_TO 版本窃取，
        #                 0x40B640 实证）的源名 = 证据源
        # VOID_PTR 在传播中是惰性的（不外传、不参与 join），升级纯局部：
        # 不产生新 TOP、不腐蚀邻居类型、无需再传播。frozen（rank≥2 真锚）
        # 中的 rank≤2 也允许升级（member_types 占位 int 即此层——二进制用法
        # 证据优先，per Q2）；rank-3 二进制真锚（RTTI/ctor/singleton）不动。
        _pp_log_path = os.environ.get("X29_PP_LOG", "")
        _pp_promoted = 0
        _pp_skipped_frozen = 0
        _pp_by_rule: Counter = Counter()
        try:
            _RE_CHAIN_SIB = re.compile(
                r"^(0x[0-9A-Fa-f]{8})::[a-z]{2,4}\.member\(0x([0-9A-Fa-f]+)\)$")
            _RE_F5_MEMBER = re.compile(
                r"^(0x[0-9A-Fa-f]{8}):(?:this|:param0)\.member\(0x([0-9A-Fa-f]+)\)$")
            _RE_REG_SSA = re.compile(
                r"^0x[0-9A-Fa-f]{8}::[a-z]{2,4}_v0x[0-9A-Fa-f]+$")
            _RE_PRESCOPED_REG = re.compile(
                r"^(0x[0-9A-Fa-f]{8})::([a-z]{2,4})_v0x([0-9A-Fa-f]+)$")

            _fa = self._func_addrs

            def _pp_containing(_a: int):
                import bisect as _bs
                _i = _bs.bisect_right(_fa, _a) - 1
                return _fa[_i] if _i >= 0 else None

            _ptr_seed_vars: set[str] = set()
            _deref_bases: set[str] = set()
            _bridge_sib: dict[tuple[str, int], str] = {}
            _vt_recv_names: dict[str, str] = {}
            _raw_writes: dict[tuple[int, str], list] = {}
            _raw_callargs: list = []   # (addr, func, reg, to)
            _in_store: dict[str, list] = {}   # member/global <- [scoped src names]
            for _i, _c in enumerate(self.constraints):
                _ct = _c.get("type")
                if _ct == "TYPE_SEED":
                    if _c.get("itype") in ("void*", "char*", "float*"):
                        _ptr_seed_vars.add(_c.get("var", ""))
                    continue
                if _ct == "MEMBER_ACCESS":
                    _b = _c.get("base", "")
                    if ".member(" in _b:
                        _deref_bases.add(_b)
                    continue
                if _ct == "CALL_VTABLE":
                    _rv = _c.get("receiver")
                    if _rv:
                        _vt_recv_names.setdefault(
                            _rv, "CALL_VTABLE slot=%s @%s" % (
                                _c.get("vtable_slot"), _c.get("addr")))
                    continue
                if _ct == "ASSIGN":
                    _sfx, _stx = self._scoped_to_name[_i]
                    if _sfx is not None and _stx is not None and \
                            not _stx.startswith("stack_") and \
                            not (_stx.startswith("0x") and ".member(" not in _stx):
                        _in_store.setdefault(_stx, []).append(_sfx)
                _to = _c.get("to", "")
                _ad = _c.get("addr", "")
                if _ct in ("ASSIGN", "FUNC_PARAM", "RETURN_TO", "STACK_ACCESS") \
                        and isinstance(_to, str) and _ad:
                    try:
                        _a = int(_ad, 16)
                    except (ValueError, TypeError):
                        _a = None
                    if _a is not None:
                        _fn = _pp_containing(_a)
                        if _fn is not None:
                            _cl = _to.lstrip("*").lower()
                            if _cl in X86_REGISTERS:
                                _raw_writes.setdefault((_fn, _cl), []).append(
                                    (_a, _c.get("from", "")))
                            else:
                                _mp = _RE_PRESCOPED_REG.match(_to)
                                if _mp and _mp.group(2).lower() in X86_REGISTERS:
                                    _raw_writes.setdefault(
                                        (int(_mp.group(1), 16), _mp.group(2).lower()),
                                        []).append((int(_mp.group(3), 16), "<ret>"))
                if _ct != "CALL_ARG":
                    continue
                _sf, _sto = self._scoped_to_name[_i]
                if _sf is None or _sto is None:
                    continue
                _m = _RE_CHAIN_SIB.match(_sf)
                if _m:
                    _bridge_sib.setdefault(
                        (_m.group(1), int(_m.group(2), 16)), _sf)
                _fr_raw = _c.get("from", "")
                if isinstance(_fr_raw, str) and \
                        _fr_raw.lstrip("*").lower() in X86_REGISTERS and _ad:
                    try:
                        _a = int(_ad, 16)
                    except (ValueError, TypeError):
                        continue
                    _fn = _pp_containing(_a)
                    if _fn is not None:
                        _raw_callargs.append(
                            (_a, _fn, _fr_raw.lstrip("*").lower(), _sto))

            # C6: raw-walk — per raw-reg call arg, last STRICT-before write source
            # Target gate: only receiver/ptr-seed/vtable-slot destinations imply
            # the value is a pointer (plain int params must NOT promote).
            _raw_evidence: dict[str, str] = {}
            for _a, _fn, _reg, _sto in _raw_callargs:
                if not (_sto.endswith(":this") or _sto in _ptr_seed_vars
                        or _sto.startswith("vtable_slot_")):
                    continue
                _wl = _raw_writes.get((_fn, _reg))
                if not _wl:
                    continue
                _best = None
                for _wa, _wsrc in _wl:
                    if _wa < _a and (_best is None or _wa >= _best[0]):
                        _best = (_wa, _wsrc)
                if _best is None:
                    continue
                _src = _best[1]
                if not isinstance(_src, str) or not _src:
                    continue
                _sl = _src.lstrip("*")
                if _sl.startswith("offset "):
                    _sl = _sl[len("offset "):].strip()
                if (not _sl or _sl.lower() in X86_REGISTERS
                        or _sl.startswith(("*def@", "arr_", "vtable_slot_"))
                        or _sl.endswith("_call")
                        or _RE_REG_SSA.match(_sl)
                        or _is_var_literal(_sl)):
                    continue
                _raw_evidence.setdefault(
                    _sl, ("raw-walk", "%s (write@%s) -> %s@%s -> %s" % (
                        _sl, hex(_best[0]), _reg, hex(_a), _sto)))

            # rank-3 (binary-truth) anchors are NOT overridden
            _rank3_roots: set[int] = set()
            for _anch in self.anchors:
                if _anch.source in ("rtti_vtable_class", "singleton_ctor_store",
                                    "ctor_vtable_install", "structural_vtable_install"):
                    _rank3_roots.add(self.uf.find(_anch.var_id))

            _pp_edges: dict[int, tuple[str, str, bool, LatticeElement]] = {}
            for _vid in range(len(self.id_to_var)):
                _root = self.uf.find(_vid)
                if root_types.get(_root, BOTTOM) != "int":
                    continue
                _pp_name = self.id_to_var[_vid]

                _ev: tuple[str, str] | None = None
                # C1: deref evidence
                if _pp_name in _deref_bases:
                    _ev = ("deref", "MEMBER_ACCESS base=%s" % _pp_name)
                # C2/C3/C5: forward channels, one SSA-register hop allowed
                if _ev is None:
                    for _chan in (self.adjacency, self.param_in, self.return_out):
                        for _d1 in _chan.get(_vid, ()):
                            _n1 = self.id_to_var[_d1]
                            if _n1.endswith(":this"):
                                _ev = ("receiver", "edge %s -> %s" % (_pp_name, _n1))
                            elif _n1 in _ptr_seed_vars:
                                _ev = ("ptr-arg", "edge %s -> %s (ptr seed)" % (_pp_name, _n1))
                            elif _RE_REG_SSA.match(_n1):
                                for _chan2 in (self.adjacency, self.param_in,
                                               self.return_out):
                                    for _d2 in _chan2.get(_d1, ()):
                                        _n2 = self.id_to_var[_d2]
                                        if _n2.endswith(":this"):
                                            _ev = ("two-hop-receiver",
                                                   "%s -> %s -> %s" % (_pp_name, _n1, _n2))
                                            break
                                        if _n2 in _ptr_seed_vars:
                                            _ev = ("two-hop-ptr-arg",
                                                   "%s -> %s -> %s" % (_pp_name, _n1, _n2))
                                            break
                                    if _ev:
                                        break
                            if _ev:
                                break
                        if _ev:
                            break
                # C4: chain-family bridge (same function + same offset)
                if _ev is None:
                    _mm = _RE_F5_MEMBER.match(_pp_name)
                    if _mm:
                        _sib = _bridge_sib.get((_mm.group(1), int(_mm.group(2), 16)))
                        if _sib:
                            _ev = ("chain-bridge",
                                   "%s (sibling %s -> X:this)" % (_pp_name, _sib))
                # C6: raw-walk evidence index
                if _ev is None and _pp_name in _raw_evidence:
                    _ev = _raw_evidence[_pp_name]
                # C7: vtable-call receiver (CALL_VTABLE receiver field)
                if _ev is None and _pp_name in _vt_recv_names:
                    _ev = ("vtable-receiver", "%s (%s)" % (
                        _pp_name, _vt_recv_names[_pp_name]))
                # C8: inbound store from a concrete-CLASS-typed source —
                # retro-applies the join that frozen protection blocked
                # (anchored-int member receiving class values). Target = the
                # joined class (may-hold, same semantics as B10c).
                _pp_target: LatticeElement = VOID_PTR
                if _ev is None and _pp_name in _in_store:
                    _joined: LatticeElement = BOTTOM
                    for _sname in _in_store[_pp_name]:
                        _sid = self.var_to_id.get(_sname)
                        if _sid is None:
                            continue
                        _stype = root_types.get(self.uf.find(_sid), BOTTOM)
                        if not _is_concrete(_stype) or \
                                _stype in ("int", "float", "char*", "bool"):
                            continue
                        _joined = (_stype if _joined == BOTTOM
                                   else self.lattice.join(_joined, _stype))
                    if _is_concrete(_joined) and _joined not in (VOID_PTR, TOP):
                        _ev = ("store-from-class",
                               "%s <- class-typed store (joined %s)" % (
                                   _pp_name, _name(_joined)))
                        _pp_target = _joined
                if _ev is None:
                    continue
                if _root in _rank3_roots:
                    _pp_skipped_frozen += 1
                    continue
                _pp_edges[_vid] = (_ev[0], _ev[1], _root in frozen_roots, _pp_target)

            if _pp_log_path:
                _pp_log: list[dict] = []
            for _vid in sorted(_pp_edges):
                _root = self.uf.find(_vid)
                if root_types.get(_root, BOTTOM) != "int":
                    continue
                _rule, _edge, _frz, _target = _pp_edges[_vid]
                root_types[_root] = _target
                _pp_promoted += 1
                _pp_by_rule[_rule] += 1
                if _pp_log_path:
                    _pp_log.append({
                        "var": self.id_to_var[_vid],
                        "from": "int",
                        "to": _name(_target),
                        "rule": _rule,
                        "edge": _edge,
                        "frozen": _frz,
                    })
            if _pp_log_path:
                with open(_pp_log_path, "w", encoding="utf-8") as _f:
                    json.dump({
                        "task": "X29 B10d usage-driven pointer promotion",
                        "promoted": _pp_promoted,
                        "skipped_frozen": _pp_skipped_frozen,
                        "by_rule": dict(_pp_by_rule.most_common()),
                        "promotions": _pp_log,
                    }, _f, indent=1, ensure_ascii=False, sort_keys=True)
            print(f"  B10d pointer-promoted vars: {_pp_promoted} "
                  f"(frozen-skipped: {_pp_skipped_frozen}) "
                  f"{dict(_pp_by_rule.most_common())}", file=sys.stderr)
        except Exception as _e:  # fail loud — promotion must be observable
            print(f"  B10d ERROR: {_e}", file=sys.stderr)
            raise

        self.eq_types = root_types
        self.top_causes = top_causes
        self.top_cause_roots = top_cause_roots
        print(f"  iterations: {iteration}", file=sys.stderr)
        print(f"  typed equivalence classes: {len(root_types)}", file=sys.stderr)
        print(f"  converged: {not worklist} (remaining: {len(worklist)})", file=sys.stderr)
        print(f"  distinct TOP conflict pairs: {len(top_causes)}", file=sys.stderr)

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

        # T9e (X142b): rule-fired roots join the BFS at their evidence tier —
        # arithmetic-typed vars are no longer labeled ORPHAN (dishonest:
        # they carry a type with recorded provenance); downstream vars
        # reached through them get ≥ tier+1.
        for _r9e_root, (_rule, _tier, _edge) in sorted(
                getattr(self, "_t9e_fired", {}).items()):
            if _r9e_root not in distance:
                distance[_r9e_root] = _tier
                queue.append((_r9e_root, _tier))

        # BFS along every channel (meet + param + return) — combined graph
        # built in _seed_orphan_components; fall back to meet adjacency if
        # seeding was skipped.
        reach = getattr(self, "_combined_adjacency", None) or self.adjacency
        while queue:
            current_root, dist = queue.popleft()
            next_dist = dist + 1

            eq_members = self._get_eq_members(current_root)
            for member_id in eq_members:
                for neighbor_id in reach.get(member_id, ()):
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
        self._generate_top_causes_report()
        self._generate_contradictions_report()
        self._generate_t9e_evidence()

    def _generate_t9e_evidence(self) -> None:
        """T9e (X142b) evidence ledger: per-rule yield with per-root provenance.

        Written next to type_map.json so ORPHAN attribution stays auditable:
        every arithmetic-typing firing records (rule, tier, edge, sample var).
        """
        fired = getattr(self, "_t9e_fired", None)
        if not fired:
            return
        by_rule: Counter = Counter(rule for rule, _t, _e in fired.values())
        rows = []
        for root in sorted(fired):
            rule, tier, edge = fired[root]
            rows.append({
                "root": root,
                "var": self.id_to_var[root] if 0 <= root < len(self.id_to_var) else "?",
                "rule": rule,
                "tier": tier,
                "edge": edge,
            })
        out = {
            "note": "T9e arithmetic typing rules (X142b) — evidence ledger",
            "total_fired": len(fired),
            "by_rule": dict(by_rule.most_common()),
            "firings": rows,
        }
        out_path = os.path.join(os.getcwd(), "t9e_evidence.json")
        with open(out_path, "w", encoding="utf-8") as f:
            json.dump(out, f, indent=1, ensure_ascii=False)
        print(f"  T9e evidence: {len(fired)} firings "
              f"({dict(by_rule.most_common())}) → {out_path}", file=sys.stderr)

    def _generate_top_causes_report(self) -> None:
        """Dump the T11-lite TOP-cause histogram: exact (typeA, typeB) meet
        pairs that produced TOP, with sample variable names per bucket for
        follow-up IDA decompilation triage."""
        if not hasattr(self, "top_causes"):
            return
        print("Generating top_causes.json...", file=sys.stderr)
        rows = []
        for (ta, tb), count in self.top_causes.most_common():
            roots = self.top_cause_roots.get((ta, tb), ())
            samples = [self.id_to_var[r] for r in sorted(roots)[:16]]
            rows.append({
                "pair": [ta, tb],
                "meet_count": count,
                "affected_roots_capped": len(roots),
                "sample_vars": samples,
            })
        out = {
            "note": "TOP-cause histogram from T9; capped root samples per pair",
            "total_top_meets": sum(self.top_causes.values()),
            "distinct_pairs": len(rows),
            "pairs": rows,
        }
        out_path = os.path.join(os.getcwd(), "top_causes.json")
        with open(out_path, "w", encoding="utf-8") as f:
            json.dump(out, f, indent=1)
        print(f"  wrote {len(rows)} conflict pairs to {out_path}", file=sys.stderr)

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
            if _is_output_noise(var_name):
                # pseudo-nodes with no type semantics (see helper)
                continue
            typ = self.eq_types.get(root, BOTTOM)
            conf_tier = self.confidences.get(root, -1)

            if typ != BOTTOM:
                output[var_name] = {
                    "type": _name(typ),
                    "confidence": Confidence.name(conf_tier),
                    "eq_root": root,
                }

        # Also add entries for all variables sharing the same eq class root
        for var_id in range(len(self.id_to_var)):
            root = self.uf.find(var_id)
            var_name = self.id_to_var[var_id]
            if var_name in output or _is_output_noise(var_name):
                continue
            if root in processed_roots and root in self.eq_types:
                typ = self.eq_types.get(root, BOTTOM)
                conf_tier = self.confidences.get(root, -1)
                if typ != BOTTOM:
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

