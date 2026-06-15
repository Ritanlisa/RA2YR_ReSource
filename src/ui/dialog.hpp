// Dialog system -- IDA Win32 CreateDialogIndirectParamA wrapper
// (Separate from ui/gadget.hpp's DialogClass which is the custom widget system)
// These are the original gamemd.exe Win32 dialog infrastructure functions.
#pragma once
#include <windows.h>

namespace gamemd {
namespace Dialog {

// IDA 0x5D5820 area -- Dialog::Create
// Creates a modal dialog from resource template, registers to internal array
HWND Create(int template_id, DLGPROC dlg_proc, LPARAM lParam);

// IDA 0x5D5A20 area -- Dialog::BaseProc (56 basic blocks)
// Default dialog procedure handling WM_INITDIALOG/WM_COMMAND/WM_PAINT
INT_PTR CALLBACK BaseProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// IDA 0x53E770 area -- Dialog::MessageLoop
// Custom message pump: GameLoopMessagePump + MessageIsDialog + TranslateMessage + DispatchMessage
void MessageLoop();

// IDA 0x53E770 area -- Dialog::PumpMessages (convenience wrapper, 27 callers)
// Calls MessageLoop, then Event::Dispatch for GameMode 0/5
void PumpMessages();

// IDA 0x5D34A0 area -- Dialog::Show
void Show(HWND hWnd);

// IDA 0x5D34B0 area -- Dialog::Destroy
void Destroy(HWND hWnd);

// IDA 0x5D3490 -- Dialog::ShowMessageBox (returns 1=OK, 0=Cancel)
int ShowMessageBox(const wchar_t* msg, const wchar_t* ok, const wchar_t* cancel, int a4, int a5);

} // namespace Dialog
} // namespace gamemd
