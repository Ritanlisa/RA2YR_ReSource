# IDA Python: batch rename sub_* functions — v3 (caller-context only, no decompile)
import idautils, ida_funcs, ida_name, ida_hexrays, ida_bytes, re, sys

DRY_RUN = False
LIMIT = 0
renamed = 0; skipped = 0; errors = 0

def get_refined_callers(ea):
    """Get callers that are not sub_* or j_*."""
    ns = []
    for x in idautils.XrefsTo(ea):
        if x.iscode:
            n = ida_funcs.get_func_name(x.frm)
            if n and not n.startswith('sub_') and not n.startswith('j_'):
                ns.append(n)
    return ns

def get_callees(ea):
    ns = []
    f = ida_funcs.get_func(ea)
    if not f: return ns
    for h in idautils.Heads(f.start_ea, f.end_ea):
        if ida_bytes.is_code(ida_bytes.get_flags(h)):
            for x in idautils.XrefsFrom(h):
                if x.iscode:
                    n = ida_funcs.get_func_name(x.to)
                    if n and not n.startswith('sub_'):
                        ns.append(n)
    return list(set(ns))

VERBS = {
    'Init':'Init','Construct':'Create','Destruct':'Destroy',
    'Load':'Load','Save':'Save','Read':'Read','Write':'Write',
    'Get':'Get','Set':'Set','Find':'Find','Search':'Search',
    'Alloc':'Alloc','Free':'Free','Create':'Create','Delete':'Delete',
    'Add':'Add','Remove':'Remove','Insert':'Insert','Append':'Append',
    'Open':'Open','Close':'Close','Start':'Start','Stop':'Stop',
    'Process':'Process','Handle':'Handle','Update':'Update','Draw':'Draw',
    'Render':'Render','Blit':'Blit','Lock':'Lock','Unlock':'Unlock',
    'Compute':'Compute','Calc':'Calc','Check':'Check',
    'Play':'Play','Shutdown':'Cleanup','Cleanup':'Cleanup',
    'Register':'Register','Unregister':'Unregister',
    'Destroy':'Destroy','Release':'Release','Assign':'Assign',
    'Notify':'Notify','Send':'Send','Receive':'Recv',
    'Connect':'Connect','Disconnect':'Disconnect',
    'Bootstrap':'Init','Initialize':'Init',
    'Reset':'Reset','Clear':'Clear','Copy':'Copy','Move':'Move',
    'Push':'Push','Pop':'Pop','Peek':'Peek',
    'Enable':'Enable','Disable':'Disable',
    'Show':'Show','Hide':'Hide',
    'Setup':'Setup','Configure':'Config',
    'Parse':'Parse','Format':'Format',
}

DOMAINS = [
    ('Audio','audio sound mixer voc vox wave volume sample channel stream buffer_stream load_sample'),
    ('Surface','surface blit pixel bitmap dsurface bsurface xsurface fillrect lock unlock'),
    ('UI','menu dialog gadget mouse keyboard sidebar tooltip command tab button message_list'),
    ('Network','network socket winsock session modem ipx tcp udp connection proto'),
    ('Render','render display draw palette fade flip bink movie shp'),
    ('Object','infantry unit aircraft building techno foot abstract objectclass mission'),
    ('Map','map cell terrain tiberium ore overlay smudge radar tactical scenario iso'),
    ('Entity','bullet anim particle voxel tube particlesystem'),
    ('Team','trigger team script tag campaign'),
    ('House','house side housetype'),
    ('System','factory ini rules mixfile blowfish convert ccfile rawfile file filesystem'),
    ('Locomotor','locomotor drive fly hover jumpjet tunnel walk piggyback'),
    ('Memory','alloc free heap node list queue vector dlistnode linkedlist dlink'),
    ('Math','random math coord direction distance compute'),
    ('Weapon','super warhead projectile superweapon sw_'),
    ('Hash','hash crc computeid checksum'),
    ('String','string strcpy strcmp strlen sprintf format'),
    ('Event','event queue process dispatch pump'),
]

def get_domain(name):
    n = name.lower()
    for dom, kws in DOMAINS:
        for kw in kws.split():
            if kw in n: return dom
    return None

def get_verb(name):
    for k, v in sorted(VERBS.items(), key=lambda x: -len(x[0])):
        if k in name: return v
    return None

