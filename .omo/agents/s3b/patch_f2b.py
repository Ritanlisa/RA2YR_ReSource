p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
s = open(p, encoding='utf-8').read()
old = '''        self.used_globals = {}  # registry name -> era extern type
        self.lines = strip_line_comments(ex.body_lines)
        self.stmts = None'''
assert old in s
new = '''        self.used_globals = {}  # registry name -> era extern type
        # Stage 3b: `__asm { ... }` blocks are opaque to the C++ statement
        # parser -- protect them behind a marker decl and restore at
        # emission (pseudo.protect_asm_blocks / restore_asm_blocks).
        import pseudo as _pseudo
        _txt, self.asm_blocks = _pseudo.protect_asm_blocks(
            "\\n".join(strip_line_comments(ex.body_lines)))
        self.lines = _txt.split("\\n")
        self.stmts = None'''
s = s.replace(old, new, 1)
open(p, 'w', encoding='utf-8', newline='').write(s)

p2 = r'D:\RA2YR_ReSource\tools\decomp_sys\decompile.py'
s2 = open(p2, encoding='utf-8').read()
old2 = '''    # unit selection (rule 2: cpp <-> hpp same name):'''
assert old2 in s2
new2 = '''    # Stage 3b: marker decls -> the original `__asm { ... }` blocks.
    if getattr(ctx, "asm_blocks", None):
        ctx.lines = pseudo.restore_asm_blocks(ctx.lines, ctx.asm_blocks)
        ctx.note("asm_block",
                 "%d inline-asm block(s) preserved verbatim (C2065/C2400 "
                 "mnemonic leaks)" % len(ctx.asm_blocks))

    # unit selection (rule 2: cpp <-> hpp same name):'''
s2 = s2.replace(old2, new2, 1)
open(p2, 'w', encoding='utf-8', newline='').write(s2)
print('wired')
