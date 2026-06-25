#!/usr/bin/env python3
"""functions_json_compat.py — backward-compatibility shim for the eliminated functions.json.

signals.json is now the single canonical symbol file. The old
`injectFunctionTest/functions.json` (shape: {"metadata": {...}, "functions": [ {address,
name, call:{convention,return_type,params}, hook:{completed,...}} ]}) no longer exists.

Legacy dev/analysis scripts that still expect that shape can replace

    with open(FUNCTIONS_JSON) as f:
        data = json.load(f)

with

    import functions_json_compat
    data = functions_json_compat.load()

This synthesizes the legacy structure on-the-fly from signals.json's function symbols
(kind=="function"), so those scripts keep working without depending on functions.json.
It is READ-ONLY: it never writes functions.json (which has been archived).
"""
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SIGNALS_JSON = ROOT / "signals.json"


def load(signals_path=None):
    """Return the legacy functions.json dict synthesized from signals.json.

    {"metadata": {...}, "functions": [ {address, name, call{}, hook{}}, ... ]}
    """
    sp = Path(signals_path) if signals_path else SIGNALS_JSON
    with open(sp, encoding="utf-8") as f:
        data = json.load(f)
    functions = load_functions_list(data)
    return {
        "metadata": {
            "binary": data.get("binary", "gamemd.exe"),
            "base_address": data.get("base_address", "0x400000"),
            "source": "synthesized from signals.json (functions.json eliminated)",
            "total_functions": len(functions),
        },
        "functions": functions,
    }


def load_functions_list(signals_data=None):
    """Return just the legacy `functions` list from signals.json (or a preloaded dict)."""
    if signals_data is None:
        with open(SIGNALS_JSON, encoding="utf-8") as f:
            signals_data = json.load(f)
    functions = []
    for key, sym in (signals_data.get("symbols", {}) or {}).items():
        if not isinstance(sym, dict) or sym.get("kind") != "function":
            continue
        addr = sym.get("address", key)
        functions.append({
            "address": addr,
            "name": sym.get("name", ""),
            "call": {
                "convention": sym.get("call_convention", "unknown"),
                "return_type": sym.get("return_type", "void"),
                "params": sym.get("params", []),
            },
            "hook": {
                "completed": sym.get("completed", False),
                "done": sym.get("done", False),
                "idempotent": sym.get("idempotent"),
                "translated": sym.get("translated", False),
            },
        })
    return functions


if __name__ == "__main__":
    d = load()
    print(f"synthesized {len(d['functions'])} function entries from signals.json")
    print("sample:", json.dumps(d["functions"][0], ensure_ascii=False) if d["functions"] else "none")
