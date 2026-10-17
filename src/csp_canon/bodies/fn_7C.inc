// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007C3230  Render_Render_7C3230  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7C3230(int a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C3230.json)
}

// ==== BACKFILL 0x007C3430  Audio_Render_7C3430  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Audio_Render_7C3430(DSurface * aP0, int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C3430.json)
}

// ==== BACKFILL 0x007C35B0  sub_7C35B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_7C35B0::sub_7C35B0()
{

  return *((uint16_t *)this + 906); /*0x7c35b9*/

}

// ==== BACKFILL 0x007C3670  sub_7C3670  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_7C3670::sub_7C3670()
{

  *((unsigned int *)this + 452) = -1; /*0x7c3673*/
  *((unsigned int *)this + 450) = -1; /*0x7c3679*/
  *((unsigned int *)this + 451) = -1; /*0x7c367f*/
  return -1; /*0x7c3685*/

}

// ==== BACKFILL 0x007C3710  Render_Render_7C3710  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7C3710(unsigned char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C3710.json)
}

// ==== BACKFILL 0x007C6064  Timer::ReadTSC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned long long Timer::ReadTSC(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7C6064)
}

// ==== BACKFILL 0x007C61CF  globalHelper_0C61CF  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7C61CF(int a1)
{
  char v1; // ch
  char *v2; // esi
  char v3; // cl
  char v4; // al
  unsigned short *v5; // edx
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int result; // eax

  v1 = 0; /*0x7c61d6*/
  v2 = *(char **)(a1 + 76); /*0x7c61d8*/
  do /*0x7c625a*/
  {
    v3 = 0; /*0x7c61db*/
    do /*0x7c6232*/
    {
      v4 = *v2++; /*0x7c61dd*/
      if ( v4 ) /*0x7c61e3*/
      {
        v5 = *(unsigned short **)(a1 + 64); /*0x7c61ea*/
        v6 = *(unsigned int *)(a1 + 16) + **(uint8_t **)(a1 + 80); /*0x7c61ef*/
        if ( (uint16_t)v6 < *v5 ) /*0x7c61fa*/
        {
          *v5 = v6; /*0x7c61fc*/
          v7 = **(uint16_t **)(a1 + 68); /*0x7c6205*/
          IDA_LOWORD(v7) = *(unsigned short *)(*(unsigned int *)(a1 + 144) + 2 * v7); /*0x7c620e*/
          (v7) = ((v7) & ~0xFF) | ((v4) & 0xFF); /*0x7c6212*/
          **(unsigned short **)(a1 + 72) = *(unsigned short *)(*(unsigned int *)(a1 + 88) + 2 * v7); /*0x7c621b*/
        }
      }
      ++v3; /*0x7c621e*/
      ++*(unsigned int *)(a1 + 80); /*0x7c6220*/
      *(unsigned int *)(a1 + 72) += 2; /*0x7c6223*/
      *(unsigned int *)(a1 + 64) += 2; /*0x7c6227*/
      *(unsigned int *)(a1 + 68) += 2; /*0x7c622b*/
    }
    while ( v3 < *(char *)a1 ); /*0x7c6232*/
    *(unsigned int *)(a1 + 72) += *(unsigned int *)(a1 + 28); /*0x7c6237*/
    v8 = *(unsigned int *)(a1 + 20); /*0x7c623a*/
    *(unsigned int *)(a1 + 64) += v8; /*0x7c623d*/
    *(unsigned int *)(a1 + 64) += v8; /*0x7c6240*/
    v9 = *(unsigned int *)(a1 + 24); /*0x7c6243*/
    *(unsigned int *)(a1 + 68) += v9; /*0x7c6246*/
    *(unsigned int *)(a1 + 68) += v9; /*0x7c6249*/
    result = *(unsigned int *)(a1 + 32); /*0x7c624c*/
    v2 += result; /*0x7c624f*/
    *(unsigned int *)(a1 + 80) += result; /*0x7c6252*/
    ++v1; /*0x7c6255*/
  }
  while ( v1 < *(char *)(a1 + 4) ); /*0x7c625a*/
  return result; /*0x7c6260*/
}

// ==== BACKFILL 0x007C7350  Audio_Render_7C7350  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7C7350(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C7350.json)
}

// ==== BACKFILL 0x007C8362  FindClose  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL FindClose(HANDLE hFindFile)  // G42.33 b3 head truth 0x7c8362
{
  return __imp_FindClose(hFindFile);
}

// ==== BACKFILL 0x007C8368  FindNextFileA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData)  // G42.33 b3 head truth 0x7c8368
{
  return __imp_FindNextFileA(hFindFile, lpFindFileData);
}

// ==== BACKFILL 0x007C836E  FindFirstFileA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HANDLE FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)  // G42.33 b3 head truth 0x7c836e
{
  return __imp_FindFirstFileA(lpFileName, lpFindFileData);
}

