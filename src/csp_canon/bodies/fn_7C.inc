// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007C3230  Render_Render_7C3230  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7C3230(int a1, int a2, int a3)
{
{
    if ( a2 )
    *(int *)(a1 + 1924) = a2;
    else
    *(int *)(a1 + 1924) = nullsub_49;
    if ( a3 )
    *(int *)(a1 + 1928) = a3;
    else
    *(int *)(a1 + 1928) = nullsub_49;
    return -1;
}
}

// ==== BACKFILL 0x007C3430  Audio_Render_7C3430  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Audio_Render_7C3430(DSurface * aP0, int a2, int a3, unsigned int a4)
{
{
    int v6;
    unsigned short v7;
    int result;
    if ( a2 >= *(unsigned short *)&aP0->__pad_518[508] || a2 < 0 || (aP0->__pad_2C[88] & 1) != 0 && !*(short *)&aP0->__pad_518[508] )
  {
    return -23;
  }
    v6 = *(int *)&aP0->__pad_518[516];
    v7 = *(short *)(v6 + 4 * a2 + 2);
    LOWORD(v6) = *(short *)(v6 + 4 * a2);
    *(int *)&aP0->__pad_11F[1] = a2;
    result = SeekAudioStream((int)aP0, (DSurface *)(unsigned short)v6, (DSurface *)v7, a3, a4);
    if ( result == -1 )
    *(int *)&aP0->__pad_11F[1] = a2;
    return result;
}
}

// ==== BACKFILL 0x007C35B0  sub_7C35B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_7C35B0::sub_7C35B0()
{
{
    return this->M3624;
}
}

// ==== BACKFILL 0x007C35C0  AbstractClass::finalizeDestruction  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::finalizeDestruction() {
{
      unsigned __int16 v1;
      int v2;
      unsigned int v4;

      v1 = this->q0EC;
      this->abstractFlags = 0;
      this->nextArrayIndex = 0;
      v2 = v1 - 1;
      this->q11C = v2;
      this->q12C = v2;
      this->q140 = v2;
      v4 = this->q7BC & 0xFFFFF87F;
      this->needsSave = 0;
      this->q7BC = v4;
      this->q024 = 0;
      this->q150 = 0;
      this->q124 = 0;
      this->q120 = -1;
      this->q128 = -1;
      this->q130 = -1;
      this->q134 = -1;
      this->q13C = -1;
      this->q138 = -1;
      this->q144 = -1;
      this->q028 = -1;
      this->q02C = 0;
      this->q7A0 = 0;
      this->q7A4 = -1;
      this->q7C4 = 0;
      this->q038 = 0;
      this->q710 = -1;
      this->q708 = -1;
      this->q70C = -1;
      return -1;
}
} } }

// ==== BACKFILL 0x007C3670  sub_7C3670  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_7C3670::sub_7C3670()
{
{
    this->M1808 = -1;
    this->M1800 = -1;
    this->M1804 = -1;
    return -1;
}
}

// ==== BACKFILL 0x007C3710  Render_Render_7C3710  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7C3710(unsigned char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
  *a2 = a1[242];
  *a3 = a1[243];
  *a4 = a1[264];
  return -1;
}

// ==== BACKFILL 0x007C6064  Timer::ReadTSC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned long long Timer::ReadTSC(unsigned int * a1)
{
{
    unsigned __int64 result;
    result = __rdtsc();
    *a1 = HIDWORD(result);
    return result;
}
}

// ==== BACKFILL 0x007C61CF  globalHelper_0C61CF  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7C61CF(int a1)
{
{
    char v1;
    char *v2;
    char v3;
    char v4;
    short *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int result;
    v1 = 0;
    v2 = *(char **)(a1 + 76);
    do
  {
    v3 = 0;
    do
    {
    v4 = *v2++;
    if ( v4 )
      {
    v5 = *(short **)(a1 + 64);
    v6 = *(int *)(a1 + 16) + **(unsigned char **)(a1 + 80);
    if ( (unsigned short)v6 < *v5 )
        {
    *v5 = v6;
    v7 = **(unsigned short **)(a1 + 68);
    LOWORD(v7) = *(short *)(*(int *)(a1 + 144) + 2 * v7);
    LOBYTE(v7) = v4;
    **(short **)(a1 + 72) = *(short *)(*(int *)(a1 + 88) + 2 * v7);
        }
      }
    ++v3;
    ++*(int *)(a1 + 80);
    *(int *)(a1 + 72) += 2;
    *(int *)(a1 + 64) += 2;
    *(int *)(a1 + 68) += 2;
    }
    while ( v3 < *(char *)a1 );
    *(int *)(a1 + 72) += *(int *)(a1 + 28);
    v8 = *(int *)(a1 + 20);
    *(int *)(a1 + 64) += v8;
    *(int *)(a1 + 64) += v8;
    v9 = *(int *)(a1 + 24);
    *(int *)(a1 + 68) += v9;
    *(int *)(a1 + 68) += v9;
    result = *(int *)(a1 + 32);
    v2 += result;
    *(int *)(a1 + 80) += result;
    ++v1;
  }
    while ( v1 < *(char *)(a1 + 4) );
    return result;
}
}

// ==== BACKFILL 0x007C7350  Audio_Render_7C7350  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7C7350(int a1)
{
{
    *(short *)(a1 + 4) = 0;
    *(int *)a1 = 0;
    *(short *)(a1 + 10) = 0;
    *(int *)(a1 + 6) = 0;
    return a1;
}
}

// ==== BACKFILL 0x007C8362  FindClose  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FindClose()
{
    int __stdcall FindClose(HANDLE hFindFile)
{
    return __imp_FindClose(hFindFile);
}
}

// ==== BACKFILL 0x007C8368  FindNextFileA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FindNextFileA()
{
    int __stdcall FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData)
{
    return __imp_FindNextFileA(hFindFile, lpFindFileData);
}
}

// ==== BACKFILL 0x007C836E  FindFirstFileA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FindFirstFileA()
{
    HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
{
    return __imp_FindFirstFileA(lpFileName, lpFindFileData);
}
}

// ==== BACKFILL 0x007C8374  FormatMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FormatMessageA()
{
    DWORD __stdcall FormatMessageA( DWORD dwFlags, LPCVOID lpSource, DWORD dwMessageId, DWORD dwLanguageId, LPSTR lpBuffer, DWORD nSize, va_list *Arguments)
{
    return __imp_FormatMessageA(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}
}

// ==== BACKFILL 0x007C8380  SetThreadPriority  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetThreadPriority()
{
    int __stdcall SetThreadPriority(HANDLE hThread, int nPriority)
{
    return __imp_SetThreadPriority(hThread, nPriority);
}
}

// ==== BACKFILL 0x007C8386  CreateThread  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateThread()
{
    HANDLE __stdcall CreateThread( LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId)
{
    return __imp_CreateThread(lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
}
}

// ==== BACKFILL 0x007C838C  InitializeCriticalSection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int InitializeCriticalSection()
{
    void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
    __imp_InitializeCriticalSection(lpCriticalSection);
}
}

// ==== BACKFILL 0x007C8392  Sleep  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Sleep()
{
    void __stdcall Sleep(DWORD dwMilliseconds)
{
    __imp_Sleep(dwMilliseconds);
}
}

// ==== BACKFILL 0x007C8398  LeaveCriticalSection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LeaveCriticalSection()
{
    void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
    __imp_LeaveCriticalSection(lpCriticalSection);
}
}

// ==== BACKFILL 0x007C839E  EnterCriticalSection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EnterCriticalSection()
{
    void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
    __imp_EnterCriticalSection(lpCriticalSection);
}
}

// ==== BACKFILL 0x007C83A4  DeleteCriticalSection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DeleteCriticalSection()
{
    void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
    __imp_DeleteCriticalSection(lpCriticalSection);
}
}

// ==== BACKFILL 0x007C83AA  CloseHandle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CloseHandle()
{
    int __stdcall CloseHandle(HANDLE hObject)
{
    return __imp_CloseHandle(hObject);
}
}

// ==== BACKFILL 0x007C83B0  WaitForSingleObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WaitForSingleObject()
{
    DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds)
{
    return __imp_WaitForSingleObject(hHandle, dwMilliseconds);
}
}

// ==== BACKFILL 0x007C83B6  QueryPerformanceFrequency  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int QueryPerformanceFrequency()
{
    int __stdcall QueryPerformanceFrequency(LARGE_INTEGER *lpFrequency)
{
    return __imp_QueryPerformanceFrequency(lpFrequency);
}
}

// ==== BACKFILL 0x007C83BC  QueryPerformanceCounter  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int QueryPerformanceCounter()
{
    int __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)
{
    return __imp_QueryPerformanceCounter(lpPerformanceCount);
}
}

// ==== BACKFILL 0x007C83C8  InterlockedDecrement  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int InterlockedDecrement()
{
    LONG __stdcall InterlockedDecrement(volatile LONG *lpAddend)
{
    return __imp_InterlockedDecrement(lpAddend);
}
}

// ==== BACKFILL 0x007C83CE  InterlockedIncrement  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int InterlockedIncrement()
{
    LONG __stdcall InterlockedIncrement(volatile LONG *lpAddend)
{
    return __imp_InterlockedIncrement(lpAddend);
}
}

// ==== BACKFILL 0x007C83D4  MultiByteToWideChar  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MultiByteToWideChar()
{
    int __stdcall MultiByteToWideChar( UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)
{
    return __imp_MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}
}

// ==== BACKFILL 0x007C83DA  SetFilePointer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetFilePointer()
{
    DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
{
    return __imp_SetFilePointer(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
}
}

// ==== BACKFILL 0x007C83E0  CreateFileA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateFileA()
{
    HANDLE __stdcall CreateFileA( LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
{
    return __imp_CreateFileA( lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}
}

// ==== BACKFILL 0x007C83E6  DeviceIoControl  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DeviceIoControl()
{
    int __stdcall DeviceIoControl( HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped)
{
    return __imp_DeviceIoControl( hDevice, dwIoControlCode, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesReturned, lpOverlapped);
}
}

// ==== BACKFILL 0x007C83EC  GetDriveTypeA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetDriveTypeA()
{
    UINT __stdcall GetDriveTypeA(LPCSTR lpRootPathName)
{
    return __imp_GetDriveTypeA(lpRootPathName);
}
}

// ==== BACKFILL 0x007C83F2  WideCharToMultiByte  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WideCharToMultiByte()
{
    int __stdcall WideCharToMultiByte( UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPint lpUsedDefaultChar)
{
    return __imp_WideCharToMultiByte( CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar);
}
}

// ==== BACKFILL 0x007C83F8  GetDiskFreeSpaceA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetDiskFreeSpaceA()
{
    int __stdcall GetDiskFreeSpaceA( LPCSTR lpRootPathName, LPDWORD lpSectorsPerCluster, LPDWORD lpBytesPerSector, LPDWORD lpNumberOfFreeClusters, LPDWORD lpTotalNumberOfClusters)
{
    return __imp_GetDiskFreeSpaceA( lpRootPathName, lpSectorsPerCluster, lpBytesPerSector, lpNumberOfFreeClusters, lpTotalNumberOfClusters);
}
}

// ==== BACKFILL 0x007C83FE  GetProcAddress  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetProcAddress()
{
    FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
{
    return __imp_GetProcAddress(hModule, lpProcName);
}
}

// ==== BACKFILL 0x007C8404  GetModuleHandleA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetModuleHandleA()
{
    HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
{
    return __imp_GetModuleHandleA(lpModuleName);
}
}

// ==== BACKFILL 0x007C840A  CreateMutexA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateMutexA()
{
    HANDLE __stdcall CreateMutexA(LPSECURITY_ATTRIBUTES lpMutexAttributes, int bInitialOwner, LPCSTR lpName)
{
    return __imp_CreateMutexA(lpMutexAttributes, bInitialOwner, lpName);
}
}

// ==== BACKFILL 0x007C8410  MapViewOfFileEx  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MapViewOfFileEx()
{
    LPVOID __stdcall MapViewOfFileEx( HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap, LPVOID lpBaseAddress)
{
    return __imp_MapViewOfFileEx( hFileMappingObject, dwDesiredAccess, dwFileOffsetHigh, dwFileOffsetLow, dwNumberOfBytesToMap, lpBaseAddress);
}
}

// ==== BACKFILL 0x007C8416  SetEvent  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetEvent()
{
    int __stdcall SetEvent(HANDLE hEvent)
{
    return __imp_SetEvent(hEvent);
}
}

// ==== BACKFILL 0x007C841C  OpenEventA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int OpenEventA()
{
    HANDLE __stdcall OpenEventA(DWORD dwDesiredAccess, int bInheritHandle, LPCSTR lpName)
{
    return __imp_OpenEventA(dwDesiredAccess, bInheritHandle, lpName);
}
}

// ==== BACKFILL 0x007C8422  UnmapViewOfFile  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int UnmapViewOfFile()
{
    int __stdcall UnmapViewOfFile(LPCVOID lpBaseAddress)
{
    return __imp_UnmapViewOfFile(lpBaseAddress);
}
}

// ==== BACKFILL 0x007C8428  LockResource  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LockResource()
{
    LPVOID __stdcall LockResource(HGLOBAL hResData)
{
    return __imp_LockResource(hResData);
}
}

// ==== BACKFILL 0x007C842E  LoadResource  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LoadResource()
{
    HGLOBAL __stdcall LoadResource(HMODULE hModule, HRSRC hResInfo)
{
    return __imp_LoadResource(hModule, hResInfo);
}
}

// ==== BACKFILL 0x007C8434  FindResourceA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FindResourceA()
{
    HRSRC __stdcall FindResourceA(HMODULE hModule, LPCSTR lpName, LPCSTR lpType)
{
    return __imp_FindResourceA(hModule, lpName, lpType);
}
}

// ==== BACKFILL 0x007C843A  GetVolumeInformationA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetVolumeInformationA()
{
    int __stdcall GetVolumeInformationA( LPCSTR lpRootPathName, LPSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize)
{
    return __imp_GetVolumeInformationA( lpRootPathName, lpVolumeNameBuffer, nVolumeNameSize, lpVolumeSerialNumber, lpMaximumComponentLength, lpFileSystemFlags, lpFileSystemNameBuffer, nFileSystemNameSize);
}
}

// ==== BACKFILL 0x007C8440  FreeLibrary  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FreeLibrary()
{
    int __stdcall FreeLibrary(HMODULE hLibModule)
{
    return __imp_FreeLibrary(hLibModule);
}
}

// ==== BACKFILL 0x007C8446  LoadLibraryA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LoadLibraryA()
{
    HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
{
    return __imp_LoadLibraryA(lpLibFileName);
}
}

// ==== BACKFILL 0x007C8458  ExitProcess  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ExitProcess()
{
    void __stdcall __noreturn ExitProcess(UINT uExitCode)
{
    __imp_ExitProcess(uExitCode);
}
}

// ==== BACKFILL 0x007C845E  IsBadReadPtr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsBadReadPtr()
{
    int __stdcall IsBadReadPtr(const void *lp, UINT_PTR ucb)
{
    return __imp_IsBadReadPtr(lp, ucb);
}
}

// ==== BACKFILL 0x007C8464  IsBadCodePtr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsBadCodePtr()
{
    int __stdcall IsBadCodePtr(FARPROC lpfn)
{
    return __imp_IsBadCodePtr(lpfn);
}
}

// ==== BACKFILL 0x007C846A  lstrcatA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int lstrcatA()
{
    LPSTR __stdcall lstrcatA(LPSTR lpString1, LPCSTR lpString2)
{
    return __imp_lstrcatA(lpString1, lpString2);
}
}

// ==== BACKFILL 0x007C8470  lstrlenA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int lstrlenA()
{
    int __stdcall lstrlenA(LPCSTR lpString)
{
    return __imp_lstrlenA(lpString);
}
}

// ==== BACKFILL 0x007C8476  GetModuleFileNameA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetModuleFileNameA()
{
    DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
{
    return __imp_GetModuleFileNameA(hModule, lpFilename, nSize);
}
}

// ==== BACKFILL 0x007C8482  WriteFile  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WriteFile()
{
    int __stdcall WriteFile( HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)
{
    return __imp_WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
}
}

// ==== BACKFILL 0x007C8488  FlushInstructionCache  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FlushInstructionCache()
{
    int __stdcall FlushInstructionCache(HANDLE hProcess, LPCVOID lpBaseAddress, SIZE_T dwSize)
{
    return __imp_FlushInstructionCache(hProcess, lpBaseAddress, dwSize);
}
}

// ==== BACKFILL 0x007C848E  VirtualProtect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int VirtualProtect()
{
    int __stdcall VirtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect)
{
    return __imp_VirtualProtect(lpAddress, dwSize, flNewProtect, lpflOldProtect);
}
}

// ==== BACKFILL 0x007C8494  VirtualQuery  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int VirtualQuery()
{
    SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength)
{
    return __imp_VirtualQuery(lpAddress, lpBuffer, dwLength);
}
}

// ==== BACKFILL 0x007C84A0  GetSystemTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetSystemTime()
{
    void __stdcall GetSystemTime(LPSYSTEMTIME lpSystemTime)
{
    __imp_GetSystemTime(lpSystemTime);
}
}

// ==== BACKFILL 0x007C84A6  GlobalMemoryStatus  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GlobalMemoryStatus()
{
    void __stdcall GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)
{
    __imp_GlobalMemoryStatus(lpBuffer);
}
}

