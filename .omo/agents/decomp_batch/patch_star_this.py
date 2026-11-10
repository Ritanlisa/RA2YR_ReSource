import re
p = 'tools/decomp_sys/passes.py'
s = open(p, encoding='utf-8').read()

old = '''    text = _BARE_THIS_OFF.sub(bare_repl, text)
    text = _THIS_SUB.sub(bare_repl, text)
    ctx.lines = text.split("\\n")'''
new = '''    text = _BARE_THIS_OFF.sub(bare_repl, text)
    text = _THIS_SUB.sub(bare_repl, text)

    # R4: bare `*this` (a dword read at offset 0, emitted by IDA when the
    # proto types this as `int *this`) -- `*this` in C++ is the OBJECT, so
    # `(void *)*this` was C2440 (SortedArray::Find family).  Bind offset 0
    # through the same registry/view path.
    def star_this(m):
        rec, src = ctx.reg.member_at(cls, 0, min_span=1)
        if not rec:
            name = "m000"
            ctx.views.add_scalar(cls, 0, "dword", name, "int", 4,
                                 "registry-gap")
            src = "registry-gap"
        else:
            name = rec.get("name") or "m000"
            ctx.views.add_scalar(cls, 0, "dword", name,
                                 spell_type(rec.get("type") or "int"), 4, src)
        ctx.sites.append(Site(
            "member_read", "*this",
            "bare *this -> this->%s (offset 0)" % name, True))
        return "this->" + name

    text = re.sub(r"\\*\\s*this\\b(?!\\s*[\\+\\[])",
                  lambda m: star_this(m), text)
    ctx.lines = text.split("\\n")'''
assert old in s
s = s.replace(old, new)
open(p, 'w', encoding='utf-8', newline='\n').write(s)
print('star-this patch applied')
