#!/usr/bin/env python3
"""X27: template-family member unification (the I229 dual-universe round).

The flat carriers (`VectorClass` / `DynamicVectorClass` / `TypeList`) and
the tree templates (`core/vector.hpp`) collide: TUs that pull the tree
template (tree TUs, GAMEMD_E4_VECTOR_TREE_TRUTH bridges) see a bare
`VectorClass*` member as either C2955 (template-name w/o args, gamemd
scope) or C2143/C4430 (name unreachable, ra2::game scope).

Mechanical fix (member lines only) -- both universes get an OPAQUE
pointer carrier `void*` (layout-exact 4 bytes; the corpus already uses
`void*` for unknown pointer members elsewhere):
  * TREE headers (src/ not under e4/): rewrite the member type to `void*`.
    (The template carrier `gamemd::VectorClass<int>*` was tried first and
    rejected: TUs that include the header without pulling core/vector.hpp
    cascade C2039/C2062/C2238/C7568 x4 per site -- factory.cpp repro.)
  * E4 headers: keep the flat type for flat-universe TUs and add the void*
    carrier as the #else of the same universe guard the X26 F1 fix uses:
        #if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
            VectorClass * ptr_390;  // 0x390
        #else
            void* ptr_390;  // 0x390 (X27: opaque carrier, tree universe)
        #endif
    Known conversions (not count regressions): subscript/pointer-arithmetic
    bodies on such members (idleActionTimer[0] x5, q11B0 + sizeof x2)
    become C2100/C2036.

Idempotent (marker / already-rewritten check).  Function-parameter sites
(TypeList_flat_e4.hpp CopyFull) are reported and skipped (signature change
would need a def-side match).

Usage: python fix_template_member_universe.py <buildlog> [--apply] [--detail]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
DETAIL = '--detail' in sys.argv
LOG = Path(sys.argv[1])
if not LOG.is_absolute():
    LOG = ROOT / LOG

ERR_RE = re.compile(
    r'^(?P<file>.+?)\((?P<line>\d+)(?:,\d+)?\)\s*:\s*(?:fatal )?error\s+'
    r'(?P<code>C\d+|LNK\d+)\s*:\s*(?P<msg>.*?)(?:\s*\[[^\]]*\])?\s*$')
TMPL = r'(?:VectorClass|DynamicVectorClass|TypeList|LinkedList)'
MEMBER_RE = re.compile(
    r'^(?P<indent>\s*)(?P<ty>%s)\s*\*\s*(?P<nm>[A-Za-z_]\w*)'
    r'(?P<tail>\s*;.*)$' % TMPL)
PARAM_RE = re.compile(r'%s\s*\*' % TMPL)
MARK = 'X27: template-carrier'
GUARD_LINE = ('#if !defined(GAMEMD_TREE_UNIVERSE) && '
              '!defined(GAMEMD_E4_VECTOR_TREE_TRUTH)')


def short(p):
    p = p.replace('\\', '/')
    i = p.lower().find('ra2yr_resource/')
    return p[i + len('ra2yr_resource/'):] if i >= 0 else p


def main():
    sites = defaultdict(set)
    for line in LOG.read_text(encoding='utf-8', errors='replace').split('\n'):
        m = ERR_RE.match(line.strip())
        if not m or m.group('code') not in ('C2955', 'C2143', 'C4430',
                                            'C2238', 'C2371', 'C2079'):
            continue
        f = short(m.group('file'))
        if not f.endswith(('.hpp', '.h')):
            continue
        sites[f].add(int(m.group('line')))

    plans = {}
    skipped = defaultdict(int)
    for f, lns in sorted(sites.items()):
        p = ROOT / f
        if not p.exists() or 'csp_canon' in f or '_generated' in f:
            continue
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        edits = []
        for ln in sorted(lns):
            src = lines[ln - 1] if 0 < ln <= len(lines) else ''
            mm = MEMBER_RE.match(src)
            if not mm:
                if PARAM_RE.search(src):
                    skipped['param-site'] += 1
                continue
            edits.append((ln, mm))
        if edits:
            plans[f] = edits
            if DETAIL:
                print('%s: %d site(s)' % (f, len(edits)))
                for ln, mm in edits:
                    print('    L%-5d %s* %s' % (ln, mm.group('ty'),
                                                mm.group('nm')))

    n_sites = sum(len(v) for v in plans.values())
    print('files: %d ; member sites: %d ; skipped: %s'
          % (len(plans), n_sites, dict(skipped)))
    if not APPLY:
        print('DRY RUN (use --apply)')
        return

    for f, edits in plans.items():
        p = ROOT / f
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        is_e4 = '/e4/' in f
        for ln, mm in sorted(edits, reverse=True):
            idx = ln - 1
            src = lines[idx]
            if MARK in src:
                continue
            indent, ty, nm, tail = (mm.group('indent'), mm.group('ty'),
                                    mm.group('nm'), mm.group('tail'))
            new = '%svoid* %s%s  // %s' % (indent, nm, tail, MARK)
            if is_e4:
                # only wrap if not already inside a X26/X27 guard
                lo = max(0, idx - 6)
                if any(GUARD_LINE in lines[j] for j in range(lo, idx)):
                    continue
                lines[idx:idx + 1] = [GUARD_LINE,
                                      src,
                                      '#else',
                                      new,
                                      '#endif  // X27: template-carrier '
                                      'universe fallback']
            else:
                lines[idx] = new
        p.write_text('\n'.join(lines), encoding='utf-8')
    print('APPLIED to %d file(s)' % len(plans))


if __name__ == '__main__':
    main()