// ==== BACKFILL 0x007C84AC  CreateProcessA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateProcessA()
{
    int __stdcall CreateProcessA( LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, int bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation)
{
    return __imp_CreateProcessA( lpApplicationName, lpCommandLine, lpProcessAttributes, lpThreadAttributes, bInheritHandles, dwCreationFlags, lpEnvironment, lpCurrentDirectory, lpStartupInfo, lpProcessInformation);
}
}

// ==== BACKFILL 0x007C84B2  DeleteFileA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DeleteFileA()
{
    int __stdcall DeleteFileA(LPCSTR lpFileName)
{
    return __imp_DeleteFileA(lpFileName);
}
}

// ==== BACKFILL 0x007C84B8  GetTempFileNameA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetTempFileNameA()
{
    UINT __stdcall GetTempFileNameA(LPCSTR lpPathName, LPCSTR lpPrefixString, UINT uUnique, LPSTR lpTempFileName)
{
    return __imp_GetTempFileNameA(lpPathName, lpPrefixString, uUnique, lpTempFileName);
}
}

// ==== BACKFILL 0x007C84BE  GetWindowsDirectoryA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetWindowsDirectoryA()
{
    UINT __stdcall GetWindowsDirectoryA(LPSTR lpBuffer, UINT uSize)
{
    return __imp_GetWindowsDirectoryA(lpBuffer, uSize);
}
}

// ==== BACKFILL 0x007C84C4  GetTimeFormatA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetTimeFormatA()
{
    int __stdcall GetTimeFormatA( LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpTime, LPCSTR lpFormat, LPSTR lpTimeStr, int cchTime)
{
    return __imp_GetTimeFormatA(Locale, dwFlags, lpTime, lpFormat, lpTimeStr, cchTime);
}
}

// ==== BACKFILL 0x007C84CA  GetDateFormatA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetDateFormatA()
{
    int __stdcall GetDateFormatA( LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpDate, LPCSTR lpFormat, LPSTR lpDateStr, int cchDate)
{
    return __imp_GetDateFormatA(Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate);
}
}

// ==== BACKFILL 0x007C84D0  FileTimeToSystemTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FileTimeToSystemTime()
{
    int __stdcall FileTimeToSystemTime(const FILETIME *lpFileTime, LPSYSTEMTIME lpSystemTime)
{
    return __imp_FileTimeToSystemTime(lpFileTime, lpSystemTime);
}
}

// ==== BACKFILL 0x007C84D6  FileTimeToLocalFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FileTimeToLocalFileTime()
{
    int __stdcall FileTimeToLocalFileTime(const FILETIME *lpFileTime, LPFILETIME lpLocalFileTime)
{
    return __imp_FileTimeToLocalFileTime(lpFileTime, lpLocalFileTime);
}
}

// ==== BACKFILL 0x007C84DC  SystemTimeToFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SystemTimeToFileTime()
{
    int __stdcall SystemTimeToFileTime(const SYSTEMTIME *lpSystemTime, LPFILETIME lpFileTime)
{
    return __imp_SystemTimeToFileTime(lpSystemTime, lpFileTime);
}
}

// ==== BACKFILL 0x007C84E2  CompareFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CompareFileTime()
{
    LONG __stdcall CompareFileTime(const FILETIME *lpFileTime1, const FILETIME *lpFileTime2)
{
    return __imp_CompareFileTime(lpFileTime1, lpFileTime2);
}
}

// ==== BACKFILL 0x007C84E8  CopyFileA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CopyFileA()
{
    int __stdcall CopyFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName, int bFailIfExists)
{
    return __imp_CopyFileA(lpExistingFileName, lpNewFileName, bFailIfExists);
}
}

// ==== BACKFILL 0x007C84EE  CreateDirectoryA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateDirectoryA()
{
    int __stdcall CreateDirectoryA(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
    return __imp_CreateDirectoryA(lpPathName, lpSecurityAttributes);
}
}

// ==== BACKFILL 0x007C84F4  MulDiv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MulDiv()
{
    int __stdcall MulDiv(int nNumber, int nNumerator, int nDenominator)
{
    return __imp_MulDiv(nNumber, nNumerator, nDenominator);
}
}

// ==== BACKFILL 0x007C84FA  EscapeCommFunction  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EscapeCommFunction()
{
    int __stdcall EscapeCommFunction(HANDLE hFile, DWORD dwFunc)
{
    return __imp_EscapeCommFunction(hFile, dwFunc);
}
}

// ==== BACKFILL 0x007C8500  ClearCommBreak  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ClearCommBreak()
{
    int __stdcall ClearCommBreak(HANDLE hFile)
{
    return __imp_ClearCommBreak(hFile);
}
}

// ==== BACKFILL 0x007C8506  SetCommBreak  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetCommBreak()
{
    int __stdcall SetCommBreak(HANDLE hFile)
{
    return __imp_SetCommBreak(hFile);
}
}

// ==== BACKFILL 0x007C850C  ReadFile  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ReadFile()
{
    int __stdcall ReadFile( HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)
{
    return __imp_ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
}
}

// ==== BACKFILL 0x007C8512  GetFileSize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetFileSize()
{
    DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
{
    return __imp_GetFileSize(hFile, lpFileSizeHigh);
}
}

// ==== BACKFILL 0x007C8518  FileTimeToDosDateTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FileTimeToDosDateTime()
{
    int __stdcall FileTimeToDosDateTime(const FILETIME *lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime)
{
    return __imp_FileTimeToDosDateTime(lpFileTime, lpFatDate, lpFatTime);
}
}

// ==== BACKFILL 0x007C851E  GetFileInformationByHandle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetFileInformationByHandle()
{
    int __stdcall GetFileInformationByHandle(HANDLE hFile, LPBY_HANDLE_FILE_INFORMATION lpFileInformation)
{
    return __imp_GetFileInformationByHandle(hFile, lpFileInformation);
}
}

// ==== BACKFILL 0x007C8524  SetFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetFileTime()
{
    int __stdcall SetFileTime( HANDLE hFile, const FILETIME *lpCreationTime, const FILETIME *lpLastAccessTime, const FILETIME *lpLastWriteTime)
{
    return __imp_SetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}
}

// ==== BACKFILL 0x007C852A  DosDateTimeToFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DosDateTimeToFileTime()
{
    int __stdcall DosDateTimeToFileTime(WORD wFatDate, WORD wFatTime, LPFILETIME lpFileTime)
{
    return __imp_DosDateTimeToFileTime(wFatDate, wFatTime, lpFileTime);
}
}

// ==== BACKFILL 0x007C8530  GetStartupInfoA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetStartupInfoA()
{
    void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)
{
    __imp_GetStartupInfoA(lpStartupInfo);
}
}

// ==== BACKFILL 0x007C8536  TerminateProcess  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TerminateProcess()
{
    int __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
{
    return __imp_TerminateProcess(hProcess, uExitCode);
}
}

// ==== BACKFILL 0x007C853C  WaitForMultipleObjects  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WaitForMultipleObjects()
{
    DWORD __stdcall WaitForMultipleObjects(DWORD nCount, const HANDLE *lpHandles, int bWaitAll, DWORD dwMilliseconds)
{
    return __imp_WaitForMultipleObjects(nCount, lpHandles, bWaitAll, dwMilliseconds);
}
}

// ==== BACKFILL 0x007C8542  lstrcpyA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int lstrcpyA()
{
    LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2)
{
    return __imp_lstrcpyA(lpString1, lpString2);
}
}

// ==== BACKFILL 0x007C8548  SetUnhandledExceptionFilter  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetUnhandledExceptionFilter()
{
    LPTOP_LEVEL_EXCEPTION_FILTER __stdcall SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
    return __imp_SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}
}

// ==== BACKFILL 0x007C854E  SetCurrentDirectoryA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetCurrentDirectoryA()
{
    int __stdcall SetCurrentDirectoryA(LPCSTR lpPathName)
{
    return __imp_SetCurrentDirectoryA(lpPathName);
}
}

// ==== BACKFILL 0x007C8554  OpenMutexA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int OpenMutexA()
{
    HANDLE __stdcall OpenMutexA(DWORD dwDesiredAccess, int bInheritHandle, LPCSTR lpName)
{
    return __imp_OpenMutexA(dwDesiredAccess, bInheritHandle, lpName);
}
}

// ==== BACKFILL 0x007C855A  GetFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetFileTime()
{
    int __stdcall GetFileTime( HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)
{
    return __imp_GetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}
}

// ==== BACKFILL 0x007C8560  GetLogicalDriveStringsA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetLogicalDriveStringsA()
{
    DWORD __stdcall GetLogicalDriveStringsA(DWORD nBufferLength, LPSTR lpBuffer)
{
    return __imp_GetLogicalDriveStringsA(nBufferLength, lpBuffer);
}
}

// ==== BACKFILL 0x007C8566  ClearCommError  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ClearCommError()
{
    int __stdcall ClearCommError(HANDLE hFile, LPDWORD lpErrors, LPCOMSTAT lpStat)
{
    return __imp_ClearCommError(hFile, lpErrors, lpStat);
}
}

// ==== BACKFILL 0x007C856C  SetCommTimeouts  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetCommTimeouts()
{
    int __stdcall SetCommTimeouts(HANDLE hFile, LPCOMMTIMEOUTS lpCommTimeouts)
{
    return __imp_SetCommTimeouts(hFile, lpCommTimeouts);
}
}

// ==== BACKFILL 0x007C8572  SetCommState  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetCommState()
{
    int __stdcall SetCommState(HANDLE hFile, LPDCB lpDCB)
{
    return __imp_SetCommState(hFile, lpDCB);
}
}

// ==== BACKFILL 0x007C8578  GetCommState  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetCommState()
{
    int __stdcall GetCommState(HANDLE hFile, LPDCB lpDCB)
{
    return __imp_GetCommState(hFile, lpDCB);
}
}

// ==== BACKFILL 0x007C857E  CreateEventA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateEventA()
{
    HANDLE __stdcall CreateEventA( LPSECURITY_ATTRIBUTES lpEventAttributes, int bManualReset, int bInitialState, LPCSTR lpName)
{
    return __imp_CreateEventA(lpEventAttributes, bManualReset, bInitialState, lpName);
}
}

// ==== BACKFILL 0x007C8584  PurgeComm  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int PurgeComm()
{
    int __stdcall PurgeComm(HANDLE hFile, DWORD dwFlags)
{
    return __imp_PurgeComm(hFile, dwFlags);
}
}

// ==== BACKFILL 0x007C858A  SetupComm  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetupComm()
{
    int __stdcall SetupComm(HANDLE hFile, DWORD dwInQueue, DWORD dwOutQueue)
{
    return __imp_SetupComm(hFile, dwInQueue, dwOutQueue);
}
}

// ==== BACKFILL 0x007C8590  GetCommMask  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetCommMask()
{
    int __stdcall GetCommMask(HANDLE hFile, LPDWORD lpEvtMask)
{
    return __imp_GetCommMask(hFile, lpEvtMask);
}
}

// ==== BACKFILL 0x007C8596  ResetEvent  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ResetEvent()
{
    int __stdcall ResetEvent(HANDLE hEvent)
{
    return __imp_ResetEvent(hEvent);
}
}

// ==== BACKFILL 0x007C859C  GetCommModemStatus  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetCommModemStatus()
{
    int __stdcall GetCommModemStatus(HANDLE hFile, LPDWORD lpModemStat)
{
    return __imp_GetCommModemStatus(hFile, lpModemStat);
}
}

// ==== BACKFILL 0x007C85A2  GetOverlappedResult  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetOverlappedResult()
{
    int __stdcall GetOverlappedResult( HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, int bWait)
{
    return __imp_GetOverlappedResult(hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait);
}
}

// ==== BACKFILL 0x007C85A8  GetVersionExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetVersionExA()
{
    int __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)
{
    return __imp_GetVersionExA(lpVersionInformation);
}
}

// ==== BACKFILL 0x007C85AE  GetExitCodeProcess  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetExitCodeProcess()
{
    int __stdcall GetExitCodeProcess(HANDLE hProcess, LPDWORD lpExitCode)
{
    return __imp_GetExitCodeProcess(hProcess, lpExitCode);
}
}

// ==== BACKFILL 0x007C85B4  GetCurrentDirectoryA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetCurrentDirectoryA()
{
    DWORD __stdcall GetCurrentDirectoryA(DWORD nBufferLength, LPSTR lpBuffer)
{
    return __imp_GetCurrentDirectoryA(nBufferLength, lpBuffer);
}
}

// ==== BACKFILL 0x007C85BA  HeapDestroy  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int HeapDestroy()
{
    int __stdcall HeapDestroy(HANDLE hHeap)
{
    return __imp_HeapDestroy(hHeap);
}
}

// ==== BACKFILL 0x007C85C0  GetComputerNameA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetComputerNameA()
{
    int __stdcall GetComputerNameA(LPSTR lpBuffer, LPDWORD nSize)
{
    return __imp_GetComputerNameA(lpBuffer, nSize);
}
}

// ==== BACKFILL 0x007C85C6  ReleaseMutex  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ReleaseMutex()
{
    int __stdcall ReleaseMutex(HANDLE hMutex)
{
    return __imp_ReleaseMutex(hMutex);
}
}

// ==== BACKFILL 0x007C85CC  GetClientRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetClientRect()
{
    int __stdcall GetClientRect(HWND hWnd, LPRECT lpRect)
{
    return __imp_GetClientRect(hWnd, lpRect);
}
}

// ==== BACKFILL 0x007C85D2  DispatchMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DispatchMessageA()
{
    LRESULT __stdcall DispatchMessageA(const MSG *lpMsg)
{
    return __imp_DispatchMessageA(lpMsg);
}
}

// ==== BACKFILL 0x007C85D8  TranslateMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TranslateMessage()
{
    int __stdcall TranslateMessage(const MSG *lpMsg)
{
    return __imp_TranslateMessage(lpMsg);
}
}

// ==== BACKFILL 0x007C85DE  ClientToScreen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ClientToScreen()
{
    int __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint)
{
    return __imp_ClientToScreen(hWnd, lpPoint);
}
}

