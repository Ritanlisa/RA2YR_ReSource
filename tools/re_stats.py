"""Generate RE statistics. Only count functions we might actually reverse-engineer."""
import idc, idaapi, ida_xref, json

def count_xrefs(ea):
    cnt = 0
    xb = ida_xref.xrefblk_t()
    ok = xb.first_to(ea, ida_xref.XREF_ALL)
    while ok and cnt < 600:
        cnt += 1
        ok = xb.next_to()
    return cnt

def classify(name):
    """Return 'named', 'unnamed', or 'skip' (don't count)."""
    if not name: return 'skip'
    c0 = name[0]
    # CRT / system
    if c0 in '_@?': return 'skip'
    if name.startswith('unknown_libname_'): return 'skip'
    if name.startswith('j_'): return 'skip'
    if c0 == 'a' and len(name) > 1 and name[1].isupper(): return 'skip'
    method = name.split('::')[-1] if '::' in name else name
    # Trivial stubs - nothing to reverse-engineer
    if method.startswith('nullsub_'): return 'skip'
    if method.startswith('vt_entry_') or method.startswith('vt['): return 'skip'
    if 'Stub' in method or 'COMStub' in method: return 'skip'
    if 'ddtor' in method or 'scalar_dtor' in method: return 'skip'
    # sub_ = unnamed, needs work
    if method.startswith('sub_'): return 'unnamed'
    # Has meaningful name
    return 'named'

size_ranges = [(0,16),(17,32),(33,64),(65,128),(129,256),(257,512),(513,1024),(1025,2048),(2049,4096),(4097,999999)]
xref_ranges = [(0,0),(1,2),(3,5),(6,10),(11,20),(21,50),(51,100),(101,200),(201,500),(501,999999)]

mem = [[[0,0] for _ in xref_ranges] for _ in size_ranges]
glo = [[[0,0] for _ in xref_ranges] for _ in size_ranges]
skipped = 0

for ea in range(0x401000, 0x7E1000):
    fn = idaapi.get_func(ea)
    if not fn or fn.start_ea != ea: continue
    n = idc.get_func_name(ea) or ''
    cat = classify(n)
    if cat == 'skip':
        skipped += 1
        continue
    
    sz = fn.end_ea - fn.start_ea
    xr = count_xrefs(ea)
    named = 1 if cat == 'named' else 0
    unnamed = 1 - named
    
    is_mem = 0
    if '::' in n:
        is_mem = 1
    else:
        tif = ida_typeinf.tinfo_t()
        if ida_nalt.get_tinfo(tif, ea) and '__thiscall' in tif.dstr():
            is_mem = 1
    
    si = xi = -1
    for i in range(len(size_ranges)):
        if size_ranges[i][0] <= sz <= size_ranges[i][1]: si = i; break
    for i in range(len(xref_ranges)):
        if xref_ranges[i][0] <= xr <= xref_ranges[i][1]: xi = i; break
    if si < 0 or xi < 0: continue
    
    if is_mem:
        mem[si][xi][0] += named
        mem[si][xi][1] += unnamed
    else:
        glo[si][xi][0] += named
        glo[si][xi][1] += unnamed

all_counts = [[[mem[r][c][0]+glo[r][c][0], mem[r][c][1]+glo[r][c][1]] for c in range(len(xref_ranges))] for r in range(len(size_ranges))]

size_labels = ["<U+2264>16 B","17-32 B","33-64 B","65-128 B","129-256 B","257-512 B","513-1024 B","1-2 KB","2-4 KB",">4 KB"]

def print_table(name, counts):
    print("\n## %s" % name)
    header = "| 大小 | 0 Xref | 1-2 | 3-5 | 6-10 | 11-20 | 21-50 | 51-100 | 101-200 | 201-500 | >500 | **合计** |"
    sep = "|------|--------|-----|-----|------|-------|-------|--------|---------|---------|------|------|"
    print(header)
    print(sep)
    for r in range(len(size_ranges)):
        cells = []
        for c in counts[r]:
            n, u = c[0], c[1]; t = n + u
            pct = (100 * n // t) if t > 0 else 0
            cells.append("%d/%d/%d(%d%%)" % (n, u, t, pct))
        rn = sum(c[0] for c in counts[r])
        ru = sum(c[1] for c in counts[r]); rt = rn + ru
        rpct = (100 * rn // rt) if rt > 0 else 0
        print("| **%s** | %s | **%d/%d/%d(%d%%)** |" % (size_labels[r], " | ".join(cells), rn, ru, rt, rpct))
    # Column totals
    ct_cells = []
    ctn = ctu = 0
    for c in range(len(xref_ranges)):
        n = sum(counts[r][c][0] for r in range(len(size_ranges)))
        u = sum(counts[r][c][1] for r in range(len(size_ranges)))
        t = n + u; pct = (100 * n // t) if t > 0 else 0
        ct_cells.append("%d/%d/%d(%d%%)" % (n, u, t, pct))
        ctn += n; ctu += u
    ct = ctn + ctu; cpct = (100 * ctn // ct) if ct > 0 else 0
    print("| **合计** | %s | **%d/%d/%d(%d%%)** |" % (" | ".join(ct_cells), ctn, ctu, ct, cpct))

print("Skipped (system + stubs): %d" % skipped)
print_table("全部函数", all_counts)
print_table("类成员函数", mem)
print_table("全局函数", glo)

# Totals
at = sum(sum(c[0]+c[1] for c in row) for row in all_counts)
mt = sum(sum(c[0]+c[1] for c in row) for row in mem)
gt = sum(sum(c[0]+c[1] for c in row) for row in glo)
an = sum(sum(c[0] for c in row) for row in all_counts)
mn = sum(sum(c[0] for c in row) for row in mem)
gn = sum(sum(c[0] for c in row) for row in glo)
print("\nAll: %d/%d (%.1f%%)  Member: %d/%d (%.1f%%)  Global: %d/%d (%.1f%%)" % (
    an, at, 100*an/at if at else 0,
    mn, mt, 100*mn/mt if mt else 0,
    gn, gt, 100*gn/gt if gt else 0))

json.dump({'member':mem, 'global':glo, 'all':all_counts, 'skipped':skipped},
          open(r'D:\RA2YR_ReSource\tools\re_stats.json','w'))
