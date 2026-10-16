#!/usr/bin/env python3
"""X33 L1 — rooted heads fixer (E verdict #1 bundle). One-shot, idempotence-guarded.

Fixes (evidence in worklist.json L1 items):
  F1  src/core/vector.hpp:94   'int Clear();'            -> 'virtual void Clear();'
      src/core/vector.hpp:146  'int Clear() override;'   -> 'void Clear() override;'
      (git f5da ancestry + vector.inl void bodies + signals 0x46b750 void)
  F2  src/system/cc_file.cpp   insert '#define GAMEMD_E4_VECTOR_TREE_TRUTH 1' bridge
      (G57a2 precedent; sole C2989 victim TU)
  F3  src/e4/classes/Power_e4.hpp
        delete 'static int FlagProcess(int Power_field_0x8);'   (bogus static twin)
        delete 'int FlagProcess(int q008, int a2, int a1);'     (bogus 3-param twin)
        keep member 'int FlagProcess(int Power_field_0x8);'     (signals 0x4a1ca0 thiscall int(int))
  F4  src/e4/classes/AnimTypeClass_e4.hpp
        delete 'static AnimTypeClass * * FindOrCreate(char *Source);' (0x428b80 member true)
  F5  src/e4/classes/Text_e4.hpp
        delete 'char Text_field_00[4];'  (keep unsigned char [8] G42.35 form, L274)
  F6  src/e4/classes/WinsockInterface_e4.hpp
        delete 'unsigned int *m_1;'      (keep 'unsigned char m_1[64];' pad, L274)
  F7  src/e4/classes/Rules_e4.hpp
        delete 'unsigned int *m_1;' and 'unsigned int m_5;' (keep [64] pads, L274;
        Rules_e4.cpp has zero m_1/m_5 scalar uses)
  F8  src/system/convert_class.hpp   add 'class LightConvertClass;' fwd (before struct)
      src/core/globals_core.hpp      add 'class MessageListClass;' fwd
      src/misc/misc_ext.hpp          add 'struct MSAnim;' fwd
      src/e4/classes/MSFrameAnim_e4.hpp  add 'struct rc_ptr;' fwd (fix_fwd_type_supply vocab)
  F9  src/e4/addr66_e4.cpp switch: brace-wrap declaring case bodies
      (1:328-395, 2:397-463, 4-pre-tail:490-583, 5:662-691, 6:693-775) + hoist
      'int v95 = ...' init-split at 588. Verified: only cross-case goto is
      LABEL_111 (stays at switch scope, line 584); case-internal labels keep
      their gotos inside the new braces (legal).

Usage: python x33_l1_heads.py            # dry run
       python x33_l1_heads.py --apply    # write
Idempotence: every edit asserts its expected old text; already-applied files
are reported and skipped (2nd run -> 0 writes).
"""
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
report = []


def edit_lines(path, ops):
    """ops: list of (lineno_1based, expected_old or None, new_lines or None).
    'delete' op = (n, expected, None). 'replace' = (n, expected, [new...]).
    'insert_after' = (n, expected, [new...], 'after'). All validated before write."""
    p = ROOT / path
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    for op in ops:
        n, old = op[0], op[1]
        idx = n - 1
        if idx >= len(lines):
            report.append(f'SKIP {path}:{n} out of range')
            return False
        if old is not None and old not in lines[idx]:
            report.append(f'SKIP {path}:{n} expected [{old[:60]}] got [{lines[idx][:60]}]')
            return False
    if not APPLY:
        for op in ops:
            kind = 'delete' if len(op) == 3 and op[2] is None else (
                'replace' if op[0] and len(op) == 3 else 'insert')
            report.append(f'PLAN {kind} {path}:{op[0]}')
        return True
    for op in sorted(ops, key=lambda o: -o[0]):
        n, old, new = op[0], op[1], op[2]
        idx = n - 1
        if new is None:
            del lines[idx]
        elif len(op) == 4:  # insert after line n
            lines[idx + 1:idx + 1] = new
        else:
            lines[idx:idx + 1] = new
    p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    report.append(f'WROTE {path} ({len(ops)} ops)')
    return True


