"""
T14: IDA Type Application Script — ida_apply_types.py

Reads suggested_types.json and applies inferred types to IDA Pro.

Modes:
  Inside IDA Pro:   uses idc.SetType() + idc.SetCmt()  (IDAPython)
  Outside IDA:      uses ida-pro-mcp set_type + set_comments  (MCP)

Confidence tiers:
  ANCHORED + DIRECT_PROP → SetType  (strong confidence)
  CHAIN_PROP + INFERRED  → SetCmt   (lower confidence, comments only)

Usage:
  # Inside IDA Pro (IDAPython):
  RunScript("ida_apply_types.py")           # apply changes
  RunScript("ida_apply_types.py --dry-run")  # preview only

  # Outside IDA (Python with MCP connection):
  python ida_apply_types.py                  # apply changes via MCP
  python ida_apply_types.py --dry-run        # preview only
  python ida_apply_types.py --output report.md  # write report
"""

import json
import os
import re
import sys
from collections import defaultdict

# ── paths ──
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
SUGGESTED_PATH = os.path.join(SCRIPT_DIR, "suggested_types.json")
PROJECT_ROOT = SCRIPT_DIR

# ── regex for parsing suggested keys ──
_RE_FUNC_DOT = re.compile(
    r"^(0x[0-9a-fA-F]{8})\.(this|ret|arg\d+|esi|edi|e[abcd]x|[abcd][lhx]|[es]p|[abcd]x)$"
)
_RE_MEMBER = re.compile(r"^(.+?)\.this\.member\((0x[0-9a-fA-F]+)\)$")
_RE_GLOBAL_ADDR = re.compile(r"^0x[0-9a-fA-F]{8}(?:_RET)?$")


def is_ida_environment() -> bool:
    """Check if running inside IDA Pro."""
    try:
        import idc  # noqa: F401
        return True
    except ImportError:
        return False


def _parse_key(key: str) -> dict:
    """Parse a suggested_types key into actionable components."""
    result = {"raw": key, "kind": "unknown"}

    # Register-scoped: 0xADDR.regName
    m = _RE_FUNC_DOT.match(key)
    if m:
        func_addr = m.group(1)
        tag = m.group(2)
        result.update({
            "kind": "register",
            "func_addr": func_addr,
            "register": tag,
            "func_addr_int": int(func_addr, 16),
            "is_this": tag == "this",
            "is_return": tag == "ret",
        })
        return result

    # Member variable: ClassName::Method.this.member(0xOFF)
    m = _RE_MEMBER.match(key)
    if m:
        result.update({
            "kind": "member",
            "full_name": m.group(1),
            "offset": int(m.group(2), 16),
        })
        return result

    # Global variable: 0xADDR or 0xADDR_RET
    if _RE_GLOBAL_ADDR.match(key):
        result["kind"] = "global"
        result["addr"] = key.rstrip("_RET")
        result["addr_int"] = int(key.rstrip("_RET"), 16)
        return result

    return result


# ── IDAPython mode ──────────────────────────────────────────────────────────

