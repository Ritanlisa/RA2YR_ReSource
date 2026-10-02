// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/SmudgeTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/E4Recv_5AFEF0_e4.hpp"
#include "e4/classes/SmudgeTypeVector_e4.hpp"
#include "e4/classes/E4Recv_728A00_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x6B5260
namespace gamemd {  // G42.18c ns repair
SmudgeTypeClass::SmudgeTypeClass(char *Source, int a2, int a3, int a4, int a5, int a6, int aP1, int aP0, int aP2, int a1)
{

  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  void **v6; // edx

  ((ObjectTypeClass *)((int)this))->ConstructFull(Source); /*0x6b5269*/
  *((unsigned int *)this + 165) = -1; /*0x6b5277*/
  *((unsigned int *)this + 166) = 1; /*0x6b5281*/
  *((unsigned int *)this + 167) = 1; /*0x6b5287*/
  *((unsigned char *)this + 672) = 0; /*0x6b528d*/
  *((unsigned char *)this + 673) = 0; /*0x6b5294*/
  *(unsigned int *)this = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b529b*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b52a1*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b52a7*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b52ae*/
  AbstractClass::GenerateUniqueID((int)((unsigned char *)this + 4)); /*0x6b52b5*/
  *(unsigned short *)((unsigned char *)this + 559) = 1; /*0x6b52ba*/
  *((unsigned char *)this + 561) = 0; /*0x6b52c7*/
  *((unsigned char *)this + 562) = 1; /*0x6b52ce*/
  *((unsigned char *)this + 563) = 1; /*0x6b52d4*/
  *((unsigned char *)this + 565) = 0; /*0x6b52da*/
  v3 = dword_A8EC28; /*0x6b52e1*/
  if ( dword_A8EC28 < dword_A8EC20 /*0x6b5322*/
    || (byte_A8EC25 || !dword_A8EC20)
    && dword_A8EC2C > 0
    && (v4 = (*(uint8_t (**)(int *, int, unsigned int))(dword_A8EC18 + 8))(
               (int *)&dword_A8EC18,
               dword_A8EC20 + dword_A8EC2C,
               0) == 0,
        v3 = dword_A8EC28,
        !v4) )
  {
    dword_A8EC28 = v3 + 1; /*0x6b5327*/
    *((unsigned int *)dword_A8EC1C + v3) = this; /*0x6b5331*/
    v3 = dword_A8EC28; /*0x6b5334*/
  }
  v5 = 0; /*0x6b5339*/
  if ( v3 <= 0 ) /*0x6b533d*/
  {
LABEL_11:
    *((unsigned int *)this + 165) = -1; /*0x6b5351*/
    return this; /*0x6b535a*/
  }
  else
  {
    v6 = (void **)dword_A8EC1C; /*0x6b533f*/
    while ( *v6 != this ) /*0x6b5347*/
    {
      ++v5; /*0x6b5349*/
      ++v6; /*0x6b534a*/
      if ( v5 >= v3 ) /*0x6b534f*/
        goto LABEL_11; /*0x6b534f*/
    }
    *((unsigned int *)this + 165) = v5; /*0x6b5361*/
    return this; /*0x6b5367*/
  }

}
}  // G42.18c ns repair
// 0x6B55F0
namespace gamemd {  // G42.18c ns repair
void SmudgeTypeClass::vt_entry_A0(int * a2, int * a3, int a4, int a5, short * a6)
{

  int v7; // ebx
  int v8; // edx
  int Width; // ecx
  unsigned int *v10; // esi
  int v11; // eax
  int v12; // [esp-1Ch] [ebp-2Ch]
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]

