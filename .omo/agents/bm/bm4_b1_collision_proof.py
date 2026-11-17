"""BM4 / B1 repro part 1: _name_ix2 Char(class)/char(primitive) lowercase-key
collision -- standalone proof at the binding level.

Replicates the solver's exact universe construction (build_universe: class_db
order -> binary-verified reorder -> +type vocabulary) and the _name_ix2 build
(setdefault winner-first over lowercase keys), then:

  [A] collision table: every lowercase key held by >1 universe atom, with the
      winner (what _name_ix2 returns today) and the shadowed atoms;
  [B] binding proof: _name_ix2['char'] and _name_ix2['float'] resolve to the
      CLASSES 'Char'/'Float', not the primitives -- while the exact-case index
      (what the B1 fix routes through) returns the primitive atoms;
  [C] blast-radius census: for every evidence file consumed through _name_ix2
      in the solver, count rows whose mask bits change under the namespace-
      aware exact-first lookup (old vs new binding per token).
"""
import json, os, re, glob, collections

os.chdir(r'D:\RA2YR_ReSource')

# ---------------- universe (mirror of build_universe, default flags) ----------------
db = json.load(open('anchors/class_db.json'))['classes']
_bin = json.load(open('anchors/universe_binary_classes.json')) or {}
_full_db = json.load(open('anchors/class_db.json'))['classes']
for _nm in (_bin.get('restore_from_dead') or []):
    if _nm not in db and _nm in _full_db:
        db[_nm] = _full_db[_nm]
for _nm in (_bin.get('add_new') or []):
    if _nm not in db:
        db[_nm] = _full_db.get(_nm) or {}
_ver = [c for c in (_bin.get('verified_alive') or []) if c in db]
_front = [c for c in ((_bin.get('add_new') or []) + (_bin.get('restore_from_dead') or []))
          if c in db]
_rest = [c for c in db if c not in set(_front) | set(_ver)]
db = {c: db[c] for c in (_front + _ver + _rest)}
names = list(db.keys())
n_cls_only = len(names)
tu = (json.load(open('anchors/type_universe.json')) or {}).get('types') or []
_type_extra = [t for t in tu if t not in db]
names = names + _type_extra
n = len(names)
print('universe atoms: %d (classes %d + type vocab %d)' % (n, n_cls_only, len(_type_extra)))

# ---------------- _name_ix2 (current solver behavior) + exact index ----------------
_name_ix2 = {}
for i in range(n):
    _name_ix2.setdefault(str(names[i]).lower(), i)
_exact_ix = {}
for i in range(n):
    _exact_ix.setdefault(str(names[i]), i)

def old_ix(tok):
    return _name_ix2.get(str(tok).lower())

def new_ix(tok):
    """B1 candidate rule: exact-case match wins ONLY across the class/primitive
    namespace boundary; class-vs-class lowercase variants keep old winner-first."""
    t = str(tok)
    e = _exact_ix.get(t)
    if e is None:
        return _name_ix2.get(t.lower())
    w = _name_ix2.get(t.lower())
    if w is None or e == w:
        return e if w is None else w
    if (e >= n_cls_only) != (w >= n_cls_only):
        return e          # primitive token mis-bound to a class atom (or vice versa)
    return w              # same-namespace spelling variant: keep legacy winner

# ---------------- [A] collision table ----------------
by_low = collections.defaultdict(list)
for i, nm in enumerate(names):
    by_low[str(nm).lower()].append(i)
print('\n[A] lowercase-key collisions in the universe:')
for k, holders in sorted(by_low.items()):
    if len(holders) < 2:
        continue
    for h in holders[1:]:
        print('    key=%-26r winner=%-24r (ix=%d)  SHADOWS %-24r (ix=%d)  [%s]' % (
            k, names[holders[0]], holders[0], names[h], h,
            'class-vs-primitive' if (holders[0] >= n_cls_only) != (h >= n_cls_only)
            else 'class-vs-class'))

# ---------------- [B] binding proof ----------------
print('\n[B] binding proof:')
for tok in ('char', 'float', 'Char', 'Float', 'exception', 'unsigned char'):
    o, x = old_ix(tok), new_ix(tok)
    print('    token %-14r -> old %-24r new %-24r  %s' % (
        tok, names[o] if o is not None else None, names[x] if x is not None else None,
        'CHANGED' if o != x else 'same'))

# ---------------- [C] blast-radius census over _name_ix2 consumer files ----------------
def _norm_ty(t):
    t = str(t).strip()
    if t == 'const char *' or t == 'const char*':
        return 'char*'
    return t.replace(' *', '*').replace('* ', '*')

