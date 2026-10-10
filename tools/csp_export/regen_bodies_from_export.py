#!/usr/bin/env python3
"""Step-4 redo: regenerate EVERY function body from the fresh IDA export.

The tree's bodies carry generation-era artifacts (dead stub returns before
the real code, naked `{` wrapper layers, `#if 0` remains). Per the user's
architecture the raw IDA decompiled code IS the implementation -- so the
bodies are replaced WHOLESALE from the fresh typed export
(decompile-results/full_export, `// ---- Hex-Rays ----` blocks); old bodies
are discarded, not patched.

Per cpp definition (annotation `// 0xADDR` + def line):
  - fresh pseudocode exists -> body := pseudocode (outer braces stripped,
    re-indented 2 spaces), def line kept (canon signature authority)
  - no fresh pseudocode / decompile failed -> body kept, logged

RC1 output contract (plan project-optimization.md #8 -- generator-side
clean-output ruling; see tools/csp_export/_ida_vocab.py):
  - IDA vocabulary is TRUTH-IFIED inline (bitfield extraction family ->
    width-exact C++ dereference/index forms, __PAIR*__ -> inline assembly
    expression, qmemcpy -> memcpy, __2/3_YAPAX.. -> operator new/delete).
    No IDA_-prefixed macro vocabulary is emitted; nothing relies on the
    ida_compat.h shims.
  - pseudocode containing constructs that CANNOT be truth-ified
    (MEMORY[..] absolute addressing, JUMPOUT, __CFSHL__/__CFSHR__/__OFS__/
    __CF__ flag reads) is REFUSED: the previous body is kept, the function
    lands in the unresolved report (.omo/unresolved_reports/
    regen_bodies.unresolved.json) AND the process exits non-zero.
    Silent prefixing / silent shimming is forbidden.

Every decision lands in .omo/regen_bodies_manifest.json (addr -> action,
old/new line counts) so nothing is overwritten silently.  When --files
restricts the run (golden cohort) the manifest is written to
regen_bodies_manifest.cohort.json instead, preserving the full-run record.

RC3 content-preservation guard (plan project-optimization.md #10):
  - before ANY body is replaced the previous body span is hashed and the
    replacement is checked "proven present" (non-hollow content AND a
    brace-balanced emitted block).  A non-hollow old body is never
    replaced by a hollow/unbalanced one: the function is refused, lands
    in the per-function loss report
    (.omo/unresolved_reports/regen_bodies.lossguard.json) and the process
    exits non-zero.  This closes the 1,484-body loss mechanism (empty /
    trivial Hex-Rays blocks used to land as `{}` wholesale replacements).
  - every decision in .omo/regen_bodies_manifest.json carries per-function
    body hashes (old_body_sha256 / new_body_sha256) so any post-hoc audit
    can prove what each function's body was before/after the run.
  - every whole-file write first backs the original bytes up to
    .omo/regen_bodies_from_export_backup/<rel-path>.pre (fix_dupdef_
    corpses pattern; earliest pre-run state preserved) -- restorable.
  - `--src=<dir>` / `--export=<dir>` overrides exist for sandboxed QA
    (default: <repo>/src, decompile-results/full_export/src).

Usage: python tools/csp_export/regen_bodies_from_export.py [--apply]
       [--files rel/path1.cpp,rel/path2.cpp]
       [--src=DIR] [--export=DIR]
"""
import hashlib
import json
import os
import re
import shutil
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from _blockspan import brace_delta
from _ida_vocab import (find_refusals, truthify, type_ids)

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
EXPORT = ROOT / 'decompile-results' / 'full_export' / 'src'
BAK = ROOT / '.omo' / 'regen_bodies_from_export_backup'
APPLY = '--apply' in sys.argv
FILES_FILTER = None
for _a in sys.argv:
    if _a.startswith('--src='):
        SRC = Path(_a.split('=', 1)[1])
    elif _a.startswith('--export='):
        EXPORT = Path(_a.split('=', 1)[1])
    elif _a.startswith('--files='):
        FILES_FILTER = [
            str(Path(x.strip()).as_posix()) if Path(x.strip()).is_absolute()
            else Path(x.strip()).as_posix().replace('\\', '/')
            for x in _a.split('=', 1)[1].split(',') if x.strip()]
    elif _a == '--files':
        idx = sys.argv.index(_a)
        if idx + 1 < len(sys.argv):
            FILES_FILTER = [
                Path(x.strip()).as_posix().replace('\\', '/')
                for x in sys.argv[idx + 1].split(',') if x.strip()]

