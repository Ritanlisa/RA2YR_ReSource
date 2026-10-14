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
# X24: pointer-vs-array declaration resolution helpers
# ===================================================
#
# USER design ruling 2026-10-14: the gate must distinguish a POINTER (e.g.
# obtained from &) from an ARRAY.  In C++ an array operand in `a + 1` or
# `a[i]` decays to `int *` in the expression type, so expression types alone
# conflate the two.  These helpers resolve the DECLARATION (VarDecl/FieldDecl)
# or the innermost non-decayed expression type, which retains the array type.

_ARRAY_TYPE_KINDS = {
    clang.cindex.TypeKind.CONSTANTARRAY,
    clang.cindex.TypeKind.INCOMPLETEARRAY,
    clang.cindex.TypeKind.VARIABLEARRAY,
    clang.cindex.TypeKind.DEPENDENTSIZEDARRAY,
}

_WRAPPER_KIND_NAMES = ('UNEXPOSED_EXPR', 'IMPLICIT_CAST_EXPR', 'PAREN_EXPR')


def _is_array_type(typ):
    """True for array types (including reference-to-array).

    A decayed pointer expression (`a` in `a + 1` where a is `int[10]`) has
    kind POINTER; only the declaration / innermost expression keeps the array
    kind, which is exactly what makes this distinction reliable."""
    try:
        if typ.kind in _ARRAY_TYPE_KINDS:
            return True
        if typ.kind in (clang.cindex.TypeKind.LVALUEREFERENCE,
                        clang.cindex.TypeKind.RVALUEREFERENCE):
            return typ.get_pointee().kind in _ARRAY_TYPE_KINDS
    except Exception:
        pass
    return False


def _unwrap_expr(node):
    """Strip wrapper expressions (parens, implicit casts, unexposed wrappers)
    down to the innermost expression.  Never crosses a cast or unary operator:
    `((int*)p)[i]` stays a cast, `(*(int**)&p)[i]` stays a deref."""
    cur = node
    for _ in range(12):
        ch = list(cur.get_children())
        if cur.kind.name == 'PAREN_EXPR' and len(ch) == 1:
            cur = ch[0]
            continue
        if cur.kind.name in _WRAPPER_KIND_NAMES and len(ch) == 1:
            cur = ch[0]
            continue
        break
    return cur


def _resolves_to_array(node):
    """Resolve an expression to the array/pointer distinction.

    Returns (is_array, innermost_node).  True when the underlying declaration
    or the innermost expression carries an array type (array-to-pointer decay
    hides it at the top level of the expression)."""
    cur = _unwrap_expr(node)
    if _is_array_type(cur.type):
        return True, cur
    try:
        ref = cur.referenced
    except Exception:
        ref = None
    if ref is not None:
        try:
            if _is_array_type(ref.type):
                return True, cur
        except Exception:
            pass
    return False, cur


def _cast_operand(node):
    """Extract the operand expression of a cast node.

    libclang emits the operand as the LAST child; array-bound casts such as
    `(int (*)[10])p` additionally emit the bound INTEGER_LITERAL as a FIRST
    child (a known binding quirk), so children[0] is NOT the operand there."""
    ch = list(node.get_children())
    while ch and ch[-1].kind == clang.cindex.CursorKind.TYPE_REF:
        ch = ch[:-1]
    return ch[-1] if ch else None


def _top_level_binary_op(node, lhs, rhs):
    """Return the operator spelling of a binary/compound-assignment node
    ('+', '-', '+=', '-='), or None.  Token position is bounded by the child
    extents so nested operators inside either operand never leak in."""
    try:
        lhs_end = lhs.extent.end.offset
        rhs_start = rhs.extent.start.offset
    except Exception:
        return None
    for t in node.get_tokens():
        if t.spelling in ('+', '-', '+=', '-='):
            try:
                ts, te = t.extent.start.offset, t.extent.end.offset
            except Exception:
                continue
            if lhs_end <= ts and te <= rhs_start:
                return t.spelling
    return None


