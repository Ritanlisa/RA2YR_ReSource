; e1.asm -- discovery order (U,K,G) differs from command-line library order (K,U,G)
        .386
        .model flat

        extrn _CreateFileA@28:proc
        extrn _MessageBoxA@16:proc
        extrn _CreatePen@12:proc

        .data
        public _refTable
_refTable   label dword
        dd  _MessageBoxA@16
        dd  _CreateFileA@28
        dd  _CreatePen@12

        end