ADDR_LINE = re.compile(r'^//\s*0x([0-9A-Fa-f]{6,8})\s*$')
BLOCK_HEAD = re.compile(r'^// =+$')


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
    """RC3: whole-file writes are preceded by a byte-exact backup of the
    original (earliest pre-run state kept -- fix_dupdef_corpses pattern).
    Backups are keyed by the scanned tree (<src-root>/<rel-path>), so a
    sandboxed `--src` run can never occupy (and thereby suppress) the
    real tree's backup slot."""
    src_root = SRC.resolve()
    try:
        tree = src_root.relative_to(ROOT.resolve()).as_posix()
    except ValueError:
        tree = re.sub(r'[^A-Za-z0-9_.-]', '_', str(src_root))
    rel = Path(tree) / p.relative_to(SRC)
    bdir = BAK / rel.parent
    bdir.mkdir(parents=True, exist_ok=True)
    b = bdir / (p.name + '.pre')
    if not b.exists():
        shutil.copyfile(p, b)


# ---- load fresh export: addr -> pseudocode text ----
pseudo = {}
for p in sorted(EXPORT.glob('*.cpp')):
    t = p.read_text(encoding='utf-8', errors='replace')
    cur_addr = None
    in_hr = False
    hr = []
    for ln in t.split('\n'):
        if BLOCK_HEAD.match(ln):
            if cur_addr and hr:
                pseudo[cur_addr] = '\n'.join(hr).strip('\n')
            cur_addr = None
            in_hr = False
            hr = []
            continue
        if cur_addr is None and not in_hr:
            # the addr line sits right after the `// ====` header block
            m = re.search(r'addr=0x([0-9A-Fa-f]{6,8})', ln)
            if m:
                cur_addr = int(m.group(1), 16)
            continue
        if ln.strip() == '// ---- Hex-Rays ----':
            in_hr = True
            continue
        if in_hr:
            hr.append(ln)
    if cur_addr and hr:
        pseudo[cur_addr] = '\n'.join(hr).strip('\n')

print('fresh pseudocode blocks:', len(pseudo))

target_files = None
if FILES_FILTER:
    target_files = set()
    for rel in FILES_FILTER:
        ap = ROOT / rel
        if not ap.exists():
            print('FATAL: --files entry does not exist: %s' % rel)
            sys.exit(2)
        target_files.add(ap.resolve())
    print('cohort filter: %d file(s)' % len(target_files))


def body_from_pseudo(code):
    """Skip the signature line(s); body = first bare `{` .. last bare `}`,
    re-indented by 2 spaces."""
    lines = code.split('\n')
    start = next((i for i, ln in enumerate(lines) if ln.strip() == '{'),
                 None)
    if start is None:
        return None
    end = next((i for i in range(len(lines) - 1, start, -1)
                if lines[i].strip() == '}'), None)
    if end is None or end <= start:
        return None
    inner = lines[start + 1:end]
    out = []
    for ln in inner:
        if ln.strip():
            out.append('  ' + ln if not ln.startswith('  ') else ln)
        else:
            out.append('')
    return '\n'.join(out)