class IdaApplier:
    """Apply types using IDAPython (idc module)."""

    def __init__(self, dry_run: bool = False):
        self.dry_run = dry_run
        self.stats = {
            "set_type_attempted": 0,
            "set_type_succeeded": 0,
            "set_cmt_attempted": 0,
            "set_cmt_succeeded": 0,
            "skipped": 0,
            "errors": 0,
        }
        self.changes: list[dict] = []

    def apply(self, suggestions: dict) -> None:
        import idc
        import idaapi
        import ida_funcs
        import ida_typeinf

        for key, val in suggestions.items():
            parsed = _parse_key(key)
            conf = val["confidence"]
            typ = val["type"]
            evidence = val.get("evidence", [])

            if conf in ("ANCHORED", "DIRECT_PROP"):
                self._apply_type(parsed, typ, evidence, key)
            else:
                self._apply_comment(parsed, typ, evidence, key, conf)

    def _apply_type(self, parsed: dict, typ: str, evidence: list[str], key: str) -> None:
        import idc
        import idaapi
        import ida_funcs
        import ida_typeinf
        import ida_name

        self.stats["set_type_attempted"] += 1
        applied = False

        if parsed["kind"] == "register":
            addr = parsed["func_addr_int"]
            func = ida_funcs.get_func(addr)
            if func is None:
                self._log("skip", key, f"no function at {parsed['func_addr']}")
                self.stats["skipped"] += 1
                return

            func_name = ida_funcs.get_func_name(addr) or f"sub_{parsed['func_addr']}"

            if parsed["is_this"]:
                # Set thiscall function type with this pointer type
                type_str = f"{typ} __thiscall {func_name}(void);"
            elif parsed["is_return"]:
                type_str = f"{typ} __cdecl {func_name}(void);"
            else:
                # Set comment on the register usage
                self._apply_comment(parsed, typ, evidence, key, "DIRECT_PROP")
                self.stats["set_type_succeeded"] += 1
                return

            if not self.dry_run:
                try:
                    ok = idc.SetType(addr, type_str)
                    if ok:
                        applied = True
                        self.stats["set_type_succeeded"] += 1
                    else:
                        self._log("warn", key, f"SetType failed for {type_str}")
                        self.stats["errors"] += 1
                except Exception as e:
                    self._log("error", key, str(e))
                    self.stats["errors"] += 1
            else:
                applied = True
                self.stats["set_type_succeeded"] += 1

        elif parsed["kind"] == "member":
            # Set struct member type — extract class name
            parts = parsed.get("full_name", "").split("::")
            if parts:
                class_name = parts[0]
                offset = parsed["offset"]
                if not self.dry_run:
                    try:
                        # Try to set type on the struct field
                        # idc.SetType with struct member ID
                        sid = idc.get_struc_id(class_name)
                        if sid != idc.BADADDR:
                            mid = idc.get_member_id(sid, offset)
                            if mid != idc.BADADDR:
                                idc.SetType(mid, f"{typ};")
                                applied = True
                                self.stats["set_type_succeeded"] += 1
                        if not applied:
                            self._log("warn", key, f"struct {class_name} not found")
                            self.stats["skipped"] += 1
                    except Exception as e:
                        self._log("error", key, str(e))
                        self.stats["errors"] += 1
                else:
                    applied = True
                    self.stats["set_type_succeeded"] += 1

        elif parsed["kind"] == "global":
            addr = parsed["addr_int"]
            if not self.dry_run:
                try:
                    ok = idc.SetType(addr, f"{typ} {parsed['addr']};")
                    if ok:
                        applied = True
                        self.stats["set_type_succeeded"] += 1
                    else:
                        self._log("warn", key, f"SetType failed for global")
                        self.stats["errors"] += 1
                except Exception as e:
                    self._log("error", key, str(e))
                    self.stats["errors"] += 1
            else:
                applied = True
                self.stats["set_type_succeeded"] += 1

        if applied:
            self._log("set_type" if not self.dry_run else "dry-run", key, typ)

    def _apply_comment(self, parsed: dict, typ: str, evidence: list[str],
                       key: str, conf: str) -> None:
        import idc

        self.stats["set_cmt_attempted"] += 1
        addr = None

        if parsed["kind"] == "register":
            addr = parsed["func_addr_int"]
        elif parsed["kind"] == "member":
            # Use the struct member address
            full_name = parsed.get("full_name", "")
            parts = full_name.split("::")
            if parts:
                class_name = parts[0]
                sid = idc.get_struc_id(class_name)
                if sid != idc.BADADDR:
                    mid = idc.get_member_id(sid, parsed["offset"])
                    if mid != idc.BADADDR:
                        addr = mid
        elif parsed["kind"] == "global":
            addr = parsed["addr_int"]

        if addr is None:
            self.stats["skipped"] += 1
            return

        # Build comment
        ev_str = "; ".join(evidence[:2]) if evidence else ""
        comment = f"[{conf}] {typ}"
        if ev_str:
            comment += f" | {ev_str}"

        if not self.dry_run:
            try:
                idc.SetCmt(addr, comment, True)  # True = repeatable comment
                self.stats["set_cmt_succeeded"] += 1
            except Exception as e:
                self._log("error", key, str(e))
                self.stats["errors"] += 1
        else:
            self.stats["set_cmt_succeeded"] += 1

        self._log("set_cmt" if not self.dry_run else "dry-run-cmt", key, comment)

    def _log(self, action: str, key: str, detail: str) -> None:
        self.changes.append({
            "action": action,
            "key": key,
            "detail": detail,
        })


# ── MCP mode (outside IDA) ──────────────────────────────────────────────────

