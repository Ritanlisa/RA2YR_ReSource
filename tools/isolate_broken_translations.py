"""Isolate legacy pseudo-translated functions that reference fictional APIs.

building.cpp / unit.cpp contain pre-existing "translations" written against
APIs that never existed (unmapped globals, wrong signatures, cross-namespace
types). They never compiled (gate false-green). This tool rewrites those
specific functions (identified by current compiler error lines) into explicit
stubs with their original body preserved as comments — same honesty policy as
the IDA-embed quarantine. Real translation happens in the C-line pipeline.
"""
import re
import sys

def load_errors(logfile, target):
    lines = set()
    pat = re.compile(re.escape(target) + r'\((\d+),')
    for ln in open(logfile, encoding='utf-8', errors='replace'):
        if 'error C' not in ln:
            continue
        m = pat.search(ln)
        if m:
            lines.add(int(m.group(1)))
    return sorted(lines)


def find_function(lines, err_line):
    """Walk up from err_line to the enclosing function signature; return
    (sig_start_idx, body_open_idx, body_close_idx, sig_text) or None."""
    i = err_line - 1
    while i >= 0:
        s = lines[i].strip()
        if s == '{' or (s.endswith('{') and '(' in s):
            break
        i -= 1
    else:
        return None
    if i < 0:
        return None
    body_open = i
    # collect signature lines upward
    parts = []
    j = i - 1
    while j >= 0:
        t = lines[j].strip()
        if t.startswith('}') or t == '' or t.startswith('//') or t.startswith('#'):
            break
        parts.insert(0, t)
        if t.endswith(')') or re.search(r'\)\s*(const|noexcept|override)?$', t):
            if '(' in t or parts[:-1]:
                break
        j -= 1
    sig = ' '.join(parts)
    # must look like a function *definition*: qualified name, not control flow
    if '(' not in sig or '::' not in sig:
        return None
    first = sig.split('(')[0].strip()
    name_m = re.search(r'([\w:~]+)$', first)
    if not name_m or '::' not in name_m.group(1):
        return None
    # reject statements misread as signatures
    if re.match(r'^(if|for|while|switch|return|else)\b', sig):
        return None
    # body close: brace balance from body_open
    depth = 0
    started = False
    k = body_open
    while k < len(lines):
        depth += lines[k].count('{') - lines[k].count('}')
        if '{' in lines[k]:
            started = True
        if started and depth <= 0:
            return (j, body_open, k, sig)
        k += 1
    return None


def classify(sig):
    head = sig.split('(')[0].strip()
    m = re.search(r'([\w:~]+)\s*$', head)
    if m:
        before = head[:m.start()].strip()
        if before.endswith('void'):
            return 'void'
        if before.endswith('bool'):
            return 'bool'
    return 'value'


def isolate(path, logfile):
    err_lines = load_errors(logfile, path.replace('/', '\\'))
    if not err_lines:
        return 0
    text = open(path, encoding='latin-1').read()
    lines = text.split('\n')
    funcs = []
    seen = set()
    for el in err_lines:
        f = find_function(lines, el)
        if f and f[1] not in seen:
            funcs.append(f)
            seen.add(f[1])
    # apply bottom-up
    funcs.sort(key=lambda x: -x[1])
    for sig_start, body_open, body_close, sig in funcs:
        kind = classify(sig)
        new_body = ['{']
        new_body.append('    // quarantined legacy pseudo-translation (never compiled;')
        new_body.append('    // referenced fictional/unmapped APIs). Original body kept below.')
        for k in range(body_open + 1, body_close):
            txt = lines[k]
            new_body.append('    // ' + txt if txt.strip() else '    //')
        if kind == 'bool':
            new_body.append('    return false; // TODO stub - retranslate via C-line pipeline')
        elif kind == 'value':
            new_body.append('    return {}; // TODO stub - retranslate via C-line pipeline')
        else:
            new_body.append('    // TODO stub - retranslate via C-line pipeline')
        new_body.append('}')
        lines[body_open:body_close + 1] = new_body
        print(f"  isolated: {sig[:70]}")
    open(path, 'w', encoding='latin-1', newline='').write('\n'.join(lines))
    return len(funcs)


if __name__ == '__main__':
    total = 0
    for target in sys.argv[1:]:
        n = isolate(target, '.omo/build6.log')
        print(f"{target}: {n} functions isolated")
        total += n
    print(f"total: {total}")
