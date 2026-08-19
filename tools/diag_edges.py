import json, random

with open('tools/type_infer/constraints/raw_constraints.json') as f:
    c = json.load(f)
constraints = c['constraints']

# Build variable -> edge count
var_edges = {}
for x in constraints:
    frm = x.get('from', '')
    to = x.get('to', '')
    var_edges[frm] = var_edges.get(frm, 0) + 1
    var_edges[to] = var_edges.get(to, 0) + 1

print(f"Total unique vars: {len(var_edges)}")

# Show 5 random variables with >= 3 edges
vars_w_edges = [v for v, cnt in var_edges.items() if cnt >= 3]
print(f"Vars with >=3 edges: {len(vars_w_edges)}")

random.seed(42)
samples = random.sample(vars_w_edges, min(5, len(vars_w_edges)))
for name in samples:
    print(f"\n=== {name[:80]} ({var_edges[name]} edges) ===")
    for x in constraints:
        if name in (x.get('from', ''), x.get('to', '')):
            frm = x.get('from', '')[:50]
            typ = x.get('type', '?')
            to = x.get('to', '')[:40]
            print(f"  {frm:50s} --{typ:12s}--> {to}")
    print()

# Now show a variable from a sub_ function with edges
print("\n=== EXAMPLE: sub_ function with params but no callers ===")
for x in constraints:
    if 'sub_40C5C0' in str(x.get('from', '')):
        frm = x.get('from', '')[:60]
        typ = x.get('type', '?')
        to = x.get('to', '')[:40]
        print(f"  {frm:60s} --{typ:12s}--> {to}")

# Check if sub_40C5C0 has ANY callers
callers = [x for x in constraints if 'sub_40C5C0' in str(x.get('to', ''))]
print(f"\nCallers of sub_40C5C0: {len(callers)}")
if not callers:
    print("--> COMPLETELY ISOLATED: has params but nobody calls it")
