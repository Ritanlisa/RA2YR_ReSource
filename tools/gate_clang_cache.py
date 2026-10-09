#!/usr/bin/env python3
"""Content-addressed result cache for the Clang AST gate (gate-perf, 2026-10-09).

Problem: the code-standards gate parses every changed .cpp plus ALL .hpp files
through libclang on every build (~7s/TU x ~870 cpp + ~135 hpp = hours after a
full corpus regen), serially.

Fix: cache each file's full violation list keyed by
    sha1(schema + checker source + compile args + baseline commit + file content)
All four inputs fully determine `ClangChecker.run_all_checks()` output
(including check_new_symbols, whose git-diff added-line set is a pure function
of file content x baseline commit). Same key => byte-identical verdicts; any
content/baseline/checker change => new key, recompute. No check is weakened --
this only memoizes a pure function.

Parallelism: files are independent; a spawn ProcessPool parses files in
workers (libclang parse holds the GIL, so threads would serialize).
"""

import hashlib
import json
import os
import subprocess
import sys
from concurrent.futures import ProcessPoolExecutor

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CACHE_DIR = os.path.join(REPO, '.omo', 'cache', 'gate_clang')
SCHEMA = 'gate-clang-v1'
_PRUNE_KEEP = 6000

_ING = None
_BASELINE = None


def _sha1_file(path):
    h = hashlib.sha1()
    try:
        with open(path, 'rb') as f:
            for chunk in iter(lambda: f.read(1 << 22), b''):
                h.update(chunk)
    except OSError:
        return 'missing'
    return h.hexdigest()


def _ingredients_digest():
    global _ING
    if _ING is None:
        from clang_ast_checker import ClangChecker  # noqa: F401  (version input)
        h = hashlib.sha1()
        h.update(SCHEMA.encode())
        h.update(_sha1_file(os.path.join(REPO, 'tools',
                                         'clang_ast_checker.py')).encode())
        try:
            sys.path.insert(0, os.path.join(REPO, 'tools'))
            from clang_ast_checker import _get_default_compile_args
            h.update(repr(_get_default_compile_args()).encode())
        except Exception:
            pass
        _ING = h.hexdigest()
    return _ING


def baseline_sha():
    global _BASELINE
    if _BASELINE is None:
        try:
            r = subprocess.run(['git', 'rev-parse', 'auto-fill-baseline'],
                               capture_output=True, text=True, cwd=REPO)
            _BASELINE = r.stdout.strip()[:16] or 'none'
        except Exception:
            _BASELINE = 'none'
    return _BASELINE


def cache_key(abs_path):
    h = hashlib.sha1()
    h.update(_ingredients_digest().encode())
    h.update(baseline_sha().encode())
    h.update(_sha1_file(abs_path).encode())
    return h.hexdigest()


def _cache_path(key):
    return os.path.join(CACHE_DIR, key[:2], key + '.json')


def load_payload(abs_path):
    p = _cache_path(cache_key(abs_path))
    try:
        with open(p, 'r', encoding='utf-8') as f:
            return json.load(f)
    except (OSError, ValueError):
        return None


def store_payload(abs_path, payload):
    try:
        p = _cache_path(cache_key(abs_path))
        os.makedirs(os.path.dirname(p), exist_ok=True)
        tmp = p + '.tmp'
        with open(tmp, 'w', encoding='utf-8') as f:
            json.dump(payload, f)
        os.replace(tmp, p)
    except OSError:
        pass


def compute_payload(abs_path):
    """Parse + full walk. Runs in worker processes; returns JSON-safe dict."""
    sys.path.insert(0, os.path.join(REPO, 'tools'))
    from clang_ast_checker import ClangChecker
    checker = ClangChecker(abs_path)
    checker.parse()
    payload = {
        'all': [list(v) for v in checker.run_all_checks()],
        'hpp_impl': [list(v) for v in checker.check_hpp_implementations()],
    }
    store_payload(abs_path, payload)
    return payload


def _worker(abs_path):
    try:
        pay = load_payload(abs_path)
        if pay is not None:
            return (abs_path, pay, True)
        return (abs_path, compute_payload(abs_path), False)
    except Exception as e:
        return (abs_path, {'error': str(e)}, False)


def gather_payloads(paths, workers=None):
    """Return {abs_path: payload} for all paths, using the cache and a
    spawn process pool for misses. Falls back to serial on pool failure."""
    results = {}
    missing = []
    for p in paths:
        pay = load_payload(p)
        if pay is not None:
            results[p] = pay
        else:
            missing.append(p)
    if missing:
        if workers is None:
            workers = min(8, (os.cpu_count() or 4))
        try:
            import multiprocessing as mp
            ctx = mp.get_context('spawn')
            with ProcessPoolExecutor(max_workers=workers,
                                     mp_context=ctx) as pool:
                for abs_path, pay, _cached in pool.map(_worker, missing,
                                                       chunksize=4):
                    results[abs_path] = pay
        except Exception as e:
            print("gate-cache: pool failed (%s), serial fallback" % e,
                  file=sys.stderr)
            for p in missing:
                results[p] = _worker(p)[1]
    return results


def prune():
    """Best-effort: keep only the newest _PRUNE_KEEP cache entries."""
    try:
        entries = []
        for root, _dirs, files in os.walk(CACHE_DIR):
            for fn in files:
                if fn.endswith('.json'):
                    p = os.path.join(root, fn)
                    try:
                        entries.append((os.stat(p).st_mtime, p))
                    except OSError:
                        pass
        if len(entries) <= _PRUNE_KEEP:
            return
        entries.sort()
        for _mt, p in entries[:-_PRUNE_KEEP]:
            try:
                os.remove(p)
            except OSError:
                pass
    except OSError:
        pass
