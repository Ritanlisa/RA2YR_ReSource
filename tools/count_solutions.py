"""
Count valid type assignments for the constraint graph WITH anchors as hard constraints.
Outputs one valid assignment per component to tools/solution_assignment.json.
 
Anchors incorporated:
  - anchors/member_types.json → .this.member(offset) variables
  - anchors/global_types.json → dword_ADDR / byte_ADDR variables
  - tools/type_infer/signatures/function_signatures.json → .return / ::this / ::paramN
  - tools/type_infer/anchors/vtable_signatures.json → vtable_slot variables
  - THISCALL constraints from CALL_ARG edges → register source variables
    (The source register of a ClassName::Method::this CALL_ARG must be
     compatible with ClassName. Intersection across multiple methods
     finds the common ancestor class.)

Conflicting anchors on same variable → COMPONENT = 0 solutions (CONFLICT).
Large components (>20 nodes) → all variables assigned "void*" as unresolved.
"""

import json, sys, math, time, re
from collections import defaultdict, Counter, deque

sys.setrecursionlimit(100000)

# ============================================================================
# 1. Load basic data
# ============================================================================
print("Loading data...", flush=True)
t0 = time.time()

with open('tools/type_infer/constraints/raw_constraints.json') as f:
    raw_data = json.load(f)
constraints = raw_data['constraints']

with open('tools/class_layouts.json') as f:
    class_data = json.load(f)

with open('tools/type_infer/anchors/vtable_signatures.json') as f:
    vtable_sigs = json.load(f)

INT = "int"
FLOAT = "float"
class_names = sorted(class_data.keys())
type_names = [INT, FLOAT] + class_names
K = len(type_names)
type_to_idx = {t: i for i, t in enumerate(type_names)}
idx_to_type = {i: t for i, t in enumerate(type_names)}
print(f"  Types: {K} ({len(class_names)} classes + 2 special)", flush=True)


# ============================================================================
# 2. Anchor type converter
# ============================================================================
def anchor_type_to_idx(anchor_type):
    """Convert anchor type string to type_idx. None = unmappable/skipped."""
    if not anchor_type:
        return None
    t = anchor_type.strip()
    if not t:
        return None

    # Primitives → INT
    primitives = {
        'int', 'char', 'BOOL', 'bool', 'uint8_t', 'int8_t', 'uint16_t', 'int16_t',
        'uint32_t', 'int32_t', 'DWORD', 'BYTE', 'WORD', 'short', 'long',
        'int*', 'char*', 'BOOL*', 'bool*', 'uint8_t*', 'int32_t*', 'uint32_t*',
        'DWORD*', 'BYTE*', 'WORD*', 'short*', 'long*',
        'int *', 'char *', 'BOOL *', '_BYTE *', 'BYTE *',
    }
    if t in primitives:
        return type_to_idx.get(INT, 0)

    # Float/double → FLOAT
    if t in ('float', 'double', 'float*', 'double*', 'float *', 'double *'):
        return type_to_idx.get(FLOAT, 1)

    # Skip void / function pointers / arrays
    if t in ('void*', 'void', 'void *', 'void**') or '(' in t or '[' in t or t.startswith('enum '):
        return None

    # Try as class name (strip * pointer suffix)
    base = t.rstrip(' *')
    if base in type_to_idx:
        return type_to_idx[base]

    # Try stripping ra2::game:: prefix
    if base.startswith('ra2::game::'):
        short = base[len('ra2::game::'):]
        if short in type_to_idx:
            return type_to_idx[short]

    return None


# ============================================================================
# 3. Load all anchors
# ============================================================================
print("Loading anchors...", flush=True)

# 3a. member_types.json → build (class_name, offset) → type_idx
with open('anchors/member_types.json') as f:
    member_types_raw = json.load(f)

member_anchor_map = {}  # (class_or_method_name, offset_int) → type_idx
for key, info in member_types_raw.items():
    if '+' not in key:
        continue
    parts = key.split('+', 1)
    if len(parts) != 2:
        continue
    try:
        offset = int(parts[1], 16)
    except ValueError:
        continue
    type_idx = anchor_type_to_idx(info.get('type', ''))
    if type_idx is not None:
        member_anchor_map[(parts[0], offset)] = type_idx

