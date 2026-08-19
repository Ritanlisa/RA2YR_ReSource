"""BFS callgraph using FuncItems + decode_insn for CALL targets."""
import idautils, ida_funcs, ida_name, ida_ua

ROOT = 0x6BB9A0
MAX_TOTAL = 2000
MAX_DEPTH = 5

todo = [(ROOT, 0)]
done = set()
all_data = []

while todo and len(done) < MAX_TOTAL:
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
    
    callee_count = 0
    for head in idautils.FuncItems(ea):
        mnem = ida_ua.print_insn_mnem(head)
        if mnem == 'call':
            insn = ida_ua.insn_t()
            ida_ua.decode_insn(insn, head)
            if insn.ops[0].type == ida_ua.o_near or insn.ops[0].type == ida_ua.o_far:
                tgt = insn.ops[0].addr
                if tgt and tgt != head:
                    callee_count += 1
                    if tgt not in done and d + 1 <= MAX_DEPTH:
                        todo.append((tgt, d + 1))
    
    all_data.append((ea, name, size, d, is_named, callee_count))

unnamed = [r for r in all_data if not r[4]]
named = [r for r in all_data if r[4]]

print(f'Total: {len(all_data)}  Named: {len(named)}  Unnamed: {len(unnamed)}')
print()

for i, (ea, name, size, d, _, nc) in enumerate(unnamed[:60]):
    print(f'{i:3d}. d={d}  0x{ea:X}  {name:55s}  {size:5d}B  calls={nc}')

if len(unnamed) > 60:
    print(f'... and {len(unnamed)-60} more unnamed')

from collections import Counter
dc = Counter(r[3] for r in all_data)
ud = Counter(r[3] for r in unnamed)
print()
print('Depth | All | Unnamed')
for d in sorted(set(dc) | set(ud)):
    print(f'  d={d:1d}   {dc.get(d,0):5d}   {ud.get(d,0):5d}')

print(f'\nTodo remaining: {len(todo)}')
