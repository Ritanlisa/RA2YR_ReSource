// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72BCA0
namespace gamemd {
char sub_72BCA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72BCA0()
{
  char result; // al

  result = MEMORY[0xB0FD45]; /*0x72bca0*/
  if ( !MEMORY[0xB0FD45] ) /*0x72bca7*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72bcb3*/
      MEMORY[0xB0FA98] = LoadFileSHP(MEMORY[0x844DB4], (bool *)&MEMORY[0xB0FD44]); /*0x72bcc5*/
    result = LoadPaletteSimple(MEMORY[0x844DB8], &MEMORY[0xB0FD48], &MEMORY[0xB0FD4C]); /*0x72bcda*/
    MEMORY[0xB0FD45] = 1; /*0x72bcdf*/
  }
  return result; /*0x72bce6*/
}
}
} // namespace gamemd

// 0x72BCF0
namespace gamemd {
void sub_72BCF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72BCF0()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD45] ) /*0x72bcfa*/
  {
    if ( MEMORY[0xB0FD44] ) /*0x72bd02*/
    {
      v0 = MEMORY[0xB0FA98]; /*0x72bd05*/
      if ( MEMORY[0xB0FA98] ) /*0x72bd0d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA98]); /*0x72bd11*/
        __3_YAXPAX_Z(v0); /*0x72bd17*/
      }
      MEMORY[0xB0FD44] = 0; /*0x72bd1f*/
    }
    MEMORY[0xB0FA98] = 0; /*0x72bd2b*/
    if ( MEMORY[0xB0FD48] ) /*0x72bd33*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD48]); /*0x72bd36*/
      MEMORY[0xB0FD48] = 0; /*0x72bd3e*/
    }
    if ( MEMORY[0xB0FD4C] ) /*0x72bd4c*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD4C])(MEMORY[0xB0FD4C], 1); /*0x72bd52*/
      MEMORY[0xB0FD4C] = 0; /*0x72bd54*/
    }
  }
  MEMORY[0xB0FD45] = 0; /*0x72bd5a*/
}
}
} // namespace gamemd

// 0x786390
namespace gamemd {
int sub_786390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_786390()
{
  HANDLE *v1; // esi
  BYTE Data[4]; // [esp+0h] [ebp-110h] BYREF
  HKEY phkResult; // [esp+4h] [ebp-10Ch] BYREF
  DWORD cbData; // [esp+8h] [ebp-108h] BYREF
  DWORD Type; // [esp+Ch] [ebp-104h] BYREF
  CHAR SubKey[256]; // [esp+10h] [ebp-100h] BYREF

  if ( byte_B77E75 ) /*0x78639d*/
    return 1; /*0x78639f*/
  byte_B77E75 = 1; /*0x7863ad*/
  LoadNetworkShareStrings(); /*0x7863b4*/
  Game::ResetFlags(); /*0x7863b9*/
  Network::InitPlayerSlots(); /*0x7863be*/
  *(_DWORD *)Data = 0; /*0x7863c8*/
  if ( MEMORY[0x8313B0] ) /*0x7863d2*/
  {
    if ( strlen(MEMORY[0x8313B0]) ) /*0x7863da*/
    {
      strcpy(SubKey, MEMORY[0x8313B0]); /*0x786405*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x786420*/
      {
        cbData = 4; /*0x786445*/
        RegQueryValueExA(phkResult, off_84A940, 0, &Type, Data, &cbData); /*0x78644d*/
        RegCloseKey(phkResult); /*0x786458*/
      }
    }
  }
  *(_DWORD *)Data = Data[0]; /*0x786467*/
  dword_B77E50 = Data[0]; /*0x78646b*/
  g_NetworkRematchState = Data[0] + 10496; /*0x786475*/
  ResetSystemWOL(); /*0x78647a*/
  byte_B77DC0 = 1; /*0x786485*/
  v1 = &Handles; /*0x78648c*/
  do /*0x7864a6*/
    *v1++ = CreateEventA(0, 0, 0, 0); /*0x78649b*/
  while ( (int)v1 < (int)g_WOL_RequestObject ); /*0x7864a6*/
  return InitializeWestwoodOnline(g_hInstance); /*0x7863a4*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72C650()
{
  void *v0; // esi

  if ( MEMORY[0xB0FD09] ) /*0x72c65a*/
  {
    if ( MEMORY[0xB0FD08] ) /*0x72c662*/
    {
      v0 = MEMORY[0xB0FB0C]; /*0x72c665*/
      if ( MEMORY[0xB0FB0C] ) /*0x72c66d*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FB0C]); /*0x72c671*/
        __3_YAXPAX_Z(v0); /*0x72c677*/
      }
      MEMORY[0xB0FD08] = 0; /*0x72c67f*/
    }
    MEMORY[0xB0FB0C] = 0; /*0x72c68b*/
    if ( MEMORY[0xB0FD0C] ) /*0x72c693*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FD0C]); /*0x72c696*/
      MEMORY[0xB0FD0C] = 0; /*0x72c69e*/
    }
    if ( MEMORY[0xB0FD10] ) /*0x72c6ac*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FD10])(MEMORY[0xB0FD10], 1); /*0x72c6b2*/
      MEMORY[0xB0FD10] = 0; /*0x72c6b4*/
    }
  }
  MEMORY[0xB0FD09] = 0; /*0x72c6ba*/
}
}
} // namespace gamemd

// 0x72C600
namespace gamemd {
char sub_72C600()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72C600()
{
  char result; // al

  result = MEMORY[0xB0FD09]; /*0x72c600*/
  if ( !MEMORY[0xB0FD09] ) /*0x72c607*/
  {
    if ( MEMORY[0x8A00A4] == 800 ) /*0x72c613*/
      MEMORY[0xB0FB0C] = LoadFileSHP(MEMORY[0x844D8C], (bool *)&MEMORY[0xB0FD08]); /*0x72c625*/
    result = LoadPaletteSimple(MEMORY[0x844D90], &MEMORY[0xB0FD0C], &MEMORY[0xB0FD10]); /*0x72c63a*/
    MEMORY[0xB0FD09] = 1; /*0x72c63f*/
  }
  return result; /*0x72c646*/
}
}
} // namespace gamemd