class McpApplier:
    """Apply types using ida-pro-mcp tools (runs outside IDA)."""

    def __init__(self, dry_run: bool = False, verbose: bool = True):
        self.dry_run = dry_run
        self.verbose = verbose
        self.stats = {
            "set_type_attempted": 0,
            "set_type_succeeded": 0,
            "set_cmt_attempted": 0,
            "set_cmt_succeeded": 0,
            "skipped": 0,
            "errors": 0,
        }
        self.changes: list[dict] = []

    def apply(self, suggestions: dict, apply_func=None, apply_cmt_func=None) -> None:
        """Apply suggestions. apply_func and apply_cmt_func are callbacks
        for sending MCP commands (set_type, set_comments).

        If not provided, prints what would be executed (dry-run mode).
        """
        type_batch: list[dict] = []
        cmt_batch: list[dict] = []

        for key, val in suggestions.items():
            parsed = _parse_key(key)
            conf = val["confidence"]
            typ = val["type"]
            evidence = val.get("evidence", [])

            if conf in ("ANCHORED", "DIRECT_PROP"):
                item = self._build_type_item(parsed, typ, evidence, key)
                if item:
                    type_batch.append(item)
                    self.stats["set_type_attempted"] += 1
            else:
                item = self._build_cmt_item(parsed, typ, evidence, key, conf)
                if item:
                    cmt_batch.append(item)
                    self.stats["set_cmt_attempted"] += 1

        if self.verbose:
            print(f"Type operations: {len(type_batch)}", file=sys.stderr)
            print(f"Comment operations: {len(cmt_batch)}", file=sys.stderr)

        if apply_func and type_batch:
            if not self.dry_run:
                try:
                    apply_func(type_batch)
                    self.stats["set_type_succeeded"] = len(type_batch)
                except Exception as e:
                    print(f"Error applying types: {e}", file=sys.stderr)
                    self.stats["errors"] += len(type_batch)
            else:
                self._log_batch("DRY_RUN_TYPE", type_batch)
                self.stats["set_type_succeeded"] = len(type_batch)
        elif type_batch:
            # No apply_func — log as dry run
            self._log_batch("DRY_RUN_TYPE", type_batch)
            self.stats["set_type_succeeded"] = len(type_batch)

        if apply_cmt_func and cmt_batch:
            if not self.dry_run:
                try:
                    apply_cmt_func(cmt_batch)
                    self.stats["set_cmt_succeeded"] = len(cmt_batch)
                except Exception as e:
                    print(f"Error applying comments: {e}", file=sys.stderr)
                    self.stats["errors"] += len(cmt_batch)
            else:
                self._log_batch("DRY_RUN_CMT", cmt_batch)
                self.stats["set_cmt_succeeded"] = len(cmt_batch)
        elif cmt_batch:
            # No apply_cmt_func — log as dry run
            self._log_batch("DRY_RUN_CMT", cmt_batch)
            self.stats["set_cmt_succeeded"] = len(cmt_batch)

    def _build_type_item(self, parsed: dict, typ: str, evidence: list[str],
                         key: str) -> dict | None:
        if parsed["kind"] == "register":
            return {
                "addr": parsed["func_addr"],
                "ty": typ,
                "kind": "func",
                "name": parsed.get("register", ""),
                "evidence": evidence,
            }
        elif parsed["kind"] == "member":
            return {
                "addr": parsed.get("full_name", key),
                "ty": typ,
                "kind": "local",
                "name": f"member_{parsed['offset']:#x}",
                "evidence": evidence,
            }
        elif parsed["kind"] == "global":
            return {
                "addr": parsed["addr"],
                "ty": typ,
                "kind": "global",
                "name": parsed["addr"],
                "evidence": evidence,
            }
        self.stats["skipped"] += 1
        return None

    def _build_cmt_item(self, parsed: dict, typ: str, evidence: list[str],
                        key: str, conf: str) -> dict | None:
        ev_str = "; ".join(evidence[:2]) if evidence else ""
        comment = f"[{conf}] {typ}"
        if ev_str:
            comment += f" | {ev_str}"

        if parsed["kind"] == "register":
            return {"addr": parsed["func_addr"], "comment": comment}
        elif parsed["kind"] == "member":
            return {"addr": parsed.get("full_name", key), "comment": comment}
        elif parsed["kind"] == "global":
            return {"addr": parsed["addr"], "comment": comment}

        self.stats["skipped"] += 1
        return None

    def _log_batch(self, action: str, batch: list[dict]) -> None:
        for item in batch:
            self.changes.append({
                "action": action,
                "addr": item.get("addr", ""),
                "detail": item.get("ty", item.get("comment", "")),
            })
            if self.verbose:
                print(f"  {action}: {item.get('addr', '?')} -> {item.get('ty', item.get('comment', '?'))}")