// ==== BACKFILL 0x007C8374  FormatMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD FormatMessageA(DWORD dwFlags, LPCVOID lpSource, DWORD dwMessageId, DWORD dwLanguageId, LPSTR lpBuffer, DWORD nSize, va_list* Arguments)  // G42.33 b3 head truth 0x7c8374
{
  return __imp_FormatMessageA(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}

// ==== BACKFILL 0x007C8380  SetThreadPriority  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetThreadPriority(HANDLE hThread, int nPriority)  // G42.33 b3 head truth 0x7c8380
{
  return __imp_SetThreadPriority(hThread, nPriority);
}

// ==== BACKFILL 0x007C8386  CreateThread  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HANDLE CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId)  // G42.33 b3 head truth 0x7c8386
{
  return __imp_CreateThread(lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
}

// ==== BACKFILL 0x007C838C  InitializeCriticalSection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)  // G42.33 b3 head truth 0x7c838c
{
  __imp_InitializeCriticalSection(lpCriticalSection); /*0x7c838c*/
}

// ==== BACKFILL 0x007C8392  Sleep  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Sleep(DWORD dwMilliseconds)  // G42.33 b3 head truth 0x7c8392
{
  __imp_Sleep(dwMilliseconds); /*0x7c8392*/
}

// ==== BACKFILL 0x007C8398  LeaveCriticalSection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)  // G42.33 b3 head truth 0x7c8398
{
  __imp_LeaveCriticalSection(lpCriticalSection); /*0x7c8398*/
}

// ==== BACKFILL 0x007C839E  EnterCriticalSection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)  // G42.33 b3 head truth 0x7c839e
{
  __imp_EnterCriticalSection(lpCriticalSection); /*0x7c839e*/
}

// ==== BACKFILL 0x007C83A4  DeleteCriticalSection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)  // G42.33 b3 head truth 0x7c83a4
{
  __imp_DeleteCriticalSection(lpCriticalSection); /*0x7c83a4*/
}

// ==== BACKFILL 0x007C83AA  CloseHandle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL CloseHandle(HANDLE hObject)  // G42.33 b3 head truth 0x7c83aa
{
  return __imp_CloseHandle(hObject);
}

// ==== BACKFILL 0x007C83B0  WaitForSingleObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds)  // G42.33 b3 head truth 0x7c83b0
{
  return __imp_WaitForSingleObject(hHandle, dwMilliseconds);
}

// ==== BACKFILL 0x007C83B6  QueryPerformanceFrequency  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL QueryPerformanceFrequency(LARGE_INTEGER* lpFrequency)  // G42.33 b3 head truth 0x7c83b6
{
  return __imp_QueryPerformanceFrequency(lpFrequency);
}

// ==== BACKFILL 0x007C83BC  QueryPerformanceCounter  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL QueryPerformanceCounter(LARGE_INTEGER* lpPerformanceCount)  // G42.33 b3 head truth 0x7c83bc
{
  return __imp_QueryPerformanceCounter(lpPerformanceCount);
}

// ==== BACKFILL 0x007C83C8  InterlockedDecrement  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG InterlockedDecrement(volatile LONG* lpAddend)  // G42.33 b3 head truth 0x7c83c8
{
  return __imp_InterlockedDecrement(lpAddend);
}

// ==== BACKFILL 0x007C83CE  InterlockedIncrement  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG InterlockedIncrement(volatile LONG* lpAddend)  // G42.33 b3 head truth 0x7c83ce
{
  return __imp_InterlockedIncrement(lpAddend);
}

// ==== BACKFILL 0x007C83D4  MultiByteToWideChar  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, wchar_t * lpWideCharStr, int cchWideChar)  // G42.33 b24: arg5 LPWSTR truth
{
  return __imp_MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}

// ==== BACKFILL 0x007C83DA  SetFilePointer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)  // G42.33 b3 head truth 0x7c83da
{
  return __imp_SetFilePointer(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
}

// ==== BACKFILL 0x007C83E0  CreateFileA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HANDLE CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)  // G42.33 b3 head truth 0x7c83e0
{
  return __imp_CreateFileA(
           lpFileName,
           dwDesiredAccess,
           dwShareMode,
           lpSecurityAttributes,
           dwCreationDisposition,
           dwFlagsAndAttributes,
           hTemplateFile);
}

// ==== BACKFILL 0x007C83E6  DeviceIoControl  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL DeviceIoControl(HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped)  // G42.33 b3 head truth 0x7c83e6
{
  return __imp_DeviceIoControl(
           hDevice,
           dwIoControlCode,
           lpInBuffer,
           nInBufferSize,
           lpOutBuffer,
           nOutBufferSize,
           lpBytesReturned,
           lpOverlapped);
}

// ==== BACKFILL 0x007C83EC  GetDriveTypeA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
UINT GetDriveTypeA(LPCSTR lpRootPathName)  // G42.33 b3 head truth 0x7c83ec
{
  return __imp_GetDriveTypeA(lpRootPathName);
}

// ==== BACKFILL 0x007C83F2  WideCharToMultiByte  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar)  // G42.33 b3 head truth 0x7c83f2
{
  return __imp_WideCharToMultiByte(
           CodePage,
           dwFlags,
           lpWideCharStr,
           cchWideChar,
           lpMultiByteStr,
           cbMultiByte,
           lpDefaultChar,
           lpUsedDefaultChar);
}

// ==== BACKFILL 0x007C83F8  GetDiskFreeSpaceA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetDiskFreeSpaceA(LPCSTR lpRootPathName, LPDWORD lpSectorsPerCluster, LPDWORD lpBytesPerSector, LPDWORD lpNumberOfFreeClusters, LPDWORD lpTotalNumberOfClusters)  // G42.33 b3 head truth 0x7c83f8
{
  return __imp_GetDiskFreeSpaceA(
           lpRootPathName,
           lpSectorsPerCluster,
           lpBytesPerSector,
           lpNumberOfFreeClusters,
           lpTotalNumberOfClusters);
}

// ==== BACKFILL 0x007C83FE  GetProcAddress  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
FARPROC GetProcAddress(HMODULE hModule, LPCSTR lpProcName)  // G42.33 b3 head truth 0x7c83fe
{
  return __imp_GetProcAddress(hModule, lpProcName);
}

// ==== BACKFILL 0x007C8404  GetModuleHandleA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HMODULE GetModuleHandleA(LPCSTR lpModuleName)  // G42.33 b3 head truth 0x7c8404
{
  return __imp_GetModuleHandleA(lpModuleName);
}

// ==== BACKFILL 0x007C840A  CreateMutexA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HANDLE CreateMutexA(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName)  // G42.33 b3 head truth 0x7c840a
{
  return __imp_CreateMutexA(lpMutexAttributes, bInitialOwner, lpName);
}

// ==== BACKFILL 0x007C8410  MapViewOfFileEx  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LPVOID MapViewOfFileEx(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap, LPVOID lpBaseAddress)  // G42.33 b3 head truth 0x7c8410
{
  return __imp_MapViewOfFileEx(
           hFileMappingObject,
           dwDesiredAccess,
           dwFileOffsetHigh,
           dwFileOffsetLow,
           dwNumberOfBytesToMap,
           lpBaseAddress);
}

// ==== BACKFILL 0x007C8416  SetEvent  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetEvent(HANDLE hEvent)  // G42.33 b3 head truth 0x7c8416
{
  return __imp_SetEvent(hEvent);
}

// ==== BACKFILL 0x007C841C  OpenEventA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HANDLE OpenEventA(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCSTR lpName)  // G42.33 b3 head truth 0x7c841c
{
  return __imp_OpenEventA(dwDesiredAccess, bInheritHandle, lpName);
}

// ==== BACKFILL 0x007C8422  UnmapViewOfFile  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL UnmapViewOfFile(LPCVOID lpBaseAddress)  // G42.33 b3 head truth 0x7c8422
{
  return __imp_UnmapViewOfFile(lpBaseAddress);
}

// ==== BACKFILL 0x007C8428  LockResource  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LPVOID LockResource(HGLOBAL hResData)  // G42.33 b3 head truth 0x7c8428
{
  return __imp_LockResource(hResData);
}

// ==== BACKFILL 0x007C842E  LoadResource  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HGLOBAL LoadResource(HMODULE hModule, HRSRC hResInfo)  // G42.33 b3 head truth 0x7c842e
{
  return __imp_LoadResource(hModule, hResInfo);
}

// ==== BACKFILL 0x007C8434  FindResourceA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRSRC FindResourceA(HMODULE hModule, LPCSTR lpName, LPCSTR lpType)  // G42.33 b3 head truth 0x7c8434
{
  return __imp_FindResourceA(hModule, lpName, lpType);
}

// ==== BACKFILL 0x007C843A  GetVolumeInformationA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetVolumeInformationA(LPCSTR lpRootPathName, LPSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize)  // G42.33 b3 head truth 0x7c843a
{
  return __imp_GetVolumeInformationA(
           lpRootPathName,
           lpVolumeNameBuffer,
           nVolumeNameSize,
           lpVolumeSerialNumber,
           lpMaximumComponentLength,
           lpFileSystemFlags,
           lpFileSystemNameBuffer,
           nFileSystemNameSize);
}

// ==== BACKFILL 0x007C8440  FreeLibrary  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL FreeLibrary(HMODULE hLibModule)  // G42.33 b3 head truth 0x7c8440
{
  return __imp_FreeLibrary(hLibModule);
}

// ==== BACKFILL 0x007C8446  LoadLibraryA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HMODULE LoadLibraryA(LPCSTR lpLibFileName)  // G42.33 b3 head truth 0x7c8446
{
  return __imp_LoadLibraryA(lpLibFileName);
}

// ==== BACKFILL 0x007C8458  ExitProcess  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void ExitProcess(UINT uExitCode)  // G42.33 b3 head truth 0x7c8458
{
  __imp_ExitProcess(uExitCode); /*0x7c8458*/
}

// ==== BACKFILL 0x007C845E  IsBadReadPtr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL IsBadReadPtr(const void* lp, UINT_PTR ucb)  // G42.33 b3 head truth 0x7c845e
{
  return __imp_IsBadReadPtr(lp, ucb);
}

// ==== BACKFILL 0x007C8464  IsBadCodePtr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL IsBadCodePtr(FARPROC lpfn)  // G42.33 b3 head truth 0x7c8464
{
  return __imp_IsBadCodePtr(lpfn);
}

// ==== BACKFILL 0x007C846A  lstrcatA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LPSTR lstrcatA(LPSTR lpString1, LPCSTR lpString2)  // G42.33 b3 head truth 0x7c846a
{
  return __imp_lstrcatA(lpString1, lpString2);
}

// ==== BACKFILL 0x007C8470  lstrlenA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int lstrlenA(LPCSTR lpString)  // G42.33 b3 head truth 0x7c8470
{
  return __imp_lstrlenA(lpString);
}

// ==== BACKFILL 0x007C8476  GetModuleFileNameA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)  // G42.33 b3 head truth 0x7c8476
{
  return __imp_GetModuleFileNameA(hModule, lpFilename, nSize);
}

// ==== BACKFILL 0x007C8482  WriteFile  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)  // G42.33 b3 head truth 0x7c8482
{
  return __imp_WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
}

// ==== BACKFILL 0x007C8488  FlushInstructionCache  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL FlushInstructionCache(HANDLE hProcess, LPCVOID lpBaseAddress, SIZE_T dwSize)  // G42.33 b3 head truth 0x7c8488
{
  return __imp_FlushInstructionCache(hProcess, lpBaseAddress, dwSize);
}

// ==== BACKFILL 0x007C848E  VirtualProtect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL VirtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect)  // G42.33 b3 head truth 0x7c848e
{
  return __imp_VirtualProtect(lpAddress, dwSize, flNewProtect, lpflOldProtect);
}

// ==== BACKFILL 0x007C8494  VirtualQuery  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
SIZE_T VirtualQuery(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength)  // G42.33 b3 head truth 0x7c8494
{
  return __imp_VirtualQuery(lpAddress, lpBuffer, dwLength);
}

// ==== BACKFILL 0x007C84A0  GetSystemTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void GetSystemTime(LPSYSTEMTIME lpSystemTime)  // G42.33 b3 head truth 0x7c84a0
{
  __imp_GetSystemTime(lpSystemTime); /*0x7c84a0*/
}

// ==== BACKFILL 0x007C84A6  GlobalMemoryStatus  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)  // G42.33 b3 head truth 0x7c84a6
{
  __imp_GlobalMemoryStatus(lpBuffer); /*0x7c84a6*/
}

// ==== BACKFILL 0x007C84AC  CreateProcessA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL CreateProcessA(LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation)  // G42.33 b3 head truth 0x7c84ac
{
  return __imp_CreateProcessA(
           lpApplicationName,
           lpCommandLine,
           lpProcessAttributes,
           lpThreadAttributes,
           bInheritHandles,
           dwCreationFlags,
           lpEnvironment,
           lpCurrentDirectory,
           lpStartupInfo,
           lpProcessInformation);
}

// ==== BACKFILL 0x007C84B2  DeleteFileA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL DeleteFileA(LPCSTR lpFileName)  // G42.33 b3 head truth 0x7c84b2
{
  return __imp_DeleteFileA(lpFileName);
}

// ==== BACKFILL 0x007C84B8  GetTempFileNameA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
UINT GetTempFileNameA(LPCSTR lpPathName, LPCSTR lpPrefixString, UINT uUnique, LPSTR lpTempFileName)  // G42.33 b3 head truth 0x7c84b8
{
  return __imp_GetTempFileNameA(lpPathName, lpPrefixString, uUnique, lpTempFileName);
}

// ==== BACKFILL 0x007C84BE  GetWindowsDirectoryA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
UINT GetWindowsDirectoryA(LPSTR lpBuffer, UINT uSize)  // G42.33 b3 head truth 0x7c84be
{
  return __imp_GetWindowsDirectoryA(lpBuffer, uSize);
}

// ==== BACKFILL 0x007C84C4  GetTimeFormatA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetTimeFormatA(LCID Locale, DWORD dwFlags, const SYSTEMTIME* lpTime, LPCSTR lpFormat, LPSTR lpTimeStr, int cchTime)  // G42.33 b3 head truth 0x7c84c4
{
  return __imp_GetTimeFormatA(Locale, dwFlags, lpTime, lpFormat, lpTimeStr, cchTime);
}

// ==== BACKFILL 0x007C84CA  GetDateFormatA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetDateFormatA(LCID Locale, DWORD dwFlags, const SYSTEMTIME* lpDate, LPCSTR lpFormat, LPSTR lpDateStr, int cchDate)  // G42.33 b3 head truth 0x7c84ca
{
  return __imp_GetDateFormatA(Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate);
}

// ==== BACKFILL 0x007C84D0  FileTimeToSystemTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL FileTimeToSystemTime(const FILETIME* lpFileTime, LPSYSTEMTIME lpSystemTime)  // G42.33 b3 head truth 0x7c84d0
{
  return __imp_FileTimeToSystemTime(lpFileTime, lpSystemTime);
}

// ==== BACKFILL 0x007C84D6  FileTimeToLocalFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL FileTimeToLocalFileTime(const FILETIME* lpFileTime, LPFILETIME lpLocalFileTime)  // G42.33 b3 head truth 0x7c84d6
{
  return __imp_FileTimeToLocalFileTime(lpFileTime, lpLocalFileTime);
}

// ==== BACKFILL 0x007C84DC  SystemTimeToFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SystemTimeToFileTime(const SYSTEMTIME* lpSystemTime, LPFILETIME lpFileTime)  // G42.33 b3 head truth 0x7c84dc
{
  return __imp_SystemTimeToFileTime(lpSystemTime, lpFileTime);
}

// ==== BACKFILL 0x007C84E2  CompareFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG CompareFileTime(const FILETIME* lpFileTime1, const FILETIME* lpFileTime2)  // G42.33 b3 head truth 0x7c84e2
{
  return __imp_CompareFileTime(lpFileTime1, lpFileTime2);
}

// ==== BACKFILL 0x007C84E8  CopyFileA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL CopyFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName, BOOL bFailIfExists)  // G42.33 b3 head truth 0x7c84e8
{
  return __imp_CopyFileA(lpExistingFileName, lpNewFileName, bFailIfExists);
}

// ==== BACKFILL 0x007C84EE  CreateDirectoryA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL CreateDirectoryA(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)  // G42.33 b3 head truth 0x7c84ee
{
  return __imp_CreateDirectoryA(lpPathName, lpSecurityAttributes);
}

// ==== BACKFILL 0x007C84F4  MulDiv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MulDiv(int nNumber, int nNumerator, int nDenominator)  // G42.33 b3 head truth 0x7c84f4
{
  return __imp_MulDiv(nNumber, nNumerator, nDenominator);
}

// ==== BACKFILL 0x007C84FA  EscapeCommFunction  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL EscapeCommFunction(HANDLE hFile, DWORD dwFunc)  // G42.33 b3 head truth 0x7c84fa
{
  return __imp_EscapeCommFunction(hFile, dwFunc);
}

// ==== BACKFILL 0x007C8500  ClearCommBreak  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ClearCommBreak(HANDLE hFile)  // G42.33 b3 head truth 0x7c8500
{
  return __imp_ClearCommBreak(hFile);
}

// ==== BACKFILL 0x007C8506  SetCommBreak  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetCommBreak(HANDLE hFile)  // G42.33 b3 head truth 0x7c8506
{
  return __imp_SetCommBreak(hFile);
}

// ==== BACKFILL 0x007C850C  ReadFile  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)  // G42.33 b3 head truth 0x7c850c
{
  return __imp_ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
}

// ==== BACKFILL 0x007C8512  GetFileSize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)  // G42.33 b3 head truth 0x7c8512
{
  return __imp_GetFileSize(hFile, lpFileSizeHigh);
}

// ==== BACKFILL 0x007C8518  FileTimeToDosDateTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL FileTimeToDosDateTime(const FILETIME* lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime)  // G42.33 b3 head truth 0x7c8518
{
  return __imp_FileTimeToDosDateTime(lpFileTime, lpFatDate, lpFatTime);
}

// ==== BACKFILL 0x007C851E  GetFileInformationByHandle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetFileInformationByHandle(HANDLE hFile, LPBY_HANDLE_FILE_INFORMATION lpFileInformation)  // G42.33 b3 head truth 0x7c851e
{
  return __imp_GetFileInformationByHandle(hFile, lpFileInformation);
}

// ==== BACKFILL 0x007C8524  SetFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetFileTime(HANDLE hFile, const FILETIME* lpCreationTime, const FILETIME* lpLastAccessTime, const FILETIME* lpLastWriteTime)  // G42.33 b3 head truth 0x7c8524
{
  return __imp_SetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}

// ==== BACKFILL 0x007C852A  DosDateTimeToFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL DosDateTimeToFileTime(WORD wFatDate, WORD wFatTime, LPFILETIME lpFileTime)  // G42.33 b3 head truth 0x7c852a
{
  return __imp_DosDateTimeToFileTime(wFatDate, wFatTime, lpFileTime);
}

// ==== BACKFILL 0x007C8530  GetStartupInfoA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)  // G42.33 b3 head truth 0x7c8530
{
  __imp_GetStartupInfoA(lpStartupInfo); /*0x7c8530*/
}

// ==== BACKFILL 0x007C8536  TerminateProcess  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL TerminateProcess(HANDLE hProcess, UINT uExitCode)  // G42.33 b3 head truth 0x7c8536
{
  return __imp_TerminateProcess(hProcess, uExitCode);
}

// ==== BACKFILL 0x007C853C  WaitForMultipleObjects  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD WaitForMultipleObjects(DWORD nCount, const HANDLE* lpHandles, BOOL bWaitAll, DWORD dwMilliseconds)  // G42.33 b3 head truth 0x7c853c
{
  return __imp_WaitForMultipleObjects(nCount, lpHandles, bWaitAll, dwMilliseconds);
}

// ==== BACKFILL 0x007C8542  lstrcpyA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LPSTR lstrcpyA(LPSTR lpString1, LPCSTR lpString2)  // G42.33 b3 head truth 0x7c8542
{
  return __imp_lstrcpyA(lpString1, lpString2);
}

// ==== BACKFILL 0x007C8548  SetUnhandledExceptionFilter  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LPTOP_LEVEL_EXCEPTION_FILTER SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)  // G42.33 b3 head truth 0x7c8548
{
  return __imp_SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}

// ==== BACKFILL 0x007C854E  SetCurrentDirectoryA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetCurrentDirectoryA(LPCSTR lpPathName)  // G42.33 b3 head truth 0x7c854e
{
  return __imp_SetCurrentDirectoryA(lpPathName);
}

// ==== BACKFILL 0x007C8554  OpenMutexA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HANDLE OpenMutexA(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCSTR lpName)  // G42.33 b3 head truth 0x7c8554
{
  return __imp_OpenMutexA(dwDesiredAccess, bInheritHandle, lpName);
}

// ==== BACKFILL 0x007C855A  GetFileTime  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetFileTime(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)  // G42.33 b3 head truth 0x7c855a
{
  return __imp_GetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}

// ==== BACKFILL 0x007C8560  GetLogicalDriveStringsA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD GetLogicalDriveStringsA(DWORD nBufferLength, LPSTR lpBuffer)  // G42.33 b3 head truth 0x7c8560
{
  return __imp_GetLogicalDriveStringsA(nBufferLength, lpBuffer);
}

// ==== BACKFILL 0x007C8566  ClearCommError  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ClearCommError(HANDLE hFile, LPDWORD lpErrors, LPCOMSTAT lpStat)  // G42.33 b3 head truth 0x7c8566
{
  return __imp_ClearCommError(hFile, lpErrors, lpStat);
}

// ==== BACKFILL 0x007C856C  SetCommTimeouts  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetCommTimeouts(HANDLE hFile, LPCOMMTIMEOUTS lpCommTimeouts)  // G42.33 b3 head truth 0x7c856c
{
  return __imp_SetCommTimeouts(hFile, lpCommTimeouts);
}

// ==== BACKFILL 0x007C8572  SetCommState  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetCommState(HANDLE hFile, LPDCB lpDCB)  // G42.33 b3 head truth 0x7c8572
{
  return __imp_SetCommState(hFile, lpDCB);
}

// ==== BACKFILL 0x007C8578  GetCommState  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetCommState(HANDLE hFile, LPDCB lpDCB)  // G42.33 b3 head truth 0x7c8578
{
  return __imp_GetCommState(hFile, lpDCB);
}

// ==== BACKFILL 0x007C857E  CreateEventA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HANDLE CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes, BOOL bManualReset, BOOL bInitialState, LPCSTR lpName)  // G42.33 b3 head truth 0x7c857e
{
  return __imp_CreateEventA(lpEventAttributes, bManualReset, bInitialState, lpName);
}

// ==== BACKFILL 0x007C8584  PurgeComm  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL PurgeComm(HANDLE hFile, DWORD dwFlags)  // G42.33 b3 head truth 0x7c8584
{
  return __imp_PurgeComm(hFile, dwFlags);
}

// ==== BACKFILL 0x007C858A  SetupComm  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetupComm(HANDLE hFile, DWORD dwInQueue, DWORD dwOutQueue)  // G42.33 b3 head truth 0x7c858a
{
  return __imp_SetupComm(hFile, dwInQueue, dwOutQueue);
}

// ==== BACKFILL 0x007C8590  GetCommMask  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetCommMask(HANDLE hFile, LPDWORD lpEvtMask)  // G42.33 b3 head truth 0x7c8590
{
  return __imp_GetCommMask(hFile, lpEvtMask);
}

// ==== BACKFILL 0x007C8596  ResetEvent  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ResetEvent(HANDLE hEvent)  // G42.33 b3 head truth 0x7c8596
{
  return __imp_ResetEvent(hEvent);
}

// ==== BACKFILL 0x007C859C  GetCommModemStatus  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetCommModemStatus(HANDLE hFile, LPDWORD lpModemStat)  // G42.33 b3 head truth 0x7c859c
{
  return __imp_GetCommModemStatus(hFile, lpModemStat);
}

// ==== BACKFILL 0x007C85A2  GetOverlappedResult  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetOverlappedResult(HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait)  // G42.33 b3 head truth 0x7c85a2
{
  return __imp_GetOverlappedResult(hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait);
}

// ==== BACKFILL 0x007C85A8  GetVersionExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)  // G42.33 b3 head truth 0x7c85a8
{
  return __imp_GetVersionExA(lpVersionInformation);
}

// ==== BACKFILL 0x007C85AE  GetExitCodeProcess  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetExitCodeProcess(HANDLE hProcess, LPDWORD lpExitCode)  // G42.33 b3 head truth 0x7c85ae
{
  return __imp_GetExitCodeProcess(hProcess, lpExitCode);
}

// ==== BACKFILL 0x007C85B4  GetCurrentDirectoryA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD GetCurrentDirectoryA(DWORD nBufferLength, LPSTR lpBuffer)  // G42.33 b3 head truth 0x7c85b4
{
  return __imp_GetCurrentDirectoryA(nBufferLength, lpBuffer);
}

// ==== BACKFILL 0x007C85BA  HeapDestroy  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL HeapDestroy(HANDLE hHeap)  // G42.33 b3 head truth 0x7c85ba
{
  return __imp_HeapDestroy(hHeap);
}

// ==== BACKFILL 0x007C85C0  GetComputerNameA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetComputerNameA(LPSTR lpBuffer, LPDWORD nSize)  // G42.33 b3 head truth 0x7c85c0
{
  return __imp_GetComputerNameA(lpBuffer, nSize);
}

// ==== BACKFILL 0x007C85C6  ReleaseMutex  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ReleaseMutex(HANDLE hMutex)  // G42.33 b3 head truth 0x7c85c6
{
  return __imp_ReleaseMutex(hMutex);
}

// ==== BACKFILL 0x007C85CC  GetClientRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetClientRect(HWND hWnd, LPRECT lpRect)  // G42.33 b3 head truth 0x7c85cc
{
  return __imp_GetClientRect(hWnd, lpRect);
}

// ==== BACKFILL 0x007C85D2  DispatchMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT DispatchMessageA(const MSG* lpMsg)  // G42.33 b3 head truth 0x7c85d2
{
  return __imp_DispatchMessageA((const ::MSG *)lpMsg);  // G42.33 b22
}

// ==== BACKFILL 0x007C85D8  TranslateMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL TranslateMessage(const MSG* lpMsg)  // G42.33 b3 head truth 0x7c85d8
{
  return __imp_TranslateMessage((const ::MSG *)lpMsg);  // G42.33 b22
}

// ==== BACKFILL 0x007C85DE  ClientToScreen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ClientToScreen(HWND hWnd, LPPOINT lpPoint)  // G42.33 b3 head truth 0x7c85de
{
  return __imp_ClientToScreen(hWnd, lpPoint);
}

// ==== BACKFILL 0x007C85E4  SetRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetRect(LPRECT lprc, int xLeft, int yTop, int xRight, int yBottom)  // G42.33 b3 head truth 0x7c85e4
{
  return __imp_SetRect(lprc, xLeft, yTop, xRight, yBottom);
}

// ==== BACKFILL 0x007C85F0  PostMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int PostMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_PostMessageA(hWnd, Msg, wParam, lParam);
}

// ==== BACKFILL 0x007C85F6  GetDlgItem  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND GetDlgItem(HWND hDlg, int nIDDlgItem)  // G42.33 b3 head truth 0x7c85f6
{
  return __imp_GetDlgItem(hDlg, nIDDlgItem);
}

// ==== BACKFILL 0x007C85FC  SendMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)  // G42.33 b3 head truth 0x7c85fc
{
  return __imp_SendMessageA(hWnd, Msg, wParam, lParam);
}

// ==== BACKFILL 0x007C8602  EnableWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL EnableWindow(HWND hWnd, BOOL bEnable)  // G42.33 b3 head truth 0x7c8602
{
  return __imp_EnableWindow(hWnd, bEnable);
}

// ==== BACKFILL 0x007C8608  InvalidateRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL InvalidateRect(HWND hWnd, const RECT* lpRect, BOOL bErase)  // G42.33 b3 head truth 0x7c8608
{
  return __imp_InvalidateRect(hWnd, lpRect, bErase);
}

// ==== BACKFILL 0x007C860E  ShowWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ShowWindow(HWND hWnd, int nCmdShow)  // G42.33 b3 head truth 0x7c860e
{
  return __imp_ShowWindow(hWnd, nCmdShow);
}

// ==== BACKFILL 0x007C8614  SetTimer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
UINT_PTR SetTimer(HWND hWnd, UINT_PTR nIDEvent, UINT uElapse, TIMERPROC lpTimerFunc)  // G42.33 b3 head truth 0x7c8614
{
  return __imp_SetTimer(hWnd, nIDEvent, uElapse, lpTimerFunc);
}

// ==== BACKFILL 0x007C861A  SendDlgItemMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT SendDlgItemMessageA(HWND hDlg, int nIDDlgItem, UINT Msg, WPARAM wParam, LPARAM lParam)  // G42.33 b3 head truth 0x7c861a
{
  return __imp_SendDlgItemMessageA(hDlg, nIDDlgItem, Msg, wParam, lParam);
}

// ==== BACKFILL 0x007C8620  KillTimer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL KillTimer(HWND hWnd, UINT_PTR uIDEvent)  // G42.33 b3 head truth 0x7c8620
{
  return __imp_KillTimer(hWnd, uIDEvent);
}

// ==== BACKFILL 0x007C8626  ValidateRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ValidateRect(HWND hWnd, const RECT* lpRect)  // G42.33 b3 head truth 0x7c8626
{
  return __imp_ValidateRect(hWnd, lpRect);
}

// ==== BACKFILL 0x007C862C  GetWindowLongA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG GetWindowLongA(HWND hWnd, int nIndex)  // G42.33 b3 head truth 0x7c862c
{
  return __imp_GetWindowLongA(hWnd, nIndex);
}

// ==== BACKFILL 0x007C8632  SetWindowLongA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong)  // G42.33 b3 head truth 0x7c8632
{
  return __imp_SetWindowLongA(hWnd, nIndex, dwNewLong);
}

// ==== BACKFILL 0x007C8638  UpdateWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL UpdateWindow(HWND hWnd)  // G42.33 b3 head truth 0x7c8638
{
  return __imp_UpdateWindow(hWnd);
}

// ==== BACKFILL 0x007C863E  MessageBoxIndirectA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MessageBoxIndirectA(const MSGBOXPARAMSA* lpmbp)  // G42.33 b3 head truth 0x7c863e
{
  return __imp_MessageBoxIndirectA(lpmbp);
}

// ==== BACKFILL 0x007C8644  PeekMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL PeekMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)  // G42.33 b3 head truth 0x7c8644
{
  return __imp_PeekMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
}

// ==== BACKFILL 0x007C864A  MessageBoxA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)  // G42.33 b3 head truth 0x7c864a
{
  return __imp_MessageBoxA(hWnd, lpText, lpCaption, uType);
}

// ==== BACKFILL 0x007C8650  ReleaseDC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ReleaseDC(HWND hWnd, HDC hDC)  // G42.33 b3 head truth 0x7c8650
{
  return __imp_ReleaseDC(hWnd, hDC);
}

// ==== BACKFILL 0x007C8656  GetDC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HDC GetDC(HWND hWnd)  // G42.33 b3 head truth 0x7c8656
{
  return __imp_GetDC(hWnd);
}

// ==== BACKFILL 0x007C865C  CloseWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL CloseWindow(HWND hWnd)  // G42.33 b3 head truth 0x7c865c
{
  return __imp_CloseWindow(hWnd);
}

// ==== BACKFILL 0x007C8662  DefWindowProcA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)  // G42.33 b3 head truth 0x7c8662
{
  return __imp_DefWindowProcA(hWnd, Msg, wParam, lParam);
}

// ==== BACKFILL 0x007C866E  EndDialog  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL EndDialog(HWND hDlg, INT_PTR nResult)  // G42.33 b3 head truth 0x7c866e
{
  return __imp_EndDialog(hDlg, nResult);
}

// ==== BACKFILL 0x007C8674  SetFocus  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND SetFocus(HWND hWnd)  // G42.33 b3 head truth 0x7c8674
{
  return __imp_SetFocus(hWnd);
}

// ==== BACKFILL 0x007C867A  SetDlgItemTextA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetDlgItemTextA(HWND hDlg, int nIDDlgItem, LPCSTR lpString)  // G42.33 b3 head truth 0x7c867a
{
  return __imp_SetDlgItemTextA(hDlg, nIDDlgItem, lpString);
}

// ==== BACKFILL 0x007C8680  DialogBoxParamA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
INT_PTR DialogBoxParamA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)  // G42.33 b3 head truth 0x7c8680
{
  return __imp_DialogBoxParamA(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
}

// ==== BACKFILL 0x007C8686  DialogBoxIndirectParamA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
INT_PTR DialogBoxIndirectParamA(HINSTANCE hInstance, LPCDLGTEMPLATEA hDialogTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)  // G42.33 b3 head truth 0x7c8686
{
  return __imp_DialogBoxIndirectParamA(hInstance, hDialogTemplate, hWndParent, lpDialogFunc, dwInitParam);
}

// ==== BACKFILL 0x007C868C  ShowCursor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ShowCursor(BOOL bShow)  // G42.33 b3 head truth 0x7c868c
{
  return __imp_ShowCursor(bShow);
}

// ==== BACKFILL 0x007C8692  SetWindowPos  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetWindowPos(HWND hWnd, HWND hWndInsertAfter, int X, int Y, int cx, int cy, UINT uFlags)  // G42.33 b3 head truth 0x7c8692
{
  return __imp_SetWindowPos(hWnd, hWndInsertAfter, X, Y, cx, cy, uFlags);
}

// ==== BACKFILL 0x007C8698  DestroyWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL DestroyWindow(HWND hWnd)  // G42.33 b3 head truth 0x7c8698
{
  return __imp_DestroyWindow(hWnd);
}

// ==== BACKFILL 0x007C86AA  SetCapture  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND SetCapture(HWND hWnd)  // G42.33 b3 head truth 0x7c86aa
{
  return __imp_SetCapture(hWnd);
}

// ==== BACKFILL 0x007C86B0  GetDlgCtrlID  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetDlgCtrlID(HWND hWnd)  // G42.33 b3 head truth 0x7c86b0
{
  return __imp_GetDlgCtrlID(hWnd);
}

// ==== BACKFILL 0x007C86B6  ChildWindowFromPointEx  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND ChildWindowFromPointEx(HWND hwnd, POINT pt, UINT flags)  // G42.33 b3 head truth 0x7c86b6
{
  return __imp_ChildWindowFromPointEx(hwnd, pt, flags);
}

// ==== BACKFILL 0x007C86BC  GetWindowRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetWindowRect(HWND hWnd, LPRECT lpRect)  // G42.33 b3 head truth 0x7c86bc
{
  return __imp_GetWindowRect(hWnd, lpRect);
}

// ==== BACKFILL 0x007C86C2  GetCursorPos  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetCursorPos(LPPOINT lpPoint)  // G42.33 b3 head truth 0x7c86c2
{
  return __imp_GetCursorPos(lpPoint);
}

// ==== BACKFILL 0x007C86C8  GetKeyState  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
SHORT GetKeyState(int nVirtKey)  // G42.33 b3 head truth 0x7c86c8
{
  return __imp_GetKeyState(nVirtKey);
}

// ==== BACKFILL 0x007C86CE  GetAsyncKeyState  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
SHORT GetAsyncKeyState(int vKey)  // G42.33 b3 head truth 0x7c86ce
{
  return __imp_GetAsyncKeyState(vKey);
}

// ==== BACKFILL 0x007C86D4  ToAscii  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ToAscii(UINT uVirtKey, UINT uScanCode, const BYTE* lpKeyState, LPWORD lpChar, UINT uFlags)  // G42.33 b3 head truth 0x7c86d4
{
  return __imp_ToAscii(uVirtKey, uScanCode, lpKeyState, lpChar, uFlags);
}

// ==== BACKFILL 0x007C86DA  MapVirtualKeyA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
UINT MapVirtualKeyA(UINT uCode, UINT uMapType)  // G42.33 b3 head truth 0x7c86da
{
  return __imp_MapVirtualKeyA(uCode, uMapType);
}

// ==== BACKFILL 0x007C86E0  GetSystemMetrics  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetSystemMetrics(int nIndex)  // G42.33 b3 head truth 0x7c86e0
{
  return __imp_GetSystemMetrics(nIndex);
}

// ==== BACKFILL 0x007C86E6  MoveWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL MoveWindow(HWND hWnd, int X, int Y, int nWidth, int nHeight, BOOL bRepaint)  // G42.33 b3 head truth 0x7c86e6
{
  return __imp_MoveWindow(hWnd, X, Y, nWidth, nHeight, bRepaint);
}

// ==== BACKFILL 0x007C86EC  AdjustWindowRectEx  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL AdjustWindowRectEx(LPRECT lpRect, DWORD dwStyle, BOOL bMenu, DWORD dwExStyle)  // G42.33 b3 head truth 0x7c86ec
{
  return __imp_AdjustWindowRectEx(lpRect, dwStyle, bMenu, dwExStyle);
}

// ==== BACKFILL 0x007C86F2  GetMenu  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HMENU GetMenu(HWND hWnd)  // G42.33 b3 head truth 0x7c86f2
{
  return __imp_GetMenu(hWnd);
}

// ==== BACKFILL 0x007C86F8  AdjustWindowRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL AdjustWindowRect(LPRECT lpRect, DWORD dwStyle, BOOL bMenu)  // G42.33 b3 head truth 0x7c86f8
{
  return __imp_AdjustWindowRect(lpRect, dwStyle, bMenu);
}

// ==== BACKFILL 0x007C86FE  GetSysColor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD GetSysColor(int nIndex)  // G42.33 b3 head truth 0x7c86fe
{
  return __imp_GetSysColor(nIndex);
}

// ==== BACKFILL 0x007C8704  CreateDialogParamA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND CreateDialogParamA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)  // G42.33 b3 head truth 0x7c8704
{
  return __imp_CreateDialogParamA(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
}

// ==== BACKFILL 0x007C870A  EndPaint  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL EndPaint(HWND hWnd, const PAINTSTRUCT* lpPaint)  // G42.33 b3 head truth 0x7c870a
{
  return __imp_EndPaint(hWnd, lpPaint);
}

// ==== BACKFILL 0x007C8710  BeginPaint  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HDC BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)  // G42.33 b3 head truth 0x7c8710
{
  return __imp_BeginPaint(hWnd, lpPaint);
}

// ==== BACKFILL 0x007C8716  CharToOemBuffA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL CharToOemBuffA(LPCSTR lpszSrc, LPSTR lpszDst, DWORD cchDstLength)  // G42.33 b3 head truth 0x7c8716
{
  return __imp_CharToOemBuffA(lpszSrc, lpszDst, cchDstLength);
}

// ==== BACKFILL 0x007C871C  TranslateAcceleratorA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TranslateAcceleratorA(HWND hWnd, HACCEL hAccTable, LPMSG lpMsg)  // G42.33 b3 head truth 0x7c871c
{
  return __imp_TranslateAcceleratorA(hWnd, hAccTable, lpMsg);
}

// ==== BACKFILL 0x007C8722  IsDialogMessageA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL IsDialogMessageA(HWND hDlg, LPMSG lpMsg)  // G42.33 b3 head truth 0x7c8722
{
  return __imp_IsDialogMessageA(hDlg, lpMsg);
}

// ==== BACKFILL 0x007C8728  GetWindowTextA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetWindowTextA(HWND hWnd, LPSTR lpString, int nMaxCount)  // G42.33 b3 head truth 0x7c8728
{
  return __imp_GetWindowTextA(hWnd, lpString, nMaxCount);
}

// ==== BACKFILL 0x007C872E  IsWindowEnabled  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL IsWindowEnabled(HWND hWnd)  // G42.33 b3 head truth 0x7c872e
{
  return __imp_IsWindowEnabled(hWnd);
}

// ==== BACKFILL 0x007C8734  GetNextDlgTabItem  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND GetNextDlgTabItem(HWND hDlg, HWND hCtl, BOOL bPrevious)  // G42.33 b3 head truth 0x7c8734
{
  return __imp_GetNextDlgTabItem(hDlg, hCtl, bPrevious);
}

// ==== BACKFILL 0x007C873A  GetParent  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND GetParent(HWND hWnd)  // G42.33 b3 head truth 0x7c873a
{
  return __imp_GetParent(hWnd);
}

// ==== BACKFILL 0x007C8740  GetClassNameA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetClassNameA(HWND hWnd, LPSTR lpClassName, int nMaxCount)  // G42.33 b3 head truth 0x7c8740
{
  return __imp_GetClassNameA(hWnd, lpClassName, nMaxCount);
}

// ==== BACKFILL 0x007C8746  EnumChildWindows  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL EnumChildWindows(HWND hWndParent, WNDENUMPROC lpEnumFunc, LPARAM lParam)  // G42.33 b3 head truth 0x7c8746
{
  return __imp_EnumChildWindows(hWndParent, lpEnumFunc, lParam);
}

// ==== BACKFILL 0x007C874C  IsWindowVisible  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL IsWindowVisible(HWND hWnd)  // G42.33 b3 head truth 0x7c874c
{
  return __imp_IsWindowVisible(hWnd);
}

// ==== BACKFILL 0x007C8752  SetForegroundWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetForegroundWindow(HWND hWnd)  // G42.33 b3 head truth 0x7c8752
{
  return __imp_SetForegroundWindow(hWnd);
}

// ==== BACKFILL 0x007C8758  RegisterClassA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
ATOM RegisterClassA(const WNDCLASSA* lpWndClass)  // G42.33 b3 head truth 0x7c8758
{
  return __imp_RegisterClassA(lpWndClass);
}

// ==== BACKFILL 0x007C875E  CreateWindowExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND CreateWindowExA(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam)  // G42.33 b3 head truth 0x7c875e
{
  return __imp_CreateWindowExA(
           dwExStyle,
           lpClassName,
           lpWindowName,
           dwStyle,
           X,
           Y,
           nWidth,
           nHeight,
           hWndParent,
           hMenu,
           hInstance,
           lpParam);
}

// ==== BACKFILL 0x007C8764  CallWindowProcA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT CallWindowProcA(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)  // G42.33 b3 head truth 0x7c8764
{
  return __imp_CallWindowProcA(lpPrevWndFunc, hWnd, Msg, wParam, lParam);
}

// ==== BACKFILL 0x007C876A  BringWindowToTop  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL BringWindowToTop(HWND hWnd)  // G42.33 b3 head truth 0x7c876a
{
  return __imp_BringWindowToTop(hWnd);
}

// ==== BACKFILL 0x007C8770  GetWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND GetWindow(HWND hWnd, UINT uCmd)  // G42.33 b3 head truth 0x7c8770
{
  return __imp_GetWindow(hWnd, uCmd);
}

// ==== BACKFILL 0x007C8776  IntersectRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL IntersectRect(LPRECT lprcDst, const RECT* lprcSrc1, const RECT* lprcSrc2)  // G42.33 b3 head truth 0x7c8776
{
  return __imp_IntersectRect(lprcDst, lprcSrc1, lprcSrc2);
}

// ==== BACKFILL 0x007C877C  WindowFromPoint  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND WindowFromPoint(POINT Point)  // G42.33 b3 head truth 0x7c877c
{
  return __imp_WindowFromPoint(Point);
}

// ==== BACKFILL 0x007C8782  GetUpdateRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetUpdateRect(HWND hWnd, LPRECT lpRect, BOOL bErase)  // G42.33 b3 head truth 0x7c8782
{
  return __imp_GetUpdateRect(hWnd, lpRect, bErase);
}

// ==== BACKFILL 0x007C878E  LockWindowUpdate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL LockWindowUpdate(HWND hWndLock)  // G42.33 b3 head truth 0x7c878e
{
  return __imp_LockWindowUpdate(hWndLock);
}

// ==== BACKFILL 0x007C8794  ScreenToClient  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ScreenToClient(HWND hWnd, LPPOINT lpPoint)  // G42.33 b3 head truth 0x7c8794
{
  return __imp_ScreenToClient(hWnd, lpPoint);
}

// ==== BACKFILL 0x007C879A  GetKeyNameTextA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetKeyNameTextA(LONG lParam, LPSTR lpString, int cchSize)  // G42.33 b3 head truth 0x7c879a
{
  return __imp_GetKeyNameTextA(lParam, lpString, cchSize);
}

// ==== BACKFILL 0x007C87A0  CreateDialogIndirectParamA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND CreateDialogIndirectParamA(HINSTANCE hInstance, LPCDLGTEMPLATEA lpTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)  // G42.33 b3 head truth 0x7c87a0
{
  return __imp_CreateDialogIndirectParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, dwInitParam);
}

// ==== BACKFILL 0x007C87A6  SetCursorPos  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetCursorPos(int X, int Y)  // G42.33 b3 head truth 0x7c87a6
{
  return __imp_SetCursorPos(X, Y);
}

// ==== BACKFILL 0x007C87AC  FindWindowA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName)  // G42.33 b3 head truth 0x7c87ac
{
  return __imp_FindWindowA(lpClassName, lpWindowName);
}

// ==== BACKFILL 0x007C87B2  PostQuitMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void PostQuitMessage(int nExitCode)  // G42.33 b3 head truth 0x7c87b2
{
  __imp_PostQuitMessage(nExitCode); /*0x7c87b2*/
}

// ==== BACKFILL 0x007C87B8  SetCursor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HCURSOR SetCursor(HCURSOR hCursor)  // G42.33 b3 head truth 0x7c87b8
{
  return __imp_SetCursor(hCursor);
}

// ==== BACKFILL 0x007C87BE  LoadCursorA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HCURSOR LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName)  // G42.33 b3 head truth 0x7c87be
{
  return __imp_LoadCursorA(hInstance, lpCursorName);
}

// ==== BACKFILL 0x007C87C4  ChildWindowFromPoint  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND ChildWindowFromPoint(HWND hWndParent, POINT Point)  // G42.33 b3 head truth 0x7c87c4
{
  return __imp_ChildWindowFromPoint(hWndParent, Point);
}

// ==== BACKFILL 0x007C87CA  WinHelpA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL WinHelpA(HWND hWndMain, LPCSTR lpszHelp, UINT uCommand, ULONG_PTR dwData)  // G42.33 b3 head truth 0x7c87ca
{
  return __imp_WinHelpA(hWndMain, lpszHelp, uCommand, dwData);
}

// ==== BACKFILL 0x007C87D6  RedrawWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL RedrawWindow(HWND hWnd, const RECT* lprcUpdate, HRGN hrgnUpdate, UINT flags)  // G42.33 b3 head truth 0x7c87d6
{
  return __imp_RedrawWindow(hWnd, lprcUpdate, hrgnUpdate, flags);
}

// ==== BACKFILL 0x007C87DC  SetActiveWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND SetActiveWindow(HWND hWnd)  // G42.33 b3 head truth 0x7c87dc
{
  return __imp_SetActiveWindow(hWnd);
}

// ==== BACKFILL 0x007C87E2  RegisterHotKey  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL RegisterHotKey(HWND hWnd, int id, UINT fsModifiers, UINT vk)  // G42.33 b3 head truth 0x7c87e2
{
  return __imp_RegisterHotKey(hWnd, id, fsModifiers, vk);
}

// ==== BACKFILL 0x007C87E8  LoadIconA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HICON LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName)  // G42.33 b3 head truth 0x7c87e8
{
  return __imp_LoadIconA(hInstance, lpIconName);
}

// ==== BACKFILL 0x007C87F4  GetTopWindow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND GetTopWindow(HWND hWnd)  // G42.33 b3 head truth 0x7c87f4
{
  return __imp_GetTopWindow(hWnd);
}

// ==== BACKFILL 0x007C87FA  WaitForInputIdle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD WaitForInputIdle(HANDLE hProcess, DWORD dwMilliseconds)  // G42.33 b3 head truth 0x7c87fa
{
  return __imp_WaitForInputIdle(hProcess, dwMilliseconds);
}

// ==== BACKFILL 0x007C8800  CheckDlgButton  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL CheckDlgButton(HWND hDlg, int nIDButton, UINT uCheck)  // G42.33 b3 head truth 0x7c8800
{
  return __imp_CheckDlgButton(hDlg, nIDButton, uCheck);
}

// ==== BACKFILL 0x007C8806  IsDlgButtonChecked  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
UINT IsDlgButtonChecked(HWND hDlg, int nIDButton)  // G42.33 b3 head truth 0x7c8806
{
  return __imp_IsDlgButtonChecked(hDlg, nIDButton);
}

// ==== BACKFILL 0x007C880C  CreateDIBSection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HBITMAP CreateDIBSection(HDC hdc, const BITMAPINFO* pbmi, UINT usage, void** ppvBits, HANDLE hSection, DWORD offset)  // G42.33 b3 head truth 0x7c880c
{
  return __imp_CreateDIBSection(hdc, pbmi, usage, ppvBits, hSection, offset);
}

// ==== BACKFILL 0x007C8812  DeleteObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL DeleteObject(HGDIOBJ ho)  // G42.33 b3 head truth 0x7c8812
{
  return __imp_DeleteObject(ho);
}

// ==== BACKFILL 0x007C8818  GetTextMetricsA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL GetTextMetricsA(HDC hdc, LPTEXTMETRICA lptm)  // G42.33 b3 head truth 0x7c8818
{
  return __imp_GetTextMetricsA(hdc, lptm);
}

// ==== BACKFILL 0x007C881E  SelectObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HGDIOBJ SelectObject(HDC hdc, HGDIOBJ h)  // G42.33 b3 head truth 0x7c881e
{
  return __imp_SelectObject(hdc, h);
}

// ==== BACKFILL 0x007C8824  CreateFontIndirectA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HFONT CreateFontIndirectA(const LOGFONTA* lplf)  // G42.33 b3 head truth 0x7c8824
{
  return __imp_CreateFontIndirectA(lplf);
}

// ==== BACKFILL 0x007C882A  GetDeviceCaps  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetDeviceCaps(HDC hdc, int index)  // G42.33 b3 head truth 0x7c882a
{
  return __imp_GetDeviceCaps(hdc, index);
}

// ==== BACKFILL 0x007C8830  TextOutA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c)  // G42.33 b3 head truth 0x7c8830
{
  return __imp_TextOutA(hdc, x, y, lpString, c);
}

// ==== BACKFILL 0x007C8836  SetTextColor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
COLORREF SetTextColor(HDC hdc, COLORREF color)  // G42.33 b3 head truth 0x7c8836
{
  return __imp_SetTextColor(hdc, color);
}

// ==== BACKFILL 0x007C883C  SetBkColor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
COLORREF SetBkColor(HDC hdc, COLORREF color)  // G42.33 b3 head truth 0x7c883c
{
  return __imp_SetBkColor(hdc, color);
}

// ==== BACKFILL 0x007C8842  SetBkMode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetBkMode(HDC hdc, int mode)  // G42.33 b3 head truth 0x7c8842
{
  return __imp_SetBkMode(hdc, mode);
}

// ==== BACKFILL 0x007C8848  CreateSolidBrush  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HBRUSH CreateSolidBrush(COLORREF color)  // G42.33 b3 head truth 0x7c8848
{
  return __imp_CreateSolidBrush(color);
}

// ==== BACKFILL 0x007C884E  GetTextColor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
COLORREF GetTextColor(HDC hdc)  // G42.33 b3 head truth 0x7c884e
{
  return __imp_GetTextColor(hdc);
}

// ==== BACKFILL 0x007C8854  GetBkColor  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
COLORREF GetBkColor(HDC hdc)  // G42.33 b3 head truth 0x7c8854
{
  return __imp_GetBkColor(hdc);
}

// ==== BACKFILL 0x007C885A  GetBkMode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetBkMode(HDC hdc)  // G42.33 b3 head truth 0x7c885a
{
  return __imp_GetBkMode(hdc);
}

// ==== BACKFILL 0x007C8860  GetStockObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HGDIOBJ GetStockObject(int i)  // G42.33 b3 head truth 0x7c8860
{
  return __imp_GetStockObject(i);
}

// ==== BACKFILL 0x007C8866  RestoreDC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL RestoreDC(HDC hdc, int nSavedDC)  // G42.33 b3 head truth 0x7c8866
{
  return __imp_RestoreDC(hdc, nSavedDC);
}

// ==== BACKFILL 0x007C886C  DPtoLP  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL DPtoLP(HDC hdc, LPPOINT lppt, int c)  // G42.33 b3 head truth 0x7c886c
{
  return __imp_DPtoLP(hdc, lppt, c);
}

// ==== BACKFILL 0x007C8872  SetWindowOrgEx  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetWindowOrgEx(HDC hdc, int x, int y, LPPOINT lppt)  // G42.33 b3 head truth 0x7c8872
{
  return __imp_SetWindowOrgEx(hdc, x, y, lppt);
}

// ==== BACKFILL 0x007C8878  SetViewportOrgEx  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL SetViewportOrgEx(HDC hdc, int x, int y, LPPOINT lppt)  // G42.33 b3 head truth 0x7c8878
{
  return __imp_SetViewportOrgEx(hdc, x, y, lppt);
}

// ==== BACKFILL 0x007C887E  ModifyWorldTransform  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL ModifyWorldTransform(HDC hdc, const XFORM* lpxf, DWORD mode)  // G42.33 b3 head truth 0x7c887e
{
  return __imp_ModifyWorldTransform(hdc, lpxf, mode);
}

// ==== BACKFILL 0x007C8884  SetGraphicsMode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetGraphicsMode(HDC hdc, int iMode)  // G42.33 b3 head truth 0x7c8884
{
  return __imp_SetGraphicsMode(hdc, iMode);
}

// ==== BACKFILL 0x007C888A  SaveDC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SaveDC(HDC hdc)  // G42.33 b3 head truth 0x7c888a
{
  return __imp_SaveDC(hdc);
}

// ==== BACKFILL 0x007C8890  RegCloseKey  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegCloseKey(HKEY hKey)  // G42.33 b3 head truth 0x7c8890
{
  return __imp_RegCloseKey(hKey);
}

// ==== BACKFILL 0x007C8896  RegQueryValueExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegQueryValueExA(HKEY hKey, LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData)  // G42.33 b3 head truth 0x7c8896
{
  return __imp_RegQueryValueExA(hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
}

// ==== BACKFILL 0x007C889C  RegOpenKeyExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegOpenKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult)  // G42.33 b3 head truth 0x7c889c
{
  return __imp_RegOpenKeyExA(hKey, lpSubKey, ulOptions, samDesired, phkResult);
}

// ==== BACKFILL 0x007C88A2  RegDeleteValueA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegDeleteValueA(HKEY hKey, LPCSTR lpValueName)  // G42.33 b3 head truth 0x7c88a2
{
  return __imp_RegDeleteValueA(hKey, lpValueName);
}

// ==== BACKFILL 0x007C88A8  RegSetValueExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegSetValueExA(HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType, const BYTE* lpData, DWORD cbData)  // G42.33 b3 head truth 0x7c88a8
{
  return __imp_RegSetValueExA(hKey, lpValueName, Reserved, dwType, lpData, cbData);
}

// ==== BACKFILL 0x007C88AE  RegCreateKeyExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegCreateKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired, const LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition)  // G42.33 b3 head truth 0x7c88ae
{
  return __imp_RegCreateKeyExA(
           hKey,
           lpSubKey,
           Reserved,
           lpClass,
           dwOptions,
           samDesired,
           lpSecurityAttributes,
           phkResult,
           lpdwDisposition);
}

// ==== BACKFILL 0x007C88B4  RegEnumKeyExA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegEnumKeyExA(HKEY hKey, DWORD dwIndex, LPSTR lpName, LPDWORD lpcchName, LPDWORD lpReserved, LPSTR lpClass, LPDWORD lpcchClass, PFILETIME lpftLastWriteTime)  // G42.33 b3 head truth 0x7c88b4
{
  return __imp_RegEnumKeyExA(hKey, dwIndex, lpName, lpcchName, lpReserved, lpClass, lpcchClass, lpftLastWriteTime);
}

// ==== BACKFILL 0x007C88BA  RegDeleteKeyA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegDeleteKeyA(HKEY hKey, LPCSTR lpSubKey)  // G42.33 b3 head truth 0x7c88ba
{
  return __imp_RegDeleteKeyA(hKey, lpSubKey);
}

// ==== BACKFILL 0x007C88C0  RegQueryInfoKeyA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RegQueryInfoKeyA(HKEY hKey, LPSTR lpClass, LPDWORD lpcchClass, LPDWORD lpReserved, LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen, LPDWORD lpcbMaxClassLen, LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen, LPDWORD lpcbMaxValueLen, LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime)  // G42.33 b3 head truth 0x7c88c0
{
  return __imp_RegQueryInfoKeyA(
           hKey,
           lpClass,
           lpcchClass,
           lpReserved,
           lpcSubKeys,
           lpcbMaxSubKeyLen,
           lpcbMaxClassLen,
           lpcValues,
           lpcbMaxValueNameLen,
           lpcbMaxValueLen,
           lpcbSecurityDescriptor,
           lpftLastWriteTime);
}

// ==== BACKFILL 0x007C88C6  FindExecutableA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HINSTANCE FindExecutableA(LPCSTR lpFile, LPCSTR lpDirectory, LPSTR lpResult)  // G42.33 b3 head truth 0x7c88c6
{
  return __imp_FindExecutableA(lpFile, lpDirectory, lpResult);
}

// ==== BACKFILL 0x007C88CC  OleRun  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT OleRun(LPUNKNOWN pUnknown)  // G42.33 b3 head truth 0x7c88cc
{
  return __imp_OleRun(pUnknown);
}

// ==== BACKFILL 0x007C88D2  CoCreateInstance  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT CoCreateInstance(const IID* const rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, const IID* const riid, LPVOID* ppv)  // G42.33 b3 head truth 0x7c88d2
{
  return __imp_CoCreateInstance(rclsid, pUnkOuter, dwClsContext, riid, ppv);
}

// ==== BACKFILL 0x007C88D8  OleLoadFromStream  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT OleLoadFromStream(LPSTREAM pStm, const IID* const iidInterface, LPVOID* ppvObj)  // G42.33 b3 head truth 0x7c88d8
{
  return __imp_OleLoadFromStream(pStm, iidInterface, ppvObj);
}

// ==== BACKFILL 0x007C88DE  OleSaveToStream  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT OleSaveToStream(void * pPStm, LPSTREAM pStm)  // G42.33 b3 head truth 0x7c88de
{
  return __imp_OleSaveToStream(pPStm, pStm);
}

// ==== BACKFILL 0x007C88E4  CLSIDFromString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT CLSIDFromString(const wchar_t * lpsz, LPCLSID pclsid)  // G42.33 b3 head truth 0x7c88e4
{
  return __imp_CLSIDFromString(lpsz, pclsid);
}

// ==== BACKFILL 0x007C88EA  StringFromCLSID  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT StringFromCLSID(const IID* const rclsid, wchar_t ** lplpsz)  // G42.33 b3 head truth 0x7c88ea
{
  return __imp_StringFromCLSID(rclsid, lplpsz);
}

// ==== BACKFILL 0x007C88F0  CoFileTimeNow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT CoFileTimeNow(FILETIME* lpFileTime)  // G42.33 b3 head truth 0x7c88f0
{
  return __imp_CoFileTimeNow(lpFileTime);
}

// ==== BACKFILL 0x007C88F6  StgCreateDocfile  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT StgCreateDocfile(const WCHAR* pwcsName, DWORD grfMode, DWORD reserved, void** ppstgOpen)  // G42.33 b3 head truth 0x7c88f6
{
  return __imp_StgCreateDocfile((const ::WCHAR *)pwcsName, grfMode, reserved, ppstgOpen);  // G42.33 b23: gamemd::WCHAR vs ::WCHAR
}

// ==== BACKFILL 0x007C88FC  StgOpenStorage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT StgOpenStorage(const WCHAR* pwcsName, void* pstgPriority, DWORD grfMode, wchar_t ** snbExclude, DWORD reserved, void** ppstgOpen)  // G42.33 b3 head truth 0x7c88fc
{
  return __imp_StgOpenStorage((const ::WCHAR *)pwcsName, pstgPriority, grfMode, snbExclude, reserved, ppstgOpen);  // G42.33 b23
}

// ==== BACKFILL 0x007C8902  StringFromGUID2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int StringFromGUID2(const GUID* const rguid, wchar_t * lpsz, int cchMax)  // G42.33 b3 head truth 0x7c8902
{
  return __imp_StringFromGUID2(rguid, lpsz, cchMax);
}

// ==== BACKFILL 0x007C8908  CoDisconnectObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT CoDisconnectObject(LPUNKNOWN pUnk, DWORD dwReserved)  // G42.33 b3 head truth 0x7c8908
{
  return __imp_CoDisconnectObject(pUnk, dwReserved);
}

// ==== BACKFILL 0x007C890E  CoRegisterClassObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT CoRegisterClassObject(const IID* const rclsid, LPUNKNOWN pUnk, DWORD dwClsContext, DWORD flags, LPDWORD lpdwRegister)  // G42.33 b3 head truth 0x7c890e
{
  return __imp_CoRegisterClassObject(rclsid, pUnk, dwClsContext, flags, lpdwRegister);
}

// ==== BACKFILL 0x007C8914  OleInitialize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT OleInitialize(LPVOID pvReserved)  // G42.33 b3 head truth 0x7c8914
{
  return __imp_OleInitialize(pvReserved);
}

// ==== BACKFILL 0x007C8920  CoRevokeClassObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT CoRevokeClassObject(DWORD dwRegister)  // G42.33 b3 head truth 0x7c8920
{
  return __imp_CoRevokeClassObject(dwRegister);
}

// ==== BACKFILL 0x007C8926  SysAllocString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * SysAllocString(const wchar_t* psz)  // G42.33 b3 head truth 0x7c8926
{
  return __imp_SysAllocString(psz);
}

// ==== BACKFILL 0x007C892C  SysFreeString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void SysFreeString(wchar_t * bstrString)  // G42.33 b3 head truth 0x7c892c
{
  __imp_SysFreeString(bstrString); /*0x7c892c*/
}

// ==== BACKFILL 0x007C8932  LoadTypeLib  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT LoadTypeLib(const wchar_t * szFile, void** pptlib)  // G42.33 b3 head truth 0x7c8932
{
  return __imp_LoadTypeLib(szFile, pptlib);
}

// ==== BACKFILL 0x007C8938  RevokeActiveObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT RevokeActiveObject(DWORD dwRegister, void* pvReserved)  // G42.33 b3 head truth 0x7c8938
{
  return __imp_RevokeActiveObject(dwRegister, pvReserved);
}

// ==== BACKFILL 0x007C893E  RegisterActiveObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT RegisterActiveObject(IUnknown* punk, const IID* const rclsid, DWORD dwFlags, DWORD* pdwRegister)  // G42.33 b3 head truth 0x7c893e
{
  return __imp_RegisterActiveObject(punk, rclsid, dwFlags, pdwRegister);
}

// ==== BACKFILL 0x007C894A  timeEndPeriod  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int timeEndPeriod(UINT uPeriod)  // G42.33 b3 head truth 0x7c894a
{
  return __imp_timeEndPeriod(uPeriod);
}

// ==== BACKFILL 0x007C8950  timeKillEvent  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int timeKillEvent(UINT uTimerID)  // G42.33 b3 head truth 0x7c8950
{
  return __imp_timeKillEvent(uTimerID);
}

// ==== BACKFILL 0x007C8956  timeSetEvent  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int timeSetEvent(UINT uDelay, UINT uResolution, void (__stdcall *fptc)(unsigned int, unsigned int, void *, unsigned int, unsigned int), DWORD_PTR dwUser, UINT fuEvent)  // G42.33 b3 head truth 0x7c8956
{
  return __imp_timeSetEvent(uDelay, uResolution, fptc, dwUser, fuEvent);
}

// ==== BACKFILL 0x007C895C  timeBeginPeriod  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int timeBeginPeriod(UINT uPeriod)  // G42.33 b3 head truth 0x7c895c
{
  return __imp_timeBeginPeriod(uPeriod);
}

// ==== BACKFILL 0x007C896E  ntohl  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ntohl(unsigned long netlong)  // G42.33 b3 head truth 0x7c896e
{
  return __imp_ntohl(netlong);
}

// ==== BACKFILL 0x007C8986  ntoainet  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * ntoainet(unsigned long in)  // G42.33 b23: inet_ntoa returns char* (b20 return wrong)
{
  return inet_ntoa(in);
}

// ==== BACKFILL 0x007C899E  socket  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int socket(int af, int type, int protocol)  // G42.33 b3 head truth 0x7c899e
{
  return __imp_socket(af, type, protocol);
}

// ==== BACKFILL 0x007C89AA  recvfrom  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int recvfrom(unsigned int s, char* buf, int len, int flags, void* from, int* fromlen)  // G42.33 b3 head truth 0x7c89aa
{
  return __imp_recvfrom(s, buf, len, flags, from, fromlen);
}

// ==== BACKFILL 0x007C89C2  EnumProtocolsA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
INT EnumProtocolsA(LPINT lpiProtocols, LPVOID lpProtocolBuffer, LPDWORD lpdwBufferLength)  // G42.33 b3 head truth 0x7c89c2
{
  return __imp_EnumProtocolsA(lpiProtocols, lpProtocolBuffer, lpdwBufferLength);
}

// ==== BACKFILL 0x007C89D4  DirectDrawCreate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DirectDrawCreate(GUID* lpGUID, void* lplpDD, IUnknown* pUnkOuter)  // G42.33 b3 head truth 0x7c89d4
{
  return __imp_DirectDrawCreate(lpGUID, lplpDD, pUnkOuter);
}

// ==== BACKFILL 0x007C89DA  DirectSoundCreate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRESULT DirectSoundCreate(LPCGUID pcGuidDevice, void* ppDS, LPUNKNOWN pUnkOuter)  // G42.33 b3 head truth 0x7c89da
{
  return __imp_DirectSoundCreate(pcGuidDevice, ppDS, pUnkOuter);
}

// ==== BACKFILL 0x007C89EC  GetFileVersionInfoSizeA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle)  // G42.33 b3 head truth 0x7c89ec
{
  return __imp_GetFileVersionInfoSizeA(lptstrFilename, lpdwHandle);
}

// ==== BACKFILL 0x007C8A10  ImageList::DragShowNolock  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ImageList_DragShowNolock()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7C8A10)
}

// ==== BACKFILL 0x007C8A8E  ??1type_info_UAE_XZ  cls=type_info  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_7C8A8E::__1type_info_UAE_XZ()
{

  void *v2; // esi

  *(unsigned int *)this = (unsigned int)&off_7F9594; /*0x7c8a93 G42.33 b23*/
  _lock(27); /*0x7c8a99*/
  v2 = (void *)*((unsigned int *)this + 1); /*0x7c8a9e*/
  if ( v2 ) /*0x7c8aa4*/
    free(v2); /*0x7c8aa7*/
  _unlock(27); /*0x7c8aaf*/

}

// ==== BACKFILL 0x007C8AB7  ??_Gtype_info_UAEPAXI_Z  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_7C8AB7::___Gtype_info_UAEPAXI_Z(char a2)
{

  ((E4Recv_7C8A8E *)(void *)this)->__1type_info_UAE_XZ(); /*0x7c8aba G42.33 b24: member-call (0-arg member)*/
  if ( (a2 & 1) != 0 ) /*0x7c8ac4*/
    __3_YAXPAX_Z(this); /*0x7c8ac7*/
  return (ObjectClass *)(void *)this; /*0x7c8acf G42.33 b23*/

}

// ==== BACKFILL 0x007C8AD3  ??8type_info_QBEHABV0__Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_7C8AD3::__8type_info_QBEHABV0__Z(int a2)
{

  return strcmp((const char *)(a2 + 9), (const char *)(unsigned char *)this + 9) == 0; /*0x7c8aeb G42.33 b23*/

}

// ==== BACKFILL 0x007C8AEE  ??9type_info_QBEHABV0__Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_7C8AEE::__9type_info_QBEHABV0__Z(int a2)
{

  return strcmp((const char *)(a2 + 9), (const char *)(unsigned char *)this + 9) != 0; /*0x7c8b07 G42.33 b23*/

}

// ==== BACKFILL 0x007C8B0A  ?before_type_info__QBEHABV1__Z  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_7C8B0A::_before_type_info__QBEHABV1__Z(const struct type_info * a2)
{

  return strcmp((const char *)a2 + 9, (const char *)this + 9) > 0; /*0x7c8b26*/

}

// ==== BACKFILL 0x007C8B29  sub_7C8B29  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_7C8B29::sub_7C8B29()
{

  return (char *)&((unsigned int *)this)[0]; /*0x7c8b2c*/

}

// ==== BACKFILL 0x007C8B2D  sub_7C8B2D  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_7C8B2D::sub_7C8B2D(int a2)
{

  *(unsigned int *)this = (unsigned int)&off_7F9594; /*0x7c8b2f G42.33 b23: vfptr install (hpp minimal vfptr)*/
  return (unsigned int *)(void *)this; /*0x7c8b35 G42.33 b23*/

}

// ==== BACKFILL 0x007C8B38  sub_7C8B38  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_7C8B38::sub_7C8B38(int a2)
{

  return (ObjectClass *)(void *)this; /*0x7c8b3a G42.33 b23*/

}

// ==== BACKFILL 0x007C8B3D  OperatorDelete  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void RA2_OPDEL(void * Block)
{
  gamemd::free(Block); /*0x7c8b41 G42.33 b23*/
}

// ==== BACKFILL 0x007C8CEA  _swap  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * swap(char * a1, char * a2, int a3)
{
  char *result; // eax
  char *v4; // ecx
  int v5; // esi
  char v6; // dl

  result = a1; /*0x7c8cea*/
  v4 = a2; /*0x7c8cee*/
  if ( a1 != a2 && a3 ) /*0x7c8d00*/
  {
    v5 = a3; /*0x7c8d03*/
    do /*0x7c8d11*/
    {
      v6 = *result; /*0x7c8d08*/
      *result++ = *v4; /*0x7c8d0a*/
      *v4++ = v6; /*0x7c8d0d*/
      --v5; /*0x7c8d10*/
    }
    while ( v5 ); /*0x7c8d11*/
  }
  return result; /*0x7c8d14*/
}

// ==== BACKFILL 0x007C8DF0  _strrchr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * strrchr(const char * Str, int Ch)
{
  unsigned int v2; // ecx
  const char *v3; // edi
  bool v4; // zf
  char *v5; // edi

  v2 = strlen(Str) + 1; /*0x7c8dff*/
  v3 = &Str[v2 - 1]; /*0x7c8e01*/
  do /*0x7c8e06*/
  {
    if ( !v2 ) /*0x7c8e06*/
      break; /*0x7c8e06*/
    v4 = *v3-- == (uint8_t)Ch; /*0x7c8e06*/
    --v2; /*0x7c8e06*/
  }
  while ( !v4 ); /*0x7c8e06*/
  v5 = (char *)(v3 + 1); /*0x7c8e08*/
  if ( *v5 == (unsigned char)Ch ) /*0x7c8e0b*/
    return v5; /*0x7c8e11*/
  else
    return 0; /*0x7c8e0d*/
}

// ==== BACKFILL 0x007C8E17  ??2_YAPAXI_Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void * operator new(size_t Size)
{
  return (void *)gamemd::_nh_malloc(Size, 1); /*0x7c8e24 G42.33 b23*/
}

// ==== BACKFILL 0x007C8EC0  __allmul  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned long long _allmul(long long a1, long long a2)
{
  if ( IDA_HIDWORD(a1) | IDA_HIDWORD(a2) ) /*0x7c8ec8*/
    return a1 * a2; /*0x7c8eec*/
  else
    return (unsigned int)a2 * (uint64_t)(unsigned int)a1; /*0x7c8ed4*/
}

// ==== BACKFILL 0x007C8EF4  _sprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sprintf(char *const Buffer, const char *const Format, ...)  // G42.33 b23: truth (ida_cache 0x7C8EF4)
{
  int v2; // eax
  bool v3; // sf
  int v4; // esi
  _iobuf_msvc6 File; // [esp+4h] [ebp-20h] BYREF (G42.33 b23: MSVC6 layout, was FILE)
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, Format);
  File._base = Buffer; /*0x7c8efe*/
  File._ptr = Buffer; /*0x7c8f01*/
  File._flag = 66; /*0x7c8f07*/
  File._cnt = 0x7FFFFFFF; /*0x7c8f15*/
  v2 = _output((FILE *)&File, (char *)Format, (int)va); /*0x7c8f1d G42.33 b23*/
  v3 = --File._cnt < 0; /*0x7c8f25*/
  v4 = v2; /*0x7c8f28*/
  if ( v3 ) /*0x7c8f2a*/
    _flsbuf(0, (FILE *)&File); /*0x7c8f3a*/
  else
    *File._ptr = 0; /*0x7c8f2f*/
  return v4; /*0x7c8f43*/
}

// ==== BACKFILL 0x007C92D0  __alldiv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _alldiv(unsigned long long a1, long long a2)
{
  int v2; // edi
  int v3; // eax
  uint64_t v4; // rtt
  int64_t v5; // rax
  uint64_t v6; // rcx
  uint64_t v7; // rax
  unsigned int v8; // esi
  uint64_t v9; // rax

  v2 = 0; /*0x7c92d3*/
  if ( (a1 & 0x8000000000000000uLL) != 0LL ) /*0x7c92db*/
  {
    v2 = 1; /*0x7c92dd*/
    IDA_HIDWORD(a1) = -IDA_HIDWORD(a1) - ((unsigned int)a1 != 0); /*0x7c92e9*/
    IDA_LODWORD(a1) = -(int)a1; /*0x7c92ed*/
  }
  v3 = IDA_HIDWORD(a2); /*0x7c92f1*/
  if ( a2 < 0 ) /*0x7c92f7*/
  {
    ++v2; /*0x7c92f9*/
    v3 = -IDA_HIDWORD(a2) - ((unsigned int)a2 != 0); /*0x7c9302*/
    IDA_HIDWORD(a2) = v3; /*0x7c9305*/
    IDA_LODWORD(a2) = -(int)a2; /*0x7c9309*/
  }
  if ( v3 ) /*0x7c930f*/
  {
    v6 = (((v3 & 0xFFFFFFFFull)) << 32 | (a2 & 0xFFFFFFFFull)); /*0x7c932b*/
    v7 = a1; /*0x7c9333*/
    do /*0x7c9341*/
    {
      v6 >>= 1; /*0x7c9337*/
      v7 >>= 1; /*0x7c933b*/
    }
    while ( (((v6) >> 32) & 0xFFFFFFFFu) ); /*0x7c9341*/
    v8 = v7 / (unsigned int)v6; /*0x7c9345*/
    v9 = v8 * (uint64_t)(unsigned int)a2; /*0x7c9351*/
    if ( __CFADD__(IDA_HIDWORD(a2) * v8, (((v9) >> 32) & 0xFFFFFFFFu)) || (IDA_HIDWORD(v9) = (a2 * (uint64_t)v8) >> 32, v9 > a1) ) /*0x7c9363*/
      --v8; /*0x7c9365*/
    v5 = v8; /*0x7c9368*/
  }
  else
  {
    IDA_LODWORD(v4) = a1; /*0x7c9323*/
    IDA_HIDWORD(v4) = IDA_HIDWORD(a1) % (unsigned int)a2; /*0x7c9323*/
    IDA_LODWORD(v5) = v4 / (unsigned int)a2; /*0x7c9323*/
    IDA_HIDWORD(v5) = IDA_HIDWORD(a1) / (unsigned int)a2; /*0x7c9325*/
  }
  if ( v2 == 1 ) /*0x7c936b*/
    return -v5; /*0x7c9371*/
  return v5; /*0x7c9374*/
}

// ==== BACKFILL 0x007C9380  __aulldiv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int _aulldiv(unsigned long long a1, long long a2)
{
  uint64_t v3; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  uint64_t v6; // rax
  char v7; // cf
  unsigned int v8; // esi
  uint64_t v9; // rax

  if ( IDA_HIDWORD(a2) ) /*0x7c9388*/
  {
    v4 = IDA_HIDWORD(a2); /*0x7c93a2*/
    v5 = a2; /*0x7c93a4*/
    v6 = a1; /*0x7c93ac*/
    do /*0x7c93ba*/
    {
      v7 = v4 & 1; /*0x7c93b0*/
      v4 >>= 1; /*0x7c93b0*/
      v5 = (v5 >> 1) | (v7 << 31); /*0x7c93b2*/
      v6 >>= 1; /*0x7c93b4*/
    }
    while ( v4 ); /*0x7c93ba*/
    v8 = v6 / v5; /*0x7c93be*/
    v9 = v8 * (uint64_t)(unsigned int)a2; /*0x7c93ca*/
    if ( __CFADD__(IDA_HIDWORD(a2) * v8, (((v9) >> 32) & 0xFFFFFFFFu)) || (IDA_HIDWORD(v9) = (a2 * (uint64_t)v8) >> 32, v9 > a1) ) /*0x7c93dc*/
      --v8; /*0x7c93de*/
    return v8; /*0x7c93e1*/
  }
  else
  {
    IDA_LODWORD(v3) = a1; /*0x7c939c*/
    IDA_HIDWORD(v3) = IDA_HIDWORD(a1) % (unsigned int)a2; /*0x7c939c*/
    return v3 / (unsigned int)a2; /*0x7c939c*/
  }
}

// ==== BACKFILL 0x007C93E8  _free  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int free(void * Block)  // G42.33 b23: int (body returns)
{
  int result; // eax
  int v2; // eax

  if ( Block ) /*0x7c93ef*/
  {
    _lock(9); /*0x7c93f3*/
    v2 = (int)__sbh_find_block((char *)Block); /*0x7c93f9 G42.33 b24*/
    if ( v2 ) /*0x7c9402*/
    {
      __sbh_free_block((char *)v2, (int)Block); /*0x7c9406 G42.33 b18*/
      return _unlock(9); /*0x7c940d*/
    }
    else
    {
      _unlock(9); /*0x7c9419*/
      return HeapFree(hHeap, 0, Block); /*0x7c9428*/
    }
  }
  return result; /*0x7c9415*/
}

// ==== BACKFILL 0x007C9430  _malloc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void * malloc(unsigned int aP0)  // G42.33 b23: truth void* malloc(size_t)
{
  return (void *)_nh_malloc(aP0, dword_B782C4); /*0x7c9441*/
}

// ==== BACKFILL 0x007C9442  __nh_malloc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _nh_malloc(unsigned int aP0, int a2)  // G42.33 b23: truth int(size_t,int); IUnknown* drape stripped
{
  int result; // eax

  if ( aP0 > 0xFFFFFFE0 ) /*0x7c9447*/
    return 0; /*0x7c946b*/
  while ( 1 ) /*0x7c944d*/
  {
    result = (int)_heap_alloc(aP0); /*0x7c944d G42.33 b23*/
    if ( result || !a2 ) /*0x7c945b*/
      break; /*0x7c945b*/
    if ( !_callnewh(aP0) ) /*0x7c9461*/
      return 0; /*0x7c9469*/
  }
  return result; /*0x7c946d*/
}

// ==== BACKFILL 0x007C946E  __heap_alloc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _heap_alloc(unsigned int aP0)  // G42.33 b23: truth _DWORD*(size_t)
{
  int v1; // esi
  unsigned int *v2; // edi

  v1 = aP0; /*0x7c946f*/
  if ( aP0 <= dword_87C584 ) /*0x7c947a*/
  {
    _lock(9); /*0x7c947e*/
    v2 = __sbh_alloc_block(aP0); /*0x7c948b*/
    _unlock(9); /*0x7c948d*/
    if ( v2 ) /*0x7c9497*/
      return v2; /*0x7c9499*/
  }
  if ( !aP0 ) /*0x7c949f*/
    v1 = 1; /*0x7c94a3*/
  return (unsigned int *)(void *)HeapAlloc(hHeap, 0, (v1 + 15) & 0xFFFFFFF0); /*0x7c94b9 G42.33 b23*/
}

// ==== BACKFILL 0x007C94BC  Audio_Write  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t sub_7C94BC(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C94BC.json)
}

