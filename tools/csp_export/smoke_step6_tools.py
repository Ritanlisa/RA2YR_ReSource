"""Smoke test for the 6 step-6 tools (sig_lookup / backfill_accounts /
backfill_get / canon_regen / csp_anchor / compare_parse).
Uses the official MCP SDK client, same era-compatible pattern as
mcp_translate_smoke.py. Read-only except canon_regen/csp_anchor which
re-run mechanical generators (idempotent by design).
"""
import asyncio
import json
import sys

from mcp import ClientSession, StdioServerParameters
from mcp.client.stdio import stdio_client

HEAVY = "--heavy" in sys.argv  # include canon_regen + csp_anchor


async def main():
    params = StdioServerParameters(
        command=sys.executable, args=["tools/mcp_translate_server.py"])
    results = {}
    ok = True
    async with stdio_client(params) as (read, write):
        async with ClientSession(read, write) as session:
            await asyncio.wait_for(session.initialize(), 30)
            tools = await asyncio.wait_for(session.list_tools(), 30)
            names = {t.name for t in tools.tools}
            need = {"sig_lookup", "backfill_accounts", "backfill_get",
                    "canon_regen", "csp_anchor", "compare_parse"}
            missing = need - names
            results["catalog"] = (f"{len(names)} tools, missing={sorted(missing)}"
                                  if missing else f"{len(names)} tools, all 6 present")
            ok = ok and not missing

            async def call(name, args=None, timeout=180):
                r = await asyncio.wait_for(session.call_tool(name, args or {}),
                                           timeout)
                txt = r.content[0].text if r.content else ""
                try:
                    return json.loads(txt)
                except Exception:
                    return {"text": txt[:200]}

            # sig_lookup: a known csp function + a bogus addr
            d = await call("sig_lookup", {"target": "0x00667A30"})
            results["sig_lookup"] = (f"{d.get('name')} sig={d.get('sig')} "
                                     f"cls={d.get('cls')}")
            ok = ok and d.get("sig") == "csp"
            d = await call("sig_lookup", {"target": "0xDEADBEEF"})
            results["sig_lookup(bogus)"] = f"found={d.get('found', d.get('error'))}"

            # backfill_accounts
            d = await call("backfill_accounts", {})
            results["backfill_accounts"] = json.dumps(d.get("counts", {}),
                                                      ensure_ascii=False)
            ok = ok and d.get("counts", {}).get("direct", 0) > 4000

            # backfill_get: needs-retranslation sample if any, else 0x667A30
            d = await call("backfill_accounts", {})
            needs = d.get("needs_retranslation") or []
            tgt = needs[0]["addr"] if needs else "0x00667A30"
            d = await call("backfill_get", {"target": tgt})
            results["backfill_get"] = (f"{tgt} ok={d.get('ok')} "
                                       f"body={len(d.get('body') or '')}ch")
            ok = ok and d.get("ok")

            # compare_parse (log may not exist -> structured miss is PASS)
            d = await call("compare_parse", {})
            results["compare_parse"] = (f"ok={d.get('ok')} "
                                        f"counts={d.get('counts')}")
            ok = ok and ("ok" in d)

            if HEAVY:
                d = await call("canon_regen", {}, timeout=1500)
                tails = " | ".join(s["script"] + ":" + ("ok" if s["ok"] else "FAIL")
                                   for s in d.get("stages", []))
                results["canon_regen"] = tails
                ok = ok and d.get("ok")
                d = await call("csp_anchor",
                               {"addrs": ["0x00401190"], "timeout": 600},
                               timeout=700)
                results["csp_anchor"] = (f"ok={d.get('ok')} "
                                         f"out={len(d.get('output') or '')}ch")
                ok = ok and ("ok" in d)

    print(json.dumps(results, ensure_ascii=False, indent=1))
    print("SMOKE", "PASS" if ok else "FAIL")
    return 0 if ok else 1

if __name__ == "__main__":
    sys.exit(asyncio.run(main()))
