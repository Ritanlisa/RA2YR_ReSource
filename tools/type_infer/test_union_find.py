"""
Unit tests for UnionFind (tools/type_infer/union_find.py).
"""
import pytest
from tools.type_infer.union_find import UnionFind


class TestUnionFindBasic:
    """Basic initialization and singleton set behavior."""

    def test_init_zero(self):
        uf = UnionFind(0)
        assert len(uf) == 0
        assert uf.root_count() == 0

    def test_init_single(self):
        uf = UnionFind(1)
        assert uf.find(0) == 0
        assert uf.root_count() == 1

    def test_init_negative_raises(self):
        with pytest.raises(ValueError):
            UnionFind(-1)

    def test_find_out_of_range(self):
        uf = UnionFind(5)
        with pytest.raises(IndexError):
            uf.find(5)
        with pytest.raises(IndexError):
            uf.find(-1)

    def test_initial_roots(self):
        uf = UnionFind(100)
        assert uf.root_count() == 100
        for i in range(100):
            assert uf.find(i) == i


class TestUnionFindConnectivity:
    """Union and connected operations."""

    def test_union_simple(self):
        uf = UnionFind(10)
        assert uf.union(0, 1)
        assert uf.connected(0, 1)
        assert uf.root_count() == 9

    def test_union_idempotent(self):
        uf = UnionFind(10)
        uf.union(0, 1)
        assert not uf.union(0, 1)  # already connected
        assert not uf.union(1, 0)
        assert uf.root_count() == 9

    def test_union_transitive(self):
        uf = UnionFind(10)
        uf.union(0, 1)
        uf.union(1, 2)
        assert uf.connected(0, 2)
        assert uf.connected(1, 2)
        assert uf.connected(0, 1)
        assert not uf.connected(0, 3)

    def test_chain_compression(self):
        """Path compression should flatten chains."""
        uf = UnionFind(5)
        # Force a chain by manipulating parent directly
        uf._parent[1] = 0
        uf._parent[2] = 1
        uf._parent[3] = 2
        uf._parent[4] = 3
        # find(4) should compress path
        root = uf.find(4)
        assert root == 0
        # After compression, 4 and 3 should point closer to root
        assert uf._parent[4] != 3  # compressed

    def test_path_compression_idempotent(self):
        uf = UnionFind(20)
        # Build a chain then flatten
        for i in range(1, 20):
            uf._parent[i] = i - 1
        # First find compresses
        r1 = uf.find(19)
        assert r1 == 0
        # Second find should be O(1)
        r2 = uf.find(19)
        assert r2 == 0
        assert uf._parent[19] == 0  # fully compressed

    def test_disjoint_sets(self):
        uf = UnionFind(6)
        uf.union(0, 1)
        uf.union(1, 2)
        uf.union(3, 4)
        assert uf.connected(0, 2)
        assert uf.connected(3, 4)
        assert not uf.connected(0, 3)
        assert not uf.connected(2, 5)
        assert uf.root_count() == 3  # {0,1,2}, {3,4}, {5}


class TestUnionFindLabels:
    """Label storage on equivalence class roots."""

    def test_set_and_get_label(self):
        uf = UnionFind(10)
        uf.set_label(3, {"type": "int", "confidence": "ANCHORED"})
        label = uf.get_label(3)
        assert label == {"type": "int", "confidence": "ANCHORED"}

    def test_label_on_root_accessible_from_all_members(self):
        uf = UnionFind(10)
        uf.union(0, 1)
        uf.union(1, 2)
        uf.set_label(0, {"type": "BuildingClass"})
        assert uf.get_label(0) == {"type": "BuildingClass"}
        assert uf.get_label(1) == {"type": "BuildingClass"}
        assert uf.get_label(2) == {"type": "BuildingClass"}

    def test_label_after_union_to_labeled_set(self):
        uf = UnionFind(10)
        uf.set_label(0, {"type": "A"})
        uf.set_label(5, {"type": "B"})
        uf.union(0, 5)  # merges 0 and 5, one label survives
        root = uf.find(0)
        label = uf.get_label(root)
        assert label is not None
        assert label["type"] in ("A", "B")

    def test_no_label_returns_none(self):
        uf = UnionFind(10)
        assert uf.get_label(0) is None
        uf.union(0, 1)
        assert uf.get_label(0) is None

    def test_label_count(self):
        uf = UnionFind(10)
        assert uf.label_count() == 0
        uf.set_label(0, {"type": "A"})
        uf.set_label(5, {"type": "B"})
        assert uf.label_count() == 2
        uf.union(0, 5)
        assert uf.label_count() == 1

    def test_label_defensive_copy(self):
        uf = UnionFind(5)
        d = {"type": "int", "confidence": "ANCHORED"}
        uf.set_label(0, d)
        d["type"] = "float"  # mutate original
        label = uf.get_label(0)
        assert label["type"] == "int"  # stored copy unaffected


class TestUnionFindPerformance:
    """Verify O(α(n)) amortized behavior for large N."""

    def test_large_union_chain(self):
        N = 10000
        uf = UnionFind(N)
        # Union all pairs sequentially
        for i in range(N - 1):
            uf.union(i, i + 1)
        assert uf.root_count() == 1
        # All finds should return same root
        r0 = uf.find(0)
        for i in range(N):
            assert uf.find(i) == r0

    def test_large_pairwise_union(self):
        N = 1000
        uf = UnionFind(N)
        # Pairwise union: (0,1), (2,3), (4,5), ...
        for i in range(0, N, 2):
            uf.union(i, i + 1)
        assert uf.root_count() == N // 2
        assert uf.connected(0, 1)
        assert uf.connected(998, 999)
        assert not uf.connected(0, 2)

    def test_repeated_find_same_path(self):
        """Repeated finds on same element after compression should be fast."""
        uf = UnionFind(5000)
        for i in range(1, 5000):
            uf.union(i - 1, i)
        # First find does compression
        r = uf.find(4999)
        # Repeated finds should be immediate
        for _ in range(1000):
            assert uf.find(4999) == r

    def test_union_by_rank_balance(self):
        """Union-by-rank should prevent degenerate tree heights."""
        uf = UnionFind(100)
        for i in range(0, 100, 2):
            uf.union(i, i + 1)  # 50 pairs
        # Merge pairs
        for i in range(0, 98, 4):
            uf.union(i, i + 2)
        # Check that max rank is bounded (should be ~log2(100) = ~7)
        max_rank = max(uf._rank)
        assert max_rank <= 10  # log2(100) ≈ 7, generous bound