# 3b. global_types.json → address_hex → type_idx
with open('anchors/global_types.json') as f:
    global_types_raw = json.load(f)

global_anchor_map = {}  # "0xADDR" → type_idx
for addr_hex, info in global_types_raw.items():
    type_idx = anchor_type_to_idx(info.get('type', ''))
    if type_idx is not None:
        global_anchor_map[addr_hex] = type_idx

# 3c. function_signatures.json → various func_var → type_idx
with open('tools/type_infer/signatures/function_signatures.json') as f:
    func_sigs = json.load(f)
func_entries = func_sigs.get('functions', {})

func_return_anchors = {}  # func_name → type_idx
func_this_anchors = {}    # func_name → type_idx
func_param_anchors = {}   # (func_name, param_idx) → type_idx

for fname, finfo in func_entries.items():
    ret_idx = anchor_type_to_idx(finfo.get('ret_type', ''))
    if ret_idx is not None:
        func_return_anchors[fname] = ret_idx

    for pi, param in enumerate(finfo.get('params', [])):
        pname = param.get('name', '')
        ptype_idx = anchor_type_to_idx(param.get('type', ''))
        if ptype_idx is None:
            continue
        if pname == 'this':
            func_this_anchors[fname] = ptype_idx
        else:
            # Try paramN naming
            if re.match(r'^param\d+$', pname):
                num = int(pname[5:])
                func_param_anchors[(fname, num)] = ptype_idx
            else:
                func_param_anchors[(fname, pi)] = ptype_idx

# 3d. vtable_signatures.json → already handled inline later

print(f"  Member anchors: {len(member_anchor_map)}", flush=True)
print(f"  Global anchors: {len(global_anchor_map)}", flush=True)
print(f"  Return anchors: {len(func_return_anchors)}", flush=True)
print(f"  This anchors: {len(func_this_anchors)}", flush=True)
print(f"  Param anchors: {len(func_param_anchors)}", flush=True)


# ============================================================================
# 4. Match anchors to constraint variables
# ============================================================================
print("Matching anchors to variables...", flush=True)

# Collect all variable names from the constraint graph
all_vars_in_graph = set()
for c in constraints:
    for key in ('from', 'to'):
        v = c.get(key, '')
        if v:
            all_vars_in_graph.add(v)

# anchor_var_constraints: var_name → set of type_idx (from anchors)
anchor_var_constraints = defaultdict(set)

# Keep both conflict-free and conflict variables
def add_anchor(var_name, type_idx):
    anchor_var_constraints[var_name].add(type_idx)


# --- 4a. Member types: .this.member(0xOFFSET) ---
# Pattern: ClassName::MethodName.this.member(0xHEX)
# Alternative: ClassName.this.member(0xHEX)
member_re = re.compile(r'^(.*?)\.this\.member\(0x([0-9a-fA-F]+)\)$')
for var in all_vars_in_graph:
    m = member_re.match(var)
    if not m:
        continue
    prefix = m.group(1)  # e.g. "Class::Method" or just "Class"
    offset = int(m.group(2), 16)

    # Strategy: extract class name (part before first ::)
    cls_name = prefix.split('::')[0] if '::' in prefix else prefix

    # Try keys in priority order:
    # 1. ClassName+OFFSET (direct class member)
    # 2. Full prefix+OFFSET (method-specific, e.g. Class_Method+OFFSET)
    candidates = [
        (cls_name, offset),
    ]
    # Also try replacing :: with _ for method-specific
    if '::' in prefix:
        candidates.append((prefix.replace('::', '_'), offset))

    for key in candidates:
        if key in member_anchor_map:
            add_anchor(var, member_anchor_map[key])
            break


# --- 4b. Global types: dword_ADDR / byte_ADDR / word_ADDR ---
for var in all_vars_in_graph:
    for prefix in ('dword_', 'byte_', 'word_'):
        if var.startswith(prefix):
            addr_hex = '0x' + var[len(prefix):]
            if addr_hex in global_anchor_map:
                add_anchor(var, global_anchor_map[addr_hex])
            break


# --- 4c. Function return types: FuncName.return ---
for var in all_vars_in_graph:
    if var.endswith('.return'):
        fname = var[:-7]  # strip '.return'
        if fname in func_return_anchors:
            add_anchor(var, func_return_anchors[fname])


