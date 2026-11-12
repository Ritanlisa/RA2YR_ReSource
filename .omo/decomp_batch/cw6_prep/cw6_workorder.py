#!/usr/bin/env python3
"""Build the CW6 residual work-order artifacts for the next round (read-only).

Outputs (all under .omo/agents/decomp_batch/):
  cw6_live_workorder.json   live 817 / G5-live 194 / C2440 210 / refail 110
  cw6_live_workorder.md     human-readable tables + full address lists
"""
import collections
import json
import os

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
PLAN = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_prep", "plan.json")
RES = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_prep", "cw6_result.json")
OUTJ = os.path.join(ROOT, ".omo", "agents", "decomp_batch", "cw6_live_workorder.json")
OUTM = os.path.join(ROOT, ".omo", "agents", "decomp_batch", "cw6_live_workorder.md")


def slim(x):
    return {
        "addr": x["addr"],
        "name": x.get("emitted") or x.get("name"),
        "unit": x.get("unit"),
        "layer": x.get("layer"),
        "code": x.get("code"),
        "gen": x.get("gen"),
        "symcat": x.get("symcat"),
        "form": x.get("_form"),
        "msg": (x.get("msg") or "")[:160],
        "line": x.get("line"),
        "file": (x.get("file") or "").replace("\\", "/").split("/")[-1],
    }


def table(rows, cols=("addr", "layer", "code", "name", "unit")):
    out = ["| " + " | ".join(cols) + " |",
           "|" + "|".join("---" for _ in cols) + "|"]
    for r in rows:
        out.append("| " + " | ".join(str(r.get(c) or "") for c in cols) + " |")
    return "\n".join(out)


def main():
    plan = json.load(open(PLAN, encoding="utf-8"))
    res = json.load(open(RES, encoding="utf-8"))
    live = [x for x in plan if x["_status"] == "live"]
    g5 = [x for x in live if x["gen"] == "G5_CW5"]
    c2440 = [x for x in plan if x["code"] == "C2440"]
    c2440_live = [x for x in c2440 if x["_status"] == "live"]
    refail = res["still_cf"]
    refail_rows = [{"addr": r["addr"], "layer": r["layer"], "code": r["code_new"],
                    "name": r["name"], "unit": r["unit"], "form": r["family"]}
                   for r in sorted(refail, key=lambda x: (x["layer"], x["addr"]))]

    data = {
        "live_total": len(live),
        "live_by_code": dict(collections.Counter(x["code"] for x in live).most_common()),
        "live_by_layer": dict(collections.Counter(x["layer"] for x in live)),
        "g5_live": len(g5),
        "g5_live_by_code": dict(collections.Counter(x["code"] for x in g5).most_common()),
        "c2440_total_cf": len(c2440),
        "c2440_live": len(c2440_live),
        "c2440_live_by_layer": dict(collections.Counter(x["layer"] for x in c2440_live)),
        "c2440_live_rows": [slim(x) for x in sorted(c2440_live, key=lambda r: r["addr"])],
        "g5_live_rows": [slim(x) for x in sorted(g5, key=lambda r: r["addr"])],
        "live_rows": [slim(x) for x in sorted(live, key=lambda r: (r["layer"], r["addr"]))],
        "refail_count": len(refail),
        "refail_by_code": res["still_cf_codes"],
        "refail_rows": refail_rows,
    }
    json.dump(data, open(OUTJ, "w", encoding="utf-8"), ensure_ascii=False, indent=1)

    L = []
    L.append("# CW6 残墙工单（下一轮输入，2026-11-12）\n")
    L.append("性质：**只读产出**。数据源 = `.omo/decomp_batch/cw6_prep/plan.json`（CW6 备弹四态划分）")
    L.append("+ `.omo/decomp_batch/cw6_prep/cw6_result.json`（CW6 收割实测）。机器可读版 = `cw6_live_workorder.json`。\n")
    L.append("## 0. 三份清单的关系\n")
    L.append("| 清单 | 件数 | 含义 | 下一步 |")
    L.append("|---|---:|---|---|")
    L.append("| G5 live（当前代码残墙） | **%d** | 末次编译就在 CW5 末期（当前生成器），非陈旧证据 | 新规则，按码分派 W1-W21 |" % len(g5))
    L.append("| C2440 全部 CF | **%d**（live %d） | 最大单一族；192 live 含 G3 陈旧证据，收割后可再降 | W1 赋值站点 harmonize |" % (len(c2440), len(c2440_live)))
    L.append("| CW6 收割后复败 | **%d** | 本轮 947 stale 重跑后仍 CF，且**首错码已换新**（旧族已消，新族暴露） | 与 live 合并去重后作为下一轮靶集 |" % len(refail))
    L.append("| live 全量 | **%d** | CW6 备弹 §3.1 的 live 桶（含 G0-G3 旧代际证据） | 优先 G5 子集 |" % len(live))
    L.append("")
    L.append("> 去重提示：复败 110 与 live 817 **无地址交集**（前者来自 stale 947，后者来自 live 划分），")
    L.append("> 但形态高度重叠（C2039/C2296/C2440/C2109/C2143/C2228/C2036/C2227 与 live 首错谱同族）。")
    L.append("> 下一轮建议靶集 = `g5_live(194) + refail(110) = 304`，再按 W 工单 ROI 排序。\n")

    L.append("## 1. G5 live（%d）按首错码\n" % len(g5))
    L.append("| 首错 | 件 |")
    L.append("|---|---:|")
    for k, v in data["g5_live_by_code"].items():
        L.append("| %s | %d |" % (k, v))
    L.append("")
    L.append("### 1.1 G5 live 全清单（%d）\n" % len(g5))
    L.append(table(data["g5_live_rows"], ("addr", "layer", "code", "form", "name", "unit")))
    L.append("")

    L.append("## 2. C2440（CF %d，live %d）\n" % (len(c2440), len(c2440_live)))
    L.append("层分布：%s\n" % json.dumps(data["c2440_live_by_layer"], ensure_ascii=False))
    L.append("### 2.1 C2440 live 全清单（%d）\n" % len(c2440_live))
    L.append(table(data["c2440_live_rows"], ("addr", "layer", "gen", "form", "name", "unit")))
    L.append("")

    L.append("## 3. CW6 收割后复败（%d）按新首错码\n" % len(refail))
    L.append("| 新首错 | 件 | 旧族（来源） |")
    L.append("|---|---:|---|")
    byform = collections.defaultdict(collections.Counter)
    for r in refail:
        byform[r["code_new"]][r["family"].split("|")[1]] += 1
    for k, v in res["still_cf_codes"].items():
        L.append("| %s | %d | %s |" % (k, v, "; ".join("%s×%d" % kv for kv in byform[k].most_common(3))))
    L.append("")
    L.append("### 3.1 复败全清单（%d）\n" % len(refail))
    L.append(table(refail_rows, ("addr", "layer", "code", "form", "name", "unit")))
    L.append("")

    L.append("## 4. live 全量按码（%d）\n" % len(live))
    L.append("| 首错 | 件 |")
    L.append("|---|---:|")
    for k, v in data["live_by_code"].items():
        L.append("| %s | %d |" % (k, v))
    L.append("")
    open(OUTM, "w", encoding="utf-8").write("\n".join(L))
    print("wrote", OUTJ, OUTM)
    print("live", len(live), "g5", len(g5), "c2440", len(c2440), "c2440_live", len(c2440_live), "refail", len(refail))


if __name__ == "__main__":
    main()
