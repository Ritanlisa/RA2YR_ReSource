#!/usr/bin/env python3
"""Repair the wrong subset of the demoted-this commit (33783fcf).

Spot-check finding (AnimTypeCopy): the fixer dropped the first param for
functions whose corpus def had ALREADY correctly dropped the this — the
param was a real argument (peer object). Correct discriminator:
  T = IDA original __thiscall signature param count (this + stack args)
  C = PRE-FIX corpus def param count
  C == T      -> this retained in corpus -> demotion was CORRECT, keep
  C == T - 1  -> this already dropped     -> demotion WRONG, revert block

Revert = restore the function block from the parent commit content.

Usage: python tools/csp_export/repair_demoted_this.py [--apply]
"""
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
COMMIT = '33783fcf'
# def-block anchors come in TWO styles: header `// 0xADDR` above the def,
# and inline `/*0xADDR*/` (bodies). The def's OWN anchor is the header one.
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]+)\*/|//\s*0x([0-9a-fA-F]+)\s*$')


def anchor_val(line):
    m = ANCHOR.search(line)
    if not m:
        return None
    g = m.group(1) or m.group(2)
    return int(g, 16)

files = subprocess.run(
    ['git', 'show', COMMIT, '--name-only', '--format='],
    capture_output=True, text=True, cwd=ROOT).stdout.split()
corpus = [f for f in files if f.endswith('.cpp')]
print('corpus files touched:', len(corpus))

DEF = re.compile(
    r'^([A-Za-z_][\w\s\*:<>,&]*?)\b([A-Za-z_]\w*)::([A-Za-z_~]\w*)\s*'
    r'\(([^)]*)\)')


def ida_param_count(addr):
    try:
        d = json.load(open(ROOT / '.omo' / 'ida_cache' /
                           ('func_0x%X.json' % addr), encoding='utf-8'))
    except OSError:
        return None
    head = d.get('decompiled', '').split('\n', 1)[0]
    if '__thiscall' not in head:
        return None
    m = re.search(r'\((.*)\)', head)
    if not m:
        return None
    inner = m.group(1).strip()
    if not inner:
        return 1
    # count top-level commas (fn-ptr params have their own commas)
    depth = 0
    cnt = 1
    for ch in inner:
        if ch in '(<[':
            depth += 1
        elif ch in ')>]':
            depth -= 1
        elif ch == ',' and depth == 0:
            cnt += 1
    return cnt


def count_params(sig_params):
    s = sig_params.strip()
    if not s:
        return 0
    depth = 0
    cnt = 1
    for ch in s:
        if ch in '(<[':
            depth += 1
        elif ch in ')>]':
            depth -= 1
        elif ch == ',' and depth == 0:
            cnt += 1
    return cnt


def block_span(lines, i):
    """def at line i -> (start, end) of the whole function block."""
    d = 0
    for j in range(i, len(lines)):
        d += lines[j].count('{') - lines[j].count('}')
        if d <= 0 and j > i:
            return (i, j)
        if d == 0 and '{' in lines[j] and j == i:
            # single-line def+body
            return (i, i)
    return None


n_keep = n_revert = 0
for rel in corpus:
    cur_p = ROOT / rel
    old_txt = subprocess.run(
        ['git', 'show', COMMIT + '^:' + rel],
        capture_output=True, cwd=ROOT).stdout.decode('utf-8', errors='replace')
    if not old_txt.strip():
        continue
    cur_lines = cur_p.read_text(encoding='utf-8', errors='replace').split('\n')
    old_lines = old_txt.split('\n')
    changed = False
    for i, line in enumerate(cur_lines):
        m = DEF.match(line.rstrip('\r\n'))
        if not m:
            continue
        # find this def in the old version by anchor above
        addr = None
        for j in range(i - 1, max(0, i - 5), -1):
            if cur_lines[j].lstrip().startswith('//'):
                v = anchor_val(cur_lines[j])
                if v is not None:
                    addr = v
                    break
        if addr is None:
            continue
        T = ida_param_count(addr)
        if T is None:
            continue
        # locate the same function in old version (search by anchor addr)
        old_i = None
        for j, ol in enumerate(old_lines):
            if not ol.lstrip().startswith('//'):
                continue
            if anchor_val(ol) == addr:
                # def follows the anchor within 3 lines
                for k in range(j + 1, min(len(old_lines), j + 4)):
                    if DEF.match(old_lines[k].rstrip('\r\n')):
                        old_i = k
                        break
                if old_i is not None:
                    break
        if old_i is None:
            continue
        om = DEF.match(old_lines[old_i].rstrip('\r\n'))
        if not om:
            continue
        C = count_params(om.group(4))
        cur_C = count_params(m.group(4))
        if C == T and cur_C == C - 1:
            n_keep += 1          # correct demotion
        elif C == T - 1 and cur_C == C - 1:
            # WRONG: reverted block from parent
            span_old = block_span(old_lines, old_i)
            span_cur = block_span(cur_lines, i)
            if span_old and span_cur:
                cur_lines[span_cur[0]:span_cur[1] + 1] = \
                    old_lines[span_old[0]:span_old[1] + 1]
                n_revert += 1
                changed = True
    if changed and APPLY:
        cur_p.write_text('\n'.join(cur_lines), encoding='utf-8')
print('kept (correct demotions):', n_keep, '| reverted (wrong):', n_revert)
if not APPLY:
    print('(dry run -- pass --apply)')
