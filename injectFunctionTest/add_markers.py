# -*- coding: utf-8 -*-
import io

file = r'D:\RA2YR_ReSource\src\render\surface.cpp'
with io.open(file, 'r', encoding='utf-8') as f:
    content = f.read()

markers = [
    ('0x7bc2b0', 'ClipLine: Cohen-Sutherland line clip'),
    ('0x7baeb0', 'XSurface::SetPixel: pixel write'),
    ('0x7bae60', 'XSurface::GetPixel: pixel read'),
    ('0x7baf90', 'XSurface::PutPixel: pixel write + bounds'),
    ('0x7baf10', 'XSurface::GetPixelAtCoords: pixel read + bounds'),
    ('0x7bab90', 'XSurface::WalkLine: Bresenham walker'),
    ('0x7ba610', 'XSurface::DrawLineEx: clipped line'),
    ('0x7ba5e0', 'XSurface::DrawLine: no-clip wrapper'),
    ('0x7ba8c0', 'XSurface::DrawDashedLine: stipple line'),
    ('0x7bbab0', 'XSurface::Fill: fill surface'),
    ('0x7badc0', 'XSurface::DrawRectEx: rect outline'),
    ('0x7bad90', 'XSurface::DrawRect: no-clip rect'),
    ('0x7bb350', 'XSurface::DrawEllipseOutline: ellipse'),
]

for addr, desc in markers:
    search = 'IDA: ' + addr.upper()
    idx = content.find(search)
    if idx < 0:
        print('NOT FOUND: ' + addr)
        continue
    line_start = content.rfind(chr(10), 0, idx) + 1
    rev = 'REVERSE(' + addr + ', "' + desc + '", "Capture")\n'
    content = content[:line_start] + rev + content[line_start:]
    print('Added: ' + addr)

with io.open(file, 'w', encoding='utf-8') as f:
    f.write(content)
print('Done')
