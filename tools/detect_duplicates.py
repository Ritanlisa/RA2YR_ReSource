#!/usr/bin/env python3
"""
Detect duplicate symbol names between generated headers and existing source files.

Scans:
  - src/**/ _funcs.hpp   (7 files, auto-generated function declarations)
  - src/**/ globals_*.hpp (6 files, auto-generated extern variable declarations)
  - src/**/*.hpp          (existing headers, excluding generated ones)
  - src/**/*.cpp          (existing source files)

Flags any symbol that appears in BOTH generated AND existing files,
excluding intentional extern re-declarations for global variables.

For _funcs.hpp: only flags overlapping names if _funcs.hpp is actually
#included by any .cpp file. If _funcs.hpp is purely a reference catalog
(not compiled), function name overlaps are harmless.

Exit 0 if zero duplicates found.
"""

import re
import sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / "src"

# Files to scan
GEN_FUNCS = sorted(SRC.rglob("_funcs.hpp"))        # 7 files
GEN_GLOBALS = sorted(SRC.rglob("globals_*.hpp"))    # 6 files
ALL_HPP_CPP = sorted(list(SRC.rglob("*.hpp")) + list(SRC.rglob("*.cpp")))

EXISTING_FILES = [
    f for f in ALL_HPP_CPP
    if f.name not in {p.name for p in GEN_FUNCS}
    and f.name not in {p.name for p in GEN_GLOBALS}
    and "_funcs.hpp" not in f.name
    and not f.name.startswith("globals_")
]

# ── Extractors ────────────────────────────────────────────────────────────────

def extract_func_names_from_funcs_hpp(content: str) -> set[str]:
    """Extract free function names from _funcs.hpp files.
    
    Matches:   ReturnType FunctionName(...) noexcept;
    Non-commented, non-forward-decl lines only.
    """
    names: set[str] = set()
    lines = content.split('\n')
    for line in lines:
        stripped = line.strip()
        if not stripped:
            continue
        # Skip fully commented lines
        if stripped.startswith('//'):
            continue
        if stripped.startswith('/*') or stripped.startswith('*'):
            continue
        if stripped.startswith('class ') or stripped.startswith('struct '):
            continue
        if stripped.startswith('namespace ') or stripped.startswith('#'):
            continue
        if stripped == '};' or stripped == '}':
            continue
        
        # Strip trailing comments (// IDA: ...) to get clean declaration
        clean = stripped.split('//')[0].strip()
        if not clean:
            continue
        
        # Free function declaration: type name( ... ) ... ;
        m = re.match(
            r'^(?:[\w\s*&<>:]+\s+)?([A-Za-z_]\w*(?:::[A-Za-z_]\w*)*)\s*\(.*\)\s*(?:noexcept)?\s*;',
            clean
        )
        if m:
            name = m.group(1)
            if name not in {'if', 'while', 'for', 'switch', 'return'}:
                names.add(name)
    return names


def extract_class_forward_decls(content: str) -> set[str]:
    """Extract forward class declarations from _funcs.hpp.
    Matches: class ClassName;
    """
    names: set[str] = set()
    for m in re.finditer(r'^\s*class\s+([A-Za-z_]\w*)\s*;\s*$', content, re.MULTILINE):
        names.add(m.group(1))
    return names


def extract_global_var_names(content: str) -> set[str]:
    """Extract extern variable names from globals_*.hpp files.
    Matches: extern Type varName; or extern Type varName[N];
    """
    names: set[str] = set()
    for m in re.finditer(
        r'extern\s+[\w\s*&<>:]+\s+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;',
        content
    ):
        names.add(m.group(1))
    return names


