; PostProcStub.asm — post-process handler for Inject/Replace hooks
;
; Reached via stack hijack. EAX = original function's return value.
; Uses slot stack (push on hook entry, pop here) to handle nested hooks.
; Calls LogComparison(C++) which runs RE version and writes comparisonResult.log.
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

    mov  ecx, [g_current_slot]      ; ShadowSlot*
    test ecx, ecx
    jz   no_slot

    mov  eax, [ecx + 080h]          ; depth (top index)
    test eax, eax
    jz   no_slot                    ; underflow
    dec  eax
    mov  [ecx + 080h], eax          ; pop: depth--

    ; push hook_addr = hook_addr_stack[depth]
    push dword ptr [ecx + eax*4 + 040h]
    push ebx                         ; orig_eax
    call LogComparison               ; EAX = re_eax returned
    add  esp, 8

    ; Save re_eax, load ret_addr and re_edx
    push eax                         ; save re_eax
    mov  ecx, [g_current_slot]
    mov  eax, [ecx + 080h]          ; depth (already popped)
    mov  edx, [ecx + eax*4 + 00h]   ; original_ret_addr from stack
    push edx                         ; save ret_addr
    mov  edx, [ecx + 088h]          ; re_result_edx

    pop  ecx                         ; ecx = ret_addr → jmp target
    pop  eax                         ; discard re_eax (comparison-only)
    mov  eax, ebx                    ; restore orig_eax

    pop  ebx                         ; restore ebx
    jmp  ecx                         ; EAX=orig_eax, EDX=re_edx

no_slot:
    mov  eax, ebx                    ; return orig_eax
    pop  ebx
    ret

PostProcStub ENDP
END
