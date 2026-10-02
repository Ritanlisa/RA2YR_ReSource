// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NetworkGameSetup_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Options_e4.hpp"

// 0x5B9750
namespace gamemd {
int NetworkGameSetup::ReadRulesUnknown()
{

  int result; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1363); /*0x5b975b*/
  if ( result ) /*0x5b9763*/
  {
    result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b976f*/
    *(unsigned int *)&stru_A8B250.__pad_0[40] = result; /*0x5b9775*/
    BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b977a*/
  }
  return result; /*0x5b977e*/

}
} // namespace gamemd
// 0x5BA970
namespace gamemd {
void NetworkGameSetup::SendGameSetupPacket(wchar_t * Source)
{
    unsigned int v6 = 0;  /* G37 hoist */
    double (*)(...) v6 = 0;
    double (*)(...) v6 = 0;

  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)(char, char); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  int v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  int16_t v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5ba985*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5ba99a*/
    v9 = 0; /*0x5ba99c*/
    v8[0] = 104; /*0x5ba9a8*/
    strcpy((char *)&v8[1],(const char *)(unk_A8B380)); /*0x5ba9c4*/
    LOBYTE(v8[6]) = dword_A8B394; /*0x5ba9d4*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5ba9d8*/
    ((Stream *)((int *)&unk_A8EA70))->WriteBlock((int)v8, 250, 1); /*0x5ba9f1*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5ba9fb*/
    v3 = (char *)(CharToWideString((unsigned char *)(unk_A8B380))); /*0x5baa05*/
    v4 = dword_A8B394; /*0x5baa0d*/
    Format = (wchar_t *)v3; /*0x5baa19*/
    DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1343); /*0x5baa23*/
    if ( DlgItem ) /*0x5baa27*/
    {
      if ( v4 >= 8 ) /*0x5baa2b*/
        v6 = Math::InitDegToRad; /*0x5baa3b*/
      else
        v6 = (int (__usercall *)(char, char))dword_8316A8[v4]; /*0x5baa32*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5baa54*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5baa66*/
    }
  }

}
} // namespace gamemd
// 0x5BB560
namespace gamemd {
unsigned int * NetworkGameSetup::DeleteComPtr(unsigned int * Block, char a2)
{

  ((ComPtr *)((ComPtr *)Block))->Dtor(); /*0x5bb563*/
  if ( (a2 & 1) != 0 ) /*0x5bb56d*/
    __3_YAXPAX_Z(Block); /*0x5bb570*/
  return Block->__pad_0; /*0x5bb57a*/

}
} // namespace gamemd