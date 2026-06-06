; PostProcStub.asm — post-process handler + comparisonResult.log logging
;
; Reached via stack hijack. EAX = original return value.
; Reads RE result + hook_addr from fs:[18h], calls LogComparison,
; then jumps back to original caller.
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
    push eax                        ; save original eax
    push edx                        ; save original edx

    mov ecx, dword ptr fs:[18h]    ; ShadowSlot*
    test ecx, ecx
    jz cleanup

    ; Read RE result for comparison
    mov edx, dword ptr [ecx + 4]    ; re_result_eax
    pop eax                          ; original edx
    pop ebx                          ; ebx = original eax
    push eax                         ; save original edx
    push ebx                         ; save original eax

    ; Compare RE vs original
    cmp ebx, edx
    jne log_diff
    jmp log_write

log_diff:
    inc dword ptr [mismatch_counter]

log_write:
    ; Call LogComparison(orig_eax, hook_addr)
    push dword ptr [ecx + 12]       ; hook_addr (offset 0xC)
    push ebx                         ; orig_result
    call LogComparison
    add esp, 8

cleanup:
    pop ebx                          ; original eax
    pop edx                          ; original edx

    ; Jump to original caller
    mov ecx, dword ptr fs:[18h]
    test ecx, ecx
    jz return_now
    mov eax, dword ptr [ecx]         ; original_ret_addr
    jmp eax

return_now:
    ret

PostProcStub ENDP
END
