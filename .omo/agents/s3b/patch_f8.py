p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
s = open(p, encoding='utf-8').read()
old = '''        macro, target, expr = m.group("macro"), m.group("target"), \\
            m.group("expr").strip()'''
assert old in s
new = '''        macro, target, expr = m.group("macro"), m.group("target"), \\
            m.group("expr").strip()
        # Stage 3b: the statement splitter breaks IDA's comma expressions
        # across lines, so a trailing `,` is a SEPARATOR, not part of the
        # RHS -- keeping it emitted `((*v6 / 256,) & 0xFF)` (C2059 ')').
        expr = expr.rstrip(",").strip()'''
s = s.replace(old, new, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('comma fixed')
