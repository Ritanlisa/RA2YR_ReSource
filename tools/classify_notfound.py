#!/usr/bin/env python3
"""
Classify all NOT_FOUND annotations in src/**/*.hpp into descriptive categories.

Categories:
  wrapper_delegation  - hpp name differs from IDA function at that address
  defaulted_dtor      - virtual ~Foo() = default, no binary equivalent
  virtual_func        - pure virtual (=0), no binary implementation
  constexpr_only      - constexpr, compile-time only
  inline_accessor     - inline body at declaration site
  stub_not_implemented- stub/TODO-marked
  data_section        - address falls in .data range
  unclassified        - none of the above
"""

import re
import json
import sys
from pathlib import Path
from collections import Counter

SRC = Path("D:/RA2YR_ReSource/src")
FUNCTIONS_JSON = Path("D:/RA2YR_ReSource/injectFunctionTest/functions.json")
IDA_ADDR_INDEX = Path("D:/RA2YR_ReSource/.omo/ida_addr_index.json")
IDA_FULL_INDEX = Path("D:/RA2YR_ReSource/.omo/ida_full_index.json")
OUT = Path("D:/RA2YR_ReSource/.omo/notfound_map.json")

DATA_START = 0x812000
DATA_END = 0xB7A000


def load_addr_to_name():
    """Build address -> IDA name map from both indexes."""
    m = {}
    with open(FUNCTIONS_JSON, 'r', encoding='utf-8') as f:
        fj = json.load(f)
    for func in fj.get('functions', []):
        a = func.get('address', '')
        n = func.get('name', '')
        if a and n:
            ak = f"0x{int(a, 16):X}"
            if ak not in m:
                m[ak] = n
    with open(IDA_ADDR_INDEX, 'r', encoding='utf-8') as f:
        ai = json.load(f)
    for a, info in ai.items():
        ak = f"0x{int(a, 16):X}"
        if ak not in m:
            m[ak] = info.get('name', '')
    return m


def load_name_to_addr():
    """Build IDA name -> address map."""
    m = {}
    with open(IDA_FULL_INDEX, 'r', encoding='utf-8') as f:
        idx = json.load(f)
    for name, addr in idx.items():
        m[name] = f"0x{int(addr, 16):X}"
    return m


def read_lines(path):
    with open(path, 'r', encoding='utf-8', errors='replace') as f:
        return [l.rstrip('\n').rstrip('\r') for l in f.readlines()]


def extract_addr(lines_before, cur):
    """Extract function address from context (skip 'area' markers)."""
    addr_re = re.compile(r'//\s*(?:IDA\s+)?(0x[0-9A-Fa-f]{5,8})(?!\s+area\b)')
    m = addr_re.search(cur)
    if m:
        raw = m.group(1)
        return f"0x{int(raw, 16):X}", raw
    for pl in reversed(lines_before):
        m = addr_re.search(pl)
        if m:
            raw = m.group(1)
            return f"0x{int(raw, 16):X}", raw
    return None, None


def extract_func_name(lines_before, cur):
    """Extract function name from declaration."""
    clean = cur.split('//')[0].strip()
    m = re.search(r'(?:[\w:*&<>\s]+)\s+([~\w]+::[~\w]+)\s*\(', clean)
    if m:
        return m.group(1)
    m = re.search(r'(?:[\w:*&<>\s]+)\s+([~\w]+)\s*\(', clean)
    if m:
        return m.group(1)
    for pl in reversed(lines_before):
        pc = pl.split('//')[0].strip()
        m = re.search(r'(?:[\w:*&<>\s]+)\s+([~\w]+::[~\w]+)\s*\(', pc)
        if m:
            return m.group(1)
        m = re.search(r'(?:[\w:*&<>\s]+)\s+([~\w]+)\s*\(', pc)
        if m:
            return m.group(1)
    return "unknown"


def get_enclosing_class(all_lines, target):
    """Find enclosing class/struct name."""
    for i in range(target - 1, -1, -1):
        m = re.search(r'(?:class|struct)\s+(\w+)\s*(?::|{|$)', all_lines[i].strip())
        if m:
            return m.group(1)
    return None


def norm(name):
    """Normalize function name for comparison."""
    n = name.lstrip('~')
    if '::' in n:
        n = n.rsplit('::', 1)[-1]
    return n.strip('_').lower()


