// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ArtConfig_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Animation_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Factory_e4.hpp"

// 0x41E350
namespace gamemd {
unsigned int * AnimTypeClass::Construct2(char * Source)
{

  int v3; // eax

  AbstractTypeClass::Constructor((int)this, Source); /*0x41e359*/
  *((unsigned int *)this + 38) = -1; /*0x41e363*/
  *((unsigned int *)this + 42) = -1; /*0x41e369*/
  *((unsigned int *)this + 46) = 0; /*0x41e374*/
  *((unsigned int *)this + 48) = 0; /*0x41e37a*/
  *((unsigned int *)this + 50) = 0; /*0x41e380*/
  *((unsigned int *)this + 47) = 1072693248; /*0x41e386*/
  *((unsigned int *)this + 49) = 1072693248; /*0x41e38c*/
  *((unsigned int *)this + 51) = 1072693248; /*0x41e392*/
  *((unsigned char *)this + 210) = 1; /*0x41e39a*/
  *((unsigned char *)this + 211) = 1; /*0x41e3a0*/
  *((unsigned char *)this + 212) = 1; /*0x41e3a6*/
  *((unsigned int *)this + 39) = 0; /*0x41e3b9*/
  *((unsigned int *)this + 40) = 0; /*0x41e3bf*/
  *((unsigned char *)this + 164) = 0; /*0x41e3c5*/
  *((unsigned int *)this + 43) = 0; /*0x41e3cb*/
  *((unsigned int *)this + 44) = 0; /*0x41e3d1*/
  *((unsigned char *)this + 208) = 0; /*0x41e3d7*/
  *((unsigned char *)this + 209) = 0; /*0x41e3dd*/
  *((unsigned int *)this + 54) = 0; /*0x41e3e3*/
  *((unsigned int *)this + 55) = 0; /*0x41e3e9*/
  *((unsigned int *)this + 56) = 0; /*0x41e3ef*/
  *((unsigned int *)this + 65) = 0; /*0x41e3f5*/
  *((unsigned int *)this + 66) = 0; /*0x41e3fb*/
  *this = &vt_AITriggerTypeClass; /*0x41e401*/
  *((unsigned int *)this + 1) = &vt_AITriggerTypeClass; /*0x41e407*/
  *((unsigned int *)this + 2) = &vt_AITriggerTypeClass; /*0x41e40e*/
  *((unsigned int *)this + 3) = &vt_AITriggerTypeClass; /*0x41e415*/
  memset((unsigned int *)this + 57, 0, 0x20u); /*0x41e41c*/
  if ( g_abs_A8B210 < g_abs_A8B208 /*0x41e452*/
    || (g_abs_A8B20D || !g_abs_A8B208)
    && g_abs_A8B214 > (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(0)
    && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_A8B200 + 8))(
         &g_abs_A8B200,
         (unsigned int)(g_abs_A8B208)+ g_abs_A8B214,
         0) )
  {
    v3 = (int)(g_abs_A8B210++);
    *((unsigned int *)g_abs_A8B204 + v3) = this; /*0x41e46e*/
  }
  return (unsigned int *)(this);

}
}
// 0x427530
namespace gamemd {
AnimTypeClass * AnimTypeClass::Construct(AbstractClass * aP1)
{

  AnimTypeClass *v3; // eax
  int v4; // eax
  int v5; // eax
  ObjectClass *v6; // ecx

  ObjectTypeClass::ConstructFull((int)this, aP1); /*0x42753a*/
  *((unsigned int *)this + 165) = -1; /*0x427544*/
  *((unsigned int *)this + 166) = 0; /*0x42754a*/
  *((unsigned int *)this + 167) = 0; /*0x427550*/
  *((unsigned int *)this + 168) = 0; /*0x427556*/
  *((unsigned char *)this + 676) = 0; /*0x42755c*/
  *((unsigned int *)this + 170) = 0; /*0x427562*/
  *((unsigned int *)this + 171) = 0; /*0x427568*/
  *((unsigned int *)this + 172) = 1; /*0x42756e*/
  *((unsigned int *)this + 173) = 0; /*0x427578*/
  *((unsigned int *)this + 174) = 0; /*0x42757e*/
  *((unsigned int *)this + 175) = 0; /*0x427584*/
  *((unsigned int *)this + 176) = 0; /*0x42758a*/
  *((unsigned int *)this + 177) = 0; /*0x427590*/
  *((unsigned int *)this + 178) = 0; /*0x427596*/
  *((unsigned int *)this + 179) = -1; /*0x42759c*/
  *((unsigned int *)this + 180) = 0; /*0x4275a2*/
  *((unsigned int *)this + 181) = 0; /*0x4275a8*/
  *((unsigned int *)this + 182) = 0; /*0x4275ae*/
  *((unsigned int *)this + 183) = 0; /*0x4275b4*/
  *((unsigned int *)this + 184) = 0; /*0x4275ba*/
  *((unsigned int *)this + 185) = 0; /*0x4275c0*/
  *((unsigned int *)this + 186) = 0; /*0x4275c6*/
  *((unsigned int *)this + 187) = 0; /*0x4275cc*/
  *((unsigned int *)this + 188) = 0; /*0x4275d2*/
  *((unsigned int *)this + 189) = 0; /*0x4275d8*/
  *((unsigned int *)this + 190) = -1; /*0x4275de*/
  *((unsigned int *)this + 191) = -1; /*0x4275e4*/
  *((unsigned int *)this + 192) = 0; /*0x4275ea*/
  *((unsigned int *)this + 193) = 0; /*0x4275f0*/
  *((unsigned int *)this + 194) = 0; /*0x4275f6*/
  *((unsigned int *)this + 195) = 0; /*0x4275fc*/
  *((unsigned int *)this + 196) = -1610612736; /*0x427602*/
  *((unsigned int *)this + 197) = 1072273817; /*0x42760c*/
  *((unsigned int *)this + 198) = 0; /*0x42761b*/
  *((unsigned int *)this + 199) = 1074528256; /*0x427621*/
  *((unsigned int *)this + 200) = 0; /*0x427627*/
  *((unsigned int *)this + 201) = 1074528256; /*0x42762d*/
  *((unsigned int *)this + 202) = 0; /*0x427633*/
  *((unsigned int *)this + 203) = 1076756480; /*0x427639*/
  *((unsigned int *)this + 204) = 0; /*0x427643*/
  *((unsigned int *)this + 205) = 0; /*0x427649*/
  *((unsigned int *)this + 206) = 0; /*0x42764f*/
  *((unsigned int *)this + 207) = 0; /*0x427655*/
  *((unsigned int *)this + 208) = 0; /*0x42765b*/
  *((unsigned int *)this + 209) = 0; /*0x427661*/
  *((unsigned int *)this + 210) = 0; /*0x427667*/
  *((unsigned int *)this + 211) = -1; /*0x42766d*/
  *((unsigned int *)this + 212) = 0; /*0x427673*/
  *((unsigned char *)this + 852) = 0; /*0x427679*/
  *((unsigned char *)this + 853) = 0; /*0x42767f*/
  *((unsigned char *)this + 854) = 0; /*0x427685*/
  *((unsigned char *)this + 855) = 0; /*0x42768b*/
  *((unsigned char *)this + 856) = 0; /*0x427691*/
  *((unsigned char *)this + 857) = 0; /*0x427697*/
  *((unsigned char *)this + 858) = 0; /*0x42769d*/
  *((unsigned char *)this + 859) = 0; /*0x4276a3*/
  *((unsigned char *)this + 860) = 1; /*0x4276a9*/
  *((unsigned char *)this + 861) = 0; /*0x4276b0*/
  *((unsigned char *)this + 862) = 0; /*0x4276b6*/
  *((unsigned char *)this + 863) = 0; /*0x4276bc*/
  *((unsigned char *)this + 864) = 0; /*0x4276c2*/
  *((unsigned char *)this + 865) = 0; /*0x4276c8*/
  *((unsigned char *)this + 866) = 0; /*0x4276ce*/
  *((unsigned int *)this + 217) = 3; /*0x4276d4*/
  *((unsigned char *)this + 872) = 0; /*0x4276de*/
  *((unsigned char *)this + 873) = 0; /*0x4276e4*/
  *((unsigned char *)this + 874) = 0; /*0x4276ea*/
  *((unsigned char *)this + 875) = 0; /*0x4276f0*/
  *((unsigned char *)this + 876) = 0; /*0x4276f6*/
  *((unsigned char *)this + 877) = 0; /*0x4276fc*/
  *((unsigned char *)this + 878) = 0; /*0x427702*/
  *((unsigned char *)this + 879) = 0; /*0x42770b*/
  *((unsigned char *)this + 880) = 0; /*0x427712*/
  *((unsigned char *)this + 881) = 0; /*0x427718*/
  *((unsigned char *)this + 882) = 0; /*0x42771e*/
  *((unsigned char *)this + 883) = 0; /*0x427724*/
  *((unsigned char *)this + 884) = 1; /*0x42772a*/
  *this = &vt_AnimTypeClass; /*0x427731*/
  *((unsigned int *)this + 1) = &vt_AnimTypeClass; /*0x427737*/
  *((unsigned int *)this + 2) = &vt_AnimTypeClass; /*0x42773d*/
  *((unsigned int *)this + 3) = &vt_AnimTypeClass; /*0x427744*/
  ((AbstractClass *)((int)((unsigned int *)this + 1)))->GenerateUniqueID(); /*0x42774b*/
  *((unsigned char *)this + 564) = 1; /*0x427750*/
  *((unsigned char *)this + 559) = 1; /*0x427757*/
  *((unsigned char *)this + 560) = 0; /*0x42775e*/
  *((unsigned char *)this + 561) = 0; /*0x427764*/
  *((unsigned char *)this + 562) = 1; /*0x42776a*/
  *((unsigned char *)this + 563) = 1; /*0x427771*/
  *((unsigned char *)this + 565) = 0; /*0x427778*/
  if ( *(int *)&g_abs_89F690 < *(int *)&g_abs_89F690 /*0x4277b0*/
    || (g_abs_89F690 || !*(unsigned int *)&g_abs_89F690)
    && *(int *)&g_abs_89F690 > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_89F690 + 8))(
         &g_abs_89F690,
         *(unsigned int *)&g_abs_89F690 + *(unsigned int *)&g_abs_89F690,
         0) )
  {
    v3 = (unsigned int)((AnimTypeClass *)(*(unsigned int *)&g_abs_89F690)++);
    *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * (unsigned int)v3) = this; /*0x4277cc*/
  }
  if ( *(int *)&g_abs_B077F8 < *(int *)&g_abs_B077F8 /*0x427803*/
    || (g_abs_B077F8 || !*(unsigned int *)&g_abs_B077F8)
    && *(int *)&g_abs_B077F8 > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_B077F8 + 8))(
         &g_abs_B077F8,
         *(unsigned int *)&g_abs_B077F8 + *(unsigned int *)&g_abs_B077F8,
         0) )
  {
    v4 = (*(unsigned int *)&g_abs_B077F8)++; /*0x427810*/
    *(unsigned int *)(*(unsigned int *)&g_abs_B077F8 + 4 * v4) = this; /*0x42781f*/
  }
  v5 = 0; /*0x427828*/
  if ( *(int *)&g_abs_89F690 <= 0 ) /*0x42782c*/
  {
LABEL_17:
    v5 = -1; /*0x427840*/
  }
  else
  {
    v6 = *(ObjectClass **)&g_abs_89F690; /*0x42782e*/
    while ( *(unsigned int **)v6->__pad_0 != this ) /*0x427836*/
    {
      ++v5; /*0x427838*/
      v6 = (ObjectClass *)((char *)v6 + 4); /*0x427839*/
      if ( v5 >= *(int *)&g_abs_89F690 ) /*0x42783e*/
        goto LABEL_17; /*0x42783e*/
    }
  }
  *((unsigned int *)this + 165) = v5; /*0x427842*/
  return this; /*0x42784a*/

}
}
// 0x427B50
namespace gamemd {
void* AnimTypeClass::GetWarhead(int a2)
{

  int v3; // eax
  char v4; // cl
  const char *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  char v9; // dl
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  IDA_LOBYTE(v3) = *((unsigned char *)this + 862); /*0x427b59*/
  if ( !(unsigned char)v3 ) /*0x427b61*/
  {
    if ( *((unsigned char *)this + 556) ) /*0x427b67*/
    {
      IDA_LOBYTE(v3) = ObjectTypeClass::Load2DArt((char *)this); /*0x427b71*/
    }
    else
    {
      if ( *((unsigned int *)this + 41) && *((unsigned char *)this + 168) ) /*0x427b85*/
      {
        RA2_OPDEL(*(void **)((char *)this + 164)); /*0x427b90*/
        *((unsigned char *)this + 168) = 0; /*0x427b98*/
      }
      v4 = (int)(*((unsigned char *)this + 504));
      v5 = (const char *)((char *)this + 504); /*0x427ba5*/
      *((unsigned int *)this + 41) = 0; /*0x427bad*/
      if ( !v4 ) /*0x427bb7*/
        v5 = (const char *)((char *)this + 36); /*0x427bb9*/
      _makepath(Buffer, 0, 0, v5, Ext); /*0x427bcb*/
      TheaterObjectTypeClassSpecificID(Buffer, a2); /*0x427bde*/
      v3 = SearchMIXFile(Buffer, 1); /*0x427be9*/
      *((unsigned int *)this + 41) = v3; /*0x427bf0*/
      if ( !v3 ) /*0x427bf6*/
      {
        ((ObjectTypeClass *)(Buffer))->SetRTTI71(); /*0x427bfc*/
        v3 = SearchMIXFile(Buffer, 1); /*0x427c07*/
        *((unsigned int *)this + 41) = v3; /*0x427c0c*/
      }
    }
  }
  v6 = *((unsigned int *)this + 41); /*0x427c12*/
  if ( v6 ) /*0x427c1a*/
  {
    v7 = *((unsigned int *)this + 176); /*0x427c1c*/
    *((unsigned char *)this + 676) = 1; /*0x427c22*/
    if ( !v7 ) /*0x427c2b*/
    {
      v8 = *(int16_t *)(v6 + 6); /*0x427c2d*/
      v9 = *((unsigned char *)this + 882); /*0x427c31*/
      *((unsigned int *)this + 176) = v8; /*0x427c37*/
      if ( v9 ) /*0x427c3f*/
        *((unsigned int *)this + 176) = v8 / 2; /*0x427c46*/
    }
    if ( !*((unsigned int *)this + 175) ) /*0x427c4c*/
      *((unsigned int *)this + 175) = *((unsigned int *)this + 176); /*0x427c5c*/
    *((unsigned int *)this + 166) = *(int16_t *)(v6 + 6) / 2; /*0x427c6b*/
    *((unsigned int *)this + 167) = -1; /*0x427c74*/
    *((unsigned int *)this + 168) = -1; /*0x427c7a*/
    IDA_LOBYTE(v3) = -1; /*0x427c71*/
  }
  return (void *)(v3);

}
}
// 0x427D00
namespace gamemd {
int AnimTypeClass::LoadFromINI( uint8_t *** a2)
{

  char Bool_Overwrite; // al
  int v5; // eax
  int Int_Overwrite; // eax
  int v7; // eax
  AnimTypeClass *v8; // ebp
  AnimTypeClass *v9; // eax
  int v10; // edx
  int *v11; // eax
  RandomStruct *v12; // ecx
  int v13; // eax
  double Double_Overwrite; // st7
  INIClass *v15; // eax
  double v16; // st7
  INIClass *edx20a; // edx
  double v18; // st7
  CCINIClass *v17; // eax
  int v20; // eax
  AnimTypeClass *v21; // ebp
  AnimTypeClass *v22; // eax
  char v23; // al
  char v24; // cl
  char v25; // al
  int v26; // eax
  OverlayTypeClass *v27; // ebp
  OverlayTypeClass *v28; // eax
  char v29; // cl
  char v30; // al
  char v31; // al
  INIClass *v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // ebp
  int Index; // eax
  int v37; // eax
  int v38; // ebp
  int v39; // eax
  AnimTypeClass *v40; // ebp
  int ebp40; // ebp
  unsigned int *v42; // eax
  AnimTypeClass *v41; // eax
  AnimTypeClass *v44; // ebp
  int ebp51; // ebp
  unsigned int *v46; // eax
  AnimTypeClass *v45; // eax
  AnimTypeClass *v48; // ebp
  int ebp62; // ebp
  unsigned int *v50; // eax
  AnimTypeClass *v49; // eax
  int v52; // eax
  int v53; // ebp
  int v54; // eax
  char v55; // al
  char v56; // cl
  char v57; // al
  int *v58; // eax
  int v59; // ecx
  int v60; // edi
  int eax77; // eax
  int v62; // eax
  RandomStruct *v61; // eax
  RandomStruct *v65; // [esp-Ch] [ebp-C4h]
  RandomStruct *v64; // [esp-Ch] [ebp-C4h]
  char _FFFFFFF4a; // [esp-Ch] [ebp-C4h]
  RandomStruct *v66; // [esp-Ch] [ebp-C4h]
  RandomStruct *v67; // [esp-Ch] [ebp-C4h]
  char _FFFFFFF4b; // [esp-Ch] [ebp-C4h]
  char v71; // [esp-Ch] [ebp-C4h]
  ObjectClass *v70; // [esp+8h] [ebp-B0h] BYREF
  int aP4_4; // [esp+Ch] [ebp-ACh]
  RandomStruct aP1; // [esp+10h] [ebp-A8h] BYREF
  INIClass Source[2]; // [esp+18h] [ebp-A0h] BYREF
  char Destination[32]; // [esp+98h] [ebp-20h] BYREF

  INIClass::ResetSection(a2);
  if ( !ObjectTypeClass::LoadFromINI((char *)a2, (CCINIClass *)a2) )
    return 0;
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)a2,
                     (uint8_t *)(a2 + 36),
                     &unk_818660,
                     *(unsigned char *)(a2 + 882));
  if ( Bool_Overwrite != *(unsigned char *)(a2 + 882) )
  {
    *(unsigned char *)(a2 + 882) = Bool_Overwrite;
    if ( Bool_Overwrite )
      *(int *)(a2 + 704) /= 2;
    else
      *(unsigned int *)(a2 + 704) *= 2;
    v5 = *(unsigned int *)(a2 + 704);
    if ( *(unsigned int *)(a2 + 700) > v5 )
      *(unsigned int *)(a2 + 700) = v5;
  }
  if ( *(unsigned char *)(a2 + 504) )
  {
    if ( !*(unsigned int *)(a2 + 164) )
    {
      *(unsigned char *)(a2 + 556) = INIClass::ReadBool_Overwrite(
                                 (int)&g_abs_87F8E4,
                                 (uint8_t *)(a2 + 36),
                                 &unk_818658,
                                 *(unsigned char *)(a2 + 556));
      *(unsigned char *)(a2 + 567) = INIClass::ReadBool_Overwrite(
                                 (int)&g_abs_87F8E4,
                                 (uint8_t *)(a2 + 36),
                                 &unk_81864C,
                                 *(unsigned char *)(a2 + 567));
    }
    (*(void (**)(int, int))(*(unsigned int *)a2 + 160))(a2, -1);
  }
  *(unsigned int *)(a2 + 868) = AnimTypeClass::ReadINIString(
                              a2,
                              (uint8_t *)(a2 + 36),
                              byte_818644,
                              *(unsigned int *)(a2 + 868));
  *(unsigned char *)(a2 + 865) = INIClass::ReadBool_Overwrite(
                             (int)&g_abs_87F8E4,
                             (uint8_t *)(a2 + 36),
                             &unk_818638,
                             *(unsigned char *)(a2 + 865));
  *(unsigned char *)(a2 + 872) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             &unk_81862C,
                             *(unsigned char *)(a2 + 872));
  *(unsigned char *)(a2 + 873) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             &unk_818624,
                             *(unsigned char *)(a2 + 873));
  *(unsigned char *)(a2 + 876) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             &unk_81861C,
                             *(unsigned char *)(a2 + 876));
  *(unsigned char *)(a2 + 866) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             &unk_818610,
                             *(unsigned char *)(a2 + 866));
  *(unsigned char *)(a2 + 874) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             &unk_818604,
                             *(unsigned char *)(a2 + 874));
  *(unsigned char *)(a2 + 875) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             &unk_8185FC,
                             *(unsigned char *)(a2 + 875));
  *(unsigned char *)(a2 + 877) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             &unk_8185F4,
                             *(unsigned char *)(a2 + 877));
  *(unsigned char *)(a2 + 878) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             (CCINIClass *)stru_81859C.__pad_48,
                             *(unsigned char *)(a2 + 878));
  *(unsigned char *)(a2 + 879) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             &stru_816E3C,
                             *(unsigned char *)(a2 + 879));
  *(unsigned char *)(a2 + 880) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             (CCINIClass *)&stru_81859C.INIClass_field_3C,
                             *(unsigned char *)(a2 + 880));
  *(unsigned char *)(a2 + 881) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             (CCINIClass *)&stru_81859C.needsSave_flag,
                             *(unsigned char *)(a2 + 881));
  *(unsigned char *)(a2 + 883) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             (CCINIClass *)&stru_81859C.__pad_20[8],
                             *(unsigned char *)(a2 + 883));
  *(unsigned char *)(a2 + 855) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             (CCINIClass *)stru_81859C.sectionHead,
                             *(unsigned char *)(a2 + 855));
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)a2,
                    (uint8_t *)(a2 + 36),
                    (CCINIClass *)&stru_81859C.headNode[1],
                    (INIClass *)0xFFFFFFFF);
  if ( Int_Overwrite != -1 )
  {
    if ( Int_Overwrite <= 0 )
      v7 = 0;
    else
      v7 = 900 / Int_Overwrite;
    *(unsigned int *)(a2 + 688) = v7;
  }
  *(double *)(a2 + 680) = INIClass::ReadDouble_Overwrite(
                              (int)a2,
                              (INIClass *)(a2 + 36),
                              (uint8_t *)&stru_81859C,
                              (INIClass *)*(unsigned int *)(a2 + 680));
  *(unsigned int *)(a2 + 692) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              &unk_818594,
                              *(INIClass **)(a2 + 692));
  *(unsigned int *)(a2 + 704) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              &unk_818590,
                              *(INIClass **)(a2 + 704));
  *(unsigned int *)(a2 + 696) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              &unk_818584,
                              *(INIClass **)(a2 + 696));
  *(unsigned int *)(a2 + 700) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              &unk_81857C,
                              *(INIClass **)(a2 + 700));
  *(unsigned int *)(a2 + 708) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              &unk_818570,
                              *(INIClass **)(a2 + 708));
  v8 = *(AnimTypeClass **)(a2 + 712);
  if ( INIClass::GetString(
         a2,
         (INIClass *)(a2 + 36),
         &unk_818568,
         (INIClass *)&g_abs_87F8E4,
         Source,
         128) )
  {
    v9 = globalHelper_028F70(((unsigned int *)(Source))[0].__pad_0, (int)&g_abs_89F690);
  }
  else
  {
    v9 = v8;
  }
  *(unsigned int *)(a2 + 712) = v9;
  *(unsigned int *)(a2 + 724) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              &unk_81855C,
                              *(INIClass **)(a2 + 724));
  *(unsigned int *)(a2 + 728) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              &unk_818544,
                              *(INIClass **)(a2 + 728));
  v10 = *(unsigned int *)(a2 + 736);
  v70 = *(ObjectClass **)(a2 + 732);
  aP4_4 = v10;
  v11 = INIClass::ReadPoint2D_Overwrite(a2, &aP1, (INIClass *)(a2 + 36), &unk_818534, (RandomStruct *)&v70);
  v12 = (RandomStruct *)*v11;
  v13 = v11[1];
  *(unsigned int *)(a2 + 732) = v12;
  *(unsigned int *)(a2 + 736) = v13;
  *(unsigned int *)(a2 + 748) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              &unk_818524,
                              *(INIClass **)(a2 + 748));
  *(unsigned char *)(a2 + 856) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             (CCINIClass *)&stru_8184C8.unknown50,
                             *(unsigned char *)(a2 + 856));
  *(unsigned char *)(a2 + 857) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             (CCINIClass *)&stru_8184C8.__pad_41[3],
                             *(unsigned char *)(a2 + 857));
  *(unsigned int *)(a2 + 832) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              (CCINIClass *)&stru_8184C8.unknown38,
                              *(INIClass **)(a2 + 832));
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)a2,
                       (INIClass *)(a2 + 36),
                       (uint8_t *)&stru_8184C8.INIClass_field_2C,
                       (INIClass *)*(unsigned int *)(a2 + 784));
  v15 = *(INIClass **)(a2 + 808);
  *(double *)(a2 + 784) = Double_Overwrite;
  v16 = INIClass::ReadDouble_Overwrite((int)a2, (INIClass *)(a2 + 36), (uint8_t *)stru_8184C8.__pad_20, v15);
  edx20a = *(INIClass **)(a2 + 792);
  *(double *)(a2 + 808) = v16;
  v18 = INIClass::ReadDouble_Overwrite(
          (int)a2,
          (INIClass *)(a2 + 36),
          (uint8_t *)&stru_8184C8.sectionHead[2],
          edx20a);
  v17 = *(CCINIClass **)(a2 + 844);
  *(double *)(a2 + 792) = v18;
  v20 = INIClass::ReadInt_Overwrite(
          (int)a2,
          (uint8_t *)(a2 + 36),
          (CCINIClass *)&stru_8184C8.headNode[1],
          (INIClass *)v17);
  v21 = *(AnimTypeClass **)(a2 + 752);
  *(unsigned int *)(a2 + 844) = v20;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(a2 + 36),
         (uint8_t *)&stru_8184C8,
         (INIClass *)&g_abs_87F8E4,
         Source,
         128) )
  {
    v22 = globalHelper_028F70(Source[0].__pad_0, (int)&g_abs_89F690);
  }
  else
  {
    v22 = v21;
  }
  v65 = *(RandomStruct **)(a2 + 756);
  *(unsigned int *)(a2 + 752) = v22;
  *(unsigned int *)(a2 + 756) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              &unk_8184BC,
                              (INIClass *)v65);
  v23 = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_8184B0, *(unsigned char *)(a2 + 854));
  v24 = *(unsigned char *)(a2 + 853);
  *(unsigned char *)(a2 + 854) = v23;
  v25 = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_8184A8, v24);
  v64 = *(RandomStruct **)(a2 + 828);
  *(unsigned char *)(a2 + 853) = v25;
  v26 = INIClass::ReadInt_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_818490, (INIClass *)v64);
  v27 = *(OverlayTypeClass **)(a2 + 824);
  *(unsigned int *)(a2 + 828) = v26;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(a2 + 36),
         &unk_81847C,
         (INIClass *)&g_abs_87F8E4,
         Source,
         128) )
  {
    v28 = BuildingTypeClass::FindOrCreate2(Source[0].__pad_0);
  }
  else
  {
    v28 = v27;
  }
  v29 = *(unsigned char *)(a2 + 864);
  *(unsigned int *)(a2 + 824) = v28;
  v30 = INIClass::ReadBool_Overwrite(
          (int)a2,
          (uint8_t *)(a2 + 36),
          (CCINIClass *)&stru_818424.__pad_41[3],
          v29);
  _FFFFFFF4a = *(unsigned char *)(a2 + 884);
  *(unsigned char *)(a2 + 864) = v30;
  *(unsigned char *)(a2 + 884) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             (CCINIClass *)&stru_818424.needsSave_flag,
                             _FFFFFFF4a);
  v31 = INIClass::ReadBool_Overwrite(
          (int)a2,
          (uint8_t *)(a2 + 36),
          (CCINIClass *)&stru_818424.__pad_20[4],
          *(unsigned char *)(a2 + 852));
  v32 = *(INIClass **)(a2 + 848);
  *(unsigned char *)(a2 + 852) = v31;
  v33 = INIClass::ReadInt_Overwrite(
          (int)a2,
          (uint8_t *)(a2 + 36),
          (CCINIClass *)&stru_818424.sectionHead[1],
          v32);
  v66 = *(RandomStruct **)(a2 + 836);
  *(unsigned int *)(a2 + 848) = v33;
  *(unsigned int *)(a2 + 836) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              (CCINIClass *)&stru_818424.headNode[1],
                              (INIClass *)v66);
  v34 = INIClass::ReadInt_Overwrite((int)a2, (uint8_t *)(a2 + 36), &stru_818424, *(INIClass **)(a2 + 840));
  v35 = *(unsigned int *)(a2 + 760);
  *(unsigned int *)(a2 + 840) = v34;
  if ( !INIClass::GetString(
          a2,
          (INIClass *)(a2 + 36),
          &unk_818418,
          (INIClass *)&g_abs_87F8E4,
          Source,
          128)
    || (Index = VocClass::FindIndex(Source), Index == -1) )
  {
    Index = v35;
  }
  *(unsigned int *)(a2 + 760) = Index;
  if ( Index == -1 )
  {
    if ( !INIClass::GetString(
            a2,
            (INIClass *)(a2 + 36),
            &unk_818410,
            (INIClass *)&g_abs_87F8E4,
            Source,
            128)
      || (v37 = VocClass::FindIndex(Source), v37 == -1) )
    {
      v37 = -1;
    }
    *(unsigned int *)(a2 + 760) = v37;
  }
  v38 = *(unsigned int *)(a2 + 764);
  if ( !INIClass::GetString(
          a2,
          (INIClass *)(a2 + 36),
          &unk_818404,
          (INIClass *)&g_abs_87F8E4,
          Source,
          128)
    || (v39 = VocClass::FindIndex(Source), v39 == -1) )
  {
    v39 = v38;
  }
  v40 = *(AnimTypeClass **)(a2 + 768);
  *(unsigned int *)(a2 + 764) = v39;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(a2 + 36),
         &unk_8183F8,
         (INIClass *)&g_abs_87F8E4,
         Source,
         128) )
  {
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source[0].__pad_0) || !_strcmpi(g_Str_none, Source[0].__pad_0) )
      goto LABEL_46;
    ebp40 = 0;
    if ( *(int *)&g_abs_89F690 > 0 )
    {
      while ( _strcmpi(
                (char *)(*(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * ebp40) + 36),
                Source[0].__pad_0) )
      {
        if ( ++ebp40 >= *(int *)&g_abs_89F690 )
          goto LABEL_43;
      }
      v41 = *(AnimTypeClass **)(*(unsigned int *)&g_abs_89F690 + 4 * ebp40);
      goto LABEL_47;
    }
