#!/usr/bin/env python3
"""Classify all .hpp header files under src/ into COMPLETE/PARTIAL/STUB/UTILITY."""

import os
import re
import json
from pathlib import Path

SRC_DIR = Path(r"D:\RA2YR_ReSource\src")
OUTPUT = Path(r"D:\RA2YR_ReSource\scripts\header_classification.json")

# Files excluded as UTILITY (no class definitions)
UTILITY_EXCLUDE = {
    "src/core/enums.hpp",
    "src/core/coordinate.hpp",
    "src/core/math.hpp",
    "src/core/logging.hpp",
    "src/core/init_stubs.hpp",
    "src/core/spawn_config.hpp",
    "src/core/reverse_marker.hpp",
    "src/core/com_defs.hpp",
    "src/app/resource.h",
    "src/fundamentals.hpp",
    "src/app/cmdline.hpp",  # likely utility
    "src/core/ddraw_init.hpp",  # likely utility (init functions)
    "src/core/target.hpp",  # enum-like
    "src/core/vector.hpp",  # template utility
}

def is_utility_override(filepath_rel: str) -> bool:
    """Check if file is explicitly listed as UTILITY."""
    # Normalize separators
    normalized = filepath_rel.replace("\\", "/")
    for excl in UTILITY_EXCLUDE:
        if normalized.endswith(excl) or normalized == excl:
            return True
    return False


def strip_cpp_comments(text: str) -> str:
    """Remove C++ comments to avoid false matches."""
    # Remove // comments
    text = re.sub(r'//.*$', '', text, flags=re.MULTILINE)
    # Remove /* */ comments (simple, non-nested)
    text = re.sub(r'/\*.*?\*/', '', text, flags=re.DOTALL)
    return text


def strip_string_literals(text: str) -> str:
    """Remove string literals to avoid false matches inside strings."""
    # Remove double-quoted strings (handle escaped quotes)
    text = re.sub(r'"(?:[^"\\]|\\.)*"', '""', text)
    return text


def count_classes(content: str) -> int:
    """Count class/struct definitions (not enum class, not forward declarations)."""
    # Strip comments and strings first
    clean = strip_cpp_comments(content)
    clean = strip_string_literals(clean)
    
    # Normalize whitespace for multi-line matching
    collapsed = re.sub(r'\s+', ' ', clean)
    
    # Match 'class ClassName' or 'struct ClassName' followed by optional inheritance and {
    # Handle multi-line and qualified base classes like ra2::game::ObjectClass
    pattern = r'\b(?:class|struct)\s+(\w+)\s*(?::\s*(?:public|private|protected)\s+[\w:]+(?:\s*,\s*(?:public|private|protected)\s+[\w:]+)*)?\s*(?:final\s*)?\{'
    matches = re.findall(pattern, collapsed)
    
    return len(matches)


def count_unknown_fields(content: str) -> int:
    """Count unknown_* member variables and unknownNNN patterns."""
    clean = strip_cpp_comments(content)
    clean = strip_string_literals(clean)
    
    # Pattern 1: unknown_ with suffix (unknown_4, unknown_FC, etc.)
    # Pattern 2: m_unknown_ prefix (m_unknown_4C, m_unknown_FC, etc.)  
    # Pattern 3: unknown followed by hex digits (unknown30, unknown60, unknown104, etc.)
    # Must appear as standalone identifiers (word boundary), not inside longer names
    
    count = 0
    
    # unknown_ followed by hex digits or word chars: unknown_4, unknown_FC, unknown_10A
    p1 = re.findall(r'\bunknown_[0-9A-Fa-f]+\b', clean)
    count += len(p1)
    
    # m_unknown_ followed by hex digits: m_unknown_4C, m_unknown_FC
    p2 = re.findall(r'\bm_unknown_[0-9A-Fa-f]+\b', clean)
    count += len(p2)
    
    # unknown directly followed by hex digits (no underscore): unknown30, unknown60, unknown104
    p3 = re.findall(r'\bunknown[0-9A-Fa-f]+\b', clean)
    count += len(p3)
    
    return count


def count_address_comments(content: str) -> int:
    """Count // 0xADDR comments."""
    # Keep comments this time - we're counting them
    pattern = r'//\s*0x[0-9A-Fa-f]+'
    matches = re.findall(pattern, content)
    return len(matches)


