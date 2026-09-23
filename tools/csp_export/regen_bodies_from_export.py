#!/usr/bin/env python3
"""Step-4 redo: regenerate EVERY function body from the fresh IDA export.

The tree's bodies carry generation-era artifacts (dead stub returns before
the real code, naked `{` wrapper layers, `#if 0` remains). Per the user's
architecture the raw IDA decompiled code IS the implementation -- so the
bodies are replaced WHOLESALE from the fresh typed export
(decompile-results/full_export, `// ---- Hex-Rays ----` blocks); old bodies
are discarded, not patched.

Per cpp definition (annotation `// 0xADDR` + def line):
  - fresh pseudocode exists -> body := pseudocode (outer braces stripped,
    re-indented 2 spaces), def line kept (canon signature authority)
  - no fresh pseudocode / decompile failed -> body kept, logged
Every decision lands in .omo/regen_bodies_manifest.json (addr -> action,
old/new line counts) so nothing is overwritten silently.

Usage: python tools/csp_export/regen_bodies_from_export.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from _blockspan import brace_delta

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
EXPORT = ROOT / 'decompile-results' / 'full_export' / 'src'
APPLY = '--apply' in sys.argv

ADDR_LINE = re.compile(r'^//\s*0x([0-9A-Fa-f]{6,8})\s*$')
BLOCK_HEAD = re.compile(r'^// =+$')

# ---- load fresh export: addr -> pseudocode text ----
pseudo = {}
for p in sorted(EXPORT.glob('*.cpp')):
    t = p.read_text(encoding='utf-8', errors='replace')
    cur_addr = None
    in_hr = False
    hr = []
    for ln in t.split('\n'):
        if BLOCK_HEAD.match(ln):
            if cur_addr and hr:
                pseudo[cur_addr] = '\n'.join(hr).strip('\n')
            cur_addr = None
            in_hr = False
            hr = []
            continue
        if cur_addr is None and not in_hr:
            # the addr line sits right after the `// ====` header block
            m = re.search(r'addr=0x([0-9A-Fa-f]{6,8})', ln)
            if m:
                cur_addr = int(m.group(1), 16)
            continue
        if ln.strip() == '// ---- Hex-Rays ----':
            in_hr = True
            continue
        if in_hr:
            hr.append(ln)
    if cur_addr and hr:
        pseudo[cur_addr] = '\n'.join(hr).strip('\n')

print('fresh pseudocode blocks:', len(pseudo))


def body_from_pseudo(code):
    """Skip the signature line(s); body = first bare `{` .. last bare `}`,
    re-indented by 2 spaces."""
    lines = code.split('\n')
    start = next((i for i, ln in enumerate(lines) if ln.strip() == '{'),
                 None)
    if start is None:
        return None
    end = next((i for i in range(len(lines) - 1, start, -1)
                if lines[i].strip() == '}'), None)
    if end is None or end <= start:
        return None
    inner = lines[start + 1:end]
    out = []
    for ln in inner:
        if ln.strip():
            out.append('  ' + ln if not ln.startswith('  ') else ln)
        else:
            out.append('')
    return '\n'.join(out)


manifest = {}
tot_rep = tot_keep = 0
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    orig = list(lines)
    i = 0
    while i < len(lines):
        m = ADDR_LINE.match(lines[i].strip())
        if not m:
            i += 1
            continue
        addr = int(m.group(1), 16)
        # def line = next line containing '('
        j = i + 1
        while j < len(lines) and '(' not in lines[j]:
            j += 1
        if j >= len(lines):
            i += 1
            continue
        # body span: first '{' at/after def line to balanced close
        k = j
        depth = 0
        started = False
        while k < len(lines):
            depth += brace_delta(lines[k])
            if not started and brace_delta(lines[k]) > 0:
                started = True
            if started and depth <= 0:
                break
            k += 1
        if not started or k >= len(lines):
            i += 1
            continue
        code = pseudo.get(addr)
        new_body = body_from_pseudo(code) if code else None
        rel = str(p.relative_to(ROOT)).replace('\\', '/')
        if new_body is None:
            manifest['%X' % addr] = {'file': rel, 'action': 'kept',
                                     'reason': 'no fresh pseudocode'}
            tot_keep += 1
            i = k + 1
            continue
        old_len = k - j
        new_lines = lines[j].split('(')[0]
        # rebuild: def line + '{' + body + '}'
        def_line = lines[j]
        indent = re.match(r'\s*', lines[j]).group(0)
        body_lines = [(indent + '  ' + bl[2:]).rstrip()
                      if bl.strip() else ''
                      for bl in new_body.split('\n')]
        repl = [def_line] + body_lines + [indent + '}']
        lines[j:k + 1] = repl
        manifest['%X' % addr] = {'file': rel, 'action': 'replaced',
                                 'old_lines': old_len,
                                 'new_lines': len(repl) - 1}
        tot_rep += 1
        i = j + len(repl)
    if lines != orig and APPLY:
        # tree convention is latin-1; fresh pseudocode may carry exotic
        # chars from IDA string literals -> replace, never crash
        p.write_bytes('\n'.join(lines).encode('latin-1', errors='replace'))

print('bodies replaced:', tot_rep)
print('bodies kept (no fresh code):', tot_keep)
manifest['_meta'] = {'replaced': tot_rep, 'kept': tot_keep,
                     'apply': APPLY}
if APPLY:
    (ROOT / '.omo' / 'regen_bodies_manifest.json').write_text(
        json.dumps(manifest, indent=1), encoding='utf-8')
    print('manifest written')
else:
    print('DRY RUN (use --apply)')
