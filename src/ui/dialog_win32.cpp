// Dialog system -- Win32 dialog wrapper infrastructure
// Reverse-engineered from gamemd.exe IDA decompile
// These are the original Win32 CreateDialogIndirectParamA wrappers and
// dialog tracking system used by the game's menu screens.
#include "ui/dialog.hpp"
#include <windows.h>
#include <cstring>

namespace gamemd {
namespace Dialog {

// ============================================================================
// Internal dialog tracking state (mirrors binary .data layout:
//   B72D28: array of {HWND hWnd, int type} pairs
//   B72F50: g_DialogTrackingList (count)
//   B72F44: g_currentDialogHwnd
//   B72F48: g_currentDialogType)
// ============================================================================

struct DialogEntry {
    HWND hWnd;
    int  type;  // dialog template/resource type ID
};

constexpr int MAX_DIALOGS = 32;

static DialogEntry  g_entries[MAX_DIALOGS] = {};
static int          g_count = 0;          // B72F50: g_DialogTrackingList
static HWND         g_currentHwnd = 0;    // B72F44: dword_B72F44
static int          g_currentType = 0;    // B72F48: dword_B72F48

// ============================================================================
// Tracking helpers
// ============================================================================

// IDA 0x775940: Dialog::FindByHandle — search by HWND, return type
// Iterates g_entries[g_count-1..0], compares entry.hWnd == hWnd, returns entry.type
static int FindByHandle_impl(HWND hWnd)
{
    for (int i = g_count - 1; i >= 0; --i) {
        if (g_entries[i].hWnd == hWnd)
            return g_entries[i].type;
    }
    return 0;
}

// IDA 0x7759B0: Dialog::FindByPtr — search by type, return HWND
// Iterates g_entries[g_count-1..0], compares entry.type == type, returns entry.hWnd
static HWND FindByPtr_impl(int type)
{
    for (int i = g_count - 1; i >= 0; --i) {
        if (g_entries[i].type == type)
            return g_entries[i].hWnd;
    }
    return 0;
}

// Register a new dialog in tracking
static void TrackDialog(HWND hWnd, int type)
{
    if (g_count < MAX_DIALOGS) {
        g_entries[g_count].hWnd = hWnd;
        g_entries[g_count].type = type;
        ++g_count;
    }
    g_currentHwnd = hWnd;
    g_currentType = type;
}

// Remove a dialog from tracking (index i), shift remaining entries down
static void UntrackDialog(int idx)
{
    if (idx < 0 || idx >= g_count) return;
    // memmove: shift entries [idx+1..g_count-1] to [idx..g_count-2]
    int tail = g_count - idx - 1;
    if (tail > 0)
        std::memmove(&g_entries[idx], &g_entries[idx + 1], tail * sizeof(DialogEntry));
    // Zero the vacated last slot
    g_entries[g_count - 1].hWnd = 0;
    g_entries[g_count - 1].type = 0;
    --g_count;

    // Update current to last entry or zero
    if (g_count > 0) {
        g_currentHwnd = g_entries[g_count - 1].hWnd;
        g_currentType = g_entries[g_count - 1].type;
    } else {
        g_currentHwnd = 0;
        g_currentType = 0;
    }
}

// ============================================================================
// Public API
// ============================================================================

// IDA 0x622650: CreateDialog — wrapper around Win32 CreateDialogIndirectParamA
// Called by: SaveLoadDialog::DlgProc, Options::Screen_Dialog, etc.
HWND Create(int template_id, DLGPROC dlg_proc, LPARAM lParam)
{
    // IDA: Calls ResourceFind(template_id, type=5) -> DLGTEMPLATE*
    //       then CreateDialogIndirectParamA(g_hInstance, template, g_hWnd, dlg_proc, lParam)
    //       then registers to internal tracking array

    // STUB: ResourceFind not yet implemented, use basic CreateDialogParamA for now
    HINSTANCE hInst = GetModuleHandleA(nullptr);
    HWND hWnd = CreateDialogParamA(hInst, MAKEINTRESOURCEA(template_id),
                                    GetActiveWindow(), dlg_proc, lParam);
    if (hWnd) {
        TrackDialog(hWnd, template_id);
    }
    return hWnd;
}

// IDA 0x622720: Dialog::Destroy — destroy, PumpMessages, untrack
void Destroy(HWND hWnd)
{
    // IDA: Timer::PumpMessages(g_BinkMoviePlayer)
    //       Dialog::IdleProcess(hWnd)
    //       DestroyWindow(hWnd)
    //       Search g_entries for hWnd, memmove to remove, update count
    //       Update g_currentHwnd/g_currentType, SetForegroundWindow(g_hWnd)

    // Pump pending messages
    MSG msg;
    while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    // IdleProcess: calls DispatchMessageA loop
    IdleProcess(hWnd);

    DestroyWindow(hWnd);

    // Remove from tracking
    for (int i = 0; i < g_count; ++i) {
        if (g_entries[i].hWnd == hWnd) {
            UntrackDialog(i);
            break;
        }
    }

    // Focus back to game window
    if (g_currentHwnd) {
        SetForegroundWindow(g_currentHwnd);
        SetFocus(g_currentHwnd);
    }
}

// IDA 0x622B50: BaseDialogProc — default dialog message handler (56 basic blocks)
// Handles: WM_INITDIALOG, WM_CLOSE, WM_COMMAND, WM_PAINT, WM_CTLCOLOR*, etc.
INT_PTR CALLBACK BaseProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg) {
    case WM_INITDIALOG:
        // IDA: stores hWnd, calls SetupDialog helpers, returns TRUE
        return TRUE;

    case WM_CLOSE:
        DestroyWindow(hWnd);
        return TRUE;

    case WM_COMMAND: {
        // IDA: handles button clicks via ControlDialogHandler
        // LOWORD(wParam) = control ID, HIWORD(wParam) = notification code
        if (HIWORD(wParam) == BN_CLICKED) {
            // Forward to control handler
            // ControlDialogHandler(hWnd, LOWORD(wParam));
        }
        return TRUE;
    }

    case WM_PAINT:
        // IDA: basic paint handling
        ValidateRect(hWnd, nullptr);
        return TRUE;

    case WM_CTLCOLORSTATIC:
    case WM_CTLCOLORBTN:
    case WM_CTLCOLORDLG:
        // IDA: custom color handling for dialog controls
        return TRUE;

    default:
        return FALSE;
    }
}

