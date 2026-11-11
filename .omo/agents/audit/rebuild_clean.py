#!/usr/bin/env python3
"""Rebuild the 'HEAD + audit-remediation edits only' versions of the tool
files into .omo/agents/audit/rebuilt/ (leaving the working tree untouched).

The worktree also carries a concurrent session's uncommitted CW2 changes in
passes.py / decompile.py / hpp_pilot.py; those are intentionally EXCLUDED
from this reconstruction so the remediation commit contains only the audit
fixes.  The worktree copies are left as-is (their WIP preserved).
"""
import os
import subprocess
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
DST = os.path.join(ROOT, ".omo", "agents", "audit", "rebuilt")
os.makedirs(DST, exist_ok=True)


def head(path):
    return subprocess.check_output(
        ["git", "show", "HEAD:" + path], cwd=ROOT).decode("utf-8")


def apply(path, pairs):
    s = head(path)
    for old, new in pairs:
        n = s.count(old)
        if n != 1:
            raise SystemExit("%s: replacement count %d != 1 for %r"
                             % (path, n, old[:80]))
        s = s.replace(old, new)
    out = os.path.join(DST, os.path.basename(path))
    with open(out, "w", encoding="utf-8", newline="\n") as f:
        f.write(s)
    print("rebuilt", out, "(%d edits)" % len(pairs))