# --- 4d. Function this types: FuncName::Method::this ---
this_re = re.compile(r'^(.+?)::this$')
for var in all_vars_in_graph:
    m = this_re.match(var)
    if m:
        func_name = m.group(1)
        if func_name in func_this_anchors:
            add_anchor(var, func_this_anchors[func_name])


# --- 4e. Function param types: FuncName::paramN ---
param_re = re.compile(r'^(.+?)::param(\d+)$')
for var in all_vars_in_graph:
    m = param_re.match(var)
    if m:
        func_name = m.group(1)
        param_idx = int(m.group(2))
        key = (func_name, param_idx)
        if key in func_param_anchors:
            add_anchor(var, func_param_anchors[key])


# --- 4f. Detect anchor conflicts ---
conflict_vars = set()
for var, type_set in anchor_var_constraints.items():
    if len(type_set) > 1:
        conflict_vars.add(var)

for v in conflict_vars:
    del anchor_var_constraints[v]

print(f"  Anchored variables: {len(anchor_var_constraints)}", flush=True)
print(f"  Conflict variables: {len(conflict_vars)}", flush=True)

# ============================================================================
# 5. Build class hierarchy and compatibility matrix
# ============================================================================
print("Building class hierarchy...", flush=True)

parent_of = {}
for cls_name in class_names:
    parent_name = class_data[cls_name].get('parent')
    if parent_name and parent_name in type_to_idx:
        parent_of[type_to_idx[cls_name]] = type_to_idx[parent_name]

class_start = 2
class_end = K

# descendant[i][j] = True if type i is a subclass of type j (or same)
descendant = [[False] * K for _ in range(K)]
for i in range(K):
    descendant[i][i] = True

for cls_idx in range(class_start, class_end):
    cur = cls_idx
    while cur is not None:
        descendant[cls_idx][cur] = True
        cur = parent_of.get(cur)

# compatibility: i compatible with j if one is subclass of the other
compat = [[False] * K for _ in range(K)]
for i in range(K):
    for j in range(K):
        if i == j or (i >= 2 and j >= 2 and (descendant[i][j] or descendant[j][i])):
            compat[i][j] = True

compat_list = [[j for j in range(K) if compat[i][j]] for i in range(K)]
print(f"  Compatibility pairs: {sum(len(cl) for cl in compat_list)}", flush=True)


# ============================================================================
# 5b. THISCALL constraints: restrict source variables of ::this CALL_ARG edges
# ============================================================================
# For every CALL_ARG where dest is "ClassName::Method::this":
#   the source register/stack variable must be a subclass of (or equal to) ClassName.
#   Multiple thiscall constraints on same source → intersection of descendant sets.
#   Orphan classes (no place in class hierarchy) are excluded.
print("Building thiscall constraints...", flush=True)

thiscall_dest_re = re.compile(r'^(.+?)::([^:]+)::this$')
thiscall_source_classes = defaultdict(set)  # source_var → set of class_name strings

# Identify which classes are in the AbstractClass hierarchy (not orphans)
ABSTRACT_IDX = type_to_idx.get('AbstractClass', -1)
hierarchy_classes = set()
if ABSTRACT_IDX >= 0:
    for cls_idx in range(2, K):
        if descendant[cls_idx][ABSTRACT_IDX]:
            hierarchy_classes.add(cls_idx)
print(f"  Classes in AbstractClass hierarchy: {len(hierarchy_classes)} / {K-2}", flush=True)

for c in constraints:
    if c.get('type') != 'CALL_ARG':
        continue
    dest = c.get('to', '')
    src = c.get('from', '')
    m = thiscall_dest_re.match(dest)
    if not m:
        continue
    class_name = m.group(1)
    if class_name not in type_to_idx:
        continue
    cls_idx = type_to_idx[class_name]
    # Only constrain classes in the AbstractClass hierarchy
    if cls_idx not in hierarchy_classes:
        continue
    if src in all_vars_in_graph:
        thiscall_source_classes[src].add(class_name)

total_thiscall_edges = sum(len(v) for v in thiscall_source_classes.values())
print(f"  CALL_ARG ::this edges (hierarchy only): {total_thiscall_edges}", flush=True)
print(f"  Unique source variables: {len(thiscall_source_classes)}", flush=True)