// IDA 0x5D4D50: Dialog::MessageLoop
// Custom message pump: PeekMessage + IsDialogMessage check + TranslateMessage + DispatchMessage
void MessageLoop()
{
    MSG msg;
    while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
        if (IsDialogMessageA(g_currentHwnd, &msg))
            continue;
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
}

// IDA 0x623120: Dialog::PumpMessages (convenience wrapper, 27 callers)
// Calls MessageLoop, then Event::Dispatch / GameFrameLoop based on game mode
void PumpMessages()
{
    MessageLoop();

    // IDA: if GameMode==0 || GameMode==5 || g_NetworkQuitFlag || g_GameFlags_Campaign
    //   Event::Dispatch()
    // else if !sub_55CBF0() && GameFrameLoop()
    //   return 1;
    // return 0;
}

// IDA 0x622800: Dialog::Show — ShowWindow + SetForegroundWindow + PumpMessages
void Show(HWND hWnd)
{
    ShowWindow(hWnd, SW_SHOW);
    SetForegroundWindow(hWnd);
    // IDA: Timer::PumpMessages(g_BinkMoviePlayer)
    PumpMessages();
}

// IDA 0x799D10: Dialog::CloseAll — close all tracked dialogs
void CloseAll()
{
    while (g_currentHwnd) {
        Destroy(g_currentHwnd);
    }
}

// IDA 0x775940: Dialog::FindByHandle — find dialog type by HWND
int FindByHandle(HWND hWnd)
{
    return FindByHandle_impl(hWnd);
}

// IDA 0x7759B0: Dialog::FindByPtr — find dialog HWND by type/ID
HWND FindByPtr(int type)
{
    return FindByPtr_impl(type);
}

// IDA 0x5E26C0: Dialog::FindGameUI — find active game UI window
// Tries types 0xC2, 0xC9, 0xBC, 0xBD in order
HWND FindGameUI()
{
    HWND hWnd = FindByPtr_impl(0xC2);
    if (hWnd) return hWnd;
    hWnd = FindByPtr_impl(0xC9);
    if (hWnd) return hWnd;
    hWnd = FindByPtr_impl(0xBC);
    if (hWnd) return hWnd;
    return FindByPtr_impl(0xBD);
}

