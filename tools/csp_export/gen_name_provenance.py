#!/usr/bin/env python3
"""Build anchors/name_provenance.json -- the SINGLE naming-provenance
authority (N1 task item 1 + data cleanup item 6).

Sections (name -> {name, source, ...}):
  members    key "Cls|<dec-offset>"
  functions  key "0xADDR"
  variables  key global name
  classes    key class name

Source enum + priority (binding, N1 spec):
  ini > yrpp > step6 > git-history > binary-evidence > auto > placeholder

Member seeds merged here (winner by rank; placeholder seeds always lose;
equal-rank different-name conflicts are NOT silently adjudicated -- they go
to the unresolved report):
  1. anchors/ini_member_names.json            (ini tier, extractor output)
  2. YRpp headers (Ares/Phobos YRpp/*.h)      (yrpp tier, layout-verified)
  3. member_lookup src markers                (ini/yrpp/git-history/binary)
  4. member_types evidence fields             (step6/binary/...)
  Only SEMANTIC names are recorded -- placeholders are never winners.

Modes:
  (default)            build the authority
  --clean-tables       one-shot pollution cleanup (N1 item 6):
                       * member_lookup + csp_canon_members: purge offsets
                         >= 2^40 (parser artefacts, never members)
                       * member_lookup RulesClass: drop src='g22-rulesclass-q'
                         entries whose name is a placeholder
  --check-parity       assert _provenance.PLACEHOLDER_RE == gen_cpp_canon's

Usage:
  python tools/csp_export/gen_name_provenance.py --clean-tables
  python tools/csp_export/gen_name_provenance.py
Exit 1 when unresolved conflicts exist (they are still written to
.omo/unresolved_reports/name_provenance.unresolved.json for consumption).
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
from _provenance import (  # noqa: E402
    PLACEHOLDER_RE, PRIORITY, RANK, PROV_PATH, evidence_to_source,
    is_placeholder, write_provenance, load_provenance, _ADJUDICATED_RE,
)

IN_PATH = ROOT / 'anchors' / 'ini_member_names.json'
ML_PATH = ROOT / 'tools' / 'member_lookup.json'
MT_PATH = ROOT / 'anchors' / 'member_types.json'
SIG_PATH = ROOT / 'signals.json'
GT_PATH = ROOT / 'anchors' / 'global_types.json'
ALIGN_PATH = ROOT / 'anchors' / 'class_name_align.json'
RTVT_PATH = ROOT / 'anchors' / 'rtti_vtable_class.json'
LAYOUTS_PATH = ROOT / 'tools' / 'class_layouts.json'
UNRESOLVED_DIR = ROOT / '.omo' / 'unresolved_reports'
GARBAGE = 2 ** 40

# ml `src` marker refinements beyond _provenance.evidence_to_source:
_INI_RE = re.compile(r"INI key|ini[-_]adjudic|ini[-_]rename", re.I)
_YRPP_RE = re.compile(r'yrpp|g10-a1', re.I)


def marker_to_source(marker):
    """ml src / mt evidence string -> provenance enum (ini/yrpp checked
    BEFORE the G15-19 adjudication family: 'g16-ini-adjudicated' is an INI
    adjudication, 'g17-p1-ctor+yrpp' is a ctor adjudication)."""
    s = (marker or '').strip()
    if not s:
        return 'auto'
    if _INI_RE.search(s):
        return 'ini'
    if _ADJUDICATED_RE.search(s):
        return 'git-history'
    if _YRPP_RE.search(s):
        return 'yrpp'
    return evidence_to_source(s)


# ---------------------------------------------------------------- YRpp parse
# Minimal re-implementation of the .omo/g14_a1_yrpp.py header parser
# (parse_header + offset walk).  Members are only trusted when the class
# carries a static_assert sizeof that the computed layout reproduces.
BASIC = {'char': 1, 'unsigned char': 1, 'signed char': 1, 'bool': 1,
         'BYTE': 1, 'BOOLEAN': 1, 'short': 2, 'unsigned short': 2,
         'wchar_t': 2, 'WORD': 2, 'int': 4, 'unsigned int': 4,
         'long': 4, 'unsigned long': 4, 'float': 4, 'BOOL': 4,
         'DWORD': 4, 'LONG': 4, 'UINT': 4, 'double': 8,
         'long long': 8, '__int64': 8, 'unsigned __int64': 8,
         'ULONGLONG': 8, 'HANDLE': 4, 'HMODULE': 4, 'HWND': 4}
DECL_RE = re.compile(
    r'^(?P<type>[A-Za-z_][\w:<>,\s]*?[\w:>\s]\s*?\*?\s*)'
    r'(?P<name>\w+)\s*(?P<arr>\[[^\]]*\])?\s*;\s*(?P<cmt>//.*)?$')
PROP_RE = re.compile(
    r'^(?:DECLARE|PROTECTED)_PROPERTY(?:_ARRAY)?\(\s*([\w:<>\s*]+?)\s*,'
    r'\s*(\w+)((?:\[[^\]]*\])?)\s*\)\s*;')
YRPP_PLACEHOLDER = re.compile(
    r'^(?:field|unk|unknown|padding|pad|unused|off|gap|reserved|align)', re.I)
SKIP_PREFIX = ('virtual', 'static', 'friend', 'enum', 'struct', 'class',
               'typedef', 'using', 'template', 'operator', 'return', 'if',
               'for', 'while', 'switch', '//', '#', '}', '{', 'public',
               'private', 'protected', 'else', 'do', 'assert',
               'static_assert')


def parse_yrpp_header(path):
    """Yield (name, base, members[(type,name,arr)], sizeof_or_None)."""
    try:
        txt = path.read_text(encoding='utf-8', errors='replace')
    except OSError:
        return []
    out = []
    for m in re.finditer(
            r'^\s*(?:class|struct)\s+(?:NOVTABLE\s+)?(\w+)\s*'
            r'(?::\s*([\w:<>,\s]+?)\s*)?\{', txt, re.M):
        name, bases = m.group(1), m.group(2)
        depth, i = 1, m.end()
        while i < len(txt) and depth:
            if txt[i] == '{':
                depth += 1
            elif txt[i] == '}':
                depth -= 1
            i += 1
        body = txt[m.end():i - 1]
        sa = re.search(
            r'static_assert\s*\(\s*sizeof\s*\(\s*(?:class\s+)?%s\s*\)'
            r'\s*==\s*(0x[0-9A-Fa-f]+|\d+)' % name, txt)
        sizeof = int(sa.group(1), 0) if sa else None
        members = []
        skip_until_semi = False
        for raw in body.splitlines():
            line = raw.strip()
            if not line:
                continue
            code = line.split('//', 1)[0].rstrip() or line
            if skip_until_semi:
                if ';' in code or '}' in code:
                    skip_until_semi = False
                continue
            if any(code.startswith(p) for p in SKIP_PREFIX):
                if '(' in code and ';' not in code and '{' not in code:
                    skip_until_semi = True
                continue
            if '(' in code:
                pm = PROP_RE.match(code)
                if pm:
                    members.append((pm.group(1).strip(), pm.group(2),
                                    pm.group(3) or ''))
                    continue
                if ';' not in code:
                    skip_until_semi = True
                continue
            dm = DECL_RE.match(code)
            if not dm:
                continue
            ty = dm.group('type').strip()
            if not ty or not re.match(r'^[A-Za-z_]', ty):
                continue
            if '=' in code and '==' not in code:
                continue
            members.append((ty, dm.group('name'), dm.group('arr') or ''))
        base = None
        if bases:
            first = re.split(r'[,:]', bases)[0].strip()
            first = re.sub(r'\bpublic\b|\bprotected\b|\bprivate\b'
                           r'|\bvirtual\b', '', first).strip()
            if first and first != name:
                base = first
        out.append({'name': name, 'base': base, 'members': members,
                    'sizeof': sizeof})
    return out


def yrpp_harvest():
    """-> ({cls: {off: name}}, skipped_audit).  Layout-verified only."""
    layouts = json.loads(LAYOUTS_PATH.read_text(encoding='utf-8'))
    headers = []
    for d in ('Ares/YRpp', 'Phobos/YRpp'):
        p = ROOT / d
        if p.is_dir():
            headers += sorted(p.glob('*.h'))
    sizes = dict(BASIC)
    classes = {}
    order = []
    for h in headers:
        for c in parse_yrpp_header(h):
            if c['name'] in classes:
                continue
            classes[c['name']] = c
            order.append(c['name'])
            if c['sizeof']:
                sizes.setdefault(c['name'], c['sizeof'])

    def size_of(ty):
        ty = ty.strip()
        if ty.endswith('*') or ty.endswith('&'):
            return 4
        ty = ty.replace('const ', '').strip()
        if '<' in ty:                      # template instance -> 4B or known
            base = ty.split('<', 1)[0].strip()
            if base in sizes:
                return sizes[base]
            return None
        if ty in sizes:
            return sizes[ty]
        if ty in layouts and isinstance(layouts[ty], dict) \
                and layouts[ty].get('size'):
            return layouts[ty]['size']
        return None

    def arr_len(a):
        if not a:
            return 1
        m = re.match(r'^\[(0x[0-9A-Fa-f]+|\d+)\]$', a.strip())
        return int(m.group(1), 0) if m else None

    result = {}
    skipped = {'no_sizeof': [], 'drift': [], 'unk_size': []}
    for cname in order:
        c = classes[cname]
        total = c['sizeof']
        if not total:
            skipped['no_sizeof'].append(cname)
            continue
        off = 0
        rows = []
        ok = True
        for (ty, nm, arr) in c['members']:
            n = arr_len(arr)
            sz = size_of(ty)
            if nm == '' or YRPP_PLACEHOLDER.match(nm):
                sz = sz if sz is not None else 1
                if n is None:
                    ok = False
                    break
                off += sz * n
                continue
            if sz is None or n is None:
                skipped['unk_size'].append('%s::%s(%s)' % (cname, nm, ty))
                ok = False
                break
            a = sz if sz < 4 else 4        # RA2/MSVC6: <=4-byte members pack
            off = (off + a - 1) // a * a
            for k in range(n):
                # arrays: first element keeps the name, rest get <name>k
                rows.append((off + k * sz, nm if k == 0 else '%s%d' % (nm, k)))
            off += sz * n
        if not ok:
            continue
        if off != total:
            skipped['drift'].append('%s computed=%d assert=%d'
                                    % (cname, off, total))
            continue
        for (o, nm) in rows:
            if o >= total:
                continue
            result.setdefault(cname, {})[o] = nm
    return result, skipped


# ------------------------------------------------------------------- cleanup
def clean_tables():
    """N1 item 6: garbage offsets + g22-rulesclass-q placeholder purge."""
    ml = json.loads(ML_PATH.read_text(encoding='utf-8'))
    purged_ml = purged_g22 = 0
    for cls in list(ml.keys()):
        mem = ml[cls]
        if not isinstance(mem, dict):
            continue
        for off in list(mem.keys()):
            e = mem[off]
            try:
                o = int(off)
            except (TypeError, ValueError):
                continue
            if o >= GARBAGE:
                del mem[off]
                purged_ml += 1
                continue
            if isinstance(e, dict) and cls == 'RulesClass' \
                    and (e.get('src') or '') == 'g22-rulesclass-q' \
                    and is_placeholder(e.get('name') or ''):
                del mem[off]
                purged_g22 += 1
    ml_pretty = json.dumps(ml, indent=1, ensure_ascii=False) + '\n'
    ML_PATH.write_text(ml_pretty, encoding='utf-8')

    cc = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                    .read_text(encoding='utf-8'))
    purged_cc = 0
    for cls, body in cc.items():
        if not isinstance(body, dict):
            continue
        mem = body.get('members') or {}
        for off in list(mem.keys()):
            try:
                if int(off) >= GARBAGE:
                    del mem[off]
                    purged_cc += 1
            except (TypeError, ValueError):
                continue
    (ROOT / 'anchors' / 'csp_canon_members.json').write_text(
        json.dumps(cc, indent=1, ensure_ascii=False) + '\n',
        encoding='utf-8')
    print('clean-tables: ml garbage purged=%d, g22-rulesclass-q purged=%d, '
          'canon garbage purged=%d' % (purged_ml, purged_g22, purged_cc))
    return {'ml_garbage': purged_ml, 'g22_rulesclass_q': purged_g22,
            'canon_garbage': purged_cc}


# --------------------------------------------------------------------- build
def build():
    stats = {'conflicts_unresolved': 0, 'same_rank_conflicts': 0}
    unresolved = []

    # candidate pool per (cls, off): {name: (rank, source, note)}
    def offer(pool, cls, off, name, source, note=''):
        if not name or is_placeholder(name):
            return
        key = (cls, off)
        rank = RANK.get(source, RANK['auto'])
        cur = pool.get(key, {}).get(name)
        if cur is None or rank < cur[0]:
            pool.setdefault(key, {})[name] = (rank, source, note)

    # ---- seed 1: INI extractor output
    ini_entries = {}
    if IN_PATH.exists():
        ini = json.loads(IN_PATH.read_text(encoding='utf-8'))
        for cls, mem in (ini.get('classes') or {}).items():
            for off, e in mem.items():
                if e.get('confidence') == 'weak-multi':
                    continue     # suspect attribution: recorded, not winner
                ini_entries[(cls, int(off))] = e
                offer(_pool, cls, int(off), e['name'], 'ini',
                      'INI key %r (%s)' % (e['key'], e.get('confidence')))

    # ---- seed 2: YRpp headers (layout-verified)
    yrpp, yrpp_skipped = yrpp_harvest()
    for cls, mem in yrpp.items():
        for off, nm in mem.items():
            offer(_pool, cls, off, nm, 'yrpp', 'YRpp header member')

    # ---- seed 3: member_lookup src markers (semantic names only)
    ml = json.loads(ML_PATH.read_text(encoding='utf-8'))
    for cls, mem in ml.items():
        if not isinstance(mem, dict):
            continue
        for off, m in mem.items():
            if not isinstance(m, dict):
                continue
            try:
                o = int(off)
            except (TypeError, ValueError):
                continue
            if o >= GARBAGE:
                continue
            src = marker_to_source(m.get('src'))
            offer(_pool, cls, o, m.get('name'), src,
                  'ml src=%r' % (m.get('src'),))

    # ---- seed 4: member_types evidence
    mt = json.loads(MT_PATH.read_text(encoding='utf-8'))
    for k, v in mt.items():
        if '+' not in k or not isinstance(v, dict):
            continue
        cls, off = k.rsplit('+', 1)
        mm = re.match(r'^0x([0-9A-Fa-f]+)$', off)
        if not mm:
            continue
        o = int(mm.group(1), 16)
        if o >= GARBAGE:
            continue
        src = marker_to_source(v.get('evidence'))
        offer(_pool, cls, o, v.get('name'), src,
              'mt evidence=%r' % (v.get('evidence'),))

    # ---- seed 5+6 (gap-fill): canon table + til members, binary-evidence
    # tier, offered ONLY where no other candidate exists (canon/til names
    # are downstream products of the other seeds -- they must not compete,
    # only cover canon-only/til-only semantic names)
    cc = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                    .read_text(encoding='utf-8'))
    for cls, body in cc.items():
        if not isinstance(body, dict):
            continue
        for off, m in (body.get('members') or {}).items():
            try:
                o = int(off)
            except (TypeError, ValueError):
                continue
            if o >= GARBAGE or (cls, o) in _pool:
                continue
            offer(_pool, cls, o, (m or {}).get('name'), 'binary-evidence',
                  'canon table name (gap-fill)')
    til_path = ROOT / '.omo' / 'til_members.json'
    if til_path.exists():
        til = json.loads(til_path.read_text(encoding='utf-8'))
        for cls, body in til.items():
            if not isinstance(body, dict):
                continue
            for off, m in (body.get('members') or {}).items():
                try:
                    o = int(str(off), 16)
                except (TypeError, ValueError):
                    continue
                if o >= GARBAGE or (cls, o) in _pool:
                    continue
                offer(_pool, cls, o, (m or {}).get('name'),
                      'binary-evidence', 'til member name (gap-fill)')

    # ---- merge: winner = min rank; equal-rank different names get a
    # deterministic lex-min winner with the tie recorded in the note AND in
    # the unresolved report (no silent choice, no exit-1 deadlock: every tie
    # is documented).  Lex-min favours the PascalCase adjudicated forms
    # (ASCII uppercase < lowercase), matching G16/G42.37 conventions.
    members = {}
    for (cls, off), cands in sorted(_pool.items()):
        best_rank = min(r for (r, _s, _n) in cands.values())
        winners = sorted(n for n, (r, _s, _n) in cands.items()
                         if r == best_rank)
        wn = winners[0]
        r, s, note = cands[wn]
        if len(winners) > 1:
            stats['same_rank_conflicts'] += 1
            note += '; same-rank tie vs %s (lex-min recorded)' % \
                ','.join(winners[1:])
            unresolved.append({
                'kind': 'same-rank-member', 'class': cls, 'off': off,
                'rank': best_rank, 'winner': wn,
                'candidates': {n: cands[n][1] for n in winners}})
        members['%s|%d' % (cls, off)] = {
            'name': wn, 'source': s, 'note': note}

    # ---- functions: signals.json (semantic = binary-evidence, sub_* = auto)
    functions = {}
    sig = json.loads(SIG_PATH.read_text(encoding='utf-8'))
    for a, v in (sig.get('symbols') or {}).items():
        if not isinstance(v, dict) or v.get('kind') != 'function':
            continue
        nm = v.get('name') or ''
        if not nm:
            continue
        try:
            ai = int(a, 16)
        except ValueError:
            continue
        functions['0x%X' % ai] = {
            'name': nm,
            'source': 'auto' if is_placeholder(nm) else 'binary-evidence'}
    # G16 ini adjudications also touched member_set with addresses? none
    # recorded for functions; the mcp write-through extends this section.

    # ---- variables: global_types keys (mechanical -> auto)
    variables = {}
    if GT_PATH.exists():
        gt = json.loads(GT_PATH.read_text(encoding='utf-8'))
        for nm in gt:
            if isinstance(nm, str) and nm and not is_placeholder(nm):
                variables[nm] = {'source': 'auto',
                                 'note': 'global_types key'}
            elif isinstance(nm, str) and nm:
                variables[nm] = {'source': 'placeholder'}

    # ---- classes: YRpp > RTTI/align binary evidence > auto
    classes = {}
    yrpp_cls = set(yrpp.keys())
    align = json.loads(ALIGN_PATH.read_text(encoding='utf-8'))
    rtvt = json.loads(RTVT_PATH.read_text(encoding='utf-8'))
    canon_to_rtti = align.get('canon_to_rtti') or {}
    rtti_names = set()
    for _a, v in rtvt.items():
        cn = (v or {}).get('class')
        if cn:
            rtti_names.add(cn)
    rtti_canon = set(canon_to_rtti.keys())
    for rname, m in (align.get('rtti_to_canon') or {}).items():
        c = (m or {}).get('canon')
        if c:
            rtti_canon.add(c)
    universe = set(ml.keys())
    cc = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                    .read_text(encoding='utf-8'))
    universe |= set(cc.keys())
    for cn in sorted(universe):
        if not isinstance(cn, str) or not cn:
            continue
        if cn in yrpp_cls:
            classes[cn] = {'source': 'yrpp', 'note': 'YRpp header class'}
        elif cn in canon_to_rtti or cn in rtti_names or cn in rtti_canon:
            classes[cn] = {'source': 'binary-evidence',
                           'note': 'RTTI/vtable-derived class key'}
        else:
            classes[cn] = {'source': 'auto',
                           'note': 'no RTTI/YRpp record (til/mt-only key)'}

    prov = {'members': members, 'functions': functions,
            'variables': variables, 'classes': classes}
    stats.update({
        'members': len(members),
        'functions': len(functions),
        'variables': len(variables),
        'classes': len(classes),
        'ini_seeds': len(ini_entries),
        'yrpp_classes': len(yrpp),
        'yrpp_skipped': {k: len(v) for k, v in yrpp_skipped.items()},
    })
    write_provenance(prov, meta_extra={'stats': stats,
                                       'priority': PRIORITY,
                                       'builder': 'gen_name_provenance.py'})
    UNRESOLVED_DIR.mkdir(parents=True, exist_ok=True)
    (UNRESOLVED_DIR / 'name_provenance.unresolved.json').write_text(
        json.dumps({'stats': stats, 'unresolved': unresolved[:2000],
                    'unresolved_total': len(unresolved)},
                   indent=1) + '\n', encoding='utf-8')
    print(json.dumps(stats, indent=1))
    print('provenance ->', PROV_PATH)
    print('unresolved ->', UNRESOLVED_DIR / 'name_provenance.unresolved.json')
    return stats


_pool = {}


def main():
    args = sys.argv[1:]
    if '--check-parity' in args:
        import importlib.util
        spec = importlib.util.spec_from_file_location(
            '_gcc_parity', ROOT / 'tools' / 'csp_export' / 'gen_cpp_canon.py')
        txt = (ROOT / 'tools' / 'csp_export' / 'gen_cpp_canon.py') \
            .read_text(encoding='utf-8')
        m = re.search(r'PLACEHOLDER_RE = re\.compile\(\s*r\'([^\']+)\'', txt)
        assert m, 'gen_cpp_canon PLACEHOLDER_RE not found'
        gcc_re = re.compile(m.group(1))
        for probe in ('q01C', 'u32_1C', '__pad_12', 'field_BC', 'vtable1',
                      'Health', 'Damage', 'x_field_0x10', 'u8_5', 'qABC'):
            assert bool(gcc_re.match(probe)) == is_placeholder(probe), probe
        print('parity OK')
        return
    if '--clean-tables' in args:
        clean_tables()
        return
    global _pool
    _pool = {}
    stats = build()
    if stats.get('same_rank_conflicts'):
        print('NOTE: %d same-rank ties recorded (deterministic lex-min '
              'winners + unresolved report)' % stats['same_rank_conflicts'])


if __name__ == '__main__':
    main()