// ==== BACKFILL 0x007C95D3  Audio_Write_7C95D3  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t sub_7C95D3(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C95D3.json)
}

// ==== BACKFILL 0x007C978A  _atexit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != 0) - 1; /*0x7c979b*/
}

// ==== BACKFILL 0x007C9BFD  _atoi  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int atoi(const char * String)
{
  return atol(String); /*0x7c9c07*/
}

// ==== BACKFILL 0x007C9DBD  globalHelper_0C9DBD  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int globalHelper_0C9DBD(int a1, int a2, int a3)  // G42.33 b23: truth sub_7C9DBD(int,int,int) (strtol form)
{
  return strtoxl((unsigned char *)a1, (unsigned char **)(unsigned int)a2, a3, 0); /*0x7c9dd3 G42.33 b23*/
}

// ==== BACKFILL 0x007C9FD9  _strtoul  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int strtoul(const char * String, char ** EndPtr, int Radix)
{
  return strtoxl((uint8_t *)String, (uint8_t **)EndPtr, Radix, 1); /*0x7c9fef*/
}

// ==== BACKFILL 0x007C9FF0  __makepath  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _makepath(char * Buffer, const char * Drive, const char * Dir, const char * FName, const char * Ext)  // G42.33 b23: truth int (ida_cache 0x7C9FF0, body returns)
{
  char *v5; // esi
  const char *v6; // ecx
  char v7; // al
  uint8_t v8; // al
  const char *v9; // ecx
  char v10; // al
  int result; // eax
  char v12; // cl

  if ( Drive && *Drive ) /*0x7c9ffb*/
  {
    *Buffer = *Drive; /*0x7ca004*/
    Buffer[1] = 58; /*0x7ca007*/
    v5 = Buffer + 2; /*0x7ca00a*/
  }
  else
  {
    v5 = Buffer; /*0x7ca00d*/
  }
  v6 = Dir; /*0x7ca015*/
  if ( Dir ) /*0x7ca017*/
  {
    v7 = *Dir; /*0x7ca019*/
    if ( *Dir ) /*0x7ca019*/
    {
      do /*0x7ca028*/
      {
        *v5 = v7; /*0x7ca01f*/
        v7 = v6[1]; /*0x7ca021*/
        ++v5; /*0x7ca024*/
        ++v6; /*0x7ca025*/
      }
      while ( v7 ); /*0x7ca028*/
      v8 = *_mbsdec((const uint8_t *)Dir, (const uint8_t *)v6); /*0x7ca031*/
      if ( v8 != 47 && v8 != 92 ) /*0x7ca03b*/
        *v5++ = 92; /*0x7ca03d*/
    }
  }
  v9 = FName; /*0x7ca046*/
  if ( FName ) /*0x7ca048*/
  {
    v10 = *FName; /*0x7ca04a*/
    while ( v10 ) /*0x7ca04e*/
    {
      *v5 = v10; /*0x7ca050*/
      v10 = v9[1]; /*0x7ca052*/
      ++v5; /*0x7ca055*/
      ++v9; /*0x7ca056*/
    }
  }
  result = (int)Ext; /*0x7ca059*/
  if ( Ext ) /*0x7ca05e*/
  {
    if ( *Ext && *Ext != 46 ) /*0x7ca069*/
      *v5++ = 46; /*0x7ca06b*/
    do /*0x7ca077*/
    {
      v12 = *(unsigned char *)result; /*0x7ca06f*/
      *v5++ = *(unsigned char *)result++; /*0x7ca071*/
    }
    while ( v12 ); /*0x7ca077*/
  }
  else
  {
    *v5 = 0; /*0x7ca07b*/
  }
  return result; /*0x7ca07e*/
}

