#!/usr/bin/env python3
"""
clang_ast_checker.py -- Core Clang AST traversal engine for all gate scripts.

Uses libclang Python bindings (with compatibility check disabled for VS 2022
Clang 20.1.8 + pip clang 21.1.7 version mismatch). Parses C++ source files
and provides per-category violation checks via AST node traversal.

All checks filter to project source code only -- STL/system headers are excluded.

Usage:
    from clang_ast_checker import ClangChecker
    checker = ClangChecker("src/structure/building.cpp")
    checker.parse()
    results = checker.check_pointer_arithmetic()
    for (line, cat, detail) in results:
        print(f"{checker.filepath}:{line}: error: {cat}: {detail}")
"""

import clang.cindex
import os
import sys

# -- Libclang setup (compatibility check disabled for VS 2022 Clang 20.1.8) --
_LIBCLANG_PATH_CANDIDATES = [
    r"C:\Program Files\Microsoft Visual Studio\18\Community\VC\Tools\Llvm\x64\bin\libclang.dll",
    r"C:\Program Files\Microsoft Visual Studio\17\Community\VC\Tools\Llvm\x64\bin\libclang.dll",
    r"C:\Program Files\LLVM\bin\libclang.dll",
]

_CLANG_EXE_CANDIDATES = [
    r"C:\Program Files\Microsoft Visual Studio\18\Community\VC\Tools\Llvm\x64\bin\clang.exe",
    r"C:\Program Files\Microsoft Visual Studio\17\Community\VC\Tools\Llvm\x64\bin\clang.exe",
]


def _find_libclang():
    """Find and configure libclang.dll."""
    for path in _LIBCLANG_PATH_CANDIDATES:
        if os.path.isfile(path):
            clang.cindex.Config.set_library_file(path)
            clang.cindex.Config.set_compatibility_check(False)
            return
    raise RuntimeError(
        "Cannot find libclang.dll. Tried: " + ", ".join(_LIBCLANG_PATH_CANDIDATES)
    )


_find_libclang()

# -- Project include paths --
_PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
_DEFAULT_INCLUDE_DIRS = [
    os.path.join(_PROJECT_ROOT, "src"),
    os.path.join(_PROJECT_ROOT, "app"),
]


def _get_default_compile_args():
    """Build default clang compile arguments for project source files."""
    args = ["-std=c++20", "-x", "c++", "-D_WIN32", "-D_M_IX86", "-D_MSC_VER=1920"]
    for inc in _DEFAULT_INCLUDE_DIRS:
        if os.path.isdir(inc):
            args.extend(["-I", inc])
    return args


# ===================================================
# ClangChecker
# ===================================================