def delete_if_present(path, needles, protect=()):
    """Delete lines containing any needle, unless they also contain a protect token.
    Idempotent: missing needles after deletion -> no-op success."""
    p = ROOT / path
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    hits = [i for i, ln in enumerate(lines)
            if any(nd in ln for nd in needles) and not any(pr in ln for pr in protect)]
    if not hits:
        report.append(f'NOOP {path} (needles absent = already applied)')
        return True
    if not APPLY:
        for i in hits:
            report.append(f'PLAN delete {path}:{i+1}: {lines[i].strip()[:80]}')
        return True
    for i in sorted(hits, reverse=True):
        del lines[i]
    p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    report.append(f'WROTE {path} (deleted {len(hits)} lines)')
    return True


ok = True

# ---- F1 vector.hpp Clear truth ----
ok &= edit_lines('src/core/vector.hpp', [
    (94, 'int Clear();', ['    virtual void Clear();']),
    (146, 'int Clear() override;', ['    void Clear() override;']),
])

# ---- F2 cc_file.cpp bridge ----
p = ROOT / 'src/system/cc_file.cpp'
txt = p.read_text(encoding='utf-8', errors='replace')
if 'GAMEMD_E4_VECTOR_TREE_TRUTH' in txt:
    report.append('NOOP src/system/cc_file.cpp (bridge present)')
else:
    lines = txt.split('\n')
    lines.insert(1, '#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // X33-L1: G57a2 bridge; sole C2989 victim TU')
    report.append('PLAN insert src/system/cc_file.cpp:2 bridge')
    if APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
        report[-1] = 'WROTE src/system/cc_file.cpp bridge'

# ---- F3 Power FlagProcess dedup ----
ok &= delete_if_present('src/e4/classes/Power_e4.hpp',
                        ['static int FlagProcess(int Power_field_0x8);',
                         'int FlagProcess(int q008, int a2, int a1);'])

# ---- F4 AnimTypeClass FindOrCreate static twin ----
ok &= delete_if_present('src/e4/classes/AnimTypeClass_e4.hpp',
                        ['static AnimTypeClass * * FindOrCreate(char *Source);'])

# ---- F5 Text dup ----
ok &= delete_if_present('src/e4/classes/Text_e4.hpp',
                        ['char Text_field_00[4];'])

# ---- F6 WinsockInterface dup ----
ok &= delete_if_present('src/e4/classes/WinsockInterface_e4.hpp',
                        ['unsigned int *m_1;  // 0x1'])

# ---- F7 Rules dups ----
ok &= delete_if_present('src/e4/classes/Rules_e4.hpp',
                        ['unsigned int *m_1;  // 0x1',
                         'unsigned int m_5;  // 0x5'])

# ---- F8 fwd quartet ----
# Each insert anchors NEXT TO an existing in-namespace supply decl (X27 precedent),
# because the consuming decl lives inside namespace gamemd.
for rel, anchor, fwd in [
    ('src/system/convert_class.hpp', 'class CampaignClass;', 'class LightConvertClass;'),
    ('src/core/globals_core.hpp', 'class TechnoClass;  // X27: member-decl type supply',
     'class MessageListClass;  // X33-L1 A11 fwd supply (C4430 x4TU)'),
    ('src/misc/misc_ext.hpp', 'namespace gamemd', 'struct MSAnim;  // X33-L1 A11 fwd supply (C4430 x3TU)'),
]:
    p = ROOT / rel
    txt = p.read_text(encoding='utf-8', errors='replace')
    name = fwd.split()[1].rstrip(';')
    if fwd in txt:
        report.append(f'NOOP {rel} (fwd present)')
        continue
    lines = txt.split('\n')
    idx = next((i for i, ln in enumerate(lines) if anchor in ln), None)
    if idx is None:
        report.append(f'SKIP {rel}: anchor [{anchor[:40]}] not found')
        ok = False
        continue
    if rel.endswith('misc_ext.hpp'):
        lines.insert(idx + 2, fwd)          # after 'namespace gamemd' + '{'
    else:
        lines.insert(idx, fwd)              # before the anchor supply decl
    report.append(f'PLAN insert {rel}:{idx+1} {fwd}')
    if APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
        report[-1] = f'WROTE {rel} {fwd}'

