#!/usr/bin/env python3
"""Remove supply_missing_members wave-1 insertions (G42.57ax rollback).

Wave 1 inserted canon-verbatim declaration lines whose type tokens are not
visible in every target TU -> C2238/C2059 explosions (+985 errors). The
machine gets type-visibility degradation and the wave is redone.

The insertions are exactly the ADDED lines in `git diff HEAD~1 HEAD` for
.hpp files EXCLUDING the regen products (classes.hpp / _fwd_e4.hpp /
_tree_full_e4.hpp and their kind -- regenerated wholesale, not patched).

Usage: python tools/csp_export/unsupply_wave1.py [--apply]
"""
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]

def robust_write(p, text, tries=4):
    """Defender/AV transiently locks freshly-written headers; retry."""
    import time as _t
    for k in range(tries):
        try:
            p.write_text(text, encoding='utf-8', newline='')
            return True
        except PermissionError:
            _t.sleep(0.6)
    print(f"WARN: could not write {p} (locked)", file=sys.stderr)
    return False

APPLY = '--apply' in sys.argv

KEEP = ('classes.hpp', '_fwd_e4.hpp', '_fwd_tree_e4.hpp', '_tree_full_e4.hpp')


def main():
    r = subprocess.run(['git', 'diff', '-U0', 'HEAD~1', 'HEAD', '--', 'src/'],
                       capture_output=True, cwd=str(ROOT))
    if r.returncode != 0:
        print('git diff failed', file=sys.stderr)
        return 1
    r.stdout = (r.stdout or b'').decode('utf-8', errors='replace')
    adds = {}  # path -> [added line texts]
    cur = None
    for ln in r.stdout.split('\n'):
        if ln.startswith('+++ b/'):
            cur = ln[6:]
        elif ln.startswith('+') and not ln.startswith('+++') and cur:
            adds.setdefault(cur, []).append(ln[1:])
    removed = 0
    files = 0
    for path, lines in sorted(adds.items()):
        if not path.endswith('.hpp'):
            continue
        if any(path.endswith(k) for k in KEEP):
            continue
        p = ROOT / path
        if not p.is_file():
            continue
        r2 = subprocess.run(['git', 'show', 'HEAD~1:' + path],
                            capture_output=True, cwd=str(ROOT))
        old = set((r2.stdout or b'').decode('utf-8',
                                            errors='replace').split('\n')) \
            if r2.returncode == 0 else set()
        text = p.read_text(encoding='utf-8', errors='replace')
        body = text.split('\n')
        drop = set()
        for i, ln in enumerate(body):
            if ln in old:
                continue
            if ln in lines:
                drop.add(i)
        if not drop:
            continue
        new = [ln for i, ln in enumerate(body) if i not in drop]
        removed += len(drop)
        files += 1
        if APPLY:
            p.write_text('\n'.join(new), encoding='utf-8', newline='')
    print(f"supply-wave-1 lines removed: {removed} across {files} headers")
    print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
    return 0


if __name__ == '__main__':
    sys.exit(main())
