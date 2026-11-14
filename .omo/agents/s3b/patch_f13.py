p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
s = open(p, encoding='utf-8').read()
old = '''            arr = (ctx.views.arrays.get(cls) or {}).get(moff)
            if arr and (arr.get("elem") or "") in ("char", "unsigned char"):
                name = arr["name"]
            else:
                name = "m%03X" % moff
                if arr and arr.get("name") == name:
                    name = "%s_addr" % name
                ctx.views.add_array(cls, moff, name, "char", 0,
                                    src or "member-addr-view")'''
assert old in s
new = '''            arr = (ctx.views.arrays.get(cls) or {}).get(moff)
            if arr and (arr.get("elem") or "") in ("char", "unsigned char"):
                name = arr["name"]
            elif arr and arr.get("name"):
                # Stage 3b: an array view already exists at this offset
                # (e.g. the registry's `int m120[1]`).  REUSE its name --
                # renaming to `m120_addr` orphaned every body reference
                # the earlier passes had already rewritten to `m120`
                # (C2039 'm120' : is not a member).  Taking the address of
                # the existing view is the same `lea` either way.
                name = arr["name"]
            else:
                name = "m%03X" % moff
                ctx.views.add_array(cls, moff, name, "char", 0,
                                    src or "member-addr-view")'''
s = s.replace(old, new, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