def main():
    # ---- ledger.py -----------------------------------------------------
    apply("tools/codegen_match/ledger.py", [(
        '''def record(addr, name=None, status=None, first_diff=None, note=None):
    d = load()
    a = addr.lower()
    if not a.startswith("0x"):
        a = "0x" + a
    e = d.get(a, {"name": name or "?", "status": "PENDING", "first_diff": None, "attempts": 0})
    if name:
        e["name"] = name
    if status:
        e["status"] = status
    if first_diff is not None:
        e["first_diff"] = first_diff
    if note:
        e["note"] = note
    e["attempts"] = int(e.get("attempts", 0)) + 1''',
        '''def record(addr, name=None, status=None, first_diff=None, note=None,
           extra=None):
    d = load()
    a = addr.lower()
    if not a.startswith("0x"):
        a = "0x" + a
    e = d.get(a, {"name": name or "?", "status": "PENDING", "first_diff": None, "attempts": 0})
    if name:
        e["name"] = name
    if status:
        e["status"] = status
    if first_diff is not None:
        e["first_diff"] = first_diff
    if note:
        e["note"] = note
    if extra:
        for k, v in extra.items():
            if v is not None:
                e[k] = v
    e["attempts"] = int(e.get("attempts", 0)) + 1''')])

    # ---- batch_run.py --------------------------------------------------
    apply("tools/decomp_sys/batch_run.py", [(
        '''        r["name_placeholder"] = ctx.sig.get("name_placeholder", False)
        r["cls_src"] = ctx.sig.get("cls_src")''',
        '''        r["name_placeholder"] = ctx.sig.get("name_placeholder", False)
        r["cls_src"] = ctx.sig.get("cls_src")
        r["this_as_id"] = bool(ctx.sig.get("this_as_id"))'''), (
        '''    for r in results.values():
        if not r["verdict"]:
            r.update(verdict="INTERNAL_ERROR", note="no verdict assigned")
    return results, check_viol''',
        '''    for r in results.values():
        if not r["verdict"]:
            r.update(verdict="INTERNAL_ERROR", note="no verdict assigned")
        # Audit-rem ②: "clean" = byte MATCH + zero rule violations.  A
        # this-as-id emission that could not be re-typed (param-carrying
        # family) still trips checker R7, so it is not clean either.
        r["clean"] = bool(r["verdict"] == "MATCH"
                          and not r.get("rule_violations"))
    return results, check_viol'''), (
        '''        status = {"MATCH": "OK", "MISMATCH": "NG",
                  "COMPILE_FAIL": "COMPILE_FAIL"}.get(r["verdict"], "PENDING")
        lmod.record(addr, name=r.get("name") or r.get("emitted") or addr,
                    status=status,
                    first_diff=(r.get("first_diff") or {}).get("orig"),
                    note="decomp_batch r2: %s%s" % (
                        r["verdict"],
                        "/" + r["pathology"] if r.get("pathology") else ""))''',
        '''        status = {"MATCH": "OK", "MISMATCH": "NG",
                  "COMPILE_FAIL": "COMPILE_FAIL"}.get(r["verdict"], "PENDING")
        # Audit-rem ③: the ledger records the EFFECTIVE (emitted) identity,
        # not the stale signals display name.  orig_name/cls_src keep the
        # provenance so identity drift is auditable instead of invisible.
        emitted = r.get("emitted") or r.get("name") or addr
        lmod.record(addr, name=emitted,
                    status=status,
                    first_diff=(r.get("first_diff") or {}).get("orig"),
                    note="decomp_batch r2: %s%s" % (
                        r["verdict"],
                        "/" + r["pathology"] if r.get("pathology") else ""),
                    extra={"orig_name": r.get("name"),
                           "cls_src": r.get("cls_src"),
                           "rule_violations": r.get("rule_violations"),
                           "clean": r.get("clean"),
                           "this_as_id": r.get("this_as_id")})''')])

    # ---- registry.py ---------------------------------------------------
    apply("tools/decomp_sys/registry.py", [(
        '''    functions = {}
    for addr, s in S["signals"]["symbols"].items():
        if not isinstance(s, dict):
            continue
        name = s.get("name")
        a_low = addr.lower().replace("0x", "")
        prefix_cls = str(name).split("::")[0] if "::" in str(name) else None
        owner_map = vsa_owner.get(a_low)
        owner_cls = None
        if owner_map and len(owner_map) == 1:
            owner_cls = next(iter(owner_map))
        bf = s.get("backfill") if isinstance(s.get("backfill"), dict) else {}
        bf_cls = bf.get("cls")
        sig_cls = s.get("cls")''',
        '''    functions = {}
    # Audit-rem ③: sentinel "classes" from the fleet channels are NOT class
    # identities -- emitting `unknown::Method` (or `Return::`) creates a
    # phantom unit and breaks the rule-2 class identity.  Treat them as
    # absent and let vsa_owner / name prefix supply a real class.
    cls_sentinel = {"unknown", "Unknown", "UNKNOWN", "?", "none", "None",
                    "null", "NULL", "", "Return"}

    def _real_cls(x):
        if not x:
            return None
        x = str(x).strip()
        if x in cls_sentinel:
            stats["cls_sentinel_dropped"] += 1
            return None
        return x

    for addr, s in S["signals"]["symbols"].items():
        if not isinstance(s, dict):
            continue
        name = s.get("name")
        a_low = addr.lower().replace("0x", "")
        prefix_cls = str(name).split("::")[0] if "::" in str(name) else None
        if prefix_cls and not re.match(r"^[A-Za-z_]\\w*$", prefix_cls):
            prefix_cls = None
        if prefix_cls in cls_sentinel:
            prefix_cls = None
        owner_map = vsa_owner.get(a_low)
        owner_cls = None
        if owner_map and len(owner_map) == 1:
            owner_cls = next(iter(owner_map))
        bf = s.get("backfill") if isinstance(s.get("backfill"), dict) else {}
        bf_cls = _real_cls(bf.get("cls"))
        sig_cls = _real_cls(s.get("cls"))''')])

    # ---- registry_ext.py: reuse the patch script content ----------------
    s = head("tools/decomp_sys/registry_ext.py")
    reps = [
        ('''    _PROTO_THIS = re.compile(r"\\(\\s*([A-Za-z_?$@][\\w?$@]*)\\s*\\*\\s*_?this\\b")

    def resolve_function_class(self, addr, proto=None, name=None):''',
         '''    _PROTO_THIS = re.compile(r"\\(\\s*([A-Za-z_?$@][\\w?$@]*)\\s*\\*\\s*_?this\\b")

    # Audit-rem ③: sentinel "class" names from the fleet/naming channels are
    # not identities (registry.py drops them too); the NO_CLS resolver must
    # not smuggle them back in.
    _CLS_SENTINEL = {"unknown", "Unknown", "UNKNOWN", "?", "none", "None",
                     "null", "NULL", "", "Return"}

    def resolve_function_class(self, addr, proto=None, name=None):'''),
        ('''        claims = self.vsa_claims(addr)
        if claims:''',
         '''        claims = [c for c in self.vsa_claims(addr)
                  if c.get("resolved") not in self._CLS_SENTINEL]
        if claims:'''),
        ('''                if key:
                    out["cls"], out["src"] = key, "proto_this"
                else:''',
         '''                if key and key not in self._CLS_SENTINEL:
                    out["cls"], out["src"] = key, "proto_this"
                elif key in self._CLS_SENTINEL:
                    out["rejected"].append({
                        "source": "proto_this", "raw": raw,
                        "canon": self._canon(raw),
                        "why": "sentinel class name"})
                else:'''),
        ('''            if key:
                out["cls"], out["src"] = key, "name_prefix"
            else:''',
         '''            if key and key not in self._CLS_SENTINEL:
                out["cls"], out["src"] = key, "name_prefix"
            elif key in self._CLS_SENTINEL:
                out["rejected"].append({
                    "source": "name_prefix", "raw": pre,
                    "why": "sentinel class name"})
            else:'''),
    ]
    for old, new in reps:
        n = s.count(old)
        if n != 1:
            raise SystemExit("registry_ext: count %d for %r" % (n, old[:70]))
        s = s.replace(old, new)
    out = os.path.join(DST, "registry_ext.py")
    with open(out, "w", encoding="utf-8", newline="\n") as f:
        f.write(s)
    print("rebuilt", out)

    # ---- hpp_pilot.py ---------------------------------------------------
    apply("tools/decomp_sys/hpp_pilot.py", [(
        '''        cc = {"__fastcall": " __fastcall",
              "__stdcall": " __stdcall"}.get(s.get("cc"), "")
        # R5: VC6 rejects `__thiscall` as a declaration keyword (C4234);
        # callee pseudo-sigs can carry it inside param/ret spellings
        ret = (s["ret"] or "int").replace("__thiscall", "__stdcall")
        params = [(t.replace("__thiscall", "__stdcall"), n)
                  for t, n in s["params_spelled"]]
        lines.append("    %s%s %s(%s);  // 0x%s" % (
            ret, cc, s["method"], ", ".join(
                "%s %s" % (t, n) for t, n in params),''',
        '''        cc = {"__fastcall": " __fastcall",
              "__stdcall": " __stdcall"}.get(s.get("cc"), "")
        # Audit-rem ①: this-as-id functions are emitted as STATIC
        # __fastcall members -- the int ID rides ECX exactly like the
        # original receiver slot did.
        static = "static " if s.get("this_as_id") else ""
        # R5: VC6 rejects `__thiscall` as a declaration keyword (C4234);
        # callee pseudo-sigs can carry it inside param/ret spellings
        ret = (s["ret"] or "int").replace("__thiscall", "__stdcall")
        params = [(t.replace("__thiscall", "__stdcall"), n)
                  for t, n in s["params_spelled"]]
        lines.append("    %s%s%s %s(%s);  // 0x%s" % (
            static, ret, cc, s["method"], ", ".join(
                "%s %s" % (t, n) for t, n in params),''')])

    print("note: checker.py is a full-file rewrite (copy from worktree); "
          "passes.py/decompile.py need hunk-level reconstruction (see "
          "remediation_report.md).")


if __name__ == "__main__":
    main()
