#!/usr/bin/env python3
"""
batch_decompile_pass3.py
Runs inside IDA Pro Python context via py_exec_file.
Batch decompiles all sub_* functions, saves pseudocode to individual JSON files.

Output: tools/sub_decompiles/{ADDR}.json
  { address, name, pseudocode, callers, callees, quality, error }
  quality: 'complete' | 'partial' | 'failed'

Checkpoint: tools/sub_decompiles/_checkpoint.json — resumes from last saved position.
"""

import json, os, sys, time, traceback

# === Configuration ===
OUTPUT_DIR = r"D:\RA2YR_ReSource\tools\sub_decompiles"
CHECKPOINT_FILE = os.path.join(OUTPUT_DIR, "_checkpoint.json")
SUMMARY_FILE = os.path.join(OUTPUT_DIR, "_summary.json")
PROGRESS_INTERVAL = 100  # Report every N functions
SAVE_INTERVAL = 50       # Save checkpoint every N functions

# === IDA imports (may differ by version) ===
ida_loaded = False
try:
    import idaapi
    import ida_hexrays
    import ida_funcs
    import ida_xref
    import idautils
    import ida_segment
    ida_loaded = True
except ImportError as e:
    print(f"[Pass3] FATAL: Cannot import IDA modules: {e}")
    print("[Pass3] This script must run inside IDA Pro via py_exec_file.")
    sys.exit(1)

# === Statistics ===
stats = {"total": 0, "complete": 0, "partial": 0, "failed": 0, "processed": 0}
errors = []


def ensure_output_dir():
    """Create output directory if missing."""
    os.makedirs(OUTPUT_DIR, exist_ok=True)


def load_checkpoint():
    """Load checkpoint with set of already-processed addresses."""
    if os.path.exists(CHECKPOINT_FILE):
        try:
            with open(CHECKPOINT_FILE, 'r') as f:
                cp = json.load(f)
            processed = set(cp.get("processed", []))
            print(f"[Pass3] Checkpoint loaded: {len(processed)} already processed, resuming")
            return processed
        except Exception:
            print("[Pass3] Checkpoint corrupted, starting fresh")
    return set()


def save_checkpoint(processed_set):
    """Save checkpoint of processed addresses."""
    try:
        cp = {
            "processed": list(processed_set),
            "total": stats["total"],
            "complete": stats["complete"],
            "partial": stats["partial"],
            "failed": stats["failed"],
            "processed_count": stats["processed"],
            "timestamp": time.time()
        }
        with open(CHECKPOINT_FILE, 'w') as f:
            json.dump(cp, f)
    except Exception as e:
        print(f"[Pass3] WARNING: Failed to save checkpoint: {e}")


def get_callers_safe(ea, max_callers=25):
    """Get caller function addresses (code xrefs to this function)."""
    callers = []
    try:
        for xref in idautils.XrefsTo(ea):
            if xref.type in (ida_xref.fl_CN, ida_xref.fl_CF):
                caller_func = ida_funcs.get_func(xref.frm)
                if caller_func and caller_func.start_ea != ea:
                    callers.append("0x%X" % caller_func.start_ea)
                    if len(callers) >= max_callers:
                        break
    except Exception:
        pass
    return callers


def get_callees_safe(ea, max_callees=30):
    """Get callee function addresses (functions called from this function)."""
    callees_set = set()
    try:
        func = ida_funcs.get_func(ea)
        if func is None:
            return []
        for head in idautils.Heads(func.start_ea, func.end_ea):
            if idaapi.is_call_insn(head):
                for xref in idautils.XrefsFrom(head):
                    callee_func = ida_funcs.get_func(xref.to)
                    if callee_func and callee_func.start_ea != ea:
                        callees_set.add("0x%X" % callee_func.start_ea)
                        if len(callees_set) >= max_callees:
                            return sorted(callees_set)
    except Exception:
        pass
    return sorted(callees_set)


def decompile_one(ea, name):
    """
    Decompile a single function. Returns dict:
    { address, name, pseudocode, callers, callees, quality, error }
    """
    result = {
        "address": "0x%X" % ea,
        "name": name,
        "pseudocode": "",
        "callers": [],
        "callees": [],
        "quality": "failed",
        "error": None
    }

    try:
        # Get callers/callees first (independent of decompiler)
        result["callers"] = get_callers_safe(ea)
        result["callees"] = get_callees_safe(ea)

        # Attempt decompilation
        try:
            cfunc = ida_hexrays.decompile(ea)
            if cfunc is None:
                result["error"] = "decompile returned None"
                result["quality"] = "partial"
                return result

            sv = cfunc.get_pseudocode()
            if sv is None or len(sv) == 0:
                result["error"] = "empty pseudocode"
                result["quality"] = "partial"
                return result

            lines = []
            for citem in sv:
                try:
                    lines.append(citem.line)
                except Exception:
                    lines.append("// [line extraction error]")

            pseudocode = "\n".join(lines)
            result["pseudocode"] = pseudocode

            # Quality heuristic: > 2 non-empty lines = complete
            meaningful = [l for l in lines if l.strip() and not l.strip().startswith("//")]
            if len(meaningful) >= 2:
                result["quality"] = "complete"
            else:
                result["quality"] = "partial"

        except Exception as e:
            err_str = str(e)
            if "Decompilation failure" in err_str or "failed" in err_str.lower():
                result["error"] = "decompilation_failure"
                result["quality"] = "partial"
            else:
                result["error"] = err_str[:200]
                result["quality"] = "partial"

    except Exception as e:
        result["error"] = str(e)[:200]
        result["quality"] = "failed"

    return result