// ==== BACKFILL 0x007C85E4  SetRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetRect()
{
    int __stdcall SetRect(LPRECT lprc, int xLeft, int yTop, int xRight, int yBottom)
{
    return __imp_SetRect(lprc, xLeft, yTop, xRight, yBottom);
}
}

// ==== BACKFILL 0x007C85F0  PostMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int PostMessageA()
{
  return __imp_PostMessageA(hWnd, Msg, wParam, lParam);
}

// ==== BACKFILL 0x007C85F6  GetDlgItem  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetDlgItem()
{
    HWND __stdcall GetDlgItem(HWND hDlg, int nIDDlgItem)
{
    return __imp_GetDlgItem(hDlg, nIDDlgItem);
}
}

// ==== BACKFILL 0x007C85FC  SendMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SendMessageA()
{
    LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    return __imp_SendMessageA(hWnd, Msg, wParam, lParam);
}
}

// ==== BACKFILL 0x007C8602  EnableWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EnableWindow()
{
    int __stdcall EnableWindow(HWND hWnd, int bEnable)
{
    return __imp_EnableWindow(hWnd, bEnable);
}
}

// ==== BACKFILL 0x007C8608  InvalidateRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int InvalidateRect()
{
    int __stdcall InvalidateRect(HWND hWnd, const RECT *lpRect, int bErase)
{
    return __imp_InvalidateRect(hWnd, lpRect, bErase);
}
}

// ==== BACKFILL 0x007C860E  ShowWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ShowWindow()
{
    int __stdcall ShowWindow(HWND hWnd, int nCmdShow)
{
    return __imp_ShowWindow(hWnd, nCmdShow);
}
}

// ==== BACKFILL 0x007C8614  SetTimer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetTimer()
{
    UINT_PTR __stdcall SetTimer(HWND hWnd, UINT_PTR nIDEvent, UINT uElapse, TIMERPROC lpTimerFunc)
{
    return __imp_SetTimer(hWnd, nIDEvent, uElapse, lpTimerFunc);
}
}

// ==== BACKFILL 0x007C861A  SendDlgItemMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SendDlgItemMessageA()
{
    LRESULT __stdcall SendDlgItemMessageA(HWND hDlg, int nIDDlgItem, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    return __imp_SendDlgItemMessageA(hDlg, nIDDlgItem, Msg, wParam, lParam);
}
}

// ==== BACKFILL 0x007C8620  KillTimer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int KillTimer()
{
    int __stdcall KillTimer(HWND hWnd, UINT_PTR uIDEvent)
{
    return __imp_KillTimer(hWnd, uIDEvent);
}
}

// ==== BACKFILL 0x007C8626  ValidateRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ValidateRect()
{
    int __stdcall ValidateRect(HWND hWnd, const RECT *lpRect)
{
    return __imp_ValidateRect(hWnd, lpRect);
}
}

// ==== BACKFILL 0x007C862C  GetWindowLongA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetWindowLongA()
{
    LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex)
{
    return __imp_GetWindowLongA(hWnd, nIndex);
}
}

// ==== BACKFILL 0x007C8632  SetWindowLongA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetWindowLongA()
{
    LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong)
{
    return __imp_SetWindowLongA(hWnd, nIndex, dwNewLong);
}
}

// ==== BACKFILL 0x007C8638  UpdateWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int UpdateWindow()
{
    int __stdcall UpdateWindow(HWND hWnd)
{
    return __imp_UpdateWindow(hWnd);
}
}

// ==== BACKFILL 0x007C863E  MessageBoxIndirectA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MessageBoxIndirectA()
{
    int __stdcall MessageBoxIndirectA(const MSGBOXPARAMSA *lpmbp)
{
    return __imp_MessageBoxIndirectA(lpmbp);
}
}

// ==== BACKFILL 0x007C8644  PeekMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int PeekMessageA()
{
    int __stdcall PeekMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
{
    return __imp_PeekMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
}
}

// ==== BACKFILL 0x007C864A  MessageBoxA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MessageBoxA()
{
    int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
{
    return __imp_MessageBoxA(hWnd, lpText, lpCaption, uType);
}
}

// ==== BACKFILL 0x007C8650  ReleaseDC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ReleaseDC()
{
    int __stdcall ReleaseDC(HWND hWnd, HDC hDC)
{
    return __imp_ReleaseDC(hWnd, hDC);
}
}

// ==== BACKFILL 0x007C8656  GetDC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetDC()
{
    HDC __stdcall GetDC(HWND hWnd)
{
    return __imp_GetDC(hWnd);
}
}

// ==== BACKFILL 0x007C865C  CloseWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CloseWindow()
{
    int __stdcall CloseWindow(HWND hWnd)
{
    return __imp_CloseWindow(hWnd);
}
}

// ==== BACKFILL 0x007C8662  DefWindowProcA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DefWindowProcA()
{
    LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    return __imp_DefWindowProcA(hWnd, Msg, wParam, lParam);
}
}

// ==== BACKFILL 0x007C866E  EndDialog  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EndDialog()
{
    int __stdcall EndDialog(HWND hDlg, INT_PTR nResult)
{
    return __imp_EndDialog(hDlg, nResult);
}
}

// ==== BACKFILL 0x007C8674  SetFocus  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetFocus()
{
    HWND __stdcall SetFocus(HWND hWnd)
{
    return __imp_SetFocus(hWnd);
}
}

// ==== BACKFILL 0x007C867A  SetDlgItemTextA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetDlgItemTextA()
{
    int __stdcall SetDlgItemTextA(HWND hDlg, int nIDDlgItem, LPCSTR lpString)
{
    return __imp_SetDlgItemTextA(hDlg, nIDDlgItem, lpString);
}
}

// ==== BACKFILL 0x007C8680  DialogBoxParamA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DialogBoxParamA()
{
    INT_PTR __stdcall DialogBoxParamA( HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
    return __imp_DialogBoxParamA(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
}
}

// ==== BACKFILL 0x007C8686  DialogBoxIndirectParamA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DialogBoxIndirectParamA()
{
    INT_PTR __stdcall DialogBoxIndirectParamA( HINSTANCE hInstance, LPCDLGTEMPLATEA hDialogTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
    return __imp_DialogBoxIndirectParamA(hInstance, hDialogTemplate, hWndParent, lpDialogFunc, dwInitParam);
}
}

// ==== BACKFILL 0x007C868C  ShowCursor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ShowCursor()
{
    int __stdcall ShowCursor(int bShow)
{
    return __imp_ShowCursor(bShow);
}
}

// ==== BACKFILL 0x007C8692  SetWindowPos  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetWindowPos()
{
    int __stdcall SetWindowPos(HWND hWnd, HWND hWndInsertAfter, int X, int Y, int cx, int cy, UINT uFlags)
{
    return __imp_SetWindowPos(hWnd, hWndInsertAfter, X, Y, cx, cy, uFlags);
}
}

// ==== BACKFILL 0x007C8698  DestroyWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DestroyWindow()
{
    int __stdcall DestroyWindow(HWND hWnd)
{
    return __imp_DestroyWindow(hWnd);
}
}

// ==== BACKFILL 0x007C86AA  SetCapture  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetCapture()
{
    HWND __stdcall SetCapture(HWND hWnd)
{
    return __imp_SetCapture(hWnd);
}
}

// ==== BACKFILL 0x007C86B0  GetDlgCtrlID  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetDlgCtrlID()
{
    int __stdcall GetDlgCtrlID(HWND hWnd)
{
    return __imp_GetDlgCtrlID(hWnd);
}
}

// ==== BACKFILL 0x007C86B6  ChildWindowFromPointEx  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ChildWindowFromPointEx()
{
    HWND __stdcall ChildWindowFromPointEx(HWND hwnd, POINT pt, UINT flags)
{
    return __imp_ChildWindowFromPointEx(hwnd, pt, flags);
}
}

// ==== BACKFILL 0x007C86BC  GetWindowRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetWindowRect()
{
    int __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect)
{
    return __imp_GetWindowRect(hWnd, lpRect);
}
}

// ==== BACKFILL 0x007C86C2  GetCursorPos  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetCursorPos()
{
    int __stdcall GetCursorPos(LPPOINT lpPoint)
{
    return __imp_GetCursorPos(lpPoint);
}
}

// ==== BACKFILL 0x007C86C8  GetKeyState  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetKeyState()
{
    SHORT __stdcall GetKeyState(int nVirtKey)
{
    return __imp_GetKeyState(nVirtKey);
}
}

// ==== BACKFILL 0x007C86CE  GetAsyncKeyState  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetAsyncKeyState()
{
    SHORT __stdcall GetAsyncKeyState(int vKey)
{
    return __imp_GetAsyncKeyState(vKey);
}
}

// ==== BACKFILL 0x007C86D4  ToAscii  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ToAscii()
{
    int __stdcall ToAscii(UINT uVirtKey, UINT uScanCode, const BYTE *lpKeyState, LPWORD lpChar, UINT uFlags)
{
    return __imp_ToAscii(uVirtKey, uScanCode, lpKeyState, lpChar, uFlags);
}
}

// ==== BACKFILL 0x007C86DA  MapVirtualKeyA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MapVirtualKeyA()
{
    UINT __stdcall MapVirtualKeyA(UINT uCode, UINT uMapType)
{
    return __imp_MapVirtualKeyA(uCode, uMapType);
}
}

// ==== BACKFILL 0x007C86E0  GetSystemMetrics  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetSystemMetrics()
{
    int __stdcall GetSystemMetrics(int nIndex)
{
    return __imp_GetSystemMetrics(nIndex);
}
}

// ==== BACKFILL 0x007C86E6  MoveWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MoveWindow()
{
    int __stdcall MoveWindow(HWND hWnd, int X, int Y, int nWidth, int nHeight, int bRepaint)
{
    return __imp_MoveWindow(hWnd, X, Y, nWidth, nHeight, bRepaint);
}
}

// ==== BACKFILL 0x007C86EC  AdjustWindowRectEx  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AdjustWindowRectEx()
{
    int __stdcall AdjustWindowRectEx(LPRECT lpRect, DWORD dwStyle, int bMenu, DWORD dwExStyle)
{
    return __imp_AdjustWindowRectEx(lpRect, dwStyle, bMenu, dwExStyle);
}
}

// ==== BACKFILL 0x007C86F2  GetMenu  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetMenu()
{
    HMENU __stdcall GetMenu(HWND hWnd)
{
    return __imp_GetMenu(hWnd);
}
}

// ==== BACKFILL 0x007C86F8  AdjustWindowRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AdjustWindowRect()
{
    int __stdcall AdjustWindowRect(LPRECT lpRect, DWORD dwStyle, int bMenu)
{
    return __imp_AdjustWindowRect(lpRect, dwStyle, bMenu);
}
}

// ==== BACKFILL 0x007C86FE  GetSysColor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetSysColor()
{
    DWORD __stdcall GetSysColor(int nIndex)
{
    return __imp_GetSysColor(nIndex);
}
}

// ==== BACKFILL 0x007C8704  CreateDialogParamA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateDialogParamA()
{
    HWND __stdcall CreateDialogParamA( HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
    return __imp_CreateDialogParamA(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
}
}

// ==== BACKFILL 0x007C870A  EndPaint  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EndPaint()
{
    int __stdcall EndPaint(HWND hWnd, const PAINTSTRUCT *lpPaint)
{
    return __imp_EndPaint(hWnd, lpPaint);
}
}

// ==== BACKFILL 0x007C8710  BeginPaint  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int BeginPaint()
{
    HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
{
    return __imp_BeginPaint(hWnd, lpPaint);
}
}

// ==== BACKFILL 0x007C8716  CharToOemBuffA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CharToOemBuffA()
{
    int __stdcall CharToOemBuffA(LPCSTR lpszSrc, LPSTR lpszDst, DWORD cchDstLength)
{
    return __imp_CharToOemBuffA(lpszSrc, lpszDst, cchDstLength);
}
}

// ==== BACKFILL 0x007C871C  TranslateAcceleratorA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TranslateAcceleratorA()
{
    int __stdcall TranslateAcceleratorA(HWND hWnd, HACCEL hAccTable, LPMSG lpMsg)
{
    return __imp_TranslateAcceleratorA(hWnd, hAccTable, lpMsg);
}
}

// ==== BACKFILL 0x007C8722  IsDialogMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsDialogMessageA()
{
    int __stdcall IsDialogMessageA(HWND hDlg, LPMSG lpMsg)
{
    return __imp_IsDialogMessageA(hDlg, lpMsg);
}
}

// ==== BACKFILL 0x007C8728  GetWindowTextA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetWindowTextA()
{
    int __stdcall GetWindowTextA(HWND hWnd, LPSTR lpString, int nMaxCount)
{
    return __imp_GetWindowTextA(hWnd, lpString, nMaxCount);
}
}

// ==== BACKFILL 0x007C872E  IsWindowEnabled  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsWindowEnabled()
{
    int __stdcall IsWindowEnabled(HWND hWnd)
{
    return __imp_IsWindowEnabled(hWnd);
}
}

// ==== BACKFILL 0x007C8734  GetNextDlgTabItem  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetNextDlgTabItem()
{
    HWND __stdcall GetNextDlgTabItem(HWND hDlg, HWND hCtl, int bPrevious)
{
    return __imp_GetNextDlgTabItem(hDlg, hCtl, bPrevious);
}
}

// ==== BACKFILL 0x007C873A  GetParent  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetParent()
{
    HWND __stdcall GetParent(HWND hWnd)
{
    return __imp_GetParent(hWnd);
}
}

// ==== BACKFILL 0x007C8740  GetClassNameA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetClassNameA()
{
    int __stdcall GetClassNameA(HWND hWnd, LPSTR lpClassName, int nMaxCount)
{
    return __imp_GetClassNameA(hWnd, lpClassName, nMaxCount);
}
}

// ==== BACKFILL 0x007C8746  EnumChildWindows  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EnumChildWindows()
{
    int __stdcall EnumChildWindows(HWND hWndParent, WNDENUMPROC lpEnumFunc, LPARAM lParam)
{
    return __imp_EnumChildWindows(hWndParent, lpEnumFunc, lParam);
}
}

// ==== BACKFILL 0x007C874C  IsWindowVisible  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsWindowVisible()
{
    int __stdcall IsWindowVisible(HWND hWnd)
{
    return __imp_IsWindowVisible(hWnd);
}
}

// ==== BACKFILL 0x007C8752  SetForegroundWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetForegroundWindow()
{
    int __stdcall SetForegroundWindow(HWND hWnd)
{
    return __imp_SetForegroundWindow(hWnd);
}
}

// ==== BACKFILL 0x007C8758  RegisterClassA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegisterClassA()
{
    ATOM __stdcall RegisterClassA(const WNDCLASSA *lpWndClass)
{
    return __imp_RegisterClassA(lpWndClass);
}
}

// ==== BACKFILL 0x007C875E  CreateWindowExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateWindowExA()
{
    HWND __stdcall CreateWindowExA( DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam)
{
    return __imp_CreateWindowExA( dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam);
}
}

// ==== BACKFILL 0x007C8764  CallWindowProcA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CallWindowProcA()
{
    LRESULT __stdcall CallWindowProcA(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    return __imp_CallWindowProcA(lpPrevWndFunc, hWnd, Msg, wParam, lParam);
}
}

// ==== BACKFILL 0x007C876A  BringWindowToTop  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int BringWindowToTop()
{
    int __stdcall BringWindowToTop(HWND hWnd)
{
    return __imp_BringWindowToTop(hWnd);
}
}

// ==== BACKFILL 0x007C8770  GetWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetWindow()
{
    HWND __stdcall GetWindow(HWND hWnd, UINT uCmd)
{
    return __imp_GetWindow(hWnd, uCmd);
}
}

// ==== BACKFILL 0x007C8776  IntersectRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IntersectRect()
{
    int __stdcall IntersectRect(LPRECT lprcDst, const RECT *lprcSrc1, const RECT *lprcSrc2)
{
    return __imp_IntersectRect(lprcDst, lprcSrc1, lprcSrc2);
}
}

// ==== BACKFILL 0x007C877C  WindowFromPoint  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WindowFromPoint()
{
    HWND __stdcall WindowFromPoint(POINT Point)
{
    return __imp_WindowFromPoint(Point);
}
}

// ==== BACKFILL 0x007C8782  GetUpdateRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetUpdateRect()
{
    int __stdcall GetUpdateRect(HWND hWnd, LPRECT lpRect, int bErase)
{
    return __imp_GetUpdateRect(hWnd, lpRect, bErase);
}
}

// ==== BACKFILL 0x007C878E  LockWindowUpdate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LockWindowUpdate()
{
    int __stdcall LockWindowUpdate(HWND hWndLock)
{
    return __imp_LockWindowUpdate(hWndLock);
}
}

// ==== BACKFILL 0x007C8794  ScreenToClient  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ScreenToClient()
{
    int __stdcall ScreenToClient(HWND hWnd, LPPOINT lpPoint)
{
    return __imp_ScreenToClient(hWnd, lpPoint);
}
}

// ==== BACKFILL 0x007C879A  GetKeyNameTextA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetKeyNameTextA()
{
    int __stdcall GetKeyNameTextA(LONG lParam, LPSTR lpString, int cchSize)
{
    return __imp_GetKeyNameTextA(lParam, lpString, cchSize);
}
}

// ==== BACKFILL 0x007C87A0  CreateDialogIndirectParamA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateDialogIndirectParamA()
{
    HWND __stdcall CreateDialogIndirectParamA( HINSTANCE hInstance, LPCDLGTEMPLATEA lpTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
    return __imp_CreateDialogIndirectParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, dwInitParam);
}
}

