#!/usr/bin/env python3
"""
Generate annotations.json for idempotency analysis.

Three tiers:
  1. Import table → built-in region database (auto)
  2. Function name patterns → heuristics (auto)
  3. Manual overrides → edge cases (human-maintained, empty by default)

Output: annotations.json (committed to git)
"""

import json
from pathlib import Path

# ============================================================
# Tier 1: Import rules — per-DLL/per-function region database
# ============================================================

# Region tags used by the analysis:
#   HEAP       — heap-allocated memory (malloc, HeapAlloc, VirtualAlloc)
#   SURFACE    — DDraw surface buffer (Lock, CreateDIBSection bits)
#   HANDLE     — opaque OS handle (HWND, HDC, HANDLE, HMODULE)
#   CODE       — code/data in foreign module (.text of another DLL)
#   VOID       — no meaningful return value (void, BOOL, DWORD, int)
#   FOREIGN    — pointer to foreign memory, definitely not gamemd's .data
#   STACK      — stack-local memory
#   UNKNOWN    — cannot determine (conservative → non-idempotent)

IMPORT_RULES: dict[str, dict[str, dict]] = {
    "KERNEL32": {
        # Heap management → HEAP
        "HeapAlloc":                 {"return": "HEAP"},
        "HeapReAlloc":               {"return": "HEAP"},
        "HeapCreate":                {"return": "HEAP"},
        "GetProcessHeap":            {"return": "HEAP"},
        "HeapSize":                  {"return": "VOID"},
        "HeapDestroy":               {"return": "VOID"},
        "HeapFree":                  {"return": "VOID"},
        # Virtual memory → HEAP
        "VirtualAlloc":              {"return": "HEAP"},
        "VirtualFree":               {"return": "VOID"},
        "VirtualProtect":            {"return": "VOID"},
        "VirtualQuery":              {"return": "VOID"},
        "FlushInstructionCache":     {"return": "VOID"},
        # File I/O → HANDLE
        "CreateFileA":               {"return": "HANDLE"},
        "CloseHandle":               {"return": "VOID"},
        "ReadFile":                  {"return": "VOID"},
        "WriteFile":                 {"return": "VOID"},
        "SetFilePointer":            {"return": "VOID"},
        "SetEndOfFile":              {"return": "VOID"},
        "GetFileSize":               {"return": "VOID"},
        "GetFileTime":               {"return": "VOID"},
        "SetFileTime":               {"return": "VOID"},
        "GetFileType":               {"return": "VOID"},
        "GetFileAttributesA":        {"return": "VOID"},
        "GetFileInformationByHandle":{"return": "VOID"},
        "FlushFileBuffers":          {"return": "VOID"},
        "FindFirstFileA":            {"return": "HANDLE"},
        "FindNextFileA":             {"return": "VOID"},
        "FindClose":                 {"return": "VOID"},
        "CopyFileA":                 {"return": "VOID"},
        "DeleteFileA":               {"return": "VOID"},
        "CreateDirectoryA":          {"return": "VOID"},
        "GetTempFileNameA":          {"return": "VOID"},
        # File mapping → HEAP
        "MapViewOfFileEx":           {"return": "HEAP"},
        "UnmapViewOfFile":           {"return": "VOID"},
        # Resource → CODE
        "FindResourceA":             {"return": "HANDLE"},
        "LoadResource":              {"return": "HANDLE"},
        "LockResource":              {"return": "CODE"},
        "LoadLibraryA":              {"return": "CODE"},
        "FreeLibrary":               {"return": "VOID"},
        "GetModuleHandleA":          {"return": "CODE"},
        "GetModuleFileNameA":        {"return": "VOID"},
        "GetProcAddress":            {"return": "CODE"},
        # Synchronization → HANDLE
        "CreateEventA":              {"return": "HANDLE"},
        "OpenEventA":                {"return": "HANDLE"},
        "SetEvent":                  {"return": "VOID"},
        "ResetEvent":                {"return": "VOID"},
        "CreateMutexA":              {"return": "HANDLE"},
        "OpenMutexA":                {"return": "HANDLE"},
        "ReleaseMutex":              {"return": "VOID"},
        "WaitForSingleObject":       {"return": "VOID"},
        "WaitForMultipleObjects":    {"return": "VOID"},
        # Critical sections
        "InitializeCriticalSection": {"return": "VOID"},
        "EnterCriticalSection":      {"return": "VOID"},
        "LeaveCriticalSection":      {"return": "VOID"},
        "DeleteCriticalSection":     {"return": "VOID"},
        # Thread
        "CreateThread":              {"return": "HANDLE"},
        "GetCurrentThread":          {"return": "HANDLE"},
        "GetCurrentThreadId":        {"return": "VOID"},
        "GetCurrentProcess":         {"return": "HANDLE"},
        "GetCurrentProcessId":       {"return": "VOID"},
        "SetThreadPriority":         {"return": "VOID"},
        "Sleep":                     {"return": "VOID"},
        "TlsAlloc":                  {"return": "VOID"},
        "TlsFree":                   {"return": "VOID"},
        "TlsGetValue":               {"return": "VOID"},   # returns void*, could be anything
        "TlsSetValue":               {"return": "VOID"},
        # Process
        "CreateProcessA":            {"return": "VOID"},
        "GetExitCodeProcess":        {"return": "VOID"},
        "TerminateProcess":          {"return": "VOID"},
        "ExitProcess":               {"return": "VOID"},
        "GetStartupInfoA":           {"return": "VOID"},
        "GetCommandLineA":           {"return": "FOREIGN"},
        # Error handling
        "GetLastError":              {"return": "VOID"},
        "SetLastError":              {"return": "VOID"},
        "FormatMessageA":            {"return": "VOID"},
        "SetUnhandledExceptionFilter":{"return": "VOID"},
        "UnhandledExceptionFilter":  {"return": "VOID"},
        "RaiseException":            {"return": "VOID"},
        "RtlUnwind":                 {"return": "VOID"},
        "FatalAppExitA":             {"return": "VOID"},
        # Time
        "GetSystemTime":             {"return": "VOID"},
        "GetLocalTime":              {"return": "VOID"},
        "GetTickCount":              {"return": "VOID"},
        "GetTimeZoneInformation":    {"return": "VOID"},
        "SystemTimeToFileTime":      {"return": "VOID"},
        "FileTimeToSystemTime":      {"return": "VOID"},
        "FileTimeToLocalFileTime":   {"return": "VOID"},
        "CompareFileTime":           {"return": "VOID"},
        "FileTimeToDosDateTime":     {"return": "VOID"},
        "DosDateTimeToFileTime":     {"return": "VOID"},
        "GetTimeFormatA":            {"return": "VOID"},
        "GetDateFormatA":            {"return": "VOID"},
        "QueryPerformanceCounter":   {"return": "VOID"},
        "QueryPerformanceFrequency": {"return": "VOID"},
        # Misc
        "MulDiv":                    {"return": "VOID"},
        "IsBadReadPtr":              {"return": "VOID"},
        "IsBadWritePtr":             {"return": "VOID"},
        "IsBadCodePtr":              {"return": "VOID"},
        "InterlockedIncrement":      {"return": "VOID"},
        "InterlockedDecrement":      {"return": "VOID"},
        "GlobalMemoryStatus":        {"return": "VOID"},
        "GetVersion":                {"return": "VOID"},
        "GetVersionExA":             {"return": "VOID"},
        "GetComputerNameA":          {"return": "VOID"},
        "GetVolumeInformationA":     {"return": "VOID"},
        "GetDiskFreeSpaceA":         {"return": "VOID"},
        "GetDriveTypeA":             {"return": "VOID"},
        "GetLogicalDriveStringsA":   {"return": "VOID"},
        "GetWindowsDirectoryA":      {"return": "VOID"},
        "GetCurrentDirectoryA":      {"return": "VOID"},
        "SetCurrentDirectoryA":      {"return": "VOID"},
        "SetEnvironmentVariableA":   {"return": "VOID"},
        "GetEnvironmentStrings":     {"return": "FOREIGN"},
        "GetEnvironmentStringsW":    {"return": "FOREIGN"},
        "FreeEnvironmentStringsA":   {"return": "VOID"},
        "FreeEnvironmentStringsW":   {"return": "VOID"},
        # Locale
        "GetLocaleInfoA":            {"return": "VOID"},
        "GetLocaleInfoW":            {"return": "VOID"},
        "GetUserDefaultLCID":        {"return": "VOID"},
        "IsValidLocale":             {"return": "VOID"},
        "IsValidCodePage":           {"return": "VOID"},
        "EnumSystemLocalesA":        {"return": "VOID"},
        "GetCPInfo":                 {"return": "VOID"},
        "GetACP":                    {"return": "VOID"},
        "GetOEMCP":                  {"return": "VOID"},
        "CompareStringA":            {"return": "VOID"},
        "CompareStringW":            {"return": "VOID"},
        "GetStringTypeA":            {"return": "VOID"},
        "GetStringTypeW":            {"return": "VOID"},
        "LCMapStringA":              {"return": "VOID"},
        "LCMapStringW":              {"return": "VOID"},
        "MultiByteToWideChar":       {"return": "VOID"},
        "WideCharToMultiByte":       {"return": "VOID"},
        # Console
        "AllocConsole":              {"return": "VOID"},
        "FreeConsole":               {"return": "VOID"},
        "SetConsoleMode":            {"return": "VOID"},
        "GetConsoleMode":            {"return": "VOID"},
        "SetConsoleCtrlHandler":     {"return": "VOID"},
        "ReadConsoleInputA":         {"return": "VOID"},
        "PeekConsoleInputA":         {"return": "VOID"},
        "GetNumberOfConsoleInputEvents":{"return": "VOID"},
        "WriteConsoleA":             {"return": "VOID"},
        "GetStdHandle":              {"return": "HANDLE"},
        "SetStdHandle":              {"return": "VOID"},
        "SetHandleCount":            {"return": "VOID"},
        # String
        "lstrcpyA":                  {"return": "VOID"},
        "lstrcatA":                  {"return": "VOID"},
        "lstrlenA":                  {"return": "VOID"},
        "lstrlenW":                  {"return": "VOID"},
        "LocalFree":                 {"return": "VOID"},
        # Comm
        "EscapeCommFunction":        {"return": "VOID"},
        "ClearCommBreak":            {"return": "VOID"},
        "SetCommBreak":              {"return": "VOID"},
        "GetCommState":              {"return": "VOID"},
        "SetCommState":              {"return": "VOID"},
        "SetCommTimeouts":           {"return": "VOID"},
        "SetupComm":                 {"return": "VOID"},
        "PurgeComm":                 {"return": "VOID"},
        "ClearCommError":            {"return": "VOID"},
        "GetCommMask":               {"return": "VOID"},
        "GetCommModemStatus":        {"return": "VOID"},
        "GetOverlappedResult":       {"return": "VOID"},
        "EscapeCommFunction":        {"return": "VOID"},
        "DeviceIoControl":           {"return": "VOID"},
    },
    "USER32": {
        # Window → HANDLE (HWND)
        "CreateWindowExA":           {"return": "HANDLE"},
        "DestroyWindow":             {"return": "VOID"},
        "FindWindowA":               {"return": "HANDLE"},
        "GetWindow":                 {"return": "HANDLE"},
        "GetTopWindow":              {"return": "HANDLE"},
        "GetForegroundWindow":       {"return": "HANDLE"},
        "GetActiveWindow":           {"return": "HANDLE"},
        "GetFocus":                  {"return": "HANDLE"},
        "GetParent":                 {"return": "HANDLE"},
        "GetDlgItem":                {"return": "HANDLE"},
        "GetDlgCtrlID":              {"return": "VOID"},
        "GetNextDlgTabItem":         {"return": "HANDLE"},
        "ChildWindowFromPoint":      {"return": "HANDLE"},
        "ChildWindowFromPointEx":    {"return": "HANDLE"},
        "WindowFromPoint":           {"return": "HANDLE"},
        "SetActiveWindow":           {"return": "HANDLE"},
        "SetForegroundWindow":       {"return": "VOID"},
        "BringWindowToTop":          {"return": "VOID"},
        # DC → HANDLE (HDC)
        "GetDC":                     {"return": "HANDLE"},
        "ReleaseDC":                 {"return": "VOID"},
        "BeginPaint":                {"return": "HANDLE"},
        "EndPaint":                  {"return": "VOID"},
        # Cursor
        "LoadCursorA":               {"return": "HANDLE"},
        "SetCursor":                 {"return": "HANDLE"},
        "SetCursorPos":              {"return": "VOID"},
        "GetCursorPos":              {"return": "VOID"},
        "ShowCursor":                {"return": "VOID"},
        # Icon
        "LoadIconA":                 {"return": "HANDLE"},
        # Menu
        "GetMenu":                   {"return": "HANDLE"},
        # Window manipulation
        "ShowWindow":                {"return": "VOID"},
        "UpdateWindow":              {"return": "VOID"},
        "MoveWindow":                {"return": "VOID"},
        "SetWindowPos":              {"return": "VOID"},
        "SetWindowLongA":            {"return": "VOID"},
        "GetWindowLongA":            {"return": "VOID"},
        "GetWindowRect":             {"return": "VOID"},
        "GetClientRect":             {"return": "VOID"},
        "GetWindowTextA":            {"return": "VOID"},
        "GetClassNameA":             {"return": "VOID"},
        "SetFocus":                  {"return": "HANDLE"},
        "EnableWindow":              {"return": "VOID"},
        "IsWindowEnabled":           {"return": "VOID"},
        "IsWindowVisible":           {"return": "VOID"},
        "EnumChildWindows":          {"return": "VOID"},
        "GetUpdateRect":             {"return": "VOID"},
        "InvalidateRect":            {"return": "VOID"},
        "ValidateRect":              {"return": "VOID"},
        "RedrawWindow":              {"return": "VOID"},
        "LockWindowUpdate":          {"return": "VOID"},
        "CloseWindow":               {"return": "VOID"},
        "ScreenToClient":            {"return": "VOID"},
        "ClientToScreen":            {"return": "VOID"},
        "SetRect":                   {"return": "VOID"},
        "IntersectRect":             {"return": "VOID"},
        "AdjustWindowRect":          {"return": "VOID"},
        "AdjustWindowRectEx":        {"return": "VOID"},
        "GetSystemMetrics":          {"return": "VOID"},
        "GetSysColor":               {"return": "VOID"},
        # Capture
        "SetCapture":                {"return": "HANDLE"},
        "ReleaseCapture":            {"return": "VOID"},
        "GetCapture":                {"return": "HANDLE"},
        # Message
        "SendMessageA":              {"return": "VOID"},
        "PostMessageA":              {"return": "VOID"},
        "SendDlgItemMessageA":       {"return": "VOID"},
        "PeekMessageA":              {"return": "VOID"},
        "GetMessageA":               {"return": "VOID"},
        "TranslateMessage":          {"return": "VOID"},
        "DispatchMessageA":          {"return": "VOID"},
        "PostQuitMessage":           {"return": "VOID"},
        "CallWindowProcA":           {"return": "VOID"},
        "DefWindowProcA":            {"return": "VOID"},
        "IsDialogMessageA":          {"return": "VOID"},
        "TranslateAcceleratorA":     {"return": "VOID"},
        "WaitForInputIdle":          {"return": "VOID"},
        # Dialog
        "CreateDialogParamA":        {"return": "HANDLE"},
        "CreateDialogIndirectParamA":{"return": "HANDLE"},
        "DialogBoxParamA":           {"return": "VOID"},
        "DialogBoxIndirectParamA":   {"return": "VOID"},
        "EndDialog":                 {"return": "VOID"},
        "SetDlgItemTextA":           {"return": "VOID"},
        "CheckDlgButton":            {"return": "VOID"},
        "IsDlgButtonChecked":        {"return": "VOID"},
        # Timer
        "SetTimer":                  {"return": "VOID"},
        "KillTimer":                 {"return": "VOID"},
        # Keyboard
        "GetKeyState":               {"return": "VOID"},
        "GetAsyncKeyState":          {"return": "VOID"},
        "GetKeyNameTextA":           {"return": "VOID"},
        "MapVirtualKeyA":            {"return": "VOID"},
        "ToAscii":                   {"return": "VOID"},
        # Misc
        "wsprintfA":                 {"return": "VOID"},
        "MessageBoxA":               {"return": "VOID"},
        "MessageBoxIndirectA":       {"return": "VOID"},
        "RegisterClassA":            {"return": "VOID"},
        "RegisterHotKey":            {"return": "VOID"},
        "WinHelpA":                  {"return": "VOID"},
        "GetWindowContextHelpId":    {"return": "VOID"},
        "CharToOemBuffA":            {"return": "VOID"},
    },
    "GDI32": {
        # Device context
        "SaveDC":                    {"return": "VOID"},
        "RestoreDC":                 {"return": "VOID"},
        "GetDeviceCaps":             {"return": "VOID"},
        "SetGraphicsMode":           {"return": "VOID"},
        "SetViewportOrgEx":          {"return": "VOID"},
        "SetWindowOrgEx":            {"return": "VOID"},
        "ModifyWorldTransform":      {"return": "VOID"},
        "DPtoLP":                    {"return": "VOID"},
        # Bitmap / DIB
        "CreateDIBSection":          {"return": "HANDLE"},  # HBITMAP; ppvBits out-param→SURFACE (Phase 3)
        # Font
        "CreateFontIndirectA":       {"return": "HANDLE"},
        "GetTextMetricsA":           {"return": "VOID"},
        # Drawing
        "TextOutA":                  {"return": "VOID"},
        # Colors
        "SetTextColor":              {"return": "VOID"},
        "SetBkColor":                {"return": "VOID"},
        "SetBkMode":                 {"return": "VOID"},
        "GetBkColor":                {"return": "VOID"},
        "GetBkMode":                 {"return": "VOID"},
        "GetTextColor":              {"return": "VOID"},
        # Objects
        "SelectObject":              {"return": "HANDLE"},
        "DeleteObject":              {"return": "VOID"},
        "GetStockObject":            {"return": "HANDLE"},
        "CreateSolidBrush":          {"return": "HANDLE"},
    },
    "ADVAPI32": {
        "RegOpenKeyExA":             {"return": "VOID"},
        "RegCreateKeyExA":           {"return": "VOID"},
        "RegCloseKey":               {"return": "VOID"},
        "RegQueryValueExA":          {"return": "VOID"},
        "RegSetValueExA":            {"return": "VOID"},
        "RegDeleteValueA":           {"return": "VOID"},
        "RegDeleteKeyA":             {"return": "VOID"},
        "RegEnumKeyExA":             {"return": "VOID"},
        "RegQueryInfoKeyA":          {"return": "VOID"},
    },
    "SHELL32": {
        "FindExecutableA":           {"return": "HANDLE"},
    },
    "ole32": {
        "OleInitialize":             {"return": "VOID"},
        "OleUninitialize":           {"return": "VOID"},
        "CoCreateInstance":          {"return": "HANDLE"},
        "CoRegisterClassObject":     {"return": "VOID"},
        "CoRevokeClassObject":       {"return": "VOID"},
        "CoDisconnectObject":        {"return": "VOID"},
        "CoFileTimeNow":             {"return": "VOID"},
        "StgCreateDocfile":          {"return": "HANDLE"},
        "StgOpenStorage":            {"return": "HANDLE"},
        "StringFromGUID2":           {"return": "VOID"},
        "StringFromCLSID":           {"return": "VOID"},
        "CLSIDFromString":           {"return": "VOID"},
        "OleSaveToStream":           {"return": "VOID"},
        "OleLoadFromStream":         {"return": "VOID"},
        "OleRun":                    {"return": "VOID"},
    },
    "OLEAUT32": {
        "SysAllocString":            {"return": "HEAP"},     # BSTR on heap
        "SysFreeString":             {"return": "VOID"},
        "VariantInit":               {"return": "VOID"},
        "VariantClear":              {"return": "VOID"},
        "VariantChangeType":         {"return": "VOID"},
        "RegisterActiveObject":      {"return": "VOID"},
        "RevokeActiveObject":        {"return": "VOID"},
        "LoadTypeLib":               {"return": "HANDLE"},
        "GetErrorInfo":              {"return": "VOID"},
        "SetErrorInfo":              {"return": "VOID"},
        "CreateErrorInfo":           {"return": "VOID"},
    },
    "WINMM": {
        "timeGetTime":               {"return": "VOID"},
        "timeBeginPeriod":           {"return": "VOID"},
        "timeEndPeriod":             {"return": "VOID"},
        "timeSetEvent":              {"return": "VOID"},
        "timeKillEvent":             {"return": "VOID"},
    },
    "WSOCK32": {
        "bind":                      {"return": "VOID"},
        "closesocket":               {"return": "VOID"},
        "getsockopt":                {"return": "VOID"},
        "setsockopt":                {"return": "VOID"},
        "recvfrom":                  {"return": "VOID"},
        "sendto":                    {"return": "VOID"},
        "socket":                    {"return": "VOID"},     # SOCKET is int-ish
        "gethostbyname":             {"return": "FOREIGN"},
        "gethostname":               {"return": "VOID"},
        "htonl":                     {"return": "VOID"},
        "htons":                     {"return": "VOID"},
        "ntohl":                     {"return": "VOID"},
        "ntohs":                     {"return": "VOID"},
        "inet_ntoa":                 {"return": "FOREIGN"},
        "WSAAsyncSelect":            {"return": "VOID"},
        "WSAGetLastError":           {"return": "VOID"},
        "WSAStartup":                {"return": "VOID"},
        "WSACleanup":                {"return": "VOID"},
        "EnumProtocolsA":            {"return": "VOID"},
    },
    "DDRAW": {
        "DirectDrawCreate":          {"return": "HANDLE"},   # IDirectDraw7*
    },
    "DSOUND": {
        "DirectSoundCreate":         {"return": "HANDLE"},   # IDirectSound*
    },
    "VERSION": {
        "VerQueryValueA":            {"return": "VOID"},
        "GetFileVersionInfoSizeA":   {"return": "VOID"},
        "GetFileVersionInfoA":       {"return": "VOID"},
    },
    "COMCTL32": {
        "InitCommonControls":        {"return": "VOID"},
        "ImageList_BeginDrag":       {"return": "VOID"},
        "ImageList_DragEnter":       {"return": "VOID"},
        "ImageList_DragMove":        {"return": "VOID"},
        "ImageList_DragShowNolock":  {"return": "VOID"},
        "ImageList_EndDrag":         {"return": "VOID"},
        "ImageList_Destroy":         {"return": "VOID"},
    },
    "IMM32": {
        "ImmGetContext":             {"return": "HANDLE"},
        "ImmAssociateContext":       {"return": "HANDLE"},
        "ImmNotifyIME":              {"return": "VOID"},
        "ImmGetCandidateListA":      {"return": "VOID"},
        "ImmGetCompositionStringA":  {"return": "VOID"},
        "ImmSetOpenStatus":          {"return": "VOID"},
    },
    "binkw32": {
        "_BinkOpen@8":               {"return": "HANDLE"},   # HBINK
        "_BinkClose@4":              {"return": "VOID"},
        "_BinkNextFrame@4":          {"return": "VOID"},
        "_BinkDoFrame@4":            {"return": "VOID"},
        "_BinkWait@4":               {"return": "VOID"},
        "_BinkCopyToBuffer@28":      {"return": "VOID"},
        "_BinkSetVolume@8":          {"return": "VOID"},
        "_BinkSetSoundSystem@8":     {"return": "VOID"},
        "_BinkOpenDirectSound@4":    {"return": "VOID"},
        "_BinkDDSurfaceType@4":      {"return": "VOID"},
        "_BinkGetError@0":           {"return": "VOID"},
        "_BinkGoto@12":              {"return": "VOID"},
        "_BinkPause@8":              {"return": "VOID"},
    },
}


