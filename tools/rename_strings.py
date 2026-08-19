"""Batch rename aXxx string references based on string content."""
import idautils, ida_name, ida_segment, ida_bytes, re

seg = ida_segment.get_first_seg()
renamed = 0
skipped = 0
errors = []

for ea, name in idautils.Names():
    seg2 = ida_segment.getseg(ea)
    if not seg2 or seg2.type not in (2, 3):
        continue
    
    # Only rename aXxx patterns
    if not (name.startswith('a') and len(name) > 1 and name[1].isupper()):
        continue
    if not name[1:].startswith(('A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z')):
        continue
    
    xrefs = 0
    for _ in idautils.XrefsTo(ea):
        xrefs += 1
    if xrefs < 3:  # user requested >=3 xrefs
        skipped += 1
        continue
    
    # Read string content
    try:
        raw = ida_bytes.get_strlit_contents(ea, -1, 0)
        if not raw:
            continue
        content = raw.decode('utf-8', errors='replace')
    except:
        continue
    
    if len(content) < 2:
        continue
    
    # Skip common patterns that are hard to auto-name
    # Generate name from content
    content_stripped = content.strip()
    
    # Different naming strategies based on content
    new_name = None
    
    # 1. INI key names (single word, CamelCase)
    if re.match(r'^[A-Z][A-Za-z0-9]+$', content_stripped) and len(content_stripped) <= 30:
        new_name = 'g_INI_Key_' + content_stripped
    
    # 2. File names (.ext)
    elif re.search(r'\.[A-Za-z]{2,4}$', content_stripped):
        fn = content_stripped.split('\\')[-1].split('/')[-1]
        fn = re.sub(r'[^A-Za-z0-9_]', '_', fn)
        new_name = 'g_Str_File_' + fn
    
    # 3. GUI:xxx pattern  
    elif content_stripped.startswith('GUI:'):
        tag = content_stripped[4:]
        tag = re.sub(r'[^A-Za-z0-9]', '_', tag)
        new_name = 'g_Str_GUI_' + tag
    
    # 4. Debug/trace patterns with %
    elif '%' in content_stripped:
        s = re.sub(r'[^A-Za-z0-9]', '_', content_stripped[:40])
        new_name = 'g_Str_Trace_' + s
    
    # 5. TXT_xxx pattern (CSF string keys)
    elif content_stripped.startswith('TXT_'):
        new_name = 'g_Str_' + content_stripped
    
    # 6. EVA_xxx pattern
    elif content_stripped.startswith('EVA_'):
        new_name = 'g_Str_' + content_stripped
    
    # 7. MSG:xxx pattern
    elif content_stripped.startswith('MSG:'):
        tag = content_stripped[4:]
        tag = re.sub(r'[^A-Za-z0-9]', '_', tag)
        new_name = 'g_Str_MSG_' + tag
    
    # 8. Generic - use first part
    else:
        s = re.sub(r'[^A-Za-z0-9]', '_', content_stripped[:30])
        if s:
            new_name = 'g_Str_' + s
    
    if new_name and new_name != name:
        try:
            ida_name.set_name(ea, new_name, ida_name.SN_NOWARN)
            renamed += 1
            if renamed % 50 == 0:
                print(f'  Renamed {renamed}...')
        except Exception as e:
            errors.append(f'{name} -> {new_name}: {e}')
            skipped += 1

print(f'\nDone: renamed={renamed}, skipped={skipped}, errors={len(errors)}')
