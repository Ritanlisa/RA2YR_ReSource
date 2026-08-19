"""
split_giant.py — Articulation point analysis for the constraint graph.

Finds which variables (function params, returns, members) act as bridges
in the giant 172K-node component. Once typed via IDA, these bridges split
the component into independently solvable subcomponents.

Key insight: register nodes (ecx, eax, ...) and stack slots (stack_+0x4, ...)
are intermediate plumbing from constraint extraction, NOT real semantic
articulation points. We filter them out and focus on real function parameters,
return values, and member accesses.
"""

import json, sys, math, time, re
from collections import defaultdict, Counter, deque

# =============================================================================
# Config
# =============================================================================
MAX_SUBCOMP_SIZE = 100
TOP_ANCHOR_COUNT = 50
MAX_STEPS = 500
MAX_CANDIDATES_PER_STEP = 500  # evaluate top 500 candidates

# =============================================================================
# 1. Load constraints and build graph
# =============================================================================
print("=" * 60)
print("Step 1: Loading constraint graph...")
print("=" * 60)
t0 = time.time()

with open("tools/type_infer/constraints/raw_constraints.json") as f:
    raw_data = json.load(f)
constraints = raw_data["constraints"]
print(f"  Total constraints: {len(constraints):,}")

var_to_idx = {}
adj = defaultdict(set)

for c in constraints:
    f = c["from"]
    t = c["to"]
    if f not in var_to_idx:
        var_to_idx[f] = len(var_to_idx)
    if t not in var_to_idx:
        var_to_idx[t] = len(var_to_idx)
    fi, ti = var_to_idx[f], var_to_idx[t]
    adj[fi].add(ti)
    adj[ti].add(fi)

N = len(var_to_idx)
idx_to_var = {i: v for v, i in var_to_idx.items()}
total_edges = sum(len(v) for v in adj.values()) // 2
print(f"  Variables: {N:,}, Edges: {total_edges:,}")
print(f"  Time: {time.time() - t0:.1f}s")

# =============================================================================
# 2. Find connected components
# =============================================================================
print("\nStep 2: Finding connected components...")
t1 = time.time()

visited = [False] * N
components = []
for start in range(N):
    if visited[start]:
        continue
    q = deque([start])
    visited[start] = True
    comp = []
    while q:
        v = q.popleft()
        comp.append(v)
        for nb in adj[v]:
            if not visited[nb]:
                visited[nb] = True
                q.append(nb)
    components.append(comp)
components.sort(key=len, reverse=True)

print(f"  Components: {len(components):,}")
for sz, cnt in sorted(Counter(len(c) for c in components).items(), reverse=True)[:10]:
    print(f"    size={sz:,}: {cnt}")
print(f"  Time: {time.time() - t1:.1f}s")

# =============================================================================
# 3. Extract giant component
# =============================================================================
print("\nStep 3: Building adjacency for giant component...")
t2 = time.time()

giant = components[0]
giant_n = len(giant)
giant_set = set(giant)
g2l = {v: i for i, v in enumerate(giant)}
l2g = {i: v for i, v in enumerate(giant)}

# Build full adjacency for giant subgraph
giant_adj = [[] for _ in range(giant_n)]
giant_degree = [0] * giant_n
for local_i, global_v in enumerate(giant):
    deg = 0
    for nb in adj[global_v]:
        lnb = g2l.get(nb)
        if lnb is not None:
            giant_adj[local_i].append(lnb)
            deg += 1
    giant_degree[local_i] = deg

print(f"  Giant component: {giant_n:,} nodes ({giant_n/N*100:.1f}% of all)")
print(f"  Time: {time.time() - t2:.1f}s")

# =============================================================================
# 4. Build spanning tree + classify articulation points
# =============================================================================
print("\nStep 4: Building spanning tree + classifying articulation points...")
t3 = time.time()

# Spanning tree via BFS
tree_parent = [-1] * giant_n
tree_children = [[] for _ in range(giant_n)]
tree_order = []

visited_t = [False] * giant_n
for root in range(giant_n):
    if visited_t[root]:
        continue
    q = deque([root])
    visited_t[root] = True
    while q:
        v = q.popleft()
        tree_order.append(v)
        for nb in giant_adj[v]:
            if not visited_t[nb]:
                visited_t[nb] = True
                tree_parent[nb] = v
                tree_children[v].append(nb)
                q.append(nb)

# Subtree sizes (post-order)
subtree_size = [1] * giant_n
for v in reversed(tree_order):
    for ch in tree_children[v]:
        subtree_size[v] += subtree_size[ch]

parent_size = [0] * giant_n
for v in range(giant_n):
    p = tree_parent[v]
    if p != -1:
        parent_size[v] = giant_n - subtree_size[v]

