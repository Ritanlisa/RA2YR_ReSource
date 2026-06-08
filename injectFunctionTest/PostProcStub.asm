; PostProcStub.asm -- post-process handler for Inject/Replace hooks
;
; Reached via stack hijack. EAX = original function's return value.
; Calls LogComparison (C++) which rolls back transaction, runs RE version,
; compares results, and writes comparisonResult.log.
; Returns RE result (from TLS) to original caller.
;
; extern "C" void LogComparison(DWORD orig_result, DWORD hook_addr);

.586
.MODEL FLAT, C
OPTION CASEMAP:NONE

EXTERN LogComparison : PROC

.DATA?
    PUBLIC mismatch_counter
    mismatch_counter dd ?

.CODE

PostProcStub PROC PUBLIC
    assume fs:nothing
    push ebx                        ; save ebx
    push edx                        ; save orig_edx
    mov ebx, eax                    ; save orig_eax in ebx

    mov ecx, dword ptr fs:[18h]    ; ShadowSlot*
    test ecx, ecx
    jz no_slot

    ; LogComparison(orig_eax=ebx, hook_addr=[ecx+0C])
    push dword ptr [ecx + 12]       ; hook_addr
    push ebx                         ; orig_eax
    call LogComparison
    add esp, 8

    ; Load RE result from TLS (set by LogComparison)
    mov ecx, dword ptr fs:[18h]
    mov eax, dword ptr [ecx + 4]    ; re_result_eax -> EAX

no_slot:
    pop edx                          ; restore orig_edx
    pop ebx                          ; restore ebx

    ; Jump to original caller with EAX = RE result
    mov ecx, dword ptr fs:[18h]
    test ecx, ecx
    jz return_now
    mov ecx, dword ptr [ecx]         ; original_ret_addr -> ecx
    jmp ecx                          ; jump (EAX preserved = RE result)

return_now:
    ret

PostProcStub ENDP
END
