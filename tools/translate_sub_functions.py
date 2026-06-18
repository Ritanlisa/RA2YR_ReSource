#!/usr/bin/env python3
"""
translate_sub_functions.py — Batch translate sub_* IDA decompiled pseudocode to C++20.

Reads tools/sub_decompiles/*.json, strips IDA control characters, translates
pseudocode patterns to valid C++20, and generates faithful .cpp implementations.

Output: src/_translated/ subdirectory (temporary), then merge into src/ by module.

Usage:
  python tools/translate_sub_functions.py --dry-run         # Preview without generating
  python tools/translate_sub_functions.py --batch-size 50   # Process first 50 functions
  python tools/translate_sub_functions.py --addr 0x401190   # Single function test
  python tools/translate_sub_functions.py --all             # Process ALL (DANGER)
"""

import json
import re
import os
import sys
import glob
import argparse
from collections import defaultdict
from pathlib import Path

# ── Configuration ──────────────────────────────────────────────────────────

PROJECT_ROOT = Path(__file__).parent.parent
DECOMPILES_DIR = PROJECT_ROOT / "tools" / "sub_decompiles"
NAMING_JSON = PROJECT_ROOT / "tools" / "sub_naming_proposals.json"
FUNCTIONS_JSON = PROJECT_ROOT / "injectFunctionTest" / "functions.json"
OUTPUT_DIR = PROJECT_ROOT / "src" / "_translated"

# ── Regex patterns ─────────────────────────────────────────────────────────

# IDA internal control characters (U+0001 through U+001F)
STRIP_CTRL_RE = re.compile(r'[\u0001-\u001f]+')
# IDA hex position markers: (00000000XXXXXXXX patterns
STRIP_HEX_MARKER_RE = re.compile(r'\(0{8}[0-9A-Fa-f]{7,8}')
# Collapse multiple whitespace
WS_RE = re.compile(r'\s+')
# Remove trailing spaces before closing braces/semicolons
TRAIL_SPACE_RE = re.compile(r'\s+([;\)\}])')

# ── IDA → C++ type mapping ────────────────────────────────────────────────

TYPE_MAP = {
    '_DWORD': 'uint32_t',
    '_BYTE': 'uint8_t',
    '_WORD': 'uint16_t',
    '_QWORD': 'uint64_t',
    '__int8': 'int8_t',
    '__int16': 'int16_t',
    '__int32': 'int32_t',
    '__int64': 'int64_t',
    'unsigned __int8': 'uint8_t',
    'unsigned __int16': 'uint16_t',
    'unsigned __int32': 'uint32_t',
    'unsigned __int64': 'uint64_t',
    'signed __int8': 'int8_t',
    'signed __int16': 'int16_t',
    'signed __int32': 'int32_t',
    'signed __int64': 'int64_t',
    'BOOL': 'bool',
}

# ── IDA macro → C++ translation ───────────────────────────────────────────

MACRO_TRANSLATIONS = [
    # HIWORD(x) → ((x) >> 16)
    (re.compile(r'\bHIWORD\s*\(\s*'), '((uint32_t)('),
    # LOWORD(x) → ((x) & 0xFFFF)
    (re.compile(r'\bLOWORD\s*\(\s*'), '((uint16_t)('),
    # LOBYTE(x) → ((x) & 0xFF)
    (re.compile(r'\bLOBYTE\s*\(\s*'), '((uint8_t)('),
    # HIBYTE(x) → ((x) >> 8) & 0xFF
    (re.compile(r'\bHIBYTE\s*\(\s*'), '((uint8_t)((('),
    # BYTE1(x) → BYTE1 already covered by HIBYTE pattern
    (re.compile(r'\bBYTE1\s*\(\s*'), '((uint8_t)((('),
    # BYTE2(x) → ((x) >> 16) & 0xFF
    (re.compile(r'\bBYTE2\s*\(\s*'), '((uint8_t)((('),
    # LODWORD(x) → (uint32_t)(x)
    (re.compile(r'\bLODWORD\s*\(\s*'), '((uint32_t)('),
    # HIDWORD(x) → (uint32_t)((x) >> 32)
    (re.compile(r'\bHIDWORD\s*\(\s*'), '((uint32_t)(('),
    # SLODWORD(x) → (int32_t)(x)
    (re.compile(r'\bSLODWORD\s*\(\s*'), '((int32_t)('),
    # SHIDWORD(x) → (int32_t)((x) >> 32)
    (re.compile(r'\bSHIDWORD\s*\(\s*'), '((int32_t)(('),
]

