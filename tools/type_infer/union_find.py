"""
Union-Find (Disjoint Set Union) for type equivalence classes.

Quick-union with path compression + union-by-rank.
Amortized O(α(n)) per operation where α is the inverse Ackermann function.

Each element is an integer ID 0..N-1.
Supports label storage per equivalence class root.
"""

from typing import Any, Optional


class UnionFind:
    """Disjoint-set data structure with path compression and union-by-rank."""

    def __init__(self, n: int):
        """Initialize n disjoint singleton sets (0..n-1)."""
        if n < 0:
            raise ValueError(f"Size must be non-negative, got {n}")
        self._parent = list(range(n))
        self._rank = [0] * n
        self._labels: dict[int, dict] = {}
        self._size = n

    def find(self, x: int) -> int:
        """Find root of element x with full path compression.

        Returns the representative (root) of x's set.
        """
        if x < 0 or x >= self._size:
            raise IndexError(f"Element {x} out of range [0, {self._size})")
        # Find root
        root = x
        while self._parent[root] != root:
            root = self._parent[root]
        # Full path compression: point all nodes on path directly to root
        while self._parent[x] != x:
            nxt = self._parent[x]
            self._parent[x] = root
            x = nxt
        return root

    def union(self, x: int, y: int) -> bool:
        """Merge sets containing x and y. Returns True if merged, False if already same."""
        rx = self.find(x)
        ry = self.find(y)
        if rx == ry:
            return False

        # Union by rank: attach smaller tree under larger tree
        if self._rank[rx] < self._rank[ry]:
            self._parent[rx] = ry
            # Merge labels: ry becomes new root, keep ry's label if rx has none
            if rx in self._labels and ry not in self._labels:
                self._labels[ry] = self._labels[rx]
            self._labels.pop(rx, None)
        elif self._rank[rx] > self._rank[ry]:
            self._parent[ry] = rx
            if ry in self._labels and rx not in self._labels:
                self._labels[rx] = self._labels[ry]
            self._labels.pop(ry, None)
        else:
            self._parent[ry] = rx
            self._rank[rx] += 1
            if ry in self._labels and rx not in self._labels:
                self._labels[rx] = self._labels[ry]
            self._labels.pop(ry, None)
        return True

    def connected(self, x: int, y: int) -> bool:
        """Check if x and y are in the same equivalence class."""
        return self.find(x) == self.find(y)

    def set_label(self, element_id: int, label: dict) -> None:
        """Associate a label dict with the equivalence class of element_id.

        Labels are stored on the root. Merging via union() preserves the
        label of the surviving root (if set), or adopts the absorbed label.
        """
        root = self.find(element_id)
        self._labels[root] = dict(label)  # defensive copy

    def get_label(self, element_id: int) -> Optional[dict]:
        """Get the label dict for the equivalence class of element_id.

        Returns None if no label has been set.
        """
        root = self.find(element_id)
        return self._labels.get(root)

    def label_count(self) -> int:
        """Number of labeled equivalence classes."""
        return len(self._labels)

    def root_count(self) -> int:
        """Number of distinct equivalence classes."""
        return sum(1 for i in range(self._size) if self._parent[i] == i)

    def __len__(self) -> int:
        return self._size
