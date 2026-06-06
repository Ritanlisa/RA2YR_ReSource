; PostProcStub.asm — post-process handler for stack-hijacked functions
; Compares original EAX (return value) with RE result from TLS fs:[18h]+4.
; Increments mismatch_counter on difference. 
; Jumps back to original caller via fs:[18h]+0.

.586
.MODEL FLAT, C
OPTION CASEMAP:NONE

EXTERN OutputDebugStringA@4 : PROC

.DATA?
    mismatch_counter dd ?

.CODE

PostProcStub PROC PUBLIC
    assume fs:nothing
    mov ecx, dword ptr fs:[18h]
    test ecx, ecx
    jz return_now

    ; compare RE eax vs original eax
    mov edx, dword ptr [ecx + 4]
    cmp eax, edx
    je cleanup

    ; also compare EDX for 64-bit returns
    cmp edx, dword ptr [ecx + 8]
    jne log_diff
    cmp eax, dword ptr [ecx + 4]
    je cleanup

log_diff:
    inc dword ptr [mismatch_counter]

cleanup:
    mov eax, dword ptr [ecx]
    jmp eax

return_now:
    ret

PostProcStub ENDP
END