# ============================================================
# Tier 2: Name pattern heuristics
# ============================================================

# Internal gamemd functions that match these patterns get auto-annotated
# Patterns are tested against the full function name (e.g., "XSurface::Lock")
# First match wins. Order matters — put specific patterns before general ones.

NAME_PATTERNS: list[dict] = [
    # Surface / buffer access → SURFACE
    {"pattern": r".*::Lock\b",               "return": "SURFACE"},
    {"pattern": r".*::GetTrueSurface\b",     "return": "SURFACE"},
    {"pattern": r".*::GetVidSurface\b",      "return": "SURFACE"},
    {"pattern": r".*::GetHiddenSurface\b",   "return": "SURFACE"},
    {"pattern": r".*::GetBackSurface\b",     "return": "SURFACE"},
    {"pattern": r".*::GetFrontSurface\b",    "return": "SURFACE"},
    {"pattern": r".*::GetCompositeSurface\b","return": "SURFACE"},
    {"pattern": r".*::GetBuffer\b",          "return": "VOID"},      # returns void/ref

    # Unlock / release → VOID
    {"pattern": r".*::Unlock\b",             "return": "VOID"},
    {"pattern": r".*::Release\b",            "return": "VOID"},
    {"pattern": r".*::Free\b",               "return": "VOID"},
    {"pattern": r".*::Delete\b",             "return": "VOID"},
    {"pattern": r".*::Destroy\b",            "return": "VOID"},

    # Allocation → HEAP
    {"pattern": r".*::Alloc(ate)?\b",        "return": "HEAP"},
    {"pattern": r".*::Create\b",             "return": "HANDLE"},
    {"pattern": r".*::New\b",                "return": "HEAP"},

    # Query / Get (likely pure, return is from stack or existing data)
    {"pattern": r".*::Get\w+\b",             "return": "VOID"},
    {"pattern": r".*::Query\w+\b",           "return": "VOID"},
    {"pattern": r".*::Find\w+\b",            "return": "VOID"},
    {"pattern": r".*::Is\w+\b",              "return": "VOID"},

    # Init / Load / Read
    {"pattern": r".*::Init\b",               "return": "VOID"},
    {"pattern": r".*::Load\b",               "return": "VOID"},
    {"pattern": r".*::Read\b",               "return": "VOID"},
    {"pattern": r".*::Write\b",              "return": "VOID"},
    {"pattern": r".*::Open\b",               "return": "HANDLE"},
    {"pattern": r".*::Close\b",              "return": "VOID"},

    # Draw / Render (void return)
    {"pattern": r".*::Draw\w+\b",            "return": "VOID"},
    {"pattern": r".*::Render\w+\b",          "return": "VOID"},
    {"pattern": r".*::Blit\w+\b",            "return": "VOID"},
    {"pattern": r".*::Fill\w+\b",            "return": "VOID"},
    {"pattern": r".*::Put\w+\b",             "return": "VOID"},
    {"pattern": r".*::Set\w+\b",             "return": "VOID"},

    # Update / Process (void)
    {"pattern": r".*::Update\b",             "return": "VOID"},
    {"pattern": r".*::Process\b",            "return": "VOID"},
    {"pattern": r".*::Clear\b",              "return": "VOID"},
]