# ── main ────────────────────────────────────────────────────────────────────

def main() -> None:
    import argparse

    parser = argparse.ArgumentParser(description="Apply type suggestions to IDA Pro")
    parser.add_argument("--dry-run", action="store_true",
                        help="Preview changes without applying")
    parser.add_argument("--input", default=SUGGESTED_PATH,
                        help="Path to suggested_types.json")
    parser.add_argument("--output", default=None,
                        help="Path to write report (default: stdout)")
    parser.add_argument("--mode", choices=["ida", "mcp", "auto"], default="auto",
                        help="Application mode (default: auto-detect)")
    args = parser.parse_args()

    # Load suggestions
    input_path = os.path.normpath(args.input)
    if not os.path.exists(input_path):
        print(f"Error: {input_path} not found", file=sys.stderr)
        print("Run tools/type_infer/generate_suggested.py first", file=sys.stderr)
        sys.exit(1)

    with open(input_path, "r", encoding="utf-8") as f:
        data = json.load(f)

    suggestions = data.get("suggestions", {})
    if not suggestions:
        print("No suggestions found in input file", file=sys.stderr)
        sys.exit(0)

    summary = data.get("_summary", {})
    print(f"Loaded {summary.get('total_suggestions', len(suggestions))} suggestions",
          file=sys.stderr)
    print(f"  confidence: {summary.get('confidence_distribution', {})}", file=sys.stderr)

    # Determine mode
    mode = args.mode
    if mode == "auto":
        mode = "ida" if is_ida_environment() else "mcp"

    if mode == "ida":
        if not is_ida_environment():
            print("Error: IDA environment not detected. Use --mode mcp.", file=sys.stderr)
            sys.exit(1)
        applier = IdaApplier(dry_run=args.dry_run)
        applier.apply(suggestions)
    else:
        applier = McpApplier(dry_run=args.dry_run, verbose=True)
        applier.apply(suggestions)

    # Report
    stats = applier.stats
    changes = applier.changes

    report_lines = []
    report_lines.append("# IDA Type Application Report\n")
    report_lines.append(f"**Mode**: {mode}  |  **Dry-run**: {args.dry_run}\n")
    report_lines.append(f"**Input**: {os.path.basename(input_path)}\n\n")
    report_lines.append("## Statistics\n\n")
    report_lines.append(f"| Operation | Count |\n")
    report_lines.append(f"|---|---|\n")
    report_lines.append(f"| SetType attempted | {stats['set_type_attempted']} |\n")
    report_lines.append(f"| SetType succeeded | {stats['set_type_succeeded']} |\n")
    report_lines.append(f"| SetCmt attempted  | {stats['set_cmt_attempted']} |\n")
    report_lines.append(f"| SetCmt succeeded  | {stats['set_cmt_succeeded']} |\n")
    report_lines.append(f"| Skipped           | {stats['skipped']} |\n")
    report_lines.append(f"| Errors            | {stats['errors']} |\n")
    report_lines.append(f"\n")

    if changes:
        report_lines.append("## Changes\n\n")
        for c in changes[:200]:  # limit to 200 entries
            report_lines.append(f"- `{c['action']}`: {c.get('key', c.get('addr', '?'))} → {c['detail']}\n")
        if len(changes) > 200:
            report_lines.append(f"\n... and {len(changes) - 200} more\n")

    report = "".join(report_lines)

    if args.output:
        with open(args.output, "w", encoding="utf-8") as f:
            f.write(report)
        print(f"Report written to {args.output}", file=sys.stderr)
    else:
        print(report)

    # Always print summary to stderr
    print(f"\nSummary: {stats['set_type_succeeded']} types, "
          f"{stats['set_cmt_succeeded']} comments, "
          f"{stats['errors']} errors",
          file=sys.stderr)


if __name__ == "__main__":
    main()
