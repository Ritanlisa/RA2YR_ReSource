#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G42.55/G260 gated batch absorption of the 490 true dual classes.

v2 changes (G260 round):
  - rollback scope narrowed: git fallback touches src/e4 ONLY (was src/)
  - batch rollback is surgical (in-memory snapshot restore of files edited
    by this batch) so g260 member cleanups in other src/e4 files survive
  - include_closure restricted to src/e4/** (write-scope compliance)
  - guard v2: parses ALL flat data members (offset or not) + methods;
    requires every data member name semantic (not q_*/u32_*/field_* /
    <Cls>_*) and present in the tree file; requires every flat method
    name present in the tree file; memberless structs are absorbable
    (methods-only scaffolding)
  - per-batch affected-TU probe gate: every e4 TU whose transitive include
    set contains an absorbed class's flat hpp is probed before/after;
    any TU error delta > +5 rolls the batch back and blocklists suspects
    (.omo/g247_blocklist.json); batch retried without them (max 2)
Usage: g247_absorb_gated.py <batch_size> [--apply]
"""
import io
import glob
import re
import os
import json
import subprocess
import sys
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
BS = int(sys.argv[1]) if len(sys.argv) > 1 and sys.argv[1].isdigit() else 40
ONLY = None
for a in sys.argv[1:]:
    if a.startswith('--only='):
        ONLY = json.load(open(ROOT / a.split('=', 1)[1], encoding='utf-8'))

IDX = json.load(open(ROOT / '.omo/g240_tree_index.json', encoding='utf-8'))
DUAL = json.load(open(ROOT / '.omo/g243_true_dual.json', encoding='utf-8'))
try:
    HPP_TUS = json.load(open(ROOT / '.omo/g260_hpp_tus.json', encoding='utf-8'))
except Exception:
    HPP_TUS = {}
BL_PATH = ROOT / '.omo/g247_blocklist.json'
BLOCKLIST = json.load(open(BL_PATH, encoding='utf-8')) if BL_PATH.exists() else {}
GEN = re.compile(r'^(u\d+_|u32_|u8_|q_|field_)')
SENTINELS = ['src/e4/Mouse_e4.cpp', 'src/e4/TacticalMap_e4.cpp',
             'src/e4/VectorClass_e4.cpp', 'src/e4/DSurface_e4.cpp',
             'src/e4/addr42_e4.cpp', 'src/misc/misc_ext.cpp',
             # G57a2: mixed-universe sentinels -- tree-truth bridges pull
             # core/vector.hpp into TUs that still carry flat vector decls
             # (_tree_full_e4.hpp / e4_protos.h). C2989/C2990 cascade if
             # the bridge reaches a TU without GAMEMD_E4_VECTOR_TREE_TRUTH.
             'src/e4/Commands_e4.cpp', 'src/e4/HouseClass_e4.cpp',
             'src/e4/addr5B_e4.cpp']
MAX_PROBE_TUS = 48
DELTA_GATE = 5


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


def probe(tu):
    try:
        r = subprocess.run(
            [sys.executable, str(ROOT / '.omo/g157_probe.py'), tu],
            capture_output=True, text=True, cwd=str(ROOT), timeout=900)
        out = r.stdout
        return sum(1 for l in out.splitlines() if ': error C' in l
                   or ': fatal error C' in l)
    except Exception:
        return 999


def probe_many(tus):
    if not tus:
        return {}
    with ThreadPoolExecutor(max_workers=4) as ex:
        res = list(ex.map(probe, tus))
    return dict(zip(tus, res))


def tree_names(rel):
    t = io.open(ROOT / 'src' / rel, encoding='utf-8',
                errors='replace').read()
    names = set(re.findall(r'\b(\w+)\s*(?:\[[^\]]*\])?\s*;', t))
    names |= set(re.findall(r'\b(\w+)\s*\(', t))
    return names


_TN_CACHE = {}


def tn(rel):
    if rel not in _TN_CACHE:
        _TN_CACHE[rel] = tree_names(rel)
    return _TN_CACHE[rel]


def flat_struct_info(cls):
    """-> (hpp_path, span, members[(name,off?)], methods[names]) or None."""
    hp = ROOT / ('src/e4/classes/%s_e4.hpp' % cls)
    if not hp.exists():
        found = None
        for p in glob.glob(str(ROOT / 'src/e4/classes/*_e4.hpp')):
            t0 = io.open(p, encoding='utf-8', errors='replace').read()
            if re.search(r'\bstruct\s+' + re.escape(cls) + r'\s*\{', t0):
                found = p
                break
        if not found:
            return None
        hp = Path(found)
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


def clean_classes(batch):
    """v2 guard: every flat data member semantic + visible in tree file,
    every flat method name visible in tree file. Memberless OK."""
    out = []
    rejected = {}
    for cls in batch:
        if cls in BLOCKLIST:
            rejected[cls] = 'blocklisted'
            continue
        ent = IDX.get(cls)
        if not ent:
            rejected[cls] = 'no-tree-idx'
            continue
        rel = ent[0]
        info = flat_struct_info(cls)
        if not info:
            rejected[cls] = 'no-flat-struct'
            continue
        hp, span, members, methods = info
        t = hp.read_text(encoding='utf-8', errors='replace')
        if 'G42.55 absorbed' in t.split('\n')[min(20, len(t.split('\n')) - 1)]:
            rejected[cls] = 'already-absorbed'
            continue
        names = tn(rel)
        bad_m = [n for n, off in members
                 if GEN.match(n) or n.startswith(cls + '_') or n not in names]
        bad_f = [m for m in methods if m not in names]
        if bad_m or bad_f:
            rejected[cls] = 'not-clean m=%s f=%s' % (bad_m[:3], bad_f[:3])
            continue
        out.append((cls, hp, rel))
    return out, rejected


def snapshot_files(paths):
    snap = {}
    for p in paths:
        snap[p] = io.open(p, encoding='utf-8', errors='replace').read()
    return snap


def restore_files(snap):
    for p, t in snap.items():
        io.open(p, 'w', encoding='utf-8', errors='surrogateescape',
                newline='').write(t)


def absorb(items):
    """delete flat structs, insert tree truth includes. Returns edited paths."""
    edited = set()
    for cls, hp, rel in items:
        t = hp.read_text(encoding='utf-8', errors='replace')
        sm = re.search(r'\bstruct\s+' + re.escape(cls) + r'\s*\{', t)
        if not sm:
            continue
        end = cut(t, sm.start())
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
        hp.write_text(t, encoding='utf-8', errors='surrogateescape',
                      newline='')
        edited.add(str(hp))
    return edited


def include_closure(cls_list):
    """insert tree includes into every src/e4 hpp that references these
    names (e4/classes per-class hpps are handled by absorb())."""
    names = set(cls_list)
    n = 0
    edited = set()
    for p in glob.glob(str(ROOT / 'src/e4/**/*.hpp'), recursive=True):
        pn = p.replace(os.sep, '/')
        if '/e4/classes/' in pn:
            continue          # e4 class hpps handled by absorb()
        t = io.open(p, encoding='utf-8', errors='replace').read()
        toks = set(re.findall(r'\b([A-Z]\w+)\b', t))
        hit = sorted(toks & names)
        if not hit:
            continue
        add = []
        for c in hit:
            ent = IDX.get(c)
            rel = ent[0] if ent else None
            if rel and ('src/' + rel) != pn:
                line = '#include "%s"  // G42.55 closure (%s)' % (rel, c)
                if line not in t and line not in add:
                    add.append(line)
        if add:
            lines = t.split('\n')
            k = 0
            for i, l in enumerate(lines[:40]):
                if l.startswith('#include'):
                    k = i + 1
            lines[k:k] = add
            io.open(p, 'w', encoding='utf-8', errors='surrogateescape',
                    newline='').write('\n'.join(lines))
            n += len(add)
            edited.add(p)
    return n, edited


def affected_tus(items):
    tus = set()
    own = []
    for cls, hp, rel in items:
        v = HPP_TUS.get(cls) or []
        tus |= set(v)
        o = 'src/e4/%s_e4.cpp' % cls
        if (ROOT / o).exists() and o in tus:
            own.append(o)
    if len(tus) <= MAX_PROBE_TUS:
        return sorted(tus)
    keep = set(own[:MAX_PROBE_TUS // 2])
    for t in sorted(tus):
        if len(keep) >= MAX_PROBE_TUS:
            break
        keep.add(t)
    return sorted(keep)


def suspects_for(failed_tus, items):
    sus = set()
    for cls, hp, rel in items:
        v = set(HPP_TUS.get(cls) or [])
        if v & set(failed_tus):
            sus.add(cls)
    return sorted(sus)


def save_blocklist():
    json.dump(BLOCKLIST, open(BL_PATH, 'w', encoding='utf-8'), indent=1)


def git_rollback_e4():
    subprocess.run(['git', 'checkout', '--', 'src/e4'], cwd=str(ROOT))


def main():
    global DUAL
    if ONLY:
        keep = set(ONLY)
        DUAL = [c for c in DUAL if c in keep]
        print('filter --only: %d classes' % len(DUAL), flush=True)
    print('baseline sentinels...', flush=True)
    base_sent = probe_many(SENTINELS)
    print(base_sent, flush=True)
    total_absorbed = 0
    empty_streak = 0
    log = []
    for i in range(0, len(DUAL), BS):
        batch = DUAL[i:i + BS]
        attempt = 0
        while True:
            items, rejected = clean_classes(batch)
            if not items:
                print('batch %d-%d: 0 clean of %d' % (i, i + len(batch),
                                                      len(batch)), flush=True)
                empty_streak += 1
                break
            if not APPLY:
                print('batch %d-%d: %d clean of %d (rejected %d)'
                      % (i, i + len(batch), len(items), len(batch),
                         len(rejected)), flush=True)
                total_absorbed += len(items)
                break
            tus = affected_tus(items)
            probe_set = sorted(set(tus) | set(SENTINELS))
            pre = probe_many(probe_set)
            snap_files_set = set(str(hp) for _, hp, _ in items)
            _, clo_edited = include_closure([c for c, _, _ in items])
            snap = snapshot_files(snap_files_set | clo_edited)
            absorb(items)
            post = probe_many(probe_set)
            failed = [t for t in probe_set
                      if post[t] - pre[t] > DELTA_GATE]
            delta_sent = sum(post[t] - pre[t] for t in SENTINELS)
            print('batch %d-%d (try %d): absorbed %d, probe TUs %d, '
                  'sentinel delta %+d, failed TUs %s'
                  % (i, i + len(batch), attempt, len(items), len(probe_set),
                     delta_sent, [(t, post[t] - pre[t]) for t in failed]),
                  flush=True)
            if failed and attempt < 2:
                restore_files(snap)
                sus = suspects_for(failed, items)
                for c in sus:
                    BLOCKLIST[c] = 'TU-delta ' + ','.join(failed[:2])
                save_blocklist()
                print('  rolled back; blocklisted %d suspects: %s'
                      % (len(sus), sus[:8]), flush=True)
                attempt += 1
                continue
            if failed:
                restore_files(snap)
                for c, _, _ in items:
                    BLOCKLIST[c] = 'TU-delta-final ' + ','.join(failed[:2])
                save_blocklist()
                print('  FINAL rollback of batch; blocklisted %d classes'
                      % len(items), flush=True)
                empty_streak += 1
                break
            total_absorbed += len(items)
            empty_streak = 0
            log.append({'range': [i, i + len(batch)],
                        'absorbed': [c for c, _, _ in items],
                        'probe_tus': len(probe_set), 'delta_sent': delta_sent})
            break
        if empty_streak >= 3:
            print('3 consecutive empty/rolled batches -> stop', flush=True)
            break
    print('absorbed total this run:', total_absorbed,
          '(APPLY)' if APPLY else '(DRYRUN)', flush=True)
    print('blocklist size:', len(BLOCKLIST), flush=True)
    json.dump(log, open(ROOT / '.omo/g247_runlog.json', 'w'), indent=1)


if __name__ == '__main__':
    main()