# ============================================================
# Tier 3: Manual overrides (human-maintained)
# ============================================================

# Format: address → { "return": region, "reason": "..." }
# Override takes priority over import rules and name patterns.
# Only add entries where auto-detection produces wrong results.

MANUAL_OVERRIDES: dict[str, dict] = {
    # Add entries like:
    # "0x7BAD80": {"return": "SURFACE", "reason": "DDraw surface Lock wrapper"},
}


# ============================================================
# Generator
# ============================================================

def generate(output_path: Path) -> None:
    annotation = {
        "_comment": "Auto-generated annotations for idempotency analysis. Edit MANUAL_OVERRIDES in gen_annotations.py, then re-run.",
        "_regions": {
            "HEAP":    "heap-allocated memory (malloc, HeapAlloc, VirtualAlloc)",
            "SURFACE": "DDraw surface buffer pixels",
            "HANDLE":  "opaque OS handle (HWND, HDC, HANDLE, HMODULE)",
            "CODE":    "code/data in foreign module",
            "VOID":    "no pointer return (int, bool, void function)",
            "FOREIGN": "pointer to foreign memory, definitely not gamemd's .data",
            "STACK":   "stack-local memory",
            "UNKNOWN": "cannot determine (conservative → non-idempotent)",
        },
        "imports": IMPORT_RULES,
        "name_patterns": NAME_PATTERNS,
        "overrides": MANUAL_OVERRIDES,
    }

    output_path.parent.mkdir(parents=True, exist_ok=True)
    with open(output_path, "w", encoding="utf-8") as f:
        json.dump(annotation, f, indent=2, ensure_ascii=False)


def main():
    script_dir = Path(__file__).parent
    output_path = script_dir / "annotations.json"

    generate(output_path)
    total = sum(len(v) for v in IMPORT_RULES.values())
    print(f"Generated {output_path}")
    print(f"Import rules: {total} across {len(IMPORT_RULES)} modules")
    print(f"Name patterns: {len(NAME_PATTERNS)}")
    print(f"Manual overrides: {len(MANUAL_OVERRIDES)}")


if __name__ == "__main__":
    main()
