// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x6B4DD0
namespace gamemd {
INIClass * * UnitTypeClass::ReadINIEntry()
{

  char * v1;
  int i; // edi
  unsigned int *v3; // esi
  int v4; // eax
  int v5; // ebx
  int v7; // [esp+10h] [ebp-98h]
  int16_t v8[2]; // [esp+14h] [ebp-94h] BYREF
  char *v9; // [esp+18h] [ebp-90h]
  char Buffer[12]; // [esp+1Ch] [ebp-8Ch] BYREF
  char Source[128]; // [esp+28h] [ebp-80h] BYREF

  v1 = (char *)((int)((char *)(0)));
  v9 = (char *)(this);
  INIClass::ClearSection((int)this, (int)unk_81732C, 0); /*0x6b4de7*/
  v7 = 0; /*0x6b4dec*/
  do /*0x6b4e8e*/
  {
    for ( i = 0; i < 512; ++i ) /*0x6b4df0*/
    {
      v8[0] = (int16_t)((unsigned int *)(i));
      v8[1] = (int16_t)((unsigned int *)(v1));
      v3 = (unsigned int *)(((CellCoord *)(&dword_87F7E8))->To_CellObj(v8));
      v4 = v3[18]; /*0x6b4e0d*/
      if ( v4 != -1 && !*((unsigned char *)v3 + 287) ) /*0x6b4e15*/
      {
        v5 = *((unsigned int *)dword_A8EC1C + v4); /*0x6b4e29*/
        sprintf(Buffer, "%d", v7); /*0x6b4e37*/
        sprintf(Source, "%s,%d,%d,%d", (const char *)(v5 + 36), i, v1, *((uint8_t *)v3 + 287)); /*0x6b4e55*/
        LOBYTE(v4) = INIClass::SetString(v9, (uint8_t *)unk_81732C, Buffer, Source); /*0x6b4e71*/
        ++v7; /*0x6b4e76*/
      }
    }
    ++v1; /*0x6b4e87*/
  }
  while ( v1 < (char *)(512) ); /*0x6b4e8e*/
  return (gamemd::INIClass **)(v4); /*0x6b4e94*/

}
} // namespace gamemd
// 0x7470D0
namespace gamemd {  // G42.18c ns repair
UnitTypeClass::UnitTypeClass(INIClass * aP1)
{

  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  unsigned int *v6; // edx

  TechnoTypeClass::ReadINI((char *)this, aP1, -1); /*0x7470de*/
  *((unsigned int *)this + 894) = -1; /*0x7470e3*/
  *((unsigned int *)this + 895) = -1; /*0x7470eb*/
  *((unsigned int *)this + 896) = 0; /*0x7470f1*/
  *((unsigned int *)this + 897) = 0; /*0x7470f7*/
  *((unsigned int *)this + 898) = 0; /*0x7470fd*/
  *((unsigned char *)this + 3596) = 0; /*0x747103*/
  *((unsigned char *)this + 3597) = 0; /*0x747109*/
  *((unsigned char *)this + 3598) = 0; /*0x74710f*/
  *((unsigned char *)this + 3599) = 0; /*0x747115*/
  *((unsigned char *)this + 3600) = 0; /*0x74711b*/
  *((unsigned char *)this + 3601) = 0; /*0x747121*/
  *((unsigned char *)this + 3602) = 0; /*0x747127*/
  *((unsigned char *)this + 3603) = 0; /*0x74712d*/
  *((unsigned char *)this + 3604) = 1; /*0x747136*/
  *((unsigned char *)this + 3605) = 0; /*0x74713d*/
  *((unsigned char *)this + 3606) = 0; /*0x747143*/
  *((unsigned char *)this + 3607) = 0; /*0x747149*/
  *((unsigned char *)this + 3608) = 0; /*0x74714f*/
  *((unsigned char *)this + 3609) = 0; /*0x747155*/
  *((unsigned char *)this + 3610) = 0; /*0x74715b*/
  *((unsigned char *)this + 3611) = 0; /*0x747161*/
  *((unsigned int *)this + 903) = 0; /*0x747167*/
  *((unsigned int *)this + 904) = 0; /*0x74716d*/
  *((unsigned int *)this + 905) = 1; /*0x747173*/
  *((unsigned int *)this + 906) = -1; /*0x74717d*/
  *((unsigned int *)this + 907) = -1; /*0x747183*/
  *((unsigned int *)this + 908) = -1; /*0x747189*/
  *((unsigned int *)this + 909) = -1; /*0x74718f*/
  *((unsigned int *)this + 910) = -1; /*0x747195*/
  *((unsigned int *)this + 911) = 8; /*0x74719b*/
  *((unsigned int *)this + 918) = 0; /*0x7471a5*/
  *((unsigned char *)this + 3676) = 12; /*0x7471ab*/
  *((unsigned char *)this + 3677) = 0; /*0x7471b2*/
  *((unsigned char *)this + 3678) = 0; /*0x7471b8*/
  *(unsigned int *)this = &vt_UnitTypeClass; /*0x7471bf*/
  *((unsigned int *)this + 1) = &vt_UnitTypeClass; /*0x7471c5*/
  *((unsigned int *)this + 2) = &vt_UnitTypeClass; /*0x7471cb*/
  *((unsigned int *)this + 3) = &vt_UnitTypeClass; /*0x7471d2*/
  AbstractClass::GenerateUniqueID((char *)this + 4); /*0x7471d9*/
  *((unsigned int *)this + 454) = 32; /*0x7471de*/
  v3 = dword_A83CF0; /*0x7471e8*/
  if ( dword_A83CF0 < dword_A83CE8 /*0x747226*/
    || (byte_A83CED || !dword_A83CE8)
    && dword_A83CF4 > 0
    && (v4 = (*(uint8_t (**)(int *, int, unsigned int))(dword_A83CE0 + 8))(
               &dword_A83CE0,
               dword_A83CE8 + dword_A83CF4,
               0) == 0,
        v3 = dword_A83CF0,
        !v4) )
  {
    dword_A83CF0 = v3 + 1; /*0x74722b*/
    *((unsigned int *)dword_A83CE4 + v3) = this; /*0x747235*/
    v3 = dword_A83CF0; /*0x747238*/
  }
  v5 = 0; /*0x74723d*/
  if ( v3 <= 0 ) /*0x747241*/
  {
LABEL_11:
    v5 = -1; /*0x747255*/
  }
  else
  {
    v6 = (unsigned int *)(dword_A83CE4); /*0x747243*/
    while ( *v6 != this ) /*0x74724b*/
    {
      ++v5; /*0x74724d*/
      ++v6; /*0x74724e*/
      if ( v5 >= v3 ) /*0x747253*/
        goto LABEL_11; /*0x747253*/
    }
  }
  *((unsigned int *)this + 894) = v5; /*0x747257*/
  *((unsigned int *)this + 912) = -1; /*0x74725f*/
  *((unsigned int *)this + 913) = -1; /*0x747267*/
  *((unsigned int *)this + 914) = -1; /*0x74726d*/
  *((unsigned int *)this + 915) = -1; /*0x747273*/
  *((unsigned int *)this + 916) = -1; /*0x747279*/
  *((unsigned int *)this + 917) = -1; /*0x74727f*/
  *((unsigned char *)this + 3381) = 0; /*0x747285*/
  *((unsigned char *)this + 3382) = 0; /*0x74728b*/
  *((unsigned char *)this + 3387) = 0; /*0x747291*/
  *((unsigned char *)this + 3384) = 1; /*0x747297*/
  *((unsigned char *)this + 3479) = 0; /*0x74729e*/
  *((unsigned char *)this + 3478) = 0; /*0x7472a4*/
  *((unsigned char *)this + 3374) = 1; /*0x7472aa*/
  return this; /*0x7472b1*/

}
}  // G42.18c ns repair
// 0x7474B0
namespace gamemd {
void UnitTypeClass::UnitTypeClass_CreateUnit(void * a2)
{

  int *v4; // eax
  int *v5; // esi
  char v6; // al
  unsigned int v7; // edx
  uint16_t v8; // cx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned int v13[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (int *)__2_YAPAXI_Z(0x8E8u); /*0x7474bb*/
  if ( !v4 ) /*0x7474c5*/
    return 0; /*0x7474c5*/
  v5 = (int *)UnitClass::Construct(v4, (int)a2, ppv); /*0x7474d8*/
  if ( !v5 ) /*0x7474dc*/
    return 0; /*0x747554*/
  LOWORD(ppv) = 0; /*0x7474e4*/
  v6 = ((Random *)((Random *)&dword_A8B230[14].NeedsSaveOrLink))->State(); /*0x7474f1*/
  v7 = (unsigned int)ppv; /*0x7474f6*/
  LOBYTE(v8) = 0; /*0x7474fa*/
  HIBYTE(v8) = v6; /*0x7474fc*/
  BYTE1(v7) = 0; /*0x7474fe*/
  v13[2] = 0; /*0x747503*/
  v9 = v7 | v8; /*0x74750b*/
  v10 = (a2[1] << 8) + 128; /*0x747527*/
  v13[0] = (*a2 << 8) + 128; /*0x74752e*/
  v11 = *v5; /*0x747532*/
  v13[1] = v10; /*0x747534*/
  return (*(char (**)(int *, unsigned int *, unsigned int))(v11 + 216))(v5, v13, (uint8_t)(((v9 >> 7) + 1) >> 1)); /*0x74754d*/

}
}
// 0x747560
namespace gamemd {
void UnitTypeClass::UnitTypeClass_ConstructUnit( int * a2)
{

  int *v3; // eax

  v3 = (int *)__2_YAPAXI_Z(0x8E8u); /*0x747568*/
  if ( v3 ) /*0x747572*/
    return UnitClass::Construct(v3, (int)this, a2); /*0x74757c*/
  else
    return 0; /*0x747585*/

}
}
// 0x747620
namespace gamemd {
void* UnitTypeClass_LoadFromINI(void * a1, void * a2, void * a3)
{
  BuildingClass *v3; // ecx
  BuildingClass *v4; // edi
  uint8_t *p_occupant; // ebp
  char Bool_Overwrite; // al
  char v7; // al
  char v8; // cl
  int TypeMember_476FC0; // eax
  char v10; // cl
  char v11; // al
  char v12; // al
  char v13; // cl
  int *Point3D_Overwrite; // eax
  int v15; // eax
  char v16; // al
  char Int_Overwrite; // al
  char v18; // cl
  char v19; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  int StorageFilledSlots; // ecx
  int v33; // eax
  bool v34; // cc
  int v35; // esi
  int v36; // edi
  int v37; // eax
  int v38; // edi
  int v39; // eax
  int v40; // edi
  int v41; // eax
  int v42; // edi
  int v43; // eax
  int v44; // edi
  int v45; // eax
  int v46; // edi
  int v47; // eax
  int v48; // edi
  int v49; // eax
  int v50; // edi
  int v51; // eax
  int v52; // edi
  int v53; // eax
  int v54; // edi
  int v55; // eax
  int v56; // edi
  int v57; // eax
  int v58; // edi
  int v59; // eax
  int v60; // edi
  int v61; // eax
  int v62; // edi
  int v63; // eax
  int v64; // edi
  int v65; // eax
  int v66; // edi
  int v67; // eax
  int v68; // edi
  int v69; // eax
  char v71; // [esp-Ch] [ebp-154h]
  char v72; // [esp-Ch] [ebp-154h]
  char v73; // [esp-Ch] [ebp-154h]
  int ProductionTimer_low; // [esp-Ch] [ebp-154h]
  unsigned int v75; // [esp-Ch] [ebp-154h]
  char v76; // [esp-Ch] [ebp-154h]
  int v77; // [esp-Ch] [ebp-154h]
  int parent_gap; // [esp-Ch] [ebp-154h]
  uint8_t ***v79; // [esp+0h] [ebp-148h]
  int *BuildingClass_field_short_700; // [esp+8h] [ebp-140h]
  int *PrismTargetCoords; // [esp+8h] [ebp-140h]
  int v82; // [esp+Ch] [ebp-13Ch]
  BuildingClass *v83; // [esp+10h] [ebp-138h]
  int Buffer[5]; // [esp+14h] [ebp-134h] BYREF
  char Source[28]; // [esp+28h] [ebp-120h] BYREF
  char v86[260]; // [esp+44h] [ebp-104h] BYREF

  v4 = v3; /*0x74762f*/
  v83 = v3; /*0x747633*/
  INIClass::ResetSection(); /*0x747637*/
  if ( !(uint8_t)ObjectTypeClass::LoadExtras((TechnoTypeClass *)this, a2, v79) ) /*0x74763f*/
    return 0; /*0x747ea0*/
  p_occupant = (uint8_t *)&((unsigned int *)v4)[0]; /*0x747654*/
  v4[1].__pad_6B8[21] = INIClass::ReadBool_Overwrite( /*0x747665*/
                          (int *)this,
                          (uint8_t *)&((unsigned int *)v4)[0],
                          aCrategoodie,
                          v4[1].__pad_6B8[21]);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x74767a*/
                     (int *)this,
                     (uint8_t *)&((unsigned int *)v4)[0],
                     aDeploytofire,
                     v4[1].__pad_6B8[26]);
  v71 = v4[1].__pad_6B8[27]; /*0x747687*/
  v4[1].__pad_6B8[26] = Bool_Overwrite; /*0x74768e*/
  v4[1].__pad_6B8[27] = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)&((unsigned int *)v4)[0], aIssimpledeploy, v71); /*0x747699*/
  v7 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)&((unsigned int *)v4)[0], aHarvester, v4[1].__pad_6B8[22]); /*0x7476ae*/
  v8 = v4[1].__pad_6B8[23]; /*0x7476b3*/
  v4[1].__pad_6B8[22] = v7; /*0x7476b9*/
  v4[1].__pad_6B8[23] = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)&((unsigned int *)v4)[0], aWeeder, v8); /*0x7476cd*/
  if ( v4->Audio7[1] == -1 ) /*0x7476dc*/
    v4->Audio7[1] = 2 - (v4[1].RequiresDamageFires != 0); /*0x7476eb*/
  TypeMember_476FC0 = ObjectTypeClass::loadTypeMember_476FC0( /*0x747700*/
                        (ObjectTypeClass *)this,
                        (uint8_t *)&((unsigned int *)v4)[0],
                        (uint8_t *)&g_INI_Key_TRUCKA.__pad_1714[36],
                        v4->Audio7[1]);
  v10 = v4[1].__pad_6B8[28]; /*0x747705*/
  v4->Audio7[1] = TypeMember_476FC0; /*0x74770b*/
  v11 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)&((unsigned int *)v4)[0], aIstilter, v10); /*0x74771a*/
  v72 = v4[1].__pad_6B8[34]; /*0x747727*/
  v4[1].__pad_6B8[28] = v11; /*0x74772e*/
  v12 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)&((unsigned int *)v4)[0], aCarriescrate, v72); /*0x747734*/
  v13 = IDA_BYTE1(v4[1].Anims[1]); /*0x747739*/
  v4[1].__pad_6B8[34] = v12; /*0x74773f*/
  v73 = v4[1].__pad_6B8[30]; /*0x74774d*/
  v4[1].__pad_6B8[25] = v13 == 0; /*0x747759*/
  v4[1].__pad_6B8[30] = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)&((unsigned int *)v4)[0], aToobigtofitund, v73); /*0x747778*/
  Point3D_Overwrite = INIClass::ReadPoint3D_Overwrite( /*0x74777e*/
                        (INIClass *)this,
                        Buffer,
                        (uint8_t *)&((unsigned int *)v4)[0],
                        (int)aHalfdamagesmok_1,
                        &v4[1].__pad_6B8[8]);
  *(unsigned int *)&v4[1].__pad_6B8[8] = *Point3D_Overwrite; /*0x747785*/
  *(unsigned int *)&v4[1].__pad_6B8[12] = Point3D_Overwrite[1]; /*0x74778a*/
  v15 = Point3D_Overwrite[2]; /*0x74778d*/
  ((unsigned int *)v4)[4] = 15; /*0x747790*/
  *(unsigned int *)&v4[1].__pad_6B8[16] = v15; /*0x74779a*/
  if ( v4[1].__pad_6B8[22] || v4[1].__pad_6B8[23] ) /*0x7477a7*/
    ((unsigned int *)v4)[4] = 10; /*0x7477b1*/
  v16 = INIClass::ReadBool_Overwrite( /*0x7477d3*/
          (int *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)&((unsigned int *)v4)[0],
          aUseturretshado,
          v4[1].__pad_6B8[29]);
  ProductionTimer_low = IDA_SLOBYTE(v4[1].ProductionTimer); /*0x7477df*/
  v4[1].__pad_6B8[29] = v16; /*0x7477eb*/
  IDA_LOBYTE(v4[1].ProductionTimer) = INIClass::ReadInt_Overwrite( /*0x7477f6*/
                                    (bool *)&DSurface_ViewBounds.__pad_FC[228],
                                    (uint8_t *)&((unsigned int *)v4)[0],
                                    aWalkframes,
                                    ProductionTimer_low);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x74780f*/
                    (bool *)&DSurface_ViewBounds.__pad_FC[228],
                    (uint8_t *)&((unsigned int *)v4)[0],
                    aFiringframes,
                    SBYTE1(v4[1].ProductionTimer));
  v18 = v4[1].__pad_6B8[20]; /*0x747814*/
  IDA_BYTE1(v4[1].ProductionTimer) = Int_Overwrite; /*0x74781a*/
  v19 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)&((unsigned int *)v4)[0], aPassive, v18); /*0x747829*/
  v75 = *(unsigned int *)&v4[1].__pad_6B8[4]; /*0x747836*/
  v4[1].__pad_6B8[20] = v19; /*0x74783d*/
  *(unsigned int *)&v4[1].__pad_6B8[4] = OverlayTypeClass::ReadINIString( /*0x747848*/
                                     (OverlayTypeClass *)this,
                                     (uint8_t *)&((unsigned int *)v4)[0],
                                     aMovementrestri,
                                     v75);
  v20 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)&((unsigned int *)v4)[0], aCanbeach, v4[1].__pad_6B8[31]); /*0x74785d*/
  v21 = v4[1].__pad_6B8[32]; /*0x747862*/
  v4[1].__pad_6B8[31] = v20; /*0x747868*/
  v22 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)&((unsigned int *)v4)[0], aSmallvisceroid, v21); /*0x747877*/
  v76 = v4[1].__pad_6B8[33]; /*0x747884*/
  v4[1].__pad_6B8[32] = v22; /*0x74788b*/
  v4[1].__pad_6B8[33] = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)&((unsigned int *)v4)[0], aLargevisceroid, v76); /*0x747896*/
  v4[1].__pad_6B8[35] = INIClass::ReadBool_Overwrite( /*0x7478b0*/
                          (int *)this,
                          (uint8_t *)&((unsigned int *)v4)[0],
                          aNonvehicle,
                          v4[1].__pad_6B8[35]);
  if ( SBYTE1(v4[1].ProductionTimer) > 0 ) /*0x7478be*/
    *(unsigned int *)&v4[1].BuildingClass_field_bool_6DC = 1; /*0x7478c0*/
  v23 = INIClass::ReadInt_Overwrite( /*0x7478dc*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)&((unsigned int *)v4)[0],
          aStandingframes,
          *(unsigned int *)&v4[1].BuildingClass_field_bool_6DC);
  v77 = *(unsigned int *)&v4[1].NoCrew; /*0x7478ec*/
  *(unsigned int *)&v4[1].BuildingClass_field_bool_6DC = v23; /*0x7478f3*/
  *(unsigned int *)&v4[1].NoCrew = INIClass::ReadInt_Overwrite( /*0x7478fe*/
                               (bool *)&DSurface_ViewBounds.__pad_FC[228],
                               (uint8_t *)&((unsigned int *)v4)[0],
                               aDeathframes,
                               v77);
  v24 = INIClass::ReadInt_Overwrite( /*0x747916*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)&((unsigned int *)v4)[0],
          aDeathframerate,
          *(unsigned int *)&v4[1].ActuallyPlacedOnMap);
  *(unsigned int *)&v4[1].ActuallyPlacedOnMap = v24; /*0x747920*/
  if ( v24 < 1 ) /*0x747928*/
    *(unsigned int *)&v4[1].ActuallyPlacedOnMap = 1; /*0x74792a*/
  if ( !IDA_BYTE1(v4[1].ProductionTimer) && !IDA_BYTE1(v4[1].Anims[1]) ) /*0x74793a*/
    v4[1].BuildingClass_field_int_6FC = 1; /*0x747944*/
  v25 = INIClass::ReadInt_Overwrite( /*0x74795c*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)&((unsigned int *)v4)[0],
          aFacings,
          v4[1].BuildingClass_field_int_6FC);
  v26 = *(unsigned int *)&v4[1].CloakRadius; /*0x747961*/
  v4[1].BuildingClass_field_int_6FC = v25; /*0x74796c*/
  if ( v26 == -1 ) /*0x747972*/
    *(unsigned int *)&v4[1].CloakRadius = 0; /*0x747974*/
  if ( *(unsigned int *)&v4[1].IsBeingRepaired == -1 ) /*0x747984*/
  {
    if ( *(unsigned int *)&v4[1].BuildingClass_field_bool_6DC ) /*0x747986*/
      v27 = v25 * IDA_SLOBYTE(v4[1].ProductionTimer); /*0x74799f*/
    else
      v27 = *(unsigned int *)&v4[1].CloakRadius; /*0x747990*/
    *(unsigned int *)&v4[1].IsBeingRepaired = v27; /*0x7479a2*/
  }
  if ( v4[1].StorageFilledSlots == -1 ) /*0x7479ae*/
  {
    if ( IDA_BYTE1(v4[1].ProductionTimer) ) /*0x7479b0*/
      v28 = v25 * (*(unsigned int *)&v4[1].BuildingClass_field_bool_6DC + IDA_SLOBYTE(v4[1].ProductionTimer)); /*0x7479cf*/
    else
      v28 = *(unsigned int *)&v4[1].IsBeingRepaired; /*0x7479ba*/
    v4[1].StorageFilledSlots = v28; /*0x7479d2*/
  }
  if ( v4[1].SecretProduction == (TechnoTypeClass *)-1 ) /*0x7479de*/
  {
    if ( *(unsigned int *)&v4[1].NoCrew ) /*0x7479e0*/
      v29 = v25 * (SBYTE1(v4[1].ProductionTimer) + IDA_SLOBYTE(v4[1].ProductionTimer) + 1); /*0x747a00*/
    else
      v29 = -1; /*0x7479ea*/
    v30 = *(unsigned int *)&v4[1].NoCrew; /*0x747a03*/
    v4[1].SecretProduction = (TechnoTypeClass *)v29; /*0x747a09*/
    *(unsigned int *)v4[1].ColorAdd = v30 + v29; /*0x747a11*/
  }
  *(unsigned int *)&v4[1].IsBeingRepaired = INIClass::ReadInt_Overwrite( /*0x747a2e*/
                                        (bool *)&DSurface_ViewBounds.__pad_FC[228],
                                        (uint8_t *)&((unsigned int *)v4)[0],
                                        aStartstandfram,
                                        *(unsigned int *)&v4[1].IsBeingRepaired);
  v31 = INIClass::ReadInt_Overwrite( /*0x747a46*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)&((unsigned int *)v4)[0],
          aStartwalkframe,
          *(unsigned int *)&v4[1].CloakRadius);
  StorageFilledSlots = v4[1].StorageFilledSlots; /*0x747a4b*/
  *(unsigned int *)&v4[1].CloakRadius = v31; /*0x747a51*/
  v33 = INIClass::ReadInt_Overwrite( /*0x747a63*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)&((unsigned int *)v4)[0],
          aStartfiringfra,
          StorageFilledSlots);
  parent_gap = (int)v4[1].SecretProduction->ObjectTypeClass; /*0x747a73*/
  v4[1].StorageFilledSlots = v33; /*0x747a7a*/
  v4[1].SecretProduction = (TechnoTypeClass *)INIClass::ReadInt_Overwrite( /*0x747a85*/
                                                (bool *)&DSurface_ViewBounds.__pad_FC[228],
                                                (uint8_t *)&((unsigned int *)v4)[0],
                                                aStartdeathfram,
                                                parent_gap);
  *(unsigned int *)v4[1].ColorAdd = INIClass::ReadInt_Overwrite( /*0x747aa8*/
                                (bool *)&DSurface_ViewBounds.__pad_FC[228],
                                (uint8_t *)&((unsigned int *)v4)[0],
                                aMaxdeathcounte,
                                *(unsigned int *)v4[1].ColorAdd);
  v82 = 0; /*0x747aae*/
  BuildingClass_field_short_700 = (int *)v4[1].BuildingClass_field_short_700; /*0x747ab6*/
  do /*0x747b01*/
  {
    sprintf((char *const)Buffer, "FiringSyncFrame%d", v82); /*0x747ac9*/
    *BuildingClass_field_short_700 = INIClass::ReadInt_Overwrite( /*0x747aec*/
                                       (bool *)&DSurface_ViewBounds.__pad_FC[228],
                                       (uint8_t *)&((unsigned int *)v4)[0],
                                       (uint8_t *)Buffer,
                                       *BuildingClass_field_short_700);
    v34 = ++v82 < 2; /*0x747af6*/
    ++BuildingClass_field_short_700; /*0x747afd*/
  }
  while ( v34 ); /*0x747b01*/
  v35 = 0; /*0x747b09*/
  PrismTargetCoords = (int *)(v4[1].PrismTargetCoords); /*0x747b0b*/
  do /*0x747b47*/
  {
    sprintf((char *const)Buffer, "BurstDelay%d", v35++); /*0x747b1a*/
    *PrismTargetCoords = INIClass::ReadInt_Overwrite( /*0x747b3b*/
                           (bool *)this,
                           (uint8_t *)&v4->initialOwner,
                           (uint8_t *)Buffer,
                           *PrismTargetCoords);
    ++PrismTargetCoords; /*0x747b43*/
  }
  while ( v35 < 4 ); /*0x747b47*/
  strcpy(Source, (const char *)&v4[1].ProductionTimer + 2); /*0x747b6f*/
  INIClass::GetString(p_occupant, aAltimage, Source, (char *)&v4[1].ProductionTimer + 2, 25); /*0x747b88*/
  _makepath(v86, 0, 0, (const char *)&v83[1].ProductionTimer + 2,(const char *)(Ext)); /*0x747ba6*/
  v83[1].BunkerState = (int)SearchMIXFile(v86, 0); /*0x747bc4*/
  if ( ((AbstractTypeClass *)((int)v83))->NameEquals(((char *)&g_INI_Key_TRUCKA)) ) /*0x747bca*/
  {
    v36 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aNormalturretin, 0); /*0x747bf0*/
    v37 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aNormalturretwe, -1); /*0x747bf2*/
    ((BuildingClass *)(v83))->SetSlot(v36, v37); /*0x747bfb*/
    v38 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aRepairturretin, 1); /*0x747c19*/
    v39 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aRepairturretwe, -1); /*0x747c1b*/
    ((BuildingClass *)(v83))->SetSlot(v38, v39); /*0x747c24*/
    v40 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aMachinegunturr, 2); /*0x747c42*/
    v41 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aMachinegunturr_0, -1); /*0x747c44*/
    ((BuildingClass *)(v83))->SetSlot(v40, v41); /*0x747c4d*/
    v42 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aFlakturretinde, 3); /*0x747c6b*/
    v43 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aFlakturretweap, -1); /*0x747c6d*/
    ((BuildingClass *)(v83))->SetSlot(v42, v43); /*0x747c76*/
    v44 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aPistolturretin, 0); /*0x747c94*/
    v45 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aPistolturretwe, -1); /*0x747c96*/
    ((BuildingClass *)(v83))->SetSlot(v44, v45); /*0x747c9f*/
    v46 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aSniperturretin, 0); /*0x747cb3*/
    v47 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aSniperturretwe, -1); /*0x747cbf*/
    ((BuildingClass *)(v83))->SetSlot(v46, v47); /*0x747cc8*/
    v48 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aShockturretind, 0); /*0x747ce6*/
    v49 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aShockturretwea, -1); /*0x747ce8*/
    ((BuildingClass *)(v83))->SetSlot(v48, v49); /*0x747cf1*/
    v50 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aExplodeturreti, 0); /*0x747d0f*/
    v51 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aExplodeturretw, -1); /*0x747d11*/
    ((BuildingClass *)(v83))->SetSlot(v50, v51); /*0x747d1a*/
    v52 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aBrainblastturr, 0); /*0x747d38*/
    v53 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aBrainblastturr_0, -1); /*0x747d3a*/
    ((BuildingClass *)(v83))->SetSlot(v52, v53); /*0x747d43*/
    v54 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aRadcannonturre, 0); /*0x747d61*/
    v55 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aRadcannonturre_0, -1); /*0x747d63*/
    ((BuildingClass *)(v83))->SetSlot(v54, v55); /*0x747d6c*/
    v56 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aChronoturretin, 0); /*0x747d8a*/
    v57 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aChronoturretwe, -1); /*0x747d8c*/
    ((BuildingClass *)(v83))->SetSlot(v56, v57); /*0x747d95*/
    v58 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aTerroristexplo, 0); /*0x747db3*/
    v59 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aTerroristexplo_0, -1); /*0x747db5*/
    ((BuildingClass *)(v83))->SetSlot(v58, v59); /*0x747dbe*/
    v60 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aCowturretindex, 0); /*0x747ddc*/
    v61 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aCowturretweapo, -1); /*0x747dde*/
    ((BuildingClass *)(v83))->SetSlot(v60, v61); /*0x747de7*/
    v62 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aInitiateturret, 0); /*0x747e05*/
    v63 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aInitiateturret_0, -1); /*0x747e07*/
    ((BuildingClass *)(v83))->SetSlot(v62, v63); /*0x747e10*/
    v64 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aVirusturretind, 0); /*0x747e2e*/
    v65 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aVirusturretwea, -1); /*0x747e30*/
    ((BuildingClass *)(v83))->SetSlot(v64, v65); /*0x747e39*/
    v66 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aYuriprimeturre, 0); /*0x747e57*/
    v67 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aYuriprimeturre_0, -1); /*0x747e59*/
    ((BuildingClass *)(v83))->SetSlot(v66, v67); /*0x747e62*/
    v68 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aGuardianturret, 0); /*0x747e80*/
    v69 = ((INIClass *)((bool *)this))->ReadInt_Overwrite(p_occupant, aGuardianturret_0, -1); /*0x747e82*/
    ((BuildingClass *)(v83))->SetSlot(v68, v69); /*0x747e8b*/
  }
  return 1; /*0x747e92*/
}
}
// 0x74B960
namespace gamemd {  // G42.18c ns repair
VoxelAnimTypeClass * * UnitTypeClass::FindOrCreate(ObjectClass * Source)
{

  int v2; // esi
  VoxelAnimTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x74b97c*/
    return 0; /*0x74b9df*/
  v2 = 0; /*0x74b98d*/
  if ( stru_A8EB00.ObjectTypeClass[14] <= 0 ) /*0x74b991*/
  {
LABEL_6:
    v3 = (VoxelAnimTypeClass *)__2_YAPAXI_Z(0x308u); /*0x74b9b6*/
    if ( v3 ) /*0x74b9c5*/
      return ((VoxelAnimTypeClass *)(v3))->Constructor(Source); /*0x74b9d1*/
    return 0; /*0x74b9c5*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(stru_A8EB00.ObjectTypeClass[11] + 4 * v2) + 36), Source) ) /*0x74b9aa*/
  {
    if ( ++v2 >= stru_A8EB00.ObjectTypeClass[14] ) /*0x74b9b4*/
      goto LABEL_6; /*0x74b9b4*/
  }
  return *(unsigned int **)(stru_A8EB00.ObjectTypeClass[11] + 4 * v2); /*0x74b9cf*/

}
}  // G42.18c ns repair
// 0x747590
namespace gamemd {  // G42.18c ns repair
int *  UnitTypeClass::GetDimensions(int * a2)
{

  int v2; // eax
  int v3; // ecx

  v2 = ((unsigned int *)this)[0] - ((unsigned int *)this)[0] / 4; /*0x7475a3*/
  v3 = v2; /*0x7475a5*/
  if ( v2 >= 60 ) /*0x7475aa*/
  {
    v3 = 60; /*0x7475ac*/
    v2 = 60; /*0x7475b6*/
  }
  *a2 = v3; /*0x7475c2*/
  a2[1] = v3; /*0x7475c4*/
  a2[2] = v2; /*0x7475c7*/
  return a2; /*0x7475cd*/

}
}  // G42.18c ns repair
// 0x7475D0
namespace gamemd {  // G42.18c ns repair
unsigned int *  UnitTypeClass::GetDefaultDimensions(unsigned int * a1)
{

  void *v1; // esi

  v1 = (void *)(2 * dword_B1D138); /*0x7475dc*/
  a1->TechnoTypeClass = (void *)256; /*0x7475e7*/
  ((unsigned int *)a1)[0] = (void *)256; /*0x7475e9*/
  ((unsigned int *)a1)[0] = v1; /*0x7475ec*/
  return (unsigned int *)a1; /*0x7475ef*/

}
}  // G42.18c ns repair
// 0x747EB0
namespace gamemd {  // G42.18c ns repair
unsigned int * UnitTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{

  int GroundHeight; // eax
  void *v3; // ecx
  void *v5; // [esp+0h] [ebp-Ch] BYREF
  void *v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = (void *)*a2; /*0x747eb9*/
  v6 = (void *)a2[1]; /*0x747eca*/
  v7 = a2[2]; /*0x747ed1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x747ed5*/
  v3 = (void *)v7; /*0x747eda*/
  if ( v7 < GroundHeight ) /*0x747ee0*/
    v3 = (void *)Cell::GetGroundHeight(&v5); /*0x747ef1*/
  a1->TechnoTypeClass = v5; /*0x747efe*/
  ((unsigned int *)a1)[0] = v6; /*0x747f04*/
  ((unsigned int *)a1)[0] = v3; /*0x747f08*/
  return (unsigned int *)a1; /*0x747f0b*/

}
}  // G42.18c ns repair
// 0x747F20
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::GetGameplayValue()
{

  return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5836); /*0x747f2b*/

}
}  // G42.18c ns repair
// 0x747F30
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x747f36*/
    return -2147467261; /*0x747f38*/
  *a2 = -591576342; /*0x747f46*/
  a2[1] = 298976582; /*0x747f4e*/
  a2[2] = 1610654892; /*0x747f57*/
  a2[3] = unk_7E959C; /*0x747f60*/
  return 0; /*0x747f3d*/

}
}  // G42.18c ns repair
// 0x747F70
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::PowerDrainUpdate(int * a2)
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

  BuildingTypeClass::ProcessPower((int)this, a2); /*0x747f79*/
  Power::TimerProcess(this->MovementRestrictedTo[0]); /*0x747f87*/
  LOBYTE(v3) = this->Passive; /*0x747f8c*/
  ((Power *)((Power *)a2))->FlagProcess(v3); /*0x747f95*/
  LOBYTE(v4) = this->CrateGoodie; /*0x747f9a*/
  v5 = ((Power *)((Power *)a2))->FlagProcess(v4); /*0x747fa3*/
  LOBYTE(v5) = this->Harvester; /*0x747fa8*/
  ((Power *)((Power *)a2))->FlagProcess(v5); /*0x747fb1*/
  LOBYTE(v6) = this->Weeder; /*0x747fb6*/
  ((Power *)((Power *)a2))->FlagProcess(v6); /*0x747fbf*/
  LOBYTE(v7) = this->unknown_E10; /*0x747fc4*/
  v8 = ((Power *)((Power *)a2))->FlagProcess(v7); /*0x747fcd*/
  LOBYTE(v8) = this->HasTurret; /*0x747fd2*/
  ((Power *)((Power *)a2))->FlagProcess(v8); /*0x747fdb*/
  LOBYTE(v9) = this->IsTilter; /*0x747fe0*/
  ((Power *)((Power *)a2))->FlagProcess(v9); /*0x747fe9*/
  LOBYTE(v10) = this->IsSimpleDeployer; /*0x747fee*/
  v11 = ((Power *)((Power *)a2))->FlagProcess(v10); /*0x747ff7*/
  LOBYTE(v11) = this->UseTurretShadow; /*0x747ffc*/
  return ((Power *)((Power *)a2))->FlagProcess(v11); /*0x74800a*/

}
}  // G42.18c ns repair
// 0x748010
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::LoadFromINI2(int a1, int a2)
{

  int result; // eax
  char v3; // [esp+7h] [ebp-105h] BYREF
  char Buffer[260]; // [esp+8h] [ebp-104h] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix((TechnoTypeClass *)a1, a2); /*0x748024*/
  if ( result >= 0 ) /*0x74802b*/
  {
    if ( a1 ) /*0x74802f*/
    {
      TechnoTypeClass::Construct((int)a1, (int)&v3); /*0x748038*/
      a1->vtable1 = &vt_UnitTypeClass; /*0x74803d*/
      ((unsigned int *)a1)[0] = &vt_UnitTypeClass; /*0x748043*/
      ((unsigned int *)a1)[0] = &vt_UnitTypeClass; /*0x74804a*/
      ((unsigned int *)a1)[0] = &vt_UnitTypeClass; /*0x748051*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x74805a*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x748061*/
    if ( a1->AltImage[0] ) /*0x748066*/
    {
      _makepath(Buffer, 0, 0, a1->__tail_E5E, Ext); /*0x748085*/
      a1->AltImage[0] = (int)SearchMIXFile(Buffer, 0); /*0x748098*/
    }
    return 0; /*0x74809e*/
  }
  return result; /*0x7480a0*/

}
}  // G42.18c ns repair
// 0x7480B0
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::SaveToINI(void * a0, TechnoTypeClass * aP1, int a3)
{

  int result; // eax

  result = TechnoTypeClass::SaveLoad_Prefix_0(aP1, a0, aP1, (TechnoTypeClass *)a3); /*0x7480bf*/
  if ( result >= 0 ) /*0x7480c6*/
    return 0; /*0x7480c8*/
  return result; /*0x7480ca*/

}
}  // G42.18c ns repair

