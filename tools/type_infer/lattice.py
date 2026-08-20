"""
Type Lattice for constraint-based type inference.

4-level hierarchy: BOTTOM → VOID_PTR → ConcreteType → TOP

BOTTOM (unknown): No type information yet. Acts as identity for join.
VOID_PTR (void*):   Represents void pointer. Identity for meet (void* meet X = X).
ConcreteType:       Named class type (e.g., "BuildingClass", "UnitClass").
TOP (contradiction): Incompatible type constraints — over-constrained.

Operations:
  meet(a, b): Greatest lower bound — most precise type consistent with both.
  join(a, b): Least upper bound — common ancestor or VOID_PTR.
  is_subtype(a, b): Whether a is a subtype of (or equal to) b.
"""

import json
import os
from typing import Optional, Union


# ── sentinel constants ────────────────────────────────────────────────── ─

BOTTOM = 0       # unknown / no information
VOID_PTR = 1     # void pointer
TOP = 2          # contradiction / over-constrained

_SENTINELS = {BOTTOM, VOID_PTR, TOP}
_SENTINEL_NAMES = {BOTTOM: "BOTTOM", VOID_PTR: "VOID_PTR", TOP: "TOP"}

# Type alias: a lattice element is either a sentinel int or a class name string.
LatticeElement = Union[int, str]


# ── helpers ───────────────────────────────────────────────────────────── ─

def _is_concrete(t: LatticeElement) -> bool:
    """True if t is a named concrete type (not a sentinel)."""
    return t not in _SENTINELS


def _is_constant(name: str) -> bool:
    """True if name is a numeric constant (no type information)."""
    try:
        int(str(name), 0)
        return True
    except (ValueError, TypeError):
        return False


def _name(t: LatticeElement) -> str:
    if t in _SENTINEL_NAMES:
        return _SENTINEL_NAMES[t]
    return str(t)


# ── class hierarchy loader ────────────────────────────────────────────── ─

def _resolve_path(class_layouts_path: Optional[str]) -> str | None:
    """Resolve the class_layouts.json path, returning None if not found."""
    if class_layouts_path is None:
        class_layouts_path = os.path.join(
            os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
            "class_layouts.json",
        )
    if os.path.exists(class_layouts_path):
        return class_layouts_path
    return None


def _load_rtti_truth() -> tuple[dict[str, list[str]], set[str]]:
    """Phase 1d: 加载 anchors/rtti_hierarchy.json（RTTI 真值）。

    返回 (direct, class_names)：
      direct: class -> [direct bases]（MI 完整；仅含有基类记录的类）
      class_names: 全部 988 个 RTTI 类名（含从未当过父类的根接口如
                   IUnknown——闭包递归的合法性判定用）
    来源为二进制 MSVC6 RTTI 结构解析（tools/rtti_truth_extract.py），
    与活 IDB 1214/1214 一致——不经过 hpp 派生链，无循环推导。
    """
    path = os.path.join(
        os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
        "anchors", "rtti_hierarchy.json",
    )
    if not os.path.exists(path):
        return {}, set()
    try:
        with open(path, "r", encoding="utf-8") as f:
            data = json.load(f)
        return data.get("direct", {}), set(data.get("classes", ()))
    except Exception:
        return {}, set()


