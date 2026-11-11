; x1.asm -- wave-1 object: K1 + U1 + pulls _refTable2 from x2.lib at lib scan
        .386
        .model flat

        extrn _CreateFileA@28:proc
        extrn _MessageBoxA@16:proc
        extrn _refTable2:proc

        .data
        public _refTable
_refTable   label dword
        dd  _CreateFileA@28
        dd  _MessageBoxA@16
        dd  _refTable2

        end
