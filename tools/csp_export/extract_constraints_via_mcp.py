#!/usr/bin/env python3
"""T4a: 约束提取的 IDA-MCP 自动驱动（计划 project-optimization.md #5）。

唯一新建项之一（复用原则 1：检索确认 tools/csp_export + tools/type_infer
共 286 个脚本中无等价物——原型 .omo/experiment_extract_driver.py 只做实验
未做判定，本驱动是其正式化）。

流程（全自动, 无 IDA UI 操作）:
  1) 探测 IDA-MCP (http://127.0.0.1:13337/mcp, server_health, 短超时);
     离线 → 写 offline 证据, 退出非零, 不触碰任何产物 (fail closed)。
  2) py_exec_file 通道探针: 用 1 行脚本确认插件会把脚本 stdout 回传到
     structuredContent.stdout（实验证据 2026-10-10: 在, 但未实测过内容,
     探针避免 8 分钟后才发现通道语义漂移）。
  3) py_eval 在 IDA 进程内设 IDA_MCP_TOOL_TIMEOUT_SEC>=900（解除插件
     sync.py 默认 60s）与 T14X_EXTRACT_ONLY=1（只读提取, 跳过阶段 5-8
     的求解器 + IDB 注入/改名——绝不能跑全量模式）。
  4) py_exec_file 运行 tools/type_infer/ida_extract.py（客户端 timeout
     >=1200s, 长阻塞不取消）。实测基线 496.6s。
  5) 校验（全过才退出 0）:
     a. .omo/t14x_extract_trace.log 从运行前偏移起的新增段, 尾行
        == "EXTRACT_ONLY COMPLETE";
     b. 4 个产物 mtime 刷新（严格晚于运行前快照）且 size > 0:
        constraints/raw_constraints.rtti.json, call_graph.rtti.json,
        .omo/extracted_cc.json, .omo/type_infer_run_manifest.json;
     c. 约束计数: trace 段 `constraints=N` / `total=N` 与 .rtti.json
        头部 `"total_constraints": N` 三方一致且 > 0;
     d. py_exec_file 的 stdout 字段含 "[EXTRACT_ONLY] complete"
        （通道探针证死时降级为记录不否决, 逐字记入证据）。

只读性: EXTRACT_ONLY 不改 IDB、不 promote（.rtti.json -> .json 是 T4b,
本驱动绝不触碰 constraints/raw_constraints.json）。幂等: 重跑只刷新
.rtti.json 等产物 mtime, 不做任何提升/改名。

证据: .omo/evidence/task-4a-extract-pass.json (成功) /
      .omo/evidence/task-4a-extract-offline.json (离线) /
      .omo/evidence/task-4a-extract-fail.json (其余失败; 原始响应/trace
      段全文保留)。

用法:
  python tools/csp_export/extract_constraints_via_mcp.py
  python tools/csp_export/extract_constraints_via_mcp.py \
      --client-timeout 1500 --ida-tool-timeout 900

退出码: 0=全部校验通过; 2=IDA 离线; 1=其余任何失败。
"""
import argparse
import json
import re
import subprocess
import sys
import time
import urllib.request
from pathlib import Path

MCP_URL = "http://127.0.0.1:13337/mcp"
PROBE_TIMEOUT = 10          # server_health 短超时（在线探测）
MIN_CLIENT_TIMEOUT = 1200   # 计划红线: 客户端 <1200s 禁止
MIN_IDA_TIMEOUT = 900       # 计划红线: 进程内 <900s 禁止
STDOUT_MARKER = "[EXTRACT_ONLY] complete"
TRACE_TAIL_TOKEN = "EXTRACT_ONLY COMPLETE"

ROOT = Path(__file__).resolve().parents[2]
EXTRACT_SCRIPT = ROOT / "tools" / "type_infer" / "ida_extract.py"
TRACE_LOG = ROOT / ".omo" / "t14x_extract_trace.log"
EVIDENCE_DIR = ROOT / ".omo" / "evidence"

# EXTRACT_ONLY 分支产物（ida_extract.py L3704-3765）
ARTIFACTS = [
    ROOT / "tools" / "type_infer" / "constraints" / "raw_constraints.rtti.json",
    ROOT / "tools" / "type_infer" / "constraints" / "call_graph.rtti.json",
    ROOT / ".omo" / "extracted_cc.json",
    ROOT / ".omo" / "type_infer_run_manifest.json",
]

