// era_types.h -- types-only preamble for decomp_sys pilot hpps.
//
// WHY a hand-rolled header instead of <windows.h>: the emitted units
// declare their callees with IDA-shaped prototypes (`extern long __stdcall
// SendMessageA(int a0, ...)`).  Pulling in the real <windows.h> would make
// every such declaration fight the SDK prototype (C2371 redefinition).
// This header therefore carries ONLY typedefs/tags/macros -- no functions,
// no macros that rename symbols -- so it can never collide with the
// emitted extern block.
//
// Everything here is a pure spelling alias: no codegen effect.
// Layout of the tags mirrors the 32-bit Win32 ABI (only member sizes
// matter for locals passed by address).
#ifndef DECOMP_ERA_TYPES_H
#define DECOMP_ERA_TYPES_H

// VC6 spells `wchar_t` as a <stddef.h> typedef, not a builtin keyword.
#include <stddef.h>

// ---- IDA primitive spellings (VC6 has no <stdint.h>; see era_shim/cstdint)
typedef void                _UNKNOWN;
typedef unsigned int        _DWORD;
typedef unsigned short      _WORD;
typedef unsigned char       _BYTE;
typedef unsigned __int64    _QWORD;

// ---- Win32 scalar aliases
typedef unsigned int        DWORD;
typedef unsigned short      WORD;
typedef unsigned char       BYTE;
typedef int                 BOOL;
typedef unsigned int        UINT;
typedef unsigned short      USHORT;
typedef unsigned char       UCHAR;
typedef char                CHAR;
typedef long                LONG;
typedef unsigned long       ULONG;
typedef unsigned long       COLORREF;
typedef unsigned short      ATOM;
typedef unsigned int        LCTYPE;
typedef unsigned int        MMRESULT;
typedef unsigned int        UINT_PTR;
typedef unsigned long       ULONG_PTR;
typedef long                LRESULT;
typedef unsigned int        WPARAM;
typedef long                LPARAM;
typedef short               SHORT;
typedef int                 INT_PTR;
typedef long                LSTATUS;
typedef unsigned long       REGSAM;
typedef unsigned short      u_short;
typedef unsigned long       u_long;
typedef unsigned short *    LPWORD;
typedef void *              LPVOID;
typedef const void *        LPCVOID;
typedef char *              LPSTR;
typedef const char *        LPCSTR;
typedef wchar_t *           LPWSTR;
typedef const wchar_t *     LPCWSTR;
typedef wchar_t *           BSTR;
typedef const wchar_t *     LPCOLESTR;
typedef const wchar_t *     PCNZWCH;
typedef const char *        LPCCH;
typedef unsigned char *     LPBYTE;
typedef unsigned long *     LPDWORD;
typedef long *              LPLONG;
typedef int (__stdcall *FARPROC)();

// ---- Win32 handle aliases (all opaque pointers)
typedef void *              HWND;
typedef void *              HINSTANCE;
typedef void *              HDC;
typedef void *              HGDIOBJ;
typedef void *              HGLOBAL;
typedef void *              HLOCAL;
typedef void *              HMODULE;
typedef void *              HANDLE;
typedef void *              HBRUSH;
typedef void *              HPEN;
typedef void *              HFONT;
typedef void *              HBITMAP;
typedef void *              HICON;
typedef void *              HCURSOR;
typedef void *              HMENU;
typedef void *              HKEY;
typedef void *              HRGN;
typedef void *              HRSRC;
typedef void *              HIMC;
typedef void *              HKL;
typedef unsigned int        SOCKET;
typedef HKEY *              PHKEY;

// ---- COM / DDraw basics
struct _GUID_era {
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
};
typedef struct _GUID_era GUID;
typedef struct _GUID_era CLSID;
typedef struct _GUID_era IID;
typedef const IID &     REFIID;
typedef const CLSID &   REFCLSID;
typedef CLSID *         LPCLSID;
typedef GUID *          LPGUID;
struct IUnknown;
typedef IUnknown *      LPUNKNOWN;
struct VARIANT_era { unsigned char __pad[16]; };
typedef struct VARIANT_era VARIANT;
struct SAFEARRAY_era { unsigned char __pad[16]; };
typedef struct SAFEARRAY_era SAFEARRAY;

