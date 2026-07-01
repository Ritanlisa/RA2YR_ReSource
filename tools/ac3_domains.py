"""AC-3 arc consistency on constraint graph with anchors as hard constraints."""
import json, re, sys
from collections import defaultdict, deque

print("Loading...")
ct = json.load(open('tools/type_infer/constraints/raw_constraints.json'))['constraints']
cl = json.load(open('tools/class_layouts.json'))

type_names = ['int', 'float'] + sorted(cl.keys())
K = len(type_names)
t2i = {t: i for i, t in enumerate(type_names)}
print(f"  Types: {K}")

# Compatibility: for each type, set of compatible types
compat_with = [set() for _ in range(K)]
anc = {}
for c, info in cl.items():
    anc[c] = {c}
    p = info.get('parent')
    if p and p in cl:
        anc[c] |= anc.get(p, {p})
    anc.setdefault(c, {c})

for i in range(K):
    compat_with[i].add(i)
    if i >= 2:  # class types
        a = type_names[i]
        for j in range(2, K):
            b = type_names[j]
            if b in anc.get(a, set()) or a in anc.get(b, set()):
                compat_with[i].add(j)
print(f"  Compat pairs: {sum(len(c) for c in compat_with)}")

# Build adjacency
adj = defaultdict(set)
# Use SCOPED variable names like the engine does
_X86_REGS = {'eax','ebx','ecx','edx','esi','edi','ebp','esp','al','ah','bl','bh','cl','ch','dl','dh','ax','bx','cx','dx','si','di','bp','sp'}
_HEAP_PREFIXES = ('dword_','byte_','word_','flt_','off_','qword_','unk_')

# Load function addresses for stack scoping
cg = json.load(open('tools/type_infer/constraints/call_graph.json'))
func_addrs = set()
for edges in cg.get('graph',{}).values():
    for e in edges:
        try: func_addrs.add(int(e['to'],16))
        except: pass
func_addrs_sorted = sorted(func_addrs)

import bisect
def find_func(addr_str):
    try: a = int(addr_str,16)
    except: return None
    idx = bisect.bisect_right(func_addrs_sorted, a) - 1
    return func_addrs_sorted[idx] if idx >= 0 else None

def scope_name(name, addr):
    # Strip IDA pointer prefix (*) from register names
    clean = name.lstrip('*')
    if clean.lower() in _X86_REGS:
        return f"{addr}::{clean}"
    if clean.startswith('stack_'):
        func = find_func(addr)
        return f"0x{func:08X}::{clean}" if func else f"{addr}::{clean}"
    if any(clean.startswith(p) for p in _HEAP_PREFIXES):
        return f"{addr}::{clean}"
    return name

for x in ct:
    f = x['from']; t = x['to']
    addr = x.get('addr','0x0')
    sf = scope_name(f, addr)
    st = scope_name(t, addr)
    adj[sf].add(st); adj[st].add(sf)
print(f"  Variables: {len(adj)}, Edges: {sum(len(v) for v in adj.values())//2}")

# Initialize domains
domains = {v: set(range(K)) for v in adj}

# Apply member type anchors
mt = json.load(open('anchors/member_types.json'))
RE_M = re.compile(r'^(.+?)::.*?\.this\.member\((0x[0-9a-fA-F]+)\)')
anchored = 0
for v in list(domains.keys()):
    m = RE_M.match(v)
    if m:
        cls_name = m.group(1)
        off = int(m.group(2), 16)
        key = f"{cls_name}+{off:X}"
        if key in mt:
            t = mt[key].get('type', '')
            if t in t2i:
                domains[v] = {t2i[t]}
                anchored += 1
print(f"  Member anchors: {anchored}")

# -- Constraint anchors: NO IDA-derived types --
# Pure structural constraints:
#   1. Member offset access → restrict to classes with that member
#   2. Direct call ::this → restrict to the method's owning class (or subtype)
#   3. Vtable dispatch → restrict to classes with that vtable slot
#   4. CRT function signatures (known, not IDA-inferred)

# Apply member-type constraints from known class layouts
# (not IDA types — just the existence of member at offset)
anchored = 0
for v in list(domains.keys()):
    m = RE_M.match(v)
    if m:
        cls_name = m.group(1)
        off = int(m.group(2), 16)
        key = f"{cls_name}+{off:X}"
        if key in mt:
            t = mt[key].get('type', '')
            if t in t2i:
                domains[v] = {t2i[t]}
                anchored += 1
print(f"  Member offset constraints: {anchored}")

# CRT known signatures — override IDA's guesses for well-known functions
CRT_SIGS = {
    '__lseek_lk':      {'ret': 'int', 'params': ['int', 'int', 'int']},
    '_atexit':         {'ret': 'int', 'params': ['int']},
    '_sprintf':        {'ret': 'int', 'params': ['int', 'int']},
    '_fprintf':        {'ret': 'int', 'params': ['int', 'int']},
    '_malloc':         {'ret': 'int', 'params': ['int']},
    '_free':           {'ret': 'void', 'params': ['int']},
    '_calloc':         {'ret': 'int', 'params': ['int', 'int']},
    '_realloc':        {'ret': 'int', 'params': ['int', 'int']},
    '_memcpy':         {'ret': 'int', 'params': ['int', 'int', 'int']},
    '_memset':         {'ret': 'int', 'params': ['int', 'int', 'int']},
    '_strlen':         {'ret': 'int', 'params': ['int']},
    '_strcpy':         {'ret': 'int', 'params': ['int', 'int']},
    '_strcmp':         {'ret': 'int', 'params': ['int', 'int']},
    '_vsnprintf':      {'ret': 'int', 'params': ['int', 'int', 'int', 'int']},
    '??0Iostream_init_QAE_XZ_4': {'ret': 'void', 'params': ['int']},
}

