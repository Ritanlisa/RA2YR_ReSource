p = r'D:\RA2YR_ReSource\tools\decomp_sys\era_types.h'
s = open(p, encoding='utf-8').read()
anchor = '''// `min`/`max` are macros in VC6 <windef.h>; emitted bodies may spell member
// functions with those names, so keep them out of the namespace entirely.'''
assert anchor in s
add = '''// ---- Stage 3b: residual SDK/COM spellings (C2061/C2065/C2027 evidence)
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
typedef __int64             LONGLONG;
typedef unsigned __int64    ULONGLONG;
typedef unsigned long       LPARAM_LONG;
struct IPersistStreamVtbl;
struct IStreamVtbl;
struct IStorageVtbl;
struct IDirectDraw7Vtbl;
// IDA's unresolved return type (`unknown Stub(...)`, `unknown v3;`): a
// 4-byte scalar slot, never a class.
typedef int                 unknown;

'''
s = s.replace(anchor, add + anchor, 1)
open(p, 'w', encoding='utf-8', newline='').write(s)
print('era_types patched')
