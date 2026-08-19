"""BFS call graph traversal from WinMain. 
Queues all callees, analyzes named functions, reports unnamed ones."""
import idautils, ida_funcs, ida_xref, ida_name, ida_ua

ROOT = 0x6BB9A0  # WinMain
MAX_DEPTH = 6
MAX_FUNCS = 1000

todo = [(ROOT, 0)]
done = set()
results = []

while todo and len(done) < MAX_FUNCS:
    ea, d = todo.pop(0)
    if ea in done:
        continue
    done.add(ea)
    
    func = ida_funcs.get_func(ea)
    if not func:
        continue
    
    name = ida_name.get_ea_name(ea)
    size = func.size()
    is_named = 'sub_' not in name
    
    # Get callees
    callees = []
    ea_scan = func.start_ea
    end = func.end_ea
    while ea_scan < end:
        insn = ida_ua.insn_t()
        sz = ida_ua.decode_insn(insn, ea_scan)
        if sz == 0:
            ea_scan += 1
            continue
        if insn.get_canon_mnem() == 'call':
            op = insn.ops[0]
            if op.type == ida_ua.o_near or op.type == ida_ua.o_far:
                tgt = op.addr
                if tgt and tgt != ea_scan:
                    tgt_name = ida_name.get_ea_name(tgt)
                    if tgt not in done:
                        callees.append((tgt, tgt_name))
                        if d + 1 < MAX_DEPTH:
                            todo.append((tgt, d + 1))
        ea_scan += sz
    
    results.append({
        'ea': ea, 'name': name, 'size': size, 'depth': d,
        'named': is_named, 'callee_count': len(callees),
        'callee_names': [cn[1] for cn in callees[:5]]
    })

named = [r for r in results if r['named']]
unnamed = [r for r in results if not r['named']]

print(f'Done: {len(results)} funcs ({len(named)} named, {len(unnamed)} unnamed)')
print()

# Show ALL unnamed
if unnamed:
    print('=== UNNAMED (top 40) ===')
    for r in unnamed[:40]:
        cn = ', '.join(r['callee_names'])
        print(f'  d={r["depth"]}  0x{r["ea"]:X}  {r["name"]:50s}  {r["size"]:5d}B  -> [{cn}]')

print()
print('=== NAMED by depth ===')
for r in sorted(named, key=lambda x: x['depth'])[:30]:
    print(f'  d={r["depth"]}  {r["name"]:55s}  {r["size"]}B')
