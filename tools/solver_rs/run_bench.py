#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""Rust 内核 vs Python 参照：同数据集对拍 + 计时对比。

用法：python run_bench.py [repo_root] [--runs N] [--skip-prop]
产物：stdout 汇总表 + .omo/agents/speed/bench_raw.json（供 rust_report.md 引用）
"""

import io
import json
import os
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
EXE = os.path.join(HERE, "target", "release", "solver_rs.exe")
N_RUNS = 3

argv = sys.argv[1:]
if "--runs" in argv:
    N_RUNS = int(argv[argv.index("--runs") + 1])
SKIP_PROP = "--skip-prop" in argv

rust_runs = []
py_runs = []
rust_json = py_json = None
for i in range(N_RUNS):
    t0 = time.perf_counter()
    out = subprocess.run(
        [EXE, ROOT] + ([] if SKIP_PROP else ["--prop"]) + ["--json"],
        capture_output=True, text=True, check=True)
    wall = time.perf_counter() - t0
    rust_runs.append(wall)
    rust_json = json.loads(out.stdout)

    t0 = time.perf_counter()
    out_json_path = os.path.join(ROOT, ".omo", "py_out.json")
    subprocess.run(
        [sys.executable, os.path.join(HERE, "bench_py", "ref_kernel.py"), ROOT,
         "--out", out_json_path] + ([] if SKIP_PROP else ["--prop"]),
        capture_output=True, text=True, check=True)
    wall = time.perf_counter() - t0
    py_runs.append(wall)
    with io.open(out_json_path, encoding="utf-8") as fh:
        py_json = json.load(fh)

# ---- 对拍 ----
R, P = rust_json["result"], py_json["result"]
mismatches = []
for k in ("n_edges", "n_ents", "n_ents_obs", "c1_evidence", "c4_exact",
          "unions", "exact_rejects", "merge_rejects", "n_clusters",
          "n_constrained", "n_conflicted", "n_free", "k_greedy",
          "lower_bound", "forced_classes", "pinned_classes",
          "dom_popcount_sum"):
    if R[k] != P[k]:
        mismatches.append(f"{k}: rust={R[k]} python={P[k]}")
if not SKIP_PROP and rust_json["prop"]["checksum"] != py_json["prop"]["checksum"]:
    mismatches.append(f"prop.checksum: rust={rust_json['prop']['checksum']} python={py_json['prop']['checksum']}")

RT, PT = rust_json["timings_us"], py_json["timings_us"]

def st(ms):
    return f"{min(ms):.3f}/{sum(ms)/len(ms):.3f}/{max(ms):.3f}"

rust_total = [sum(RT.values()) / 1e6]  # 各阶段和（不含 prop）
py_total = [sum(PT.values()) / 1e6]

print("== 对拍（Rust vs Python 参照，同数据同算法）==")
print(("PASS：全部指标一致" if not mismatches else "FAIL：") +
      "  " + "; ".join(mismatches))
print()
print("== 阶段计时（min/mean/max 秒，N=%d）==" % N_RUNS)
rows = [
    ("universe", RT.get("universe"), PT.get("universe")),
    ("load(124MB JSON)", RT.get("load"), PT.get("load")),
    ("collect(intern+obs)", RT.get("collect"), PT.get("collect")),
    ("c4_exact", RT.get("c4_exact"), PT.get("c4_exact")),
    ("equality(UF+guards)", RT.get("equality"), PT.get("equality")),
    ("clusters", RT.get("clusters"), PT.get("clusters")),
    ("solve(domains+greedy)", RT.get("solve"), PT.get("solve")),
]
print(f"{'stage':<24}{'rust(s)':<22}{'python(s)':<22}{'speedup':>8}")
for name, r, p in rows:
    print(f"{name:<24}{r/1e6:<22.3f}{p/1e6:<22.3f}{p/max(r,1):>7.1f}x")
print(f"{'TOTAL(kernel)':<24}{sum(v for k,v in RT.items() if not k.startswith('prop'))/1e6:<22.3f}{sum(v for k,v in PT.items() if not k.startswith('prop'))/1e6:<22.3f}{sum(v for k,v in PT.items() if not k.startswith('prop'))/max(sum(v for k,v in RT.items() if not k.startswith('prop')),1):>7.1f}x")

if not SKIP_PROP:
    rp = rust_json["prop"]; pp = py_json["prop"]
    ru = rp["micros"] / 1e6
    pu = pp["micros"] / 1e6
    print()
    print("== 传播吞吐微基准（60 族 × 43,502 簇 × 每实体；稀疏约束模型）==")
    print(f"  rust  : propagate {rp['and_ops']:,} ops in {ru:.3f}s (gen {rp['gen_micros']/1e6:.3f}s)")
    print(f"  python: propagate {pp['and_ops']:,} ops in {pu:.3f}s (gen {pp['gen_micros']/1e6:.3f}s)")
    if ru > 0:
        print(f"  传播循环 speedup = {pu/ru:.1f}x   checksum rust={rp['checksum']} py={pp['checksum']}")

# 落盘原始数据
os.makedirs(os.path.join(ROOT, ".omo", "agents", "speed"), exist_ok=True)
with io.open(os.path.join(ROOT, ".omo", "agents", "speed", "bench_raw.json"), "w", encoding="utf-8") as fh:
    json.dump({
        "rust": {"timings_us": RT, "prop": rust_json["prop"], "result": R,
                 "wall_runs_s": rust_runs},
        "python": {"timings_us": PT, "prop": py_json["prop"], "result": P,
                   "wall_runs_s": py_runs},
        "mismatches": mismatches,
        "runs": N_RUNS,
    }, fh, ensure_ascii=False, indent=1)
print()
print("[saved] .omo/agents/speed/bench_raw.json")
