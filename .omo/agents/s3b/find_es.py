import sys
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys'); sys.path.insert(0, r'D:\RA2YR_ReSource')
import passes, decompile, pseudo
from registry_ext import Registry
from passes import ClassView

# wrap every module-level callable named pass_* to detect who rewrites _ESI
orig = {}
def wrap(name, fn):
    def inner(ctx, *a, **kw):
        before = "\n".join(ctx.lines)
        r = fn(ctx, *a, **kw)
        after = "\n".join(ctx.lines)
        if "_ESI" in before and "_ES I" in after:
            print("CULPRIT:", name)
            for ln in after.split("\n"):
                if "_ES I" in ln: print("   ", ln.strip()[:120])
        return r
    return inner
for n in dir(passes):
    if n.startswith("pass_") and callable(getattr(passes, n)):
        orig[n] = getattr(passes, n)
        setattr(passes, n, wrap(n, orig[n]))

reg = Registry.get(); idx = pseudo.load_index()
ctx, unit = decompile.run_function("0x415ee0", reg, ClassView(), idx)
print('unit', unit)
