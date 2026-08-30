#!/usr/bin/env python3
"""filter_type_erasing.py — 按汇编语义修剪类型擦除的跨函数约束边。

背景（2026-08-30 矛盾解剖，RulesClass::LoadFromINI 0x66D595 样本）：
汇编里每个调用点的实参写入的是"该次调用"的形参栈槽；约束图却把所有
调用方的实参连到同一个共享形参变量，形成跨函数汇流枢纽：
  - operator delete (0x7C8B3D)::param0 —— 4,328 个 delete 实参
  - operator new   (0x7C8E17) .return —— 5,592 个接收点（fresh-object）
  - Debug::Log     (0x4068E0)::param0 —— 1,631（varargs，签名不可靠）
  - strtok         (0x7C9CC2)::param0 —— 237
char* 栈缓冲区指针（BOTTOM）经枢纽与全程序类指针 meet → 90K TOP。

修剪规则（只动 CALL_ARG / RETURN_TO / CALL 三类跨函数边）：
  R1 CALL_ARG → 形参目标为"类型擦除"时删除：
     - callee 无 CSP 签名（含 vtable_slot_*）
     - 目标是 paramN 且：签名不可靠（任一参数 unknown/空）或声明类型
       ∈ {void*, char*, int, ...}（无类信息可传）或越界（varargs 溢出槽）
     - 目标是 :this 且：非 thiscall 或签名不可靠（伪 this 枢纽）
  R2 RETURN_TO / CALL → callee 返回值类型擦除时删除：
     - 声明返回 char*/void*（fresh-object/字符串），或
     - .return 扇出 > RET_FANOUT_CAP（默认 64；delete 8,660 / new 5,592
       等 void 返回的垃圾 eax 连线），或
     - callee 无签名
  其余约束类型（ASSIGN/RETURN/STACK_*/FUNC_PARAM/CALL_VTABLE/TYPE_SEED）
  一律不动。幂等：重复运行 0 修剪。

用法:
  python tools/type_infer/filter_type_erasing.py [--dry-run] [--input PATH]
"""

import argparse
import json
import os
import sys
from collections import Counter

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ_ROOT = os.path.dirname(os.path.dirname(_HERE))
DEFAULT_INPUT = os.path.join(_HERE, "constraints", "raw_constraints.json")
CSP_FUNCS_PATH = os.path.join(
    PROJ_ROOT, "tools", "csp", "full_report", "csp_functions.json"
)

ERASING_PARAM_TYPES = {
    "void", "void*", "char*", "char", "const char*",
    "int", "unsigned int", "long", "bool", "float", "double",
    "unknown", "",
}
ERASING_RET_DECLARED = {"char*", "void*", "const char*"}
RET_FANOUT_CAP = 64

# 库字符串函数例外（CRT/Win32，用户许可的库函数特例）：其 char* 参数/
# 返回值承载字符串证据（引擎 libc_string 锚 + char* 一等伪类型消费），
# 不按"类型擦除"剪除。与 engine._LIB_STRING_FUNCS 保持同源。
_LIB_EXCEPTION = {
    "0X007C9CC2", "0X007CDA90", "0X007C8D20", "0X007CD680", "0X007CE049",
    "0X007CA4B0", "0X007CAF30", "0X007D15A0", "0X007C8470", "0X007C8542",
    "0X007C846A", "0X007C85EA", "0X007C8EF4", "0X007CB7BA",
}


def _norm(t):
    t = str(t or "").strip()
    if t.startswith("const "):
        t = t[len("const "):]
    return t


def load_signatures():
    with open(CSP_FUNCS_PATH, "r", encoding="utf-8") as f:
        csp = json.load(f).get("functions", {})
    sig = {}
    sym_to_addr = {}
    for addr, s in csp.items():
        a = addr.upper()
        cc = s.get("calling_convention", "")
        ptypes = [_norm(p.get("real_type")) for p in s.get("params", [])]
        reliable = all(p not in ("unknown", "") for p in ptypes) if ptypes else False
        sig[a] = {
            "cc": cc,
            "params": ptypes,
            "ret": _norm(s.get("return_type")),
            "reliable": reliable,
        }
        for k in ("original_name", "inferred_name"):
            n = s.get(k, "")
            if n:
                sym_to_addr.setdefault(n, a)
    return sig, sym_to_addr


def parse_param_var(name):
    """识别形参变量名：返回 (callee_addr_upper, kind, idx) 或 None。"""
    if not isinstance(name, str):
        return None
    if "::param" in name:
        callee, rest = name.split("::", 1)
        try:
            idx = int(rest.replace("param", ""))
        except ValueError:
            return None
        if not callee.lower().startswith("0x"):
            return (callee.upper(), "param", idx)  # vtable_slot_* 等
        return (callee.upper(), "param", idx)
    if name.endswith(":this"):
        callee = name[:-5]
        return (callee.upper(), "this", -1)
    return None