# Post-process closures for macros that need )) after their argument
# HIWORD, LOWORD, LOBYTE, etc. → needs one extra )
SINGLE_CLOSE_MACROS = {'HIWORD', 'LOWORD', 'LOBYTE', 'LODWORD', 'SLODWORD'}
DOUBLE_CLOSE_MACROS = {'HIBYTE', 'BYTE1', 'BYTE2', 'HIDWORD', 'SHIDWORD'}

# ── Module assignment by name pattern ──────────────────────────────────────

MODULE_PATTERNS = [
    (re.compile(r'Audio|Mixer|Buffer|Stream|Channel|Sample|Volume|Voc|WAV|Playback|Sound', re.I), 'misc/audio.cpp'),
    (re.compile(r'Surface|Pixel|Blit|Draw|Render|Palette|DDraw|DirectDraw|Gdi|Stretch', re.I), 'render/surface.cpp'),
    (re.compile(r'BINK|Movie|Video|VQA|Frame(?!Work)', re.I), 'render/movie.cpp'),
    (re.compile(r'SHP|FrameWork|Shape|ZShape', re.I), 'render/shp.cpp'),
    (re.compile(r'Voxel|VXL|HVA', re.I), 'render/voxel.cpp'),
    (re.compile(r'Gadget|Dialog|Button|ListBox|ComboBox|Edit|Slider|Tab|Scroll|Mouse|Key|ToolTip|Sidebar|Command', re.I), 'ui/gadget.cpp'),
    (re.compile(r'Menu|Select|Campaign|Skirmish|Network(?!Class)', re.I), 'ui/menu.cpp'),
    (re.compile(r'Ini|Rules|Rule|Theme|Theater|Side|Country', re.I), 'misc/rules.cpp'),
    (re.compile(r'Map|Cell|Tile|Iso|Terrain|Lathe|Coord|Isometric|Distance', re.I), 'system/map.cpp'),
    (re.compile(r'Scenario|Save|Load|Lighting|Difficulty', re.I), 'system/scenario.cpp'),
    (re.compile(r'House|Player|Ally|Enemy|Neutral', re.I), 'house/house.cpp'),
    (re.compile(r'Infantry|Soldier|Squid|Deploy', re.I), 'structure/infantry.cpp'),
    (re.compile(r'Unit|Tank|Vehicle|Drive|Turret', re.I), 'structure/unit.cpp'),
    (re.compile(r'Building|Factory|Refinery|Power|Construction|Wall', re.I), 'structure/building.cpp'),
    (re.compile(r'Aircraft|Heli|Jet|Plane|Rotor|Fly', re.I), 'structure/aircraft.cpp'),
    (re.compile(r'Bullet|Projectile|Warhead|Damage|Explos', re.I), 'entity/bullet.cpp'),
    (re.compile(r'Anim|Particle|Overlay|Smudge|Spark', re.I), 'entity/anim.cpp'),
    (re.compile(r'Weapon|SuperWeapon|SW_|Ion|Nuke|Weather|Lightning', re.I), 'misc/super.cpp'),
    (re.compile(r'Team|Trigger|Script|Campaign|TaskForce', re.I), 'team/team.cpp'),
    (re.compile(r'Network|Socket|Winsock|Packet|Session|Connect|Send|Recv', re.I), 'network/network.cpp'),
    (re.compile(r'Vtable|Constructor|Destructor|DDTor|CTOR|DTOR', re.I), 'core/vtables.cpp'),
    (re.compile(r'Mix|Blowfish|Crypto|Hash|Decrypt|Encrypt|CRC', re.I), 'system/mix.cpp'),
    (re.compile(r'LinkedList|Vector|Array|List|Node|Queue|Stack|Alloc|Free|Heap|Pool', re.I), 'core/containers.cpp'),
    (re.compile(r'Math|Arith|Compute|Calc|Sqrt|SqDist|Dist|Dot|Cross|Matrix|Sin|Cos|Tan', re.I), 'core/math.cpp'),
    (re.compile(r'File|Load|Save|Read|Write|Open|Close|Seek|IO|Path|Dir', re.I), 'system/file.cpp'),
    (re.compile(r'Timer|Time|Tick|Delay|Sleep|Countdown', re.I), 'core/timer.cpp'),
    (re.compile(r'Random|Rand|Seed', re.I), 'core/random.cpp'),
    (re.compile(r'Locomotor|Movement|Path|Navigate|Speed|Move(?!ment)', re.I), 'misc/locomotor.cpp'),
    (re.compile(r'Super|Weather|Crate|PowerOut|Chrono', re.I), 'misc/super.cpp'),
    (re.compile(r'Radar|SpySat|Shroud|Fog|Reveal', re.I), 'system/radar.cpp'),
    (re.compile(r'String|Wide|Unicode|Char|sprintf|strcpy|strcat|strlen|strcmp', re.I), 'core/string.cpp'),
    (re.compile(r'Factory|Build|Produce|Construct|Purchase', re.I), 'system/factory.cpp'),
    (re.compile(r'Object|Abstract|Techno|Foot|Radio|Mission', re.I), 'object/object.cpp'),
    (re.compile(r'Mult|Float|Double|Fixed|Precision|fld|fild|fstp|fst', re.I), 'core/math.cpp'),
]

