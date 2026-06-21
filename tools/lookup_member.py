import json, sys
from pathlib import Path

LOOKUP = Path(__file__).parent / "member_lookup.json"

def lookup(cls, offset):
    with open(LOOKUP) as f:
        data = json.load(f)
    if cls not in data:
        print(f"Class '{cls}' not found", file=sys.stderr)
        return None
    members = data[cls]
    off_str = str(offset)
    if off_str in members:
        return members[off_str]
    # Find nearest
    keys = sorted(int(k) for k in members.keys())
    prev = max((k for k in keys if k <= offset), default=None)
    nxt = min((k for k in keys if k >= offset), default=None)
    print(f"Offset {offset} (0x{offset:X}) not found in {cls}", file=sys.stderr)
    if prev is not None:
        p = members[str(prev)]
        print(f"  prev: {prev} (0x{prev:X}) = {p['name']} ({p['type']})", file=sys.stderr)
    if nxt is not None and nxt != prev:
        n = members[str(nxt)]
        print(f"  next: {nxt} (0x{nxt:X}) = {n['name']} ({n['type']})", file=sys.stderr)
    return None

if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Usage: python lookup_member.py ClassName offset")
        print("       python lookup_member.py ClassName 0xOFFSET")
        sys.exit(1)
    cls = sys.argv[1]
    off_str = sys.argv[2]
    offset = int(off_str, 16) if off_str.startswith('0x') else int(off_str)
    result = lookup(cls, offset)
    if result:
        inh = f" (inherited from {result.get('inherited_from', '')})" if 'inherited_from' in result else ''
        print(json.dumps({"name": result["name"], "type": result["type"], "class": cls}))
