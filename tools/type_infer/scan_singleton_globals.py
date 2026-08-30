"""scan_singleton_globals.py — 单例构造存储扫描（IDA 内运行，py_exec_file）。

gen_singleton_anchors.py 的数据源：扫描向 .data/.bss 全局写入 RTTI vtable
的构造存储，产出 .omo/singleton_scan_raw.json。

三条形式（按产出频率）：
  Form A（主产出，~176 全局）: `mov dword ptr [G], offset VTABLE` 直接存储
  Form B（罕见）: 寄存器中转 `mov R, offset VT` ≤8 条后 `mov [G], R`
  Form C（罕见）: 构造调用绑定 `lea/mov ecx, offset G` ≤4 条后 `call F`，
                  F ∈ ctor_types.json（vtable 安装者）

B/C 在本二进制罕见的原因（实证）：游戏实体对象走池分配（调用点形如
`mov ecx, edi; call ctor`），全局单例的构造基本都由编译器直接内联为
Form A 存储。保留 B/C 供未来二进制复用。
"""
import idautils, idc, ida_funcs, idaapi, json, re
from collections import defaultdict

vtdata = json.load(open(r"D:\RA2YR_ReSource\anchors\rtti_vtable_class.json", encoding="utf-8"))["vtables"]
vt_class = {int(k, 16): v["class"] for k, v in vtdata.items() if v.get("class")}
print("vtables with class:", len(vt_class))

found = defaultdict(set)
SIZE_PREFIX = re.compile(r"^(dword|word|byte|qword) ptr ")

# ── Form A: mov [G], offset VTABLE（o_mem 直接存储）──
formA = 0
for vt, cls in vt_class.items():
    for x in idautils.XrefsTo(vt):
        ea = x.frm
        if idc.get_segm_name(ea) != ".text" or idc.print_insn_mnem(ea) != "mov":
            continue
        op0 = SIZE_PREFIX.sub("", (idc.print_operand(ea, 0) or "").strip().lower())
        # 直接 [绝对地址] 形式（非 [reg] / [reg+off]）
        if not (op0.startswith("[") and not op0.startswith("[e")):
            continue
        if idc.get_operand_type(ea, 1) != 5 or idc.get_operand_value(ea, 1) != vt:
            continue
        if idc.get_operand_type(ea, 0) != 2:
            continue
        g = idc.get_operand_value(ea, 0)
        if idc.get_segm_name(g) in (".data", ".bss"):
            found[g].add(cls)
            formA += 1
print("Form A (direct stores):", formA)

# ── Form B: mov R, offset VT →(≤8)→ mov [G], R（vtable xref 有界）──
formB = 0
for vt, cls in vt_class.items():
    for x in idautils.XrefsTo(vt):
        ea = x.frm
        if idc.get_segm_name(ea) != ".text" or idc.print_insn_mnem(ea) != "mov":
            continue
        op0 = (idc.print_operand(ea, 0) or "").strip().lower()
        if op0 not in ("eax", "ebx", "ecx", "edx", "esi", "edi"):
            continue
        if idc.get_operand_type(ea, 1) != 5 or idc.get_operand_value(ea, 1) != vt:
            continue
        cur = idc.next_head(ea, ea + 0x40)
        for _ in range(8):
            if cur == idaapi.BADADDR:
                break
            mm = idc.print_insn_mnem(cur)
            if mm == "call":
                break
            if mm == "mov":
                d0 = SIZE_PREFIX.sub("", (idc.print_operand(cur, 0) or "").strip().lower())
                if d0.startswith("[") and not d0.startswith("[e") \
                        and idc.get_operand_type(cur, 0) == 2:
                    g = idc.get_operand_value(cur, 0)
                    s1 = (idc.print_operand(cur, 1) or "").strip().lower()
                    if s1 == op0 and idc.get_segm_name(g) in (".data", ".bss"):
                        found[g].add(cls)
                        formB += 1
                        break
            cur = idc.next_head(cur, cur + 0x40)
print("Form B (register-mediated):", formB)

# ── Form C: installer 调用点回看 lea/mov ecx, offset G（xref 有界）──
try:
    installers = json.load(open(r"D:\RA2YR_ReSource\anchors\ctor_types.json", encoding="utf-8"))
    inst_by_addr = {int(k, 16): v for k, v in installers.items()}
except OSError:
    inst_by_addr = {}
formC = 0
for faddr, cls in inst_by_addr.items():
    for x in idautils.XrefsTo(faddr):
        call_ea = x.frm
        if idc.get_segm_name(call_ea) != ".text":
            continue
        if idc.print_insn_mnem(call_ea) not in ("call", "jmp"):
            continue
        f = ida_funcs.get_func(call_ea)
        if not f:
            continue
        ea = idc.prev_head(call_ea, f.start_ea)
        for _ in range(6):
            if ea == idaapi.BADADDR or ea < f.start_ea:
                break
            m = idc.print_insn_mnem(ea)
            if m == "call":
                break
            if m in ("lea", "mov"):
                op0 = (idc.print_operand(ea, 0) or "").strip().lower()
                op1 = (idc.print_operand(ea, 1) or "").strip()
                if op0 == "ecx" and op1.startswith("offset ") \
                        and (m == "lea" or idc.get_operand_type(ea, 1) == 2):
                    gname = op1[len("offset "):].strip()
                    g = idc.get_name_ea_simple(gname)
                    if g != idc.BADADDR and idc.get_segm_name(g) in (".data", ".bss"):
                        found[g].add(cls)
                        formC += 1
                    break
            ea = idc.prev_head(ea, f.start_ea)
print("Form C (ctor-call bindings):", formC)

rows = []
for g, classes in found.items():
    name = idc.get_name(g) or f"0x{g:X}"
    rows.append({"global": name, "ea": hex(g), "classes": sorted(classes)})
rows.sort(key=lambda r: r["ea"])
print("singleton globals:", len(rows))
with open(r"D:\RA2YR_ReSource\.omo\singleton_scan_raw.json", "w", encoding="utf-8") as fh:
    json.dump(rows, fh, indent=1)
print("written .omo/singleton_scan_raw.json; DONE")