def _load_hierarchy(class_layouts_path: Optional[str] = None) -> tuple[
    dict[str, set[str]], dict[str, str | None]
]:
    """Load class hierarchy: RTTI ground truth primary, class_layouts fallback.

    Phase 1d: anchors/rtti_hierarchy.json（二进制真值，MI 完整直接基类）
    优先——其基类列表完全覆盖 class_layouts.json 的单亲 `parent` 字段
    （后者为 hpp 循环派生，57/145 派生边已被证伪/未验证，如
    TiberiumClass 的 parent=ObjectClass 实为 AbstractTypeClass）。
    仅 RTTI 未覆盖的类（非多态类——无 vtable 即无 RTTI）回退
    class_layouts.json 的 parent。

    Returns:
        (ancestors, parents):
          ancestors: class_name -> set of all ancestor names (including self)
          parents: class_name -> first direct parent (or None if root);
                   informational only (MI 完整列表在 RTTI direct 中)
    """
    rtti_direct, rtti_class_names = _load_rtti_truth()

    parents: dict[str, str | None] = {}
    for cls_name, bases in rtti_direct.items():
        parents[cls_name] = bases[0] if bases else None

    path = _resolve_path(class_layouts_path)
    if path is not None:
        with open(path, "r", encoding="utf-8") as f:
            raw = json.load(f)
        for cls_name, info in raw.items():
            if cls_name not in parents:  # RTTI 未覆盖（非多态类）才回退
                parents[cls_name] = info.get("parent")

    # Direct-base adjacency: RTTI multi-parent list, class_layouts single parent
    direct_bases: dict[str, list[str]] = {
        cls: list(bases) for cls, bases in rtti_direct.items()
    }
    for cls_name, parent in parents.items():
        if cls_name not in direct_bases and parent is not None:
            direct_bases[cls_name] = [parent]

    # 已知类全集：闭包递归只展开已知类（RTTI 类名含根接口 IUnknown 等
    # 从未作为 parent 出现的叶子——必须在此集合中才可达）
    known_classes = set(parents) | set(direct_bases) | rtti_class_names

    # Transitive closure over the multi-parent DAG (memoized, cycle-safe)
    ancestors: dict[str, set[str]] = {}

    def get_ancestors(cls: str, _stack: frozenset[str] = frozenset()) -> set[str]:
        if cls in ancestors:
            return ancestors[cls]
        result = {cls}
        if cls not in _stack:  # 环防御（class_layouts 脏数据兜底）
            for base in direct_bases.get(cls, ()):
                if base in known_classes:
                    result |= get_ancestors(base, _stack | {cls})
        ancestors[cls] = result
        return result

    for cls_name in known_classes:
        get_ancestors(cls_name)

    return ancestors, parents


# ── TypeLattice ───────────────────────────────────────────────────────── ─