// IDA 0x775B10: Dialog::GetCurrent — returns dword_B72F44
HWND GetCurrent()
{
    return g_currentHwnd;
}

// IDA 0x775B20: Dialog::GetCurrentType — returns dword_B72F48
int GetCurrentType()
{
    return g_currentType;
}

// IDA 0x775BA0: Dialog::GetField — EnumChildWindows + DialogClass::Reposition
// Calls EnumChildWindows(hWnd, DialogClass::Reposition, 1) then DialogClass::Reposition(hWnd, 0)
bool GetField(HWND hWnd)
{
    // IDA: EnumChildWindows(hWnd, DialogClass::Reposition, 1)
    //       return DialogClass::Reposition(hWnd, 0)
    // STUB: DialogClass::Reposition not implemented yet
    return false;
}

// IDA 0x5D5DD0: Dialog::GetMode3 — returns 3 if *(this+60) else -2
int GetMode3(void* dialog_data)
{
    uint8_t* ptr = (uint8_t*)(dialog_data);
    return ptr[60] != 0 ? 3 : -2;
}

// IDA 0x5D5DC0: Dialog::GetModeNeg2 — returns 0 if *(this+63) else -2
int GetModeNeg2(void* dialog_data)
{
    uint8_t* ptr = (uint8_t*)(dialog_data);
    return ptr[63] != 0 ? 0 : -2;
}

// IDA 0x777060: Dialog::RestoreParent — GetWindowLongA(GWL_USERDATA) then SetDialogParent
// Gets parent HWND from window user data, calls SetDialogParent if non-null
HWND RestoreParent(HWND hWnd)
{
    HWND parent = (HWND)(GetWindowLongPtrA(hWnd, GWLP_USERDATA));
    if (parent) {
        // IDA: SetDialogParent(hWnd, parent)
        SetParent(hWnd, parent);
    }
    return parent;
}

// IDA 0x77D820: Dialog::UpdateGameUI — PumpMessages, then InvalidateRect on game UI
void UpdateGameUI()
{
    PumpMessages();
    HWND gameUI = FindGameUI();
    if (gameUI) {
        InvalidateRect(gameUI, nullptr, TRUE);
    }
}

// IDA 0x5E2F60: Dialog::ShowPlayerName — GetDlgItem + SendMessageA
// Sends LB_SETITEMDATA to player name listbox
void ShowPlayerName(HWND hDlg)
{
    HWND listBox = GetDlgItem(hDlg, 1448);
    if (listBox) {
        SendMessageA(listBox, 0x4B2, 0, 0xA8B322); // EM_??? with player name data
    }
}

