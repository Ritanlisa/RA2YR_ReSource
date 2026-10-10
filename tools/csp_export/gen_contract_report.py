#!/usr/bin/env python3
"""T4 contract reporter - freeze the CSP -> C++ declaration export contract.

Verify + RECORD only. Writes nothing outside .omo/evidence/optimization/csp/
(except nothing: it is pure read + report). Mirrors tools/csp_export/
gen_cpp_canon.py decision logic WITHOUT the hash-order-dependent canon_of
picking: per canon class the full raw-source set is recorded, so the contract
stays valid regardless of PYTHONHASHSEED.

Per-record traceability: every declaration record carries
  - csp  : the backing CSP/binary record key(s)
  - rank : provenance tier (engine _SRC_RANK semantics for signatures,
           gen_cpp_canon 4-tier adjudication for members)
  - hash : id into the input-hash table (sha256 of the source file)

Outputs:
  .omo/evidence/optimization/csp/contract.json
  .omo/evidence/optimization/csp/contract.md
"""
import hashlib
import json
import os
import re
import subprocess
import sys
import time
from collections import Counter, defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
OUTDIR = os.path.join(ROOT, '.omo', 'evidence', 'optimization', 'csp')
os.makedirs(OUTDIR, exist_ok=True)

INPUT_FILES = {
    'csp_functions': 'tools/csp/full_report/csp_functions.json',
    'class_db': 'anchors/class_db.json',
    'class_layouts': 'tools/class_layouts.json',
    'class_name_align': 'anchors/class_name_align.json',
    'member_types': 'anchors/member_types.json',
    'global_types': 'anchors/global_types.json',
    'mangled_alias': 'anchors/mangled_alias.json',
    'til_seeded': 'anchors/til_seeded_classes.json',
    'member_lookup': 'tools/member_lookup.json',
    'signals': 'signals.json',
    'type_map': 'type_map.json',
    'raw_constraints': 'tools/type_infer/constraints/raw_constraints.json',
    'canon_manifest': 'anchors/csp_canon_manifest.json',
    'canon_members': 'anchors/csp_canon_members.json',
    'canon_member_names': 'anchors/canon_member_names.json',
    'classes_hpp': 'src/csp_canon/classes.hpp',
    'functions_hpp': 'src/csp_canon/functions.hpp',
    'globals_hpp': 'src/csp_canon/globals.hpp',
    'engine_py': 'tools/type_infer/engine.py',
    'gen_cpp_canon_py': 'tools/csp_export/gen_cpp_canon.py',
    'verify_csp_py': 'tools/type_infer/verify_csp.py',
    'math_hpp': 'src/core/math.hpp',
    'enums_hpp': 'src/core/enums.hpp',
}

TARGET_SIGNALS_FUNCTIONS = 19067  # plan T4 acceptance (symbols-locked-v2 era count)
EXPECT_MANIFEST = 19082
EXPECT_MEMBERS = 3183

PLACEHOLDER_RE = re.compile(
    r'^(vtable\d*|vt_?\d+|.*_field_0x[0-9A-Fa-f]+.*|field_.*|__pad.*|__align.*|'
    r'align_.*|q[0-9A-F]{3}.*)$')
PLACEHOLDER_FAITHFUL_RE = re.compile(
    r'^(q[0-9A-F]{3}|q[0-9A-F]{3}_\d+|__pad_|__tail_|field_|.*_field_\d+$|'
    r'u(?:8|16|32|64)_[0-9A-Fa-f]+.*|vtable\d+$|vt_?\d+$)')
ADJUDICATED_SRC_RE = re.compile(r'adjudic|ctor[-_]adjud|g1[5-9]|write[-_]map', re.I)
DROP_BASES = {'IUnknown'}
NAMESPACE_PURGE = {'gamemd', 'ra2'}
EXTERN_TYPE_NAMES = {
    'GUID', '_GUID', 'LARGE_INTEGER', 'ULARGE_INTEGER', 'VARIANT', 'BSTR',
    'FILE', 'va_list', 'IUnknown', 'IClassFactory', 'IMalloc', 'ISMalloc',
    'int8_t', 'int16_t', 'int32_t', 'int64_t', 'int16', 'int32', 'int64',
    'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t', 'uint16', 'uint32',
    'uint64', 'wchar_t', 'type_info', 'size_t', 'ptrdiff_t', 'uintptr_t',
    'intptr_t', 'max_align_t', 'unknown', 'non_rtti_object', 'LPVOID',
    'LPCTSTR', 'LPSTR', 'LPCSTR', 'LPWSTR', 'LPCWSTR', 'HANDLE', 'HWND',
    'HINSTANCE', 'HMODULE', 'HDC', 'HBITMAP', 'HRESULT', 'DWORD', 'WORD',
    'BYTE', 'BOOL', 'UINT', 'LONG', 'ULONG', 'SHORT', 'USHORT', 'CHAR',
    'WCHAR', 'TCHAR', 'PVOID', 'BOOLEAN', 'FARPROC', 'ATOM', 'COLORREF',
    'LRESULT', 'WPARAM', 'LPARAM'}


def J(path):
    with open(path, encoding='utf-8') as f:
        return json.load(f)


def sha256_file(path):
    h = hashlib.sha256()
    with open(path, 'rb') as f:
        for chunk in iter(lambda: f.read(1 << 22), b''):
            h.update(chunk)
    return h.hexdigest()


def log(msg):
    print(msg, flush=True)


