p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
s = open(p, encoding='utf-8').read()
old = '''            if pat.search(text):
                cs["ret"] = "int"
                n += 1
    if n:'''
assert old in s
new = '''            if pat.search(text):
                cs["ret"] = "int"
                n += 1
    # Stage 3b: the same evidence for FREE callees (their prototype lives in
    # used_callee_exts, not used_callees): `return (int)(sub_X());` with an
    # `extern void sub_X()` declaration is C2440 void->int.
    _casts = "|".join(re.escape(t) for t in _VALUE_CASTS)
    _exts = getattr(ctx, "used_callee_exts", None) or []
    for _i, _d in enumerate(_exts):
        _m = re.match(
            r"extern\\s+void\\s+(?:(?:__cdecl|__stdcall|__fastcall)\\s+)?"
            r"([A-Za-z_]\\w*)\\s*\\(", _d)
        if not _m:
            continue
        _nm = re.escape(_m.group(1))
        if re.search(r"\\(\\s*(?:%s)\\s*\\)\\s*\\(?\\s*%s\\s*\\("
                     % (_casts, _nm), text):
            _exts[_i] = _d.replace("extern void", "extern int", 1)
            n += 1
    if n:'''
s = s.replace(old, new, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
