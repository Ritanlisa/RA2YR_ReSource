import io, re

file = r'D:\RA2YR_ReSource\src\render\surface.cpp'
with io.open(file, 'r', encoding='utf-8') as f:
    c = f.read()

# Change ONLY Fill (0x7bbab0) to Capture, rest to None
addrs = ['0x421b60','0x7bc2b0','0x7baeb0','0x7bae60','0x7baf90','0x7baf10',
         '0x7bab90','0x7ba610','0x7ba5e0','0x7ba8c0','0x7bad90','0x7badc0','0x7bb350']
for a in addrs:
    pat = 'REVERSE(' + a + ', "*", "Capture")'
    rep = 'REVERSE(' + a + ', "*", "None")'
    c = c.replace(pat.replace('*','\\"*\\"').strip('\\'), rep.replace('*','\\"*\\"').strip('\\'))

# Now fill should still be Capture, verify
if 'REVERSE(0x7bbab0' in c:
    idx = c.find('REVERSE(0x7bbab0')
    print(c[idx:idx+80])

with io.open(file, 'w', encoding='utf-8') as f:
    f.write(c)
print('Done')
