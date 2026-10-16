#!/usr/bin/env python3
"""X34 L5 — B globals decl supply (array retype, width/bound binary-verified).

Evidence:
  - C2109 global-scalar registry (fresh post-L4 log): 929 sites on atoms,
    zero on-line stride hazards; whole-tree audit (l5_audit.json) splits safe
    atoms (stride=0, assign=0-except-def, deref=0) from struct-pointer family.
  - Widths from binary: g_IsWindowed 49C11B `mov byte ptr [esi+0x89ed18],0x3d`
    = BYTE store (e4 decl `int` was wrong width); g_ScreenRenderFlag 7C7A96
    `or dl, byte ptr [ebx+0x87bd90]` = BYTE read; g_ScreenRenderMask 7C7ECA
    = BYTE read. Bounds from IDA next-head gaps (g_IsWindowed gap=1024,
    loop bound `cmp esi,0x3fd` confirms; Mask gap=256; Flag = sibling 256).
  - Set B atoms: single extern decl (ida_globals.h) + single def
    (ida_globals.cpp), name-encoded widths, bounds = max(IDA gap, maxidx+1).

Residual (documented, next session): dword_A8B230 (229 sites, AbstractClass*
struct-array shim, needs union vocab vfptr/vtableN + dual-universe routing),
g_ZBufferDescriptor (90, StreamClass* retype — 24 assigns unaudited),
stru_830620 (71, 27 `(&(&G))[N]` stride forms), dword_A8B238/A8DA78/A8DA90
(pointer-array semantics with heavy value/stride use).

Usage: python x34_l5_globals.py [--apply]   (idempotent)
"""
import re
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
report = []

# atom -> (elem_type, bound)
SET_A = {
    'g_IsWindowed': ('uint8_t', 1024),
    'g_ScreenRenderFlag': ('unsigned char', 256),
    'g_ScreenRenderMask': ('char', 256),
}
DECL_FILES_A = ['src/core/globals_core.hpp', 'src/csp_canon/globals.hpp',
                'src/e4/e4_globals.hpp', 'src/e4/e4_globals_decls.hpp',
                'src/system/globals_system.hpp']
SET_B = {
    'dword_AA105C': ('unsigned int', 1),
    'dword_ABD460': ('unsigned int', 1),
    'dword_887804': ('unsigned int', 12),
    'byte_7C80F2': ('unsigned char', 1),
    'dword_A8D25C': ('unsigned int', 200),
    'dword_8B3F38': ('unsigned int', 1),
    'dword_8B4040': ('unsigned int', 1),
    'byte_B1D5E0': ('unsigned char', 1),
    'stru_A8E7B0': ('unsigned char', 276),
    'byte_7C80F6': ('unsigned char', 26),
    'unk_ABECA0': ('unsigned char', 41),
    'dword_B17F24': ('unsigned int', 4097),
    'dword_ABC7FC': ('unsigned int', 1),
    'dword_ABC7F8': ('unsigned int', 1),
    'dword_ABC804': ('unsigned int', 1),
}

n_decl = n_def = 0
for atom, (ty, n) in SET_A.items():
    arr = '%s[%d]' % (atom, n)
    for rel in DECL_FILES_A:
        p = ROOT / rel
        if not p.exists():
            continue
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        hit = None
        for i, ln in enumerate(lines):
            m = re.match(r'(\s*extern\s+)(\w[\w\s]*?\b)' + re.escape(atom) + r'\s*(;.*)$', ln)
            if m and atom + '[' not in ln:
                hit = (i, m)
                break
        if hit is None:
            continue
        i, m = hit
        base_ty = m.group(2).strip()
        # preserve original elem type except the WRONG-width int decls for Set A
        new_ty = ty
        newln = '%sextern %s %s;%s  // X34-L5 array retype (binary width+bound)' % (
            m.group(1), new_ty, arr, '')
        report.append('PLAN %s:%d: %s' % (rel, i + 1, lines[i].strip()[:70]) if not APPLY
                      else 'WROTE %s:%d: %s' % (rel, i + 1, newln.strip()[:70]))
        if APPLY:
            lines[i] = newln
            p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
        n_decl += 1

for atom, (ty, n) in SET_B.items():
    # decl in ida_globals.h
    p = ROOT / 'src/core/ida_globals.h'
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    done = False
    for i, ln in enumerate(lines):
        m = re.match(r'(\s*extern\s+)(unsigned int|unsigned char|char|int)\s+(' +
                     re.escape(atom) + r')\s*(;.*)$', ln)
        if m:
            newln = '%sextern %s %s[%d];%s  // X34-L5 array retype (IDA gap bound)' % (
                m.group(1), m.group(2), atom, n, m.group(4) if m.group(4).startswith('  //') else '')
            report.append('PLAN ida_globals.h:%d %s' % (i + 1, atom) if not APPLY
                          else 'WROTE ida_globals.h:%d %s[%d]' % (i + 1, atom, n))
            if APPLY:
                lines[i] = newln
                p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
            n_decl += 1
            done = True
            break
    if not done:
        report.append('SKIP decl %s (not found / already array)' % atom)
    # def in ida_globals.cpp
    p = ROOT / 'src/core/ida_globals.cpp'
    if p.exists():
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        for i, ln in enumerate(lines):
            m = re.match(r'(\s*)(unsigned int|unsigned char|char|int)\s+(' +
                         re.escape(atom) + r')\s*=\s*([^;]+);', ln)
            if m and 'extern' not in ln:
                newln = '%s%s %s[%d] = {0};  // X34-L5 array retype' % (
                    m.group(1), m.group(2), atom, n)
                report.append('PLAN ida_globals.cpp:%d %s' % (i + 1, atom) if not APPLY
                              else 'WROTE ida_globals.cpp:%d %s[%d]' % (i + 1, atom, n))
                if APPLY:
                    lines[i] = newln
                    p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
                n_def += 1
                break

print('\n'.join(report[:40]))
if len(report) > 40:
    print('... (+%d more)' % (len(report) - 40))
print('decls: %d, defs: %d %s' % (n_decl, n_def, '(DRY)' if not APPLY else '(APPLIED)'))
print('DRY RUN (use --apply)' if not APPLY else 'APPLIED')