LABEL_43:
    v42 = (unsigned int *)RA2_OPNEW(0x378u);
    if ( v42 )
      v41 = (AnimTypeClass *)AnimTypeClass::Construct(v42, (AbstractClass *)Source);
    else
LABEL_46:
      v41 = 0;
LABEL_47:
    v40 = v41;
  }
  *(unsigned int *)(a2 + 768) = v40;
  v44 = *(AnimTypeClass **)(a2 + 772);
  if ( !INIClass::GetString(
          a2,
          (INIClass *)(a2 + 36),
          &unk_8183EC,
          (INIClass *)&g_abs_87F8E4,
          Source,
          128) )
  {
    v45 = v44;
    goto LABEL_59;
  }
  if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source[0].__pad_0) || !_strcmpi(g_Str_none, Source[0].__pad_0) )
  {
LABEL_57:
    v45 = 0;
    goto LABEL_59;
  }
  ebp51 = 0;
  if ( *(int *)&g_abs_89F690 <= 0 )
  {
LABEL_54:
    v46 = (unsigned int *)RA2_OPNEW(0x378u);
    if ( v46 )
    {
      v45 = (AnimTypeClass *)AnimTypeClass::Construct(v46, (AbstractClass *)Source);
      goto LABEL_59;
    }
    goto LABEL_57;
  }
  while ( _strcmpi(
            (char *)(*(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * ebp51) + 36),
            Source[0].__pad_0) )
  {
    if ( ++ebp51 >= *(int *)&g_abs_89F690 )
      goto LABEL_54;
  }
  v45 = *(AnimTypeClass **)(*(unsigned int *)&g_abs_89F690 + 4 * ebp51);
