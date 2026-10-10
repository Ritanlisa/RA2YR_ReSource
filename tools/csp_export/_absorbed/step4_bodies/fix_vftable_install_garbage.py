#!/usr/bin/env python3
"""Fix vftable-install garbage casts (mechanical, ida_cache-truth adjudicated).

Corruption form (from repeated ptr-form fixer rounds compounding):
    *(unsigned int *)this->__pad_0 = &(void*)(void*)&X_vftable;   /*0x...*/
    this->vtable0 = &(void*)(void*)(void*)&off_7E1668;
    this->? = &(void*)&Y_vftable;

Three surgical repairs, all LINE-SCOPED, all idempotent (the `&(void*)`
marker disappears after one pass):

  R1 (RHS):  `= &(void*)N &NAME` -> `= (CAST)&NAME`
     CAST    = `(unsigned int)` when LHS is an int-deref form;
               else the flat-header member type of the LHS member;
               else `(unsigned int)` fallback.
  R2 (LHS &): `*(T *)this->M` -> `*(T *)&this->M` ONLY when the ida_cache
     original line at the /*0xADDR*/ anchor writes through the object
     BASE (`*(_DWORD *)this =`, `*(_DWORD *)(this + N) =`, or the same
     through the def's first param as this-alias). Interior pointer
     members (`*(this->ptr) =` in the original) keep the no-& form.
  R3 (name): `this->?` -> real member at the offset the original shows
     (`this + N`): flat-header member at that offset, else
     member_lookup.json name, else `q%03X` pad.

Corpus scope guard: src/e4/*, src/_gap2/*, src/system/gap2*.cpp,
src/misc/misc_ext.cpp only. Never touches hand-translated legacy files.

Usage: python tools/csp_export/fix_vftable_install_garbage.py [--apply]
"""
import glob
import json
import os
import re
import sys
from collections import Counter

APPLY = '--apply' in sys.argv
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')
GARBAGE_RHS = re.compile(r'=\s*&\s*((?:\(void\s*\*\)\s*)+)&\s*([A-Za-z_]\w*)')
LHS_DEREF_MEMBER = re.compile(r'(\*\s*\(\s*unsigned int\s*\*\s*\))this->(\w+)')
THIS_UNKNOWN = re.compile(r'this->\?(?![\w])')
DEF_HEAD = re.compile(r'^[^/]*?\b([A-Za-z_]\w*)::\s*~?\w+\s*\(([^)]*)\)')

ORIG_BASE_DEREF = [
    re.compile(r'\*\s*\(\s*_DWORD\s*\*\s*\)\s*this\s*='),
    re.compile(r'\*\s*\([^)]*\)\s*\(\s*this\s*\+\s*\w+'),
]


def func_starts():
    global _FUNC_STARTS
    if _FUNC_STARTS is None:
        import bisect
        s = json.load(open('signals.json', encoding='utf-8', errors='replace'))
        _FUNC_STARTS = sorted(int(a, 16) for a, sym in s['symbols'].items()
                              if isinstance(sym, dict)
                              and sym.get('kind') == 'function')
    return _FUNC_STARTS


_FUNC_STARTS = None
_CACHE = {}


def load_cache_line(addr_int):
    import bisect
    starts = func_starts()
    i = bisect.bisect_right(starts, addr_int) - 1
    start = starts[i] if i >= 0 else addr_int
    if start in _CACHE:
        return _CACHE[start]
    try:
        dec = json.load(open('.omo/ida_cache/func_0x%X.json' % start,
                             encoding='utf-8', errors='replace')).get('decompiled', '')
    except OSError:
        dec = ''
    _CACHE[start] = dec
    return dec


def orig_stmt_at(pseudo, anchor_hex):
    """Whole-line extraction: anchors sit at line ends in ida_cache."""
    if not pseudo:
        return None
    low = pseudo.lower()
    i = low.find('/*0x' + anchor_hex.lower() + '*/')
    if i <= 0:
        return None
    line = pseudo[pseudo.rfind('\n', 0, i) + 1:pseudo.find('\n', i)]
    return line.split('/*')[0].strip() or None


_MEMBER_LOOKUP = None


def member_lookup():
    global _MEMBER_LOOKUP
    if _MEMBER_LOOKUP is None:
        try:
            _MEMBER_LOOKUP = json.load(open('tools/member_lookup.json',
                                            encoding='utf-8', errors='replace'))
        except OSError:
            _MEMBER_LOOKUP = {}
    return _MEMBER_LOOKUP


