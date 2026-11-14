import re
p = r'D:\RA2YR_ReSource\tools\decomp_sys\decompile.py'
s = open(p, encoding='utf-8').read()
old = '''    params, dom_notes = _solver_domain_params(
        ex.addr, params, ex.body_lines, dropped)
    ret_notes.extend(dom_notes)
    return {'''
assert old in s
new = '''    params, dom_notes = _solver_domain_params(
        ex.addr, params, ex.body_lines, dropped)
    ret_notes.extend(dom_notes)
    # Stage 3b: a registry method whose name EQUALS its class is a
    # constructor in C++ terms -- but the emitted body ends with
    # `return (int)(this)`, which no constructor may do, and the hpp
    # declaration would be C2533/C2380 (return type on a ctor).  Rename
    # the member deterministically (addr suffix, the CW5-12 `_Helper`
    # precedent); pass_callees applies the identical rename to call sites.
    if cls and method == re.sub(r"[^A-Za-z0-9_]", "_", cls):
        _new = "%s_%s" % (method, ex.addr[2:].upper().lstrip("0"))
        ret_notes.append(("ctor_name_collision",
                          "method name equals class name -> %s" % _new))
        method = _new
    return {'''
s = s.replace(old, new, 1)
open(p, 'w', encoding='utf-8', newline='').write(s)

p2 = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
s2 = open(p2, encoding='utf-8').read()
old2 = '''            _collide = ((_own in _registry_fn_names(ctx.reg)) or
                        (_own in (getattr(ctx, "used_globals", None) or {})))
            emit = "((%s%s *)(%s))->%s(%s)" % (
                "class " if _collide else "", _own, recv, method, rest)'''
assert old2 in s2
new2 = '''            _collide = ((_own in _registry_fn_names(ctx.reg)) or
                        (_own in (getattr(ctx, "used_globals", None) or {})))
            # Stage 3b: ctor-name collision -- the callee's method name
            # equals its own class name.  decompile.derive_signature
            # renames the DEFINITION the same way (C2533/C2380).
            if method == _own and addr:
                method = "%s_%s" % (method, addr[2:].upper().lstrip("0"))
            emit = "((%s%s *)(%s))->%s(%s)" % (
                "class " if _collide else "", _own, recv, method, rest)'''
s2 = s2.replace(old2, new2, 1)
open(p2, 'w', encoding='utf-8', newline='').write(s2)
print('F3 patched')