// IDA 0x622720: Dialog::IdleProcess — pump specific dialog messages
void IdleProcess(HWND hWnd)
{
    // IDA: calls IsDialogMessageA loop for the specific dialog
    MSG msg;
    while (PeekMessageA(&msg, hWnd, 0, 0, PM_REMOVE)) {
        if (IsDialogMessageA(hWnd, &msg))
            continue;
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
}

// ShowMessageBox defined below

// ShowMessage and ShowStatusText defined below (near bottom of file)

// IDA 0x6233A0: Dialog::CleanupTree — cleanup dialog widget tree
// Frees: (this+40) pointer, linked list at (this+52), and vector at (this+60)
void CleanupTree(void* dialog_data)
{
    // IDA: free *(this+40), cleanup linked list at *(this+52), DeleteAndZero::Alt *(this+60)
    uint8_t* base = (uint8_t*)(dialog_data);
    uint32_t* ptr40 = (uint32_t*)(base + 40);
    uint32_t* ptr52 = (uint32_t*)(base + 52);
    uint32_t* ptr60 = (uint32_t*)(base + 60);

    if (*ptr40) {
        // IDA: operator delete(*(this+40))
        delete (void*)(*ptr40);
        *ptr40 = 0;
    }

    // Cleanup linked list at offset 52
    while (*ptr52) {
        uint32_t* node = (uint32_t*)(*ptr52);
        uint32_t* prev = nullptr;
        uint32_t* curr = node;
        // Find node that points back to itself (end of chain)
        while (curr && (uint32_t*)(*curr) != node) {
            prev = curr;
            curr = (uint32_t*)(*curr);
        }
        if (prev)
            *prev = *node;  // unlink
        else
            *ptr52 = *node;  // update head
        delete node;
    }

    // Cleanup vector at offset 60
    if (*ptr60) {
        // IDA: DeleteAndZero::Alt(v5), then operator delete(v5)
        void** vec = (void**)(*ptr60);
        // Delete all elements in the vector
        void** end = vec + 1;  // simplified
        for (void** it = vec; it != end; ++it) {
            if (*it) delete *it;
        }
        delete vec;
        *ptr60 = 0;
    }
}

// IDA 0x60AAA0: Dialog::EnumAndCleanup — EnumChildWindows with cleanup callback
void EnumAndCleanup(HWND hWndParent)
{
    // IDA: EnumChildWindows(hWndParent, sub_60AA60, 0)
    // The callback sub_60AA60 destroys specific control windows
    EnumChildWindows(hWndParent, [](HWND hWnd, LPARAM) -> BOOL {
        // IDA: checks window class type, destroys matching controls
        DestroyWindow(hWnd);
        return TRUE;
    }, 0);
}

// IDA 0x5E9950: Dialog::MapPlayerIDToIndex — map control ID (0x411-0x418) to player index (0-7)
int MapPlayerIDToIndex(int control_id)
{
    // IDA: switch(control_id) 1041->0, 1042->1, ..., 1047->6, 1048->7, default->7
    if (control_id >= 0x411 && control_id <= 0x418) {
        return control_id - 0x411;
    }
    return 7;  // default: 0x418 or out of range -> 7
}

// IDA 0x4E59A0: Dialog::OptionIDToIndex — map option ID (0x76D-0x774) to index (0-7)
int OptionIDToIndex(int option_id)
{
    if (option_id >= 0x76D && option_id <= 0x774) {
        return option_id - 0x76D;
    }
    return 7;
}

// IDA 0x4E4EC0: Dialog::SideIDToIndex — map side ID (0x6A3-0x6AB) to index (0-7)
int SideIDToIndex(int side_id)
{
    // IDA: 0x6A3->0, 0x6A4->1, 0x6A5->2, 0x6A6->3,
    //      0x6A7->4, 0x6A8->5, 0x6AA->6, default->7
    // Note: 0x6A9 (1705) is NOT a valid side (skip)
    if (side_id == 0x6AA) return 6;  // special case: 1706->6
    if (side_id >= 0x6A3 && side_id <= 0x6AB) {
        if (side_id <= 0x6A8)
            return side_id - 0x6A3;
        return 7;  // 0x6AB(1707)->7
    }
    return 7;
}

// IDA 0x5EE350: Dialog::RefreshDialogsGame — refresh observe buttons on game dialogs
void RefreshDialogsGame()
{
    HWND hWnd;
    hWnd = FindByPtr_impl(0x116);
    if (hWnd) { /* UpdateObserveButtonWOL(hWnd) */ }
    hWnd = FindByPtr_impl(0x113);
    if (hWnd) { /* UpdateObserveButtonWOL(hWnd) */ }
    hWnd = FindByPtr_impl(0xBB);
    if (hWnd) { /* UpdateObserveButtonWOL(hWnd) */ }
}

// IDA 0x49F740: Dialog::sub_49F740 — copy protection message handler
// Called from MessageLoop; handles launcher messages (0xBEEF magic value)
void HandleLauncherMessage(int msg_data)
{
    // IDA: if *(msg_data + 4) == 0xBEEF (48879)
    //   Debug::Log("COPYPROTECTION - Received message from launcher.\n")
    //   MapViewOfFileEx(...)
    //   Debug::Log("***** MapViewOfFileEx() Failed!" or "The message says: %s\n")
    uint32_t* data = (uint32_t*)(msg_data);
    if (data[1] == 0xBEEF) {
        // Copy protection handshake from launcher - STUB
    }
}

// IDA 0x5F3450: Dialog::CheckButtonState — check modem button dialog state
// Reads vtable-based GetState + SetState from g_ClipboardBuffer (internal dialog data)
uint32_t CheckButtonState()
{
    // IDA: vtable call to get state, then check if specific button is pressed
    // Returns modified flags (clears bit 7 if button is down)
    return 0;  // STUB
}

// sub_624930 and sub_624BE0 defined below

// IDA 0x5B5BC0: Dialog::InitializeGameSettings — initialize game settings dialog
void InitializeGameSettings()
{
    // PENDING: IDA decompile needed (705 bytes)
}

// IDA 0x602AE0: Dialog::IsSpecialTemplate — check if template is special
// Returns true for template IDs: 293, 231, 278, 194, 201, 285, 284, 276, 700, 275, 265, 271, 279, 230, 243, 244, 270, 274
bool IsSpecialTemplate(int template_id)
{
    // IDA: cascade of == comparisons
    return template_id == 293 || template_id == 231 || template_id == 278 ||
           template_id == 194 || template_id == 201 || template_id == 285 ||
           template_id == 284 || template_id == 276 || template_id == 700 ||
           template_id == 275 || template_id == 265 || template_id == 271 ||
           template_id == 279 || template_id == 230 || template_id == 243 ||
           template_id == 244 || template_id == 270 || template_id == 274;
}

// IDA 0x6213A0: Dialog::Resize — resize dialog based on DSurface dimensions
void Resize(HWND hWnd)
{
    // IDA: checks DSurface_Primary and DSurface_Alternate exist
    // ScreenDialogToClient, GetClientRect, GetWindowLongA for style check
    // Adjusts rect based on system metrics, then MoveWindow/InvalidateRect

    // Simplified: just invalidate to trigger redraw
    InvalidateRect(hWnd, nullptr, TRUE);
    UpdateWindow(hWnd);
}

// IDA 0x607FD0: Dialog::StopBink — stop BINK video, send WM_COMMAND to stop button
void StopBink()
{
    // IDA: hashmap lookup for current dialog, find stop button (control ID 1818)
    // SendMessageA(BM_SETCHECK) to stop BINK playback
    HWND hCurrent = GetCurrent();
    if (hCurrent) {
        HWND btn = GetDlgItem(hCurrent, 1818);
        if (btn) {
            SendMessageA(btn, 0x4E2, 0, 0); // BM_SETCHECK, uncheck
        }
    }
}

// IDA 0x5E2700: Dialog::ShowMessage — show message text on current dialog
void ShowMessage(const wchar_t* message)
{
    // IDA: vswprintf into buffer, find dialog with control 1343, DrawDialogText
    HWND hCurrent = GetCurrent();
    if (!hCurrent) return;

    // Try current dialog first
    HWND ctrl = GetDlgItem(hCurrent, 1343);
    if (ctrl) {
        SetWindowTextW(ctrl, message);
        return;
    }

    // Walk parent chain to find dialog with the message control
    HWND hParent = hCurrent;
    while ((hParent = FindByPtr((int)(hParent))) != 0) {
        ctrl = GetDlgItem(hParent, 1343);
        if (ctrl) {
            SetWindowTextW(ctrl, message);
            return;
        }
    }
}

// IDA 0x5E2790: Dialog::ShowStatusText — show status text on current dialog
void ShowStatusText(const wchar_t* text)
{
    // IDA: similar to ShowMessage but uses control ID 1461
    HWND hCurrent = GetCurrent();
    if (!hCurrent) return;

    HWND ctrl = GetDlgItem(hCurrent, 1461);
    if (ctrl) {
        SetWindowTextW(ctrl, text);
        return;
    }

    HWND hParent = hCurrent;
    while ((hParent = FindByPtr((int)(hParent))) != 0) {
        ctrl = GetDlgItem(hParent, 1461);
        if (ctrl) {
            SetWindowTextW(ctrl, text);
            return;
        }
    }
}

// IDA 0x60A330: Dialog::HandleTabKey — handle tab key navigation between controls
bool HandleTabKey(HWND hWnd, LPARAM lParam)
{
    // IDA: hashmap lookup for dialog data
    // GetParent, check game speed
    // Find next/prev focusable control via GetNextDlgTabItem
    // FilterDialogButtonAction for validation

    HWND hParent = GetParent(hWnd);
    if (!hParent) return false;

    HWND hNext = GetNextDlgTabItem(hParent, hWnd, (GetKeyState(VK_SHIFT) & 0x8000) ? FALSE : TRUE);
    if (hNext) {
        SetFocus(hNext);
        return true;
    }
    return false;
}

// IDA 0x60F760: Dialog::InitWindow — initialize dialog on WM_INITDIALOG
// Allocates DialogControl (0x200 bytes), populates hashmap
bool InitWindow(HWND hWnd, LPARAM lParam)
{
    // IDA: checks if dialog already in hashmap
    // If found: stores lParam in existing entry, returns TRUE
    // If not: allocates 0x200-byte DialogControl block, inits it
    //        copies template struct, inserts into hashmap, sets WindowLong

    // Simplified: allocate dialog user data
    void* ctrlData = new uint8_t[0x200];
    memset(ctrlData, 0, 0x200);
    SetWindowLongPtrA(hWnd, GWLP_USERDATA, (LONG_PTR)(ctrlData));
    return true;
}

// IDA 0x60F320: Dialog::SubclassEditControl — subclass edit control for custom behavior
bool SubclassEditControl(HWND hWnd, LPARAM lParam)
{
    // IDA: GetWindowLongA check for WS_EX_TRANSPARENT style
    // GetClassNameA to check if "Edit" class
    // Creates wrapper window with custom paint/edit behavior
    // ScreenDialogToClient for positioning

    LONG style = GetWindowLongA(hWnd, GWL_STYLE);
    if ((style & 0x10000000) && !(style & 0x08000000)) {
        char className[128];
        GetClassNameA(hWnd, className, 128);
        if (strcmp(className, "Edit") == 0) {
            // Create wrapper window for edit control
            HWND parent = GetParent(hWnd);
            RECT rc;
            GetWindowRect(hWnd, &rc);
            ScreenToClient(parent, (POINT*)&rc);

            HWND wrapper = CreateWindowExA(
                0, "Static", nullptr,
                WS_CHILD | WS_VISIBLE | SS_NOTIFY,
                rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top,
                parent, nullptr, GetModuleHandleA(nullptr), nullptr);

            if (wrapper) {
                SetParent(hWnd, wrapper);
            }
        }
    }
    return true;
}

// IDA 0x624930: Dialog::sub_624930
void sub_624930()
{
    // PENDING: IDA decompile needed (103B)
}

// IDA 0x60A5B0: Dialog::DispatchEvent — dispatch dialog event (WM_COMMAND handler)
// 1184 bytes — routes button clicks to ControlDialogHandler based on control ID
bool DispatchEvent(HWND hWnd, int control_id, int event_code)
{
    // IDA: large switch/cascade on event_code and control_id
    // Routes to ControlDialogHandler, FilterDialogButtonAction, MapControlToAction
    // Handles tab navigation, button states, control enable/disable

    // Basic dispatch: forward to ControlDialogHandler
    if (event_code == BN_CLICKED) {
        // Forward button click through ControlDialogHandler
        // ControlDialogHandler((HWND)lParam); // lParam = control HWND
        return true;
    }
    return false;
}

// IDA 0x60F9A0: Dialog::InitializeControls — initialize all controls in dialog
// 2481 bytes — iterates children, binds gadget data, sets tooltips, positions
void InitializeControls(HWND hWnd)
{
    // IDA: massive function — enumerates child windows
    // For each control: GetDlgCtrlID, check type, bind gadget data
    // Creates DialogControl entries, sets tooltips via GadgetClass::SetTooltip
    // Handles combo boxes, list boxes, edit controls, buttons, tabs

    // Enumerate children and position them
    EnumChildWindows(hWnd, [](HWND hChild, LPARAM) -> BOOL {
        // Get control ID
        int ctrl_id = GetDlgCtrlID(hChild);
        (void)ctrl_id;

        // Get window class name to determine control type
        char className[64];
        GetClassNameA(hChild, className, 64);

        // Position and style adjustments
        RECT rc;
        GetWindowRect(hChild, &rc);
        HWND parent = GetParent(hChild);
        if (parent) {
            ScreenToClient(parent, (POINT*)&rc);
            // MoveWindow to ensure proper positioning
        }
        return TRUE;
    }, 0);
}

// IDA 0x606800: Dialog::MapControlToAction — map control ID to action
// 2496 bytes — massive switch table mapping control IDs to game actions
int MapControlToAction(int control_id)
{
    // IDA: huge switch statement mapping dialog control IDs to action constants
    // Uses IsSpecialTemplate to determine dialog context
    // Returns action code for Control::MapControlToAction processing

    // Simplified: pass through control_id as action
    return control_id;
}

// IDA 0x671EA0: Dialog::ReadMultiplayerDialogSettings — read MP settings from dialog
// 903 bytes — reads all multiplayer dialog controls into game settings struct
void ReadMultiplayerDialogSettings(HWND hWnd)
{
    // IDA: reads checkbox states, edit control text, listbox selections
    // Maps control IDs (0x411-0x418, etc.) to player settings
    // Stores into global multiplayer settings structure

    // Read player slot settings from control groups
    for (int i = 0; i < 8; i++) {
        int ctrl_id = 0x411 + i;
        HWND ctrl = GetDlgItem(hWnd, ctrl_id);
        if (ctrl) {
            // Read control state and store in settings
            int state = (int)(SendMessageA(ctrl, BM_GETCHECK, 0, 0));
            (void)state;
        }
    }
}

// IDA 0x5F2950: Dialog::RunModemDialing — run modem dialing dialog
// 903 bytes — handles modem connection UI with progress tracking
void RunModemDialing(HWND hWnd)
{
    // IDA: modem connection state machine
    // Creates progress dialog, handles connection events
    // Calls Modem::CheckStatus, NullModem::DetectModem, etc.

    // Simplified: pump messages until dialog closes
    while (IsWindow(hWnd)) {
        PumpMessages();
        Sleep(100);
    }
}

// IDA 0x6137D0: Dialog::TabControlPaint — custom tab control painting
// 2495 bytes — owner-draw tab control with game-themed colors
void TabControlPaint(HWND hWnd)
{
    // IDA: WM_DRAWITEM handler for tab controls
    // Custom painting with game palette colors
    // Handles selected/unselected tab states

    // Simplified: just invalidate to trigger default paint
    InvalidateRect(hWnd, nullptr, FALSE);
}

// IDA 0x624CA0: Dialog::BindGadgetData — bind gadget data to dialog controls
// 794 bytes — allocates gadget data blocks, links to dialog control entries
void BindGadgetData(HWND hWnd)
{
    // IDA: allocates data blocks for each control in dialog
    // Creates linked list of control entries at dialog+52
    // Creates gadget vector at dialog+60
    // Associates each control with its gadget data

    // Simplified: enumerate children, bind IDs
    EnumChildWindows(hWnd, [](HWND hChild, LPARAM) -> BOOL {
        int ctrl_id = GetDlgCtrlID(hChild);
        SetWindowLongPtrA(hChild, GWLP_USERDATA, (LONG_PTR)(ctrl_id));
        return TRUE;
    }, 0);
}

// IDA 0x610360: Dialog::DestroyDialogSystem — cleanup dialog system state
// 518 bytes — frees all dialog control entries, hashmap, linked lists
void DestroyDialogSystem()
{
    // IDA: iterates all tracked dialogs, frees control entries
    // Calls CleanupTree for each dialog
    // Frees hashmap entries, clears tracking array

    // Close all tracked dialogs
    CloseAll();
    // Clear tracking
    for (int i = 0; i < MAX_DIALOGS; i++) {
        g_entries[i].hWnd = 0;
        g_entries[i].type = 0;
    }
    g_count = 0;
    g_currentHwnd = 0;
    g_currentType = 0;
}

// IDA 0x5D3490: Dialog::ShowMessageBox — show CSF-message dialog
// 524 bytes — Creates dialog from resource, loads CSF strings, shows message
int ShowMessageBox(const wchar_t* msg, const wchar_t* ok, const wchar_t* cancel, int a4, int a5)
{
    // IDA: loads strings from CSF, creates dialog template
    // Runs PumpMessages loop until dialog closes
    // Returns IDOK or IDCANCEL

    // Simplified: use standard MessageBoxW
    UINT type = MB_OK;
    if (cancel && cancel[0]) type = MB_OKCANCEL;

    int result = MessageBoxW(nullptr, msg,
        ok ? ok : L"OK", type | MB_ICONINFORMATION);

    return (result == IDOK) ? 1 : 0;
}

} // namespace Dialog
} // namespace gamemd
