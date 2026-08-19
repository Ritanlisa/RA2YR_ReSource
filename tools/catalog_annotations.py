#!/usr/bin/env python3
"""Catalog all annotation format variants in src/**/*.hpp files.

Output: .omo/annotation_formats.json
"""

import re
import json
import os
from collections import defaultdict, Counter
from pathlib import Path

SRC = Path("D:/RA2YR_ReSource/src")
OUT = Path("D:/RA2YR_ReSource/.omo/annotation_formats.json")

# ── Pattern definitions ──────────────────────────────────────────────────
# Order matters: more specific patterns must be checked first
PATTERNS = [
    # ── IDA: NOT_FOUND variants ──
    {
        "id": "ida_not_found",
        "regex": re.compile(r"//\s*IDA:\s*NOT_FOUND\b"),
        "description": "IDA: NOT_FOUND — function not found in IDA binary",
        "priority": 10,
    },
    # ── IDA: UNMATCHED — reason tags ──
    {
        "id": "ida_unmatched",
        "regex": re.compile(r"//\s*IDA:\s*UNMATCHED\b\s*(.*)"),
        "description": "IDA: UNMATCHED — function matched but with issues",
        "priority": 10,
    },
    # ── IDA 0xADDR -- Name ──
    {
        "id": "ida_addr_name",
        "regex": re.compile(r"//\s*IDA\s+(0x[0-9A-Fa-f]{5,8})\s*--\s*\S"),
        "description": "IDA 0xADDR -- Name — IDA-formatted address with comment name",
        "priority": 9,
    },
    # ── data: 0xADDR ──
    {
        "id": "data_addr",
        "regex": re.compile(r"//\s*data:\s*(0x[0-9A-Fa-f]{5,8})"),
        "description": "data: 0xADDR — data section annotation",
        "priority": 9,
    },
    # ── 0xADDR -- description ──
    {
        "id": "addr_description",
        "regex": re.compile(r"//\s*(0x[0-9A-Fa-f]{5,8})\s*--\s*.+"),
        "description": "0xADDR -- description — address with description comment",
        "priority": 8,
    },
    # ── Plain IDA 0xADDR (no -- Name suffix) ──
    {
        "id": "ida_addr_plain",
        "regex": re.compile(r"//\s*IDA\s+(0x[0-9A-Fa-f]{5,8})(?!\s*--)"),
        "description": "IDA 0xADDR — IDA-formatted address (plain, no comment)",
        "priority": 7,
    },
    # ── Standard 0xADDR (catch-all) ──
    {
        "id": "std_addr",
        "regex": re.compile(r"//\s*(0x[0-9A-Fa-f]{5,8})\b"),
        "description": "0xADDR — standard address annotation",
        "priority": 5,
    },
]

# ── NOT_FOUND sub-type classification ────────────────────────────────────
NOT_FOUND_SUBTYPES = [
    ("wrapper_delegation", re.compile(r"(?i)(wrapper|delegat|forward|passthrough|thunk)")),
    ("defaulted_dtor", re.compile(r"(?i)(virtual\s*~\w+\s*\(\)\s*=\s*default|default(ed)?\s*(destructor|dtor))")),
    ("constexpr", re.compile(r"(?i)\bconstexpr\b")),
    ("inline", re.compile(r"(?i)\binline\b")),
    ("stub", re.compile(r"(?i)(stub|TODO|FIXME|implement)")),
    ("static_func", re.compile(r"(?i)\bstatic\b")),
    ("virtual_func", re.compile(r"(?i)\bvirtual\b")),
    ("data_section", re.compile(r"(?i)\bdata\b")),
]

# ── UNMATCHED tag extraction ─────────────────────────────────────────────
UNMATCHED_TAG_RE = re.compile(r"//\s*IDA:\s*UNMATCHED\b\s*(?:—|–|—|--)\s*(.*)")


def collect_all():
    """Scan all hpp files and collect annotations."""
    results = {p["id"]: {"count": 0, "files": Counter(), "examples": [], "lines": []}
               for p in PATTERNS}

    # Extra collectors
    not_found_subtypes = defaultdict(list)  # subtype -> [lines]
    unmatched_tags = []  # [(tag_string, line)]

    all_hpp = sorted(SRC.rglob("*.hpp"))
    print(f"Scanning {len(all_hpp)} hpp files...")

    for hpp_path in all_hpp:
        rel = str(hpp_path.relative_to(SRC))
        try:
            with open(hpp_path, "r", encoding="utf-8", errors="replace") as f:
                for lineno, line in enumerate(f, 1):
                    line_stripped = line.rstrip("\n")
                    matched = False
                    for pat in PATTERNS:
                        m = pat["regex"].search(line_stripped)
                        if m:
                            pid = pat["id"]
                            results[pid]["count"] += 1
                            results[pid]["files"][rel] += 1
                            if len(results[pid]["examples"]) < 10:
                                snippet = line_stripped.strip()
                                results[pid]["examples"].append({
                                    "file": rel,
                                    "line": lineno,
                                    "text": snippet[:200],
                                })
                            results[pid]["lines"].append((rel, lineno, line_stripped.strip()))

                            # ── NOT_FOUND sub-type classification ──
                            if pid == "ida_not_found":
                                classify_not_found(line_stripped, rel, lineno, not_found_subtypes)

                            # ── UNMATCHED tag extraction ──
                            if pid == "ida_unmatched":
                                tm = UNMATCHED_TAG_RE.search(line_stripped)
                                if tm:
                                    tag_str = tm.group(1).strip()
                                    unmatched_tags.append((tag_str, rel, lineno, line_stripped.strip()))
                            matched = True
                            break  # Stop at first match — prevent double-counting

                    if not matched:
                        # Catch edge cases: check for multi-line patterns
                        check_multiline = re.search(r"//\s*(0x[0-9A-Fa-f]{5,8})\s*$", line_stripped)
                        if check_multiline:
                            pid = "std_addr"
                            results[pid]["count"] += 1
                            results[pid]["files"][rel] += 1
                            if len(results[pid]["examples"]) < 10:
                                results[pid]["examples"].append({
                                    "file": rel,
                                    "line": lineno,
                                    "text": line_stripped.strip(),
                                })

        except Exception as e:
            print(f"  ERROR reading {hpp_path}: {e}")

    return results, not_found_subtypes, unmatched_tags