# Build domain restrictions using compat (common ancestor semantics as task specifies)
# compat[t][cls] = True if t is ancestor, descendant, or same as cls
# Intersection over multiple classes: types compatible with ALL → common ancestor chain
this_added = 0
this_intersected = 0
this_conflict = 0
this_skipped_empty = 0
this_skipped_broad = 0

for src, cls_names in thiscall_source_classes.items():
    # Build the set of types compatible with ALL required classes
    # domain = intersection over cls of {t | compat[t][cls]}
    # Since compat is symmetric for classes, compat_list[cls_idx] works
    domain = set(range(K))
    for cn in cls_names:
        cls_idx = type_to_idx[cn]
        domain &= set(compat_list[cls_idx])

    if len(domain) == 0:
        this_skipped_empty += 1
        continue

    # If domain is all types (K) → no narrowing, skip
    if len(domain) == K:
        this_skipped_broad += 1
        continue

    if src in anchor_var_constraints:
        # Intersect with existing anchor constraints
        existing = set(anchor_var_constraints[src])
        domain &= existing
        if len(domain) == 0:
            # Conflict between thiscall and existing anchors
            del anchor_var_constraints[src]
            conflict_vars.add(src)
            this_conflict += 1
            continue
        if len(domain) < len(existing):
            anchor_var_constraints[src] = list(domain)
            this_intersected += 1
    else:
        anchor_var_constraints[src] = list(domain)
        this_added += 1

print(f"  Added thiscall-only domains: {this_added}", flush=True)
print(f"  Intersected with anchors: {this_intersected}", flush=True)
print(f"  Conflicts (thiscall ∩ anchor): {this_conflict}", flush=True)
print(f"  Skipped (empty intersection): {this_skipped_empty}", flush=True)
print(f"  Skipped (too broad domain): {this_skipped_broad}", flush=True)
print(f"  Total anchored variables now: {len(anchor_var_constraints)}", flush=True)
print(f"  Total conflict variables now: {len(conflict_vars)}", flush=True)

# Print top source variables by number of thiscall constraints
top_src = sorted(thiscall_source_classes.items(), key=lambda x: len(x[1]), reverse=True)[:10]
print(f"\n  Top thiscall sources (most class intersections):", flush=True)
for src, cls_set in top_src:
    cls_sample = sorted(cls_set)[:5]
    # Show which ones got constrained
    constrained = src in anchor_var_constraints
    dom_size = len(anchor_var_constraints.get(src, []))
    print(f"    {src}: {len(cls_set)} classes e.g. {cls_sample}{'...' if len(cls_set) > 5 else ''}"
          f"  → domain={dom_size} (constrained={constrained})", flush=True)


# ============================================================================
# 6. Build variable graph and find connected components
# ============================================================================
print("Building variable graph...", flush=True)

var_to_idx = {}
adj = defaultdict(set)

for c in constraints:
    f = c['from']
    t = c['to']
    if f not in var_to_idx:
        var_to_idx[f] = len(var_to_idx)
    if t not in var_to_idx:
        var_to_idx[t] = len(var_to_idx)
    fi, ti = var_to_idx[f], var_to_idx[t]
    adj[fi].add(ti)
    adj[ti].add(fi)

N = len(var_to_idx)
idx_to_var = {i: v for v, i in var_to_idx.items()}
print(f"  Variables: {N}, Edges: {sum(len(v) for v in adj.values()) // 2}", flush=True)

# Find components via BFS
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
size_dist = Counter(len(c) for c in components)
print(f"  Components: {len(components)}", flush=True)
for sz, cnt in sorted(size_dist.items(), reverse=True)[:10]:
    print(f"    size={sz}: {cnt}", flush=True)


# ============================================================================
# 7. Build restricted domains for components (anchors + vtable)
# ============================================================================
# vtable slot constraints
VALID_CLASS_RE = re.compile(r'^[A-Z][A-Za-z0-9_]*$')
slot_to_class_indices = defaultdict(set)
for sig_key, sig in vtable_sigs.get('signatures', {}).items():
    slot = sig['slot']
    func_name = sig.get('func_name', '')
    if '::' in func_name:
        cls = func_name.split('::')[0]
        if VALID_CLASS_RE.match(cls) and cls in type_to_idx:
            slot_to_class_indices[slot].add(type_to_idx[cls])

