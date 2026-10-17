#!/usr/bin/env python3
"""Re-materialize DAMAGED corpus def bodies from ida_cache (whole-def).

Damage being repaired: the G41 line-restorer injected complete single-line
statements into multi-line statements (orphaned continuations, duplicated
anchors) and applied a hard x4 dword scale to bare `this + N` arithmetic
regardless of the function's actual this-type (`_BYTE *this` is x1).

Repair is whole-def and deterministic:
  * def head (corpus signature) is KEPT as-is -- compile state unchanged;
  * the body is rebuilt from the cache's OWN multi-line decompilation
    (self-consistent structure, anchors inline);
  * cache param names are mapped positionally onto the corpus head's
    param names (the body references stay consistent with the head);
  * bare `this + N` / `*(this + N)` arithmetic is scaled by the cache
    signature's OWN this-type (byte-scale for `_BYTE *this`/`char *this`,
    dword otherwise) and rewritten as
        `*(ELEM *)((char *)this + N*scale)`  /  `((char *)this + N*scale)`
    so the corpus member-def's typed `this` observes the same address.

Targets: defs whose anchor multiset has EXTRAS vs the cache (the
duplication marker). Optional --all-defs for every def in scope files.

RC3 content-preservation guard (plan project-optimization.md #10):
  * per-function manifest .omo/rematerialize_defs_manifest.json records
    addr -> {file, action, old_body_sha256, new_body_sha256} for every
    rematerialized def -- an audit ledger of what each body was.
  * a def is only replaced when the replacement is PROVEN PRESENT: the
    rebuilt body has non-hollow content and balanced braces.  A non-hollow
    old body is never replaced by a hollow/unbalanced one -- the def is
    refused (kept), listed in .omo/unresolved_reports/
    rematerialize_defs.lossguard.json and the process exits non-zero.
  * every whole-file write first backs the original bytes up to
    .omo/rematerialize_defs_backup/<rel-path>.pre (fix_dupdef_corpses
    pattern; earliest pre-run state preserved) -- restorable.
  * the leftover `if touched or True:` write gate (L267 vintage) is gone:
    files are rewritten only when the content actually changed, so the
    pass is idempotent and files_changed no longer over-counts.

Usage: python tools/csp_export/rematerialize_defs.py [--apply]
"""
import glob
import hashlib
import json
import bisect
import os
import re
import shutil
import sys
from collections import Counter

APPLY = '--apply' in sys.argv
ALL_DEFS = '--all-defs' in sys.argv
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')
DEF_HEAD = re.compile(r'^[^/]*?\b([A-Za-z_]\w*)::\s*~?\w+\s*\(([^)]*)\)')
BAK = '.omo' + os.sep + 'rematerialize_defs_backup'

# X54 (typed-snapshot lane): optional cache-dir override + explicit target
# list + dedicated manifest path.  Targets mode REPLACES only the listed
# addrs (force, subject to the same RC3 loss guard) and reads renders from
# the given cache dir (e.g. .omo/ida_cache_x40).
CACHE_DIR = '.omo/ida_cache'
MANIFEST_OUT = None
TARGETS = None
for _a in sys.argv[1:]:
    if _a.startswith('--cache-dir='):
        CACHE_DIR = _a.split('=', 1)[1]
    elif _a.startswith('--manifest-out='):
        MANIFEST_OUT = _a.split('=', 1)[1]
    elif _a.startswith('--targets='):
        with open(_a.split('=', 1)[1], encoding='utf-8') as _tf:
            TARGETS = json.load(_tf)


def _core(text):
    """Content of `text` with comments and whitespace stripped -- the
    hollow-detection truth (an anchor/comment-only body is hollow)."""
    t = re.sub(r'/\*.*?\*/', '', text, flags=re.S)
    t = re.sub(r'//[^\n]*', '', t)
    return re.sub(r'\s+', '', t)


def _sha(text):
    return hashlib.sha256(
        text.encode('utf-8', errors='replace')).hexdigest()


def _backup_before_write(p):
    """RC3: byte-exact pre-run backup before a whole-file rewrite
    (earliest state kept -- fix_dupdef_corpses pattern)."""
    rel = os.path.relpath(p)  # X54: relative -- os.path.join discards the
    # BAK prefix when dirname(p) is absolute (Windows path-join semantics),
    # which wrote .pre files INTO src/ in targets mode.
    bdir = os.path.join(BAK, os.path.dirname(rel))
    os.makedirs(bdir, exist_ok=True)
    b = os.path.join(bdir, os.path.basename(p) + '.pre')
    if not os.path.exists(b):
        shutil.copyfile(p, b)