# =============================================================================
# 5. Classify nodes: semantic vs plumbing
# =============================================================================
def is_semantic(v_idx):
    """Return True if this variable represents a real semantic entity (not plumbing)."""
    vn = idx_to_var.get(l2g[v_idx], "")

    # Register nodes: individual registers
    if vn in ("eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp",
              "al", "ah", "bl", "bh", "cl", "ch", "dl", "dh",
              "ax", "bx", "cx", "dx", "si", "di", "bp", "sp"):
        return False

    # Stack slots
    if re.match(r'^stack_[\+\-]0x[0-9a-fA-F]+$', vn):
        return False

    # Numeric immediates
    if vn in ("0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
              "-1", "10", "0x0", "0x1"):
        return False

    # Dereferenced registers: dword ptr [eax], byte ptr [esi], etc.
    if re.match(r'^(dword|byte|word|qword)\s+ptr\s+\[', vn, re.IGNORECASE):
        return False

    # vtable offsets: offset ??_7...
    if vn.startswith("offset ") or "??_7" in vn:
        return False

    # Register+offset: eax+0x4, [esi+8], etc.
    if re.match(r'^\[?[a-d]x\s*[\+\-]', vn, re.IGNORECASE):
        return False
    if re.match(r'^[a-d]x\s*[\+\-]', vn, re.IGNORECASE):
        return False

    # Unknown/corrupted names
    if vn in ("", "???", "UNKNOWN"):
        return False

    return True

# Count semantic nodes
semantic_count = sum(1 for i in range(giant_n) if is_semantic(i))
plumbing_count = giant_n - semantic_count
print(f"\n  Giant component nodes:")
print(f"    Semantic: {semantic_count:,} ({semantic_count/giant_n*100:.1f}%)")
print(f"    Plumbing: {plumbing_count:,} ({plumbing_count/giant_n*100:.1f}%)")

# =============================================================================
# 6. Find articulation points (tree non-leaves), filter to semantic only
# =============================================================================
print("\nStep 5: Finding semantic articulation points...")

art_scores = []  # (max_split_size, v_idx, is_semantic)
all_art_scores = []  # all articulation points

for v in range(giant_n):
    deg = len(tree_children[v]) + (1 if tree_parent[v] != -1 else 0)
    if deg <= 1:
        continue

    sizes = [subtree_size[ch] for ch in tree_children[v]]
    if tree_parent[v] != -1:
        sizes.append(parent_size[v])
    all_art_scores.append((max(sizes), v, is_semantic(v)))

art_semantic = [(s, v) for s, v, sem in all_art_scores if sem]
art_semantic.sort()
art_plumbing = [(s, v) for s, v, sem in all_art_scores if not sem]

print(f"  Total articulation points: {len(all_art_scores):,}")
print(f"  Semantic articulation points: {len(art_semantic):,}")
print(f"  Plumbing articulation points: {len(art_plumbing):,}")

# Show top semantic articulation points
print(f"\n  Top {min(TOP_ANCHOR_COUNT, len(art_semantic))} SEMANTIC articulation points:")
print(f"  {'Rank':<6} {'Var name':<65} {'Max split':<12}")
print(f"  {'-'*6} {'-'*65} {'-'*12}")
for rank, (score, ai) in enumerate(art_semantic[:TOP_ANCHOR_COUNT], 1):
    vn = idx_to_var.get(l2g[ai], f"???")
    if len(vn) > 63: vn = vn[:60] + "..."
    print(f"  {rank:<6} {vn:<65} {score:<12,}")

# =============================================================================
# 7. Greedy anchor selection (full graph, semantic-only candidates)
# =============================================================================
print(f"\nStep 6: Greedy anchor selection (full graph, semantic-only)...")
t4 = time.time()

active = [True] * giant_n
anchors = []
all_anchors = []  # includes plumbing if needed

# Merge all articulation points, sorted by tree score (best = smallest max split)
# Include BOTH semantic AND plumbing. Plumbing nodes (ecx, eax, stack_+0x4)
# have much better tree scores than semantic nodes.
all_art_ranked = sorted(all_art_scores, key=lambda x: x[0])

print(f"\n  Top 20 articulation points (ALL types, tree-ranked):")
print(f"  {'Rank':<6} {'Var name':<65} {'Max split':<12} {'Type'}")
print(f"  {'-'*6} {'-'*65} {'-'*12} {'-'*10}")
for rank, (score, ai, sem) in enumerate(all_art_ranked[:20], 1):
    vn = idx_to_var.get(l2g[ai], f"???")
    if len(vn) > 63: vn = vn[:60] + "..."
    print(f"  {rank:<6} {vn:<65} {score:<12,} {'semantic' if sem else 'plumbing'}")

