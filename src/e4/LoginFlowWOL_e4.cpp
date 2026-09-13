// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72BCA0
namespace gamemd {
char sub_72BCA0()
{
{
    char result;
    result = DataGlobal_B0FD45;
    if ( !DataGlobal_B0FD45 )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FA98 = LoadFileSHP(DataGlobal_844DB4, (bool *)&DataGlobal_B0FD44);
    result = LoadPaletteSimple(DataGlobal_844DB8, &DataGlobal_B0FD48, &DataGlobal_B0FD4C);
    DataGlobal_B0FD45 = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x72BCF0
namespace gamemd {
void sub_72BCF0()
{
{
    void *v0;
    if ( DataGlobal_B0FD45 )
  {
    if ( DataGlobal_B0FD44 )
    {
    v0 = DataGlobal_B0FA98;
    if ( DataGlobal_B0FA98 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA98);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD44 = 0;
    }
    DataGlobal_B0FA98 = 0;
    if ( DataGlobal_B0FD48 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD48);
    DataGlobal_B0FD48 = 0;
    }
    if ( DataGlobal_B0FD4C )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD4C)(DataGlobal_B0FD4C, 1);
    DataGlobal_B0FD4C = 0;
    }
  }
    DataGlobal_B0FD45 = 0;
}
}
} // namespace gamemd

// 0x786390
namespace gamemd {
int sub_786390()
{
{
    HANDLE *v1;
    BYTE Data[4];
    HKEY phkResult;
    DWORD cbData;
    DWORD Type;
    CHAR SubKey[256];
    if ( DataGlobal_B77E75 )
    return 1;
    DataGlobal_B77E75 = 1;
    LoadNetworkShareStrings();
    Game::ResetFlags();
    Network::InitPlayerSlots();
    *(int *)Data = 0;
    if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven )
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) )
    {
    strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
    if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) )
      {
    cbData = 4;
    RegQueryValueExA(phkResult, DataGlobal_84A940, 0, &Type, Data, &cbData);
    RegCloseKey(phkResult);
      }
    }
  }
    *(int *)Data = Data[0];
    DataGlobal_B77E50 = Data[0];
    g_NetworkRematchState = Data[0] + 10496;
    ResetSystemWOL();
    DataGlobal_B77DC0 = 1;
    v1 = &Handles;
    do
    *v1++ = CreateEventA(0, 0, 0, 0);
    while ( (int)v1 < (int)g_WOL_RequestObject );
    return InitializeWestwoodOnline(g_hInstance);
}
}
} // namespace gamemd

// 0x786EF0
namespace gamemd {
char sub_786EF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_786EF0()
{
  const char *v1; // [esp-8h] [ebp-110h]
  int v2; // [esp-4h] [ebp-10Ch]
  char Buffer[260]; // [esp+4h] [ebp-104h] BYREF

  if ( dword_B77DF8 == -2147221385 /*0x786f26*/
    || dword_B77DF8 == -2147221384
    || dword_B77DF8 == -2147221390
    || dword_B77DF8 == -2147221388
    || dword_B77DF8 == -2147221387
    || dword_B77DF8 == -2147221386 )
  {
    if ( ShowDialogConfirm(&word_B77AD0, 4, (int)GameLoop::Thunk, 0) == 6 ) /*0x786f60*/
    {
      switch ( dword_B77DF8 ) /*0x786f78*/
      {
        case -2147221390: /*0x786f78*/
          v2 = dword_B77E50; /*0x786f99*/
          v1 = aHttpApiregiste_1; /*0x786f9a*/
          goto LABEL_16; /*0x786f9f*/
        case -2147221388: /*0x786f78*/
          sprintf(Buffer, MEMORY[0x84B4C4], dword_B77E50); /*0x786fac*/
          break; /*0x786fac*/
        case -2147221387: /*0x786f78*/
          sprintf(Buffer, MEMORY[0x84B484], dword_B77E50); /*0x786fb9*/
          break; /*0x786fb9*/
        case -2147221386: /*0x786f78*/
          v2 = dword_B77E50; /*0x786fbb*/
          v1 = stru_84B448; /*0x786fbc*/
LABEL_16:
          sprintf(Buffer, v1, v2); /*0x786fc1*/
          break; /*0x786fc6*/
        case -2147221385: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/serialunknown_%d.html", dword_B77E50); /*0x786f8a*/
          break; /*0x786f8a*/
        case -2147221384: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/skuserialmismatch_%d.html", dword_B77E50); /*0x786f97*/
          break; /*0x786f97*/
        default:
          break;
      }
      OpenURLWOL(Buffer, 1); /*0x786fce*/
    }
    return 1; /*0x786fdc*/
  }
  else
  {
    ShowDialogConfirm(&word_B77AD0, 0, (int)GameLoop::Thunk, 0); /*0x786f36*/
    return 0; /*0x786f3b*/
  }
}
}
} // namespace gamemd

// 0x72C650
namespace gamemd {
void sub_72C650()
{
{
    void *v0;
    if ( DataGlobal_B0FD09 )
  {
    if ( DataGlobal_B0FD08 )
    {
    v0 = DataGlobal_B0FB0C;
    if ( DataGlobal_B0FB0C )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB0C);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD08 = 0;
    }
    DataGlobal_B0FB0C = 0;
    if ( DataGlobal_B0FD0C )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD0C);
    DataGlobal_B0FD0C = 0;
    }
    if ( DataGlobal_B0FD10 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD10)(DataGlobal_B0FD10, 1);
    DataGlobal_B0FD10 = 0;
    }
  }
    DataGlobal_B0FD09 = 0;
}
}
} // namespace gamemd

// 0x72C600
namespace gamemd {
char sub_72C600()
{
{
    char result;
    result = DataGlobal_B0FD09;
    if ( !DataGlobal_B0FD09 )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0FB0C = LoadFileSHP(DataGlobal_844D8C, (bool *)&DataGlobal_B0FD08);
    result = LoadPaletteSimple(DataGlobal_844D90, &DataGlobal_B0FD0C, &DataGlobal_B0FD10);
    DataGlobal_B0FD09 = 1;
  }
    return result;
}
}
} // namespace gamemd
