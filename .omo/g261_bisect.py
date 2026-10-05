#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G261 per-class bisect absorber: absorb ONE class at a time with FULL TU
closure probing, capturing exact error lines on failure for attribution.

For each input class C (default: current g247 blocklist):
  1. guard v2 check (same as g247 clean_classes)
  2. snapshot edited files, absorb C + include_closure
  3. probe full closure(C) + 6 sentinels, pre and post
  4. keep if max per-TU delta <= GATE and sentinel sum delta <= GATE,
     else restore snapshot and record failing error lines (attribution)
  5. also probe-verify kept classes (post already done)

Sequential — no cross-class contamination. Records to
.omo/g261_bisect_report.json. CLI: python g261_bisect.py [classes.json]
(the optional json file holds a list of class names; default: blocklist)
"""
import io
import re
import os
import json
import glob
import subprocess
import sys
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor

ROOT = Path(r'D:\RA2YR_ReSource')
GATE = 5
IDX = json.load(open(ROOT / '.omo/g240_tree_index.json', encoding='utf-8'))
HPP_TUS = json.load(open(ROOT / '.omo/g260_hpp_tus.json', encoding='utf-8'))
BL_PATH = ROOT / '.omo/g247_blocklist.json'
BLOCKLIST = json.load(open(BL_PATH, encoding='utf-8')) if BL_PATH.exists() else {}
GEN = re.compile(r'^(u\d+_|u32_|u8_|q_|field_)')
SENTINELS = ['src/e4/Mouse_e4.cpp', 'src/e4/TacticalMap_e4.cpp',
             'src/e4/VectorClass_e4.cpp', 'src/e4/DSurface_e4.cpp',
             'src/e4/addr42_e4.cpp', 'src/misc/misc_ext.cpp']
MAX_PROBE_TUS = 48

arg = next((a for a in sys.argv[1:] if a.endswith('.json')), None)
if arg:
    CLASSES = json.load(open(ROOT / arg, encoding='utf-8'))
else:
    CLASSES = sorted(BLOCKLIST)


def cut(t, start):
    o = t.index('{', start)
    d = 0
    i = o
    while i < len(t):
        if t[i] == '{':
            d += 1
        elif t[i] == '}':
            d -= 1
            if d == 0:
                j = i + 1
                while j < len(t) and t[j] in ' \t':
                    j += 1
                if j < len(t) and t[j] == ';':
                    j += 1
                return j
        i += 1
    return -1


def probe_lines(tu):
    """-> (n_err, [err lines])"""
    try:
        r = subprocess.run(
            [sys.executable, str(ROOT / '.omo/g157_probe.py'), tu],
            capture_output=True, text=True, cwd=str(ROOT), timeout=900)
        out = r.stdout
    except Exception as ex:
        return 999, ['probe-failed %s' % ex]
    lines = [l for l in out.splitlines() if ': error C' in l
             or ': fatal error C' in l]
    return len(lines), lines


def probe_many(tus):
    if not tus:
        return {}, {}
    with ThreadPoolExecutor(max_workers=6) as ex:
        res = list(ex.map(probe_lines, tus))
    return dict((t, r[0]) for t, r in zip(tus, res)), \
           dict((t, r[1]) for t, r in zip(tus, res))


def tree_names(rel):
    t = io.open(ROOT / 'src' / rel, encoding='utf-8',
                errors='replace').read()
    names = set(re.findall(r'\b(\w+)\s*(?:\[[^\]]*\])?\s*;', t))
    names |= set(re.findall(r'\b(\w+)\s*\(', t))
    return names


def flat_struct_info(cls):
    hp = ROOT / ('src/e4/classes/%s_e4.hpp' % cls)
    if not hp.exists():
        for p in glob.glob(str(ROOT / 'src/e4/classes/*_e4.hpp')):
            t0 = io.open(p, encoding='utf-8', errors='replace').read()
            if re.search(r'\bstruct\s+' + re.escape(cls) + r'\s*\{', t0):
                hp = Path(p)
                break
        else:
            return None
    t = hp.read_text(encoding='utf-8', errors='replace')
    sm = re.search(r'\bstruct\s+' + re.escape(cls) + r'\s*\{', t)
    if not sm:
        return None
    end = cut(t, sm.start())
    if end < 0:
        return None
    body = t[sm.start():end]
    members, methods = [], []
    for line_m in re.finditer(r'^[^\n]*;', body, re.M):
        seg = line_m.group(0)
        if '(' in seg.split('//')[0]:
            mm = re.search(r'\b(\w+)\s*\(', seg)
            if mm:
                methods.append(mm.group(1))
            continue
        dm = re.match(r'\s*[\w\* ]+?\b(\w+)\s*(\[[^\]]*\])?\s*;', seg)
        if dm:
            om = re.search(r'//.*?0x([0-9A-Fa-f]+)', seg)
            members.append((dm.group(1),
                            int(om.group(1), 16) if om else None))
    return hp, (sm.start(), end), members, methods


def snapshot_files(paths):
    return {p: io.open(p, encoding='utf-8', errors='replace').read()
            for p in paths}


def restore_files(snap):
    for p, t in snap.items():
        io.open(p, 'w', encoding='utf-8', errors='surrogateescape',
                newline='').write(t)


def absorb_one(cls):
    hp, span, members, methods = flat_struct_info(cls)
    ent = IDX.get(cls)
    rel = ent[0] if ent else None
    if not rel:
        return None, 'no-tree-idx'
    t = hp.read_text(encoding='utf-8', errors='replace')
    inc = '#include "%s"  // G42.55 tree truth' % rel
    if inc not in t:
        lines = t.split('\n')
        k = 0
        for i, l in enumerate(lines[:60]):
            if l.startswith('#include'):
                k = i + 1
        lines.insert(k, inc)
        t = '\n'.join(lines)
    sm = re.search(r'\bstruct\s+' + re.escape(cls) + r'\s*\{', t)
    end = cut(t, sm.start())
    note = ('// G42.55 absorbed: single truth is %s\n' % cls)
    t = t[:sm.start()] + note + t[end:]
    hp.write_text(t, encoding='utf-8', errors='surrogateescape', newline='')
    return rel, None


def include_closure_one(cls):
    ent = IDX.get(cls)
    rel = ent[0] if ent else None
    edited = set()
    if not rel:
        return edited
    line = '#include "%s"  // G42.55 closure (%s)' % (rel, cls)
    for p in glob.glob(str(ROOT / 'src/e4/**/*.hpp'), recursive=True):
        pn = p.replace(os.sep, '/')
        if '/e4/classes/' in pn:
            continue
        t = io.open(p, encoding='utf-8', errors='replace').read()
        if not re.search(r'\b' + re.escape(cls) + r'\b', t):
            continue
        if line not in t:
            lines = t.split('\n')
            k = 0
            for i, l in enumerate(lines[:40]):
                if l.startswith('#include'):
                    k = i + 1
            lines[k:k] = [line]
            io.open(p, 'w', encoding='utf-8', errors='surrogateescape',
                    newline='').write('\n'.join(lines))
            edited.add(p)
    return edited


def main():
    print('classes to bisect:', len(CLASSES), flush=True)
    report = {}
    kept = []
    for i, cls in enumerate(CLASSES):
        info = flat_struct_info(cls)
        if not info:
            report[cls] = {'verdict': 'no-flat-struct'}
            continue
        hp, span, members, methods = info
        ent = IDX.get(cls)
        if not ent:
            report[cls] = {'verdict': 'no-tree-idx'}
            continue
        names = tree_names(ent[0])
        bad_m = [n for n, off in members
                 if GEN.match(n) or n.startswith(cls + '_') or n not in names]
        bad_f = [m for m in methods if m not in names]
        tus = sorted(set(HPP_TUS.get(cls) or []) | set(SENTINELS))
        pre, _ = probe_many(tus)
        pre_hp_text = hp.read_text(encoding='utf-8', errors='replace')
        rel, err = absorb_one(cls)
        if err:
            report[cls] = {'verdict': err}
            continue
        clo = include_closure_one(cls)
        clo_pre = {p: io.open(p, encoding='utf-8', errors='replace').read()
                   for p in clo}
        snap = dict(clo_pre)
        snap[str(hp)] = pre_hp_text
        post, post_lines = probe_many(tus)
        failed = [(t, post[t] - pre[t]) for t in tus
                  if post[t] - pre.get(t, 0) > GATE]
        rec = {'verdict': 'kept' if not failed else 'rolled-back',
               'bad_members': bad_m[:12], 'bad_methods': bad_f[:12],
               'probe_tus': len(tus),
               'deltas': [(t.replace(str(ROOT) + '\\', ''), d)
                          for t, d in failed[:10]]}
        if failed:
            errs = []
            for t, d in failed[:6]:
                errs.extend(post_lines.get(t, [])[:40])
            rec['errors'] = errs[:80]
            restore_files(snap)
        else:
            kept.append(cls)
        report[cls] = rec
        print('%3d %-40s %s (bad_m=%d bad_f=%d failed=%d)'
              % (i, cls, rec['verdict'], len(bad_m), len(bad_f),
                 len(failed)), flush=True)
    json.dump(report, open(ROOT / '.omo/g261_bisect_report.json', 'w'),
              indent=1)
    print('kept:', len(kept), kept, flush=True)


if __name__ == '__main__':
    main()