# =============================================================================
# Tree-based greedy: use spanning tree for fast split computation
# Track full-graph connectivity separately for verification.
# =============================================================================
print(f"\nStep 6: Tree-based greedy anchor selection...")
print(f"  (Using spanning tree for selection; full-graph verification at checkpoints)")
t4 = time.time()

active = [True] * giant_n
tree_active = [True] * giant_n  # separate mask for tree-only tracking
anchors = []
all_anchors = []  # (v_idx, label)

def find_tree_components(active_mask):
    """Find components using TREE edges only."""
    visited = [False] * giant_n
    comps = []
    for start in range(giant_n):
        if not active_mask[start] or visited[start]:
            continue
        q = deque([start])
        visited[start] = True
        nodes = []
        while q:
            v = q.popleft()
            nodes.append(v)
            p = tree_parent[v]
            if p != -1 and active_mask[p] and not visited[p]:
                visited[p] = True
                q.append(p)
            for ch in tree_children[v]:
                if active_mask[ch] and not visited[ch]:
                    visited[ch] = True
                    q.append(ch)
        comps.append(nodes)
    comps.sort(key=len, reverse=True)
    return comps

def find_full_components(active_mask):
    """Find components using FULL graph adjacency."""
    visited = [False] * giant_n
    comps = []
    for start in range(giant_n):
        if not active_mask[start] or visited[start]:
            continue
        q = deque([start])
        visited[start] = True
        nodes = []
        while q:
            v = q.popleft()
            nodes.append(v)
            for nb in giant_adj[v]:
                if active_mask[nb] and not visited[nb]:
                    visited[nb] = True
                    q.append(nb)
        comps.append(nodes)
    comps.sort(key=len, reverse=True)
    return comps

# Initial full-graph check
full_comps = find_full_components(active)
print(f"  Initial full-graph: {len(full_comps)} components, max size={len(full_comps[0]):,}")

for step in range(MAX_STEPS):
    # Find largest tree component
    tree_comps = find_tree_components(active)
    if not tree_comps:
        break

    largest_tree = tree_comps[0]
    max_tree_sz = len(largest_tree)

    if max_tree_sz <= MAX_SUBCOMP_SIZE:
        print(f"  Tree: all components <= {MAX_SUBCOMP_SIZE} after {len(anchors)} anchors")
        break

    largest_tree_set = set(largest_tree)
    best_v = None
    best_score = math.inf
    best_label = "?"

    # Find best articulation point (lowest max split from tree)
    for score, v, sem in all_art_ranked:
        if not active[v] or v not in largest_tree_set:
            continue

        # Tree-based split: component sizes = child subtrees + parent side
        # These are precomputed and valid for the tree
        best_v = v
        best_score = score
        best_label = "semantic" if sem else "plumbing"
        break  # First one is already the best-ranked

    if best_v is None:
        print(f"  No articulation point in largest tree component (size {max_tree_sz})")
        break

    active[best_v] = False
    anchors.append(best_v)
    all_anchors.append((best_v, best_label))

    # Full-graph checkpoint every 50 steps (expensive)
    if step < 10 or step % 50 == 0 or step == len(anchors) - 1:
        full_comps_check = find_full_components(active)
        max_full = len(full_comps_check[0]) if full_comps_check else 0
        vn = idx_to_var.get(l2g[best_v], "???")
        if len(vn) > 45: vn = vn[:42] + "..."
        print(f"  Anchor #{len(anchors)} [{best_label}]: {vn}")
        print(f"    Tree max split={best_score:,}  Tree largest={max_tree_sz:,}  "
              f"Full largest={max_full:,}  Full comps={len(full_comps_check)}")

# Final full-graph verification
print(f"\n  Final full-graph verification...")
full_comps_final = find_full_components(active)
print(f"  Full graph: {len(full_comps_final)} components, max size={len(full_comps_final[0]) if full_comps_final else 0:,}")

print(f"\n  Anchors: {len(anchors)} ({sum(1 for _,l in all_anchors if l=='semantic')} semantic, "
      f"{sum(1 for _,l in all_anchors if l=='plumbing')} plumbing)")
print(f"  Time: {time.time() - t4:.1f}s")

# =============================================================================
# 8. Final statistics (full graph)
# =============================================================================
print("\nStep 7: Final statistics (full graph)...")

comp_visited_final = [False] * giant_n
final_comps = []

for start in range(giant_n):
    if not active[start] or comp_visited_final[start]:
        continue
    q = deque([start])
    comp_visited_final[start] = True
    nodes = []
    while q:
        v = q.popleft()
        nodes.append(v)
        for nb in giant_adj[v]:
            if active[nb] and not comp_visited_final[nb]:
                comp_visited_final[nb] = True
                q.append(nb)
    final_comps.append(nodes)

