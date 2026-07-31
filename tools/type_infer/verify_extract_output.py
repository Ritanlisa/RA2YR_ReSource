#!/usr/bin/env python3
"""verify_extract_output.py — 离线回归验证工具 (T7, fix-ida-extract 计划)

纯标准库，不依赖 IDA。验证 ida_extract.py 修复后的提取结果：

  1. CC 一致率检查    — extracted_cc.json (dry-run 产物) vs signals.json
                       具体 call_convention（kind=='function'，13,470 样本）
  2. F3 合成测试      — push 逆序编号逻辑（直接导入 _assign_push_params）
  3. 类型/名字 diff   — 副本 IDB 运行前后快照对比（BuildingClass 等存活、
                       names 仅白名单改名、零覆盖 signals.json 已有名）

用法:
  python verify_extract_output.py --all --cc .omo/dry_run_report/extracted_cc.json
  python verify_extract_output.py --cc <path> [--threshold 0.95]
  python verify_extract_output.py --f3
  python verify_extract_output.py --diff <pre.json> <post.json>
  python verify_extract_output.py --mock          # 内置 mock 自检（离线可用）

输出: .omo/evidence/verify-report.md
"""

import argparse
import json
import os
import sys
from collections import Counter

PROJ_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

# 与 ida_extract.py 保持一致的 CC 名称（_CM_TO_CC_NAME 的字符串形式）
CC_NAMES = ("thiscall", "stdcall", "cdecl", "fastcall")
SIGNALS_CC_VALUES = set(CC_NAMES)
EVIDENCE_DIR = os.path.join(PROJ_ROOT, ".omo", "evidence")


# ── 1. CC 一致率 ─────────────────────────────────────────────────────────

def cc_agreement(extracted_path, threshold=0.95):
    """对比 extracted_cc.json 的 func_real_cc 与 signals.json。

    样本 = signals symbols 中 kind=='function' 且 call_convention 为具体值。
    返回 (agreement_rate, total, matched, mismatches)。
    """
    with open(extracted_path, "r", encoding="utf-8") as f:
        extracted = json.load(f)
    extracted_cc = extracted.get("func_real_cc", {})
    with open(os.path.join(PROJ_ROOT, "signals.json"), "r", encoding="utf-8") as f:
        signals = json.load(f)
    symbols = signals.get("symbols", {})

    ext_norm = {_norm_key(k): v for k, v in extracted_cc.items()}
    mismatches = []
    matched = total = 0
    zeroX_conflicts = []  # signals.json 内部 0X 重复条目冲突（非脚本问题）
    canon_syms = {}
    for k, v in symbols.items():
        if k.startswith("0X"):
            ck = "0x" + k[2:].lstrip("0").lower()
            if ck in symbols:
                if symbols[ck].get("call_convention") != v.get("call_convention"):
                    zeroX_conflicts.append(
                        {"0X_key": k, "canonical_key": ck,
                         "0X_cc": v.get("call_convention"),
                         "canonical_cc": symbols[ck].get("call_convention")}
                    )
                continue  # 规范 0x 形式为准
        canon_syms[k] = v
    for addr_str, sig in canon_syms.items():
        if sig.get("kind") != "function":
            continue
        cc = sig.get("call_convention")
        if cc not in SIGNALS_CC_VALUES:
            continue  # unknown/缺失 — 非具体 CC，不参与
        extracted_val = ext_norm.get(_norm_key(addr_str))
        total += 1
        if extracted_val == cc:
            matched += 1
        else:
            mismatches.append(
                {
                    "address": addr_str,
                    "expected": cc,
                    "actual": extracted_val,
                    "name": sig.get("name", ""),
                }
            )

    rate = matched / total if total else 0.0
    return rate, total, matched, mismatches, zeroX_conflicts


# ── 2. F3 合成测试 ───────────────────────────────────────────────────────

def f3_synthetic():
    """F3: `push 2; push 1; call f` → param0=1, param1=2。

    直接导入 ida_extract 的 _assign_push_params（纯逻辑，离线可导入）。
    """
    sys.path.insert(0, PROJ_ROOT)
    try:
        from tools.type_infer.ida_extract import _assign_push_params
    except Exception as e:
        return False, f"cannot import _assign_push_params: {e!r}"

    # 场景 A: push 2; push 1; call f（扫描序 = [push1, push2]）
    #   _parse_operand_src 对立即数返回 ('imm', None)；此处用 ('imm', value) 携带值
    pushes = [("imm", "1"), ("imm", "2")]
    pairs = _assign_push_params(pushes)
    param_map = {idx: src[1] for src, idx in pairs}
    if param_map.get(0) != "1" or param_map.get(1) != "2":
        return False, f"scenario A failed: {pairs}"

    # 场景 B: 立即数占槽位（push 2; push eax; push 1; call f →
    #   扫描序 = [push1, push eax, push 2] → eax 是 param1）
    pushes_b = [("imm", "1"), ("reg", "eax"), ("imm", "2")]
    pairs_b = _assign_push_params(pushes_b)
    map_b = {idx: src[1] for src, idx in pairs_b}
    if map_b.get(1) != "eax" or map_b.get(0) != "1" or map_b.get(2) != "2":
        return False, f"scenario B (slot consumption) failed: {pairs_b}"

    # 场景 C: 边发射循环（与 _scan_call_args 中一致的语义）
    edges = []
    for src, param_idx in pairs:
        if not src or not src[1]:
            continue
        edges.append(f"param{param_idx}<-{src[1]}")
    if edges != ["param0<-1", "param1<-2"]:
        return False, f"edge emission failed: {edges}"

    return True, "F3 synthetic PASS (scenarios A/B/C)"


