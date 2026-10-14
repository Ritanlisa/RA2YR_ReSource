#!/usr/bin/env python3
"""X26: drop exact duplicate method declarations inside e4 class headers
(C2535 "member function already defined" / C2572 "redefinition of default
parameter" family: String::Equals x2, FacingClass::Update x2,
TechnoTypeClass::DTOR, Techno::StartInvulnerability, BinkMovie::IsAtEnd).

Rule: within one struct/class block, a method declaration whose normalized
(name, param list without defaults, static/virtual qualifiers) signature
already appeared earlier is dropped (keep-first).  Data members and
different-arity overloads are untouched.  Idempotent; dry-run by default.

Usage: python tools/csp_export/_absorbed/step2_decl/fix_dup_method_decls.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
E4C = ROOT / 'src' / 'e4' / 'classes'

STRUCT_RE = re.compile(r'^\s*(?:struct|class)\s+(\w+)\s*(?::[^;{]*)?\{')
END_RE = re.compile(r'^\s*\};')
METHOD_RE = re.compile(
    r'^\s*((?:static\s+|virtual\s+|inline\s+|constexpr\s+)*)'
    r'([\w:\s\*&<>,\[\]~]+?)\b(\w+|~\w+)\s*\(([^;{}]*)\)\s*;'
    r'\s*(//.*)?$')
DEFAULT_RE = re.compile(r'\s*=\s*[^,]*$')


def norm_params(ps):
    ps = ps.strip()
    if not ps or ps == 'void':
        return ''
    out = []
    for p in re.split(r',(?![^()]*\))', ps):
        p = DEFAULT_RE.sub('', p.strip())
        p = re.sub(r'\s+', ' ', p)
        out.append(p)
    return ', '.join(out)


def main():
    total = files = 0
    for p in sorted(E4C.glob('*.hpp')):
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        cls = None
        seen = {}
        drop = []
        for i, l in enumerate(lines):
            sm = STRUCT_RE.match(l)
            if sm:
                cls = sm.group(1)
                seen = {}
                continue
            if END_RE.match(l):
                cls = None
                continue
            if not cls:
                continue
            mm = METHOD_RE.match(l)
            if not mm:
                continue
            qual = ' '.join(mm.group(1).split())
            name = mm.group(3)
            params = norm_params(mm.group(4))
            key = (cls, qual, name, params)
            if key in seen:
                drop.append(i)
            else:
                seen[key] = i
        if drop:
            files += 1
            total += len(drop)
            for i in drop:
                print(f'  dup method {p.name}:{i + 1} {lines[i].strip()[:110]}')
            if APPLY:
                for i in reversed(drop):
                    del lines[i]
                p.write_text('\n'.join(lines), encoding='utf-8')
    suffix = '(written)' if APPLY else '(DRY)'
    print(f'duplicate method decls dropped: {total} in {files} files {suffix}')


if __name__ == '__main__':
    main()
