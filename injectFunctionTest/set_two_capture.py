import io
f = io.open(r'D:\RA2YR_ReSource\src\render\surface.cpp','r',encoding='utf-8')
c = f.read(); f.close()

# Change ONLY Fill and ClipRectIntersection from None to Capture
# Use a targeted approach: find the lines and replace
lines = c.split('\n')
out = []
for line in lines:
    if 'REVERSE(0x7bbab0' in line:
        line = line.replace('"None"', '"Capture"')
    elif 'REVERSE(0x421b60' in line or 'REVERSE(0x421B60' in line):
        line = line.replace('"None"', '"Capture"')
    # Ensure all others with REVERSE are None
    elif 'REVERSE(0x' in line and '"Capture"' in line:
        line = line.replace('"Capture"', '"None"')
    out.append(line)
c = '\n'.join(out)

f = io.open(r'D:\RA2YR_ReSource\src\render\surface.cpp','w',encoding='utf-8')
f.write(c); f.close()
print('Done')