def _is_null_literal(node):
    """True for the null pointer constants 0 / nullptr (directly or wrapped)."""
    cur = node
    for _ in range(6):
        if cur.kind == clang.cindex.CursorKind.CXX_NULL_PTR_LITERAL_EXPR:
            return True
        if cur.kind == clang.cindex.CursorKind.INTEGER_LITERAL:
            toks = list(cur.get_tokens())
            try:
                if int("".join(t.spelling for t in toks).strip(), 0) == 0:
                    return True
            except ValueError:
                pass
            return False
        ch = list(cur.get_children())
        if len(ch) == 1 and cur.kind.name in _WRAPPER_KIND_NAMES:
            cur = ch[0]
            continue
        break
    return False


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
        # X24: allowed-usage ledger (R5 array subscript), filled by run_all_checks.
        self._allowed_usage = []

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

    # -- Check: C++ casts (static_cast, reinterpret_cast banned; dynamic_cast allowed --
    #          parent-to-child via dynamic_cast only)

    _CXX_CAST_KINDS = {
        clang.cindex.CursorKind.CXX_STATIC_CAST_EXPR: "static_cast",
        clang.cindex.CursorKind.CXX_REINTERPRET_CAST_EXPR: "reinterpret_cast",
    }

    def check_cxx_casts(self):
        """Detect forbidden C++-style casts (static_cast, reinterpret_cast).
        
        dynamic_cast is ALLOWED for parent-to-child conversions.
        static_cast and reinterpret_cast are always banned — use C-style casts instead.
        
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
            results.append((
                line, cast_name, 
                f"cast to {target_type}. "
                f"FIX: dynamic_cast is allowed for parent-to-child. "
                f"For all other casts, use C-style cast (Type)expr instead."
            ))
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
        """Detect pointer/array arithmetic: pointer-or-array operand in a
        binary '+'/'-' (or compound '+='/'−=' / unary ++/--) expression.

        X24 (USER design ruling 2026-10-14): the operand class is resolved
        from the DECLARATION (VarDecl/FieldDecl) / innermost expression type,
        not from the (array-decayed) expression type:

          R3 violation (`ptr-arithmetic`)  -- a POINTER must not use + / -:
              `p + 1`, `p - 1`, `g_ptr + i`, `s.ptr + 1`, `this + 1`,
              `(char*)this + 692`, `p - q` (pointer - pointer)
          R4 violation (`array-arithmetic`) -- an ARRAY must not use + / -:
              `a + 1`, `a - 1`, `g_arr + i`, `s.arr + 1`   (a: int[10])
          R5 allowed: array subscripting (handled in check_pointer_subscript)

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        def _operand_class(node):
            """'array' | 'ptr' | 'other' -- declaration-first resolution."""
            def _is_ptr_like(t):
                if t.kind == clang.cindex.TypeKind.POINTER:
                    return True
                try:
                    return t.get_pointee().kind != clang.cindex.TypeKind.INVALID
                except Exception:
                    return False
            is_arr, cur = _resolves_to_array(node)
            if is_arr:
                return 'array'
            if _is_ptr_like(node.type) or _is_ptr_like(cur.type):
                return 'ptr'
            try:
                ref = cur.referenced
            except Exception:
                ref = None
            if ref is not None:
                try:
                    if _is_ptr_like(ref.type):
                        return 'ptr'
                except Exception:
                    pass
            return 'other'

        def predicate(node):
            if node.kind == clang.cindex.CursorKind.UNARY_OPERATOR:
                # X24: pointer ++ / -- (unary inc/dec) is the same address
                # arithmetic as `p + 1` -- same rule (R3).
                ch = list(node.get_children())
                if len(ch) != 1:
                    return False
                operand = ch[0]
                op = None
                try:
                    o_start = operand.extent.start.offset
                    o_end = operand.extent.end.offset
                except Exception:
                    return False
                for t in node.get_tokens():
                    if t.spelling in ('++', '--'):
                        try:
                            ts, te = t.extent.start.offset, t.extent.end.offset
                        except Exception:
                            continue
                        if te <= o_start or ts >= o_end:  # prefix or postfix op
                            op = t.spelling
                            break
                if op is None:
                    return False
                return _operand_class(operand) == 'ptr'
            if node.kind not in (clang.cindex.CursorKind.BINARY_OPERATOR,
                                 clang.cindex.CursorKind.COMPOUND_ASSIGNMENT_OPERATOR):
                return False
            children = list(node.get_children())
            if len(children) < 2:
                return False
            lhs, rhs = children[0], children[1]
            op = _top_level_binary_op(node, lhs, rhs)
            if op not in ('+', '-', '+=', '-='):
                return False
            lc, rc = _operand_class(lhs), _operand_class(rhs)
            # R4: any array operand in +/- is a violation (user ruling).
            if lc == 'array' or rc == 'array':
                return True
            lp, rp = (lc == 'ptr'), (rc == 'ptr')
            # R3: pointer +/- integer (exactly one pointer operand).
            if lp != rp:
                return True
            # R3: pointer - pointer (distance arithmetic on pointers).
            if lp and rp and op in ('-', '-='):
                return True
            return False

        for node, line in self._collect(predicate, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            if node.kind == clang.cindex.CursorKind.UNARY_OPERATOR:
                operand = list(node.get_children())[0]
                toks = [t.spelling for t in node.get_tokens()]
                op = '++' if '++' in toks else '--'
                tokens = list(node.get_tokens())
                code = "".join(t.spelling for t in tokens)
                if len(code) > 120:
                    code = code[:117] + "..."
                subtype = "ptr-inc" if op == '++' else "ptr-dec"
                if operand.kind == clang.cindex.CursorKind.CXX_THIS_EXPR:
                    subtype += "/this"
                results.append((line, "ptr-arithmetic",
                               f"{op} {subtype} lhs={operand.type.spelling} code={code}"))
                continue
            children = list(node.get_children())
            lhs, rhs = children[0], children[1]
            op = _top_level_binary_op(node, lhs, rhs)
            lc, rc = _operand_class(lhs), _operand_class(rhs)
            if lc == 'array' or rc == 'array':
                cat = "array-arithmetic"
                side = ("lhs" if lc == 'array' else
                        "rhs" if rc == 'array' else "both")
                subtype = f"array{op}int/array-op-{side}"
            else:
                cat = "ptr-arithmetic"
                if lc == 'ptr' and rc == 'ptr':
                    subtype = "ptr-ptr"
                elif lc == 'ptr':
                    subtype = "ptr-int"
                else:
                    subtype = "int-ptr"
                if (lhs.kind == clang.cindex.CursorKind.CXX_THIS_EXPR
                        or rhs.kind == clang.cindex.CursorKind.CXX_THIS_EXPR):
                    subtype += "/this"
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
            results.append((line, cat,
                           f"{op} {subtype} offset={offset_str} "
                           f"lhs={lhs.type.spelling} rhs={rhs.type.spelling} "
                           f"code={code}"))
        return results

    # -- Check: Array subscript on pointer type (non-array pointer indexing) --

    def check_pointer_subscript(self):
        """Detect pointer subscript: pointer_var[index] where the base resolves
        to a POINTER (not an array).

        X24 (USER design ruling 2026-10-14):
          R2 violation (`cast-index`): a POINTER must not use [] --
              `p[i]`, `s.ptr[i]`, `((int*)this)[47]`, `(*(int**)&p)[i]`,
              `(p + 1)[i]`, `s.pp[i][0]`
          R5 ALLOWED (counted in self._allowed_usage as `array-subscript-ok`,
          never reported as a violation): an ARRAY may use [] --
              `a[i]`, `g_arr[i]`, `s.arr[i]`, `ap[i]` (int *ap[10]),
              `m[1][2]` (2-D array), `"ab"[0]` (string literal)

        The base is resolved through wrappers to its declaration / innermost
        expression type: array-to-pointer decay makes the *expression* type a
        pointer, but the declaration (`int a[10]`) or the innermost expression
        (`m[1]` : int[4]) still carries the array type.

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        def predicate(node):
            if node.kind != clang.cindex.CursorKind.ARRAY_SUBSCRIPT_EXPR:
                return False
            children = list(node.get_children())
            if not children:
                return False
            base = children[0]
            # R5: declared-array / array-typed base -> legitimate subscript.
            is_arr, _cur = _resolves_to_array(base)
            if is_arr:
                if self._is_target_file_loc(node.location):
                    toks = list(node.get_tokens())
                    code = "".join(t.spelling for t in toks)
                    if len(code) > 120:
                        code = code[:117] + "..."
                    self._allowed_usage.append((
                        node.location.line, "array-subscript-ok",
                        f"base_type={base.type.spelling} code={code}"))
                return False
            # Everything else in a built-in subscript is pointer-family
            # (overloaded operator[] is a CALL/CXX_OPERATOR_CALL node, not
            # ARRAY_SUBSCRIPT_EXPR, so no class-type false positives here).
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
                           f"R2 base_type={base_type} code={code}"))
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
            # X24: operand = LAST child; array-bound literals inside the cast
            # type (e.g. `(int (*)[0x10])p`) must not count as hex operands.
            operand = _cast_operand(node)
            if operand is not None and operand.kind == clang.cindex.CursorKind.INTEGER_LITERAL:
                tokens = list(operand.get_tokens())
                hex_str = "".join(t.spelling for t in tokens)
                if hex_str.startswith("0x") or hex_str.startswith("0X"):
                    return True
            return False

        for node, line in self._collect(predicate, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            operand = _cast_operand(node)
            hex_val = "?"
            if operand is not None and operand.kind == clang.cindex.CursorKind.INTEGER_LITERAL:
                tokens = list(operand.get_tokens())
                hex_val = "".join(t.spelling for t in tokens)
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
            # X24: operand is the LAST child (array-bound casts emit the bound
            # INTEGER_LITERAL as a first child -- children[0] was wrong there).
            src_expr = _cast_operand(node)
            if src_expr is None:
                return False
            # X24: array-involving casts are owned by check_ptr_array_casts
            # (R1d/R1c) -- do not double-report them here.
            is_arr, _cur = _resolves_to_array(src_expr)
            if is_arr:
                return False
            try:
                if _is_array_type(node.type.get_pointee()):
                    return False
            except Exception:
                pass
            # If source expression type is unresolvable (DEPENDENT / UNEXPOSED),
            # conservatively assume it might be a pointer -> skip (avoid false positive)
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
            # If source IS a pointer, this is ptr-to-ptr cast -> legitimate
            if src_is_ptr:
                return False
            # Skip function-to-pointer conversions (function names decay to function ptrs)
            # These are needed for callback registration
            src_type = src_expr.type.spelling
            if "(" in src_type and ")" in src_type:
                return False
            # Skip integer literal casts like (char*)0 (null pointer constants)
            if src_expr.kind == clang.cindex.CursorKind.INTEGER_LITERAL:
                tokens = list(src_expr.get_tokens())
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
            # X24: operand extraction must use the LAST child (see predicate).
            src_expr = _cast_operand(node)
            src_type = src_expr.type.spelling if src_expr and src_expr.type.spelling else "?"
            target_type = node.type.spelling
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            results.append((line, "non-ptr-to-ptr",
                           f"R1b cast from non-ptr {src_type} to ({target_type}) code={code}"))
        return results

    # -- Check: casts between the pointer and array type families (X24 R1) --

    def check_ptr_array_casts(self):
        """Detect casts between the pointer family and the array family.

        USER design ruling 2026-10-14 (R1): "a POINTER must NOT be cast
        to/from an array".  Sub-classified by direction:

          R1d `array-to-ptr`   -- `(int*)a`, `(char*)a` where `a` is int[10]
                                  (array-to-pointer decay cast; element type
                                  comparison is recorded: same-elem/diff-elem)
          R1c `ptr-to-arrayptr`-- `(int (*)[10])p` (pointer to array pointer)

        Identity casts (canonical types equal) and null-pointer constants are
        exempt.  Non-pointer/non-array sources (`(T*)intVar`) and unrelated
        pointer-to-pointer casts (`(char*)p`) stay with the existing R1
        categories (`non-ptr-to-ptr` / `ptr-nonptr-conv` / `illegal-ptr-cast`).

        Returns list of (line_no, category, detail) tuples.
        """
        results = []

        _CAST_KINDS = {
            clang.cindex.CursorKind.CSTYLE_CAST_EXPR,
            clang.cindex.CursorKind.CXX_STATIC_CAST_EXPR,
            clang.cindex.CursorKind.CXX_REINTERPRET_CAST_EXPR,
        }

        def predicate(node):
            if node.kind not in _CAST_KINDS:
                return False
            target_type = node.type
            if target_type.kind != clang.cindex.TypeKind.POINTER:
                return False
            src_expr = _cast_operand(node)
            if src_expr is None:
                return False
            # null pointer constants: (T*)0, (T*)nullptr -- allowed
            if _is_null_literal(src_expr):
                return False
            # X24: resolve array FIRST.  For `(int*)a` with `a` : int[10] the
            # expression type is already decayed to `int *`, so an identity
            # check on the expression type would wrongly exempt it.
            is_arr, _cur = _resolves_to_array(src_expr)
            if is_arr:
                return True
            # identity cast (same canonical type) -- allowed
            try:
                if (src_expr.type.get_canonical().spelling
                        == target_type.get_canonical().spelling):
                    return False
            except Exception:
                pass
            try:
                if _is_array_type(target_type.get_pointee()):
                    return True
            except Exception:
                pass
            return False

        for node, line in self._collect(predicate, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            target_type = node.type
            src_expr = _cast_operand(node)
            src_type = src_expr.type.spelling if src_expr else "?"
            is_arr, cur = _resolves_to_array(src_expr) if src_expr else (False, None)
            try:
                tgt_is_arrayptr = _is_array_type(target_type.get_pointee())
            except Exception:
                tgt_is_arrayptr = False
            if is_arr:
                subtype = "array-to-arrayptr" if tgt_is_arrayptr else "array-to-ptr"
                # element comparison for transparency (same-element decay casts
                # vs element-changing casts)
                try:
                    elem = None
                    if cur is not None:
                        if _is_array_type(cur.type):
                            elem = cur.type.get_array_element_type()
                        else:
                            ref = cur.referenced
                            if ref is not None and _is_array_type(ref.type):
                                elem = ref.type.get_array_element_type()
                    if elem is not None and elem.kind != clang.cindex.TypeKind.INVALID:
                        if (elem.get_canonical().spelling
                                == target_type.get_pointee().get_canonical().spelling):
                            subtype += "/same-elem"
                        else:
                            subtype += "/diff-elem"
                except Exception:
                    pass
                # show the DECLARED source type (int[10]), not the decayed one
                try:
                    if cur is not None and _is_array_type(cur.type):
                        src_type = cur.type.spelling
                    else:
                        ref = cur.referenced if cur is not None else None
                        if ref is not None and _is_array_type(ref.type):
                            src_type = ref.type.spelling
                except Exception:
                    pass
            else:
                subtype = "ptr-to-arrayptr"
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            results.append((line, "ptr-array-cast",
                           f"R1 {subtype} {src_type} -> {target_type.spelling} code={code}"))
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

    def check_bit_cast_bypass(self):
        """Detect std::bit_cast used to bypass ptr<->non-ptr conversion rules.
        
        bit_cast is a circumvention of the pointer-cast restrictions.
        Any use of bit_cast to convert between pointer and integer types is banned.
        
        Returns list of (line_no, category, detail) tuples.
        """
        results = []
        for node, line in self._collect(
            lambda n: n.kind == clang.cindex.CursorKind.CALL_EXPR,
            skip_system=True,
        ):
            if not self._is_target_file_loc(node.location):
                continue
            children = list(node.get_children())
            if not children:
                continue
            callee = children[0]
            callee_name = callee.displayname or callee.spelling
            if 'bit_cast' not in callee_name:
                continue
            # Collect the code snippet
            tokens = list(node.get_tokens())
            code = ''.join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + '...'
            results.append((
                line, 'bit-cast-bypass',
                f'std::bit_cast used to convert between incompatible types — '
                f'this is a circumvention of the pointer-cast rules. '
                f'FIX: use proper member access (ptr->memberName) instead of '
                f'reading raw bytes. Code: {code}'
            ))
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
                           f"variable '{name}' contains IDA artifact prefix "
                           f"('field_', 'dword_', 'sub_', or 'unk_'). "
                           f"FIX: use python tools/rename_symbol.py {name} NewDescriptiveName "
                           f"to batch-rename across all files + signals.json + IDA. "
                           f"Manual renames are blocked by the gate."))

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
                           f"member '{name}' contains IDA artifact prefix "
                           f"('field_', 'dword_', 'sub_', or 'unk_'). "
                           f"FIX: use python tools/rename_symbol.py {name} NewDescriptiveName "
                           f"to batch-rename across all files + signals.json + IDA. "
                           f"Manual renames are blocked by the gate."))

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
                                          f"member '{name}' contains IDA artifact prefix. "
                                          f"FIX: use python tools/rename_symbol.py {name} NewDescriptiveName"))
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

            X24: the operand is the LAST child.  Array-bound casts like
            `(int (*)[10])p` emit the bound INTEGER_LITERAL as a first child
            (libclang quirk), so 'first non-TYPE_REF child' mis-picked it.
            """
            ch = list(cast_node.get_children())
            while ch and ch[-1].kind == clang.cindex.CursorKind.TYPE_REF:
                ch = ch[:-1]
            return ch[-1] if ch else None

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

            # X24: array-involving casts are owned by check_ptr_array_casts
            # (R1c/R1d) -- do not double-report them here.
            is_arr, _cur = _resolves_to_array(src_expr)
            if is_arr:
                return False
            if _is_pointer_typ(target_type):
                try:
                    if _is_array_type(target_type.get_pointee()):
                        return False
                except Exception:
                    pass

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
            rule_tag = "R1a" if src_is_ptr else "R1b"
            # Build code snippet
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            detail = f"{rule_tag} {src_type} -> {target_type} ({direction}) code={code}"
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
            detail = f"R1b std::bit_cast<{tgt_typename}>({src_type}) -- implicit non-pointer-to-pointer conversion code={code}"
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
            # X24: operand = LAST child (array-bound casts emit bound literal first)
            src_expr = _cast_operand(node)
            if src_expr is None:
                return False
            src_type = src_expr.type
            if not _is_pointer_typ(src_type):
                return False

            # Skip if source type is unresolvable (dependent) -- avoid false positives
            if src_type.kind == clang.cindex.TypeKind.DEPENDENT:
                return False

            # X24: array-involving casts are owned by check_ptr_array_casts.
            is_arr, _cur = _resolves_to_array(src_expr)
            if is_arr:
                return False
            try:
                if _is_array_type(target_type.get_pointee()):
                    return False
            except Exception:
                pass

            # Both are pointers -- now check rules
            # Null pointer constant: (T*)0, (T*)nullptr -> allowed
            if _unwrap_null_expr(src_expr):
                return False
            # void* involved -> banned
            if _is_void_ptr(src_type) or _is_void_ptr(target_type):
                return True

            # Check if upcast (target is base of source)
            src_pointee = _get_pointee_type(src_type)
            tgt_pointee = _get_pointee_type(target_type)
            if src_pointee and tgt_pointee:
                if _is_upcast(src_pointee, tgt_pointee):
                    return False  # upcast is OK

            # Unrelated or downcast -> banned
            return True

        for node, line in self._collect(predicate_cstyle, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            target_type = node.type.spelling
            src_expr = _cast_operand(node)
            src_type = src_expr.type.spelling if src_expr else "?"
            tokens = list(node.get_tokens())
            code = "".join(t.spelling for t in tokens)
            if len(code) > 120:
                code = code[:117] + "..."
            if _is_void_ptr(node.type) or _is_void_ptr(src_expr.type if src_expr else None):
                reason = "void* conversion"
            else:
                reason = "C-style cast between unrelated pointer types"
            detail = f"R1 {src_type} -> {target_type} ({reason}) -- only parent-child class pointer casts allowed code={code}"
            results.append((line, "illegal-ptr-cast", detail))

        # -- Check C++-style casts --
        def predicate_cxx_cast(node):
            # reinterpret_cast -> always banned (if both pointers)
            if node.kind == clang.cindex.CursorKind.CXX_REINTERPRET_CAST_EXPR:
                target_type = node.type
                if not _is_pointer_typ(target_type):
                    return False
                src_expr = _cast_operand(node)
                if src_expr is None or not _is_pointer_typ(src_expr.type):
                    return False
                # X24: array-involving casts are owned by check_ptr_array_casts.
                is_arr, _cur = _resolves_to_array(src_expr)
                if is_arr:
                    return False
                try:
                    if _is_array_type(target_type.get_pointee()):
                        return False
                except Exception:
                    pass
                return True  # reinterpret_cast between pointers -> banned

            # dynamic_cast -> always OK (runtime checked)
            if node.kind == clang.cindex.CursorKind.CXX_DYNAMIC_CAST_EXPR:
                return False

            # static_cast
            if node.kind != clang.cindex.CursorKind.CXX_STATIC_CAST_EXPR:
                return False
            target_type = node.type
            if not _is_pointer_typ(target_type):
                return False
            src_expr = _cast_operand(node)
            if src_expr is None or not _is_pointer_typ(src_expr.type):
                return False

            src_type = src_expr.type

            # Skip if source type is unresolvable (dependent) -- avoid false positives
            if src_type.kind == clang.cindex.TypeKind.DEPENDENT:
                return False

            # X24: array-involving casts are owned by check_ptr_array_casts.
            is_arr, _cur = _resolves_to_array(src_expr)
            if is_arr:
                return False
            try:
                if _is_array_type(target_type.get_pointee()):
                    return False
            except Exception:
                pass

            # void* involved -> banned
            if _is_void_ptr(src_type) or _is_void_ptr(target_type):
                return True

            # Check if upcast
            src_pointee = _get_pointee_type(src_type)
            tgt_pointee = _get_pointee_type(target_type)
            if src_pointee and tgt_pointee:
                if _is_upcast(src_pointee, tgt_pointee):
                    return False

            # static_cast downcast or unrelated -> banned
            return True

        for node, line in self._collect(predicate_cxx_cast, skip_system=True):
            if not self._is_target_file_loc(node.location):
                continue
            target_type = node.type.spelling
            src_expr = _cast_operand(node)
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
            detail = f"R1 {src_type} -> {target_type} ({reason}) -- only parent-child class pointer casts allowed code={code}"
            results.append((line, "illegal-ptr-cast", detail))

        results.sort(key=lambda x: x[1])
        return results

    def _relative_path(self):
        """Return the file path relative to the project root."""
        repo = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
        abs_path = os.path.abspath(self.filepath)
        try:
            return os.path.relpath(abs_path, repo).replace('\\', '/')
        except ValueError:
            return self.filepath.replace('\\', '/')

    def check_new_symbols(self):
        """Detect NEW symbol declarations on lines changed from auto-fill-baseline.
        
        Uses git diff data to find lines that were ADDED since baseline.
        Walks the Clang AST to find any declaration (VarDecl, FunctionDecl,
        CXXRecordDecl, FieldDecl, EnumDecl, TypedefDecl) at those lines.
        
        Returns list of (line_no, category, detail) tuples.
        """
        import subprocess
        results = []
        
        rel_path = self._relative_path()
        if not rel_path:
            return results
        
        repo = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
        try:
            proc = subprocess.run(
                ['git', 'diff', 'auto-fill-baseline', '--unified=0', '--', rel_path],
                capture_output=True, text=True, cwd=repo,
                encoding='utf-8', errors='replace'
            )
        except Exception:
            return results
        
        if proc.returncode != 0 or not proc.stdout.strip():
            return results
        
        # Parse git diff to find added lines
        added_lines = set()
        import re as _re
        for line in proc.stdout.split('\n'):
            m = _re.match(r'^@@ -\d+(?:,\d+)? \+(\d+)(?:,(\d+))? @@', line)
            if m:
                start = int(m.group(1))
                count = int(m.group(2)) if m.group(2) else 1
                for i in range(start, start + count):
                    added_lines.add(i)
        
        if not added_lines:
            return results
        
        # Walk AST for declarations on added lines
        decl_kinds = {
            clang.cindex.CursorKind.VAR_DECL,
            clang.cindex.CursorKind.FUNCTION_DECL,
            clang.cindex.CursorKind.CXX_METHOD,
            clang.cindex.CursorKind.CONSTRUCTOR,
            clang.cindex.CursorKind.DESTRUCTOR,
            clang.cindex.CursorKind.CLASS_DECL,
            clang.cindex.CursorKind.STRUCT_DECL,
            clang.cindex.CursorKind.FIELD_DECL,
            clang.cindex.CursorKind.ENUM_DECL,
            clang.cindex.CursorKind.TYPEDEF_DECL,
            clang.cindex.CursorKind.USING_DECLARATION,
        }
        
        def visitor(node):
            if node.kind in decl_kinds:
                line = node.location.line
                if line in added_lines:
                    # Filter by file: only flag declarations in the file being checked,
                    # not declarations pulled in from #include'd .inl or other headers.
                    if node.location.file:
                        loc_file = str(node.location.file).replace('\\', '/')
                        target = self.filepath.replace('\\', '/')
                        if loc_file != target:
                            return
                    # For VarDecl: skip local variables inside function bodies.
                    # Only flag file-scope or class-scope declarations.
                    if node.kind == clang.cindex.CursorKind.VAR_DECL:
                        parent = node.semantic_parent
                        if parent and parent.kind in (clang.cindex.CursorKind.FUNCTION_DECL,
                                                       clang.cindex.CursorKind.CXX_METHOD,
                                                       clang.cindex.CursorKind.CONSTRUCTOR,
                                                       clang.cindex.CursorKind.DESTRUCTOR,
                                                       clang.cindex.CursorKind.COMPOUND_STMT):
                            return  # local variable, skip
                    # For function/method/constructor/destructor: skip definitions
                    # that have a separate prior declaration (header declaration exists).
                    # Only flag truly new functions with no prior declaration.
                    if node.kind in (clang.cindex.CursorKind.FUNCTION_DECL,
                                     clang.cindex.CursorKind.CXX_METHOD,
                                     clang.cindex.CursorKind.CONSTRUCTOR,
                                     clang.cindex.CursorKind.DESTRUCTOR):
                        if node.is_definition():
                            canonical = node.canonical
                            if canonical and canonical != node:
                                return  # definition of previously-declared function, not a new symbol
                    name = node.displayname or node.spelling
                    kind_name = node.kind.name.replace('CURSOR_KIND.', '').replace('_', '-').lower()
                    # Build detailed fix suggestion based on declaration kind
                    if 'field' in kind_name:
                        fix = (f'FIX: Adding new class member \"{name}\" is forbidden during translation. '
                               f'All members must be declared in the class header via the IDA→header pipeline. '
                               f'To resolve this offset: (1) check member_lookup.json for an existing member '
                               f'at the same offset, (2) if none, run tools/pre_translate.py to identify '
                               f'the correct member name, (3) add the member to the class header with its '
                               f'correct IDA-verified offset. Never add members ad-hoc in .cpp files.')
                    elif 'class' in kind_name or 'struct' in kind_name:
                        fix = (f'FIX: Declaring new class/struct \"{name}\" is forbidden. '
                               f'All type definitions must exist in headers before translation begins.')
                    elif 'function' in kind_name or 'method' in kind_name or 'constructor' in kind_name or 'destructor' in kind_name:
                        fix = (f'FIX: Adding new function \"{name}\" is forbidden. '
                               f'Only modify function bodies of existing functions. '
                               f'New functions must be declared in headers before implementation.')
                    elif 'var' in kind_name:
                        fix = (f'FIX: New global/file-scope variable \"{name}\" is forbidden. '
                               f'All global variables must have extern declarations with // data: 0xADDR annotations.')
                    else:
                        fix = (f'FIX: New symbol \"{name}\" of kind {kind_name} is forbidden. '
                               f'During translation, only modify existing symbols—never add new ones.')
                    results.append((
                        line,
                        'new-symbol',
                        f'{kind_name} \"{name}\" — adding new symbols is forbidden during translation. '
                        f'Only modify existing symbols (rename, change signature, change body). {fix}'
                    ))
        
        self._walk(visitor)
        results.sort(key=lambda x: x[0])
        return results

    def check_hpp_implementations(self):
        """Detect function implementations in .hpp header files.
        
        ALL function bodies in headers are forbidden — no exceptions.
        Templates must also go in .cpp. =default/=delete are declarations,
        not implementations, so they are fine.
        
        Returns list of (line_no, category, detail) tuples.
        """
        results = []
        
        fpath = self.filepath.replace('\\', '/')
        if not fpath.endswith('.hpp'):
            return results
        
        def visitor(node):
            if node.kind in (clang.cindex.CursorKind.FUNCTION_DECL,
                             clang.cindex.CursorKind.CXX_METHOD,
                             clang.cindex.CursorKind.CONSTRUCTOR,
                             clang.cindex.CursorKind.DESTRUCTOR):
                if not node.is_definition():
                    return
                # Skip function bodies defined in INCLUDED files, not this file.
                # Clang AST sees all #included content; we must only flag bodies
                # whose source location is actually in this .hpp file.
                if node.location.file:
                    node_file = node.location.file.name.replace('\\', '/')
                    if node_file != fpath:
                        return
                # Only skip pure =default/=delete declarations (these have no real body)
                tokens = list(node.get_tokens())
                token_strs = [t.spelling for t in tokens]
                body_text = ''.join(token_strs)
                # Check if this is = default or = delete (these are declarations, not implementations)
                if 'default' in body_text.split('{')[0] if '{' in body_text else 'default' in body_text:
                    if '= default' in body_text:
                        return
                if '= delete' in body_text:
                    return
                name = node.displayname or node.spelling
                line = node.location.line
                # Use ACTUAL file where the body lives, not the including file
                actual_file = node.location.file.name.replace('\\', '/') if node.location.file else fpath
                results.append((
                    line,
                    'hpp-impl',
                    f'function "{name}" has function body in header at line {line}. '
                    f'ALL function implementations (including templates and inline) MUST be in .cpp files. '
                    f'FIX: move the entire function body from {actual_file}:{line} to the corresponding .cpp file. '
                    f'In the header, replace the body with a semicolon (declaration only). '
                    f'Example: "int foo() {{ return 1; }}" in header → "int foo();" in header + "int foo() {{ return 1; }}" in .cpp'
                ))
        
        self._walk(visitor)
        results.sort(key=lambda x: x[0])
        return results

    # -- X24: line-coverage ledger (for population reconciliation) --

    def collect_line_coverage(self):
        """Target-file line coverage of the AST, for reconciliation between
        the AST gate and the textual (regex) gate.

        Returns dict:
          node_runs       -- merged [start,end] line runs that carry >= 1 AST
                             node START in the target file.
          expr_runs       -- merged [start,end] runs covering the EXTENTS of
                             expression-kind nodes only (no function/class/
                             block containers).  A statement dropped by clang
                             error recovery leaves a hole here, while a
                             continuation line of a multi-line expression is
                             covered by its expression node's extent.
          dependent_lines -- lines carrying any node typed `<dependent type>`
                             (unresolvable types -- the AST sees the node but
                             cannot classify pointer-vs-array).
        """
        lines = set()
        expr_lines = set()
        dependent = set()

        _EXPR_KINDS = {
            'CSTYLE_CAST_EXPR', 'CXX_STATIC_CAST_EXPR',
            'CXX_REINTERPRET_CAST_EXPR', 'CXX_DYNAMIC_CAST_EXPR',
            'CXX_FUNCTIONAL_CAST_EXPR', 'ARRAY_SUBSCRIPT_EXPR',
            'BINARY_OPERATOR', 'COMPOUND_ASSIGNMENT_OPERATOR',
            'UNARY_OPERATOR', 'CONDITIONAL_OPERATOR', 'CALL_EXPR',
            'CXX_MEMBER_CALL_EXPR', 'CXX_OPERATOR_CALL_EXPR',
            'MEMBER_REF_EXPR', 'DECL_REF_EXPR', 'INTEGER_LITERAL',
            'FLOATING_LITERAL', 'STRING_LITERAL', 'CXX_THIS_EXPR',
            'CXX_NULL_PTR_LITERAL_EXPR', 'PAREN_EXPR', 'UNEXPOSED_EXPR',
            'INIT_LIST_EXPR',
        }

        def visitor(node):
            try:
                if not node.location.file or not self._is_target_file_loc(node.location):
                    return
                ln = node.location.line
                if ln <= 0:
                    return
                lines.add(ln)
                if node.kind.name in _EXPR_KINDS:
                    try:
                        a = node.extent.start.line
                        b = node.extent.end.line
                        if a > 0 and b >= a and (b - a) <= 2000:
                            for x in range(a, b + 1):
                                expr_lines.add(x)
                    except Exception:
                        pass
                ts = node.type.spelling
                if ts and ('dependent' in ts or ts.startswith('<invalid')):
                    dependent.add(ln)
            except Exception:
                pass

        self._walk(visitor, None)

        def _runs(s):
            out = []
            for ln in sorted(s):
                if out and ln == out[-1][1] + 1:
                    out[-1][1] = ln
                else:
                    out.append([ln, ln])
            return out

        return {'node_runs': _runs(lines), 'expr_runs': _runs(expr_lines),
                'dependent_lines': sorted(dependent)}

    # -- Run all checks --

    def get_allowed_usage(self):
        """X24: allowed-usage records collected by the last run_all_checks()
        call (currently `array-subscript-ok` = R5: array [] is legal).
        Returns list of (line_no, category, detail) tuples."""
        return list(self._allowed_usage)

    def run_all_checks(self):
        """Run all violation checks and return combined results.

        Returns list of (line_no, category, detail) tuples.
        """
        # X24: allowed-usage ledger (R5) -- populated by the checks below,
        # never a violation; consumed via get_allowed_usage().
        self._allowed_usage = []
        all_results = []
        all_results.extend(self.check_cxx_casts())
        all_results.extend(self.check_goto_statements())
        all_results.extend(self.check_pointer_arithmetic())
        all_results.extend(self.check_pointer_subscript())
        all_results.extend(self.check_hex_pointers())
        all_results.extend(self.check_nonptr_to_ptr_casts())
        all_results.extend(self.check_ptr_array_casts())
        all_results.extend(self.check_vn_variables())
        all_results.extend(self.check_func_ptr_cast_calls())
        all_results.extend(self.check_memcpy_bypass())
        all_results.extend(self.check_bit_cast_bypass())
        all_results.extend(self.check_ida_artifact_names())
        all_results.extend(self.check_ptr_nonptr_conversions())
        all_results.extend(self.check_ptr_cast_rules())
        # New: ban ad-hoc symbol declarations and hpp implementations
        all_results.extend(self.check_new_symbols())
        all_results.extend(self.check_hpp_implementations())
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
