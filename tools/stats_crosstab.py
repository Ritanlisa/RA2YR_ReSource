"""Query IDA for function statistics and print cross-tabulation tables."""
import idautils, ida_funcs, ida_xref, ida_name

EP = ('_', '?', '@', 'j_', 'nullsub_', 'vt_entry_', 'unknown_libname_')

SB = [(1,16),(17,32),(33,64),(65,128),(129,256),(257,512),(513,1024),(1025,2048),(2049,4096),(4097,8192),(8193,99999999)]
XB = [(0,0),(1,2),(3,5),(6,10),(11,20),(21,50),(51,100),(101,200),(201,500),(501,99999999)]
NS = len(SB); NX = len(XB)

SL = ["<=16 B","17-32 B","33-64 B","65-128 B","129-256 B","257-512 B","513-1024 B","1-2 KB","2-4 KB","4-8 KB",">8 KB"]
XL = ["0 Xref","1-2","3-5","6-10","11-20","21-50","51-100","101-200","201-500",">500"]

def fmt_cell(nn, uu):
    tt = nn + uu
    if tt == 0:
        return "--"
    return "%d/%d/%d(%d%%)" % (nn, uu, tt, round(nn * 100.0 / tt))

def print_matrix(mat, label):
    print("")
    print("=== %s ===" % label)
    hdr = "| Size |"
    for i in range(NX):
        hdr += " " + XL[i] + " |"
    hdr += " **Total** |"
    print(hdr)
    
    sep = "|------|"
    for i in range(NX):
        sep += "-----|"
    sep += "------|"
    print(sep)
    
    for si in range(NS):
        row_n = 0; row_u = 0
        cells = []
        for xi in range(NX):
            nn = mat[si][xi][0]; uu = mat[si][xi][1]
            row_n += nn; row_u += uu
            cells.append(fmt_cell(nn, uu))
        line = "| %s | " % SL[si]
        for i in range(NX):
            line += cells[i] + " | "
        line += "**%s** |" % fmt_cell(row_n, row_u)
        print(line)
    
    col_n = [0]*NX; col_u = [0]*NX
    grand_n = 0; grand_u = 0
    for si in range(NS):
        for xi in range(NX):
            col_n[xi] += mat[si][xi][0]
            col_u[xi] += mat[si][xi][1]
            grand_n += mat[si][xi][0]
            grand_u += mat[si][xi][1]
    
    line = "| **Total** | "
    for i in range(NX):
        line += fmt_cell(col_n[i], col_u[i]) + " | "
    line += "**%s** |" % fmt_cell(grand_n, grand_u)
    print(line)

# init matrices
TM = []
MM = []
GM = []
for si in range(NS):
    TM.append([[0,0] for _ in range(NX)])
    MM.append([[0,0] for _ in range(NX)])
    GM.append([[0,0] for _ in range(NX)])

cnt = 0; exc = 0

for ea in idautils.Functions():
    nm = ida_name.get_ea_name(ea)
    
    skip = False
    if not nm:
        skip = True
    elif nm.startswith(EP):
        skip = True
    else:
        for kw in ('Stub', 'COMStub', 'ddtor', 'scalar_dtor'):
            if kw in nm:
                skip = True
                break
        if not skip and len(nm) >= 2 and nm[0] == 'a' and nm[1].isupper():
            skip = True
    
    if skip:
        exc += 1
        continue
    
    cnt += 1
    sz = ida_funcs.get_func(ea).size()
    xr = 0
    for _ in idautils.XrefsTo(ea):
        xr += 1
    
    named = 0 if 'sub_' in nm else 1
    unnamed = 0 if named else 1
    member = 1 if '::' in nm else 0
    
    si = NS - 1
    for i in range(NS):
        if SB[i][0] <= sz <= SB[i][1]:
            si = i
            break
    
    xi = NX - 1
    for i in range(NX):
        if XB[i][0] <= xr <= XB[i][1]:
            xi = i
            break
    
    TM[si][xi][0] += named; TM[si][xi][1] += unnamed
    if member:
        MM[si][xi][0] += named; MM[si][xi][1] += unnamed
    else:
        GM[si][xi][0] += named; GM[si][xi][1] += unnamed

# summary
mt_n = 0; mt_u = 0
gt_n = 0; gt_u = 0
for si in range(NS):
    for xi in range(NX):
        mt_n += MM[si][xi][0]; mt_u += MM[si][xi][1]
        gt_n += GM[si][xi][0]; gt_u += GM[si][xi][1]

tmt = mt_n + mt_u
tgt = gt_n + gt_u

print("TARGET: %d  EXCLUDED: %d" % (cnt, exc))
print("MEMBERS: %d/%d/%d (%.1f%%)" % (mt_n, mt_u, tmt, (mt_n * 100.0 / tmt) if tmt else 0))
print("GLOBALS: %d/%d/%d (%.1f%%)" % (gt_n, gt_u, tgt, (gt_n * 100.0 / tgt) if tgt else 0))

print_matrix(TM, "All Functions")
print_matrix(MM, "Member Functions")
print_matrix(GM, "Global Functions")
print("")
print("SUCCESS")