// ==== BACKFILL 0x007C87A6  SetCursorPos  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetCursorPos()
{
    int __stdcall SetCursorPos(int X, int Y)
{
    return __imp_SetCursorPos(X, Y);
}
}

// ==== BACKFILL 0x007C87AC  FindWindowA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FindWindowA()
{
    HWND __stdcall FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName)
{
    return __imp_FindWindowA(lpClassName, lpWindowName);
}
}

// ==== BACKFILL 0x007C87B2  PostQuitMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int PostQuitMessage()
{
    void __stdcall PostQuitMessage(int nExitCode)
{
    __imp_PostQuitMessage(nExitCode);
}
}

// ==== BACKFILL 0x007C87B8  SetCursor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetCursor()
{
    HCURSOR __stdcall SetCursor(HCURSOR hCursor)
{
    return __imp_SetCursor(hCursor);
}
}

// ==== BACKFILL 0x007C87BE  LoadCursorA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LoadCursorA()
{
    HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName)
{
    return __imp_LoadCursorA(hInstance, lpCursorName);
}
}

// ==== BACKFILL 0x007C87C4  ChildWindowFromPoint  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ChildWindowFromPoint()
{
    HWND __stdcall ChildWindowFromPoint(HWND hWndParent, POINT Point)
{
    return __imp_ChildWindowFromPoint(hWndParent, Point);
}
}

// ==== BACKFILL 0x007C87CA  WinHelpA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WinHelpA()
{
    int __stdcall WinHelpA(HWND hWndMain, LPCSTR lpszHelp, UINT uCommand, ULONG_PTR dwData)
{
    return __imp_WinHelpA(hWndMain, lpszHelp, uCommand, dwData);
}
}

// ==== BACKFILL 0x007C87D6  RedrawWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RedrawWindow()
{
    int __stdcall RedrawWindow(HWND hWnd, const RECT *lprcUpdate, HRGN hrgnUpdate, UINT flags)
{
    return __imp_RedrawWindow(hWnd, lprcUpdate, hrgnUpdate, flags);
}
}

// ==== BACKFILL 0x007C87DC  SetActiveWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetActiveWindow()
{
    HWND __stdcall SetActiveWindow(HWND hWnd)
{
    return __imp_SetActiveWindow(hWnd);
}
}

// ==== BACKFILL 0x007C87E2  RegisterHotKey  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegisterHotKey()
{
    int __stdcall RegisterHotKey(HWND hWnd, int id, UINT fsModifiers, UINT vk)
{
    return __imp_RegisterHotKey(hWnd, id, fsModifiers, vk);
}
}

// ==== BACKFILL 0x007C87E8  LoadIconA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LoadIconA()
{
    HICON __stdcall LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName)
{
    return __imp_LoadIconA(hInstance, lpIconName);
}
}

// ==== BACKFILL 0x007C87F4  GetTopWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetTopWindow()
{
    HWND __stdcall GetTopWindow(HWND hWnd)
{
    return __imp_GetTopWindow(hWnd);
}
}

// ==== BACKFILL 0x007C87FA  WaitForInputIdle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WaitForInputIdle()
{
    DWORD __stdcall WaitForInputIdle(HANDLE hProcess, DWORD dwMilliseconds)
{
    return __imp_WaitForInputIdle(hProcess, dwMilliseconds);
}
}

// ==== BACKFILL 0x007C8800  CheckDlgButton  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CheckDlgButton()
{
    int __stdcall CheckDlgButton(HWND hDlg, int nIDButton, UINT uCheck)
{
    return __imp_CheckDlgButton(hDlg, nIDButton, uCheck);
}
}

// ==== BACKFILL 0x007C8806  IsDlgButtonChecked  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsDlgButtonChecked()
{
    UINT __stdcall IsDlgButtonChecked(HWND hDlg, int nIDButton)
{
    return __imp_IsDlgButtonChecked(hDlg, nIDButton);
}
}

// ==== BACKFILL 0x007C880C  CreateDIBSection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateDIBSection()
{
    HBITMAP __stdcall CreateDIBSection( HDC hdc, const BITMAPINFO *pbmi, UINT usage, void **ppvBits, HANDLE hSection, DWORD offset)
{
    return __imp_CreateDIBSection(hdc, pbmi, usage, ppvBits, hSection, offset);
}
}

// ==== BACKFILL 0x007C8812  DeleteObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DeleteObject()
{
    int __stdcall DeleteObject(HGDIOBJ ho)
{
    return __imp_DeleteObject(ho);
}
}

// ==== BACKFILL 0x007C8818  GetTextMetricsA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetTextMetricsA()
{
    int __stdcall GetTextMetricsA(HDC hdc, LPTEXTMETRICA lptm)
{
    return __imp_GetTextMetricsA(hdc, lptm);
}
}

// ==== BACKFILL 0x007C881E  SelectObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SelectObject()
{
    HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h)
{
    return __imp_SelectObject(hdc, h);
}
}

// ==== BACKFILL 0x007C8824  CreateFontIndirectA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateFontIndirectA()
{
    HFONT __stdcall CreateFontIndirectA(const LOGFONTA *lplf)
{
    return __imp_CreateFontIndirectA(lplf);
}
}

// ==== BACKFILL 0x007C882A  GetDeviceCaps  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetDeviceCaps()
{
    int __stdcall GetDeviceCaps(HDC hdc, int index)
{
    return __imp_GetDeviceCaps(hdc, index);
}
}

// ==== BACKFILL 0x007C8830  TextOutA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TextOutA()
{
    int __stdcall TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c)
{
    return __imp_TextOutA(hdc, x, y, lpString, c);
}
}

// ==== BACKFILL 0x007C8836  SetTextColor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetTextColor()
{
    COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color)
{
    return __imp_SetTextColor(hdc, color);
}
}

// ==== BACKFILL 0x007C883C  SetBkColor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetBkColor()
{
    COLORREF __stdcall SetBkColor(HDC hdc, COLORREF color)
{
    return __imp_SetBkColor(hdc, color);
}
}

// ==== BACKFILL 0x007C8842  SetBkMode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetBkMode()
{
    int __stdcall SetBkMode(HDC hdc, int mode)
{
    return __imp_SetBkMode(hdc, mode);
}
}

// ==== BACKFILL 0x007C8848  CreateSolidBrush  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CreateSolidBrush()
{
    HBRUSH __stdcall CreateSolidBrush(COLORREF color)
{
    return __imp_CreateSolidBrush(color);
}
}

// ==== BACKFILL 0x007C884E  GetTextColor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetTextColor()
{
    COLORREF __stdcall GetTextColor(HDC hdc)
{
    return __imp_GetTextColor(hdc);
}
}

// ==== BACKFILL 0x007C8854  GetBkColor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetBkColor()
{
    COLORREF __stdcall GetBkColor(HDC hdc)
{
    return __imp_GetBkColor(hdc);
}
}

// ==== BACKFILL 0x007C885A  GetBkMode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetBkMode()
{
    int __stdcall GetBkMode(HDC hdc)
{
    return __imp_GetBkMode(hdc);
}
}

// ==== BACKFILL 0x007C8860  GetStockObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetStockObject()
{
    HGDIOBJ __stdcall GetStockObject(int i)
{
    return __imp_GetStockObject(i);
}
}

// ==== BACKFILL 0x007C8866  RestoreDC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RestoreDC()
{
    int __stdcall RestoreDC(HDC hdc, int nSavedDC)
{
    return __imp_RestoreDC(hdc, nSavedDC);
}
}

// ==== BACKFILL 0x007C886C  DPtoLP  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DPtoLP()
{
    int __stdcall DPtoLP(HDC hdc, LPPOINT lppt, int c)
{
    return __imp_DPtoLP(hdc, lppt, c);
}
}

// ==== BACKFILL 0x007C8872  SetWindowOrgEx  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetWindowOrgEx()
{
    int __stdcall SetWindowOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
{
    return __imp_SetWindowOrgEx(hdc, x, y, lppt);
}
}

// ==== BACKFILL 0x007C8878  SetViewportOrgEx  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetViewportOrgEx()
{
    int __stdcall SetViewportOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
{
    return __imp_SetViewportOrgEx(hdc, x, y, lppt);
}
}

// ==== BACKFILL 0x007C887E  ModifyWorldTransform  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ModifyWorldTransform()
{
    int __stdcall ModifyWorldTransform(HDC hdc, const XFORM *lpxf, DWORD mode)
{
    return __imp_ModifyWorldTransform(hdc, lpxf, mode);
}
}

// ==== BACKFILL 0x007C8884  SetGraphicsMode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetGraphicsMode()
{
    int __stdcall SetGraphicsMode(HDC hdc, int iMode)
{
    return __imp_SetGraphicsMode(hdc, iMode);
}
}

// ==== BACKFILL 0x007C888A  SaveDC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SaveDC()
{
    int __stdcall SaveDC(HDC hdc)
{
    return __imp_SaveDC(hdc);
}
}

// ==== BACKFILL 0x007C8890  RegCloseKey  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegCloseKey()
{
    LSTATUS __stdcall RegCloseKey(HKEY hKey)
{
    return __imp_RegCloseKey(hKey);
}
}

// ==== BACKFILL 0x007C8896  RegQueryValueExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegQueryValueExA()
{
    LSTATUS __stdcall RegQueryValueExA( HKEY hKey, LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData)
{
    return __imp_RegQueryValueExA(hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
}
}

// ==== BACKFILL 0x007C889C  RegOpenKeyExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegOpenKeyExA()
{
    LSTATUS __stdcall RegOpenKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult)
{
    return __imp_RegOpenKeyExA(hKey, lpSubKey, ulOptions, samDesired, phkResult);
}
}

// ==== BACKFILL 0x007C88A2  RegDeleteValueA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegDeleteValueA()
{
    LSTATUS __stdcall RegDeleteValueA(HKEY hKey, LPCSTR lpValueName)
{
    return __imp_RegDeleteValueA(hKey, lpValueName);
}
}

// ==== BACKFILL 0x007C88A8  RegSetValueExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegSetValueExA()
{
    LSTATUS __stdcall RegSetValueExA( HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType, const BYTE *lpData, DWORD cbData)
{
    return __imp_RegSetValueExA(hKey, lpValueName, Reserved, dwType, lpData, cbData);
}
}

// ==== BACKFILL 0x007C88AE  RegCreateKeyExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegCreateKeyExA()
{
    LSTATUS __stdcall RegCreateKeyExA( HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired, const LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition)
{
    return __imp_RegCreateKeyExA( hKey, lpSubKey, Reserved, lpClass, dwOptions, samDesired, lpSecurityAttributes, phkResult, lpdwDisposition);
}
}

// ==== BACKFILL 0x007C88B4  RegEnumKeyExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegEnumKeyExA()
{
    LSTATUS __stdcall RegEnumKeyExA( HKEY hKey, DWORD dwIndex, LPSTR lpName, LPDWORD lpcchName, LPDWORD lpReserved, LPSTR lpClass, LPDWORD lpcchClass, PFILETIME lpftLastWriteTime)
{
    return __imp_RegEnumKeyExA(hKey, dwIndex, lpName, lpcchName, lpReserved, lpClass, lpcchClass, lpftLastWriteTime);
}
}

// ==== BACKFILL 0x007C88BA  RegDeleteKeyA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegDeleteKeyA()
{
    LSTATUS __stdcall RegDeleteKeyA(HKEY hKey, LPCSTR lpSubKey)
{
    return __imp_RegDeleteKeyA(hKey, lpSubKey);
}
}

// ==== BACKFILL 0x007C88C0  RegQueryInfoKeyA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegQueryInfoKeyA()
{
    LSTATUS __stdcall RegQueryInfoKeyA( HKEY hKey, LPSTR lpClass, LPDWORD lpcchClass, LPDWORD lpReserved, LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen, LPDWORD lpcbMaxClassLen, LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen, LPDWORD lpcbMaxValueLen, LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime)
{
    return __imp_RegQueryInfoKeyA( hKey, lpClass, lpcchClass, lpReserved, lpcSubKeys, lpcbMaxSubKeyLen, lpcbMaxClassLen, lpcValues, lpcbMaxValueNameLen, lpcbMaxValueLen, lpcbSecurityDescriptor, lpftLastWriteTime);
}
}

// ==== BACKFILL 0x007C88C6  FindExecutableA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int FindExecutableA()
{
    HINSTANCE __stdcall FindExecutableA(LPCSTR lpFile, LPCSTR lpDirectory, LPSTR lpResult)
{
    return __imp_FindExecutableA(lpFile, lpDirectory, lpResult);
}
}

// ==== BACKFILL 0x007C88CC  OleRun  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int OleRun()
{
    HRESULT __stdcall OleRun(LPUNKNOWN pUnknown)
{
    return __imp_OleRun(pUnknown);
}
}

// ==== BACKFILL 0x007C88D2  CoCreateInstance  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CoCreateInstance()
{
    HRESULT __stdcall CoCreateInstance( const IID *const rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, const IID *const riid, LPVOID *ppv)
{
    return __imp_CoCreateInstance(rclsid, pUnkOuter, dwClsContext, riid, ppv);
}
}

// ==== BACKFILL 0x007C88D8  OleLoadFromStream  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int OleLoadFromStream()
{
    HRESULT __stdcall OleLoadFromStream(LPSTREAM pStm, const IID *const iidInterface, LPVOID *ppvObj)
{
    return __imp_OleLoadFromStream(pStm, iidInterface, ppvObj);
}
}

// ==== BACKFILL 0x007C88DE  OleSaveToStream  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int OleSaveToStream()
{
    HRESULT __stdcall OleSaveToStream(LPPERSISTSTREAM pPStm, LPSTREAM pStm)
{
    return __imp_OleSaveToStream(pPStm, pStm);
}
}

// ==== BACKFILL 0x007C88E4  CLSIDFromString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CLSIDFromString()
{
    HRESULT __stdcall CLSIDFromString(LPCOLESTR lpsz, LPCLSID pclsid)
{
    return __imp_CLSIDFromString(lpsz, pclsid);
}
}

