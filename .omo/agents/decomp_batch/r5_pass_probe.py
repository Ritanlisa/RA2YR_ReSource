#!/usr/bin/env python3
"""R5 probe: dump body after each pass for one function."""
import sys, os, re
ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, ROOT)
import pseudo, decompile, passes
from registry_ext import Registry
from passes import ClassView, FunctionCtx
from decompile import derive_signature

addr = sys.argv[1].lower()
reg = Registry.get()
idx = pseudo.load_index()
ex = pseudo.fetch(addr)
sig = derive_signature(reg, ex)
ctx = FunctionCtx(ex, sig, reg, ClassView())

STEPS = [
    ("param_rename", passes.pass_param_rename),
    ("globals", passes.pass_globals),
    ("thislike_param", passes.pass_thislike_param),
    ("this_ptr_math", passes.pass_this_ptr_math),
    ("intrinsics_abs", passes.pass_intrinsics_abs),
    ("intrinsics_lobyte", passes.pass_intrinsics_lobyte),
    ("narrow_macro_reads", passes.pass_narrow_macro_reads),
    ("macro_residual_sweep", passes.pass_macro_residual_sweep),
    ("vt_dispatch", passes.pass_vt_dispatch),
    ("member_shapes", passes.pass_member_shapes),
    ("callees", passes.pass_callees),
    ("unknown_symbols", passes.pass_unknown_symbols),
    ("local_retype", passes.pass_local_retype),
]
print("=" * 25, "RAW")
print("\n".join(ctx.lines))
for name, fn in STEPS:
    fn(ctx)
    print("=" * 25, name)
    print("\n".join(ctx.lines))
passes.pass_scope_shrink(ctx)
print("=" * 25, "scope_shrink (stmts)")
from pseudo import render
if ctx.stmts is not None:
    print("\n".join(render(ctx.stmts, indent=1)))
else:
    print("\n".join(ctx.lines))