// 0x748160
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::GetObjectSize()
{

  return 3704; /*0x748165*/

}
}  // G42.18c ns repair
// 0x748170
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::GetTypeIdentifier()
{

  return 40; /*0x748175*/

}
}  // G42.18c ns repair
// 0x748180
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::GetAuxField()
{

  return this->ArrayIndex; /*0x748186*/

}
}  // G42.18c ns repair
// 0x748190
UnitTypeClass * UnitTypeClass::ddtor(void ** Block, char a2)
{

  AbstractClass *v2; // ecx
  UnitTypeClass *v3; // esi
  int v4; // eax
  UnitTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  v3 = (UnitTypeClass *)v2; /*0x748192*/
  v2->vtable1 = &vt_UnitTypeClass; /*0x748196*/
  v2->vtable1 = &vt_UnitTypeClass; /*0x74819c*/
  v2->vtable2 = &vt_UnitTypeClass; /*0x7481a3*/
  v2->vtable3 = &vt_UnitTypeClass; /*0x7481aa*/
  AbstractClass::AnnounceExpiredPointer(v2, 1); /*0x7481b1*/
  v6 = v3; /*0x7481c6*/
  v4 = (*(int (**)(unsigned int *, UnitTypeClass **))(dword_A83CE0 + 16))(&dword_A83CE0, &v6); /*0x7481ca*/
  if ( v4 != -1 && v4 < dword_A83CF0 && v4 < --dword_A83CF0 ) /*0x7481e5*/
  {
    do /*0x7481fd*/
    {
      ++v4; /*0x7481ed*/
      *((unsigned int *)dword_A83CE4 + v4 - 1) = *((unsigned int *)dword_A83CE4 + v4); /*0x7481f1*/
    }
    while ( v4 < dword_A83CF0 ); /*0x7481fd*/
  }
  TechnoTypeClass::DTOR((int)v3); /*0x748201*/
  if ( ((uint8_t)Block & 1) != 0 ) /*0x74820b*/
    __3_YAXPAX_Z(v3); /*0x74820e*/
  return v3; /*0x748218*/

}