TOKEN_MAP = [
    (re.compile(r'\b__thiscall\s+'), ''),
    (re.compile(r'\b__stdcall\s+'), ''),
    (re.compile(r'\b_DWORD\b'), 'unsigned int'),
    (re.compile(r'\b_BYTE\b'), 'unsigned char'),
    (re.compile(r'\b_WORD\b'), 'unsigned short'),
    (re.compile(r'\b_QWORD\b'), 'unsigned long long'),
    # X54: digit-leading IDA callee names are illegal C++ identifiers
    # (Function::41C430); legalize with the corpus's sub_ prefix.
    (re.compile(r'\b([A-Za-z_]\w*::)(\d\w*)\('), r'\1sub_\2('),
]

# X55 W1: IDA renders vtable references as `Cls::`vftable'' -- the backtick
# is not C++ (C2001 newline-in-constant + C2015 + C2018 0x60 cascade, ~3
# errors per site).  Corpus convention = the `vt_<Name>` externs in
# e4_globals.hpp (`extern unsigned char vt_X[4];  // data: 0xADDR`).  The
# rewrite is address-authoritative: demangled ref -> vtable address (IDA
# names dump) -> in-tree vt_ symbol for that address.  Rule lives in the
# shared side-effect-free module (single source of truth) -- also used by
# the X55 tree fixer.
from vtable_ref_norm import fix_vftable_refs  # noqa: E402

s = json.load(open('signals.json', encoding='utf-8'))
STARTS = sorted(int(a, 16) for a, sym in s['symbols'].items()
                if isinstance(sym, dict) and sym.get('kind') == 'function')
_cache = {}


def enc_cache(a):
    i = bisect.bisect_right(STARTS, a) - 1
    st = STARTS[i] if i >= 0 else a
    if st in _cache:
        return _cache[st]
    try:
        dec = json.load(open('%s/func_0x%X.json' % (CACHE_DIR, st),
                             encoding='utf-8')).get('decompiled', '')
    except OSError:
        dec = ''
    _cache[st] = dec
    return dec


def cache_params(sig_head):
    m = re.search(r'\(([^)]*)\)', sig_head)
    if not m:
        return []
    out = []
    for tok in m.group(1).split(','):
        tok = tok.strip()
        if not tok:
            continue
        pm = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$', tok)
        out.append(pm.group(1) if pm else None)
    return out


def this_scale(sig_head):
    """(factor, elem_type) from the cache signature's first param type —
    mirrors the verifier's own `_this_mult` (byte=1, word=2, else=4), with
    one addition proven by 0x4C4AF0 (`Remove(int this)`, events 4/13/8):
    an INT-typed this (address held by value) means `this + N` is RAW BYTE
    arithmetic regardless of the read/write cast."""
    m = re.search(r'\(([^)]*)\)', sig_head)
    first = (m.group(1).split(',')[0] if m else '').strip()
    m2 = re.search(r'([A-Za-z_][\w ]*?)\s*\*?\s*([A-Za-z_]\w*)\s*$', first)
    ptype = (m2.group(1).strip() if m2 else first)
    if not ptype.endswith('*') and re.match(
            r'^(int|unsigned int|long|unsigned long|__int32)$', ptype):
        return 1, 'char'
    if re.search(r'_BYTE|\bchar\b|__int8|uint8_t', ptype):
        return 1, 'unsigned char'
    if re.search(r'_WORD|__int16|uint16_t|\bshort\b', ptype):
        return 2, 'unsigned short'
    return 4, 'unsigned int'


