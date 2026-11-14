import sys
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys'); sys.path.insert(0, r'D:\RA2YR_ReSource')
import passes, decompile, pseudo
from registry_ext import Registry
from passes import ClassView
orig={}
def wrap(name, fn):
    def inner(ctx,*a,**kw):
        before="\n".join(ctx.lines); r=fn(ctx,*a,**kw); after="\n".join(ctx.lines)
        if before!=after:
            for b,a2 in zip(before.split("\n"), after.split("\n")):
                if b!=a2 and ('m085' in a2 or 'm6E8' in a2 or 'alignmentPadding' in a2 or 'ToolTipText' in a2):
                    print("PASS", name); print("   before:", b.strip()[:130]); print("   after :", a2.strip()[:130])
        return r
    return inner
for n in dir(passes):
    if n.startswith("pass_") and callable(getattr(passes,n)):
        orig[n]=getattr(passes,n); setattr(passes,n,wrap(n,orig[n]))
reg=Registry.get(); idx=pseudo.load_index()
decompile.run_function("0x426ed0", reg, ClassView(), idx)