LABEL_59:
  v48 = *(AnimTypeClass **)(a2 + 776);
  *(unsigned int *)(a2 + 772) = v45;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(a2 + 36),
         &unk_8183E0,
         (INIClass *)&g_abs_87F8E4,
         Source,
         128) )
  {
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source[0].__pad_0) || !_strcmpi(g_Str_none, Source[0].__pad_0) )
      goto LABEL_68;
    ebp62 = 0;
    if ( *(int *)&g_abs_89F690 > 0 )
    {
      while ( _strcmpi(
                (char *)(*(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * ebp62) + 36),
                Source[0].__pad_0) )
      {
        if ( ++ebp62 >= *(int *)&g_abs_89F690 )
          goto LABEL_65;
      }
      v49 = *(AnimTypeClass **)(*(unsigned int *)&g_abs_89F690 + 4 * ebp62);
      goto LABEL_70;
    }
LABEL_65:
    v50 = (unsigned int *)RA2_OPNEW(0x378u);
    if ( v50 )
      v49 = (AnimTypeClass *)AnimTypeClass::Construct(v50, (AbstractClass *)Source);
    else
LABEL_68:
      v49 = 0;
  }
  else
  {
    v49 = v48;
  }
LABEL_70:
  v67 = *(RandomStruct **)(a2 + 780);
  *(unsigned int *)(a2 + 776) = v49;
  *(unsigned int *)(a2 + 780) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              &unk_8183CC,
                              (INIClass *)v67);
  v52 = INIClass::ReadInt_Overwrite((int)a2, (uint8_t *)(a2 + 36), &unk_8183BC, *(INIClass **)(a2 + 820));
  v53 = *(unsigned int *)(a2 + 816);
  *(unsigned int *)(a2 + 820) = v52;
  if ( INIClass::GetString(
         a2,
         (INIClass *)(a2 + 36),
         &unk_8183B4,
         (INIClass *)&g_abs_87F8E4,
         Source,
         128) )
  {
    v54 = WarheadTypeClass::FindOrCreate(Source[0].__pad_0);
  }
  else
  {
    v54 = v53;
  }
  _FFFFFFF4b = *(unsigned char *)(a2 + 858);
  *(unsigned int *)(a2 + 816) = v54;
  *(unsigned char *)(a2 + 858) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             &unk_8183AC,
                             _FFFFFFF4b);
  v55 = INIClass::ReadBool_Overwrite(
          (int)a2,
          (uint8_t *)(a2 + 36),
          (CCINIClass *)&aP3.unknown50,
          *(unsigned char *)(a2 + 859));
  v56 = *(unsigned char *)(a2 + 860);
  *(unsigned char *)(a2 + 859) = v55;
  v57 = INIClass::ReadBool_Overwrite((int)a2, (uint8_t *)(a2 + 36), (CCINIClass *)&aP3.INIClass_field_3C, v56);
  v71 = *(unsigned char *)(a2 + 861);
  *(unsigned char *)(a2 + 860) = v57;
  *(unsigned char *)(a2 + 861) = INIClass::ReadBool_Overwrite(
                             (int)a2,
                             (uint8_t *)(a2 + 36),
                             (CCINIClass *)&aP3.INIClass_field_2C,
                             v71);
  if ( INIClass::GetString(
         a2,
         (INIClass *)(a2 + 36),
         (uint8_t *)&aP3.sectionCount,
         0,
         (INIClass *)Destination,
         32) )
  {
    *(unsigned int *)(a2 + 716) = BuildingTypeClass::FindOrCreateEx(Destination);
  }
  *(unsigned int *)(a2 + 720) = INIClass::ReadInt_Overwrite(
                              (int)a2,
                              (uint8_t *)(a2 + 36),
                              (CCINIClass *)&aP3.headNode[2],
                              *(INIClass **)(a2 + 720));
  v70 = (ObjectClass *)-1;
  aP4_4 = -1;
  v58 = INIClass::ReadPoint2D_Overwrite(a2, &aP1, (INIClass *)(a2 + 36), &aP3, (RandomStruct *)&v70);
  v59 = *v58;
  v60 = v58[1];
  if ( *v58 != -1 )
  {
    if ( v59 <= 0 )
      eax77 = 0;
    else
      eax77 = 900 / v59;
    *(unsigned int *)(a2 + 740) = eax77;
  }
  if ( v60 != -1 )
  {
    if ( v60 <= 0 )
      v62 = 0;
    else
      v62 = 900 / v60;
    *(unsigned int *)(a2 + 744) = v62;
  }
  if ( *(int *)(a2 + 744) < 0 )
    *(unsigned int *)(a2 + 744) = 0;
  v61 = *(RandomStruct **)(a2 + 744);
  if ( *(unsigned int *)(a2 + 740) > (int)v61 )
    *(unsigned int *)(a2 + 740) = v61;
  return 1;

}
}
// 0x428800
namespace gamemd {
ScenarioClass * * AnimTypeClass::SaveLoad_Prefix(int a1, int a2)
{

  int result; // eax
  char v3; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x428814*/
  if ( result >= 0 ) /*0x42881b*/
  {
    if ( a1 ) /*0x428823*/
    {
      ObjectTypeClass::Construct((unsigned int *)a1, (int)&v3); /*0x42882c*/
      *(unsigned int *)a1 = &vt_AnimTypeClass; /*0x428831*/
      *(unsigned int *)(a1 + 4) = &vt_AnimTypeClass; /*0x428837*/
      *(unsigned int *)(a1 + 8) = &vt_AnimTypeClass; /*0x42883e*/
      *(unsigned int *)(a1 + 12) = &vt_AnimTypeClass; /*0x428845*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x42884e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x428855*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(a1 + 712)); /*0x428866*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(a1 + 772)); /*0x428877*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(a1 + 776)); /*0x428888*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(a1 + 768)); /*0x428899*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(a1 + 752)); /*0x4288aa*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(a1 + 816)); /*0x4288bb*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(a1 + 824)); /*0x4288cc*/
    if ( !*(unsigned char *)(a1 + 862) ) /*0x4288d1*/
    {
      if ( *(unsigned char *)(a1 + 556) ) /*0x4288db*/
      {
        _makepath( /*0x428910*/
          Buffer,
          0,
          0,
          (const char *)(a1 + 36),
          (const char *)&off_7E1BC6 + 112 * *((unsigned int *)g_abs_A8B230 + 1174));
        *(unsigned int *)(a1 + 164) = SearchMIXFile(Buffer, 1); /*0x428923*/
        return 0; /*0x428932*/
      }
      if ( *(unsigned char *)(a1 + 567) ) /*0x428935*/
        (*(void (**)(int, unsigned int))(*(unsigned int *)a1 + 160))(a1, *((unsigned int *)g_abs_A8B230 + 1174)); /*0x42894f*/
    }
    return 0; /*0x428955*/
  }
  return result; /*0x42892b*/

}
}
// 0x4289D0
namespace gamemd {
int AnimTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x4289d9*/
  Power::TimerProcess(*((unsigned int *)this + 217)); /*0x4289e7*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 866); /*0x4289ec*/
  Power::FlagProcess(a2, v3); /*0x4289f5*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 873); /*0x4289fa*/
  v5 = Power::FlagProcess(a2, v4); /*0x428a03*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 874); /*0x428a08*/
  Power::FlagProcess(a2, v5); /*0x428a11*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 875); /*0x428a16*/
  Power::FlagProcess(a2, v6); /*0x428a1f*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 876); /*0x428a24*/
  v8 = Power::FlagProcess(a2, v7); /*0x428a2d*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 877); /*0x428a32*/
  Power::FlagProcess(a2, v8); /*0x428a3b*/
  IDA_LOBYTE(v9) = *((unsigned char *)this + 879); /*0x428a40*/
  Power::FlagProcess(a2, v9); /*0x428a49*/
  IDA_LOBYTE(v10) = *((unsigned char *)this + 880); /*0x428a4e*/
  v11 = Power::FlagProcess(a2, v10); /*0x428a57*/
  IDA_LOBYTE(v11) = *((unsigned char *)this + 881); /*0x428a5c*/
  Power::FlagProcess(a2, v11); /*0x428a65*/
  IDA_LOBYTE(v12) = *((unsigned char *)this + 882); /*0x428a6a*/
  Power::FlagProcess(a2, v12); /*0x428a73*/
  Power::TimerProcess(*((unsigned int *)this + 166)); /*0x428a81*/
  Checksummer::Add_double((unsigned int *)a2, *((unsigned int *)this + 170), *((unsigned int *)this + 171)); /*0x428a96*/
  IDA_LOBYTE(v13) = *((unsigned char *)this + 855); /*0x428a9b*/
  Power::FlagProcess(a2, v13); /*0x428aa4*/
  Power::TimerProcess(*((unsigned int *)this + 172)); /*0x428ab2*/
  Power::TimerProcess(*((unsigned int *)this + 173)); /*0x428ac0*/
  Power::TimerProcess(*((unsigned int *)this + 174)); /*0x428ace*/
  Power::TimerProcess(*((unsigned int *)this + 175)); /*0x428adc*/
  Power::TimerProcess(*((unsigned int *)this + 176)); /*0x428aea*/
  Power::TimerProcess(*((unsigned int *)this + 190)); /*0x428af8*/
  Power::TimerProcess(*((unsigned int *)this + 191)); /*0x428b06*/
  Power::TimerProcess(*((unsigned int *)this + 180)); /*0x428b14*/
  Power::TimerProcess(*((unsigned int *)this + 181)); /*0x428b22*/
  Power::TimerProcess(*((unsigned int *)this + 182)); /*0x428b30*/
  Power::TimerProcess(*((unsigned int *)this + 183)); /*0x428b3e*/
  Power::TimerProcess(*((unsigned int *)this + 184)); /*0x428b4c*/
  Power::TimerProcess(*((unsigned int *)this + 187)); /*0x428b5a*/
  IDA_LOBYTE(v14) = *((unsigned char *)this + 859); /*0x428b5f*/
  return Power::FlagProcess(a2, v14); /*0x428b6d*/

}
}
// 0x428B80
namespace gamemd {
AnimTypeClass * * AnimTypeClass::FindOrCreate(AbstractClass * Source)
{

  int v2; // esi
  unsigned int *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x428b9c*/
    return 0; /*0x428bff*/
  v2 = 0; /*0x428bad*/
  if ( *(int *)&stru_89E138.__pad_1600D[27] <= 0 ) /*0x428bb1*/
  {
LABEL_6:
    v3 = (unsigned int *)RA2_OPNEW(0x378u); /*0x428bd6*/
    if ( v3 ) /*0x428be5*/
      return (AnimTypeClass *)AnimTypeClass::Construct(v3, Source); /*0x428bf1*/
    return 0; /*0x428be5*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * v2) + 36), Source) ) /*0x428bca*/
  {
    if ( ++v2 >= *(int *)&stru_89E138.__pad_1600D[27] ) /*0x428bd4*/
      goto LABEL_6; /*0x428bd4*/
  }
  return *(AnimTypeClass **)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * v2); /*0x428bef*/

}
}
// 0x428C30
namespace gamemd {
int AnimTypeClass::GetDamage()
{

  int result; // eax
  const char *v3; // eax
  void *EntireFile; // eax
  void *v5; // eax
  int v6; // esi
  unsigned int v7[22]; // [esp+4h] [ebp-2D8h] BYREF
  char v8[12]; // [esp+5Ch] [ebp-280h] BYREF
  int v9; // [esp+68h] [ebp-274h]
  unsigned int v10[22]; // [esp+70h] [ebp-26Ch] BYREF
  char v11[12]; // [esp+C8h] [ebp-214h] BYREF
  int v12; // [esp+D4h] [ebp-208h]
  char Buffer[512]; // [esp+DCh] [ebp-200h] BYREF

  result = *((unsigned int *)this + 41); /*0x428c39*/
  if ( !result && *((unsigned char *)this + 862) ) /*0x428c47*/
  {
    Debug::Log(); /*0x428c5e*/
    v3 = (unsigned char *)this + 504; /*0x428c69*/
    if ( !*((unsigned char *)this + 504) ) /*0x428c63*/
      v3 = (unsigned char *)this + 36; /*0x428c76*/
    _makepath(Buffer, 0, 0, v3, Ext); /*0x428c8b*/
    if ( *((unsigned char *)this + 556) ) /*0x428c90*/
    {
      _makepath(Buffer, 0, 0, (unsigned char *)this + 36, (const char *)&off_7E1BC6 + 112 * *((unsigned int *)g_abs_A8B230 + 1174)); /*0x428ccc*/
    }
    else if ( *((unsigned char *)this + 567) ) /*0x428cd6*/
    {
      TheaterObjectTypeClassSpecificID(Buffer, *((unsigned int *)g_abs_A8B230 + 1174)); /*0x428cf3*/
    }
    CCFileClass::Construct(v7, Buffer); /*0x428d04*/
    EntireFile = CCFileClass::ReadEntireFile(v7); /*0x428d0d*/
    *((unsigned int *)this + 41) = EntireFile; /*0x428d14*/
    if ( EntireFile ) /*0x428d1a*/
    {
      *((unsigned char *)this + 168) = 1; /*0x428d1c*/
    }
    else
    {
      ObjectTypeClass::SetRTTI71(Buffer); /*0x428d2c*/
      CCFileClass::Construct(v10, Buffer); /*0x428d3d*/
      v5 = CCFileClass::ReadEntireFile(v10); /*0x428d46*/
      *((unsigned int *)this + 41) = v5; /*0x428d4d*/
      if ( v5 ) /*0x428d53*/
        *((unsigned char *)this + 168) = 1; /*0x428d55*/
      v10[0] = &vt_CCFileClass; /*0x428d63*/
      v12 = 0; /*0x428d6b*/
      Vector::Clear((int)v11); /*0x428d76*/
      v10[0] = &off_7E1668; /*0x428d7f*/
      BufferIOFileClass::Dtor(v10); /*0x428d87*/
    }
    (*(void (**)(char *, unsigned int))(*(unsigned int *)this + 160))(this, *((unsigned int *)g_abs_A8B230 + 1174)); /*0x428d9c*/
    v6 = *((unsigned int *)this + 41); /*0x428da2*/
    v7[0] = &vt_CCFileClass; /*0x428dac*/
    v9 = 0; /*0x428db4*/
    Vector::Clear((int)v8); /*0x428dbc*/
    v7[0] = &off_7E1668; /*0x428dc5*/
    BufferIOFileClass::Dtor(v7); /*0x428dcd*/
    return v6; /*0x428dd2*/
  }
  return result; /*0x428dd4*/

}
}
// 0x428EA0
namespace gamemd {
AnimTypeClass * AnimTypeClass::ddtor(unsigned int * Block, char a2)
{

  int v3; // eax
  int v4; // eax
  unsigned int *v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_AnimTypeClass; /*0x428ead*/
  *(Block + 1) = &vt_AnimTypeClass; /*0x428eb3*/
  *(Block + 2) = &vt_AnimTypeClass; /*0x428eba*/
  *(Block + 3) = &vt_AnimTypeClass; /*0x428ec1*/
  v6 = Block; /*0x428ecf*/
  v3 = (*(int (**)(int *, unsigned int **))(g_abs_B0F670 + 16))(&g_abs_B0F670, &v6); /*0x428ed3*/
  if ( v3 != -1 && v3 < g_abs_B0F680 && v3 < --g_abs_B0F680 ) /*0x428eee*/
  {
    do /*0x428f06*/
    {
      ++v3; /*0x428ef6*/
      *((unsigned int *)g_abs_B0F674 + v3 - 1) = *((unsigned int *)g_abs_B0F674 + v3); /*0x428efa*/
    }
    while ( v3 < g_abs_B0F680 ); /*0x428f06*/
  }
  v6 = Block; /*0x428f18*/
  v4 = (*(int (**)(int *, unsigned int **))(g_abs_8B4150 + 16))(&g_abs_8B4150, &v6); /*0x428f1c*/
  if ( v4 != -1 && v4 < g_abs_8B4160 && v4 < --g_abs_8B4160 ) /*0x428f37*/
  {
    do /*0x428f4f*/
    {
      ++v4; /*0x428f3f*/
      *((unsigned int *)g_abs_8B4154 + v4 - 1) = *((unsigned int *)g_abs_8B4154 + v4); /*0x428f43*/
    }
    while ( v4 < g_abs_8B4160 ); /*0x428f4f*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x428f53*/
  if ( (Block & 1) != 0 ) /*0x428f5d*/
    OperatorDelete(Block); /*0x428f60*/
  return (AnimTypeClass *)Block; /*0x428f6a*/

}
} // namespace gamemd

// 0x48E050
namespace gamemd {
int AnimTypeClass::LookupByName()
{

  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48e057*/
    return -1; /*0x48e07c*/
  v2 = 0; /*0x48e059*/
  v3 = (const void **)off_81DA78; /*0x48e05b*/
  while ( _strcmpi(*v3, this) ) /*0x48e06e*/
  {
    ++v3; /*0x48e070*/
    ++v2; /*0x48e073*/
    if ( (int)v3 >= (int)dword_81DA8C ) /*0x48e07a*/
      return -1; /*0x48e07a*/
  }
  return v2; /*0x48e07c*/

}
}
// 0x427A80
namespace gamemd {
char AnimTypeClass::GetLoopCount(int a2)
{

  int v2; // eax
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  IDA_LOBYTE(v2) = g_abs_A8ED6B; /*0x427a80*/
  if ( g_abs_A8ED6B || a2 != dword_822CF8 ) /*0x427aa0*/
  {
    if ( !*((unsigned char *)this + 556) || *((unsigned char *)this + 862) ) /*0x427ab0*/
    {
      IDA_LOBYTE(v2) = *((unsigned char *)this + 567); /*0x427b2b*/
      if ( (unsigned char)v2 ) /*0x427b33*/
        IDA_LOBYTE(v2) = (*(int (**)(void *, int))(*(unsigned int *)this + 160))(this, a2); /*0x427b3a*/
    }
    else
    {
      if ( *((unsigned int *)this + 41) && *((unsigned char *)this + 168) ) /*0x427ac4*/
      {
        RA2_OPDEL(*((void **)this + 41)); /*0x427acf*/
        *((unsigned char *)this + 168) = 0; /*0x427ad7*/
      }
      *((unsigned int *)this + 41) = 0; /*0x427af6*/
      _makepath(Buffer, 0, 0, (const char *)this + 36, (const char *)&off_7E1BC6 + 112 * a2); /*0x427b07*/
      v2 = SearchMIXFile(Buffer, 1); /*0x427b15*/
      *((unsigned int *)this + 41) = v2; /*0x427b1a*/
    }
  }
  return v2; /*0x427b20*/

}
} // namespace gamemd

// 0x427CB0
namespace gamemd {
int AnimTypeClass::FindIndex()
{

  int v2; // esi

  if ( !this ) /*0x427cb6*/
    return -1; /*0x427cb6*/
  v2 = 0; /*0x427cbd*/
  if ( *(int *)&stru_89E138.__pad_1600D[27] <= 0 ) /*0x427cc1*/
    return -1; /*0x427ce6*/
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * v2) + 36), this) ) /*0x427cda*/
  {
    if ( ++v2 >= *(int *)&stru_89E138.__pad_1600D[27] ) /*0x427ce4*/
      return -1; /*0x427ce4*/
  }
  return v2; /*0x427ce6*/

}
} // namespace gamemd

