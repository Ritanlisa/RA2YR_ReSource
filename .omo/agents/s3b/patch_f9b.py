p = r'D:\RA2YR_ReSource\tools\decomp_sys\decompile.py'
s = open(p, encoding='utf-8').read()
old = '''    passes.pass_compare_harmonize(ctx)'''
assert old in s
new = '''    passes.pass_compare_harmonize(ctx)
    # Stage 3b: bitwise operators on pointer/float operands (C2296) and
    # calls through code-pointer VARIABLES (C2064).
    passes.pass_bitop_harmonize(ctx)
    passes.pass_indirect_var_calls(ctx)'''
s = s.replace(old, new, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('decompile.py ok')
