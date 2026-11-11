; x3.asm -- refs CreateFileA via kernel32.lib + BogusFunc via k32b.lib (same DLL name)
        .386
        .model flat

        extrn _CreateFileA@28:proc
        extrn _BogusFunc:proc

        .data
        public _refTable
_refTable   label dword
        dd  _CreateFileA@28
        dd  _BogusFunc

        end
