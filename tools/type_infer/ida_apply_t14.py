#!/usr/bin/env python3
"""ida_apply_t14.py — T14 阶段: 类型推断成果回写 IDA（类级 this 类型签名）。

路线图 ③ 的执行器。消费 anchors/class_db.json（类数据库）的方法归属 +
vtable 真值, 把 thiscall 方法的 this 参数类型设为所属类——Hex-Rays 随即
以该类 struct 渲染成员访问（依赖 IDB 内已有 struct; 继承区 gap 的补全
是独立工作包, 见文末注记）。

应用策略（保守, 不降级现有信息）:
  - 仅改 this 参数类型; 返回类型/其余参数/函数名原样保留
  - 当前 this 已是目标类 → 跳过（幂等）
  - 函数出现在多个类的 vtable（共享实现）→ 只在全部包含类一致或
    IDA 命名 majority 支持时应用（本工具用 IDA 名 ^Class:: 过滤,
    与既有命名口径一致）

协议: 直连 IDA MCP HTTP JSON-RPC (127.0.0.1:13337/mcp), 无需会话
MCP 工具。用法:
  python tools/type_infer/ida_apply_t14.py --class TechnoClass [--apply]
  python tools/type_infer/ida_apply_t14.py --class TechnoClass --apply --save

默认 dry-run（只统计）; --apply 才写入; --save 追加 idb_save。

注记（成员级回写的前置工作, 未在本工具范围）:
  IDB struct 是全对象扁平布局（TechnoClass.Flashing@0x4B8）, 而
  class_layouts/member_types 是类增量布局（flashing@0xE4）——补全
  IDB 继承区 gap 需先建立 增量→绝对 偏移映射（沿继承链 sizeof 累加,
  注意 MI/col_offset 调整）。
"""
import argparse
import json
import re
import sys
import urllib.request

MCP_URL = "http://127.0.0.1:13337/mcp"
CLASS_DB = "anchors/class_db.json"


def call(name, args, timeout=120):
    req = urllib.request.Request(
        MCP_URL,
        data=json.dumps({"jsonrpc": "2.0", "id": 1, "method": "tools/call",
                         "params": {"name": name, "arguments": args}}).encode(),
        headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=timeout) as r:
        d = json.load(r)["result"]
    if d.get("isError"):
        raise RuntimeError(f"{name}: {d['content'][0]['text'][:200]}")
    sc = d.get("structuredContent") or {}
    return sc.get("result", sc)


def fetch_prototypes(ida_prefix: str) -> list[dict]:
    out = call("func_query", {"queries": [
        {"name_regex": f"^{re.escape(ida_prefix)}::", "count": 0, "sort_by": "addr"}]})
    data = out[0]["data"] if isinstance(out, list) else out["data"]
    protos = []
    addrs = [f["addr"] for f in data]
    for i in range(0, len(addrs), 10):  # export_funcs 单次上限 10 条（实测）
        chunk = addrs[i:i + 10]
        p = call("export_funcs", {"addrs": chunk, "format": "json"})
        protos.extend(p.get("functions", []))
    return protos


# thiscall 的首参就是 this——无论 IDA 把它标成什么名字（`this`/`Block`/
# `a1`/无名）或什么类型（含 `int this` 退化形态）, 一律整体替换为
# `Class *this`。只动首参段（到第一个 `,` 或 `)`）, 其余参数原样保留。
_RE_PROTO = re.compile(
    r"^(?P<ret>.+?)\s*__thiscall\(\s*(?P<first>[^,()]*?)(?P<rest>[,)].*)$",
    re.S)


def rewrite_this(proto: str, cls: str):
    m = _RE_PROTO.match(proto.strip())
    if not m:
        return None
    return f"{m.group('ret')} __thiscall({cls} *this{m.group('rest')}"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--class", dest="cls", required=True,
                    help="目标类名（如 TechnoClass）")
    ap.add_argument("--apply", action="store_true", help="实际写入（默认 dry-run）")
    ap.add_argument("--save", action="store_true", help="应用后 idb_save")
    ap.add_argument("--limit", type=int, default=0, help="限制数量（试点用）")
    args = ap.parse_args()

    health = call("server_health", {})
    print(f"IDB: {health.get('idb_path')} | hexrays: {health.get('hexrays_ready')}")

    db = json.load(open(CLASS_DB, encoding="utf-8"))["classes"]
    if args.cls not in db:
        print(f"ERROR: {args.cls} 不在 class_db 中", file=sys.stderr)
        sys.exit(1)

    protos = fetch_prototypes(args.cls)
    if args.limit:
        protos = protos[: args.limit]
    print(f"IDA 中 ^{args.cls}:: 函数: {len(protos)}")

    edits, skipped_done, skipped_shape = [], 0, 0
    for p in protos:
        proto = (p.get("prototype") or "").strip()
        name = p.get("name") or ""
        if not proto:
            skipped_shape += 1
            continue
        if f"{args.cls} *this" in proto:
            skipped_done += 1
            continue
        if re.search(r"#\d+", proto):
            # IDA 内部类型 ID（#375 *）无法被类型解析器重新解析——跳过
            skipped_shape += 1
            continue
        new_proto = rewrite_this(proto, args.cls)
        if new_proto is None:
            skipped_shape += 1
            continue
        # 应用格式需要带函数名的完整声明
        named = new_proto.replace("__thiscall(", f"__thiscall {name}(", 1)
        edits.append({"addr": p["addr"], "ty": named})

    print(f"  待应用: {len(edits)} | 已是目标类(跳过): {skipped_done} "
          f"| 形状不合(跳过): {skipped_shape}")

    if not args.apply:
        for e in edits[:5]:
            print(f"  [dry] {e['addr']}: {e['ty']}")
        print("dry-run: 未写入 (--apply 执行)")
        return

    ok = fail = 0
    failures = []
    for i in range(0, len(edits), 50):
        chunk = edits[i:i + 50]
        res = call("type_apply_batch", {"batch": {"edits": chunk}})
        items = res if isinstance(res, list) else res.get("edits", res.get("results", []))
        if isinstance(items, list):
            for it in items:
                if it.get("ok"):
                    ok += 1
                else:
                    fail += 1
                    if len(failures) < 5:
                        failures.append((it.get("edit", {}).get("addr"),
                                         it.get("error", "")))
        else:  # 单 edit 形态
            ok += 1 if items.get("ok") else 0
    print(f"应用结果: ok={ok} fail={fail}")
    for a, e in failures:
        print(f"  FAIL {a}: {e}")

    if args.save and fail == 0:
        call("idb_save", {})
        print("idb_save 完成")
    elif args.save:
        print("存在失败项, 未保存 IDB（修复后重跑）")


if __name__ == "__main__":
    main()