  v7 = (*((int (**)(SmudgeTypeClass *))this->vtable1 + 39))(this); /*0x6b55ff*/
  if ( v7 ) /*0x6b5603*/
  {
    v8 = a2[1]; /*0x6b5614*/
    v13 = *a2; /*0x6b5619*/
    v14 = v8; /*0x6b561d*/
    if ( a4 ) /*0x6b5621*/
    {
      Width = this->Width; /*0x6b5623*/
      v14 += -15 * (a4 / Width + a4 % Width); /*0x6b5659*/
      v13 += 60 * (a4 / Width - a4 % Width) / 2; /*0x6b5661*/
    }
    v10 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(a6); /*0x6b5674*/
    v12 = *((int16_t *)v10 + 134); /*0x6b568a*/
    v11 = ZCoordToScreenY(a5); /*0x6b568c*/
    DrawToSurfaceSHP((int)g_DSurface_Hidden_2, v10[13],(gamemd::ConvertClass *)(v7), 0, &v13, a3, 3584, 0, -1 - v11, 0, v12, 0, 0, 0, 0, 0); /*0x6b56b4*/
  }

}
}  // G42.18c ns repair
// 0x6B56D0
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::GetSize(uint8_t *** aP1)
{

  int result; // eax
  char Bool_Overwrite; // al
  char Burn; // cl
  char v6; // al
  int Width; // [esp-8h] [ebp-210h]
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)aP1); /*0x6b56e3*/
  if ( ((ObjectTypeClass *)((ObjectTypeClass *)this))->LoadFromINI(aP1) ) /*0x6b56eb*/
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aCrater, this->Crater); /*0x6b570b*/
    Burn = this->Burn; /*0x6b5710*/
    this->Crater = Bool_Overwrite; /*0x6b5716*/
    v6 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aBurn, Burn); /*0x6b5725*/
    Width = this->Width; /*0x6b5732*/
    this->Burn = v6; /*0x6b5739*/
    this->Width = INIClass::ReadInt_Overwrite( /*0x6b5744*/
                    (bool *)aP1,
                    (uint8_t *)((unsigned int *)this)[0],
                    (uint8_t *)(unsigned int *)((char *)&stru_82BA00 + 151),
                    Width);
    this->Height = INIClass::ReadInt_Overwrite( /*0x6b575e*/
                     (bool *)aP1,
                     (uint8_t *)((unsigned int *)this)[0],
                     (uint8_t *)g_INI_Key_Height,
                     this->Height);
    if ( ((unsigned int *)this)[0] ) /*0x6b5764*/
      _makepath(Buffer, 0, 0, ((unsigned int *)this)[0], (const char *)&off_7E1BC6 + 112 * (&dword_A8B230)[130].uniqueId); /*0x6b57b4*/
    else
      _makepath(Buffer, 0, 0,(const char *)(((unsigned int *)this)[0]), Ext); /*0x6b5784*/
    result = (int)SearchMIXFile(Buffer, 0); /*0x6b57c2*/
    ((unsigned int *)this)[0] = (unsigned int)((SHPStruct *)result); /*0x6b57c7*/
    LOBYTE(result) = 1; /*0x6b57ce*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6b57db*/
  }
  return result; /*0x6b57cd*/

}
}  // G42.18c ns repair
// 0x6B6160
namespace gamemd {  // G42.18c ns repair
SmudgeTypeClass *  SmudgeTypeClass::ddtor(void * a2, char a3)
{

  SHPStruct *Image; // eax
  int v4; // eax
  SmudgeTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  Image = (gamemd::SHPStruct *)(((unsigned int *)a3)[0]); /*0x6b6164*/
  a3->vtable1 = &vt_SmudgeTypeClass; /*0x6b616a*/
  ((unsigned int *)a3)[0] = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b6172*/
  ((unsigned int *)a3)[0] = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b6179*/
  ((unsigned int *)a3)[0] = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b6180*/
  if ( Image ) /*0x6b6187*/
  {
    __3_YAXPAX_Z(Image); /*0x6b618a*/
    ((unsigned int *)a3)[0] = 0; /*0x6b6192*/
  }
  AbstractClass::AnnounceExpiredPointer((gamemd::AbstractClass *)(a3), 1); /*0x6b61a0*/
  v6 = (gamemd::SmudgeTypeClass *)(a3); /*0x6b61b5*/
  v4 = (*(int (**)(unsigned char *, SmudgeTypeClass **))(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 52) + 16))( /*0x6b61b9*/
         (unsigned int *)((char *)&stru_A8EB00 + 52),
         &v6);
  if ( v4 != -1 && v4 < *(int *)(unsigned int *)((char *)&stru_A8EB00 + 68) ) /*0x6b61c9*/
  {
    --*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 68); /*0x6b61ce*/
    for ( ; /*0x6b61d4*/
          v4 < *(int *)(unsigned int *)((char *)&stru_A8EB00 + 68);
          *(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 56) + 4 * v4 - 4) = *(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 56) + 4 * v4) )
    {
      ++v4; /*0x6b61dc*/
    }
  }
  ((ObjectTypeClass *)((int)a3))->Destruct(); /*0x6b61f0*/
  if ( (a3 & 1) != 0 ) /*0x6b61fa*/
    __3_YAXPAX_Z((void *)(a3)); /*0x6b61fd*/
  return (gamemd::SmudgeTypeClass *)(a3); /*0x6b6207*/

}
}  // G42.18c ns repair
// 0x6B5550
namespace gamemd {  // G42.18c ns repair
bool SmudgeTypeClass::GetType(short * a2, int a3)
{

  UnitClass *v4; // eax
  int v5; // edx
  bool result; // al
  unsigned int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b555b*/
  result = 0; /*0x6b55a7*/
  if ( v4 ) /*0x6b5565*/
  {
    v7[2] = 0; /*0x6b556d*/
    v5 = a2[1]; /*0x6b5578*/
    v7[0] = (*a2 << 8) + 128; /*0x6b5585*/
    v7[1] = (v5 << 8) + 128; /*0x6b559a*/
    if ( UnitClass::Create(v4, this, v7, -1) ) /*0x6b559e*/
      return 1; /*0x6b5565*/
  }
  return result; /*0x6b55a9*/

}
}  // G42.18c ns repair
// 0x6B55C0
namespace gamemd {  // G42.18c ns repair
SmudgeClass * SmudgeTypeClass::GetFlag(int a2)
{

  UnitClass *v3; // eax

  v3 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b55c8*/
  if ( v3 ) /*0x6b55d2*/
    return UnitClass::Create(v3, this, &dword_B0B7A8, -1); /*0x6b55de*/
  else
    return 0; /*0x6b55e7*/

}
}  // G42.18c ns repair
// 0x6B57F0
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx
  int v4; // edx

  ((AbstractTypeClass *)((AbstractTypeClass *)this))->ProcessPower(a2); /*0x6b57f9*/
  Power::TimerProcess(this->ArrayIndex); /*0x6b5807*/
  LOBYTE(v3) = this->Crater; /*0x6b580c*/
  ((Power *)((Power *)a2))->FlagProcess(v3); /*0x6b5815*/
  LOBYTE(v4) = this->Burn; /*0x6b581a*/
  ((Power *)((Power *)a2))->FlagProcess(v4); /*0x6b5823*/
  Power::TimerProcess(this->Width); /*0x6b5831*/
  return Power::TimerProcess(this->Height); /*0x6b5844*/

}
}  // G42.18c ns repair
// 0x6B5850
namespace gamemd {  // G42.18c ns repair
int  SmudgeTypeClass::LoadTypeData(ObjectTypeClass * aP0, int aP1)
{

  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)((ObjectTypeClass *)aP0), aP1); /*0x6b585b*/
  if ( result >= 0 ) /*0x6b5862*/
  {
    if ( aP0 ) /*0x6b5866*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)aP0, (int)&aP1); /*0x6b586f*/
      aP0->vtable1 = &vt_SmudgeTypeClass; /*0x6b5874*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b587a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b5881*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_SmudgeTypeClass); /*0x6b5888*/
    }
    ((VoxelAnimType*)(char *)aP0)->LoadAnim(); /*0x6b5891*/
    ((ObjectTypeClass*)(char *)aP0)->Load2DArt(); /*0x6b5898*/
    return 0; /*0x6b589d*/
  }
  return result; /*0x6b589f*/

}
}  // G42.18c ns repair
// 0x6B58B0
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((gamemd::TechnoTypeClass *)((AbstractClass *)aP0), aP1, aP2); /*0x6b58bf*/
  if ( result >= 0 ) /*0x6b58c6*/
    return 0; /*0x6b58c8*/
  return result; /*0x6b58ca*/

}
}  // G42.18c ns repair
// 0x6B58D0
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6b58d6*/
    return -2147467261; /*0x6b58d8*/
  *a2 = 1525862008; /*0x6b58e6*/
  a2[1] = 298976820; /*0x6b58ee*/
  a2[2] = 1610654892; /*0x6b58f7*/
  a2[3] = unk_7E961C; /*0x6b5900*/
  return 0; /*0x6b58dd*/

}
}  // G42.18c ns repair
// 0x6B6130
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::GetTypeIdentifier()
{

  return 30; /*0x6b6135*/

}
}  // G42.18c ns repair
// 0x6B6140
namespace gamemd {  // G42.18c ns repair
int SmudgeTypeClass::GetObjectSize()
{

  return 676; /*0x6b6145*/

}
}  // G42.18c ns repair
// 0x6B6150
int SmudgeTypeClass::GetAuxField()
{

  return this->ArrayIndex; /*0x6b6156*/

}
