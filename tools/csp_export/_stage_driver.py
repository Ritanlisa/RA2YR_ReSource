#!/usr/bin/env python3
"""T8 stage driver: per-stage manifests, content-addressed fingerprints,
cache invalidation, chain lock and rollback checkpoints for step4.

Plan project-optimization.md #15 (T8): split mechanical generation and
verification into resumable incremental stages.  This module is the
machinery; `step4_bodies.py` declares the stages and calls into it.

Design (soundness contract)
---------------------------
* Fingerprints are CONTENT-ADDRESSED: every file is hashed (sha256);
  an aggregate is sha256 over sorted "relpath\\0sha256\\n" lines.  No
  mtime/size shortcuts anywhere.
* Per-stage manifest entry records: schema + tool versions (sha256 of
  every script implementing the stage), input/output fingerprints,
  FULL per-file output map (tamper detection covers files the stage
  did NOT change), status, rollback pointer, timing, rc.
* Cache-hit rule (never skips changed-input verification):
    stage K may be skipped iff
      (a) every prior stage was a hit (cascade -- any upstream re-run
          forces all downstream stages to re-run; conservative and
          sound for this single-pass chain), AND
      (b) K's declared EXTERNAL inputs (files no chain stage writes)
          hash to the recorded fingerprint, AND
      (c) K's tool fingerprint matches (script edit invalidates), AND
      (d) the manifest schema matches, AND
      (e) K's full output-scope per-file map matches the recorded one
          (detects drifted/tampered outputs on a cache hit).
* Rollback: before a stage runs, its declared output scope is copied to
  `.omo/stage_rollback/<stage>/`.  On stage failure the scope is
  restored byte-exact (copy back + delete files created during the
  run) and the manifest entry records status=failed with the rollback
  pointer.  Partial output is never counted as success: the chain
  aborts non-zero after restore.
* Chain lock: `.omo/step4_chain.lock` (O_EXCL, pid stamped).  A live
  holder aborts the new chain (fail closed) -- no unlocked concurrent
  writes to shared artifacts (signals.json, member_lookup.json, ...).
  A lock whose pid is dead is removed with a loud note.
* Manifest writes are atomic (tmp + os.replace).

Cache-mismatch semantics: if (e) fails on an otherwise-valid hit, the
stage re-runs on top of a fresh checkpoint; a generator that regenerates
deterministically repairs the drift.  If it re-runs to exactly its
recorded output state, downstream stages may still hit.
"""
import hashlib
import json
import os
import shutil
import sys
import time
from pathlib import Path

SCHEMA = "step4-stage-manifest/v1"
ENTRY_SCHEMA = "stage-entry/v1"


def sha256_file(p, chunk=1 << 20):
    h = hashlib.sha256()
    with open(p, 'rb') as f:
        while True:
            b = f.read(chunk)
            if not b:
                break
            h.update(b)
    return h.hexdigest()


def scan_scope(root, specs):
    """Content fingerprint of a scope spec.

    spec entry (relative to root):
      "rel/path"        -> file: hash it; dir: hash every file under it
      "glob:pat:BASE"   -> glob pattern under BASE (relative to root)
    Missing paths are skipped (recorded as absent -- a later appearance
    changes the aggregate and invalidates).
    Returns {relpath: {"sha256":..., "size":...}}.
    """
    root = Path(root)
    out = {}

    def add_file(p):
        rp = p.relative_to(root).as_posix()
        try:
            out[rp] = {"sha256": sha256_file(p), "size": p.stat().st_size}
        except OSError:
            pass

    for spec in specs:
        if spec.startswith('glob:'):
            _, pat, base = spec.split(':', 2)
            b = root / base
            if b.is_dir():
                for p in sorted(b.glob(pat)):
                    if p.is_file():
                        add_file(p)
            continue
        p = root / spec
        if p.is_file():
            add_file(p)
        elif p.is_dir():
            for q in sorted(p.rglob('*')):
                if q.is_file():
                    add_file(q)
    return out


def aggregate(fp):
    """sha256 over sorted "relpath\\0sha256\\n".  Accepts both scan_scope
    entries ({rel: {'sha256':..}}) and flat maps ({rel: sha})."""
    h = hashlib.sha256()
    for rp in sorted(fp):
        v = fp[rp]
        if isinstance(v, dict):
            v = v['sha256']
        h.update(('%s\x00%s\n' % (rp, v)).encode('utf-8'))
    return h.hexdigest()