def propose(ea, sz, callers, callees):
    if not callers:
        return f"Helper_{ea:06X}", 1
    
    # Pick best caller
    best = max(callers, key=lambda c: (('::' in c) * 100 + len(c)))
    
    dom = get_domain(best)
    verb = get_verb(best)
    
    if not verb:
        for c in callees:
            verb = get_verb(c)
            if verb: break
    
    if dom and verb: n, c = f"{dom}_{verb}", 4
    elif dom: n, c = f"{dom}_Helper", 3
    elif '::' in best:
        cls = best.split('::')[0]
        n, c = f"{cls}_{verb or 'Helper'}", 3
    else:
        base = re.sub(r'[^a-zA-Z0-9_]','_', best)[:45]
        n, c = f"{base}_{verb or 'Helper'}", 2
    
    n = re.sub(r'[^a-zA-Z0-9_]','_',n)
    n = re.sub(r'_+','_',n).strip('_')
    if not n or n[0].isdigit(): n = f"F{n}"
    if n[0].islower(): n = n[0].upper()+n[1:]
    return n, c

print(f"v3 DRY_RUN={DRY_RUN} LIMIT={LIMIT}")

subs = []
for ea in idautils.Functions():
    n = ida_funcs.get_func_name(ea)
    if n.startswith('sub_') and not n.startswith('sub_4'):
        subs.append(ea)
subs.sort()
if LIMIT: subs = subs[:LIMIT]
print(f"Processing {len(subs)} sub_*")

for i, ea in enumerate(subs):
    try:
        old = ida_funcs.get_func_name(ea)
        f = ida_funcs.get_func(ea)
        if not f: continue
        sz = f.end_ea - f.start_ea
        cs = get_refined_callers(ea)
        cl = get_callees(ea)
        prop, conf = propose(ea, sz, cs, cl)
        
        if conf >= 2:
            if not DRY_RUN:
                ok = ida_name.set_name(ea, prop, ida_name.SN_NOWARN)
                if not ok:
                    ok = ida_name.set_name(ea, f"{prop}_{ea:06X}", ida_name.SN_NOWARN)
                renamed += 1 if ok else 0
                if not ok: errors += 1
            else: renamed += 1
            if renamed <= 25:
                print(f"  {old}({sz}B) -> {prop} (conf={conf})  [{', '.join(cs[:2])}]")
        else:
            skipped += 1
        if (i+1)%200 == 0:
            print(f"  [{i+1}/{len(subs)}] R={renamed} S={skipped} E={errors}")
            if not DRY_RUN:
                try: ida_hexrays.save_database()
                except: pass
    except Exception as e:
        errors += 1

print(f"\nDONE Pass 1: {len(subs)}: R={renamed} S={skipped} E={errors}")

# Pass 2: rerun on remaining sub_* — now some have been named and can serve as callers
print("\nPass 2: re-analyzing remaining sub_*...")
subs2 = []
for ea in idautils.Functions():
    n = ida_funcs.get_func_name(ea)
    if n.startswith('sub_') and not n.startswith('sub_4'):
        subs2.append(ea)
subs2.sort()
print(f"Remaining sub_*: {len(subs2)}")
r2 = 0; s2 = 0; e2 = 0

for i, ea in enumerate(subs2):
    try:
        old = ida_funcs.get_func_name(ea)
        f = ida_funcs.get_func(ea)
        if not f: continue
        sz = f.end_ea - f.start_ea
        cs = get_refined_callers(ea)
        cl = get_callees(ea)
        prop, conf = propose(ea, sz, cs, cl)
        
        if conf >= 2:
            if not DRY_RUN:
                ok = ida_name.set_name(ea, prop, ida_name.SN_NOWARN)
                if not ok:
                    ok = ida_name.set_name(ea, f"{prop}_{ea:06X}", ida_name.SN_NOWARN)
                r2 += 1 if ok else 0
                if not ok: e2 += 1
            else: r2 += 1
        else:
            s2 += 1
        if (i+1)%500 == 0:
            print(f"  Pass2 [{i+1}/{len(subs2)}] R={r2} S={s2} E={e2}")
    except: e2 += 1

print(f"Pass2 DONE: R={r2} S={s2} E={e2}")
renamed += r2; skipped = s2; errors += e2
if not DRY_RUN:
    try: ida_hexrays.save_database(); print("IDB saved")
    except: pass
