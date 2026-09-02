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
  D2 (F3 确定性): 求解非确定源于 Python set/dict 迭代 hash 随机化——headless
          复验固定种子以保证 dry/full 完全可复现:
          `set PYTHONHASHSEED=0 && set RA2YR_DRY_RUN=1 && idat -A -S"script"
          replica.i64`（同一种子下 dry/full 求解应逐位一致；manifest 的
          python_hash_seed 字段记录本次运行实际种子，供复验核对）。
"""


import json, os, sys, re, time, gc, traceback
from bisect import bisect_right
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
    PROJ_ROOT = r"D:\RA2YR_ReSource"  # 最后 fallback（2026-08 修机结束，盘符回归 D:）
if PROJ_ROOT not in sys.path:
    sys.path.insert(0, PROJ_ROOT)
from tools.type_infer.scope_vars import (
    build_scoped_index,
    build_adjacency,
    find_containing_func,
)

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

# ============================================================
# T5 (E1): MEMBER_ANCHOR —— 成员表强锚（1,120 类 header 进求解器）
# 数据源（只读加载，不修改）:
#   tools/member_lookup.json    {ClassName: {offset_str: {name, type}}}（核心类）
#   anchors/member_types.json   {"Class+0xOFF": {type, confidence}}（ANCHORED 条目）
# 结构: MEMBER_ANCHOR[(class_name, off)] = 归一化类型（域词汇: int/bool/float/
#       double/char*/void*/类名）。值类型/模板/数组成员不可表达 → 跳过。
# ============================================================

# 成员类型归一化: 基础类型映射（C 风格类型字符串 → 域词汇）
_MEMBER_PRIM_MAP = {
    "int": "int",
    "int32_t": "int",
    "uint32_t": "int",
    "unsigned int": "int",
    "unsigned __int8": "int",
    "unsigned __int16": "int",
    "unsigned __int32": "int",
    "int16_t": "int",
    "uint16_t": "int",
    "int8_t": "int",
    "uint8_t": "int",
    "BOOL": "int",
    "DWORD": "int",
    "LONG": "int",
    "size_t": "int",
    "bool": "bool",
    "float": "float",
    "double": "double",
}
_RE_STAR_SPACE = re.compile(r"\s*\*\s*")


def _normalize_member_type(t):
    """T5 (E1): 成员类型字符串 → 域词汇；不可表达 → None。

    规则（保守，宁缺毋滥）:
    - 数组/模板/函数签名（含 `[` `<` `>` `(`）→ None
    - 已知基础类型 → int/bool/float/double
    - `char*/wchar_t*/BYTE*` → char*；`void*` → void*
    - `ClassName*` / `ClassName**` → ClassName（类指针 → 类名锚）
    - 无 `*` 的裸标识符（值类型/枚举成员）→ None（读 dword 语义不可靠）
    """
    if not t:
        return None
    key = _RE_STAR_SPACE.sub("*", t.strip())
    if any(ch in key for ch in "[<>()"):
        return None
    if key in _MEMBER_PRIM_MAP:
        return _MEMBER_PRIM_MAP[key]
    star = 0
    base = key
    while base.endswith("*"):
        base = base[:-1]
        star += 1
    if not star:
        return None  # 值类型/枚举: 保守跳过
    if base in ("char", "wchar_t", "unsigned char", "BYTE", "_BYTE"):
        return "char*"
    if base == "void":
        return "void*"
    if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", base):
        return base  # 类指针 → 类名锚
    return None


def _load_member_anchors():
    """加载成员表 → {(class_name, off): normalized_type}。
    member_lookup.json 优先（冲突不覆盖），member_types.json ANCHORED 补缺口。"""
    anchors = {}
    ml_path = os.path.join(PROJ_ROOT, "tools", "member_lookup.json")
    if os.path.exists(ml_path):
        try:
            with open(ml_path, "r", encoding="utf-8") as f:
                ml_data = json.load(f)
            for _cls, _members in ml_data.items():
                for _off_str, _info in _members.items():
                    try:
                        _off = int(_off_str, 0)
                    except ValueError:
                        continue
                    _t = _normalize_member_type((_info or {}).get("type", ""))
                    if _t:
                        anchors.setdefault((_cls, _off), _t)
        except Exception as e:
            print(f"  Warning: Could not load member_lookup.json: {e}")
    mt_path = os.path.join(PROJ_ROOT, "anchors", "member_types.json")
    if os.path.exists(mt_path):
        try:
            with open(mt_path, "r", encoding="utf-8") as f:
                mt_data = json.load(f)
            for _k, _info in mt_data.items():
                if (_info or {}).get("confidence") != "ANCHORED":
                    continue
                _m = re.match(r"^(.+?)\+(0x[0-9A-Fa-f]+)$", _k)
                if not _m:
                    continue
                _t = _normalize_member_type((_info or {}).get("type", ""))
                if _t:
                    anchors.setdefault((_m.group(1), int(_m.group(2), 16)), _t)
        except Exception as e:
            print(f"  Warning: Could not load member_types.json: {e}")
    return anchors


MEMBER_ANCHOR = _load_member_anchors()
print(f"  Loaded {len(MEMBER_ANCHOR)} member anchors (T5 E1 MEMBER_ANCHOR)")


# ============================================================
# Phase 1a: RTTI 真值层 —— anchors/rtti_vtable_class.json +
# rtti_hierarchy.json（tools/rtti_truth_extract.py 直接解析二进制
# 产出，与活 IDB 1214/1214 一致，见 tools/rtti_ida_xcheck.py）。
# 数据源为二进制 MSVC6 RTTI 结构本身，不经过 hpp 派生链——
# 与 MEMBER_ANCHOR（hpp 循环派生）互为独立来源。
# ============================================================

def _load_rtti_truth():
    """加载 RTTI 真值 → (vtable_map, direct, this_adjust, secondary_base)。

    vtable_map: {hex_va: {"class","col_offset","col_va"}}
    direct:     {class: [direct bases]}（MI 完整直接基类列表）
    this_adjust:{\"Derived->Base\": [mdisp, pdisp, vdisp]}
    secondary_base: {hex_va: base_class}——col_offset!=0 的次级 vtable，
                该偏移处唯一非虚直接基类（多候选时放弃，保守不解析）。
    """
    vtable_map, direct, this_adjust, secondary_base = {}, {}, {}, {}
    vt_path = os.path.join(PROJ_ROOT, "anchors", "rtti_vtable_class.json")
    if os.path.exists(vt_path):
        try:
            with open(vt_path, "r", encoding="utf-8") as f:
                vtable_map = json.load(f).get("vtables", {})
        except Exception as e:
            print(f"  Warning: Could not load rtti_vtable_class.json: {e}")
    hier_path = os.path.join(PROJ_ROOT, "anchors", "rtti_hierarchy.json")
    if os.path.exists(hier_path):
        try:
            with open(hier_path, "r", encoding="utf-8") as f:
                hier = json.load(f)
            direct = hier.get("direct", {})
            this_adjust = hier.get("this_adjust", {})
        except Exception as e:
            print(f"  Warning: Could not load rtti_hierarchy.json: {e}")
    _direct_of = direct
    for _va, _info in vtable_map.items():
        _off = (_info or {}).get("col_offset") or 0
        _cls = (_info or {}).get("class", "")
        if not _off or _cls not in _direct_of:
            continue
        _cands = sorted(
            _b for _b in _direct_of[_cls]
            if RTTI_THIS_ADJUST_GET(this_adjust, _cls, _b, _off)
        )
        if len(_cands) == 1:
            secondary_base[_va] = _cands[0]
    return vtable_map, direct, this_adjust, secondary_base


def RTTI_THIS_ADJUST_GET(this_adjust, cls, base, off):
    """(cls->base) 的 mdisp==off 且非虚基类（pdisp==-1）。"""
    v = this_adjust.get(f"{cls}->{base}")
    return bool(v) and v[0] == off and v[1] == 0xFFFFFFFF


RTTI_VTABLE_MAP, RTTI_DIRECT, RTTI_THIS_ADJUST, RTTI_SECONDARY_BASE = (
    _load_rtti_truth()
)
print(
    f"  Loaded RTTI truth: {len(RTTI_VTABLE_MAP)} vtables, "
    f"{len(RTTI_DIRECT)} classes w/ hierarchy, "
    f"{len(RTTI_SECONDARY_BASE)} resolvable secondary bases"
)

# T5 (E2): signals.json return_type 归一化（仅基础类型; 类名走 this 锚定）
_SIG_RETURN_NORM = {
    "int": "int",
    "unsigned int": "int",
    "char": "int",
    "BOOL": "int",
    "LONG": "int",
    "DWORD": "int",
    "HRESULT": "int",
    "LRESULT": "int",
    "size_t": "int",
    "__int16": "int",
    "bool": "bool",
    "float": "float",
    "double": "double",
    "char*": "char*",
    "wchar_t*": "char*",
    "void*": "void*",
}


def _normalize_sig_return_type(rt):
    """T5 (E2): signals return_type → 域词汇；非基础类型/void/unknown → None。"""
    if not rt:
        return None
    key = _RE_STAR_SPACE.sub("*", rt.strip())
    return _SIG_RETURN_NORM.get(key)


def _sig_class_prefix(name):
    """T5 (E2): `::` 前缀类名提取（'AudioMixer::Init' → 'AudioMixer'）。
    `?` 开头（mangled）/ 无 `::` → None。"""
    if not name or "::" not in name:
        return None
    prefix = name.split("::")[0]
    if not prefix or prefix.startswith("?") or "`" in prefix:
        return None
    return prefix


# ============================================================
# T7 (B1/B2): 分域域模型 + 锚点分层
#
# B1 分域: 每个变量的域拆为 class_domain（{Class_X/真实类名}）+ type_domain
#   （{int,float,double,char*,bool,void*,...}）。ASSIGN 同类域交集（现有语义
#   保持）；跨域用兼容性矩阵（_compat_meet）: Class_X↔void* 兼容（类可单向
#   降级 void*，不反向）、Class_X↔int/float/bool 不兼容 → 记录矛盾（不再静默
#   跳过）、bool ⊂ int（bool 可并入 int 域）。解析汇合: 优先类域，类域空用
#   类型域。开关 `CSP_DOMAIN_SPLIT`: =1 或未设 = 启用分域；=0 = 完全回退当前
#   单域行为（修复后基线——回归对照）。
#
# B2 锚点分层: anchor_strength（3=vtable 锚 / 2=成员+签名+全局锚 / 1=传播 /
#   0=开放）进 greedy 加权（候选排序）与矛盾仲裁（强度高者优先）。
#
# 所有域写入走 _domain_add/_domain_update（按类型路由到类/类型域）；读取
# 联合视图走 _domain_union；跨域 meet 走 _compat_meet + _b1_edge_meet（纯
# 函数，离线可测）。
# ============================================================

# B1: 分域开关（模块级，import 时读取——离线测试可用子进程验证回退）
DOMAIN_SPLIT = os.environ.get("CSP_DOMAIN_SPLIT", "1") != "0"

# 基础类型词汇（== 5.4 greedy class_ref_count 过滤集——单一来源）
BASE_TYPE_VOCAB = frozenset(
    {"int", "float", "double", "char*", "bool", "void*", "unknown", "Param_Seed"}
)


def _is_class_type(t):
    """T7 (B1): t 是否为类候选类型（Class_X 占位 vtable 类 或 真实类名）。

    判定与 5.4 greedy 的 class_ref_count 过滤集一致（同一语义单一来源）:
      - `Class_*` 前缀 → 类
      - 非基础类型词汇、非 mangled（`?` 前缀）→ 类
    """
    if not isinstance(t, str) or not t:
        return False
    if t.startswith("Class_"):
        return True
    return not t.startswith("?") and t not in BASE_TYPE_VOCAB


def _domain_add(domain, type_domain, var, t):
    """T7 (B1): 域写入路由——类候选进 class_domain，基础类型进 type_domain。

    开关关闭（DOMAIN_SPLIT=False）时全部进 class_domain（单域，与基线完全
    一致——type_domain 不参与任何消费）。
    """
    if DOMAIN_SPLIT and not _is_class_type(t):
        type_domain[var].add(t)
    else:
        domain[var].add(t)


def _domain_update(domain, type_domain, var, iterable):
    """T7 (B1): 批量域写入路由（逐元素走 _domain_add）。"""
    for t in iterable:
        _domain_add(domain, type_domain, var, t)


def _domain_union(domain, type_domain, var):
    """T7 (B1): 联合视图——class_domain ∪ type_domain（只读，返回新 set）。

    开关关闭时仅 class_domain（== 基线单域）。
    """
    out = set(domain.get(var, ()))
    if DOMAIN_SPLIT:
        out.update(type_domain.get(var, ()))
    return out


def _domain_replace(domain, type_domain, var, merged_set):
    """T7 (B1): 整域替换（E5 合并结果等）——按元素路由到类/类型域。

    开关关闭时退化为普通赋值（与基线一致）。
    """
    if DOMAIN_SPLIT:
        domain[var] = set()
        type_domain[var] = set()
        _domain_update(domain, type_domain, var, merged_set)
    else:
        domain[var] = set(merged_set)


def _b1_is_empty(domain, type_domain, var):
    """T7 (B1): 分域下变量域是否全空（类域与类型域皆空）。"""
    return not domain.get(var) and not type_domain.get(var)


def _compat_meet(cls_set, type_set):
    """T7 (B1): 跨域兼容性矩阵（纯函数，离线可测）。

    输入: cls_set = 类域候选（{Class_X, ...}）; type_set = 基础类型域候选。
    矩阵判定（逐对）:
      - 类 ↔ void*   → 兼容（类可单向降级 void*：void* 是类指针超类型，
        两侧信息保留，void* 不反向升级为类）
      - 类 ↔ unknown → 兼容（unknown 是未知占位，不构成矛盾）
      - 类 ↔ int/float/double/bool/char* → 不兼容（矛盾——不再静默跳过，
        调用方记录）
    返回 (new_cls, new_type, conflict):
      - 兼容: (set(cls_set), set(type_set), False)（域不变）
      - 不兼容: (set(cls_set), set(type_set), True)（域不变——矛盾记录是
        唯一的副作用）
    纯函数——不修改输入。
    """
    if not cls_set or not type_set:
        return set(cls_set), set(type_set), False
    for t in type_set:
        if t in ("void*", "unknown"):
            continue
        return set(cls_set), set(type_set), True
    return set(cls_set), set(type_set), False


def _type_meet(a, b):
    """T7 (B1): 同域（类型域）meet——普通交集 + bool ⊂ int（纯函数）。

    规则:
      - 普通交集非空 → 交集（现有语义保持）
      - 空交集且两侧含 bool/int → {bool}（bool ⊂ int：bool 可并入 int 域，
        meet 取更窄一侧——两侧收敛到 bool）
      - 其他空交集 → None（int↔float 等互斥保持静默——非 B1 新增矛盾域）
    返回 set 或 None（None = 无交集）。
    """
    joint = a & b
    if joint:
        return joint
    if ("bool" in a and "int" in b) or ("int" in a and "bool" in b):
        return {"bool"}
    return None


def _b1_edge_meet(cls_a, ty_a, cls_b, ty_b):
    """T7 (B1): 双向边 meet（ASSIGN / RETURN_TO / STACK_ACCESS / STACK_VAR /
    FUNC_PARAM 共用；纯函数，离线可测）。

    输入: 两侧分域（可空 set）。返回:
      (new_cls_a, new_ty_a, new_cls_b, new_ty_b, conflict, conflict_pairs)
    - 同类域交集（现有语义保持）: cls_a∩cls_b / ty_a∩ty_b——空交集保持原域
      （类类互斥 = 旧静默跳过语义，不记录）；一侧为空时该侧不被播种
      （ASSIGN 空侧不播种语义保持——只有调用方的 seed 分支负责播种）
    - 跨域兼容性矩阵: 类↔void*/unknown 兼容（两侧域不变）；类↔int/float/
      double/bool/char* 不兼容 → conflict=True + pairs（域不变——调用方
      记录矛盾，不再静默跳过）
    - bool ⊂ int: {bool}∩{int} = {bool}（并入 int 域，meet 取更窄）
    """
    cj = (cls_a & cls_b) if (cls_a and cls_b) else None
    tj = _type_meet(ty_a, ty_b)
    conflict = False
    pairs = []
    for cset, tset in ((cls_a, ty_b), (cls_b, ty_a)):
        if not cset or not tset:
            continue
        _, _, cf = _compat_meet(cset, tset)
        if cf:
            conflict = True
            for c in cset:
                for t in tset:
                    if t in ("void*", "unknown"):
                        continue
                    if len(pairs) >= 3:
                        break
                    pairs.append((c, t))
                if len(pairs) >= 3:
                    break
    return (
        cj if cj else set(cls_a),
        tj if tj is not None else set(ty_a),
        cj if cj else set(cls_b),
        tj if tj is not None else set(ty_b),
        conflict,
        pairs,
    )


def _b1_call_arg_step(frm_cls, frm_ty, to_cls, to_ty, role, anchor_str):
    """T7 (B1) × T6 (A3): CALL_ARG 单向传播单步（纯函数，离线可测）。

    A3 规则保持（from→to 单向；反向仅在 to 空且 from 有类锚时允许正向 seed）:
      - role=0（from 侧）: from 非空 → to 全空则分域各自 seed；to 非空则 to
        收窄为 B1 meet（同类域交集 + bool⊂int + 跨域兼容矩阵——冲突由调用方
        记录）
      - role=1（to 侧）: 反向默认禁止——仅 to 全空且 from 有锚时 from→to seed
    from 侧永不被收窄/seed（A3 单向性）。返回:
      (new_to_cls, new_to_ty, conflict, pairs, to_changed)
    """
    if role == 0:
        if frm_cls or frm_ty:
            if not to_cls and not to_ty:
                return set(frm_cls), set(frm_ty), False, [], True
            _, _, nc_b, nt_b, conflict, pairs = _b1_edge_meet(
                frm_cls, frm_ty, to_cls, to_ty
            )
            return nc_b, nt_b, conflict, pairs, (nc_b != to_cls or nt_b != to_ty)
    else:
        if not to_cls and not to_ty and (frm_cls or frm_ty) and anchor_str > 0:
            return set(frm_cls), set(frm_ty), False, [], True
    return set(to_cls), set(to_ty), False, [], False


# B1: 跨域矛盾记录 cap（防 manifest 爆炸——"矛盾记录有限"）
_DOMAIN_CONFLICT_CAP = 500
# T8 (C1): 变量级矛盾记录 cap（防 manifest 爆炸——"矛盾记录有限"；超限计数不膨胀）
_C1_CONFLICT_CAP = 200


def _record_domain_conflict(var_a, var_b, pairs, edge_id=None,
                            domain=None, type_domain=None):
    """T7 (B1) × T8 (C1): 跨域矛盾记录——两层记录，各自独立 cap。

    T7 层（不变——边级记录，cap 500 去重）: RUN_MANIFEST['domain_conflicts']
      键 = 边标识（两变量名排序连接）——同边重复不重复计数；cap 达上限后置
      domain_conflicts_capped=True（防 manifest 爆炸）。

    T8 C1 层（变量级结构化记录——greedy 消费）: RUN_MANIFEST['conflicts']
      结构: conflicts[var] = {
        "edges":   [edge_id...],          # 原因边标识（去重，cap 10）
        "domains": {"cls": [...],         # 本变量域快照（矛盾时刻，首次记录）
                    "type": [...],
                    "other": {"cls": [...], "type": [...]}}   # 对侧域（双向）
      }
      矛盾两变量各记一条；cap 200 条记录，超限只置 conflicts_capped=True +
      计数 conflicts_overflow（不膨胀）。edge_id/domain/type_domain 为可选
      （旧调用/测试 3 参调用兼容——无快照时 domains 为空壳）。
    运行期调用（RUN_MANIFEST 在 import 时创建，_run_main/测试均在之后执行——
    安全）。
    """
    conflicts = RUN_MANIFEST.setdefault("domain_conflicts", {})
    key = f"{var_a} <-> {var_b}"
    if key in conflicts:
        pass
    elif len(conflicts) >= _DOMAIN_CONFLICT_CAP:
        RUN_MANIFEST["domain_conflicts_capped"] = True
    else:
        conflicts[key] = {
            "pairs": [list(p) for p in pairs[:3]],
            "vars": [var_a, var_b],
        }

    # T8 (C1): 变量级结构化记录（含原因边 + 双向域快照）
    _c1 = RUN_MANIFEST.setdefault("conflicts", {})
    if RUN_MANIFEST.get("conflicts_capped"):
        RUN_MANIFEST["conflicts_overflow"] = (
            RUN_MANIFEST.get("conflicts_overflow", 0) + 1
        )
        return
    for _v, _ov in ((var_a, var_b), (var_b, var_a)):
        if _v not in _c1:
            if len(_c1) >= _C1_CONFLICT_CAP:
                RUN_MANIFEST["conflicts_capped"] = True
                return
            _c1[_v] = {
                "edges": [],
                "domains": {
                    "cls": sorted(domain.get(_v, ())) if domain is not None else [],
                    "type": sorted((type_domain or {}).get(_v, ())),
                    "other": {
                        "cls": sorted(domain.get(_ov, ())) if domain is not None else [],
                        "type": sorted((type_domain or {}).get(_ov, ())),
                    },
                },
            }
        if edge_id and edge_id not in _c1[_v]["edges"]:
            _c1[_v]["edges"].append(edge_id)
            _c1[_v]["edges"] = _c1[_v]["edges"][:10]


def _mark_propagated(anchor_strength, var):
    """T7 (B2): 传播强度标记——域经传播 seed 的变量 anchor_strength >= 1。

    （3=vtable 锚 / 2=成员+签名+全局锚 / 1=传播 / 0=开放——B2 分层）
    仅分域模式生效（开关关闭时保持基线 anchor_strength 语义）。
    """
    if DOMAIN_SPLIT and anchor_strength.get(var, 0) < 1:
        anchor_strength[var] = 1
        RUN_MANIFEST["anchor_strength_propagation"] += 1


def _apply_signature_anchors(domain, type_domain, sig_symbols, this_vars, all_vars,
                             anchor_strength):
    """T5 (E2): SIGNATURE_ANCHOR 求解期应用（Step 6 投票提前）。

    - `{addr}:this`   ← `::` 前缀类名（union add，不覆盖 vtable 锚）
    - `{addr}.return` ← return_type（限基础类型; 只锚已存在 var，不发明新变量）
    T7 (B1): 写入走 _domain_add 路由（类进 class_domain，基础类型进
    type_domain——开关关闭时全部进 class_domain，与基线一致）。
    返回 (sig_this_anchored, sig_return_anchored)。
    纯逻辑（模块级，离线可测）——域操作仅 union add。
    """
    sig_this_anchored = 0
    sig_return_anchored = 0
    for _addr_key, _sig in sig_symbols.items():
        if not isinstance(_sig, dict) or _sig.get("kind") != "function":
            continue
        try:
            _padded = f"0x{int(_addr_key, 16):08X}"
        except (ValueError, TypeError):
            continue  # 非 hex 键（名字变体）跳过
        _cls_name = _sig_class_prefix(_sig.get("name", ""))
        if _cls_name:
            _this_var = f"{_padded}:this"
            if _this_var in this_vars:
                _domain_add(domain, type_domain, _this_var, _cls_name)
                # S7: 名字派生锚（signals 镜像 IDA 命名，746 项已证错）
                # 降为强度 1——与 S3 的求解器内名字锚一致，低于约束传播
                anchor_strength[_this_var] = max(anchor_strength.get(_this_var, 0), 1)
                sig_this_anchored += 1
        _rt = _normalize_sig_return_type(_sig.get("return_type", ""))
        if _rt:
            _ret_var = f"{_padded}.return"
            if _ret_var in all_vars:
                _domain_add(domain, type_domain, _ret_var, _rt)
                anchor_strength[_ret_var] = max(anchor_strength.get(_ret_var, 0), 2)
                sig_return_anchored += 1
    return sig_this_anchored, sig_return_anchored


_RE_MEMBER_VAR_T5 = re.compile(r"(0x[0-9a-fA-F]+):this\.member\((0x[0-9a-fA-F]+)\)")


def _apply_member_anchors(domain, type_domain, all_vars, member_anchor, anchor_strength):
    """T5 (E1): MEMBER_ANCHOR 应用——`{func}:this.member(0x{off})` 强锚。

    若 this 域含 Class_X（真实类名）且 (Class_X, off) 在成员表有已知类型
    → 成员变量域加入锚类型（union，不覆盖传播）。返回命中变量数。
    T7 (B1): 写入走 _domain_add 路由（锚类型可能是基础类型）。
    this 域读取仅类域（this 变量只含类候选——分域下语义不变）。
    纯逻辑（模块级，离线可测）。
    """
    hits = 0
    for _var in all_vars:
        _m = _RE_MEMBER_VAR_T5.search(_var)
        if not _m:
            continue
        _this_var = f"{_m.group(1)}:this"
        _off = int(_m.group(2), 16)
        _this_dom = domain.get(_this_var)
        if not _this_dom:
            continue
        # Phase 1b: 弱先验——member_lookup/member_types 是 hpp 循环派生
        # （import_hpp_layouts 同源），只兜底无独立证据的成员变量，
        # 不与 vtable/signature/type-seed 锚竞争（域已非空 → 跳过，
        # AC-3 交集自然仲裁传播证据）。
        if _domain_union(domain, type_domain, _var):
            continue
        _anchored = False
        for _cls in _this_dom:
            _anchor_t = member_anchor.get((_cls, _off))
            if _anchor_t:
                _domain_add(domain, type_domain, _var, _anchor_t)
                _anchored = True
        if _anchored:
            anchor_strength[_var] = max(anchor_strength.get(_var, 0), 1)
            hits += 1
    return hits

# 调用约定常量映射（F5）
_CC_NAME_TO_CM = {
    "thiscall": ida_typeinf.CM_CC_THISCALL if ida_typeinf else 128,
    "stdcall": ida_typeinf.CM_CC_STDCALL if ida_typeinf else 80,
    "cdecl": ida_typeinf.CM_CC_CDECL if ida_typeinf else 48,
    "fastcall": ida_typeinf.CM_CC_FASTCALL if ida_typeinf else 112,
}
_CM_TO_CC_NAME = {v: k for k, v in _CC_NAME_TO_CM.items()}


# ============================================================
# A0-S2 (T1): 写检测补全——mov imm / lea 的约束判定（模块级，离线可测）
# SSA 语义: scope_vars._detect_writes 只认 ASSIGN/FUNC_PARAM/RETURN_TO/
# STACK_ACCESS 的 to=reg 边为写点 → 每条寄存器写必须产生约束，版本边界
# 才完整。本层补两个缺口（当前检测链全落空的类别）:
#   - mov reg, imm  → TYPE_SEED(reg, "int")（int 证据 + 约束产出）
#   - lea reg, X    → ASSIGN(X → reg)（X = 成员/栈/全局；该边被 _detect_writes
#                     识别为写点 → SSA 版本边界补全）
# 不破坏现有判定优先级：调用点只在链上 `c 为空` 时触发（见 Step 3 循环）。
# ============================================================

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

RE_HEX_IMM = re.compile(r"^-?[0-9A-Fa-f]+h$", re.IGNORECASE)
RE_DEC = re.compile(r"^-?\d+$")


def _is_imm_text(text):
    """A0-S2 (T1): 立即数判定（IDA 显示格式：`0FFFFFFFFh` / `5` / `-1`）。

    数字/hex 字面量 → True；寄存器/全局/成员/栈引用 → False。
    复用 RE_HEX_IMM/RE_DEC（与 _is_global_ref 的数字排除一致），另兜底
    `0x` 前缀（IDA 偶发显示变体）。
    """
    if not text:
        return False
    t = text.strip()
    if RE_HEX_IMM.match(t) or RE_DEC.match(t):
        return True
    if t.startswith("-0x") or t.startswith("0x"):
        try:
            int(t, 16)
            return True
        except ValueError:
            return False
    return False


def _a0s2_mov_imm_seed(mnem, op0, op1, ea_hex):
    """A0-S2 (T1): `mov reg, imm` → TYPE_SEED(reg, "int")。

    当前三路检测（成员/全局/栈）对立即数源全部落空 → 无约束 → SSA 写点缺失
    且 int 证据丢失。此分支补 int 种子（type_seeds 进 domain/var_types）。
    返回约束 dict 或 None（纯文本判定，无 IDA 依赖，离线可测）。
    """
    if mnem != "mov" or not op0 or not op1 or not ea_hex:
        return None
    dst = op0.strip().lower()
    if dst not in X86_REGS:
        return None
    if not _is_imm_text(op1):
        return None
    return {"type": "TYPE_SEED", "var": dst, "itype": "int", "addr": ea_hex}


def _a0s2_lea_assign(mnem, op0, src, ea_hex):
    """A0-S2 (T1): `lea reg, X`（X = 成员/栈/全局）→ ASSIGN(X → reg)。

    src 为 _parse_operand_src(ea, 1) 的 (kind, name)；kind ∈ member/stack/global
    且 name 非空 → 生成 ASSIGN 边（该边被 scope_vars._detect_writes 识别为
    寄存器写点 → SSA 版本边界补全）。寄存器源 lea（`lea eax,[eax+4]`）与
    不可解析源（寄存器索引 `[esi+eax*4]`）不在本任务覆盖域 → None。
    返回约束 dict 或 None。
    """
    if mnem != "lea" or not op0 or not ea_hex:
        return None
    dst = op0.strip().lower()
    if dst not in X86_REGS:
        return None
    if src and src[0] in ("member", "stack", "global") and src[1]:
        return {"from": src[1], "to": dst, "type": "ASSIGN", "addr": ea_hex}
    return None


def _a0s2_write_point(mnem, op0, op1, src_kind):
    """A0-S2 (T1): 指令是否属于"必须产生约束"的寄存器写点覆盖域。

    覆盖域 = T1 保证有约束的写类别（write_gap_count 指标的计数口径）:
      - mov reg, imm                  → 必须 TYPE_SEED
      - lea reg, (member|stack|global) → 必须 ASSIGN
    其余写类别（movzx/movsx、算术、寄存器源 lea、不可解析源）不在本指标
    覆盖域——T1 明确不改 movzx/movsx 现有处理，指标只断言 T1 关闭的缺口。
    """
    if not op0:
        return False
    dst = op0.strip().lower()
    if dst not in X86_REGS:
        return False
    if mnem == "mov" and op1 and _is_imm_text(op1):
        return True
    if mnem == "lea" and src_kind in ("member", "stack", "global"):
        return True
    return False


# ============================================================
# T10 (E3-E8): 语义约束批——全部模块级纯逻辑，离线可导入断言
#   E3 GLOBAL_ANCHOR   global_types.json（只读）→ 全局引用变量锚定
#   E4 NULL_CONST      xor eax,eax / mov eax,0 返回 → return 域 +{int, void*}
#   E5 CALL_SITE_CONTEXT 形参域多数投票加权（AC-3 CALL_ARG 叠加层）+ 冲突记录
#   E6 ARRAY_INDEX     [reg+idx*4/8] 数组索引 → 基址成员约束 + 元素宽度
#   E7 THIS_ADJUST     thunk this 偏移约束化（配合 T9 C3，通用路径）
#   E8 EQ_CLASS        ASSIGN 传递闭包并查集 → greedy 共享 + 矛盾记录
# 每个子项独立可测（mock 数据，见 .omo/evidence/csp-hardening/）
# ============================================================

# ---------- E3: GLOBAL_ANCHOR ----------
# 数据源 anchors/global_types.json: {addr_hex: {type, name, confidence}}（全部
# ANCHORED，实测 1,338 条）。构建两个查找表:
#   GLOBAL_ANCHOR_BY_NAME[ida_name] = 域词汇（符号名直查——约束图全局变量名）
#   GLOBAL_ANCHOR_BY_ADDR[int_addr] = 域词汇（dword_815DA8 式名字后缀解析兜底）
# 归一化: 先剥 const/volatile 前缀，其余规则复用 _normalize_member_type
# （数组/模板/函数指针/值类型 → None，宁缺毋滥）。


def _normalize_global_type(t):
    """T10 (E3): 全局类型字符串 → 域词汇；不可表达 → None。"""
    if not t:
        return None
    key = t.strip()
    while key.startswith("const ") or key.startswith("volatile "):
        key = key[len(key.split()[0]) + 1 :].strip()
    if key in ("LPSTR", "LPWSTR", "LPCSTR", "LPCWSTR", "PSTR", "PWSTR"):
        return "char*"
    return _normalize_member_type(key)


def _load_global_anchors():
    """T10 (E3): 加载 global_types.json（只读）→ (by_name, by_addr)。"""
    by_name, by_addr = {}, {}
    path = os.path.join(PROJ_ROOT, "anchors", "global_types.json")
    if os.path.exists(path):
        try:
            with open(path, "r", encoding="utf-8") as f:
                data = json.load(f)
            for addr_key, info in data.items():
                if not isinstance(info, dict) or info.get("confidence") != "ANCHORED":
                    continue
                t = _normalize_global_type(info.get("type", ""))
                if not t:
                    continue
                try:
                    addr_int = int(addr_key, 16)
                except (ValueError, TypeError):
                    continue
                by_addr[addr_int] = t
                name = info.get("name", "")
                if name:
                    by_name.setdefault(name, t)
        except Exception as e:
            print(f"  Warning: Could not load global_types.json: {e}")
    return by_name, by_addr


GLOBAL_ANCHOR_BY_NAME, GLOBAL_ANCHOR_BY_ADDR = _load_global_anchors()
print(
    f"  Loaded {len(GLOBAL_ANCHOR_BY_NAME)} named + "
    f"{len(GLOBAL_ANCHOR_BY_ADDR)} addr global anchors (T10 E3)"
)

_RE_GLOBAL_ADDR_SUFFIX = re.compile(
    r"^(?:dword|byte|word|unk|flt|off|qword)_([0-9A-Fa-f]+)$"
)


def _global_anchor_type(var):
    """T10 (E3): 约束图全局变量 → 锚定类型（无 → None）。

    1) 符号名直查（g_XXX / 其他 IDA 符号名）
    2) dword_815DA8 式 IDA 自动名 → 地址后缀 → 地址表
    """
    if not var:
        return None
    t = GLOBAL_ANCHOR_BY_NAME.get(var)
    if t:
        return t
    m = _RE_GLOBAL_ADDR_SUFFIX.match(var)
    if m:
        return GLOBAL_ANCHOR_BY_ADDR.get(int(m.group(1), 16))
    return None


def _apply_global_anchors(domain, type_domain, all_vars, anchor_strength):
    """T10 (E3): GLOBAL_ANCHOR 应用——全局引用变量域加入锚定类型（union）。

    只锚能解析出类型的变量（符号名 / dword_XXX 后缀）；不可解析变量不产生
    任何域变更。返回命中变量数。T7 (B1): 写入走 _domain_add 路由。
    纯逻辑（离线可测）。
    """
    hits = 0
    for var in all_vars:
        t = _global_anchor_type(var)
        if t:
            _domain_add(domain, type_domain, var, t)
            anchor_strength[var] = max(anchor_strength.get(var, 0), 2)
            hits += 1
    return hits


# ---------- E4: NULL_CONST ----------

def _e4_imm_is_zero(s):
    """T10 (E4): 立即数文本是否为 0（`0` / `0h` / `0x0` / `-0` 变体）。"""
    if not s:
        return False
    t = s.strip().lower()
    try:
        if t.startswith("0x") or t.startswith("-0x"):
            return int(t, 16) == 0
        if t.endswith("h"):
            return int(t[:-1], 16) == 0
        return int(t, 10) == 0
    except ValueError:
        return False


# 基础类型域词汇（"return 域为空/仅基础类型时加入"的判定集）
_BASE_TYPE_VOCAB = frozenset(
    {"int", "bool", "float", "double", "char*", "void*", "unknown"}
)


def _e4_null_const_allowed(dom):
    """T10 (E4): return 域为空或全为基础类型 → 允许加入 {int, void*}。

    NULL 可能是 int 0 或 NULL 指针——收窄不固定；已有类域（推测比 NULL
    语义更强）不覆盖。
    """
    return not dom or all(t in _BASE_TYPE_VOCAB for t in dom)


# ---------- E5: CALL_SITE_CONTEXT ----------

def _e5_majority_merge(current, arg_domains):
    """T10 (E5): 多数调用者意见优先的形参域合并（纯逻辑，离线可测）。

    current: 形参当前域（set）；arg_domains: 各调用点实参域（list of set，
    实参域先各自独立——互不相交合并）。
    规则（保守，只收窄不扩域）:
      - 非空调用点 < 2 → None（维持现状，交 AC-3 双向交集处理）
      - 多数候选 = 全部调用点实参域中出现次数最多的类型集合（并列取全部）
      - 结果 = current ∩ 多数候选；空 → None（不改变，冲突由观测层记录）
    """
    non_empty = [set(d) for d in arg_domains if d]
    if len(non_empty) < 2:
        return None
    freq = Counter()
    for d in non_empty:
        for t in d:
            freq[t] += 1
    max_f = max(freq.values())
    majority = {t for t, n in freq.items() if n == max_f}
    joint = set(current) & majority
    return joint if joint else None


def _e5_collect_call_site_conflicts(call_arg_sites, domain, type_domain=None):
    """T10 (E5): 冲突调用点统计（观测层——AC-3 收敛后调用一次）。

    call_arg_sites: {param_var: [(ci, addr, arg_var), ...]}（scoped 名）。
    对每个形参: 各调用点实参域与多数候选无交集 → 该调用点为冲突调用点。
    T7 (B1): type_domain 提供时实参域用联合视图（分域下基础类型域可见）。
    返回 {param_var: {"conflicting_call_sites": [...], "majority_types": [...],
    "call_site_count": N}}（无冲突形参不出现）。纯逻辑（离线可测）。
    """
    conflicts = {}
    for sto, sites in call_arg_sites.items():
        if type_domain is not None:
            doms = [(a, _domain_union(domain, type_domain, v)) for (_, a, v) in sites if _domain_union(domain, type_domain, v)]
        else:
            doms = [(a, set(domain[v])) for (_, a, v) in sites if domain[v]]
        if len(doms) < 2:
            continue
        freq = Counter()
        for _, d in doms:
            for t in d:
                freq[t] += 1
        max_f = max(freq.values())
        majority = {t for t, n in freq.items() if n == max_f}
        # 无共识: 每个类型同频（多数候选 == 全部类型）→ 全部调用点均为冲突
        no_consensus = len(majority) == len(freq)
        if no_consensus:
            conf_sites = [a for a, _ in doms]
        else:
            conf_sites = [a for a, d in doms if not (d & majority)]
        if conf_sites:
            conflicts[sto] = {
                "conflicting_call_sites": conf_sites[:10],
                "majority_types": sorted(majority),
                "call_site_count": len(doms),
            }
    return conflicts


# ---------- T6 (A3): CALL_ARG 单向传播 ----------

def _a3_call_arg_step(frm, to, role, anchor_str):
    """T6 (A3): CALL_ARG 单向传播单步（纯逻辑，离线可测）。

    frm/to: from（实参/接收者）与 to（形参/this）的域（可变 set，就地更新）。
    role: 0 = 当前处理变量在 from 侧（from 域变化触发本边）；1 = 在 to 侧。
    anchor_str: from 变量的锚定强度（int；0 = 无锚，>0 = 有类锚）。

    A3 规则（from→to 单向；防实参域被形参域错误 seed 反向污染——形参域是
    多调用点聚合，不应回写实参）:
      - role=0（from 侧）: 只允许正向——空 to 被 seed；双非空时 to 收窄为
        交集；from 自身绝不被 to 收窄/seed（反向禁止）。
      - role=1（to 侧）: 反向传播默认禁止；唯一例外——to 域为空 且 from 有
        类锚（anchor_str > 0）→ 允许 from→to 正向 seed（该 case 下 to 为
        空，实际动作仍为正向；to 非空时 to→from 一律禁止）。

    返回 (frm_changed, to_changed)（调用方决定 worklist 入队）。
    """
    f_chg = t_chg = False
    if role == 0:
        if frm:
            if not to:
                to.update(frm)
                t_chg = True
            else:
                joint = frm & to
                if joint and joint != to:
                    to.intersection_update(joint)
                    t_chg = True
    else:
        if not to and frm and anchor_str > 0:
            to.update(frm)
            t_chg = True
    return f_chg, t_chg


# ---------- T6 (I2): RETURN 边生成补全 ----------

def _i2_ret_edge(prev_mnem, prev_ops, ea, func_addr_str):
    """T6 (I2): RETURN 边生成（纯逻辑，离线可测）。

    ret 的 prev 指令设置 eax 即产 RETURN 边——多返回点非末尾模式补全
    （prev 指令含 eax 设置但 mnem 不是 mov/xor 的场景）:
      `lea eax,[esi+14h]; ret` / `movzx eax,..; ret` / `add eax,1; ret` /
      `sub eax,imm; ret`。
    特例保持（T10 E4 NULL_CONST 语义）:
      - `xor eax,eax` / `sub eax,eax` → null_const=True（优先判定——
        扩展集含 "sub"，避免 `sub eax,eax` 被误标非空）
      - `mov eax, 0` → null_const=True
    prev_ops: [op0, (op1)] 操作数文本；不满足 → None。
    """
    if not prev_ops or not prev_ops[0]:
        return None
    dst = prev_ops[0].lower()
    if "eax" not in dst:
        return None
    if (
        prev_mnem in ("xor", "sub")
        and len(prev_ops) >= 2
        and prev_ops[0] == prev_ops[-1]
    ):
        return {
            "from": f"0x{ea:X}_RET",
            "to": f"{func_addr_str}.return",
            "type": "RETURN",
            "addr": f"0x{ea:X}",
            "null_const": True,
        }
    if prev_mnem in ("mov", "movzx", "movsx", "lea", "add", "sub"):
        _null = (
            prev_mnem == "mov"
            and dst == "eax"
            and len(prev_ops) >= 2
            and _e4_imm_is_zero(prev_ops[1])
        )
        return {
            "from": f"0x{ea:X}_RET",
            "to": f"{func_addr_str}.return",
            "type": "RETURN",
            "addr": f"0x{ea:X}",
            "null_const": _null,
        }
    return None


# ---------- E6: ARRAY_INDEX ----------
_RE_ARRAY_INDEX = re.compile(
    r"^\[([a-z]{2,3})\s*\+\s*([a-z]{2,3})\s*\*\s*([248])"
    r"(?:\s*([+-](?:0[xX])?[0-9a-fA-F]+h?))?\]$"
)


def _e6_parse_array_index(txt, disp):
    """T10 (E6): `[reg+idx*4]` 数组索引解析（纯逻辑，离线可测）。

    `[esi+eax*4]` / `[esi+eax*4+14h]` / `[esi+eax*8-8]` →
    (base_reg, idx_reg, scale, off)。scale 仅 4/8（任务范围）; disp 为
    IDA get_operand_value（位移），非法/None 时用文本组兜底解析。
    非数组索引格式 / 不可解析 → None。
    """
    if not txt:
        return None
    m = _RE_ARRAY_INDEX.match(txt.strip().lower())
    if not m:
        return None
    base, idx, scale = m.group(1), m.group(2), int(m.group(3))
    if base not in X86_REGS or idx not in X86_REGS:
        return None
    if scale not in (4, 8):
        return None
    off = 0
    if m.group(4):
        # 文本带显式位移组——优先文本解析（B2: get_operand_value 对无位移
        # 形式可能返回寄存器索引垃圾值）
        s = m.group(4).strip().rstrip("h")
        try:
            off = int(s, 16)
        except ValueError:
            return None
    elif disp is not None and -0x80000000 <= disp < 0x80000000:
        off = int(disp)
    return (base, idx, scale, off)


# ---------- E7: THIS_ADJUST ----------

def _e7_apply_this_adjust(domain, type_domain, anchor_strength, thunk_adjustments,
                          thunk_targets):
    """T10 (E7): thunk this 偏移约束化（配合 T9 C3，纯逻辑，离线可测）。

    对 this_adjustment 非 0 的 thunk 条目: `{thunk}:this` 域 = `{target}:this`
    域（复制覆盖——thunk 自身不参与锚定，目标为 vtable/函数名锚定的真实
    方法类，强度更高），adjustment 记录到返回边列表。thunk 变量未在域中
    出现（非 thiscall / 无约束引用）或目标域为空 → 不发明/不破坏，仅记录边。
    本二进制无 adjustor thunk（T9 实证）→ 命中 0 属正常。
    T7 (B1): 类域与类型域分别复制（分域下 this 域只含类，但防御性全复制）。
    返回 (applied_count, edges_list)。
    """
    applied = 0
    edges = []
    for entry, adjustment in sorted(thunk_adjustments.items()):
        if not adjustment:
            continue
        thunk_var = f"0x{entry:08X}:this"
        tgt = thunk_targets.get(entry)
        if not tgt:
            continue
        target_var = f"0x{tgt:08X}:this"
        tgt_dom = domain.get(target_var)
        if tgt_dom and (thunk_var in domain or thunk_var in type_domain):
            domain[thunk_var] = set(tgt_dom)
            if DOMAIN_SPLIT:
                type_domain[thunk_var] = set(type_domain.get(target_var, ()))
            anchor_strength[thunk_var] = max(anchor_strength.get(thunk_var, 0), 3)
            applied += 1
        edges.append(
            {
                "thunk": f"0x{entry:08X}",
                "target": f"0x{tgt:08X}",
                "adjustment": adjustment,
            }
        )
    return applied, edges


# ---------- E8: EQ_CLASS ----------

def _build_eq_classes(edge_constraints, st=None):
    """T10 (E8): ASSIGN 传递闭包 → var→root 映射（并查集，纯逻辑，离线可测）。

    edge_constraints: 约束列表；st: build_scoped_index 的 scoped 名（ci →
    (sf, sto)），缺省时用原始 from/to（离线测试用）。只并 ASSIGN 边；缺端
    变量跳过。返回 {var: root}（仅含参与 ASSIGN 的变量；未参与者由调用方
    `.get(var, var)` 兜底为自身）。仅影响 greedy 共享，不改 AC-3 传播。
    """
    parent = {}

    def find(x):
        parent.setdefault(x, x)
        while parent[x] != x:
            parent[x] = parent[parent[x]]
            x = parent[x]
        return x

    def union(a, b):
        ra, rb = find(a), find(b)
        if ra != rb:
            parent[rb] = ra

    for ci, c in enumerate(edge_constraints):
        if c.get("type") != "ASSIGN":
            continue
        if st is not None:
            try:
                sf, sto = st[ci]
            except (IndexError, TypeError):
                continue
        else:
            sf, sto = c.get("from"), c.get("to")
        if sf and sto and sf != sto:
            union(sf, sto)
    return {v: find(v) for v in parent}


def _e8_collect_eq_conflicts(eq_members, domain, type_domain=None):
    """T10 (E8): 等价类矛盾统计（同 root 不同类候选冲突，纯逻辑，离线可测）。

    eq_members: {root: [var, ...]}；domain: 求解期域。
    矛盾定义: 同 root 内 ≥2 个成员有非空域，且全部非空域无公共候选
    （AC-3 ASSIGN 空交集跳过正是静默矛盾点——这里显式记录）。
    T7 (B1): type_domain 提供时用联合视图（分域下基础类型域可见）。
    返回 {root: {"vars": [...], "domain_sets": [...], "member_count": N}}。
    """
    conflicts = {}
    for root, members in eq_members.items():
        if len(members) < 2:
            continue
        if type_domain is not None:
            doms = [_domain_union(domain, type_domain, m) for m in members if _domain_union(domain, type_domain, m)]
        else:
            doms = [set(domain[m]) for m in members if domain[m]]
        if len(doms) < 2:
            continue
        common = set.intersection(*doms)
        if common:
            continue
        conflicts[root] = {
            "vars": members[:10],
            "domain_sets": [sorted(d) for d in doms][:5],
            "member_count": len(members),
        }
    return conflicts


# ============================================================
# A1/A2 (T4): BADADDR 源头过滤 + 栈基准归一化（模块级纯逻辑，离线可测）
# ============================================================

# A1: 成员偏移合法性——非法偏移（<0 或 >= 0x80000000）在 Step 3 约束生成处
# 过滤（"BADADDR 源头过滤"），Step 7 的 final_classes 侧同类过滤保留为双保险。
# 0x80000000 以上为 32 位位移垃圾（如 BADADDR 0xFFFFFFFF 泄漏）；off=0 合法
# （`[ecx]` 无偏移访问）。
def _a1_valid_member_off(off):
    return isinstance(off, int) and 0 <= off < 0x80000000


# A2: 栈槽名数值解析（`stack_+0x4` / `stack_-0x3c` → int；非栈槽名 → None）。
# `stack_{off:+#x}` 的 off 部分含符号（`+0x4` / `-0x3c`），int(s, 16) 直接可解。
def _a2_parse_stack_off(name):
    if not name or not name.startswith("stack_"):
        return None
    try:
        return int(name[6:], 16)
    except (ValueError, IndexError):
        return None


# A1(栈): 栈槽名量级校验——±0x80000000 之外的位移是 32 位位移垃圾
# （BADADDR 泄漏等），不产生约束。注意：负偏移（局部变量 `stack_-0x4`）
# 合法，只滤量级垃圾（与成员偏移的 `0 <= off` 语义不同）。
def _a1_sane_stack_off(off):
    return isinstance(off, int) and -0x80000000 <= off < 0x80000000


# A2: esp 基位移 → ebp 基位移（仅 EBP 帧函数 + frsize 可得时换算）。
# 标准序言 `push ebp; mov ebp, esp; sub esp, frsize` 后当前 esp = ebp - frsize，
# 故 `[esp+X]` 的 ebp 基位移 = X - frsize；此时 spd = -(4+frsize)，等价于
# (X + spd) + 4（ebp = entry-esp - 4）。用 spd 版本保证额外 push（调用参数）
# 等场景下也精确（任务公式 off - frsize 是其标准序言特例）。
# 无帧（esp-only /Oy 函数）或 frsize 不可得 → None（保守保持 esp 基，不换算）。
def _a2_esp_off_to_ebp(val, spd, frsize, has_frame):
    if not has_frame or frsize is None:
        return None
    return (val + spd) + 4


# A2: 函数参数槽的统一基准命名——EBP 帧函数 param_i 位于 [ebp+8+4i]
# （ebp 基 `stack_{8+4i}`）；无帧函数 param_i 位于 [esp+4+4i]@entry
# （entry-ESP 基 `stack_{4+4i}`，现状保持）。FUNC_PARAM 生成与 param0 别名
# 检测共用——A2 换算后两侧槽名必须一致（[ebp+8] = 第一个参数）。
def _a2_param_slot_name(frsize, has_frame, i):
    if has_frame and frsize is not None:
        return f"stack_{8 + i*4:+#x}"
    return f"stack_{4 + i*4:+#x}"


# ============================================================
# A0-S1 (T2): 栈槽写驱动版本化（约束后处理，模块级纯逻辑，离线可测）
# scope_vars 明确推迟栈槽复用检测（"Stack-slot reuse detection is deferred"），
# 本层在 ida_extract 侧补上该推迟部分（不改 scope_vars——engine.py 共用
# 保护；engine.py 路径零触碰）：
#   1. 收集函数内栈槽写点（to 以 `stack_` 开头的边：STACK_ACCESS 写方向 +
#      FUNC_PARAM 入口 store + STACK_VAR 初始化——对齐
#      scope_vars._detect_writes 的栈写判定），按函数分组 + 写地址排序
#   2. 每条边引用栈槽时用 bisect 归最近写版本：
#      `0x{func}::stack_{off:+#x}` → `0x{func}::stack_{off:+#x}_v0x{write_ea:X}`
#   3. 同槽复用（int 与 Class_X 交替写）→ 不同版本 → 域不合并（消除污染）；
#      FUNC_PARAM 入口 store（addr = func_start）即第一个写；
#      未写过的栈槽读取 → 保留原名（无版本）
# 版本化基于 T4 (A2) 归一化后的栈槽名（esp 基 → ebp 基）——同一槽统一名后
# 版本化才有意义。调用点：build_scoped_index 之后、AC-3 之前（见 5.0）。
# ============================================================

# 栈槽写类别（与 scope_vars._detect_writes 栈写判定一致；STACK_VAR 当前
# 提取器不产出，保留以对齐语义）
_STACK_WRITE_TYPES = frozenset({"STACK_ACCESS", "FUNC_PARAM", "STACK_VAR"})

# 作用域化栈槽名: `0x{func:08X}::stack_{off:+#x}`（scope_vars 对栈槽统一
# 归函数作用域后产生的名字；`off` 含符号：`stack_+0x4` / `stack_-0x3c`）
_RE_SCOPED_STACK = re.compile(r"^(0x[0-9A-Fa-f]+)::(stack_.+)$")


def _parse_constraint_addr(c):
    """约束 addr 字段（`0x401000`）→ int；缺失/非法 → None。"""
    addr_str = c.get("addr", "")
    if not addr_str:
        return None
    try:
        return int(addr_str, 16)
    except (ValueError, TypeError):
        return None


def _stack_write_points(constraints, func_addrs):
    """A0-S1 (T2): 收集 (func_addr, raw_stack_name) → 排序去重的写地址列表。

    写点 = to 以 `stack_` 开头的边（STACK_ACCESS 写方向 / FUNC_PARAM 入口
    store / STACK_VAR 初始化），所属函数用 find_containing_func(写地址) 判定
    （与 scope_vars._detect_writes 的栈写判定同源）。无函数归属的写点
    （func_addrs 未覆盖）不参与版本化。
    """
    writes = defaultdict(list)
    for c in constraints:
        if c.get("type", "") not in _STACK_WRITE_TYPES:
            continue
        c_to = c.get("to", "")
        if not c_to.startswith("stack_"):
            continue
        addr = _parse_constraint_addr(c)
        if addr is None:
            continue
        func = find_containing_func(addr, func_addrs)
        if func:
            writes[(func, c_to)].append(addr)
    return {key: sorted(set(v)) for key, v in writes.items()}


def _version_stack_name(scoped_name, writes, addr):
    """A0-S1 (T2): 单个作用域化栈槽名的版本化（bisect 归最近写 ≤ addr）。

    写边自身（addr == 某写点）→ 归该写版本；两次写之间的读取 → 归最近写
    版本（bisect_right 语义，与 scope_vars 寄存器 SSA 一致）；未写过的槽 /
    非栈槽名 / 写列表缺失 → 原样返回（无版本）。
    """
    m = _RE_SCOPED_STACK.match(scoped_name)
    if not m:
        return scoped_name
    func = int(m.group(1), 16)
    raw = m.group(2)
    write_addrs = writes.get((func, raw))
    if not write_addrs:
        return scoped_name
    idx = bisect_right(write_addrs, addr) - 1
    if idx < 0:
        return scoped_name
    return f"0x{func:08X}::{raw}_v0x{write_addrs[idx]:X}"


def _scope_stack_versions(constraints, scoped_names, func_addrs):
    """A0-S1 (T2): 栈槽写驱动版本化（约束后处理）。

    scope_vars 的 SSA 只覆盖寄存器，栈槽只归函数作用域（复用检测推迟）。
    本函数在约束后处理层补上：对 scoped_to_name 中所有 `stack_*` 变量按
    写地址加版本，消除同槽复用的域污染。不改 scope_vars 默认行为。

    Args:
        constraints: edge_constraints（TYPE_SEED 已排除，均为带 from/to 的边）。
        scoped_names: build_scoped_index 返回的 scoped_to_name 列表。
        func_addrs: 排序函数起始地址（ssa["func_addrs"]）。

    Returns:
        新 scoped_to_name 列表（长度与输入一致；栈槽名版本化，其余原名）。
    """
    writes = _stack_write_points(constraints, func_addrs)

    out = []
    for c, (sf, st) in zip(constraints, scoped_names):
        addr = _parse_constraint_addr(c)
        if addr is None:
            out.append((sf, st))  # addr 缺失的边不参与版本化（保守原名）
            continue
        out.append(
            (
                _version_stack_name(sf, writes, addr),
                _version_stack_name(st, writes, addr),
            )
        )
    return out


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


def _this_src_member_name(txt, off):
    """A0-S3 (T3): `[reg+off]` 成员接收者命名（纯逻辑，离线可测）。

    txt: IDA 操作数文本（`[esi+14h]` / `[esi]`）；off: get_operand_value 位移。
    `[reg+off]`(off>0) → `reg.member(0x{off:X})`——保留偏移（参与 MEMBER_ANCHOR
    与 var_features offsets 聚合），替代旧 `*reg`（偏移丢弃 + 被 scope_vars
    当作寄存器 SSA 化，断链 1 根因）；`[reg]`(off=0)/偏移不可解析/负偏移
    （`[esi-8]`）→ `*reg` 保持旧行为（最小回归面）。非 `[reg...]` 形式 → None。
    寄存器索引操作数（`[esi+ecx*4]`）由调用方 _reg_index_guard 先行排除。
    """
    m = re.match(r"^\[([a-z]{2,3})\b", (txt or "").strip().lower())
    if not m or m.group(1) not in X86_REGS:
        return None
    base = m.group(1)
    if off is not None and off > 0:
        return f"{base}.member(0x{off:X})"
    return f"*{base}"


_RE_BARE_INDIRECT = re.compile(r"^\[([a-z]{2,3})]$")

# B4: 写目标操作数0的常见指令（SSA 版本边界标记范围）
_B4_WRITES_OP0 = frozenset({
    "mov", "movzx", "movsx", "lea", "pop", "xchg", "inc", "dec",
    "add", "sub", "adc", "sbb", "and", "or", "xor", "not", "neg",
    "shl", "shr", "sar", "rol", "ror", "imul",
    "sete", "setne", "setg", "setl", "setge", "setle",
    "seta", "setb", "setae", "setbe", "sets",
})

_REG32_NAMES = frozenset({
    "eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp",
})


def _reg32(op_txt):
    """B4: 操作数文本是否为 32 位通用寄存器名（类型流载体）。"""
    return (op_txt or "").strip().lower() in _REG32_NAMES


# B8: 索引全局数组访问 `mov reg,[G+idx*S]` / `mov [G+idx*S],reg` /
# `lea reg,[G+idx*S]`——元素级伪变量 arr_G（全局存储语义，不版本化）。
# 背景（案例1 0x47B3A0 实证）：g_CellClassArray 的 457 处索引访问全被
# reg_index_guard 排除——CellClass ctor(0x47BB60) 就地构造
# `lea ecx,[G+idx*S]; call ctor` 与元素加载均无变量无约束，Cell 证据
# 无法进入图，this 沉到接口级双根平票。arr_G 把全部索引位会聚为单一
# 存储槽：任一证据（ctor this 路由 / vtable 真值 / 参数回填）点亮后
# 所有元素访问继承。
_RE_IDX_GLOBAL = re.compile(
    r"^[\[]?([A-Za-z_][A-Za-z0-9_]*)\+.*\*"
)


def _parse_indexed_global(op_text):
    """`[g_Arr+eax*4]` → ('arr_g_Arr', element-indexed)；非索引全局返回 None。

    仅匹配"全局名 + 索引寄存器乘子"形态（`*` 必在）——`[G+4]` 常量偏移是
    结构体成员访问（不是数组元素），交由既有成员通道。名字须解析为真实
    全局（防局部变量误匹配）。
    """
    t = (op_text or "").strip()
    m = _RE_IDX_GLOBAL.match(t.rstrip("]"))
    if not m:
        return None
    gname = m.group(1)
    if idc is None:
        return "arr_" + gname
    try:
        ea = idc.get_name_ea(idaapi.BADADDR, gname)
        if ea == idc.BADADDR:
            return None
        seg = idc.get_segm_name(ea)
        if seg not in (".data", ".bss", ".rdata"):
            return None
    except Exception:
        return None
    return "arr_" + gname


# B6: 整数语义助记——内存操作数参与这些运算/比较，或被 fild/fistp 当整数
# 加载/存储，证明该槽位持有 int（参数/成员/栈槽/全局的 int 证据源）。
_B6_INT_ARITH = frozenset({
    "add", "sub", "adc", "sbb", "imul", "idiv", "div",
    "and", "or", "xor", "cmp", "test",
    "shl", "shr", "sar", "sal", "rol", "ror",
    "neg", "not", "inc", "dec",
    "fild", "fildl", "fildq", "fistp", "fistpl", "fisttp",
})

# B6: 操作数文本统一化（去尺寸前缀，兼容 GUI/headless 两种显示形态）
_RE_SIZE_PREFIX = re.compile(r"^(dword|word|byte|qword) ptr\s+")

# B6b: 强整数助记——寄存器参与这些运算在指针上极罕见（区别于 add/cmp 等
# 指针常见运算），可安全给寄存器 SSA 版本播 int 种（int 对类让位，
# 过播无害——与既有 mov reg,imm 种子同语义）。
_B6_REG_STRONG = frozenset({
    "imul", "idiv", "div", "and", "or", "xor",
    "shl", "shr", "sar", "sal", "rol", "ror",
})


def _operand_member_disp(txt, val):
    """B2: 操作数真实位移提取（纯逻辑，离线可测）。

    IDA get_operand_value 对**无位移** `[reg]`（o_displ，displ=0）返回的是
    寄存器索引（eax=0, ecx=1, edx=2...）而非位移——裸 `[ecx]` 被当成
    `member(0x1)`、`[edx]` 被当成 `member(0x2)`，所有首字段（vtable 槽）
    访问的偏移全错 +1，且不同寄存器的裸间接访问被合并到错误偏移域。
    修复：操作数文本恰为 `[reg]`（无 +/- 修饰）时位移恒为 0；其余形式
    交回调用方传入的 get_operand_value 结果。
    """
    if txt and _RE_BARE_INDIRECT.match(txt.strip().lower()):
        return 0
    return val


def _vtable_slot_anchors(vtables, vt_entries_mapped):
    """A0-S3 (T3): vtable 槽位 → 候选类锚变量表（纯逻辑，离线可测）。

    vtable 调用点静态只知槽位（`call [eax+10h]` → slot 4），不知 vt_start；
    类锚 = 5.1 vtable anchor 变量 `0x{func:08X}:this`（该变量域含
    Class_{vt_start:X}——单冒号 `:this` 体系，与 5.1 anchor 格式一致）。
    对每个含该槽位的 vtable 条目函数登记 `0x{func:08X}:this`；全局按
    (slot, func) 去重（规模 ≤ 总 vtable 条目数，与调用点数量无关）。
    返回 {slot_idx: [anchor_var, ...]}（槽位升序）。
    """
    anchors = defaultdict(list)
    for vt in vtables:
        entries = vt_entries_mapped.get(vt.get("start")) or ()
        for i, func_addr in enumerate(entries):
            anchors[i].append(f"0x{func_addr:08X}:this")
    return {k: list(dict.fromkeys(v)) for k, v in sorted(anchors.items())}


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


# ============================================================
# T9 (C3/C4): adjustor thunk 检测 + DAG 环检测
# 纯逻辑函数模块级定义，离线可导入（verify_extract_output.py / 合成测试复用）
# ============================================================

def _match_adjustor_thunk(insns):
    """C3: adjustor thunk 匹配（纯逻辑，离线可测）——Phase 1c 修正。

    本二进制（MSVC 6.0 x86）实测模式（二进制取证 + RTTI this_adjust 互证，
    106 个真实 thunk 样本）:
      A. stdcall this 调整器: `sub dword ptr [esp+4], imm` + `jmp target`
         （this 在栈上；imm == 次级 vtable 的 RTTI col_offset，
          如 AircraftClass col_off=0x6C0 → `81 6C 24 04 C0 06 00 00`）
      B. 成员子对象调整器:   `mov ecx, [ecx+off]` + `jmp target`
         （this 解引用为成员对象指针，off 为成员偏移）
      C. 纯转发桩:           `jmp target`（无调整——导入/共享别名）

    旧模式 `mov eax,[esp+4]; add eax,imm; jmp` 在本二进制 0 命中
    （已证伪：MSVC6 stdcall thunk 用 sub [esp+4] 直接改栈参数）。

    insns: _decode_insns3 的顺序指令列表，每条 = {"mnem", "ops"}。
    返回 (target, adjustment, kind)；adjustment = 加到 this 上的有符号
    增量（sub imm → -imm；deref → None）；未命中返回 None。
    """
    if not insns:
        return None
    i0 = insns[0]
    m1, o1 = i0.get("mnem"), i0.get("ops") or ()

    def _is_jmp(insn):
        o = insn.get("ops") or ()
        return insn.get("mnem") == "jmp" and o and o[0][0] == "near"

    # C. 纯转发桩
    if _is_jmp(i0):
        return o1[0][1], 0, "forwarder"

    if len(insns) < 2 or not _is_jmp(insns[1]):
        return None
    target = (insns[1]["ops"] or [])[0][1]

    # A. sub [esp+4], imm —— stdcall this 调整器
    if (m1 == "sub" and len(o1) >= 2
            and o1[0][0] == "displ" and o1[0][1] == "esp" and o1[0][2] == 4
            and o1[1][0] == "imm"):
        imm = o1[1][1]
        if imm > 0x7FFFFFFF:
            imm -= 0x100000000
        return target, -imm, "stack_sub"

    # B. mov ecx, [ecx+off] —— 成员子对象调整器
    if (m1 == "mov" and len(o1) >= 2
            and o1[0][0] == "reg" and o1[0][1] == "ecx"
            and o1[1][0] == "displ" and o1[1][1] == "ecx"):
        return target, None, "deref"

    return None


# C3: x86-32 通用寄存器号 → 名（IDA 9.2 get_reg_name 空返回时的静态兜底）
_X86_REG32 = ("eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi")


def _decode_insn_lite(ea):
    """C3: IDA 单指令解码 → 归一化 {"mnem","ops","size"}（供 _match_adjustor_thunk）。"""
    if ida_ua is None or idc is None:
        return None
    insn = ida_ua.insn_t()  # T9 修正: IDA 9.2 decode_insn 需 2 参 (out, ea)
    if not ida_ua.decode_insn(insn, ea):
        return None
    ops = []
    for i in range(2):  # mov/add/jmp 至多 2 操作数
        op = insn.ops[i]
        t = op.type
        if t == idaapi.o_reg:
            ops.append(("reg", idc.print_operand(ea, i)))
        elif t == idaapi.o_displ:
            regname = ""
            if ida_idp is not None:
                try:
                    regname = ida_idp.get_reg_name(op.reg, op.dtyp) or ""
                except Exception:
                    regname = ""
            if not regname:
                # IDA 9.2: get_reg_name 在部分上下文返回空（probe 实证
                # 0x4105E0 `sub [esp+4],4` 解出 displ reg=""；print_operand
                # 同样为空）——退回 x86 寄存器号静态映射（本提取器仅面向
                # gamemd.exe x86-32，reg 0-7 = eax..edi）。
                try:
                    txt = idc.print_operand(ea, i) or ""
                    _m = re.search(r"\[([A-Za-z_]\w*)", txt)
                    if _m:
                        regname = _m.group(1).lower()
                except Exception:
                    pass
            if not regname and 0 <= op.reg < 8:
                regname = _X86_REG32[op.reg]
            ops.append(("displ", regname, op.addr))
        elif t == idaapi.o_imm:
            ops.append(("imm", op.value))
        elif t == idaapi.o_near:
            ops.append(("near", idc.get_operand_value(ea, i)))
        else:
            ops.append((str(t),))
    return {"mnem": idc.print_insn_mnem(ea), "ops": ops, "size": insn.size}


def _decode_insns3(ea):
    """C3: 顺序解码 3 条指令（按指令边界对齐，第 N+1 条从第 N 条尾部开始）。"""
    insns, cur = [], ea
    for _ in range(3):
        d = _decode_insn_lite(cur)
        if d is None or d["size"] <= 0:
            return None
        insns.append(d)
        cur += d["size"]
    return insns


def _reachable(src, dst, adj):
    """C4: adj 中是否存在 src →* dst 路径（DFS，visited 防环）。"""
    seen = set()
    stack = [src]
    while stack:
        cur = stack.pop()
        if cur == dst:
            return True
        if cur in seen:
            continue
        seen.add(cur)
        stack.extend(adj.get(cur, ()))
    return False


def _build_acyclic_dag(edges):
    """C4: 增量构建无环 DAG——添加 (child, base) 边前检查 base 是否已是 child 的
    祖先（存在 base →* child 路径，即新增边会成环）→ 是则丢弃并记录。

    edges: iterable of (child_cls, base_cls)。
    返回 (dag_adj, children_of, dropped)；dropped 为被丢弃的成环边列表
    （长度写入 manifest `cycles_detected`）。
    """
    dag_adj = defaultdict(set)
    children_of = defaultdict(set)
    dropped = []
    for child_cls, base_cls in edges:
        if child_cls == base_cls:
            dropped.append((child_cls, base_cls))
            continue
        if _reachable(base_cls, child_cls, dag_adj):
            dropped.append((child_cls, base_cls))
            continue
        dag_adj[child_cls].add(base_cls)
        children_of[base_cls].add(child_cls)
    return dag_adj, children_of, dropped


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
    # D2 (F3 确定性): 记录实际 PYTHONHASHSEED——headless 复验固定种子
    # （set PYTHONHASHSEED=0）后同种子 dry/full 求解应逐位一致；unset 时
    # 记录 "unset"（运行间 set/dict 迭代顺序随机化 → 非确定求解的信号）。
    "python_hash_seed": os.environ.get("PYTHONHASHSEED", "unset"),
    "types_created": [],
    "types_deleted": [],
    "types_skipped_existing": [],
    "names_renamed": [],
    "names_skipped_protected": [],
    # D1: 结构体注入防御性过滤记录（非法偏移 / 非法类名）
    "offsets_filtered_illegal": [],
    # T4 (A1): BADADDR 源头过滤记录（Step 3 约束生成处——成员偏移非法 +
    # 栈槽量级垃圾）。与 offsets_filtered_illegal（Step 7 final_classes 侧
    # 双保险）同结构；本层滤净后 Step 7 侧应恒为空。
    "offsets_filtered_source": [],
    "structs_skipped_no_valid_offsets": [],
    "names_sanitized": [],
    "structs_skipped_invalid_name": [],
    # T9 (C3/C4): adjustor thunk 检测记录 + subtype DAG 成环边丢弃计数
    "thunks_detected": [],
    "cycles_detected": 0,
    # A0-S2 (T1): 写检测覆盖指标（Step 3 结束后填充；=0 表示覆盖域内
    # 每条寄存器写都产生了约束——SSA 版本边界完整的可观测断言）
    "write_gap_count": 0,
    "write_gap_detail": {},
    # T5 (E1/E2): 锚定指标——成员锚条目/命中数 + 签名锚定数 + 强度分布
    "member_anchor_entries": 0,
    "member_anchor_hits": 0,
    "sig_this_anchors": 0,
    "sig_return_anchors": 0,
    "anchor_strength_dist": {},
    # T7 (B1/B2): 分域域模型——跨域矛盾记录（有限 cap 防爆炸）+ 锚点分层指标
    "b1_split_enabled": DOMAIN_SPLIT,
    "domain_conflicts": {},
    "domain_conflicts_capped": False,
    "anchor_strength_propagation": 0,
    # T8 (C1/C2): 矛盾检测隔离 + top-K 候选
    # C1: conflicts[var] = {edges: 原因边列表, domains: {cls, type, other}}——
    # 变量级（greedy 消费，cap 200，超限计数不膨胀）；conflicted_skipped =
    # greedy 因矛盾跳过的变量数（保持 unresolved 语义）
    "conflicts": {},
    "conflicts_capped": False,
    "conflicts_overflow": 0,
    "conflicted_skipped": 0,
    # D1 (F3 fix): unresolved 兜底归因计数——矛盾 this 变量凭 C2 候选集
    # candidates[0] 归因（C1 矛盾记录保留、语义不变），消除 Class_unresolved_*
    # 单例；无候选的才生成 Class_unresolved_N。观测量，不改输出结构。
    "unresolved_fallback_count": 0,
    # C2: candidates_built = 构建 top-3 候选的变量数；candidates_vote_edges =
    # Step 6 候选集投票投出的票数（观测）
    "candidates_built": 0,
    "candidates_vote_edges": 0,
    # T10 (E3-E8): 语义约束批指标（每子项独立可观测）
    "global_anchor_entries": len(GLOBAL_ANCHOR_BY_ADDR),
    "global_anchor_hits": 0,
    "null_const_returns": 0,
    "null_const_anchored": 0,
    "call_site_conflicts": {},
    # T6 (I2): 扩展 mnemonics（lea/add/sub 非空）产生的 RETURN 边增量计数
    "return_edges_extended_i2": 0,
    "array_index_constraints": 0,
    "array_index_widths": {},
    "array_index_edges": [],
    "this_adjust_edges": [],
    "eq_class_count": 0,
    "eq_class_shared": 0,
    "eq_class_conflicts": {},
    # T11 (D1/D2/E9): CSP 质量指标 + MEMBERSHIP 验证器（纯可观测/验证输出）
    # csp_quality: {unresolved_count, conflict_count, avg_domain_size,
    #               class_mapped_count, write_gap_count}——Step 9 导出前聚合
    "csp_quality": {},
    # E9 MEMBERSHIP: CSP 推断 offsets ⊆ member_lookup 成员偏移 一致性检查
    # （验证用途，不改求解）。membership_conflicts 列表防膨胀（cap 200）。
    "membership_conflicts": [],
    "membership_conflict_count": 0,
    "membership_checked_classes": 0,
    "membership_offsets_checked": 0,
    "errors": [],
}


print(
    f"  [D2] PYTHONHASHSEED={RUN_MANIFEST['python_hash_seed']!r} "
    f"(复验固定种子: set PYTHONHASHSEED=0)"
)


def _write_manifest():
    manifest_dir = os.path.join(PROJ_ROOT, ".omo")
    os.makedirs(manifest_dir, exist_ok=True)
    manifest_path = os.path.join(manifest_dir, "type_infer_run_manifest.json")
    with open(manifest_path, "w", encoding="utf-8") as f:
        json.dump(RUN_MANIFEST, f, indent=2)
    return manifest_path

# ============================================================
# T11 (D1/D2/E9): CSP 质量指标 + MEMBERSHIP 验证器
# 纯可观测/验证输出——只读 final_classes / domain / anchor_strength /
# rename_map / MEMBER_ANCHOR，不改任何求解逻辑（模块级纯函数，离线可测）。
# ============================================================

def _t11_avg_domain_size(domain, type_domain=None):
    """D1: AC-3 收敛后、greedy(5.4) 前的平均域大小（全部变量，含空域）。

    口径: sum(len(dom)) / len(domain)——空域变量（无约束/未解析）计入平均，
    如实反映约束紧致度。域为空 → 0.0。
    T7 (B1): type_domain 提供时按联合视图统计（分域下键 = 类域∪类型域）。
    """
    if type_domain is not None:
        keys = set(domain.keys()) | set(type_domain.keys())
        if not keys:
            return 0.0
        return sum(len(_domain_union(domain, type_domain, v)) for v in keys) / float(len(keys))
    if not domain:
        return 0.0
    return sum(len(d) for d in domain.values()) / float(len(domain))


def _t11_class_confidence(vars_list, anchor_strength):
    """D2: 类级置信度 = vtable=3 级锚变量计数 / 类变量数。

    anchor_strength 分级（B2）: 3=vtable 锚（最高），2=成员/签名/全局锚，
    1=传播，0=开放。聚合口径: 强度 == 3 的变量占比 ∈ [0.0, 1.0]。
    """
    if not vars_list:
        return 0.0
    strong = sum(1 for v in vars_list if anchor_strength.get(v, 0) == 3)
    return strong / float(len(vars_list))


def _t11_class_candidates(vars_list, domain, anchor_strength, type_domain=None,
                          var_candidates=None):
    """D2: 类级候选 top-3（T8 C2 候选聚合；无 C2 候选时域兜底）。

    T8 (C2) 协调: var_candidates（变量级 top-3 候选 dict）提供时按候选聚合
    ——每候选类得分 = Σ(所在变量的排名权重 (3 - rank))，降序取前 3（平局按
    类名字典序，稳定）。这是"真"候选（greedy 权重函数产出）；var_candidates
    为 None 时回退到域兜底（旧逻辑——域并集 + anchor_strength 加权，观测用）。
    纯函数——只读观测字段，不改任何求解逻辑。
    """
    if var_candidates:
        scores = {}
        for v in vars_list:
            for rank, c in enumerate(var_candidates.get(v, ())[:3]):
                scores[c] = scores.get(c, 0) + (3 - rank)
        if scores:
            return [t for t, _ in sorted(scores.items(), key=lambda kv: (-kv[1], kv[0]))[:3]]
    scores = {}
    for v in vars_list:
        w = anchor_strength.get(v, 0) + 1
        if type_domain is not None:
            dom = _domain_union(domain, type_domain, v)
        else:
            dom = domain.get(v, ())
        for t in dom:
            scores[t] = scores.get(t, 0) + w
    return [t for t, _ in sorted(scores.items(), key=lambda kv: (-kv[1], kv[0]))[:3]]


def _t8_candidate_vote(vt_name_votes, candidates, var_to_cls, final_keys,
                       this_var, sig_class):
    """T8 (C2): Step 6 signals 投票——候选集加权（纯函数，离线可测）。

    投票来源从单类 var_to_cls 扩展为变量级 top-K 候选（无锚点/未解析变量
    凭候选集获得命名机会——C1 矛盾保持 unresolved 的变量不再错失命名）:
      - this_var 有候选 → 对 candidates 中每个候选类投票，权重按排名递减:
        排名权重 (3 - rank) × signals 置信度 2 = 6/4/2（signals 高置信度保持）
      - 仅投 final_classes 存在的候选类（rename_map 只被 final class 消费——
        防死键 + used_names 抢占真实类名）
      - 无候选但 this_var 已解析 → 单类投票权重 2（原语义）
      - 两者皆无 → 不投票
    返回投出的票数（观测——RUN_MANIFEST['candidates_vote_edges']）。
    """
    _cands = candidates.get(this_var)
    if _cands:
        _voted = 0
        for _rank, _ccls in enumerate(_cands[:3]):
            if _ccls not in final_keys:
                continue
            vt_name_votes[_ccls][sig_class] += (3 - _rank) * 2
            _voted += 1
        return _voted
    if this_var in var_to_cls:
        vt_name_votes[var_to_cls[this_var]][sig_class] += 2
        return 1
    return 0


def _t11_build_csp_quality(final_classes, avg_domain_size, rename_map,
                           write_gap_count, conflicts):
    """D1: csp_quality 聚合——各值从求解后的实际数据计算，不硬编码。

    - unresolved_count  = Class_unresolved_* 类数（5.5 未解析单例类）
    - conflict_count    = T8 C1 conflicts 记录数（T8 未实现 → 0）
    - avg_domain_size   = 5.4 前平均域大小（_t11_avg_domain_size 捕获）
    - class_mapped_count= rename_map 条目数（Step 6 最终映射）
    - write_gap_count   = T1 A0-S2 写检测缺口指标（RUN_MANIFEST 直接读取）
    """
    return {
        "unresolved_count": sum(
            1 for cls in final_classes if cls.startswith("Class_unresolved_")
        ),
        "conflict_count": len(conflicts or {}),
        "avg_domain_size": round(float(avg_domain_size), 3),
        "class_mapped_count": len(rename_map),
        "write_gap_count": int(write_gap_count or 0),
    }


def _t11_check_membership(final_classes, rename_map, member_anchor):
    """E9: MEMBERSHIP 验证器——CSP 推断 offsets ⊆ 成员表偏移。

    对 final_classes 中已映射到 real_name 的类，用 member_lookup 的成员偏移
    （T5 MEMBER_ANCHOR[(class, off)]）验证 CSP 推断的 offsets 不矛盾:
    推断了成员表没有的偏移 → 冲突记录（验证用途，不改求解）。
    非法偏移（<0 或 >=0x80000000，Step 7 D1 过滤口径）不算推断 → 跳过。

    返回 (conflicts, checked_classes, checked_offsets):
    - conflicts: [{csp_class, real_name, conflict_offsets, offsets_checked}]
    - checked_classes / checked_offsets: 参与检查的类数 / 偏移总数
    """
    conflicts = []
    checked_classes = 0
    checked_offsets = 0
    for cls in sorted(final_classes):
        real_name = rename_map.get(cls)
        if not real_name:
            continue  # 未映射到 real_name 的类无对照表，不参与
        info = final_classes[cls]
        offs = sorted(o for o in info.get("offsets", ()) if 0 <= o < 0x80000000)
        if not offs:
            continue
        checked_classes += 1
        checked_offsets += len(offs)
        missing = sorted(o for o in offs if (real_name, o) not in member_anchor)
        if missing:
            conflicts.append(
                {
                    "csp_class": cls,
                    "real_name": real_name,
                    "conflict_offsets": missing,
                    "offsets_checked": len(offs),
                }
            )
    return conflicts, checked_classes, checked_offsets

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

    # Phase 1a+: RTTI vtable 反截断。启发式扫描要求条目是 IDA 函数起点，
    # 但 MSVC6 adjustor thunk（`sub [esp+4],imm; jmp`）通常未被定义为
    # 函数 → 次级 vtable 在首个 thunk 条目处被截断，C3 因此看不到 thunk。
    # 对 RTTI 真值 vtable 放宽为仅校验 .text 范围重读条目，并以相邻
    # 真值 vtable 起址为界（连续 vtable 间以 COL 指针分隔，天然断链）。
    _rtti_vt_starts = sorted(
        int(_k, 16) for _k in RTTI_VTABLE_MAP
        if RDATA_START <= int(_k, 16) < RDATA_END
    )
    _untruncated = 0
    for vt in vtables:
        if f"0x{vt['start']:x}" not in RTTI_VTABLE_MAP:
            continue
        _bound = vt["start"] + 0x800
        for _s in _rtti_vt_starts:
            if _s > vt["start"]:
                _bound = min(_bound, _s - 4)
                break
        _entries, _ea = [], vt["start"]
        while _ea < _bound - 4:
            _val = ida_bytes.get_dword(_ea)
            if _val < TEXT_START or _val >= TEXT_END:
                break
            _entries.append(_val)
            _ea += 4
        if len(_entries) > len(vt["entries"]):
            vt["entries"] = _entries
            _untruncated += 1
    RUN_MANIFEST["rtti_vtable_untruncated"] = _untruncated
    if _untruncated:
        print(f"  [RTTI] vtables un-truncated (thunk entries recovered): {_untruncated}")

    # --- C3: adjustor thunk 检测（T9）---
    # 模式: `mov eax,[esp+4]` → `add eax,imm` → `jmp <target>` 三重连读。
    # 命中后该 vtable 条目锚定真实目标函数（jmp 目标），this_adjustment 记录；
    # thunk 自身地址不参与 this 锚定（锚定路径用 thunk_targets 映射）。
    thunk_targets = {}       # entry_addr → 真实目标函数地址
    thunk_adjustments = {}   # entry_addr → this_adjustment
    thunks_detected = []     # manifest 记录: [{entry, target, adjustment, kind}]
    _rtti_confirm = _rtti_conflict = 0  # Phase 1c: adjustment 与 RTTI col_offset 互证
    for vt in vtables:
        _vt_info = RTTI_VTABLE_MAP.get(f"0x{vt['start']:x}") or {}
        for entry in vt["entries"]:
            if entry in thunk_targets:
                continue
            insns = _decode_insns3(entry)
            hit = _match_adjustor_thunk(insns) if insns else None
            if hit:
                target, adjustment, thunk_kind = hit
                thunk_targets[entry] = target
                thunk_adjustments[entry] = adjustment
                thunks_detected.append(
                    {"entry": hex(entry), "target": hex(target),
                     "adjustment": adjustment, "kind": thunk_kind}
                )
                # RTTI 互证: stdcall thunk 的 -imm 应等于该次级 vtable 的
                # col_offset（this 从 subobject 还原到 complete object）
                _col = _vt_info.get("col_offset") or 0
                if _col and adjustment is not None:
                    if adjustment == -_col:
                        _rtti_confirm += 1
                    else:
                        _rtti_conflict += 1
    RUN_MANIFEST["thunks_detected"] = thunks_detected
    RUN_MANIFEST["rtti_thunk_confirm"] = _rtti_confirm
    RUN_MANIFEST["rtti_thunk_conflict"] = _rtti_conflict
    print(
        f"  [C3] Adjustor thunks detected: {len(thunks_detected)} "
        f"(RTTI xcheck: confirm={_rtti_confirm}, conflict={_rtti_conflict})"
    )
    if len(thunks_detected) > 1000:
        print(
            f"  [C3][WARNING] thunk 数量 {len(thunks_detected)} > 1000，"
            f"需怀疑误判（19K 函数 MI 场景预期数十~数百）"
        )

    # C3: 各 vtable 的锚定条目（thunk → 真实目标）——5.1 / vt_groups /
    # _anchor_bonus / slot_to_funcs 共用（thunk 自身地址不参与 this 锚定）
    vt_entries_mapped = {
        vt["start"]: [thunk_targets.get(e, e) for e in vt["entries"]]
        for vt in vtables
    }

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

    # Phase 1a: RTTI 真值覆盖——二进制 RTTI（100% IDB 一致）优先于
    # IDA 名称/邻近猜测；启发式仅兜底非 RTTI vtable（CRT 等）。
    _rtti_overrides = 0
    vt_rtti_secondary = {}  # vt_start -> col_offset（次级 subobject vtable）
    for vt in vtables:
        _info = RTTI_VTABLE_MAP.get(f"0x{vt['start']:x}")
        if not _info:
            continue
        vtable_to_real_name[vt["start"]] = _info["class"]
        _rtti_overrides += 1
        if _info.get("col_offset"):
            vt_rtti_secondary[vt["start"]] = _info["col_offset"]
    RUN_MANIFEST["rtti_name_overrides"] = _rtti_overrides
    RUN_MANIFEST["rtti_secondary_vtables"] = len(vt_rtti_secondary)

    print(
        f"  Found {len(vtables)} vtables, mapped {len(vtable_to_real_name)} to RTTI names "
        f"(RTTI truth override: {_rtti_overrides}, secondary: {len(vt_rtti_secondary)})."
    )

    # ============================================================
    # 2. 核心重构：别名追踪 + 完全信任 IDA 栈深
    # ============================================================
    print("\n[2/9] Locking skeletons (Alias Tracking & Stack Depth)...")

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

        # S6 (Priority 0): RTTI 实证 vtable 的成员函数必为 thiscall——
        # vtable 槽位即 this 调度表，成员资格是二进制证明。三优先级全落空
        # 的主群体是从不解引用 this 的桩函数（xor eax,eax; ret 型 vt 桩），
        # 旧退化路径把它们标成 stdcall/cdecl → this_var 缺失 → vtable 锚/
        # FUNC_PARAM this 边/成员提取全链失效（1,200 实测）。仅 RTTI 实证
        # vtable（启发式 vtable 组不加权）。
        if func_ea in _vt_proven_thiscall:
            cc = ida_typeinf.CM_CC_THISCALL
        else:
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


    # S6: RTTI 实证 vtable 成员集（CC Priority 0 的真值来源）
    _vt_proven_thiscall = set()
    for _vt in vtables:
        if f"0x{_vt['start']:x}" not in RTTI_VTABLE_MAP:
            # S10: 启发式 vtable 类前缀一致性守卫——≥50% 成员函数名共享
            # 同一 `Class::` 前缀才认定为类 vtable（分发表/消息表无一致
            # 前缀，不加权）。Jumpjet COM 接口（RTTI 未覆盖）由此纳入。
            _pref = Counter()
            for _fe in vt_entries_mapped.get(_vt["start"], ()):
                _nm = idc.get_func_name(_fe) or ""
                if "::" in _nm:
                    _pref[_nm.split("::", 1)[0]] += 1
            if not _pref:
                continue
            _best, _cnt = _pref.most_common(1)[0]
            _total = len(vt_entries_mapped.get(_vt["start"], ()))
            if _cnt * 2 < _total:
                continue  # 前缀一致性 <50% → 不认定
            for _fa in vt_entries_mapped.get(_vt["start"], ()):
                _vt_proven_thiscall.add(_fa)
            continue
        for _fa in vt_entries_mapped.get(_vt["start"], ()):
            _vt_proven_thiscall.add(_fa)
    # S9: vtable 安装者（ctor/dtor/Construct）同为 thiscall 真值
    _ctor_types = {}
    _ctor_path = os.path.join(PROJ_ROOT, "anchors", "ctor_types.json")
    if os.path.exists(_ctor_path):
        try:
            with open(_ctor_path, encoding="utf-8") as _cf:
                _ctor_types = json.load(_cf)
            for _ca in _ctor_types:
                try:
                    _vt_proven_thiscall.add(int(_ca, 16))
                except ValueError:
                    pass
        except (OSError, json.JSONDecodeError):
            pass
    print(
        f"  [S6+S9+S10] proven thiscall: {len(_vt_proven_thiscall)} funcs "
        f"(+{len(_ctor_types)} ctors)"
    )

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
        prologue 的 SP 调整。两者之和归一化到 entry-ESP 基准（esp 基）。
        A2: EBP 帧函数（FUNC_FRAME 标志）统一 ebp 基——`[esp+X]` 用 frsize
        换算（ebp_off = X - frsize，见 _a2_esp_off_to_ebp），`[ebp+Y]` 的 Y
        已相对 ebp 直接使用；无帧 / frsize 不可得 → 保守保持 esp 基（不换算）。
        A2 后参数槽命名随之统一（FUNC_PARAM param0 = [ebp+8] = stack_+8）。
        非栈操作数 / 寄存器索引操作数 → None。
        """
        txt = (idc.print_operand(ea, op_n) or "").strip().lower()
        m = re.match(r"^\[(esp|ebp)\b", txt)
        if not m:
            return None
        if _reg_index_guard(txt, m.end()):
            return None
        # B2: 裸 `[esp]`/`[ebp]`（无位移）get_operand_value 返回寄存器索引
        # 而非 0——文本精确判定（见 _operand_member_disp）
        val = _operand_member_disp(txt, idc.get_operand_value(ea, op_n))
        if val is None:
            return None
        try:
            spd = idc.get_sp_delta(ea)
        except Exception:
            spd = 0
        if spd is None:
            spd = 0
        base = m.group(1)
        func = idaapi.get_func(ea)
        has_frame = False
        frsize = None
        if func is not None:
            has_frame = bool(func.flags & getattr(ida_funcs, "FUNC_FRAME", 0x100))
            frsize = getattr(func, "frsize", None)
        if base == "ebp":
            # A2: [ebp+Y] 的 Y 已相对 ebp（帧基）→ 直接统一 ebp 基；
            # 无帧（理论上 ebp 操作数不应出现）→ 保守保持旧行为
            if has_frame:
                return f"stack_{val:+#x}"
            return f"stack_{val + spd:+#x}"
        # [esp+X]: esp 基 → A2 换算 ebp 基；换算不可得（无帧/frsize 缺失）
        # → 保守保持 esp 基（不换算，任务指定）
        ebp_off = _a2_esp_off_to_ebp(val, spd, frsize, has_frame)
        if ebp_off is not None:
            return f"stack_{ebp_off:+#x}"
        return f"stack_{val + spd:+#x}"


    def _parse_operand_src(ea, op_n, scope=None):
        """F3/F6/F14: 操作数 → ('kind', name) 类型化来源。

        ('reg', name) / ('stack', stack_name) / ('global', name) /
        ('member', '*base_reg') / ('imm', None) / None（不可解析）。
        scope: 调用方函数起始地址——member 名加 `0xADDR::` 前缀（B3）。
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
                # A0-S3 (T3): 保留成员偏移——`mov ecx,[esi+14h]` →
                # `esi.member(0x14)`（旧 `*esi` 丢弃偏移且被 scope_vars
                # 当作寄存器 SSA 化；断链 1 修复，偏移可参与 MEMBER_ANCHOR）
                # B2: 裸 `[reg]` 的 get_operand_value 返回寄存器索引而非
                # 位移 0——文本精确判定强制 off=0（见 _operand_member_disp）
                # A1: 位移有效性（BADADDR -1 以 64 位泄漏成
                # member(0xFFFFFFFFFFFFFFFF)，无类型价值）
                _disp = _operand_member_disp(txt, idc.get_operand_value(ea, op_n))
                if _disp is None or not _a1_valid_member_off(_disp):
                    return None
                name = _this_src_member_name(low, _disp)
                if name is None:
                    return None
                # B3: member 名必须函数作用域化——`esi.member(0x14)` 在
                # 不同函数中同名，会形成跨函数汇流枢纽（度 370 实证），
                # 与 vtable_slot_* 同性质的污染源
                if scope is not None and "." in name:
                    name = f"0x{scope:08X}::{name}"
                return ("member", name)
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
                pushes.append(_parse_operand_src(ea, 0, scope=fstart))
            elif mnem == "mov" and idc.print_operand(ea, 0).strip().lower() == "ecx":
                # F6: this 来源数值解析（寄存器别名 / 栈槽 / 成员 / 全局）。
                # B2 (thiscall nearest-def): 逆序扫描由近及远，离 call 最近
                # 的 `mov ecx, X` 才是为本次调用装载 this 的 def——首次
                # 命中即锁定，禁止更远处的 mov ecx（属更早调用的遗留值）
                # 覆盖。实测案例：call 前序列 [mov ecx,offset Map], mov,
                # push, lea, mov, [mov ecx,[eax+4]]（前者真 this）——旧行
                # 为取最远者，把 this 错绑到无关成员上。
                if this_src is None:
                    src = _parse_operand_src(ea, 1, scope=fstart)
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
        """F6/F14: 数值化栈访问边（替代失配的文本正则 RE_STACK_FULL）。

        A1: 栈槽名量级校验——±0x80000000 之外的位移是 32 位位移垃圾
        （BADADDR 0xFFFFFFFF 泄漏等），不产生约束（计数进 manifest；
        Step 7 final_classes 侧双保险保留）。负偏移（局部变量）合法。
        """
        sn = _stack_operand_name(ea, op_n)
        if sn is None:
            return None
        raw_off = _a2_parse_stack_off(sn)
        if raw_off is not None and not _a1_sane_stack_off(raw_off):
            f = idaapi.get_func(ea)
            fkey = f"0x{f.start_ea:08X}" if f else ea_hex
            func_bad_offsets[fkey].add(raw_off)
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
    # A0-S2 (T1): 每函数寄存器写点 vs 产生约束的写点（write_gap_count 指标源）
    func_write_seen = defaultdict(int)
    func_write_produced = defaultdict(int)
    # A1 (T4): BADADDR 源头过滤计数（成员偏移非法 + 栈槽量级垃圾）——
    # 复用 RUN_MANIFEST["offsets_filtered_illegal"] 的结构（Step 7 双保险保留）
    func_bad_offsets = defaultdict(set)
    # T10 (E6): 数组索引约束记录（manifest 采样 + 计数）
    array_index_edges = []

    # A0-S3 (T3): vtable 槽位 → 候选类锚边（接收者链第二跳，断链 2 修复）。
    # 链: receiver → vtable_slot_{idx}:this（_scan_call_args 既有 CALL_ARG 边）
    #      → 0x{func:08X}:this（5.1 vtable anchor 变量，域含 Class_{vt_start}），
    # AC-3 沿链传播收敛选类。全局按 (slot, func) 去重、与调用点数量无关
    # （规模 ≤ 总 vtable 条目数）；两端均非寄存器 → addr 不参与 SSA 化。
    slot_anchors = _vtable_slot_anchors(vtables, vt_entries_mapped)
    for _slot, _anchors in slot_anchors.items():
        _slot_var = f"vtable_slot_{_slot:#x}:this"
        for _a in _anchors:
            constraints.append(
                {
                    "from": _slot_var,
                    "to": _a,
                    "type": "CALL_ARG",
                    "addr": "0x0",
                    "callee_name": f"vtable_slot_{_slot:#x}",
                }
            )
    print(
        f"  [A0-S3] vtable slot→class-anchor edges: {len(slot_anchors)} slots, "
        f"{sum(len(v) for v in slot_anchors.values())} edges"
    )

    for func_ea in idautils.Functions():
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != ".text":
            continue

        func_name = ida_funcs.get_func_name(func_ea) or f"sub_{func_ea:X}"
        func_addr_str = f"0x{func_ea:08X}"
        func_addr_to_name[func_addr_str] = func_name

        func = idaapi.get_func(func_ea)
        # A2 (T4): 帧信息（FUNC_FRAME + frsize）——栈槽基准统一（_stack_operand_name）
        # 与参数槽命名（_a2_param_slot_name）共用同一判定：EBP 帧函数统一 ebp 基
        has_frame = False
        frsize = None
        if func is not None:
            has_frame = bool(func.flags & getattr(ida_funcs, "FUNC_FRAME", 0x100))
            frsize = getattr(func, "frsize", None)
        ea, end, fstart = func_ea, func.end_ea, func_ea
        # B8b: 数组基址寄存器表 R → 全局名（`mov R, offset G` 登记；
        # call 清 caller-saved；其它写清除——线性扫描近似，边=join 证据
        # 容忍有限不精确）
        array_base_regs = {}
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
            # A2: EBP 帧函数参数槽统一 ebp 基（param0 = [ebp+8] = stack_+8）；
            # 无帧函数保持 entry-ESP 基（param0 = [esp+4]@entry = stack_+0x4）。
            # 槽名与 _stack_operand_name 的 A2 换算共用 _a2_param_slot_name
            # （[ebp+8] 与入口 [esp+4] 指向同一参数槽——基准统一后命名一致）。
            constraints.append(
                {
                    "from": f"{func_addr_str}::param{i}",
                    "to": _a2_param_slot_name(frsize, has_frame, i),
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
            nc_pre = len(constraints)  # A0-S2: 本指令产生约束数基线（指标用）
            c = None
            # A0-S2 (T1): lea 源解析提前（分支 + write_gap 指标共用，避免重复解析）
            lea_src = None
            if mnem == "lea" and op0:
                lea_src = _parse_operand_src(ea, 1, scope=fstart)

            if mnem == "mov" and op0 and op1:
                src = op1.strip().lower()
                dst = op0.strip().lower()
                if dst in X86_REGS:
                    # F6: 数值化 param0 别名检测（`mov reg, [esp+4]`@entry）
                    # A2: 槽名随帧基准统一（EBP 帧 → [esp+4]@entry = stack_+8，
                    # 与 FUNC_PARAM param0 槽一致）——与 _a2_param_slot_name 对齐
                    sn = _stack_operand_name(ea, 1)
                    if sn == _a2_param_slot_name(frsize, has_frame, 0):
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
                        # B2: 裸 `[reg]` get_operand_value 返回寄存器索引
                        # 而非位移——文本精确判定强制 off=0
                        val = _operand_member_disp(
                            txt, idc.get_operand_value(ea, op_n))
                        if val is None or val < 0:
                            continue
                        off = val
                    # A1 (T4): BADADDR 源头过滤——非法成员偏移（<0 或
                    # >= 0x80000000，如 BADADDR 0xFFFFFFFF 泄漏）在约束生成处
                    # 跳过：不产生 ASSIGN 约束、不进入 func_internal_offsets。
                    # Step 7 final_classes 侧过滤保留为双保险。
                    if not _a1_valid_member_off(off):
                        func_bad_offsets[func_addr_str].add(off)
                        continue
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

            # T10 (E6): ARRAY_INDEX —— `[reg+idx*4]` / `[reg+idx*8]` 数组索引访问。
            # 现有检测链对寄存器索引操作数（_reg_index_guard）全部跳过 → 数组成员
            # 推断空白。此处前置检测（在 reg↔reg ASSIGN 前，索引操作数不被其他
            # 分支处理，不会双产约束）:
            #   - 基址 reg 为 this/param0 别名 → `{func}:this.member(off)` 成员
            #     约束（TYPE_SEED: 宽度 4 → int，宽度 8 → double——保守，宁缺毋滥）
            #   - 基址不可解析（非别名 reg）→ 跳过（计数仅记录可解析部分）
            #   - 元素宽度（4/8）记录进 RUN_MANIFEST["array_index_widths"]
            if not c and mnem in (
                "mov", "lea", "movzx", "movsx", "cmp", "test", "add", "sub", "imul"
            ):
                for _op_n in (0, 1):
                    _txt = (idc.print_operand(ea, _op_n) or "").strip().lower()
                    _arr = _e6_parse_array_index(_txt, idc.get_operand_value(ea, _op_n))
                    if not _arr:
                        continue
                    _base, _idx, _scale, _off = _arr
                    if not _a1_valid_member_off(_off):
                        func_bad_offsets[func_addr_str].add(_off)
                        break
                    _mem_var = None
                    if _base in this_regs:
                        _mem_var = f"{func_addr_str}:this.member({_off:#x})"
                    elif _base in param0_regs:
                        _mem_var = f"{func_addr_str}::param0.member({_off:#x})"
                    if _mem_var:
                        c = {
                            "type": "TYPE_SEED",
                            "var": _mem_var,
                            "itype": "int" if _scale == 4 else "double",
                            "addr": f"0x{ea:X}",
                        }
                        func_internal_offsets[func_addr_str].add(_off)
                        array_index_edges.append(
                            {
                                "addr": f"0x{ea:X}",
                                "base": _base,
                                "idx": _idx,
                                "scale": _scale,
                                "off": _off,
                                "member": _mem_var,
                            }
                        )
                        _wkey = str(_scale)
                        RUN_MANIFEST["array_index_widths"][_wkey] = (
                            RUN_MANIFEST["array_index_widths"].get(_wkey, 0) + 1
                        )
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
                    # B5: 对侧若是内存操作数，禁止把 print_operand 原文
                    # （`dword ptr [esi]`——跨函数同名共享枢纽，实测复用
                    # 1693 次）直接作变量名——用 _parse_operand_src 解析
                    # （member/stack/reg，B3 已作用域化）；不可解析则断链
                    # （该值流动信息宁可丢失，不可共享假名）。
                    _dst = op0.strip().lower()
                    if _dst not in X86_REGS:
                        _dsrc = _parse_operand_src(ea, 0, scope=fstart)
                        if not _dsrc or _dsrc[0] not in ("member", "stack", "reg"):
                            _dst = None
                        else:
                            _dst = _dsrc[1]
                    if _dst:
                        c = {
                            "from": _strip_seg(op1.strip()),
                            "to": _dst,
                            "type": "ASSIGN",
                            "addr": f"0x{ea:X}",
                        }
                elif _is_global_ref(op0):
                    _srcname = op1.strip().lower()
                    if _srcname not in X86_REGS:
                        _ssrc = _parse_operand_src(ea, 1, scope=fstart)
                        if not _ssrc or _ssrc[0] not in ("member", "stack", "reg"):
                            _srcname = None
                        else:
                            _srcname = _ssrc[1]
                    if _srcname:
                        c = {
                            "from": _srcname,
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

            # A0-S2 (T1): mov reg, imm → TYPE_SEED(reg, "int")（写检测补全——
            # 成员/全局/栈三路检测对立即数源全落空，int 证据 + SSA 写点双缺失）
            if not c and mnem == "mov" and op0 and op1:
                _imm_seed = _a0s2_mov_imm_seed(mnem, op0, op1, f"0x{ea:X}")
                if _imm_seed:
                    constraints.append(_imm_seed)

            # A0-S2 (T1): lea reg, X（X = 成员/栈/全局）→ ASSIGN(X → reg)。
            # 链上 this/param0 成员分支（上方 F5 段）已处理的 lea 优先短路；
            # 此处兜底其余成员 + 栈槽 + 全局引用（ASSIGN to=reg 被
            # scope_vars._detect_writes 识别 → 版本边界补全）
            if not c and mnem == "lea" and op0:
                _lea_c = _a0s2_lea_assign(mnem, op0, lea_src, f"0x{ea:X}")
                if _lea_c:
                    c = _lea_c

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
                        # B8c: 数组基址经 this 传入被调函数——回看 ≤6 条
                        # `mov ecx, R`（R 已登记为 G 的基址）→ CALL_ARG
                        # (arr_G → callee:this)。RA2 模式实证：411 处基址
                        # 载入仅 5 处就地索引——基址主要作为 this/参数传给
                        # 辅助函数在其内部索引。桥接后：任一调用方传真实
                        # 元素指针给同一辅助函数 → arr_G 点亮 → 全体继承。
                        if array_base_regs and func_addr_str:
                            _p8 = idc.prev_head(ea, fstart)
                            for _ in range(6):
                                if _p8 == idaapi.BADADDR or _p8 < fstart:
                                    break
                                _m8c = idc.print_insn_mnem(_p8)
                                if _m8c == "call":
                                    break
                                if (_m8c == "mov"
                                        and (idc.print_operand(_p8, 0) or "").strip().lower() == "ecx"):
                                    _src8 = (idc.print_operand(_p8, 1) or "").strip().lower()
                                    _g8c = array_base_regs.get(_src8)
                                    if _g8c:
                                        constraints.append(
                                            {
                                                "from": "arr_" + _g8c,
                                                "to": f"0x{tgt:08X}:this",
                                                "type": "CALL_ARG",
                                                "addr": call_ea_hex,
                                                "callee_name": cname,
                                            }
                                        )
                                    break
                                _p8 = idc.prev_head(_p8, fstart)
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
                            # B7 (接收者捕获): `call [reg+disp]` 的 reg 持有
                            # vtable 指针；向后 ≤6 条找 `mov reg, [obj]`（裸
                            # 间接，B2b 位移语义已修正）→ obj 来源即接收者
                            # （对象指针）。只记 member/stack/global 来源（含
                            # 作用域，精确存储位）；寄存器源无法定位版本，跳过。
                            try:
                                _ct = _RE_SIZE_PREFIX.sub(
                                    "", (idc.print_operand(ea, 0) or "").strip().lower())
                                _mm = re.match(r"^\[([a-z]{2,3})\+", _ct)
                                if _mm:
                                    _vtreg = _mm.group(1)
                                    _pea = idc.prev_head(ea, fstart)
                                    for _ in range(6):
                                        if _pea == idaapi.BADADDR or _pea < fstart:
                                            break
                                        if idc.print_insn_mnem(_pea) == "call":
                                            break
                                        if idc.print_insn_mnem(_pea) == "mov":
                                            _d0 = _RE_SIZE_PREFIX.sub(
                                                "", (idc.print_operand(_pea, 0) or "").strip().lower())
                                            _d1 = _RE_SIZE_PREFIX.sub(
                                                "", (idc.print_operand(_pea, 1) or "").strip().lower())
                                            if _d0 == _vtreg and _d1.startswith("["):
                                                # base 寄存器即接收者载体：
                                                # this/param0 别名 → 直接路由到
                                                # 函数作用域变量（this/param0 是
                                                # 精确存储位，引擎槽位路由消费）
                                                _bm = re.match(r"^\[([a-z]{2,3})\]$", _d1)
                                                if _bm and _bm.group(1) in this_regs:
                                                    c["receiver"] = f"{func_addr_str}:this"
                                                    break
                                                if _bm and _bm.group(1) in param0_regs:
                                                    c["receiver"] = f"{func_addr_str}::param0"
                                                    break
                                                _rsrc = _parse_operand_src(_pea, 1, scope=fstart)
                                                if _rsrc and _rsrc[0] == "global" and _rsrc[1]:
                                                    c["receiver"] = _rsrc[1]
                                                elif _rsrc and _rsrc[0] in ("member", "stack") \
                                                        and "::" in _rsrc[1]:
                                                    c["receiver"] = _rsrc[1]
                                                break
                                        _pea = idc.prev_head(_pea, fstart)
                            except Exception:
                                pass
                            constraints.append(c)
                            vtable_edges = _scan_call_args(
                                ea, fstart, vtable_var, "vtable_call", f"0x{ea:X}"
                            )
                            constraints.extend(vtable_edges)

            elif mnem in ("ret", "retn"):
                # T10 (E4): NULL_CONST 标记——返回 0 的 RETURN 边打标，5.1 初始化
                # 时 return 域加入 {int, void*}（NULL 可能是 int 0 或 NULL 指针）。
                # T6 (I2): RETURN 边生成补全——lea/movzx/movsx/add/sub 设置 eax
                # 后返回（多返回点非末尾模式）；xor/sub eax,eax NULL_CONST 特例
                # 保持。判定逻辑在 _i2_ret_edge（纯函数，离线可测）。
                _c_ret = _i2_ret_edge(prev_mnem, prev_ops, ea, func_addr_str)
                if _c_ret:
                    if (
                        _c_ret.get("null_const") is False
                        and prev_mnem in ("lea", "add", "sub")
                    ):
                        # I2 增量可观测: 扩展 mnemonics 产生的非空 RETURN 边数
                        RUN_MANIFEST["return_edges_extended_i2"] = (
                            RUN_MANIFEST.get("return_edges_extended_i2", 0) + 1
                        )
                    c = _c_ret

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
                    src = _parse_operand_src(ea, op_n, scope=fstart)
                    if src and src[0] in ("stack", "global", "member") and src[1]:
                        constraints.append(
                            {
                                "type": "TYPE_SEED",
                                "var": src[1],
                                "itype": "float*",
                                "addr": f"0x{ea:X}",
                            }
                        )

            # B6 (arith-use int seeds): 内存操作数参与整数运算/比较（add/cmp/
            # imul/...）、被 fild/fistp 当整数装载、或被立即数存储
            # （`mov [ebp+8], 0`）→ 该槽位持有 int。这是 paramN 桶的主证据源
            # （表驱动调度帧的参数只经算术使用体现 int 语义，0x49CC50 实证：
            # a2<0 比较 / a20+v59 加法），也是成员 int 证据的补充（喂 T9c 聚合
            # 与 T9d 参数回填）。直接 append（与 F4 同风格），不动 c。
            if mnem in _B6_INT_ARITH or (
                mnem == "mov" and op1 and _is_imm_text(op1)
            ):
                _b6_is_store = mnem == "mov" and op1 and _is_imm_text(op1)
                for op_n in ((0,) if _b6_is_store else (0, 1)):
                    _t = idc.print_operand(ea, op_n) or ""
                    _low = _RE_SIZE_PREFIX.sub("", _t.strip().lower())
                    if not _low or _low in X86_REGS or _low.startswith("offset "):
                        continue
                    if _is_imm_text(_low):
                        continue
                    # 1) 栈槽（含参数槽 stack_+0x8..）
                    _sn = _stack_operand_name(ea, op_n)
                    if _sn is not None:
                        constraints.append(
                            {"type": "TYPE_SEED", "var": _sn,
                             "itype": "int", "addr": f"0x{ea:X}"}
                        )
                        continue
                    # 2) this/param0 成员 [reg+off]
                    _m2 = re.match(r"^\[([a-z]{2,3})\b", _low)
                    if _m2 and _m2.group(1) in X86_REGS \
                            and not _reg_index_guard(_low, _m2.end()):
                        _disp = _operand_member_disp(_t, idc.get_operand_value(ea, op_n))
                        if _disp is not None and _a1_valid_member_off(_disp):
                            _mv = None
                            if _m2.group(1) in this_regs:
                                _mv = f"{func_addr_str}:this.member({_disp:#x})"
                            elif _m2.group(1) in param0_regs:
                                _mv = f"{func_addr_str}::param0.member({_disp:#x})"
                            if _mv:
                                constraints.append(
                                    {"type": "TYPE_SEED", "var": _mv,
                                     "itype": "int", "addr": f"0x{ea:X}"}
                                )
                        continue
                    # 3) 全局
                    if _is_global_ref(_t):
                        constraints.append(
                            {"type": "TYPE_SEED", "var": _strip_seg(_t.strip()),
                             "itype": "int", "addr": f"0x{ea:X}"}
                        )

            # B6b (强整数寄存器算术): imul/and/xor/shl 族运算的寄存器操作数
            # → raw reg int 种子（engine 经 prefix_index 覆盖该函数全部版本；
            # int 对类让位，过播无害）。指针极少参与这些运算。
            if mnem in _B6_REG_STRONG:
                for op_n in (0, 1):
                    _r = (idc.print_operand(ea, op_n) or "").strip().lower()
                    _r = _RE_SIZE_PREFIX.sub("", _r)
                    if _r in X86_REGS and _r not in ("esp", "ebp"):
                        constraints.append(
                            {"type": "TYPE_SEED", "var": _r,
                             "itype": "int", "addr": f"0x{ea:X}"}
                        )

            # B6c (movsx/movzx 内存装载): 符号/零扩展装载证明源槽位是窄整数
            # （byte/word）——给栈槽/成员/全局播 int 种（内存操作数，精确）。
            if mnem in ("movsx", "movzx"):
                _t = idc.print_operand(ea, 1) or ""
                _low = _RE_SIZE_PREFIX.sub("", _t.strip().lower())
                _m2 = re.match(r"^\[([a-z]{2,3})\b", _low)
                if _m2 and _m2.group(1) in X86_REGS \
                        and not _reg_index_guard(_low, _m2.end()):
                    _disp = _operand_member_disp(_t, idc.get_operand_value(ea, 1))
                    _mv = None
                    if _disp is not None and _a1_valid_member_off(_disp):
                        if _m2.group(1) in this_regs:
                            _mv = f"{func_addr_str}:this.member({_disp:#x})"
                        elif _m2.group(1) in param0_regs:
                            _mv = f"{func_addr_str}::param0.member({_disp:#x})"
                    if _mv:
                        constraints.append(
                            {"type": "TYPE_SEED", "var": _mv,
                             "itype": "int", "addr": f"0x{ea:X}"}
                        )
                else:
                    _sn = _stack_operand_name(ea, 1)
                    if _sn is not None:
                        constraints.append(
                            {"type": "TYPE_SEED", "var": _sn,
                             "itype": "int", "addr": f"0x{ea:X}"}
                        )
                    elif _is_global_ref(_t) and not _low.startswith("["):
                        constraints.append(
                            {"type": "TYPE_SEED", "var": _strip_seg(_t.strip()),
                             "itype": "int", "addr": f"0x{ea:X}"}
                        )

            # B8/B8b (数组元素伪变量): 索引全局 `[G+idx*S]` 直接形式 +
            # 寄存器基址形式 `[R+idx*S]`（R 经 `mov R,offset G` 登记——
            # g_CellClassArray 457 引用全是两步形态：mov eax,offset G 在前，
            # [eax+idx*4] 在后，直接形式一条不存在）→ arr_G 伪变量边。
            # 就地构造 `lea ecx,[R+idx*S]; call ctor` 使 ctor this 通道
            # 点亮 arr_G，全部元素访问继承（案例1 0x47B3A0 实证）。
            if mnem == "call":
                for _cr in ("eax", "ecx", "edx"):
                    array_base_regs.pop(_cr, None)
            elif mnem in ("mov", "lea", "movsx", "movzx", "cmp", "add", "sub"):
                _lo0 = (op0 or "").strip().lower()
                _lo1 = (op1 or "").strip().lower()
                # 基址登记/清除（mov R, offset G / mov R, [G] 为登记变体）
                if mnem == "mov" and _lo0 in X86_REGS:
                    if _lo1.startswith("offset ") and not _lo1.endswith("]"):
                        _g8 = _lo1[len("offset "):].strip()
                        if _g8 and idc.get_name_ea(idaapi.BADADDR, _g8) != idc.BADADDR:
                            array_base_regs[_lo0] = _g8
                        else:
                            array_base_regs.pop(_lo0, None)
                    elif _lo1 in array_base_regs and _lo0 != _lo1:
                        # 复制传播：mov R2, R（R 为已登记基址）→ R2 继承
                        array_base_regs[_lo0] = array_base_regs[_lo1]
                    else:
                        array_base_regs.pop(_lo0, None)
                elif _lo0 in X86_REGS:
                    array_base_regs.pop(_lo0, None)
                # 索引访问发边：任一操作数 `[R+..*..]` 且 R 已登记
                for _op8, _dir8 in ((op1, "src"), (op0, "dst")):
                    if not _op8:
                        continue
                    # 尺寸前缀剥离（dword ptr [eax+ebx*4] → [eax+ebx*4]）
                    _t8 = _RE_SIZE_PREFIX.sub(
                        "", _op8.strip().rstrip("]")).strip()
                    if "*" not in _t8 or not _t8.startswith("["):
                        continue
                    _m8 = re.match(r"^\[([a-z]{2,3})(?![a-z])", _t8.lower())
                    if not _m8:
                        continue
                    _b8 = _m8.group(1)
                    _gname8 = array_base_regs.get(_b8)
                    if not _gname8:
                        continue
                    _a8 = "arr_" + _gname8
                    _other8 = _lo1 if _dir8 == "src" else _lo0
                    _self8 = _lo0 if _dir8 == "src" else _lo1
                    if _other8 in X86_REGS and mnem != "cmp":
                        if _dir8 == "src":
                            constraints.append({
                                "from": _a8, "to": _other8,
                                "type": "ASSIGN", "addr": f"0x{ea:X}",
                            })
                        else:
                            constraints.append({
                                "from": _other8, "to": _a8,
                                "type": "ASSIGN", "addr": f"0x{ea:X}",
                            })
                    elif mnem == "lea" and _self8 in X86_REGS:
                        constraints.append({
                            "from": _a8, "to": _self8,
                            "type": "ASSIGN", "addr": f"0x{ea:X}",
                        })

            if c:
                constraints.append(c)
            # B4 (SSA 版本边界补全): 凡是"写目标寄存器"的指令，若本指令没有
            # 产生 to=该寄存器 的约束（寄存器索引加载 `mov reg,[base+idx*4]`、
            # 算术 add/sub/shl/imul 等），SSA 写点就会漏检——旧版本类型跨过
            # 重定义泄漏到后续用点（实证：CalculateSpread 0x59EF3D
            # `mov ecx,[edx+eax*4]` 无约束 → 0x59EF4B 用点仍归 v0x59EF1A，
            # &Map 类型经垃圾 ecx 汇入 g_RadarBlipManager）。
            # 发版本标记边：from=指令唯一伪源（无类型、无共享），engine 侧
            # 邻接构建跳过（_edge_skips_adjacency），仅用于写点登记。
            if _reg32(op0) and mnem in _B4_WRITES_OP0:
                _op0n = op0.strip().lower()
                _has_to = any(
                    cc.get("to", "").lstrip("*").lower() == _op0n
                    for cc in constraints[nc_pre:]
                )
                if not _has_to:
                    constraints.append({
                        "from": f"*def@0x{ea:X}",
                        "to": _op0n,
                        "type": "ASSIGN",
                        "addr": f"0x{ea:X}",
                    })
            # A0-S2 (T1): 每函数寄存器写点 vs 产生约束的写点（可观测断言——
            # 覆盖域内写点必须产生约束，否则 SSA 版本边界再次丢失）
            if _a0s2_write_point(mnem, op0, op1, lea_src[0] if lea_src else None):
                func_write_seen[func_addr_str] += 1
                if c is not None or len(constraints) > nc_pre:
                    func_write_produced[func_addr_str] += 1
            if mnem not in ("nop", "int3"):
                prev_ea, prev_mnem, prev_ops = ea, mnem, [op0] + ([op1] if op1 else [])
            ea = idc.next_head(ea, end)
            if ea == idaapi.BADADDR:
                break

    print(f"  Extracted {len(constraints)} fine-grained constraints.")

    # A0-S2 (T1): write_gap_count 指标——每函数寄存器写点 vs 产生约束的写点
    # 差值总和。=0 ⇔ 覆盖域内（mov imm / lea 成员·栈·全局）每条写都产约束。
    write_gap_per_func = {
        f: func_write_seen.get(f, 0) - func_write_produced.get(f, 0)
        for f in func_write_seen
    }
    write_gap_total = sum(write_gap_per_func.values())
    RUN_MANIFEST["write_gap_count"] = write_gap_total
    RUN_MANIFEST["write_gap_detail"] = {
        "covered_write_points": sum(func_write_seen.values()),
        "constraint_producing_writes": sum(func_write_produced.values()),
        "funcs_with_gap": sorted(
            (f for f, g in write_gap_per_func.items() if g),
            key=lambda f: -write_gap_per_func[f],
        )[:100],
    }
    print(
        f"  A0-S2: {sum(func_write_seen.values())} covered register write points -> "
        f"{sum(func_write_produced.values())} constraints, write_gap_count={write_gap_total}"
    )

    # A1 (T4): 源头过滤记录（成员偏移非法 / 栈槽量级垃圾）写入 manifest。
    # 结构复用 offsets_filtered_illegal（{class→func, count, offsets}）；
    # Step 7 的 offsets_filtered_illegal 保留为双保险——本层滤净后其应恒为空。
    RUN_MANIFEST["offsets_filtered_source"] = [
        {
            "func": f,
            "count": len(offs),
            "offsets": sorted(offs)[:10],
        }
        for f, offs in sorted(func_bad_offsets.items())
    ]
    print(
        f"  A1: source-filtered illegal offsets: "
        f"{sum(len(v) for v in func_bad_offsets.values())} across "
        f"{len(func_bad_offsets)} funcs"
    )

    # T10 (E6): 数组索引约束计数 + 元素宽度分布 + 采样记录写入 manifest
    RUN_MANIFEST["array_index_constraints"] = len(array_index_edges)
    RUN_MANIFEST["array_index_edges"] = array_index_edges[:50]
    print(
        f"  T10-E6: array-index constraints: {len(array_index_edges)} "
        f"(widths: {dict(RUN_MANIFEST['array_index_widths'])})"
    )

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

    # A0-S1 (T2): 栈槽写驱动版本化（约束后处理——scope_vars 推迟的栈槽复用
    # 检测；对 scoped (sf, st) 应用版本映射，同槽复用 → 不同版本 → 域不
    # 合并）。build_adjacency / dfg / AC-3 / var_types 等下游共用版本化名
    # （ssa 就地更新，build_adjacency 读同一对象）。
    st = _scope_stack_versions(edge_constraints, st, ssa["func_addrs"])
    ssa["scoped_to_name"] = st

    adj = build_adjacency(edge_constraints, ssa)

    # T10 (E5): CALL_SITE_CONTEXT —— 调用点分组（形参 → 各调用点实参变量）。
    # AC-3 CALL_ARG 分支的多数投票加权层数据源；冲突调用点在 AC-3 后统计。
    # 只叠加，不改 CALL_ARG 基本传播结构（T6 A3 单向传播后续做）。
    call_arg_sites = defaultdict(list)   # param_var(scoped) → [(ci, addr, arg_var)]
    for ci, c in enumerate(edge_constraints):
        if c.get("type") == "CALL_ARG":
            sf, sto = st[ci]
            call_arg_sites[sto].append((ci, c.get("addr", ""), sf))

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

    # T7 (B1): 分域域模型 —— domain = 类域（Class_X/真实类名），
    # type_domain = 基础类型域（int/float/double/char*/bool/void*/...）。
    # 开关关闭时 type_domain 不参与任何消费（单域 = 修复后基线）。
    domain = defaultdict(set)
    type_domain = defaultdict(set)

    # T5 (B2 前置): 锚定强度记录 —— 3=vtable anchor, 2=成员/签名锚,
    # 1=传播（T7 负责）, 0=开放/默认。本任务只建立结构 + 给锚定变量赋值。
    anchor_strength = defaultdict(int)

    # TYPE_SEED: fixed types
    for c in type_seeds:
        var = c.get("var")
        t = c.get("itype")
        if var and t:
            _domain_add(domain, type_domain, var, t)

    # Vtable anchors: each vtable entry's this_var -> {Class_vtaddr}
    # C3: thunk 条目锚定真实目标函数（thunk 自身地址不参与 this 锚定）
    for vt in vtables:
        cls_id = vt_to_class_id[vt['start']]
        for func_addr in vt_entries_mapped[vt['start']]:
            this_var = f"0x{func_addr:08X}:this"
            if this_var in this_vars:
                domain[this_var].add(cls_id)
                anchor_strength[this_var] = max(anchor_strength.get(this_var, 0), 3)  # vtable anchor: 最高强度

    # S9b: ctor/vtable 安装者 this 锚（强度 3——安装 vtable 即接收该类 this）
    for _ca, _ccls in (_ctor_types or {}).items():
        try:
            _cfa = int(_ca, 16)
        except ValueError:
            continue
        _tv = f"0x{_cfa:08X}:this"
        if _tv in this_vars:
            domain[_tv].add(_ccls)  # 真实类名（非 Class_ 占位）
            anchor_strength[_tv] = max(anchor_strength.get(_tv, 0), 3)

    # Function-name anchors: if func name has "::", use the class prefix
    for this_var in this_vars:
        if not domain[this_var]:
            func_addr = this_var.split(":")[0]
            func_name = func_addr_to_name.get(func_addr, "")
            if "::" in func_name:
                cls_name = func_name.split("::")[0]
                if not cls_name.startswith("?") and "`" not in cls_name:
                    domain[this_var].add(cls_name)
                    # S3 (L3): 名字锚降为强度 1（与传播同级）——IDA 命名是
                    # 派生元数据，746 项已证错；不得高于约束传播证据
                    anchor_strength[this_var] = max(
                        anchor_strength.get(this_var, 0), 1
                    )

    # T10 (E7): THIS_ADJUST —— thunk this 偏移约束化（配合 T9 C3）。
    # `{thunk}:this` 域 = `{target}:this` 域（this_adjustment 非 0 的条目），
    # adjustment 记录 manifest。本二进制无 adjustor thunk（T9 实证）→
    # 通用路径命中 0 属正常；未来目标二进制（有 thunk）自动生效。
    _e7_applied, this_adjust_edges = _e7_apply_this_adjust(
        domain, type_domain, anchor_strength, thunk_adjustments, thunk_targets
    )
    RUN_MANIFEST["this_adjust_edges"] = this_adjust_edges
    print(
        f"  [T10-E7] this-adjust edges: {len(this_adjust_edges)} "
        f"(applied {_e7_applied}; thunk this = target this)"
    )

    # T5 (E2): SIGNATURE_ANCHOR —— signals.json 求解期锚定（Step 6 投票提前）。
    #   - `{addr}:this`   ← `::` 前缀类名（union add，不覆盖 vtable 锚）
    #   - `{addr}.return` ← return_type（限基础类型; var 必须已存在于约束图）
    # 锚定是"并集"（域.add）——AC-3 交集自然仲裁，不覆盖传播。
    sig_this_anchored, sig_return_anchored = _apply_signature_anchors(
        domain, type_domain, SIG_SYMBOLS, this_vars, all_vars, anchor_strength
    )
    print(
        f"  [T5-E2] signature anchors: this={sig_this_anchored}, "
        f"return={sig_return_anchored}"
    )

    # Open domains for unanchored this_vars -> all possible classes
    for this_var in this_vars:
        if not domain[this_var]:
            domain[this_var] = set(all_classes)

    # Ensure all constraint vars have at least empty domain
    for var in all_vars:
        if var not in domain:
            domain[var] = set()

    # T5 (E1): MEMBER_ANCHOR —— `{func}:this.member(0x{off})` 强锚。
    # 若 this 域含 Class_X（真实类名，非 Class_XXXX 占位）且 (Class_X, off)
    # 在成员表有已知类型 → 成员变量域加入锚类型（union，不覆盖）。
    member_anchor_hits = _apply_member_anchors(
        domain, type_domain, all_vars, MEMBER_ANCHOR, anchor_strength
    )
    print(f"  [T5-E1] member anchors applied to {member_anchor_hits} member vars")

    # T10 (E3): GLOBAL_ANCHOR —— 全局引用变量（dword_XXX / 符号名）锚定已知
    # 全局类型（global_types.json 只读加载，模块级查找表）。
    global_anchor_hits = _apply_global_anchors(domain, type_domain, all_vars, anchor_strength)
    RUN_MANIFEST["global_anchor_hits"] = global_anchor_hits
    print(f"  [T10-E3] global anchors applied to {global_anchor_hits} vars")

    # T10 (E4): NULL_CONST —— RETURN 边标记 null_const 的 return 域加入
    # {int, void*}（NULL 可能是 int 0 或 NULL 指针；仅当 return 域为空或
    # 仅基础类型时加入——不覆盖已有类域）。T7 (B1): 判定与写入均走分域
    # 联合视图/路由（{int, void*} 是基础类型 → type_domain）。
    _null_ret_vars = set()
    for _ci, _c in enumerate(edge_constraints):
        if _c.get("type") == "RETURN" and _c.get("null_const"):
            _null_ret_vars.add(st[_ci][1])
    _null_anchored = 0
    for _v in _null_ret_vars:
        _dom = _domain_union(domain, type_domain, _v) if DOMAIN_SPLIT else domain.get(_v)
        if _dom is None:
            continue
        if _e4_null_const_allowed(_dom):
            _domain_update(domain, type_domain, _v, {"int", "void*"})
            _null_anchored += 1
    RUN_MANIFEST["null_const_returns"] = len(_null_ret_vars)
    RUN_MANIFEST["null_const_anchored"] = _null_anchored
    print(
        f"  [T10-E4] null-const returns: {len(_null_ret_vars)} funcs "
        f"({_null_anchored} anchored +{{int, void*}})"
    )

    # T5: 锚定强度分布（B2 消费侧观测; 1=传播在 AC-3 内标记）
    _as_dist = Counter(anchor_strength.values())
    print(f"  [T5] anchor_strength dist: {dict(sorted(_as_dist.items()))}")
    RUN_MANIFEST["member_anchor_entries"] = len(MEMBER_ANCHOR)
    RUN_MANIFEST["member_anchor_hits"] = member_anchor_hits
    RUN_MANIFEST["sig_this_anchors"] = sig_this_anchored
    RUN_MANIFEST["sig_return_anchors"] = sig_return_anchored
    RUN_MANIFEST["anchor_strength_dist"] = dict(sorted(_as_dist.items()))

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
                    if DOMAIN_SPLIT:
                        # T7 (B1): 分域 ASSIGN meet——同类域交集（现有语义
                        # 保持）+ 跨域兼容矩阵（类↔void* 兼容；类↔int/float/
                        # bool 矛盾记录，不再静默跳过）+ bool⊂int。
                        if _b1_is_empty(domain, type_domain, var) or _b1_is_empty(
                            domain, type_domain, other
                        ):
                            continue
                        _nc_a, _nt_a, _nc_b, _nt_b, _b1_cf, _b1_pairs = _b1_edge_meet(
                            domain[var], type_domain.get(var, set()),
                            domain[other], type_domain.get(other, set()),
                        )
                        if _b1_cf:
                            # T8 (C1): 记录原因边 + 双向域快照（变量级）
                            _record_domain_conflict(
                                var, other, _b1_pairs,
                                edge_id=f"{ctype}#{ci}",
                                domain=domain, type_domain=type_domain,
                            )
                        if _nc_a != domain[var] or _nt_a != type_domain.get(var, set()):
                            domain[var], type_domain[var] = _nc_a, _nt_a
                            worklist.append(var)
                        if _nc_b != domain[other] or _nt_b != type_domain.get(other, set()):
                            domain[other], type_domain[other] = _nc_b, _nt_b
                            worklist.append(other)
                    else:
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

                elif ctype in ("RETURN_TO", "STACK_ACCESS", "STACK_VAR",
                               "FUNC_PARAM"):
                    other = sto if role == 0 else sf
                    if DOMAIN_SPLIT:
                        # T7 (B1): 分域 seed/meet——空侧分域各自拷贝（类域 +
                        # 类型域），双非空走 B1 双向 meet；传播 seed 侧打
                        # B2 传播强度标记（strength=1）。
                        _v_empty = _b1_is_empty(domain, type_domain, var)
                        _o_empty = _b1_is_empty(domain, type_domain, other)
                        if _v_empty and _o_empty:
                            continue
                        if not _v_empty and _o_empty:
                            # Seed from whichever side has types（分域各自拷贝）
                            domain[other] = set(domain.get(var, ()))
                            type_domain[other] = set(type_domain.get(var, ()))
                            _mark_propagated(anchor_strength, other)
                            worklist.append(other)
                        elif _v_empty and not _o_empty:
                            domain[var] = set(domain.get(other, ()))
                            type_domain[var] = set(type_domain.get(other, ()))
                            _mark_propagated(anchor_strength, var)
                            worklist.append(var)
                        else:
                            # Both non-empty: bidirectional intersection（分域版）
                            _nc_a, _nt_a, _nc_b, _nt_b, _b1_cf, _b1_pairs = _b1_edge_meet(
                                domain[var], type_domain.get(var, set()),
                                domain[other], type_domain.get(other, set()),
                            )
                            if _b1_cf:
                                # T8 (C1): 记录原因边 + 双向域快照（变量级）
                                _record_domain_conflict(
                                    var, other, _b1_pairs,
                                    edge_id=f"{ctype}#{ci}",
                                    domain=domain, type_domain=type_domain,
                                )
                            if _nc_a != domain[var] or _nt_a != type_domain.get(var, set()):
                                domain[var], type_domain[var] = _nc_a, _nt_a
                                worklist.append(var)
                            if _nc_b != domain[other] or _nt_b != type_domain.get(other, set()):
                                domain[other], type_domain[other] = _nc_b, _nt_b
                                worklist.append(other)
                    else:
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

                elif ctype == "CALL_ARG":
                    # T10 (E5): CALL_SITE_CONTEXT —— 形参侧多数投票加权层。
                    # 多数调用者意见优先（各调用点实参域独立统计，取出现次数
                    # 最多的候选）；只收窄（current ∩ 多数候选），空结果不改
                    # 变——不破坏 AC-3 单调收敛（F9）。与 T6 A3 正交：E5 只
                    # 收窄形参（to）域本身，A3 控制跨侧传播方向。
                    if role == 1:
                        if DOMAIN_SPLIT:
                            # T7 (B1): 实参域取联合视图，合并结果路由回写
                            _e5_args = [
                                _domain_union(domain, type_domain, _a)
                                for _, _, _a in call_arg_sites.get(var, ())
                                if _domain_union(domain, type_domain, _a)
                            ]
                            if len(_e5_args) >= 2:
                                _e5_cur = _domain_union(domain, type_domain, var)
                                _e5_merged = _e5_majority_merge(_e5_cur, _e5_args)
                                if _e5_merged is not None and _e5_merged != _e5_cur:
                                    _domain_replace(domain, type_domain, var, _e5_merged)
                                    worklist.append(var)
                        else:
                            _e5_args = [
                                domain[_a] for _, _, _a in call_arg_sites.get(var, ())
                                if domain[_a]
                            ]
                            if len(_e5_args) >= 2:
                                _e5_merged = _e5_majority_merge(domain[var], _e5_args)
                                if _e5_merged is not None and _e5_merged != domain[var]:
                                    domain[var] = _e5_merged
                                    worklist.append(var)
                    # T6 (A3): CALL_ARG 单向传播 —— from（实参/接收者）→ to
                    # （形参/this）单向；反向（to→from）仅在 to 域为空且 from
                    # 有类锚（anchor_strength>0）时允许——防实参域被形参域
                    # 错误 seed 反向污染（形参域是多调用点聚合，不应回写实参）。
                    # 纯逻辑在 _a3_call_arg_step（离线可测）。
                    _a3_anchor = anchor_strength.get(sf, 0)
                    if DOMAIN_SPLIT:
                        # T7 (B1): A3 单向传播分域版——to 分域 seed/收窄，
                        # 跨域矛盾记录；seed 侧打传播强度标记。
                        _nt_c, _nt_t, _b1_cf, _b1_pairs, _nt_chg = _b1_call_arg_step(
                            set(domain.get(sf, ())), set(type_domain.get(sf, ())),
                            set(domain.get(sto, ())), set(type_domain.get(sto, ())),
                            role, _a3_anchor,
                        )
                        if _b1_cf:
                            # T8 (C1): 记录原因边 + 双向域快照（变量级）
                            _record_domain_conflict(
                                sf, sto, _b1_pairs,
                                edge_id=f"{ctype}#{ci}",
                                domain=domain, type_domain=type_domain,
                            )
                        if _nt_chg:
                            domain[sto], type_domain[sto] = _nt_c, _nt_t
                            _mark_propagated(anchor_strength, sto)
                            worklist.append(sto)
                    else:
                        _a3_cf, _a3_ct = _a3_call_arg_step(
                            domain[sf], domain[sto], role, _a3_anchor
                        )
                        if _a3_cf:
                            worklist.append(sf)
                        if _a3_ct:
                            worklist.append(sto)

        round_delta = processed - round_start
        if round_delta > 0:
            print(f"  [AC-3] round={ac3_round} processed={processed} (+{round_delta}) worklist={len(worklist)}")

    if not worklist:
        print(f"  [AC-3] converged after {ac3_round} rounds, {processed} total iters (worklist empty)")
    else:
        print(f"  [AC-3] terminated by safety cap after {ac3_round} rounds, {processed} total iters")

    # T10 (E5): 冲突调用点记录（观测层——AC-3 收敛后一次性统计，不参与求解）。
    _cs_conflicts = _e5_collect_call_site_conflicts(
        call_arg_sites, domain, type_domain if DOMAIN_SPLIT else None
    )
    RUN_MANIFEST["call_site_conflicts"] = dict(
        list(_cs_conflicts.items())[:200]
    )
    print(
        f"  [T10-E5] call-site conflicts recorded: "
        f"{len(RUN_MANIFEST['call_site_conflicts'])} params"
    )

    # T7 (B1): 跨域矛盾摘要（有限记录——cap 防爆炸；重复边去重）
    _dc = RUN_MANIFEST["domain_conflicts"]
    print(
        f"  [T7-B1] domain conflicts recorded: {len(_dc)} "
        f"(capped={RUN_MANIFEST['domain_conflicts_capped']})"
    )
    # T8 (C1): 变量级矛盾摘要（结构化——原因边 + 双向域快照；cap 200）
    _c1c = RUN_MANIFEST["conflicts"]
    print(
        f"  [T8-C1] var-level conflicts recorded: {len(_c1c)} vars "
        f"(capped={RUN_MANIFEST['conflicts_capped']}, "
        f"overflow={RUN_MANIFEST['conflicts_overflow']})"
    )
    if DOMAIN_SPLIT and RUN_MANIFEST["anchor_strength_propagation"]:
        print(
            f"  [T7-B2] propagation-strength marks: "
            f"{RUN_MANIFEST['anchor_strength_propagation']}"
        )

    # Vtable-group equality: same-vtable entries share the same this type
    vt_groups = defaultdict(list)
    for vt in vtables:
        for func_addr in vt_entries_mapped[vt['start']]:  # C3: thunk → 真实目标
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
        # C3: thunk 槽位调用解析到真实目标函数（callee_this 用 target 的 this）
        for slot_idx, func_addr in enumerate(vt_entries_mapped[vt['start']]):
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
            # L13 修复：旧条件 `child_this == base_this` 会排除共享 slot-0
            # 析构函数的家族 vtable 对（真实基类关系的典型形态）——共享首
            # 条目恰是继承证据而非同一 vtable。仅排除自身（不同 start）。
            if vt_child_start == vt_base_start:
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

    # T11 (D1): avg_domain_size —— AC-3 收敛后、greedy(5.4) 前的平均域大小。
    # 此时 domain 已收敛（greedy 只读不写），捕获值在 Step 9 聚合进 csp_quality。
    # T7 (B1): 分域下按联合视图统计。
    _t11_avg_domain = _t11_avg_domain_size(
        domain, type_domain if DOMAIN_SPLIT else None
    )
    print(f"  [T11-D1] avg domain size before greedy: {_t11_avg_domain:.3f}")

    # --- 5.4: Greedy Assignment (weighted: vtable anchor > func-name class > propagation) ---
    # Count how many vars reference each class
    # T7 (B1): 分域下 domain 只含类候选（基础类型已路由 type_domain）——
    # class_ref_count 语义不变。
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


    # S2v2 (L4 修复): 定义层解析——RTTI_DIRECT 真值祖先闭包（v2：初版用
    # F12 前缀闭包，实证对 MI 家族无效——GScreen 作为 Mouse 基类的前缀
    # 匹配仅 3/22=14%，派生 vtable 重排条目而非前缀扩展；RTTI 直接基类
    # 关系才是 ground truth）。
    # _rtti_anc[cls_real] = 全部祖先真实类名（含自身）
    _rtti_anc = {}
    def _rtti_ancestors(cls_real, _stack=frozenset()):
        if cls_real in _rtti_anc:
            return _rtti_anc[cls_real]
        out = {cls_real}
        if cls_real not in _stack:
            for _b in RTTI_DIRECT.get(cls_real, ()):
                out |= _rtti_ancestors(_b, _stack | {cls_real})
        _rtti_anc[cls_real] = out
        return out
    _func_containing_vts = defaultdict(set)
    for _vt in vtables:
        for _fa in vt_entries_mapped[_vt["start"]]:
            _func_containing_vts[_fa].add(_vt["start"])
    # v3: 类名直读 RTTI 真值表（与 RTTI_DIRECT 同源同名空间，不经
    # IDA 标签 demangle——避免 GScreen/GScreenClass 等命名变体失配）
    _vt_realname = {}
    for _vt in vtables:
        _rn = (RTTI_VTABLE_MAP.get(f"0x{_vt['start']:x}", {}) or {}).get("class")
        if _rn:
            _vt_realname[_vt["start"]] = _rn
    def _definition_level_bonus(fint):
        """返回 {cls_id: bonus}——包含集中为其余包含类 RTTI 公共祖先的
        定义层类 +1000（压制全部流行度/单簇平票）。"""
        vt_set = _func_containing_vts.get(fint)
        if not vt_set or len(vt_set) < 2:
            return {}
        out = {}
        for _cand in vt_set:
            _cn = _vt_realname.get(_cand)
            if not _cn:
                continue
            # 方向修正（v3 的根因）：cand 是定义层 ⇔ cand ∈ 每个其余包含类
            # 的祖先集（cand 是它们的祖先）。初版写成 `other ∈ ancestors(cand)`
            # ——选出的是最派生类（Mouse 的祖先集在 MI 家族恰含其余全部），
            # RenderFrame→MouseClass 的真正机制。
            if all(_o == _cand
                   or _cn in _rtti_ancestors(_vt_realname.get(_o, ""))
                   for _o in vt_set):
                cid = vt_to_class_id.get(_cand)
                if cid:
                    out[cid] = 1000  # 定义层：压制流行度平票与单簇
        return out

    def _anchor_bonus(var):
        """F11: this 变量的锚定加权——vtable 成员类 >> 函数名 `::` 前缀类。

        传播类（class_ref_count）为基准权重；锚定命中时大幅提升对应类。
        S2: 多 vtable 平票时定义层公共祖先 +1000 绝对优先。
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
            # C3: thunk 槽位锚定权重归属真实目标函数
            if fint in vt_entries_mapped[vt["start"]]:
                cid = vt_to_class_id[vt["start"]]
                bonus[cid] = bonus.get(cid, 0) + 100  # vtable anchor: 最高权重
        if not bonus:
            # S3 (L3 压制): 函数名前缀仅在无任何 vtable 证据时参与加权
            #（IDA 错名与 CSP 循环共导的通道切断；有 vtable 时 +100 已压制）
            func_name = func_addr_to_name.get(func_addr, "")
            if "::" in func_name:
                cls_name = func_name.split("::")[0]
                if cls_name and not cls_name.startswith("?") and "`" not in cls_name:
                    bonus[cls_name] = bonus.get(cls_name, 0) + 10  # 函数名类: 次高
        bonus.update(_definition_level_bonus(fint))
        return bonus


    # T10 (E8): EQ_CLASS —— ASSIGN 传递闭包等价类（并查集）。等价类内变量在
    # greedy 解析时共享结果（空域成员继承同 root 非空成员的解析——AC-3
    # ASSIGN 对空侧不播种，这是补空域的最后机会）；同 root 不同类候选冲突
    # 记录 manifest。只影响 greedy，不改 AC-3 传播本身。
    eq_root = _build_eq_classes(edge_constraints, st)
    eq_members = defaultdict(list)
    for _v, _r in eq_root.items():
        eq_members[_r].append(_v)
    _eq_conflicts = _e8_collect_eq_conflicts(
        eq_members, domain, type_domain if DOMAIN_SPLIT else None
    )
    RUN_MANIFEST["eq_class_count"] = len(eq_members)
    RUN_MANIFEST["eq_class_conflicts"] = dict(
        list(_eq_conflicts.items())[:200]
    )
    print(
        f"  [T10-E8] eq classes: {len(eq_members)} "
        f"(conflicts: {len(_eq_conflicts)})"
    )

    # Resolve each var to a single class (greedy: weighted pick + stable tie-break)
    # T7 (B1): 分域下迭代键 = 类域 ∪ 类型域（基础类型变量在 type_domain），
    # 排序主键 = 类域大小（与基线一致的相对顺序），次键 = 类型域大小（稳定）。
    # 解析汇合: 类域非空 → 从类域选；类域空 → 用类型域。
    resolved = {}
    root_pick = {}   # T10 (E8): root → 已解析非空成员选定的类（共享源）
    # T8 (C2): 变量级 top-K 候选——candidates[var] = [c0, c1, c2]（按
    # anchor_strength 加权 + 引用次数降序，排名 0 最优）。构建在 greedy 解析
    # 时一并产出（同一权重函数 → candidates[0] == resolved[var]）；矛盾变量
    # （C1）虽跳过解析仍获得候选——Step 6 候选投票给无锚点类命名机会。
    candidates = {}
    # T8 (C1): 矛盾变量集合（AC-3 收敛后固定——greedy 只读）
    _c1_conflicts = RUN_MANIFEST.get("conflicts", {})
    if DOMAIN_SPLIT:
        _greedy_vars = set(domain.keys()) | set(type_domain.keys())
        _sorted_vars = sorted(
            _greedy_vars,
            key=lambda v: (len(domain[v]), len(type_domain.get(v, ()))),
        )
    else:
        _sorted_vars = sorted(domain.keys(), key=lambda v: len(domain[v]))
    for var in _sorted_vars:
        if DOMAIN_SPLIT:
            # 解析汇合: 优先类域，类域空用类型域（B1）
            dom = domain[var] if domain[var] else type_domain.get(var, set())
        else:
            dom = domain[var]
        # S2v3b: this 变量的定义层类重注入——多 vtable 函数的定义层类
        # 可能被 AC-3 交集窄化剔除（调用方实参全为派生实例时），但
        # vtable 成员资格保证它合法在场；+1000 bonus 让 greedy 必选它
        if var.endswith(":this") and len(dom) > 1:
            try:
                _fint_dlv3 = int(var.split(":")[0], 16)
                _dl_keys = set(_definition_level_bonus(_fint_dlv3))
                if _dl_keys:
                    _dom2 = set(dom) | _dl_keys
                    if DOMAIN_SPLIT:
                        domain[var] = _dom2
                    dom = _dom2
            except ValueError:
                pass
        # T8 (C2): top-K 候选构建（解析前——矛盾变量也获得候选集）
        if dom:
            _cls_cands = [t for t in dom if _is_class_type(t)]
            if _cls_cands:
                _cand_bonus = _anchor_bonus(var)
                if DOMAIN_SPLIT and var.endswith(":this") and anchor_strength.get(var, 0) >= 3:
                    for _c in _cls_cands:
                        _cand_bonus[_c] = _cand_bonus.get(_c, 0) + 10
                candidates[var] = sorted(
                    _cls_cands,
                    key=lambda t: (class_ref_count.get(t, 0) + _cand_bonus.get(t, 0), t),
                    reverse=True,
                )[:3]
                RUN_MANIFEST["candidates_built"] += 1
        # T8 (C1): 矛盾变量不强制选类——保持 unresolved 语义（不错误归因）。
        # conflicted 标记只影响该变量本身：同 root 等价类（E8）其他成员不受
        # 影响（各自独立解析；E8 共享仅补空域成员，矛盾变量域非空不参与）。
        if var in _c1_conflicts:
            RUN_MANIFEST["conflicted_skipped"] += 1
            continue
        if len(dom) == 1:
            resolved[var] = next(iter(dom))
        elif len(dom) > 1:
            bonus = _anchor_bonus(var)
            # T7 (B2): 锚点分层加权——anchor_strength 直读进候选排序
            # （3=vtable/2=锚定 → 分层加分；1=传播/0=开放 不加分）。
            # F11 vtable/函数名 bonus 保持（统一 +10 不改变相对序）；
            # 强度 2 层扩展覆盖签名锚 this 变量。仅分域模式生效。
            if DOMAIN_SPLIT and var.endswith(":this") and anchor_strength.get(var, 0) >= 3:
                for _c in dom:
                    bonus[_c] = bonus.get(_c, 0) + 10
            # F11: 权重 = 传播引用数 + 锚定奖励；tie-break 用类名字典序（稳定）
            best = max(dom, key=lambda t: (class_ref_count.get(t, 0) + bonus.get(t, 0), t))
            resolved[var] = best
        # empty domain -> stays unresolved
        _r_ = eq_root.get(var)
        if _r_ and var in resolved:
            root_pick.setdefault(_r_, resolved[var])

    # T10 (E8): 等价类共享——空域成员继承同 root 非空成员的解析结果
    # T7 (B1): 空域判定 = 类域与类型域皆空（分域下）
    _eq_shared = 0
    for _r, _members in eq_members.items():
        _pick = root_pick.get(_r)
        if not _pick:
            continue
        for _m in _members:
            if _m not in resolved and _b1_is_empty(domain, type_domain, _m):
                resolved[_m] = _pick
                _eq_shared += 1
    RUN_MANIFEST["eq_class_shared"] = _eq_shared
    if _eq_shared:
        print(f"  [T10-E8] shared {_eq_shared} empty-domain vars via eq-class resolution")

    print(
        f"  Greedy: {len(resolved)} vars resolved, "
        f"{sum(1 for d in domain.values() if len(d)>1)} multi-domain skipped"
    )
    # T8 (C1/C2): 矛盾跳过 + 候选集摘要
    if DOMAIN_SPLIT:
        print(
            f"  [T8-C1] conflicted vars skipped: {RUN_MANIFEST['conflicted_skipped']} "
            f"(保持 unresolved——不错误归因)"
        )
    if RUN_MANIFEST["candidates_built"]:
        print(
            f"  [T8-C2] top-3 candidates built for {RUN_MANIFEST['candidates_built']} vars"
        )

    # --- 5.5: Build final_classes ---
    final_classes = {}
    class_to_vars = defaultdict(list)

    for this_var in this_vars:
        cls = resolved.get(this_var)
        if cls is None:
            # S8: 定义层优先——多 vtable this 变量有二进制真值（S2 机器），
            # 高于流行度候选（HouseClass::Update_TogglePower 类 110 实测
            # 曾被 candidates[0] 流行度错归或漏归）
            try:
                _dl8 = _definition_level_bonus(int(this_var.split(":")[0], 16))
            except ValueError:
                _dl8 = {}
            if _dl8:
                cls = sorted(_dl8)[0]
                RUN_MANIFEST["unresolved_deflevel_count"] = (
                    RUN_MANIFEST.get("unresolved_deflevel_count", 0) + 1
                )
            else:
                # D1 (F3 fix): unresolved 兜底——先查 T8 C2 候选集（矛盾变量跳过
                # greedy 解析但仍构建候选集）。有候选 → candidates[0] 归因
                # （C1 矛盾记录 conflicts/conflicted_skipped 保留，语义不变）；
                # 无候选 → 保持原语义生成单例 Class_unresolved_N。
                _cand = candidates.get(this_var)
                if _cand:
                    cls = _cand[0]
                    RUN_MANIFEST["unresolved_fallback_count"] += 1
                else:
                    # Unresolved: create singleton unique class
                    cls = f"Class_unresolved_{len(class_to_vars)}"
        class_to_vars[cls].append(this_var)

    if RUN_MANIFEST["unresolved_fallback_count"]:
        print(
            f"  [D1] unresolved fallback (candidates[0] 兜底归因): "
            f"{RUN_MANIFEST['unresolved_fallback_count']} vars"
        )

    # Map subtype_edges to class-level edges
    cls_subtype_edges = set()
    for child_this, base_this in subtype_edges:
        child_cls = resolved.get(child_this)
        base_cls = resolved.get(base_this)
        if child_cls and base_cls and child_cls != base_cls:
            cls_subtype_edges.add((child_cls, base_cls))

    # Phase 1d: RTTI 真值继承边优先注入——二进制 RTTI 的直接基类关系
    # 是 ground truth（97% 头文件派生边已被证伪/未验证），必须先于
    # CALL 用法启发式边加入（_build_acyclic_dag 先加者保留，冲突时
    # 丢弃的是启发式边而非真值边）。
    rtti_subtype_edges = set()
    for _child, _bases in RTTI_DIRECT.items():
        for _b in _bases:
            rtti_subtype_edges.add((_child, _b))
    RUN_MANIFEST["rtti_subtype_edges"] = len(rtti_subtype_edges)

    # Build class-level DAG (C4: 边添加前环检测——成环边丢弃 + 计数记录 manifest)
    # 真值边在前（不可丢），启发式边在后（sorted 保证可复现）
    dag_adj, children_of, cycle_edges_dropped = _build_acyclic_dag(
        sorted(rtti_subtype_edges)
        + sorted(cls_subtype_edges - rtti_subtype_edges)
    )
    RUN_MANIFEST["cycles_detected"] = len(cycle_edges_dropped)
    print(f"  [C4] Subtype cycle edges dropped: {len(cycle_edges_dropped)}")

    # Depth via Kahn topological sort (in_deg 基于无环 dag_adj，与 children_of 一致)
    all_class_nodes = set(class_to_vars.keys()) | set(dag_adj.keys()) | set(children_of.keys())
    in_deg = {c: 0 for c in all_class_nodes}
    for child_cls, bases in dag_adj.items():
        in_deg[child_cls] = in_deg.get(child_cls, 0) + len(bases)

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
            # T11 (D2): 注入置信度标注——类级 confidence（anchor_strength 聚合:
            # vtable=3 锚变量占比）+ candidates（T8 C2 变量级候选聚合 top-3，
            # 无 C2 候选时域兜底）。只读观测字段：下游（Step 7 注入 / Step 9
            # 导出）仅增量读取，无行为变更。
            "confidence": _t11_class_confidence(vars_list, anchor_strength),
            "candidates": _t11_class_candidates(
                vars_list, domain, anchor_strength,
                type_domain if DOMAIN_SPLIT else None,
                candidates,
            ),
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
                    # S4 (L6 修复): 加权序优先（resolved/candidates），基础
                    # 类型回退次之，int 兜底最后
                    _pr = resolved.get(var)
                    if _pr and (_pr.startswith("Class_") or _pr in (
                            "float", "double", "char*", "bool", "void*")):
                        final_type = _pr
                    else:
                        _pc = candidates.get(var) or []
                        _pc2 = next((c for c in _pc if c.startswith("Class_") or c in (
                            "float", "double", "char*", "bool", "void*")), None)
                        final_type = (
                            "unknown"
                            if not clean_types
                            else _pc2 or next(
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
            # S4 (L7 修复): 加权序优先——greedy resolved > candidates[0] >
            # 任意 next() 兜底（与 this 变量的 greedy 权重一致）
            _r = resolved.get(var)
            # Fix C: 接受真实类名（S9b ctor 锚以真名入域）与 Class_ 占位
            if _r and _is_class_type(_r):
                found_class = _r
            else:
                _cand_first = next(
                    (c for c in candidates.get(var, ())
                     if _is_class_type(c)), None)
                if _cand_first:
                    found_class = _cand_first
                else:
                    found_class = next(
                        (t for t in clean_types if _is_class_type(t)), None)
            if found_class:
                # Fix A: SSA this 变体（':this_v...'）不再最后写入者胜——
                # exact ':this'（入口形参，锚强度最高）优先；变体仅在
                # 尚无 owner 时写入
                _is_exact = var.endswith(":this")
                _cur = func_sigs[func_addr].get("owner")
                if _is_exact or _cur in (None, "", "unknown"):
                    func_sigs[func_addr]["params"]["param0"] = found_class
                    func_sigs[func_addr]["owner"] = found_class
        elif "::return" in var:
            parts = var.split("::")
            if len(parts) >= 2:
                func_addr = parts[0]
                clean_types = {t for t in types_set if t != "Param_Seed"}
                # S4 (L6 修复): 同参数——加权序优先
                _rr = resolved.get(var)
                if _rr and (_rr.startswith("Class_") or _rr in (
                        "float", "double", "char*", "bool", "void*")):
                    final_type = _rr
                else:
                    _rc = next((c for c in (candidates.get(var) or []) if c.startswith(
                        "Class_") or c in ("float", "double", "char*", "bool", "void*")), None)
                    final_type = (
                        "unknown"
                        if not clean_types
                        else _rc or next(
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
    # Phase 1a: 次级 vtable（col_offset!=0）语义修正——
    #   - thunk 条目已被映射到真实目标（override，接收 complete-object
    #     this）→ 投最派生类 ✓
    #   - 非 thunk 条目 = 基类继承实现（接收 subobject this）→ 投
    #     RTTI 解析出的 subobject 基类，而非最派生类
    func_to_vtable_real = defaultdict(list)
    _sec_base_votes = 0
    for vt in vtables:
        vt_start = vt.get("start", 0)
        vt_real = vtable_to_real_name.get(vt_start, "")
        if not vt_real:
            continue
        _info = RTTI_VTABLE_MAP.get(f"0x{vt_start:x}") or {}
        _sec_base = (
            RTTI_SECONDARY_BASE.get(f"0x{vt_start:x}")
            if _info.get("col_offset") else None
        )
        for _i, entry in enumerate(vt.get("entries", [])):
            if (_sec_base
                    and vt_entries_mapped.get(vt_start, [])[_i] == entry):
                func_to_vtable_real[entry].append(_sec_base)
                _sec_base_votes += 1
                continue
            func_to_vtable_real[entry].append(vt_real)
    RUN_MANIFEST["rtti_secondary_base_votes"] = _sec_base_votes

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
    # T8 (C2): 投票来源从单类 var_to_cls 扩展为候选集——candidates 中每个
    # 候选类投票（权重按排名递减 3/2/1 × signals 权重 2 = 6/4/2）；无锚点/
    # 未解析变量（C1 矛盾保持 unresolved）凭候选集获得命名机会。仅对
    # final_classes 的类投票（rename_map 只被 final class 消费——防死键 +
    # used_names 抢占真实类名）。无候选时回退单类（原语义）。
    _final_keys = set(final_classes.keys())
    for addr_str, sig in func_sigs.items():
        this_var = f"{addr_str}:this"

        sig_entry = _signals_entry(addr_str)

        sig_name = sig_entry.get("name", "") if sig_entry else ""
        if not sig_name or sig_name.startswith(("sub_", "dword_", "byte_", "loc_", "unknown")):
            continue
        if "::" not in sig_name:
            continue
        sig_class = sig_name.split("::")[0]
        if not sig_class or sig_class.startswith("?") or "`" in sig_class:
            continue
        # T8 (C2): 候选集投票（优先）；无候选回退单类（原语义）
        RUN_MANIFEST["candidates_vote_edges"] += _t8_candidate_vote(
            vt_name_votes, candidates, var_to_cls, _final_keys,
            this_var, sig_class,
        )

    # Resolve votes → rename_map (one-to-one: no two Class_N map to same name)
    # Fix B: vtable 簇的 RTTI 真值名优先——Class_<vtaddr> 簇的身份由其二进制
    # vtable 决定，强制映射 RTTI 类名（先占名），投票仅在无真值时参与。
    # （实证：GScreen vtable 簇 Class_7EA6FC 曾被投票改名为
    # VectorCursor_uint___13 垃圾名——L16/L17 噪声）
    rename_map = {}
    used_names = set()
    _vt_real_by_id = {}
    for _vt in vtables:
        _rn = (RTTI_VTABLE_MAP.get(f"0x{_vt['start']:x}", {}) or {}).get("class")
        if _rn:
            _cid = vt_to_class_id.get(_vt["start"])
            if _cid:
                _vt_real_by_id[_cid] = _rn
    for _cid, _rn in sorted(_vt_real_by_id.items()):
        if _rn not in used_names:
            rename_map[_cid] = _rn
            used_names.add(_rn)
    RUN_MANIFEST["rtti_forced_renames"] = len(rename_map)
    for cls, votes in vt_name_votes.items():
        if not votes:
            continue
        best = max(votes, key=votes.get)
        # Fix B2: 真值预置（vtable 簇 → RTTI 类名）不可被投票覆盖
        if cls not in rename_map and best not in used_names:
            rename_map[cls] = best
            used_names.add(best)

    print(f"  Mapped {len(rename_map)} classes to real names.")

    # S2 诊断清单：定义层机制在旗舰案例上的实况（resolved/bonus/rename）
    _diag = {}
    for _pv in (0x4F45B0, 0x6ABD30, 0x41BEF0, 0x652CF0):
        _tv = f"0x{_pv:08X}:this"
        _diag[hex(_pv)] = {
            "definition_bonus": _definition_level_bonus(_pv),
            "resolved": resolved.get(_tv),
            "domain_size": len(domain.get(_tv, ())),
            "rename": rename_map.get(resolved.get(_tv, ""), "?"),
            "in_domain": sorted(c for c in domain.get(_tv, ())
                                if _definition_level_bonus(_pv).get(c))[:1],
        }
    RUN_MANIFEST["s2_diagnostics"] = _diag
    print(f"  [S2-diag] {json.dumps(_diag, ensure_ascii=False)[:400]}")

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

    # T11 (E9): MEMBERSHIP 验证器——CSP 推断 offsets ⊆ member_lookup 成员偏移。
    # 对已映射到 real_name 的类（rename_map 在此已最终——Step 6 命名 + Step 7
    # _csp 隔离后缀都已落定），推断了成员表没有的偏移 → membership_conflicts
    # （验证用途，不改求解；列表 cap 200 防 manifest 膨胀）。
    _mc_list, _mc_classes, _mc_offsets = _t11_check_membership(
        final_classes, rename_map, MEMBER_ANCHOR
    )
    RUN_MANIFEST["membership_conflicts"] = _mc_list[:200]
    RUN_MANIFEST["membership_conflict_count"] = len(_mc_list)
    RUN_MANIFEST["membership_checked_classes"] = _mc_classes
    RUN_MANIFEST["membership_offsets_checked"] = _mc_offsets
    print(
        f"  [T11-E9] membership check: {_mc_classes} classes / {_mc_offsets} offsets, "
        f"{len(_mc_list)} conflicts (validation only)"
    )

    # T11 (D1): csp_quality —— Step 9 导出前聚合（各值来自求解后的实际数据）。
    # conflict_count 取 T8 C1 conflicts 记录数（T8 未实现 → 0；eq/call-site
    # 冲突已在各自 manifest 键下单独记录，不混入此字段）。
    RUN_MANIFEST["csp_quality"] = _t11_build_csp_quality(
        final_classes,
        _t11_avg_domain,
        rename_map,
        RUN_MANIFEST.get("write_gap_count", 0),
        RUN_MANIFEST.get("conflicts", {}),
    )
    print(
        f"  [T11-D1] csp_quality: {RUN_MANIFEST['csp_quality']}"
    )

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
            # T11 (D2): 注入置信度标注（只读观测字段，下游不依赖）
            "confidence": info.get("confidence", 0.0),
            "candidates": info.get("candidates", []),
        }
    with open(os.path.join(report_dir, "csp_classes.json"), "w", encoding="utf-8") as f:
        json.dump(
            {"total_classes": len(classes_export), "classes": classes_export}, f, indent=2
        )
    del classes_export

    print("  [*] Exporting functions...")
    funcs_export = {}
    # Fix D: 真名类（S9b ctor 锚/域中已是真实类名者）恒等映射——
    # rename_map 只覆盖 Class_ 占位簇；真名 owner 直接透传
    _real_class_ids = {
        c for c in final_classes
        if _is_class_type(c) and not c.startswith("Class_")
    }
    for faddr, sig in func_sigs.items():
        owner_csp = sig["owner"]
        if owner_csp in _real_class_ids:
            owner_real = owner_csp
        else:
            owner_real = rename_map.get(owner_csp, "unknown")
        orig_name = func_addr_to_name.get(faddr, "unknown")
        if owner_real != "unknown":
            clean = orig_name.split("::")[-1] if "::" in orig_name else orig_name
            if clean.startswith("sub_"):
                clean = "method_" + clean[4:]
            inferred_name = f"{owner_real}::{clean}"
        else:
            inferred_name = orig_name
        # S1 (L8 修复): CC 由提取期 thiscall 检测决定（this_var 存在），
        # 不随 owner 解析成败漂移——owner 未解仍正确导出 thiscall
        try:
            cc = "thiscall" if f"0x{int(faddr, 16):08X}:this" in this_vars else "cdecl"
        except ValueError:
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

    print("  [*] Exporting constraints & call graph (streaming)...")

    # Phase 1+: 恢复 constraints/call_graph 导出。旧版整树 json.dump 曾 OOM
    # 而被移除；改为逐条 json.dumps 流式写（内存 O(1)）。写到 *.rtti.json
    # 新名，不覆盖 7 月旧基线（engine 换入前人工校验后重命名）。
    _cdir = os.path.join(PROJ_ROOT, "tools", "type_infer", "constraints")
    os.makedirs(_cdir, exist_ok=True)
    _cpath = os.path.join(_cdir, "raw_constraints.rtti.json")
    _total_c = len(type_seeds) + len(edge_constraints)
    with open(_cpath, "w", encoding="utf-8") as f:
        f.write(
            '{"description": "Type constraints (RTTI re-anchored extractor)", '
            '"binary": "gamemd.exe", "total_constraints": %d, "constraints": ['
            % _total_c
        )
        _first = True
        for c in type_seeds:
            if not _first:
                f.write(",")
            _first = False
            f.write(json.dumps(c, ensure_ascii=False))
        for c in edge_constraints:
            if not _first:
                f.write(",")
            _first = False
            f.write(json.dumps(c, ensure_ascii=False))
        f.write("]}")
    print(f"  [*] raw_constraints.rtti.json written ({_total_c} constraints)")

    _gpath = os.path.join(_cdir, "call_graph.rtti.json")
    with open(_gpath, "w", encoding="utf-8") as f:
        f.write('{"graph": {')
        _first = True
        for k in sorted(call_graph):
            if not _first:
                f.write(",")
            _first = False
            f.write(
                '%s: %s' % (json.dumps(k), json.dumps(call_graph[k], ensure_ascii=False))
            )
        f.write("}}")
    print(f"  [*] call_graph.rtti.json written ({len(call_graph)} callers)")
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