def count_stub_methods(content: str) -> int:
    """Count stub methods: empty bodies or trivial returns.
    
    Stub patterns:
    - ) { } or ) { }  (empty body)
    - ) { return ...; }  (stub return)
    - ) { return false; }, ) { return 0; }, ) { return nullptr; }
    - ) {}  (compact empty)
    - ) const { return ...; } etc (with qualifiers)
    """
    clean = strip_cpp_comments(content)
    
    stub_count = 0
    
    # Match method body start: ) [qualifiers] { 
    # Qualifiers can be: const, override, noexcept, final, or combinations
    qualifiers = r'(?:\s+(?:const|override|noexcept|final|volatile|\&|\&\&))*'
    
    # Pattern 1: stub return - ) [quals] { return X; }
    pattern_return = r'\)' + qualifiers + r'\s*\{\s*return\s+[^;]*;\s*\}'
    stub_count += len(re.findall(pattern_return, clean))
    
    # Pattern 2: empty body - ) [quals] { } or ) [quals] {  }
    pattern_empty = r'\)' + qualifiers + r'\s*\{\s*\}'
    stub_count += len(re.findall(pattern_empty, clean))
    
    # Pattern 3: compact empty: ){}
    pattern_compact = r'\)\{\}'
    stub_count += len(re.findall(pattern_compact, clean))
    
    return stub_count


def count_implemented_methods(content: str) -> int:
    """Count methods that have actual implementation (not just stubs).
    Methods with address comments are likely implemented."""
    clean = strip_cpp_comments(content)
    
    qualifiers = r'(?:\s+(?:const|override|noexcept|final|volatile|\&|\&\&))*'
    
    # Find all method body openings: ) [quals] {
    body_starts = re.finditer(r'\)' + qualifiers + r'\s*\{', clean)
    implemented = 0
    stubs = 0
    
    for match in body_starts:
        start = match.end()
        # Find matching closing brace (simple depth count)
        depth = 1
        i = start
        body_content = ""
        while i < len(clean) and depth > 0:
            if clean[i] == '{':
                depth += 1
            elif clean[i] == '}':
                depth -= 1
            if depth > 0:
                body_content += clean[i]
            i += 1
        
        body_stripped = body_content.strip()
        
        # Check if stub
        if not body_stripped or body_stripped == '':
            stubs += 1
        elif re.match(r'^return\s+[^;]*;\s*$', body_stripped):
            stubs += 1
        else:
            implemented += 1
    
    return implemented


