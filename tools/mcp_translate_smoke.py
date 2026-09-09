"""Smoke test using the official MCP SDK client (era-compatible)."""
import asyncio
import json
import sys

from mcp import ClientSession, StdioServerParameters
from mcp.client.stdio import stdio_client

HEAVY = "--heavy" in sys.argv


async def main():
    params = StdioServerParameters(
        command=sys.executable, args=["tools/mcp_translate_server.py"])
    results = {}
    async with stdio_client(params) as (read, write):
        async with ClientSession(read, write) as session:
            await asyncio.wait_for(session.initialize(), 30)
            tools = await asyncio.wait_for(session.list_tools(), 30)
            names = [t.name for t in tools.tools]
            results["initialize+list"] = f"{len(names)} tools"

            async def call(name, args, timeout=180):
                r = await asyncio.wait_for(session.call_tool(name, args or {}), timeout)
                txt = r.content[0].text if r.content else ""
                try:
                    return json.loads(txt)
                except Exception:
                    return {"text": txt[:200]}

            d = await call("stats", {})
            results["stats"] = (f"pending={d['pending_translations']} "
                                f"completed={d['completed_functions']} issues={d['open_issues']}")
            d = await call("next_batch", {"count": 2})
            results["next_batch"] = "; ".join(
                f"{e['function']}@{e.get('address')}" for e in d["batch"])
            target = d["batch"][0]["target"]

            d = await call("get_context", {"target": target})
            results["get_context"] = (f"decompile={len(d.get('decompile') or '')}ch "
                                      f"members={len(d.get('member_map') or {})} "
                                      f"warn={d.get('warnings')}")

            d = await call("replace_body", {"target": target,
                                            "new_body": "// dry\nint x() { return 0; }",
                                            "dry_run": True})
            results["replace_body(dry)"] = f"ok={d.get('ok')} span={d.get('would_replace_lines')}"

            d = await call("function_state", {"target": target})
            results["function_state"] = f"pending={d.get('pending_translation')} addr={d.get('address')}"

            d = await call("addr_lookup", {"name": "BuildingClass::GetPowerOutput"})
            results["addr_lookup"] = f"fn={d.get('function_addr')}"
            d = await call("addr_lookup", {"addr": "0x44e7b0"})
            results["addr_lookup(rev)"] = f"name={d.get('function')}"

            d = await call("annotations_audit", {"file_filter": "structure/unit"})
            results["annotations_audit"] = (f"matched={d['matched']} "
                                            f"missing={d['missing_with_known_addr']} "
                                            f"mismatch={d['addr_mismatch']}")
            d = await call("globals_annotations_audit", {"file_filter": "core/globals"})
            results["globals_audit"] = f"annotated={d['annotated']} missing={d['missing']}"
            d = await call("annotate_function",
                           {"target": "structure/building.cpp:139", "addr": "0x43b740"})
            results["annotate_function"] = f"ok={d.get('ok')} {d.get('action') or d.get('already')}"

            d = await call("issues_add", {"description": "smoke", "kind": "question",
                                          "target": target})
            iid = d["issue"]["id"]
            results["issues_add"] = f"id={iid}"
            d = await call("issues_resolve", {"id": iid, "resolution": "smoke"})
            results["issues_resolve"] = str(d.get("ok"))

            d = await call("rename_local", {"target": target, "old_name": "v1",
                                            "new_name": "smokeVar", "dry_run": True})
            results["rename_local(dry)"] = f"occ={d.get('occurrences')}"
            d = await call("audit_access", {"file": "misc/misc_ext.cpp"})
            results["audit_access"] = f"violations={d.get('violations')}"
            d = await call("get_build_errors", {})
            results["get_build_errors"] = "log ok" if "by_file" in d else str(d)[:80]

            if HEAVY:
                d = await call("rename_symbol", {"old_name": "Function::Method_41C430",
                                                 "new_name": "Function::Method_41C430_Probe",
                                                 "dry_run": True, "sync_ida": False},
                               timeout=300)
                results["rename_symbol(dry)"] = (
                    f"ok={d.get('ok')} exit={d.get('exit')} "
                    f"qualified={d.get('qualified')} "
                    f"src={d.get('source_replacements')}")
                d = await call("build", {"scope": "file",
                                         "file": "system/waypoint_bodies.cpp"}, timeout=300)
                results["build(file)"] = f"exit={d.get('exit')} errs={d.get('error_count')}"
                d = await call("verify_function", {"target": "0x44d700"}, timeout=900)
                results["verify_function"] = str(d.get("verdict"))

    print("=== ra2-translate MCP smoke (SDK client) ===")
    for k, v in results.items():
        print(f"{k:24} {v}")
    print("=== done ===")


if __name__ == "__main__":
    asyncio.run(main())