# ── 3. 类型/名字 diff ────────────────────────────────────────────────────

def type_name_diff(pre_path, post_path):
    """副本运行前后快照对比。

    - 类型: 已存在类型必须全部存活（types_removed 应为空或仅 _csp）
    - 名字: 移除的名字必须匹配白名单（sub_*/method_*/Class_*），
            且不可覆盖 signals.json 中已有名（改名白名单纪律）
    """
    with open(pre_path, "r", encoding="utf-8") as f:
        pre = json.load(f)
    with open(post_path, "r", encoding="utf-8") as f:
        post = json.load(f)

    pre_types, post_types = set(pre.get("types", [])), set(post.get("types", []))
    pre_names, post_names = pre.get("names", {}), post.get("names", {})

    types_removed = sorted(pre_types - post_types)
    types_added = sorted(post_types - pre_types)
    names_removed = {a: n for a, n in pre_names.items() if a not in post_names}
    names_added = {a: n for a, n in post_names.items() if a not in pre_names}
    names_changed = {
        a: (pre_names[a], post_names[a])
        for a in pre_names
        if a in post_names and pre_names[a] != post_names[a]
    }

    # 类型存活断言: 移除的类型只能是 _csp 后缀（重注入路径）
    bad_type_removals = [t for t in types_removed if not t.endswith("_csp")]

    # 名字移除白名单: sub_* / method_* / Class_* / 空名
    import re

    allowed = re.compile(r"^(sub_|method_|Class_[0-9A-Fa-f]+|loc_|unk_|$)")
    bad_name_removals = [
        (a, n) for a, n in names_removed.items() if not allowed.match(n or "")
    ]

    # 覆盖 signals.json 已有名检查
    with open(os.path.join(PROJ_ROOT, "signals.json"), "r", encoding="utf-8") as f:
        signals = json.load(f)
    sig_names = {
        s.get("name") for s in signals.get("symbols", {}).values() if s.get("name")
    }
    overwritten_real = [
        (a, old, new)
        for a, (old, new) in names_changed.items()
        if old in sig_names and not allowed.match(old or "")
    ]

    result = {
        "types_removed": types_removed,
        "types_added": types_added,
        "names_removed": names_removed,
        "names_added": names_added,
        "names_changed": names_changed,
        "bad_type_removals": bad_type_removals,
        "bad_name_removals": bad_name_removals,
        "overwritten_real_names": overwritten_real,
        "pass": (
            not bad_type_removals and not bad_name_removals and not overwritten_real
        ),
    }
    return result


# ── 入口 ─────────────────────────────────────────────────────────────────

def _mock_signals():
    """离线自检用 mock：5 个函数 3 具体 CC。"""
    return {
        "0x401000": {"kind": "function", "name": "A::B", "call_convention": "thiscall"},
        "0x401010": {"kind": "function", "name": "C", "call_convention": "cdecl"},
        "0x401020": {"kind": "function", "name": "D", "call_convention": "unknown"},
        "0x401030": {"kind": "function", "name": "E", "call_convention": "fastcall"},
        "0x401040": {"kind": "member", "name": "F", "call_convention": "thiscall"},
    }