class TypeLattice:
    """4-level type lattice for constraint-based type inference.

    BOTTOM (unknown) → VOID_PTR → ConcreteType → TOP (contradiction)

    Meet identity:     VOID_PTR meet X = X  (void* carries no type info)
    Join identity:     BOTTOM join X = X     (unknown carries no info)
    """

    def __init__(self, class_layouts_path: Optional[str] = None):
        self._ancestors, self._parents = _load_hierarchy(class_layouts_path)

    # ── subtype check ───────────────────────────────────────────────────

    def is_subtype(self, a: LatticeElement, b: LatticeElement) -> bool:
        """Check if a is a subtype of (or equal to) b in the lattice order.

        BOTTOM ⊑ everything   (unknown is a subtype of everything)
        VOID_PTR ⊑ everything above
        Concrete_a ⊑ Concrete_b  iff a extends b (directly or transitively)
        Everything ⊑ TOP

        Returns True if a ≤ b in the lattice partial order.
        """
        if a == b:
            return True
        if b == TOP:
            return True  # everything is subtype of TOP
        if a == BOTTOM:
            return True  # BOTTOM is subtype of everything
        if a == TOP:
            return False  # TOP is subtype of nothing except itself
        if b == BOTTOM:
            return False  # only BOTTOM ≤ BOTTOM (handled above)
        if a == VOID_PTR:
            return b != BOTTOM  # VOID_PTR ≤ everything except BOTTOM
        if b == VOID_PTR:
            return False  # concrete types are not subtypes of VOID_PTR

        # Both concrete: check class hierarchy
        if _is_concrete(a) and _is_concrete(b):
            anc = self._ancestors.get(a)
            if anc is not None:
                return b in anc
            # No hierarchy info — only equality (already checked above)
            return False

        return False

    # ── meet (greatest lower bound) ─────────────────────────────────────

    def meet(self, a: LatticeElement, b: LatticeElement) -> LatticeElement:
        """Greatest lower bound: most precise type consistent with both a and b.

        meet(a, b) = the most specific type t such that t ⊑ a and t ⊑ b.

        VOID_PTR is the identity:  VOID_PTR meet X = X
        BOTTOM meet X = X          (X provides more info than unknown)
        TOP meet X = TOP           (contradiction absorbs)
        Incompatible concretes → TOP
        """
        if a == b:
            return a

        # Numeric constants are meet identity (like void*)
        if _is_constant(a):
            return b
        if _is_constant(b):
            return a

        # VOID_PTR is identity for meet
        if a == VOID_PTR:
            return b
        if b == VOID_PTR:
            return a

        # BOTTOM provides no info, the other side wins
        if a == BOTTOM:
            return b
        if b == BOTTOM:
            return a

        # TOP absorbs
        if a == TOP or b == TOP:
            return TOP

        # Both concrete
        if _is_concrete(a) and _is_concrete(b):
            if self.is_subtype(a, b):
                return a  # a is more specific
            if self.is_subtype(b, a):
                return b  # b is more specific
            return TOP  # incompatible — no common subtype

        # Mixed sentinel+concrete — should not happen in normal use
        return TOP

    # ── join (least upper bound) ────────────────────────────────────────

    def join(self, a: LatticeElement, b: LatticeElement) -> LatticeElement:
        """Least upper bound: common ancestor or VOID_PTR.

        join(a, b) = the most general type t such that a ⊑ t and b ⊑ t.

        BOTTOM is the identity:    BOTTOM join X = X
        TOP join X = TOP           (contradiction absorbs)
        Concrete join Concrete → nearest common ancestor or VOID_PTR
        Two unrelated types → VOID_PTR
        """
        if a == b:
            return a

        # BOTTOM is identity for join
        if a == BOTTOM:
            return b
        if b == BOTTOM:
            return a

        # TOP absorbs
        if a == TOP or b == TOP:
            return TOP

        # VOID_PTR as base
        if a == VOID_PTR or b == VOID_PTR:
            # VOID_PTR is upper bound — return VOID_PTR if the other is
            # VOID_PTR or concrete. If the other is BOTTOM it's already handled.
            if _is_concrete(a) or _is_concrete(b):
                return VOID_PTR

        # Both concrete: find least common ancestor
        if _is_concrete(a) and _is_concrete(b):
            # If one is ancestor of the other
            if self.is_subtype(a, b):
                return b
            if self.is_subtype(b, a):
                return a

            # Walk up the hierarchy from a to find a common ancestor with b
            anc_a = self._ancestors.get(a, {a})
            anc_b = self._ancestors.get(b, {b})
            common = anc_a & anc_b
            if common:
                # Find the most specific common ancestor (lowest in hierarchy)
                # = the one that is subtype of all others in common
                # Strategy: pick one and check if any other is a subtype of it
                candidates = list(common)
                # Sort by depth of inheritance chain (higher depth = more specific)
                # Use length of ancestor set as proxy for depth
                candidates.sort(
                    key=lambda c: len(self._ancestors.get(c, {c})),
                    reverse=True,
                )
                for c in candidates:
                    # Check if c is a subtype of all others in common
                    if all(self.is_subtype(c, other) for other in common):
                        return c
                # Fallback: return any common ancestor
                return candidates[0] if candidates else VOID_PTR
            return VOID_PTR

        # Mixed sentinel+concrete or unknown combination
        return TOP

    # ── helpers ─────────────────────────────────────────────────────────

    def is_compatible(self, a: LatticeElement, b: LatticeElement) -> bool:
        """Check if two types are compatible (meet is not TOP)."""
        return self.meet(a, b) != TOP

    @property
    def class_count(self) -> int:
        """Number of classes in the loaded hierarchy."""
        return len(self._ancestors)

    def ancestors_of(self, cls: str) -> set[str]:
        """Return all ancestor class names (including self) for a given class."""
        return self._ancestors.get(cls, {cls})

    def parent_of(self, cls: str) -> Optional[str]:
        """Return the direct parent of a class, or None."""
        return self._parents.get(cls)
