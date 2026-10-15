#!/usr/bin/env python3
"""X27: member-declaration type hygiene (log-driven).

Every C2143/C4430/C2238 site in a header whose member line references a
type that is not resolvable in the header's own namespace scope cascades
x3 codes in every consumer TU.  The corpus convention (techno.hpp /
house.hpp / object.hpp) is: each header forward-declares / using-imports
what it needs.  This pass does exactly that, mechanically:

  * parse the site line -> member type token (pointer-member forms only);
  * resolve the file's enclosing namespace chain at the site;
  * resolve the type's canonical home (tree ra2::game definition vs
    gamemd definition) from a one-shot corpus scan;
  * emit, right after the innermost enclosing `namespace X {` opening:
      - `class T;`            when the type lives in the SAME namespace
        (or a tree ra2::game def exists and the file is ra2::game);
      - `using ::gamemd::T;`  when the file is ra2::game and the type
        lives in gamemd;
      - `using ra2::game::T;` when the file is gamemd and the type is a
        tree ra2::game class;
  * skip: template-family names (VectorClass/DynamicVectorClass/TypeList/
    LinkedList -- X27 M2 structural round), by-value members (needs a
    COMPLETE type; separate round), `this`-param sites, SOCKET (handled
    by fix_socket_typedef below), and anything already declared in the
    file (idempotence).

Usage: python fix_member_type_hygiene.py <buildlog> [--apply] [--detail]
"""
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
DETAIL = '--detail' in sys.argv
LOG = Path(sys.argv[1])
if not LOG.is_absolute():
    LOG = ROOT / LOG

ERR_RE = re.compile(
    r'^(?P<file>.+?)\((?P<line>\d+)(?:,\d+)?\)\s*:\s*(?:fatal )?error\s+'
    r'(?P<code>C\d+|LNK\d+)\s*:\s*(?P<msg>.*?)(?:\s*\[[^\]]*\])?\s*$')
CONSUME = {'C2143', 'C4430', 'C2238'}
FWD_MARK = '// X27: member-decl type supply'
TEMPLATE_FAMILY = {'VectorClass', 'DynamicVectorClass', 'TypeList',
                   'LinkedList'}
PRIM = {'void', 'int', 'char', 'short', 'long', 'float', 'double', 'bool',
        'unsigned', 'signed', 'size_t', 'wchar_t', 'uint8_t', 'uint16_t',
        'uint32_t', 'uint64_t', 'int8_t', 'int16_t', 'int32_t', 'int64_t',
        'DWORD', 'BYTE', 'WORD', 'HWND', 'FILE', 'LPARAM', 'WPARAM',
        'HRESULT', 'UINT', 'BOOL', 'INT', 'LPVOID', 'HANDLE', 'HMODULE',
        'HINSTANCE', 'SOCKET', 'this'}

MEMBER_PTR_RE = re.compile(
    r'^\s*(?P<ty>[A-Za-z_]\w*(?:::\w+)?)\s*\*\s*(?P<nm>[A-Za-z_]\w*)'
    r'\s*(?:\[[^\]]*\])?\s*;')
NS_OPEN_RE = re.compile(r'^\s*namespace\s+([A-Za-z_]\w*)\s*\{')
NS_OPEN_ANY_RE = re.compile(r'\bnamespace\s+([A-Za-z_]\w*)\s*\{')
NS_BARE_RE = re.compile(r'^\s*namespace\s+([A-Za-z_]\w*)\s*$')


def _ns_opens_on_line(l):
    """[(name, brace_is_next_line)] for namespace openings on this line."""
    out = [(mo.group(1), False) for mo in NS_OPEN_ANY_RE.finditer(l)]
    if not out:
        mb = NS_BARE_RE.match(l)
        if mb:
            out.append((mb.group(1), True))
    return out
DECL_IN_FILE_RE = r'\b(?:class|struct|union|enum)\s+%s\b' \
                  r'|\btypedef\b[^;]*\b%s\b|\busing\s+(?:::)?[\w:]*\b%s\b'


def short(p):
    p = p.replace('\\', '/')
    i = p.lower().find('ra2yr_resource/')
    return p[i + len('ra2yr_resource/'):] if i >= 0 else p


def build_type_index():
    """name -> set of namespaces where a class/struct definition lives."""
    home = defaultdict(set)
    head_re = re.compile(
        r'^\s*(?:template\s*<[^>]*>\s*)?(class|struct)\s+(\w+)\b(?P<rest>.*)$')
    for hp in sorted(SRC.rglob('*.hpp')):
        try:
            text = hp.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        lines = text.split('\n')
        for i, l in enumerate(lines):
            m = head_re.match(l)
            if not m:
                continue
            rest = m.group('rest')
            is_def = '{' in rest
            if not is_def and not rest.rstrip().endswith(';'):
                for j in range(i + 1, min(i + 5, len(lines))):
                    lj = lines[j].strip()
                    if '{' in lj:
                        is_def = True
                        break
                    if ';' in lj:
                        break
            if not is_def:
                continue
            ns = '::'.join(s[0] for s in ns_chain_at(lines, i))
            home[m.group(2)].add(ns or '(global)')
    return home


