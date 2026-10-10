"""
Build three rename batch JSON files from CSP output + live IDA state + signals.json.

Outputs:
  - func_rename_batch.json:     ~7,900 entries (live Class_N -> CSP inferred names)
  - struct_rename_batch.json:   ~200 entries  (Class_N struct -> real name + C decl)
  - signals_rename_batch.json:  ~0-2000 entries (sub_ -> signals good names)

Data note:
  - csp_classes.json uses CSP's OWN Class_N numbering (different from IDA's).
  - tmp_class_structs.json uses IDA's Class_N numbering.
  - class_rename_map.json bridges the two (IDA Class_N -> real name).
  - SO: struct rename comes FIRST from class_rename_map (direct IDA mapping),
        then from CSP inferred_name class prefixes (voting across methods).
"""

import json
import os
import sys
from collections import Counter

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
CSP_H  = os.path.join(ROOT, 'tools', 'csp')

# N1: naming-provenance authority -- CSP inferred_name is 'auto' tier and
# may only replace placeholder/auto-tier live names.  A live name holding
# ini/yrpp/step6/git-history/binary-evidence provenance is protected.
sys.path.insert(0, os.path.join(ROOT, 'tools', 'csp_export'))
from _provenance import RANK, name_rank, load_provenance  # noqa: E402

_PROV = None


def live_name_rank(addr, live_name):
    """Provenance rank of the live name at addr (placeholders and IDA
    juveniles sink)."""
    global _PROV
    if _PROV is None:
        _PROV = load_provenance()
    try:
        entry = (_PROV.get('functions') or {}).get('0x%X' % int(addr, 16))
    except ValueError:
        entry = None
    if entry and entry.get('name') == live_name:
        return name_rank(entry.get('name'), entry.get('source'))
    return name_rank(live_name, 'auto')


# ── Helpers ──────────────────────────────────────────────────────────────────

def norm_addr(k: str) -> str:
    """Normalise hex address: strip leading zeros, lowercase, 0x prefix."""
    k = k.strip()
    if k.startswith('0x') or k.startswith('0X'):
        rest = k[2:].lstrip('0').lower()
        if not rest:
            rest = '0'
        return '0x' + rest
    return k.lower()


def is_good_name(name: str) -> bool:
    """A name worth using (not a placeholder)."""
    if not name or name == 'unknown':
        return False
    bad = ('sub_', 'dword_', 'byte_', 'off_', 'loc_', 'word_', 'qword_', 'unk_')
    if name.startswith(bad):
        return False
    if name.startswith('Class_'):
        return False
    return True


def build_struct_decl(real_name: str, offsets: list[int]) -> str:
    """Build a C struct declaration from sorted offsets with padding."""
    if not offsets:
        return f'struct {real_name} {{\n    char pad_0[0];\n}};'

    sorted_offs = sorted(set(offsets))
    lines = [f'struct {real_name} {{']
    cur = 0
    for off in sorted_offs:
        if off < cur:
            continue
        if off > cur:
            lines.append(f'    char pad_{cur}[{off - cur}];')
        lines.append(f'    _DWORD field_{off};')
        cur = off + 4
    # trailing 4 bytes after max offset
    tail = sorted_offs[-1] + 4 - cur
    if tail > 0:
        lines.append(f'    char pad_{cur}[{tail}];')
    lines.append('};')
    return '\n'.join(lines)


# ── Load inputs ──────────────────────────────────────────────────────────────

print('Loading inputs ...')

live_funcs   = json.load(open(os.path.join(CSP_H, 'tmp_live_funcs.json'),           'r', encoding='utf-8'))
tmp_structs  = json.load(open(os.path.join(CSP_H, 'tmp_class_structs.json'),         'r', encoding='utf-8'))
csp_data     = json.load(open(os.path.join(CSP_H, r'full_report\csp_functions.json'), 'r', encoding='utf-8'))
csp_cls_raw  = json.load(open(os.path.join(CSP_H, r'full_report\csp_classes.json'),   'r', encoding='utf-8'))
class_rn_map = json.load(open(os.path.join(CSP_H, 'class_rename_map.json'),           'r', encoding='utf-8'))
signals      = json.load(open(os.path.join(ROOT, 'signals.json'),                    'r', encoding='utf-8'))