manifest = {}
unresolved = {}
lossguard = {}
tot_rep = tot_keep = tot_unres = tot_refused = 0
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    if target_files is not None and p.resolve() not in target_files:
        continue
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    orig = list(lines)
    i = 0
    while i < len(lines):
        m = ADDR_LINE.match(lines[i].strip())
        if not m:
            i += 1
            continue
        addr = int(m.group(1), 16)
        # def line = next line containing '('
        j = i + 1
        while j < len(lines) and '(' not in lines[j]:
            j += 1
        if j >= len(lines):
            i += 1
            continue
        # body span: first '{' at/after def line to balanced close
        k = j
        depth = 0
        started = False
        while k < len(lines):
            depth += brace_delta(lines[k])
            if not started and brace_delta(lines[k]) > 0:
                started = True
            if started and depth <= 0:
                break
            k += 1
        if not started or k >= len(lines):
            i += 1
            continue
        code = pseudo.get(addr)
        rel = str(p.relative_to(ROOT)).replace('\\', '/')
        if code:
            # RC1: extract the RAW body first; refusal verdicts reference
            # IDA's original vocabulary; truth-ification runs on the body
            # only (never the signature line).
            raw_body = body_from_pseudo(code)
            refusals = find_refusals(raw_body) if raw_body else {}
            if refusals:
                old_span = '\n'.join(lines[j + 1:k + 1])
                manifest['%X' % addr] = {
                    'file': rel, 'action': 'unresolved',
                    'reason': 'untruth-ifiable IDA constructs (RC1 policy)',
                    'patterns': refusals, 'old_span_sha256': _sha(old_span),
                    'new_span_sha256': _sha(old_span)}
                unresolved['0x%X' % addr] = {
                    'file': rel, 'patterns': refusals}
                tot_unres += 1
                i = k + 1
                continue
            new_body = type_ids(truthify(raw_body)) if raw_body else None
        else:
            new_body = None
        if new_body is None:
            old_span = '\n'.join(lines[j + 1:k + 1])
            manifest['%X' % addr] = {'file': rel, 'action': 'kept',
                                     'reason': 'no fresh pseudocode',
                                     'old_span_sha256': _sha(old_span),
                                     'new_span_sha256': _sha(old_span)}
            tot_keep += 1
            i = k + 1
            continue
        # G32: param-name alignment — snapshot signature names vs def-line
        # names. Body identifiers must match the signature it lands in.
        def _sig_params(sig):
            m = re.search(r'\(([^()]*(?:\([^()]*\)[^()]*)*)\)',
                          sig.split('{', 1)[0], re.S)
            if not m:
                return []
            out = []
            for p in m.group(1).split(','):
                p = ' '.join(p.split())
                nm = re.search(r'([A-Za-z_]\w*)\s*$', p)
                if nm and p not in ('void',):
                    out.append(nm.group(1))
            return out
        snap_names = _sig_params(code)
        def_m = re.search(r'\(([^()]*(?:\([^()]*\)[^()]*)*)\)', lines[j],
                          re.S)
        def_names = []
        if def_m:
            for p2 in def_m.group(1).split(','):
                p2 = ' '.join(p2.split())
                nm2 = re.search(r'([A-Za-z_]\w*)\s*$', p2)
                if nm2 and p2 != 'void':
                    def_names.append(nm2.group(1))
        rename = {}
        if def_names and len(snap_names) == len(def_names) + 1 and \
                snap_names[0] != def_names[0]:
            # snapshot's first param is the this receiver
            rename[snap_names[0]] = 'this'
            for sn, dn in zip(snap_names[1:], def_names):
                if sn != dn:
                    rename[sn] = dn
        elif len(snap_names) == len(def_names):
            for sn, dn in zip(snap_names, def_names):
                if sn != dn:
                    rename[sn] = dn
        for sn, dn in rename.items():
            new_body = re.sub(r'\b%s\b' % re.escape(sn), dn, new_body)
        old_len = k - j
        # G32 root-cause fix: also CONSUME the old span's trailing orphan
        # closers (previous sanitizer inserts / wrapper closes). Everything
        # from the def line to the next annotation that is only `}` tokens
        # or blanks beyond the balanced close belongs to the old block.
        m2 = k + 1
        while m2 < len(lines):
            s3 = lines[m2].strip()
            if s3 == '}' or not s3:
                m2 += 1
                continue
            break
        k = m2 - 1  # last trailing '}'-only/blank line of the old block
        # rebuild: def line + '{' + body + '}'; K&R defs (brace on its own
        # line, which the span consumed) get the opener re-emitted
        def_line = lines[j]
        indent = re.match(r'\s*', lines[j]).group(0)
        body_lines = [(indent + '  ' + bl[2:]).rstrip()
                      if bl.strip() else ''
                      for bl in new_body.split('\n')]
        repl = [def_line]
        # G32: split one-line `namespace gamemd { Ret Cls::Fn() {` into
        # proper lines (namespace on its own line, def on the next).
        dm_ns = re.match(r'^((?:namespace\s+\w+\s*\{\s*)+)(.*)$', def_line.strip())
        if dm_ns and dm_ns.group(2):
            repl[0] = indent + dm_ns.group(1)
            repl.insert(1, indent + dm_ns.group(2))
        if '{' not in def_line:
            repl.append(indent + '{')
        repl.extend(body_lines)
        repl.append(indent + '}')
        # G32: self-balance -- def lines may open extra scopes (per-function
        # `namespace gamemd {` wrappers); emit the closers so every
        # replacement block leaves the file brace-neutral.
        net = sum(brace_delta(l) for l in repl)
        for _ in range(net):
            repl.append(indent + '}')
        # RC3 loss guard: a replacement must be PROVEN PRESENT before the
        # old body is discarded -- non-hollow emitted body content AND a
        # brace-balanced emitted block.  A non-hollow old body is never
        # replaced by a hollow one (the 1,484-body loss mechanism); an
        # unbalanced block (def line closing scopes it never opened) is
        # refused regardless of the old body, it would corrupt the TU.
        # Spans are hashed WITHOUT the def line (old: body + trailing
        # orphan closers; new: emitted body_lines) so the hollow check and
        # the manifest hashes describe body content, not the signature.
        old_span = '\n'.join(lines[j + 1:k + 1])
        new_body_text = '\n'.join(body_lines)
        repl_net = sum(brace_delta(l) for l in repl)
        if repl_net != 0 or (_core(old_span) and not _core(new_body_text)):
            if repl_net:
                reason = ('unbalanced replacement block (net %+d braces)'
                          % repl_net)
            else:
                reason = ('replacement body is hollow (RC3 loss guard: '
                          'old body had real content)')
            manifest['%X' % addr] = {
                'file': rel, 'action': 'refused-loss-guard',
                'reason': reason, 'old_lines': old_len,
                'old_body_sha256': _sha(old_span)}
            lossguard['0x%X' % addr] = {
                'file': rel, 'reason': reason, 'old_lines': old_len,
                'old_body_head': '\n'.join(lines[j + 1:k + 1][:8])}
            tot_refused += 1
            i = k + 1
            continue
        lines[j:k + 1] = repl
        manifest['%X' % addr] = {'file': rel, 'action': 'replaced',
                                 'old_lines': old_len,
                                 'new_lines': len(repl) - 1,
                                 'old_body_sha256': _sha(old_span),
                                 'new_body_sha256': _sha(new_body_text)}
        tot_rep += 1
        i = j + len(repl)
    if lines != orig and APPLY:
        _backup_before_write(p)
        # tree convention is latin-1; fresh pseudocode may carry exotic
        # chars from IDA string literals -> replace, never crash
        p.write_bytes('\n'.join(lines).encode('latin-1', errors='replace'))