def get_sub_functions():
    """Get list of (ea, name) for all sub_* functions in IDA."""
    funcs = []
    for ea in idautils.Functions():
        name = ida_funcs.get_func_name(ea)
        if name.startswith("sub_"):
            funcs.append((ea, name))
    # Sort by address for deterministic processing
    funcs.sort(key=lambda x: x[0])
    return funcs


def main():
    global stats, errors

    print("=" * 60)
    print("[Pass3] Batch Decompile — sub_* functions")
    print("=" * 60)

    ensure_output_dir()

    # Initialize Hex-Rays
    if not ida_hexrays.init_hexrays_plugin():
        print("[Pass3] FATAL: Hex-Rays decompiler not available")
        return 1

    # Get all sub_* functions
    all_funcs = get_sub_functions()
    stats["total"] = len(all_funcs)
    print(f"[Pass3] Found {stats['total']} sub_* functions in IDA")

    if stats["total"] == 0:
        print("[Pass3] No sub_* functions to process. Done.")
        return 0

    # Load checkpoint for resume
    processed_addrs = load_checkpoint()
    
    # Filter out already-processed
    pending = [(ea, name) for ea, name in all_funcs if "0x%X" % ea not in processed_addrs]
    skipped_already = stats["total"] - len(pending)
    if skipped_already > 0:
        print(f"[Pass3] Skipping {skipped_already} already-processed functions")
        stats["processed"] = skipped_already
        # Count existing files for stats
        for ea, name in all_funcs:
            addr_hex = "0x%X" % ea
            if addr_hex in processed_addrs:
                fpath = os.path.join(OUTPUT_DIR, "%08X.json" % ea)
                if os.path.exists(fpath):
                    try:
                        with open(fpath, 'r') as f:
                            d = json.load(f)
                        q = d.get("quality", "partial")
                        if q == "complete":
                            stats["complete"] += 1
                        elif q == "partial":
                            stats["partial"] += 1
                        else:
                            stats["failed"] += 1
                    except Exception:
                        pass
    
    print(f"[Pass3] Pending to process: {len(pending)}")

    if len(pending) == 0:
        print("[Pass3] All functions already processed.")
        return 0

    start_time = time.time()
    last_save = time.time()

    for i, (ea, name) in enumerate(pending):
        try:
            result = decompile_one(ea, name)

            # Write individual JSON
            filename = "%08X.json" % ea
            filepath = os.path.join(OUTPUT_DIR, filename)
            with open(filepath, 'w') as f:
                json.dump(result, f, indent=2)

            # Track stats
            q = result["quality"]
            if q == "complete":
                stats["complete"] += 1
            elif q == "partial":
                stats["partial"] += 1
            else:
                stats["failed"] += 1
                errors.append((name, result.get("error", "unknown")))

            processed_addrs.add("0x%X" % ea)
            stats["processed"] += 1

        except Exception as e:
            stats["failed"] += 1
            errors.append((name, str(e)[:200]))
            processed_addrs.add("0x%X" % ea)
            stats["processed"] += 1

        # Progress reporting
        if stats["processed"] > 0 and stats["processed"] % PROGRESS_INTERVAL == 0:
            elapsed = time.time() - start_time
            rate = stats["processed"] / elapsed if elapsed > 0 else 0
            remaining = stats["total"] - stats["processed"]
            eta = remaining / rate if rate > 0 else 0
            pct = 100.0 * stats["processed"] / stats["total"]
            print(f"[Pass3] {stats['processed']}/{stats['total']} ({pct:.1f}%) | "
                  f"OK:{stats['complete']} partial:{stats['partial']} fail:{stats['failed']} | "
                  f"{rate:.1f} f/s | ETA: {eta/60:.1f} min")

        # Periodic checkpoint
        if time.time() - last_save > 30 or stats["processed"] % SAVE_INTERVAL == 0:
            save_checkpoint(processed_addrs)
            last_save = time.time()

    elapsed = time.time() - start_time

    # Final save
    save_checkpoint(processed_addrs)

    # === Summary ===
    summary = {
        "pass": 3,
        "total_sub_funcs": stats["total"],
        "processed": stats["processed"],
        "complete": stats["complete"],
        "partial": stats["partial"],
        "failed": stats["failed"],
        "complete_pct": round(100.0 * stats["complete"] / max(stats["total"], 1), 1),
        "quality_pct": round(100.0 * (stats["complete"] + stats["partial"]) / max(stats["total"], 1), 1),
        "elapsed_seconds": round(elapsed, 1),
        "rate_func_per_sec": round(stats["total"] / elapsed, 2) if elapsed > 0 else 0,
        "first_errors": [{"name": n, "error": e} for n, e in errors[:20]]
    }

    with open(SUMMARY_FILE, 'w') as f:
        json.dump(summary, f, indent=2)

    print("\n" + "=" * 60)
    print("[Pass3] COMPLETE")
    print(f"  Total sub_* functions: {stats['total']}")
    print(f"  Complete:  {stats['complete']} ({summary['complete_pct']}%)")
    print(f"  Partial:   {stats['partial']}")
    print(f"  Failed:    {stats['failed']}")
    print(f"  Quality rate: {summary['quality_pct']}% (complete + partial)")
    print(f"  Time: {elapsed:.1f}s ({summary['rate_func_per_sec']} func/s)")
    print(f"  Output: {OUTPUT_DIR}/")
    print(f"  Summary: {SUMMARY_FILE}")
    print("=" * 60)

    if errors:
        print(f"\n  Sample errors (first 10 of {len(errors)}):")
        for name, err in errors[:10]:
            print(f"    {name}: {err[:120]}")

    return 0


# === Execute ===
if __name__ == "__main__":
    ret = 1
    try:
        ret = main()
    except Exception as e:
        print(f"[Pass3] CRITICAL ERROR: {e}")
        traceback.print_exc()
        ret = 1
    sys.exit(ret)
