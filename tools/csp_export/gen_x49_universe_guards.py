#!/usr/bin/env python3
"""X49 P1 -- dual-universe one-definition convergence.

Resolves the classes.hpp <-> utility_ext.hpp duplicate full definitions
(88 classes defined in BOTH, same namespace gamemd -> C2011 when co-included;
x45 evidence: fwd_replacement_ledger.json bank_blocker).  Mechanism = the
tree's established first-include-wins marker convention GAMEMD_DEF_<Name>
(already used by display.hpp/map.hpp/g_screen.hpp for GScreenClass/MapClass):

  classes.hpp   flat def:  #if !defined(GAMEMD_DEF_X) && !defined(GAMEMD_E4_X)
                           #define GAMEMD_DEF_X 1
                           <flat def>
                           #endif
  utility_ext   E4 block:  #if !defined(GAMEMD_E4_X) && !defined(GAMEMD_DEF_X)
                           #define GAMEMD_DEF_X 1
                           <tree def>
                           #endif
  utility_ext   G2 twin:   inner #ifndef GAMEMD_G2_X_DEF ->
                             #if !defined(GAMEMD_G2_X_DEF) && !defined(GAMEMD_DEF_X)
                           + #define GAMEMD_DEF_X 1 beside the existing G2 define
  utility_ext   unguarded: wrapped with the same DEF marker block

Semantics: first full definition included in a TU wins; the GAMEMD_E4_X
opt-in (e4 flat carrier elsewhere) still suppresses both universes' defs.
Zero behavior change for every TU compiled today (no TU defines GAMEMD_DEF_*
for any of the 88 names -- verified in-tree; classes.hpp has zero compiled
consumers; utility_ext consumers see identical preprocessor outcomes).

Generator ownership: gen_cpp_canon.py calls apply_classes_guards() after
emitting classes.hpp, so a regen reproduces the convergence.  This script
is idempotent (marker scan) and byte-preserving (latin-1 roundtrip, EOL kept).

Usage: python gen_x49_universe_guards.py [--apply]
"""
import re, sys
from pathlib import Path

APPLY = "--apply" in sys.argv
ROOT = Path(__file__).resolve().parents[2]
CLASSES = ROOT / 'src' / 'csp_canon' / 'classes.hpp'
UTILITY = ROOT / 'src' / 'core' / 'utility_ext.hpp'


def collision_names():
    txt = CLASSES.read_text(encoding='utf-8', errors='replace')
    flat = set(re.findall(r'^class (\w+) \{', txt, re.M))
    flat |= set(re.findall(r'^class (\w+) :', txt, re.M))
    util = set()
    for ln in UTILITY.read_text(encoding='utf-8', errors='replace').splitlines():
        m = re.match(r'^(?:class|struct)[ \t]+(\w+)\s*(?:$|[{:])', ln)
        if m:
            util.add(m.group(1))
    return sorted(flat & util)


def find_block_end(lines, start):
    """Return index of the line that closes the class body opened at
    `start` (L347: depth starts at 0, opening brace counts)."""
    depth = 0
    seen_open = False
    for i in range(start, len(lines)):
        ln = lines[i]
        # strip line comments to avoid brace-in-comment noise
        code = ln.split('//')[0]
        depth += code.count('{') - code.count('}')
        if '{' in code:
            seen_open = True
        if seen_open and depth <= 0:
            return i
    return None


def wrap_def(lines, def_idx, name, cond, tag, log):
    """Wrap a bare class def with an #if/#define/#endif convergence block."""
    end = find_block_end(lines, def_idx)
    if end is None:
        log.append(f'!! {name}: block end not found -- skipped')
        return False
    guard = [
        f'// x49 one-definition convergence ({tag})',
        cond,
        f'#define GAMEMD_DEF_{name} 1',
    ]
    lines[def_idx:def_idx] = guard
    lines[end + len(guard) + 1 - 1 + 1:end + len(guard) + 1 - 1 + 1] = ['#endif']
    log.append(f'{name}: wrapped def lines {def_idx + 1}..{end + 1}')
    return True


def apply_classes_guards(path=CLASSES, names=None, log=None):
    """classes.hpp side: wrap the 88 collision defs + ObjectClass (the
    flat-vs-tree bridge duality; marker adjudicates against utility_ext's
    using-bridge)."""
    log = log if log is not None else []
    raw = path.read_bytes().decode('latin-1')
    eol = '\r\n' if '\r\n' in raw else '\n'
    lines = raw.split(eol)
    names = names if names is not None else set(collision_names()) | {'ObjectClass'}
    nameset = set(names)
    changed = 0
    def_at = []
    for i, ln in enumerate(lines):
        m = re.match(r'^class (\w+) \{', ln) or re.match(r'^class (\w+) :', ln)
        if m and m.group(1) in nameset:
            def_at.append((i, m.group(1)))
    for i, nm in reversed(def_at):
        # idempotence: guard already present above?
        prev = eol.join(lines[max(0, i - 3):i])
        if f'GAMEMD_DEF_{nm}' in prev:
            continue
        cond = (f'#if !defined(GAMEMD_DEF_{nm}) && !defined(GAMEMD_E4_{nm})')
        if wrap_def(lines, i, nm, cond, 'classes.hpp flat def', log):
            changed += 1
    log.append(f'classes.hpp: {changed} defs wrapped')
    if APPLY and changed:
        path.write_bytes(eol.join(lines).encode('latin-1'))
    return changed


