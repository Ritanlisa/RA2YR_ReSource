#!/usr/bin/env python3
"""
Extract ALL function declarations from .hpp files.
Output: tools/missing_functions.json (no address annotation)
        tools/matched_functions.json (has address annotation)
Skips: _funcs.hpp, _generated/ directory

Uses brace-depth tracking to skip function bodies (code inside { } after declarations).
"""

import re, json
from pathlib import Path

SRC_DIR = Path(r"D:\RA2YR_ReSource\src")
OUTPUT_DIR = Path(r"D:\RA2YR_ReSource\tools")
SKIP_FILES = {"_funcs.hpp", "menu_globals_gen.cpp"}
SKIP_DIRS = {"_generated", "gen"}

ADDR_RE = re.compile(r'//\s*(?:IDA[\s:]*)?0x[0-9A-Fa-f]{4,}')
CLASS_DETECT = re.compile(r'^\s*(?:class|struct)\s+(\w+)')
OPERATOR_RE = re.compile(r'\boperator\s*([^\s({]+)\s*\(')
DESTRUCTOR_RE = re.compile(r'~\s*(\w+)\s*\(')
METHOD_RE = re.compile(r'([\w:<>,\s*&\[\]]+?)\s+(\w+)\s*\(')

SKIP_START = re.compile(
    r'^\s*(?:#|//|/\*|\*/|template\s*<|namespace\s+\w|using\s+|typedef\s+|'
    r'extern\s+"C"|GAMEMD_USING_|static_assert|case\s|default\s*:|'
    r'friend\s+(?:class|struct)|'
    r'if\s*\(|for\s*\(|while\s*\(|switch\s*\(|catch\s*\(|'
    r'return\s|throw\s|goto\s|delete\s|new\s+|sizeof\s*\(|'
    r'decltype\s*\(|alignof\s*\(|typeid\s*\(|continue\b|break\b|assert\s*\()'
)

ASSIGN_CALL_RE = re.compile(r'[=!<>]=?\s*\w+\s*\(')
LAMBDA_RE = re.compile(r'\[\s*[&\]]?\s*\]\s*\(')


def has_terminator(text):
    clean = re.sub(r'"[^"]*"', '', text)
    clean = re.sub(r'//.*$', '', clean, flags=re.MULTILINE)
    clean = re.sub(r'/\*.*?\*/', '', clean, flags=re.DOTALL)
    return bool(re.search(r'[;{]', clean))


def count_nested(text):
    count, d = 1, 0
    for c in text:
        if c in '<(': d += 1
        elif c in '>)': d -= 1
        elif c == ',' and d == 0: count += 1
    return count


def matching(text, start, op='(', cl=')'):
    d = 0
    for i in range(start, len(text)):
        if text[i] == op: d += 1
        elif text[i] == cl:
            d -= 1
            if d == 0: return i
    return -1


def class_above(lines, idx):
    for j in range(idx - 1, -1, -1):
        m = CLASS_DETECT.search(lines[j])
        if m: return m.group(1)
    return ''


def addr_near(lines, start, end):
    for k in range(start, end + 1):
        if ADDR_RE.search(lines[k]): return True
    return False


def addr_pre(lines, idx):
    for j in range(idx - 1, max(idx - 5, -1), -1):
        l = lines[j].strip()
        if not l: continue
        if l.startswith('//'):
            if ADDR_RE.search(l): return True
            break
        if l and not l.startswith('//'): break
    return False


def classify(clean, cls_name):
    out = {'is_virtual': False, 'is_static': False, 'is_override': False,
           'is_constructor': False, 'is_destructor': False, 'is_operator': False,
           'method_name': '', 'return_type': ''}
    out['is_virtual'] = bool(re.match(r'^\s*virtual\b', clean))
    out['is_static'] = bool(re.match(r'^\s*static\b', clean))
    out['is_override'] = 'override' in clean

    om = OPERATOR_RE.search(clean)
    if om:
        out['is_operator'] = True
        out['method_name'] = f'operator{om.group(1)}'
        pre = clean[:om.start()].strip()
        pre = re.sub(r'^(?:virtual|static|explicit|inline|constexpr|constinit)\s+', '', pre)
        out['return_type'] = pre
        return out
    dm = DESTRUCTOR_RE.search(clean)
    if dm:
        out['is_destructor'] = True
        out['method_name'] = f'~{dm.group(1)}'
        return out
    mm = METHOD_RE.search(clean)
    if mm:
        ret = mm.group(1).strip()
        ret = re.sub(r'^(?:virtual|static|explicit|inline|constexpr|constinit)\s+', '', ret)
        name = mm.group(2)
        out['method_name'] = name
        out['return_type'] = ret
        if cls_name and name == cls_name:
            out['is_constructor'] = True
            out['return_type'] = ''
        return out
    cm = re.match(r'^\s*(?:explicit\s+)?(\w+)\s*\(', clean)
    if cm:
        name = cm.group(1)
        out['method_name'] = name
        if cls_name and name == cls_name:
            out['is_constructor'] = True
        return out
    return None