// ---- Win32 struct tags (locals passed by address; sizes per 32-bit ABI)
struct tagPOINT { long x; long y; };
typedef struct tagPOINT POINT;
typedef POINT *         LPPOINT;
struct tagRECT { long left; long top; long right; long bottom; };
typedef struct tagRECT RECT;
typedef RECT *          LPRECT;
struct _FILETIME {
    unsigned long dwLowDateTime;
    unsigned long dwHighDateTime;
};
typedef struct _FILETIME FILETIME;
struct _SYSTEMTIME {
    unsigned short wYear, wMonth, wDayOfWeek, wDay;
    unsigned short wHour, wMinute, wSecond, wMilliseconds;
};
typedef struct _SYSTEMTIME SYSTEMTIME;
struct tagMSG {
    void *         hwnd;
    unsigned int   message;
    unsigned int   wParam;
    long           lParam;
    unsigned long  time;
    struct tagPOINT pt;
};
typedef struct tagMSG MSG;
typedef MSG *          LPMSG;
// NOTE: the exact tag names matter -- emitted locals spell
// `struct tagTEXTMETRICA tm;` / `struct _BY_HANDLE_FILE_INFORMATION fi;`.
// CW3: real TEXTMETRICA layout (the pad-only stand-in rejected the member
// reads the export bodies spell: `tmAveCharWidth` C2039).  56 bytes total.
struct tagTEXTMETRICA {
    long tmHeight;
    long tmAscent;
    long tmDescent;
    long tmInternalLeading;
    long tmExternalLeading;
    long tmAveCharWidth;
    long tmMaxCharWidth;
    long tmWeight;
    long tmOverhang;
    long tmDigitizedAspectX;
    long tmDigitizedAspectY;
    unsigned char tmFirstChar;
    unsigned char tmLastChar;
    unsigned char tmDefaultChar;
    unsigned char tmBreakChar;
    unsigned char tmItalic;
    unsigned char tmUnderlined;
    unsigned char tmStruckOut;
    unsigned char tmPitchAndFamily;
    unsigned char tmCharSet;
    unsigned char __pad_tail[3];
};
typedef struct tagTEXTMETRICA TEXTMETRICA;
typedef struct tagTEXTMETRICA * LPTEXTMETRICA;
struct _BY_HANDLE_FILE_INFORMATION {
    unsigned long dwFileAttributes;
    FILETIME      ftCreationTime;
    FILETIME      ftLastAccessTime;
    FILETIME      ftLastWriteTime;
    unsigned long dwVolumeSerialNumber;
    unsigned long nFileSizeHigh;
    unsigned long nFileSizeLow;
    unsigned long nNumberOfLinks;
    unsigned long nFileIndexHigh;
    unsigned long nFileIndexLow;
};
typedef int (__stdcall * DLGPROC)();
struct tagPAINTSTRUCT { unsigned char __pad[64]; };
typedef struct tagPAINTSTRUCT PAINTSTRUCT;
struct tagLOGFONTA {
    long  lfHeight;
    long  lfWidth;
    long  lfEscapement;
    long  lfOrientation;
    long  lfWeight;
    unsigned char lfItalic;
    unsigned char lfUnderline;
    unsigned char lfStrikeOut;
    unsigned char lfCharSet;
    unsigned char lfOutPrecision;
    unsigned char lfClipPrecision;
    unsigned char lfQuality;
    unsigned char lfPitchAndFamily;
    char  lfFaceName[32];
};
typedef struct tagLOGFONTA LOGFONTA;
typedef struct tagLOGFONTA * LPLOGFONTA;
struct _OSVERSIONINFOA { unsigned char __pad[148]; };
typedef struct _OSVERSIONINFOA OSVERSIONINFOA;
struct _RTL_CRITICAL_SECTION_era {
    void *         DebugInfo;
    long           LockCount;
    long           RecursionCount;
    void *         OwningThread;
    void *         LockSemaphore;
    unsigned long  SpinCount;
};
typedef struct _RTL_CRITICAL_SECTION_era CRITICAL_SECTION;
typedef CRITICAL_SECTION *               LPCRITICAL_SECTION;
typedef void *                           LPSECURITY_ATTRIBUTES;
struct DLGTEMPLATE_era {
    unsigned int   style;
    unsigned int   dwExtendedStyle;
    unsigned short cdit;
    short          x;
    short          y;
    short          cx;
    short          cy;
};
typedef struct DLGTEMPLATE_era DLGTEMPLATE;
typedef const DLGTEMPLATE * LPCDLGTEMPLATEA;
struct _WIN32_FIND_DATAA { unsigned char __pad[320]; };
struct _WIN32_FIND_DATAW { unsigned char __pad[320]; };
typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA_era;
typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW_era;
struct IStream;
typedef struct IStream * LPSTREAM;
struct IDirectDraw_era;
typedef struct IDirectDraw_era * LPDIRECTDRAW;
struct IDirectDrawSurface_era;
typedef struct IDirectDrawSurface_era * LPDIRECTDRAWSURFACE;
struct IDirectDrawPalette_era;
typedef struct IDirectDrawPalette_era * LPDIRECTDRAWPALETTE;
struct IDirectDrawClipper_era;
typedef struct IDirectDrawClipper_era * LPDIRECTDRAWCLIPPER;

