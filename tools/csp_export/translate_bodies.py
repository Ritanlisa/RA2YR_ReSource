#!/usr/bin/env python3
"""CSP-driven body translation: replace raw offset access with member names.

Reads csp_canon_members.json (CSP output) to translate IDA pseudocode
patterns into proper C++ member access. NO type inference — pure lookup.

Per function body (between // 0xADDR annotations):
  1. Parse def line → get class name → load offset→member map
  2. Replace `this[N]` / `this + N` / `*(this + N)` → this->MemberName
  3. Track local alias: `v1 = this` → v1 gets same member map as this
  4. Track vtable-inferred types: `*v = &Cls_Vtable` → v gets Cls member map
  5. Replace `v[N]` → v->MemberName using the tracked map

Usage: python tools/csp_export/translate_bodies.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
E4 = SRC / 'e4'
APPLY = '--apply' in sys.argv

mtab = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                  .read_text(encoding='utf-8'))

# vtable symbol → class name (from gen_vtable_symbols naming)
VFTABLE_RE = re.compile(r'(?:&(?:\(void\*\*))?(\w+)_vftable\b|(?:&)?(\w+)::`vftable')
# also CCINIClass_Vtable style (hand-written)
VFTABLE_HAND = re.compile(r'&(?:\w+::)?(\w+)_Vtable\b|\b(\w+)_Vtable\b')

DEF_LINE = re.compile(
    r'^[ \t]*(?:[\w\*][\w\s\*<>,:&:]*?)?\s*(\w+)::(\w+)\s*\(', re.M)

ADDR = re.compile(r'^//\s*0x([0-9A-Fa-f]{6,8})\s*$')


def get_member_map(cls):
    """Return {byte_offset: member_name} for a class from mtab."""
    ent = mtab.get(cls)
    if not ent:
        return {}
    result = {}
    for off_str, mm in ent.get('members', {}).items():
        o = int(off_str, 0)
        nm = mm.get('name') or ''
        sz = mm.get('size') or 4
        if nm and not nm.startswith('__pad'):
            result[o] = (nm, sz)
    return result


def get_vtable_class(symbol_text):
    """Extract class name from a vtable symbol reference."""
    # BombClass_vftable → BombClass
    # CCINIClass_Vtable → CCINIClass
    # GenericNode::`vftable' → GenericNode
    m = re.search(r'(\w+)_vftable', symbol_text)
    if m:
        return m.group(1)
    m = re.search(r'(\w+)_Vtable', symbol_text)
    if m:
        return m.group(1)
    m = re.search(r'(\w+)::`vftable', symbol_text)
    if m:
        return m.group(1)
    return None


def translate_body(lines, this_cls, start, end):
    """Translate member accesses in lines[start:end] using CSP member maps.
    Returns (new_lines, n_translated)."""
    this_map = get_member_map(this_cls)
    if not this_map:
        return lines[start:end], 0

    # variable tracking: var_name → member_map
    var_maps = {'this': this_map}
    # also map common aliases
    new_lines = []
    n = 0

    # patterns for offset access
    # this[N] or this + N → this->MemberName
    THIS_OFF = re.compile(r'\bthis\s*\[\s*(\d+)\s*\]|\bthis\s*\+\s*(\d+)')

    # var[N] where var is tracked
    VAR_OFF = re.compile(r'\b(\w+)\s*\[\s*(\d+)\s*\]')

    # v = expr (assignment: track alias/type)
    ASSIGN = re.compile(r'^\s*(\w+)\s*=\s*(.+?)(?:;|$)')

    for i in range(start, end):
        ln = lines[i]
        if not ln.strip() or ln.strip().startswith('//'):
            new_lines.append(ln)
            continue

        # track assignments to update variable maps
        am = ASSIGN.match(ln)
        if am:
            var, expr = am.group(1), am.group(2).strip()
            # v = this → alias
            if expr == 'this' or expr == '(this)':
                if this_map:
                    var_maps[var] = this_map
            # v = other_var → copy alias
            elif var in ('v3', 'v2') and expr in var_maps:
                var_maps[var] = var_maps[expr]
            # *v = &Cls_Vtable → v gets Cls's member map
            vm = re.match(r'\*(\w+)\s*=\s*&(?:\w+::)?(\w+)[_]?[Vv]table', expr)
            if vm:
                vc = get_vtable_class(expr)
                if vc:
                    vmap = get_member_map(vc)
                    if vmap:
                        var_maps[vm.group(1)] = vmap
            # v = operator new / RA2_OPNEW → initially unknown, wait for vtable

        # translate this[N] / this + N
        def repl_this(m):
            nonlocal n
            off = int(m.group(1) or m.group(2))
            # for pointer arithmetic this+N means byte offset
            # for subscript this[N] means offset N*4 (DWORD)
            byte_off = off if m.group(1) else off * 4
            if byte_off in this_map:
                nm, _ = this_map[byte_off]
                n += 1
                return f'this->{nm}'
            return m.group(0)

        new_ln = THIS_OFF.sub(repl_this, ln)

        # translate var[N] for tracked variables (not this, already done)
        def repl_var(m):
            nonlocal n
            var, idx = m.group(1), int(m.group(2))
            if var in var_maps and var != 'this':
                vmap = var_maps[var]
                byte_off = idx * 4  # DWORD subscript
                if byte_off in vmap:
                    nm, _ = vmap[byte_off]
                    n += 1
                    return f'{var}->{nm}'
            return m.group(0)

        new_ln = VAR_OFF.sub(repl_var, new_ln)

        new_lines.append(new_ln)

    return new_lines, n


def main():
    n_total = n_files = 0

    for p in sorted(E4.glob('*.cpp')):
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue

        orig = list(lines)
        i = 0
        while i < len(lines):
            am = ADDR.match(lines[i].strip())
            if not am:
                i += 1
                continue

            # find def line (next line with Cls::Mth()
            j = i + 1
            while j < len(lines) and '(' not in lines[j]:
                j += 1
            if j >= len(lines):
                i += 1
                continue

            dm = DEF_LINE.search(lines[j])
            if not dm:
                i += 1
                continue

            this_cls = dm.group(1)

            # find body end (matching closing brace at same level)
            k = j
            depth = 0
            started = False
            while k < len(lines):
                depth += lines[k].count('{') - lines[k].count('}')
                if '{' in lines[k]:
                    started = True
                if started and depth <= 0:
                    break
                k += 1

            if started:
                new_block, n = translate_body(lines, this_cls, j, k + 1)
                if n > 0:
                    lines[j:k + 1] = new_block
                    n_total += n
                    n_files += 1
                    i = j + len(new_block)
                    continue

            i += 1

        if lines != orig:
            if APPLY:
                p.write_bytes('\n'.join(lines).encode('utf-8', errors='replace'))

    print(f'translate_bodies: {n_total} member accesses translated '
          f'in {n_files} files')
    print('APPLIED' if APPLY else 'DRY RUN (use --apply)')


if __name__ == '__main__':
    main()
