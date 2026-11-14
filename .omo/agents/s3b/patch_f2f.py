p = r'D:\RA2YR_ReSource\tools\decomp_sys\pseudo.py'
s = open(p, encoding='utf-8').read()
old = '''def _asm_line(ln):
    ln = ln.strip()
    if not ln or ln.startswith(";"):
        return ln
    ln = _asm_disp(ln)'''
assert old in s
new = '''# IDA data names embed their own address (`flt_7E1748`, `dword_89A2B0`).
# MASM has no such symbol, so the operand is re-spelled as the absolute
# memory operand the original instruction used: `fcomp ds:[7E1748h]`.
_ASM_DATA = re.compile(
    r"(?<![\\w\\]])(?:(ds|cs|ss|es):)?"
    r"(flt|dbl|dword|word|byte|off|unk|stru|asc|a|loc)_([0-9A-Fa-f]{4,8})\\b")
_ASM_DATA_SIZE = {"flt": "dword ptr", "dbl": "qword ptr",
                  "dword": "dword ptr", "word": "word ptr",
                  "byte": "byte ptr", "off": "dword ptr",
                  "unk": "dword ptr", "stru": "dword ptr",
                  "asc": "byte ptr", "a": "byte ptr", "loc": "dword ptr"}


def _asm_sym(m):
    kind, addr = m.group(2), m.group(3)
    seg = (m.group(1) or "ds") + ":"
    size = _ASM_DATA_SIZE.get(kind, "dword ptr")
    return "%s%s[%sh]" % (size, seg, addr.upper())


def _asm_line(ln):
    ln = ln.strip()
    if not ln or ln.startswith(";"):
        return ln
    ln = _asm_disp(ln)
    ln = _ASM_DATA.sub(_asm_sym, ln)'''
s = s.replace(old, new, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