def assign_module(name, callers=None):
    """Assign a function to a source module based on name and caller context."""
    # Check name-based patterns
    for pattern, module in MODULE_PATTERNS:
        if pattern.search(name):
            return module
    # Check caller context
    if callers:
        for caller in callers:
            for pattern, module in MODULE_PATTERNS:
                if pattern.search(caller):
                    return module
    # Default fallback
    return 'core/misc_sub.cpp'


# ── Pseudocode cleaning ───────────────────────────────────────────────────

def clean_pseudocode(pseudo):
    """Strip IDA control characters and artifacts from pseudocode."""
    # Strip control characters (U+0001-U+001F)
    text = STRIP_CTRL_RE.sub(' ', pseudo)
    # Strip hex position markers: (00000000XXXXXXXX patterns)
    text = STRIP_HEX_MARKER_RE.sub('', text)
    
    # Remove IDA register annotations: @<eax>, @<esi>, @<ecx> etc.
    text = re.sub(r'@<\w+>', '', text)
    
    # Remove IDA memory access: MEMORY[addr] → *(type*)(addr)
    # This is complex - leave as comment for manual review
    text = re.sub(r'\bMEMORY\[(0x[0-9A-Fa-f]+)\]', r'/* MEMORY[\1] */', text)
    
    # Remove backtick markers (used in IDA for name references)
    text = text.replace('`', '')
    
    # Remove the @ character when used for register references (standalone @ not in strings)
    # @reg patterns → just the reg or remove
    text = re.sub(r'@(\w+)', r'\1', text)
    
    # Collapse multiple spaces and tabs
    text = re.sub(r'[ \t]+', ' ', text)
    # Collapse multiple blank lines
    text = re.sub(r'\n\s*\n\s*\n+', '\n\n', text)
    return text.strip()


def fix_var_declarations(text):
    """Fix IDA's variable declaration syntax: !int v2 !; → int v2;"""
    text = re.sub(r'!\s*(int|bool|float|double|char|unsigned|short|long|void|uint\d+_t|int\d+_t)\s+(\w+)\s*!', r'\1 \2', text)
    text = re.sub(r'!\s*', '', text)
    return text


def fix_quoted_api_calls(text):
    """Fix IDA's quoted import function calls: \"ResetEvent \" → ResetEvent"""
    text = re.sub(r'"(\w+)\s*"', r'\1', text)
    return text


def fix_operator_new_delete(text):
    """Fix IDA's internal names for operator new/delete."""
    # __2_YAPAXI_Z → operator new (unsigned int)  - actually malloc-like
    # __3_YAXPAX_Z → operator delete (void*)      - actually free-like
    text = re.sub(r'\b__2_YAPAXI_Z\b', 'operator_new', text)
    text = re.sub(r'\b__3_YAXPAX_Z\b', 'operator_delete', text)
    return text


def fix_qmemcpy(text):
    """Fix IDA's qmemcpy → memcpy."""
    text = re.sub(r'\bqmemcpy\b', 'memcpy', text)
    return text


