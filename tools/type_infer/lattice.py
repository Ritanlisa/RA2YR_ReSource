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


def _load_hierarchy(class_layouts_path: Optional[str] = None) -> tuple[
    dict[str, set[str]], dict[str, str | None]
]:
    """Load class hierarchy from class_layouts.json.

    Returns:
        (ancestors, parents):
          ancestors: class_name -> set of all ancestor names (including self)
          parents: class_name -> direct parent name (or None if root)
    """
    path = _resolve_path(class_layouts_path)
    if path is None:
        return {}, {}

    with open(path, "r", encoding="utf-8") as f:
        raw = json.load(f)

    # Build direct parent map
    parents: dict[str, str | None] = {}
    for cls_name, info in raw.items():
        parents[cls_name] = info.get("parent")

    # Compute transitive closure (all ancestors) per class
    ancestors: dict[str, set[str]] = {}

    def get_ancestors(cls: str) -> set[str]:
        if cls in ancestors:
            return ancestors[cls]
        result = {cls}
        parent = parents.get(cls)
        if parent is not None and parent in parents:
            result |= get_ancestors(parent)
        ancestors[cls] = result
        return result

    for cls_name in parents:
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
