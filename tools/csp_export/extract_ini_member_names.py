#!/usr/bin/env python3
"""INI key -> (class, offset) -> member name extraction (N1 task item 5).

Mines decompile-results/full_export/src/*.cpp asm-trace comment lines:

    //   7722d4: mov eax, [esi+0A4h]                     <- default load
    //   7722db: push offset g_INI_Key_Damage; "Damage"   <- INI key push
    //   7722e3: call INIClass__ReadInt_Overwrite          <- INI read call
    //   7722e8: mov [esi+0A4h], eax                     <- destination store

Extraction rule (strict, structural):
  an INIClass__* call preceded (<=30 lines) by a key push and followed
  (<=8 lines) by a member store `mov [REG+OFFh], ...`, where the SAME
  (REG, OFF) was loaded/pushed before the key push (Read*_Overwrite
  default-argument semantics: destination == default source).  The
  enclosing function's class (index.json, nearest preceding start) is the
  member's owner.  ebp/esp stores are locals -- rejected.

Output: anchors/ini_member_names.json
  { "_meta": {...stats/gap...},
    "classes": { cls: { "<off>": {"key":..., "name":..., "count":N,
                                   "alt_keys":[...], "evidence":[...] } } }

Deterministic (sorted iteration, count-then-lexicographic winners).
Exit code 0 even with a gap (the gap is recorded in _meta).
Usage: python tools/csp_export/extract_ini_member_names.py [--json OUT]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'decompile-results' / 'full_export' / 'src'
IDX = ROOT / 'decompile-results' / 'full_export' / 'index.json'
OUT = ROOT / 'anchors' / 'ini_member_names.json'

CALL_RE = re.compile(r'^//\s+([0-9a-f]{6}):\s+call\s+(INIClass_\w+)')
KEY_RE = re.compile(r'^//\s+[0-9a-f]{6}:\s+push offset \w+; "([^"]+)"')
MEM_RE = re.compile(r'^//\s+[0-9a-f]{6}:\s+mov\s+\[(\w+)\+([0-9A-Fa-f]+)h\],')
PUSHMEM_RE = re.compile(
    r'^//\s+[0-9a-f]{6}:\s+push\s+(?:dword ptr |word ptr |byte ptr )?'
    r'\[(\w+)\+([0-9A-Fa-f]+)h\]')
BACK = 30
FWD = 12
BAD_REGS = {'ebp', 'esp'}
MAX_OFF = 2 ** 20
READER_NAME = re.compile(r'(?i)read|ini|load|process')

# known-class gates
layouts = json.loads((ROOT / 'tools' / 'class_layouts.json').read_text(
    encoding='utf-8'))
try:
    ml_keys = set(json.loads((ROOT / 'tools' / 'member_lookup.json')
                             .read_text(encoding='utf-8')).keys())
except OSError:
    ml_keys = set()


def member_name_from_key(key):
    """PascalCase derivation: 'DisguiseFakeBlinkTime' -> same;
    'foobar-baz' -> 'FoobarBaz'."""
    parts = re.split(r'[^0-9A-Za-z]+', key)
    parts = [p for p in parts if p]
    return ''.join(p[:1].upper() + p[1:] for p in parts)


def main():
    idx = json.loads(IDX.read_text(encoding='utf-8'))
    # per-file sorted function starts: [(addr_int, cls, name)]
    by_file = {}
    for a, v in idx.items():
        if v.get('kind') != 'function':
            continue
        f = v.get('file') or ''
        if not f.startswith('src/'):
            continue
        nm = v.get('name') or ''
        cls = nm.split('::')[0] if '::' in nm else ''
        try:
            ai = int(a, 16)
        except ValueError:
            continue
        by_file.setdefault(f[len('src/'):], []).append((ai, cls, nm))
    for f in by_file:
        by_file[f].sort()

    sites = {}   # (cls, off) -> Counter{key: n}
    evid = {}    # (cls, off, key) -> [(file, call_addr)]
    stats = Counter()
    unknown_cls = Counter()

    for p in sorted(SRC.glob('*.cpp')):
        fns = by_file.get(p.name)
        if not fns:
            continue
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        for i, ln in enumerate(lines):
            m = CALL_RE.match(ln)
            if not m:
                continue
            stats['ini_calls'] += 1
            site_addr = int(m.group(1), 16)
            # enclosing function = last start <= site_addr (bisect)
            lo, hi, pos = 0, len(fns), -1
            while lo < hi:
                mid = (lo + hi) // 2
                if fns[mid][0] <= site_addr:
                    pos = mid
                    lo = mid + 1
                else:
                    hi = mid
            if pos < 0:
                stats['no_enclosing_fn'] += 1
                continue
            _, cls, _nm = fns[pos]
            if not cls:
                stats['anonymous_fn'] += 1
                continue
            # key push within BACK lines before the call
            key = None
            for j in range(max(0, i - 8), i):
                km = KEY_RE.match(lines[j])
                if km:
                    key = km.group(1)
            if not key:
                stats['no_key'] += 1
                continue
            stats['keyed'] += 1
            # store-back within FWD lines after the call
            store = None
            for j in range(i + 1, min(len(lines), i + 1 + FWD)):
                sm = MEM_RE.match(lines[j])
                if sm:
                    reg = sm.group(1)
                    off = int(sm.group(2), 16)
                    if reg in BAD_REGS:
                        store = ('LOCAL', off)
                    else:
                        store = (reg, off)
                    break
            if not store:
                stats['no_store'] += 1
                continue
            if store[0] == 'LOCAL':
                stats['local_store'] += 1
                continue
            # default-load of the same (reg, off) before the key push
            confidence = None
            for j in range(max(0, i - BACK), i):
                lm = MEM_RE.match(lines[j])
                if lm and lm.group(1) == store[0] \
                        and int(lm.group(2), 16) == store[1]:
                    confidence = 'paired'
                    break
                pm = PUSHMEM_RE.match(lines[j])
                if pm and pm.group(1) == store[0] \
                        and int(pm.group(2), 16) == store[1]:
                    confidence = 'paired'
                    break
            if confidence is None:
                # store-only acceptance: destination write in an INI-reader
                # function (LoadFromINI/ReadXXX family) -- medium confidence
                if cls in layouts and READER_NAME.search(_nm):
                    confidence = 'store-only'
                else:
                    stats['no_default_pair'] += 1
                    continue
            # sanity gates
            if off >= MAX_OFF:
                stats['garbage_offset'] += 1
                continue
            lim = (layouts.get(cls) or {}).get('size')
            if lim and off >= lim:
                stats['beyond_layout'] += 1
                continue
            if cls not in layouts and cls not in ml_keys:
                unknown_cls[cls] += 1
                stats['unknown_class'] += 1
                continue
            sites.setdefault((cls, off), Counter())[key] += 1
            evid.setdefault((cls, off, key), []).append(
                [p.name, '0x%X' % site_addr, confidence])
            stats['extracted'] += 1

    classes = {}
    for (cls, off) in sorted(sites, key=lambda k: (k[0], k[1])):
        cnt = sites[(cls, off)]
        # winner: most frequent key, lexicographic tie-break
        winner = sorted(cnt.items(), key=lambda kv: (-kv[1], kv[0]))[0][0]
        alts = [k for k in sorted(cnt) if k != winner]
        evs = evid[(cls, off, winner)]
        # confidence = 'paired' if any paired evidence else 'store-only'
        has_paired = any(e[2] == 'paired' for e in evs)
        conf = 'paired' if has_paired else 'store-only'
        ent = {'key': winner,
               'name': member_name_from_key(winner),
               'count': sum(cnt.values()),
               'confidence': conf,
               'alt_keys': alts,
               'evidence': evs[:8]}
        classes.setdefault(cls, {})[str(off)] = ent
    # misattribution audit: one key spread over >3 offsets in one class =
    # probable key-push attribution error in dense read blocks -> downgrade
    downgraded = {}
    for cls, mem in classes.items():
        per_key = {}
        for off, e in mem.items():
            per_key.setdefault(e['key'], []).append(off)
        for k, offs in per_key.items():
            if len(offs) > 3:
                for off in offs:
                    classes[cls][off]['confidence'] = 'weak-multi'
                downgraded['%s.%s' % (cls, k)] = len(offs)

    meta = {
        'source': 'decompile-results/full_export/src (asm-trace comments)',
        'rule': ('INIClass__* call + key push + member store-back paired '
                 'with default load (Read*_Overwrite semantics)'),
        'stats': dict(sorted(stats.items())),
        'unknown_class_samples': dict(unknown_cls.most_common(20)),
        'classes': len(classes),
        'members': sum(len(v) for v in classes.values()),
    }
    if downgraded:
        meta['weak_multi_downgraded'] = downgraded
    prov = {'_meta': meta, 'classes': classes}
    OUT.write_text(json.dumps(prov, indent=1, ensure_ascii=False) + '\n',
                   encoding='utf-8')
    print(json.dumps(meta, indent=1))
    print('->', OUT)
    if not classes:
        print('GAP: no INI member pairs extracted (see stats)')


if __name__ == '__main__':
    main()
