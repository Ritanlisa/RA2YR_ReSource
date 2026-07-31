#!/usr/bin/env python3
"""
Ultimate One-Click Type Inference Engine (AC-3 + Weighted Greedy)
Architecture:
  Step 1 (VTABLE & RTTI):     scan .rdata for vtables, demangle RTTI names
  Step 2 (Skeleton Lock):     detect calling convention, count stack args
  Step 3 (Constraints):       extract ASSIGN/CALL/CALL_VTABLE/FUNC_PARAM/RETURN edges
  Step 4 (Call Graph):        build caller->callee adjacency
  Step 5 (CSP Solver):        AC-3 constraint propagation + weighted greedy
  Step 6 (Naming):            align Class_N to real names via vtable RTTI + signals.json
  Step 7 (Struct Inject):     generate C structs from class offset sets
  Step 8 (Signatures):        apply function types + global variable types
  Step 9 (Export):            JSON reports (classes/functions/globals)

关键实现要点（fix-ida-extract 计划后）:
  - CC 判定三优先级: signals.json concrete → IDA tinfo → 修复后启发式 (F5)
  - 栈/成员偏移用数值 API（get_operand_value + get_sp_delta, entry-ESP 基准）(F6/F14)
  - push 逆序编号（立即数占槽位）、浮点种子只标栈槽/全局/成员 (F3/F4)
  - 类型注入: get_named_type 存在性检查 + 仅删 _csp 后缀类型 + 成员宽度推进 (F7/F13)
  - 改名白名单（sub_*/method_*/Class_*）+ signals.json 保护 + manifest (F8)
  - AC-3 worklist 收敛（20 轮安全上限）+ 加权 greedy + vtable 重叠投票 (F9/F11/F12)
  - `--dry-run` 模式（不注入/不改名，导出到 .omo/dry_run_report）
  - try/finally 保证 enable_auto(True) 恢复（F17）

运行方式:
  IDA 内: File → Script File (或 ida-pro-mcp py_exec_file)
  副本验证: 复制 .i64 后用 idat -A -S 运行；离线回归: verify_extract_output.py
  dry-run: IDA 内执行时传 `--dry-run`；headless 下 `-S"script --dry-run"` 的
          参数进 idc.ARGV 而非 sys.argv（IDA 9.2），故 headless 推荐环境变量
          方式: `set RA2YR_DRY_RUN=1 && idat -A -S"script" replica.i64`。
          三种途径（sys.argv / idc.ARGV / RA2YR_DRY_RUN=1）任一命中即启用。
"""


import json, os, sys, re, time, gc, traceback
from collections import defaultdict, deque, Counter

try:
    import idaapi, idautils, idc, ida_funcs, ida_bytes, ida_xref, ida_ua
    import ida_segment, ida_name, ida_nalt, ida_idp, ida_typeinf
except ImportError:
    # 离线导入（verify_extract_output.py 复用纯逻辑时 IDA 不可用）
    idaapi = idautils = idc = ida_funcs = None
    ida_bytes = ida_xref = ida_ua = ida_segment = None
    ida_name = ida_nalt = ida_idp = ida_typeinf = None

# ============================================================
# 0. Environment config (F1: PROJ_ROOT 基于 __file__ 解析)
# ============================================================
_PROJ_ROOT = os.path.dirname(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
)
PROJ_ROOT = os.environ.get("RA2YR_ROOT", _PROJ_ROOT)
if not os.path.isdir(PROJ_ROOT):
    PROJ_ROOT = r"D:\RA2YR_ReSource"  # 最后 fallback
if PROJ_ROOT not in sys.path:
    sys.path.insert(0, PROJ_ROOT)
from tools.type_infer.scope_vars import build_scoped_index, build_adjacency

# --dry-run 模式: 不注入/不改名/导出到临时目录（T2）
# D2: headless `idat -A -S"script --dry-run"` 时参数进 idc.ARGV 而非 sys.argv
# （IDA 9.2 语义），因此三种触发途径任一命中即启用:
#   1) CLI/脚本参数 `--dry-run`（IDA 内执行 / 普通 Python）
#   2) idc.ARGV（headless -S 传参；idc 离线时为 None → getattr 返回 []）
#   3) 环境变量 RA2YR_DRY_RUN=1（headless 下最可靠，推荐）
DRY_RUN = (
    "--dry-run" in sys.argv
    or "--dry-run" in getattr(idc, "ARGV", [])
    or os.environ.get("RA2YR_DRY_RUN") == "1"
)

# signals.json 提前加载（Step 2 CC 判定 / Step 6 命名 / Step 8 改名保护共用）
SIG_SYMBOLS = {}
sig_path = os.path.join(PROJ_ROOT, "signals.json")
if os.path.exists(sig_path):
    try:
        with open(sig_path, "r", encoding="utf-8") as f:
            sig_data = json.load(f)
        SIG_SYMBOLS = sig_data.get("symbols", {})
    except Exception as e:
        print(f"  Warning: Could not load signals.json: {e}")
print(f"  Loaded {len(SIG_SYMBOLS)} entries from signals.json")

# 调用约定常量映射（F5）
_CC_NAME_TO_CM = {
    "thiscall": ida_typeinf.CM_CC_THISCALL if ida_typeinf else 128,
    "stdcall": ida_typeinf.CM_CC_STDCALL if ida_typeinf else 80,
    "cdecl": ida_typeinf.CM_CC_CDECL if ida_typeinf else 48,
    "fastcall": ida_typeinf.CM_CC_FASTCALL if ida_typeinf else 112,
}
_CM_TO_CC_NAME = {v: k for k, v in _CC_NAME_TO_CM.items()}


def _assign_push_params(pushes):
    """F3: x86 实参从右到左压栈——执行序第一个 push = 最后一个参数。

    `pushes` 按逆序扫描（从 call 向前）收集：扫描序[0] = call 前最后执行
    的 push = 第一个实参（param0）。反转得执行序后按 param_idx = N-1-i
    输出。数学上等价于"扫描序 param_idx = i"，但保留计划要求的显式形式，
    便于 verify_extract_output.py 合成测试直接导入验证。
    返回 [(src, param_idx)]（保持扫描序）。
    """
    exec_order = list(reversed(pushes))
    n = len(exec_order)
    pairs = [(src, n - 1 - i) for i, src in enumerate(exec_order)]
    return list(reversed(pairs))  # 输出保持扫描序（call 邻近 push 在前 = param0）


def _sanitize_struct_name(name):
    """D1: 类名 → 合法 C 标识符（Step 7 结构体注入前校验）。

    非法字符（`[`、`]`、`?`、`@`、`$`、`:` 等非标识符字符）替换为 `_`
    （连续非法字符折叠为单个 `_`，尾部 `_` 去除，如 `FactoryClass[33]` →
    `FactoryClass_33`）；数字开头的名字加 `_` 前缀（C 标识符不能以数字开头）；
    合法名原样返回（**不改变**——折叠/去尾只在名字确实包含非法字符时发生）。
    sanitize 后为空或不含任何字母数字（纯标点垃圾名，如 `??$@`）→ 返回 None，
    调用方跳过注入并在 manifest 记录。返回 None 表示"不可注入"。
    """
    if not name:
        return None
    sanitized = name
    if re.search(r"[^0-9A-Za-z_]", name):
        # 仅当名字含非法字符时折叠连续非法字符并去尾部 `_`
        sanitized = re.sub(r"[^0-9A-Za-z_]+", "_", name).rstrip("_")
    if not sanitized or not any(c.isalnum() for c in sanitized):
        return None
    if sanitized[0].isdigit():
        sanitized = "_" + sanitized
    return sanitized

TEXT_START, TEXT_END = 0x401000, 0x7E1000
RDATA_START, RDATA_END = 0x7E1608, 0x812000
MIN_VTABLE_ENTRIES = 3

print("ULTIMATE ONE-CLICK ENGINE (ALIAS-TRACKING 9-STEPS)")
print("=" * 60)
start_time = time.time()

# ============================================================
# 运行 manifest（T4/F8: 每次运行记录 types/names/errors）
# ============================================================
RUN_MANIFEST = {
    "timestamp": time.strftime("%Y-%m-%d %H:%M:%S"),
    "dry_run": DRY_RUN,
    "types_created": [],
    "types_deleted": [],
    "types_skipped_existing": [],
    "names_renamed": [],
    "names_skipped_protected": [],
    # D1: 结构体注入防御性过滤记录（非法偏移 / 非法类名）
    "offsets_filtered_illegal": [],
    "structs_skipped_no_valid_offsets": [],
    "names_sanitized": [],
    "structs_skipped_invalid_name": [],
    "errors": [],
}


def _write_manifest():
    manifest_dir = os.path.join(PROJ_ROOT, ".omo")
    os.makedirs(manifest_dir, exist_ok=True)
    manifest_path = os.path.join(manifest_dir, "type_infer_run_manifest.json")
    with open(manifest_path, "w", encoding="utf-8") as f:
        json.dump(RUN_MANIFEST, f, indent=2)
    return manifest_path