print('bodies replaced:', tot_rep)
print('bodies kept (no fresh code):', tot_keep)
print('bodies UNRESOLVED (refused, RC1 policy):', tot_unres)
print('bodies REFUSED by RC3 loss guard:', tot_refused)
manifest['_meta'] = {'replaced': tot_rep, 'kept': tot_keep,
                     'unresolved': tot_unres, 'lossguard_refused': tot_refused,
                     'apply': APPLY,
                     'files_filter': FILES_FILTER,
                     'policy': 'rc1-truthify-or-refuse + rc3-loss-guard'}
if tot_refused:
    rpt_dir = ROOT / '.omo' / 'unresolved_reports'
    rpt_dir.mkdir(parents=True, exist_ok=True)
    rpt = rpt_dir / 'regen_bodies.lossguard.json'
    rpt.write_text(json.dumps({
        '_meta': {'generator': 'regen_bodies_from_export.py',
                  'policy': 'rc3-loss-guard (plan #10)', 'apply': APPLY,
                  'files_filter': FILES_FILTER, 'total': tot_refused},
        'refused': lossguard}, indent=1), encoding='utf-8')
    print('LOSS GUARD REPORT: %s (%d function(s) would lose their body -- '
          'previous body KEPT)' % (rpt, tot_refused))
    print('FAIL LOUD: exit 1 -- a non-hollow body must never be replaced '
          'by a hollow/unproven one.')
if tot_unres:
    rpt_dir = ROOT / '.omo' / 'unresolved_reports'
    rpt_dir.mkdir(parents=True, exist_ok=True)
    rpt = rpt_dir / 'regen_bodies.unresolved.json'
    rpt.write_text(json.dumps({
        '_meta': {'generator': 'regen_bodies_from_export.py',
                  'policy': 'rc1-truthify-or-refuse', 'apply': APPLY,
                  'files_filter': FILES_FILTER, 'total': tot_unres},
        'unresolved': unresolved}, indent=1), encoding='utf-8')
    print('UNRESOLVED REPORT: %s (%d functions refused)' % (rpt, tot_unres))
    print('FAIL LOUD: exit 1 -- resolve the constructs upstream or land them'
          ' via a policy-sanctioned path.')
if APPLY:
    man_name = ('regen_bodies_manifest.cohort.json' if FILES_FILTER
                else 'regen_bodies_manifest.json')
    (ROOT / '.omo' / man_name).write_text(
        json.dumps(manifest, indent=1), encoding='utf-8')
    print('manifest written: .omo/%s' % man_name)
else:
    print('DRY RUN (use --apply)')
sys.exit(1 if (tot_unres or tot_refused) else 0)