// 0x428970
namespace gamemd {
int AnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x42897f*/
  if ( result >= 0 ) /*0x428986*/
    return 0; /*0x428988*/
  return result; /*0x42898a*/

}
} // namespace gamemd

// 0x428990
namespace gamemd {
int AnimTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x428996*/
    return -2147467261; /*0x428998*/
  *a2 = -1366608934; /*0x4289a6*/
  a2[1] = 298976796; /*0x4289ae*/
  a2[2] = 1610654892; /*0x4289b7*/
  a2[3] = -1252326136; /*0x4289c0*/
  return 0; /*0x42899d*/

}
} // namespace gamemd

// 0x428C10
namespace gamemd {
int AnimTypeClass::GetAnimData(int a2, int a3)
{

  int result; // eax

  result = *((unsigned int *)this + 178); /*0x428c10*/
  if ( result == a2 ) /*0x428c1c*/
    *((unsigned int *)this + 178) = 0; /*0x428c1e*/
  return result; /*0x428c28*/

}
} // namespace gamemd

// 0x428E40
namespace gamemd {
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E40()
{

  return -1; /*0x428e43*/

}
} // namespace gamemd

// 0x428E50
namespace gamemd {
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E50()
{

  return 5; /*0x428e55*/

}
} // namespace gamemd

