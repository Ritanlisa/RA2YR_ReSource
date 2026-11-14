import re
p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
src = open(p, encoding='utf-8').read()

# 1) build the type-spelling set right before pass_unknown_symbols
anchor = "def pass_unknown_symbols(ctx):"
assert anchor in src
helper = '''# Stage 3b: bare TYPE spellings that IDA renders as if they were calls.
# `(int)v5` in the pseudo-code can surface as `INT_PTR(v5)`; declaring
# `extern int INT_PTR(int, ...);` redefines the typedef (C2377) and
# poisons the whole unit.  The correct reading of `TYPE(x)` is a
# functional cast, so the extern must not be emitted at all -- the call
# site already compiles as a cast once the name is a real type.
_ERA_TYPE_NAMES = frozenset("""
int unsigned signed char short long float double bool void wchar_t
const volatile struct class union enum __int8 __int16 __int32 __int64
size_t _DWORD _WORD _BYTE _QWORD _UNKNOWN _TBYTE unknown
DWORD WORD BYTE BOOL UINT USHORT UCHAR CHAR LONG ULONG COLORREF ATOM
LCTYPE MMRESULT UINT_PTR ULONG_PTR LRESULT WPARAM LPARAM SHORT INT_PTR
LSTATUS REGSAM u_short u_long LPWORD LPVOID LPCVOID LPSTR LPCSTR LPWSTR
LPCWSTR BSTR LPCOLESTR PCNZWCH LPCCH LPBYTE LPDWORD LPLONG FARPROC
HWND HINSTANCE HDC HGDIOBJ HGLOBAL HLOCAL HMODULE HANDLE HBRUSH HPEN
HFONT HBITMAP HICON HCURSOR HMENU HKEY HRGN HRSRC HIMC HKL SOCKET PHKEY
GUID CLSID IID REFIID REFCLSID LPCLSID LPGUID LPUNKNOWN VARIANT SAFEARRAY
POINT LPPOINT RECT LPRECT FILETIME SYSTEMTIME MSG LPMSG TEXTMETRICA
LPTEXTMETRICA DLGPROC PAINTSTRUCT LOGFONTA LPLOGFONTA OSVERSIONINFOA
CRITICAL_SECTION LPCRITICAL_SECTION LPSECURITY_ATTRIBUTES DLGTEMPLATE
LPCDLGTEMPLATEA _WIN32_FIND_DATAA LPSTREAM LPDIRECTDRAW
LPDIRECTDRAWSURFACE LPDIRECTDRAWPALETTE LPDIRECTDRAWCLIPPER
LARGE_INTEGER PLARGE_INTEGER WNDCLASSA int32_t uint32_t int16_t uint16_t
int8_t uint8_t WCHAR __m64 _EA _EBX _ECX _EDX _ESI _EDI _EBP _ESP
_AH _AL _BH _BL _CH _CL _DH _DL _AX _BX _CX _DX _SI _DI _BP _SP
LPPERSISTSTREAM LPTHREAD_START_ROUTINE LPDDENUMMODESCALLBACK LPOVERLAPPED
SIZE_T DWORD_PTR VARTYPE LPCWCH LONGLONG ULONGLONG
""".split())


def pass_unknown_symbols(ctx):'''
src = src.replace(anchor, helper, 1)

# 2) skip type names in the unqualified-call loop
old = '''        name = m.group(1)
        if name in _TYPE_KEYWORDS:
            continue'''
assert old in src
new = '''        name = m.group(1)
        if name in _TYPE_KEYWORDS:
            continue
        # Stage 3b: `TYPE(x)` is a functional cast, not a call (C2377).
        if name in _ERA_TYPE_NAMES:
            continue'''
src = src.replace(old, new, 1)
open(p, 'w', encoding='utf-8', newline='').write(src)
print('F4 patched')
