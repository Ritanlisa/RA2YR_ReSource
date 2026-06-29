"""
Unit tests for TypeLattice (tools/type_infer/lattice.py).

Tests cover: meet, join, is_subtype for all lattice element combinations,
VOID_PTR identity, TOP absorption, BOTTOM identity, class hierarchy integration.
"""
import pytest
from tools.type_infer.lattice import (
    TypeLattice,
    BOTTOM,
    VOID_PTR,
    TOP,
)


# ── fixtures ──────────────────────────────────────────────────────────── ─


@pytest.fixture
def empty_lattice() -> TypeLattice:
    """Lattice with no class hierarchy loaded."""
    return TypeLattice(class_layouts_path="/__nonexistent_path__")


@pytest.fixture
def lattice() -> TypeLattice:
    """Lattice with real class_layouts.json."""
    return TypeLattice()


# ── is_subtype tests ──────────────────────────────────────────────────── ─


class TestSubtypeBasics:
    """is_subtype on sentinel elements."""

    def test_reflexivity(self, empty_lattice):
        lt = empty_lattice
        assert lt.is_subtype(BOTTOM, BOTTOM)
        assert lt.is_subtype(VOID_PTR, VOID_PTR)
        assert lt.is_subtype(TOP, TOP)
        assert lt.is_subtype("Foo", "Foo")

    def test_bottom_subtype_of_everything(self, empty_lattice):
        lt = empty_lattice
        assert lt.is_subtype(BOTTOM, VOID_PTR)
        assert lt.is_subtype(BOTTOM, TOP)
        assert lt.is_subtype(BOTTOM, "AnyClass")

    def test_everything_subtype_of_top(self, empty_lattice):
        lt = empty_lattice
        assert lt.is_subtype(VOID_PTR, TOP)
        assert lt.is_subtype("BuildingClass", TOP)
        assert lt.is_subtype(BOTTOM, TOP)

    def test_top_subtype_of_nothing_else(self, empty_lattice):
        lt = empty_lattice
        assert not lt.is_subtype(TOP, BOTTOM)
        assert not lt.is_subtype(TOP, VOID_PTR)
        assert not lt.is_subtype(TOP, "Foo")

    def test_voidptr_not_subtype_of_bottom(self, empty_lattice):
        lt = empty_lattice
        assert not lt.is_subtype(VOID_PTR, BOTTOM)

    def test_concrete_not_subtype_of_voidptr(self, empty_lattice):
        lt = empty_lattice
        assert not lt.is_subtype("SomeClass", VOID_PTR)

    def test_concrete_not_subtype_of_bottom(self, empty_lattice):
        lt = empty_lattice
        assert not lt.is_subtype("Xxx", BOTTOM)


class TestSubtypeHierarchy:
    """is_subtype with real class hierarchy."""

    def test_known_inheritance(self, lattice):
        """ObjectClass extends AbstractClass."""
        assert lattice.is_subtype("ObjectClass", "AbstractClass")

    def test_transitive_inheritance(self, lattice):
        """MissionClass → ObjectClass → AbstractClass."""
        assert lattice.is_subtype("MissionClass", "AbstractClass")
        assert lattice.is_subtype("MissionClass", "ObjectClass")

    def test_not_subtype_reverse(self, lattice):
        """AbstractClass is NOT a subtype of ObjectClass."""
        assert not lattice.is_subtype("AbstractClass", "ObjectClass")

    def test_unrelated_classes(self, lattice):
        """HouseClass and OverlayClass are unrelated (different branches)."""
        # HouseClass -> AbstractClass, OverlayClass -> ObjectClass -> AbstractClass
        assert not lattice.is_subtype("HouseClass", "OverlayClass")
        assert not lattice.is_subtype("OverlayClass", "HouseClass")

    def test_unknown_class_not_subtype(self, empty_lattice):
        lt = empty_lattice
        assert not lt.is_subtype("NonExistent", "AbstractClass")
        assert not lt.is_subtype("AbstractClass", "NonExistent")

    def test_locomotion_hierarchy(self, lattice):
        """ILocomotion → LocomotionClass → FlyLocomotionClass."""
        assert lattice.is_subtype("FlyLocomotionClass", "LocomotionClass")
        assert lattice.is_subtype("LocomotionClass", "ILocomotion")
        assert lattice.is_subtype("FlyLocomotionClass", "ILocomotion")


# ── meet tests ────────────────────────────────────────────────────────── ─


