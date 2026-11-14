import re
p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
src = open(p, encoding='utf-8').read()
old = '''_CMP_SIMPLE = re.compile(
    r"(?<![\\w.>])(?P<a>(?:this->)?[A-Za-z_]\\w*)(?![\\w\\[])\\s*"
    r"(?P<op>==|!=|<=|>=|<|>)\\s*"
    r"(?P<b>(?:this->)?[A-Za-z_]\\w*)(?![\\w(\\[])")'''
assert old in src, "anchor not found"
new = '''# Stage 3b: operand BOUNDARIES.  The 3a pattern accepted a bare ident that
# was only PART of the operand:
#   `*v15 <= v12`      -> a="v15" (the `*` stayed)  -> `*((unsigned int)(v15))` C2100
#   `p0 >= this->m[1]` -> b="this" (the `->m[1]` stayed) -> `((unsigned int)(this))->m[1]` C2227
# A compare operand must be the WHOLE expression, so `*`/`&`/`!`/`~` prefixes
# and `->`/`.`/`[` suffixes disqualify the site (they are handled by
# _CMP_EXTB below, which only ever re-spells the simple side).
_CMP_SIMPLE = re.compile(
    r"(?<![\\w.>*&!~])(?P<a>(?:this->)?[A-Za-z_]\\w*)(?![\\w\\[.]|->)\\s*"
    r"(?P<op>==|!=|<=|>=|<|>)\\s*"
    r"(?<![\\w.>*&!~])(?P<b>(?:this->)?[A-Za-z_]\\w*)(?![\\w(\\[.]|->)")
# simple `a` vs an EXTENDED `b` (member chain / subscript): re-spell `a` when
# it is the pointer side and `b` is not.  Rewriting `b` would put the cast
# inside a member chain (`(cast)(x)->m`), which is C2227.
_CMP_EXTB = re.compile(
    r"(?<![\\w.>*&!~])(?P<a>(?:this->)?[A-Za-z_]\\w*)(?![\\w\\[.]|->)\\s*"
    r"(?P<op>==|!=|<=|>=|<|>)\\s*"
    r"(?P<b>(?:this->)?[A-Za-z_]\\w*"
    r"(?:\\s*(?:->|\\.)\\s*[A-Za-z_]\\w*|\\s*\\[[^\\[\\]]*\\])+)")'''
src = src.replace(old, new, 1)

old2 = '''    out = _CMP_SIMPLE.sub(sub_simple, text)
    out = _CMP_CASTSUB.sub(sub_castsub, out)'''
assert old2 in src
new2 = '''    def sub_extb(m):
        nonlocal n
        a, op, b = m.group("a"), m.group("op"), m.group("b")
        ka, ta = _rhs_ptr_head(a, env)
        kb, tb = _rhs_ptr_head(b, env)
        if ka != "ptr" or kb == "ptr":
            return m.group(0)
        n += 1
        ctx.sites.append(Site(
            "compare", "%s %s %s" % (a, op, b),
            "pointer/int compare with an extended RHS -> simple pointer "
            "side re-spelled `(unsigned int)` (C2446/C2227)", True))
        return "((unsigned int)(%s)) %s %s" % (a, op, b)

    out = _CMP_SIMPLE.sub(sub_simple, text)
    out = _CMP_CASTSUB.sub(sub_castsub, out)
    out = _CMP_EXTB.sub(sub_extb, out)'''
src = src.replace(old2, new2, 1)
open(p, 'w', encoding='utf-8', newline='').write(src)
print('patched')
