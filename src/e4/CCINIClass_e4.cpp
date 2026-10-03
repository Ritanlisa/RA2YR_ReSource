// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/CCToolTip_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/SHA1_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/CComObject_CChatEventSink___ATL_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FileStraw_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"

// 0x41F2E0
namespace gamemd {
int CCINIClass::ReadTypeList(char * a1, CCINIClass * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41F2E0)
}
}
// 0x473450
namespace gamemd {
int CCINIClass::GetDB()
{

  return ((unsigned int *)this)[0]; /*0x473453*/

}
}
// 0x4741F0
namespace gamemd {
MultiplayerGameMode * * CCINIClass::Load(int a2, char a3, char a4)
{

  int File; // ebp
  int Base64Data; // eax
  int v7; // esi
  bool v8; // zf
  int v10[4]; // [esp+Ch] [ebp-A8h] BYREF
  char v11; // [esp+1Ch] [ebp-98h]
  SHA1 v12; // [esp+20h] [ebp-94h] BYREF
  int v13; // [esp+44h] [ebp-70h]
  int v14; // [esp+48h] [ebp-6Ch]
  int v15; // [esp+4Ch] [ebp-68h]
  int v16; // [esp+50h] [ebp-64h]
  int v17; // [esp+54h] [ebp-60h]
  int v18; // [esp+58h] [ebp-5Ch]
  int v19; // [esp+5Ch] [ebp-58h]
  int v20[5]; // [esp+A0h] [ebp-14h] BYREF

  v10[1] = 0; /*0x474213*/
  v10[2] = 0; /*0x474217*/
  v10[3] = a2; /*0x47421b*/
  v11 = 0; /*0x47421f*/
  v10[0] = (int)&vt_FileStraw; /*0x474223*/
  File = INIClass::LoadFile((gamemd::INIClass *)this, (int)v10, a4); /*0x474230*/
  this->ownsFile = 0; /*0x474232*/
  if ( !File || !a3 ) /*0x474244*/
    goto LABEL_7; /*0x474244*/
  Base64Data = INIClass::GetBase64Data((gamemd::INIClass *)this, g_INI_Key_Digest, (int)v20, 0x14u); /*0x47425b*/
  if ( !Base64Data ) /*0x474262*/
  {
    v7 = 2; /*0x474264*/
    goto LABEL_8; /*0x474269*/
  }
  if ( Base64Data <= 0 ) /*0x47426e*/
    goto LABEL_7; /*0x47426e*/
  INIClass::ClearSection((int *)this->INIClass, (int)g_INI_Key_Digest, 0); /*0x47427d*/
  memset(&v12.SHA1_field_0x04, 0, 9); /*0x474286*/
  v18 = 0; /*0x474295*/
  v19 = 0; /*0x474299*/
  v13 = 1732584193; /*0x47429d*/
  v14 = -271733879; /*0x4742a5*/
  v15 = -1732584194; /*0x4742ad*/
  v16 = 271733878; /*0x4742b5*/
  v17 = -1009589776; /*0x4742bd*/
  *(unsigned int *)v12.__pad_0 = (unsigned int)(&vt_SHAPipe); /*0x4742c5*/
  INIClass::WriteToString((gamemd::INIClass *)this, (int)&v12); /*0x4742cd*/
  ((SHA1 *)(&v12))->ComputeThunk((char *)(this->__pad_41)); /*0x4742da*/
  this->ownsFile = 1; /*0x4742e3*/
  ((Pipe*)(Pipe *)&v12)->Dtor(); /*0x4742e7*/
  v8 = memcmp(v20,(const void *)(this->__pad_41), 0x14u) == 0; /*0x4742fa*/
  v7 = 2; /*0x4742fd*/
  if ( v8 ) /*0x474302*/
LABEL_7:
    v7 = File; /*0x474304*/
LABEL_8:
  ((FileStraw *)((void *)((int)v10)))->Destructor(); /*0x474306*/
  return (gamemd::MultiplayerGameMode **)(v7); /*0x474311*/

}
}
// 0x535B30
namespace gamemd {
CCINIClass::CCINIClass()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x535B30)
}
}
// 0x41F490
namespace gamemd {
AITriggerTypeClass * CCINIClass::ReadInfantryTypeList(char * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41F490)
}
} // namespace gamemd

// 0x501160
namespace gamemd {
IUnknown * CCINIClass::WriteHouses()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x501160)
}
} // namespace gamemd