ISO_FMT = "%Y-%m-%dT%H:%M:%S"  # T2 L15: mtime 归一格式


def iso(ts: float) -> str:
    return time.strftime(ISO_FMT, time.localtime(ts))


def mcp_call(name, args, timeout):
    """HTTP JSON-RPC 调用（复用 ida_apply_t14.py::call 模式）。"""
    req = urllib.request.Request(
        MCP_URL,
        data=json.dumps({"jsonrpc": "2.0", "id": 1, "method": "tools/call",
                         "params": {"name": name, "arguments": args}}).encode(),
        headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=timeout) as r:
        resp = json.load(r)
    d = resp.get("result") or {}
    if d.get("isError"):
        raise RuntimeError(f"{name}: {(d.get('content') or [{}])[0].get('text', '')[:300]}")
    sc = d.get("structuredContent") or {}
    return d, sc


def probe_online(timeout=PROBE_TIMEOUT):
    """step3_export.py::ida_online 同构探测（结构化版）。"""
    try:
        _, sc = mcp_call("server_health", {}, timeout)
        return True, sc
    except Exception as e:
        return False, {"error": f"{type(e).__name__}: {e}"}


def read_trace_segment(offset: int):
    """读 trace 从 offset 起的新增段（追加式日志, %f %s 行格式）。"""
    if not TRACE_LOG.exists():
        return None, []
    with open(TRACE_LOG, "rb") as f:
        f.seek(offset)
        data = f.read()
    text = data.decode("utf-8", "replace")
    lines = [ln for ln in text.splitlines() if ln.strip()]
    return text, lines


def strip_ts(line: str) -> str:
    parts = line.split(None, 1)
    return parts[1] if len(parts) > 1 else line


def artifact_stat(p: Path):
    if not p.exists():
        return None
    st = p.stat()
    return {"size": st.st_size, "mtime": st.st_mtime, "mtime_iso": iso(st.st_mtime)}


def git_head():
    try:
        return subprocess.run(["git", "rev-parse", "--short", "HEAD"],
                              capture_output=True, text=True, cwd=str(ROOT),
                              timeout=10).stdout.strip()
    except Exception:
        return None


def write_evidence(path: Path, payload: dict):
    EVIDENCE_DIR.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(payload, ensure_ascii=False, indent=2),
                    encoding="utf-8")
    print(f"[t4a] evidence: {path}")


