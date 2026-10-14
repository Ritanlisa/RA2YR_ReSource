#!/usr/bin/env python3
"""X26: repair the W20L4-T2 Constructor-supply eaten-head damage.

The W20L4 T2 supply pass (`.omo/g57w20l4_t2_ctor.py`) inserted one-line
`Class::Constructor(void*)` forwarding defs before six constructor defs.
A later "dup head" cleanup then removed the WRONG copy in three files:
the current ctor head survived further down the file, while a STALE copy of
the ctor body (with the pre-rename `aP1` receiver) stayed orphaned directly
under the supply one-liner at namespace scope.

Findings (git-verified against ce79af6b / f276ca8f and the current tree):
  - INIClass / RulesClass / SessionClass: a duplicate stale body is orphaned
    under the one-liner; the live `this`-based ctor def exists later in the
    same file -> DELETE the orphan (C2040 `gamemd::gamemd::result` +
    C2447 cascades clear).
  - WinsockInterfaceClass: NO live ctor def exists -> RESTORE the head
    (`}` + `// 0x7B1AB0` + namespace + ctor + `{`), rewrite the body's
    `aP1` receiver to `this`, add the matching extra closer.
  - PageUserCommandClass: supply + ctor def both removed (two unclosed
    namespaces) -> re-insert both.
  - ScenarioClass: supply one-liner gone (empty namespace block) ->
    re-insert the static forwarding def.

Every edit is brace-depth-checked (must end at 0).  Idempotent; dry-run
default.

Usage: python tools/csp_export/_absorbed/step2_decl/fix_w20l4_eaten_heads.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
STRIP_BLOCK = re.compile(r'/\*.*?\*/', re.S)
STRIP_LINE = re.compile(r'//[^\n]*')
STRIP_DQ = re.compile(r'"(?:\\.|[^"\\])*"')
STRIP_SQ = re.compile(r"'(?:\\.|[^'\\])*'")

NEXT_BLOCK = re.compile(r'\n\}\n(?:\}\n)?// 0x[0-9A-Fa-f]+')


def depth(text):
    s = STRIP_BLOCK.sub('', text)
    s = STRIP_LINE.sub('', s)
    s = STRIP_DQ.sub('""', s)
    s = STRIP_SQ.sub("''", s)
    d = 0
    for ch in s:
        if ch == '{':
            d += 1
        elif ch == '}':
            d -= 1
    return d


def delete_orphan(text, one_liner):
    """Delete the stale orphaned body between one-liner and next block."""
    idx = text.find(one_liner)
    if idx < 0:
        return None, False
    start = idx + len(one_liner)
    m = NEXT_BLOCK.search(text, start)
    if not m:
        return None, False
    out = text[:start] + m.group(0) + text[m.end():]
    return out, out != text


def restore_head(text, one_liner, head_lines):
    """Insert head after one-liner + extra closer before next block."""
    idx = text.find(one_liner)
    if idx < 0:
        return None, False
    head_marker = '\n'.join(head_lines)
    if text.find(head_marker, idx) >= 0:
        return text, False
    old = one_liner + '\n\n'
    oidx = text.find(old, idx)
    if oidx < 0:
        return None, False
    m = re.match(r'([ \t]*\S[^\n]*)', text[oidx + len(old):])
    if not m:
        return None, False
    body_first = m.group(1)
    new = (one_liner + '\n' + head_marker + '\n\n' + body_first)
    text = text[:oidx] + new + text[oidx + len(old) + len(body_first):]
    start = text.index(new) + len(new)
    m2 = NEXT_BLOCK.search(text, start)
    if not m2:
        return None, False
    span = text[start:m2.start() + 3]
    text = text[:start] + span.replace('aP1', 'this') + text[m2.start() + 3:]
    m3 = NEXT_BLOCK.search(text, start)
    if not m3:
        return None, False
    text = (text[:m3.start()] + '\n}\n' + text[m3.start():])
    return text, True


DELETE_CASES = [
    ('src/e4/INIClass_e4.cpp',
     'void * INIClass::Constructor(void *aP1) { return new (aP1) INIClass(); }'),
    ('src/e4/RulesClass_e4.cpp',
     'int RulesClass::Constructor(void *aP1) { return (int)(void *)(new (aP1) RulesClass()); }'),
    ('src/e4/SessionClass_e4.cpp',
     'void * SessionClass::Constructor(void *aP1) { return new (aP1) SessionClass(); }'),
]

RESTORE_CASES = [
    ('src/e4/WinsockInterfaceClass_e4.cpp',
     'void WinsockInterfaceClass::Constructor(void *aP1) { new (aP1) WinsockInterfaceClass(); }',
     ['}', '// 0x7B1AB0', 'namespace gamemd {  // G42.18c ns repair',
      'WinsockInterfaceClass::WinsockInterfaceClass()', '{']),
]

PUC_OLD = ('// 0x537DD0 site-form Constructor supply (W20L4 T2; forwards to ctor def)\n'
           'namespace gamemd {\n'
           '// 0x537DE0\n')
PUC_NEW = ('// 0x537DD0 site-form Constructor supply (W20L4 T2; forwards to ctor def)\n'
           'namespace gamemd {\n'
           'void * PageUserCommandClass::Constructor(void *aP1) '
           '{ return new (aP1) PageUserCommandClass(); }\n'
           '}\n'
           'PageUserCommandClass::PageUserCommandClass()\n{\n'
           '  *(unsigned int *)this->CommandClass = (unsigned int)(&vt_PageUserCommandClass); /*0x537dd2*/\n'
           '  return; /*0x537dd8*/\n'
           '}\n'
           '}  // G42.18c ns repair\n'
           '// 0x537DE0\n')

SC_OLD = ('// 0x6832C0 static site-form Constructor supply (W20L4 T2; forwards to member ctor below per raw fn_68.c:3392)\n'
          'namespace gamemd {\n}\n}\n}\n')
SC_NEW = ('// 0x6832C0 static site-form Constructor supply (W20L4 T2; forwards to member ctor below per raw fn_68.c:3392)\n'
          'namespace gamemd {\n'
          'int ScenarioClass::Constructor(void *aP1) '
          '{ return ((ScenarioClass *)aP1)->Constructor(); }\n'
          '}\n'
          '}\n'
          '}\n')


def report(tag_rel, d0, out):
    d1 = depth(out)
    ok = d1 == 0
    tag = 'APPLY' if (APPLY and ok) else 'DRY'
    note = '' if ok else '  !! UNBALANCED — SKIP'
    print(f'{tag} {tag_rel}: depth {d0} -> {d1}{note}')
    return ok


def main():
    n = 0
    for rel, one_liner in DELETE_CASES:
        p = ROOT / rel
        text = p.read_text(encoding='utf-8', errors='replace')
        out, changed = delete_orphan(text, one_liner)
        if out is None:
            print('SKIP(anchor-miss)', rel)
            continue
        if not changed:
            print('already', rel)
            continue
        if report(rel, depth(text), out) and APPLY:
            p.write_text(out, encoding='utf-8')
            n += 1
    for rel, one_liner, head in RESTORE_CASES:
        p = ROOT / rel
        text = p.read_text(encoding='utf-8', errors='replace')
        out, changed = restore_head(text, one_liner, head)
        if out is None:
            print('SKIP(anchor-miss)', rel)
            continue
        if not changed:
            print('already', rel)
            continue
        if report(rel, depth(text), out) and APPLY:
            p.write_text(out, encoding='utf-8')
            n += 1
    for rel, old, new in (('src/e4/PageUserCommandClass_e4.cpp', PUC_OLD, PUC_NEW),
                          ('src/e4/ScenarioClass_e4.cpp', SC_OLD, SC_NEW)):
        p = ROOT / rel
        text = p.read_text(encoding='utf-8', errors='replace')
        if new in text:
            print('already', rel)
            continue
        if old not in text:
            print('SKIP(anchor-miss)', rel)
            continue
        out = text.replace(old, new, 1)
        if report(rel, depth(text), out) and APPLY:
            p.write_text(out, encoding='utf-8')
            n += 1
    print('files repaired:', n)


if __name__ == '__main__':
    main()