def tools_fingerprint(paths):
    """Tool/schema version: sha256 over sorted "relpath\\0sha256\\n" of the
    scripts that implement the chain."""
    h = hashlib.sha256()
    for p in sorted(set(paths)):
        pp = Path(p)
        if not pp.exists():
            h.update(('%s\x00MISSING\n' % pp).encode('utf-8'))
            continue
        h.update(('%s\x00%s\n' % (pp.name, sha256_file(pp))).encode('utf-8'))
    return h.hexdigest()


class StageFailure(Exception):
    """A stage (or its callee) failed.  .rc is the process exit code."""

    def __init__(self, stage, rc, detail=''):
        super().__init__('stage %s failed rc=%s %s' % (stage, rc, detail))
        self.stage = stage
        self.rc = rc or 1
        self.detail = detail


class ChainLock:
    """O_EXCL lock; live holder -> fail closed; dead holder -> removed."""

    def __init__(self, root):
        self.path = Path(root) / '.omo' / 'step4_chain.lock'
        self.mine = False

    def acquire(self):
        self.path.parent.mkdir(parents=True, exist_ok=True)
        while True:
            try:
                fd = os.open(str(self.path),
                             os.O_CREAT | os.O_EXCL | os.O_WRONLY)
                os.write(fd, ('%d\n%s\n' % (os.getpid(), time.strftime(
                    '%Y-%m-%dT%H:%M:%S'))).encode())
                os.close(fd)
                self.mine = True
                return
            except FileExistsError:
                txt = ''
                try:
                    txt = self.path.read_text(encoding='utf-8', errors='replace')
                except OSError:
                    pass
                pid = None
                try:
                    pid = int(txt.split('\n')[0].strip())
                except (ValueError, IndexError):
                    pass
                alive = False
                if pid:
                    try:
                        os.kill(pid, 0)
                        alive = True
                    except OSError:
                        alive = False
                except_win = sys.platform == 'win32'

                def win_alive(p):
                    import ctypes
                    SYNCHRONIZE = 0x00100000
                    h = ctypes.windll.kernel32.OpenProcess(
                        SYNCHRONIZE, 0, p)
                    if h:
                        ctypes.windll.kernel32.CloseHandle(h)
                        return True
                    return False
                if pid and except_win:
                    alive = win_alive(pid)
                if alive:
                    print('!! [stage-driver] another chain holds %s '
                          '(pid %s) -- refusing unlocked concurrent runs '
                          '(fail closed).' % (self.path, pid))
                    sys.exit(3)
                print('[stage-driver] removing stale chain lock '
                      '(pid %s dead)' % pid)
                try:
                    self.path.unlink()
                except OSError:
                    pass

    def release(self):
        if self.mine:
            try:
                self.path.unlink()
            except OSError:
                pass
            self.mine = False