// ==== BACKFILL 0x007CA3C5  _wcsrchr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcsrchr(const wchar_t * Str, wchar_t Ch)
{
  const wchar_t *v2; // eax
  wchar_t i; // si
  const wchar_t *j; // eax

  v2 = Str; /*0x7ca3c5*/
  for ( i = *Str; ; i = *v2 ) /*0x7ca3ce*/
  {
    ++v2; /*0x7ca3d2*/
    if ( !i ) /*0x7ca3d7*/
      break; /*0x7ca3d7*/
  }
  for ( j = v2 - 1; j != Str; --j ) /*0x7ca3e7*/
  {
    if ( *j == Ch ) /*0x7ca3ec*/
      break; /*0x7ca3ec*/
  }
  return Ch == *j ? (wchar_t *)j : 0;
}

// ==== BACKFILL 0x007CA405  _wcslen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t wcslen(const wchar_t * String)
{
  const wchar_t *v1; // eax

  v1 = String + 1; /*0x7ca40d*/
  if ( *String ) /*0x7ca409*/
  {
    while ( *v1++ ) /*0x7ca41a*/
      ; /*0x7ca412*/
  }
  return v1 - String - 1; /*0x7ca421*/
}

// ==== BACKFILL 0x007CA422  _wcsncpy  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcsncpy(wchar_t * Destination, const wchar_t * Source, size_t MaxCount)
{
  size_t v3; // ecx
  wchar_t *v4; // edi
  wchar_t v6; // ax
  size_t v7; // ecx
  char v8; // cf
  size_t v9; // ecx
  wchar_t *v10; // edi
  int i; // ecx

  v3 = MaxCount; /*0x7ca422*/
  v4 = Destination; /*0x7ca428*/
  if ( MaxCount ) /*0x7ca430*/
  {
    do /*0x7ca446*/
    {
      v6 = *Source; /*0x7ca436*/
      *v4++ = *Source++; /*0x7ca439*/
      if ( !v6 ) /*0x7ca443*/
        break; /*0x7ca443*/
      --v3; /*0x7ca445*/
    }
    while ( v3 ); /*0x7ca446*/
    if ( v3 ) /*0x7ca44a*/
    {
      v7 = v3 - 1; /*0x7ca44c*/
      if ( v7 ) /*0x7ca44d*/
      {
        v8 = v7 & 1; /*0x7ca451*/
        v9 = v7 >> 1; /*0x7ca451*/
        memset(v4, 0, 4 * v9); /*0x7ca453*/
        v10 = &v4[2 * v9]; /*0x7ca453*/
        for ( i = v8; i; --i ) /*0x7ca455*/
          *v10++ = 0; /*0x7ca457*/
      }
    }
  }
  return Destination; /*0x7ca45c*/
}