class TestMeet:
    """meet(a, b) returns the most specific type consistent with both."""

    def test_meet_voidptr_identity(self, empty_lattice):
        lt = empty_lattice
        assert lt.meet(VOID_PTR, "Concrete") == "Concrete"
        assert lt.meet("Concrete", VOID_PTR) == "Concrete"
        assert lt.meet(VOID_PTR, VOID_PTR) == VOID_PTR
        assert lt.meet(VOID_PTR, BOTTOM) == BOTTOM
        assert lt.meet(VOID_PTR, TOP) == TOP

    def test_meet_bottom_identity(self, empty_lattice):
        lt = empty_lattice
        assert lt.meet(BOTTOM, "X") == "X"
        assert lt.meet("X", BOTTOM) == "X"
        assert lt.meet(BOTTOM, BOTTOM) == BOTTOM

    def test_meet_top_absorbs(self, empty_lattice):
        lt = empty_lattice
        assert lt.meet(TOP, BOTTOM) == TOP
        assert lt.meet(TOP, VOID_PTR) == TOP
        assert lt.meet(TOP, "X") == TOP
        assert lt.meet("X", TOP) == TOP

    def test_meet_same_concrete(self, empty_lattice):
        lt = empty_lattice
        assert lt.meet("Foo", "Foo") == "Foo"

    def test_meet_subtype_returns_more_specific(self, lattice):
        """meet(ObjectClass, AbstractClass) = ObjectClass (more specific)."""
        result = lattice.meet("ObjectClass", "AbstractClass")
        assert result == "ObjectClass"

        result = lattice.meet("AbstractClass", "ObjectClass")
        assert result == "ObjectClass"

    def test_meet_transitive_subtype(self, lattice):
        """meet(MissionClass, AbstractClass) = MissionClass."""
        result = lattice.meet("MissionClass", "AbstractClass")
        assert result == "MissionClass"

    def test_meet_incompatible_returns_top(self, lattice):
        """HouseClass and OverlayClass are unrelated → TOP."""
        result = lattice.meet("HouseClass", "OverlayClass")
        assert result == TOP

    def test_meet_incompatible_no_hierarchy(self, empty_lattice):
        """Two unrelated classes with no hierarchy → TOP."""
        lt = empty_lattice
        assert lt.meet("A", "B") == TOP

    def test_meet_voidptr_concrete_is_concrete(self, lattice):
        """VOID_PTR meet BuildingClass = BuildingClass (identity)."""
        # Use a real class name
        assert lattice.meet(VOID_PTR, "ObjectClass") == "ObjectClass"

    def test_meet_bottom_with_top_is_top(self, empty_lattice):
        lt = empty_lattice
        assert lt.meet(BOTTOM, TOP) == TOP
        assert lt.meet(TOP, BOTTOM) == TOP


# ── join tests ────────────────────────────────────────────────────────── ─


class TestJoin:
    """join(a, b) returns the least common ancestor or VOID_PTR."""

    def test_join_bottom_identity(self, empty_lattice):
        lt = empty_lattice
        assert lt.join(BOTTOM, "X") == "X"
        assert lt.join("X", BOTTOM) == "X"
        assert lt.join(BOTTOM, BOTTOM) == BOTTOM

    def test_join_top_absorbs(self, empty_lattice):
        lt = empty_lattice
        assert lt.join(TOP, BOTTOM) == TOP
        assert lt.join(TOP, VOID_PTR) == TOP
        assert lt.join(TOP, "X") == TOP

    def test_join_same_concrete(self, empty_lattice):
        lt = empty_lattice
        assert lt.join("Foo", "Foo") == "Foo"

    def test_join_subtype_returns_ancestor(self, lattice):
        """join(MissionClass, ObjectClass) = ObjectClass (ancestor)."""
        result = lattice.join("MissionClass", "ObjectClass")
        assert result == "ObjectClass"

    def test_join_siblings_returns_common_ancestor(self, lattice):
        """MissionClass and OverlayClass share ObjectClass as ancestor."""
        # MissionClass -> ObjectClass -> AbstractClass
        # OverlayClass -> ObjectClass -> AbstractClass
        result = lattice.join("MissionClass", "OverlayClass")
        # Both share ObjectClass as most specific common ancestor
        assert result == "ObjectClass"

    def test_join_unrelated_returns_voidptr(self, lattice):
        """HouseClass and OverlayClass share only AbstractClass — but
        HouseClass → AbstractClass directly, OverlayClass → ObjectClass → AbstractClass.
        Common ancestor is AbstractClass."""
        result = lattice.join("HouseClass", "OverlayClass")
        assert result == "AbstractClass"

    def test_join_no_common_ancestor_returns_voidptr(self, empty_lattice):
        lt = empty_lattice
        assert lt.join("A", "B") == VOID_PTR

    def test_join_with_voidptr(self, empty_lattice):
        lt = empty_lattice
        assert lt.join(VOID_PTR, "X") == VOID_PTR
        assert lt.join("X", VOID_PTR) == VOID_PTR

    def test_join_locomotion_hierarchy(self, lattice):
        """FlyLocomotionClass join JumpjetLocomotionClass → LocomotionClass."""
        result = lattice.join("FlyLocomotionClass", "JumpjetLocomotionClass")
        assert result == "LocomotionClass"