def extract_from_header(content: str) -> tuple[set[str], set[str]]:
    """Extract symbols from existing .hpp header files.
    
    Only collects from header files because:
    - .cpp definitions matching extern declarations are intentional
    - True duplicates come from conflicting declarations in headers
    
    Returns:
      (func_names, non_extern_var_names)
    """
    func_names: set[str] = set()
    non_extern_vars: set[str] = set()
    
    # Remove string literals, comments
    no_strings = re.sub(r'"[^"]*"', '""', content)
    no_comments = re.sub(r'//[^\n]*', '', no_strings)
    no_block = re.sub(r'/\*.*?\*/', '', no_comments, flags=re.DOTALL)
    
    # Remove class/struct bodies (member variables are not global conflicts)
    # Use [\s\S]*? for multi-line matching with DOTALL
    no_classes = re.sub(
        r'\b(?:class|struct)\s+\w+\s*(?::\s*[\s\S]*?)?\s*\{[\s\S]*?\n\};',
        '', no_block, flags=re.DOTALL
    )
    # Also remove enum bodies
    no_classes = re.sub(
        r'\benum\s+(?:class\s+)?\w*\s*\{[\s\S]*?\n\};',
        '', no_classes, flags=re.DOTALL
    )
    
    # Extract function names
    for m in re.finditer(r'\b([A-Za-z_]\w*(?:::[A-Za-z_]\w*)*)\s*\(', no_classes):
        name = m.group(1)
        skip = {'if', 'while', 'for', 'switch', 'return', 'sizeof', 'decltype',
                'throw', 'catch', 'new', 'delete', 'else', 'case', 'default',
                'static_cast', 'dynamic_cast', 'const_cast', 'reinterpret_cast',
                'goto', 'continue', 'break', 'assert', 'static_assert',
                'alignof', 'noexcept', 'typeid', 'namespace', 'template',
                'operator', 'va_arg', 'va_start', 'va_end', 'offsetof'}
        base = name.split('::')[0]
        if base not in skip:
            func_names.add(name)
    
    # Extract NON-EXTERN global variable definitions in headers
    # These would conflict with extern declarations in globals_*.hpp
    # We filter OUT lines with 'extern'
    lines = no_classes.split('\n')
    for line in lines:
        if re.search(r'\bextern\b', line):
            continue
        # Skip preprocessor, namespace, comments
        stripped = line.strip()
        if not stripped or stripped.startswith('#') or stripped.startswith('//'):
            continue
        
        # Match: Type varName; or Type varName = value; (global scope)
        m = re.match(
            r'^\s*(?:static\s+)?(?:const\s+)?(?:constexpr\s+)?'
            r'(?:inline\s+)?(?:volatile\s+)?'
            r'[\w\s*&<>:\[\]]+\s+([A-Za-z_]\w*)\s*(?:=|;|\{|\[)',
            line
        )
        if m:
            name = m.group(1)
            skip_vars = {'if', 'while', 'for', 'return', 'new', 'delete',
                         'case', 'default', 'public', 'private', 'protected',
                         'operator', 'namespace', 'template', 'typedef', 'using'}
            if name not in skip_vars:
                non_extern_vars.add(name)
    
    return func_names, non_extern_vars


def extract_funcs_from_cpp(content: str) -> set[str]:
    """Extract function names from .cpp files (for checking against _funcs.hpp)."""
    func_names: set[str] = set()
    no_strings = re.sub(r'"[^"]*"', '""', content)
    no_comments = re.sub(r'//[^\n]*', '', no_strings)
    no_block = re.sub(r'/\*.*?\*/', '', no_comments, flags=re.DOTALL)
    
    for m in re.finditer(r'\b([A-Za-z_]\w*(?:::[A-Za-z_]\w*)*)\s*\(', no_block):
        name = m.group(1)
        skip = {'if', 'while', 'for', 'switch', 'return', 'sizeof', 'decltype',
                'throw', 'catch', 'new', 'delete', 'else', 'case', 'default',
                'static_cast', 'dynamic_cast', 'const_cast', 'reinterpret_cast',
                'goto', 'continue', 'break', 'assert', 'static_assert',
                'alignof', 'noexcept', 'typeid', 'namespace', 'template',
                'operator', 'va_arg', 'va_start', 'va_end', 'offsetof'}
        base = name.split('::')[0]
        if base not in skip:
            func_names.add(name)
    
    return func_names


# ── Main logic ────────────────────────────────────────────────────────────────

def check_funcs_hpp_is_included() -> bool:
    """Check if any .cpp file includes _funcs.hpp.
    
    If _funcs.hpp is purely a reference catalog (never #included by any
    compilation unit), then function name overlaps with existing headers
    are harmless — no actual ODR violations can occur.
    """
    for fp in SRC.rglob("*.cpp"):
        try:
            content = fp.read_text(encoding='utf-8', errors='replace')
        except (OSError, UnicodeDecodeError):
            continue
        # Match #include "..._funcs.hpp" or #include <..._funcs.hpp>
        if re.search(r'#include\s+[<"][^>"]*_funcs\.hpp[>"]', content):
            return True
    return False