# MSFrameAnim_e4.hpp: rc_ptr fwd inside namespace, after the existing fix_fwd_type_supply lines
p = ROOT / 'src/e4/classes/MSFrameAnim_e4.hpp'
txt = p.read_text(encoding='utf-8', errors='replace')
if 'struct rc_ptr;' in txt:
    report.append('NOOP MSFrameAnim_e4.hpp (rc_ptr fwd present)')
else:
    lines = txt.split('\n')
    idx = next(i for i, ln in enumerate(lines) if 'struct DynamicVector;' in ln)
    lines.insert(idx + 1, 'struct rc_ptr;  // fix_fwd_type_supply')
    report.append(f'PLAN insert MSFrameAnim_e4.hpp:{idx+2} struct rc_ptr;')
    if APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
        report[-1] = f'WROTE MSFrameAnim_e4.hpp struct rc_ptr;'

# ---- F9 addr66 switch braces ----
p = ROOT / 'src/e4/addr66_e4.cpp'
alines = p.read_text(encoding='utf-8', errors='replace').split('\n')


def aline(n):
    return alines[n - 1]


checks = [
    (327, 'case 1:'), (396, 'case 2:'), (464, 'case 3:'), (489, 'case 4:'),
    (584, 'LABEL_111:'), (588, 'int v95 = '), (661, 'case 5:'),
    (692, 'case 6:'), (776, 'default:'),
]
anchor_ok = all(tok in aline(n) for n, tok in checks)
if not anchor_ok:
    for n, tok in checks:
        if tok not in aline(n):
            report.append(f'SKIP addr66 anchor line {n} expected [{tok}] got [{aline(n)[:60]}]')
    ok = False
elif 'X33-L1' in p.read_text(encoding='utf-8', errors='replace'):
    report.append('NOOP addr66_e4.cpp (already braced)')
else:
    # (insert_before_line, text)
    inserts = [
        (328, '    {  // X33-L1 case 1 body brace (C2360)'),
        (396, '    }  // X33-L1 end case 1'),
        (396 + 1, '    {  // X33-L1 case 2 body brace (C2360)'),
        (464, '    }  // X33-L1 end case 2'),
        (490, '    {  // X33-L1 case 4 pre-tail brace (C2360)'),
        (584, '    }  // X33-L1 end case 4 pre-tail (LABEL_111 stays at switch scope)'),
        (662, '    {  // X33-L1 case 5 body brace (C2360)'),
        (692, '    }  // X33-L1 end case 5'),
        (692 + 1, '    {  // X33-L1 case 6 body brace (C2360/C2361)'),
        (776, '    }  // X33-L1 end case 6'),
    ]
    v95_line = aline(588)
    if APPLY:
        # insert descending
        for n, text in sorted(inserts, key=lambda e: -e[0]):
            alines.insert(n - 1, text)
        # v95 hoist: after the brace inserts, its line moved by count of inserts before 588
        shifts = sum(1 for n, _ in inserts if n <= 588)
        v95_idx = 588 - 1 + shifts
        assert 'int v95 = ' in alines[v95_idx], alines[v95_idx]
        indent = alines[v95_idx][:len(alines[v95_idx]) - len(alines[v95_idx].lstrip())]
        alines[v95_idx:v95_idx + 1] = [
            indent + 'int v95;  // X33-L1 hoist (init-split; C2360 at case 5)',
            indent + 'v95 = ' + alines[v95_idx].split('int v95 = ', 1)[1],
        ]
        p.write_text('\n'.join(alines), encoding='utf-8', errors='replace')
        report.append('WROTE src/e4/addr66_e4.cpp (10 brace inserts + v95 hoist)')
    else:
        report.append(f'PLAN addr66 brace inserts x10 + v95 hoist (v95 line ok: {"int v95 = " in v95_line})')

print('\n'.join(report))
print('DRY RUN (use --apply)' if not APPLY else 'APPLIED')
sys.exit(0 if ok else 1)