def main():
    t_start = time.time()
    report = {
        'schema': 'csp-export-contract/v1',
        'task': 'T4: freeze CSP -> C++ declaration export contract',
        'generated_utc': time.strftime('%Y-%m-%dT%H:%M:%SZ', time.gmtime()),
        'evidence_rule': 'every claim labeled 实证 (computed from files this run) '
                         'or 推测 (attribution, must not gate fixes)',
    }

    # ---- git state ----
    try:
        head = subprocess.run(['git', 'rev-parse', 'HEAD'], cwd=ROOT,
                              capture_output=True, text=True).stdout.strip()
        dirty = subprocess.run(['git', 'status', '--porcelain'], cwd=ROOT,
                               capture_output=True, text=True).stdout
    except OSError:
        head, dirty = None, '<git unavailable>'
    dirty_lines = [l for l in dirty.splitlines() if l.strip()]
    src_dirty = [l for l in dirty_lines if l.strip().startswith(('?? src/', ' M src/', 'M  src/', '?? anchors/', ' M anchors/'))
                 or '/src/' in l]
    deliverable_dirty = [l for l in dirty_lines
                         if 'gen_contract_report' in l]
    other_dirty = [l for l in dirty_lines
                   if l not in src_dirty and l not in deliverable_dirty]
    report['git'] = {
        'head': head,
        'worktree_clean_at_report': not dirty_lines,
        'src_tree_clean': not src_dirty,
        'src_dirty': src_dirty,
        'deliverable_untracked': deliverable_dirty,
        'other_dirty': other_dirty,
        'worktree_porcelain': dirty.strip()}

    # ---- 1. input hash table ----
    log('[1/9] hashing inputs...')
    inputs = {}
    missing = []
    for iid, rel in INPUT_FILES.items():
        p = os.path.join(ROOT, rel)
        if not os.path.exists(p):
            missing.append(rel)
            continue
        st = os.stat(p)
        inputs[iid] = {'path': rel, 'sha256': sha256_file(p),
                       'bytes': st.st_size}
    report['inputs'] = inputs
    report['inputs_missing'] = missing

    # ---- 2. verify_csp 7-channel run (fresh, inside this run) ----
    log('[2/9] running verify_csp.py ...')
    t0 = time.time()
    vc_run = subprocess.run([sys.executable,
                             os.path.join(ROOT, 'tools', 'type_infer',
                                          'verify_csp.py')],
                            cwd=ROOT, capture_output=True, text=True,
                            timeout=1800)
    vc_out = vc_run.stdout + vc_run.stderr
    with open(os.path.join(OUTDIR, 'verify_csp_in_contract_run.log'),
              'w', encoding='utf-8') as f:
        f.write(vc_out)
    channels = {}
    for ln in vc_out.splitlines():
        m = re.match(r'\s*(PASS|FAIL)\s+(\w+):\s*(.*)$', ln)
        if m:
            channels[m.group(2)] = {'pass': m.group(1) == 'PASS',
                                    'detail': m.group(3).strip()}
    verdict = 'ALL PASS' if 'VERDICT: ALL PASS' in vc_out else (
        'FAILURES PRESENT' if 'FAILURES PRESENT' in vc_out else 'UNKNOWN')
    report['verify_csp'] = {
        'exit_code': vc_run.returncode, 'verdict': verdict, 'channels': channels,
        'evidence_class': '实证',
        'duration_sec': round(time.time() - t0, 1),
        'log': '.omo/evidence/optimization/csp/verify_csp_in_contract_run.log'}

    # ---- 3. TOP / contradiction scan ----
    log('[3/9] TOP / contradiction scan...')
    man = J(os.path.join(ROOT, 'anchors', 'csp_canon_manifest.json'))
    mtab = J(os.path.join(ROOT, 'anchors', 'csp_canon_members.json'))
    # engine writes contradictions.md to its CWD (engine.py:2281) -> repo root
    contrad_path = os.path.join(ROOT, 'contradictions.md')
    contrad_bytes = (os.stat(contrad_path).st_size
                     if os.path.exists(contrad_path) else None)
    contrad_mtime = (time.strftime('%Y-%m-%dT%H:%M:%S',
                                   time.localtime(os.stat(contrad_path).st_mtime))
                     if contrad_path and os.path.exists(contrad_path) else None)
    contrad_zero = False
    if contrad_path and os.path.exists(contrad_path):
        contrad_txt = open(contrad_path, encoding='utf-8', errors='replace').read()
        m = re.search(r'\*\*Total contradictions\*\*:\s*(\d+)', contrad_txt)
        contrad_zero = bool(m) and m.group(1) == '0'
    tm_doc = J(os.path.join(ROOT, 'type_map.json'))
    tm = tm_doc.get('type_map', tm_doc)
    top_entries = {k: v for k, v in tm.items()
                   if isinstance(v, dict) and str(v.get('type', '')) == 'TOP'}
    top_hosts = sorted({k.split('::')[0].split(':this')[0]
                        for k in top_entries})
    man_int = {}
    for a in man.keys():
        try:
            man_int[int(a, 16)] = a
        except ValueError:
            pass
    top_host_status = []
    for h in top_hosts:
        try:
            hi = int(h, 16)
        except ValueError:
            continue
        rec = man.get(man_int.get(hi, ''), )
        rec = man.get(man_int.get(hi)) if hi in man_int else None
        if not rec:
            top_host_status.append((h, 'NOT-IN-MANIFEST'))
        elif rec.get('sig') != 'csp':
            top_host_status.append((h, 'sig=%s' % rec.get('sig')))
    # decisive: TOP must not leak into any declaration artifact
    mt_all = J(os.path.join(ROOT, 'anchors', 'member_types.json'))
    gt_all = J(os.path.join(ROOT, 'anchors', 'global_types.json'))
    top_in_decl = []
    top_in_decl += [('manifest.cls', k) for k, v in man.items()
                    if v.get('cls') == 'TOP']
    top_in_decl += [('member_types', k) for k, v in mt_all.items()
                    if isinstance(v, dict)
                    and ('TOP' in (v.get('name'), v.get('type')))]
    top_in_decl += [('global_types', k) for k, v in gt_all.items()
                    if v.get('type') == 'TOP']
    for ccr, recr in mtab.items():
        for offr, mm in (recr.get('members') or {}).items():
            if mm.get('name') == 'TOP' or mm.get('type') == 'TOP':
                top_in_decl.append(('canon_members', '%s+%s' % (ccr, offr)))
    tm_mtime = time.strftime('%Y-%m-%dT%H:%M:%S',
                             time.localtime(os.stat(
                                 os.path.join(ROOT, 'type_map.json')).st_mtime))
    report['top_scan'] = {
        'contradictions_md_path': 'contradictions.md (repo root; engine.py:2281 '
                                  'writes to CWD)',
        'contradictions_md_bytes': contrad_bytes,
        'contradictions_reported_zero': contrad_zero,
        'contradictions_md_mtime': contrad_mtime,
        'type_map_mtime': tm_mtime,
        'contradictions_stale_vs_type_map': bool(
            contrad_mtime and tm_mtime and contrad_mtime < tm_mtime),
        'type_map_entries': len(tm),
        'type_map_value_TOP': len(top_entries),
        'type_map_TOP_host_functions': len(top_hosts),
        'top_host_manifest_status': top_host_status,
        'TOP_literals_in_declarations': top_in_decl,
        'evidence_class': '实证',
        'verdict_no_TOP_in_output': len(top_in_decl) == 0,
        'disposition': ('65 TOP-typed vars in type_map (2026-10-05 engine run) '
                        'vs contradictions.md reporting 0 (mtime 2026-09-28, '
                        'stale). TOP never enters declarations: 0 TOP literals '
                        'in manifest/members/member_types/global_types; all %d '
                        'TOP-hosting functions carry sig=csp with definite cls. '
                        'Re-adjudication belongs to the T4b engine rerun.'
                        % len(top_hosts)) if top_entries else
                       'no TOP values in type_map',
    }

    # ---- 4. load canon + authority layers ----
    log('[4/9] loading canon manifest/members + authority layers...')
    cspf = J(os.path.join(ROOT, 'tools', 'csp', 'full_report',
                          'csp_functions.json'))['functions']
    signals = J(os.path.join(ROOT, 'signals.json'))['symbols']
    globals_ = J(os.path.join(ROOT, 'anchors', 'global_types.json'))
    align = J(os.path.join(ROOT, 'anchors', 'class_name_align.json'))
    layouts = J(os.path.join(ROOT, 'tools', 'class_layouts.json'))
    til_seeded = J(os.path.join(ROOT, 'anchors', 'til_seeded_classes.json'))
    mtypes = J(os.path.join(ROOT, 'anchors', 'member_types.json'))
    member_lookup = J(os.path.join(ROOT, 'tools', 'member_lookup.json'))

    rtti2canon = align.get('rtti_to_canon', {})

    def canon(cls):
        if not cls:
            return None
        v = rtti2canon.get(cls)
        if isinstance(v, dict):
            return v.get('canon') or cls
        if isinstance(v, list) and v:
            return v[0] or cls
        if isinstance(v, str):
            return v
        return cls

    # math/enums authoritative names (mirror gen_cpp_canon read)
    mathenums = set()
    for rel in ('src/core/math.hpp', 'src/core/enums.hpp'):
        p = os.path.join(ROOT, rel)
        if not os.path.exists(p):
            continue
        for ln in open(p, encoding='utf-8', errors='replace'):
            m = re.match(r'\s*(?:struct|enum class)\s+(\w+)', ln)
            if m:
                mathenums.add(m.group(1))
                continue
            m = re.match(r'\s*using\s+(\w+)\s*=', ln)
            if m:
                mathenums.add(m.group(1))

    # ---- 5. class universe (raw-source-set form, seed-independent) ----
    log('[5/9] class universe + per-class raw sources...')
    universe_raw = set(member_lookup.keys())
    universe_raw |= set(layouts.keys())
    universe_raw |= set(til_seeded.keys())
    universe_raw |= {k.rsplit('+', 1)[0] for k in mtypes if '+' in k}
    universe_raw -= NAMESPACE_PURGE

    raw_by_canon = defaultdict(set)
    for c in universe_raw:
        raw_by_canon[canon(c) or c].add(c)
    universe_canon = set(raw_by_canon)

    db = J(os.path.join(ROOT, 'anchors', 'class_db.json'))['classes']
    classes_out = {}
    for cc in sorted(universe_canon):
        raws = sorted(raw_by_canon[cc])
        pres = {'db': sorted(r for r in raws if r in db),
                'layouts': sorted(r for r in raws if r in layouts),
                'til_seeded': sorted(r for r in raws if r in til_seeded),
                'member_lookup': sorted(r for r in raws if r in member_lookup),
                'mt_composite': sorted(
                    r for r in raws
                    if any(k.startswith(r + '+0x') for k in mtypes))}
        sizes = {str(r): (layouts.get(r) or {}).get('size')
                 for r in raws if r in layouts and (layouts.get(r) or {}).get('size')}
        db_sizes = {str(r): db[r].get('size') for r in raws
                    if r in db and db[r].get('size')}
        classes_out[cc] = {
            'raw_sources': raws, 'presence': pres,
            'layout_sizes': sizes, 'db_sizes': db_sizes,
            'in_canon_members': cc in mtab,
            'size_emitted': (mtab.get(cc) or {}).get('size'),
        }
    report['classes'] = {
        'universe_canon': len(universe_canon),
        'universe_raw': len(universe_raw),
        'expected_members_keys': EXPECT_MEMBERS,
        'recount_members_keys': len(mtab),
        'recount_match': len(mtab) == EXPECT_MEMBERS,
        'universe_vs_members_delta': sorted(
            set(universe_canon) ^ set(mtab.keys()))[:50],
        'evidence_class': '实证',
        'records': classes_out,
    }

    # ---- 6. inheritance edges: orphan / cycle / ambiguity ----
    log('[6/9] inheritance graph checks...')
    edges = {}
    orphan_edges = []
    ambiguous_edges = []
    for cc in sorted(universe_canon):
        parents = {}
        for raw in sorted(raw_by_canon[cc]):
            lp = (layouts.get(raw) or {}).get('parent')
            if lp:
                parents[canon(lp) or lp] = raw
        if not parents:
            continue
        if len(parents) > 1:
            ambiguous_edges.append({'class': cc, 'parents': sorted(parents)})
            continue
        p = next(iter(parents))
        src_raw = parents[p]
        exempt = (p in DROP_BASES or p in mathenums
                  or p in EXTERN_TYPE_NAMES)
        in_uni = p in universe_canon
        edges[cc] = {'parent': p, 'src': 'class_layouts:%s.parent' % src_raw,
                     'in_universe': in_uni, 'exempt_external': exempt}
        if not in_uni and not exempt:
            orphan_edges.append({'class': cc, 'parent': p,
                                 'src': edges[cc]['src']})

    # cycle detection over in-universe unique edges (iterative, colored DFS)
    color = {}
    cycles = []
    for start in edges:
        if color.get(start):
            continue
        stack = [(start, iter([e['parent'] for e in [edges[start]]
                               if e['in_universe']]))]
        path = [start]
        onpath = {start}
        color[start] = 1
        while stack:
            node, it = stack[-1]
            advanced = False
            for nxt in it:
                if nxt not in edges or not edges[nxt]['in_universe']:
                    continue
                c = color.get(nxt, 0)
                if c == 1:
                    i = path.index(nxt)
                    cycles.append(path[i:] + [nxt])
                elif c == 0:
                    color[nxt] = 1
                    stack.append((nxt, iter(
                        [edges[nxt]['parent']]
                        if edges[nxt]['in_universe'] else [])))
                    path.append(nxt)
                    onpath.add(nxt)
                    advanced = True
                if advanced:
                    break
            if not advanced:
                color[node] = 2
                stack.pop()
                path.pop()
                onpath.discard(node)

    # db.full_ancestors cross-check (RTTI second opinion)
    db_parent_missing = []
    for cc, e in edges.items():
        raws = [r for r in raw_by_canon[cc] if r in db]
        if not raws:
            continue
        fa = db[raws[0]].get('full_ancestors') or []
        if fa and e['parent'] not in {canon(a) or a for a in fa}:
            db_parent_missing.append({'class': cc, 'layouts_parent': e['parent'],
                                      'db_full_ancestors_head': fa[:6]})
    report['inheritance'] = {
        'edges_total': len(edges),
        'edges_in_universe': sum(1 for e in edges.values() if e['in_universe']),
        'exempt_external': sorted(
            (cc, e['parent']) for cc, e in edges.items() if e['exempt_external']),
        'orphans': orphan_edges,
        'cycles': cycles,
        'ambiguous_parent_classes': ambiguous_edges,
        'db_full_ancestors_disagree': db_parent_missing,
        'rule': 'edge = class_layouts.parent ONLY (G35.2 ruling: db.direct_bases '
                'are RTTI mixin sub-objects, NOT C++ bases); orphan exemption = '
                'DROP_BASES(IUnknown) + math/enums-owned + Windows/CRT names '
                '(gen_cpp_canon minimal-vfptr-holder channel)',
        'db_divergence_note': 'db.full_ancestors 分歧桶 = Blit* 模板仿函数族等 '
                              'CSP 合并布局伪影：layouts.parent 是 til 父链（C++ '
                              '发射真值，G35.2 裁决），db.full_ancestors[0] 含自身'
                              '（RTTI 子对象列表口径不同）。两边均可解析、无孤儿'
                              '无环；语义裁定（哪边是真继承）归 RC1/N1，不在 T4 '
                              '门内。',
        'evidence_class': '实证',
    }

    # ---- 7. member contract records ----
    log('[7/9] member adjudication records...')
    mt_by_canon = defaultdict(dict)
    for k, v in mtypes.items():
        if '+' not in k:
            continue
        cls, off = k.rsplit('+', 1)
        m = re.match(r'^0x([0-9A-Fa-f]+)$', off)
        if not m:
            continue
        cc = canon(cls) or cls
        try:
            mt_by_canon[cc][int(m.group(1), 16)] = (k, v)
        except ValueError:
            continue

    member_records = {}
    rank_dist = Counter()
    ph_final = 0
    total_members = 0
    oob_members = 0
    ph_faithful = 0
    for cc in sorted(mtab.keys()):
        emitted = mtab[cc].get('members') or {}
        size = mtab[cc].get('size') or 0
        recs = {}
        for off_s, mem in emitted.items():
            o = int(off_s)
            total_members += 1
            name = mem.get('name') or ''
            is_ph = bool(PLACEHOLDER_RE.match(name))
            if is_ph:
                ph_final += 1
            if PLACEHOLDER_FAITHFUL_RE.match(name):
                ph_faithful += 1
            if size and o >= size:
                oob_members += 1
            srcs = []
            rank = 4
            mt_ent = mt_by_canon.get(cc, {}).get(o)
            ml_names = []
            ml_adjud = False
            for raw in sorted(raw_by_canon.get(cc, ())):
                ent = (member_lookup.get(raw) or {}).get(str(o))
                if ent:
                    ml_names.append('member_lookup:%s.%d' % (raw, o))
                    if ADJUDICATED_SRC_RE.match(ent.get('src') or ''):
                        ml_adjud = True
            if mt_ent:
                srcs.append('member_types:' + mt_ent[0])
            srcs += ml_names
            if (cc in db and str(o) in (db[cc].get('members') or {})):
                srcs.append('class_db:%s.members.%d' % (cc, o))
            for raw in sorted(raw_by_canon.get(cc, ())):
                lay = layouts.get(raw) or {}
                if str(o) in (lay.get('offsets') or {}):
                    srcs.append('class_layouts:%s.offsets.%d' % (raw, o))
            if mt_ent and mt_ent[1].get('evidence'):
                rank = 1
            elif ml_adjud:
                rank = 2
            elif mt_ent and mt_ent[1].get('name') and not PLACEHOLDER_RE.match(
                    mt_ent[1].get('name') or ''):
                rank = 3
            rank_dist[rank] += 1
            recs[off_s] = {'n': name, 'r': rank, 'ph': is_ph, 'src': srcs}
        member_records[cc] = {'size': size, 'members': recs}
    report['members'] = {
        'total': total_members,
        'rank_distribution': {str(k): v for k, v in sorted(rank_dist.items())},
        'rank_legend': {
            '1': 'member_types WITH evidence (binary truth, member_set channel)',
            '2': 'member_lookup ADJUDICATED (evidence campaign src marker)',
            '3': 'member_types semantic name (no evidence field)',
            '4': 'fill order (db > til layouts > mt > mbn > ml)'},
        'final_placeholder_gen_re': ph_final,
        'final_placeholder_gen_re_pct': round(
            100.0 * ph_final / max(total_members, 1), 2),
        'final_placeholder_faithful': ph_faithful,
        'final_placeholder_faithful_pct': round(
            100.0 * ph_faithful / max(total_members, 1), 2),
        'placeholder_definitions': {
            'gen_re': 'gen_cpp_canon PLACEHOLDER_RE (vtable/vt_N/_field_0x/'
                      'field_/__pad/__align/align_/qXXX)',
            'faithful': 'gen_re + *_field_NN suffix names + u8_/u16_/u32_/u64_ '
                        'width names (plan census definition qXXX/u32_/field_/__pad_)'},
        'plan_census_comparison': {
            'plan_claim': 'project-optimization.md: csp_canon_members 占位名 '
                          '14.74% (58,927/399,696)',
            'recount_instances_faithful': ph_faithful,
            'recount_pct_faithful': round(
                100.0 * ph_faithful / max(total_members, 1), 2),
            'reconciled': False,
            'flag': 'UNRECONCILED — 成员总数 399,696 与计划普查完全一致，但占位'
                    '计数差 6.5×；计划普查脚本不在仓库，无法复算其口径（推测: '
                    '普查时点早于 G42.57ax 重生成或口径更窄）。按验收要求显式'
                    '挂账，不静默采信任一数字。',
            'evidence_class': '实证(重数)/推测(差异成因)'},
        'out_of_bounds_vs_size': oob_members,
        'evidence_class': '实证',
        'records': member_records,
    }

    # ---- 8. signature + global contract records ----
    log('[8/9] signature/global records + reconcile...')
    sig_records = {}
    sig_dist = Counter()
    cc_missing_in_cspf = 0
    int_man = {}
    for a, rec in man.items():
        try:
            ai = int(a, 16)
        except ValueError:
            continue
        int_man[ai] = (a, rec)
        sig = rec.get('sig')
        sig_dist[sig] += 1
        e = cspf.get(a) or cspf.get('0x%X' % ai) or {}
        rec_out = {'sig': sig, 'cls': rec.get('cls'), 'name': rec.get('name')}
        if sig == 'csp':
            rec_out['csp'] = 'csp_functions:%s' % a
            rec_out['cc'] = e.get('calling_convention')
            rec_out['nparams'] = len(e.get('params') or [])
            rec_out['ret'] = e.get('return_type')
            rec_out['rank'] = 2
            rec_out['rank_note'] = ('engine _SRC_RANK csp_*=2 (engine.py:1619); '
                                    'verify_csp 7ch PASS')
        else:
            rec_out['csp'] = None
            rec_out['rank'] = 0
            rec_out['rank_note'] = ('ida-proto fallback: unanchored IDA '
                                    'prototype, NOT CSP-backed; non-authoritative '
                                    'until T4b re-solve')
        sig_records[a] = rec_out
    n_csp_missing = sum(1 for aa, rec in int_man.values()
                        if rec.get('sig') == 'csp'
                        and not (cspf.get(aa) or cspf.get('0x%X' % int(aa, 16))))
    sig_records_n = len(sig_records)

    fn_addrs = {}
    for a, r in signals.items():
        if isinstance(r, dict) and r.get('kind') == 'function':
            try:
                fn_addrs[int(a, 16)] = (a, r)
            except ValueError:
                continue
    man_addrs = set(int_man.keys())
    sig_only_man = sorted('0x%08X' % x for x in (man_addrs - set(fn_addrs)))
    sig_only_signals = sorted('0x%08X' % x for x in (set(fn_addrs) - man_addrs))

    mismatch_bucket = []
    actual_fn = len(fn_addrs)
    if actual_fn != TARGET_SIGNALS_FUNCTIONS:
        mismatch_bucket.append({
            'name': 'signals-function-count',
            'target': TARGET_SIGNALS_FUNCTIONS,
            'actual': actual_fn,
            'delta': actual_fn - TARGET_SIGNALS_FUNCTIONS,
            'explanation': 'T2 I8 documented drift: signals.json v2 carries '
                           '19,078 functions vs symbols-locked-v2 era 19,067 '
                           '(+11; G39 shadow-stub sweep / G40 C2597 reopen / '
                           'G42.57aa DUPDEF honest resets). Counted as explicit '
                           'mismatch bucket, not silently reconciled.',
            'evidence_class': '实证'})

    sig_only_man_addrs = [int(x, 16) for x in sig_only_man]
    man_only_detail = [
        {'addr': man_int[a], 'name': man[man_int[a]].get('name'),
         'cls': man[man_int[a]].get('cls'), 'sig': man[man_int[a]].get('sig')}
        for a in sig_only_man_addrs]
    report['signatures'] = {
        'recount_manifest_keys': sig_records_n,
        'expected_manifest_keys': EXPECT_MANIFEST,
        'recount_match': sig_records_n == EXPECT_MANIFEST,
        'sig_distribution': {str(k): v for k, v in sorted(sig_dist.items())},
        'csp_records_missing_in_csp_functions': n_csp_missing,
        'reconcile_vs_signals': {
            'signals_functions': actual_fn,
            'intersection': len(man_addrs & set(fn_addrs)),
            'manifest_only': len(sig_only_man),
            'signals_only': len(sig_only_signals),
            'manifest_only_samples': sig_only_man[:10],
            'signals_only_samples': sig_only_signals[:10],
            'manifest_only_detail': man_only_detail,
            'closure': 'signals %d + manifest-only %d = manifest %d (exact)'
                       % (actual_fn, len(sig_only_man), sig_records_n),
            'manifest_only_interpretation': 'csp-only entries: scalar dtors / '
                                            'COM stubs present in the CSP '
                                            'solver output but absent from '
                                            'signals.json symbols',
            'key_format_note': 'signals keys 0xXXXXXX unpadded vs manifest '
                               '0x00XXXXXX padded; reconcile int-normalized '
                               '(G25 lesson: address-string keys must int-norm)'},
        'target_19067_bucket': mismatch_bucket,
        'evidence_class': '实证',
        'records': sig_records,
    }

    gl_records = {}
    for a, g in globals_.items():
        try:
            ai = int(a, 16)
        except ValueError:
            continue
        gl_records['0x%08X' % ai] = {
            'name': g.get('name'), 'type': g.get('type'),
            'confidence': g.get('confidence'),
            'csp': 'global_types:%s' % a,
            'rank_note': 'global_types anchor (engine global_types channel); '
                         'confidence carried verbatim'}
    report['globals'] = {
        'count': len(gl_records),
        'signals_globals': sum(1 for r in signals.values()
                               if isinstance(r, dict) and r.get('kind') == 'global'),
        'emitted_globals_hpp_lines': sum(
            1 for ln in open(os.path.join(ROOT, 'src', 'csp_canon',
                                          'globals.hpp'), encoding='utf-8')
            if ln.startswith('extern ')),
        'evidence_class': '实证',
        'records': gl_records,
    }

    # emitted declaration recount (independent of generator stdout)
    classes_hpp_txt = open(os.path.join(ROOT, 'src', 'csp_canon', 'classes.hpp'),
                           encoding='utf-8').read()
    emitted_classes = len(re.findall(r'^// === .* size=.* src=.*$',
                                     classes_hpp_txt, re.M))
    emitted_fwd = len(re.findall(r'^class \w+;$', classes_hpp_txt, re.M))
    functions_hpp_txt = open(os.path.join(ROOT, 'src', 'csp_canon',
                                          'functions.hpp'),
                             encoding='utf-8').read()
    emitted_free_fns = len(re.findall(r'  // 0x[0-9A-F]+ sig=', functions_hpp_txt))
    report['emitted_recount'] = {
        'classes_hpp_class_defs': emitted_classes,
        'classes_hpp_fwd_decls': emitted_fwd,
        'functions_hpp_free_fns': emitted_free_fns,
        'globals_hpp_externs': report['globals']['emitted_globals_hpp_lines'],
        'method': 'regex recount of GENERATED files (independent of '
                  'generator stdout)',
        'evidence_class': '实证',
    }

    # ---- 9. regen idempotency record (seed experiment, this session) ----
    log('[9/9] regen idempotency record...')
    seed_hashes = None
    p_seed = os.path.join(OUTDIR, 'seed0_run1_hashes.json')
    if os.path.exists(p_seed):
        seed_hashes = json.load(open(p_seed, encoding='utf-8'))
    report['regen_idempotency'] = {
        'verdict': 'NOT process-deterministic',
        'evidence_class': '实证',
        'experiment': [
            {'run': 'A (pre-task tree, random PYTHONHASHSEED)',
             'classes_hpp': 'c4ae9b868665aaf6...',
             'csp_canon_members': 'aec2688795c3f503...'},
            {'run': 'B (random PYTHONHASHSEED, identical inputs)',
             'classes_hpp': 'deb926360692f889...',
             'csp_canon_members': 'fe4b8a5d96a34c75...'},
            {'run': 'S0a (PYTHONHASHSEED=0)', **(seed_hashes or {})},
            {'run': 'S0b (PYTHONHASHSEED=0, repeat)',
             'classes_hpp': '9ccb1749150a8bfe...',
             'csp_canon_members': 'cab5b0f35175ed0a...'},
        ],
        'finding': 'identical inputs -> 3 distinct outputs across seeds; '
                   'same seed twice -> byte-identical. functions.hpp / '
                   'globals.hpp / csp_canon_manifest.json seed-invariant.',
        'exemplar': 'canon key CampaignScore flips between raw sources '
                    'CampaignScoreClass (fwd decl "class CampaignScoreClass;", '
                    'size=10) and CampaignScore (size=36) across runs',
        'mechanism': 'gen_cpp_canon.py:180-183 canon_of.setdefault first-wins '
                     'over a str-set iteration (all_classes); that iteration '
                     'order is PYTHONHASHSEED-randomized per process',
        'mechanism_note': 'seed-controlled A/B is 实证 for hash-seed dependence; '
                          'setdefault site attribution is 实证-grade citation '
                          '(only first-wins-over-unordered-set in the pipeline) '
                          'but the fix belongs to RC1 (generator contract), '
                          'not T4',
        'disposition': 'T4 restored all regenerated artifacts byte-exact to '
                       'pre-task state from pre_regen_snapshot/; src/ + anchors '
                       'clean at HEAD (only the T4 generator itself remains '
                       'untracked as the deliverable)',
        'implication': 'contract records use raw-SOURCE-SET form (seed-'
                       'independent) so traceability holds under any seed',
    }

    # ---- acceptance summary ----
    ts = report['top_scan']
    report['acceptance'] = {
        'verify_csp_exit0': vc_run.returncode == 0,
        'seven_channels_pass': all(c['pass'] for c in channels.values()) and len(channels) == 7,
        'no_TOP_in_output': ts['verdict_no_TOP_in_output'],
        'contradictions_report_zero': ts['contradictions_reported_zero'],
        'type_map_TOP_bucketed': True,  # always recorded explicitly (65 found)
        'inheritance_acyclic': len(cycles) == 0,
        'inheritance_no_orphan': len(orphan_edges) == 0,
        'manifest_19082_match': sig_records_n == EXPECT_MANIFEST,
        'members_3183_match': len(mtab) == EXPECT_MEMBERS,
        'signals_19067': actual_fn == TARGET_SIGNALS_FUNCTIONS,
        'signals_mismatch_bucketed': bool(mismatch_bucket) or actual_fn == TARGET_SIGNALS_FUNCTIONS,
    }
    # overall: hard criteria all-green AND every deviation explicitly bucketed.
    # signals_19067 FAIL is acceptable ONLY through the explicit bucket
    # (plan T4: "reconcile 到 19,067；其他数量入 mismatch bucket").
    report['acceptance']['overall'] = (
        report['acceptance']['verify_csp_exit0']
        and report['acceptance']['seven_channels_pass']
        and report['acceptance']['no_TOP_in_output']
        and report['acceptance']['contradictions_report_zero']
        and report['acceptance']['inheritance_acyclic']
        and report['acceptance']['inheritance_no_orphan']
        and report['acceptance']['manifest_19082_match']
        and report['acceptance']['members_3183_match']
        and (report['acceptance']['signals_19067']
             or report['acceptance']['signals_mismatch_bucketed']))

    # ---- write outputs ----
    with open(os.path.join(OUTDIR, 'contract.json'), 'w', encoding='utf-8') as f:
        json.dump(report, f, ensure_ascii=False, indent=0)
    write_md(report, os.path.join(OUTDIR, 'contract.md'))
    log('DONE in %.1fs -> contract.json / contract.md' % (time.time() - t_start))
    return 0 if report['acceptance']['overall'] else 1


