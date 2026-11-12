#!/usr/bin/env python3
"""cw7_probe_passes.py -- show which pass rewrites a target string."""
import os
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, ROOT)
sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))

import passes  # noqa: E402
import decompile  # noqa: E402
import pseudo  # noqa: E402
from registry_ext import Registry  # noqa: E402

ADDR = sys.argv[1] if len(sys.argv) > 1 else "0x426dd0"
NEEDLE = sys.argv[2] if len(sys.argv) > 2 else "m006"

orig = {}
for name in dir(passes):
    if not name.startswith("pass_") and not name.startswith("widen_"):
        continue
    fn = getattr(passes, name)
    if not callable(fn):
        continue
    orig[name] = fn

state = {"last": None}


def wrap(name, fn):
    def inner(ctx, *a, **kw):
        before = "\n".join(ctx.lines)
        r = fn(ctx, *a, **kw)
        after = "\n".join(ctx.lines)
        if before != after and NEEDLE in after:
            print("=" * 30, name)
            for ln in after.split("\n"):
                if NEEDLE in ln:
                    print("  AFTER:", ln.strip()[:220])
            for ln in before.split("\n"):
                if NEEDLE in ln and ln not in after:
                    print("  BEFORE:", ln.strip()[:220])
        return r
    return inner


for name, fn in orig.items():
    try:
        setattr(passes, name, wrap(name, fn))
    except Exception:
        pass

reg = Registry.get()
views = passes.ClassView() if hasattr(passes, "ClassView") else None
idx = pseudo.load_index()
ctx, unit = decompile.run_function(ADDR, reg, views, idx)
print("-" * 60)
print("FINAL", unit)
for ln in "\n".join(ctx.lines).split("\n"):
    if NEEDLE in ln:
        print("  FINAL:", ln.strip()[:240])