final_comps.sort(key=len, reverse=True)
final_sizes = [len(c) for c in final_comps]
final_dist = Counter(final_sizes)

print(f"  Subcomponents: {len(final_comps):,}")
print(f"  Max size: {final_sizes[0] if final_sizes else 0:,}")
for sz, cnt in sorted(final_dist.items(), reverse=True)[:20]:
    print(f"    size={sz:,}: {cnt} subcomponent(s)")

# =============================================================================
# 9. Summary
# =============================================================================
total_time = time.time() - t0
sem_anchors = sum(1 for _, l in all_anchors if l == "semantic")
plumb_anchors = sum(1 for _, l in all_anchors if l == "plumbing")

print("\n" + "=" * 60)
print("SUMMARY")
print("=" * 60)
print(f"  Giant component:              {giant_n:,} nodes")
print(f"    Semantic:                   {semantic_count:,}")
print(f"    Plumbing:                   {plumbing_count:,}")
print(f"  Articulation points (total):  {len(all_art_scores):,}")
print(f"    Semantic:                   {len(art_semantic):,}")
print(f"    Plumbing:                   {len(art_plumbing):,}")
print(f"  Anchor set (greedy):          {len(anchors)}")
print(f"    Semantic:                   {sem_anchors}")
print(f"    Plumbing (fallback):        {plumb_anchors}")
print(f"  After anchoring:")
print(f"    Subcomponents:              {len(final_comps):,}")
print(f"    Max subcomponent size:      {final_sizes[0] if final_sizes else 0:,}")
print(f"  Estimated IDA work:           {sem_anchors} function decompilations")
print(f"  Total time:                   {total_time:.1f}s")

# =============================================================================
# 10. Anchor list grouped by function
# =============================================================================
print(f"\n{'='*60}")
print(f"ANCHOR LIST ({len(anchors)} total, {sem_anchors} semantic)")
print(f"{'='*60}")

# Group semantic anchors by function
sem_anchors_list = [a for a, l in all_anchors if l == "semantic"]
plumb_anchors_list = [a for a, l in all_anchors if l == "plumbing"]

func_groups = defaultdict(list)
for ai in sem_anchors_list:
    vn = idx_to_var.get(l2g[ai], f"global_{l2g[ai]}")
    # Extract function prefix
    if "::" in vn:
        parts = vn.split("::")
        last = parts[-1]
        if last in ("this", "return") or last.startswith("param") or last.startswith("local"):
            func = "::".join(parts[:-1])
        else:
            func = vn
    elif vn.endswith(".return") or vn.endswith(".this"):
        func = vn.rsplit(".", 1)[0]
    else:
        func = vn
    func_groups[func].append(vn)

print(f"  Semantic anchors by function ({len(func_groups)} functions):\n")
for i, (func, vnames) in enumerate(sorted(func_groups.items())):
    if i >= 40:
        print(f"  ... and {len(func_groups) - 40} more functions")
        break
    print(f"  [{func}]:")
    for vn in vnames[:3]:
        print(f"    -> {vn}")
    if len(vnames) > 3:
        print(f"    ... {len(vnames) - 3} more")

if plumb_anchors_list:
    print(f"\n  Plumbing anchors ({len(plumb_anchors_list)}):")
    for ai in plumb_anchors_list[:10]:
        vn = idx_to_var.get(l2g[ai], f"???")
        if len(vn) > 70: vn = vn[:67] + "..."
        print(f"    -> {vn}")
    if len(plumb_anchors_list) > 10:
        print(f"    ... {len(plumb_anchors_list) - 10} more")

# =============================================================================
# 11. Write JSON output
# =============================================================================
output = {
    "giant_component": {
        "total_nodes": giant_n,
        "semantic_nodes": semantic_count,
        "plumbing_nodes": plumbing_count,
    },
    "articulation_points": {
        "total": len(all_art_scores),
        "semantic": len(art_semantic),
        "plumbing": len(art_plumbing),
    },
    "anchors": {
        "total": len(anchors),
        "semantic": sem_anchors,
        "plumbing": plumb_anchors,
        "semantic_variables": [
            idx_to_var.get(l2g[ai], f"global_{l2g[ai]}")
            for ai, label in all_anchors if label == "semantic"
        ],
        "plumbing_variables": [
            idx_to_var.get(l2g[ai], f"global_{l2g[ai]}")
            for ai, label in all_anchors if label == "plumbing"
        ],
    },
    "after_anchoring": {
        "subcomponents": len(final_comps),
        "max_size": final_sizes[0] if final_sizes else 0,
        "size_distribution": {str(k): v for k, v in final_dist.items()},
    },
}

with open("tools/split_giant_results.json", "w") as f:
    json.dump(output, f, indent=2)

print(f"\n  Results: tools/split_giant_results.json")
print(f"\nDone.")
