import json

with open('tools/type_infer/constraints/raw_constraints.json') as f:
    c = json.load(f)
constraints = c['constraints']

# Count ASSIGN edges
assign_edges = [x for x in constraints if x.get('type') == 'ASSIGN']
print(f'Total ASSIGN edges: {len(assign_edges)}')

# Sample: member -> register
member_assign = [x for x in assign_edges if 'member' in str(x.get('from', ''))]
print(f'Member->register edges: {len(member_assign)}')

# Sample a few
for x in member_assign[:5]:
    frm = x.get('from', '?')
    to = x.get('to', '?')
    addr = x.get('addr', '?')
    print(f'  {frm[:80]} -> {to} @ {addr}')

print()

# Now check: are reg->reg edges connecting SCOPE names or UNSCOPE names?
reg_reg = [x for x in assign_edges if 'eax' in str(x.get('from','')) or 'ecx' in str(x.get('from',''))]
print(f'Reg->reg edges (0xADDR scoped):')
scoped = [x for x in reg_reg if '0x' in str(x.get('from',''))]
unscoped = [x for x in reg_reg if '0x' not in str(x.get('from',''))]
print(f'  Scoped from: {len(scoped)}')
print(f'  Unscoped from: {len(unscoped)}')

# Show samples of scoped vs unscoped
print('\nScoped reg->reg samples:')
for x in scoped[:3]:
    print(f'  {x.get("from","")[:60]} -> {x.get("to","")[:20]} @ {x.get("addr","")}')

print('\nUnscoped reg->reg samples:')
for x in unscoped[:3]:
    print(f'  {x.get("from","")[:60]} -> {x.get("to","")[:20]} @ {x.get("addr","")}')

print()

# Key question: does member(0xNN) -> eax have the member scoped?
print('Member scoping check:')
for x in member_assign[:3]:
    frm = x.get('from', '?')
    to = x.get('to', '?')
    has_0x_frm = '0x' in frm
    has_0x_to = '0x' in to
    print(f'  from: {frm[:60]} (scoped: {has_0x_frm})')
    print(f'  to:   {to[:40]} (scoped: {has_0x_to})')
    print()
