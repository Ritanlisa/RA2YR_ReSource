p = 'tools/decomp_sys/batch_run.py'
s = open(p, encoding='utf-8').read()
old = 'r"\\(\\s*([A-Z]\\w+)\\s*\\*"'
new = 'r"\\b([A-Z]\\w+)\\s*\\*"'
n = s.count(old)
s = s.replace(old, new)
open(p, 'w', encoding='utf-8', newline='\n').write(s)
print('batch_run fwd regex widened:', n)