def param_is_erasing(target, sig):
    p = parse_param_var(target)
    if p is None:
        return False
    callee, kind, idx = p
    # 库字符串函数例外（用户许可）：char* 参数承载字符串证据，且引擎已
    # 有 libc_string 锚 + char* 一等伪类型——这些边是证据不是噪声
    if callee in _LIB_EXCEPTION:
        return False
    s = sig.get(callee)
    if s is None:
        return True  # 无签名（含 vtable_slot_* 伪 callee）
    if kind == "this":
        # this 的类型证据来自 vtable truth（csp_this 锚），与全签名可靠性
        # 无关——剪 :this 会切断 thiscall 主通道。仅伪 this 需剪：
        # 非 thiscall callee 的 ':this' 是提取器把 cdecl/fastcall 的
        # ecx 复用误判成的 this（CellCoord::To_CellObj 1,415 扇入枢纽）。
        return s["cc"] != "thiscall"
    # 签名不可靠（任一参数 unknown/空，即 varargs 或 CSP 投票失败）时，
    # 声明类型本身不可信——Debug::Log 的 a2 被投票成 IPXGlobalConnClass*
    # 即此例，保留边会让 1,631 个调用方的实参经它汇流。
    if not s["reliable"]:
        return True
    real = idx + 1 if s["cc"] == "thiscall" else idx
    if real >= len(s["params"]):
        return True  # varargs 溢出槽
    return s["params"][real] in ERASING_PARAM_TYPES


def return_is_erasing(callee_upper, sig, fanout):
    if callee_upper in _LIB_EXCEPTION:
        return False  # 库字符串函数返回 char* 是证据（strtok/strcpy 等）
    s = sig.get(callee_upper)
    if s is None:
        return True
    if s["ret"] in ERASING_RET_DECLARED:
        return True
    return fanout.get(callee_upper, 0) > RET_FANOUT_CAP


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--input", default=DEFAULT_INPUT)
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    sig, sym_to_addr = load_signatures()
    with open(args.input, "r", encoding="utf-8") as f:
        data = json.load(f)
    constraints = data["constraints"]

    # Pass 1: .return 扇出（RETURN_TO from + CALL to）
    fanout = Counter()
    for c in constraints:
        if c["type"] == "RETURN_TO":
            frm = c.get("from", "")
            if frm.endswith(".return"):
                fanout[frm[:-7].upper()] += 1
        elif c["type"] == "CALL":
            to = c.get("to", "")
            callee = None
            if isinstance(to, str) and to.lower().startswith("0x"):
                callee = to.upper()
            else:
                callee = sym_to_addr.get(c.get("callee_name", ""))
            if callee:
                fanout[callee] += 1

    # Pass 2: 修剪
    stats = Counter()
    kept = []
    dropped_examples = {}
    for c in constraints:
        t = c["type"]
        drop = False
        if t == "CALL_ARG":
            # 两侧任一为擦除形参目标即剪（提取器两个方向都会生成）
            if param_is_erasing(c.get("to", ""), sig) or param_is_erasing(
                c.get("from", ""), sig
            ):
                drop = True
        elif t == "RETURN_TO":
            frm = c.get("from", "")
            callee = frm[:-7].upper() if frm.endswith(".return") else ""
            if callee and return_is_erasing(callee, sig, fanout):
                drop = True
        elif t == "CALL":
            to = c.get("to", "")
            callee = None
            if isinstance(to, str) and to.lower().startswith("0x"):
                callee = to.upper()
            else:
                callee = sym_to_addr.get(c.get("callee_name", ""))
            if callee and return_is_erasing(callee, sig, fanout):
                drop = True

        if drop:
            stats[t + "_drop"] += 1
            dropped_examples.setdefault(t, c)
        else:
            stats[t + "_keep"] += 1
            kept.append(c)

    print("surgery result:")
    for k in sorted(stats):
        print(f"  {k}: {stats[k]}")
    for t, c in dropped_examples.items():
        print(f"  example {t}: {json.dumps(c, ensure_ascii=False)[:140]}")

    if args.dry_run:
        print("dry-run: no write")
        return

    if len(kept) == len(constraints):
        print("idempotent: nothing dropped, no write")
        return

    bak = args.input + ".pre_hubfix.bak"
    if not os.path.exists(bak):
        os.replace(args.input, bak)
        print(f"backup: {bak}")
    else:
        print(f"backup exists, keeping original: {bak}")

    data["constraints"] = kept
    data["total_constraints"] = len(kept)
    data["hubfix"] = {
        "tool": "tools/type_infer/filter_type_erasing.py",
        "ret_fanout_cap": RET_FANOUT_CAP,
        "stats": dict(stats),
    }
    with open(args.input, "w", encoding="utf-8") as f:
        json.dump(data, f, ensure_ascii=False)
    print(f"written: {args.input} ({len(kept)} constraints)")


if __name__ == "__main__":
    sys.exit(main())