constrained_slots = {}
for slot, cls_set in slot_to_class_indices.items():
    if 1 <= len(cls_set) <= 10:
        constrained_slots[slot] = cls_set

def build_compat_closure(constraint_set):
    result = []
    for t in range(K):
        for c in constraint_set:
            if compat[t][c]:
                result.append(t)
                break
    return result

slot_allowed_types = {}
for slot, cls_set in constrained_slots.items():
    slot_allowed_types[slot] = build_compat_closure(cls_set)

def compute_restricted_domains(comp_nodes):
    """Build restricted_domains dict for a component from anchors and vtable."""
    restricted = {}
    for local_i, global_idx in enumerate(comp_nodes):
        var_name = idx_to_var.get(global_idx, '')

        # Anchor constraint
        if var_name in anchor_var_constraints:
            restricted[local_i] = list(anchor_var_constraints[var_name])
            continue

        # Vtable slot constraint
        if 'vtable_slot' in var_name:
            for c in constraints:
                if c.get('type') == 'CALL_VTABLE' and c.get('to') == var_name:
                    slot_num = c.get('vtable_slot')
                    if slot_num is not None and slot_num in slot_allowed_types:
                        restricted[local_i] = slot_allowed_types[slot_num]
                    break

    return restricted


# ============================================================================
# 8. Graph utilities
# ============================================================================
def build_subgraph(comp_nodes):
    node_set = set(comp_nodes)
    n = len(comp_nodes)
    local = {v: i for i, v in enumerate(comp_nodes)}
    sub_adj = [[] for _ in range(n)]
    for i, v in enumerate(comp_nodes):
        for nb in adj[v]:
            if nb in node_set:
                sub_adj[i].append(local[nb])
    return comp_nodes, sub_adj

def find_spanning_tree(sub_adj):
    n = len(sub_adj)
    parent = [-1] * n
    children = [[] for _ in range(n)]
    visited = [False] * n
    cycle_edges = []

    for root in range(n):
        if visited[root]:
            continue
        q = [root]
        q_head = 0
        visited[root] = True
        while q_head < len(q):
            v = q[q_head]
            q_head += 1
            for nb in sub_adj[v]:
                if not visited[nb]:
                    visited[nb] = True
                    parent[nb] = v
                    children[v].append(nb)
                    q.append(nb)
                elif nb != parent[v] and v < nb:
                    cycle_edges.append((v, nb))
    return parent, children, cycle_edges


# ============================================================================
# 9. Tree DP with assignment extraction
# ============================================================================
def tree_dp_with_assign(sub_adj, parent, children, restricted_domains=None):
    """Returns (assignment_dict, valid) where assignment_dict maps local_idx → type_idx."""
    n = len(sub_adj)
    dp = [None] * n  # dp[v][t] = num_solutions for subtree rooted at v with v assigned t
    best_child_type = [None] * n  # best_child_type[v][parent_t][child] = valid child type

    # Post-order traversal
    order = []
    stack = [(0, 0)]
    while stack:
        v, state = stack.pop()
        if state == 0:
            stack.append((v, 1))
            for child in reversed(children[v]):
                stack.append((child, 0))
        else:
            order.append(v)

    for v in order:
        dp_v = [0] * K
        bct_v = {}  # parent_t → {child_idx → child_t}

        domain = restricted_domains.get(v) if restricted_domains else None

        if not children[v]:
            if domain is not None:
                for t in domain:
                    dp_v[t] = 1
            else:
                dp_v = [1] * K
        else:
            # Precompute for each child: child_sums[child_idx][parent_t] = sum over compat child types
            child_sums = []
            for child in children[v]:
                dp_c = dp[child]
                cs = [0] * K
                for pt in range(K):
                    total = 0
                    for ct in compat_list[pt]:
                        total += dp_c[ct]
                    cs[pt] = total
                child_sums.append(cs)

            domain_iter = domain if domain is not None else range(K)
            for pt in domain_iter:
                prod = 1
                ok = True
                child_choices = {}
                for ci, cs in enumerate(child_sums):
                    vv = cs[pt]
                    if vv == 0:
                        ok = False
                        break
                    prod *= vv
                    # Find first valid child type for backtracking
                    child = children[v][ci]
                    for ct in compat_list[pt]:
                        if dp[child][ct] > 0:
                            child_choices[child] = ct
                            break
                if ok:
                    dp_v[pt] = prod
                    bct_v[pt] = child_choices

        dp[v] = dp_v
        best_child_type[v] = bct_v

    # Extract assignment
    assignment = {}

    def assign_subtree(v, forced_type=None):
        if forced_type is None:
            # Pick first valid type
            domain = restricted_domains.get(v) if restricted_domains else None
            dom = domain if domain else range(K)
            chosen = None
            for t in dom:
                if dp[v][t] > 0:
                    chosen = t
                    break
            if chosen is None:
                return False
        else:
            chosen = forced_type
        assignment[v] = chosen

        bct = best_child_type[v]
        for child in children[v]:
            child_type = None
            if chosen in bct and child in bct[chosen]:
                child_type = bct[chosen][child]
            if child_type is None:
                # Fallback: find any valid type for child compatible with parent
                for ct in compat_list[chosen]:
                    if dp[child][ct] > 0:
                        child_type = ct
                        break
            if child_type is None:
                return False
            if not assign_subtree(child, child_type):
                return False
        return True

    ok = assign_subtree(0)
    if not ok:
        return {}, False

    # Ensure all nodes have an assignment
    for v in range(n):
        if v not in assignment:
            domain = restricted_domains.get(v) if restricted_domains else None
            dom = domain if domain else range(K)
            for t in dom:
                if dp[v][t] > 0:
                    assignment[v] = t
                    break
            else:
                assignment[v] = 0  # fallback to INT

    return assignment, True


