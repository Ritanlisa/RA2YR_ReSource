"""Quarantine raw IDA pseudocode embedded in function bodies. (v2)

Historical "pseudo-translations" pasted raw IDA decompiler output inside
C++ function bodies (after a `// [IDA decompile]` marker). The text is not
valid C++ (`#374` types, `__thiscall`, `_DWORD`, `` `vftable' `` etc.), so
every affected TU has never compiled -- masked by the gate false-green.

This tool comments the embedded text out (kept as reference material, the
Task 17/18 stub convention) and inserts a minimal stub return when the
enclosing function body becomes empty.

Boundary detection uses plain brace counting: IDA pseudocode essentially
never places braces inside string literals, while its `` `vftable' `` back-
tick tokens break quote-state machines. The compiler is the final arbiter.

Usage: python tools/quarantine_ida_embeds.py [--apply] [--file PATH]
"""
import argparse
import pathlib
import re
import sys

MARK = '// [IDA decompile]'


def find_embed_end(lines, start):
    """First line index >= start where braces balance to zero after opening."""
    depth = 0
    started = False
    for i in range(start, len(lines)):
        if '{' in lines[i]:
            started = True
        if started:
            depth += lines[i].count('{') - lines[i].count('}')
            if depth <= 0:
                return i, True
    return len(lines) - 1, False


def find_body_open_and_sig(lines, marker_idx):
    """Locate the enclosing function's opening-brace line and signature text.

    Handles both forms:
      RET Name(args)          RET Name(args) {
      {                       // marker
                                // marker
    including single-line `namespace gamemd { RET Name(args) {`.
    Returns (sig_text, body_open_idx) or (None, None).
    """
    i = marker_idx - 1
    while i >= 0 and (lines[i].strip() == '' or lines[i].strip().startswith('//')):
        i -= 1
    if i < 0:
        return None, None
    line = lines[i]
    s = line.strip()
    if s.endswith('{'):
        sig_part = s[:-1].strip()
        if '(' in sig_part and sig_part.endswith(')'):
            # single-line form: `namespace X { RET Name(args) {`
            return sig_part, i
        # bare `{` on its own line; walk up to collect the signature
        j = i - 1
        sig_lines = []
        depth = 0
        while j >= 0:
            t = lines[j].strip()
            if t.startswith('}') or t.endswith(';') or t == '':
                return None, None
            sig_lines.insert(0, t)
            depth += lines[j].count('(') - lines[j].count(')')
            if t.endswith(')') and depth >= 0:
                return ' '.join(sig_lines), i
            j -= 1
        return None, None
    return None, None


def classify_return(sig_text):
    s = sig_text.strip()
    m = re.match(r'^(?:static\s+|virtual\s+|inline\s+|extern\s+)*', s)
    rest = s[m.end():]
    if re.match(r'^void\s', rest) or rest == 'void':
        return 'void'
    if re.match(r'^bool\s', rest):
        return 'bool'
    return 'value'


def find_body_close(lines, body_open):
    """Brace-balanced close line for the body opened at body_open."""
    depth = 0
    started = False
    for i in range(body_open, len(lines)):
        depth += lines[i].count('{') - lines[i].count('}')
        if '{' in lines[i]:
            started = True
        if started and depth <= 0:
            return i
    return None


def body_is_empty(lines, start, end):
    """True if lines[start..end) are only comments (line or block) / blank."""
    in_block = False
    for k in range(start, end):
        s = lines[k].strip()
        if in_block:
            if '*/' in s:
                in_block = False
            continue
        if s == '' or s.startswith('//'):
            continue
        if s.startswith('/*'):
            if '*/' not in s:
                in_block = True
            continue
        if s.startswith('*'):
            continue
        return False
    return True


def process_file(path, apply_changes):
    raw = path.read_bytes().decode('latin-1')
    lines = raw.split('\n')
    out = []
    changed = 0
    stubs_added = 0
    malformed = []
    i = 0
    while i < len(lines):
        line = lines[i]
        out.append(line)
        if line.strip() == MARK:
            end, ok = find_embed_end(lines, i + 1)
            if not ok:
                malformed.append(i + 1)
            for k in range(i + 1, end + 1):
                txt = lines[k]
                out.append('// ' + txt if txt.strip() else '//')
                changed += 1
            sig, body_open = find_body_open_and_sig(lines, i)
            ret_kind = classify_return(sig) if sig else 'unknown'
            body_close = find_body_close(lines, body_open) if body_open is not None else None
            if body_close is not None and body_close > end and body_is_empty(lines, end + 1, body_close):
                if ret_kind == 'bool':
                    out.append('    return false; // TODO stub - translate quarantined IDA block above')
                elif ret_kind == 'value':
                    out.append('    return {}; // TODO stub - translate quarantined IDA block above')
                else:
                    out.append('    // TODO stub - translate quarantined IDA block above')
                stubs_added += 1
            i = end + 1
            continue
        i += 1
    if apply_changes and changed:
        path.write_bytes('\n'.join(out).encode('latin-1'))
    return changed, stubs_added, malformed


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--file', default=None)
    args = ap.parse_args()
    if args.file:
        targets = [pathlib.Path(args.file)]
    else:
        targets = [p for p in pathlib.Path('src').rglob('*.cpp')
                   if MARK in p.read_text(encoding='latin-1')]
    total_changed = total_stubs = total_malformed = 0
    for p in sorted(targets):
        changed, stubs, malformed = process_file(p, args.apply)
        if changed or malformed:
            note = f" MALFORMED at {malformed}" if malformed else ""
            print(f"{p}: commented {changed}, stubs {stubs}{note}")
        total_changed += changed
        total_stubs += stubs
        total_malformed += len(malformed)
    mode = 'APPLIED' if args.apply else 'DRY-RUN'
    print(f"\n[{mode}] total: {total_changed} lines commented, {total_stubs} stubs, {total_malformed} malformed")
    sys.exit(0)


if __name__ == '__main__':
    main()
