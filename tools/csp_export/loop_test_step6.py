"""Step-6 end-to-end loop test: FoggedObjectClass pair (0x4E01F0 dtor +
0x4E0700 Construct) — single server session, zero workarounds.

Proves: member_set batch, canon_regen async + job_status, reopen ->
replace_body SAME-SESSION (index invalidation), verify, mark_completed.
"""
import asyncio
import json
import sys
import time

from mcp import ClientSession, StdioServerParameters
from mcp.client.stdio import stdio_client


async def main():
    params = StdioServerParameters(
        command=sys.executable, args=["tools/mcp_translate_server.py"])
    ok = True
    log = {}
    async with stdio_client(params) as (read, write):
        async with ClientSession(read, write) as session:
            await asyncio.wait_for(session.initialize(), 30)

            async def call(name, args=None, timeout=300):
                r = await asyncio.wait_for(session.call_tool(name, args or {}),
                                           timeout)
                txt = r.content[0].text if r.content else ""
                try:
                    return json.loads(txt)
                except Exception:
                    return {"text": txt[:300]}

            # 0. baseline accounts
            d = await call("backfill_accounts", {})
            before = d["counts"].get("needs-retranslation", 0)
            log["before"] = d["counts"]

            # 1. member_set BATCH (ctor write-map evidence, FoggedObjectClass)
            d = await call("member_set", {
                "cls": "FoggedObjectClass", "entries": [
                    {"offset": "4", "name": "Items", "mtype": "void*"},
                    {"offset": "8", "name": "Capacity", "mtype": "int"},
                    {"offset": "12", "name": "IsInitialized", "mtype": "bool",
                     "size": 1},
                    {"offset": "13", "name": "IsAllocated", "mtype": "bool",
                     "size": 1},
                    {"offset": "16", "name": "Count", "mtype": "int"},
                ],
                "evidence": "ctor-4E0700/dtor-4E01F0 write-map",
                "overwrite": True})
            log["member_set_batch"] = f"applied={len(d.get('applied', []))} " \
                                      f"errors={len(d.get('errors', []))}"
            ok = ok and not d.get("errors")

            # 2. canon_regen ASYNC + job_status poll
            d = await call("canon_regen", {"async": True})
            jid = d.get("job_id")
            log["canon_regen_submitted"] = jid
            state = "running"
            for _ in range(120):
                await asyncio.sleep(2)
                d = await call("job_status", {"job_id": jid})
                state = d["job"]["state"]
                if state != "running":
                    break
            log["canon_regen"] = f"state={state}"
            ok = ok and state == "done"

            # 3. reopen 0x4E01F0 -> replace_body SAME SESSION
            d = await call("reopen", {"target": "0x004E01F0"})
            log["reopen1"] = f"ok={d.get('ok')}"
            ok = ok and d.get("ok")
            body1 = """{
    void *v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
    {
        OperatorDelete(v2);
        this->Items = 0;
    }
    this->IsAllocated = 0;
    this->Capacity = 0;
}"""
            d = await call("replace_body", {"target": "0x004E01F0",
                                            "new_body": body1})
            log["replace1_same_session"] = f"ok={d.get('ok')}"
            ok = ok and d.get("ok")

            # 4. reopen 0x4E0700 -> replace_body
            d = await call("reopen", {"target": "0x004E0700"})
            ok = ok and d.get("ok")
            body2 = """{
    if ( a2 )
    {
        this->IsInitialized = 0;
        void *v4 = a3;
        if ( !a3 )
        {
            v4 = OperatorNew(4 * a2);
            this->IsInitialized = 1;
        }
        if ( !v4 )
            return 0;
        if ( this->Items )
        {
            int v5 = this->Capacity;
            if ( a2 < v5 )
                v5 = a2;
            int i;
            for ( i = 0; i < v5; ((int *)v4)[i - 1] = ((int *)this->Items)[i - 1] )
                ++i;
            if ( this->IsAllocated )
            {
                OperatorDelete(this->Items);
                this->Items = 0;
            }
        }
        this->Items = v4;
        this->Capacity = a2;
        this->IsAllocated = a3 == 0;
    }
    else
    {
        this->vt12();
    }
    int v7 = this->Capacity;
    if ( v7 < this->Items2nd )
        this->Items2nd = v7;
    return 1;
}"""
            d = await call("replace_body", {"target": "0x004E0700",
                                            "new_body": body2})
            log["replace2_same_session"] = f"ok={d.get('ok')}"
            ok = ok and d.get("ok")

            # 5. verify both (sync; small functions finish < 30s)
            for tgt in ("0x004E01F0", "0x004E0700"):
                d = await call("verify_function", {"target": tgt}, timeout=180)
                log[f"verify {tgt}"] = (f"pass={d.get('pass')} "
                                        f"fail={str(d.get('fail_reason'))[:80]}")
                ok = ok and d.get("pass")

            # 6. mark_completed both
            for tgt, note in (("0x004E01F0", "G22 dtor Cleanup-shape"),
                              ("0x4E0700", "G22 vector Construct")):
                d = await call("mark_completed", {"target": tgt, "note": note})
                log[f"complete {tgt}"] = d.get("ok")
                ok = ok and d.get("ok")

            # 7. accounts after
            d = await call("backfill_accounts", {})
            after = d["counts"].get("needs-retranslation", 0)
            log["after"] = d["counts"]
            log["needs-retranslation delta"] = f"{before} -> {after}"
            ok = ok and after == before - 2

    print(json.dumps(log, ensure_ascii=False, indent=1))
    print("LOOP", "PASS" if ok else "FAIL")
    return 0 if ok else 1

if __name__ == "__main__":
    sys.exit(asyncio.run(main()))