class StageDriver:
    def __init__(self, root, fresh=False, no_cache=False, skip=(),
                 plan_only=False):
        self.root = Path(root)
        self.manifest_path = self.root / '.omo' / 'step4_stage_manifests.json'
        self.rb_root = self.root / '.omo' / 'stage_rollback'
        self.fresh = fresh
        self.no_cache = no_cache
        self.skip = set(skip)
        self.plan_only = plan_only
        self.man = self._load()
        self.chain_id = 'run-%s-pid%d' % (
            time.strftime('%Y%m%dT%H%M%S'), os.getpid())
        self._cur = None
        self._ckpt = None
        self.miss_log = []

    # ---- manifest io ----
    def _load(self):
        if self.fresh or not self.manifest_path.exists():
            return {"schema": SCHEMA, "stages": {}, "runs": []}
        try:
            m = json.loads(self.manifest_path.read_text(encoding='utf-8'))
        except (json.JSONDecodeError, OSError):
            print('!! [stage-driver] manifest unreadable -- starting fresh '
                  '(previous file kept as .corrupt)')
            try:
                shutil.copy2(self.manifest_path,
                             str(self.manifest_path) + '.corrupt')
            except OSError:
                pass
            return {"schema": SCHEMA, "stages": {}, "runs": []}
        if m.get('schema') != SCHEMA:
            print('!! [stage-driver] manifest schema %r != %r -- starting '
                  'fresh (fail closed on unknown schema)'
                  % (m.get('schema'), SCHEMA))
            return {"schema": SCHEMA, "stages": {}, "runs": []}
        m.setdefault('stages', {})
        m.setdefault('runs', [])
        return m

    def save(self):
        self.manifest_path.parent.mkdir(parents=True, exist_ok=True)
        tmp = str(self.manifest_path) + '.tmp'
        with open(tmp, 'w', encoding='utf-8') as f:
            json.dump(self.man, f, ensure_ascii=False, indent=1)
        os.replace(tmp, self.manifest_path)

    def begin_chain(self, tool_paths):
        self.lock = ChainLock(self.root)
        self.lock.acquire()
        self.man['runs'] = (self.man['runs'] +
                            [{'chain_id': self.chain_id,
                              'started_at': time.strftime(
                                  '%Y-%m-%dT%H:%M:%S'),
                              'tools_fingerprint':
                                  tools_fingerprint(tool_paths)}])[-5:]
        self.save()

    def end_chain(self, ok):
        for r in self.man['runs']:
            if r['chain_id'] == self.chain_id:
                r['ended_at'] = time.strftime('%Y-%m-%dT%H:%M:%S')
                r['ok'] = bool(ok)
                if self.miss_log:
                    r['cache_miss_reasons'] = self.miss_log[-20:]
        self.save()
        self.lock.release()

    # ---- stage lifecycle ----
    def stage_allowed(self, name):
        return name not in self.skip

    def record_planned(self, name, hit, reason, ext_specs, out_specs,
                       tool_fp, scripts, ext_fp, out_map):
        """--plan-only: record fingerprints + cache decision without
        executing anything.  status='planned' is deliberately NOT a
        cacheable 'ok' -- a real run always re-executes."""
        entry = {
            'schema': ENTRY_SCHEMA, 'manifest_schema': SCHEMA,
            'status': 'planned',
            'planned_cache_decision': 'hit' if hit else 'run',
            'planned_reason': reason,
            't8_category': '',
            'tools_fingerprint': tool_fp,
            'ext_inputs_fingerprint': ext_fp,
            'ext_inputs': list(ext_specs),
            'output_scope': list(out_specs),
            'scripts': [[s[0], list(s[1])] for s in scripts],
            'outputs_fingerprint': aggregate(out_map) if out_map else None,
            'outputs_file_count': len(out_map) if out_map else 0,
            'chain_id': self.chain_id,
            'started_at': time.strftime('%Y-%m-%dT%H:%M:%S'),
            'rollback': {'checkpoint_dir': None,
                         'checkpoint_fingerprint': None,
                         'restored': False},
            'note': 'plan-only run: no script executed, no output written',
        }
        self.man['stages'][name] = entry
        self.save()
        print('[stage-driver] %s PLANNED (%s: %s)'
              % (name, entry['planned_cache_decision'], reason))

    def record_skipped(self, name, reason):
        prev = self.man['stages'].get(name, {})
        self.man['stages'][name] = dict(prev)
        self.man['stages'][name].update({
            'status': 'skipped', 'skip_reason': reason,
            'chain_id': self.chain_id})
        self.save()
        print('[stage-driver] %s SKIPPED (%s) -- not counted as success'
              % (name, reason))

    def record_cached(self, name, reason):
        prev = self.man['stages'].get(name, {})
        self.man['stages'][name] = dict(prev)
        self.man['stages'][name].update({
            'status': 'cached', 'cached_note': reason,
            'cached_chain_id': self.chain_id,
            'cached_at': time.strftime('%Y-%m-%dT%H:%M:%S')})
        self.save()
        print('[stage-driver] %s CACHE HIT (verified: %s) -- skipped'
              % (name, reason))

    def hit(self, name, ext_specs, tool_fp, out_specs, superseded=()):
        """Cache-hit decision (no skipped verification on a cache hit).

        Per-stage verification covers the files this stage itself changed
        last run, EXCEPT files a LATER stage also claimed (superseded) --
        those are governed by the later stage's own claim, so shared-scope
        transformation chains don't invalidate upstream records.  Files no
        stage claims are covered by final_drift(), which forces a full
        conservative re-run from stage 1 (regen repairs body drift)."""
        prev = self.man['stages'].get(name)
        if self.no_cache or not prev:
            return False, 'no previous manifest' if not prev else 'forced'
        if prev.get('status') not in ('ok', 'cached'):
            return False, 'previous status=%s' % prev.get('status')
        if prev.get('schema') != ENTRY_SCHEMA or \
                prev.get('manifest_schema') != SCHEMA:
            return False, 'schema mismatch'
        if prev.get('tools_fingerprint') != tool_fp:
            return False, 'tool fingerprint changed'
        if ext_specs:
            now = aggregate(scan_scope(self.root, ext_specs))
            if now != prev.get('ext_inputs_fingerprint'):
                return False, 'external inputs changed'
        ch = prev.get('outputs_changed') or {}
        drift = [rp for rp, v in ch.items()
                 if rp not in superseded
                 and (not (self.root / rp).exists()
                      or sha256_file(self.root / rp) != v['new'])]
        if drift:
            return False, ('output drift in stage-changed files: %s'
                           % sorted(drift)[:6])
        return True, 'ext inputs + owned changed-outputs verified'

    def final_drift(self, out_specs, last_name):
        """True when the chain-final tree no longer matches the LAST
        stage's recorded full output map (detects tampering of files no
        stage lists as changed).  Caller must force a full re-run."""
        prev = self.man['stages'].get(last_name)
        if not prev or prev.get('status') not in ('ok', 'cached') \
                or not prev.get('outputs_map'):
            return False, 'no final map to compare (full run will build it)'
        now = scan_scope(self.root, out_specs)
        rec = prev['outputs_map']
        bad = [k for k in set(now) | set(rec)
               if now.get(k, {}).get('sha256') != rec.get(k, {}).get('sha256')]
        if bad:
            return True, ('chain-final drift in %d file(s), e.g. %s'
                          % (len(bad), sorted(bad)[:4]))
        return False, 'chain-final tree verified'

    def checkpoint(self, name, out_specs):
        """Copy the declared output scope to the rollback dir.  Returns
        (path, aggregate, pre_map) where pre_map is the flat
        {relpath: sha256} snapshot of the scope before the stage runs
        (used for the per-stage outputs_changed diff)."""
        ck = self.rb_root / name
        if ck.exists():
            shutil.rmtree(ck)
        ck.mkdir(parents=True)
        manifest = {}
        for spec in out_specs:
            p = self.root / spec
            if p.is_file():
                dst = ck / p.relative_to(self.root)
                dst.parent.mkdir(parents=True, exist_ok=True)
                shutil.copy2(p, dst)
                manifest[p.relative_to(self.root).as_posix()] = \
                    sha256_file(p)
            elif p.is_dir():
                for q in sorted(p.rglob('*')):
                    if q.is_file():
                        dst = ck / q.relative_to(self.root)
                        dst.parent.mkdir(parents=True, exist_ok=True)
                        shutil.copy2(q, dst)
                for q in sorted(p.rglob('*')):
                    if q.is_file():
                        manifest[q.relative_to(self.root).as_posix()] = \
                            sha256_file(q)
        (ck / '_checkpoint_fingerprint.json').write_text(
            json.dumps({'schema': 'stage-checkpoint/v1',
                        'stage': name, 'aggregate': aggregate(manifest),
                        'files': manifest}, ensure_ascii=False, indent=1),
            encoding='utf-8')
        return ck, aggregate(manifest), manifest

    def restore(self, name, ck, out_specs):
        """Byte-exact restore of the checkpointed scope: copy back and
        delete files created after the checkpoint (walks the declared
        scope, so leftovers are removed even where the checkpoint has no
        files)."""
        meta = json.loads((ck / '_checkpoint_fingerprint.json')
                          .read_text(encoding='utf-8'))
        files = meta['files']
        n_copy = n_del = 0
        for rp in files:
            src = ck / rp
            dst = self.root / rp
            dst.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(src, dst)
            n_copy += 1
        # delete leftovers created during the failed stage (scope dirs only)
        for spec in out_specs:
            if spec.startswith('glob:'):
                continue
            base = self.root / spec
            if base.is_dir():
                for q in base.rglob('*'):
                    if q.is_file():
                        rel = q.relative_to(self.root).as_posix()
                        if rel not in files:
                            q.unlink()
                            n_del += 1
        # verify
        bad = [rp for rp in files
               if not (self.root / rp).exists()
               or sha256_file(self.root / rp) != files[rp]]
        print('[stage-driver] %s rollback: restored %d file(s), deleted %d '
              'leftover(s), verify %s' %
              (name, n_copy, n_del,
               'FAIL %s' % bad[:5] if bad else 'OK (byte-exact)'))
        return not bad

    def stage_begin(self, name, category, ext_specs, out_specs, tool_fp,
                    scripts):
        self._cur = {'name': name, 'category': category,
                     'ext_specs': ext_specs, 'out_specs': out_specs,
                     'tool_fp': tool_fp, 'scripts': scripts,
                     'started': time.time()}
        ext_fp = (aggregate(scan_scope(self.root, ext_specs))
                  if ext_specs else None)
        self._cur['ext_fp'] = ext_fp
        self._ckpt, self._cur['ckpt_fp'], pre_map = \
            self.checkpoint(name, out_specs)
        self._cur['pre_map'] = pre_map
        entry = {
            'schema': ENTRY_SCHEMA, 'manifest_schema': SCHEMA,
            't8_category': category,
            'tools_fingerprint': tool_fp,
            'ext_inputs_fingerprint': ext_fp,
            'ext_inputs': list(ext_specs),
            'output_scope': list(out_specs),
            'scripts': [[s[0], list(s[1])] for s in scripts],
            'status': 'running',
            'chain_id': self.chain_id,
            'started_at': time.strftime('%Y-%m-%dT%H:%M:%S'),
            'rollback': {'checkpoint_dir':
                         self._ckpt.relative_to(self.root).as_posix(),
                         'checkpoint_fingerprint': self._cur['ckpt_fp'],
                         'restored': False},
        }
        self.man['stages'][name] = entry
        self.save()

    def stage_end(self, rc=0, note=None, extra=None):
        c = self._cur
        out_map = scan_scope(self.root, c['out_specs'])
        changed = {}
        for rp, v in out_map.items():
            old = c['pre_map'].get(rp)
            if old is not None and old != v['sha256']:
                changed[rp] = {'old': old, 'new': v['sha256']}
        for rp, old in c['pre_map'].items():
            if rp not in out_map:
                changed[rp] = {'old': old, 'new': None}
        entry = self.man['stages'][c['name']]
        entry.update({
            'status': 'ok',
            'rc': rc,
            'outputs_fingerprint': aggregate(out_map),
            'outputs_map': out_map,
            'outputs_changed': changed,
            'outputs_changed_n': len(changed),
            'outputs_file_count': len(out_map),
            'ended_at': time.strftime('%Y-%m-%dT%H:%M:%S'),
            'duration_s': round(time.time() - c['started'], 1),
        })
        if note:
            entry['note'] = note
        if extra:
            entry.update(extra)
        self.save()
        # prune checkpoint (stage succeeded; recovery point = this manifest)
        try:
            shutil.rmtree(self._ckpt)
        except OSError:
            pass
        self._ckpt = None
        self._cur = None
        return entry

    def stage_fail(self, rc, detail):
        c = self._cur
        entry = self.man['stages'][c['name']]
        ok = self.restore(c['name'], self._ckpt, c['out_specs'])
        entry.update({
            'status': 'failed',
            'rc': rc or 1,
            'error': {'detail': detail[-2000:]},
            'ended_at': time.strftime('%Y-%m-%dT%H:%M:%S'),
            'duration_s': round(time.time() - c['started'], 1),
            'rollback': {'checkpoint_dir':
                         self._ckpt.relative_to(self.root).as_posix(),
                         'checkpoint_fingerprint': c['ckpt_fp'],
                         'restored': bool(ok)},
        })
        self.save()
        self._cur = None
        return ok, entry

    def cascade_broken(self):
        """True once any stage re-ran in this chain (downstream must run)."""
        return self._cascade_broken

    def set_cascade(self, broken):
        self._cascade_broken = bool(broken)

    def init_cascade(self):
        self._cascade_broken = False