def fix_assignment_in_condition(text):
    """IDA sometimes writes 'if ( x = 0 )' when it means comparison.
    This is very context-dependent. We ONLY fix obvious patterns:
    'if ( var = 0 )' where var is a simple lvalue."""
    # Pattern: if (identifier = 0 ) → if (identifier == 0)
    text = re.sub(r'if\s*\(\s*(\w+)\s*=\s*0\s*\)', r'if (\1 == 0)', text)
    # while (identifier = 0 ) → while (identifier == 0)
    text = re.sub(r'while\s*\(\s*(\w+)\s*=\s*0\s*\)', r'while (\1 == 0)', text)
    return text


def fix_windows_types(text):
    """Fix common Windows type issues in IDA output."""
    text = re.sub(r'\bHANDLE\s*\*', 'HANDLE', text)
    text = re.sub(r'\bHWND\s*\*', 'HWND', text)
    text = re.sub(r'\bHMENU\s*\*', 'HMENU', text)
    text = re.sub(r'\bHINSTANCE\s*\*', 'HINSTANCE', text)
    text = re.sub(r'\bHDC\s*\*', 'HDC', text)
    return text


def fix_semicolons_in_for(text):
    return text


def fix_cast_spacing(text):
    """Fix spacing around casts: ( type ) → (type)"""
    # Simple casts without nested parens
    text = re.sub(r'\(\s+(\w+)\s+\)', r'(\1)', text)
    text = re.sub(r'\(\s+(\w+\s*\*)\s+\)', r'(\1)', text)
    return text


def fix_null_macros(text):
    return text


def fix_vtable_calls(text):
    """Fix IDA vtable call syntax: x->lpVtbl->Method → simpler form.
    Actually, we can't easily translate this without knowing the vtable layout.
    Leave as-is for manual review."""
    return text


def fix_function_pointer_casts(text):
    """Fix IDA function pointer cast syntax:
    ( * ( int (**)(void *) ) ( offset ) ) (args) 
    → reinterpret_cast<int(*)(void*)>(offset)(args) or just keep as-is
    For now, leave as-is since these are hard to auto-fix."""
    return text


def fix_array_index_spacing(text):
    """Fix spaces in array indexing: a1 [ 5 ] → a1[5]"""
    text = re.sub(r'(\w+)\s*\[\s*(\d+|\w+)\s*\]', r'\1[\2]', text)
    return text


def fix_esp_annotations(text):
    """Remove IDA stack variable annotations: // [esp+XXh] [ebp-XXh]"""
    text = re.sub(r'//\s*\[esp[^\]]*\]\s*\[ebp[^\]]*\]', '', text)
    return text


def fix_negative_arithmetic(text):
    """Fix IDA's representation of negation: x + 0x3FFFFFFF * y → x - y
    This is a very specific pattern for IDA's handling of signed arithmetic."""
    # 0x3FFFFFFF is IDA's encoding for -1 in some contexts
    # This is subtle and context-dependent; leave for now
    return text


def fix_byref_annotations(text):
    """Remove // BYREF annotations."""
    text = re.sub(r'//\s*BYREF', '', text)
    return text


def fix_comment_markers(text):
    """Fix IDA's comment markers: \x18 → //"""
    text = text.replace('\x18', '// ')
    return text


def translate_types(text):
    """Replace IDA-specific types with C++ types."""
    result = text
    # Longest matches first to avoid partial replacements
    sorted_types = sorted(TYPE_MAP.items(), key=lambda x: len(x[0]), reverse=True)
    for old, new in sorted_types:
        # Use word boundary matching to avoid replacing substrings
        result = re.sub(r'\b' + re.escape(old) + r'\b', new, result)
    # Fix unsigned int without suffix: 'unsigned int' → 'uint32_t'
    # But only standalone, not part of "unsigned int64_t"
    result = re.sub(r'\bunsigned int\b(?!\d)', 'uint32_t', result)
    # Fix "signed int" → "int32_t"
    result = re.sub(r'\bsigned int\b', 'int32_t', result)
    return result


def _find_matching_paren(text, start):
    """Find matching close paren starting from position after '('."""
    depth = 1
    i = start
    while i < len(text) and depth > 0:
        if text[i] == '(':
            depth += 1
        elif text[i] == ')':
            depth -= 1
        i += 1
    if depth == 0:
        return i - 1  # position of matching ')'
    return -1


