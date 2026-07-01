import json
import re
from collections import defaultdict

MEM_PATTERN = re.compile(r'([\w:]+)\.this\.member\(0x([0-9a-fA-F]+)\)')

def load_json(path):
    with open(path) as f:
        return json.load(f)

def extract_profiles():
    print("Loading constraints...")
    raw = load_json('tools/type_infer/constraints/raw_constraints.json')
    constraints = raw['constraints']
    call_graph_data = load_json('tools/type_infer/constraints/call_graph.json')
    call_graph = call_graph_data['graph']  # addr -> [{to, type}, ...]

    print(f"Total constraints: {len(constraints)}")
    print(f"Call graph entries: {len(call_graph)}")

    # 1. Build function name <-> address mapping from FUNC_PARAM with ::this
    func_name_to_addr = {}
    func_addr_to_name = {}
    for c in constraints:
        if c['type'] == 'FUNC_PARAM' and '::this' in str(c.get('from', '')):
            name = c['from'].replace('::this', '')
            addr = c['addr']
            func_name_to_addr[name] = addr
            func_addr_to_name[addr] = name

    # Sort function start addresses for binary search
    sorted_func_starts = sorted(
        (int(addr, 16), name) for name, addr in func_name_to_addr.items()
    )
    sorted_addrs = [a for a, _ in sorted_func_starts]
    sorted_names = [n for _, n in sorted_func_starts]

    print(f"Functions with ::this: {len(func_name_to_addr)}")

    def find_func(inst_addr_int):
        """Find containing function name for an instruction address."""
        if not sorted_addrs:
            return None
        if inst_addr_int < sorted_addrs[0]:
            return None
        # Binary search for the last start <= inst_addr
        lo, hi = 0, len(sorted_addrs) - 1
        while lo <= hi:
            mid = (lo + hi) // 2
            if sorted_addrs[mid] <= inst_addr_int:
                lo = mid + 1
            else:
                hi = mid - 1
        # hi is the last index with start <= inst_addr
        if hi >= 0:
            return sorted_names[hi]
        return None

    # 2. Extract member offsets from constraint variables
    print("Extracting member offsets...")
    func_members = defaultdict(set)  # func_name -> set of int offsets

    for c in constraints:
        for field in ['from', 'to']:
            val = str(c.get(field, ''))
            for match in MEM_PATTERN.finditer(val):
                func_name = match.group(1)
                offset = int(match.group(2), 16)
                func_members[func_name].add(offset)

    print(f"Functions with member accesses: {len(func_members)}")

    # 3. Extract vtable slots and direct calls per function
    print("Extracting vtable slots and direct calls...")
    func_vtable = defaultdict(set)   # func_name -> set of vtable slot ints
    func_calls = defaultdict(set)     # func_name -> set of callee names/addresses

    # Process CALL_VTABLE constraints
    vtable_count = 0
    for c in constraints:
        if c['type'] == 'CALL_VTABLE':
            inst_addr = int(c['addr'], 16)
            func_name = find_func(inst_addr)
            if func_name:
                slot = c.get('vtable_slot')
                if slot is not None:
                    func_vtable[func_name].add(int(slot))
                vtable_count += 1

    print(f"CALL_VTABLE edges mapped to functions: {vtable_count}")

    # Process CALL constraints
    call_count = 0
    for c in constraints:
        if c['type'] == 'CALL':
            inst_addr = int(c['addr'], 16)
            func_name = find_func(inst_addr)
            if func_name:
                # Use callee_name if available, otherwise use address
                callee = c.get('callee_name', c['to'])
                func_calls[func_name].add(callee)
                call_count += 1

    print(f"CALL edges mapped to functions: {call_count}")

    # 4. Build the function_profiles output
    all_func_names = set()
    all_func_names.update(func_members.keys())
    all_func_names.update(func_vtable.keys())
    all_func_names.update(func_calls.keys())
    # Also include functions from FUNC_PARAM that have no other data
    all_func_names.update(func_name_to_addr.keys())

    print(f"Total functions in profiles: {len(all_func_names)}")

    profiles = {}
    for func_name in sorted(all_func_names):
        profiles[func_name] = {
            "members": sorted(func_members.get(func_name, [])),
            "vtable_slots": sorted(func_vtable.get(func_name, [])),
            "calls": sorted(func_calls.get(func_name, [])),
            "addr": func_name_to_addr.get(func_name, "")
        }

    output_path = 'tools/type_infer/function_profiles.json'
    with open(output_path, 'w') as f:
        json.dump(profiles, f, indent=2)

    print(f"\nOutput: {output_path}")
    print(f"Profiles written: {len(profiles)}")
    print(f"  With members: {sum(1 for p in profiles.values() if p['members'])}")
    print(f"  With vtable_slots: {sum(1 for p in profiles.values() if p['vtable_slots'])}")
    print(f"  With calls: {sum(1 for p in profiles.values() if p['calls'])}")
    return profiles

if __name__ == '__main__':
    extract_profiles()
