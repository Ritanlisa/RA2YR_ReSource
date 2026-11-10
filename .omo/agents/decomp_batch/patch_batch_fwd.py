import re

p = 'tools/decomp_sys/batch_run.py'
s = open(p, encoding='utf-8').read()

old = '''        unit_globals = {}
        unit_externs = []
        for ctx in ctxs:'''
new = '''        unit_globals = {}
        unit_externs = []
        unit_fwd = set()
        for ctx in ctxs:
            for _ln in ctx.lines:
                for _m in re.finditer(r"\\(\\s*([A-Z]\\w+)\\s*\\*", _ln):
                    unit_fwd.add(_m.group(1))'''
assert old in s
s = s.replace(old, new, 1)

old2 = '''            hpp_text, members = hpp_pilot.gen_class_hpp(
                cls, views, sigs, size, used_globals=unit_globals,
                extra_externs=unit_externs)'''
new2 = '''            hpp_text, members = hpp_pilot.gen_class_hpp(
                cls, views, sigs, size, used_globals=unit_globals,
                extra_externs=unit_externs, extra_fwd=unit_fwd)'''
assert old2 in s
s = s.replace(old2, new2, 1)

old3 = '''                hpp2, _m2 = hpp_pilot.gen_class_hpp(
                    cls2, ctx.views, sigs2, size2,
                    used_globals=getattr(ctx, "used_globals", {}),
                    extra_externs=exts2)'''
new3 = '''                fwd2 = set()
                for _ln in ctx.lines:
                    for _m in re.finditer(r"\\(\\s*([A-Z]\\w+)\\s*\\*", _ln):
                        fwd2.add(_m.group(1))
                hpp2, _m2 = hpp_pilot.gen_class_hpp(
                    cls2, ctx.views, sigs2, size2,
                    used_globals=getattr(ctx, "used_globals", {}),
                    extra_externs=exts2, extra_fwd=fwd2)'''
assert old3 in s
s = s.replace(old3, new3, 1)

with open(p, 'w', encoding='utf-8', newline='\n') as f:
    f.write(s)
print('batch_run fwd wired')
