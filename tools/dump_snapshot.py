"""dump 快照/恢复独立工具（speed 轮路径 2b）。

痛点：minclass_solver.py 全量跑会覆盖 anchors/minclass_*.json dump 产物；
heuristic 跑完想拿回 strict dump 原要再跑 30-60min 全量。本工具两个来源免求解恢复：

  1. 结果缓存 .omo/solve_cache/{strict|heur}/<key16>/ 的最新完整条目（与求解器
     --restore-dumps 同一 fail-closed 逻辑：key.json manifest 登记产物齐全才恢复）
  2. .omo/dump_snap/<ts>/ 预跑快照（求解器 --snapshot-dumps 或本工具 snapshot 产出）

用法：
  python tools/dump_snapshot.py list                     # 列两个来源的可用条目
  python tools/dump_snapshot.py snapshot                 # 快照 anchors/ 现有 dump
  python tools/dump_snapshot.py restore-cache [--mode strict|heur]
  python tools/dump_snapshot.py restore-snap <dir>       # 从指定快照目录恢复

注意：产物清单以 tools/csp_export/minclass_solver.py 的 _CACHE_ARTIFACTS 为权威，
此处为避免 import 求解器（其模块级即加载 200MB 输入）而复制清单——两处需同步。
"""
import argparse
import json
import os
import shutil
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, ".."))
CACHE_ROOT = os.path.join(ROOT, ".omo", "solve_cache")
SNAP_ROOT = os.path.join(ROOT, ".omo", "dump_snap")

# == minclass_solver._CACHE_ARTIFACTS（同步点）==
ARTIFACTS = [
    "minclass_result.json",
    "minclass_domains.json",
    "minclass_clusters.json",
    "minclass_assignments.json",
    "minclass_conflicts.json",
    "minclass_conflict_resolution.json",
    "c10_contradicted_entities.json",
    "derived_layouts.json",
]


def _copy_into(src_dir, names, label):
    copied = []
    for name in names:
        src = os.path.join(src_dir, name)
        if os.path.exists(src):
            shutil.copyfile(src, os.path.join(ROOT, "anchors", name))
            copied.append(name)
    print("[dump_snapshot] %s: %d artifacts -> anchors/ (%s)"
          % (label, len(copied), ", ".join(copied)))
    return copied


def snapshot():
    snap_dir = os.path.join(SNAP_ROOT, time.strftime("%Y%m%d_%H%M%S"))
    os.makedirs(snap_dir, exist_ok=True)
    copied = []
    for name in ARTIFACTS:
        src = os.path.join(ROOT, "anchors", name)
        if os.path.exists(src):
            shutil.copyfile(src, os.path.join(snap_dir, name))
            copied.append(name)
    if copied:
        print("[dump_snapshot] snapshot: %d artifacts -> %s" % (len(copied), snap_dir))
    else:
        print("[dump_snapshot] nothing to snapshot (no dump artifacts in anchors/)")
    return 0


def cache_entries(mode):
    croot = os.path.join(CACHE_ROOT, mode)
    if not os.path.isdir(croot):
        return []
    entries = []
    for d in os.listdir(croot):
        kp = os.path.join(croot, d, "key.json")
        if os.path.exists(kp):
            entries.append((os.path.getmtime(kp), os.path.join(croot, d)))
    entries.sort(reverse=True)
    return entries


def _intact(keydir):
    if not os.path.exists(os.path.join(keydir, "minclass_result.json")):
        return False, ["minclass_result.json"]
    try:
        with open(os.path.join(keydir, "key.json"), encoding="utf-8") as fh:
            manifest = json.load(fh).get("artifacts") or []
    except (OSError, ValueError):
        return False, ["key.json"]
    missing = [nm for nm in manifest if not os.path.exists(os.path.join(keydir, nm))]
    return (not missing), missing


def list_entries():
    for mode in ("strict", "heur"):
        ents = cache_entries(mode)
        print("cache/%s: %d entries" % (mode, len(ents)))
        for mt, kd in ents[:3]:
            ok, miss = _intact(kd)
            print("  %s  %s  age=%.0fs  %s"
                  % (time.strftime("%Y-%m-%d %H:%M:%S", time.localtime(mt)),
                     os.path.basename(kd), time.time() - mt,
                     "intact" if ok else "BROKEN(missing %s)" % ",".join(miss)))
    if os.path.isdir(SNAP_ROOT):
        snaps = sorted(os.listdir(SNAP_ROOT), reverse=True)
        print("dump_snap: %d snapshots" % len(snaps))
        for s in snaps[:3]:
            print("  %s" % os.path.join(SNAP_ROOT, s))
    return 0


def restore_cache(mode):
    ents = cache_entries(mode)
    if not ents:
        print("[dump_snapshot] no cache entries under %s" % os.path.join(CACHE_ROOT, mode))
        return 1
    for _mt, kd in ents:
        ok, miss = _intact(kd)
        if not ok:
            print("[dump_snapshot] skip %s (missing %s)" % (kd, ",".join(miss)))
            continue
        _copy_into(kd, ARTIFACTS, "restore-cache/%s" % mode)
        return 0
    print("[dump_snapshot] FAILED: no intact entry under cache/%s" % mode)
    return 1


def restore_snap(dirpath):
    d = dirpath if os.path.isabs(dirpath) else os.path.join(ROOT, dirpath)
    if not os.path.isdir(d):
        print("[dump_snapshot] no such snapshot dir: %s" % d)
        return 1
    _copy_into(d, ARTIFACTS, "restore-snap")
    return 0


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    sub.add_parser("list", help="list cache/snapshot entries")
    sub.add_parser("snapshot", help="snapshot anchors/ dump artifacts to .omo/dump_snap/<ts>/")
    rc = sub.add_parser("restore-cache", help="restore from newest intact solve_cache entry")
    rc.add_argument("--mode", default="strict", choices=("strict", "heur"))
    rs = sub.add_parser("restore-snap", help="restore from a dump_snap directory")
    rs.add_argument("dir", help="snapshot dir (absolute or relative to repo root)")
    a = ap.parse_args()
    if a.cmd == "list":
        return list_entries()
    if a.cmd == "snapshot":
        return snapshot()
    if a.cmd == "restore-cache":
        return restore_cache(a.mode)
    if a.cmd == "restore-snap":
        return restore_snap(a.dir)
    return 2


if __name__ == "__main__":
    sys.exit(main())
