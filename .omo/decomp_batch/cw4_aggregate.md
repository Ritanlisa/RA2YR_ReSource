## CW4 aggregate (`cw4_pilot,cw4_all`)

| metric | value |
|---|---:|
| trialed functions | 2608 |
| MATCH (variant accepted) | **317** |
| hit rate | **12.2%** |
| verdict MATCH | 317 |
| verdict NO_HIT | 488 |
| verdict NO_VARIANT | 1803 |

| class (family / path) | n | hit | rate | no-variant |
|---|---:|---:|---:|---:|
| FOLD_STORE | 634 | 0 | 0.0% | 634 |
| FP_RECIP | 216 | 0 | 0.0% | 216 |
| FRAME | 66 | 0 | 0.0% | 51 |
| IMM | 6 | 0 | 0.0% | 2 |
| JCC_INVERT | 313 | 303 | 96.8% | 10 |
| JCC_INVERT_PLUS | 29 | 10 | 34.5% | 1 |
| JCC_LAYOUT_PLUS | 19 | 0 | 0.0% | 0 |
| MEMBER_OFFSET | 19 | 0 | 0.0% | 10 |
| ONE_INSN | 18 | 0 | 0.0% | 8 |
| POINTER_NULLED | 5 | 0 | 0.0% | 5 |
| REG_ALLOC | 14 | 0 | 0.0% | 4 |
| RELOC_KEY | 449 | 0 | 0.0% | 449 |
| REORDER | 5 | 0 | 0.0% | 0 |
| RET_ARITY | 150 | 0 | 0.0% | 146 |
| RET_VOID_STUB | 30 | 0 | 0.0% | 30 |
| ROTATE_EXACT | 10 | 3 | 30.0% | 1 |
| STRUCTURAL | 487 | 0 | 0.0% | 129 |
| TOKEN_MISMATCH | 36 | 0 | 0.0% | 24 |
| TWO_FOUR_INSNS | 86 | 1 | 1.2% | 73 |
| WIDTH | 16 | 0 | 0.0% | 10 |
| path:branch_order | 379 | 314 | 82.8% | 18 |
| path:branch_polarity | 45 | 0 | 0.0% | 20 |
| path:cc_mismatch | 86 | 0 | 0.0% | 75 |
| path:codegen_shape | 423 | 0 | 0.0% | 227 |
| path:const_fold | 43 | 0 | 0.0% | 27 |
| path:eval_order | 26 | 0 | 0.0% | 6 |
| path:extern_reloc | 1394 | 0 | 0.0% | 1370 |
| path:frame_sched | 10 | 0 | 0.0% | 9 |
| path:regalloc | 121 | 0 | 0.0% | 26 |
| path:ret_norm | 41 | 0 | 0.0% | 9 |
| path:signedness | 14 | 3 | 21.4% | 1 |
| path:width_mismatch | 26 | 0 | 0.0% | 15 |

| variant | outcome | n |
|---|---|---:|
| V_BOOL_SC_SWAP | COMPILE_FAIL | 1 |
| V_BOOL_SC_SWAP | MISMATCH | 19 |
| V_CONST_MUL_COMMUTE | MISMATCH | 3 |
| V_IF_CMPFLIP | COMPILE_FAIL | 1 |
| V_IF_CMPFLIP | MISMATCH | 27 |
| V_IF_ELSE_FROM_GUARD | COMPILE_FAIL | 4 |
| V_IF_ELSE_FROM_GUARD | MISMATCH | 38 |
| V_IF_GUARD | COMPILE_FAIL | 1 |
| V_IF_GUARD | MATCH | 313 |
| V_IF_GUARD | MISMATCH | 63 |
| V_IF_GUARD_EQ | COMPILE_FAIL | 1 |
| V_IF_GUARD_EQ | MISMATCH | 63 |
| V_IF_GUARD_FROM_TAIL | COMPILE_FAIL | 4 |
| V_IF_GUARD_FROM_TAIL | MATCH | 1 |
| V_IF_GUARD_FROM_TAIL | MISMATCH | 37 |
| V_IF_SWAPNEG | COMPILE_FAIL | 1 |
| V_IF_SWAPNEG | MISMATCH | 63 |
| V_LOOP_DO2WHILE | COMPILE_FAIL | 3 |
| V_LOOP_DO2WHILE | MISMATCH | 9 |
| V_LOOP_WHILE2DO | COMPILE_FAIL | 1 |
| V_LOOP_WHILE2DO | MISMATCH | 18 |
| V_MICRO_DROP_NARROW | COMPILE_FAIL | 4 |
| V_MICRO_DROP_NARROW | MISMATCH | 36 |
| V_MICRO_JOIN_ZERO | MISMATCH | 1 |
| V_MICRO_SIGNED_CMP | COMPILE_FAIL | 19 |
| V_MICRO_SIGNED_CMP | MATCH | 3 |
| V_MICRO_SIGNED_CMP | MISMATCH | 162 |
| V_MICRO_SPLIT_ZERO | MISMATCH | 5 |
| V_ORD_INLINE_TEMP | COMPILE_FAIL | 12 |
| V_ORD_INLINE_TEMP | MISMATCH | 53 |
| V_ORD_SWAP0 | COMPILE_FAIL | 23 |
| V_ORD_SWAP0 | MISMATCH | 145 |
| V_ORD_SWAPN | COMPILE_FAIL | 14 |
| V_ORD_SWAPN | MISMATCH | 99 |
