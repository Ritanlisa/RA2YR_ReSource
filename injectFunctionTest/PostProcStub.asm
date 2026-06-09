; PostProcStub.asm -- post-process handler for Inject/Replace hooks
;
; Reached via stack hijack. EAX = original function's return value.
; Calls LogComparison(C++) which rolls back transaction, runs RE version,
; compares results, writes comparisonResult.log, and returns re_result_eax.
; Returns RE result (EAX) and re_edx (EDX) to original caller.
;
; extern "C" DWORD __cdecl LogComparison(DWORD orig_result, DWORD hook_addr);

.586
.MODEL FLAT, C
OPTION CASEMAP:NONE

EXTERN LogComparison : PROC
EXTERN g_current_slot : DWORD

.DATA?
    PUBLIC mismatch_counter
    mismatch_counter dd ?

.CODE

PostProcStub PROC PUBLIC
    assume fs:nothing
    push ebx                        ; save ebx
    mov  ebx, eax                   ; save orig_eax in ebx

    mov  ecx, [g_current_slot]      ; ShadowSlot* (global cache)
    test ecx, ecx
    jz   no_slot

    push dword ptr [ecx + 12]       ; hook_addr (slot+0x0C)
    push ebx                         ; orig_eax
    call LogComparison
    add  esp, 8                      ; EAX = re_result_eax from LogComparison

    mov  ecx, [g_current_slot]      ; reload slot (LogComparison updated re_edx)
    mov  edx, [ecx + 8]             ; re_result_edx (slot+0x08)
    mov  ecx, [ecx]                 ; original_ret_addr (slot+0x00)

    pop  ebx                        ; restore ebx
    jmp  ecx                        ; EAX=re_eax, EDX=re_edx

no_slot:
    mov  eax, ebx                   ; return orig_eax
    pop  ebx
    ret

PostProcStub ENDP
END
