# Learnings - complete-symbol-layer
## 2026-06-18T01:01 Session start
- Plan: 30 tasks across 5 waves + 4 Final Verification
- Scope: ~8,285 global/free functions + ~754 new global extern declarations
- Guardrails: extern-only, no implementations, read-only functions.json

## 2026-06-18T09:11 Task 1 Complete — extract_globals.py
- MCP protocol: SSE GET /sse → session → POST /sse?session=ID with JSON-RPC via http.client
- IDA MCP page size bug: count>500 returns 10 items but advances offset by count; fallback to count≤500 per page with retry logic
- MCP response envelope: content[{type,text}] + structuredContent{result,stdout,stderr}; structuredContent.result is list for entity_query, dict for py_eval
- Filter: ^a[0-9A-Z] catches both "aFirst" and "a05dms..." format strings (IDA encodes printf formats as a+string)
- Results: 9974 raw .data globals → 1383 engine globals (605 typed, 778 untyped)
## Task 2 complete: scan_existing_defs.py
- 910 unique global entries found (906 defs + 4 extern-only)
- 157 have address comments extracted from `// 0xADDR` or `// IDA: 0xADDR` comments
- Scanned 85 .cpp + 150 .hpp files; .hpp limited to extern declarations only
- Key design decisions: ADDR_RE uses `\b` not `$` to match addrs with trailing text; .hpp files ONLY matched for `extern` (struct members excluded); dedup prefers .cpp definitions over .hpp externs
- False positives: ~30 local variables (a1, caps, rc, pt, etc.) — harmless for exclude set