// ---- Stage 3a: residual SDK spellings seen in CF evidence (C2065/C2061)
typedef unsigned char       _TBYTE;
#ifndef HWND_MESSAGE
#define HWND_MESSAGE        ((HWND)-3)
#endif
typedef union _LARGE_INTEGER_era {
    struct { unsigned long LowPart; long HighPart; };
    __int64 QuadPart;
} LARGE_INTEGER;
typedef LARGE_INTEGER *     PLARGE_INTEGER;
struct tagWNDCLASSA_era {
    unsigned int  style;
    long (__stdcall *lpfnWndProc)(void *, unsigned int, unsigned int, long);
    int           cbClsExtra;
    int           cbWndExtra;
    void *        hInstance;
    void *        hIcon;
    void *        hCursor;
    void *        hbrBackground;
    const char *  lpszMenuName;
    const char *  lpszClassName;
};
typedef struct tagWNDCLASSA_era WNDCLASSA;

// ---- IDA pseudo-register names that leak into bodies (`_EAX` etc.)
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
extern unsigned int         _ESP;

// ---- bit/slice macros (IDA LOWORD-family).  windef.h normally supplies
// LOBYTE/LOWORD/HIBYTE/HIWORD; without <windows.h> the pilot hpp needs them.
// All spell an lvalue (address-of), so `LOBYTE(x) = 1` stays a store.
#ifndef LOBYTE
#define LOBYTE(x)  (*(unsigned char  *)&(x))
#endif
#ifndef HIBYTE
#define HIBYTE(x)  (*(unsigned char  *)((char *)&(x) + 1))
#endif
#ifndef LOWORD
#define LOWORD(x)  (*(unsigned short *)&(x))
#endif
#ifndef HIWORD
#define HIWORD(x)  (*(unsigned short *)((char *)&(x) + 2))
#endif
#ifndef LODWORD
#define LODWORD(x) (*(unsigned int   *)&(x))
#endif
#ifndef HIDWORD
#define HIDWORD(x) (*(unsigned int   *)((char *)&(x) + 4))
#endif
#ifndef BYTE1
#define BYTE1(x)   (*(unsigned char  *)((char *)&(x) + 1))
#endif
#ifndef BYTE2
#define BYTE2(x)   (*(unsigned char  *)((char *)&(x) + 2))
#endif
#ifndef BYTE3
#define BYTE3(x)   (*(unsigned char  *)((char *)&(x) + 3))
#endif
#ifndef WORD1
#define WORD1(x)   (*(unsigned short *)((char *)&(x) + 2))
#endif
#ifndef WORD2
#define WORD2(x)   (*(unsigned short *)((char *)&(x) + 4))
#endif
#ifndef BYTE4
#define BYTE4(x)   (*(unsigned char  *)((char *)&(x) + 4))
#endif
#ifndef SLOWORD
#define SLOWORD(x) (*(short *)&(x))
#endif
#ifndef SHIWORD
#define SHIWORD(x) (*(short *)((char *)&(x) + 2))
#endif