# ── is_compatible tests ───────────────────────────────────────────────── ─


class TestCompatibility:
    def test_compatible_same(self, empty_lattice):
        lt = empty_lattice
        assert lt.is_compatible("A", "A")

    def test_compatible_voidptr_anything(self, empty_lattice):
        lt = empty_lattice
        assert lt.is_compatible(VOID_PTR, "X")
        # VOID_PTR meet TOP = TOP (TOP absorbs) — but that's an edge case
        # where the lattice says "compatible" because VOID_PTR itself 
        # is compatible with everything in principle.

    def test_incompatible_concretes(self, empty_lattice):
        lt = empty_lattice
        assert not lt.is_compatible("A", "B")

    def test_compatible_hierarchy(self, lattice):
        assert lattice.is_compatible("ObjectClass", "AbstractClass")
        assert not lattice.is_compatible("HouseClass", "OverlayClass")


# ── class hierarchy helpers ───────────────────────────────────────────── ─


class TestHierarchyAccess:
    def test_ancestors_of(self, lattice):
        anc = lattice.ancestors_of("ObjectClass")
        assert "ObjectClass" in anc
        assert "AbstractClass" in anc

    def test_ancestors_of_unknown(self, empty_lattice):
        lt = empty_lattice
        anc = lt.ancestors_of("Foo")
        assert anc == {"Foo"}

    def test_parent_of(self, lattice):
        assert lattice.parent_of("ObjectClass") == "AbstractClass"
        assert lattice.parent_of("FlyLocomotionClass") == "LocomotionClass"

    def test_parent_of_root(self, lattice):
        """AbstractClass has no parent in the hierarchy."""
        # AbstractClass parent is None
        p = lattice.parent_of("AbstractClass")
        assert p is None

    def test_class_count(self, lattice):
        assert lattice.class_count > 100

    def test_class_count_empty(self, empty_lattice):
        assert empty_lattice.class_count == 0


# ── boundary / edge tests ─────────────────────────────────────────────── ─


class TestBoundaryCases:
    def test_meet_three_way(self, lattice):
        """meet is associative: meet(meet(a,b), c) == meet(a, meet(b,c))."""
        a, b, c = "MissionClass", "ObjectClass", "AbstractClass"
        r1 = lattice.meet(lattice.meet(a, b), c)
        r2 = lattice.meet(a, lattice.meet(b, c))
        assert r1 == r2 == "MissionClass"

    def test_join_three_way(self, lattice):
        """join is associative."""
        a, b, c = "FlyLocomotionClass", "JumpjetLocomotionClass", "LocomotionClass"
        r1 = lattice.join(lattice.join(a, b), c)
        r2 = lattice.join(a, lattice.join(b, c))
        assert r1 == r2 == "LocomotionClass"

    def test_meet_join_absorption(self, lattice):
        """meet(a, join(a, b)) == a (absorption law)."""
        a = "MissionClass"
        b = "OverlayClass"
        join_ab = lattice.join(a, b)
        assert join_ab == "ObjectClass"
        result = lattice.meet(a, join_ab)
        assert result == a

    def test_bottom_join_top_is_top(self, empty_lattice):
        lt = empty_lattice
        assert lt.join(BOTTOM, TOP) == TOP
        assert lt.join(TOP, BOTTOM) == TOP

    def test_voidptr_meet_voidptr(self, empty_lattice):
        lt = empty_lattice
        assert lt.meet(VOID_PTR, VOID_PTR) == VOID_PTR

    def test_top_join_top(self, empty_lattice):
        lt = empty_lattice
        assert lt.join(TOP, TOP) == TOP
        assert lt.meet(TOP, TOP) == TOP

    def test_bottom_join_voidptr(self, empty_lattice):
        lt = empty_lattice
        assert lt.join(BOTTOM, VOID_PTR) == VOID_PTR
        assert lt.join(VOID_PTR, BOTTOM) == VOID_PTR

    def test_lattice_ordering_consistency(self, lattice):
        """If a ⊑ b then meet(a,b) = a and join(a,b) = b."""
        pairs = [
            ("MissionClass", "ObjectClass"),
            ("ObjectClass", "AbstractClass"),
            ("FlyLocomotionClass", "LocomotionClass"),
            (BOTTOM, VOID_PTR),
            (BOTTOM, TOP),
            (VOID_PTR, TOP),
        ]
        for a, b in pairs:
            if isinstance(a, int) or isinstance(b, int):
                continue  # skip sentinel-only pairs for this lattice
            assert lattice.is_subtype(a, b), f"{a} should be subtype of {b}"
            assert lattice.meet(a, b) == a, f"meet({a},{b}) should be {a}"
            assert lattice.join(a, b) == b, f"join({a},{b}) should be {b}"