// ==== BACKFILL 0x007CA45F  _wcscat  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcscat(wchar_t * Destination, const wchar_t * Source)
{
  wchar_t *result; // eax
  wchar_t *i; // ecx
  wchar_t v5; // si

  result = Destination; /*0x7ca45f*/
  for ( i = Destination; *i; ++i ) /*0x7ca465*/
    ; /*0x7ca46c*/
  do /*0x7ca485*/
  {
    v5 = *Source; /*0x7ca478*/
    *i++ = *Source++; /*0x7ca47b*/
  }
  while ( v5 ); /*0x7ca485*/
  return result; /*0x7ca488*/
}

// ==== BACKFILL 0x007CA489  _wcscpy  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcscpy(wchar_t * Destination, const wchar_t * Source)
{
  const wchar_t *v2; // ecx
  wchar_t *result; // eax
  wchar_t v4; // dx
  wchar_t *v5; // esi

  v2 = Source; /*0x7ca489*/
  result = Destination; /*0x7ca48d*/
  v4 = *Source; /*0x7ca492*/
  v5 = Destination + 1; /*0x7ca495*/
  *Destination = *Source; /*0x7ca498*/
  while ( 1 ) /*0x7ca49c*/
  {
    ++v2; /*0x7ca49c*/
    if ( !v4 ) /*0x7ca4a0*/
      break; /*0x7ca4a0*/
    v4 = *v2; /*0x7ca4a2*/
    *v5++ = *v2; /*0x7ca4a5*/
  }
  return result; /*0x7ca4ac*/
}

// ==== BACKFILL 0x007CA530  _sscanf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sscanf(const char *const Buffer, const char *const Format, ...)
{
  _iobuf_msvc6 Stream; // [esp+0h] [ebp-20h] BYREF (G42.33 b23: MSVC6 layout, was FILE)
  va_list va; // [esp+30h] [ebp+10h] BYREF

  va_start(va, Format);
  Stream._flag = 73; /*0x7ca539*/
  Stream._base = (char *)Buffer; /*0x7ca541*/
  Stream._ptr = (char *)Buffer; /*0x7ca544*/
  Stream._cnt = strlen(Buffer); /*0x7ca54c*/
  return _input((FILE *)&Stream, (int)Format, (int)va); /*0x7ca562 G42.33 b23*/
}

// ==== BACKFILL 0x007CA564  _swprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int swprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)  // G42.33 b23: truth (ida_cache 0x7CA564)
{
  int v3; // eax
  bool v4; // sf
  int v5; // esi
  _iobuf_msvc6 File; // [esp+4h] [ebp-20h] BYREF (G42.33 b23: MSVC6 layout, was FILE)

  File._base = (char *)Buffer; /*0x7ca56e*/
  File._ptr = (char *)Buffer; /*0x7ca571*/
  File._flag = 66; /*0x7ca577*/
  File._cnt = 0x7FFFFFFF; /*0x7ca585*/
  v3 = _woutput((FILE *)&File, BufferCount, (int)&Format); /*0x7ca58d G42.33 b23*/
  v4 = --File._cnt < 0; /*0x7ca595*/
  v5 = v3; /*0x7ca598*/
  if ( v4 ) /*0x7ca59a*/
    _flsbuf(0, (FILE *)&File); /*0x7ca5ad*/
  else
    *File._ptr++ = 0; /*0x7ca59f*/
  if ( --File._cnt < 0 ) /*0x7ca5b7*/
    _flsbuf(0, (FILE *)&File); /*0x7ca5c7*/
  else
    *File._ptr = 0; /*0x7ca5bc*/
  return v5; /*0x7ca5d0*/
}

// ==== BACKFILL 0x007CA5D3  _wcscmp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int wcscmp(const wchar_t * String1, const wchar_t * String2)
{
  const wchar_t *v3; // esi
  wchar_t i; // cx
  int result; // eax

  v3 = String2; /*0x7ca5d8*/
  for ( i = *String2; ; i = *v3 ) /*0x7ca5dd*/
  {
    result = *String1 - i; /*0x7ca5e6*/
    if ( result || !i ) /*0x7ca5ed*/
      break; /*0x7ca5ed*/
    ++String1; /*0x7ca5f0*/
    ++v3; /*0x7ca5f2*/
  }
  if ( result < 0 ) /*0x7ca5fc*/
    return -1; /*0x7ca5fe*/
  if ( result > 0 ) /*0x7ca602*/
    return 1; /*0x7ca606*/
  return result; /*0x7ca5f8*/
}

// ==== BACKFILL 0x007CA610  _strncmp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int strncmp(const char * Str1, const char * Str2, size_t MaxCount)
{
  size_t v3; // ecx
  const char *v4; // edi
  bool v5; // zf
  size_t v6; // ecx
  const char *v7; // edi
  uint8_t v9; // al

  v3 = MaxCount; /*0x7ca616*/
  if ( MaxCount ) /*0x7ca619*/
  {
    v4 = Str1; /*0x7ca61d*/
    do /*0x7ca624*/
    {
      if ( !v3 ) /*0x7ca624*/
        break; /*0x7ca624*/
      v5 = *v4++ == 0; /*0x7ca624*/
      --v3; /*0x7ca624*/
    }
    while ( !v5 ); /*0x7ca624*/
    v6 = MaxCount - v3; /*0x7ca628*/
    v7 = Str1; /*0x7ca62a*/
    do /*0x7ca62f*/
    {
      if ( !v6 ) /*0x7ca62f*/
        break; /*0x7ca62f*/
      v5 = *Str2++ == *v7++; /*0x7ca62f*/
      --v6; /*0x7ca62f*/
    }
    while ( v5 ); /*0x7ca62f*/
    v9 = *(Str2 - 1); /*0x7ca631*/
    v3 = 0; /*0x7ca634*/
    if ( v9 > (unsigned int)*(v7 - 1) ) /*0x7ca639*/
      return ~v3; /*0x7ca639*/
    if ( v9 != *(v7 - 1) ) /*0x7ca63b*/
    {
      v3 = -2; /*0x7ca63e*/
      return ~v3; /*0x7ca63f*/
    }
  }
  return v3; /*0x7ca643*/
}

// ==== BACKFILL 0x007CA75B  _fclose  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int fclose(FILE * aP0)  // G42.33 b23: CRT truth (FILE*)
{
  int v1; // edi

  v1 = -1; /*0x7ca761*/
  if ( (((_iobuf_msvc6 *)aP0)->_flag & 0x40) != 0 ) /*0x7ca768 G42.33 b23*/
  {
    ((_iobuf_msvc6 *)aP0)->_flag = 0; /*0x7ca76a G42.33 b23*/
  }
  else
  {
    gamemd::_lock_file(aP0); /*0x7ca771*/
    v1 = _fclose_lk((int)aP0); /*0x7ca77d G42.33 b23: _fclose_lk truth int*/
    gamemd::_unlock_file(aP0); /*0x7ca77f*/
  }
  return v1; /*0x7ca789*/
}

// ==== BACKFILL 0x007CA78C  __fclose_lk  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _fclose_lk(int aP0)  // G42.33 b23: truth (ida_cache 0x7CA78C int a1)
{
  int v1; // edi

  v1 = -1; /*0x7ca792*/
  if ( (*(unsigned char *)(aP0 + 12) & 0x83) != 0 ) /*0x7ca799*/
  {
    v1 = _flush((unsigned int *)aP0); /*0x7ca7a2 G42.33 b24*/
    _freebuf((FILE *)aP0); /*0x7ca7a4 G42.33 b23*/
    if ( _close(*(unsigned int *)(aP0 + 16)) >= 0 ) /*0x7ca7b6*/
    {
      if ( *(unsigned int *)(aP0 + 28) ) /*0x7ca7bd*/
      {
        free(*(void **)(aP0 + 28)); /*0x7ca7c5*/
        *(unsigned int *)(aP0 + 28) = 0; /*0x7ca7ca*/
      }
    }
    else
    {
      v1 = -1; /*0x7ca7b8*/
    }
  }
  *(unsigned int *)(aP0 + 12) = 0; /*0x7ca7cf*/
  return v1; /*0x7ca7d5*/
}

// ==== BACKFILL 0x007CA7D8  _fprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int fprintf(FILE *const Stream, const char *const Format, ...)  // G42.33 b23: truth (ida_cache 0x7CA7D8)
{
  int v2; // edi
  int v3; // ebx
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, Format);
  gamemd::_lock_file(Stream); /*0x7ca7e0*/
  v2 = _stbuf(Stream); /*0x7ca7eb*/
  v3 = _output(Stream, (char *)Format, (int)va); /*0x7ca7fe G42.33 b23*/
  _ftbuf(v2, Stream); /*0x7ca800*/
  gamemd::_unlock_file(Stream); /*0x7ca806*/
  return v3; /*0x7ca810*/
}

// ==== BACKFILL 0x007CA814  __fsopen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
FILE * _fsopen(const char * FileName, const char * Mode, int ShFlag)
{
  FILE *result; // eax
  FILE *v4; // esi
  FILE *v5; // edi

  result = (FILE *)_getstream(); /*0x7ca815*/
  v4 = result; /*0x7ca81a*/
  if ( result ) /*0x7ca81e*/
  {
    v5 = (FILE *)_openfile((char *)FileName, (int)Mode, ShFlag, (int)result); /*0x7ca836*/
    gamemd::_unlock_file(v4); /*0x7ca838*/
    return v5; /*0x7ca840*/
  }
  return result; /*0x7ca820*/
}