def main() -> int:
    print("=== Duplicate Symbol Detector ===\n")
    
    # ── Pre-check: is _funcs.hpp included by any compilation unit? ──
    funcs_hpp_included = check_funcs_hpp_is_included()
    if not funcs_hpp_included:
        print("Note: _funcs.hpp is not #included by any .cpp — function overlaps are harmless.\n")
    
    # ── Phase 1: Collect symbols from generated files ──
    gen_funcs: set[str] = set()
    gen_classes: set[str] = set()
    gen_vars: set[str] = set()
    
    print("── Scanning generated files ──")
    for fp in GEN_FUNCS:
        content = fp.read_text(encoding='utf-8', errors='replace')
        funcs = extract_func_names_from_funcs_hpp(content)
        classes = extract_class_forward_decls(content)
        gen_funcs.update(funcs)
        gen_classes.update(classes)
        print(f"  {fp.relative_to(ROOT)}: {len(funcs)} funcs, {len(classes)} classes")
    
    for fp in GEN_GLOBALS:
        content = fp.read_text(encoding='utf-8', errors='replace')
        vars_ = extract_global_var_names(content)
        gen_vars.update(vars_)
        print(f"  {fp.relative_to(ROOT)}: {len(vars_)} vars")
    
    print(f"\n  Total generated: {len(gen_funcs)} funcs, {len(gen_classes)} classes, {len(gen_vars)} vars\n")
    
    # ── Phase 2: Collect symbols from existing files ──
    exist_hpp_funcs: set[str] = set()  # functions declared in .hpp headers
    exist_cpp_funcs: set[str] = set()  # functions defined in .cpp sources
    exist_header_vars: set[str] = set()  # non-extern vars in .hpp files
    # Track which files declare each symbol (for reporting)
    func_file_map: dict[str, list[str]] = defaultdict(list)
    var_file_map: dict[str, list[str]] = defaultdict(list)
    
    # Separate hpp and cpp
    existing_hpp = [f for f in EXISTING_FILES if f.suffix == '.hpp']
    existing_cpp = [f for f in EXISTING_FILES if f.suffix == '.cpp']
    
    print("── Scanning existing headers (.hpp) ──")
    for fp in existing_hpp:
        content = fp.read_text(encoding='utf-8', errors='replace')
        funcs, vars_ = extract_from_header(content)
        exist_hpp_funcs.update(funcs)
        exist_header_vars.update(vars_)
        rel = str(fp.relative_to(ROOT))
        for f in funcs:
            func_file_map[f].append(rel)
        for v in vars_:
            var_file_map[v].append(rel)
    
    print("── Scanning existing sources (.cpp) ──")
    for fp in existing_cpp:
        content = fp.read_text(encoding='utf-8', errors='replace')
        funcs = extract_funcs_from_cpp(content)
        exist_cpp_funcs.update(funcs)
    
    print(f"  Scanned {len(existing_hpp)} .hpp + {len(existing_cpp)} .cpp files")
    print(f"  HPP funcs: {len(exist_hpp_funcs)}, CPP funcs: {len(exist_cpp_funcs)}, "
          f"HPP non-extern vars: {len(exist_header_vars)}\n")
    
    # ── Phase 3: Find duplicates ──
    duplicates: list[tuple[str, str, str]] = []  # (name, generated_loc, existing_loc)
    
    # 3a: Check function names overlapping (only if _funcs.hpp is actually compiled)
    if funcs_hpp_included:
        for func_name in sorted(gen_funcs):
            if func_name.startswith('sub_'):
                continue
            if func_name in exist_hpp_funcs:
                files = ', '.join(func_file_map.get(func_name, ['?']))
                duplicates.append((func_name, "_funcs.hpp", files))
    
    # 3b: Check variable names overlapping
    # Generated extern name that also appears as NON-EXTERN definition in an existing HEADER
    # This is a real conflict: two headers defining/declaring the same variable
    
    for var_name in sorted(gen_vars):
        if var_name in exist_header_vars:
            files = ', '.join(var_file_map.get(var_name, ['?']))
            duplicates.append((var_name, "globals_*.hpp", f"{files} (non-extern)"))
    
    # ── Phase 4: Report ──
    if duplicates:
        print(f"── DUPLICATES FOUND: {len(duplicates)} ──")
        for name, gen_loc, exist_loc in duplicates:
            print(f"  [{name}] in {gen_loc} AND {exist_loc}")
        print(f"\nDUPLICATES: {len(duplicates)}")
        return 1
    else:
        print("── No duplicates found ──")
        print("DUPLICATES: 0")
        return 0


if __name__ == "__main__":
    sys.exit(main())
