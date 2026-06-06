; PostProcStub.asm — universal post-process handler for stack-hijacked functions
;
; When the ORIGINAL function RETurns, it pops our hijacked return address
; and lands here. EAX = original return value, EDX = high 32 bits.
;
; We read RE result from TLS (fs:[18h]), compare, log mismatches,
; then JMP to the original caller's return address.
;
; Build: ml /coff /FoPostProcStub.obj /c PostProcStub.asm

.586
.MODEL FLAT, C
OPTION CASEMAP:NONE

.DATA?
    mismatch_counter dd ?

.CODE

; void PostProcStub(void)
PostProcStub PROC PUBLIC

    ; Save original return values
    push eax
    push edx

    ; Load RE result from TLS
    assume fs:nothing
    mov ecx, dword ptr fs:[18h]
    test ecx, ecx
    jz cleanup

    ; Compare RE result vs original eax
    mov edx, dword ptr [ecx + 4]    ; edx = RE result (eax)
    pop eax                          ; original edx
    pop ebx                          ; ebx = original eax
    push eax
    push ebx

    cmp ebx, edx
    jne log_diff

    jmp cleanup

log_diff:
    inc dword ptr [mismatch_counter]

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
