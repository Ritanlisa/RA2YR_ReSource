#!/usr/bin/env python3
"""Per-class quality audit of anchors/csp_canon_members.json.

Checks:
  A. members with offset >= class size (out-of-bounds garbage)
  B. member types that are tree templates/enums/using-aliases (C2955 risk)
  C. member type names unknown as pointer bases anywhere (never declared)
  D. duplicate member names within a class
  E. classes with implausible member counts vs size
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
mt = json.loads((ROOT / 'anchors' / 'csp_canon_members.json').read_text(encoding='utf-8'))

# --- tree universe: templates / enums / aliases defined in tree headers ---
SRC = ROOT / 'src'
ENUM_RE = re.compile(r'^[ \t]*enum(?:\s+class)?\s+([A-Za-z_]\w*)', re.M)
ALIAS_RE = re.compile(r'^[ \t]*using\s+([A-Za-z_]\w*)\s*=', re.M)
TMPL_RE = re.compile(r'^template[^\n]*\n[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)', re.M)
tree_special = set()
for p in sorted(SRC.rglob('*.hpp')):
    s = str(p)
    if 'e4' in s or 'csp_canon' in s or '_generated' in s:
        continue
    try:
        t2 = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    if 'namespace ra2' in t2 or 'namespace gamemd' not in t2:
        continue
    tree_special |= set(ENUM_RE.findall(t2))
    tree_special |= set(ALIAS_RE.findall(t2))
    tree_special |= set(TMPL_RE.findall(t2))

# all declared type names anywhere (tree + e4)
declared = set(tree_special)
for p in sorted(SRC.rglob('*.hpp')):
    s = str(p)
    if '_generated' in s:
        continue
    try:
        t2 = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    declared |= set(re.findall(r'^[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)', t2, re.M))

PRIM = {'unsigned int', 'int', 'unsigned short', 'short', 'unsigned char',
        'signed char', 'char', 'bool', 'float', 'double', 'unsigned long',
        'long', 'unsigned long long', 'long long', 'void', 'wchar_t'}
WINDOWS = {'DWORD', 'WORD', 'BYTE', 'HWND', 'HDC', 'HINSTANCE', 'HANDLE',
           'HRESULT', 'LONG', 'BOOL', 'UINT', 'LPVOID', 'LPCVOID', 'LPSTR',
           'LPCSTR', 'WPARAM', 'LPARAM', 'LRESULT', 'COLORREF', 'ATOM'}

stat = {'oob_members': 0, 'oob_classes': 0, 'tmpl_typed': 0, 'tmpl_classes': 0,
        'undecl_base': 0, 'dup_names': 0, 'huge': 0}
oob_detail = {}
tmpl_detail = {}
undecl_detail = {}
huge_detail = []

for cls, ent in mt.items():
    size = ent.get('size') or 0
    mems = ent.get('members') or {}
    # A. out-of-bounds
    oob = [o for o in mems if size and int(o, 0) >= size]
    if oob:
        stat['oob_members'] += len(oob)
        stat['oob_classes'] += 1
        oob_detail[cls] = (size, len(mems), len(oob))
    # B. template-typed members
    tb = []
    for o, mm in mems.items():
        t = (mm.get('type') or '').strip()
        base = re.sub(r'\*+\s*$', '', t).strip()
        if base in tree_special:
            tb.append((o, t))
    if tb:
        stat['tmpl_typed'] += len(tb)
        stat['tmpl_classes'] += 1
        tmpl_detail[cls] = tb[:4]
    # C. undeclared pointer bases
    for o, mm in mems.items():
        t = (mm.get('type') or '').strip()
        if not t.endswith('*'):
            continue
        base = re.sub(r'\*+\s*$', '', t).strip()
        if not base or base in PRIM or base in WINDOWS or not base[0].isupper():
            continue
        if base not in declared:
            stat['undecl_base'] += 1
            undecl_detail.setdefault(base, 0)
            undecl_detail[base] += 1
    # D. duplicate names
    names = [mm.get('name') for mm in mems.values() if mm.get('name')]
    stat['dup_names'] += len(names) - len(set(names))
    # E. implausible density
    if size and len(mems) > max(50, size // 4):
        stat['huge'] += 1
        huge_detail.append((cls, size, len(mems)))

print('=== csp_canon_members quality audit ===')
print('classes:', len(mt))
print('A. out-of-bounds members:', stat['oob_members'], 'in', stat['oob_classes'], 'classes')
print('B. template/enum/alias-typed members:', stat['tmpl_typed'], 'in', stat['tmpl_classes'], 'classes')
print('C. undeclared pointer bases:', stat['undecl_base'], 'distinct:', len(undecl_detail))
print('D. duplicate member names:', stat['dup_names'])
print('E. implausible member density (>50 or size/4):', stat['huge'])

print('\n--- top OOB offenders (class, size, total, oob) ---')
for cls, (size, tot, oob) in sorted(oob_detail.items(), key=lambda kv: -kv[1][2])[:15]:
    print(f'  {cls}: size={size} members={tot} oob={oob}')

print('\n--- top template-typed members ---')
for cls, tb in sorted(tmpl_detail.items(), key=lambda kv: -len(kv[1]))[:15]:
    print(f'  {cls}: {len(tb)} e.g. {tb[:3]}')

print('\n--- top undeclared pointer bases ---')
for base, n in sorted(undecl_detail.items(), key=lambda kv: -kv[1])[:15]:
    print(f'  {base}: {n}')

print('\n--- implausible density ---')
for cls, size, n in sorted(huge_detail, key=lambda kv: -kv[2])[:15]:
    print(f'  {cls}: size={size} members={n}')
