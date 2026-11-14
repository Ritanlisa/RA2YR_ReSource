p = r'D:\RA2YR_ReSource\tools\decomp_sys\era_types.h'
s = open(p, encoding='utf-8').read()
old = '''// ---- IDA pseudo-register names that leak into bodies (`_EA` etc.)
typedef unsigned int        _EA;
typedef unsigned int        _EBX;
typedef unsigned int        _ECX;
typedef unsigned int        _EDX;
typedef unsigned int        _ESI;
typedef unsigned int        _EDI;
typedef unsigned int        _EBP;
typedef unsigned int        _ESP;'''
assert old in s
new = '''// ---- IDA pseudo-register names that leak into bodies (`_EAX` etc.)
// Stage 3b: these are REGISTER VALUES, not types.  Declaring them as
// typedefs made every `(_AX & 0x4100)` parse as a declaration
// (C2143 "missing ')' before 'constant'") -- an extern variable keeps the
// expression an expression.  The declarations are never defined; the unit
// only has to compile.
extern unsigned int         _EA;
extern unsigned int         _EAX;
extern unsigned int         _EBX;
extern unsigned int         _ECX;
extern unsigned int         _EDX;
extern unsigned int         _ESI;
extern unsigned int         _EDI;
extern unsigned int         _EBP;
extern unsigned int         _ESP;'''
s = s.replace(old, new, 1)
old2 = '''typedef unsigned char       _AH, _AL, _BH, _BL, _CH, _CL, _DH, _DL;
typedef unsigned short      _AX, _BX, _CX, _DX, _SI, _DI, _BP, _SP;'''
assert old2 in s
new2 = '''extern unsigned char        _AH, _AL, _BH, _BL, _CH, _CL, _DH, _DL;
extern unsigned short       _AX, _BX, _CX, _DX, _SI, _DI, _BP, _SP;'''
s = s.replace(old2, new2, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