// ==== BACKFILL 0x007CA845  _fopen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
FILE * fopen(const char * FileName, const char * Mode)
{
  return _fsopen(FileName, Mode, 64); /*0x7ca857*/
}

// ==== BACKFILL 0x007CA858  _vswprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int vswprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)  // G42.33 b23: truth (ida_cache 0x7CA858)
{
  int v4; // eax
  bool v5; // sf
  int v6; // esi
  _iobuf_msvc6 File; // [esp+4h] [ebp-20h] BYREF (G42.33 b23: MSVC6 layout, was FILE)

  File._base = (char *)Buffer; /*0x7ca865*/
  File._ptr = (char *)Buffer; /*0x7ca868*/
  File._flag = 66; /*0x7ca871*/
  File._cnt = 0x7FFFFFFF; /*0x7ca878*/
  v4 = _woutput((FILE *)&File, BufferCount, (int)Format); /*0x7ca880 G42.33 b23: truth args*/
  v5 = --File._cnt < 0; /*0x7ca888*/
  v6 = v4; /*0x7ca88b*/
  if ( v5 ) /*0x7ca88d*/
    _flsbuf(0, (FILE *)&File); /*0x7ca8a0*/
  else
    *File._ptr++ = 0; /*0x7ca892*/
  if ( --File._cnt < 0 ) /*0x7ca8aa*/
    _flsbuf(0, (FILE *)&File); /*0x7ca8ba*/
  else
    *File._ptr = 0; /*0x7ca8af*/
  return v6; /*0x7ca8c3*/
}

// ==== BACKFILL 0x007CA8C6  _wcschr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcschr(wchar_t * Str, int Ch)
{
  while ( *Str && *Str != Ch ) /*0x7ca8d7*/
    ++Str; /*0x7ca8da*/
  return Ch == *Str ? (wchar_t *)Str : 0;
}

// ==== BACKFILL 0x007CA971  ??0__non_rtti_object_QAE_PBD_Z  cls=__non_rtti_object  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_7CA971::__0__non_rtti_object_QAE_PBD_Z(char * a2)  // G42.33 b24: void* (R9 hpp sync; type name undeclared)
{

  __0exception_QAE_ABQBD_Z(this, (const char *const *)&a2); /*0x7ca981*/
  *(unsigned int *)this = (unsigned int)&vt___non_rtti_object; /*0x7ca986 G42.33 b24*/
  return this; /*0x7ca98e*/

}

// ==== BACKFILL 0x007CA993  sub_7CA993  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * ObjectClass::sub_7CA993(void * Block, char a2)
{

  ((ObjectClass *)(void *)Block)->j_Exception_Destructor(); /*0x7ca996 G42.33 b24: member-call*/
  if ( (a2 & 1) != 0 ) /*0x7ca9a0*/
    __3_YAXPAX_Z(Block); /*0x7ca9a3*/
  return (ObjectClass *)Block; /*0x7ca9ab G42.33 b24*/

}

// ==== BACKFILL 0x007CA9B4  sub_7CA9B4  cls=__non_rtti_object  sig=csp  renamed_refs=0  residual=- ====
exception * E4Recv_7CA9B4::sub_7CA9B4(struct exception * a2)
{

  __0exception_QAE_ABV0__Z(this, a2); /*0x7ca9bb*/
  *(unsigned int *)this = (unsigned int)&vt___non_rtti_object; /*0x7ca9c0 G42.33 b24*/
  return (struct exception *)(void *)this; /*0x7ca9c8 G42.33 b24*/

}

// ==== BACKFILL 0x007CA9CC  sub_7CA9CC  cls=bad_typeid  sig=csp  renamed_refs=0  residual=- ====
exception * E4Recv_7CA9CC::sub_7CA9CC(struct exception * a1)
{

  __0exception_QAE_ABV0__Z((exception *)this, a1); /*0x7ca9d3*/
  *(unsigned int *)this = (unsigned int)&vt_bad_typeid; /*0x7ca9d8 G42.33 b24: vfptr install (hpp minimal vfptr)*/
  return (exception *)this; /*0x7ca9e0*/

}

// ==== BACKFILL 0x007CA9E4  sub_7CA9E4  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * ObjectClass::sub_7CA9E4(void * Block, char a2)
{

  ((ObjectClass *)(void *)Block)->j_Exception_Destructor_2(); /*0x7ca9e7 G42.33 b24: member-call*/
  if ( (a2 & 1) != 0 ) /*0x7ca9f1*/
    __3_YAXPAX_Z(Block); /*0x7ca9f4*/
  return (ObjectClass *)Block; /*0x7ca9fc G42.33 b24*/

}

// ==== BACKFILL 0x007CAA05  ___RTtypeid  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int __RTtypeid(unsigned int * a1)
{
  int v1; // esi
  int result; // eax
  unsigned char v3[12]; // [esp+1Ch] [ebp-34h] BYREF
  unsigned char pExceptionObject[12]; // [esp+28h] [ebp-28h] BYREF
  int v5; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  if ( !a1 ) /*0x7caa30*/
  {
    RTtypeid_Helper((exception *)pExceptionObject, "Attempted a typeid of NULL pointer!"); /*0x7caa3a*/
    _CxxThrowException_8(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_typeid__); /*0x7caa48*/
  }
  ms_exc.registration.TryLevel = 0; /*0x7caa4d*/
  v1 = *(unsigned int *)(*a1 - 4); /*0x7caa53*/
  v5 = v1; /*0x7caa56*/
  if ( IsBadReadPtr(*(const void **)(v1 + 12), 8u) ) /*0x7caa5e*/
  {
    ((E4Recv_7CA971 *)(void *)v3)->__0__non_rtti_object_QAE_PBD_Z((char *)"Bad read pointer - no RTTI data!"); /*0x7caa86 G42.33 b26*/
    _CxxThrowException_8(v3, (_ThrowInfo *)&_TI3_AV__non_rtti_object__); /*0x7caa94*/
  }
  result = *(unsigned int *)(v1 + 12); /*0x7caa68*/
  ms_exc.registration.TryLevel = -1; /*0x7caa6b*/
  return result; /*0x7caa6f*/
}

// ==== BACKFILL 0x007CAAE4  ___RTDynamicCast  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char * __RTDynamicCast(void ** aP0, int arg4, struct TypeDescriptor * a2, struct TypeDescriptor * a3, int a5)  // G42.33 b24: aP0 void** (deref = vtable)
{
  unsigned char *result; // eax
  unsigned char *CompleteObject_YAPAXPAPAX_Z; // edi
  int v7; // eax
  char *v8; // esi
  int v9; // ecx
  const struct _s_RTTIBaseClassDescriptor *VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z; // eax
  char *v11; // [esp+1Ch] [ebp-3Ch] BYREF
  unsigned char pExceptionObject[12]; // [esp+20h] [ebp-38h] BYREF
  unsigned char *v13; // [esp+2Ch] [ebp-2Ch]
  char *v14; // [esp+30h] [ebp-28h]
  int v15; // [esp+34h] [ebp-24h]
  int v16; // [esp+38h] [ebp-20h]
  const struct _s_RTTIBaseClassDescriptor *v17; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  if ( !aP0 ) /*0x7cab0f*/
    return 0; /*0x7cab11*/
  ms_exc.registration.TryLevel = 0; /*0x7cab22*/
  CompleteObject_YAPAXPAPAX_Z = (unsigned char *)_FindCompleteObject_YAPAXPAPAX_Z(aP0); /*0x7cab2d G42.33 b24*/
  v13 = CompleteObject_YAPAXPAPAX_Z; /*0x7cab2f*/
  v7 = *((unsigned int *)*aP0 - 1); /*0x7cab34*/
  v15 = v7; /*0x7cab37*/
  v8 = (char *)((char *)aP0 - arg4 - (char *)CompleteObject_YAPAXPAPAX_Z); /*0x7cab40 G42.33 b24*/
  v14 = v8; /*0x7cab42*/
  v9 = *(unsigned int *)(*(unsigned int *)(v7 + 16) + 4); /*0x7cab48*/
  if ( (v9 & 1) != 0 ) /*0x7cab4e*/
  {
    if ( (v9 & 2) != 0 ) /*0x7cab6c*/
      VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindVITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3); /*0x7cab75*/
    else
      VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindMITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3); /*0x7cab6e*/
  }
  else
  {
    VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z = _FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(CompleteObject_YAPAXPAPAX_Z, (const struct _s_RTTICompleteObjectLocator *)v7, a2, (int)v8, a3); /*0x7cab59*/
  }
  v17 = VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z; /*0x7cab7d*/
  if ( VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z ) /*0x7cab82*/
  {
    result = &CompleteObject_YAPAXPAPAX_Z[_PMDtoOffset_YAHPAXABUPMD___Z( /*0x7cab90*/
                                            CompleteObject_YAPAXPAPAX_Z,
                                            (const struct PMD *)((char *)VITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z
                                                               + 8))];
    v16 = (int)result; /*0x7cab92*/
  }
  else
  {
    result = 0; /*0x7cab9e*/
    v16 = 0; /*0x7caba0*/
    if ( a5 ) /*0x7caba6*/
    {
      v11 = (char *)"Bad dynamic_cast!"; /*0x7caba8 G42.33 b24*/
      __0bad_cast_QAE_ABQBD_Z((bad_cast *)pExceptionObject, (const char *const *)&v11); /*0x7cabb6*/
      _CxxThrowException_8(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_cast__); /*0x7cabc4*/
    }
  }
  ms_exc.registration.TryLevel = -1; /*0x7cab95*/
  return result; /*0x7cab13*/
}

// ==== BACKFILL 0x007CAC13  sub_7CAC13  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * ObjectClass::sub_7CAC13(void * Block, char a2)
{

  ((ObjectClass *)(void *)Block)->j_Exception_Destructor_3(); /*0x7cac16 G42.33 b24: member-call*/
  if ( (a2 & 1) != 0 ) /*0x7cac20*/
    __3_YAXPAX_Z(Block); /*0x7cac23*/
  return (ObjectClass *)Block; /*0x7cac2b G42.33 b24*/

}

// ==== BACKFILL 0x007CAC34  sub_7CAC34  cls=bad_cast  sig=csp  renamed_refs=0  residual=- ====
exception * E4Recv_7CAC34::sub_7CAC34(struct exception * a2)
{

  __0exception_QAE_ABV0__Z(this, a2); /*0x7cac3b*/
  *(unsigned int *)this = (unsigned int)&vt_bad_cast; /*0x7cac40 G42.33 b24*/
  return (struct exception *)(void *)this; /*0x7cac48 G42.33 b24*/

}

// ==== BACKFILL 0x007CAC4C  ?FindCompleteObject_YAPAXPAPAX_Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _FindCompleteObject_YAPAXPAPAX_Z(void ** a1)
{
  int v1; // edx
  char *result; // eax
  int v3; // edx

  v1 = *((unsigned int *)*a1 - 1); /*0x7cac52*/
  result = (char *)a1 - *(unsigned int *)(v1 + 4); /*0x7cac57*/
  v3 = *(unsigned int *)(v1 + 8); /*0x7cac5a*/
  if ( v3 ) /*0x7cac5f*/
    return &result[*(unsigned int *)((char *)a1 - v3)]; /*0x7cac63*/
  return result; /*0x7cac65*/
}

// ==== BACKFILL 0x007CAC66  ?FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
const struct _s_RTTIBaseClassDescriptor * _FindSITargetTypeInstance_YAPBU_s_RTTIBaseClassDescriptor__PAXPBU_s_RTTICompleteObjectLocator__ptr_TypeDescriptor__int_2_Z(void * a1, const struct _s_RTTICompleteObjectLocator * a2, struct TypeDescriptor * a3, int a4, struct TypeDescriptor * a5)
{
  int v5; // eax
  int **v6; // esi
  int *v7; // edi
  int v8; // eax
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v10 = 0; /*0x7cac6a*/
  v5 = *((unsigned int *)a2 + 4); /*0x7cac74*/
  v6 = *(int ***)(v5 + 12); /*0x7cac7b*/
  if ( !*(unsigned int *)(v5 + 8) ) /*0x7cac77*/
    return 0; /*0x7cacb5*/
  while ( 1 ) /*0x7cac80*/
  {
    v7 = *v6; /*0x7cac80*/
    v8 = **v6; /*0x7cac85*/
    if ( ((struct TypeDescriptor *)v8 == a5 || !strcmp((const char *)(v8 + 8), a5->name)) && (v7[5] & 1) == 0 ) /*0x7caca2*/
      break; /*0x7caca2*/
    ++v10; /*0x7caca4*/
    ++v6; /*0x7cacad*/
    if ( v10 >= *(unsigned int *)(*((unsigned int *)a2 + 4) + 8) ) /*0x7cacb3*/
      return 0; /*0x7cacb3*/
  }
  return (const struct _s_RTTIBaseClassDescriptor *)v7; /*0x7cacb7*/
}

// ==== BACKFILL 0x007CAEF1  ?PMDtoOffset_YAHPAXABUPMD___Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _PMDtoOffset_YAHPAXABUPMD___Z(char * a1, const struct PMD * a2)
{
  int v2; // ecx
  int pdisp; // edx

  v2 = 0; /*0x7caef5*/
  pdisp = a2->pdisp; /*0x7caef7*/
  if ( pdisp >= 0 ) /*0x7caefc*/
    v2 = *(unsigned int *)(*(unsigned int *)&a1[pdisp] + a2->vdisp) + a2->pdisp; /*0x7caf0b*/
  return v2 + a2->mdisp; /*0x7caf13*/
}

// ==== BACKFILL 0x007CB19C  _fflush  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int fflush(FILE * aP0)  // G42.33 b23: CRT truth (FILE*)
{
  int v2; // edi

  if ( !aP0 ) /*0x7cb1a3*/
    return flsall(0); /*0x7cb1a6*/
  gamemd::_lock_file(aP0); /*0x7cb1b0*/
  v2 = _fflush_lk((int)aP0); /*0x7cb1bc G42.33 b23: _fflush_lk truth int*/
  gamemd::_unlock_file(aP0); /*0x7cb1be*/
  return v2; /*0x7cb1ac*/
}

// ==== BACKFILL 0x007CB1CB  __fflush_lk  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _fflush_lk(int a1)
{
  if ( _flush((unsigned int *)a1) ) /*0x7cb1d1 G42.33 b24*/
    return -1; /*0x7cb1db*/
  if ( (*(unsigned char *)(a1 + 13) & 0x40) != 0 ) /*0x7cb1e4*/
    return -(_commit(*(unsigned int *)(a1 + 16)) != 0); /*0x7cb1f2*/
  return 0; /*0x7cb1de*/
}

// ==== BACKFILL 0x007CB1F9  __flush  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _flush(unsigned int * aP0)  // G42.33 b24: dword-index body (MSVC6 _iobuf dwords)
{
  int v1; // ebx
  const void *v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax

  v1 = 0; /*0x7cb1ff*/
  if ( (aP0[3] & 3) == 2 && (aP0[3] & 0x108) != 0 ) /*0x7cb213*/
  {
    v2 = (const void *)aP0[2]; /*0x7cb215*/
    if ( *aP0 - (int)v2 > 0 ) /*0x7cb21e*/
    {
      v3 = *aP0 - (unsigned int)v2; /*0x7cb21a*/
      if ( _write(aP0[4], v2, v3) == v3 ) /*0x7cb22f*/
      {
        v4 = aP0[3]; /*0x7cb231*/
        if ( (v4 & 0x80u) != 0 ) /*0x7cb236*/
        {
          (v4) = ((v4) & ~0xFF) | ((v4 & 0xFD) & 0xFF); /*0x7cb238*/
          aP0[3] = v4; /*0x7cb23a*/
        }
      }
      else
      {
        aP0[3] |= 0x20u; /*0x7cb23f*/
        v1 = -1; /*0x7cb243*/
      }
    }
  }
  v5 = aP0[2]; /*0x7cb246*/
  aP0[1] = 0; /*0x7cb249*/
  *aP0 = v5; /*0x7cb24d*/
  return v1; /*0x7cb24f*/
}

// ==== BACKFILL 0x007CB428  __lock_file2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _lock_file2(int a1, int a2)
{
  if ( a1 >= 20 ) /*0x7cb42f*/
    gamemd::EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32)); /*0x7cb444 G42.33 b24: disambiguate from UCRT decl*/
  else
    _lock(a1 + 28); /*0x7cb435*/
}

// ==== BACKFILL 0x007CB47A  __unlock_file2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _unlock_file2(int a1, int a2)
{
  if ( a1 >= 20 ) /*0x7cb481*/
    gamemd::LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32)); /*0x7cb496 G42.33 b24: disambiguate*/
  else
    _unlock(a1 + 28); /*0x7cb487*/
}

// ==== BACKFILL 0x007CB49D  _srand  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void srand(unsigned int aP0)  // G42.33 b24: truth void(unsigned int) (ida_cache 0x7CB49D)
{
  ((unsigned int *)_getptd())[5] = aP0; /*0x7cb4a6 G42.33 b24: ptd dword-index*/
}

// ==== BACKFILL 0x007CB4AA  _rand  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int rand()
{
  unsigned int *v0; // eax
  unsigned int v1; // ecx

  v0 = (unsigned int *)_getptd(); /*0x7cb4aa G42.33 b24*/
  v1 = 214013 * v0[5] + 2531011; /*0x7cb4b8*/
  v0[5] = v1; /*0x7cb4be*/
  return (((v1) >> 16) & 0xFFFF) & 0x7FFF; /*0x7cb4cb*/
}

// ==== BACKFILL 0x007CB4CC  _wcsncmp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int wcsncmp(const wchar_t * String1, const wchar_t * String2, size_t MaxCount)  // G42.33 b24: truth (ida_cache 0x7CB4CC)
{
  bool v4; // zf
  size_t MaxCounta; // [esp+10h] [ebp+10h]

  if ( !MaxCount ) /*0x7cb4d3*/
    return 0; /*0x7cb4d5*/
  v4 = MaxCount == 1; /*0x7cb4d9*/
  MaxCounta = MaxCount - 1; /*0x7cb4d9*/
  if ( !v4 ) /*0x7cb4e2*/
  {
    do /*0x7cb4f8*/
    {
      if ( !*String1 ) /*0x7cb4e4*/
        break; /*0x7cb4ea*/
      if ( *String1 != *String2 ) /*0x7cb4ef G42.33 b24*/
        break; /*0x7cb4ef*/
      ++String1; /*0x7cb4f2*/
      ++String2; /*0x7cb4f4 G42.33 b24*/
      --MaxCounta; /*0x7cb4f5*/
    }
    while ( MaxCounta ); /*0x7cb4f8*/
  }
  return *String1 - *String2; /*0x7cb4d7 G42.33 b24*/
}

// ==== BACKFILL 0x007CB7BA  _vsprintf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int vsprintf(char *const Buffer, const char *const Format, va_list ArgList)
{
  int v3; // eax
  bool v4; // sf
  int v5; // esi
  _iobuf_msvc6 File; // [esp+4h] [ebp-20h] BYREF (G42.33 b23: MSVC6 layout, was FILE)

  File._base = Buffer; /*0x7cb7c7*/
  File._ptr = Buffer; /*0x7cb7ca*/
  File._flag = 66; /*0x7cb7d3*/
  File._cnt = 0x7FFFFFFF; /*0x7cb7da*/
  v3 = _output((FILE *)&File, (char *)Format, (int)ArgList); /*0x7cb7e2 G42.33 b23*/
  v4 = --File._cnt < 0; /*0x7cb7ea*/
  v5 = v3; /*0x7cb7ed*/
  if ( v4 ) /*0x7cb7ef*/
    _flsbuf(0, (FILE *)&File); /*0x7cb7ff*/
  else
    *File._ptr = 0; /*0x7cb7f4*/
  return v5; /*0x7cb808*/
}

// ==== BACKFILL 0x007CB80B  _fgetc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int fgetc(FILE * aP0)  // G42.33 b23: truth (ida_cache 0x7CB80B)
{
  int v2; // edi

  gamemd::_lock_file(aP0); /*0x7cb812*/
  if ( --((_iobuf_msvc6 *)aP0)->_cnt < 0 ) /*0x7cb817 G42.33 b23*/
    v2 = _filbuf(aP0); /*0x7cb82e*/
  else
    v2 = *(uint8_t *)((_iobuf_msvc6 *)aP0)->_ptr++; /*0x7cb81f G42.33 b23*/
  gamemd::_unlock_file(aP0); /*0x7cb831*/
  return v2; /*0x7cb839*/
}