// ==== BACKFILL 0x007C88EA  StringFromCLSID  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int StringFromCLSID()
{
    HRESULT __stdcall StringFromCLSID(const IID *const rclsid, LPOLESTR *lplpsz)
{
    return __imp_StringFromCLSID(rclsid, lplpsz);
}
}

// ==== BACKFILL 0x007C88F0  CoFileTimeNow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CoFileTimeNow()
{
    HRESULT __stdcall CoFileTimeNow(FILETIME *lpFileTime)
{
    return __imp_CoFileTimeNow(lpFileTime);
}
}

// ==== BACKFILL 0x007C88F6  StgCreateDocfile  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int StgCreateDocfile()
{
    HRESULT __stdcall StgCreateDocfile(const WCHAR *pwcsName, DWORD grfMode, DWORD reserved, IStorage **ppstgOpen)
{
    return __imp_StgCreateDocfile(pwcsName, grfMode, reserved, ppstgOpen);
}
}

// ==== BACKFILL 0x007C88FC  StgOpenStorage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int StgOpenStorage()
{
    HRESULT __stdcall StgOpenStorage( const WCHAR *pwcsName, IStorage *pstgPriority, DWORD grfMode, SNB snbExclude, DWORD reserved, IStorage **ppstgOpen)
{
    return __imp_StgOpenStorage(pwcsName, pstgPriority, grfMode, snbExclude, reserved, ppstgOpen);
}
}

// ==== BACKFILL 0x007C8902  StringFromGUID2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int StringFromGUID2()
{
    int __stdcall StringFromGUID2(const GUID *const rguid, LPOLESTR lpsz, int cchMax)
{
    return __imp_StringFromGUID2(rguid, lpsz, cchMax);
}
}

// ==== BACKFILL 0x007C8908  CoDisconnectObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CoDisconnectObject()
{
    HRESULT __stdcall CoDisconnectObject(LPUNKNOWN pUnk, DWORD dwReserved)
{
    return __imp_CoDisconnectObject(pUnk, dwReserved);
}
}

// ==== BACKFILL 0x007C890E  CoRegisterClassObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CoRegisterClassObject()
{
    HRESULT __stdcall CoRegisterClassObject( const IID *const rclsid, LPUNKNOWN pUnk, DWORD dwClsContext, DWORD flags, LPDWORD lpdwRegister)
{
    return __imp_CoRegisterClassObject(rclsid, pUnk, dwClsContext, flags, lpdwRegister);
}
}

// ==== BACKFILL 0x007C8914  OleInitialize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int OleInitialize()
{
    HRESULT __stdcall OleInitialize(LPVOID pvReserved)
{
    return __imp_OleInitialize(pvReserved);
}
}

// ==== BACKFILL 0x007C8920  CoRevokeClassObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CoRevokeClassObject()
{
    HRESULT __stdcall CoRevokeClassObject(DWORD dwRegister)
{
    return __imp_CoRevokeClassObject(dwRegister);
}
}

// ==== BACKFILL 0x007C8926  SysAllocString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SysAllocString()
{
    BSTR __stdcall SysAllocString(const OLECHAR *psz)
{
    return __imp_SysAllocString(psz);
}
}

// ==== BACKFILL 0x007C892C  SysFreeString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SysFreeString()
{
    void __stdcall SysFreeString(BSTR bstrString)
{
    __imp_SysFreeString(bstrString);
}
}

// ==== BACKFILL 0x007C8932  LoadTypeLib  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LoadTypeLib()
{
    HRESULT __stdcall LoadTypeLib(LPCOLESTR szFile, ITypeLib **pptlib)
{
    return __imp_LoadTypeLib(szFile, pptlib);
}
}

// ==== BACKFILL 0x007C8938  RevokeActiveObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RevokeActiveObject()
{
    HRESULT __stdcall RevokeActiveObject(DWORD dwRegister, void *pvReserved)
{
    return __imp_RevokeActiveObject(dwRegister, pvReserved);
}
}

// ==== BACKFILL 0x007C893E  RegisterActiveObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegisterActiveObject()
{
    HRESULT __stdcall RegisterActiveObject(IUnknown *punk, const IID *const rclsid, DWORD dwFlags, DWORD *pdwRegister)
{
    return __imp_RegisterActiveObject(punk, rclsid, dwFlags, pdwRegister);
}
}

// ==== BACKFILL 0x007C894A  timeEndPeriod  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int timeEndPeriod()
{
    MMRESULT __stdcall timeEndPeriod(UINT uPeriod)
{
    return __imp_timeEndPeriod(uPeriod);
}
}

// ==== BACKFILL 0x007C8950  timeKillEvent  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int timeKillEvent()
{
    MMRESULT __stdcall timeKillEvent(UINT uTimerID)
{
    return __imp_timeKillEvent(uTimerID);
}
}

// ==== BACKFILL 0x007C8956  timeSetEvent  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int timeSetEvent()
{
    MMRESULT __stdcall timeSetEvent(UINT uDelay, UINT uResolution, LPTIMECALLBACK fptc, DWORD_PTR dwUser, UINT fuEvent)
{
    return __imp_timeSetEvent(uDelay, uResolution, fptc, dwUser, fuEvent);
}
}

// ==== BACKFILL 0x007C895C  timeBeginPeriod  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int timeBeginPeriod()
{
    MMRESULT __stdcall timeBeginPeriod(UINT uPeriod)
{
    return __imp_timeBeginPeriod(uPeriod);
}
}

// ==== BACKFILL 0x007C896E  ntohl  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ntohl()
{
    u_long __stdcall ntohl(u_long netlong)
{
    return __imp_ntohl(netlong);
}
}

// ==== BACKFILL 0x007C8986  ntoainet  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ntoainet()
{
    char *__stdcall ntoainet(struct in_addr in)
{
    return inet_ntoa(in);
}
}

// ==== BACKFILL 0x007C899E  socket  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int socket()
{
    SOCKET __stdcall socket(int af, int type, int protocol)
{
    return __imp_socket(af, type, protocol);
}
}

// ==== BACKFILL 0x007C89AA  recvfrom  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int recvfrom()
{
    int __stdcall recvfrom(SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen)
{
    return __imp_recvfrom(s, buf, len, flags, from, fromlen);
}
}

// ==== BACKFILL 0x007C89C2  EnumProtocolsA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EnumProtocolsA()
{
    INT __stdcall EnumProtocolsA(LPINT lpiProtocols, LPVOID lpProtocolBuffer, LPDWORD lpdwBufferLength)
{
    return __imp_EnumProtocolsA(lpiProtocols, lpProtocolBuffer, lpdwBufferLength);
}
}

// ==== BACKFILL 0x007C89D4  DirectDrawCreate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DirectDrawCreate()
{
    HRESULT __stdcall DirectDrawCreate(GUID *lpGUID, LPDIRECTDRAW *lplpDD, IUnknown *pUnkOuter)
{
    return __imp_DirectDrawCreate(lpGUID, lplpDD, pUnkOuter);
}
}

// ==== BACKFILL 0x007C89DA  DirectSoundCreate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DirectSoundCreate()
{
    HRESULT __stdcall DirectSoundCreate(LPCGUID pcGuidDevice, LPDIRECTSOUND *ppDS, LPUNKNOWN pUnkOuter)
{
    return __imp_DirectSoundCreate(pcGuidDevice, ppDS, pUnkOuter);
}
}

// ==== BACKFILL 0x007C89EC  GetFileVersionInfoSizeA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetFileVersionInfoSizeA()
{
    DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle)
{
    return __imp_GetFileVersionInfoSizeA(lptstrFilename, lpdwHandle);
}
}

// ==== BACKFILL 0x007C8A10  ImageList::DragShowNolock  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ImageList_DragShowNolock()
{
  return ImageList_DragShowNolock(fShow);
}

// ==== BACKFILL 0x007C8A8E  ??1type_info_UAE_XZ  cls=type_info  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_7C8A8E::__1type_info_UAE_XZ()
{
{
    void *v2;
    *(int *)this = &DataGlobal_7F9594;
    _lock(27);
    v2 = (void *)this->M4;
    if ( v2 )
    free(v2);
    _unlock(27);
}
}

