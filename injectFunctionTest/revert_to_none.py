import io
file = r'D:\RA2YR_ReSource\src\render\surface.cpp'
with io.open(file, 'r', encoding='utf-8') as f:
    c = f.read()
c = c.replace('"Capture"', '"None"')
with io.open(file, 'w', encoding='utf-8') as f:
    f.write(c)
print('Done')