// ==== BACKFILL 0x007CB8A8  _iswspace  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int iswspace(wint_t C)
{
  return iswctype(C, 8u); /*0x7cb8b5*/
}

// ==== BACKFILL 0x007CB8E6  _iswgraph  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int iswgraph(wint_t C)
{
  return iswctype(C, 0x117u); /*0x7cb8f6*/
}

// ==== BACKFILL 0x007CB9B8  _wcstol  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int wcstol(const wchar_t * String, wchar_t ** EndPtr, int Radix)  // G42.33 b24: truth (ida_cache 0x7CB9B8)
{
  return wcstoxl((wint_t *)String, (wint_t **)(void *)EndPtr, Radix, 0); /*0x7cb9ce G42.33 b24*/
}

// ==== BACKFILL 0x007CBB8D  __mbsnccnt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t _mbsnccnt(const unsigned char * Str, size_t MaxCount)
{
  size_t v2; // esi
  size_t v3; // edx

  _lock(25); /*0x7cbb90*/
  v2 = 0; /*0x7cbb99*/
  v3 = MaxCount - 1; /*0x7cbb9d*/
  if ( MaxCount ) /*0x7cbba1*/
  {
    do /*0x7cbbcd*/
    {
      if ( !*Str ) /*0x7cbba7*/
        break; /*0x7cbba7*/
      if ( (byte_B78961[*Str] & 4) != 0 ) /*0x7cbbb7*/
      {
        if ( !v3-- ) /*0x7cbbb9*/
          break; /*0x7cbbbe*/
        if ( !*++Str ) /*0x7cbbc1*/
          break; /*0x7cbbc4*/
      }
      ++v2; /*0x7cbbc6*/
      ++Str; /*0x7cbbc7*/
    }
    while ( v3-- ); /*0x7cbbcd*/
  }
  _unlock(25); /*0x7cbbd1*/
  return v2; /*0x7cbbd9*/
}

// ==== BACKFILL 0x007CBBDB  _swscanf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int swscanf(const wchar_t *const Buffer, const wchar_t *const Format, ...)  // G42.33 b23: truth (ida_cache 0x7CBBDB)
{
  _iobuf_msvc6 File; // [esp+0h] [ebp-20h] BYREF (G42.33 b23: MSVC6 layout, was FILE)
  va_list va; // [esp+30h] [ebp+10h] BYREF

  va_start(va, Format);
  File._flag = 73; /*0x7cbbe4*/
  File._base = (char *)Buffer; /*0x7cbbec*/
  File._ptr = (char *)Buffer; /*0x7cbbef*/
  File._cnt = 2 * wcslen(Buffer); /*0x7cbbf9*/
  return _winput((FILE *)&File, (int)Format, (int)va); /*0x7cbc0f G42.33 b23*/
}

// ==== BACKFILL 0x007CBC11  Object_Init_7CBC11  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_7CBC11(char * VarName)
{
  char *v1; // esi

  _lock(12); /*0x7cbc14*/
  v1 = getenv(VarName); /*0x7cbc24*/
  _unlock(12); /*0x7cbc26*/
  return v1; /*0x7cbc30*/
}

// ==== BACKFILL 0x007CBC32  _getenv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * getenv(const char * VarName)
{
  const char **v1; // esi
  size_t v2; // edi

  v1 = (const char **)dword_B781E4; /*0x7cbc3b*/
  if ( dword_B78BB4 ) /*0x7cbc42*/
  {
    if ( dword_B781E4 || dword_B781EC && !__wtomb_environ() && (v1 = (const char **)dword_B781E4) != 0 ) /*0x7cbc61*/
    {
      if ( VarName ) /*0x7cbc69*/
      {
        v2 = strlen(VarName); /*0x7cbc72*/
        while ( *v1 ) /*0x7cbc78*/
        {
          if ( strlen(*v1) > v2 /*0x7cbc9a*/
            && (*v1)[v2] == 61
            && !_mbsnbicoll((const uint8_t *)*v1, (const uint8_t *)VarName, v2) )
          {
            return (char *)&(*v1)[v2 + 1]; /*0x7cbca7*/
          }
          ++v1; /*0x7cbc9c*/
        }
      }
    }
  }
  return 0; /*0x7cbcab*/
}

// ==== BACKFILL 0x007CBCAF  __itow  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * _itow(int Value, wchar_t * Buffer, int Radix)
{
  CHAR MultiByteStr[20]; // [esp+0h] [ebp-14h] BYREF

  _itoa(Value, MultiByteStr, Radix); /*0x7cbcbf*/
  MultiByteToWideChar(0, 1u, MultiByteStr, -1, Buffer, 20); /*0x7cbcd6*/
  return Buffer; /*0x7cbcdf*/
}

// ==== BACKFILL 0x007CBDDC  _exit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void __declspec(noreturn) exit(int Code)  // G42.33 b24: IDA __noreturn = __declspec(noreturn)
{
  doexit(Code, 0, 0); /*0x7cbde4*/
}

// ==== BACKFILL 0x007CBDED  __exit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void __declspec(noreturn) _exit(int Code)  // G42.33 b24
{
  doexit(Code, 1, 0); /*0x7cbdf5*/
}

// ==== BACKFILL 0x007CBEC1  __lockexit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _lockexit()
{
  _lock(13); /*0x7cbec3*/
}

// ==== BACKFILL 0x007CBF14  __control87  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int _control87(unsigned int NewValue, unsigned int Mask)
{
  unsigned int v2; // esi

  v2 = Mask & NewValue | ~Mask & _abstract_cw(); /*0x7cbf34*/
  _hw_cw(v2); /*0x7cbf37*/
  return v2; /*0x7cbf46*/
}

// ==== BACKFILL 0x007CBF49  __controlfp  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int _controlfp(unsigned int NewValue, unsigned int Mask)
{
  return _control87(NewValue, Mask & 0xFFF7FFFF); /*0x7cbf5e*/
}

// ==== BACKFILL 0x007CBF8A  __abstract_cw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char _abstract_cw(char a1)
{
  char result; // al

  result = 0; /*0x7cbf8f*/
  if ( (a1 & 1) != 0 ) /*0x7cbf96*/
    result = 16; /*0x7cbf9a*/
  if ( (a1 & 4) != 0 ) /*0x7cbf9e*/
    result |= 8u; /*0x7cbfa0*/
  if ( (a1 & 8) != 0 ) /*0x7cbfa5*/
    result |= 4u; /*0x7cbfa7*/
  if ( (a1 & 0x10) != 0 ) /*0x7cbfac*/
    result |= 2u; /*0x7cbfae*/
  if ( (a1 & 0x20) != 0 ) /*0x7cbfb3*/
    return result | 1; /*0x7cbfb5*/
  return result; /*0x7cc00e*/
}

// ==== BACKFILL 0x007CC01C  __hw_cw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char _hw_cw(int a1)
{
  char result; // al

  result = (a1 & 0x10) != 0; /*0x7cc02b*/
  if ( (a1 & 8) != 0 ) /*0x7cc02f*/
    result |= 4u; /*0x7cc031*/
  if ( (a1 & 4) != 0 ) /*0x7cc036*/
    result |= 8u; /*0x7cc038*/
  if ( (a1 & 2) != 0 ) /*0x7cc03d*/
    result |= 0x10u; /*0x7cc03f*/
  if ( (a1 & 1) != 0 ) /*0x7cc044*/
    result |= 0x20u; /*0x7cc046*/
  if ( (a1 & 0x80000) != 0 ) /*0x7cc04e*/
    return result | 2; /*0x7cc050*/
  return result; /*0x7cc097*/
}

// ==== BACKFILL 0x007CC0A5  __abstract_sw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char _abstract_sw(unsigned int a1)  // G42.33 b24: param restored (body decodes)
{
  char result; // al

  result = 0; /*0x7cc0a9*/
  if ( (a1 & 1) != 0 ) /*0x7cc0ae*/
    result = 16; /*0x7cc0b2*/
  if ( (a1 & 4) != 0 ) /*0x7cc0b6*/
    result |= 8u; /*0x7cc0b8*/
  if ( (a1 & 8) != 0 ) /*0x7cc0bd*/
    result |= 4u; /*0x7cc0bf*/
  if ( (a1 & 0x10) != 0 ) /*0x7cc0c4*/
    result |= 2u; /*0x7cc0c6*/
  if ( (a1 & 0x20) != 0 ) /*0x7cc0cb*/
    return result | 1; /*0x7cc0cd*/
  return result; /*0x7cc0d9*/
}

// ==== BACKFILL 0x007CC0DC  __global_unwind2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &gu_return, 0, 0); /*0x7cc0ef*/
}

// ==== BACKFILL 0x007CC0FC  __unwind_handler  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int _unwind_handler(int a1, int a2, int a3, unsigned int * a4)
{
  int result; // eax

  result = 1; /*0x7cc107*/
  if ( (*(unsigned int *)(a1 + 4) & 6) != 0 ) /*0x7cc10c*/
  {
    *a4 = a2; /*0x7cc116*/
    return 3; /*0x7cc118*/
  }
  return result; /*0x7cc11d*/
}

// ==== BACKFILL 0x007CC11E  __local_unwind2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _local_unwind2(int a1, int a2)
{
  int result; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // esi
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-8h] [ebp-1Ch]
  int (__cdecl *v7)(int, int, int, unsigned int *); // [esp-4h] [ebp-18h] (b24 sig sync _unwind_handler)

  v7 = _unwind_handler; /*0x7cc128*/
  ExceptionList = (struct _EXCEPTION_REGISTRATION_RECORD *)*(void **)NtCurrentTeb(); /*0x7cc12d G42.33 b24: TEB+0 ExceptionList (TEB opaque)*/
  while ( 1 ) /*0x7cc13b*/
  {
    result = a1; /*0x7cc13b*/
    v3 = *(unsigned int *)(a1 + 8); /*0x7cc13f*/
    v4 = *(unsigned int *)(a1 + 12); /*0x7cc142*/
    if ( v4 == -1 || v4 == a2 ) /*0x7cc14e*/
      break; /*0x7cc14e*/
    v5 = 3 * v4; /*0x7cc150*/
    *(unsigned int *)(a1 + 12) = *(unsigned int *)(v3 + 4 * v5); /*0x7cc15a*/
    if ( !*(unsigned int *)(v3 + 4 * v5 + 4) ) /*0x7cc15d*/
    {
      _NLG_Notify(257); /*0x7cc16d*/
      (*(void (**)(struct _EXCEPTION_REGISTRATION_RECORD *, int (*)(int, int, int, unsigned int *)))(v3 + 4 * v5 + 8))( /*0x7cc172 G42.33 b24*/
        ExceptionList,
        v7);
    }
  }
  return result; /*0x7cc182*/
}

// ==== BACKFILL 0x007CC1A9  __NLG_Notify1  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _NLG_Notify1(int a1)
{
  JUMPOUT(0x7CC1BC); /*0x7cc1bc*/
}

// ==== BACKFILL 0x007CC291  __seh_longjmp_unwind_4  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int _seh_longjmp_unwind_4(int a1)
{
  return _local_unwind2(((unsigned int *)a1)[0], ((unsigned int *)a1)[0]); /*0x7cc2a8*/
}

// ==== BACKFILL 0x007CC2AC  _mbstowcs  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t mbstowcs(wchar_t * Dest, const char * Source, size_t MaxCount)
{
  int v3; // ebx
  size_t MaxCounta; // [esp+1Ch] [ebp+10h]

  InterlockedIncrement((volatile LONG *)&dword_B78BA4); /*0x7cc2b8*/
  v3 = 0; /*0x7cc2c4*/
  if ( dword_B78BA0 ) /*0x7cc2cc*/
  {
    InterlockedDecrement((volatile LONG *)&dword_B78BA4); /*0x7cc2cf*/
    _lock(19); /*0x7cc2d3*/
    v3 = 1; /*0x7cc2db*/
  }
  MaxCounta = _mbstowcs_lk(Dest, Source, MaxCount); /*0x7cc2ed*/
  if ( v3 ) /*0x7cc2f2*/
    _unlock(19); /*0x7cc2f6*/
  else
    InterlockedDecrement((volatile LONG *)&dword_B78BA4); /*0x7cc2ff*/
  return MaxCounta; /*0x7cc304*/
}

// ==== BACKFILL 0x007CC447  _wcstombs  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t wcstombs(char * Dest, const wchar_t * Source, size_t MaxCount)  // G42.33 b25: truth (ida_cache 0x7CC447)
{
  int v3; // ebx
  int MaxCounta; // [esp+1Ch] [ebp+10h]

  InterlockedIncrement((volatile LONG *)&dword_B78BA4); /*0x7cc453*/
  v3 = 0; /*0x7cc45f*/
  if ( dword_B78BA0 ) /*0x7cc467*/
  {
    InterlockedDecrement((volatile LONG *)&dword_B78BA4); /*0x7cc46a*/
    _lock(19); /*0x7cc46e*/
    v3 = 1; /*0x7cc476*/
  }
  MaxCounta = _wcstombs_lk(Dest, Source, MaxCount); /*0x7cc488 G42.33 b25*/
  if ( v3 ) /*0x7cc48d*/
    _unlock(19); /*0x7cc491*/
  else
    InterlockedDecrement((volatile LONG *)&dword_B78BA4); /*0x7cc49a*/
  return MaxCounta; /*0x7cc49f*/
}

// ==== BACKFILL 0x007CC653  _wcsncnt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int wcsncnt(const wchar_t * aP0, int a2)
{
  int v2; // ecx
  const wchar_t *v3; // eax (b25: aP0 const wchar_t*)

  v2 = a2; /*0x7cc656*/
  v3 = aP0; /*0x7cc659*/
  if ( !a2 ) /*0x7cc660*/
    return a2; /*0x7cc660*/
  do /*0x7cc66a*/
  {
    if ( !*v3 ) /*0x7cc662*/
      break; /*0x7cc665*/
    ++v3; /*0x7cc668*/
    --v2; /*0x7cc669*/
  }
  while ( v2 ); /*0x7cc66a*/
  if ( v2 && !*v3 ) /*0x7cc670*/
    return v3 - aP0 + 1; /*0x7cc67a*/
  else
    return a2; /*0x7cc67d*/
}

// ==== BACKFILL 0x007CC682  _wcsstr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * wcsstr(CampaignScore * aP0, const wchar_t * SubStr)
{
  wchar_t *result; // eax
  const wchar_t *v3; // ecx
  int v4; // edx

  for ( result = (wchar_t *)aP0; *result; ++result ) /*0x7cc682*/
  {
    v3 = SubStr; /*0x7cc690*/
    v4 = (char *)result - (char *)SubStr; /*0x7cc696*/
    do /*0x7cc6ad*/
    {
      if ( !*v3 ) /*0x7cc698*/
        break; /*0x7cc69e*/
      if ( *(const wchar_t *)((char *)v3 + v4) != *v3 ) /*0x7cc6a7*/
        break; /*0x7cc6a9*/
      ++v3; /*0x7cc6ac*/
    }
    while ( *(const wchar_t *)((char *)v3 + v4) ); /*0x7cc6ad*/
    if ( !*v3 ) /*0x7cc6b8*/
      return result; /*0x7cc6b8*/
  }
  return 0; /*0x7cc6c0*/
}

// ==== BACKFILL 0x007CCA19  String::Wrapper5to4  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int String::Wrapper5to4(CampaignScore * aP0, int a2, int a3, int a4)
{

  return String_Helper_7CCA34((uint8_t *)(aP0), a2,(uint8_t *)(a3), a4, 0); /*0x7cca33*/

}

// ==== BACKFILL 0x007CCF1D  __store_str  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void _store_str(unsigned char * a1, unsigned int * a2, unsigned int * a3)
{
  if ( *a3 ) /*0x7ccf23*/
  {
    do /*0x7ccf3f*/
    {
      if ( !IDA_LOBYTE(*a1) ) /*0x7ccf30 G42.33 b26: AbstractClass drape stripped*/
        break; /*0x7ccf34*/
      *(unsigned char *)(*a2)++ = *a1; /*0x7ccf38 G42.33 b26*/
      a1 = (unsigned char *)((char *)a1 + 1); /*0x7ccf3c G42.33 b26: ObjectClass drape stripped*/
    }
    while ( (*a3)-- != 1 ); /*0x7ccf3f*/
  }
}

// ==== BACKFILL 0x007CCF44  __store_num  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int _store_num(int a1, unsigned int a2, unsigned int * a3, unsigned int * a4)
{
  int result; // eax
  unsigned int v5; // ecx
  int v6; // [esp+4h] [ebp-4h]

  result = 0; /*0x7ccf48*/
  v6 = 0; /*0x7ccf51*/
  if ( dword_B78BB0 ) /*0x7ccf54*/
    return (int)_store_number(a1, (char **)(void *)a3, a4); /*0x7ccf5f G42.33 b25*/
  if ( a2 >= *a4 ) /*0x7ccf71*/
  {
    *a4 = 0; /*0x7ccfae*/
  }
  else
  {
    v5 = a2 - 1; /*0x7ccf73*/
    if ( a2 ) /*0x7ccf7d*/
    {
      do /*0x7ccfa1*/
      {
        *(unsigned char *)(*a3 + v5) = a1 % 10 + 48; /*0x7ccf8e*/
        ++v6; /*0x7ccf97*/
        --v5; /*0x7ccf9a*/
        a1 /= 10; /*0x7ccf9e*/
      }
      while ( v5 != -1 ); /*0x7ccfa1*/
    }
    *a3 += v6; /*0x7ccfa7*/
    *a4 -= v6; /*0x7ccfa9*/
    return v6; /*0x7ccfa4*/
  }
  return result; /*0x7ccfb0*/
}

// ==== BACKFILL 0x007CCFB3  __store_number  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * _store_number(int a1, char ** a2, unsigned int * a3)
{
  char *v3; // ecx
  char *result; // eax
  char *v5; // ecx
  char v6; // dl

  v3 = *a2; /*0x7ccfbf*/
  do /*0x7ccfe2*/
  {
    if ( *a3 <= 1u ) /*0x7ccfc4*/
      break; /*0x7ccfc4*/
    *v3++ = a1 % 10 + 48; /*0x7ccfd5*/
    --*a3; /*0x7ccfdb*/
    a1 /= 10; /*0x7ccfdf*/
  }
  while ( a1 > 0 ); /*0x7ccfe2*/
  result = *a2; /*0x7ccfe4*/
  *a2 = v3; /*0x7ccfe6*/
  v5 = v3 - 1; /*0x7ccfe8*/
  do /*0x7ccff5*/
  {
    v6 = *v5; /*0x7ccfeb*/
    *v5-- = *result; /*0x7ccfed*/
    *result++ = v6; /*0x7ccff0*/
  }
  while ( result < v5 ); /*0x7ccff5*/
  return result; /*0x7ccff7*/
}

// ==== BACKFILL 0x007CD42B  _remove  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int remove(const char * FileName)
{
  DWORD LastError; // eax

  if ( DeleteFileA(FileName) ) /*0x7cd42f*/
    LastError = 0; /*0x7cd441*/
  else
    LastError = GetLastError(); /*0x7cd439*/
  if ( !LastError ) /*0x7cd445*/
    return 0; /*0x7cd452*/
  _dosmaperr(LastError); /*0x7cd448*/
  return -1; /*0x7cd451*/
}

// ==== BACKFILL 0x007CD455  __unlink  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _unlink(const char * FileName)
{
  return remove(FileName); /*0x7cd45f*/
}

// ==== BACKFILL 0x007CD615  _genfname  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int genfname(const unsigned char * Buffer)
{
  char *v1; // esi
  unsigned int v2; // eax
  char *v4; // eax

  v1 = (char *)(_mbsrchr(Buffer, 0x2Eu) + 1); /*0x7cd627*/
  v2 = strtoul(v1, 0, 32) + 1; /*0x7cd633*/
  if ( v2 >= 0x7FFF ) /*0x7cd639*/
    return -1; /*0x7cd63b*/
  v4 = _ultoa(v2, (char *)&Buffer, 32); /*0x7cd647*/
  strcpy(v1, v4); /*0x7cd64e*/
  return 0; /*0x7cd658*/
}

