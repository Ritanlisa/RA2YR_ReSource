#!/usr/bin/env python
"""Restore original clean flag semantics in injectFunctionTest/functions.json.

The hpp/stub agent corrupted the flags: it set `completed=true` for ~19,129
functions (treating completed as "stub symbol defined") and added a new
`translated` flag (502 true) to hold the real "actually translated" meaning.

This restores the original design (user-confirmed):
  - completed = actually translated  ->  completed := translated
  - translated key REMOVED (its meaning folds back into completed)
  - done = passed shadow comparison  ->  UNCHANGED (no `done` key currently exists)

SAFETY: active REVERSE Inject/Replace hook targets must stay completed=true,
or gen_reverse_hooks.py (line 360-363) emits a "NOT completed" build error.
The only completed-gated markers are the 2 Inject markers in src/render/surface.cpp:
  0x7baf90 (XSurface::PutPixel), 0x7baf10 (XSurface::GetPixelAtCoords).
Both are already in the translated=true set, so the swap keeps them completed=true.
They are also force-pinned below as belt-and-suspenders / documentation.

Surgical: only hook.completed / hook.translated change. All other fields
(address, name, call.*, and any other hook keys such as `done`) are preserved
exactly. Serializer reproduces the original 2-space-indent format byte-for-byte
(verified) so the diff contains ONLY the intended flag changes.
"""
import json
import os
import shutil
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
JSON_PATH = os.path.normpath(os.path.join(HERE, "..", "injectFunctionTest", "functions.json"))
BAK_PATH = JSON_PATH + ".bak"

# Active REVERSE Inject/Replace targets (from grep of src/ for mode "Inject"/"Replace").
# These MUST remain completed=true to satisfy the gen_reverse_hooks.py completed gate.
REVERSE_HOOK_SAFETY = {"0x7baf90", "0x7baf10"}


def main():
    with open(JSON_PATH, "r", encoding="utf-8", newline="") as f:
        orig = f.read()
    d = json.loads(orig)

    # Backup the (corrupt) current state for rollback BEFORE writing.
    if not os.path.exists(BAK_PATH):
        shutil.copyfile(JSON_PATH, BAK_PATH)
        print(f"backup written: {BAK_PATH}")
    else:
        print(f"backup already exists (preserving original corrupt state): {BAK_PATH}")

    fns = d["functions"]
    before_completed = sum(1 for x in fns if x.get("hook", {}).get("completed"))
    before_translated = sum(1 for x in fns if x.get("hook", {}).get("translated"))
    before_done = sum(1 for x in fns if x.get("hook", {}).get("done"))

    safety_applied = []
    for fn in fns:
        h = fn.get("hook")
        if h is None:
            continue
        translated = bool(h.get("translated", False))
        addr = fn["address"].lower()
        new_completed = translated
        if addr in REVERSE_HOOK_SAFETY and not new_completed:
            new_completed = True
            safety_applied.append((addr, fn.get("name")))
        # Rebuild hook preserving key order: completed first, then any
        # non-completed/non-translated keys (e.g. future `done`). Drop `translated`.
        new_hook = {"completed": new_completed}
        for k, v in h.items():
            if k in ("completed", "translated"):
                continue
            new_hook[k] = v
        fn["hook"] = new_hook

    after_completed = sum(1 for x in fns if x.get("hook", {}).get("completed"))
    after_translated_key = sum(1 for x in fns if "translated" in x.get("hook", {}))
    after_done = sum(1 for x in fns if x.get("hook", {}).get("done"))

    out = json.dumps(d, indent=2, ensure_ascii=False)
    with open(JSON_PATH, "w", encoding="utf-8", newline="") as f:
        f.write(out)
        if orig.endswith("\n"):
            f.write("\n")

    print(f"BEFORE: completed={before_completed} translated={before_translated} done={before_done}")
    print(f"AFTER:  completed={after_completed} translated_key_present={after_translated_key} done={after_done}")
    print(f"safety force-keeps applied (were translated=false): {safety_applied or 'none (both Inject targets already translated=true)'}")

    # Hard invariants.
    assert after_translated_key == 0, "translated key must be fully removed"
    assert after_completed == before_translated, "completed must equal prior translated count (no extra exceptions needed)"
    assert after_done == before_done == 0, "done must remain unchanged at 0"
    print("OK: invariants satisfied")


if __name__ == "__main__":
    main()