// ---- CW5-10: host/IDA spellings that leak into residual pseudo-code bodies.
// Fixed-width aliases (VC6 has no <stdint.h>), the host CRT's qsort callback
// typedef, 16-bit pseudo-register names and the MMX value type.  Pure
// spelling aliases: no codegen effect on their own.
typedef int                 int32_t;
typedef unsigned int        uint32_t;
typedef short               int16_t;
typedef unsigned short      uint16_t;
typedef signed char         int8_t;
typedef unsigned char       uint8_t;
typedef unsigned short      WCHAR;
// CW5-10: MMX value type (the export's `.m64_*` member views are re-spelled
// as value slicings by passes.pass_residual_idents).
typedef unsigned __int64    __m64;
typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(
    const void *, const void *);
extern unsigned char        _AH, _AL, _BH, _BL, _CH, _CL, _DH, _DL;
extern unsigned short       _AX, _BX, _CX, _DX, _SI, _DI, _BP, _SP;

// Win32 registry root handles (winreg.h normally supplies these constants).
#ifndef HKEY_LOCAL_MACHINE
#define HKEY_LOCAL_MACHINE  ((HKEY)0x80000002)
#endif
#ifndef HKEY_CURRENT_USER
#define HKEY_CURRENT_USER   ((HKEY)0x80000001)
#endif
#ifndef HKEY_CLASSES_ROOT
#define HKEY_CLASSES_ROOT   ((HKEY)0x80000000)
#endif

// ---- Stage 3b: residual SDK/COM spellings (C2061/C2065/C2027 evidence)
// Pure spelling aliases; the two tag forward-declarations exist so the
// emitted `struct X *p` slots have a type (no layout is implied).
typedef void *              LPPERSISTSTREAM;
typedef void *              LPTHREAD_START_ROUTINE;
typedef void *              LPDDENUMMODESCALLBACK;
typedef void *              LPOVERLAPPED;
typedef unsigned int        SIZE_T;
typedef unsigned long       DWORD_PTR;
typedef unsigned short      VARTYPE;
typedef const wchar_t *     LPCWCH;
typedef struct _FILETIME *  PFILETIME;
typedef struct _FILETIME *  LPFILETIME;
typedef __int64             LONGLONG;
typedef unsigned __int64    ULONGLONG;
struct IPersistStreamVtbl;
struct IStreamVtbl;
struct IStorageVtbl;
struct IDirectDraw7Vtbl;
// IDA's unresolved return type (`unknown Stub(...)`, `unknown v3;`): a
// 4-byte scalar slot, never a class.
typedef int                 unknown;

// `min`/`max` are macros in VC6 <windef.h>; emitted bodies may spell member
// functions with those names, so keep them out of the namespace entirely.

// ---- Win32/CRT struct TAGS referenced by emitted bodies as `struct X ...`
// (C2079 family: a typedef alone does not satisfy the `struct X` tag form).
struct sockaddr { unsigned char __pad[16]; };
struct in_addr { unsigned char __pad[4]; };
struct _STARTUPINFOA { unsigned char __pad[68]; };
struct _STARTUPINFOW { unsigned char __pad[68]; };
struct _COMSTAT { unsigned char __pad[12]; };
struct _cpinfo { unsigned char __pad[20]; };
struct _PROCESS_INFORMATION { unsigned char __pad[16]; };
struct _DCB { unsigned char __pad[28]; };
struct _MEMORY_BASIC_INFORMATION { unsigned char __pad[28]; };
struct _MEMORYSTATUS { unsigned char __pad[32]; };
struct _COMMTIMEOUTS { unsigned char __pad[20]; };
struct _TIME_ZONE_INFORMATION { unsigned char __pad[172]; };
struct _SECURITY_ATTRIBUTES { unsigned char __pad[12]; };
struct _INPUT_RECORD { unsigned char __pad[20]; };
typedef struct sockaddr sockaddr;
typedef struct in_addr in_addr;

#endif  // DECOMP_ERA_TYPES_H
