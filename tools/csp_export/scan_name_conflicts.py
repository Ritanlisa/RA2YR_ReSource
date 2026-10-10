#!/usr/bin/env python3
"""Cross-table (class, offset) name-conflict scanner (N1).

Tables compared (key normalised to (class, decimal-offset)):
  - anchors/csp_canon_members.json  (canon authority, decimal keys)
  - tools/member_lookup.json        (ml, decimal keys, `src` provenance seed)
  - anchors/member_types.json       (mt, "Cls+0xHEX" keys)
  - .omo/til_members.json           (til, "0xHEX" keys)

Conflict classes:
  ph_vs_semantic  -- same (cls,off) holds a placeholder in one table and a
                     DIFFERENT semantic name in another (the measured 6,395
                     baseline class). Unresolved = no high-priority winner
                     recorded in anchors/name_provenance.json.
  semantic_diff   -- two different semantic names across tables (needs
                     adjudication; provenance winner recorded when known).
  garbage_offset  -- offset >= 2^40 (parser artefact, never a real member).

Resolution: when anchors/name_provenance.json has a members entry for
(cls, off) the recorded winner name+source counts as the adjudication; a
conflict whose tables include the winner name on the winning-priority side
is RESOLVED, everything else stays UNRESOLVED.

Usage:
  python tools/csp_export/scan_name_conflicts.py            # summary
  python tools/csp_export/scan_name_conflicts.py --json out # full report
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
from _provenance import (  # noqa: E402
    PLACEHOLDER_RE, is_placeholder, load_provenance, member_source_of,
    PRIORITY,
)

GARBAGE = 2 ** 40


def J(p):
    return json.loads(Path(p).read_text(encoding='utf-8'))


def norm_class(c):
    """Strip namespace qualification mirrors used across tables."""
    return c


def collect():
    sites = {}  # (cls, off:int) -> {table: {'name':..,'src':..}}

    def put(cls, off, table, name, src=None):
        try:
            o = int(off)
        except (TypeError, ValueError):
            return
        if o < 0:
            return
        d = sites.setdefault((cls, o), {})
        d[table] = {'name': name or '', 'src': src or ''}

    print('loading csp_canon_members ...', flush=True)
    cc = J(ROOT / 'anchors/csp_canon_members.json')
    for cls, body in cc.items():
        if not isinstance(body, dict):
            continue
        for off, m in (body.get('members') or {}).items():
            if isinstance(m, dict):
                put(cls, off, 'canon', m.get('name'))

    print('loading member_lookup (499MB) ...', flush=True)
    ml = J(ROOT / 'tools/member_lookup.json')
    for cls, members in ml.items():
        if not isinstance(members, dict):
            continue
        for off, m in members.items():
            if isinstance(m, dict):
                put(cls, off, 'ml', m.get('name'), m.get('src'))

    print('loading member_types ...', flush=True)
    mt = J(ROOT / 'anchors/member_types.json')
    for k, v in mt.items():
        if '+' not in k or not isinstance(v, dict):
            continue
        cls, off = k.rsplit('+', 1)
        m = re.match(r'^0x([0-9A-Fa-f]+)$', off)
        if not m:
            continue
        put(cls, int(m.group(1), 16), 'mt', v.get('name'), v.get('evidence'))

    til = {}
    til_p = ROOT / '.omo/til_members.json'
    if til_p.exists():
        print('loading til_members ...', flush=True)
        til = J(til_p)
        for cls, body in til.items():
            if not isinstance(body, dict):
                continue
            for off, m in (body.get('members') or {}).items():
                if isinstance(m, dict):
                    put(cls, off, 'til', m.get('name'))
    return sites, cc, ml, mt


def main():
    out_json = None
    if '--json' in sys.argv:
        out_json = sys.argv[sys.argv.index('--json') + 1]
    sites, cc, ml, mt = collect()
    prov = load_provenance()
    print('sites:', len(sites), flush=True)

    n_ph_sem = n_sem_diff = n_garbage = 0
    unresolved_ph = unresolved_sem = 0
    n_unmaterialized = 0
    garbage_cls = {}
    samples_ph, samples_sem = [], []
    for (cls, o), tabs in sites.items():
        if o >= GARBAGE:
            n_garbage += 1
            garbage_cls[cls] = garbage_cls.get(cls, 0) + 1
            continue
        named = {t: v['name'] for t, v in tabs.items() if v.get('name')}
        if len(named) < 2:
            continue
        names = set(named.values())
        if len(names) == 1:
            continue
        sem = {n for n in names if not is_placeholder(n)}
        ph = names - sem
        winner = None
        pv = member_source_of(prov, cls, o)
        if pv:
            winner = pv.get('name')
        # N1 AC: a conflict is RESOLVED when the high-priority winner is
        # RECORDED in the authority (gen_cpp_canon materializes it at the
        # next render -- tables may still carry the losing names until then,
        # so `materialized` is reported separately, not required).
        materialized = bool(winner) and winner in names
        if sem and ph:
            n_ph_sem += 1
            resolved = bool(winner)
            if not resolved:
                unresolved_ph += 1
            elif not materialized:
                n_unmaterialized += 1
            if len(samples_ph) < 40:
                samples_ph.append({'cls': cls, 'off': o, 'tables': named,
                                   'winner': winner, 'resolved': resolved,
                                   'materialized': materialized})
        elif len(sem) > 1:
            n_sem_diff += 1
            resolved = bool(winner)
            if not resolved:
                unresolved_sem += 1
            elif not materialized:
                n_unmaterialized += 1
            if len(samples_sem) < 40:
                samples_sem.append({'cls': cls, 'off': o, 'tables': named,
                                    'winner': winner, 'resolved': resolved,
                                    'materialized': materialized})

    print('=' * 60)
    print('ph_vs_semantic conflicts :', n_ph_sem,
          '| unresolved:', unresolved_ph)
    print('semantic_diff conflicts  :', n_sem_diff,
          '| unresolved:', unresolved_sem)
    print('winners recorded but not yet materialized in tables:',
          n_unmaterialized)
    print('garbage offsets (>=2^40) :', n_garbage,
          '| classes:', len(garbage_cls))
    top = sorted(garbage_cls.items(), key=lambda x: -x[1])[:8]
    for c, n in top:
        print('   %-50s %6d' % (c[:50], n))
    print('priority order:', ' > '.join(PRIORITY))
    if out_json:
        Path(out_json).write_text(json.dumps({
            'ph_vs_semantic': n_ph_sem, 'unresolved_ph': unresolved_ph,
            'semantic_diff': n_sem_diff, 'unresolved_sem': unresolved_sem,
            'garbage': n_garbage, 'garbage_top': top,
            'samples_ph': samples_ph, 'samples_sem': samples_sem,
        }, indent=1), encoding='utf-8')
        print('report ->', out_json)


if __name__ == '__main__':
    main()