# ============================================================================
# 10. Cycle enumeration - find first valid assignment
# ============================================================================
def cycle_enum_first(comp_nodes, sub_adj, parent, children, cycle_edges, restricted_domains=None):
    """Find first valid assignment for a cyclic component. Returns (assignment, valid)."""
    n = len(comp_nodes)

    # Identify cycle nodes
    cycle_nodes_set = set()
    for u, v in cycle_edges:
        cycle_nodes_set.add(u)
        cycle_nodes_set.add(v)
    cycle_nodes = sorted(cycle_nodes_set)
    c = len(cycle_nodes)

    # DP for hanging subtrees
    hanging = {}
    for cn in cycle_nodes:
        for ch in children[cn]:
            if ch not in cycle_nodes_set:
                # Subtree rooted at ch, parent is cn
                # Need DP for the subtree
                sub_nodes = set()

                def collect_subtree(node, parent_node):
                    sub_nodes.add(node)
                    for child in children[node]:
                        if child != parent_node and child not in cycle_nodes_set:
                            collect_subtree(child, node)

                collect_subtree(ch, cn)

                # Build sub-DP for this tree
                sub_list = sorted(sub_nodes)
                sub_to_local = {v: i for i, v in enumerate(sub_list)}
                local_to_sub = {i: v for i, v in enumerate(sub_list)}
                m = len(sub_list)

                # Build sub_adj for this subtree
                sub_adj_tree = [[] for _ in range(m)]
                for v in sub_list:
                    for nb in sub_adj[v]:
                        if nb in sub_to_local and sub_to_local[nb] != sub_to_local.get(parent.get(v, -1), -1):
                            sub_adj_tree[sub_to_local[v]].append(sub_to_local[nb])

                sub_parent = [-1] * m
                sub_children = [[] for _ in range(m)]
                # Root: find the node that connects to the cycle
                root_local = sub_to_local[ch]
                sub_parent[root_local] = -1

                def sub_bfs(root_li):
                    sq = [root_li]
                    sq_head = 0
                    visited = {root_li}
                    while sq_head < len(sq):
                        cv = sq[sq_head]
                        sq_head += 1
                        for nb in sub_adj_tree[cv]:
                            if nb not in visited:
                                visited.add(nb)
                                sub_parent[nb] = cv
                                sub_children[cv].append(nb)
                                sq.append(nb)

                sub_bfs(root_local)

                # Restricted domains for subtree
                sub_restricted = {}
                for li in range(m):
                    gi = local_to_sub[li]
                    if gi in restricted_domains:
                        sub_restricted[li] = restricted_domains[gi]

                dp_sub = tree_dp_full(sub_adj_tree, sub_parent, sub_children, sub_restricted if sub_restricted else None)

                # Compatibility factors for each cn type
                h = [0] * K
                for pt in range(K):
                    total = 0
                    for ct in compat_list[pt]:
                        total += dp_sub[root_local][ct]
                    h[pt] = total
                hanging[(cn, ch)] = h

    # Enumerate cycle node types
    assignment = {}
    found = [False]

    def enum_cycle(pos):
        if found[0]:
            return
        if pos == c:
            valid = True
            for u, v in cycle_edges:
                if not compat[assignment[u]][assignment[v]]:
                    valid = False
                    break
            if valid:
                # Check hanging subtrees
                for cn in cycle_nodes:
                    for ch in children[cn]:
                        key = (cn, ch)
                        if key in hanging:
                            if hanging[key][assignment[cn]] == 0:
                                valid = False
                                break
                    if not valid:
                        break
            if valid:
                found[0] = True
            return

        node = cycle_nodes[pos]
        domain = restricted_domains.get(node) if restricted_domains else None
        domain_iter = domain if domain is not None else range(K)
        for t in domain_iter:
            ok = True
            for u, v in cycle_edges:
                if u == node and v in assignment:
                    if not compat[t][assignment[v]]:
                        ok = False
                        break
                elif v == node and u in assignment:
                    if not compat[t][assignment[u]]:
                        ok = False
                        break
            if ok:
                assignment[node] = t
                enum_cycle(pos + 1)
                if found[0]:
                    return
                del assignment[node]

    enum_cycle(0)

    if not found[0]:
        return {}, False

    # Assign hanging subtrees
    for cn in cycle_nodes:
        if cn not in assignment:
            return {}, False
        cn_type = assignment[cn]
        for ch in children[cn]:
            if ch not in cycle_nodes_set:
                # Assign subtree
                sub_assign, _ = tree_dp_with_assign(sub_adj, parent, children, restricted_domains)
                # Just pick first valid child type
                for ct in compat_list[cn_type]:
                    if dp[ch] and dp[ch][ct] > 0:
                        sub_assign, ok = tree_dp_with_assign(sub_adj, parent, children, restricted_domains)
                        if ok and ch in sub_assign:
                            # Merge subtree assignments
                            for v, t in sub_assign.items():
                                if v not in assignment:
                                    assignment[v] = t
                        break

    # Ensure all nodes have assignment
    for v in range(n):
        if v not in assignment:
            dom = restricted_domains.get(v) if restricted_domains else None
            domain = dom if dom else range(K)
            for t in domain:
                assignment[v] = t
                break
            else:
                assignment[v] = 0

    return assignment, True


