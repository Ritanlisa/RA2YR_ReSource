#!/usr/bin/env python3
"""Comprehensive e4 class-header repair (converge battery v2).

Patterns (each independently counted, all log-driven from G37 recon):
 1. drop '// def-aligned' STATEMENT leaks in class bodies (else/case/goto/
    if/for/while/switch/return/LABEL_ starters) -- generator find_def matched
    call lines and emitted them as decls
 2. duplicate parameter names in one decl (C2086 'aP0 redefinition'):
    second+ occurrences get _2/_3 suffix
 3. 'struct void*' -> 'void*' ; 'struct X::Y *' nested-qualified pointers
    -> 'void*' (cannot fwd-declare nested classes)
 4. drop '__noreturn' token (not valid MSVC6-era decl syntax -> C3646)
 5. 'SOCKET' in decls -> 'unsigned int' (4B handle; winsock not includable
    in flat universe)
 6. trailing junk after complete decl: 'int Prepend(int a2);aP1);' -> strip
 7. 'gamemd::void' -> 'void' (C2589)
 8. duplicate data-member names within one class (C2086 member redefinition)
    -> drop later line
 9. by-value params of fwd-only types ('IUnknown aP2') -> 'void* aP2'
10. garbage function-pointer decls containing '__thiscall'/'int this'
    -> simplify to 'RET Name();'
11. inject '#undef CreateDialog' style guards: Win32 function-like macros
    colliding with method names (CreateDialog proven; others appended as
    discovered)

Usage: python tools/csp_export/fix_e4_headers_v2.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / 'src' / 'e4' / 'classes'
FWD = E4C / '_fwd_e4.hpp'
APPLY = '--apply' in sys.argv

STATS = {}

# fwd-only types (in _fwd, not fully defined in any e4 class header)
fwd_only = set()
if FWD.exists():
    ftxt = FWD.read_text(encoding='utf-8', errors='replace')
    fwd_only = set(re.findall(r'^struct\s+(\w+)\s*;', ftxt, re.M))
    defined = set()
    for p in E4C.glob('*_e4.hpp'):
        if p.name.startswith('_'):
            continue
        defined |= set(re.findall(r'^[ \t]*struct\s+(\w+)\s*\{', p.read_text(
            encoding='utf-8', errors='replace'), re.M))
    fwd_only -= defined

STMT_START = re.compile(
    r'^\s*(?:else\b|case\b|goto\b|if\s*\(|for\s*\(|while\s*\(|switch\s*\(|'
    r'return\b|\{|\}|do\b|LABEL_\d+\s*:)')
DECL_LINE = re.compile(r';\s*(?://.*)?$')
DUP_PARAM = re.compile(r'\b([Aa][Pp]\d+)\b')
IDENT = re.compile(r'^[A-Za-z_]\w*$')
WIN32_MACRO_METHODS = ['CreateDialog']


def fix_line(line, cls_members):
    """Return (new_line_or_None, stats_tags). None = drop line."""
    tags = []
    raw = line.rstrip('\r\n')
    stripped = raw.strip()

    # 1. def-aligned statement leaks
    if stripped.endswith('// def-aligned') and STMT_START.match(stripped):
        return None, ['leak-stmt']

    # 4. __noreturn
    if '__noreturn' in raw:
        raw = re.sub(r'\s*__noreturn\s*', ' ', raw)
        tags.append('noreturn')

    # 7. gamemd::void
    if re.search(r'gamemd::\s*void', raw):
        raw = re.sub(r'gamemd::\s*(void\b)', r'\1', raw)
        tags.append('gnsvoid')

    # 3a. struct void*
    if re.search(r'\bstruct\s+void\s*\*', raw):
        raw = re.sub(r'\bstruct\s+(void\s*\*)', r'\1', raw)
        tags.append('struct-void')

    # 3b. struct X::Y (nested qualified) -> void (pointer or by-value)
    m = re.search(r'\bstruct\s+(\w+)::(\w+)', raw)
    if m:
        raw = re.sub(r'\bstruct\s+\w+::\w+(\s*\*?)', lambda mm:
                     'void*' if mm.group(1) else 'void*', raw)
        tags.append('nested-qual')

    # 10a. 'this' used as a parameter name in decls (illegal keyword)
    if re.search(r'\(\*{1,2}this\)', raw):
        raw = re.sub(r'\(\*{1,2}this\)', lambda mm: mm.group(0)[:-1] + 'thisArg)', raw)
        tags.append('this-param')

    # 10. garbage fn-ptr decls with __thiscall / 'int this'
    if '__thiscall' in raw and '(' in raw:
        m = re.match(r'^(\s*)([\w]+(?:\s*\*)*)\s+(\w+)\s*\(.*$', raw)
        if m:
            raw = '%s%s %s();' % (m.group(1), m.group(2), m.group(3))
            tags.append('thiscall-garbage')

    # 6. trailing junk after complete decl: `...);aP1);`
    m = re.match(r'^([^=;(]*(\w+\s*\([^()]*\))\s*;)\s*[A-Za-z_]\w*\s*\)\s*;'
                 r'(?=\s*(?://.*)?$)', raw)
    if m:
        raw = m.group(1)
        tags.append('trailing-junk')

    # 2. duplicate parameter names inside parens
    def _dup_params(mm):
        inner = mm.group(1)
        seen = {}
        def _sub(m2):
            n = m2.group(1)
            if n in seen:
                seen[n] += 1
                return '%s_%d' % (n, seen[n])
            seen[n] = 1
            return n
        return '(' + DUP_PARAM.sub(_sub, inner) + ')'
    if re.search(r'\(\s*[^()]*\b[Aa][Pp]\d+[^()]*\)', raw):
        new = re.sub(r'\(([^()]*)\)', _dup_params, raw)
        if new != raw:
            raw = new
            tags.append('dup-param')

    # 9. by-value fwd-only struct params -> void*
    def _byval(mm):
        t = mm.group(1)
        if t in fwd_only:
            tags.append('byval-fwd')
            return 'void* '
        return mm.group(0)
    raw = re.sub(r'\b([A-Za-z_]\w*)\s+(a[A-Z]\w*|v\d+|Str\d)\b(?!\s*\()',
                 _byval, raw) if False else raw
    # (targeted: only the exact IUnknown-like pattern inside params)
    if re.search(r'\(([^()]*)\)', raw):
        def _param_fix(mm):
            inner = mm.group(1)
            def _one(p):
                pm = re.match(r'^\s*(IUnknown|IStream|IDispatch|ISequentialStream)'
                              r'\s+(\w+)\s*$', p)
                if pm:
                    tags.append('byval-iface')
                    return 'void* %s' % pm.group(2)
                return p
            return '(' + ', '.join(_one(p) for p in inner.split(', ')) + ')'
        raw = re.sub(r'\(([^()]*)\)', _param_fix, raw)

    # 5. SOCKET -> unsigned int (word-boundary, not inside longer idents)
    if re.search(r'\bSOCKET\b', raw):
        raw = re.sub(r'\bSOCKET\b', 'unsigned int', raw)
        tags.append('socket')

    # 8. duplicate data members in class (name must be a full identifier:
    # type words then identifier then ';', no parens, no stmt keywords)
    mm = re.match(r'^\s*(?:[A-Za-z_]\w*(?:\s+|\s*\*+\s*))+([A-Za-z_]\w*)'
                  r'\s*;\s*(?://.*)?$', raw)
    code_part = raw.split('//')[0]
    if mm and '(' not in code_part and not re.match(
            r'^\s*(?:return|else|case|typedef|using|namespace|struct|class|'
            r'enum|union|template|operator|friend)\b', raw):
        name = mm.group(1)
        if name in cls_members and not raw.lstrip().startswith(('static', 'virtual')):
            return None, ['dup-member']
        cls_members.add(name)

    if raw != line.rstrip('\r\n') or tags:
        return raw, tags
    return raw, []


def main():
    n_files = 0
    for p in sorted(E4C.glob('*_e4.hpp')):
        if p.name.startswith('_'):
            continue
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        out = []
        changed = False
        depth = 0
        cls_stack = []
        for line in lines:
            raw0 = line.rstrip('\r\n')
            if re.match(r'^[ \t]*(?:class|struct)\s+\w+[^;]*\{', raw0):
                cls_stack.append(set())
            elif raw0.strip() == '};' and cls_stack:
                cls_stack.pop()
            cls_members = cls_stack[-1] if cls_stack else set()
            new, tags = fix_line(line, cls_members)
            for t in tags:
                STATS[t] = STATS.get(t, 0) + 1
            if new is None:
                changed = True
                continue
            if new != line.rstrip('\r\n'):
                changed = True
            out.append(new)
        # 11. Win32 macro collisions: inject #undef before namespace
        if any(re.search(r'\b%s\s*\(' % m, '\n'.join(out))
               for m in WIN32_MACRO_METHODS):
            ins = []
            done = False
            for line in out:
                if not done and line.startswith('namespace gamemd'):
                    ins.append('#ifdef ' + WIN32_MACRO_METHODS[0])
                    ins.append('#undef ' + WIN32_MACRO_METHODS[0])
                    ins.append('#endif')
                    done = True
                    STATS['undef-macro'] = STATS.get('undef-macro', 0) + 1
                ins.append(line)
            out = ins
            changed = True
        if changed:
            n_files += 1
            if APPLY:
                p.write_text('\n'.join(out), encoding='utf-8')
    # B: typedefs into _fwd_e4.hpp (idempotent)
    if FWD.exists():
        ftxt = FWD.read_text(encoding='utf-8', errors='replace')
        add = ''
        if 'typedef unsigned short u_short;' not in ftxt:
            add += ('#ifndef _G37_U_SHORT\n'
                    '#define _G37_U_SHORT\n'
                    'typedef unsigned short u_short;\n'
                    'typedef unsigned long u_long;\n'
                    '#endif\n')
        if add:
            m = re.search(r'^namespace gamemd \{\s*$', ftxt, re.M)
            if m:
                ftxt = ftxt[:m.end()] + '\n' + add + ftxt[m.end():]
                STATS['fwd-typedefs'] = 1
                if APPLY:
                    FWD.write_text(ftxt, encoding='utf-8')
    print('files changed:', n_files)
    for k, v in sorted(STATS.items()):
        print('  %-14s %d' % (k, v))
    if not APPLY:
        print('(dry run -- pass --apply)')


if __name__ == '__main__':
    main()