# every evidence file the solver consumes through _name_ix2 (types/classes fields),
# default-on families only (heuristic-gated files flagged).
CONSUMERS = [
    ('member_type_installs.json', 'classes', 'MT', False),
    ('mt2_installs.json', 'classes', 'MT2', False),
    ('member_by_receiver.json', 'classes', 'MR', False),
    ('mr9_member_by_receiver.json', 'classes', 'MR9', False),
    ('receiver_by_member.json', 'classes', 'MD', False),
    ('string_param_types.json', 'types', 'SP', False),
    ('insn_member_types.json', 'types', 'IT', False),
    ('format_param_types.json', 'types', 'FS', False),
    ('slot_granularity_types.json', 'types', 'SG', False),
    ('eax_arith_types.json', 'types', 'RA', False),
    ('gs_site_args.json', 'types', 'GX', False),
    ('signedness_types.json', 'types', 'SGN', False),
    ('gs_site_args_v2.json', 'types', 'G2', False),
    ('yrpp_vparams.json', 'types', 'YVP', False),
    ('ret_usage_types_gated.json', 'types', 'RU', False),
    ('insn_granularity_types.json', 'types', 'IG', False),
    ('insn_value_types.json', 'types', 'IV', False),
    ('insn_misc_types.json', 'types', 'MS/MH', False),
    ('align_scale_types.json', 'types', 'AL/LS/SS', False),
    ('com_callback_types.json', 'types', 'CB/CC', False),
    ('crt_pattern_types.json', 'types', 'CR', False),
    ('fpu_const_types.json', 'types', 'FP', False),
    ('tcf_slot_types.json', 'types', 'TC', False),
    ('global_init_types.json', 'types', 'GI', False),
    ('global_materialize.json', 'types', 'GM', False),
    ('ninstall_types.json', 'types', 'NI', False),
    ('signedness2_types.json', 'types', 'S2', False),
    ('byte_match_types.json', 'types', 'BM', False),
    ('param_fingerprints.json', 'types', 'PF2X', False),
    ('gs_site_args_v3.json', 'types', 'G3', False),
    ('vdret_eax_edges.json', 'types', 'VR2', False),
    ('ctor_param_inits.json', 'types', 'CPI', False),
    ('sparity_types.json', 'types', 'SA', False),
    ('slot_window_edges.json', 'types', 'SW', False),
    ('eax_ptr_types.json', 'types', 'EP', False),
    ('c18v2_compound_sigs.json', 'types', 'C2X', False),
    ('mw_write_fingerprints.json', 'types', 'MW', False),
    ('imp_ret_types.json', 'types', 'IMP', False),
    ('imp2_param_types.json', 'types', 'IM2', False),
    ('param_usage_types_v2.json', 'types', 'PU(gran)', False),
    ('pu3_usage.json', 'types', 'PU3(gran)', False),
    ('pu5_forms.json', 'types', 'P5', True),
    ('vr_origin_edges.json', 'types', 'VR', False),
    ('member_by_receiver_heur.json', 'classes', 'MRH', True),
    ('const_param_types.json', 'types', 'CP', True),
]

rows_changed = 0
tok_count = collections.Counter()
ent_samples = collections.defaultdict(list)
for fname, field, fam, heur in CONSUMERS:
    p = os.path.join('anchors', fname)
    if not os.path.exists(p):
        continue
    d = json.load(open(p, encoding='utf-8'))
    recs = []
    if isinstance(d, dict):
        recs = (d.get('evidence') or [])
        if fname == 'param_usage_types_v2.json' or fname == 'pu3_usage.json':
            recs = (d.get('gran_evidence') or [])
        elif fname == 'align_scale_types.json':
            recs = ((d.get('align_evidence') or []) + (d.get('lea_scale_evidence') or [])
                    + [r for r in (d.get('struct_sig_evidence') or []) if r.get('this_alias')
                       and not r.get('match_truncated')])
            # struct_sig uses match_classes field
    changed_rows = 0
    for rec in recs:
        if not isinstance(rec, dict):
            continue
        fld = 'match_classes' if 'match_classes' in rec else field
        toks = rec.get(fld) or []
        om, nm_ = 0, 0
        delta_toks = []
        for t in toks:
            if not isinstance(t, str):
                continue
            t2 = _norm_ty(t)
            o, x = old_ix(t2), new_ix(t2)
            if o is not None:
                om |= (1 << o)
            if x is not None:
                nm_ |= (1 << x)
            if o != x:
                delta_toks.append('%s:%s->%s' % (t2, names[o] if o is not None else None,
                                                 names[x] if x is not None else None))
        if om != nm_:
            changed_rows += 1
            for dt in delta_toks:
                tok_count[dt] += 1
            if len(ent_samples[fname]) < 4:
                ent_samples[fname].append((rec.get('ent'), delta_toks[:4]))
    if changed_rows:
        tag = ' [HEURISTIC-gated]' if heur else ''
        print('    %-34s fam=%-8s rows_changed=%d%s' % (fname, fam, changed_rows, tag))
        rows_changed += changed_rows

print('\n[C] total rows whose mask changes under the fix: %d' % rows_changed)
print('[C] token-binding deltas (token: old->new) x count:')
for k, v in tok_count.most_common(20):
    print('    %-46s %d' % (k, v))