def tree_dp_full(sub_adj, parent, children, restricted_domains=None):
    """Tree DP that returns dp array (for count-only, used by cycle enum)."""
    n = len(sub_adj)
    dp = [None] * n

    order = []
    stack = [(0, 0)]
    while stack:
        v, state = stack.pop()
        if state == 0:
            stack.append((v, 1))
            for child in reversed(children[v]):
                stack.append((child, 0))
        else:
            order.append(v)

    for v in order:
        dp_v = [0] * K
        domain = restricted_domains.get(v) if restricted_domains else None

        if not children[v]:
            if domain is not None:
                for t in domain:
                    dp_v[t] = 1
            else:
                dp_v = [1] * K
        else:
            child_sums = []
            for child in children[v]:
                dp_c = dp[child]
                cs = [0] * K
                for pt in range(K):
                    total = 0
                    for ct in compat_list[pt]:
                        total += dp_c[ct]
                    cs[pt] = total
                child_sums.append(cs)

            domain_iter = domain if domain is not None else range(K)
            for pt in domain_iter:
                prod = 1
                ok = True
                for cs in child_sums:
                    vv = cs[pt]
                    if vv == 0:
                        ok = False
                        break
                    prod *= vv
                dp_v[pt] = prod if ok else 0

        dp[v] = dp_v
    return dp


# ============================================================================
# 11. Main loop: find one assignment per component
# ============================================================================
print("\nFinding one assignment per component...", flush=True)

MAX_SMALL = 20
MAX_CYCLE_ENUM = 3

all_assignments = {}  # var_name → type_name
conflicts = 0
large_comps = 0
small_valid = 0
unresolved_comps = []  # component indices that are large
method_stats = Counter()