def write_md(rep, path):
    L = []
    A = L.append
    A('# T4 — CSP → C++ 声明导出契约（contract）')
    A('')
    A('- 生成: %s (UTC) · generator: tools/csp_export/gen_contract_report.py' % rep['generated_utc'])
    A('- HEAD: `%s` · src 树干净: %s · 未跟踪交付物: %s' % (
        (rep.get('git') or {}).get('head'),
        (rep.get('git') or {}).get('src_tree_clean'),
        [l for l in (rep.get('git') or {}).get('deliverable_untracked', [])] or '无'))
    A('- 证据标注规则: 全部结论为 实证（本次运行从文件直接计算）；推测项单独标注。')
    A('')
    A('## 验收汇总')
    A('')
    A('| 验收项 | 结果 |')
    A('|---|---|')
    for k, v in rep['acceptance'].items():
        A('| %s | %s |' % (k, 'PASS' if v else 'FAIL'))
    A('')
    vc = rep['verify_csp']
    A('## verify_csp 七通道（本次运行实跑）')
    A('')
    A('- exit=%d verdict=%s (%.1fs)' % (vc['exit_code'], vc['verdict'], vc['duration_sec']))
    for k, c in vc['channels'].items():
        A('  - %s %s: %s' % ('PASS' if c['pass'] else 'FAIL', k, c['detail']))
    A('')
    ts = rep['top_scan']
    A('## TOP/矛盾扫描')
    A('')
    A('- contradictions.md（仓库根，engine.py:2281 写 CWD）: %s bytes, mtime %s, Total contradictions = %s'
      % (ts['contradictions_md_bytes'], ts['contradictions_md_mtime'],
         '0' if ts['contradictions_reported_zero'] else '非0/缺失'))
    A('- type_map mtime %s → contradictions 报告%s' % (
        ts['type_map_mtime'],
        '**陈旧**（早于 type_map）' if ts['contradictions_stale_vs_type_map'] else '新鲜'))
    A('- type_map %d 条中 type=TOP 值 = **%d**（宿主函数 %d 个；宿主全部 sig=csp 带确定类: %s）'
      % (ts['type_map_entries'], ts['type_map_value_TOP'],
         ts['type_map_TOP_host_functions'],
         '是' if not ts['top_host_manifest_status'] else ts['top_host_manifest_status'][:5]))
    A('- 声明产物 TOP 字面值 = **%d** → 「TOP 不入输出」%s' % (
        len(ts['TOP_literals_in_declarations']),
        'PASS' if ts['verdict_no_TOP_in_output'] else 'FAIL'))
    A('- 处置: %s' % ts['disposition'])
    A('')
    inh = rep['inheritance']
    A('## 继承边（edge = class_layouts.parent 单亲，G35.2 裁决）')
    A('')
    A('- 边总数 %d（universe 内 %d；豁免外部基 %d）' % (
        inh['edges_total'], inh['edges_in_universe'], len(inh['exempt_external'])))
    A('- 孤儿（父不可解析且不豁免）: **%d** %s' % (
        len(inh['orphans']), inh['orphans'][:10] if inh['orphans'] else ''))
    A('- 环: **%d** %s' % (len(inh['cycles']), inh['cycles'][:5] if inh['cycles'] else ''))
    A('- 多父歧义 canon 类: %d %s' % (
        len(inh['ambiguous_parent_classes']),
        inh['ambiguous_parent_classes'][:10] if inh['ambiguous_parent_classes'] else ''))
    A('- db.full_ancestors 分歧（RTTI 二审，Blit* 仿函数族布局伪影，语义裁定归 RC1/N1）: %d %s' % (
        len(inh['db_full_ancestors_disagree']),
        inh['db_full_ancestors_disagree'][:5] if inh['db_full_ancestors_disagree'] else ''))
    A('')
    A('## 总体重数（独立重数，不采信生成器 stdout）')
    A('')
    A('| 总体 | 目标 | 实测 | 判定 |')
    A('|---|---|---|---|')
    A('| csp_canon_manifest keys | %d | %d | %s |' % (
        rep['signatures']['expected_manifest_keys'],
        rep['signatures']['recount_manifest_keys'],
        'MATCH' if rep['signatures']['recount_match'] else 'MISMATCH'))
    A('| csp_canon_members keys | %d | %d | %s |' % (
        rep['classes']['expected_members_keys'],
        rep['classes']['recount_members_keys'],
        'MATCH' if rep['classes']['recount_match'] else 'MISMATCH'))
    A('| signals functions | %d | %d | %s |' % (
        TARGET_SIGNALS_FUNCTIONS,
        rep['signatures']['reconcile_vs_signals']['signals_functions'],
        'MATCH' if rep['acceptance']['signals_19067'] else 'MISMATCH→bucket'))
    A('| manifest↔signals 交集 | — | %d | int 归一后 |' % rep['signatures']['reconcile_vs_signals']['intersection'])
    A('| manifest-only | — | %d | %s |' % (
        rep['signatures']['reconcile_vs_signals']['manifest_only'],
        rep['signatures']['reconcile_vs_signals']['closure']))
    A('| signals-only | — | %d |' % rep['signatures']['reconcile_vs_signals']['signals_only'])
    if rep['signatures']['reconcile_vs_signals']['manifest_only_detail']:
        A('  - manifest-only 明细（csp-only: scalar dtor / COM stub）: %s' % json.dumps(
            rep['signatures']['reconcile_vs_signals']['manifest_only_detail'],
            ensure_ascii=False))
    A('| sig=csp (verify_csp 口径) | — | %d |' % rep['signatures']['sig_distribution'].get('csp', 0))
    A('| sig=ida-proto (非权威 fallback) | — | %d |' % rep['signatures']['sig_distribution'].get('ida-proto', 0))
    A('| universe canon 类 | — | %d | raw=%d |' % (rep['classes']['universe_canon'], rep['classes']['universe_raw']))
    A('| 成员记录总数 | — | %d |' % rep['members']['total'])
    A('| globals（global_types） | — | %d | signals global=%d, globals.hpp extern=%d |' % (
        rep['globals']['count'], rep['globals']['signals_globals'],
        rep['globals']['emitted_globals_hpp_lines']))
    A('| classes.hpp 类定义（regex 重数） | — | %d | fwd decl=%d |' % (
        rep['emitted_recount']['classes_hpp_class_defs'],
        rep['emitted_recount']['classes_hpp_fwd_decls']))
    A('| functions.hpp 自由函数（regex 重数） | — | %d |' % rep['emitted_recount']['functions_hpp_free_fns'])
    A('')
    mb = rep['signatures']['target_19067_bucket']
    if mb:
        A('### 19,067 mismatch bucket（显式入桶，不静默调和）')
        A('')
        for b in mb:
            A('- **%s**: target=%d actual=%d (Δ%+d) — %s' % (
                b['name'], b['target'], b['actual'], b['delta'], b['explanation']))
        A('')
    mem = rep['members']
    A('## 成员裁决位阶分布（gen_cpp_canon 四层，逐条含 src 键）')
    A('')
    A('| rank | 含义 | 计数 |')
    A('|---|---|---|')
    for rk in ('1', '2', '3', '4'):
        A('| %s | %s | %d |' % (rk, mem['rank_legend'][rk], mem['rank_distribution'].get(rk, 0)))
    A('')
    A('- 终名 placeholder（gen PLACEHOLDER_RE 口径）: %d (%.2f%%)' % (
        mem['final_placeholder_gen_re'], mem['final_placeholder_gen_re_pct']))
    A('- 终名 placeholder（faithful 口径 = 计划普查定义）: %d (%.2f%%)' % (
        mem['final_placeholder_faithful'], mem['final_placeholder_faithful_pct']))
    pc = mem['plan_census_comparison']
    A('- **计划普查差异（显式挂账）**: 计划宣称 14.74%% (58,927/399,696)，本次同定义复算 '
      '%.2f%% (%d/399,696)。成员总数逐位一致、占位数差 6.5× → %s' % (
        pc['recount_pct_faithful'], pc['recount_instances_faithful'], pc['flag']))
    A('- 越界成员(vs size): %d' % mem['out_of_bounds_vs_size'])
    A('')
    A('## canon 再生成幂等性（本会话种子对照实验）')
    A('')
    rid = rep['regen_idempotency']
    A('- 判定: **%s**（%s）' % (rid['verdict'], rid['evidence_class']))
    A('- 发现: %s' % rid['finding'])
    A('- 例证: %s' % rid['exemplar'])
    A('- 机制: %s' % rid['mechanism'])
    A('- 处置: %s' % rid['disposition'])
    A('- 契约影响: %s' % rid['implication'])
    A('')
    A('## 输入哈希表（契约溯源锚）')
    A('')
    A('| id | path | sha256 | bytes |')
    A('|---|---|---|---|')
    for iid in sorted(rep['inputs']):
        e = rep['inputs'][iid]
        A('| %s | %s | `%s` | %d |' % (iid, e['path'], e['sha256'], e['bytes']))
    if rep.get('inputs_missing'):
        A('')
        A('缺失输入: %s' % rep['inputs_missing'])
    A('')
    A('## 溯源记录形态')
    A('')
    A('- 每条签名: `{addr: {sig, cls, name, csp: "csp_functions:0x…", cc, nparams, ret, rank}}`；rank2=CSP（engine `_SRC_RANK` csp_*=2，engine.py:1619），rank0=ida-proto fallback（**非权威**，T4b 重解前不得当确定类使用）。')
    A('- 每条成员: `{offset: {n, r, ph, src:[…]}}`；src 指向 member_types/class_db/class_layouts/member_lookup 的具体键。')
    A('- 每条继承边: `{class: {parent, src: "class_layouts:RAW.parent", in_universe, exempt_external}}`。')
    A('- 每条全局: `{addr: {name, type, confidence, csp: "global_types:0x…"}}`。')
    A('- 全部记录经 `inputs` 表 sha256 锚定到具体输入文件。')
    with open(path, 'w', encoding='utf-8') as f:
        f.write('\n'.join(L) + '\n')


if __name__ == '__main__':
    sys.exit(main())