def parse_file(path):
    results = []
    with open(path, 'r', encoding='utf-8', errors='replace') as f:
        lines = f.read().split('\n')

    rel = str(Path(path).relative_to(SRC_DIR))

    # Scope tracking: list of scope types ('namespace','class','function')
    # We skip scanning inside 'function' scopes
    scopes = []
    brace_depth = 0

    i = 0
    while i < len(lines):
        line = lines[i]
        s = line.strip()

        # Count braces (excluding comments)
        cb = re.sub(r'//.*$', '', s)
        cb = re.sub(r'"[^"]*"', '', cb)
        op = cb.count('{')
        cl = cb.count('}')

        # Detect namespace/class opening (on same line or next)
        ns = re.match(r'^\s*namespace\s+(\w+)\s*\{?\s*$', s)
        cs = CLASS_DETECT.search(s)

        if ns and not s.startswith('//') and ')' not in s:
            if '{' in s:
                brace_depth += 1; scopes.append('namespace')
            i += 1; continue

        if cs and not s.startswith('//') and ')' not in s:
            if '{' in s:
                brace_depth += 1; scopes.append('class')
            i += 1
            if i < len(lines) and lines[i].strip() == '{':
                brace_depth += 1; scopes.append('class')
            continue

        # Standalone braces
        if s == '{':
            brace_depth += 1
            i += 1; continue

        if s in ('}', '};'):
            brace_depth -= 1
            if scopes: scopes.pop()
            i += 1; continue

        # Multi-brace lines (e.g., "} else {")
        if op > 0 and cl > 0:
            net = op - cl
            brace_depth += net
            if net < 0:
                for _ in range(-net):
                    if scopes: scopes.pop()

        # Skip if inside function body
        in_func = scopes and scopes[-1] == 'function'
        if in_func:
            i += 1; continue

        # --- At class/global level ---
        if not s: i += 1; continue
        if SKIP_START.match(s): i += 1; continue
        if ASSIGN_CALL_RE.search(s): i += 1; continue
        if LAMBDA_RE.search(s): i += 1; continue
        if '(' not in s: i += 1; continue

        bp = s[:s.find('(')].strip()
        if re.search(r'[\.\>]\w+$', bp): i += 1; continue

        # Accumulate declaration
        balanced = 0; found_open = False; end = i

        for j in range(i, min(i + 30, len(lines))):
            l = lines[j]
            for ch in l:
                if ch == '(': balanced += 1; found_open = True
                elif ch == ')': balanced -= 1

            if found_open and balanced == 0:
                if has_terminator(l):
                    end = j; break
                if j + 1 < len(lines):
                    nl = lines[j + 1].strip()
                    if nl and not nl.startswith('//'):
                        if re.match(r'^\s*(?:const\b|noexcept|override|final|=|;|\{)', nl):
                            continue
                        if '(' in nl and not nl.startswith('//'):
                            end = j; break
                        if re.match(r'^\s*(?:virtual|static|class|struct|private|public|protected|#)', nl):
                            end = j; break
                        if nl in ('};', '}'): end = j; break
            if balanced < 0: end = j; break

        ft = ' '.join(line.strip() for line in lines[i:end + 1])
        ft = re.sub(r'\s+', ' ', ft).strip()

        if ft.count('(') != ft.count(')'): i += 1; continue
        if not has_terminator(ft): i += 1; continue

        clean = re.sub(r'\s*//.*$', '', ft).strip()

        fw_match = re.match(r'^\s*(\w+)', clean)
        if fw_match:
            fw = fw_match.group(1)
            if fw in ('return', 'if', 'for', 'while', 'switch', 'catch', 'throw',
                       'delete', 'new', 'sizeof', 'static_cast', 'dynamic_cast',
                       'const_cast', 'reinterpret_cast', 'assert', 'goto', 'break',
                       'continue', 'case', 'default'):
                i = end + 1; continue

        cls_name = class_above(lines, i)
        ci = classify(clean, cls_name)
        if not ci or not ci['method_name']: i = end + 1; continue

        pi = clean.find('(')
        cp = matching(clean, pi)
        pc = 0
        if cp > 0:
            ps = clean[pi + 1:cp].strip()
            if ps and ps != 'void': pc = count_nested(ps)

        ha = bool(ADDR_RE.search(ft))
        if not ha: ha = addr_near(lines, i, end) or addr_pre(lines, i)

        results.append({
            'file': rel, 'line': i + 1,
            'class_name': cls_name,
            'method_name': ci['method_name'],
            'full_signature': ft,
            'is_virtual': ci['is_virtual'],
            'is_static': ci['is_static'],
            'is_override': ci['is_override'],
            'is_constructor': ci['is_constructor'],
            'is_destructor': ci['is_destructor'],
            'is_operator': ci['is_operator'],
            'return_type': ci['return_type'],
            'param_count': pc,
            'has_address': ha,
        })

        # If this declaration opens a body, push function scope
        clean_body = re.sub(r'//.*$', '', ft)
        bo = clean_body.count('{')
        bc = clean_body.count('}')
        if bo > bc:
            brace_depth += (bo - bc)
            scopes.append('function')

        i = end + 1

    return results


def main():
    all_funcs = []
    files = list(SRC_DIR.rglob('*.hpp'))
    print(f"Found {len(files)} .hpp files")

    sk = 0
    for fp in sorted(files):
        if fp.name in SKIP_FILES: sk += 1; continue
        if any(d in fp.parts for d in SKIP_DIRS): sk += 1; continue
        try:
            funcs = parse_file(str(fp))
            all_funcs.extend(funcs)
            if funcs: print(f"  {fp.relative_to(SRC_DIR)}: {len(funcs)}")
        except Exception as e:
            print(f"  ERR {fp.relative_to(SRC_DIR)}: {e}")

    missing = [f for f in all_funcs if not f['has_address']]
    matched = [f for f in all_funcs if f['has_address']]
    print(f"\nTotal: {len(all_funcs)} | Missing: {len(missing)} | Matched: {len(matched)}")

    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)
    json.dump(missing, open(OUTPUT_DIR / 'missing_functions.json', 'w', encoding='utf-8'), indent=2, ensure_ascii=False)
    json.dump(matched, open(OUTPUT_DIR / 'matched_functions.json', 'w', encoding='utf-8'), indent=2, ensure_ascii=False)
    print(f"Done: {OUTPUT_DIR}/")


if __name__ == '__main__':
    main()