def scale_body(body, factor, elem):
    # cast-INLINE form: `*((ELEM *)this + N)` -- N scales by sizeof(ELEM)
    # implicitly (= the IDA `this + N` element scale), compiler-legal on a
    # typed corpus `this`, and extractor-native (G39/G40.3 vocabulary).
    body = re.sub(
        r'\*\s*\(\s*this\s*\+\s*(\d+)\s*\)',
        lambda m: '*((%s *)this + %d)' % (elem, int(m.group(1))),
        body)
    # `*this + N` (typed-this vtable slot walk): pointer-this means N
    # ELEMENTS (4N bytes); int-this means N BYTES. Bake the scale at
    # rewrite time into the single-star byte-walk form
    # `*(unsigned int *)this + <bytes>` -- extractor-native unscaled.
    body = re.sub(
        r'\*\s*this\s*\+\s*(\d+)\b',
        lambda m: '*(unsigned int *)this + %d' % (int(m.group(1)) * factor),
        body)
    # G41.4 vintage `*(unsigned int **)this + N` lines carry PRE-BAKED or
    # UNSCALED N depending on which pass wrote them -- normalize ALL of
    # them to the single-star byte form. The unscaled vintage wrote
    # element N (untyped cast) -- but the element size of a fn-ptr walk is
    # 4 ONLY for pointer-this; for int-this (factor 1) N is bytes already.
    body = re.sub(
        r'\*\s*\(\s*unsigned int\s*\*\*\s*\)\s*this\s*\+\s*(\d+)\b',
        lambda m: '*(unsigned int *)this + %d' % (
            int(m.group(1)) * (1 if factor == 1 else 1)),
        body)
    # bare `(this + N)` (cast-outside forms keep their own scale; `*this`
    # handled above)
    body = re.sub(
        r'(?<!\*)(?<!\*\))\bthis\s*\+\s*(\d+)\b',
        lambda m: '(%s *)this + %d' % (elem, int(m.group(1))),
        body)
    return body