def _replace_macro(text, macro_name, replacement_fn):
    """Find all occurrences of macro_name(expr) and replace with replacement_fn(expr).
    Handles optional spaces between name and '('."""
    result = []
    i = 0
    nlen = len(macro_name)
    while i < len(text):
        # Check for macro name at this position
        if (text[i:i+nlen].upper() == macro_name.upper() and
            (i == 0 or not text[i-1].isalnum()) and  # word boundary before
            (i + nlen >= len(text) or not text[i+nlen].isalnum())):  # word boundary after
            # Look for '(' with optional spaces
            j = i + nlen
            while j < len(text) and text[j] in ' \t':
                j += 1
            if j < len(text) and text[j] == '(':
                # Find matching ')'
                close_pos = _find_matching_paren(text, j + 1)
                if close_pos >= 0:
                    arg = text[j+1:close_pos]
                    replacement = replacement_fn(arg.strip())
                    result.append(replacement)
                    i = close_pos + 1
                    continue
        result.append(text[i])
        i += 1
    return ''.join(result)


def handle_hiword_loword(text):
    """Handle HIWORD/LOWORD/BYTE macros with proper paren matching."""
    
    def hiword_fn(arg):
        return f'((uint32_t)({arg}) >> 16)'
    
    def loword_fn(arg):
        return f'((uint16_t)({arg}))'
    
    def lobyte_fn(arg):
        return f'((uint8_t)({arg}))'
    
    def hidword_fn(arg):
        return f'((uint32_t)(({arg}) >> 32))'
    
    def lodword_fn(arg):
        return f'((uint32_t)({arg}))'
    
    def byte1_fn(arg):
        return f'(((uint32_t)({arg}) >> 8) & 0xFF)'
    
    def byte2_fn(arg):
        return f'(((uint32_t)({arg}) >> 16) & 0xFF)'
    
    def hibyte_fn(arg):
        return f'(((uint32_t)({arg}) >> 8) & 0xFF)'
    
    # Order matters: longer names first to avoid partial matches
    macros = [
        ('HIDWORD', hidword_fn),
        ('LODWORD', lodword_fn),
        ('HIWORD', hiword_fn),
        ('LOWORD', loword_fn),
        ('HIBYTE', hibyte_fn),
        ('LOBYTE', lobyte_fn),
        ('BYTE2', byte2_fn),
        ('BYTE1', byte1_fn),
        ('SHIDWORD', lambda a: f'((int32_t)(({a}) >> 32))'),
        ('SLODWORD', lambda a: f'((int32_t)({a}))'),
    ]
    
    for macro_name, fn in macros:
        text = _replace_macro(text, macro_name, fn)
    
    return text


def fix_pointer_casts(text):
    """Fix IDA pointer cast syntax: (_DWORD *)(addr + N) → reinterpret_cast<uint32_t*>(addr + N)"""
    # Simple cases: (_DWORD *) → (uint32_t*)
    text = re.sub(r'\(\s*uint32_t\s*\*\s*\)', '(uint32_t*)', text)
    text = re.sub(r'\(\s*uint8_t\s*\*\s*\)', '(uint8_t*)', text)
    text = re.sub(r'\(\s*uint16_t\s*\*\s*\)', '(uint16_t*)', text)
    return text


def fix_void_ptr_math(text):
    """Handle void* arithmetic: (char *)this + offset → Use uintptr_t"""
    # This is mostly handled by keeping the IDA syntax which is valid in MSVC
    return text


def fix_calling_convention(text, cc):
    """Adjust calling convention in function signature."""
    # Remove IDA calling convention annotations if not needed
    # MSVC handles these via function pointer types
    text = re.sub(r'\b__thiscall\s+', '', text)
    text = re.sub(r'\b__fastcall\s+', '', text)
    text = re.sub(r'\b__stdcall\s+', '', text)
    text = re.sub(r'\b__cdecl\s+', '', text)
    text = re.sub(r'\b__usercall\s+', '', text)
    return text


def fix_goto_labels(text):
    """Fix IDA goto labels: LABEL_N → label_N:"""
    text = re.sub(r'\bLABEL_(\d+)', r'label_\1', text)
    return text


def ensure_return(text):
    """Ensure function has a return statement if return type is non-void."""
    # Check if already has 'return'
    if 'return' not in text:
        # Check return type from signature
        sig_match = re.match(r'(int|bool|float|double|char|unsigned|short|long|void|\w+\s*\*)\s+', text.strip())
        if sig_match:
            ret_type = sig_match.group(1).strip()
            if ret_type != 'void':
                # Find last } 
                last_brace = text.rfind('}')
                if last_brace > 0:
                    text = text[:last_brace] + 'return 0;\n' + text[last_brace:]
    return text