def classify_file(filepath: Path) -> dict:
    """Classify a single .hpp file."""
    relpath = str(filepath.relative_to(SRC_DIR.parent)).replace("\\", "/")
    
    try:
        with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
            content = f.read()
    except Exception as e:
        return {
            "file_path": relpath,
            "classification": "ERROR",
            "class_count": 0,
            "unknown_count": 0,
            "address_comment_count": 0,
            "stub_count": 0,
            "implemented_count": 0,
            "notes": f"Read error: {e}"
        }
    
    # Check UTILITY override first
    if is_utility_override(relpath):
        class_cnt = count_classes(content)
        return {
            "file_path": relpath,
            "classification": "UTILITY",
            "class_count": class_cnt,
            "unknown_count": count_unknown_fields(content),
            "address_comment_count": count_address_comments(content),
            "stub_count": count_stub_methods(content),
            "implemented_count": count_implemented_methods(content),
            "notes": "Explicitly excluded as UTILITY (no class definitions or infrastructure file)"
        }
    
    class_cnt = count_classes(content)
    unknown_cnt = count_unknown_fields(content)
    addr_cnt = count_address_comments(content)
    stub_cnt = count_stub_methods(content)
    impl_cnt = count_implemented_methods(content)
    
    # Classification logic
    if class_cnt == 0:
        classification = "UTILITY"
        notes = "No class definitions found"
    elif unknown_cnt == 0 and stub_cnt == 0:
        # No unknown fields and no stubs → truly complete
        if addr_cnt > 0 or impl_cnt > 0:
            classification = "COMPLETE"
            extra = []
            if addr_cnt > 0:
                extra.append(f"{addr_cnt} address comments")
            if impl_cnt > 0:
                extra.append(f"{impl_cnt} inline implementations")
            notes = "All members named, no stubs, " + ", ".join(extra)
        else:
            # Pure abstract classes with no inline code → PARTIAL (forward declarations only)
            classification = "PARTIAL"
            notes = "No unknown fields or stubs but no inline implementations or address comments (likely forward declarations only)"
    elif addr_cnt > 0:
        # Has address comments → actively being reverse engineered → PARTIAL
        if unknown_cnt == 0:
            notes = f"All members named, {addr_cnt} address comments, {stub_cnt} stubs remain, {impl_cnt} implementations"
        else:
            notes = f"{unknown_cnt} unknown fields, {addr_cnt} address comments, {stub_cnt} stubs, {impl_cnt} implementations"
        classification = "PARTIAL"
    elif unknown_cnt > 0 and stub_cnt > 0 and impl_cnt == 0:
        # Only unknowns and stubs, no real implementations → STUB
        classification = "STUB"
        notes = f"{unknown_cnt} unknown fields, {stub_cnt} stubs, 0 implementations, 0 address comments"
    elif unknown_cnt > 0 and stub_cnt > impl_cnt:
        # More stubs than implementations → STUB
        classification = "STUB"
        notes = f"{unknown_cnt} unknown fields, {stub_cnt} stubs vs {impl_cnt} impls, no address comments"
    elif stub_cnt > 0 and impl_cnt == 0:
        # No implementations, only stubs → STUB
        classification = "STUB"
        notes = f"All members named but {stub_cnt} stub methods, no real implementations, no address comments"
    elif stub_cnt > 0:
        # Some stubs present, no address comments → PARTIAL
        classification = "PARTIAL"
        notes = f"All members named but {stub_cnt} stub(s) present, no address comments, {impl_cnt} implementations"
    elif unknown_cnt > 0:
        # Unknown fields but no stubs, no address comments → PARTIAL
        classification = "PARTIAL"
        notes = f"{unknown_cnt} unknown fields, no stubs, no address comments"
    else:
        classification = "PARTIAL"
        notes = f"Mixed: U={unknown_cnt} S={stub_cnt} I={impl_cnt} A={addr_cnt}"
    
    return {
        "file_path": relpath,
        "classification": classification,
        "class_count": class_cnt,
        "unknown_count": unknown_cnt,
        "address_comment_count": addr_cnt,
        "stub_count": stub_cnt,
        "implemented_count": impl_cnt,
        "notes": notes
    }


def main():
    # Find all .hpp files
    hpp_files = sorted(SRC_DIR.rglob("*.hpp"))
    print(f"Found {len(hpp_files)} .hpp files")
    
    results = []
    for fp in hpp_files:
        result = classify_file(fp)
        results.append(result)
        print(f"  {result['classification']:10s} | C:{result['class_count']:2d} U:{result['unknown_count']:3d} A:{result['address_comment_count']:3d} S:{result['stub_count']:3d} I:{result['implemented_count']:3d} | {result['file_path']}")
    
    # Summary
    by_cat = {}
    total_unknown = 0
    total_stubs = 0
    for r in results:
        cat = r['classification']
        by_cat[cat] = by_cat.get(cat, 0) + 1
        total_unknown += r['unknown_count']
        total_stubs += r['stub_count']
    
    summary = {
        "generated_at": "2026-06-17",
        "total_files": len(results),
        "files_by_category": by_cat,
        "total_unknown_fields": total_unknown,
        "total_stub_methods": total_stubs,
        "categories": {
            "COMPLETE": "All member variables named (0 unknown_*), all methods have // 0xADDR comments",
            "PARTIAL": "Some known/some unknown members, some address comments, in progress",
            "STUB": "Minimal class body, mostly abstract/empty stubs, many unknown_",
            "UTILITY": "No class definitions (enums, utilities, configs, pure functions)"
        },
        "files": results
    }
    
    # Write output
    OUTPUT.parent.mkdir(parents=True, exist_ok=True)
    with open(OUTPUT, 'w', encoding='utf-8') as f:
        json.dump(summary, f, indent=2, ensure_ascii=False)
    
    print(f"\n=== SUMMARY ===")
    print(f"Total files: {len(results)}")
    for cat, count in sorted(by_cat.items()):
        print(f"  {cat}: {count}")
    print(f"Total unknown_ fields: {total_unknown}")
    print(f"Total stub methods: {total_stubs}")
    print(f"\nOutput: {OUTPUT}")


if __name__ == "__main__":
    main()