csp_funcs    = csp_data['functions']
csp_classes  = csp_cls_raw['classes']
signals_sym  = signals.get('symbols', {})

print(f'  live_funcs         {len(live_funcs)}')
print(f'  csp_funcs          {len(csp_funcs)}')
print(f'  csp_classes        {len(csp_classes)}')
print(f'  tmp_structs        {len(tmp_structs)}')
print(f'  class_rename_map   {len(class_rn_map)}')
print(f'  signals_symbols    {len(signals_sym)}')


# Normalised lookups ───────────────────────────────────────────────────────────

live_norm   = {norm_addr(k): k for k in live_funcs}
sig_norm    = {}
for sk, sv in signals_sym.items():
    sig_norm[norm_addr(sk)] = sv

csp_norm_idx = {}  # addr -> csp entry
for ck, cv in csp_funcs.items():
    if not ck.startswith(('0x', '0X')):
        continue
    csp_norm_idx[norm_addr(ck)] = cv


# ═══════════════════════════════════════════════════════════════════════════════
#  OUTPUT 1 — func_rename_batch.json
# ═══════════════════════════════════════════════════════════════════════════════

print('\n[1/3] func_rename_batch.json ...')
func_batch = []
protected_skip = 0

for csp_key, csp_val in csp_funcs.items():
    if not csp_key.startswith(('0x', '0X')):
        continue
    csp_name = csp_val.get('inferred_name', '')
    if not is_good_name(csp_name):
        continue

    nk = norm_addr(csp_key)
    live_ok = live_norm.get(nk)
    if live_ok is None:
        continue

    live_name = live_funcs[live_ok]
    if live_name == csp_name:
        continue

    # N1: CSP inferred_name is auto-tier; a higher/equal-rank live name
    # (per anchors/name_provenance.json) is never renamed away.
    if live_name_rank(csp_key, live_name) <= RANK['auto']:
        protected_skip += 1
        continue

    func_batch.append({
        'addr': csp_key,
        'old_name': live_name,
        'new_name': csp_name,
    })

print(f'  -> {len(func_batch)} entries ({protected_skip} protected by '
      f'name_provenance, skipped)')


# ═══════════════════════════════════════════════════════════════════════════════
#  OUTPUT 2 — struct_rename_batch.json
# ═══════════════════════════════════════════════════════════════════════════════

print('\n[2/3] struct_rename_batch.json ...')
seen_structs = set()
struct_batch = []


def add_struct(old: str, new: str, offsets: list[int]):
    """Add a struct rename entry if not already added."""
    if old in seen_structs:
        return
    seen_structs.add(old)
    decl = build_struct_decl(new, offsets)
    struct_batch.append({'old': old, 'new': new, 'decl': decl})


# Phase A — direct mappings from class_rename_map (IDA Class_N -> real name)
for cls_id, real_name in class_rn_map.items():
    if cls_id not in tmp_structs:
        continue
    # Offsets might be available from csp_classes if we can match by real_name
    offs = []
    for cid, cval in csp_classes.items():
        if cval.get('real_name', '') == real_name:
            offs = cval.get('offsets', [])
            break
    add_struct(cls_id, real_name, offs)

print(f'  from class_rename_map: {len([e for e in struct_batch if e["old"] in class_rn_map])}')

# Phase B — infer from CSP inferred_name class prefixes
# For each IDA Class_N still in tmp_structs but NOT in class_rename_map,
# collect CSP inferred_name class prefixes of its member functions.
ida_cls_votes = {}  # ida_class -> Counter of candidate real names

