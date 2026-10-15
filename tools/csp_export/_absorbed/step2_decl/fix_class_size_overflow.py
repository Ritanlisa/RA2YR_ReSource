#!/usr/bin/env python3
"""X27: remove beyond-size / overlapping members from classes that carry a
`static_assert(sizeof(X) == 0xNN)` layout truth.

STATUS: EXPLORATORY -- NOT part of the applied X27 fix chain.
It fixes CDTimerClass/RateTimer/FacingClass asserts but (a) the q010 drop
breaks FacingClass::Set_SyncLog bodies (supplied_bodies.cpp:1353) and
(b) it cannot see base-class inflation (LocomotionClass carries a derived
class's fields u32_1C..u32_68 -> derived asserts still fail).  Wire it only
after a body-usage guard + base-class-boundary pass exist.  See issues.md
I235/I236 for the full family record.

Root cause: the X10 member-supply passes (canon-mt / member_lookup /
csp_canon_members emitters) appended members without validating them
against the class's asserted size.  CDTimerClass (truth 0xC) received
u32_10@0x10, u32_8@0x8 and u8_14@0x14 -- inflating it to 24 bytes and
cascading every embedder (RateTimer, FacingClass, the locomotion family),
so the static_asserts fail in every TU that reaches them with the class
complete.

Fix: for each asserted class, parse member offsets (from `// 0xNN`
comments or the offset-embedded name), drop members whose offset >= the
asserted size or whose [off, off+size) range overlaps an earlier member
(placeholder-named members lose to semantic-named ones at the same
offset).  Iterates over the file until no drops remain (nested structs
resolve over multiple passes).  Idempotent.

Usage: python fix_class_size_overflow.py [--apply] [--file <path>]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
FILE = None
if '--file' in sys.argv:
    FILE = ROOT / sys.argv[sys.argv.index('--file') + 1]

ASSERT_RE = re.compile(
    r'static_assert\(sizeof\((\w+)\)\s*==\s*(0x[0-9A-Fa-f]+|\d+)\s*,')
COMMENT_OFF = re.compile(r'//[^\n]*?\b0x([0-9A-Fa-f]+)\b')
NAME_OFF = re.compile(r'^(?:q|u8_|u16_|u32_|u64_|ptr_|m_|__pad_?)([0-9A-Fa-f]+)$')
PLACEHOLDER = re.compile(
    r'^(?:q[0-9A-F]{3}\w*|u(?:8|16|32|64)_[0-9A-F]+|__pad.*|__align.*|'
    r'field_.*|vtable\d*|vt_?\d+|sub_[0-9A-Fa-f]+|m_\d+)$')
MEMBER_RE = re.compile(
    r'^\s*(?P<ty>(?:unsigned\s+|signed\s+|const\s+|static\s+)*'
    r'[A-Za-z_][\w:<>,\s\*&]*?)\s*(?P<ptr>\*?)\s*(?P<nm>[A-Za-z_]\w*)'
    r'\s*(?P<arr>\[[^\]]*\])?\s*;\s*(?P<cmt>//.*)?$')

PRIM_SIZE = {'char': 1, 'signed char': 1, 'unsigned char': 1, 'bool': 1,
             'short': 2, 'unsigned short': 2, 'int16_t': 2, 'uint16_t': 2,
             'int': 4, 'unsigned int': 4, 'long': 4, 'unsigned long': 4,
             'float': 4, 'int32_t': 4, 'uint32_t': 4, 'DWORD': 4,
             'unsigned': 4, 'double': 8, 'int64_t': 8, 'uint64_t': 8,
             'void*': 4}


def member_offset(line, nm, cmt):
    off = None
    if cmt:
        mo = COMMENT_OFF.search(cmt)
        if mo:
            try:
                off = int(mo.group(1), 16)
            except ValueError:
                off = None
    if off is None:
        no = NAME_OFF.match(nm)
        if no:
            try:
                off = int(no.group(1), 16)
            except ValueError:
                off = None
    return off


def member_size(ty, ptr, arr, cls_sizes):
    ty = ty.strip().replace('*', '').strip()
    if arr:
        inner = arr[1:-1].strip()
        try:
            n = int(inner, 16) if inner.lower().startswith('0x') else int(inner)
        except ValueError:
            n = 1
        return max(1, n) * (PRIM_SIZE.get(ty, 4))
    if ptr:
        return 4
    if ty in PRIM_SIZE:
        return PRIM_SIZE[ty]
    if ty in cls_sizes:
        return cls_sizes[ty]
    return 4


def collect_members(lines, ci, cls_sizes):
    """(idx, off, size, name, text) list inside class body starting at ci.
    Offsets without a `// 0xNN` comment or offset-embedded name are derived
    by sequential layout from the previous member's end."""
    depth = 0
    out = []
    run_off = 0
    for j in range(ci, len(lines)):
        l = lines[j]
        m = MEMBER_RE.match(l.split('//')[0] + (('//' + l.split('//', 1)[1])
                                                if '//' in l else ''))
        if m and m.group('nm') not in ('public', 'private', 'protected',
                                       'struct', 'class', 'return'):
            off = member_offset(l, m.group('nm'), m.group('cmt') or '')
            sz = member_size(m.group('ty'), m.group('ptr'),
                             m.group('arr'), cls_sizes)
            if off is None:
                off = run_off
            out.append((j, off, sz, m.group('nm'), l))
            run_off = off + sz
        depth += l.count('{') - l.count('}')
        if depth <= 0 and j > ci:
            break
    return out


