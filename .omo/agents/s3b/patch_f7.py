p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
s = open(p, encoding='utf-8').read()
old = '''_MEMBER_PUN_CAST = re.compile(
    r"\\(\\s*(?:[A-Za-z_]\\w*\\s+)*[A-Za-z_]\\w*\\s*\\*+\\s*\\)\\s*"
    r"&\\s*this->(?P<mem>[A-Za-z_]\\w*)")
_MEMBER_PUN_PAREN = re.compile(
    r"\\(\\s*&\\s*this->(?P<mem>[A-Za-z_]\\w*)\\s*\\)")'''
assert old in s
new = '''_MEMBER_PUN_CAST = re.compile(
    r"(?P<cast>\\(\\s*(?:[A-Za-z_]\\w*\\s+)*[A-Za-z_]\\w*\\s*\\*+\\s*\\))\\s*"
    r"&\\s*this->(?P<mem>[A-Za-z_]\\w*)(?P<sub>(?:\\s*\\[[^\\[\\]]*\\])*)")
_MEMBER_PUN_PAREN = re.compile(
    r"\\(\\s*&\\s*this->(?P<mem>[A-Za-z_]\\w*)\\s*\\)")'''
s = s.replace(old, new, 1)

old2 = '''            return ("(this->%s)" % name) if wrap else ("this->" + name)'''
assert old2 in s
new2 = '''            # Stage 3b: the pun IS a typed address expression.  Replacing
            # it with the bare char-array view dropped the cast, so
            # `*(_WORD *)&this->M[i]` became `*this->m6E8[i]` -- a deref of
            # a char element (C2100, 40 bodies).  Keep the cast and wrap
            # the address in its own paren group: `(T *)(&(this->mNNN[i]))`
            # -- same value/type, and the checker's R3 member-pun pattern
            # (`(T*)&this->`) does not see a pun because of the `&(`.
            sub = m.groupdict().get("sub") or ""
            cast = m.groupdict().get("cast") or ""
            if cast:
                return "%s(&(this->%s%s))" % (cast, name, sub)
            return ("(&(this->%s))" % name) if wrap else ("this->" + name)'''
s = s.replace(old2, new2, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