def classify(lns, i, rel, a2n, n2a):
    """Classify one NOT_FOUND annotation. Returns (category, replacement)."""
    cur = lns[i]
    prev = lns[max(0,i-5):i]
    addr, _ = extract_addr(prev, cur)
    fname = extract_func_name(prev, cur)
    eclass = get_enclosing_class(lns, i)
    
    ida_at_addr = a2n.get(addr) if addr else None
    
    # Build text contexts
    texts = [cur] + list(prev)
    all_text_full = ' '.join(texts)  # includes comments (for stub detection)
    
    # For pattern matching, use only the current line + immediate previous line
    # (if it's a multi-line declaration continuation — no trailing `;{`)
    cur_code = cur.split('//')[0].strip()
    prev_code = ''
    if prev:
        prev_last = prev[-1].split('//')[0].strip()
        if prev_last and not prev_last.endswith(';') and not prev_last.endswith('{') and not prev_last.endswith('}'):
            prev_code = prev_last
    decl_code = (prev_code + ' ' + cur_code).strip()
    
    # 1. constexpr — only in current declaration
    if re.search(r'\bconstexpr\b', cur_code):
        return "constexpr_only", "// design: constexpr operator, compile-time only"
    
    # 2. defaulted destructor
    if re.search(r'~\w+\s*\(\s*\)\s*=\s*default', decl_code):
        return "defaulted_dtor", "// design: defaulted virtual destructor, no binary equivalent"
    
    # 3. pure virtual
    if re.search(r'\)\s*=\s*0\s*;', decl_code):
        return "virtual_func", "// design: pure virtual function, no binary implementation"
    
    # 4. stub (check full text including comments)
    if re.search(r'\b(stub|TODO|FIXME|not yet implemented)\b', all_text_full, re.IGNORECASE):
        return "stub_not_implemented", "// stub: not yet implemented from IDA"
    
    # 5. data section
    if addr:
        try:
            ai = int(addr, 16)
            if DATA_START <= ai <= DATA_END:
                return "data_section", f"// data: {addr}"
        except:
            pass
    
    # 6. inline body (handles `) {`, `) const {`, `) noexcept {`, etc.)
    cur_clean = cur.split('//')[0].strip()
    if re.search(r'\)[^{]*\{', cur_clean) and ('return' in cur_clean or '}' in cur_clean):
        return "inline_accessor", "// design: inline accessor, inlined at all call sites"
    
    # 7. wrapper_delegation: address + different IDA name
    if ida_at_addr and fname != "unknown":
        if norm(fname) != norm(ida_at_addr):
            return "wrapper_delegation", f"// wrapper: delegates to {ida_at_addr} at {addr}"
    
    # 8. Has address + matching name -> virtual matched by name
    if ida_at_addr and fname != "unknown":
        if norm(fname) == norm(ida_at_addr):
            if re.search(r'\bvirtual\b', decl_code):
                return "virtual_func", "// design: virtual function, matched by name but no standalone implementation"
            return "unclassified", "// design: matched by name to IDA but marked NOT_FOUND"
    
    # 9. Virtual without address match
    if re.search(r'\bvirtual\b', decl_code):
        return "virtual_func", "// design: virtual function, no binary implementation matched in IDA"
    
    # 10. static without address
    if re.search(r'\bstatic\b', decl_code):
        return "wrapper_delegation", "// design: static function, no direct binary match in IDA"
    
    # 11. fallback
    return "unclassified", "// design: no binary equivalent found in IDA"


def main():
    print("Loading indexes...")
    a2n = load_addr_to_name()
    n2a = load_name_to_addr()
    print(f"  {len(a2n)} address->name, {len(n2a)} name->address mappings")
    
    nf_re = re.compile(r"//\s*IDA:\s*NOT_FOUND\b")
    results = {}
    stats = Counter()
    
    hpp_files = sorted(SRC.rglob("*.hpp"))
    for hp in hpp_files:
        rel = str(hp.relative_to(SRC))
        lns = read_lines(hp)
        for i, line in enumerate(lns):
            if not nf_re.search(line):
                continue
            cat, new = classify(lns, i, rel, a2n, n2a)
            key = f"src/{rel}:{i+1}"
            results[key] = {"old": "// IDA: NOT_FOUND", "new": new, "category": cat}
            stats[cat] += 1
    
    print(f"\nScanned {len(hpp_files)} files, found {len(results)} NOT_FOUND annotations\n")
    print(f"{'Category':30s} {'Count':>6} {'%':>7}")
    print("-" * 45)
    for cat, cnt in stats.most_common():
        print(f"  {cat:28s} {cnt:>6} {cnt/len(results)*100:>6.1f}%")
    
    OUT.parent.mkdir(parents=True, exist_ok=True)
    with open(OUT, "w", encoding="utf-8") as f:
        json.dump(results, f, indent=2, ensure_ascii=False)
    print(f"\n[OK] {OUT}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