// ==== BACKFILL 0x007C8AB7  ??_Gtype_info_UAEPAXI_Z  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_7C8AB7::___Gtype_info_UAEPAXI_Z(char a2)
{
{
    __1type_info_UAE_XZ(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x007C8AD3  ??8type_info_QBEHABV0__Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_7C8AD3::__8type_info_QBEHABV0__Z(int a2)
{
{
    return strcmp((const char *)(a2 + 9), this + 9) == 0;
}
}

// ==== BACKFILL 0x007C8AEE  ??9type_info_QBEHABV0__Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_7C8AEE::__9type_info_QBEHABV0__Z(int a2)
{
{
    return strcmp((const char *)(a2 + 9), this + 9) != 0;
}
}

// ==== BACKFILL 0x007C8B0A  ?before_type_info__QBEHABV1__Z  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_7C8B0A::_before_type_info__QBEHABV1__Z(const struct type_info * a2)
{
{
    return strcmp((const char *)(a2) + 9, (const char *)(this) + 9) > 0;
}
}

// ==== BACKFILL 0x007C8B29  sub_7C8B29  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_7C8B29::sub_7C8B29()
{
{
    return this + 8;
}
}

// ==== BACKFILL 0x007C8B2D  sub_7C8B2D  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_7C8B2D::sub_7C8B2D(int a2)
{
{
    *(void**)this = &DataGlobal_7F9594;
    return this;
}
}

// ==== BACKFILL 0x007C8B38  sub_7C8B38  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_7C8B38::sub_7C8B38(int a2)
{
{
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x007C8B3D  OperatorDelete  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void __3_YAXPAX_Z(void * Block)
{
{
    free(Block);
}
}

// ==== BACKFILL 0x007C8CEA  _swap  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * swap(char * a1, char * a2, int a3)
{
char* result = a1;
char* second = a2;
if ((a1 != a2) && a3)
{
    int remaining = a3;
    do
    {
        char tempChar = *result;
        *result++ = *second;
        *second++ = tempChar;
        --remaining;
    }
    while (remaining);
}
return result;
}

// ==== BACKFILL 0x007C8DF0  _strrchr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * strrchr(const char * Str, int Ch)
{
unsigned int remaining = strlen(Str) + 1;
const char* match = Str;
match += remaining - 1;
bool found = false;
do
{
    if (!remaining)
        break;
    found = *match == (unsigned char)Ch;
    --match;
    --remaining;
}
while (!found);
++match;
if (*match == (unsigned char)Ch)
    return (char*)match;
return 0;
}

// ==== BACKFILL 0x007C8E17  ??2_YAPAXI_Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int __2_YAPAXI_Z(size_t Size)
{
return _nh_malloc(Size, 1);
}

// ==== BACKFILL 0x007C8EC0  __allmul  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned long long _allmul(long long a1, long long a2)
{
if ((unsigned int)(a1 >> 32) | (unsigned int)(a2 >> 32))
    return (unsigned long)(a1 * a2);
return (unsigned int)a2 * (unsigned long)(unsigned int)a1;
}

// ==== BACKFILL 0x007C8EF4  _sprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sprintf(char *const Buffer, ObjectClass * aP1, INIClass * aP2)
{
{
    int v3;
    bool v4;
    int v5;
    FILE File;
    File._base = Buffer;
    File._ptr = Buffer;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v3 = _output(&File, aP1->__pad_0, (int)&aP2);
    v4 = --File._cnt < 0;
    v5 = v3;
    if ( v4 )
    _flsbuf(0, &File);
    else
    *File._ptr = 0;
    return v5;
}
}

// ==== BACKFILL 0x007C92D0  __alldiv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _alldiv(unsigned long long a1, long long a2)
{
{
    int v2;
    int v3;
    unsigned __int64 v4;
    __int64 v5;
    unsigned __int64 v6;
    unsigned __int64 v7;
    unsigned int v8;
    unsigned __int64 v9;
    v2 = 0;
    if ( (a1 & 0x8000000000000000uLL) != 0LL )
  {
    v2 = 1;
    HIDWORD(a1) = -HIDWORD(a1) - ((int)a1 != 0);
    LODWORD(a1) = -(int)a1;
  }
    v3 = HIDWORD(a2);
    if ( a2 < 0 )
  {
    ++v2;
    v3 = -HIDWORD(a2) - ((int)a2 != 0);
    HIDWORD(a2) = v3;
    LODWORD(a2) = -(int)a2;
  }
    if ( v3 )
  {
    v6 = __PAIR64__(v3, a2);
    v7 = a1;
    do
    {
    v6 >>= 1;
    v7 >>= 1;
    }
    while ( HIDWORD(v6) );
    v8 = v7 / (unsigned int)v6;
    v9 = v8 * (unsigned __int64)(unsigned int)a2;
    if ( __CFADD__(HIDWORD(a2) * v8, HIDWORD(v9)) || (HIDWORD(v9) = (a2 * (unsigned __int64)v8) >> 32, v9 > a1) )
    --v8;
    v5 = v8;
  }
    else
  {
    LODWORD(v4) = a1;
    HIDWORD(v4) = HIDWORD(a1) % (unsigned int)a2;
    LODWORD(v5) = v4 / (unsigned int)a2;
    HIDWORD(v5) = HIDWORD(a1) / (unsigned int)a2;
  }
    if ( v2 == 1 )
    return -v5;
    return v5;
}
}

// ==== BACKFILL 0x007C9380  __aulldiv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int _aulldiv(unsigned long long a1, long long a2)
{
{
    unsigned __int64 v3;
    unsigned int v4;
    unsigned int v5;
    unsigned __int64 v6;
    char v7;
    unsigned int v8;
    unsigned __int64 v9;
    if ( HIDWORD(a2) )
  {
    v4 = HIDWORD(a2);
    v5 = a2;
    v6 = a1;
    do
    {
    v7 = v4 & 1;
    v4 >>= 1;
    v5 = (v5 >> 1) | (v7 << 31);
    v6 >>= 1;
    }
    while ( v4 );
    v8 = v6 / v5;
    v9 = v8 * (unsigned __int64)(unsigned int)a2;
    if ( __CFADD__(HIDWORD(a2) * v8, HIDWORD(v9)) || (HIDWORD(v9) = (a2 * (unsigned __int64)v8) >> 32, v9 > a1) )
    --v8;
    return v8;
  }
    else
  {
    LODWORD(v3) = a1;
    HIDWORD(v3) = HIDWORD(a1) % (unsigned int)a2;
    return v3 / (unsigned int)a2;
  }
}
}

// ==== BACKFILL 0x007C93E8  _free  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void free(void * Block)
{
{
    int v1;
    if ( Block )
  {
    _lock(9);
    v1 = __sbh_find_block(Block);
    if ( v1 )
    {
    __sbh_free_block(v1, Block);
    _unlock(9);
    }
    else
    {
    _unlock(9);
    HeapFree(hHeap, 0, Block);
    }
  }
}
}

// ==== BACKFILL 0x007C9430  _malloc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void * malloc(AbstractClass * aP0)
{
{
    return (void *)_nh_malloc((IUnknown *)aP0, CRTGlobal_B782B8.headNode[2]);
}
}

// ==== BACKFILL 0x007C9442  __nh_malloc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _nh_malloc(IUnknown * aP0, int a2)
{
if ((unsigned int)aP0 > 0xFFFFFFE0)
    return 0;
int result;
while (1)
{
    result = (int)_heap_alloc(aP0);
    if (result || !a2)
        break;
    if (!_callnewh(aP0))
        return 0;
}
return result;
}

// ==== BACKFILL 0x007C946E  __heap_alloc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LPVOID _heap_alloc(IUnknown * aP0)
{
{
    IUnknown *v1;
    int *v2;
    v1 = aP0;
    if ( (unsigned int)aP0 <= *(int *)&DataGlobal_87C374[528] )
  {
    _lock(9);
    v2 = __sbh_alloc_block(aP0);
    _unlock(9);
    if ( v2 )
    return v2;
  }
    if ( !aP0 )
    v1 = (IUnknown *)1;
    return HeapAlloc(hHeap, 0, ((unsigned int)&v1->field_C + 3) & 0xFFFFFFF0);
}
}

// ==== BACKFILL 0x007C94BC  Audio_Write  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t sub_7C94BC(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
{
    size_t v4;
    _lock_file(Stream);
    v4 = fread(Buffer, ElementSize, ElementCount, Stream);
    _unlock_file(Stream);
    return v4;
}
}

// ==== BACKFILL 0x007C95D3  Audio_Write_7C95D3  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t sub_7C95D3(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
{
    size_t v4;
    _lock_file(Stream);
    v4 = fwrite(Buffer, ElementSize, ElementCount, Stream);
    _unlock_file(Stream);
    return v4;
}
}

// ==== BACKFILL 0x007C978A  _atexit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int atexit(void (__cdecl *Func)())
{
return (_onexit((_onexit_t)Func) != 0) - 1;
}

// ==== BACKFILL 0x007C9BFD  _atoi  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int atoi(const char * String)
{
return atol(String);
}

// ==== BACKFILL 0x007C9DBD  globalHelper_0C9DBD  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int globalHelper_0C9DBD(int a1, CCINIClass * aP1, int a3)
{
{
    return strtoxl((unsigned char *)a1, (unsigned char **)aP1, a3, 0);
}
}

// ==== BACKFILL 0x007C9FD9  _strtoul  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int strtoul(const char * String, char ** EndPtr, int Radix)
{
return strtoxl((unsigned char*)String, (unsigned char**)EndPtr, Radix, 1);
}

// ==== BACKFILL 0x007C9FF0  __makepath  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _makepath(char * Buffer, const char * Drive, const char * Dir, const char * FName, const char * Ext)
{
char* out = Buffer;
if (Drive && *Drive)
{
    Buffer[0] = *Drive;
    Buffer[1] = 58;
    out += 2;
}
const char* dirScan = Dir;
if (Dir)
{
    char dirChar = *Dir;
    if (*Dir)
    {
        do
        {
            *out = dirChar;
            ++dirScan;
            dirChar = *dirScan;
            ++out;
        }
        while (dirChar);
        unsigned char last = *_mbsdec((const unsigned char *)Dir, (const unsigned char *)dirScan);
        if (last != 47 && last != 92)
        {
            *out = 92;
            ++out;
        }
    }
}
const char* nameScan = FName;
if (FName)
{
    char nameChar = FName[0];
    while (nameChar)
    {
        *out = nameChar;
        ++nameScan;
        nameChar = *nameScan;
        ++out;
    }
}
const char* extScan = Ext;
if (Ext)
{
    if (*Ext && *Ext != 46)
    {
        *out = 46;
        ++out;
    }
    char extChar;
    do
    {
        extChar = extScan[0];
        *out = extScan[0];
        ++out;
        ++extScan;
    }
    while (extChar);
}
else
{
    *out = 0;
}
}

// ==== BACKFILL 0x007CA3C5  _wcsrchr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcsrchr(const wchar_t * Str, wchar_t Ch)
{
const wchar_t* scan = Str;
wchar_t current = *Str;
for (;; current = *scan)
{
    ++scan;
    if (!current)
        break;
}
const wchar_t* j = scan - 1;
for (; j != Str; --j)
{
    if (*j == Ch)
        break;
}
const wchar_t* match[2];
match[0] = 0;
match[1] = j;
return (wchar_t*)match[Ch == *j];
}

// ==== BACKFILL 0x007CA405  _wcslen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t wcslen(const wchar_t * String)
{
const wchar_t* scan = String;
++scan;
if (*String)
{
    while (*scan)
        ++scan;
}
return scan - String - 1;
}

// ==== BACKFILL 0x007CA422  _wcsncpy  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcsncpy(wchar_t * Destination, const wchar_t * Source, size_t MaxCount)
{
size_t remaining = MaxCount;
wchar_t* dst = Destination;
if (MaxCount)
{
    wchar_t current;
    do
    {
        current = *Source;
        *dst = *Source;
        ++dst;
        ++Source;
        if (!current)
            break;
        --remaining;
    }
    while (remaining);
    if (remaining)
    {
        size_t pad = remaining - 1;
        if (pad)
        {
            int odd = pad & 1;
            size_t pairs = pad >> 1;
            memset(dst, 0, 4 * pairs);
            wchar_t* tail = dst;
            tail += 2 * pairs;
            for (int i = odd; i; --i)
            {
                *tail = 0;
                ++tail;
            }
        }
    }
}
return Destination;
}

// ==== BACKFILL 0x007CA45F  _wcscat  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcscat(wchar_t * Destination, const wchar_t * Source)
{
wchar_t* result = Destination;
wchar_t* i = Destination;
while (*i)
    ++i;
const wchar_t* src = Source;
wchar_t current;
do
{
    current = *src;
    *i = *src;
    ++i;
    ++src;
}
while (current);
return result;
}

// ==== BACKFILL 0x007CA489  _wcscpy  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcscpy(wchar_t * Destination, const wchar_t * Source)
{
const wchar_t* src = Source;
wchar_t* result = Destination;
wchar_t current = *Source;
wchar_t* dst = Destination;
++dst;
*Destination = *Source;
while (1)
{
    ++src;
    if (!current)
        break;
    current = *src;
    *dst = *src;
    ++dst;
}
return result;
}

// ==== BACKFILL 0x007CA530  _sscanf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sscanf(const char *const Buffer, const char *const Format, ... a3)
{
{
    FILE Stream;
    va_list va;
    va_start(va, Format);
    Stream._flag = 73;
    Stream._base = (char *)Buffer;
    Stream._ptr = (char *)Buffer;
    Stream._cnt = strlen(Buffer);
    return _input(&Stream, (int)Format, (int)va);
}
}

// ==== BACKFILL 0x007CA564  _swprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int swprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, CampaignScore * aP3)
{
{
    int v4;
    bool v5;
    int v6;
    FILE File;
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v4 = _woutput(&File, (CampaignScore *)BufferCount, (ObjectClass *)&Format);
    v5 = --File._cnt < 0;
    v6 = v4;
    if ( v5 )
    _flsbuf(0, &File);
    else
    *File._ptr++ = 0;
    if ( --File._cnt < 0 )
    _flsbuf(0, &File);
    else
    *File._ptr = 0;
    return v6;
}
}

// ==== BACKFILL 0x007CA5D3  _wcscmp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int wcscmp(const wchar_t * String1, const wchar_t * String2)
{
const wchar_t* second = String2;
wchar_t current = *String2;
int result;
for (;; current = *second)
{
    result = *String1 - current;
    if (result || !current)
        break;
    ++String1;
    ++second;
}
if (result < 0)
    return -1;
if (result > 0)
    return 1;
return result;
}

// ==== BACKFILL 0x007CA610  _strncmp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int strncmp(const char * Str1, const char * Str2, size_t MaxCount)
{
size_t remaining = MaxCount;
if (MaxCount)
{
    const char* first = Str1;
    bool endOfFirst = false;
    do
    {
        if (!remaining)
            break;
        endOfFirst = *first == 0;
        ++first;
        --remaining;
    }
    while (!endOfFirst);
    size_t compared = MaxCount - remaining;
    const char* second = Str1;
    const char* other = Str2;
    bool equal = false;
    do
    {
        if (!compared)
            break;
        equal = *other == *second;
        ++other;
        ++second;
        --compared;
    }
    while (equal);
    unsigned char lastOther = *(other - 1);
    remaining = 0;
    if (lastOther > *(second - 1))
        return (int)~remaining;
    if (lastOther != *(second - 1))
    {
        remaining = (size_t)-2;
        return (int)~remaining;
    }
}
return (int)remaining;
}

// ==== BACKFILL 0x007CA75B  _fclose  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int fclose(MouseClass * aP0)
{
{
    int v1;
    v1 = -1;
    if ( ((int)aP0->field_C & 0x40) != 0 )
  {
    aP0->field_C = 0;
  }
    else
  {
    _lock_file(aP0);
    v1 = _fclose_lk(aP0);
    _unlock_file(aP0);
  }
    return v1;
}
}

// ==== BACKFILL 0x007CA78C  __fclose_lk  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _fclose_lk(MouseClass * aP0)
{
{
    int v1;
    v1 = -1;
    if ( ((int)aP0->field_C & 0x83) != 0 )
  {
    v1 = _flush(aP0);
    _freebuf(aP0);
    if ( _close((int)aP0->field_10) >= 0 )
    {
    if ( *(int *)&aP0->__pad_18[4] )
      {
    free(*(void **)&aP0->__pad_18[4]);
    *(int *)&aP0->__pad_18[4] = 0;
      }
    }
    else
    {
    v1 = -1;
    }
  }
    aP0->field_C = 0;
    return v1;
}
}

// ==== BACKFILL 0x007CA7D8  _fprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int fprintf(MouseClass * aP0, const char *const Format, CellStruct * aP2)
{
_lock_file(aP0);
int bufmode = _stbuf((int)aP0);
int written = _output((FILE *)aP0, (char *)Format, (int)&aP2);
_ftbuf(bufmode, (int)aP0);
_unlock_file(aP0);
return written;
}

// ==== BACKFILL 0x007CA814  __fsopen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
FILE * _fsopen(const char * FileName, const char * Mode, int ShFlag)
{
{
    FILE *result;
    FILE *v4;
    FILE *v5;
    result = (FILE *)_getstream();
    v4 = result;
    if ( result )
  {
    v5 = (FILE *)_openfile((char *)FileName, (int)Mode, ShFlag, (int)result);
    _unlock_file(v4);
    return v5;
  }
    return result;
}
}

// ==== BACKFILL 0x007CA845  _fopen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
FILE * fopen(const char * FileName, const char * Mode)
{
return _fsopen(FileName, Mode, 64);
}

// ==== BACKFILL 0x007CA858  _vswprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int vswprintf(wchar_t *const Buffer, CampaignScore * aP1, ObjectClass * aP2, SessionClass * aP3)
{
{
    int v4;
    bool v5;
    int v6;
    FILE File;
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v4 = _woutput(&File, aP1, aP2);
    v5 = --File._cnt < 0;
    v6 = v4;
    if ( v5 )
    _flsbuf(0, &File);
    else
    *File._ptr++ = 0;
    if ( --File._cnt < 0 )
    _flsbuf(0, &File);
    else
    *File._ptr = 0;
    return v6;
}
}

// ==== BACKFILL 0x007CA8C6  _wcschr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcschr(wchar_t * Str, int Ch)
{
while (*Str && *Str != Ch)
    ++Str;
wchar_t* match[2];
match[0] = 0;
match[1] = Str;
return match[Ch == *Str];
}

// ==== BACKFILL 0x007CA971  ??0__non_rtti_object_QAE_PBD_Z  cls=__non_rtti_object  sig=csp  renamed_refs=0  residual=- ====
__non_rtti_object * E4Recv_7CA971::__0__non_rtti_object_QAE_PBD_Z(char * a2)
{
{
    __0exception_QAE_ABQBD_Z(this, (const char *const *)&a2);
    *(int *)this = &vt_non_rtti_object;
    return this;
}
}

// ==== BACKFILL 0x007CA993  sub_7CA993  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * sub_7CA993(void * Block, char a2)
{
{
    j_Exception_Destructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (ObjectClass *)Block;
}
}

// ==== BACKFILL 0x007CA9B4  sub_7CA9B4  cls=__non_rtti_object  sig=csp  renamed_refs=0  residual=- ====
exception * E4Recv_7CA9B4::sub_7CA9B4(struct exception * a2)
{
{
    __0exception_QAE_ABV0__Z(this, a2);
    *(int *)this = &vt_non_rtti_object;
    return this;
}
}

// ==== BACKFILL 0x007CA9CC  sub_7CA9CC  cls=bad_typeid  sig=csp  renamed_refs=0  residual=- ====
exception * E4Recv_7CA9CC::sub_7CA9CC(struct exception * a1)
{
{
    __0exception_QAE_ABV0__Z((exception *)this, a1);
    this->vfptr = &vt_bad_typeid;
    return (exception *)this;
}
}

// ==== BACKFILL 0x007CA9E4  sub_7CA9E4  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * sub_7CA9E4(void * Block, char a2)
{
{
    j_Exception_Destructor_2(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (ObjectClass *)Block;
}
}

// ==== BACKFILL 0x007CAA05  ___RTtypeid  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int __RTtypeid(unsigned int * a1)
{
{
    int v1;
    int result;
    char v3[12];
    int v4;
    CPPEH_RECORD ms_exc;
    if ( !a1 )
    JUMPOUT(0x7CAACB);
    ms_exc.registration.TryLevel = 0;
    v1 = *(int *)(*a1 - 4);
    v4 = v1;
    if ( IsBadReadPtr(*(const void **)(v1 + 12), 8u) )
  {
    __0__non_rtti_object_QAE_PBD_Z((__non_rtti_object *)v3, "Bad read pointer - no RTTI data!");
    _CxxThrowException_8(v3, (_ThrowInfo *)&DataGlobal_80F038);
  }
    result = *(int *)(v1 + 12);
    ms_exc.registration.TryLevel = -1;
    return result;
}
}

// ==== BACKFILL 0x007CAAE4  ___RTDynamicCast  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char * __RTDynamicCast(IUnknown * aP0, int arg4, struct TypeDescriptor * a2, struct TypeDescriptor * a3, int a5)
{
{
    char *result;
    char *CompleteObject_YAPAXPAPAX_Z;
    int v7;
    char *v8;
    int v9;
    const struct _s_RTTIBaseClassDescriptor *VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z;
    if ( !aP0 )
    return 0;
    CompleteObject_YAPAXPAPAX_Z = _FindCompleteObject_YAPAXPAPAX_Z((void **)aP0);
    v7 = *(int *)(aP0->field_0 - 4);
    v8 = (char *)((char *)aP0 - arg4 - CompleteObject_YAPAXPAPAX_Z);
    v9 = *(int *)(*(int *)(v7 + 16) + 4);
    if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 2) != 0 )
    VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindVITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3);
    else
    VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindMITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3);
  }
    else
  {
    VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3);
  }
    if ( VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z )
    return &CompleteObject_YAPAXPAPAX_Z[_PMDtoOffset_YAHPAXABUPMD___Z( CompleteObject_YAPAXPAPAX_Z, (const struct PMD *)((char *)(VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z) + 8))];
    result = 0;
    if ( a5 )
    JUMPOUT(0x7CABFB);
    return result;
}
}