CRT_FWD_DROP = {'byte'}  # x49: rpcndr.h typedef -- never emit `class byte;`


def apply_canon_extern_types(path=CLASSES, log=None):
    """classes.hpp: drop `class <CRT-typedef>;` fwd lines (generator rule:
    EXTERN_TYPE_NAMES must never be forward-declared; 'byte' was missing)."""
    log = log if log is not None else []
    raw = path.read_bytes().decode('latin-1')
    eol = '\r\n' if '\r\n' in raw else '\n'
    lines = raw.split(eol)
    changed = 0
    for i, ln in enumerate(lines):
        m = re.match(r'^class (\w+);', ln)
        if m and m.group(1) in CRT_FWD_DROP:
            lines[i] = f'// x49: `{m.group(1)}` is a CRT typedef -- fwd dropped (C2371)'
            changed += 1
            log.append(f'byte fwd dropped (line {i + 1})')
    if APPLY and changed:
        path.write_bytes(eol.join(lines).encode('latin-1'))
    return changed


def apply_objectclass_bridge(path=UTILITY, log=None):
    """utility_ext.hpp ObjectClass bridge: adjudicate the flat-vs-tree duality.
    classes-first TU: real gamemd::ObjectClass (from classes.hpp) wins -> the
    using-bridge is skipped via GAMEMD_DEF_ObjectClass.  utility-first TU: the
    bridge alias wins -> marker set so classes.hpp suppresses its own def."""
    log = log if log is not None else []
    raw = path.read_bytes().decode('latin-1')
    eol = '\r\n' if '\r\n' in raw else '\n'
    lines = raw.split(eol)
    changed = 0
    for i, ln in enumerate(lines):
        if re.match(r'#ifndef GAMEMD_E4_UNIVERSE\b', ln) and 'G57a1' in ln and \
                i + 1 < len(lines) and 'ObjectClass' in lines[i + 1]:
            if 'GAMEMD_DEF_ObjectClass' in ln:
                break
            lines[i] = ('#if !defined(GAMEMD_E4_UNIVERSE) && '
                        '!defined(GAMEMD_DEF_ObjectClass)  // G57a1 + x49: '
                        'classes.hpp real def wins when present')
            changed += 1
            log.append(f'ObjectClass bridge condition extended (line {i + 1})')
            break
    # define the marker beside the using-bridge (inside GAMEMD_USING guard)
    for i, ln in enumerate(lines):
        if re.match(r'using\s+::ra2::game::ObjectClass\s*;', ln):
            if i + 1 < len(lines) and 'GAMEMD_DEF_ObjectClass' in lines[i + 1]:
                break
            lines.insert(i + 1, f'#define GAMEMD_DEF_ObjectClass 1  // x49: '
                                f'ObjectClass spoken for in this TU')
            changed += 1
            log.append(f'ObjectClass bridge marker set (line {i + 2})')
            break
    if APPLY and changed:
        path.write_bytes(eol.join(lines).encode('latin-1'))
    return changed