def classify_not_found(line, file, lineno, collector):
    """Classify a NOT_FOUND annotation by the original declaration line."""
    # The NOT_FOUND annotation is on the same line as a declaration
    # Check for sub-type signals in the declaration part
    subt = "unclassified"
    for sub_name, sub_re in NOT_FOUND_SUBTYPES:
        if sub_re.search(line):
            subt = sub_name
            break
    collector[subt].append((file, lineno, line.strip()))


def analyze_unmatched_tags(unmatched_tags):
    """Analyze UNMATCHED reason tags frequency."""
    tag_freq = Counter()
    tag_combo_freq = Counter()
    samples_by_tag = defaultdict(list)

    for tag_str, file, lineno, line in unmatched_tags:
        # Normalize tags
        tags = re.split(r"\s*,\s*", tag_str)
        normalized = []
        for t in tags:
            t = t.strip().lower().replace(" ", "_")
            if t:
                normalized.append(t)
                tag_freq[t] += 1
                if len(samples_by_tag[t]) < 3:
                    samples_by_tag[t].append({"file": file, "line": lineno, "text": line[:150]})

        combo_key = ", ".join(sorted(normalized))
        if combo_key:
            tag_combo_freq[combo_key] += 1

    return {
        "individual_tag_frequency": dict(tag_freq.most_common()),
        "tag_combination_frequency": dict(tag_combo_freq.most_common(30)),
        "total_unmatched_lines": len(unmatched_tags),
        "samples_by_tag": {k: v[:3] for k, v in samples_by_tag.items()},
    }


def build_catalog(results, not_found_subtypes, unmatched_tags):
    """Build the final JSON catalog."""
    catalog = {
        "meta": {
            "scan_date": "2026-06-24",
            "source": "src/**/*.hpp",
            "total_hpp_files_scanned": len(list(SRC.rglob("*.hpp"))),
        },
        "formats": {},
        "not_found_analysis": {},
        "unmatched_analysis": {},
    }

    # ── Formats ──
    for pat in PATTERNS:
        pid = pat["id"]
        r = results[pid]
        top_files = r["files"].most_common(5)
        catalog["formats"][pid] = {
            "description": pat["description"],
            "regex_pattern": pat["regex"].pattern,
            "total_count": r["count"],
            "top_files": [{"file": f, "count": c} for f, c in top_files],
            "examples": r["examples"][:5],
        }

    # ── NOT_FOUND analysis ──
    nf_total = sum(len(v) for v in not_found_subtypes.values())
    nf_breakdown = {}
    for sub_name, items in sorted(not_found_subtypes.items(), key=lambda x: -len(x[1])):
        nf_breakdown[sub_name] = {
            "count": len(items),
            "percentage": round(len(items) / nf_total * 100, 1) if nf_total else 0,
            "top_files": Counter(f for f, _, _ in items).most_common(5),
            "examples": [
                {"file": f, "line": l, "text": t[:200]}
                for f, l, t in items[:3]
            ],
        }
    catalog["not_found_analysis"] = {
        "total": nf_total,
        "subtype_breakdown": nf_breakdown,
    }

    # ── UNMATCHED analysis ──
    catalog["unmatched_analysis"] = analyze_unmatched_tags(unmatched_tags)

    return catalog


def main():
    print("=" * 60)
    print("Annotation Format Catalog — Scanner")
    print("=" * 60)

    results, not_found_subtypes, unmatched_tags = collect_all()

    # ── Print summary ──
    print("\n── Format Variants Found ──")
    for pat in PATTERNS:
        pid = pat["id"]
        r = results[pid]
        if r["count"] > 0:
            nfiles = len(r["files"])
            print(f"  [{pid}] {r['count']:>6} occurrences in {nfiles:>3} files — {pat['description']}")

    nf_total = sum(len(v) for v in not_found_subtypes.values())
    print(f"\n── NOT_FOUND Sub-types (total: {nf_total}) ──")
    for sub_name, items in sorted(not_found_subtypes.items(), key=lambda x: -len(x[1])):
        if items:
            print(f"  {sub_name:>25s}: {len(items):>5}")

    print(f"\n── UNMATCHED Lines: {len(unmatched_tags)} ──")

    # ── Build & write catalog ──
    catalog = build_catalog(results, not_found_subtypes, unmatched_tags)

    OUT.parent.mkdir(parents=True, exist_ok=True)
    with open(OUT, "w", encoding="utf-8") as f:
        json.dump(catalog, f, indent=2, ensure_ascii=False)

    print(f"\n[OK] Catalog written to {OUT}")
    print(f"  Total formats identified: {sum(1 for p in PATTERNS if results[p['id']]['count'] > 0)}")
    print("Done.")


if __name__ == "__main__":
    main()