for lk, lv in live_funcs.items():
    if '::' not in lv:
        continue
    ida_cls = lv.split('::')[0]
    if not ida_cls.startswith('Class_'):
        continue
    if ida_cls not in tmp_structs:
        continue
    # Already handled by class_rename_map?
    if ida_cls in class_rn_map:
        continue

    nk = norm_addr(lk)
    cv = csp_norm_idx.get(nk)
    if not cv:
        continue
    infer_name = cv.get('inferred_name', '')
    if not infer_name or infer_name == 'unknown' or '::' not in infer_name:
        continue
    csp_cls = infer_name.split('::')[0]
    if not csp_cls or csp_cls == 'unknown' or csp_cls.startswith('Class_'):
        continue
    if csp_cls == '_':  # suspicious CSP artifact
        continue

    if ida_cls not in ida_cls_votes:
        ida_cls_votes[ida_cls] = Counter()
    ida_cls_votes[ida_cls][csp_cls] += 1

for ida_cls, votes in ida_cls_votes.items():
    total = sum(votes.values())
    top_name, top_cnt = votes.most_common(1)[0]
    # Include any candidate with at least 1 vote — CSP information is meaningful
    # even from a single function mapping (threshold >= 1 gives ~113 candidates)
    if top_cnt < 1:
        continue
    # Look up offsets from csp_classes by matching real_name
    offs = []
    for cid, cval in csp_classes.items():
        if cval.get('real_name', '') == top_name:
            offs = cval.get('offsets', [])
            break
    add_struct(ida_cls, top_name, offs)

print(f'  from CSP inferred_name: {len([e for e in struct_batch if e["old"] not in class_rn_map])}')
print(f'  total struct_rename_batch: {len(struct_batch)}')


# ═══════════════════════════════════════════════════════════════════════════════
#  OUTPUT 3 — signals_rename_batch.json
# ═══════════════════════════════════════════════════════════════════════════════

print('\n[3/3] signals_rename_batch.json ...')
sig_batch = []
sig_seen = set()


def try_add_sig(addr_orig: str, live_name: str):
    """If signals has a better name for this address, add a rename entry."""
    nk = norm_addr(addr_orig)
    entry = sig_norm.get(nk)
    if not entry or not isinstance(entry, dict):
        return
    sig_name = entry.get('name', '')
    if not is_good_name(sig_name):
        return
    if sig_name == live_name:
        return
    key = (addr_orig, sig_name)
    if key in sig_seen:
        return
    sig_seen.add(key)
    sig_batch.append({
        'addr': addr_orig,
        'old_name': live_name,
        'new_name': sig_name,
    })


# Part A — live_funcs addresses where live name starts with sub_
for lk, lv in live_funcs.items():
    if not lv.startswith('sub_'):
        continue
    try_add_sig(lk, lv)

# Part B — csp_functions with inferred_name == 'unknown'
for ck, cv in csp_funcs.items():
    if not ck.startswith(('0x', '0X')):
        continue
    if cv.get('inferred_name', '') != 'unknown':
        continue
    nk = norm_addr(ck)
    live_ok = live_norm.get(nk)
    if live_ok is None:
        continue
    live_name = live_funcs[live_ok]
    try_add_sig(ck, live_name)

print(f'  -> {len(sig_batch)} entries')


# ── Write outputs ─────────────────────────────────────────────────────────────

outdir = CSP_H
json.dump(func_batch,  open(os.path.join(outdir, 'func_rename_batch.json'),    'w', encoding='utf-8'), indent=2, ensure_ascii=False)
json.dump(struct_batch, open(os.path.join(outdir, 'struct_rename_batch.json'),  'w', encoding='utf-8'), indent=2, ensure_ascii=False)
json.dump(sig_batch,    open(os.path.join(outdir, 'signals_rename_batch.json'), 'w', encoding='utf-8'), indent=2, ensure_ascii=False)

print(f'\n{"="*60}')
print(f'func_rename_batch.json    - {len(func_batch)} entries')
print(f'struct_rename_batch.json  - {len(struct_batch)} entries')
print(f'signals_rename_batch.json - {len(sig_batch)} entries')
print(f'{"="*60}')
