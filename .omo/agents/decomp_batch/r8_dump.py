#!/usr/bin/env python3
"""r8_dump.py ADDR... -- decompile one or more fns and dump the internal
evidence R8 rulings depend on: disasm widths/offsets, views, emitted body.
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, ROOT)

import decompile  # noqa: E402
import pseudo  # noqa: E402
import passes  # noqa: E402
from registry_ext import Registry  # noqa: E402
from passes import ClassView  # noqa: E402


def main():
    reg = Registry.get()
    idx = pseudo.load_index()
    for addr in sys.argv[1:]:
        views = ClassView()
        ctx, unit = decompile.run_function(addr, reg, views, idx)
        cls = ctx.sig["cls"]
        print("== %s %s::%s  unit=%s  cc=%s params=%s ret=%s" % (
            addr, cls, ctx.sig["method"], unit, ctx.sig.get("cc"),
            ctx.sig.get("params_spelled"), ctx.sig.get("ret")))
        print("widths", {k: sorted(v) for k, v in
                         passes._disasm_this_widths(ctx).items()})
        print("alias ", {k: sorted(v) for k, v in
                         passes._disasm_alias_widths(ctx).items()})
        print("offs  ", sorted(passes._disasm_this_offsets(ctx)))
        ar = views.arrays.get(cls) or {}
        print("arrays", {hex(o): (a.get("name"), a.get("elem"), a.get("count"))
                         for o, a in ar.items()})
        sc = views.scalars.get(cls) or {}
        print("scalars", {hex(o): {k: (v.get("name"), v.get("type"),
                                       v.get("width"), v.get("src"))
                                   for k, v in r.items()}
                          for o, r in sc.items()})
        print("notes", [(n["kind"], n["text"][:90]) for n in ctx.notes][:12])
        print("exts", getattr(ctx, "used_callee_exts", [])[:8])
        print("---- body ----")
        print("\n".join(ctx.lines)[:2500])
        print()


if __name__ == "__main__":
    main()