class ClangChecker:
    """Parse a C++ file with Clang and run AST-based violation checks."""

    def __init__(self, filepath, compile_args=None):
        """Initialize checker for a source file.

        Args:
            filepath: Absolute or relative path to .cpp file
            compile_args: List of clang command-line arguments (default: auto)
        """
        self.filepath = os.path.abspath(filepath)
        self.compile_args = list(compile_args or _get_default_compile_args())
        self._tu = None
        self._index = None
        self._violations = []

    @property
    def tu(self):
        """Lazy-parse the translation unit."""
        if self._tu is None:
            self.parse()
        return self._tu

    def parse(self):
        """Parse the source file with Clang. Called automatically on first access."""
        self._index = clang.cindex.Index.create()
        self._tu = self._index.parse(self.filepath, args=self.compile_args)
        return self._tu

    # -- Filtering helpers --

    def _is_project_loc(self, location):
        """Check if a source location is in project code (not STL/system headers)."""
        if not location.file:
            return False
        f = str(location.file)
        # Normalize to forward slashes
        f = f.replace("\\", "/")
        # Project files contain the project root or are relative to it
        if "RA2YR_ReSource" in f:
            return True
        # Also check if file is the same as our target file
        target = self.filepath.replace("\\", "/")
        if f == target or f.endswith("/" + os.path.basename(self.filepath)):
            return True
        return False

    def _is_target_file_loc(self, location):
        """Check if location is exactly the target .cpp file (not headers it includes)."""
        if not location.file:
            return False
        f = str(location.file).replace("\\", "/")
        target = self.filepath.replace("\\", "/")
        return f == target or f.endswith("/" + os.path.basename(self.filepath))

    # -- Traversal --

    def _walk(self, visitor, root=None, skip_system=True):
        """Walk the AST, calling visitor(node) for each node.

        Args:
            visitor: callable(node) -> None
            root: Starting cursor (default: TU cursor)
            skip_system: If True, skip children whose location is in system headers
        """
        root = root or self.tu.cursor
        visitor(root)
        for child in root.get_children():
            if skip_system and not self._is_project_loc(child.location):
                continue
            self._walk(visitor, child, skip_system)

    def _collect(self, predicate, root=None, skip_system=True):
        """Collect all nodes matching predicate.

        Returns list of (node, line_number) tuples sorted by line number.
        """
        results = []

        def visitor(node):
            if predicate(node):
                line = node.location.line
                results.append((node, line))

        self._walk(visitor, root, skip_system)
        results.sort(key=lambda x: x[1])
        return results

    # -- Check: C++ casts (static_cast, dynamic_cast, reinterpret_cast) --

    _CXX_CAST_KINDS = {
        clang.cindex.CursorKind.CXX_STATIC_CAST_EXPR: "static_cast",
        clang.cindex.CursorKind.CXX_DYNAMIC_CAST_EXPR: "dynamic_cast",
        clang.cindex.CursorKind.CXX_REINTERPRET_CAST_EXPR: "reinterpret_cast",
    }

    def check_cxx_casts(self):
        """Detect C++-style casts (static_cast, dynamic_cast, reinterpret_cast).

        Returns list of (line_no, category, detail) tuples.
        """
        results = []
        for node, line in self._collect(
            lambda n: n.kind in self._CXX_CAST_KINDS,
            skip_system=True,
        ):
            if not self._is_target_file_loc(node.location):
                continue
            cast_name = self._CXX_CAST_KINDS[node.kind]
            target_type = node.type.spelling
            results.append((line, cast_name, f"cast to {target_type}"))
        return results

    # -- Check: Goto statements --

    def check_goto_statements(self):
        """Detect goto statements (forbidden).

        Returns list of (line_no, category, detail) tuples.
        """
        results = []
        for node, line in self._collect(
            lambda n: n.kind == clang.cindex.CursorKind.GOTO_STMT,
            skip_system=True,
        ):
            if not self._is_target_file_loc(node.location):
                continue
            label = node.displayname if node.displayname else "(unnamed)"
            results.append((line, "goto statement (forbidden)", f"goto {label}"))
        return results

    # -- Check: Pointer arithmetic (ptr + int, cast + int) --

    def check_pointer_arithmetic(self):
        """Detect pointer arithmetic: pointer-typed operand in '+' binary expr.

        Catches:
          - (char*)this + 692
          - ptr + index (where ptr is a pointer variable)
          - (type*)expr + offset
          - reinterpret_cast<char*>(ptr) + offset

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        # Helper: check pointer type via clang type system (not string matching)
        def _is_pointer_type(typ):
            if typ.kind == clang.cindex.TypeKind.POINTER:
                return True
            if typ.get_pointee().kind != clang.cindex.TypeKind.INVALID:
                return True
            return False

        def predicate(node):
            if node.kind != clang.cindex.CursorKind.BINARY_OPERATOR:
                return False
            children = list(node.get_children())
            if len(children) < 2:
                return False
            lhs, rhs = children[0], children[1]
            # Use clang type system -- NOT string matching on spelling
            lhs_ptr = _is_pointer_type(lhs.type)
            rhs_ptr = _is_pointer_type(rhs.type)
            # Must have exactly one pointer operand (XOR: not both, not neither)
            if not (lhs_ptr ^ rhs_ptr):
                return False
            # Confirm it's a '+' operation (not +=, not other binary ops)
            tokens = list(node.get_tokens())
            has_plus = any(t.spelling == "+" for t in tokens)
            if not has_plus:
                return False
            # Skip member access chains: g->X + 5
            # Check if left operand is preceded by '->' or '.'
            toks = [t.spelling for t in tokens]
            for i, t in enumerate(toks):
                if t == "+" and i > 1:
                    if toks[i - 1] in (">", ".") and toks[i - 2] == "-":
                        return False
            return True

        for node, line in self._collect(predicate, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            children = list(node.get_children())
            lhs_type = children[0].type.spelling if children else "?"
            rhs_type = children[1].type.spelling if len(children) > 1 else "?"
            # Extract actual integer offset value from either child
            offset_str = "?"
            for child in children:
                if child.kind == clang.cindex.CursorKind.INTEGER_LITERAL:
                    tokens = list(child.get_tokens())
                    val_str = "".join(t.spelling for t in tokens).strip()
                    try:
                        offset_str = str(int(val_str, 0))
                    except ValueError:
                        offset_str = val_str
                    break
            # Extract code snippet
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            results.append((line, "ptr-arithmetic",
                           f"offset={offset_str} lhs={lhs_type} rhs={rhs_type} code={code}"))
        return results

    # -- Check: Array subscript on pointer type (non-array pointer indexing) --

    def check_pointer_subscript(self):
        """Detect pointer subscript: pointer_var[index] where pointer_var is a
        pointer (not an array).

        Catches:
          - ((int*)this)[47]
          - ptr[offset] (where ptr is declared as a pointer)
          - typeData[2048/4] (pointer arithmetic disguised as array access)
          - (*(void***)this)[19] (complex dereference + cast patterns)

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        def _is_pointer_typ(typ):
            """Check if a clang type is a pointer (not array) using type system."""
            if typ.kind == clang.cindex.TypeKind.POINTER:
                return True
            try:
                if typ.get_pointee().kind != clang.cindex.TypeKind.INVALID:
                    return True
            except Exception:
                pass
            return False

        def _base_involves_cast_or_deref(base_node):
            """Check if base expression involves C-style cast or dereference --
            these are always pointer manipulation, never declared array access."""
            if base_node.kind == clang.cindex.CursorKind.UNARY_OPERATOR:
                return True  # *ptr -- dereferencing a pointer
            if base_node.kind == clang.cindex.CursorKind.CSTYLE_CAST_EXPR:
                return True  # (type*)expr -- casting to pointer
            if base_node.kind == clang.cindex.CursorKind.PAREN_EXPR:
                return _base_involves_cast_or_deref(
                    list(base_node.get_children())[0] if list(base_node.get_children()) else base_node
                )
            return False

        def predicate(node):
            if node.kind != clang.cindex.CursorKind.ARRAY_SUBSCRIPT_EXPR:
                return False
            children = list(node.get_children())
            if not children:
                return False
            base_type = children[0].type.spelling
            base_type_obj = children[0].type
            # Only flag if base is a pointer type (not a declared array)
            # Use string matching AND type-system fallback
            if "*" not in base_type:
                # Fallback: check via Clang type system
                if not _is_pointer_typ(base_type_obj):
                    # Additional fallback: check if base involves cast/dereference patterns
                    if not _base_involves_cast_or_deref(children[0]):
                        return False
            # Skip if base is a string literal (const char *)
            if "const char *" in base_type and len(list(node.get_tokens())) <= 3:
                return False
            return True

        for node, line in self._collect(predicate, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            children = list(node.get_children())
            base_type = children[0].type.spelling if children else "?"
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            results.append((line, "cast-index",
                           f"base_type={base_type} code={code}"))
        return results

    # -- Check: Hex literal pointer casts --

    def check_hex_pointers(self):
        """Detect hex-literal pointer casts: (TYPE*)0xNNNN

        A pointer cast with a hexadecimal integer literal operand.

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        def predicate(node):
            if node.kind != clang.cindex.CursorKind.CSTYLE_CAST_EXPR:
                return False
            # Check if the cast target is a pointer type
            if "*" not in node.type.spelling:
                return False
            # Check if any child is a hex integer literal
            for child in node.get_children():
                if child.kind == clang.cindex.CursorKind.INTEGER_LITERAL:
                    tokens = list(child.get_tokens())
                    hex_str = "".join(t.spelling for t in tokens)
                    if hex_str.startswith("0x") or hex_str.startswith("0X"):
                        return True
            return False

        for node, line in self._collect(predicate, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            children = list(node.get_children())
            hex_val = "?"
            for c in children:
                if c.kind == clang.cindex.CursorKind.INTEGER_LITERAL:
                    tokens = list(c.get_tokens())
                    hex_val = "".join(t.spelling for t in tokens)
                    break
            cast_type = node.type.spelling
            results.append((line, "hex-ptr",
                           f"({cast_type}){hex_val}"))
        return results

    # -- Check: Non-pointer to pointer casts --

    def check_nonptr_to_ptr_casts(self):
        """Detect casts from non-pointer type to pointer type:
        (int*)intVar, (MyClass*)value

        These are typically IDA decompiler artifacts where an integer is
        incorrectly treated as a pointer.

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        def predicate(node):
            if node.kind != clang.cindex.CursorKind.CSTYLE_CAST_EXPR:
                return False
            target_type = node.type.spelling
            if "*" not in target_type:
                return False
            children = list(node.get_children())
            if not children:
                return False
            src_type = children[0].type.spelling
            # children[0] is TYPE_REF (the type in the cast, e.g. "SwTimerLayout")
            # children[1] is the expression being cast (e.g. "swType")
            src_expr = children[1] if len(children) > 1 else children[0]
            # If source expression type is unresolvable (DEPENDENT / UNEXPOSED),
            # conservatively assume it might be a pointer -&gt; skip (avoid false positive)
            if src_expr.type.kind == clang.cindex.TypeKind.DEPENDENT:
                return False
            if src_expr.kind == clang.cindex.CursorKind.UNEXPOSED_EXPR:
                return False
            # Check if source expression is a pointer type (not via string matching)
            # String matching fails for incomplete types or when Clang uses
            # non-standard spellings (e.g. "struct Foo *" vs "Foo *").
            src_is_ptr = False
            if src_expr.type.kind == clang.cindex.TypeKind.POINTER:
                src_is_ptr = True
            elif src_expr.type.get_pointee().kind != clang.cindex.TypeKind.INVALID:
                src_is_ptr = True
            # If source IS a pointer, this is ptr-to-ptr cast -&gt; legitimate
            if src_is_ptr:
                return False
            # Skip function-to-pointer conversions (function names decay to function ptrs)
            # These are needed for callback registration
            if "(" in src_type and ")" in src_type:
                return False
            # Skip integer literal casts like (char*)0 (null pointer constants)
            if children[0].kind == clang.cindex.CursorKind.INTEGER_LITERAL:
                tokens = list(children[0].get_tokens())
                val = "".join(t.spelling for t in tokens).strip()
                try:
                    if int(val, 0) == 0:
                        return False
                except ValueError:
                    pass
            return True

        for node, line in self._collect(predicate, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            children = list(node.get_children())
            # children[0] is TYPE_REF (the cast type), children[1] is the source expression
            src_expr = children[1] if len(children) > 1 else children[0]
            src_type = src_expr.type.spelling if src_expr.type.spelling else "?"
            target_type = node.type.spelling
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            results.append((line, "non-ptr-to-ptr",
                           f"cast from non-ptr {src_type} to ({target_type}) code={code}"))
        return results

    # -- Check: vN variables (IDA decompiler artifact) --

    def check_vn_variables(self):
        """Detect vN variable names (v1, v2, ..., v999) -- IDA temporary variables.

        Only checks variable declarations in target file, not header includes.

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        def _is_vn_name(name):
            """Check if a name matches vN pattern (v followed by digits)."""
            if not name or len(name) < 2:
                return False
            if name[0] != "v":
                return False
            return name[1:].isdigit()

        for node, line in self._collect(
            lambda n: n.kind == clang.cindex.CursorKind.VAR_DECL,
            skip_system=True,
        ):
            if not self._is_target_file_loc(node.location):
                continue
            name = node.displayname
            if _is_vn_name(name):
                results.append((line, "IDA artifact: vN",
                               f"variable '{name}' -- replace with meaningful name"))
        return results

    # -- Check: Function pointer cast calls --

    def check_func_ptr_cast_calls(self):
        """Detect function-pointer cast invocations: ((FuncType)ptr)(args)

        These are IDA decompiler artifacts where a raw address or integer is
        cast to a function pointer and then called.

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        def predicate(node):
            if node.kind != clang.cindex.CursorKind.CALL_EXPR:
                return False
            children = list(node.get_children())
            if not children:
                return False
            callee = children[0]
            if callee.kind != clang.cindex.CursorKind.CSTYLE_CAST_EXPR:
                return False
            # The callee is a C-style cast -- check if target is a function pointer type
            target_type = callee.type.spelling
            if "(*)" not in target_type and not ("(" in target_type and ")" in target_type):
                return False
            return True

        for node, line in self._collect(predicate, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            results.append((line, "func-ptr-cast-call",
                           f"code={code}"))
        return results

    # -- Check: stub functions (comment shell, too few real lines) --
    # Note: This check needs the raw source text, not just AST.
    # The AST approach here is to get function line ranges.

    def get_function_ranges(self):
        """Get function body line ranges from AST.

        Returns list of (func_name, start_line, end_line) tuples for
        function definitions in the target file only.
        """
        results = []

        for node, _ in self._collect(
            lambda n: n.kind in (
                clang.cindex.CursorKind.FUNCTION_DECL,
                clang.cindex.CursorKind.CXX_METHOD,
                clang.cindex.CursorKind.CONSTRUCTOR,
                clang.cindex.CursorKind.DESTRUCTOR,
            ),
            skip_system=True,
        ):
            if not self._is_target_file_loc(node.location):
                continue
            if not node.is_definition():
                continue
            name = node.displayname or node.spelling
            if not name:
                continue
            # Get extent
            extent = node.extent
            if not extent:
                continue
            start_line = extent.start.line
            end_line = extent.end.line
            results.append((name, start_line, end_line))

        # Sort by start line, dedup by start line (prefer longer ranges)
        results.sort(key=lambda x: (x[1], -(x[2] - x[1])))
        seen_starts = set()
        deduped = []
        for name, start, end in results:
            if start in seen_starts:
                continue
            seen_starts.add(start)
            deduped.append((name, start, end))
        return deduped

    # -- Check: memcpy bypass of ptr<->non-ptr conversions --

    def check_memcpy_bypass(self):
        """Detect ptr<->non-ptr conversions disguised via memcpy/memmove/CopyMemory.

        Catches:
          - memcpy(&intVar, &ptrField, 4) -- int <-> pointer via memcpy
          - memcpy(&dock, &dockStorage, sizeof(dock)) -- struct <-> pointer via memcpy

        For the first two arguments of a memcpy-like call, checks if the underlying
        pointee types differ in pointer-ness (one is a pointer, the other is not).

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        _MEMCPY_NAMES = {'memcpy', 'memmove', 'CopyMemory', 'qmemcpy'}

        def _is_pointer_typ(typ):
            if typ.kind == clang.cindex.TypeKind.POINTER:
                return True
            try:
                if typ.get_pointee().kind != clang.cindex.TypeKind.INVALID:
                    return True
            except Exception:
                pass
            return False

        def _get_callee_name(callee_node):
            """Get the effective callee name, looking through DECL_REF_EXPR
            into OVERLOADED_DECL_REF for overloaded functions like memcpy."""
            name = callee_node.displayname or callee_node.spelling
            if name:
                return name
            # Check grandchildren for OVERLOADED_DECL_REF
            for child in callee_node.get_children():
                cname = child.displayname or child.spelling
                if cname:
                    return cname
            return ''

        def predicate(node):
            if node.kind != clang.cindex.CursorKind.CALL_EXPR:
                return False
            children = list(node.get_children())
            if not children:
                return False
            callee = children[0]
            callee_name = _get_callee_name(callee)
            if callee_name not in _MEMCPY_NAMES:
                return False
            # Arguments are children[1:]
            args = children[1:]
            if len(args) < 2:
                return False
            arg0 = args[0]
            arg1 = args[1]

            # Get pointee types (strip one level of & if present)
            arg0_type = arg0.type
            arg1_type = arg1.type

            # If argument type is a pointer (e.g. from &var), get pointee
            # Otherwise use the type directly
            if arg0_type.kind == clang.cindex.TypeKind.POINTER:
                arg0_inner = arg0_type.get_pointee()
            else:
                arg0_inner = arg0_type

            if arg1_type.kind == clang.cindex.TypeKind.POINTER:
                arg1_inner = arg1_type.get_pointee()
            else:
                arg1_inner = arg1_type

            # Skip only when BOTH inner types are unresolvable
            arg0_dep = arg0_inner.kind == clang.cindex.TypeKind.DEPENDENT
            arg1_dep = arg1_inner.kind == clang.cindex.TypeKind.DEPENDENT
            if arg0_dep and arg1_dep:
                return False
            # If one is dependent, infer from the other
            if arg0_dep:
                # arg0 type unknown, but arg1 is resolved -- check arg1
                arg0_is_ptr = not _is_pointer_typ(arg1_inner)  # assume arg0 differs
                arg1_is_ptr = _is_pointer_typ(arg1_inner)
            elif arg1_dep:
                arg0_is_ptr = _is_pointer_typ(arg0_inner)
                arg1_is_ptr = not _is_pointer_typ(arg0_inner)  # assume arg1 differs
            else:
                arg0_is_ptr = _is_pointer_typ(arg0_inner)
                arg1_is_ptr = _is_pointer_typ(arg1_inner)

            # Flag when pointer-ness differs (one is pointer, other is not)
            return arg0_is_ptr != arg1_is_ptr

        for node, line in self._collect(predicate, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            children = list(node.get_children())
            callee_name = _get_callee_name(children[0]) if children else "?"
            args = children[1:]
            arg0_type = args[0].type.spelling if len(args) > 0 else "?"
            arg1_type = args[1].type.spelling if len(args) > 1 else "?"
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            results.append((line, "ptr-nonptr-conv",
                           f"memcpy({arg0_type}, {arg1_type}, ...) -- pointer<->non-pointer conversion via {callee_name} code={code}"))
        return results

    # -- Check: IDA artifact names (field_*, dword_*, sub_*, unk_*) --

    def check_ida_artifact_names(self):
        """Detect IDA decompiler artifact names in member/variable declarations.

        Catches:
          - BuildingClass_field_bool_6DC -- field_ prefix
          - dword_812000 -- dword_ prefix
          - sub_4A1230 -- sub_ prefix
          - unk_12345 -- unk_ prefix

        Scans both MEMBER_REF_EXPR (member accesses) and VAR_DECL (variable
        declarations) in target source files.

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        _IDA_ARTIFACT_PREFIXES = ('field_', 'dword_', 'sub_', 'unk_')

        def _is_ida_artifact(name):
            if not name:
                return False
            for prefix in _IDA_ARTIFACT_PREFIXES:
                if prefix in name:
                    return True
            return False

        # Check variable declarations (VAR_DECL)
        for node, line in self._collect(
            lambda n: (n.kind == clang.cindex.CursorKind.VAR_DECL
                       and _is_ida_artifact(n.displayname)),
            skip_system=True,
        ):
            if not self._is_target_file_loc(node.location):
                continue
            name = node.displayname
            results.append((line, "ida-naming",
                           f"variable '{name}' -- unnamed IDA artifact, use proper name"))

        # Check member access expressions (MEMBER_REF_EXPR)
        for node, line in self._collect(
            lambda n: (n.kind == clang.cindex.CursorKind.MEMBER_REF_EXPR
                       and _is_ida_artifact(n.displayname)),
            skip_system=True,
        ):
            if not self._is_target_file_loc(node.location):
                continue
            name = node.displayname
            results.append((line, "ida-naming",
                           f"member '{name}' -- unnamed IDA artifact, use proper name"))

        # Regex fallback: when MEMBER_REF_EXPR displayname is empty (unresolved member),
        # scan the source line for ida artifact names via regex
        import re as _re
        _IDA_ARTIFACT_RE = _re.compile(r'(?:->|\.)\s*(\w*(?:field_|dword_|sub_|unk_)\w+)')
        try:
            with open(self.filepath, 'r', encoding='utf-8', errors='replace') as f:
                source_lines = f.readlines()
            for i, line_text in enumerate(source_lines, 1):
                for m in _IDA_ARTIFACT_RE.finditer(line_text):
                    name = m.group(1)
                    if _is_ida_artifact(name):
                        # Check if we already have a result for this line
                        if not any(r[0] == i for r in results):
                            results.append((i, "ida-naming",
                                          f"member '{name}' -- unnamed IDA artifact, use proper name"))
        except Exception:
            pass

        return results

    # -- Check: Pointer <-> non-pointer conversions (Rule 1) --

    def check_ptr_nonptr_conversions(self):
        """Detect pointer<->non-pointer conversions (bidirectional).

        Catches:
          - (int*)someInt           -- non-ptr -&gt; ptr (CStyleCastExpr)
          - (int)somePtr            -- ptr -&gt; non-ptr (CStyleCastExpr)
          - static_cast<int*>(x)    -- non-ptr -&gt; ptr via C++ cast
          - uintptr_t u = ptr;      -- implicit ptr -&gt; integer
          - int* p = 0;             -- implicit 0 -&gt; ptr (allowed, null pointer constant)

        Exceptions:
          - nullptr -- always allowed
          - (T*)0 or (T*)nullptr -- null pointer constant, allowed
          - (void)expr -- discard expression, not a real conversion

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        def _is_pointer_typ(typ):
            """Check if a type is a pointer type (via TypeKind, not string)."""
            if typ.kind == clang.cindex.TypeKind.POINTER:
                return True
            # get_pointee returns non-INVALID for pointer types
            try:
                if typ.get_pointee().kind != clang.cindex.TypeKind.INVALID:
                    return True
            except Exception:
                pass
            return False

        def _is_void_typ(typ):
            """Check if a type is void."""
            return typ.kind == clang.cindex.TypeKind.VOID

        def _is_null_expr(node):
            """Check if a node is a null pointer constant: nullptr, 0, NULL."""
            # C++11 nullptr
            if node.kind == clang.cindex.CursorKind.CXX_NULL_PTR_LITERAL_EXPR:
                return True
            # Integer literal 0
            if node.kind == clang.cindex.CursorKind.INTEGER_LITERAL:
                tokens = list(node.get_tokens())
                val = "".join(t.spelling for t in tokens).strip()
                try:
                    if int(val, 0) == 0:
                        return True
                except ValueError:
                    pass
            # Macro expansion of NULL -&gt; integer literal 0 (caught above)
            # Macro expansion of NULL -&gt; __null (caught by CXX_NULL_PTR_LITERAL_EXPR)
            return False

        def _get_source_expr(cast_node):
            """Extract the expression being cast from a cast node.

            CStyleCastExpr children: [TYPE_REF, sub_expr]
            CXXStaticCastExpr children: [TYPE_REF, sub_expr]
            CXXReinterpretCastExpr children: [TYPE_REF, sub_expr]
            CXXDynamicCastExpr children: [TYPE_REF, sub_expr]
            """
            children = list(cast_node.get_children())
            if not children:
                return None
            # For explicit casts, first child is TYPE_REF, second is the expression
            for child in children:
                if child.kind != clang.cindex.CursorKind.TYPE_REF:
                    return child
            return children[-1] if children else None

        # -- Check explicit casts (C-style, static, reinterpret) --
        _EXPLICIT_CAST_KINDS = {
            clang.cindex.CursorKind.CSTYLE_CAST_EXPR,
            clang.cindex.CursorKind.CXX_STATIC_CAST_EXPR,
            clang.cindex.CursorKind.CXX_REINTERPRET_CAST_EXPR,
        }

        def predicate_explicit(node):
            if node.kind not in _EXPLICIT_CAST_KINDS:
                return False
            target_type = node.type
            src_expr = _get_source_expr(node)
            if src_expr is None:
                return False
            src_type = src_expr.type

            # Skip if source type is unresolvable (dependent) --
            # conservatively assume it might be a pointer (avoid false positive)
            if src_type.kind == clang.cindex.TypeKind.DEPENDENT:
                return False

            # Exception: (void)expr -- discard, not a conversion
            if _is_void_typ(target_type):
                return False
            # Exception: (T*)0 or (T*)nullptr -- null pointer constant
            if _is_pointer_typ(target_type) and _is_null_expr(src_expr):
                return False

            src_is_ptr = _is_pointer_typ(src_type)
            tgt_is_ptr = _is_pointer_typ(target_type)

            # Only flag when pointer-ness differs (XOR)
            return src_is_ptr ^ tgt_is_ptr

        for node, line in self._collect(predicate_explicit, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            target_type = node.type.spelling
            src_expr = _get_source_expr(node)
            src_type = src_expr.type.spelling if src_expr else "?"
            src_is_ptr = _is_pointer_typ(src_expr.type) if src_expr else False
            tgt_is_ptr = _is_pointer_typ(node.type)

            direction = "pointer-to-non-pointer" if src_is_ptr else "non-pointer-to-pointer"
            # Build code snippet
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            detail = f"{src_type} -&gt; {target_type} ({direction}) code={code}"
            results.append((line, "ptr-nonptr-conv", detail))

        # -- Check std::bit_cast calls (UnexposedExpr: not a cast expression,
        #     but semantically equivalent to pointer<->non-pointer reinterpretation).
        #     AST: RETURN_STMT -&gt; UNEXPOSED_EXPR -&gt; DECL_REF_EXPR(bit_cast) + arg
        #     DECL_REF_EXPR children: NAMESPACE_REF(std) + OVERLOADED_DECL_REF(bit_cast) + TYPE_REF
        # --
        def predicate_bitcast(node):
            if node.kind != clang.cindex.CursorKind.UNEXPOSED_EXPR:
                return False
            children = list(node.get_children())
            callee = None
            arg_node = None
            for child in children:
                if child.kind == clang.cindex.CursorKind.DECL_REF_EXPR:
                    callee = child
                else:
                    arg_node = child
            if callee is None or arg_node is None:
                return False
            # Check DECL_REF_EXPR children for bit_cast + TYPE_REF
            has_bit_cast = False
            tgt_is_record = False
            for gc in callee.get_children():
                if gc.kind == clang.cindex.CursorKind.OVERLOADED_DECL_REF:
                    if gc.spelling == 'bit_cast':
                        has_bit_cast = True
                if gc.kind == clang.cindex.CursorKind.TYPE_REF:
                    if gc.type.kind == clang.cindex.TypeKind.RECORD:
                        tgt_is_record = True
            if not has_bit_cast:
                return False
            # Get argument type -- unwind unexposed/paren wrapping
            while arg_node.kind in (clang.cindex.CursorKind.UNEXPOSED_EXPR,
                                    clang.cindex.CursorKind.PAREN_EXPR):
                sub = list(arg_node.get_children())
                if not sub:
                    break
                arg_node = sub[0]
            src_type = arg_node.type
            if src_type.kind == clang.cindex.TypeKind.DEPENDENT:
                return False
            src_is_ptr = _is_pointer_typ(src_type)
            # Flag if: argument is non-pointer AND target type context suggests pointer
            # (TYPE_REF is a RECORD type used as pointer in template arg)
            return (not src_is_ptr) and tgt_is_record

        for node, line in self._collect(predicate_bitcast, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            children = list(node.get_children())
            arg_node = None
            callee_node = None
            for child in children:
                if child.kind == clang.cindex.CursorKind.DECL_REF_EXPR:
                    callee_node = child
                else:
                    arg_node = child
            # Extract TYPE_REF typename
            tgt_typename = "?"
            if callee_node:
                for gc in callee_node.get_children():
                    if gc.kind == clang.cindex.CursorKind.TYPE_REF:
                        tgt_typename = gc.type.spelling
                        break
            # Unwrap argument
            while arg_node and arg_node.kind in (clang.cindex.CursorKind.UNEXPOSED_EXPR,
                                                  clang.cindex.CursorKind.PAREN_EXPR):
                sub = list(arg_node.get_children())
                if not sub:
                    break
                arg_node = sub[0]
            src_type = arg_node.type.spelling if arg_node and arg_node.type.spelling else "?"
            # Build code snippet
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            detail = f"std::bit_cast<{tgt_typename}>({src_type}) -- implicit non-pointer-to-pointer conversion code={code}"
            results.append((line, "ptr-nonptr-conv", detail))

        results.sort(key=lambda x: x[1])
        return results

    # -- Check: Pointer-to-pointer cast rules (Rule 2) --

    def check_ptr_cast_rules(self):
        """Detect illegal pointer-to-pointer casts.

        When both source and target are pointers, only allow:
          - Upcast: Derived* -&gt; Base* (implicit, C-style, or static_cast)
          - dynamic_cast downcast: Base* -&gt; Derived* via dynamic_cast

        Banned:
          - C-style between unrelated types: (BuildingClass*)housePtr
          - reinterpret_cast: always banned
          - void* <-> any pointer: banned
          - static_cast downcast: static_cast<Derived*>(basePtr)

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        def _is_pointer_typ(typ):
            if typ.kind == clang.cindex.TypeKind.POINTER:
                return True
            try:
                if typ.get_pointee().kind != clang.cindex.TypeKind.INVALID:
                    return True
            except Exception:
                pass
            return False

        def _get_pointee_type(typ):
            """Get the pointee type of a pointer type."""
            if typ.kind == clang.cindex.TypeKind.POINTER:
                return typ.get_pointee()
            try:
                p = typ.get_pointee()
                if p.kind != clang.cindex.TypeKind.INVALID:
                    return p
            except Exception:
                pass
            return None

        def _get_decl_cursor(typ):
            """Get the declaration cursor for a type."""
            try:
                decl = typ.get_declaration()
                if decl and decl.kind != clang.cindex.CursorKind.NO_DECL_FOUND:
                    return decl
            except Exception:
                pass
            # Try canonical type
            try:
                canonical = typ.get_canonical()
                decl = canonical.get_declaration()
                if decl and decl.kind != clang.cindex.CursorKind.NO_DECL_FOUND:
                    return decl
            except Exception:
                pass
            return None

        def _collect_base_decls(class_cursor, visited=None):
            """Collect all base class declaration cursors for a class/struct."""
            if visited is None:
                visited = set()
            bases = []
            if class_cursor in visited:
                return bases
            visited.add(class_cursor)
            for child in class_cursor.get_children():
                if child.kind == clang.cindex.CursorKind.CXX_BASE_SPECIFIER:
                    try:
                        base_type = child.type
                        base_decl = _get_decl_cursor(base_type)
                        if base_decl:
                            bases.append(base_decl)
                            bases.extend(_collect_base_decls(base_decl, visited))
                    except Exception:
                        pass
            return bases

        def _is_upcast(src_pointee_typ, tgt_pointee_typ):
            """Check if tgt_pointee_typ is a base class of src_pointee_typ."""
            # Identity cast -- same canonical type -&gt; always OK
            if src_pointee_typ.get_canonical().spelling == tgt_pointee_typ.get_canonical().spelling:
                return True
            src_decl = _get_decl_cursor(src_pointee_typ)
            tgt_decl = _get_decl_cursor(tgt_pointee_typ)
            if not src_decl or not tgt_decl:
                return False
            if src_decl == tgt_decl:
                return True  # identity cast via decl cursors
            bases = _collect_base_decls(src_decl)
            return tgt_decl in bases

        def _is_void_ptr(typ):
            """Check if type is void at ANY pointer depth (void*, void**, void***, etc.)."""
            cur = typ
            while True:
                if not _is_pointer_typ(cur):
                    return False
                pointee = _get_pointee_type(cur)
                if pointee is None:
                    return False
                if pointee.kind == clang.cindex.TypeKind.VOID:
                    return True
                cur = pointee

        def _unwrap_null_expr(expr, depth=0):
            """Unwrap implicit casts to check if root expression is a null pointer constant."""
            if depth > 5:
                return False
            # Direct null check
            if expr.kind == clang.cindex.CursorKind.CXX_NULL_PTR_LITERAL_EXPR:
                return True
            if expr.kind == clang.cindex.CursorKind.INTEGER_LITERAL:
                tokens = list(expr.get_tokens())
                val = "".join(t.spelling for t in tokens).strip()
                try:
                    if int(val, 0) == 0:
                        return True
                except ValueError:
                    pass
            # Check children for intermediate expression wrapping (implicit cast, paren expr)
            children = list(expr.get_children())
            for child in children:
                if child.kind in (clang.cindex.CursorKind.PAREN_EXPR,
                                  clang.cindex.CursorKind.UNEXPOSED_EXPR):
                    if _unwrap_null_expr(child, depth + 1):
                        return True
            # If child count is 1 and type matches, could be implicit conversion
            if len(children) == 1:
                return _unwrap_null_expr(children[0], depth + 1)
            return False

        # -- Check C-style casts --
        def predicate_cstyle(node):
            if node.kind != clang.cindex.CursorKind.CSTYLE_CAST_EXPR:
                return False
            target_type = node.type
            if not _is_pointer_typ(target_type):
                return False
            # Find source expression (skip TYPE_REF child)
            children = list(node.get_children())
            src_expr = None
            for child in children:
                if child.kind != clang.cindex.CursorKind.TYPE_REF:
                    src_expr = child
                    break
            if src_expr is None:
                return False
            src_type = src_expr.type
            if not _is_pointer_typ(src_type):
                return False

            # Skip if source type is unresolvable (dependent) -- avoid false positives
            if src_type.kind == clang.cindex.TypeKind.DEPENDENT:
                return False

            # Both are pointers -- now check rules
            # Null pointer constant: (T*)0, (T*)nullptr -&gt; allowed
            if _unwrap_null_expr(src_expr):
                return False
            # void* involved -&gt; banned
            if _is_void_ptr(src_type) or _is_void_ptr(target_type):
                return True

            # Check if upcast (target is base of source)
            src_pointee = _get_pointee_type(src_type)
            tgt_pointee = _get_pointee_type(target_type)
            if src_pointee and tgt_pointee:
                if _is_upcast(src_pointee, tgt_pointee):
                    return False  # upcast is OK

            # Unrelated or downcast -&gt; banned
            return True

        for node, line in self._collect(predicate_cstyle, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            target_type = node.type.spelling
            children = list(node.get_children())
            src_expr = None
            for child in children:
                if child.kind != clang.cindex.CursorKind.TYPE_REF:
                    src_expr = child
                    break
            src_type = src_expr.type.spelling if src_expr else "?"
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            if _is_void_ptr(node.type) or _is_void_ptr(src_expr.type if src_expr else None):
                reason = "void* conversion"
            else:
                reason = "C-style cast between unrelated pointer types"
            detail = f"{src_type} -&gt; {target_type} ({reason}) -- only parent-child class pointer casts allowed code={code}"
            results.append((line, "illegal-ptr-cast", detail))

        # -- Check C++-style casts --
        def predicate_cxx_cast(node):
            # reinterpret_cast -&gt; always banned (if both pointers)
            if node.kind == clang.cindex.CursorKind.CXX_REINTERPRET_CAST_EXPR:
                target_type = node.type
                if not _is_pointer_typ(target_type):
                    return False
                children = list(node.get_children())
                src_expr = None
                for child in children:
                    if child.kind != clang.cindex.CursorKind.TYPE_REF:
                        src_expr = child
                        break
                if src_expr is None or not _is_pointer_typ(src_expr.type):
                    return False
                return True  # reinterpret_cast between pointers -&gt; banned

            # dynamic_cast -&gt; always OK (runtime checked)
            if node.kind == clang.cindex.CursorKind.CXX_DYNAMIC_CAST_EXPR:
                return False

            # static_cast
            if node.kind != clang.cindex.CursorKind.CXX_STATIC_CAST_EXPR:
                return False
            target_type = node.type
            if not _is_pointer_typ(target_type):
                return False
            children = list(node.get_children())
            src_expr = None
            for child in children:
                if child.kind != clang.cindex.CursorKind.TYPE_REF:
                    src_expr = child
                    break
            if src_expr is None or not _is_pointer_typ(src_expr.type):
                return False

            src_type = src_expr.type

            # Skip if source type is unresolvable (dependent) -- avoid false positives
            if src_type.kind == clang.cindex.TypeKind.DEPENDENT:
                return False

            # void* involved -&gt; banned
            if _is_void_ptr(src_type) or _is_void_ptr(target_type):
                return True

            # Check if upcast
            src_pointee = _get_pointee_type(src_type)
            tgt_pointee = _get_pointee_type(target_type)
            if src_pointee and tgt_pointee:
                if _is_upcast(src_pointee, tgt_pointee):
                    return False

            # static_cast downcast or unrelated -&gt; banned
            return True

        for node, line in self._collect(predicate_cxx_cast, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            target_type = node.type.spelling
            children = list(node.get_children())
            src_expr = None
            for child in children:
                if child.kind != clang.cindex.CursorKind.TYPE_REF:
                    src_expr = child
                    break
            src_type = src_expr.type.spelling if src_expr else "?"
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            if node.kind == clang.cindex.CursorKind.CXX_REINTERPRET_CAST_EXPR:
                reason = "reinterpret_cast between pointer types"
            elif _is_void_ptr(node.type) or _is_void_ptr(src_expr.type if src_expr else None):
                reason = "void* conversion via static_cast"
            else:
                reason = "static_cast downcast or unrelated pointer types"
            detail = f"{src_type} -&gt; {target_type} ({reason}) -- only parent-child class pointer casts allowed code={code}"
            results.append((line, "illegal-ptr-cast", detail))

        results.sort(key=lambda x: x[1])
        return results

    # -- Run all checks --

    def run_all_checks(self):
        """Run all violation checks and return combined results.

        Returns list of (line_no, category, detail) tuples.
        """
        all_results = []
        all_results.extend(self.check_cxx_casts())
        all_results.extend(self.check_goto_statements())
        all_results.extend(self.check_pointer_arithmetic())
        all_results.extend(self.check_pointer_subscript())
        all_results.extend(self.check_hex_pointers())
        all_results.extend(self.check_nonptr_to_ptr_casts())
        all_results.extend(self.check_vn_variables())
        all_results.extend(self.check_func_ptr_cast_calls())
        all_results.extend(self.check_memcpy_bypass())
        all_results.extend(self.check_ida_artifact_names())
        all_results.extend(self.check_ptr_nonptr_conversions())
        all_results.extend(self.check_ptr_cast_rules())
        # Sort by line number
        all_results.sort(key=lambda x: x[0])
        return all_results


# ===================================================
# Standalone usage
# ===================================================

def main():
    """Standalone: check a single file with all violation categories."""
    if len(sys.argv) < 2:
        print("Usage: python clang_ast_checker.py FILE.cpp", file=sys.stderr)
        sys.exit(1)

    filepath = sys.argv[1]
    if not os.path.isfile(filepath):
        print(f"ERROR: file not found: {filepath}", file=sys.stderr)
        sys.exit(1)

    checker = ClangChecker(filepath)
    checker.parse()
    print(f"Parsed: {checker.filepath}")

    results = checker.run_all_checks()
    for line, cat, detail in results:
        print(f"{checker.filepath}:{line}: error: {cat}: {detail}")

    print(f"\n{len(results)} violation(s) found.")
    sys.exit(1 if results else 0)


if __name__ == "__main__":
    main()
