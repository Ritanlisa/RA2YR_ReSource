// Dialog system -- IDA Win32 CreateDialogIndirectParamA wrapper
// (Separate from ui/gadget.hpp's DialogClass which is the custom widget system)
// These are the original gamemd.exe Win32 dialog infrastructure functions.
#pragma once
#include <windows.h>
#include <cstdint>

namespace gamemd {
namespace Dialog {

// IDA 0x5D5820 area -- Dialog::Create
// Creates a modal dialog from resource template, registers to internal array
HWND Create(int template_id, DLGPROC dlg_proc, LPARAM lParam);

// IDA 0x5D5A20 area -- Dialog::BaseProc (56 basic blocks)
// Default dialog procedure handling WM_INITDIALOG/WM_COMMAND/WM_PAINT
// unmatched: no callgraph reference and no git history record
INT_PTR CALLBACK BaseProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// IDA 0x53E770 area -- Dialog::MessageLoop
// Custom message pump: GameLoopMessagePump + MessageIsDialog + TranslateMessage + DispatchMessage
void MessageLoop();  // 0x5D4D50

// IDA 0x53E770 area -- Dialog::PumpMessages (convenience wrapper, 27 callers)
// Calls MessageLoop, then Event::Dispatch for GameMode 0/5
void PumpMessages();

// IDA 0x5D34A0 area -- Dialog::Show
void Show(HWND hWnd);

// IDA 0x5D34B0 area -- Dialog::Destroy
void Destroy(HWND hWnd);

// IDA 0x5D3490 -- Dialog::ShowMessageBox (returns 1=OK, 0=Cancel)
int ShowMessageBox(const wchar_t* msg, const wchar_t* ok, const wchar_t* cancel, int a4, int a5);  // 0x5D3490

// IDA 0x799D10 -- Dialog::CloseAll
void CloseAll();  // 0x799D10

// IDA 0x775940 -- Dialog::FindByHandle (return dialog type by HWND)
int FindByHandle(HWND hWnd);  // 0x775940

// IDA 0x7759B0 -- Dialog::FindByPtr (return HWND by dialog type/ID)
HWND FindByPtr(int type);  // 0x7759B0

// IDA 0x5E26C0 -- Dialog::FindGameUI (find active game UI window)
HWND FindGameUI();  // 0x5E26C0

// IDA 0x775B10 -- Dialog::GetCurrent
HWND GetCurrent();  // 0x775B10

// IDA 0x775B20 -- Dialog::GetCurrentType
int GetCurrentType();  // 0x775B20

// IDA 0x775BA0 -- Dialog::GetField
bool GetField(HWND hWnd);

// IDA 0x5D5DD0 -- Dialog::GetMode3
int GetMode3(void* dialog_data);  // 0x5D5DD0

// IDA 0x5D5DC0 -- Dialog::GetModeNeg2
int GetModeNeg2(void* dialog_data);  // 0x5D5DC0

// IDA 0x777060 -- Dialog::RestoreParent
HWND RestoreParent(HWND hWnd);  // 0x777060

// IDA 0x77D820 -- Dialog::UpdateGameUI
void UpdateGameUI();  // 0x77D820

// IDA 0x5E2F60 -- Dialog::ShowPlayerName
void ShowPlayerName(HWND hDlg);  // 0x5E2F60

// IDA 0x608070 -- Dialog::IdleProcess (pump messages for specific dialog)
void IdleProcess(HWND hWnd);  // 0x608070

// IDA 0x5E2700 -- Dialog::ShowMessage
void ShowMessage(const wchar_t* message);  // 0x5E2700

// IDA 0x5E2790 -- Dialog::ShowStatusText
void ShowStatusText(const wchar_t* text);  // 0x5E2790

// IDA 0x6233A0 -- Dialog::CleanupTree
void CleanupTree(void* dialog_data);  // 0x6233A0

// IDA 0x60AAA0 -- Dialog::EnumAndCleanup
void EnumAndCleanup(HWND hWndParent);  // 0x60AAA0

// IDA 0x5E9950 -- Dialog::MapPlayerIDToIndex (control ID 0x411-0x418 -> 0-7)
int MapPlayerIDToIndex(int control_id);  // 0x5E9950

// IDA 0x4E59A0 -- Dialog::OptionIDToIndex (option ID 0x76D-0x774 -> 0-7)
int OptionIDToIndex(int option_id);  // 0x4E59A0

// IDA 0x4E4EC0 -- Dialog::SideIDToIndex (side ID 0x6A3-0x6AB -> 0-7)
int SideIDToIndex(int side_id);  // 0x4E4EC0

// IDA 0x5EE350 -- Dialog::RefreshDialogsGame
void RefreshDialogsGame();  // 0x5EE350

void HandleLauncherMessage(int msg_data);

// IDA 0x5F3450 -- Dialog::CheckButtonState
uint32_t CheckButtonState();  // 0x5F3450

// IDA 0x5B5BC0 -- Dialog::InitializeGameSettings
void InitializeGameSettings();  // 0x5B5BC0

// IDA 0x602AE0 -- Dialog::IsSpecialTemplate
bool IsSpecialTemplate(int template_id);  // 0x602AE0

// IDA 0x6213A0 -- Dialog::Resize
void Resize(HWND hWnd);

// IDA 0x607FD0 -- Dialog::StopBink
void StopBink();  // 0x607FD0

void sub_624930();

void sub_624BE0();

// IDA 0x60A330 -- Dialog::HandleTabKey
bool HandleTabKey(HWND hWnd, LPARAM lParam);  // 0x60A330

// IDA 0x60F760 -- Dialog::InitWindow
bool InitWindow(HWND hWnd, LPARAM lParam);  // 0x60F760

// IDA 0x60F320 -- Dialog::SubclassEditControl
bool SubclassEditControl(HWND hWnd, LPARAM lParam);  // 0x60F320

// IDA 0x60A5B0 -- Dialog::DispatchEvent
bool DispatchEvent(HWND hWnd, int control_id, int event_code);

// IDA 0x60F9A0 -- Dialog::InitializeControls
void InitializeControls(HWND hWnd);  // 0x60F9A0

// IDA 0x606800 -- Dialog::MapControlToAction
int MapControlToAction(int control_id);  // 0x606800

// IDA 0x671EA0 -- Dialog::ReadMultiplayerDialogSettings
void ReadMultiplayerDialogSettings(HWND hWnd);  // 0x671EA0

// IDA 0x5F2950 -- Dialog::RunModemDialing
void RunModemDialing(HWND hWnd);  // 0x5F2950

// IDA 0x6137D0 -- Dialog::TabControlPaint
void TabControlPaint(HWND hWnd);  // 0x6137D0

// IDA 0x624CA0 -- Dialog::BindGadgetData
void BindGadgetData(HWND hWnd);  // 0x624CA0

// IDA 0x610360 -- Dialog::DestroyDialogSystem
void DestroyDialogSystem();  // 0x610360

} // namespace Dialog
} // namespace gamemd