def _run_main():
    for seg_name in [".idata", ".rdata", ".text"]:
        seg = ida_segment.get_segm_by_name(seg_name)
        if seg:
            seg.perm = ida_segment.SEGPERM_READ
            ida_segment.update_segm(seg)

    idaapi.auto_mark_range(0, idaapi.BADADDR, idaapi.AU_USED)
    idaapi.enable_auto(False)
    print("[*] Auto-analysis DISABLED.")

    # ============================================================
    # 1. T2: VTABLE & RTTI 提取
    # ============================================================
    print("\n[1/9] Scanning .rdata & RTTI...")

    def in_text_section(val):
        if val < TEXT_START or val >= TEXT_END:
            return False
        func = ida_funcs.get_func(val)
        return func is not None and func.start_ea == val

    vtables = []
    ea = RDATA_START
    while ea < RDATA_END - 4:
        val = ida_bytes.get_dword(ea)
        if in_text_section(val):
            vt_start, entries = ea, []
            while ea < RDATA_END and in_text_section(ida_bytes.get_dword(ea)):
                entries.append(ida_bytes.get_dword(ea))
                ea += 4
            if len(entries) >= MIN_VTABLE_ENTRIES:
                vtables.append({"start": vt_start, "entries": entries})
        else:
            ea += 4

    def demangle_vtable_name(name_ea, raw_name):
        try:
            demangled = ida_name.get_demangled_name(name_ea, ida_name.DQT_FULLY_DEMANGLED)
            if not demangled:
                demangled = idc.demangle_name(raw_name, idc.get_inf_attr(idc.INF_SHORT_DN))
        except:
            demangled = None
        if demangled:
            m = re.search(r"const\s+(.+?)::`vftable'", demangled) or re.search(
                r"^(.+?)::`vftable'", demangled
            )
            if m:
                return m.group(1)
        if raw_name.startswith("??_7") and "@@6B" in raw_name:
            return raw_name[4:].split("@@")[0]
        return None

    rdata_entries = {
        ea: name
        for ea, name in idautils.Names()
        if ida_segment.get_segm_name(ida_segment.getseg(ea)) == ".rdata"
    }
    rtti_map = {}
    for ea, name in rdata_entries.items():
        if name and (name.startswith("??_R0?AV") or ".?AV" in name):
            try:
                demangled = idc.demangle_name(name, idc.get_inf_attr(idc.INF_SHORT_DN))
                if demangled:
                    m = re.search(r"(?:class|struct)\s+(\S+)\s+(?:\*|&)", demangled)
                    if m:
                        rtti_map[ea] = m.group(1)
            except:
                pass

    vtable_to_real_name = {}
    for vt in vtables:
        start_addr = vt["start"]
        class_name = None
        if start_addr in rdata_entries:
            class_name = demangle_vtable_name(start_addr, rdata_entries[start_addr])
        if not class_name and (start_addr - 4) in rtti_map:
            class_name = rtti_map[start_addr - 4]
        if not class_name:
            for off in [-4, -8, -12, 4, 8]:
                if start_addr + off in rtti_map:
                    class_name = rtti_map[start_addr + off]
                    break
        if class_name:
            vtable_to_real_name[start_addr] = class_name

    print(
        f"  Found {len(vtables)} vtables, mapped {len(vtable_to_real_name)} to RTTI names."
    )

    # ============================================================
    # 2. 核心重构：别名追踪 + 完全信任 IDA 栈深
    # ============================================================
    print("\n[2/9] Locking skeletons (Alias Tracking & Stack Depth)...")

    X86_REGS = frozenset(
        {
            "eax",
            "ebx",
            "ecx",
            "edx",
            "esi",
            "edi",
            "ebp",
            "esp",
            "al",
            "ah",
            "bl",
            "bh",
            "cl",
            "ch",
            "dl",
            "dh",
            "ax",
            "bx",
            "cx",
            "dx",
            "si",
            "di",
            "bp",
            "sp",
        }
    )
    func_real_arg_count = {}
    func_real_cc = {}
    func_stack_args = {}

    # --- F2: cdecl 参数计数 —— 调用点连续 push 统计（预扫描，执行序） ---
    caller_push_counts = defaultdict(list)
    for _f in idautils.Functions():
        _seg = ida_segment.getseg(_f)
        if not _seg or ida_segment.get_segm_name(_seg) != ".text":
            continue
        _func = idaapi.get_func(_f)
        if not _func:
            continue
        _ea, _pushes = _func.start_ea, 0
        while _ea < _func.end_ea and _ea != idaapi.BADADDR:
            _mnem = idc.print_insn_mnem(_ea)
            if _mnem == "push":
                _pushes += 1
            elif _mnem == "call":
                _insn = ida_ua.insn_t()
                if ida_ua.decode_insn(_insn, _ea) and _insn.ops[0].type in (
                    ida_ua.o_near,
                    ida_ua.o_far,
                ):
                    _tgt = _insn.ops[0].addr
                    _tf = ida_funcs.get_func(_tgt)
                    if _tf and _tf.start_ea == _tgt:
                        caller_push_counts[f"0x{_tgt:08X}"].append(_pushes)
                _pushes = 0
            elif _mnem.startswith("j") or _mnem in ("ret", "retn"):
                _pushes = 0
            _ea = idc.next_head(_ea, _func.end_ea)


    def _caller_push_mode(callee_addr_str):
        """F2: cdecl 参数个数 = 调用点连续 push 数的众数（无调用者 → 0）。"""
        counts = caller_push_counts.get(callee_addr_str, [])
        if not counts:
            return 0
        return Counter(counts).most_common(1)[0][0]


    def _collect_this_regs(func):
        """Entry-region `mov reg, ecx` aliases (20 insns) → this 寄存器别名集。"""
        this_regs = {"ecx"}
        if not func:
            return this_regs
        scan_ea = func.start_ea
        for _ in range(20):
            if scan_ea == idaapi.BADADDR or scan_ea >= func.end_ea:
                break
            mnem = idc.print_insn_mnem(scan_ea)
            op0, op1 = idc.print_operand(scan_ea, 0), idc.print_operand(scan_ea, 1)
            if (
                mnem == "mov"
                and op1.strip().lower() == "ecx"
                and op0.strip().lower() in X86_REGS
            ):
                this_regs.add(op0.strip().lower())
            if mnem in ("call", "ret", "retn", "jmp"):
                break
            scan_ea = idc.next_head(scan_ea, func.end_ea)
        return this_regs


    def _op_is_member_access(op_text, reg):
        """F5: `[reg]` / `[reg+4]` / `[reg+10h]` / `[reg+0x10]` 成员访问检测。

        IDA 9.2 显示格式（`[ecx+4]`、`[ebp+0]`、`[ecx+0x10]`）系统性失配旧正则，
        这里用宽松字符类匹配所有变体。
        """
        low = (op_text or "").strip().lower()
        return bool(re.search(rf"\[{reg}[^\]]*\]", low))


    def _signals_entry(func_addr_str):
        """signals.json 键为无填充 hex（`0x401000`）；脚本内部 func_addr_str 为
        `f"0x{{ea:08X}}"`（`0x00401000`）——统一归一化后查找（实锤：旧代码
        三种 key 变体全部失配 → signals 对齐从未生效，F10 依赖此修复）。"""
        if not func_addr_str:
            return None
        if func_addr_str in SIG_SYMBOLS:
            return SIG_SYMBOLS[func_addr_str]
        if func_addr_str.lower() in SIG_SYMBOLS:
            return SIG_SYMBOLS[func_addr_str.lower()]
        if func_addr_str.startswith("0x"):
            bare = func_addr_str[2:].lstrip("0").lower()
            if bare:
                return SIG_SYMBOLS.get("0x" + bare)
        return None


    def _cc_from_signals(func_addr_str):
        """Priority 1: signals.json concrete call_convention（unknown/缺失 → None）。"""
        sig = _signals_entry(func_addr_str)
        cc = sig.get("call_convention") if sig else None
        return _CC_NAME_TO_CM.get(cc)


    def _cc_from_tinfo(func_ea):
        """Priority 2: IDA tinfo dstr（`__thiscall`/`__stdcall`/`__cdecl`/`__fastcall`）。"""
        t = ida_typeinf.tinfo_t()
        if not idaapi.get_tinfo(t, func_ea) or not t.is_func():
            return None
        d = t.dstr() or ""
        for name, cm in _CC_NAME_TO_CM.items():
            if f"__{name}" in d:
                return cm
        return None


    def _cc_from_heuristic(func, this_regs):
        """Priority 3: `mov reg, ecx` + `[reg+off]` 访问模式（修复正则）。"""
        if not func:
            return None
        scan_ea = func.start_ea
        while scan_ea < func.end_ea and scan_ea != idaapi.BADADDR:
            op0, op1 = idc.print_operand(scan_ea, 0), idc.print_operand(scan_ea, 1)
            for reg in this_regs:
                if _op_is_member_access(op0, reg) or _op_is_member_access(op1, reg):
                    return ida_typeinf.CM_CC_THISCALL
            scan_ea = idc.next_head(scan_ea, func.end_ea)
        return None


    def detect_calling_convention(func_ea):
        """F5+F2: 三优先级 CC 判定 → (cc, stack_arg_count)。

        - thiscall/stdcall: argsize 有效 → argsize // 4
        - fastcall: ecx/edx 寄存器参数不计 → 保守处理（约束生成处跳过，记账 argsize//4）
        - cdecl: argsize 无效 → 调用点 push 统计取众数
        """
        func_addr_str = f"0x{func_ea:08X}"
        func = idaapi.get_func(func_ea)
        argsize = func.argsize if func else 0

        cc = _cc_from_signals(func_addr_str) or _cc_from_tinfo(func_ea)
        if cc is None and func:
            cc = _cc_from_heuristic(func, _collect_this_regs(func))
        if cc is None:
            # 全部失败 → 退化为旧行为（栈参数>0 → stdcall, 否则 cdecl）
            cc = ida_typeinf.CM_CC_STDCALL if argsize > 0 else ida_typeinf.CM_CC_CDECL

        if cc in (ida_typeinf.CM_CC_THISCALL, ida_typeinf.CM_CC_STDCALL,
                  ida_typeinf.CM_CC_FASTCALL):
            stack_arg_count = argsize // 4
        else:  # cdecl
            stack_arg_count = _caller_push_mode(func_addr_str)
        return cc, stack_arg_count


    for func_ea in idautils.Functions():
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != ".text":
            continue
        func_addr_str = f"0x{func_ea:08X}"

        real_cc, stack_arg_count = detect_calling_convention(func_ea)
        func_real_cc[func_addr_str] = real_cc
        func_stack_args[func_addr_str] = stack_arg_count
        if real_cc == ida_typeinf.CM_CC_THISCALL:
            func_real_arg_count[func_addr_str] = stack_arg_count + 1  # +1 记账 (N3)
        else:
            func_real_arg_count[func_addr_str] = stack_arg_count

    print(f"  Locked skeletons for {len(func_real_arg_count)} functions.")

    # ============================================================
    # 3. T4: 精细约束提取
    # ============================================================
    print("\n[3/9] Extracting fine-grained constraints...")

    def _tinfo_to_seed_type(t):
        if not t:
            return None
        try:
            if t.is_void():
                return None
            if t.is_ptr() or t.is_array():
                ptr_obj = t.get_pointed_object() if t.is_ptr() else t
                if ptr_obj.is_char():
                    return "char*"
                is_fp = getattr(
                    ptr_obj, "is_floating", getattr(ptr_obj, "is_float", lambda: False)
                )()
                if is_fp:
                    return "float*"
                is_udt = getattr(
                    ptr_obj, "is_udt", getattr(ptr_obj, "is_struct", lambda: False)
                )()
                if is_udt:
                    return "void*"
                return "void*"
            is_fp = getattr(t, "is_floating", getattr(t, "is_float", lambda: False))()
            if is_fp:
                return "double" if t.get_size() == 8 else "float"
            is_bool = getattr(t, "is_bool", lambda: False)()
            if is_bool:
                return "bool"
        except Exception:
            pass
        return None

    RE_GLOBAL_PATTERN = re.compile(
        r"^(dword_|byte_|word_|unk_|flt_|off_|qword_)", re.IGNORECASE
    )
    RE_HEX_IMM = re.compile(r"^-?[0-9A-Fa-f]+h$", re.IGNORECASE)
    RE_DEC = re.compile(r"^-?\d+$")
    RE_FLOAT = re.compile(r"^-?\d+\.\d+(?:f|e[+-]?\d+)?$", re.IGNORECASE)

    def _strip_seg(text):
        if not text:
            return text
        text = text.strip()
        for p in ("ds:", "es:", "fs:", "gs:", "cs:", "ss:"):
            if text.lower().startswith(p):
                return text[len(p) :]
        return text

    def _is_global_ref(text):
        if not text:
            return False
        text = text.strip()
        if not text or text.lower() in X86_REGS or "[" in text:
            return False
        if (
            text.startswith("0x")
            or text.lstrip("-").isdigit()
            or RE_HEX_IMM.match(text)
            or RE_DEC.match(text)
            or RE_FLOAT.match(text)
        ):
            return False
        if text.lower() in ("offset", "cs", "ds", "es", "fs", "gs", "ss"):
            return False
        stripped = _strip_seg(text)
        if stripped != text:
            return _is_global_ref(stripped)
        if RE_GLOBAL_PATTERN.match(text):
            return True
        if "::" in text:
            return False
        return True

    def _reg_index_guard(txt, base_end):
        """`[reg+reg2]` 类寄存器索引操作数数值不可靠 → True。"""
        rest = txt[base_end:]
        for w in re.findall(r"[a-z][a-z0-9_]*", rest.lower()):
            if w in X86_REGS:
                return True
        return False


    def _stack_operand_name(ea, op_n):
        """F6/F14: 栈操作数数值解析（IDA 9.2 显示格式无关）。

        get_operand_value 返回相对当前基址寄存器的位移；get_sp_delta 给出
        prologue 的 SP 调整。两者之和归一化到 entry-ESP 基准，与 FUNC_PARAM
        约定一致（param0 = stack_+0x4 = [esp+4]@entry）。
        非栈操作数 / 寄存器索引操作数 → None。
        """
        txt = (idc.print_operand(ea, op_n) or "").strip().lower()
        m = re.match(r"^\[(esp|ebp)\b", txt)
        if not m:
            return None
        if _reg_index_guard(txt, m.end()):
            return None
        val = idc.get_operand_value(ea, op_n)
        if val is None:
            return None
        try:
            spd = idc.get_sp_delta(ea)
        except Exception:
            spd = 0
        if spd is None:
            spd = 0
        return f"stack_{val + spd:+#x}"


    def _parse_operand_src(ea, op_n):
        """F3/F6/F14: 操作数 → ('kind', name) 类型化来源。

        ('reg', name) / ('stack', stack_name) / ('global', name) /
        ('member', '*base_reg') / ('imm', None) / None（不可解析）。
        """
        txt = (idc.print_operand(ea, op_n) or "").strip()
        if not txt:
            return None
        low = txt.lower()
        if low in X86_REGS:
            return ("reg", low)
        sn = _stack_operand_name(ea, op_n)
        if sn is not None:
            return ("stack", sn)
        if "[" in txt:
            m = re.match(r"^\[([a-z]{2,3})\b", low)
            if m and m.group(1) in X86_REGS:
                if _reg_index_guard(low, m.end()):
                    return None
                return ("member", f"*{m.group(1)}")
            return None
        if _is_global_ref(txt):
            return ("global", _strip_seg(txt))
        return ("imm", None)


    def _scan_call_args(call_ea, fstart, callee_addr_str, callee_name, call_ea_hex):
        edges = []
        ea = idc.prev_head(call_ea, fstart)
        pushes, this_src, scanned = [], None, 0
        while ea != idaapi.BADADDR and scanned < 32:  # F14: 上限 8 → 32
            mnem = idc.print_insn_mnem(ea)
            if mnem in ("call", "ret", "retn") or mnem.startswith("j"):
                break
            if mnem == "push":
                # F3: 立即数也占参数槽位（跳过会导致后续参数编号漂移）
                pushes.append(_parse_operand_src(ea, 0))
            elif mnem == "mov" and idc.print_operand(ea, 0).strip().lower() == "ecx":
                # F6: this 来源数值解析（寄存器别名 / 栈槽 / 成员 / 全局）
                src = _parse_operand_src(ea, 1)
                if src:
                    this_src = src
            ea = idc.prev_head(ea, fstart)
            scanned += 1

        if this_src and this_src[1]:
            edges.append(
                {
                    "from": this_src[1],
                    "to": f"{callee_addr_str}:this",  # F10: 单冒号
                    "type": "CALL_ARG",
                    "addr": call_ea_hex,
                    "callee_name": callee_name,
                }
            )
        for src, param_idx in _assign_push_params(pushes):
            if not src or not src[1]:
                continue  # 立即数只占槽位，不产边
            edges.append(
                {
                    "from": src[1],
                    "to": f"{callee_addr_str}::param{param_idx}",
                    "type": "CALL_ARG",
                    "addr": call_ea_hex,
                    "callee_name": callee_name,
                }
            )
        edges.append(
            {
                "from": f"{callee_addr_str}.return",
                "to": "eax",
                "type": "RETURN_TO",
                "addr": call_ea_hex,
                "callee_name": callee_name,
            }
        )
        return edges


    def _make_stack_access(op_from, op_to, ea_hex, ea, op_n, direction):
        """F6/F14: 数值化栈访问边（替代失配的文本正则 RE_STACK_FULL）。"""
        sn = _stack_operand_name(ea, op_n)
        if sn is None:
            return None
        if direction == "read":
            return {"from": sn, "to": op_to, "type": "STACK_ACCESS", "addr": ea_hex}
        else:
            return {
                "from": op_from,
                "to": sn,
                "type": "STACK_ACCESS",
                "addr": ea_hex,
            }

    constraints = []
    func_addr_to_name = {}
    func_internal_offsets = defaultdict(set)

    for func_ea in idautils.Functions():
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != ".text":
            continue

        func_name = ida_funcs.get_func_name(func_ea) or f"sub_{func_ea:X}"
        func_addr_str = f"0x{func_ea:08X}"
        func_addr_to_name[func_addr_str] = func_name

        func = idaapi.get_func(func_ea)
        ea, end, fstart = func_ea, func.end_ea, func_ea
        is_thiscall = func_real_cc.get(func_addr_str) == ida_typeinf.CM_CC_THISCALL
        is_fastcall = func_real_cc.get(func_addr_str) == ida_typeinf.CM_CC_FASTCALL

        if is_thiscall:
            constraints.append(
                {
                    "from": f"{func_addr_str}:this",  # F10: 单冒号
                    "to": "ecx",
                    "type": "FUNC_PARAM",
                    "addr": func_addr_str,
                }
            )

        if is_fastcall:
            # F2: fastcall 的 ecx/edx 寄存器参数不计入 argsize，保守处理——
            # 不生成 FUNC_PARAM 约束（否则参数槽位错位）
            stack_count = 0
        else:
            stack_count = func_stack_args.get(func_addr_str, 0)

        for i in range(stack_count):
            constraints.append(
                {
                    "from": f"{func_addr_str}::param{i}",
                    "to": f"stack_+{4 + i*4:#x}",  # entry-ESP 基准（F6 数值归一化一致）
                    "type": "FUNC_PARAM",
                    "addr": func_addr_str,
                }
            )

        prev_ea, prev_mnem, prev_ops = idaapi.BADADDR, "", []
        param0_regs = set()
        this_regs = _collect_this_regs(func)
        param0_regs.update(this_regs)

        while ea < end:
            mnem, op0, op1 = (
                idc.print_insn_mnem(ea),
                idc.print_operand(ea, 0),
                idc.print_operand(ea, 1),
            )
            c = None

            if mnem == "mov" and op0 and op1:
                src = op1.strip().lower()
                dst = op0.strip().lower()
                if dst in X86_REGS:
                    # F6: 数值化 param0 别名检测（`mov reg, [esp+4]`@entry）
                    sn = _stack_operand_name(ea, 1)
                    if sn == "stack_+0x4":
                        param0_regs.add(dst)
                        c = {
                            "from": f"{func_addr_str}::param0",
                            "to": dst,
                            "type": "ASSIGN",
                            "addr": f"0x{ea:X}",
                        }
                if not c and src in param0_regs and dst in X86_REGS:
                    param0_regs.add(dst)
                    c = {"from": src, "to": dst, "type": "ASSIGN", "addr": f"0x{ea:X}"}

            if not c and mnem in ("mov", "movzx", "movsx", "cmp", "test", "lea"):
                # F5: 成员访问提取（this/param0 别名寄存器），数值优先 + 正则兜底
                for op_n, role in ((1, "src"), (0, "dst")):
                    txt = (idc.print_operand(ea, op_n) or "").strip().lower()
                    m = re.match(r"^\[([a-z]{2,3})\+([0-9a-f]+)h?\]$", txt)
                    if m:
                        reg, off = m.group(1), int(m.group(2), 16)
                    else:
                        m2 = re.match(r"^\[([a-z]{2,3})\b", txt)
                        if not m2:
                            continue
                        reg = m2.group(1)
                        if reg not in X86_REGS or _reg_index_guard(txt, m2.end()):
                            continue
                        val = idc.get_operand_value(ea, op_n)
                        if val is None or val < 0:
                            continue
                        off = val
                    if reg in this_regs:
                        if role == "src":
                            c = {
                                "from": f"{func_addr_str}:this.member({off:#x})",
                                "to": op0.strip().lower(),
                                "type": "ASSIGN",
                                "addr": f"0x{ea:X}",
                            }
                        else:
                            c = {
                                "from": op1.strip().lower(),
                                "to": f"{func_addr_str}:this.member({off:#x})",
                                "type": "ASSIGN",
                                "addr": f"0x{ea:X}",
                            }
                        func_internal_offsets[func_addr_str].add(off)
                    elif reg in param0_regs:
                        if role == "src":
                            c = {
                                "from": f"{func_addr_str}::param0.member({off:#x})",
                                "to": op0.strip().lower(),
                                "type": "ASSIGN",
                                "addr": f"0x{ea:X}",
                            }
                        else:
                            c = {
                                "from": op1.strip().lower(),
                                "to": f"{func_addr_str}::param0.member({off:#x})",
                                "type": "ASSIGN",
                                "addr": f"0x{ea:X}",
                            }
                        func_internal_offsets[func_addr_str].add(off)
                    if c:
                        break

            if not c and mnem in ("mov", "movzx", "movsx") and op0 and op1:
                f_reg, t_reg = op1.strip().lower(), op0.strip().lower()
                if f_reg in X86_REGS and t_reg in X86_REGS:
                    if not (f_reg in param0_regs and t_reg in param0_regs):
                        c = {
                            "from": f_reg,
                            "to": t_reg,
                            "type": "ASSIGN",
                            "addr": f"0x{ea:X}",
                        }

            if not c and mnem == "mov" and op0 and op1:
                if _is_global_ref(op1):
                    c = {
                        "from": _strip_seg(op1.strip()),
                        "to": op0,
                        "type": "ASSIGN",
                        "addr": f"0x{ea:X}",
                    }
                elif _is_global_ref(op0):
                    c = {
                        "from": op1,
                        "to": _strip_seg(op0.strip()),
                        "type": "ASSIGN",
                        "addr": f"0x{ea:X}",
                    }

            if not c and mnem == "mov" and op0 and op1:
                ea_hex = f"0x{ea:X}"
                s_read = _make_stack_access("", op0, ea_hex, ea, 1, "read")
                if s_read:
                    c = s_read
                else:
                    s_write = _make_stack_access(op1, "", ea_hex, ea, 0, "write")
                    if s_write:
                        c = s_write

            if mnem == "call":
                insn = ida_ua.insn_t()
                if ida_ua.decode_insn(insn, ea) and insn.ops[0].type != ida_ua.o_void:
                    call_op = insn.ops[0]
                    call_ea_hex = f"0x{ea:X}"
                    if call_op.type in (ida_ua.o_near, ida_ua.o_far):
                        tgt = call_op.addr
                        cname = ida_funcs.get_func_name(tgt) or ""
                        tgt_tinfo = ida_typeinf.tinfo_t()
                        if idaapi.get_tinfo(tgt_tinfo, tgt) and tgt_tinfo.is_func():
                            fd = ida_typeinf.func_type_data_t()
                            if tgt_tinfo.get_func_details(fd):
                                for i in range(len(fd)):
                                    seed_t = _tinfo_to_seed_type(fd[i].type)
                                    if seed_t:
                                        constraints.append(
                                            {
                                                "type": "TYPE_SEED",
                                                "var": f"0x{tgt:08X}::param{i}",
                                                "itype": seed_t,
                                                "addr": f"0x{ea:X}",
                                            }
                                        )
                                seed_ret = _tinfo_to_seed_type(fd.rettype)
                                if seed_ret:
                                    constraints.append(
                                        {
                                            "type": "TYPE_SEED",
                                            "var": f"0x{tgt:08X}.return",
                                            "itype": seed_ret,
                                            "addr": f"0x{ea:X}",
                                        }
                                    )
                        if cname in (
                            "strlen",
                            "strcpy",
                            "strcat",
                            "strcmp",
                            "_stricmp",
                            "strstr",
                            "strncpy",
                            "strncmp",
                        ):
                            constraints.append(
                                {
                                    "type": "TYPE_SEED",
                                    "var": f"0x{tgt:08X}::param0",
                                    "itype": "char*",
                                    "addr": f"0x{ea:X}",
                                }
                            )
                            constraints.append(
                                {
                                    "type": "TYPE_SEED",
                                    "var": f"0x{tgt:08X}::param1",
                                    "itype": "char*",
                                    "addr": f"0x{ea:X}",
                                }
                            )
                        if (
                            ida_funcs.get_func(tgt)
                            and ida_funcs.get_func(tgt).start_ea == tgt
                        ):
                            cname = ida_funcs.get_func_name(tgt) or f"sub_{tgt:X}"
                            caddr = f"0x{tgt:08X}"
                            c = {
                                "from": f"0x{ea:X}_call",
                                "to": caddr,
                                "type": "CALL",
                                "addr": call_ea_hex,
                                "callee_name": cname,
                            }
                            constraints.append(c)
                            constraints.extend(
                                _scan_call_args(ea, fstart, caddr, cname, call_ea_hex)
                            )
                            c = None

                    elif call_op.type in (ida_ua.o_displ, ida_ua.o_mem, ida_ua.o_phrase):
                        # F5: vtable 槽位数值解析（o_displ.addr = 位移，显示格式无关）
                        slot_idx = None
                        if call_op.type == ida_ua.o_displ:
                            disp = call_op.addr
                            if disp >= 0 and (disp & 3) == 0:
                                slot_idx = disp // 4
                        if slot_idx is not None:
                            vtable_var = f"vtable_slot_{slot_idx:#x}"
                            c = {
                                "from": f"0x{ea:X}_call",
                                "to": vtable_var,
                                "type": "CALL_VTABLE",
                                "addr": f"0x{ea:X}",
                                "vtable_slot": slot_idx,
                            }
                            constraints.append(c)
                            vtable_edges = _scan_call_args(
                                ea, fstart, vtable_var, "vtable_call", f"0x{ea:X}"
                            )
                            constraints.extend(vtable_edges)

            elif mnem in ("ret", "retn"):
                if prev_mnem in ("mov", "movzx", "movsx") and "eax" in prev_ops[0].lower():
                    c = {
                        "from": f"0x{ea:X}_RET",
                        "to": f"{func_addr_str}.return",
                        "type": "RETURN",
                        "addr": f"0x{ea:X}",
                    }
                elif (
                    prev_mnem in ("xor", "sub")
                    and len(prev_ops) >= 2
                    and "eax" in prev_ops[0].lower()
                    and prev_ops[0] == prev_ops[-1]
                ):
                    c = {
                        "from": f"0x{ea:X}_RET",
                        "to": f"{func_addr_str}.return",
                        "type": "RETURN",
                        "addr": f"0x{ea:X}",
                    }

            if (
                mnem == "test"
                and op0
                and op0 == op1
                and op0.strip().lower() in ("al", "cl", "dl", "bl")
            ):
                constraints.append(
                    {
                        "type": "TYPE_SEED",
                        "var": op0.strip().lower(),
                        "itype": "bool",
                        "addr": f"0x{ea:X}",
                    }
                )
            if mnem.startswith("set") and op0:
                constraints.append(
                    {
                        "type": "TYPE_SEED",
                        "var": op0.strip().lower(),
                        "itype": "bool",
                        "addr": f"0x{ea:X}",
                    }
                )
            if mnem in ("fld", "fstp", "fadd", "fsub", "fmul", "fdiv", "fcomp", "fcompp"):
                # F4: 浮点种子标到栈槽/全局/成员——禁止标到寄存器（esp/ebp）
                for op_n in (0, 1):
                    src = _parse_operand_src(ea, op_n)
                    if src and src[0] in ("stack", "global", "member") and src[1]:
                        constraints.append(
                            {
                                "type": "TYPE_SEED",
                                "var": src[1],
                                "itype": "float*",
                                "addr": f"0x{ea:X}",
                            }
                        )

            if c:
                constraints.append(c)
            if mnem not in ("nop", "int3"):
                prev_ea, prev_mnem, prev_ops = ea, mnem, [op0] + ([op1] if op1 else [])
            ea = idc.next_head(ea, end)
            if ea == idaapi.BADADDR:
                break

    print(f"  Extracted {len(constraints)} fine-grained constraints.")

    # ============================================================
    # 4. T5: 调用图
    # ============================================================
    print("\n[4/9] Building call graph...")
    call_graph = {}
    for func_ea in idautils.Functions():
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != ".text":
            continue
        callees = []
        ea, end = func_ea, ida_funcs.get_func(func_ea).end_ea
        while ea < end:
            if ida_idp.is_call_insn(ea):
                insn = ida_ua.insn_t()
                if ida_ua.decode_insn(insn, ea) and insn.ops[0].type in (
                    ida_ua.o_near,
                    ida_ua.o_far,
                ):
                    tgt = insn.ops[0].addr
                    if ida_funcs.get_func(tgt):
                        callees.append({"to": f"0x{tgt:08X}", "type": "direct"})
            ea = idc.next_head(ea, end)
            if ea == idaapi.BADADDR:
                break
        if callees:
            call_graph[f"0x{func_ea:08X}"] = callees
    print(f"  Built graph: {len(call_graph)} callers.")

    # ============================================================
    # 5. CSP 求解引擎 (AC-3 + Weighted Greedy)
    # ============================================================
    print("\n[5/9] Running CSP Solver (AC-3 + Weighted Greedy)...")

    # --- 5.0: Setup (same as old) ---
    type_seeds = [c for c in constraints if c.get("type") == "TYPE_SEED"]
    edge_constraints = [c for c in constraints if c.get("type") != "TYPE_SEED"]

    ssa = build_scoped_index(edge_constraints, call_graph)
    st = ssa["scoped_to_name"]
    adj = build_adjacency(edge_constraints, ssa)

    var_features = defaultdict(dict)
    dfg, op_eax = defaultdict(set), {}
    for ci, c in enumerate(edge_constraints):
        sf, sto = st[ci]
        if c["type"] == "RETURN_TO" and "??2" in c.get("callee_name", ""):
            op_eax[sto] = int(c["addr"], 16)
        dfg[sf].add(sto)

    new_ptr = dict(op_eax)
    q = deque(new_ptr)
    while q:
        cur = q.popleft()
        a = new_ptr[cur]
        for nxt in dfg.get(cur, ()):
            if nxt not in new_ptr:
                new_ptr[nxt] = a
                q.append(nxt)
    for var, addr in new_ptr.items():
        var_features[var]["has_new"] = True
    for ci, c in enumerate(edge_constraints):
        if c["type"] == "CALL_VTABLE":
            var_features[st[ci][0]].setdefault("slots", set()).add(c.get("vtable_slot", -1))

    RE_M = re.compile(r"(0x[0-9a-fA-F]+):this\.member\((0x[0-9a-fA-F]+)\)")  # F10: 单冒号
    for ci, c in enumerate(edge_constraints):
        for f in ("from", "to"):
            val = c.get(f, "")
            m = RE_M.search(val)
            if m:
                func_addr = m.group(1)
                agg_var = f"{func_addr}:this"
                var_features[agg_var].setdefault("offsets", set()).add(int(m.group(2), 16))

    # Collect this_vars from __thiscall functions
    this_vars = set()
    for func_ea in idautils.Functions():
        func_addr_str = f"0x{func_ea:08X}"
        if func_real_cc.get(func_addr_str) == ida_typeinf.CM_CC_THISCALL:
            this_vars.add(f"{func_addr_str}:this")

    for this_var in this_vars:
        if this_var not in var_features:
            var_features[this_var] = {"offsets": set(), "slots": set()}

    # All variables referenced in constraints
    all_vars = set()
    for ci, c in enumerate(edge_constraints):
        sf, sto = st[ci]
        all_vars.add(sf)
        all_vars.add(sto)

    # --- 5.1: Variable domain initialization ---
    all_classes = set()
    vt_to_class_id = {}
    for vt in vtables:
        cls_id = f"Class_{vt['start']:X}"
        vt_to_class_id[vt['start']] = cls_id
        all_classes.add(cls_id)

    # Collect class names from "::" in function names
    for this_var in this_vars:
        func_addr = this_var.split(":")[0]
        func_name = func_addr_to_name.get(func_addr, "")
        if "::" in func_name:
            cls_name = func_name.split("::")[0]
            if not cls_name.startswith("?") and "`" not in cls_name:
                all_classes.add(cls_name)

    domain = defaultdict(set)

    # TYPE_SEED: fixed types
    for c in type_seeds:
        var = c.get("var")
        t = c.get("itype")
        if var and t:
            domain[var].add(t)

    # Vtable anchors: each vtable entry's this_var -> {Class_vtaddr}
    for vt in vtables:
        cls_id = vt_to_class_id[vt['start']]
        for func_addr in vt["entries"]:
            this_var = f"0x{func_addr:08X}:this"
            if this_var in this_vars:
                domain[this_var].add(cls_id)

    # Function-name anchors: if func name has "::", use the class prefix
    for this_var in this_vars:
        if not domain[this_var]:
            func_addr = this_var.split(":")[0]
            func_name = func_addr_to_name.get(func_addr, "")
            if "::" in func_name:
                cls_name = func_name.split("::")[0]
                if not cls_name.startswith("?") and "`" not in cls_name:
                    domain[this_var].add(cls_name)

    # Open domains for unanchored this_vars -> all possible classes
    for this_var in this_vars:
        if not domain[this_var]:
            domain[this_var] = set(all_classes)

    # Ensure all constraint vars have at least empty domain
    for var in all_vars:
        if var not in domain:
            domain[var] = set()

    print(f"  Domain init: {len(domain)} vars, {len(all_classes)} candidate classes")

    # --- 5.2: AC-3 Constraint Propagation ---
    var_to_edges = defaultdict(list)
    for ci, c in enumerate(edge_constraints):
        sf, sto = st[ci]
        var_to_edges[sf].append((ci, 0))
        var_to_edges[sto].append((ci, 1))

    worklist = deque(all_vars)
    processed = 0
    MAX_AC3_ROUNDS = 20  # F9: 安全上限（防无限传播循环）
    ac3_round = 0
    while worklist:
        ac3_round += 1
        if ac3_round > MAX_AC3_ROUNDS:
            print(
                f"  [WARNING] AC-3 did not converge after {MAX_AC3_ROUNDS} rounds "
                f"(worklist={len(worklist)}); proceeding to greedy with remaining domains."
            )
            break
        round_start = processed
        while worklist:
            var = worklist.popleft()
            processed += 1

            for ci, role in var_to_edges.get(var, []):
                c = edge_constraints[ci]
                ctype = c["type"]
                sf, sto = st[ci]

                if ctype == "ASSIGN":
                    other = sto if role == 0 else sf
                    if not domain[var] or not domain[other]:
                        continue
                    # Intersection: both sides must agree on type
                    joint = domain[var] & domain[other]
                    if not joint:
                        # Disjoint domains (e.g., class set vs int/float) — skip
                        continue
                    if joint != domain[var]:
                        domain[var] = joint
                        worklist.append(var)
                    if joint != domain[other]:
                        domain[other] = joint
                        worklist.append(other)

                elif ctype in ("CALL_ARG", "RETURN_TO", "STACK_ACCESS",
                               "STACK_VAR", "FUNC_PARAM"):
                    other = sto if role == 0 else sf
                    if not domain[var] or not domain[other]:
                        # Seed from whichever side has types
                        if domain[var] and not domain[other]:
                            domain[other] = set(domain[var])
                            worklist.append(other)
                        elif domain[other] and not domain[var]:
                            domain[var] = set(domain[other])
                            worklist.append(var)
                    else:
                        # Both non-empty: bidirectional intersection
                        joint = domain[var] & domain[other]
                        if joint:
                            if joint != domain[var]:
                                domain[var] = joint
                                worklist.append(var)
                            if joint != domain[other]:
                                domain[other] = joint
                                worklist.append(other)

        round_delta = processed - round_start
        if round_delta > 0:
            print(f"  [AC-3] round={ac3_round} processed={processed} (+{round_delta}) worklist={len(worklist)}")

    if not worklist:
        print(f"  [AC-3] converged after {ac3_round} rounds, {processed} total iters (worklist empty)")
    else:
        print(f"  [AC-3] terminated by safety cap after {ac3_round} rounds, {processed} total iters")

    # Vtable-group equality: same-vtable entries share the same this type
    vt_groups = defaultdict(list)
    for vt in vtables:
        for func_addr in vt["entries"]:
            this_var = f"0x{func_addr:08X}:this"
            if this_var in this_vars:
                vt_groups[vt['start']].append(this_var)

    for vt_start, group in vt_groups.items():
        if len(group) < 2:
            continue
        cls_id = vt_to_class_id.get(vt_start)
        anchor = set()
        for gv in group:
            if domain[gv]:
                anchor.update(domain[gv])
        if not anchor and cls_id:
            anchor = {cls_id}
        if anchor:
            for gv in group:
                if not domain[gv]:
                    domain[gv] = set(anchor)
                else:
                    joint = domain[gv] & anchor
                    if joint:
                        domain[gv] = joint

    print(f"  AC-3 done: {processed} iters, {len(domain)} domains, {sum(1 for d in domain.values() if len(d)==1)} resolved")

    # --- 5.3: Subtype DAG from CALL / CALL_VTABLE / vtable structure ---
    subtype_edges = set()

    slot_to_funcs = defaultdict(list)
    for vt in vtables:
        for slot_idx, func_addr in enumerate(vt["entries"]):
            slot_to_funcs[slot_idx].append(func_addr)

    for c in edge_constraints:
        if c.get("type") == "CALL":
            caller_addr_str = c["from"].split("_")[0]
            callee_addr_str = c["to"]
            caller_this = f"{caller_addr_str}:this"
            callee_this = f"{callee_addr_str}:this"
            if caller_this in this_vars and callee_this in this_vars:
                subtype_edges.add((caller_this, callee_this))
        elif c.get("type") == "CALL_VTABLE":
            caller_addr_str = c["from"].split("_")[0]
            slot_name = c["to"]
            slot_idx = int(slot_name.split("_")[-1], 16)
            caller_this = f"{caller_addr_str}:this"
            if caller_this in this_vars:
                for func_addr in slot_to_funcs.get(slot_idx, []):
                    callee_this = f"0x{func_addr:08X}:this"
                    if callee_this in this_vars:
                        subtype_edges.add((caller_this, callee_this))

    # F12: vtable 结构启发式 → 投票贡献（不再直接加 subtype 边）。
    # 共享段必须为连续前缀（从 entry 0 起）；匹配数 >= 基类 vtable 70% 时给
    # 候选基类投票（进入 class_ref_count 加权）。最终继承关系仅由
    # CALL/CALL_VTABLE 推导的 DAG 拓扑产出。
    vt_to_first = {}
    for vt in vtables:
        if vt["entries"]:
            this_var = f"0x{vt['entries'][0]:08X}:this"
            if this_var in this_vars:
                vt_to_first[vt["start"]] = this_var

    vt_overlap_votes = []  # (child_vt_start, base_vt_start, match_count)
    for vt_child_start, child_this in vt_to_first.items():
        vt_child = next((vt for vt in vtables if vt["start"] == vt_child_start), None)
        if not vt_child:
            continue
        for vt_base_start, base_this in vt_to_first.items():
            if child_this == base_this:
                continue
            vt_base = next((vt for vt in vtables if vt["start"] == vt_base_start), None)
            if not vt_base:
                continue
            if len(vt_base["entries"]) > 2 and len(vt_child["entries"]) >= len(vt_base["entries"]):
                matches = 0
                for i in range(len(vt_base["entries"])):
                    if vt_child["entries"][i] == vt_base["entries"][i]:
                        matches += 1
                    else:
                        break  # 必须从 entry 0 起的连续前缀
                if matches >= len(vt_base["entries"]) * 0.7:
                    vt_overlap_votes.append((vt_child_start, vt_base_start, matches))

    print(f"  Vtable overlap votes: {len(vt_overlap_votes)} (F12: votes, not edges)")

    print(f"  Subtype edges: {len(subtype_edges)}")

    # --- 5.4: Greedy Assignment (weighted: vtable anchor > func-name class > propagation) ---
    # Count how many vars reference each class
    class_ref_count = defaultdict(int)
    for var, dom in domain.items():
        for t in dom:
            if t.startswith("Class_") or (not t.startswith("?") and t not in (
                "int", "float", "double", "char*", "bool", "void*", "unknown", "Param_Seed"
            )):
                class_ref_count[t] += 1

    # F12: vtable 重叠投票并入 class_ref_count（≥70% 连续前缀 → 基类加权）
    for _c_start, _b_start, _matches in vt_overlap_votes:
        _base_cls_id = vt_to_class_id.get(_b_start)
        if _base_cls_id:
            class_ref_count[_base_cls_id] += _matches


    def _anchor_bonus(var):
        """F11: this 变量的锚定加权——vtable 成员类 >> 函数名 `::` 前缀类。

        传播类（class_ref_count）为基准权重；锚定命中时大幅提升对应类。
        """
        if not var.endswith(":this"):
            return {}
        func_addr = var.split(":")[0]
        bonus = {}
        try:
            fint = int(func_addr, 16)
        except ValueError:
            return bonus
        for vt in vtables:
            if fint in vt["entries"]:
                cid = vt_to_class_id[vt["start"]]
                bonus[cid] = bonus.get(cid, 0) + 100  # vtable anchor: 最高权重
        func_name = func_addr_to_name.get(func_addr, "")
        if "::" in func_name:
            cls_name = func_name.split("::")[0]
            if cls_name and not cls_name.startswith("?") and "`" not in cls_name:
                bonus[cls_name] = bonus.get(cls_name, 0) + 10  # 函数名类: 次高
        return bonus


    # Resolve each var to a single class (greedy: weighted pick + stable tie-break)
    resolved = {}
    for var in sorted(domain.keys(), key=lambda v: len(domain[v])):
        dom = domain[var]
        if len(dom) == 1:
            resolved[var] = next(iter(dom))
        elif len(dom) > 1:
            bonus = _anchor_bonus(var)
            # F11: 权重 = 传播引用数 + 锚定奖励；tie-break 用类名字典序（稳定）
            best = max(dom, key=lambda t: (class_ref_count.get(t, 0) + bonus.get(t, 0), t))
            resolved[var] = best
        # empty domain -> stays unresolved

    print(f"  Greedy: {len(resolved)} vars resolved, {sum(1 for d in domain.values() if len(d)>1)} multi-domain skipped")

    # --- 5.5: Build final_classes ---
    final_classes = {}
    class_to_vars = defaultdict(list)

    for this_var in this_vars:
        cls = resolved.get(this_var)
        if cls is None:
            # Unresolved: create singleton unique class
            cls = f"Class_unresolved_{len(class_to_vars)}"
        class_to_vars[cls].append(this_var)

    # Map subtype_edges to class-level edges
    cls_subtype_edges = set()
    for child_this, base_this in subtype_edges:
        child_cls = resolved.get(child_this)
        base_cls = resolved.get(base_this)
        if child_cls and base_cls and child_cls != base_cls:
            cls_subtype_edges.add((child_cls, base_cls))

    # Build class-level DAG
    dag_adj = defaultdict(set)
    children_of = defaultdict(set)
    for child_cls, base_cls in cls_subtype_edges:
        dag_adj[child_cls].add(base_cls)
        children_of[base_cls].add(child_cls)

    # Depth via Kahn topological sort
    all_class_nodes = set(class_to_vars.keys()) | {c for e in cls_subtype_edges for c in e}
    in_deg = {c: 0 for c in all_class_nodes}
    for child_cls, base_cls in cls_subtype_edges:
        in_deg[child_cls] = in_deg.get(child_cls, 0) + 1

    depth = {}
    q_depth = deque([c for c in all_class_nodes if in_deg.get(c, 0) == 0])
    for c in q_depth:
        depth[c] = 0

    while q_depth:
        node = q_depth.popleft()
        for ch in children_of.get(node, set()):
            new_d = depth[node] + 1
            if ch not in depth or new_d > depth[ch]:
                depth[ch] = new_d
            in_deg[ch] -= 1
            if in_deg[ch] == 0:
                q_depth.append(ch)

    for c in all_class_nodes:
        if c not in depth:
            depth[c] = 0

    for cls, vars_list in class_to_vars.items():
        offs = set()
        slots = set()
        for v in vars_list:
            feats = var_features.get(v, {})
            offs.update(feats.get("offsets", set()))
            slots.update(feats.get("slots", set()))
        final_classes[cls] = {
            "offsets": offs,
            "slots": slots,
            "vars": vars_list,
            "root": cls,
            "depth": depth.get(cls, 0),
            "bases": list(dag_adj.get(cls, set())),
        }

    print(f"  Solved: {len(final_classes)} classes (AC-3 + Greedy)")

    # --- 5.6: Build var_types ---
    var_types = defaultdict(set)
    for cls, info in final_classes.items():
        for v in info["vars"]:
            var_types[v].add(cls)
    for c in type_seeds:
        var = c.get("var")
        itype = c.get("itype")
        if var and itype:
            var_types[var].add(itype)

    # Also propagate resolved domain info to var_types
    for var, cls in resolved.items():
        if var not in var_types or not var_types[var]:
            var_types[var].add(cls)

    # --- 5.7: Build func_this_ssa ---
    func_this_ssa = {}
    for ci, c in enumerate(edge_constraints):
        if c.get("type") == "FUNC_PARAM" and ":this" in c.get("from", ""):
            func_this_ssa[c.get("addr", "")] = st[ci][0]

    # --- 5.8: Build var_to_cls ---
    print("  [*] Post-Processing: Binding Class_X to :this pointers via Voting...")
    var_to_cls = {v: cls for cls, info in final_classes.items() for v in info["vars"]}
    func_class_votes = defaultdict(lambda: defaultdict(int))
    for agg_var, cls in var_to_cls.items():
        if agg_var.endswith(":this"):
            func_addr = agg_var.split(":")[0]
            func_class_votes[func_addr][cls] += 1

    bound_count = 0
    for func_addr, votes in func_class_votes.items():
        if func_addr in func_this_ssa and votes:
            best_cls = max(votes, key=votes.get)
            var_types[func_this_ssa[func_addr]].add(best_cls)
            bound_count += 1
    print(f"  Successfully bound {bound_count} :this pointers to their inferred classes.")

    seed_count = 0
    for ci, c in enumerate(edge_constraints):
        if c.get("type") == "CALL_ARG":
            to_var = st[ci][1]
            if ("::param" in to_var or ":this" in to_var) and not var_types[to_var]:
                var_types[to_var].add("Param_Seed")
                seed_count += 1
    print(f"  Injected {seed_count} parameter seeds.")

    # --- 5.9: rename_map (starts empty for Step 6) ---
    rename_map = {}

    # --- 5.10: Build member_class_types (from old Step 8) ---
    member_class_types = defaultdict(lambda: defaultdict(set))
    for var, types_set in var_types.items():
        m = re.search(r"(0x[0-9a-fA-F]+):this\.member\((0x[0-9a-fA-F]+)\)", var)
        if m:
            func_addr = m.group(1)
            offset = int(m.group(2), 16)
            agg_var = f"{func_addr}:this"
            if agg_var in var_to_cls:
                cls = var_to_cls[agg_var]
                member_class_types[cls][offset].update(types_set)

    # --- 5.11: Build func_sigs (from old Step 8) ---
    func_sigs = defaultdict(
        lambda: {"params": {}, "return": "void", "owner": "unknown", "param_types": {}}
    )
    for var, types_set in var_types.items():
        if "::param" in var:
            parts = var.split("::")
            if len(parts) >= 2:
                func_addr = parts[0]
                param_part = parts[1].split("_")[0]
                if param_part.startswith("param") and param_part[5:].isdigit():
                    clean_types = {t for t in types_set if t != "Param_Seed"}
                    final_type = (
                        "unknown"
                        if not clean_types
                        else next(
                            (
                                t
                                for t in clean_types
                                if t.startswith("Class_")
                                or t in ("float", "double", "char*", "bool", "void*")
                            ),
                            "int",
                        )
                    )
                    func_sigs[func_addr]["params"][param_part] = final_type
                    func_sigs[func_addr]["param_types"][param_part] = (
                        clean_types if clean_types else {"int"}
                    )
        elif var.endswith(":this") or ":this_" in var:
            func_addr = var.split(":")[0]  # F10: 单冒号解析
            clean_types = {t for t in types_set if t != "Param_Seed"}
            found_class = next((t for t in clean_types if t.startswith("Class_")), None)
            if found_class:
                func_sigs[func_addr]["params"]["param0"] = found_class
                func_sigs[func_addr]["owner"] = found_class
        elif "::return" in var:
            parts = var.split("::")
            if len(parts) >= 2:
                func_addr = parts[0]
                clean_types = {t for t in types_set if t != "Param_Seed"}
                final_type = (
                    "unknown"
                    if not clean_types
                    else next(
                        (
                            t
                            for t in clean_types
                            if t.startswith("Class_")
                            or t in ("float", "double", "char*", "bool", "void*")
                        ),
                        "void",
                    )
                )
                func_sigs[func_addr]["return"] = final_type

    for ci, c in enumerate(edge_constraints):
        if c.get("type") == "FUNC_PARAM":
            from_var = c.get("from", "")
            func_addr = c.get("addr", "")
            if ":this" in from_var:
                if func_addr not in func_sigs or func_sigs[func_addr]["owner"] == "unknown":
                    func_sigs[func_addr]["params"]["param0"] = "int"
                    func_sigs[func_addr]["owner"] = "unknown"
                    func_sigs[func_addr]["param_types"]["param0"] = {"int"}
            elif "::param" in from_var:
                m = re.search(r"::param(\d+)", from_var)
                if m:
                    param_idx = f"param{m.group(1)}"
                    if param_idx not in func_sigs[func_addr]["params"]:
                        func_sigs[func_addr]["params"][param_idx] = "int"
                        func_sigs[func_addr]["param_types"][param_idx] = {"int"}
    print(f"  Func sigs rebuilt. Total sigs: {len(func_sigs)}")

    # ============================================================
    # 6. RTTI & Name Mapping (post-processing alignment)
    # ============================================================
    print("\n[6/9] Mapping Class_N → real names...")

    # signals.json 已在模块加载时读入（SIG_SYMBOLS，供 Step 2/6/8 共用）
    sig_symbols = SIG_SYMBOLS
    print(f"  Using {len(sig_symbols)} entries from signals.json")

    # Build index: func_addr_int → list of vtable real names
    func_to_vtable_real = defaultdict(list)
    for vt in vtables:
        vt_start = vt.get("start", 0)
        vt_real = vtable_to_real_name.get(vt_start, "")
        if not vt_real:
            continue
        for entry in vt.get("entries", []):
            func_to_vtable_real[entry].append(vt_real)

    # Vote map: Class_N → {real_name → vote_count}
    vt_name_votes = defaultdict(lambda: defaultdict(int))

    # 6A: Vtable-to-name + func_addr_to_name mapping
    for cls_name, cls_info in final_classes.items():
        for v in cls_info.get("vars", []):
            if not v.endswith(":this"):
                continue
            func_addr_str = v.split(":")[0]
            try:
                func_addr_int = int(func_addr_str, 16)
            except ValueError:
                continue

            # Vote from vtable membership
            for vt_real in func_to_vtable_real.get(func_addr_int, []):
                vt_name_votes[cls_name][vt_real] += 1

            # Vote from func_addr_to_name (non-vtable methods)
            name = func_addr_to_name.get(func_addr_str, "")
            if "::" in name:
                prefix = name.split("::")[0]
                if prefix and not prefix.startswith("?") and "`" not in prefix:
                    vt_name_votes[cls_name][prefix] += 1

    # 6B: signals.json alignment (higher weight)
    for addr_str, sig in func_sigs.items():
        this_var = f"{addr_str}:this"
        if this_var not in var_to_cls:
            continue
        cls_n = var_to_cls[this_var]

        sig_entry = _signals_entry(addr_str)

        sig_name = sig_entry.get("name", "") if sig_entry else ""
        if not sig_name or sig_name.startswith(("sub_", "dword_", "byte_", "loc_", "unknown")):
            continue
        if "::" in sig_name:
            sig_class = sig_name.split("::")[0]
            if sig_class and not sig_class.startswith("?") and "`" not in sig_class:
                vt_name_votes[cls_n][sig_class] += 2  # signals = higher confidence

    # Resolve votes → rename_map (one-to-one: no two Class_N map to same name)
    rename_map = {}
    used_names = set()
    for cls, votes in vt_name_votes.items():
        if not votes:
            continue
        best = max(votes, key=votes.get)
        if best not in used_names:
            rename_map[cls] = best
            used_names.add(best)

    print(f"  Mapped {len(rename_map)} classes to real names.")

    # ============================================================
    # 7. 注入结构体 (带具体成员变量类型)
    # ============================================================
    print("\n[7/9] Injecting structs...")

    # F13: 成员宽度映射（bool=1 / float=4 / double=8 / char*=4 / void*=4 / int=4）
    _SIZEOF = {"bool": 1, "char*": 4, "float": 4, "double": 8, "void*": 4, "int": 4}


    def _type_exists(real_name):
        """F7: 类型存在检查——get_named_type 查类型库（get_name_ea 查地址符号，
        类型不在地址空间，永远 BADADDR → 误删已有类型）。"""
        try:
            r = ida_typeinf.get_named_type(
                idaapi.cvar.idati, real_name, ida_typeinf.NTF_TYPE
            )
            return r is not None and bool(r[0])
        except Exception:
            return False


    if DRY_RUN:
        print("  [--dry-run] skipping struct injection")
    else:
        inj = 0
        inj_del_skipped = 0
        for cls, info in final_classes.items():
            real_name = rename_map.get(cls, cls)
            if _type_exists(real_name):
                real_name = real_name + "_csp"  # 已有类型 → 后缀隔离，绝不覆盖
                rename_map[cls] = real_name
                RUN_MANIFEST["types_skipped_existing"].append(
                    {"csp_class": cls, "existing": rename_map.get(cls, "")}
                )

            # D1: 类名合法性校验——非法 C 标识符 → 转义（保留注入能力）。
            # 转义后名字若仍与 IDB 已有类型冲突 → 同样 _csp 隔离（F7 纪律）。
            safe_name = _sanitize_struct_name(real_name)
            if safe_name is None:
                RUN_MANIFEST["structs_skipped_invalid_name"].append(
                    {"class": cls, "real_name": real_name, "reason": "sanitized name empty"}
                )
                continue
            if safe_name != real_name:
                RUN_MANIFEST["names_sanitized"].append(
                    {"class": cls, "original": real_name, "sanitized": safe_name}
                )
                real_name = safe_name
                rename_map[cls] = real_name
                if _type_exists(real_name):
                    real_name = real_name + "_csp"
                    rename_map[cls] = real_name
                    RUN_MANIFEST["types_skipped_existing"].append(
                        {"csp_class": cls, "existing": rename_map.get(cls, "")}
                    )

            # D1: 过滤非法偏移（约束求解 BADADDR 泄漏: -1/-4 等；>=0x80000000
            # 为非 32 位偏移垃圾）。off=0 合法（`[ecx]` 无偏移访问）。过滤后
            # 剩余合法偏移仍正常注入；全部非法 → 跳过该类 + manifest 记录。
            # 注意: 过滤在 pad 生成前，last_off/max_off 推进基于合法偏移序列。
            offs_raw = sorted(info["offsets"])
            bad_offsets = [o for o in offs_raw if o < 0 or o >= 0x80000000]
            if bad_offsets:
                RUN_MANIFEST["offsets_filtered_illegal"].append(
                    {
                        "class": cls,
                        "real_name": real_name,
                        "count": len(bad_offsets),
                        "offsets": bad_offsets[:10],
                    }
                )
            offs = [o for o in offs_raw if 0 <= o < 0x80000000]
            if not offs:
                RUN_MANIFEST["structs_skipped_no_valid_offsets"].append(
                    {"class": cls, "real_name": real_name}
                )
                continue

            m_types = member_class_types.get(cls, {})
            c_decl = f"struct {real_name} {{\n"
            last_off = 0
            for off in offs:
                if off > last_off:
                    c_decl += f"    char pad_{last_off:X}[0x{off - last_off:X}];\n"

                types_set = m_types.get(off, {"int"})
                clean_types = {
                    t for t in types_set if t not in ("Param_Seed", "unknown", "void")
                }
                if not clean_types:
                    clean_types = {"int"}

                final_type = "int"
                for t in clean_types:
                    if t.startswith("Class_"):
                        rt = rename_map.get(t, t)
                        if rt != t and _type_exists(rt):
                            final_type = rt + " *"
                        else:
                            # 推断类名在 IDB 中不存在（未映射 Class_N 或前向引用）→
                            # 降级 void*（否则 parse_decls 失败导致整个结构体丢失）
                            final_type = "void *"
                        break
                    elif t in ("float", "double", "char*", "bool", "void*"):
                        final_type = t
                        break

                c_decl += f"    {final_type} field_{off:X};\n"
                # F13: 按类型宽度推进（非固定 +4）；Class_* 指针 4 字节
                size = _SIZEOF.get(final_type, 4)
                if final_type.endswith(" *"):
                    size = 4
                last_off = off + size

            max_off = max(offs) + 4
            if last_off < max_off:
                c_decl += f"    char pad_end[0x{max_off - last_off:X}];\n"
            c_decl += "};\n"

            # F7: 仅删除自己上次注入的 `_csp` 类型（存在性 + 后缀双重确认）。
            # 非 _csp 名字在 _type_exists 检查中已确认不存在 → 无需删除。
            # IDA 9.2 API: del_named_type(til, name, ntf_flags)
            if real_name.endswith("_csp") and _type_exists(real_name):
                try:
                    if idaapi.del_named_type(
                        idaapi.cvar.idati, real_name, ida_typeinf.NTF_TYPE
                    ):
                        RUN_MANIFEST["types_deleted"].append(real_name)
                    else:
                        inj_del_skipped += 1
                except Exception as e:
                    RUN_MANIFEST["errors"].append(
                        {
                            "phase": "struct_inject",
                            "message": f"del_named_type({real_name}): {e!r}",
                        }
                    )
            else:
                inj_del_skipped += 1
            try:
                idaapi.parse_decls(idaapi.cvar.idati, c_decl, None, 1)
                # 诚实记账: parse_decls 静默失败（如重名）不计数为 created
                if _type_exists(real_name):
                    inj += 1
                    RUN_MANIFEST["types_created"].append(real_name)
                else:
                    RUN_MANIFEST["errors"].append(
                        {
                            "phase": "struct_inject",
                            "message": f"parse_decls({real_name}) did not create type",
                        }
                    )
            except Exception as e:
                RUN_MANIFEST["errors"].append(
                    {"phase": "struct_inject", "message": f"parse_decls({real_name}): {e!r}"}
                )
            print(
                f"  Injected {inj} classes with typed members "
                f"(del-skip {inj_del_skipped}, errors {len(RUN_MANIFEST['errors'])})."
            )
        
    # ============================================================
    # 8. Applying signatures & globals
    # ============================================================
    print("\n[8/9] Applying signatures & globals...")
    total_funcs = sum(
        1
        for f in idautils.Functions()
        if ida_segment.get_segm_name(ida_segment.getseg(f)) == ".text"
    )
    DATA_SEGS = {".data", ".rdata", ".bss"}
    total_globals = sum(
        1
        for ea, name in idautils.Names()
        if name
        and ida_segment.get_segm_name(ida_segment.getseg(ea)) in DATA_SEGS
        and not ida_funcs.get_func(ea)
        and not (
            name.startswith("a")
            or name.startswith("asc_")
            or "vftable" in name
            or "RTTI" in name
            or name.startswith("unk_")
        )
    )

    def _make_tinfo(type_name):
        t = ida_typeinf.tinfo_t()
        btf = getattr(ida_typeinf, f"BTF_{type_name}", None)
        if btf is not None:
            t.create_simple_type(btf)
            return t
        bt = getattr(ida_typeinf, f"BT_{type_name}", None)
        if bt is not None:
            if type_name == "INT":
                btf_int = getattr(ida_typeinf, "BTF_INT", getattr(idaapi, "BT_INT32", None))
                if btf_int is not None:
                    t.create_simple_type(btf_int)
                    return t
            return ida_typeinf.tinfo_t(bt)
        return t

    def get_tinfo_from_types(types_set, is_this=False):
        for t_str in types_set:
            if t_str in ("unknown", "int", "Param_Seed", "void"):
                continue
            t = ida_typeinf.tinfo_t()
            if t.get_named_type(idaapi.cvar.idati, t_str):
                is_udt = getattr(t, "is_udt", getattr(t, "is_struct", lambda: False))()
                if is_udt:
                    t.create_ptr(t)
                    return t
                elif t.is_ptr() or t.is_array():
                    return t
        for t_str in types_set:
            if t_str == "float" or t_str == "float*":
                return _make_tinfo("FLOAT")
            if t_str == "double":
                return _make_tinfo("DOUBLE")
            if t_str == "char*":
                t = _make_tinfo("CHAR")
                t.create_ptr(t)
                return t
            if t_str == "bool":
                return _make_tinfo("BOOL")
            if t_str == "void*":
                t = _make_tinfo("VOID")
                t.create_ptr(t)
                return t
        t = _make_tinfo("VOID") if is_this else _make_tinfo("INT")
        if is_this and t:
            t.create_ptr(t)
        return t

    def get_tinfo(ts, is_this=False):
        if ts in ("unknown", "int"):
            return _make_tinfo("INT")
        if ts == "void":
            return _make_tinfo("VOID")
        t = ida_typeinf.tinfo_t()
        if t.get_named_type(idaapi.cvar.idati, ts):
            is_udt = getattr(t, "is_udt", getattr(t, "is_struct", lambda: False))()
            if is_udt:
                t.create_ptr(t)
                return t
            return t
        if ts == "char*":
            t = _make_tinfo("CHAR")
            t.create_ptr(t)
            return t
        if ts == "float":
            return _make_tinfo("FLOAT")
        t = _make_tinfo("VOID") if is_this else _make_tinfo("INT")
        if is_this and t:
            t.create_ptr(t)
        return t

    applied, renamed, covered_funcs, strong_typed, int_typed = 0, 0, 0, 0, 0
    fastcall_skipped = 0
    uncovered_funcs_list = []

    # F8: 改名白名单（symbols-locked-v2 纪律）——仅占位符名字可改
    RENAME_ALLOWED = re.compile(r"^(sub_|method_|Class_[0-9A-Fa-f]+|loc_|unk_)")


    def _safe_rename(func_ea, faddr, orig, new_name):
        """F8: 白名单 + signals.json 保护改名（替换 SN_FORCE 无条件改名）。

        返回 True 表示成功改名；skip/protect/fail 均记录 manifest 不中断。
        """
        nonlocal renamed
        if not RENAME_ALLOWED.match(orig or ""):
            RUN_MANIFEST["names_skipped_protected"].append(
                {
                    "address": faddr,
                    "orig": orig,
                    "new": new_name,
                    "reason": "existing name not in rename whitelist (symbols-locked-v2)",
                }
            )
            return False
        sig_entry = _signals_entry(faddr)
        sig_name = sig_entry.get("name", "") if sig_entry else ""
        if sig_name and not RENAME_ALLOWED.match(sig_name):
            RUN_MANIFEST["names_skipped_protected"].append(
                {
                    "address": faddr,
                    "orig": orig,
                    "new": new_name,
                    "reason": f"signals.json holds real name {sig_name!r} — protected",
                }
            )
            return False
        if ida_name.set_name(func_ea, new_name, ida_name.SN_NOWARN):  # 无 SN_FORCE
            renamed += 1
            RUN_MANIFEST["names_renamed"].append(
                {"address": faddr, "from": orig, "to": new_name}
            )
            return True
        RUN_MANIFEST["errors"].append(
            {"phase": "rename", "address": faddr, "message": f"set_name({new_name}) failed"}
        )
        return False

    for func_ea in idautils.Functions():
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != ".text":
            continue
        func = idaapi.get_func(func_ea)
        if not func or func.flags & idaapi.FUNC_THUNK:
            continue

        faddr = f"0x{func_ea:08X}"
        orig = idc.get_func_name(func_ea)
        if faddr in func_sigs:
            covered_funcs += 1
            sig = func_sigs[faddr]
            owner = rename_map.get(sig["owner"], sig["owner"])
            try:
                stack_args = func_stack_args.get(faddr, 0)
                real_cc = func_real_cc.get(faddr, ida_typeinf.CM_CC_CDECL)
                is_thiscall = real_cc == ida_typeinf.CM_CC_THISCALL
                if real_cc == ida_typeinf.CM_CC_FASTCALL:
                    # F2: fastcall 的 ecx/edx 寄存器参数未知——保守跳过签名应用，
                    # 避免把栈参数错配为寄存器参数
                    fastcall_skipped += 1
                    continue
                fd = ida_typeinf.func_type_data_t()
                fd.cc = real_cc
                ret_type = sig.get("return", "void")
                if ret_type.startswith("Class_"):
                    ret_type = rename_map.get(ret_type, ret_type)
                fd.rettype = get_tinfo(ret_type)

                if is_thiscall:
                    arg = ida_typeinf.funcarg_t()
                    our_type_str = sig["owner"]
                    if our_type_str != "unknown":
                        our_type_str = rename_map.get(our_type_str, our_type_str)
                    clean_types = {our_type_str} if our_type_str != "unknown" else {"void*"}
                    arg.type = get_tinfo_from_types(clean_types, is_this=True)
                    arg.name = "this"
                    fd.push_back(arg)

                for i in range(stack_args):
                    arg = ida_typeinf.funcarg_t()
                    param_idx = f"param{i}"
                    our_type_str = sig["params"].get(param_idx, "unknown")
                    if our_type_str.startswith("Class_"):
                        our_type_str = rename_map.get(our_type_str, our_type_str)
                    if our_type_str not in ("unknown", "int"):
                        clean_types = {our_type_str}
                    else:
                        clean_types = {
                            t
                            for t in sig["param_types"].get(param_idx, set())
                            if t != "Param_Seed"
                        }
                        clean_types = {
                            rename_map.get(t, t) if t.startswith("Class_") else t
                            for t in clean_types
                        }
                    if not clean_types:
                        clean_types = {"int"}
                    arg.type = get_tinfo_from_types(clean_types)
                    arg.name = f"a{i+1}"
                    fd.push_back(arg)

                if not DRY_RUN:  # --dry-run: 不注入/不改名，仅统计
                    t = ida_typeinf.tinfo_t()
                    if t.create_func(fd) and idaapi.apply_tinfo(
                        func_ea, t, idaapi.TINFO_DEFINITE
                    ):
                        applied += 1
                        ida_funcs.update_func(func)
                        if owner != "unknown" and is_thiscall:
                            clean = orig.split("::")[-1] if "::" in orig else orig
                            if clean.startswith("sub_"):
                                clean = "method_" + clean[4:]
                            new_name = f"{owner}::{clean}"
                            if orig != new_name:
                                _safe_rename(func_ea, faddr, orig, new_name)
                    is_strong = (
                        owner != "unknown"
                        or any(
                            p not in ("void", "int", "unknown")
                            for p in sig["params"].values()
                        )
                        or sig["return"] not in ("void", "int", "unknown")
                    )
                    if is_strong:
                        strong_typed += 1
                    else:
                        int_typed += 1
            except Exception as e:
                # F8: 错误收集替代静默吞异常
                RUN_MANIFEST["errors"].append(
                    {
                        "phase": "apply_tinfo",
                        "address": faddr,
                        "exception": repr(e),
                        "traceback": traceback.format_exc(),
                    }
                )
        else:
            uncovered_funcs_list.append({"address": faddr, "name": orig})

    true_unknown_funcs = total_funcs - covered_funcs
    g_app, g_skip = 0, 0
    for var, types_set in var_types.items():
        if (
            var in X86_REGS
            or var.startswith("stack_")
            or "::" in var
            or ".this." in var
            or "_call" in var
            or ("Param_Seed" in types_set and len(types_set) == 1)
        ):
            continue
        gea = idc.get_name_ea(idaapi.BADADDR, var)
        if gea != idaapi.BADADDR:
            seg = ida_segment.getseg(gea)
            if seg and ida_segment.get_segm_name(seg).lower() in ("idata", "extern", "plt"):
                g_skip += 1
                continue
            name = idc.get_name(gea)
            if (
                idaapi.get_func(gea)
                or "vftable" in name
                or "RTTI" in name
                or name.startswith("??_")
                or name.startswith("__imp_")
            ):
                g_skip += 1
                continue
            if not any(
                name.lower() == f"{p}{gea:X}".lower()
                for p in ["dword_", "byte_", "word_", "qword_"]
            ):
                g_skip += 1
                continue

            existing_t = ida_typeinf.tinfo_t()
            if idaapi.get_tinfo(existing_t, gea):
                is_udt = getattr(
                    existing_t, "is_udt", getattr(existing_t, "is_struct", lambda: False)
                )()
                if (
                    existing_t.is_func()
                    or existing_t.is_funcptr()
                    or is_udt
                    or existing_t.is_array()
                ):
                    g_skip += 1
                    continue

            if any(
                x.type in (idaapi.fl_CF, idaapi.fl_CN, idaapi.fl_JF, idaapi.fl_JN)
                for x in idautils.XrefsTo(gea)
            ):
                g_skip += 1
                continue
            gval = ida_bytes.get_dword(gea)
            if TEXT_START <= gval < TEXT_END and ida_funcs.get_func(gval):
                g_skip += 1
                continue
            clean_types = {t for t in types_set if t != "Param_Seed"}
            if not clean_types:
                clean_types = {"int"}
            if any(t.startswith("Class_") for t in clean_types):
                clean_types = {"void*"}
            if DRY_RUN:  # --dry-run: 不应用全局类型（IDB 只读）
                g_skip += 1
                continue
            t_info = get_tinfo_from_types(clean_types, is_this=False)
            if t_info and idaapi.apply_tinfo(gea, t_info, idaapi.TINFO_DEFINITE):
                g_app += 1

    print(
        f"  [Funcs] Total: {total_funcs} -> Strong: {strong_typed} ({strong_typed/total_funcs*100:.1f}%), Int: {int_typed} ({int_typed/total_funcs*100:.1f}%), Unknown: {true_unknown_funcs} ({true_unknown_funcs/total_funcs*100:.1f}%)"
    )
    print(
        f"  [Globals] Total: {total_globals} -> Typed: {g_app} ({g_app/total_globals*100:.1f}%)"
    )
    print(f"  Applied {applied} sigs, renamed {renamed} methods. Skipped {g_skip} items.")

    # ============================================================
    # 9. 导出完整可追踪报告
    # ============================================================
    print("\n[9/9] Exporting Ultimate Traceable Report...")
    if DRY_RUN:
        # --dry-run: 导出到临时目录（不污染 full_report）
        report_dir = os.path.join(PROJ_ROOT, ".omo", "dry_run_report")
    else:
        report_dir = os.path.join(PROJ_ROOT, "tools/csp/full_report")
    os.makedirs(report_dir, exist_ok=True)

    def get_real_type_name(csp_type):
        if csp_type == "unknown" or not csp_type.startswith("Class_"):
            return csp_type
        return rename_map.get(csp_type, csp_type) + "*"

    print("  [*] Exporting classes & inheritance...")
    classes_export = {}
    for cls, info in final_classes.items():
        m_types = member_class_types.get(cls, {})
        typed_members = {}
        for off, types_set in m_types.items():
            clean_types = {
                t for t in types_set if t not in ("Param_Seed", "unknown", "void")
            }
            if not clean_types:
                clean_types = {"int"}
            final_type = next(
                (
                    t
                    for t in clean_types
                    if t.startswith("Class_")
                    or t in ("float", "double", "char*", "bool", "void*")
                ),
                "int",
            )
            typed_members[f"0x{off:X}"] = (
                get_real_type_name(final_type)
                if final_type.startswith("Class_")
                else final_type
            )

        inherited_from = []
        if info.get("bases"):
            for br in info["bases"]:
                if br in rename_map:
                    inherited_from.append(rename_map[br])
                else:
                    inherited_from.append(br)

        classes_export[cls] = {
            "csp_name": cls,
            "real_name": rename_map.get(cls, "unknown"),
            "offsets": sorted(list(info["offsets"])),
            "slots": sorted(list(info["slots"])),
            "vars_count": len(info["vars"]),
            "depth": info.get("depth", 0),
            "inherited_from": sorted(list(set(inherited_from))),
            "typed_members": typed_members,
        }
    with open(os.path.join(report_dir, "csp_classes.json"), "w", encoding="utf-8") as f:
        json.dump(
            {"total_classes": len(classes_export), "classes": classes_export}, f, indent=2
        )
    del classes_export

    print("  [*] Exporting functions...")
    funcs_export = {}
    for faddr, sig in func_sigs.items():
        owner_csp = sig["owner"]
        owner_real = rename_map.get(owner_csp, "unknown")
        orig_name = func_addr_to_name.get(faddr, "unknown")
        if owner_real != "unknown":
            clean = orig_name.split("::")[-1] if "::" in orig_name else orig_name
            if clean.startswith("sub_"):
                clean = "method_" + clean[4:]
            inferred_name = f"{owner_real}::{clean}"
            cc = "thiscall"
        else:
            inferred_name = orig_name
            cc = "cdecl"
        params_export = []
        pc = 0
        while f"param{pc}" in sig["params"]:
            p_csp = sig["params"][f"param{pc}"]
            p_real = get_real_type_name(p_csp)
            p_name = "this" if (pc == 0 and owner_csp != "unknown") else f"a{pc}"
            params_export.append(
                {"index": pc, "name": p_name, "csp_type": p_csp, "real_type": p_real}
            )
            pc += 1
        funcs_export[faddr] = {
            "address": faddr,
            "original_name": orig_name,
            "inferred_real_class": owner_real,
            "inferred_name": inferred_name,
            "calling_convention": cc,
            "return_type": get_real_type_name(sig.get("return", "void")),
            "params": params_export,
        }
    with open(os.path.join(report_dir, "csp_functions.json"), "w", encoding="utf-8") as f:
        json.dump(
            {"total_functions": len(funcs_export), "functions": funcs_export}, f, indent=2
        )
    del funcs_export

    print("  [*] Exporting globals...")
    globals_export = {}
    for var, types_set in var_types.items():
        if (
            var in X86_REGS
            or var.startswith("stack_")
            or "::" in var
            or ".this." in var
            or "_call" in var
            or ("Param_Seed" in types_set and len(types_set) == 1)
        ):
            continue
        gea = idc.get_name_ea(idaapi.BADADDR, var)
        if gea != idaapi.BADADDR:
            final_type = next(
                (
                    t
                    for t in types_set
                    if t.startswith("Class_")
                    or t in ("float", "double", "char*", "bool", "void*")
                ),
                "int",
            )
            globals_export[var] = {
                "name": var,
                "address": f"0x{gea:X}",
                "csp_type": final_type,
                "real_type": (
                    get_real_type_name(final_type)
                    if final_type.startswith("Class_")
                    else final_type
                ),
            }
    with open(os.path.join(report_dir, "csp_globals.json"), "w", encoding="utf-8") as f:
        json.dump(
            {"total_globals": len(globals_export), "globals": globals_export}, f, indent=2
        )
    del globals_export

    print("  [*] Skipping massive var_mapping and constraints export to prevent OOM...")
    gc.collect()

    # T7 验证产物：CC 提取结果（离线 verify_extract_output.py 对比 signals.json 用）
    cc_export = {
        "func_real_cc": {k: _CM_TO_CC_NAME.get(v, str(v)) for k, v in func_real_cc.items()},
        "func_stack_args": {k: v for k, v in func_stack_args.items()},
        "func_real_arg_count": {k: v for k, v in func_real_arg_count.items()},
    }
    with open(os.path.join(report_dir, "extracted_cc.json"), "w", encoding="utf-8") as f:
        json.dump(cc_export, f, indent=1)
    print(f"  [*] extracted_cc.json written ({len(cc_export['func_real_cc'])} funcs)")

    # F8: 错误摘要 + manifest 持久化
    if RUN_MANIFEST["errors"]:
        print(f"  [Manifest] {len(RUN_MANIFEST['errors'])} errors collected (first 20):")
        for err in RUN_MANIFEST["errors"][:20]:
            msg = err.get("exception") or err.get("message", "")
            print(f"    {err.get('phase','?')} @ {err.get('address','?')}: {str(msg)[:120]}")
    _manifest_path = _write_manifest()
    print(f"  [Manifest] written to: {_manifest_path}")
    print(
        f"  [Manifest] types_created={len(RUN_MANIFEST['types_created'])} "
        f"types_deleted={len(RUN_MANIFEST['types_deleted'])} "
        f"names_renamed={len(RUN_MANIFEST['names_renamed'])} "
        f"names_skipped_protected={len(RUN_MANIFEST['names_skipped_protected'])}"
    )

    print(f"  [JSON] Ultimate Traceable Report saved to: {report_dir}")
    idaapi.enable_auto(True)
    idaapi.auto_mark_range(0, idaapi.BADADDR, idaapi.AU_USED)
    try:
        import ida_hexrays

        ida_hexrays.clear_hexrays_cache()
        print("[*] Hex-Rays cache cleared.")
    except Exception:
        pass

    print(f"\n{'='*60}")
    print(f"ENGINE COMPLETE in {time.time() - start_time:.1f}s")
    print(f"  Classes injected: {len(final_classes)}")
    print(f"  Signatures applied: {applied}")
    print(f"  Globals applied: {g_app}")
    print(f"  Full report exported to: {report_dir}")
    print(f"{'='*60}")



if idaapi is not None:  # 离线导入（verify 工具）时不执行
    try:
        _run_main()
    finally:
        # F17: 任何异常路径都恢复 auto-analysis（enable_auto 配对）
        idaapi.enable_auto(True)
        idaapi.auto_mark_range(0, idaapi.BADADDR, idaapi.AU_USED)
        try:
            import ida_hexrays
            ida_hexrays.clear_hexrays_cache()
            print("[*] Hex-Rays cache cleared (finally).")
        except Exception:
            pass
