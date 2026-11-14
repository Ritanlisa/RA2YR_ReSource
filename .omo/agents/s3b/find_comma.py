import sys
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys'); sys.path.insert(0, r'D:\RA2YR_ReSource')
import passes, decompile, pseudo
from registry_ext import Registry
from passes import ClassView
orig={}
def wrap(name, fn):
    def inner(ctx,*a,**kw):
        before="\n".join(ctx.lines); r=fn(ctx,*a,**kw); after="\n".join(ctx.lines)
        if ',) ' in after or ',)' in after:
            for b,a2 in zip(before.split("\n"), after.split("\n")):
                if b!=a2 and ',)' in a2:
                    print("PASS", name); print("   before:", b.strip()[:140]); print("   after :", a2.strip()[:140])
        return r
    return inner
for n in dir(passes):
    if n.startswith("pass_") and callable(getattr(passes,n)):
        orig[n]=getattr(passes,n); setattr(passes,n,wrap(n,orig[n]))
reg=Registry.get(); idx=pseudo.load_index()
decompile.run_function("0x418e20", reg, ClassView(), idx)
