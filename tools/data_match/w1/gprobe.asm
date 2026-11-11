; gprobe.asm -- grouped import references: all K, then U, then G (both extrn and dd)
        .386
        .model flat

        extrn _CreateFileA@28:proc
        extrn _CloseHandle@4:proc
        extrn _ReadFile@20:proc
        extrn _MessageBoxA@16:proc
        extrn _GetDC@4:proc
        extrn _ReleaseDC@8:proc
        extrn _CreatePen@12:proc
        extrn _DeleteObject@4:proc

        .data
        public _refTable
_refTable   label dword
        dd  _CreateFileA@28
        dd  _CloseHandle@4
        dd  _ReadFile@20
        dd  _MessageBoxA@16
        dd  _GetDC@4
        dd  _ReleaseDC@8
        dd  _CreatePen@12
        dd  _DeleteObject@4

        end
