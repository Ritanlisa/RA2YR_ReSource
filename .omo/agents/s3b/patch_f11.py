p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
s = open(p, encoding='utf-8').read()
old = '''    t = (ty or "").strip()
    # CW2: IDA register annotations (`double@<st0>`, `char@<cf>`) are not
    # C++ and poison every declaration they touch (C2018 '0x40').
    t = re.sub(r"@<[^>]*>", "", t).strip()'''
assert old in s
new = '''    t = (ty or "").strip()
    # CW2: IDA register annotations (`double@<st0>`, `char@<cf>`) are not
    # C++ and poison every declaration they touch (C2018 '0x40').
    t = re.sub(r"@<[^>]*>", "", t).strip()
    # Stage 3b: IDA local-type references (`#374 *`, `#12`) are not type
    # names -- `#` is a preprocessor token in C++ (C2019).  They are the
    # export's own type-table ids; the 4-byte scalar slot is the ABI truth.
    if re.search(r"#\\d+", t):
        t = re.sub(r"#\\d+\\s*\\*", "void *", t)
        t = re.sub(r"#\\d+", "int", t).strip()'''
s = s.replace(old, new, 1)

# void-call retype: also bare callee names (no ->/. before the name)
old2 = '''            pat = re.compile(
                r"\\(\\s*(?:%s)\\s*\\)\\s*\\(\\s*[^;]*?(?:->|\\.)\\s*%s\\s*\\("
                % ("|".join(re.escape(t) for t in _VALUE_CASTS),
                   re.escape(meth)))'''
assert old2 in s
new2 = '''            pat = re.compile(
                r"\\(\\s*(?:%s)\\s*\\)\\s*\\(\\s*[^;]*?(?:(?:->|\\.)\\s*)?%s\\s*\\("
                % ("|".join(re.escape(t) for t in _VALUE_CASTS),
                   re.escape(meth)))'''
s = s.replace(old2, new2, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