def main():
    ap = argparse.ArgumentParser(description="verify_extract_output.py (T7)")
    ap.add_argument("--cc", help="extracted_cc.json 路径（dry-run 产物）")
    ap.add_argument("--threshold", type=float, default=0.95)
    ap.add_argument("--f3", action="store_true", help="F3 合成测试")
    ap.add_argument("--diff", nargs=2, metavar=("PRE", "POST"), help="类型/名字 diff")
    ap.add_argument("--mock", action="store_true", help="离线 mock 自检")
    ap.add_argument("--all", action="store_true")
    args = ap.parse_args()

    os.makedirs(EVIDENCE_DIR, exist_ok=True)
    report_lines = ["# verify_extract_output.py 报告", ""]

    exit_code = 0

    if args.mock:
        # 离线自检: CC 一致率逻辑 + F3
        ok, msg = f3_synthetic()
        print(f"[F3] {msg}")
        report_lines.append(f"## F3 合成测试\n- {'PASS' if ok else 'FAIL'}: {msg}\n")
        exit_code = 0 if ok else 1

        # mock CC: 用临时文件模拟
        mock_extracted = {
            "func_real_cc": {
                "0x401000": "thiscall",
                "0x401010": "cdecl",
                "0x401030": "fastcall",
            }
        }
        tmp = os.path.join(EVIDENCE_DIR, "_mock_extracted_cc.json")
        with open(tmp, "w", encoding="utf-8") as f:
            json.dump(mock_extracted, f)
        # 用真实 signals 但只取 mock 地址? 简化: 直接断言本地函数
        rate, total, matched, mismatches, _zxc = cc_agreement_impl(
            mock_extracted["func_real_cc"], _mock_signals()
        )
        print(f"[CC-mock] rate={rate:.3f} total={total} matched={matched}")
        report_lines.append(f"## CC mock\n- rate={rate:.3f} ({matched}/{total})\n")
        if rate < 1.0 or total != 3:
            exit_code = 1
        os.remove(tmp)

    if args.f3 or args.all:
        ok, msg = f3_synthetic()
        print(f"[F3] {msg}")
        report_lines.append(f"## F3 合成测试\n- {'PASS' if ok else 'FAIL'}: {msg}\n")
        if not ok:
            exit_code = 1

    if args.cc or args.all:
        cc_path = args.cc or os.path.join(
            PROJ_ROOT, ".omo", "dry_run_report", "extracted_cc.json"
        )
        if os.path.exists(cc_path):
            rate, total, matched, mismatches, zeroX_conflicts = cc_agreement(
                cc_path, args.threshold
            )
            print(
                f"[CC] rate={rate:.4f} ({matched}/{total}) threshold={args.threshold} "
                f"zeroX_conflicts={len(zeroX_conflicts)}"
            )
            report_lines.append(
                f"## CC 一致率\n- rate={rate:.4f} ({matched}/{total})\n"
                f"- signals.json 内部 0X 重复条目冲突（不计入样本）: "
                f"{len(zeroX_conflicts)}\n"
            )
            mm_path = os.path.join(EVIDENCE_DIR, "task-2-cc-mismatch.txt")
            with open(mm_path, "w", encoding="utf-8") as f:
                for m in mismatches[:200]:
                    f.write(json.dumps(m) + "\n")
            report_lines.append(
                f"- mismatches: {len(mismatches)} (前 200 条见 task-2-cc-mismatch.txt)\n"
            )
            if rate < args.threshold:
                print(f"[CC] FAIL: rate below threshold {args.threshold}")
                exit_code = 1
        else:
            print(f"[CC] {cc_path} not found (skip)")

    if args.diff:
        result = type_name_diff(args.diff[0], args.diff[1])
        print(
            f"[DIFF] types_removed={len(result['types_removed'])} "
            f"types_added={len(result['types_added'])} "
            f"names_removed={len(result['names_removed'])} "
            f"names_changed={len(result['names_changed'])} "
            f"bad_type_removals={len(result['bad_type_removals'])} "
            f"bad_name_removals={len(result['bad_name_removals'])} "
            f"overwritten_real={len(result['overwritten_real_names'])} "
            f"PASS={result['pass']}"
        )
        report_lines.append(
            f"## 类型/名字 diff\n- types_removed={len(result['types_removed'])} "
            f"(bad: {len(result['bad_type_removals'])})\n"
            f"- names_removed={len(result['names_removed'])} "
            f"(bad: {len(result['bad_name_removals'])})\n"
            f"- names_changed={len(result['names_changed'])} "
            f"(overwritten real: {len(result['overwritten_real_names'])})\n"
            f"- VERDICT: {'PASS' if result['pass'] else 'FAIL'}\n"
        )
        if not result["pass"]:
            exit_code = 1

    report_path = os.path.join(EVIDENCE_DIR, "verify-report.md")
    with open(report_path, "w", encoding="utf-8") as f:
        f.write("\n".join(report_lines))
    print(f"[REPORT] {report_path}")
    return exit_code


def _norm_key(k):
    """signals.json 键 `0x401000`（无填充）vs extracted_cc.json 键
    `0x00401000`（08X 填充）——归一化后可比。"""
    if not isinstance(k, str):
        return str(k)
    if k.startswith("0x") or k.startswith("0X"):
        return "0x" + k[2:].lstrip("0").lower()
    return k.lower()


def cc_agreement_impl(extracted_cc, symbols):
    """cc_agreement 的纯逻辑拆分（mock 自检复用）。"""
    ext_norm = {_norm_key(k): v for k, v in extracted_cc.items()}
    mismatches = []
    matched = total = 0
    for addr_str, sig in symbols.items():
        if sig.get("kind") != "function":
            continue
        cc = sig.get("call_convention")
        if cc not in SIGNALS_CC_VALUES:
            continue
        extracted_val = ext_norm.get(_norm_key(addr_str))
        total += 1
        if extracted_val == cc:
            matched += 1
        else:
            mismatches.append(
                {"address": addr_str, "expected": cc, "actual": extracted_val}
            )
    rate = matched / total if total else 0.0
    return rate, total, matched, mismatches, []


if __name__ == "__main__":
    sys.exit(main())