# ── Main translation function ──────────────────────────────────────────────

def translate_pseudocode(pseudo, cc='cdecl', func_name=''):
    """Convert IDA pseudocode to valid C++20."""
    # Step 1: Clean control characters
    text = clean_pseudocode(pseudo)
    
    # Step 2: Fix quoted API calls (before other processing)
    text = fix_quoted_api_calls(text)
    
    # Step 3: Fix operator new/delete internal names
    text = fix_operator_new_delete(text)
    
    # Step 4: Fix qmemcpy
    text = fix_qmemcpy(text)
    
    # Step 5: Fix var declarations
    text = fix_var_declarations(text)
    
    # Step 6: Fix assignment-in-condition patterns
    text = fix_assignment_in_condition(text)
    
    # Step 7: Fix comment markers 
    text = fix_comment_markers(text)
    
    # Step 8: Handle HIWORD/LOWORD/BYTE macros (before type translation)
    text = handle_hiword_loword(text)
    
    # Step 9: Translate IDA types
    text = translate_types(text)
    
    # Step 10: Fix pointer casts
    text = fix_pointer_casts(text)
    
    # Step 11: Fix Windows types
    text = fix_windows_types(text)
    
    # Step 12: Remove calling convention annotations
    text = fix_calling_convention(text, cc)
    
    # Step 13: Fix goto labels
    text = fix_goto_labels(text)
    
    # Step 14: Fix array indexing spacing
    text = fix_array_index_spacing(text)
    
    # Step 15: Fix cast spacing
    text = fix_cast_spacing(text)
    
    # Step 16: Remove stack annotations
    text = fix_esp_annotations(text)
    
    # Step 17: Remove BYREF annotations
    text = fix_byref_annotations(text)
    
    # Step 18: Replace sub_XXXXXXXX with proposed name
    if func_name and func_name != '':
        text = re.sub(r'\bsub_[0-9A-Fa-f]+\b', func_name, text, count=1)
    
    # Step 19: Clean up remaining artifacts
    text = re.sub(r'!\s*', '', text)
    text = re.sub(r';\s*;', ';', text)
    text = re.sub(r'\s+;', ';', text)
    text = re.sub(r'//(?![/\s])', '// ', text)
    
    # Step 20: Clean up whitespace
    lines = text.split('\n')
    cleaned = []
    for line in lines:
        line = re.sub(r'[ \t]+', ' ', line).strip()
        if line:
            cleaned.append(line)
    text = '\n'.join(cleaned)
    
    return text.strip()


# ── Function signature extraction ─────────────────────────────────────────

def extract_signature(text):
    """Extract function name, return type, and params from first line."""
    # Pattern: return_type calling_convention func_name(params)
    match = re.match(r'([\w\s*]+?)\s*(__\w+)?\s*(\w+)\s*\(([^)]*)\)', text)
    if match:
        ret_type = match.group(1).strip()
        cc = match.group(2) or ''
        name = match.group(3)
        params = match.group(4)
        return ret_type, cc.strip(), name, params
    return None, None, None, None


# ── Batch processing ──────────────────────────────────────────────────────

def load_naming_proposals():
    """Load naming proposals, keyed by address (with 0x prefix)."""
    with open(NAMING_JSON) as f:
        j = json.load(f)
    return j.get('proposals', {}), j.get('details', {})


def load_functions_json():
    """Load functions.json for size info. Returns dict keyed by '0XADDR' (uppercase)."""
    with open(FUNCTIONS_JSON) as f:
        j = json.load(f)
    # Build lookup by address - normalize to uppercase
    funcs = {}
    for func in j.get('functions', []):
        addr = func.get('address', '')
        if addr:
            funcs[addr.upper()] = func
    return funcs


def get_decompile_files():
    """Get all decompile JSON files, sorted by address."""
    files = []
    for f in glob.glob(str(DECOMPILES_DIR / '[0-9A-Fa-f]*.json')):
        basename = os.path.basename(f).replace('.json', '')
        files.append((basename, f))
    return sorted(files, key=lambda x: x[0])