// ==== BACKFILL 0x007CD790  _strcspn  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int strcspn(const char * Str, const char * Control)  // G42.33 b25: truth (ida_cache 0x7CD790)
{
  unsigned int v2; // eax
  int v5; // ecx
  int v7[9]; // [esp+0h] [ebp-24h] BYREF (b26: was signed int32_t, invalid)

  v2 = 0; /*0x7cd794*/
  memset(v7, 0, 32); /*0x7cd79d*/
  while ( 1 ) /*0x7cd7a4*/
  {
    IDA_LOBYTE(v2) = *Control; /*0x7cd7a4*/
    if ( !*Control ) /*0x7cd7a4*/
      break; /*0x7cd7a4*/
    ++Control; /*0x7cd7aa*/
    _bittestandset((LONG *)v7, v2); /*0x7cd7ab G42.33 b26*/
  }
  v5 = -1; /*0x7cd7b4*/
  do /*0x7cd7c4*/
  {
    ++v5; /*0x7cd7b8*/
    IDA_LOBYTE(v2) = *Str; /*0x7cd7b9 G42.33 b25*/
    if ( !*Str ) /*0x7cd7b9 G42.33 b25*/
      break; /*0x7cd7bd*/
    ++Str; /*0x7cd7bf G42.33 b25*/
  }
  while ( !_bittest((const LONG *)v7, v2) ); /*0x7cd7c4 G42.33 b26*/
  return v5; /*0x7cd7cb*/
}

// ==== BACKFILL 0x007CD917  __amsg_exit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void __declspec(noreturn) _amsg_exit(DWORD NumberOfBytesWritten)  // G42.33 b25: IDA __noreturn = __declspec(noreturn)
{
  if ( dword_B78230 == 1 ) /*0x7cd91e*/
    _FF_MSGBANNER(); /*0x7cd920*/
  _NMSG_WRITE(NumberOfBytesWritten); /*0x7cd929*/
  ((void (*)(int))off_87C2A0)(255); /*0x7cd933 G42.33 b25: fn-ptr call (void* global)*/
}

// ==== BACKFILL 0x007CD93C  _fast_error_exit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void __declspec(noreturn) fast_error_exit(DWORD NumberOfBytesWritten)  // G42.33 b25
{
  if ( dword_B78230 == 1 ) /*0x7cd943*/
    _FF_MSGBANNER(); /*0x7cd945*/
  _NMSG_WRITE(NumberOfBytesWritten); /*0x7cd94e*/
  ExitProcess(0xFFu); /*0x7cd959*/
}

// ==== BACKFILL 0x007CD960  __mtinitlocks  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _mtinitlocks()
{
  gamemd::InitializeCriticalSection((LPCRITICAL_SECTION)(void *)(unsigned int)lpCriticalSection); /*0x7cd96d G42.33 b26*/
  gamemd::InitializeCriticalSection((LPCRITICAL_SECTION)off_87C2DC); /*0x7cd975 G42.33 b26*/
  gamemd::InitializeCriticalSection((LPCRITICAL_SECTION)off_87C2CC); /*0x7cd97d G42.33 b26*/
  gamemd::InitializeCriticalSection((LPCRITICAL_SECTION)off_87C2AC); /*0x7cd985 G42.33 b26*/
}

// ==== BACKFILL 0x007CD9F5  __lock  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _lock(int a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // edi

  if ( !*(&dword_87C2A8 + a1) ) /*0x7cd9fc*/
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)malloc(0x18u); /*0x7cda15*/
    if ( !v1 ) /*0x7cda1a*/
      _amsg_exit(0x11u); /*0x7cda1e*/
    _lock(17); /*0x7cda26*/
    if ( *(&dword_87C2A8 + a1) ) /*0x7cda2b*/
    {
      gamemd::free((void *)v1); /*0x7cda3c G42.33 b25: disambiguate*/
    }
    else
    {
      gamemd::InitializeCriticalSection(v1); /*0x7cda32 G42.33 b26: disambiguate*/
      *(&dword_87C2A8 + a1) = (unsigned int)v1; /*0x7cda38 G42.33 b25*/
    }
    _unlock(17); /*0x7cda44*/
  }
  gamemd::EnterCriticalSection((LPCRITICAL_SECTION)(void *)(unsigned int)*(&dword_87C2A8 + a1)); /*0x7cda4d G42.33 b25*/
}

// ==== BACKFILL 0x007CDA56  __unlock  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _unlock(int a1)
{
  gamemd::LeaveCriticalSection((LPCRITICAL_SECTION)(void *)(unsigned int)*(&dword_87C2A8 + a1)); /*0x7cda63 G42.33 b25*/
}

// ==== BACKFILL 0x007CE049  __strcats  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _strcats(char * aP0, int a2)  // G42.33 b25: truth (ida_cache 0x7CE049)
{
  int v2; // edi
  int *v3; // esi
  char *result; // eax
  const char *v5; // [esp-8h] [ebp-Ch]

  v2 = a2; /*0x7ce04a*/
  if ( a2 > 0 ) /*0x7ce050*/
  {
    v3 = &a2; /*0x7ce053*/
    do /*0x7ce069*/
    {
      v5 = (const char *)v3[1]; /*0x7ce057*/
      ++v3; /*0x7ce05a*/
      result = strcat(aP0, v5); /*0x7ce061*/
      --v2; /*0x7ce067*/
    }
    while ( v2 ); /*0x7ce069*/
  }
  return result; /*0x7ce06c*/
}

// ==== BACKFILL 0x007CE06E  ___lc_strtolc  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int __lc_strtolc(char * a0, char * aP1)  // G42.33 b25: truth (ida_cache 0x7CE06E)
{
  const char *v2; // esi
  signed int v4; // eax
  char v5; // bl
  const char *v6; // edi
  char *v7; // eax
  const char *v8; // [esp-8h] [ebp-14h]
  size_t v9; // [esp-4h] [ebp-10h]
  char *Sourcea; // [esp+18h] [ebp+Ch]

  memset(a0, 0, 0x88u); /*0x7ce07f*/
  v2 = aP1; /*0x7ce084*/
  if ( !*aP1 ) /*0x7ce08e*/
    return 0; /*0x7ce08e*/
  if ( *aP1 == 46 && aP1[1] ) /*0x7ce094*/
  {
    strcpy(a0 + 128, aP1 + 1); /*0x7ce0a5*/
    return 0; /*0x7ce0ae*/
  }
  for ( Sourcea = 0; ; ++Sourcea ) /*0x7ce0b3*/
  {
    v4 = strcspn(v2, "_.,"); /*0x7ce0bd*/
    if ( !v4 ) /*0x7ce0c6*/
      break; /*0x7ce0c6*/
    v5 = v2[v4]; /*0x7ce0cc*/
    v6 = &v2[v4]; /*0x7ce0cf*/
    if ( Sourcea ) /*0x7ce0d2*/
    {
      if ( Sourcea == (char *)1 ) /*0x7ce0e9*/
      {
        if ( v4 >= 64 || v5 == 95 ) /*0x7ce0f3*/
          return -1; /*0x7ce0f3*/
        v9 = v4; /*0x7ce0f5*/
        v8 = v2; /*0x7ce0f9*/
        v7 = a0 + 64; /*0x7ce0fa*/
      }
      else
      {
        if ( Sourcea != (char *)2 || v5 && v5 != 44 ) /*0x7ce10c*/
          return -1; /*0x7ce10c*/
        v9 = v4; /*0x7ce10e*/
        v8 = v2; /*0x7ce112*/
        v7 = a0 + 128; /*0x7ce113*/
      }
      strncpy(v7, v8, v9); /*0x7ce119*/
    }
    else
    {
      if ( v4 >= 64 || v5 == 46 ) /*0x7ce0dc*/
        return -1; /*0x7ce0dc*/
      strncpy(a0, v2, v4); /*0x7ce0e3*/
    }
    if ( v5 == 44 || !v5 ) /*0x7ce128*/
      return 0; /*0x7ce128*/
    v2 = v6 + 1; /*0x7ce12d*/
  }
  return -1; /*0x7ce135*/
}

// ==== BACKFILL 0x007CE13A  ___lc_lctostr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * __lc_lctostr(char * Destination, char * Source)
{
  char *result; // eax

  strcpy(Destination, Source); /*0x7ce144*/
  if ( Source[64] ) /*0x7ce149*/
    _strcats(Destination, 2); /*0x7ce160*/
  result = Source + 128; /*0x7ce16f*/
  if ( Source[128] ) /*0x7ce168*/
    return _strcats(Destination, 2); /*0x7ce184*/
  return result; /*0x7ce175*/
}

// ==== BACKFILL 0x007CE9E6  _write_char  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_char(int a1, FILE * File, unsigned int * a3)  // G42.33 b25: truth _DWORD* (b17 void* wrong)  // G42.33 b25: truth _DWORD* (b17 void* wrong)  // G42.33 b25: truth _DWORD* (b17 void* wrong)
{
  int v4; // eax
  bool v5; // zf
  unsigned int *result; // eax

  if ( --((_iobuf_msvc6 *)File)->_cnt < 0 ) /*0x7ce9ec G42.33 b25*/
  {
    v4 = _flsbuf(a1, File); /*0x7cea03*/
  }
  else
  {
    *((_iobuf_msvc6 *)File)->_ptr++ = a1; /*0x7ce9f6 G42.33 b25*/
    v4 = (uint8_t)a1; /*0x7ce9fa*/
  }
  v5 = v4 == -1; /*0x7cea0a*/
  result = a3; /*0x7cea0d*/
  if ( v5 ) /*0x7cea10*/
    *a3 = -1; /*0x7cea12*/
  else
    ++*a3; /*0x7cea17*/
  return result; /*0x7cea15*/
}

// ==== BACKFILL 0x007CEA1B  _write_multi_char  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_multi_char(int a1, unsigned int * a2, FILE * File, unsigned int * a4)  // G42.33 b25: truth _DWORD* args
{
  unsigned int *result; // eax
  unsigned int *i; // edi

  result = a2; /*0x7cea21*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7cea26*/
  {
    result = write_char(a1, File, a4); /*0x7cea35*/
    if ( *a4 == -1 ) /*0x7cea40*/
      break; /*0x7cea40*/
    result = i; /*0x7cea42*/
  }
  return result; /*0x7cea49*/
}

// ==== BACKFILL 0x007CEA4C  _write_string  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * write_string(char * a1, unsigned int * a2, FILE * File, unsigned int * a4)  // G42.33 b25: truth char*/_DWORD*
{
  unsigned int *result; // eax
  unsigned int *i; // ebx
  int v7; // eax

  result = a2; /*0x7cea51*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7cea58*/
  {
    v7 = *a1++; /*0x7cea62*/
    result = write_char(v7, File, a4); /*0x7cea6c*/
    if ( *a4 == -1 ) /*0x7cea77*/
      break; /*0x7cea77*/
    result = i; /*0x7cea79*/
  }
  return result; /*0x7cea80*/
}

// ==== BACKFILL 0x007CEA84  _get_int_arg  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int get_int_arg(int * a1)  // G42.33 b17: int* (callers)
{
  *a1 += 4; /*0x7cea88*/
  return *(unsigned int *)(*a1 - 4); /*0x7cea90*/
}

// ==== BACKFILL 0x007CEA91  _get_int64_arg  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long get_int64_arg(int * a1)  // G42.33 b17
{
  *a1 += 8; /*0x7cea95*/
  return *(unsigned long long *)(*a1 - 8); /*0x7ceaa0*/
}

// ==== BACKFILL 0x007CEC26  __cftoe  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char * _cftoe(double * a1, unsigned char * a2, int a3, int a4)
{
  double v6; // [esp+0h] [ebp-3Ch]
  char Destination[24]; // [esp+14h] [ebp-28h] BYREF
  int v8[4]; // [esp+2Ch] [ebp-10h] BYREF

  v6 = *a1; /*0x7cec3c*/
  _fltout2(IDA_SLOBYTE(v6), IDA_SHIDWORD(v6), v8, Destination); /*0x7cec3f*/
  _fptostr((char *)((v8[0] == 45) + a2 + (a3 > 0)), (char *)(a3 + 1), (int)v8); /*0x7cec67*/
  _cftoe2(a2, a3, a4, (int)v8, 0); /*0x7cec79 G42.33 b26*/
  return a2; /*0x7cec84*/
}

// ==== BACKFILL 0x007CEC87  __cftoe2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char * _cftoe2(unsigned char * a1, int a2, int a3, int a4, char a5)
{
  unsigned char *v5; // eax
  char *v6; // eax
  int v7; // ebx

  if ( a5 ) /*0x7cec98*/
    _shift(&a1[*(unsigned int *)a4 == 45], a2 > 0); /*0x7cecae*/
  v5 = a1; /*0x7cecb8*/
  if ( *(unsigned int *)a4 == 45 ) /*0x7cecba*/
  {
    *a1 = 45; /*0x7cecbc*/
    v5 = a1 + 1; /*0x7cecbf*/
  }
  if ( a2 > 0 ) /*0x7cecc5*/
  {
    *v5 = v5[1]; /*0x7ceccd*/
    *++v5 = SrcCh; /*0x7cecd7*/
  }
  v6 = strcpy((char *)&v5[(a5 == 0) + a2], "e+000"); /*0x7cecec G42.33 b26*/
  if ( a3 ) /*0x7cecf8*/
    *v6 = 69; /*0x7cecfa*/
  if ( **(unsigned char **)(a4 + 12) != 48 ) /*0x7ced04*/
  {
    v7 = *(unsigned int *)(a4 + 4) - 1; /*0x7ced09*/
    if ( v7 < 0 ) /*0x7ced0a*/
    {
      v7 = 1 - *(unsigned int *)(a4 + 4); /*0x7ced0c*/
      v6[1] = 45; /*0x7ced0e*/
    }
    if ( v7 >= 100 ) /*0x7ced15*/
    {
      v6[2] += v7 / 100; /*0x7ced1f*/
      v7 %= 100; /*0x7ced26*/
    }
    if ( v7 >= 10 ) /*0x7ced2c*/
    {
      v6[3] += v7 / 10; /*0x7ced36*/
      v7 %= 10; /*0x7ced3d*/
    }
    v6[4] += v7; /*0x7ced3f*/
  }
  return a1; /*0x7ced44*/
}

// ==== BACKFILL 0x007CED49  __cftof  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _cftof(double * a1, char * Src, size_t Size)
{
  double v5; // [esp+0h] [ebp-3Ch]
  char Destination[24]; // [esp+14h] [ebp-28h] BYREF
  int v7[4]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = *a1; /*0x7ced5f*/
  _fltout2(IDA_SLOBYTE(v5), IDA_SHIDWORD(v5), v7, Destination); /*0x7ced62*/
  _fptostr(&Src[v7[0] == 45], (char *)(Size + v7[1]), (int)v7); /*0x7ced81*/
  _cftof2(Src, Size, (unsigned int *)v7, 0); /*0x7ced90 G42.33 b26*/
  return Src; /*0x7ced9b*/
}

// ==== BACKFILL 0x007CEE45  __cftog  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * _cftog(double * a1, char * Src, char * Size, int a4)
{
  int v5; // esi
  char *v6; // edi
  double v8; // [esp+0h] [ebp-44h]
  char Destination[24]; // [esp+1Ch] [ebp-28h] BYREF
  int v10; // [esp+34h] [ebp-10h] BYREF
  int v11; // [esp+38h] [ebp-Ch]

  v8 = *a1; /*0x7cee5d*/
  _fltout2(IDA_SLOBYTE(v8), IDA_SHIDWORD(v8), &v10, Destination); /*0x7cee60*/
  v5 = v11 - 1; /*0x7cee6b*/
  v6 = &Src[v10 == 45]; /*0x7cee7a*/
  _fptostr(v6, Size, (int)&v10); /*0x7cee82*/
  if ( v11 - 1 < -4 || v11 - 1 >= (int)Size ) /*0x7cee9a*/
    return (char *)_cftoe2((unsigned char *)Src, (int)Size, a4, (int)&v10, 1); /*0x7ceecb G42.33 b26*/
  if ( v5 < v11 - 1 ) /*0x7cee9e*/
    v6[strlen(v6) - 1] = 0; /*0x7ceea7*/
  return (char *)_cftof2(Src, (int)Size, (unsigned int *)(void *)&v10, 1); /*0x7ceed3 G42.33 b26*/
}

// ==== BACKFILL 0x007CEF29  __shift  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void _shift(const char * Src, int a2)
{
  int v2; // eax

  if ( a2 ) /*0x7cef30*/
  {
    v2 = strlen(Src); /*0x7cef38*/
    memcpy((void *)&Src[a2], Src, v2 + 1); /*0x7cef43*/
  }
}

// ==== BACKFILL 0x007CF64C  __d_inttype  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int _d_inttype(double X)
{
  if ( (_fpclass(X) & 0x90) != 0 ) /*0x7cf662*/
    return 0; /*0x7cf6ad*/
  _frnd(X); /*0x7cf66c*/
  _frnd(X / 2.0); /*0x7cf695*/
  return 2; /*0x7cf6ab*/
}

// ==== BACKFILL 0x007CFECD  ___sbh_alloc_new_group  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int __sbh_alloc_new_group(unsigned int * aP0)  // G42.33 b26: truth _DWORD* (ida_cache 0x7CFECD)
{
  int v1; // esi
  int v2; // eax
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  unsigned int *v6; // edi
  unsigned int *v8; // eax

  v1 = aP0[4]; /*0x7cfed7*/
  v2 = aP0[2]; /*0x7cfeda*/
  v3 = 0; /*0x7cfedd*/
  while ( v2 >= 0 ) /*0x7cfee1*/
  {
    v2 *= 2; /*0x7cfee3*/
    ++v3; /*0x7cfee5*/
  }
  v4 = 63; /*0x7cfef2*/
  v5 = 516 * v3 + v1 + 324; /*0x7cfef3*/
  do /*0x7cff07*/
  {
    *(unsigned int *)(v5 + 8) = v5; /*0x7cfefd*/
    *(unsigned int *)(v5 + 4) = v5; /*0x7cff00*/
    v5 += 8; /*0x7cff03*/
    --v4; /*0x7cff06*/
  }
  while ( v4 ); /*0x7cff07*/
  v6 = (unsigned int *)(aP0[3] + (v3 << 15)); /*0x7cff10*/
  if ( !VirtualAlloc(v6, 0x8000u, 0x1000u, 4u) ) /*0x7cff1e*/
    return -1; /*0x7cff28*/
  if ( v6 < v6 + 7168 ) /*0x7cff38*/
  {
    v8 = v6 + 4; /*0x7cff3a*/
    do /*0x7cff74*/
    {
      *(v8 - 2) = -1; /*0x7cff3d*/
      v8[1019] = -1; /*0x7cff41*/
      *(v8 - 1) = 4080; /*0x7cff4e*/
      *v8 = (unsigned int)(v8 + 1023); /*0x7cff55 G42.33 b26*/
      v8[1] = (unsigned int)(v8 - 1025); /*0x7cff5d G42.33 b26*/
      v8[1018] = 4080; /*0x7cff60*/
      v8 += 1024; /*0x7cff6a*/
    }
    while ( v8 - 4 <= v6 + 7168 ); /*0x7cff74*/
  }
  *(unsigned int *)(516 * v3 + v1 + 832) = (unsigned int)(v6 + 3); /*0x7cff84 G42.33 b26*/
  v6[5] = 516 * v3 + v1 + 828; /*0x7cff87*/
  *(unsigned int *)(516 * v3 + v1 + 836) = (unsigned int)(v6 + 7171); /*0x7cff8d G42.33 b26*/
  v6[7172] = 516 * v3 + v1 + 828; /*0x7cff90*/
  *(unsigned int *)(v1 + 4 * v3 + 68) = 0; /*0x7cff93*/
  *(unsigned int *)(v1 + 4 * v3 + 196) = 1; /*0x7cff98*/
  if ( (*(unsigned char *)(v1 + 67))++ == 0 ) /*0x7cffa6*/
    aP0[1] |= 1u; /*0x7cffb0*/
  aP0[2] &= ~(0x80000000 >> v3); /*0x7cffbe*/
  return v3; /*0x7cffc3*/
}
