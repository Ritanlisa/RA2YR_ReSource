import io

p = 'tools/decomp_sys/decompile.py'
s = open(p, encoding='utf-8').read()
old = '''        # pilot hpp: all classes touched by this unit
        by_cls = OrderedDict()
        for ctx in ctxs:
            by_cls.setdefault(ctx.sig["cls"], []).append(ctx.sig)'''
new = '''        # pilot hpp: all classes touched by this unit
        by_cls = OrderedDict()
        for ctx in ctxs:
            bucket = by_cls.setdefault(ctx.sig["cls"], [])
            if not ctx.sig.get("free"):
                bucket.append(ctx.sig)'''
assert old in s
s = s.replace(old, new)
old2 = '''        for ctx in ctxs:
            unit_globals.update(getattr(ctx, "used_globals", {}))
            for d in getattr(ctx, "used_callee_exts", []):
                if d not in unit_externs:
                    unit_externs.append(d)'''
new2 = '''        for ctx in ctxs:
            unit_globals.update(getattr(ctx, "used_globals", {}))
            for d in getattr(ctx, "used_callee_exts", []):
                if d not in unit_externs:
                    unit_externs.append(d)
            if ctx.sig.get("free"):
                d = free_decl(ctx.sig)
                if d not in unit_externs:
                    unit_externs.append(d)'''
assert old2 in s
s = s.replace(old2, new2)
open(p, 'w', encoding='utf-8', newline='\n').write(s)
print('decompile.py patched')

p = 'tools/decomp_sys/batch_run.py'
s = open(p, encoding='utf-8').read()
old = '''        by_cls = OrderedDict()
        for ctx in ctxs:
            by_cls.setdefault(ctx.sig["cls"], []).append(ctx.sig)'''
new = '''        by_cls = OrderedDict()
        for ctx in ctxs:
            bucket = by_cls.setdefault(ctx.sig["cls"], [])
            if not ctx.sig.get("free"):
                bucket.append(ctx.sig)'''
assert old in s
s = s.replace(old, new)
old2 = '''        for ctx in ctxs:
            unit_globals.update(getattr(ctx, "used_globals", {}))
            for d in getattr(ctx, "used_callee_exts", []):
                if d not in unit_externs:
                    unit_externs.append(d)'''
new2 = '''        for ctx in ctxs:
            unit_globals.update(getattr(ctx, "used_globals", {}))
            for d in getattr(ctx, "used_callee_exts", []):
                if d not in unit_externs:
                    unit_externs.append(d)
            if ctx.sig.get("free"):
                d = decompile.free_decl(ctx.sig)
                if d not in unit_externs:
                    unit_externs.append(d)'''
assert old2 in s
s = s.replace(old2, new2)
old3 = '''            by_cls2 = OrderedDict()
            by_cls2.setdefault(ctx.sig["cls"], []).append(ctx.sig)'''
new3 = '''            by_cls2 = OrderedDict()
            bucket2 = by_cls2.setdefault(ctx.sig["cls"], [])
            if not ctx.sig.get("free"):
                bucket2.append(ctx.sig)'''
assert old3 in s
s = s.replace(old3, new3)
old4 = '''                hpp2, _m2 = hpp_pilot.gen_class_hpp(
                    cls2, ctx.views, sigs2, size2,
                    used_globals=getattr(ctx, "used_globals", {}),
                    extra_externs=getattr(ctx, "used_callee_exts", []))'''
new4 = '''                exts2 = list(getattr(ctx, "used_callee_exts", []))
                if ctx.sig.get("free"):
                    exts2.append(decompile.free_decl(ctx.sig))
                hpp2, _m2 = hpp_pilot.gen_class_hpp(
                    cls2, ctx.views, sigs2, size2,
                    used_globals=getattr(ctx, "used_globals", {}),
                    extra_externs=exts2)'''
assert old4 in s
s = s.replace(old4, new4)
open(p, 'w', encoding='utf-8', newline='\n').write(s)
print('batch_run.py patched')
