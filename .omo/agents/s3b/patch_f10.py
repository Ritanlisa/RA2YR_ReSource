p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
s = open(p, encoding='utf-8').read()
# 1+2: keep the call's opening paren
old = '''        out.append(text[pos:m.start()])
        out.append("((%s)%s)" % (cast, nm))
        pos = m.end()
        n += 1'''
assert old in s
new = '''        out.append(text[pos:m.start()])
        out.append("((%s)%s)" % (cast, nm))
        pos = m.end() - 1          # keep the call's opening paren
        n += 1'''
s = s.replace(old, new, 1)
# 4: allow this_->M as the bitop left operand
old2 = '''_BITOP = re.compile(
    r"(?<![\\w.>*&!~])(?P<a>(?:this->)?[A-Za-z_]\\w*)(?![\\w\\[.]|->)\\s*"
    r"(?P<op>&(?!&)|\\|(?!\\|)|\\^|>>|<<)")'''
assert old2 in s
new2 = '''_BITOP = re.compile(
    r"(?<![\\w.>*&!~])(?P<a>(?:this_?->)?[A-Za-z_]\\w*)(?![\\w\\[.]|->)\\s*"
    r"(?P<op>&(?!&)|\\|(?!\\|)|\\^|>>|<<)")'''
s = s.replace(old2, new2, 1)
old3 = '''        a, op = m.group("a"), m.group("op")
        k, t = _rhs_ptr_head(a, env)
        if k == "ptr":'''
assert old3 in s
new3 = '''        a, op = m.group("a"), m.group("op")
        k, t = _rhs_ptr_head(a, env)
        if k is None and a.startswith("this_->"):
            _mt = env.member(a[len("this_->"):])
            if _mt:
                k = ("ptr" if _is_ptr_spelling(_mt) else
                     "float" if _mt in ("float", "double") else "int")
                t = _mt
        if k == "ptr":'''
s = s.replace(old3, new3, 1)
# 3: keep the comma terminator of a comma-expression element
old4 = '''            if off is None:
                out.append("%s = (%s & ~0x%X) | ((%s) & 0x%X);"
                           % (target, target, mask, expr, mask >> (8 * shift) if shift else mask))'''
assert old4 in s
new4 = '''            _term = "," if raw.rstrip().endswith(",") else ";"
            if off is None:
                out.append("%s = (%s & ~0x%X) | ((%s) & 0x%X)%s"
                           % (target, target, mask, expr,
                              mask >> (8 * shift) if shift else mask, _term))'''
s = s.replace(old4, new4, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