# CRT known signatures only
fa = 0
for v in list(domains.keys()):
    for suffix in ('.return', '::this', '::param0', '::param1', '::param2', '::param3', '::param4', '::param5'):
        if v.endswith(suffix):
            fn = v[:-len(suffix)]
            t = ''
            if fn in CRT_SIGS:
                crt = CRT_SIGS[fn]
                if suffix == '.return': t = crt['ret']
                else:
                    params = crt['params']
                    idx = -1 if suffix == '::this' else (int(suffix[7:]) if suffix.startswith('::param') else -1)
                    if 0 <= idx < len(params): t = params[idx]
            if t in t2i:
                domains[v] = {t2i[t]}
                fa += 1
            break
print(f"  CRT signature anchors: {fa}")

# -- thiscall class constraints (direct calls) --
# For every CALL_ARG edge where dest is ClassName::Method::this,
# the source register (at that instruction) is the 'this' pointer.
# It must be compatible with ClassName.
thiscall_constrained = 0
for x in ct:
    if x.get('type') != 'CALL_ARG':
        continue
    to_name = x.get('to', '')
    if not to_name.endswith('::this'):
        continue
    cls_name = to_name.rsplit('::', 2)[0]
    if cls_name not in t2i:
        continue
    cls_idx = t2i[cls_name]
    
    addr = x.get('addr', '0x0')
    from_name = x.get('from', '')
    sf = scope_name(from_name, addr)
    if sf not in domains:
        continue
    
    compat_set = {cls_idx}
    for i in range(2, K):
        if type_names[i] in anc.get(cls_name, set()) or cls_name in anc.get(type_names[i], set()):
            compat_set.add(i)
    
    old_size = len(domains[sf])
    domains[sf] &= compat_set
    if len(domains[sf]) != old_size:
        thiscall_constrained += 1
        if not domains[sf]:
            print(f"  CONFLICT(thiscall): {sf[:60]} -> {to_name[:50]} → empty")
print(f"  Thiscall constraints: {thiscall_constrained} variables narrowed")

# -- vtable signature constraints --
vt = json.load(open('tools/type_infer/anchors/vtable_signatures.json'))
sigs = vt.get('signatures', {})
slot_classes = {}
for k, s in sigs.items():
    slot = s.get('slot')
    fn = s.get('func_name', '')
    cls = fn.split('::')[0] if '::' in fn else fn
    if cls and slot is not None:
        slot_classes.setdefault(slot, set()).add(cls)
print(f"  Vtable slots with class data: {len(slot_classes)}")

vtable_constrained = 0
for x in ct:
    if x.get('type') != 'CALL_VTABLE':
        continue
    slot = x.get('vtable_slot')
    reg = x.get('vtable_reg', '')
    addr = x.get('addr', '0x0')
    if slot is None or not reg:
        continue
    classes = slot_classes.get(slot, set())
    if not classes:
        continue
    # Try unscoped reg first (registers like edx/eax appear unscoped in the graph),
    # then scoped as fallback, then the from field as last resort
    sf = None
    if reg in domains:
        sf = reg
    else:
        scoped = scope_name(reg, addr)
        if scoped in domains:
            sf = scoped
        else:
            from_var = x.get('from', '')
            if from_var in domains:
                sf = from_var
    if sf is None:
        continue
    compat_set = set()
    for cls_name in classes:
        if cls_name not in t2i: continue
        ci = t2i[cls_name]
        compat_set.add(ci)
        for i in range(2, K):
            if type_names[i] in anc.get(cls_name, set()) or cls_name in anc.get(type_names[i], set()):
                compat_set.add(i)
    old_size = len(domains[sf])
    domains[sf] &= compat_set
    if len(domains[sf]) != old_size:
        vtable_constrained += 1
        if not domains[sf]:
            print(f"  CONFLICT(vtable): {sf[:50]} slot {slot} → empty")
print(f"  Vtable constraints: {vtable_constrained} variables narrowed")

# -- discriminative offset constraints (DISABLED) --
# discriminative = {}
# offset_constrained = 0
print(f"  Discriminative offset constraints: 0 (disabled)")

# AC-3: optimized with precomputed compat sets
worklist = deque()
for v in adj:
    for n in adj[v]:
        worklist.append((v, n))

iters = 0
conflicts = 0
while worklist and iters < 10_000_000:
    iters += 1
    v, n = worklist.popleft()
    
    # Check if any value in domain(v) has NO compatible value in domain(n)
    to_remove = set()
    for tv in domains[v]:
        if not (compat_with[tv] & domains[n]):
            to_remove.add(tv)
    
    if to_remove:
        domains[v] -= to_remove
        if not domains[v]:
            conflicts += 1
            if conflicts <= 5:
                print(f"  CONFLICT: {v[:60]} domain empty")
        for nn in adj[v]:
            if nn != n:
                worklist.append((nn, v))
    
    if iters % 5000000 == 0:
        uni = sum(1 for d in domains.values() if len(d) == 1)
        print(f"  ... {iters//1000000}M iters, unique={uni}", flush=True)

uniq = sum(1 for d in domains.values() if len(d) == 1)
multi = sum(1 for d in domains.values() if len(d) > 1)
empty = sum(1 for d in domains.values() if len(d) == 0)

print(f"\nRESULTS ({iters} AC-3 iterations):")
print(f"  Domain=1 (unique):    {uniq}")
print(f"  Domain>1 (ambiguous): {multi}")
print(f"  Domain=0 (conflict):  {empty}")
print(f"  Total:                {len(domains)}")
