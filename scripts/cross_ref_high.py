import json

with open('D:/RA2YR_ReSource/scripts/ida_class_coverage.json') as f:
    data = json.load(f)

defined_names = {d['ida_name'] for d in data['DEFINED']}
defined_names |= {d['ida_name'] for d in data.get('FORWARD_ONLY', [])}
defined_names |= {d['ida_name'] for d in data.get('TEMPLATE', [])}
defined_names |= {d['ida_name'] for d in data.get('LIKELY_MODULE', [])}

overrides = {
    'SuperWeapon': 'SuperClass (super_weapon.hpp)',
    'BinkMovie': 'BinkMovieHandle (movie.hpp)',
    'Movie': 'MoviePlayer (movie.hpp)',
}

high = [m for m in data['MISSING'] if m.get('priority') == 'HIGH']
high.sort(key=lambda x: -x['method_count'])

skip = 0
need_create = []
for m in high:
    name = m['ida_name']
    if name in overrides:
        print(f"SKIP: {name:30s} ({m['method_count']:2d} methods) -> {overrides[name]}")
        skip += 1
    elif name in defined_names:
        print(f"SKIP: {name:30s} ({m['method_count']:2d} methods) -> already defined")
        skip += 1
    else:
        need_create.append(m)

print(f"\n=== SKIP: {skip}, CREATE: {len(need_create)} ===")
for m in need_create:
    refs = m.get('referenced_in_code', [])
    ref_str = refs[0] if refs else 'none'
    print(f"  {m['ida_name']:40s} methods={m['method_count']:2d} | ref={ref_str}")