def ns_chain_at(lines, upto):
    """[(ns, depth, brace_line_idx)] stack at line index `upto`.
    Handles: `namespace X {` same-line, `namespace X` + `{` next line, and
    single-line `namespace X { ... }` (pushed then immediately popped)."""
    depth = 0
    stack = []
    compensate = set()
    for i in range(upto + 1):
        l = lines[i]
        for (name, next_line) in _ns_opens_on_line(l):
            stack.append((name, depth + 1, i + 1 if next_line else i))
            if next_line:
                depth += 1
                compensate.add(i + 1)
        delta = l.count('{') - l.count('}')
        if i in compensate:
            delta -= 1
        depth += delta
        while stack and depth < stack[-1][1]:
            stack.pop()
    return stack


def main():
    home = build_type_index()
    sites = defaultdict(set)     # file -> {line}
    for line in LOG.read_text(encoding='utf-8', errors='replace').split('\n'):
        m = ERR_RE.match(line.strip())
        if not m or m.group('code') not in CONSUME:
            continue
        f = short(m.group('file'))
        if not f.endswith(('.hpp', '.h')):
            continue
        sites[f].add(int(m.group('line')))

    plans = []      # (file, [(kind, ns_chain, type, line)])
    skipped = Counter()
    for f, lns in sorted(sites.items()):
        p = ROOT / f
        if not p.exists():
            continue
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        text = '\n'.join(lines)
        file_needs = {}
        for ln in sorted(lns):
            src = lines[ln - 1] if 0 < ln <= len(lines) else ''
            mm = MEMBER_PTR_RE.match(src)
            if not mm:
                skipped['unparsed'] += 1
                continue
            ty = mm.group('ty')
            if ty in PRIM or ty in TEMPLATE_FAMILY:
                skipped[('skip-' + ty) if ty in TEMPLATE_FAMILY else 'prim'] += 1
                continue
            if '::' in ty:
                skipped['qualified'] += 1
                continue
            if re.search(DECL_IN_FILE_RE % (ty, ty, ty), text):
                skipped['declared'] += 1
                continue
            chain = [s[0] for s in ns_chain_at(lines, ln - 1)]
            homes = home.get(ty, set())
            tree_home = any(h.startswith('ra2') for h in homes)
            gamemd_home = any(h == 'gamemd' for h in homes)
            global_home = '(global)' in homes
            file_is_ra2game = chain[:2] == ['ra2', 'game']
            if file_is_ra2game:
                if gamemd_home:
                    kind, ns = 'using-gamemd', 'ra2::game'
                elif global_home:
                    kind, ns = 'using-global', 'ra2::game'
                else:
                    kind, ns = 'fwd', 'ra2::game'   # tree_home or unknown
            else:
                # gamemd-scope file
                if tree_home:
                    kind, ns = 'using-ra2', '::'.join(chain) or '(global)'
                elif global_home:
                    kind, ns = 'using-global', '::'.join(chain) or '(global)'
                else:
                    kind, ns = 'fwd', '::'.join(chain) or '(global)'
            file_needs.setdefault((kind, ns, ty), ln)
        if file_needs:
            plans.append((f, file_needs))

    n_files = len(plans)
    n_decls = sum(len(v) for _, v in plans)
    print('files to touch: %d ; decls to add: %d' % (n_files, n_decls))
    for f, needs in plans:
        print('  %s' % f)
        for (kind, ns, ty), ln in sorted(needs.items(), key=lambda kv: kv[0][2]):
            if DETAIL:
                print('      %-13s %-12s %s  (site L%d)' % (kind, ns, ty, ln))
    print('skipped: %s' % dict(skipped))

    if not APPLY:
        print('DRY RUN (use --apply)')
        return

    for f, needs in plans:
        p = ROOT / f
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        # insertion: after the innermost namespace opening enclosing sites
        first_ln = min(needs.values())
        chain = ns_chain_at(lines, first_ln - 1)
        at = chain[-1][2] + 1 if chain else None
        if at is None:
            at = 0
            for i, l in enumerate(lines):
                if l.strip().startswith('#include'):
                    at = i + 1
            if at == 0 and lines and lines[0].strip() == '#pragma once':
                at = 1
        ns_block = ['    // X27: member-decl type supply (log-driven hygiene)']
        global_block = []
        for (kind, ns, ty), ln in sorted(needs.items(), key=lambda kv: kv[0][2]):
            if kind == 'fwd':
                ns_block.append('    class %s;' % ty)
            elif kind == 'using-gamemd':
                # qualified fwd MUST be at global scope: inside a namespace it
                # would declare a NESTED namespace and shadow ::gamemd.
                global_block.append('namespace gamemd { class %s; }  %s'
                                    % (ty, FWD_MARK))
                ns_block.append('    using ::gamemd::%s;' % ty)
            elif kind == 'using-global':
                ns_block.append('    using ::%s;' % ty)
            else:
                global_block.append('namespace ra2 { namespace game '
                                    '{ class %s; } }  %s' % (ty, FWD_MARK))
                ns_block.append('    using ra2::game::%s;' % ty)
        lines[at:at] = ns_block
        if global_block:
            # global scope: right after the last leading #include block
            g_at = 0
            for i, l in enumerate(lines):
                if l.strip().startswith('#include'):
                    g_at = i + 1
            if g_at == 0 and lines and lines[0].strip() == '#pragma once':
                g_at = 1
            lines[g_at:g_at] = global_block
        p.write_text('\n'.join(lines), encoding='utf-8')
    print('APPLIED to %d file(s)' % n_files)


if __name__ == '__main__':
    main()