INC_RE = re.compile(r'#include\s+"e4/classes/(\w+)_e4\.hpp"')
STRUCT_RE = re.compile(r'(?:class|struct)\s+(\w+)\s*\{(.*?)\n\};', re.S)
MEMBER_RE = re.compile(r'^\s*([A-Za-z_][\w:<>,\s\*]*?[\s\*])(\w+)\s*;'
                       r'(?:\s*//\s*0x([0-9a-fA-F]+))?', re.M)

_FLAT_MEMBERS = {}


def flat_members_for(cpp_path, lines):
    if cpp_path in _FLAT_MEMBERS:
        return _FLAT_MEMBERS[cpp_path]
    table = {}
    for ln in lines[:40]:
        m = INC_RE.search(ln)
        if m:
            hpp = 'src/e4/classes/%s_e4.hpp' % m.group(1)
            if os.path.exists(hpp):
                txt = open(hpp, encoding='utf-8', errors='replace').read()
                for sm in STRUCT_RE.finditer(txt):
                    cls, body = sm.group(1), sm.group(2)
                    for mm in MEMBER_RE.finditer(body):
                        table[(cls, mm.group(2))] = (mm.group(1).strip(),
                                                     mm.group(3) or '')
                break
    _FLAT_MEMBERS[cpp_path] = table
    return table


def first_param_name(def_params):
    if not def_params or not def_params.strip():
        return None
    tok = def_params.split(',')[0].strip()
    m = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$', tok)
    if not m or m.group(1) in ('void',):
        return None
    return m.group(1)


SCALE = {'_DWORD': 4, '_WORD': 2, '_BYTE': 1, 'dword': 4, 'word': 2,
         'byte': 1, 'char': 1, 'unsigned': 4, 'int': 4, 'short': 2,
         'long': 4, '__int16': 2, 'int16_t': 2, 'int8_t': 1, 'uint8_t': 1,
         'int32_t': 4, 'uint32_t': 4, 'unsigned char': 1, 'char *': 1}

ORIG_BASE_PLUS = re.compile(
    r'(?:\(\s*([\w ]+?)\s*\*\s*\)\s*\(?\s*)?\b(this|FIRSTPARAM)\s*\+\s*'
    r'(0x[0-9a-fA-F]+|\d+)\b')


def scale_of(cast):
    if not cast:
        return 4
    return SCALE.get(cast.strip(), 4)


def resolve_unknown_members(line, orig, ctx, stats):
    """Per-occurrence mapping of `this->?` against `IDENT + N` in the
    original line. Zip in order; any ambiguity (count mismatch, symbolic
    N, multiple ? in one arithmetic chain) -> leave the line untouched."""
    n_unknown = len(THIS_UNKNOWN.findall(line))
    if n_unknown == 0:
        return line
    if n_unknown > 1 or not orig:
        stats['r3-skip'] += n_unknown and 1 or 0
        return line
    pat = ORIG_BASE_PLUS.pattern.replace('FIRSTPARAM',
                                         re.escape(ctx['orig_first_param']
                                                   or '\x00NONE'))
    offs = [(m.group(3), scale_of(m.group(1))) for m in re.finditer(pat, orig)]
    if len(offs) != 1:
        stats['r3-skip'] += 1
        return line
    n_str, scale = offs[0]
    off = int(n_str, 0) * scale
    real = None
    for (cls, mem), (_t, off_s) in ctx['table'].items():
        if off_s and int(off_s, 16) == off and cls == ctx['cls']:
            real = mem
            break
    if real is None:
        ml = member_lookup().get(ctx['cls'] or '', {})
        ent = ml.get(str(off)) or ml.get('%d' % off)
        if isinstance(ent, dict):
            real = ent.get('name')
    if real:
        name = real
        stats['r3-name'] += 1
    elif ctx['is_e4']:
        name = 'q%03X' % off
        ctx['pads'].add(off)
        stats['r3-pad'] += 1
    else:
        stats['r3-skip'] += 1
        return line
    # address-of ONLY when this ? is the LHS deref-write target:
    # `*(CAST *)this->? = ...` (original wrote through the object base).
    # Value reads flowing into arithmetic keep the plain member form —
    # `&` there would swallow the READ(member) event and skew semantics.
    eq = line.find('=')
    qpos = line.find('this->?')
    if (eq > qpos >= 0
            and re.search(r'\*\s*\)\s*\(?\s*$', line[:qpos])
            and not re.match(r'\s*(if|while|return|for)\b', line)):
        return THIS_UNKNOWN.sub('&this->' + name, line)
    return THIS_UNKNOWN.sub('this->' + name, line)


