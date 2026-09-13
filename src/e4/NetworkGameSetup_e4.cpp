// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5B9750
HWND NetworkGameSetup::ReadRulesUnknown()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall sub_5B9750(int this)
{
  HWND result; // eax

  result = GetDlgItem(*(HWND *)this, 1363); /*0x5b975b*/
  if ( result ) /*0x5b9763*/
  {
    result = (HWND)SendMessageA(result, 0x400u, 0, 0); /*0x5b976f*/
    MEMORY[0xA8B278] = (LPARAM)result; /*0x5b9775*/
    *(_BYTE *)(this + 9) = 1; /*0x5b977a*/
  }
  return result; /*0x5b977e*/
}
}

// 0x5BA970
void NetworkGameSetup::SendGameSetupPacket(wchar_t * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5BA970(HWND *this, wchar_t *Source)
{
  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  _DWORD v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  __int16 v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5ba985*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5ba99a*/
    v9 = 0; /*0x5ba99c*/
    v8[0] = 104; /*0x5ba9a8*/
    strcpy((char *)&v8[1], MEMORY[0xA8B380]); /*0x5ba9c4*/
    LOBYTE(v8[6]) = MEMORY[0xA8B394]; /*0x5ba9d4*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5ba9d8*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v8, 250, 1); /*0x5ba9f1*/
    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5ba9fb*/
    v3 = CharToWideString(MEMORY[0xA8B380]); /*0x5baa05*/
    v4 = MEMORY[0xA8B394]; /*0x5baa0d*/
    Format = (wchar_t *)v3; /*0x5baa19*/
    DlgItem = GetDlgItem(*this, 1343); /*0x5baa23*/
    if ( DlgItem ) /*0x5baa27*/
    {
      if ( v4 >= 8 ) /*0x5baa2b*/
        v6 = Math::InitDegToRad; /*0x5baa3b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][v4]; /*0x5baa32*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5baa54*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5baa66*/
    }
  }
}
}

// 0x5BB560
unsigned int * NetworkGameSetup::DeleteComPtr(char a2)
{
{
    ComPtr::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
