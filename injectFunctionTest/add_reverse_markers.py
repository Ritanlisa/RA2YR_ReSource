import re, sys

file = sys.argv[1] if len(sys.argv) > 1 else r'D:\RA2YR_ReSource\src\render\surface.cpp'
with open(file, 'r') as f:
    content = f.read()

markers = [
    ('Line 88: // IDA: 0x7BC2B0', '0x7bc2b0', 'ClipLine: Cohen-Sutherland line clip'),
    ('Line 684: // IDA: 0x7BAEB0', '0x7baeb0', 'XSurface::SetPixel: pixel write'),
    ('Line 701: // IDA: 0x7BAE60', '0x7bae60', 'XSurface::GetPixel: pixel read'),
    ('Line 720: // IDA: 0x7BAF90', '0x7baf90', 'XSurface::PutPixel: pixel write + bounds'),
    ('Line 746: // IDA: 0x7BAF10', '0x7baf10', 'XSurface::GetPixelAtCoords: pixel read + bounds'),
    ('Line 776: // IDA: 0x7BAB90', '0x7bab90', 'XSurface::WalkLine: Bresenham walker'),
    ('Line 855: // IDA: 0x7BA610', '0x7ba610', 'XSurface::DrawLineEx: clipped line'),
    ('Line 1024: // IDA: 0x7BA5E0', '0x7ba5e0', 'XSurface::DrawLine: no-clip wrapper'),
    ('Line 1033: // IDA: 0x7BA8C0', '0x7ba8c0', 'XSurface::DrawDashedLine: stipple line'),
    ('Line 1214: // IDA: 0x7BBAB0', '0x7bbab0', 'XSurface::Fill: fill surface'),
    ('Line 1223: // IDA: 0x7BADC0', '0x7badc0', 'XSurface::DrawRectEx: rect outline'),
    ('Line 1242: // IDA: 0x7BAD90', '0x7bad90', 'XSurface::DrawRect: no-clip rect'),
    ('Line 1251: // IDA: 0x7BB350', '0x7bb350', 'XSurface::DrawEllipseOutline: ellipse'),
]

for marker_id, addr, desc in markers:
    idx = content.find(marker_id)
    if idx < 0:
        print('NOT FOUND: %s' % addr)
        continue
    line_start = content.rfind('\n', 0, idx) + 1
    # Check if REVERSE already exists before this line
    chunk = content[max(0, line_start - 200):idx + len(marker_id)]
    if 'REVERSE(' in chunk:
        print('SKIP: %s' % addr)
        continue
    rev = 'REVERSE(%s, "%s", "Capture")\n' % (addr, desc)
    content = content[:line_start] + rev + content[line_start:]
    print('Added: %s' % addr)

with open(file, 'w') as f:
    f.write(content)
print('Done')