def process_function(addr_hex, decompile_path, naming, details, funcs_json):
    """Process a single function and return C++ translation."""
    with open(decompile_path) as f:
        j = json.load(f)
    
    pseudo = j.get('pseudocode', '')
    quality = j.get('quality', 'unknown')
    
    if not pseudo or quality == 'failed':
        return None
    
    # Get naming proposal (keys are like '0x401190', details keys same)
    lookup_key = '0x' + addr_hex.upper().lstrip('0')
    # Also try with full leading zeros
    lookup_key_full = '0x' + addr_hex.upper()
    proposal = naming.get(lookup_key, naming.get(lookup_key_full, ''))
    detail = details.get(lookup_key) or details.get(lookup_key_full) or {}
    cc = detail.get('cc', 'cdecl') if isinstance(detail, dict) else 'cdecl'
    
    # Translate
    cpp_code = translate_pseudocode(pseudo, cc, proposal)
    
    if not cpp_code:
        return None
    
    # Get function size from functions.json 
    # Keys are like '0X401190' (uppercase X, no leading zeros after X)
    key = '0X' + addr_hex.upper().lstrip('0')
    func_info = funcs_json.get(key, {})
    size = func_info.get('size', 0)
    
    # Determine module
    module = assign_module(proposal, detail.get('callers', []))
    
    return {
        'addr': addr_hex,
        'name': proposal or j.get('name', f'sub_{addr_hex}'),
        'cc': cc,
        'size': size,
        'module': module,
        'code': cpp_code,
    }


def modules_to_cpp_files(translations, output_base):
    """Write translations to .cpp files, one per module."""
    # Group by module
    modules = defaultdict(list)
    for t in translations:
        modules[t['module']].append(t)
    
    # Include headers for each module
    MODULE_INCLUDES = {
        'core/misc_sub.cpp': ['<cstdint>', '<cmath>'],
        'core/math.cpp': ['<cstdint>', '<cmath>'],
        'core/string.cpp': ['<cstdint>', '<cstring>', '<cwchar>', '<cstdio>'],
        'core/vtables.cpp': ['<cstdint>'],
        'core/random.cpp': ['<cstdint>'],
        'core/containers.cpp': ['<cstdint>'],
        'misc/audio.cpp': ['<cstdint>', '<windows.h>', '<mmsystem.h>'],
        'misc/super.cpp': ['<cstdint>'],
        'misc/rules.cpp': ['<cstdint>'],
        'misc/locomotor.cpp': ['<cstdint>'],
        'render/surface.cpp': ['<cstdint>'],
        'render/movie.cpp': ['<cstdint>', '<windows.h>'],
        'render/shp.cpp': ['<cstdint>'],
        'render/voxel.cpp': ['<cstdint>'],
        'system/map.cpp': ['<cstdint>', '<cmath>'],
        'system/file.cpp': ['<cstdint>', '<cstdio>', '<windows.h>'],
        'system/mix.cpp': ['<cstdint>', '<cstring>'],
        'system/scenario.cpp': ['<cstdint>'],
        'system/factory.cpp': ['<cstdint>'],
        'system/radar.cpp': ['<cstdint>'],
        'network/network.cpp': ['<cstdint>', '<winsock2.h>', '<windows.h>'],
        'ui/gadget.cpp': ['<cstdint>', '<windows.h>'],
        'ui/menu.cpp': ['<cstdint>', '<windows.h>'],
        'structure/infantry.cpp': ['<cstdint>'],
        'structure/unit.cpp': ['<cstdint>'],
        'structure/building.cpp': ['<cstdint>'],
        'structure/aircraft.cpp': ['<cstdint>'],
        'entity/bullet.cpp': ['<cstdint>'],
        'entity/anim.cpp': ['<cstdint>'],
        'house/house.cpp': ['<cstdint>'],
        'team/team.cpp': ['<cstdint>'],
        'object/object.cpp': ['<cstdint>'],
        'core/timer.cpp': ['<cstdint>', '<windows.h>'],
    }
    
    default_includes = ['<cstdint>']
    
    written = []
    for module_path, funcs in sorted(modules.items()):
        out_path = output_base / module_path
        out_path.parent.mkdir(parents=True, exist_ok=True)
        
        includes = MODULE_INCLUDES.get(module_path, default_includes)
        
        lines = []
        lines.append('// Auto-translated from IDA decompiled pseudocode')
        lines.append('// Generated by tools/translate_sub_functions.py')
        lines.append('')
        for inc in includes:
            lines.append(f'#include {inc}')
        lines.append('')
        lines.append('namespace gamemd {')
        lines.append('')
        
        for func in sorted(funcs, key=lambda x: x['name']):
            name = func['name']
            code = func['code']
            addr = func['addr']
            lines.append(f'// 0x{addr} ({func["size"]} bytes)')
            lines.append(code)
            lines.append('')
        
        lines.append('} // namespace gamemd')
        
        with open(out_path, 'w', encoding='utf-8') as f:
            f.write('\n'.join(lines))
        
        written.append(str(out_path.relative_to(PROJECT_ROOT)) if str(out_path).startswith(str(PROJECT_ROOT)) else str(out_path))
    
    return written


