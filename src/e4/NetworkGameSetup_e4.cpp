// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5B9750
int NetworkGameSetup::ReadRulesUnknown()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND result; // eax

  result = GetDlgItem(*(HWND *)this, 1363); /*0x5b975b*/
  if ( result ) /*0x5b9763*/
  {
    result = (HWND)SendMessageA(result, 0x400u, 0, 0); /*0x5b976f*/
    DataGlobal_A8B278 = (LPARAM)result; /*0x5b9775*/
    *(_BYTE *)(this + 9) = 1; /*0x5b977a*/
  }
  return result; /*0x5b977e*/
}
}

// 0x5BA970
void NetworkGameSetup::SendGameSetupPacket(wchar_t * Source)
{
{
    char *v3;
    unsigned int v4;
    HWND DlgItem;
    int (__usercall *v6)@<eax>(char@<cf>, char@<zf>);
    wchar_t *Format;
    int v8[62];
    short v9;
    wchar_t Buffer[256];
    if ( Source )
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0;
    v8[0] = 104;
    strcpy((char *)&v8[1], g_GameSetupBuffer);
    LOBYTE(v8[6]) = g_TauntCommandState;
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source);
    Stream::WriteBlock((int)&g_EventManager, (int)v8, 250, 1);
    Stream::ReadPacket((int)&g_EventManager);
    v3 = CharToWideString(g_GameSetupBuffer);
    v4 = g_TauntCommandState;
    Format = (wchar_t *)v3;
    DlgItem = GetDlgItem(*(void**)this, 1343);
    if ( DlgItem )
    {
    if ( v4 >= 8 )
    v6 = Math::InitDegToRad;
    else
    v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))DataGlobal_8316A8[v4];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source);
    DrawDialogText((LPARAM)v6, Buffer, DlgItem);
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
