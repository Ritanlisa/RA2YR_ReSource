; x2.asm -- wave-2 object (inside x2.lib): K2 + U2 refs
        .386
        .model flat

        extrn _CloseHandle@4:proc
        extrn _GetDC@4:proc

        .data
        public _refTable2
_refTable2  label dword
        dd  _CloseHandle@4
        dd  _GetDC@4

        end