# ── Main ───────────────────────────────────────────────────────────────────

def main():
    parser = argparse.ArgumentParser(description='Translate sub_* IDA pseudocode to C++20')
    parser.add_argument('--dry-run', action='store_true', help='Preview without writing files')
    parser.add_argument('--batch-size', type=int, default=0, help='Process first N functions')
    parser.add_argument('--addr', type=str, help='Process single function by address')
    parser.add_argument('--all', action='store_true', help='Process ALL functions (DANGER)')
    parser.add_argument('--min-size', type=int, default=50, help='Minimum function size (bytes)')
    parser.add_argument('--max-size', type=int, default=500, help='Maximum function size (bytes)')
    parser.add_argument('--output-dir', type=str, default=str(OUTPUT_DIR), help='Output directory')
    args = parser.parse_args()
    
    # Load data
    print("Loading naming proposals...")
    naming, details = load_naming_proposals()
    print(f"  {len(naming)} proposals loaded")
    
    print("Loading functions.json...")
    funcs_json = load_functions_json()
    print(f"  {len(funcs_json)} functions loaded")
    
    print("Scanning decompile files...")
    all_files = get_decompile_files()
    print(f"  {len(all_files)} decompile files found")
    
    # Filter by size
    targets = []
    for addr_hex, path in all_files:
        key = '0X' + addr_hex.upper().lstrip('0')
        func_info = funcs_json.get(key, {})
        size = func_info.get('size', 0)
        if args.min_size <= size <= args.max_size:
            targets.append((addr_hex, path, size))
    
    print(f"  {len(targets)} targets in size range [{args.min_size}, {args.max_size}]")
    
    # Sort by size descending (largest first - highest value)
    targets.sort(key=lambda x: x[2], reverse=True)
    
    # Apply batch size
    if args.batch_size > 0:
        targets = targets[:args.batch_size]
        print(f"  Processing first {len(targets)} (batch size {args.batch_size})")
    elif args.addr:
        targets = [(args.addr, str(DECOMPILES_DIR / f'{args.addr}.json'), 0)]
        print(f"  Processing single function: 0x{args.addr}")
    elif not args.all:
        print("  ERROR: Must specify --batch-size, --addr, or --all")
        sys.exit(1)
    
    # Process
    translations = []
    errors = []
    for i, (addr_hex, path, size) in enumerate(targets):
        if (i + 1) % 100 == 0:
            print(f"  Processing... {i+1}/{len(targets)}")
        try:
            result = process_function(addr_hex, path, naming, details, funcs_json)
            if result:
                translations.append(result)
            else:
                errors.append(f"0x{addr_hex}: no pseudocode or failed quality")
        except Exception as e:
            errors.append(f"0x{addr_hex}: {e}")
    
    print(f"\nResults: {len(translations)} translated, {len(errors)} errors")
    
    if errors[:10]:
        print("First errors:")
        for e in errors[:10]:
            print(f"  {e}")
    
    if not translations:
        return
    
    # Show module distribution
    module_counts = defaultdict(int)
    for t in translations:
        module_counts[t['module']] += 1
    print("\nModule distribution:")
    for mod, count in sorted(module_counts.items(), key=lambda x: x[1], reverse=True):
        print(f"  {mod}: {count}")
    
    if args.dry_run:
        # Print first 3 translations
        for t in translations[:3]:
            print(f"\n--- 0x{t['addr']} ({t['name']}) [{t['size']}B] → {t['module']} ---")
            print(t['code'][:500])
        return
    
    # Write output
    output_base = Path(args.output_dir).resolve()
    written = modules_to_cpp_files(translations, output_base)
    print(f"\nWritten {len(written)} module files:")
    for w in written:
        print(f"  {w}")


if __name__ == '__main__':
    main()
