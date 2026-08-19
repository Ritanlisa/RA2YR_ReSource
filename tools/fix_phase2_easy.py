import os, re
from pathlib import Path

ROOT = Path('D:/RA2YR_ReSource')

count = 0
for dirpath, dirnames, filenames in os.walk(ROOT / 'src'):
    for fn in filenames:
        if not fn.endswith('.hpp') and not fn.endswith('.cpp'):
            continue
        fpath = Path(dirpath) / fn
        content = fpath.read_text(encoding='utf-8', errors='replace')
        if 'FindOrAllocate' not in content:
            continue
        new_content = content.replace('FindOrAllocate', 'FindOrCreate')
        fpath.write_text(new_content, encoding='utf-8')
        rel = fpath.relative_to(ROOT)
        print(f'  {rel}: FindOrAllocate -> FindOrCreate')
        count += 1

print(f'\nTotal files changed: {count}')

# Also fix Construct -> Constructor where appropriate
# Check PageUserCommandClass
fpath = ROOT / 'src' / 'ui' / 'command_class.hpp'
if fpath.exists():
    content = fpath.read_text(encoding='utf-8', errors='replace')
    if 'Construct()' in content:
        new_content = content.replace('Construct()', 'Constructor()')
        fpath.write_text(new_content, encoding='utf-8')
        print('  command_class.hpp: Construct -> Constructor')

print('\nDone!')