def main() -> int:
    global MCP_URL
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--client-timeout", type=int, default=1200,
                    help=f"py_exec_file 客户端超时秒数 (>= {MIN_CLIENT_TIMEOUT})")
    ap.add_argument("--ida-tool-timeout", type=int, default=900,
                    help=f"IDA 进程内 IDA_MCP_TOOL_TIMEOUT_SEC (>= {MIN_IDA_TIMEOUT})")
    ap.add_argument("--mcp-url", default=MCP_URL,
                    help="QA 专用: 指向死端口以验证离线 fail-closed 路径")
    args = ap.parse_args()
    MCP_URL = args.mcp_url

    t_start = time.time()
    ev = {
        "task": "T4a extract_constraints_via_mcp",
        "started": iso(t_start),
        "mcp_url": MCP_URL,
        "extract_script": str(EXTRACT_SCRIPT),
        "client_timeout_sec": max(args.client_timeout, MIN_CLIENT_TIMEOUT),
        "ida_tool_timeout_sec": max(args.ida_tool_timeout, MIN_IDA_TIMEOUT),
        "git_head": git_head(),
        "requested_client_timeout_sec": args.client_timeout,
        "requested_ida_tool_timeout_sec": args.ida_tool_timeout,
    }
    failures = []

    # 红线强制: 低于下限直接抬到下限（并记录原始请求值, 已入 ev）
    if args.client_timeout < MIN_CLIENT_TIMEOUT:
        print(f"[t4a] client-timeout {args.client_timeout}s < {MIN_CLIENT_TIMEOUT}s 红线, 抬升")
    if args.ida_tool_timeout < MIN_IDA_TIMEOUT:
        print(f"[t4a] ida-tool-timeout {args.ida_tool_timeout}s < {MIN_IDA_TIMEOUT}s 红线, 抬升")

    if not EXTRACT_SCRIPT.exists():
        failures.append(f"extract script missing: {EXTRACT_SCRIPT}")
        ev["failures"] = failures
        ev["verdict"] = "FAIL"
        write_evidence(EVIDENCE_DIR / "task-4a-extract-fail.json", ev)
        return 1

    # ---- 运行前快照（trace 偏移 + 产物 stat）----
    trace_pre_size = TRACE_LOG.stat().st_size if TRACE_LOG.exists() else 0
    ev["trace_pre_size"] = trace_pre_size
    ev["artifacts_pre"] = {str(p.relative_to(ROOT)): artifact_stat(p) for p in ARTIFACTS}

    # ---- 1) 在线探测（fresh, 不信任任何先前记录）----
    online, health = probe_online()
    ev["probe"] = {"online": online, "health": health}
    if not online:
        ev["verdict"] = "OFFLINE"
        ev["offline_test_note"] = (
            "dead-port QA scenario" if args.mcp_url != "http://127.0.0.1:13337/mcp"
            else "IDA offline at default 127.0.0.1:13337")
        ev["wall_sec"] = round(time.time() - t_start, 1)
        write_evidence(EVIDENCE_DIR / "task-4a-extract-offline.json", ev)
        print(f"[t4a] IDA 离线 ({args.mcp_url} 无响应) — fail closed, 未触碰任何产物", file=sys.stderr)
        return 2
    print(f"[t4a] IDA 在线: idb={health.get('idb_path')} hexrays={health.get('hexrays_ready')}")

    # ---- 2) stdout 通道探针（py_exec_file 是否回传脚本 stdout）----
    probe_src = 'print("T4A_STDOUT_PROBE_OK")\n'
    probe_path = ROOT / ".omo" / "t4a_stdout_probe.py"
    probe_path.write_text(probe_src, encoding="utf-8")
    try:
        _, psc = mcp_call("py_exec_file", {"file_path": str(probe_path)}, timeout=60)
        stdout_channel_live = "T4A_STDOUT_PROBE_OK" in str(psc.get("stdout", ""))
    except Exception as e:
        psc = {"error": f"{type(e).__name__}: {e}"}
        stdout_channel_live = False
    ev["stdout_channel"] = {"live": stdout_channel_live, "probe_response": psc}
    print(f"[t4a] py_exec_file stdout 通道: {'live' if stdout_channel_live else 'DEAD(降级记录)'}")

    # ---- 3) py_eval: IDA 进程内环境提升 ----
    ida_to = ev["ida_tool_timeout_sec"]
    env_code = (
        "import os\n"
        f"os.environ['IDA_MCP_TOOL_TIMEOUT_SEC'] = '{ida_to}'\n"
        "os.environ['T14X_EXTRACT_ONLY'] = '1'\n"
        "print('T4A_ENV_OK TOOL_TIMEOUT=%s EXTRACT_ONLY=%s' % ("
        "os.environ['IDA_MCP_TOOL_TIMEOUT_SEC'], os.environ['T14X_EXTRACT_ONLY']))\n"
    )
    try:
        _, esc = mcp_call("py_eval", {"code": env_code}, timeout=60)
        ev["env_setup"] = esc
        env_text = json.dumps(esc, ensure_ascii=False)
        env_ok = "T4A_ENV_OK" in env_text and f"TOOL_TIMEOUT={ida_to}" in env_text \
            and "EXTRACT_ONLY=1" in env_text
    except Exception as e:
        esc = {"error": f"{type(e).__name__}: {e}"}
        ev["env_setup"] = esc
        env_ok = False
    if not env_ok:
        failures.append(f"py_eval 环境设置未确认: {json.dumps(esc, ensure_ascii=False)[:300]}")
    else:
        print(f"[t4a] 环境已设: IDA_MCP_TOOL_TIMEOUT_SEC={ida_to}, T14X_EXTRACT_ONLY=1")

    # ---- 4) py_exec_file: EXTRACT_ONLY 提取（长阻塞, 不取消）----
    t_run = time.time()
    resp_d, rsc = None, None
    try:
        resp_d, rsc = mcp_call(
            "py_exec_file", {"file_path": str(EXTRACT_SCRIPT)},
            timeout=ev["client_timeout_sec"])
    except Exception as e:
        failures.append(f"py_exec_file 调用失败: {type(e).__name__}: {e}")
        rsc = {"error": f"{type(e).__name__}: {e}"}
    wall = time.time() - t_run
    ev["extract_call"] = {
        "wall_sec": round(wall, 1),
        "stdout_len": len(str(rsc.get("stdout", ""))) if rsc else 0,
        "stdout_tail": str(rsc.get("stdout", ""))[-600:] if rsc else "",
        "isError": bool(resp_d.get("isError")) if resp_d else None,
        "error": rsc.get("error") if isinstance(rsc, dict) else None,
    }
    print(f"[t4a] 提取完成 wall={wall:.1f}s")

    # 4d) stdout 字段判定（验收硬标准: 读 stdout 字段, 非 result）
    stdout_text = str(rsc.get("stdout", "")) if isinstance(rsc, dict) else ""
    if STDOUT_MARKER not in stdout_text:
        msg = f"py_exec_file stdout 缺少 '{STDOUT_MARKER}'"
        if not stdout_channel_live:
            # 通道探针证死 → 降级为记录, 由 trace/产物判定兜底
            ev["stdout_channel"]["degraded_note"] = msg + "（通道证死, 降级记录）"
        else:
            failures.append(msg)

    # ---- 5) trace 尾行 + 产物刷新 + 计数校验 ----
    trace_text, trace_lines = read_trace_segment(trace_pre_size)
    ev["trace_new_segment"] = {
        "bytes": len(trace_text) if trace_text is not None else 0,
        "lines_tail": trace_lines[-12:],
        "line_count": len(trace_lines),
    }
    if trace_text is None or not trace_lines:
        failures.append(f"trace 无新增段 (offset={trace_pre_size}, 存在={TRACE_LOG.exists()})")
    elif strip_ts(trace_lines[-1]) != TRACE_TAIL_TOKEN:
        failures.append(f"trace 尾行 != '{TRACE_TAIL_TOKEN}': {trace_lines[-1]!r}")
    else:
        print(f"[t4a] trace 尾行 OK: {trace_lines[-1]}")

    counts = {}
    m = re.search(r"phases 1-4 complete: constraints=(\d+)", trace_text or "")
    if m:
        counts["trace_constraints"] = int(m.group(1))
    m = re.search(r"streaming raw_constraints\.rtti\.json total=(\d+)", trace_text or "")
    if m:
        counts["trace_total"] = int(m.group(1))

    artifacts_post = {}
    for p in ARTIFACTS:
        rel = str(p.relative_to(ROOT))
        pre = ev["artifacts_pre"].get(rel)
        post = artifact_stat(p)
        refreshed = (post is not None and pre is not None
                     and post["mtime"] > pre["mtime"] and post["size"] > 0)
        artifacts_post[rel] = {"post": post, "refreshed": refreshed}
        if not refreshed:
            failures.append(f"产物未刷新: {rel} (pre={pre}, post={post})")
    ev["artifacts_post"] = artifacts_post

    rtti = ARTIFACTS[0]
    if rtti.exists():
        head = rtti.open("rb").read(300).decode("utf-8", "replace")
        m = re.search(r'"total_constraints": (\d+)', head)
        if m:
            counts["rtti_header_total"] = int(m.group(1))
        else:
            failures.append(".rtti.json 头部无 total_constraints")
    else:
        failures.append(f"产物缺失: {rtti}")

    vals = set(counts.values())
    if not counts or len(vals) != 1 or next(iter(vals), 0) <= 0:
        failures.append(f"约束计数不一致或为零: {counts}")
    else:
        counts["match"] = True
        print(f"[t4a] 约束计数一致: {counts}")
    ev["constraint_counts"] = counts

    # ---- 结论 ----
    ev["failures"] = failures
    ev["wall_sec"] = round(time.time() - t_start, 1)
    ev["verdict"] = "PASS" if not failures else "FAIL"
    if ev["verdict"] == "PASS":
        write_evidence(EVIDENCE_DIR / "task-4a-extract-pass.json", ev)
        print(f"[t4a] PASS (wall={ev['wall_sec']}s, constraints={next(iter(vals), '?')})")
        return 0
    write_evidence(EVIDENCE_DIR / "task-4a-extract-fail.json", ev)
    print("[t4a] FAIL:", *failures, sep="\n  - ", file=sys.stderr)
    return 1


if __name__ == "__main__":
    sys.exit(main())