def orig_first_param(pseudo):
    """First param name of the original decompiled signature (this-alias)."""
    if not pseudo:
        return None
    head = pseudo.split('{', 1)[0]
    m = re.search(r'\(([^)]*)\)', head)
    if not m:
        return None
    tok = m.group(1).split(',')[0].strip()
    m2 = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$', tok)
    return m2.group(1) if m2 else None


def fix_line(line, ctx, stats):
    if '&(void' not in line and 'this->?' not in line:
        return line
    am = ANCHOR.search(line)
    orig = None
    if am:
        orig = orig_stmt_at(load_cache_line(int(am.group(1), 16)),
                            am.group(1))

    # R3: placeholder member name -> real member at scaled offset from truth
    if THIS_UNKNOWN.search(line):
        line = resolve_unknown_members(line, orig, ctx, stats)

    # R2: missing & before this->M when original writes via object BASE
    dm = LHS_DEREF_MEMBER.search(line)
    if dm and orig and line.find('=') > dm.end():
        base = any(p.search(orig) for p in ORIG_BASE_DEREF)
        if not base:
            am2 = re.match(r'\*\s*\(\s*_DWORD\s*\*\s*\)\s*(\w+)\s*=', orig)
            if am2 and am2.group(1) in (ctx['first_param'],
                                        ctx['orig_first_param']):
                base = True
        if base:
            line = LHS_DEREF_MEMBER.sub(r'\1&this->\2', line, count=1)
            stats['r2-amp'] += 1

    # R1: garbage RHS -> typed address-of
    gr = GARBAGE_RHS.search(line)
    if gr:
        cast = '(unsigned int)'
        if dm is None:
            lm = re.search(r'this->(\w+)\s*=', line)
            if lm:
                ent = ctx['table'].get((ctx['cls'], lm.group(1)))
                if ent and ent[0]:
                    cast = '(' + ent[0] + ')'
        line = GARBAGE_RHS.sub('=' + cast + '&' + gr.group(2), line, count=1)
        stats['r1-rhs'] += 1
    return line


stats = Counter()
files_changed = 0
SAMPLE = os.environ.get('SAMPLE')
shown = [0]
targets = (glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
           + glob.glob('src/system/gap2*.cpp') + ['src/misc/misc_ext.cpp'])
for p in targets:
    if not os.path.exists(p):
        continue
    raw = open(p, encoding='utf-8', errors='replace').read()
    lines = raw.split('\n')
    table = flat_members_for(p, lines)
    is_e4 = p.replace(chr(92), '/').startswith('src/e4/')
    pads = set()
    cls, first_param, orig_fp = None, None, None
    out = []
    changed = False
    for i, ln in enumerate(lines):
        hm = DEF_HEAD.search(ln)
        if hm:
            cls = hm.group(1)
            first_param = first_param_name(hm.group(2))
            orig_fp = None
            for j in (i - 1, i - 2):
                if 0 <= j < len(lines):
                    am2 = re.search(r'//\s*0x([0-9a-fA-F]+)', lines[j])
                    if am2:
                        orig_fp = orig_first_param(
                            load_cache_line(int(am2.group(1), 16)))
                        break
        new = fix_line(ln, {'table': table, 'cls': cls,
                            'first_param': first_param,
                            'orig_first_param': orig_fp,
                            'is_e4': is_e4, 'pads': pads}, stats)
        if new != ln:
            changed = True
            if SAMPLE and shown[0] < 12:
                shown[0] += 1
                print('--- %s' % p)
                print('OLD: ' + ln.strip()[:150])
                print('NEW: ' + new.strip()[:150])
        out.append(new)
    if changed:
        files_changed += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', errors='replace', newline='').write('\n'.join(out))
    if pads and APPLY:
        for ln in lines[:40]:
            mi = INC_RE.search(ln)
            if mi:
                hpp = 'src/e4/classes/%s_e4.hpp' % mi.group(1)
                if os.path.exists(hpp):
                    txt = open(hpp, encoding='utf-8',
                               errors='replace').read()
                    ins = ''.join('    unsigned int q%03X;  // 0x%X\n' % (o, o)
                                  for o in sorted(pads)
                                  if 'q%03X' % o not in txt)
                    if ins:
                        txt = txt.replace('// --- flat members (END) ---',
                                          ins + '// --- flat members (END) ---',
                                          1)
                        open(hpp, 'w', encoding='utf-8', errors='replace',
                             newline='').write(txt)
                break
print('files changed:', files_changed)
print(dict(stats))
if not APPLY:
    print('(dry run -- pass --apply)')
