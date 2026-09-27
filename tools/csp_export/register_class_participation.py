#!/usr/bin/env python3
"""Class participation registration: EVERY canon class enters the CSP data
layer with its provable constraints (or an explicit no-evidence record).

Per class without member constraints:
  1. til layout offsets (class_layouts)   -> member constraints
  2. provable vtable (rtti/ctor anchors)  -> vtable slot @0
  3. layout size only                     -> size-faithful head filler
  4. zero evidence                        -> participation record 'pending'
     (explicitly accounted; never silently absent)

Usage: python tools/csp_export/register_class_participation.py [--apply]
"""
import json
import re
import sys
import collections
from pathlib import Path
import os

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv


def J(p):
    return json.loads(Path(p).read_text(encoding='utf-8'))


mtab = J(ROOT / 'anchors/csp_canon_members.json')
mt = J(ROOT / 'anchors/member_types.json')
ml = json.loads((ROOT / 'tools/member_lookup.json').read_text(encoding='utf-8'))
layouts = J(ROOT / 'tools/class_layouts.json')
try:
    vtbl_cls = J(ROOT / 'anchors/rtti_vtable_class.json')
except Exception:
    vtbl_cls = {}
try:
    ctor_types = J(ROOT / 'anchors/ctor_types.json')
except Exception:
    ctor_types = {}

mt_by_cls = collections.Counter(k.split('+')[0] for k in mt)
sig_by_cls = collections.Counter()
cf = J(ROOT / 'tools/csp/full_report/csp_functions.json')['functions']
for a, f in cf.items():
    nm = f.get('name') or f.get('original_name') or ''
    if '::' in nm:
        sig_by_cls[nm.split('::')[0]] += 1

# provable-vtable class set: rtti_vtable_class values (class names), plus
# ctor installers
prov_vtable = set()
try:
    align = J(ROOT / 'anchors/class_name_align.json')
    r2c = align.get('rtti_to_canon', {})
except Exception:
    r2c = {}


def _canon(n):
    v = r2c.get(n)
    if isinstance(v, dict):
        return v.get('canon') or n
    if isinstance(v, list) and v:
        return v[0] or n
    if isinstance(v, str):
        return v
    return n


vts = vtbl_cls.get('vtables', vtbl_cls) if isinstance(vtbl_cls, dict) else {}
for v in (vts.values() if isinstance(vts, dict) else vts):
    if isinstance(v, dict):
        cn = v.get('class') or v.get('canon')
        if cn:
            prov_vtable.add(_canon(cn))
for k, v in (ctor_types.items() if isinstance(ctor_types, dict) else []):
    if isinstance(v, dict):
        cn = v.get('class') or v.get('canon')
        if cn:
            prov_vtable.add(_canon(cn))

added_members = 0
participation = {}
for cls, ent in sorted(mtab.items()):
    if not re.match(r'^[A-Za-z_]\w*$', cls):
        participation[cls] = {'status': 'illegal-name', 'evidence': '-'}
        continue
    has_mem = mt_by_cls.get(cls, 0)
    if has_mem:
        participation[cls] = {'status': 'registered', 'members': has_mem,
                              'signatures': sig_by_cls.get(cls, 0)}
        continue
    lay = layouts.get(cls) or {}
    offsets = lay.get('offsets') or {}
    size = lay.get('size') or 0
    reg = []
    # 1. til layout offsets -> member constraints (no member exists yet)
    for off_s, info in sorted((offsets or {}).items(),
                              key=lambda kv: int(kv[0], 0)):
        try:
            o = int(off_s, 0)
        except ValueError:
            continue
        nm = info.get('ida_name') or ('off_%X' % o)
        sz = info.get('size') or 4
        key = '%s+0x%X' % (cls, o)
        if key in mt:
            continue
        mt[key] = {'name': nm, 'type': '', 'size': sz,
                   'confidence': 'ANCHORED',
                   'evidence': 'class_layouts offsets (IDA til export, G34 participation)'}
        ml.setdefault(cls, {})[str(o)] = {
            'name': nm, 'type': '', 'size': sz,
            'src': 'class_layouts offsets (G34 participation)'}
        reg.append(o)
        added_members += 1
    # 2. provable vtable
    if not reg and cls in prov_vtable:
        key = '%s+0x0' % cls
        if key not in mt:
            mt[key] = {'name': 'vtable1', 'type': 'void*', 'size': 4,
                       'confidence': 'ANCHORED',
                       'evidence': 'rtti/ctor vtable proof (G34 participation)'}
            ml.setdefault(cls, {})['0'] = {
                'name': 'vtable1', 'type': 'void*', 'size': 4,
                'src': 'rtti/ctor vtable proof (G34 participation)'}
            reg.append(0)
            added_members += 1
    # 3. size-only / 4. zero evidence -> explicit participation record
    if reg:
        participation[cls] = {'status': 'registered-now', 'members': len(reg),
                              'layout_size': size,
                              'signatures': sig_by_cls.get(cls, 0)}
    elif size:
        participation[cls] = {'status': 'size-only', 'layout_size': size,
                              'signatures': sig_by_cls.get(cls, 0)}
    else:
        participation[cls] = {'status': 'no-evidence-pending',
                              'signatures': sig_by_cls.get(cls, 0)}

print('classes processed:', len(participation))
st = collections.Counter(v['status'] for v in participation.values())
for k, n in st.most_common():
    print(f'  {n:>5}  {k}')
print('member constraints registered:', added_members)

if APPLY and added_members:
    Path(ROOT / 'anchors/member_types.json').write_text(
        json.dumps(mt, indent=1, ensure_ascii=False) + '\n', encoding='utf-8')
    Path(ROOT / 'tools/member_lookup.json').write_text(
        json.dumps(ml, indent=1, ensure_ascii=False) + '\n', encoding='utf-8')
    print('member tables written')
Path(ROOT / '.omo/class_participation.json').write_text(
    json.dumps(participation, indent=1, ensure_ascii=False), encoding='utf-8')
print('participation ledger -> .omo/class_participation.json')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
