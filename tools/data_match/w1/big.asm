; big.asm -- 20 USER32 refs + 5 KERNEL32 refs in one wave, to locate the
; terminator contribution in a large first batch.
        .386
        .model flat

        extrn _MessageBoxA@16:proc
        extrn _GetDC@4:proc
        extrn _ReleaseDC@8:proc
        extrn _GetActiveWindow@0:proc
        extrn _SetWindowPos@28:proc
        extrn _GetWindowRect@8:proc
        extrn _SetWindowTextA@8:proc
        extrn _GetWindowTextA@12:proc
        extrn _ShowWindow@8:proc
        extrn _UpdateWindow@4:proc
        extrn _InvalidateRect@12:proc
        extrn _BeginPaint@8:proc
        extrn _EndPaint@8:proc
        extrn _GetClientRect@8:proc
        extrn _DrawTextA@20:proc
        extrn _FillRect@12:proc
        extrn _CreateSolidBrush@4:proc
        extrn _DeleteObject@4:proc
        extrn _SetBkMode@8:proc
        extrn _SetTextColor@8:proc
        extrn _CreateFileA@28:proc
        extrn _CloseHandle@4:proc
        extrn _ReadFile@20:proc
        extrn _WriteFile@20:proc
        extrn _GetLastError@0:proc

        .data
        public _refTable
_refTable   label dword
        dd  _MessageBoxA@16
        dd  _GetDC@4
        dd  _ReleaseDC@8
        dd  _GetActiveWindow@0
        dd  _SetWindowPos@28
        dd  _GetWindowRect@8
        dd  _SetWindowTextA@8
        dd  _GetWindowTextA@12
        dd  _ShowWindow@8
        dd  _UpdateWindow@4
        dd  _InvalidateRect@12
        dd  _BeginPaint@8
        dd  _EndPaint@8
        dd  _GetClientRect@8
        dd  _DrawTextA@20
        dd  _FillRect@12
        dd  _CreateSolidBrush@4
        dd  _DeleteObject@4
        dd  _SetBkMode@8
        dd  _SetTextColor@8
        dd  _CreateFileA@28
        dd  _CloseHandle@4
        dd  _ReadFile@20
        dd  _WriteFile@20
        dd  _GetLastError@0

        end