def main():
    files = [FILE] if FILE else sorted((ROOT / 'src').rglob('*.hpp'))
    total_drops = 0
    for hp in files:
        try:
            text = hp.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        changed = True
        drops_this_file = 0
        while changed:
            changed = False
            lines = text.split('\n')
            asserts = {}
            for l in lines:
                m = ASSERT_RE.search(l)
                if m:
                    asserts[m.group(1)] = int(
                        m.group(2), 16) if m.group(2).lower().startswith('0x') \
                        else int(m.group(2))
            # class sizes from all asserts in this file (best effort)
            cls_sizes = dict(asserts)
            for cls, sz in asserts.items():
                ci = None
                for i, l in enumerate(lines):
                    if re.match(r'^\s*(?:struct|class)\s+%s\b' % cls, l) \
                            and '{' in l:
                        ci = i
                        break
                if ci is None:
                    continue
                mem = collect_members(lines, ci, cls_sizes)
                drop_idx = set()
                # beyond-size
                for j, off, sz2, nm, l in mem:
                    if off >= sz:
                        drop_idx.add(j)
                # overlap with earlier member
                prev_end = 0
                kept = []
                for j, off, sz2, nm, l in sorted(mem, key=lambda t: t[1]):
                    if j in drop_idx:
                        continue
                    if off < prev_end:
                        # overlap: prefer semantic-named over placeholder
                        if PLACEHOLDER.match(nm):
                            drop_idx.add(j)
                            continue
                        else:
                            # drop the placeholder predecessor if any
                            for (pj, poff, psz, pnm, pl) in kept:
                                if poff < off + sz2 and off < poff + psz \
                                        and PLACEHOLDER.match(pnm):
                                    drop_idx.add(pj)
                                    kept = [k for k in kept if k[0] != pj]
                                    break
                            else:
                                drop_idx.add(j)
                                continue
                    kept.append((j, off, sz2, nm, l))
                    prev_end = max(prev_end, off + sz2)
                if drop_idx:
                    for j in sorted(drop_idx, reverse=True):
                        del lines[j]
                    changed = True
                    drops_this_file += len(drop_idx)
            text = '\n'.join(lines)
        if drops_this_file:
            total_drops += drops_this_file
            print('%s: %d overflow member line(s) dropped'
                  % (str(hp.relative_to(ROOT)).replace('\\', '/'),
                     drops_this_file))
            if APPLY:
                hp.write_text(text, encoding='utf-8')
    print('total: %d line(s)%s' % (total_drops, '' if APPLY else ' (DRY)'))


if __name__ == '__main__':
    main()
