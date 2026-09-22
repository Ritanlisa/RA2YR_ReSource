#!/usr/bin/env python3
"""Generic pending-block span helper -- THE single implementation.

Every consumer (MCP server: replace_body / harvest / pending index / audit
skip; generators: lower_temp_decls / normalize_blocks / fix_addr_violations)
imports `block_span` from here instead of re-implementing brace counting.

v2 block shape (after migrate_blocks_v2): the INSIDE_MARKER sits inside the
function body, so brace counting starts at depth 1 and the span ends at the
function's own closing brace.

`find_marker(lines, hint_idx)` locates the marker near a pending entry.
"""
INSIDE_MARKER = ("// [IDA decompile] original pseudocode - translation "
                 "pending (final goal)")


def find_marker(lines, hint_idx, window=40):
    lo = max(0, hint_idx - 1)
    for i in range(lo, min(hint_idx + window, len(lines))):
        if lines[i].rstrip('\r') == INSIDE_MARKER:
            return i
    return -1


def block_span(lines, marker_idx, hard_cap=20000):
    """Return (body_lo, close_idx): body lines are marker_idx+1 .. close-1,
    where close_idx is the function's own closing brace line. depth starts
    at 1 because the function's `{` is above the marker."""
    depth = 1
    k = marker_idx
    hi = min(len(lines), marker_idx + hard_cap)
    while k < hi:
        depth += lines[k].count('{') - lines[k].count('}')
        if depth <= 0 and k > marker_idx:
            return marker_idx + 1, k
        k += 1
    return marker_idx + 1, -1


def skip_pending(lines, i):
    """Audit/skip walkers: return the index just past the pending block."""
    _, close = block_span(lines, i)
    return (close + 1) if close > 0 else i + 1