// 0x428E60
namespace gamemd {
int AnimTypeClass::GetAuxField()
{

  return *((unsigned int *)this + 165); /*0x428e66*/

}
} // namespace gamemd

// 0x428E70
namespace gamemd {
int AnimTypeClass::GetObjectSize()
{

  return 888; /*0x428e75*/

}
} // namespace gamemd

// 0x428E80
namespace gamemd {
char AnimTypeClass::Stub(int a1, int a2)
{

  return 0; /*0x428e82*/

}
} // namespace gamemd

// 0x428E90
namespace gamemd {
int AnimTypeClass::StubReturnFalse(int a1)
{

  return 0; /*0x428e92*/

}
} // namespace gamemd

// 0x477050
namespace gamemd {
int AnimTypeClass::ReadINIString(INIClass * aP1, unsigned char * a2, Layer a3)
{

  INIClass *v5; // eax
  INIClass Destination[2]; // [esp+8h] [ebp-80h] BYREF

  v5 = (INIClass *)globalHelper_08E090(a3); /*0x47706d*/
  if ( INIClass::GetString(this, aP1, a2, v5, Destination, 128) ) /*0x477085*/
    return AnimTypeClass::LookupByName(Destination); /*0x477092*/
  else
    return a3; /*0x4770a2*/

}
} // namespace gamemd
