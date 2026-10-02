#!/usr/bin/env python3
"""G42.19: E4Recv 0-param def-head alignment (round-4 agent-3 design).

The E4Recv synthetic-receiver family (323 C2065 sites, main force of the
aN bucket): def heads were materialized with EMPTY param lists while the
body uses a2/a3/vN -- and the body is a mechanical backfill of the cache
pseudocode, whose param names ARE the body vocabulary (agent-3 case-1
evidence: body a2/a3 == cache `(this, const void *a2, _DWORD *a3)`).

Surgery: def head params := cache truth verbatim (this excluded).
hpp sync: src/e4/classes/E4Recv_{ADDR}_e4.hpp single-line decls.

Usage: [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = "--apply" in sys.argv
CEN = ROOT / ".omo/tu_errors_g137.json"
CACHE = ROOT / ".omo/ida_cache"

census = json.load(open(CEN, encoding="utf-8"))
# collect C2065 aN/aP error sites grouped by (file) to locate defs
sites = {}
for tu, el in census.items():
    for e in el:
        if "error C2065" not in e:
            continue
        m = re.search(r"[\u201c\"](a\d+|aP\d+)[\u201d\"]", e)
        sm = re.match(r"^(.+?)\((\d+)\):", e)
        if not (m and sm):
            continue
        p = sm.group(1)
        if not p.startswith(("D:", "d:")):
            continue
        sites.setdefault(p, set()).add(int(sm.group(2)))
print("C2065 aN/aP site files:", len(sites))

MARKER = re.compile(r'^//\s*0x[0-9A-Fa-f]{5,8}\s*$')


def balanced_sig(zone):
    """Extract the (...) parameter list from a (possibly wrapped) head
    zone via paren balancing; returns the inner text or None."""
    start = zone.find('(')
    if start < 0:
        return None
    depth = 0
    for i in range(start, len(zone)):
        if zone[i] == '(':
            depth += 1
        elif zone[i] == ')':
            depth -= 1
            if depth == 0:
                inner = zone[start + 1:i]
                m = re.match(r'^(.*)$', inner, re.S)
                return m
    return None


def cache_params(addr):
    for cand in ("func_0x%08X.json" % int(addr, 16),
                 "func_0x%X.json" % int(addr, 16)):
        p = CACHE / cand
        if p.exists():
            dec = json.load(open(p, encoding="utf-8")).get("decompiled", "")
            if not dec:
                return None
            # G42.29g: IDA wraps long signatures across lines (first line
            # may end mid-param). Take the prefix up to the body '{', then
            # balanced-paren the parameter list.
            head_zone = dec.split("{", 1)[0]
            pm = balanced_sig(head_zone)
            if pm is None:
                # legacy single-line fallback
                first = dec.split("\n")[0]
                pm = re.search(r"\((.*)\)\s*$", first)
            if not pm:
                return None
            # wrapped signatures carry newlines inside params -- normalize
            raw = ' '.join(pm.group(1).split())
            if not raw:
                return []
            # top-level comma split
            parts, depth, cur = [], 0, ''
            for ch in raw:
                if ch in '([':
                    depth += 1
                elif ch in ')]':
                    depth -= 1
                if ch == ',' and depth == 0:
                    parts.append(cur.strip())
                    cur = ''
                else:
                    cur += ch
            if cur.strip():
                parts.append(cur.strip())
            real = [x for x in parts
                    if not re.search(r'\bthis\s*$', x)]
            return real
    return None


def norm_ida(t):
    for a, b in (("_DWORD", "unsigned int"), ("_QWORD", "unsigned long long"),
                 ("_WORD", "unsigned short"), ("_BYTE", "unsigned char"),
                 ("__int64", "long long"), ("_BOOL4", "int"),
                 ("u_short", "unsigned short"), ("u_char", "unsigned char"),
                 ("u_int", "unsigned int")):
        t = re.sub(r"\b%s\b" % a, b, t)
    return t


stats = {'aligned': 0, 'hpp-synced': 0, 'no-cache': 0, 'no-marker': 0,
         'not-e4recv': 0}
def_edits = {}
hpp_edits = {}
for f, lines_set in sites.items():
    try:
        with open(f, "r", encoding="utf-8", errors="replace", newline="") as fh:
            lines = fh.read().splitlines(keepends=True)
    except OSError:
        continue
    changed = False
    for li in sorted(lines_set):
        # walk up to the marker
        mi = None
        for k in range(min(li, len(lines)) - 1, max(0, li - 400), -1):
            if MARKER.match(lines[k].rstrip("\r\n")):
                mi = k
                break
        if mi is None:
            stats['no-marker'] += 1
            continue
        am = re.match(r'^//\s*(0x[0-9A-Fa-f]+)', lines[mi].rstrip("\r\n"))
        addr = am.group(1)
        # find the def head after marker (skip namespace/blank)
        hj = mi + 1
        while hj < len(lines) and (lines[hj].strip() == '' or
                                   lines[hj].startswith('namespace')):
            hj += 1
        if hj >= len(lines):
            stats['no-marker'] += 1
            continue
        head = lines[hj].rstrip("\r\n")
        # G42.27: general gate -- any qualified def head whose params differ
        # from cache truth (E4Recv 0-param is the flagship form)
        # G42.29g: tolerate a trailing '{' (brace-on-same-line defs)
        hm = re.match(r'^(.*?\b(?:E4Recv_[0-9A-Fa-f]+|[A-Za-z_]\w*)::\w+)\((.*)\)\s*\{?\s*$', head)
        if not hm or ';' in head:
            stats['not-e4recv'] += 1
            continue
        params = cache_params(addr)
        if params is None:
            stats['no-cache'] += 1
            continue
        params = [norm_ida(x) for x in params]
        # G42.28 same-position fallback (agent-3 cases 8/9): body vocabulary
        # wins on NAMES, cache keeps TYPES -- handles a1<->aP1 splits where
        # verbatim cache names would strand the body's identifiers
        body_names = []
        seen = set()
        for bl in lines[hj + 1:min(hj + 300, len(lines))]:
            for bm in re.finditer(r'\b(a\d+|aP\d+)\b', bl):
                if bm.group(1) not in seen:
                    seen.add(bm.group(1))
                    body_names.append(bm.group(1))
        final = []
        for i, pp in enumerate(params):
            if i < len(body_names):
                nm = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', pp)
                if nm:
                    pp = pp[:nm.start()] + body_names[i] + (nm.group(2) or '')
            final.append(pp)
        want = ', '.join(final)
        if hm.group(2).strip() == want:
            stats['already'] = stats.get('already', 0) + 1
            continue
        new_head = hm.group(1) + '(' + want + ')'
        lines[hj] = lines[hj].replace(head, new_head, 1)
        stats['aligned'] += 1
        changed = True
        # hpp sync
        hp = ROOT / ("src/e4/classes/E4Recv_%s_e4.hpp"
                     % addr[2:].upper())
        haddr = hp.exists() and hp or ROOT / (
            "src/e4/classes/E4Recv_%s_e4.hpp" % addr[2:])
        if haddr.exists():
            with open(haddr, "r", encoding="utf-8", errors="replace",
                      newline="") as fh2:
                hl = fh2.read().splitlines(keepends=True)
            name = hm.group(1).split('::')[-1]
            for x, ln in enumerate(hl):
                dm = re.match(r'^(\s*[\w:\s\*&]+?\b%s)\s*\([^;()]*\)\s*;'
                              r'\s*(?://.*)?\r?\n?$' % re.escape(name), ln)
                if dm:
                    hl[x] = ln.replace(
                        dm.group(0).rstrip("\r\n"),
                        dm.group(1) + '(' + ', '.join(params) + ');',
                        1)
                    hpp_edits[str(haddr)] = hl
                    stats['hpp-synced'] += 1
                    break
    if changed:
        def_edits[f] = lines

print("stats:", stats)
if APPLY:
    for path, lines in def_edits.items():
        with open(path, "w", encoding="utf-8", newline="") as f:
            f.write("".join(lines))
    for path, lines in hpp_edits.items():
        with open(path, "w", encoding="utf-8", newline="") as f:
            f.write("".join(lines))
    print("written: defs", len(def_edits), "+ hpps", len(hpp_edits))
else:
    print("(dry run)")