// ==== BACKFILL 0x007CAC13  sub_7CAC13  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * sub_7CAC13(void * Block, char a2)
{
{
    j_Exception_Destructor_3(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (ObjectClass *)Block;
}
}

// ==== BACKFILL 0x007CAC34  sub_7CAC34  cls=bad_cast  sig=csp  renamed_refs=0  residual=- ====
exception * E4Recv_7CAC34::sub_7CAC34(struct exception * a2)
{
{
    __0exception_QAE_ABV0__Z(this, a2);
    *(void**)this = vt_bad_cast;
    return this;
}
}

// ==== BACKFILL 0x007CAC4C  ?FindCompleteObject_YAPAXPAPAX_Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _FindCompleteObject_YAPAXPAPAX_Z(void ** a1)
{
{
    int v1;
    char *result;
    int v3;
    v1 = *((int *)*a1 - 1);
    result = (char *)a1 - *(int *)(v1 + 4);
    v3 = *(int *)(v1 + 8);
    if ( v3 )
    return &result[*(int *)((char *)a1 - v3)];
    return result;
}
}

// ==== BACKFILL 0x007CAC66  ?FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
const struct _s_RTTIBaseClassDescriptor * _FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(void * a1, const struct _s_RTTICompleteObjectLocator * a2, struct TypeDescriptor * a3, int a4, struct TypeDescriptor * a5)
{
{
    int v5;
    int **v6;
    int *v7;
    int v8;
    unsigned int v10;
    v10 = 0;
    v5 = *((int *)(a2) + 4);
    v6 = *(int ***)(v5 + 12);
    if ( !*(int *)(v5 + 8) )
    return 0;
    while ( 1 )
  {
    v7 = *v6;
    v8 = **v6;
    if ( ((struct TypeDescriptor *)v8 == a5 || !strcmp((const char *)(v8 + 8), a5->name)) && (v7[5] & 1) == 0 )
    break;
    ++v10;
    ++v6;
    if ( v10 >= *(int *)(*((int *)(a2) + 4) + 8) )
    return 0;
  }
    return (const struct _s_RTTIBaseClassDescriptor *)v7;
}
}

// ==== BACKFILL 0x007CAEF1  ?PMDtoOffset_YAHPAXABUPMD___Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _PMDtoOffset_YAHPAXABUPMD___Z(char * a1, const struct PMD * a2)
{
{
    int v2;
    int pdisp;
    v2 = 0;
    pdisp = a2->pdisp;
    if ( pdisp >= 0 )
    v2 = *(int *)(*(int *)&a1[pdisp] + a2->vdisp) + a2->pdisp;
    return v2 + a2->mdisp;
}
}

// ==== BACKFILL 0x007CB19C  _fflush  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int fflush(MouseClass * aP0)
{
{
    int v2;
    if ( !aP0 )
    return flsall(0);
    _lock_file(aP0);
    v2 = _fflush_lk((int)aP0);
    _unlock_file(aP0);
    return v2;
}
}

// ==== BACKFILL 0x007CB1CB  __fflush_lk  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _fflush_lk(int a1)
{
{
    if ( _flush((int *)a1) )
    return -1;
    if ( (*(char *)(a1 + 13) & 0x40) != 0 )
    return -(_commit(*(int *)(a1 + 16)) != 0);
    return 0;
}
}

// ==== BACKFILL 0x007CB1F9  __flush  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _flush(MouseClass * aP0)
{
{
    int v1;
    CCINIClass *v2;
    unsigned int v3;
    void *v4;
    void *v5;
    v1 = 0;
    if ( ((int)aP0->field_C & 3) == 2 && ((int)aP0->field_C & 0x108) != 0 )
  {
    v2 = (CCINIClass *)aP0->field_8;
    if ( aP0->field_0 - (int)v2 > 0 )
    {
    v3 = aP0->field_0 - (int)v2;
    if ( _write((int)aP0->field_10, v2, v3) == v3 )
      {
    v4 = aP0->field_C;
    if ( (char)v4 < 0 )
        {
    LOBYTE(v4) = (unsigned char)v4 & 0xFD;
    aP0->field_C = v4;
        }
      }
    else
      {
    aP0->field_C = (void *)((int)aP0->field_C | 0x20);
    v1 = -1;
      }
    }
  }
    v5 = aP0->field_8;
    aP0->field_4 = 0;
    aP0->field_0 = (int)v5;
    return v1;
}
}

// ==== BACKFILL 0x007CB428  __lock_file2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _lock_file2(int a1, int a2)
{
{
    if ( a1 >= 20 )
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
    else
    _lock(a1 + 28);
}
}

// ==== BACKFILL 0x007CB47A  __unlock_file2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _unlock_file2(int a1, int a2)
{
{
    if ( a1 >= 20 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
    else
    _unlock(a1 + 28);
}
}

// ==== BACKFILL 0x007CB49D  _srand  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
IUnknown * srand(IUnknown * aP0)
{
{
    IUnknown *result;
    result = (IUnknown *)_getptd();
    *(int *)&result->__pad_10[4] = aP0;
    return result;
}
}

// ==== BACKFILL 0x007CB4AA  _rand  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int rand()
{
{
    int v0;
    unsigned int v1;
    v0 = _getptd();
    v1 = 214013 * *(int *)(v0 + 20) + 2531011;
    *(int *)(v0 + 20) = v1;
    return HIWORD(v1) & 0x7FFF;
}
}

// ==== BACKFILL 0x007CB4CC  _wcsncmp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int wcsncmp(const wchar_t * String1, CampaignScore * aP1, size_t MaxCount)
{
{
    bool v4;
    size_t MaxCounta;
    if ( !MaxCount )
    return 0;
    v4 = MaxCount == 1;
    MaxCounta = MaxCount - 1;
    if ( !v4 )
  {
    do
    {
    if ( !*String1 )
    break;
    if ( *String1 != *(short *)aP1->__pad_0 )
    break;
    ++String1;
    aP1 = (CampaignScore *)((char *)(aP1) + 2);
    --MaxCounta;
    }
    while ( MaxCounta );
  }
    return *String1 - *(unsigned short *)aP1->__pad_0;
}
}

// ==== BACKFILL 0x007CB7BA  _vsprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int vsprintf(char *const Buffer, const char *const Format, va_list ArgList)
{
{
    int v3;
    bool v4;
    int v5;
    FILE File;
    File._base = Buffer;
    File._ptr = Buffer;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v3 = _output(&File, (char *)Format, (int)ArgList);
    v4 = --File._cnt < 0;
    v5 = v3;
    if ( v4 )
    _flsbuf(0, &File);
    else
    *File._ptr = 0;
    return v5;
}
}

// ==== BACKFILL 0x007CB80B  _fgetc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int fgetc(MouseClass * aP0)
{
{
    int v2;
    _lock_file(aP0);
    if ( (int)--aP0->field_4 < 0 )
    v2 = _filbuf(aP0);
    else
    v2 = *(unsigned char *)aP0->field_0++;
    _unlock_file(aP0);
    return v2;
}
}

// ==== BACKFILL 0x007CB8A8  _iswspace  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int iswspace(wint_t C)
{
{
    return iswctype(C, 8u);
}
}

// ==== BACKFILL 0x007CB8E6  _iswgraph  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int iswgraph(wint_t C)
{
{
    return iswctype(C, 0x117u);
}
}

// ==== BACKFILL 0x007CB9B8  _wcstol  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int wcstol(BlowStraw * aP0, wchar_t ** EndPtr, int Radix)
{
{
    return wcstoxl((wint_t *)aP0, EndPtr, Radix, 0);
}
}

// ==== BACKFILL 0x007CBB8D  __mbsnccnt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t _mbsnccnt(const unsigned char * Str, size_t MaxCount)
{
{
    size_t v2;
    size_t v3;
    _lock(25);
    v2 = 0;
    v3 = MaxCount - 1;
    if ( MaxCount )
  {
    do
    {
    if ( !*Str )
    break;
    if ( (CRTGlobal_B78961[*Str] & 4) != 0 )
      {
    if ( !v3-- )
    break;
    if ( !*++Str )
    break;
      }
    ++v2;
    ++Str;
    }
    while ( v3-- );
  }
    _unlock(25);
    return v2;
}
}

// ==== BACKFILL 0x007CBBDB  _swscanf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int swscanf(const wchar_t *const Buffer, CampaignScore * aP1, ... a3)
{
{
    FILE File;
    va_list va;
    va_start(va, aP1);
    File._flag = 73;
    File._base = (char *)Buffer;
    File._ptr = (char *)Buffer;
    File._cnt = 2 * wcslen(Buffer);
    return _winput(&File, aP1, (int)va);
}
}

// ==== BACKFILL 0x007CBC11  Object_Init_7CBC11  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_7CBC11(char * VarName)
{
{
    char *v1;
    _lock(12);
    v1 = getenv(VarName);
    _unlock(12);
    return v1;
}
}

// ==== BACKFILL 0x007CBC32  _getenv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * getenv(const char * VarName)
{
{
    const char **v1;
    size_t v2;
    v1 = (const char **)CRTGlobal_B781E4;
    if ( CRTGlobal_B78BB4 )
  {
    if ( CRTGlobal_B781E4 || CRTGlobal_B781EC && !__wtomb_environ() && (v1 = (const char **)CRTGlobal_B781E4) != 0 )
    {
    if ( VarName )
      {
    v2 = strlen(VarName);
    while ( *v1 )
        {
    if ( strlen(*v1) > v2 && (*v1)[v2] == 61 && !_mbsnbicoll((const unsigned char *)*v1, (const unsigned char *)VarName, v2) )
          {
    return (char *)&(*v1)[v2 + 1];
          }
    ++v1;
        }
      }
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x007CBCAF  __itow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * _itow(int Value, wchar_t * Buffer, int Radix)
{
{
    CHAR MultiByteStr[20];
    _itoa(Value, MultiByteStr, Radix);
    MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 20);
    return Buffer;
}
}

// ==== BACKFILL 0x007CBDDC  _exit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void  __noreturn exit(int Code)
{
{
    doexit(Code, 0, 0);
}
}

// ==== BACKFILL 0x007CBDED  __exit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void  __noreturn _exit(int Code)
{
{
    doexit(Code, 1, 0);
}
}

// ==== BACKFILL 0x007CBEC1  __lockexit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _lockexit()
{
{
    _lock(13);
}
}

// ==== BACKFILL 0x007CBF14  __control87  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int _control87(unsigned int NewValue, unsigned int Mask)
{
{
    unsigned int v2;
    v2 = Mask & NewValue | ~Mask & _abstract_cw();
    _hw_cw(v2);
    return v2;
}
}

// ==== BACKFILL 0x007CBF49  __controlfp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int _controlfp(unsigned int NewValue, unsigned int Mask)
{
{
    return _control87(NewValue, Mask & 0xFFF7FFFF);
}
}

// ==== BACKFILL 0x007CBF8A  __abstract_cw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char _abstract_cw(char a1)
{
{
    char result;
    result = 0;
    if ( (a1 & 1) != 0 )
    result = 16;
    if ( (a1 & 4) != 0 )
    result |= 8u;
    if ( (a1 & 8) != 0 )
    result |= 4u;
    if ( (a1 & 0x10) != 0 )
    result |= 2u;
    if ( (a1 & 0x20) != 0 )
    return result | 1;
    return result;
}
}

// ==== BACKFILL 0x007CC01C  __hw_cw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char _hw_cw(int a1)
{
{
    char result;
    result = (a1 & 0x10) != 0;
    if ( (a1 & 8) != 0 )
    result |= 4u;
    if ( (a1 & 4) != 0 )
    result |= 8u;
    if ( (a1 & 2) != 0 )
    result |= 0x10u;
    if ( (a1 & 1) != 0 )
    result |= 0x20u;
    if ( (a1 & 0x80000) != 0 )
    return result | 2;
    return result;
}
}

// ==== BACKFILL 0x007CC0A5  __abstract_sw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char _abstract_sw(char a1)
{
{
    char result;
    result = 0;
    if ( (a1 & 1) != 0 )
    result = 16;
    if ( (a1 & 4) != 0 )
    result |= 8u;
    if ( (a1 & 8) != 0 )
    result |= 4u;
    if ( (a1 & 0x10) != 0 )
    result |= 2u;
    if ( (a1 & 0x20) != 0 )
    return result | 1;
    return result;
}
}

// ==== BACKFILL 0x007CC0DC  __global_unwind2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _global_unwind2(PVOID TargetFrame)
{
{
    RtlUnwind(TargetFrame, &gu_return, 0, 0);
}
}

// ==== BACKFILL 0x007CC0FC  __unwind_handler  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int _unwind_handler(int a1, int a2, int a3, unsigned int * a4)
{
{
    int result;
    result = 1;
    if ( (*(int *)(a1 + 4) & 6) != 0 )
  {
    *a4 = a2;
    return 3;
  }
    return result;
}
}

// ==== BACKFILL 0x007CC11E  __local_unwind2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _local_unwind2(int a1, int a2)
{
{
    int result;
    int v3;
    int v4;
    int v5;
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    int (__cdecl *v7)(int, int, int, int *);
    v7 = _unwind_handler;
    ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
    while ( 1 )
  {
    result = a1;
    v3 = *(int *)(a1 + 8);
    v4 = *(int *)(a1 + 12);
    if ( v4 == -1 || v4 == a2 )
    break;
    v5 = 3 * v4;
    *(int *)(a1 + 12) = *(int *)(v3 + 4 * v5);
    if ( !*(int *)(v3 + 4 * v5 + 4) )
    {
    _NLG_Notify(257);
    (*(void (__cdecl **)(struct _EXCEPTION_REGISTRATION_RECORD *, int (__cdecl *)(int, int, int, int *)))(v3 + 4 * v5 + 8))( ExceptionList, v7);
    }
  }
    return result;
}
}

// ==== BACKFILL 0x007CC1A9  __NLG_Notify1  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _NLG_Notify1(int a1)
{
{
    JUMPOUT(0x7CC1BC);
}
}

// ==== BACKFILL 0x007CC291  __seh_longjmp_unwind_4  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int _seh_longjmp_unwind_4(int a1)
{
{
    return _local_unwind2(*(int *)(a1 + 24), *(int *)(a1 + 28));
}
}

// ==== BACKFILL 0x007CC2AC  _mbstowcs  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t mbstowcs(wchar_t * Dest, const char * Source, size_t MaxCount)
{
{
    int v3;
    int MaxCounta;
    InterlockedIncrement(&CRTGlobal_B78BA4);
    v3 = 0;
    if ( CRTGlobal_B78BA0 )
  {
    InterlockedDecrement(&CRTGlobal_B78BA4);
    _lock(19);
    v3 = 1;
  }
    MaxCounta = _mbstowcs_lk(Dest, Source, MaxCount);
    if ( v3 )
    _unlock(19);
    else
    InterlockedDecrement(&CRTGlobal_B78BA4);
    return MaxCounta;
}
}

// ==== BACKFILL 0x007CC447  _wcstombs  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t wcstombs(CCINIClass * aP0, ObjectClass * aP1, size_t MaxCount)
{
{
    int v3;
    size_t MaxCounta;
    InterlockedIncrement(&CRTGlobal_B78BA4);
    v3 = 0;
    if ( CRTGlobal_B78BA0 )
  {
    InterlockedDecrement(&CRTGlobal_B78BA4);
    _lock(19);
    v3 = 1;
  }
    MaxCounta = _wcstombs_lk(aP0, aP1, MaxCount);
    if ( v3 )
    _unlock(19);
    else
    InterlockedDecrement(&CRTGlobal_B78BA4);
    return MaxCounta;
}
}

// ==== BACKFILL 0x007CC653  _wcsncnt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int wcsncnt(ObjectClass * aP0, int a2)
{
{
    int v2;
    ObjectClass *v3;
    v2 = a2;
    v3 = aP0;
    if ( !a2 )
    return a2;
    do
  {
    if ( !*(short *)v3->__pad_0 )
    break;
    v3 = (ObjectClass *)((char *)(v3) + 2);
    --v2;
  }
    while ( v2 );
    if ( v2 && !*(short *)v3->__pad_0 )
    return (((char *)v3 - (char *)aP0) >> 1) + 1;
    else
    return a2;
}
}

// ==== BACKFILL 0x007CC682  _wcsstr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcsstr(CampaignScore * aP0, const wchar_t * SubStr)
{
{
    CampaignScore *result;
    const wchar_t *v3;
    int v4;
    for ( result = aP0; *(short *)result->__pad_0; result = (CampaignScore *)((char *)(result) + 2) )
  {
    v3 = SubStr;
    v4 = (char *)result - (char *)SubStr;
    do
    {
    if ( !*v3 )
    break;
    if ( *(const wchar_t *)((char *)(v3) + v4) != *v3 )
    break;
    ++v3;
    }
    while ( *(const wchar_t *)((char *)(v3) + v4) );
    if ( !*v3 )
    return (wchar_t *)result;
  }
    return 0;
}
}

// ==== BACKFILL 0x007CCA19  String::Wrapper5to4  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int String::Wrapper5to4(CampaignScore * aP0, int a2, int a3, int a4)
{
{
    return String_Helper_7CCA34((unsigned char *)aP0, a2, (unsigned char *)a3, a4, 0);
}
}

// ==== BACKFILL 0x007CCF1D  __store_str  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void _store_str(unsigned char * a1, unsigned int * a2, unsigned int * a3)
{
{
    if ( *a3 )
  {
    do
    {
    if ( !*a1 )
    break;
    *(char *)(*a2)++ = *a1++;
    }
    while ( (*a3)-- != 1 );
  }
}
}

// ==== BACKFILL 0x007CCF44  __store_num  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int _store_num(int a1, unsigned int a2, unsigned int * a3, unsigned int * a4)
{
{
    int result;
    unsigned int v5;
    int v6;
    result = 0;
    v6 = 0;
    if ( CRTGlobal_B78BB0 )
    return _store_number(a1, a3, a4);
    if ( a2 >= *a4 )
  {
    *a4 = 0;
  }
    else
  {
    v5 = a2 - 1;
    if ( a2 )
    {
    do
      {
    *(char *)(*a3 + v5) = a1 % 10 + 48;
    ++v6;
    --v5;
    a1 /= 10;
      }
    while ( v5 != -1 );
    }
    *a3 += v6;
    *a4 -= v6;
    return v6;
  }
    return result;
}
}

// ==== BACKFILL 0x007CCFB3  __store_number  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * _store_number(int a1, char ** a2, unsigned int * a3)
{
{
    char *v3;
    char *result;
    char *v5;
    char v6;
    v3 = *a2;
    do
  {
    if ( *a3 <= 1u )
    break;
    *v3++ = a1 % 10 + 48;
    --*a3;
    a1 /= 10;
  }
    while ( a1 > 0 );
    result = *a2;
    *a2 = v3;
    v5 = v3 - 1;
    do
  {
    v6 = *v5;
    *v5-- = *result;
    *result++ = v6;
  }
    while ( result < v5 );
    return result;
}
}

// ==== BACKFILL 0x007CD42B  _remove  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int remove(const char * FileName)
{
{
    DWORD LastError;
    if ( DeleteFileA(FileName) )
    LastError = 0;
    else
    LastError = GetLastError();
    if ( !LastError )
    return 0;
    _dosmaperr(LastError);
    return -1;
}
}

// ==== BACKFILL 0x007CD455  __unlink  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _unlink(const char * FileName)
{
{
    return remove(FileName);
}
}

// ==== BACKFILL 0x007CD615  _genfname  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int genfname(const unsigned char * Buffer)
{
{
    char *v1;
    unsigned int v2;
    char *v4;
    v1 = (char *)(_mbsrchr(Buffer, 0x2Eu) + 1);
    v2 = strtoul(v1, 0, 32) + 1;
    if ( v2 >= 0x7FFF )
    return -1;
    v4 = _ultoa(v2, (char *)&Buffer, 32);
    strcpy(v1, v4);
    return 0;
}
}

// ==== BACKFILL 0x007CD790  _strcspn  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t strcspn(IUnknown * aP0, const char * Control)
{
{
    unsigned int v2;
    size_t v5;
    signed __int32 v7[9];
    v2 = 0;
    memset(v7, 0, 32);
    while ( 1 )
  {
    LOBYTE(v2) = *Control;
    if ( !*Control )
    break;
    ++Control;
    _bittestandset(v7, v2);
  }
    v5 = -1;
    do
  {
    ++v5;
    LOBYTE(v2) = aP0->field_0;
    if ( !LOBYTE(aP0->field_0) )
    break;
    aP0 = (IUnknown *)((char *)(aP0) + 1);
  }
    while ( !_bittest(v7, v2) );
    return v5;
}
}

// ==== BACKFILL 0x007CD917  __amsg_exit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void  __noreturn _amsg_exit(DWORD NumberOfBytesWritten)
{
{
    if ( CRTGlobal_B78230 == 1 )
    _FF_MSGBANNER();
    _NMSG_WRITE(NumberOfBytesWritten);
    DataGlobal_87C2A0(255);
}
}

// ==== BACKFILL 0x007CD93C  _fast_error_exit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void  __noreturn fast_error_exit(DWORD NumberOfBytesWritten)
{
{
    if ( CRTGlobal_B78230 == 1 )
    _FF_MSGBANNER();
    _NMSG_WRITE(NumberOfBytesWritten);
    ExitProcess(0xFFu);
}
}

// ==== BACKFILL 0x007CD960  __mtinitlocks  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _mtinitlocks()
{
{
    InitializeCriticalSection(lpCriticalSection);
    InitializeCriticalSection(DataGlobal_87C2DC);
    InitializeCriticalSection(DataGlobal_87C2CC);
    InitializeCriticalSection(DataGlobal_87C2AC);
}
}

// ==== BACKFILL 0x007CD9F5  __lock  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _lock(int a1)
{
{
    struct _RTL_CRITICAL_SECTION *v1;
    if ( !*(&DataGlobal_87C2A8 + a1) )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)malloc(0x18u);
    if ( !v1 )
    _amsg_exit(0x11u);
    _lock(17);
    if ( *(&DataGlobal_87C2A8 + a1) )
    {
    free(v1);
    }
    else
    {
    InitializeCriticalSection(v1);
    *(&DataGlobal_87C2A8 + a1) = v1;
    }
    _unlock(17);
  }
    EnterCriticalSection(*(&DataGlobal_87C2A8 + a1));
}
}

// ==== BACKFILL 0x007CDA56  __unlock  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _unlock(int a1)
{
{
    LeaveCriticalSection(*(&DataGlobal_87C2A8 + a1));
}
}

// ==== BACKFILL 0x007CE049  __strcats  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _strcats(CCINIClass * aP0, int a2)
{
{
    int v2;
    ObjectClass *v3;
    char *result;
    CCINIClass *v5;
    v2 = a2;
    if ( a2 > 0 )
  {
    v3 = (ObjectClass *)&a2;
    do
    {
    v5 = *(CCINIClass **)&v3->__pad_0[4];
    v3 = (ObjectClass *)((char *)(v3) + 4);
    result = strcat(aP0, (ObjectClass *)v5);
    --v2;
    }
    while ( v2 );
  }
    return result;
}
}

// ==== BACKFILL 0x007CE06E  ___lc_strtolc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int __lc_strtolc(char * a0, IUnknown * aP1)
{
{
    ObjectClass *v2;
    signed int v4;
    char v5;
    char *v6;
    char *v7;
    ObjectClass *v8;
    IUnknown *v9;
    char *Source;
    memset(a0, 0, (AbstractClass *)0x88);
    v2 = (ObjectClass *)aP1;
    if ( !LOBYTE(aP1->field_0) )
    return 0;
    if ( LOBYTE(aP1->field_0) == 46 && BYTE1(aP1->field_0) )
  {
    strcpy((IUnknown *)(a0 + 128), (const char *)&aP1->field_0 + 1);
    return 0;
  }
    for ( Source = 0; ; ++Source )
  {
    v4 = strcspn((IUnknown *)v2, "_.,");
    if ( !v4 )
    break;
    v5 = v2->__pad_0[v4];
    v6 = &v2->__pad_0[v4];
    if ( Source )
    {
    if ( Source == (char *)1 )
      {
    if ( v4 >= 64 || v5 == 95 )
    return -1;
    v9 = (IUnknown *)v4;
    v8 = v2;
    v7 = a0 + 64;
      }
    else
      {
    if ( Source != (char *)2 || v5 && v5 != 44 )
    return -1;
    v9 = (IUnknown *)v4;
    v8 = v2;
    v7 = a0 + 128;
      }
    strncpy(v7, v8->__pad_0, v9);
    }
    else
    {
    if ( v4 >= 64 || v5 == 46 )
    return -1;
    strncpy(a0, v2->__pad_0, (IUnknown *)v4);
    }
    if ( v5 == 44 || !v5 )
    return 0;
    v2 = (ObjectClass *)(v6 + 1);
  }
    return -1;
}
}

// ==== BACKFILL 0x007CE13A  ___lc_lctostr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * __lc_lctostr(char * Destination, char * Source)
{
{
    char *result;
    strcpy(Destination, Source);
    if ( Source[64] )
    _strcats(Destination, 2);
    result = Source + 128;
    if ( Source[128] )
    return _strcats(Destination, 2);
    return result;
}
}

// ==== BACKFILL 0x007CE9E6  _write_char  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_char(int a1, FILE * File, unsigned int * a3)
{
{
    int v4;
    bool v5;
    int *result;
    if ( --File->_cnt < 0 )
  {
    v4 = _flsbuf(a1, File);
  }
    else
  {
    *File->_ptr++ = a1;
    v4 = (unsigned char)a1;
  }
    v5 = v4 == -1;
    result = a3;
    if ( v5 )
    *a3 = -1;
    else
    ++*a3;
    return result;
}
}

// ==== BACKFILL 0x007CEA1B  _write_multi_char  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_multi_char(int a1, unsigned int * a2, FILE * File, unsigned int * a4)
{
{
    int *result;
    int *i;
    result = a2;
    for ( i = (int *)((char *)a2 - 1); (int)result > 0; i = (int *)((char *)i - 1) )
  {
    result = write_char(a1, File, a4);
    if ( *a4 == -1 )
    break;
    result = i;
  }
    return result;
}
}

// ==== BACKFILL 0x007CEA4C  _write_string  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_string(char * a1, unsigned int * a2, FILE * File, unsigned int * a4)
{
{
    int *result;
    int *i;
    int v7;
    result = a2;
    for ( i = (int *)((char *)a2 - 1); (int)result > 0; i = (int *)((char *)i - 1) )
  {
    v7 = *a1++;
    result = write_char(v7, File, a4);
    if ( *a4 == -1 )
    break;
    result = i;
  }
    return result;
}
}

// ==== BACKFILL 0x007CEA84  _get_int_arg  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int get_int_arg(unsigned int * a1)
{
{
    *a1 += 4;
    return *(int *)(*a1 - 4);
}
}

// ==== BACKFILL 0x007CEA91  _get_int64_arg  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long get_int64_arg(unsigned int * a1)
{
{
    *a1 += 8;
    return *(__int64 *)(*a1 - 8);
}
}

// ==== BACKFILL 0x007CEC26  __cftoe  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char * _cftoe(double * a1, unsigned char * a2, int a3, int a4)
{
{
    double v6;
    char Destination[24];
    int v8[4];
    v6 = *a1;
    _fltout2(SLOBYTE(v6), SHIDWORD(v6), v8, Destination);
    _fptostr(&a2[(v8[0] == 45) + (a3 > 0)], (char *)(a3 + 1), (int)v8);
    _cftoe2(a2, a3, a4, (int)v8, 0);
    return a2;
}
}

// ==== BACKFILL 0x007CEC87  __cftoe2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char * _cftoe2(unsigned char * a1, int a2, int a3, int a4, char a5)
{
{
    char *v5;
    char *v6;
    int v7;
    if ( a5 )
    _shift(&a1[*(int *)a4 == 45], a2 > 0);
    v5 = a1;
    if ( *(int *)a4 == 45 )
  {
    *a1 = 45;
    v5 = a1 + 1;
  }
    if ( a2 > 0 )
  {
    *v5 = v5[1];
    *++v5 = SrcCh;
  }
    v6 = strcpy(&v5[(a5 == 0) + a2], "e+000");
    if ( a3 )
    *v6 = 69;
    if ( **(char **)(a4 + 12) != 48 )
  {
    v7 = *(int *)(a4 + 4) - 1;
    if ( v7 < 0 )
    {
    v7 = 1 - *(int *)(a4 + 4);
    v6[1] = 45;
    }
    if ( v7 >= 100 )
    {
    v6[2] += v7 / 100;
    v7 %= 100;
    }
    if ( v7 >= 10 )
    {
    v6[3] += v7 / 10;
    v7 %= 10;
    }
    v6[4] += v7;
  }
    return a1;
}
}

// ==== BACKFILL 0x007CED49  __cftof  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _cftof(double * a1, char * Src, size_t Size)
{
{
    double v5;
    char Destination[24];
    int v7[4];
    v5 = *a1;
    _fltout2(SLOBYTE(v5), SHIDWORD(v5), v7, Destination);
    _fptostr(&Src[v7[0] == 45], (char *)(Size + v7[1]), (int)v7);
    _cftof2(Src, Size, (int)v7, 0);
    return Src;
}
}

// ==== BACKFILL 0x007CEE45  __cftog  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _cftog(double * a1, char * Src, char * Size, int a4)
{
{
    int v5;
    char *v6;
    double v8;
    char Destination[24];
    int v10;
    int v11;
    v8 = *a1;
    _fltout2(SLOBYTE(v8), SHIDWORD(v8), &v10, Destination);
    v5 = v11 - 1;
    v6 = &Src[v10 == 45];
    _fptostr(v6, Size, (int)&v10);
    if ( v11 - 1 < -4 || v11 - 1 >= (int)Size )
    return _cftoe2(Src, (int)Size, a4, (int)&v10, 1);
    if ( v5 < v11 - 1 )
    v6[strlen(v6) - 1] = 0;
    return _cftof2(Src, (int)Size, &v10, 1);
}
}

// ==== BACKFILL 0x007CEF29  __shift  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _shift(const char * Src, int a2)
{
{
    size_t v2;
    if ( a2 )
  {
    v2 = strlen(Src);
    memcpy((void *)&Src[a2], Src, v2 + 1);
  }
}
}

// ==== BACKFILL 0x007CF64C  __d_inttype  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _d_inttype(double X)
{
{
    if ( (_fpclass(X) & 0x90) != 0 )
    return 0;
    _frnd(X);
    _frnd(X / 2.0);
    return 2;
}
}

// ==== BACKFILL 0x007CFECD  ___sbh_alloc_new_group  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int __sbh_alloc_new_group(AbstractClass * aP0)
{
{
    int uniqueId;
    int v2;
    int v3;
    int v4;
    int v5;
    int *v6;
    int *v8;
    uniqueId = aP0->uniqueId;
    v2 = *(int *)&aP0->__pad_0[8];
    v3 = 0;
    while ( v2 >= 0 )
  {
    v2 *= 2;
    ++v3;
  }
    v4 = 63;
    v5 = 516 * v3 + uniqueId + 324;
    do
  {
    *(int *)(v5 + 8) = v5;
    *(int *)(v5 + 4) = v5;
    v5 += 8;
    --v4;
  }
    while ( v4 );
    v6 = (int *)(*(int *)&aP0->__pad_0[12] + (v3 << 15));
    if ( !VirtualAlloc(v6, 0x8000u, 0x1000u, 4u) )
    return -1;
    if ( v6 < v6 + 7168 )
  {
    v8 = v6 + 4;
    do
    {
    *(v8 - 2) = -1;
    v8[1019] = -1;
    *(v8 - 1) = 4080;
    *v8 = v8 + 1023;
    v8[1] = v8 - 1025;
    v8[1018] = 4080;
    v8 += 1024;
    }
    while ( v8 - 4 <= v6 + 7168 );
  }
    *(int *)(516 * v3 + uniqueId + 832) = v6 + 3;
    v6[5] = 516 * v3 + uniqueId + 828;
    *(int *)(516 * v3 + uniqueId + 836) = v6 + 7171;
    v6[7172] = 516 * v3 + uniqueId + 828;
    *(int *)(uniqueId + 4 * v3 + 68) = 0;
    *(int *)(uniqueId + 4 * v3 + 196) = 1;
    if ( (*(char *)(uniqueId + 67))++ == 0 )
    *(int *)&aP0->__pad_0[4] |= 1u;
    *(int *)&aP0->__pad_0[8] &= ~(0x80000000 >> v3);
    return v3;
}
}
