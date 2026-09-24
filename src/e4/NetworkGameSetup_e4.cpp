// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5B9750
int NetworkGameSetup::ReadRulesUnknown()
{
  HWND result; // eax

  result = GetDlgItem(*(HWND *)this, 1363); /*0x5b975b*/
  if ( result ) /*0x5b9763*/
  {
    result = (HWND)SendMessageA(result, 0x400u, 0, 0); /*0x5b976f*/
    dword_A8B278 = (LPARAM)result; /*0x5b9775*/
    *(_BYTE *)(this + 9) = 1; /*0x5b977a*/
  }
  return result; /*0x5b977e*/
}
// 0x5BA970
void NetworkGameSetup::SendGameSetupPacket(wchar_t * Source)
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
    strcpy((char *)&v8[1], g_GameSetupBuffer); /*0x5ba9c4*/
    LOBYTE(v8[6]) = g_TauntCommandState; /*0x5ba9d4*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5ba9d8*/
    Stream::WriteBlock((int)&g_EventManager, (int)v8, 250, 1); /*0x5ba9f1*/
    Stream::ReadPacket((int)&g_EventManager); /*0x5ba9fb*/
    v3 = CharToWideString(g_GameSetupBuffer); /*0x5baa05*/
    v4 = g_TauntCommandState; /*0x5baa0d*/
    Format = (wchar_t *)v3; /*0x5baa19*/
    DlgItem = GetDlgItem(*this, 1343); /*0x5baa23*/
    if ( DlgItem ) /*0x5baa27*/
    {
      if ( v4 >= 8 ) /*0x5baa2b*/
        v6 = Math::InitDegToRad; /*0x5baa3b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v4]; /*0x5baa32*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5baa54*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5baa66*/
    }
  }
}
// 0x5BB560
unsigned int * NetworkGameSetup::DeleteComPtr(char a2)
{
  ComPtr::Dtor(this); /*0x5bb563*/
  if ( (a2 & 1) != 0 ) /*0x5bb56d*/
    __3_YAXPAX_Z(this); /*0x5bb570*/
  return this; /*0x5bb57a*/
}