def apply_utility_guards(path=UTILITY, names=None, log=None):
    """utility_ext.hpp side: E4/G2 condition extension + unguarded wraps."""
    log = log if log is not None else []
    raw = path.read_bytes().decode('latin-1')
    eol = '\r\n' if '\r\n' in raw else '\n'
    lines = raw.split(eol)
    names = names or collision_names()
    nameset = set(names)
    changed = 0

    # classify each collision class: E4 / G2 / UNGUARDED
    kind = {}
    def_line = {}
    for i, ln in enumerate(lines):
        m = re.match(r'^(?:class|struct)[ \t]+(\w+)\s*(?:$|[{:])', ln)
        if m and m.group(1) in nameset and m.group(1) not in def_line:
            def_line[m.group(1)] = i
            k = 'UNGUARDED'
            for j in range(i - 1, max(0, i - 4), -1):
                p = lines[j]
                if re.match(r'\s*#\s*ifndef\s+GAMEMD_G2_' + re.escape(m.group(1)) + r'_DEF\b', p):
                    k = 'G2'
                    break
                if re.match(r'\s*#\s*ifndef\s+GAMEMD_E4_' + re.escape(m.group(1)) + r'\b', p):
                    k = 'E4'
                    break
                if re.match(r'\s*#\s*(if|ifndef|ifdef)\b', p):
                    k = 'OTHER:' + p.strip()[:50]
                    break
            kind[m.group(1)] = k
    for nm, k in sorted(kind.items()):
        if k.startswith('OTHER'):
            log.append(f'!! {nm}: unclassifiable guard {k} -- skipped')
    # E4 blocks: extend condition + add DEF define (preserve trailing comment)
    for i, ln in enumerate(lines):
        m = re.match(r'#ifndef GAMEMD_E4_(\w+)\s*(?://.*)?$', ln)
        if not m or m.group(1) not in nameset or kind.get(m.group(1)) != 'E4':
            continue
        nm = m.group(1)
        if f'GAMEMD_DEF_{nm}' in ln:
            continue
        cmt = ''
        mc = re.search(r'(\s//.*)$', ln)
        if mc:
            cmt = mc.group(1)
        lines[i] = (f'#if !defined(GAMEMD_E4_{nm}) && !defined(GAMEMD_DEF_{nm})'
                    + cmt)
        lines.insert(i + 1, f'#define GAMEMD_DEF_{nm} 1')
        changed += 1
        log.append(f'{nm}: E4 condition extended (+DEF define)')
    # re-scan line offsets changed above; do G2 + UNGUARDED on a fresh pass
    lines = eol.join(lines).split(eol)
    for nm in sorted(n for n, k in kind.items() if k == 'G2'):
        i = def_line[nm]
        for j in range(i - 1, max(0, i - 5), -1):
            p = lines[j]
            m = re.match(r'#ifndef GAMEMD_G2_(\w+)_DEF\b', p)
            if m and m.group(1) == nm:
                if 'GAMEMD_DEF_' in p:
                    break
                cmt = ''
                mc = re.search(r'(\s//.*)$', p)
                if mc:
                    cmt = mc.group(1)
                lines[j] = (f'#if !defined(GAMEMD_G2_{nm}_DEF) && '
                            f'!defined(GAMEMD_DEF_{nm})' + cmt)
                # find the G2 define line right after
                for k2 in range(j + 1, j + 4):
                    if re.match(r'#define GAMEMD_G2_' + re.escape(nm) + r'_DEF', lines[k2]):
                        lines.insert(k2 + 1, f'#define GAMEMD_DEF_{nm} 1')
                        break
                changed += 1
                log.append(f'{nm}: G2 twin condition extended (+DEF define)')
                break
        # def_line offsets shifted by earlier inserts; recompute lazily
        def_line = {}
        for i2, ln2 in enumerate(lines):
            m2 = re.match(r'^(?:class|struct)[ \t]+(\w+)\s*(?:$|[{:])', ln2)
            if m2 and m2.group(1) in nameset:
                def_line.setdefault(m2.group(1), i2)
    lines = eol.join(lines).split(eol)

    def current_def_index(nm):
        for i2, ln2 in enumerate(lines):
            m2 = re.match(r'^(?:class|struct)[ \t]+' + re.escape(nm) + r'\s*(?:$|[{:])', ln2)
            if m2:
                return i2
        return None

    # UNGUARDED wraps: process in REVERSE file order (each wrap shifts later
    # indices; reverse order keeps the to-be-processed indices stable)
    unguarded = sorted((n for n, k in kind.items() if k == 'UNGUARDED'),
                       key=lambda n: def_line.get(n, 0), reverse=True)
    for nm in unguarded:
        i = current_def_index(nm)
        if i is None:
            log.append(f'!! {nm}: def line lost -- skipped')
            continue
        prev = eol.join(lines[max(0, i - 3):i])
        if f'GAMEMD_DEF_{nm}' in prev:
            continue
        if wrap_def(lines, i, nm, f'#ifndef GAMEMD_DEF_{nm}', 'utility_ext tree def', log):
            changed += 1
    log.append(f'utility_ext.hpp: {changed} blocks converted')
    if APPLY and changed:
        path.write_bytes(eol.join(lines).encode('latin-1'))
    return changed


def main():
    log = []
    n1 = apply_classes_guards(log=log)
    n2 = apply_utility_guards(log=log)
    n3 = apply_canon_extern_types(log=log)
    n4 = apply_objectclass_bridge(log=log)
    for ln in log:
        print('[x49-guards]', ln)
    mode = 'APPLIED' if APPLY else 'DRY (use --apply)'
    print(f'[x49-guards] {mode}: classes={n1} utility={n2} byte={n3} bridge={n4}')
    # idempotence note
    if APPLY:
        log2 = []
        a = apply_classes_guards(log=log2)
        b = apply_utility_guards(log=log2)
        c = apply_canon_extern_types(log=log2)
        d = apply_objectclass_bridge(log=log2)
        print(f'[x49-guards] idempotence re-run: classes={a} utility={b} '
              f'byte={c} bridge={d} (expect 0/0/0/0)')


if __name__ == '__main__':
    main()