for idx, comp in enumerate(components):
    n = len(comp)
    comp_nodes, sub_adj = build_subgraph(comp)

    # Restricted domains
    restricted_domains = compute_restricted_domains(comp_nodes)

    # Check if any node in this component has conflicting anchors
    has_conflict = False
    for local_i, global_idx in enumerate(comp_nodes):
        var_name = idx_to_var.get(global_idx, '')
        if var_name in conflict_vars:
            has_conflict = True
            break

    # Check if any anchor-restricted domain is empty (incompatible with all types)
    if not has_conflict:
        for local_i, domain in restricted_domains.items():
            if len(domain) == 0:
                has_conflict = True
                break

    if has_conflict:
        conflicts += 1
        method_stats['conflict'] += 1
        continue

    # Too large
    if n > MAX_SMALL:
        large_comps += 1
        method_stats['large'] += 1
        unresolved_comps.append(idx)
        # Assign VOID_PTR to all variables
        for global_idx in comp_nodes:
            var_name = idx_to_var.get(global_idx, '')
            if var_name:
                all_assignments[var_name] = "void*"
        continue

    parent, children, cyc = find_spanning_tree(sub_adj)

    if n == 1:
        # Single variable
        dom = restricted_domains.get(0)
        if dom:
            all_assignments[idx_to_var[comp_nodes[0]]] = idx_to_type[dom[0]]
        else:
            all_assignments[idx_to_var[comp_nodes[0]]] = INT
        small_valid += 1
        method_stats['single'] += 1
        continue

    if not cyc:
        # Tree
        assign, ok = tree_dp_with_assign(sub_adj, parent, children, restricted_domains if restricted_domains else None)
        if ok and len(assign) == n:
            for local_i, type_i in assign.items():
                var_name = idx_to_var[comp_nodes[local_i]]
                all_assignments[var_name] = idx_to_type[type_i]
            small_valid += 1
            method_stats['tree'] += 1
        else:
            conflicts += 1
            method_stats['tree_conflict'] += 1
        continue

    if len(cyc) > MAX_CYCLE_ENUM:
        # Complex cycles → treat as unresolved
        large_comps += 1
        method_stats['complex_cycle'] += 1
        for global_idx in comp_nodes:
            var_name = idx_to_var.get(global_idx, '')
            if var_name:
                all_assignments[var_name] = "void*"
        continue

    # Enumeration for cyclic components
    assign, ok = cycle_enum_first(comp_nodes, sub_adj, parent, children, cyc, restricted_domains if restricted_domains else None)
    if ok and len(assign) == n:
        for local_i, type_i in assign.items():
            var_name = idx_to_var[comp_nodes[local_i]]
            all_assignments[var_name] = idx_to_type[type_i]
        small_valid += 1
        method_stats['cycle'] += 1
    else:
        conflicts += 1
        method_stats['cycle_conflict'] += 1

t1 = time.time()

# ============================================================================
# 12. Summary
# ============================================================================
total_resolved = small_valid
total_conflict = conflicts
total_large = large_comps
total_components = len(components)

print(f"\n{'='*60}")
print(f"SUMMARY")
print(f"{'='*60}")
print(f"Components: {total_components}")
print(f"  Resolved (>0 solutions): {total_resolved}")
print(f"  Conflict (0 solutions): {total_conflict}")
print(f"  Large/unresolved (void*): {total_large}")
print(f"")
print(f"Method breakdown: {dict(method_stats)}")
print(f"")
print(f"Variables assigned: {len(all_assignments)}")
print(f"  - specific types: {sum(1 for v in all_assignments.values() if v != 'void*')}")
print(f"  - void* (unresolved): {sum(1 for v in all_assignments.values() if v == 'void*')}")

# ============================================================================
# 13. Write output
# ============================================================================
print(f"\nWriting tools/solution_assignment.json...", flush=True)

output = {
    "components": total_components,
    "conflicts": total_conflict,
    "large_unresolved": total_large,
    "resolved": total_resolved,
    "assignments": all_assignments
}

with open('tools/solution_assignment.json', 'w') as f:
    json.dump(output, f, indent=2)

fsize = len(json.dumps(output))
print(f"  Written {fsize} bytes", flush=True)
print(f"\nTime: {t1 - t0:.1f}s")
print(f"\nDone.")