def normalize_double_cast(text):
    """`*(T *)((char *)this + N)` -> `*((T *)this + N/sizeof(T))` -- the
    double-cast walks BYTES via (char*); the folded form scales N by
    sizeof(T) itself, so N must divide back. Non-divisible N (sub-element
    access) keeps the double-cast form (extractor inner-match handles it)."""
    sizes = {'unsigned char': 1, 'char': 1, 'unsigned short': 2, 'short': 2,
             'unsigned int': 4, 'int': 4, 'long long': 8,
             'unsigned long long': 8}

    def _fold(m):
        t, n = m.group(1), int(m.group(2))
        sz = sizes.get(t, 4)
        if n % sz:
            return m.group(0)
        return '*((%s *)this + %d)' % (t, n // sz)

    return re.sub(
        r'\*\s*\(\s*(unsigned char|unsigned int|unsigned short|'
        r'unsigned long long|int|char|short|long long)\s*\*\s*\)\s*'
        r'\(\s*\(char \*\)this \+ (\d+)\s*\)',
        _fold, text)


def param_rename(body, cache_names, corpus_names, cache_is_member):
    pairs = []
    cn = list(corpus_names)
    src = cache_names[1:] if cache_is_member else cache_names
    for k, c in enumerate(src):
        if k < len(cn) and c and cn[k] and c != cn[k]:
            pairs.append((c, cn[k]))
    for old, new in pairs:
        body = re.sub(r'\b%s\b' % re.escape(old), new, body)
    return body


def corpus_params(head_params):
    out = []
    for tok in head_params.split(','):
        tok = tok.strip()
        if not tok:
            continue
        pm = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$', tok)
        out.append(pm.group(1) if pm else None)
    return out


stats = Counter()
files_changed = 0
manifest = {}
lossguard = {}
if TARGETS is not None:
    # X54 targets mode: {addr(hex str) -> file} map; only these defs are
    # (force-)replaced, renders read from --cache-dir.
    ROOT = os.getcwd()
    TSET = {}
    for k, v in TARGETS.items():
        try:
            TSET[int(k, 16)] = v.replace('\\', '/')
        except (ValueError, TypeError):
            continue
    files = sorted({os.path.join(ROOT, f) for f in TSET.values()
                    if os.path.exists(os.path.join(ROOT, f))})
else:
    TSET = None
    files = (glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
             + glob.glob('src/system/gap2*.cpp'))
class _HeadMatch(object):
    """Synthetic match for marker-driven (non-`::`) def heads: exposes
    .group(2) = parameter text, balanced-paren aware."""

    def __init__(self, params):
        self._p = params

    def group(self, n):
        return self._p if n == 2 else None


def _balanced_params(line):
    """Parameter text from the first '(' to its matching ')' (nestable)."""
    a = line.find('(')
    if a < 0:
        return None
    d = 0
    for k in range(a, len(line)):
        if line[k] == '(':
            d += 1
        elif line[k] == ')':
            d -= 1
            if d == 0:
                return line[a + 1:k]
    return None


for p in files:
    raw = open(p, encoding='utf-8', errors='replace').read()
    lines = raw.split('\n')
    out = list(lines)
    i = 0
    while i < len(lines):
        hm = DEF_HEAD.search(lines[i])
        if TSET is not None and hm is None:
            # X54 marker-driven def location: the marker pins the def even
            # when the head has no `Cls::` (global/CRT shapes).
            mm = re.match(r'^//\s*0x([0-9a-fA-F]{6,8})\s*$', lines[i].strip())
            if mm and int(mm.group(1), 16) in TSET:
                h = i + 1
                steps = 0
                while h < len(lines) and steps < 4:
                    s2 = lines[h].strip()
                    if s2:
                        steps += 1
                        if '(' in s2:
                            params = _balanced_params(lines[h])
                            if params is not None:
                                hm = _HeadMatch(params)
                                i = h
                            break
                    h += 1
        if not hm:
            i += 1
            continue
        # opening brace: same line (gap2 style) or the next line (e4 style)
        bi = i if '{' in lines[i] else (
            i + 1 if i + 1 < len(lines) and lines[i + 1].lstrip().startswith('{')
            else -1)
        if bi < 0:
            i += 1
            continue
        d = 0
        j = bi
        closed = False
        while j < len(lines) and j < i + 4000:
            d += lines[j].count('{') - lines[j].count('}')
            if j > bi and d <= 0:
                closed = True
                break
            j += 1
        if not closed:
            i += 1
            continue
        block = lines[i:j + 1]
        addr = None
        for k in (i - 1, i - 2):
            if 0 <= k < len(lines):
                am = re.search(r'//\s*0x([0-9a-fA-F]+)', lines[k])
                if am:
                    addr = int(am.group(1), 16)
                    break
        mkey = ('%X' % addr) if addr is not None else \
            'NOADDR@%s:%d' % (p.replace('\\', '/'), i + 1)
        if addr is not None:
            if TSET is not None and int(addr) not in TSET:
                i = j + 1
                continue
            dec = enc_cache(addr)
            want = Counter(a.lower() for a in ANCHOR.findall(dec)) if dec else None
            got = Counter(a.lower() for a in ANCHOR.findall('\n'.join(block)))
            # extras = duplicated anchors (statement-interleave damage);
            # missing/EMPTY body with a non-empty cache = glue-corpse or
            # anchorless v6-restored lines (stubs carry none by design but
            # also carry no def-level glue).
            damaged = bool(want and (not got or want != got)) or \
                (TSET is not None and dec)
            if dec and (ALL_DEFS or damaged):
                sig_end = dec.find('{')
                if sig_end > 0:
                    sig_head = dec[:sig_end]
                    body = dec[sig_end + 1:dec.rfind('}')]
                    for tm, rep in TOKEN_MAP:
                        body = tm.sub(rep, body)
                    # X55 W1: backtick vftable refs -> address-authoritative
                    # vt_ extern refs (see fix_vftable_refs).
                    body = fix_vftable_refs(body)
                    cparams = cache_params(sig_head)
                    cparams_n = [x for x in cparams if x]
                    corpus_p = corpus_params(hm.group(2))
                    corpus_n = [x for x in corpus_p if x]
                    # member def (implicit this): corpus has one FEWER param
                    # than the cache signature -> skip the cache's this-param.
                    # demoted-this def: counts EQUAL -> map all positionally.
                    skip_this = ('__thiscall' in sig_head
                                 and len(corpus_n) == len(cparams_n) - 1)
                    src = cparams[1:] if skip_this else cparams
                    # X54: bodies keep the `this` receiver verbatim (the
                    # dominant corpus convention -- canon_member_lowering's
                    # F-THIS keys on the literal).  Never rename it away.
                    if (not skip_this and cparams
                            and cparams[0] == 'this'):
                        src = cparams[1:]
                    # X54: positional renaming is only DEFINED when the
                    # filtered param sequences have equal length.  A typed
                    # cache signature (e.g. 4 params) against an old
                    # demoted corpus head (2 params) has no positional
                    # meaning -- renaming would clobber (a3->a2 over a2->a1).
                    # Keep the render's own names verbatim instead.
                    src_n = [x for x in src if x]
                    if len(src_n) != len(corpus_n):
                        stats['param-mismatch-kept'] += 1
                        src = []
                    factor, elem = this_scale(sig_head)
                    body = param_rename(body, src, corpus_p, False)
                    if skip_this or '__thiscall' not in sig_head:
                        if skip_this:
                            factor, elem = this_scale(sig_head)
                            body = scale_body(body, factor, elem)
                    body = normalize_double_cast(body)
                    # RC3 loss guard: replacement must be PROVEN PRESENT
                    # (non-hollow content, balanced braces) before a
                    # non-hollow old body is discarded.
                    old_block_text = '\n'.join(block)
                    old_core = _core(old_block_text)
                    new_core = _core(body)
                    balanced = body.count('{') == body.count('}')
                    if old_core and (not new_core or not balanced):
                        reason = ('replacement body is hollow (RC3 loss '
                                  'guard: old body had real content)'
                                  if not new_core else
                                  'unbalanced replacement body (RC3 loss '
                                  'guard)')
                        stats['refused-loss-guard'] += 1
                        manifest[mkey] = {
                            'file': p.replace('\\', '/'),
                            'action': 'refused-loss-guard',
                            'reason': reason,
                            'old_body_sha256': _sha(old_block_text)}
                        lossguard[mkey] = {
                            'file': p.replace('\\', '/'), 'reason': reason,
                            'old_body_head': '\n'.join(block[1:9])}
                    else:
                        if bi == i:   # gap2 style: `Cls::Mth(...) {`
                            new_block = '\n'.join(
                                [lines[i]] + body.split('\n')) + '\n}'
                            out[i] = new_block
                        else:         # e4 style: brace on its own next line
                            new_block = lines[i] + '\n{\n' + body + '\n}'
                            out[i] = new_block
                        for k2 in range(i + 1, j + 1):
                            out[k2] = None
                        stats['remat' if damaged else 'remat-all'] += 1
                        manifest[mkey] = {
                            'file': p.replace('\\', '/'),
                            'action': 'remat' if damaged else 'remat-all',
                            'old_body_sha256': _sha(old_block_text),
                            'new_body_sha256': _sha(new_block)}
        i = j + 1
    final = [x for x in out if x is not None]
    text2 = normalize_double_cast('\n'.join(final))
    if text2 != raw:
        files_changed += 1
        if APPLY:
            _backup_before_write(p)
            open(p, 'w', encoding='utf-8', newline='').write(text2)
print('files changed:', files_changed)
print(dict(stats))
if VFT_STATS:
    print('vftable-normalizer:', dict(VFT_STATS))
if APPLY or MANIFEST_OUT:
    # manifest on dry-run only when an explicit --manifest-out is given
    # (never clobber the standing manifest from a bare dry-run)
    mpath = MANIFEST_OUT or '.omo/rematerialize_defs_manifest.json'
    os.makedirs(os.path.dirname(mpath) or '.', exist_ok=True)
    with open(mpath, 'w', encoding='utf-8') as f:
        json.dump({'_meta': {'generator': 'rematerialize_defs.py',
                             'policy': 'rc3-loss-guard (plan #10)',
                             'apply': APPLY, 'all_defs': ALL_DEFS,
                             'targets_mode': TARGETS is not None,
                             'cache_dir': CACHE_DIR,
                             'files_changed': files_changed,
                             'stats': dict(stats)},
                   'defs': manifest}, f, indent=1)
    print('manifest written: %s' % mpath)
if lossguard:
    os.makedirs(os.path.join('.omo', 'unresolved_reports'), exist_ok=True)
    rpt = os.path.join('.omo', 'unresolved_reports',
                       'rematerialize_defs.lossguard.json')
    with open(rpt, 'w', encoding='utf-8') as f:
        json.dump({'_meta': {'generator': 'rematerialize_defs.py',
                             'policy': 'rc3-loss-guard (plan #10)',
                             'apply': APPLY, 'total': len(lossguard)},
                   'refused': lossguard}, f, indent=1)
    print('LOSS GUARD REPORT: %s (%d def(s) would lose their body -- '
          'previous body KEPT)' % (rpt, len(lossguard)))
    print('FAIL LOUD: exit 1 -- a non-hollow body must never be replaced '
          'by a hollow/unproven one.')
if not APPLY:
    print('(dry run -- pass --apply)')
sys.exit(1 if lossguard else 0)
