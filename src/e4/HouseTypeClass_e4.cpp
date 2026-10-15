// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/UnitTypeVector_e4.hpp"  // G42.35f: C2079 by-value supply
#include "e4/classes/InfantryTypeVector_e4.hpp"  // G42.35f: C2079 by-value supply
#include "e4/classes/HouseTypeClass_28_e4.hpp"
#include "e4/classes/HouseTypeClass_36_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/HoverLocomotionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "classes/ObjectPtr_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)
#include "e4/classes/KeywordClass_e4.hpp"  // G57w10 D supply
#include "e4/classes/SideClass_e4.hpp"  // w16g4 C3861 SideClass:: supply
namespace VectorClass { int ClearAndFree4(int p_this); }  // x4:ida@0x5134d0

// 0x511650
namespace gamemd {  // G42.18 ns repair
unsigned int * HouseTypeClass::loadVeteranWeapons(HouseTypeClass * a2)
{

  AbstractTypeClass::Init((int)this, a2); /*0x511658*/
  this->veteranInfantry[0] = (gamemd::InfantryTypeClass *)((int)&vt_TypeList); /*0x51165d*/
  *&this->prefix = (char)(&vt_TypeList); /*0x511667*/
  *&this->u32_184 = (unsigned int)(&vt_TypeList); /*0x511671*/
  this->AbstractClass = &vt_HouseTypeClass; /*0x51167b*/
  /* X11: vtable install elided (implicit via HouseTypeClass virtuals 0x511681) */
  /* X11: vtable install elided (implicit via HouseTypeClass virtuals 0x511688) */
  /* X11: vtable install elided (implicit via HouseTypeClass virtuals 0x51168f) */
  return &this->AbstractClass; /*0x511698*/

}
}  // G42.18 ns repair
// 0x5116A0
namespace gamemd {
AbstractClass * HouseTypeClass::Dtor(void *a1)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *veteranInfantryCount; // eax
  HouseTypeClass *v7; // [esp+8h] [ebp-4h] BYREF

  /* X11: vtable install elided (implicit via HouseTypeClass virtuals 0x5116a7) */
  /* X11: vtable install elided (implicit via HouseTypeClass virtuals 0x5116ad) */
  /* X11: vtable install elided (implicit via HouseTypeClass virtuals 0x5116b4) */
  /* X11: vtable install elided (implicit via HouseTypeClass virtuals 0x5116bb) */
  AbstractClass::AnnounceExpiredPointer(&a1->vfptr, 1); /*0x5116c2*/
  v7 = (gamemd::HouseTypeClass *)(a1); /*0x5116d7*/
  v2 = (*(int (**)(unsigned int *, HouseTypeClass **))(dword_A83C98 + 16))(&dword_A83C98, &v7); /*0x5116db*/
  if ( v2 != -1 && v2 < dword_A83CA8 && v2 < --dword_A83CA8 ) /*0x5116f6*/
  {
    do /*0x51170e*/
    {
      ++v2; /*0x5116fe*/
      *((unsigned int *)dword_A83C9C + v2 - 1) = *((unsigned int *)dword_A83C9C + v2); /*0x511702*/
    }
    while ( v2 < dword_A83CA8 ); /*0x51170e*/
  }
  v3 = *(void **)&a1->pad_16D[27]; /*0x511710*/
  *(unsigned int *)&a1->pad_16D[23] = &vt_VectorClass; /*0x51171a*/
  if ( v3 && a1->pad_16D[36] ) /*0x511726*/
  {
    operator delete((void *)(v3)); /*0x51172f*/
    *(unsigned int *)&a1->pad_16D[27] = 0; /*0x511737*/
  }
  a1->pad_16D[36] = 0; /*0x51173d*/
  *(unsigned int *)&a1->pad_16D[31] = 0; /*0x511743*/
  v4 = *(void **)&a1->smartAi; /*0x511749*/
  *(unsigned int *)&a1->prefix = &vt_VectorClass; /*0x51174f*/
  if ( v4 && a1->pad_16D[8] ) /*0x51175d*/
  {
    operator delete((void *)(v4)); /*0x511766*/
    *(unsigned int *)&a1->smartAi = 0; /*0x51176e*/
  }
  a1->pad_16D[8] = 0; /*0x511774*/
  *(unsigned int *)&a1->pad_16D[3] = 0; /*0x51177a*/
  veteranInfantryCount = (void *)a1->veteranInfantryCount; /*0x511780*/
  a1->veteranInfantry[0] = (int)&vt_VectorClass; /*0x511786*/
  if ( veteranInfantryCount && (((unsigned char *)&(a1->veteranUnitsCount))[1]) ) /*0x511794*/
  {
    operator delete((void *)(veteranInfantryCount)); /*0x51179d*/
    a1->veteranInfantryCount = 0; /*0x5117a5*/
  }
  (((unsigned char *)&(a1->veteranUnitsCount))[1]) = 0; /*0x5117ad*/
  a1->veteranUnits[0] = 0; /*0x5117b3*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)a1); /*0x5117be*/
}
}
// 0x511850
namespace gamemd {
AbstractClass * HouseTypeClass::LoadFromINI(uint8_t *** aP1, void *a2)
{

  int v3; // ecx
  HouseTypeClass *v4; // esi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  double v12; // rax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  double v20; // rax
  char v22; // cl
  char Bool_Overwrite; // al
  char v25; // al
  char v26; // cl
  char v27; // al
  char *i; // eax
  int UnitTypeVector_field_0x10; // edx
  int UnitTypeVector_field_0x18; // ecx
  void *UnitTypeVector_field_0x04; // eax
  char *j; // eax
  int Alt; // edi
  int v34; // eax
  int InfantryTypeVector_field_0x10; // edx
  int InfantryTypeVector_field_0x18; // ecx
  void *InfantryTypeVector_field_0x04; // eax
  char *k; // eax
  int v39; // edi
  int v40; // eax
  int v41; // edx
  int v42; // ecx
  void *v43; // eax
  int v44; // edi
  int CountryData; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int v52; // esi
  int v53; // eax
  int v54; // ecx
  int v55; // esi
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  double v60; // [esp+0h] [ebp-F8h]
  double v61; // [esp+0h] [ebp-F8h]
  double v62; // [esp+0h] [ebp-F8h]
  double v63; // [esp+0h] [ebp-F8h]
  double v64; // [esp+0h] [ebp-F8h]
  double v65; // [esp+0h] [ebp-F8h]
  double v66; // [esp+0h] [ebp-F8h]
  double v67; // [esp+0h] [ebp-F8h]
  double v68; // [esp+0h] [ebp-F8h]
  double v69; // [esp+0h] [ebp-F8h]
  double v70; // [esp+0h] [ebp-F8h]
  double v71; // [esp+0h] [ebp-F8h]
  double v72; // [esp+0h] [ebp-F8h]
  double v73; // [esp+0h] [ebp-F8h]
  double v74; // [esp+0h] [ebp-F8h]
  double v75; // [esp+0h] [ebp-F8h]
  double v76; // [esp+0h] [ebp-F8h]
  double v77; // [esp+0h] [ebp-F8h]
  double v78; // [esp+0h] [ebp-F8h]
  char v79; // [esp+4h] [ebp-F4h]
  UnitTypeVector Destination; // [esp+18h] [ebp-E0h] BYREF
  char v81[2]; // [esp+36h] [ebp-C2h] BYREF
  InfantryTypeVector v82; // [esp+38h] [ebp-C0h] BYREF
  char Source[32]; // [esp+58h] [ebp-A0h] BYREF
  char String[128]; // [esp+78h] [ebp-80h] BYREF

  v4 = (gamemd::HouseTypeClass *)(aP1); /*0x51185e*/
  _EBX = v3; /*0x511861*/
  INIClass::ResetSection((INIClass *)aP1); /*0x511866*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)_EBX, (unsigned __int8 ***)aP1) ) /*0x51186e*/
    return 0; /*0x51215c*/
  INIClass::GetString((INIClass *)aP1, (unsigned __int8 *)(_EBX + 36), aSuffix, &g_INI_DefaultBuffer, Source, 4); /*0x511892*/
  if ( strlen(Source) ) /*0x51189b*/
  {
    strcpy(&_EBX->q1A0, Source); /*0x5118c3*/
    v4 = (gamemd::HouseTypeClass *)(aP1); /*0x5118cc*/
  }
  INIClass::GetString((INIClass *)v4, (unsigned __int8 *)(_EBX + 36), aParentcountry, &_EBX->id, Source, 25); /*0x5118e2*/
  if ( Source ) /*0x5118ed*/
  {
    strncpy(Destination.__pad_000, Source, 0x18u); /*0x511901*/
    LOBYTE(Destination.nextArrayIndex) = 0; /*0x511909*/
  }
  else
  {
    Destination.__pad_000 = (unsigned __int8)Source; /*0x5118ef*/
  }
  if ( &Destination != &_EBX->buildtimeBuildingsMult ) /*0x51191a*/
  {
    memcpy(&_EBX->buildtimeBuildingsMult, &Destination, 0x18u); /*0x511925*/
    *(unsigned char *)(_EBX + 176) = Destination.nextArrayIndex; /*0x511927*/
    v4 = (gamemd::HouseTypeClass *)(aP1); /*0x511928*/
  }
  _EBX->wallOwner = BuildingTypeClass::FindAnimByName( /*0x511942*/
                              (BuildingTypeClass *)v4,
                              (unsigned __int8 *)(_EBX + 36),
                              (unsigned __int8 *)&stru_81AF8C.?[95],
                              _EBX->wallOwner);
  Source[0] = _EBX->Prefix; /*0x51195a*/
  Source[1] = 0; /*0x511966*/
  INIClass::GetString((INIClass *)v4, (unsigned __int8 *)(_EBX + 36), aPrefix, Source, v81, 2); /*0x51196b*/
  _EBX->Prefix = v81[0]; /*0x511974*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aFirepower, _EBX->firepowerMult_d); /*0x511990*/
  v6 = _EBX->u32_D4; /*0x511995*/
  v7 = _EBX->groundspeedMult_d; /*0x51199b*/
  __asm { fstp qword ptr [ebx+0C8h] } /*0x5119a1*/
  _EBX->firepowerMult_d = _RT1; /*0x5119a1*/
  INIClass::ReadDouble_Overwrite( /*0x5119b1*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    aGroundspeed,
    COERCE_DOUBLE(__PAIR64__(v6, v7)));
  v9 = _EBX->q0DC; /*0x5119b6*/
  v10 = _EBX->airspeedMult_d; /*0x5119bc*/
  __asm { fstp qword ptr [ebx+0D0h] } /*0x5119c2*/
  _EBX->groundspeedMult_d = _RT1; /*0x5119c2*/
  INIClass::ReadDouble_Overwrite( /*0x5119d2*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    aAirspeed,
    COERCE_DOUBLE(__PAIR64__(v9, v10)));
  v12 = _EBX->armorMult_d; /*0x5119dd*/
  __asm { fstp qword ptr [ebx+0D8h] } /*0x5119e3*/
  _EBX->airspeedMult_d = _RT1; /*0x5119e3*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), g_INI_Key_Armor, v12); /*0x5119f3*/
  v14 = _EBX->q0EC; /*0x5119f8*/
  v15 = _EBX->rofMult_d; /*0x5119fe*/
  __asm { fstp qword ptr [ebx+0E0h] } /*0x511a04*/
  _EBX->armorMult_d = _RT1; /*0x511a04*/
  INIClass::ReadDouble_Overwrite( /*0x511a14*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    &off_825478,
    COERCE_DOUBLE(__PAIR64__(v14, v15)));
  v17 = _EBX->q0F4; /*0x511a19*/
  v18 = _EBX->costMult_d; /*0x511a1f*/
  __asm { fstp qword ptr [ebx+0E8h] } /*0x511a25*/
  _EBX->rofMult_d = _RT1; /*0x511a25*/
  INIClass::ReadDouble_Overwrite( /*0x511a35*/
    (double *)v4,
    (unsigned __int8 *)(_EBX + 36),
    g_INI_Key_Cost,
    COERCE_DOUBLE(__PAIR64__(v17, v18)));
  v20 = _EBX->buildtimeMult_d; /*0x511a40*/
  __asm { fstp qword ptr [ebx+0F0h] } /*0x511a46*/
  _EBX->costMult_d = _RT1; /*0x511a46*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtime, v20); /*0x511a56*/
  v22 = _EBX->Multiplay; /*0x511a5b*/
  __asm { fstp qword ptr [ebx+0F8h] } /*0x511a61*/
  _EBX->buildtimeMult_d = _RT1; /*0x511a61*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aMultiplay, v22); /*0x511a70*/
  v79 = _EBX->MultiplayPassive; /*0x511a7d*/
  _EBX->Multiplay = Bool_Overwrite; /*0x511a84*/
  _EBX->MultiplayPassive = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aMultiplaypassi, v79); /*0x511a8f*/
  v25 = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aWallowner, _EBX->WallOwner); /*0x511aa4*/
  v26 = _EBX->SmartAI; /*0x511aa9*/
  _EBX->WallOwner = v25; /*0x511aaf*/
  v27 = INIClass::ReadBool_Overwrite((int *)v4, (unsigned __int8 *)(_EBX + 36), aSmartai, v26); /*0x511abe*/
  __asm { fld dword ptr [ebx+100h] } /*0x511ac3*/
  _EBX->SmartAI = v27; /*0x511ace*/
  __asm { fstp [esp+0F8h+var_F8]; double } /*0x511ad4*/
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmorinfantrym, v60); /*0x511add*/
  __asm { fstp dword ptr [ebx+100h] } /*0x511ae2*/
  _EBX->armorInfantryMult_d = *(float *)&_RT1; /*0x511ae2*/
  __asm { fld dword ptr [ebx+104h] } /*0x511ae8*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmorunitsmult, v61); /*0x511afc*/
  __asm { fstp dword ptr [ebx+104h] } /*0x511b01*/
  _EBX->armorUnitsMult_d = *(float *)&_RT1; /*0x511b01*/
  __asm { fld dword ptr [ebx+108h] } /*0x511b07*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmoraircraftm, v62); /*0x511b1b*/
  __asm { fstp dword ptr [ebx+108h] } /*0x511b20*/
  _EBX->armorAircraftMult_d = *(float *)&_RT1; /*0x511b20*/
  __asm { fld dword ptr [ebx+10Ch] } /*0x511b26*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmorbuildings, v63); /*0x511b3a*/
  __asm { fstp dword ptr [ebx+10Ch] } /*0x511b3f*/
  _EBX->armorBuildingsMult_d = *(float *)&_RT1; /*0x511b3f*/
  __asm { fld dword ptr [ebx+110h] } /*0x511b45*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aArmordefensesm, v64); /*0x511b59*/
  __asm { fstp dword ptr [ebx+110h] } /*0x511b5e*/
  _EBX->armorDefensesMult_d = *(float *)&_RT1; /*0x511b5e*/
  __asm { fld dword ptr [ebx+114h] } /*0x511b64*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostinfantrymu, v65); /*0x511b78*/
  __asm { fstp dword ptr [ebx+114h] } /*0x511b7d*/
  _EBX->costInfantryMult_d = *(float *)&_RT1; /*0x511b7d*/
  __asm { fld dword ptr [ebx+118h] } /*0x511b83*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostunitsmult, v66); /*0x511b97*/
  __asm { fstp dword ptr [ebx+118h] } /*0x511b9c*/
  _EBX->costUnitsMult_d = *(float *)&_RT1; /*0x511b9c*/
  __asm { fld dword ptr [ebx+11Ch] } /*0x511ba2*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostaircraftmu, v67); /*0x511bb6*/
  __asm { fstp dword ptr [ebx+11Ch] } /*0x511bbb*/
  _EBX->costAircraftMult_d = *(float *)&_RT1; /*0x511bbb*/
  __asm { fld dword ptr [ebx+120h] } /*0x511bc1*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostbuildingsm, v68); /*0x511bd5*/
  __asm { fstp dword ptr [ebx+120h] } /*0x511bda*/
  _EBX->costBuildingsMult_d = *(float *)&_RT1; /*0x511bda*/
  __asm { fld dword ptr [ebx+124h] } /*0x511be0*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aCostdefensesmu, v69); /*0x511bf4*/
  __asm { fstp dword ptr [ebx+124h] } /*0x511bf9*/
  _EBX->costDefensesMult_d = *(float *)&_RT1; /*0x511bf9*/
  __asm { fld dword ptr [ebx+128h] } /*0x511bff*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aSpeedinfantrym, v70); /*0x511c13*/
  __asm { fstp dword ptr [ebx+128h] } /*0x511c18*/
  _EBX->currentSpeed_infantry_mult_d = *(float *)&_RT1; /*0x511c18*/
  __asm { fld dword ptr [ebx+12Ch] } /*0x511c1e*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aSpeedunitsmult, v71); /*0x511c32*/
  __asm { fstp dword ptr [ebx+12Ch] } /*0x511c37*/
  _EBX->currentSpeed_units_mult_d = *(float *)&_RT1; /*0x511c37*/
  __asm { fld dword ptr [ebx+130h] } /*0x511c3d*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aSpeedaircraftm, v72); /*0x511c51*/
  __asm { fstp dword ptr [ebx+130h] } /*0x511c56*/
  _EBX->currentSpeed_aircraft_mult_d = *(float *)&_RT1; /*0x511c56*/
  __asm { fld dword ptr [ebx+134h] } /*0x511c5c*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimeinfan, v73); /*0x511c70*/
  __asm { fstp dword ptr [ebx+134h] } /*0x511c75*/
  _EBX->buildtimeInfantryMult_d = *(float *)&_RT1; /*0x511c75*/
  __asm { fld dword ptr [ebx+138h] } /*0x511c7b*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimeunits, v74); /*0x511c8f*/
  __asm { fstp dword ptr [ebx+138h] } /*0x511c94*/
  _EBX->buildtimeUnitsMult_d = *(float *)&_RT1; /*0x511c94*/
  __asm { fld dword ptr [ebx+13Ch] } /*0x511c9a*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimeaircr, v75); /*0x511cae*/
  __asm { fstp dword ptr [ebx+13Ch] } /*0x511cb3*/
  _EBX->buildtimeAircraftMult_d = *(float *)&_RT1; /*0x511cb3*/
  __asm { fld dword ptr [ebx+140h] } /*0x511cb9*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimebuild, v76); /*0x511ccd*/
  __asm { fstp dword ptr [ebx+140h] } /*0x511cd2*/
  _EBX->buildtimeBuildingsMult_d = *(float *)&_RT1; /*0x511cd2*/
  __asm { fld dword ptr [ebx+144h] } /*0x511cd8*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aBuildtimedefen, v77); /*0x511cec*/
  __asm { fstp dword ptr [ebx+144h] } /*0x511cf1*/
  _EBX->buildtimeDefensesMult_d = *(float *)&_RT1; /*0x511cf1*/
  __asm { fld dword ptr [ebx+148h] } /*0x511cf7*/
  __asm { fstp [esp+0F8h+var_F8]; double }
  INIClass::ReadDouble_Overwrite((double *)v4, (unsigned __int8 *)(_EBX + 36), aIncomemult, v78); /*0x511d0b*/
  __asm { fstp dword ptr [ebx+148h] } /*0x511d10*/
  _EBX->incomeMult_d = *(float *)&_RT1; /*0x511d10*/
  if ( INIClass::GetString( /*0x511d2d*/
         (INIClass *)v4,
         (unsigned __int8 *)(_EBX + 36),
         aVeteraninfantr,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    InfantryTypeVector::Construct(&v82, 0, 0); /*0x511d42*/
    /* X11: vtable install elided (implicit via TypeList virtuals 0x511d56) */
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x511d64*/
    {
      if ( !*i ) /*0x511d66*/
        break; /*0x511d69*/
      v82.InfantryTypeVector_field_0x1C = KeywordType::FindOrCreate2(i); /*0x511d74*/
      if ( v82.InfantryTypeVector_field_0x1C ) /*0x511d78*/
        InfantryTypeVector::Add(&v82, &v82.InfantryTypeVector_field_0x1C); /*0x511d83*/
    }
    HouseTypeClass::readAllowedUnits((HouseTypeClass *)&Destination, &v82); /*0x511da4*/
    *(unsigned int *)Destination.__pad_0 = &vt_TypeList; /*0x511dad*/
    /* X11: vtable install elided (implicit via VectorClass virtuals 0x511db1) */
    Vector::Cleanup((_VectorClass_PBVInfantryTypeClass *)&v82); /*0x511db9*/
  }
  else
  {
    HouseTypeClass::readAllowedUnits((HouseTypeClass *)&Destination, &_EBX->veteranInfantry_d); /*0x511dcb*/
    *(unsigned int *)Destination.__pad_0 = &vt_TypeList; /*0x511dd0*/
  }
  HouseTypeClass::readStartInfantry(&_EBX->veteranInfantry_d, &Destination); /*0x511de5*/
  UnitTypeVector_field_0x10 = Destination.uniqueId; /*0x511dee*/
  UnitTypeVector_field_0x18 = Destination.nextArrayIndex; /*0x511df2*/
  *(unsigned int *)(_EBX + 352) = Destination.abstractFlags; /*0x511df6*/
  UnitTypeVector_field_0x04 = (void *)Destination.ptr_4; /*0x511df9*/
  *(unsigned int *)(_EBX + 348) = UnitTypeVector_field_0x10; /*0x511dfd*/
  *(unsigned int *)(_EBX + 356) = UnitTypeVector_field_0x18; /*0x511e02*/
  *(unsigned int *)Destination.__pad_000 = &vt_VectorClass; /*0x511e05*/
  if ( UnitTypeVector_field_0x04 && BYTE1(Destination.UnitTypeVector_field_0x0C) ) /*0x511e15*/
    __3_YAXPAX_Z(UnitTypeVector_field_0x04); /*0x511e18*/
  if ( INIClass::GetString( /*0x511e3a*/
         (INIClass *)v4,
         (unsigned __int8 *)(_EBX + 36),
         aVeteranunits,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    UnitTypeVector::Construct(&Destination, 0, 0); /*0x511e4f*/
    *(unsigned int *)Destination.__pad_0 = &vt_TypeList; /*0x511e5e*/
    for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x511e70*/
    {
      if ( !*j ) /*0x511e72*/
        break; /*0x511e75*/
      Alt = BuildingTypeClass::FindOrCreateAlt(j); /*0x511e7e*/
      if ( Alt /*0x511eb1*/
        && (Destination.uniqueId < Destination.__pad_008
         || (BYTE1(Destination.q00C) || !Destination.__pad_008)
         && Destination.abstractFlags > 0
         && (*(unsigned __int8 (**)(UnitTypeVector *, int, unsigned int))(*(unsigned int *)Destination.__pad_000 + 8))(
              &Destination,
              Destination.__pad_008 + Destination.abstractFlags,
              0)) )
      {
        v34 = Destination.uniqueId++; /*0x511ebc*/
        *(unsigned int *)(Destination.ptr_4 + 4 * v34) = Alt; /*0x511ec7*/
      }
    }
    TypeList::CopyConstructor((TypeList *)&v82, &Destination); /*0x511ee6*/
    *(unsigned int *)Destination.__pad_000 = &vt_VectorClass; /*0x511eef*/
    Vector::Destructor((_VectorClass_PBVUnitTypeClass *)&Destination); /*0x511ef7*/
  }
  else
  {
    TypeList::CopyConstructor((TypeList *)&v82, (unsigned int *)(_EBX + 360)); /*0x511f09*/
  }
  VectorClass::CopyConstructor((VectorClass *)(_EBX + 360), &v82); /*0x511f1b*/
  InfantryTypeVector_field_0x10 = v82.InfantryTypeVector_field_0x10; /*0x511f24*/
  InfantryTypeVector_field_0x18 = v82.InfantryTypeVector_field_0x18; /*0x511f28*/
  *(unsigned int *)(_EBX + 380) = v82.InfantryTypeVector_field_0x14; /*0x511f2c*/
  InfantryTypeVector_field_0x04 = (void *)v82.InfantryTypeVector_field_0x04; /*0x511f2f*/
  *(unsigned int *)(_EBX + 376) = InfantryTypeVector_field_0x10; /*0x511f33*/
  *(unsigned int *)(_EBX + 384) = InfantryTypeVector_field_0x18; /*0x511f38*/
  *(unsigned int *)v82.__pad_0 = &vt_VectorClass; /*0x511f3b*/
  if ( InfantryTypeVector_field_0x04 && BYTE1(v82.vtable4) ) /*0x511f4b*/
    __3_YAXPAX_Z(InfantryTypeVector_field_0x04); /*0x511f4e*/
  if ( INIClass::GetString( /*0x511f70*/
         (INIClass *)v4,
         (unsigned __int8 *)(_EBX + 36),
         aVeteranaircraf,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    HouseTypeClass::readDefaultAlly((HouseTypeClass *)&Destination, 0, 0); /*0x511f85*/
    *(unsigned int *)Destination.__pad_000 = &vt_TypeList; /*0x511f94*/
    for ( k = strtok(String, Str); k; k = strtok(0, Str) ) /*0x511fa6*/
    {
      if ( !*k ) /*0x511fa8*/
        break; /*0x511fab*/
      v39 = KeywordClass::FindOrCreate(k); /*0x511fb4*/
      if ( v39 /*0x511fe7*/
        && (Destination.uniqueId < Destination.UnitTypeVector_field_0x08
         || (BYTE1(Destination.UnitTypeVector_field_0x0C) || !Destination.UnitTypeVector_field_0x08)
         && Destination.abstractFlags > 0
         && (*(unsigned __int8 (**)(UnitTypeVector *, int, unsigned int))(*(unsigned int *)Destination.__pad_0 + 8))(
              &Destination,
              Destination.UnitTypeVector_field_0x08 + Destination.abstractFlags,
              0)) )
      {
        v40 = Destination.uniqueId++; /*0x511ff2*/
        *(unsigned int *)(Destination.UnitTypeVector_field_0x04 + 4 * v40) = v39; /*0x511ffd*/
      }
    }
    HouseTypeClass::readParaDropTypes((HouseTypeClass *)&v82, &Destination); /*0x51201c*/
    *(unsigned int *)Destination.__pad_0 = &vt_VectorClass; /*0x512025*/
    VectorClass::ClearAndFree4((int)&Destination); /*0x51202d*/
  }
  else
  {
    HouseTypeClass::readParaDropTypes((HouseTypeClass *)&v82, (unsigned int *)(_EBX + 388)); /*0x51203f*/
  }
  HouseTypeClass::readBaseDefense((HouseTypeClass *)(_EBX + 388), &v82); /*0x512051*/
  v41 = v82.uniqueId; /*0x51205a*/
  v42 = v82.nextArrayIndex; /*0x51205e*/
  *(unsigned int *)(_EBX + 408) = v82.abstractFlags; /*0x512062*/
  v43 = (void *)v82.vtable2; /*0x512065*/
  *(unsigned int *)(_EBX + 404) = v41; /*0x512069*/
  *(unsigned int *)(_EBX + 412) = v42; /*0x51206e*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x512071) */
  if ( v43 && BYTE1(v82.InfantryTypeVector_field_0x0C) ) /*0x512081*/
    __3_YAXPAX_Z(v43); /*0x512084*/
  v44 = *(unsigned int *)(_EBX + 188); /*0x51208c*/
  CountryData = HouseTypeClass::loadCountryData( /*0x51209e*/
                  v4,
                  (unsigned __int8 *)(_EBX + 36),
                  (unsigned __int8 *)&g_INI_Key_Special.?,
                  v44);
  *(unsigned int *)(_EBX + 188) = CountryData; /*0x5120a5*/
  if ( CountryData != v44 ) /*0x5120ab*/
  {
    if ( v44 != -1 ) /*0x5120b4*/
    {
      v46 = *(unsigned int *)(_EBX + 184); /*0x5120bc*/
      v47 = *(unsigned int *)(FootClass_Array.?[0] + 4 * v44); /*0x5120c2*/
      v48 = *(unsigned int *)(v47 + 168); /*0x5120c5*/
      v49 = v47 + 152; /*0x5120cb*/
      if ( v46 < v48 ) /*0x5120d2*/
      {
        v50 = v48 - 1; /*0x5120d4*/
        for ( *(unsigned int *)(v49 + 16) = v50; /*0x5120da*/
              v46 < *(unsigned int *)(v49 + 16);
              *(unsigned int *)(*(unsigned int *)(v49 + 4) + 4 * v46 - 4) = *(unsigned int *)(*(unsigned int *)(v49 + 4) + 4 * v46) )
        {
          ++v46; /*0x5120df*/
        }
      }
    }
    v51 = *(unsigned int *)(_EBX + 188); /*0x5120ee*/
    if ( v51 != -1 ) /*0x5120f7*/
    {
      v52 = *(unsigned int *)(FootClass_Array.?[0] + 4 * v51); /*0x5120ff*/
      v53 = *(unsigned int *)(v52 + 160); /*0x512102*/
      v54 = *(unsigned int *)(v52 + 168); /*0x512108*/
      v55 = v52 + 152; /*0x51210e*/
      if ( v54 < v53 /*0x512133*/
        || (*(unsigned char *)(v55 + 13) || !v53)
        && (v56 = *(unsigned int *)(v55 + 20), v56 > 0)
        && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v55 + 8))(v55, v56 + v53, 0) )
      {
        v57 = *(unsigned int *)(v55 + 16); /*0x51213a*/
        v58 = *(unsigned int *)(v55 + 4); /*0x51213d*/
        *(unsigned int *)(v55 + 16) = v57 + 1; /*0x512143*/
        *(unsigned int *)(v58 + 4 * v57) = *(unsigned int *)(_EBX + 184); /*0x51214c*/
      }
    }
  }
  return 1; /*0x512151*/

}
}
// 0x512170
namespace gamemd {
AbstractClass * * HouseTypeClass::ProcessPower(int * a2, void *a2_1)
{

  int v3; // edx
  int v4; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x51217a*/
  Power::TimerProcess(this->arrayIndex2); /*0x512188*/
  Power::TimerProcess(this->sideIndex); /*0x512196*/
  Power::TimerProcess(this->colorSchemeIndex); /*0x5121a4*/
  Checksummer::Add_double((Checksummer *)a2, this->firepowerMult[0], this->firepowerMult[1]); /*0x5121b9*/
  Checksummer::Add_double((Checksummer *)a2, this->groundspeedMult[0], this->groundspeedMult[1]); /*0x5121ce*/
  Checksummer::Add_double((Checksummer *)a2, this->airspeedMult[0], this->airspeedMult[1]); /*0x5121e3*/
  Checksummer::Add_double((Checksummer *)a2, this->armorMult[0], this->armorMult[1]); /*0x5121f8*/
  Checksummer::Add_double((Checksummer *)a2, this->rofMult[0], this->rofMult[1]); /*0x51220d*/
  Checksummer::Add_double((Checksummer *)a2, this->costMult[0], this->costMult[1]); /*0x512222*/
  Checksummer::Add_double((Checksummer *)a2, this->buildtimeMult[0], this->buildtimeMult[1]); /*0x512237*/
  Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)&this->q1A0, strlen(&this->q1A0)); /*0x512252*/
  LOBYTE(v3) = this->Prefix; /*0x512257*/
  v4 = Power::FinalizeDrain((Power *)a2, v3); /*0x512260*/
  LOBYTE(v4) = this->Multiplay; /*0x512265*/
  return Power::FlagProcess((Power *)a2, v4); /*0x512273*/

}
}
// 0x512290
namespace gamemd {
int HouseTypeClass::SaveLoad_Prefix(unsigned int * i, int a2)
{
  HouseTypeClass *v2; // edi
  int *veteranInfantry; // ebx
  int v4; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // esi
  int m; // esi
  int n; // esi
  int v11; // [esp+58h] [ebp-4h] BYREF

  v2 = i; /*0x512295*/
  veteranInfantry = *&i->veteranInfantry; /*0x51229f*/
  (*(void (**)(int *))(i->veteranInfantry[0] + 12))(i->veteranInfantry); /*0x5122a7*/
  (*(void (**)(char *))(*&v2->prefix + 12))(&v2->prefix); /*0x5122b8*/
  (*(void (**)(char *))(*&v2->pad_16D + 12))(&v2->pad_16D[23]); /*0x5122c7*/
  v4 = a2; /*0x5122ca*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x5122d0*/
  if ( result >= 0 ) /*0x5122d7*/
  {
    if ( v2 ) /*0x5122df*/
      HouseTypeClass::loadVeteranWeapons(v2, (int)&i); /*0x5122e8*/
    if ( veteranInfantry ) /*0x5122ef*/
    {
      InfantryTypeVector::Construct((InfantryTypeVector *)veteranInfantry, 0, 0); /*0x5122f7*/
      *veteranInfantry = (int)&vt_TypeList; /*0x5122fc*/
    }
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x51230e*/
    for ( i = 0; (int)i < a2; i = (HouseTypeClass *)((char *)i + 1) ) /*0x51231f*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &v11, 4, 0); /*0x51232d*/
      InfantryTypeVector::Add((InfantryTypeVector *)veteranInfantry, &v11); /*0x512337*/
    }
    if ( v2 != (HouseTypeClass *)-360 ) /*0x51234f*/
    {
      UnitTypeVector::Construct(&v2->prefix, 0, 0); /*0x512357*/
      *&v2->prefix = &vt_TypeList; /*0x51235c*/
    }
    (*(void (__stdcall **)(int, HouseTypeClass **, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &i, 4, 0); /*0x51236f*/
    for ( i = 0; i < (int)i; ++i ) /*0x51237a*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x512388*/
      VectorClass::PushBack(&v2->prefix, &a2); /*0x512392*/
    }
    if ( v2 != (HouseTypeClass *)-388 ) /*0x5123a6*/
      HouseTypeClass::readStartUnit(&v2->pad_16D); /*0x5123aa*/
    (*(void (__stdcall **)(int, HouseTypeClass **, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &i, 4, 0); /*0x5123bb*/
    for ( j = 0; j < (int)i; ++j ) /*0x5123c6*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x5123d4*/
      HouseTypeClass::readPowerPlants(&v2->pad_16D, &a2); /*0x5123de*/
    }
    for ( k = 0; k < v2->veteranAircraft[0]; ++k ) /*0x5123f4*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2->veteranInfantryCount + 4 * k)); /*0x512405*/
    for ( m = 0; m < *&v2->pad_16D; ++m ) /*0x51241f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*&v2->smartAi + 4 * m)); /*0x512430*/
    for ( n = 0; n < *&v2->pad_16D; ++n ) /*0x51244a*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*&v2->pad_16D + 4 * n)); /*0x51245b*/
    return 0; /*0x51246b*/
  }
  return result; /*0x51246d*/
}
}
// 0x512480
namespace gamemd {
int HouseTypeClass_SaveLoad_Prefix_0(HouseTypeClass *aP0, int * a2, int * a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a2, (int)a3); /*0x512491*/
  if ( result >= 0 ) /*0x512498*/
  {
    v7 = *a2; /*0x5124a4*/
    a3 = (int *)aP0->veteranAircraft[0]; /*0x5124b1*/
    (*(void (__stdcall **)(int *, int **, int, unsigned int, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x5124b5*/
    for ( i = 0; i < a4; ++i ) /*0x5124c0*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->veteranInfantryCount + 4 * i, 4, 0); /*0x5124d3*/
    v9 = *a2; /*0x5124e3*/
    a4 = *&aP0->pad_16D; /*0x5124ef*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v9 + 16))(a2, &a4, 4, 0); /*0x5124f3*/
    for ( j = 0; j < a4; ++j ) /*0x5124fe*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, *&aP0->smartAi + 4 * j, 4, 0); /*0x512511*/
    v11 = *a2; /*0x512521*/
    a4 = *&aP0->pad_16D; /*0x51252d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x512531*/
    for ( k = 0; k < (int)a3; ++k ) /*0x51253c*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, *&aP0->pad_16D + 4 * k, 4, 0); /*0x51254f*/
    return 0; /*0x512559*/
  }
  return result; /*0x51255c*/
}
}
// 0x513370
namespace gamemd {
unsigned int * HouseTypeClass::readBaseDefense(VectorClass_flat * a2)
{

  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (HouseTypeClass *)a2 ) /*0x51337a*/
    return &this->AbstractClass; /*0x51337a*/
  (*((void (**)(HouseTypeClass *))this->AbstractClass + 3))(this); /*0x51337e*/
  v3 = a2->u32_8; /*0x513381*/
  this->vtable3 = v3; /*0x513386*/
  if ( !v3 ) /*0x513389*/
  {
    this->vtable2 = 0; /*0x5133ca*/
    BYTE1(this->u8_D) = 0; /*0x5133d1*/
    return &this->AbstractClass; /*0x5133d5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (unsigned int)v3); /*0x513393*/
  this->vtable2 = v4; /*0x51339b*/
  if ( !v4 ) /*0x5133a0*/
    return &this->AbstractClass; /*0x5133a0*/
  vtable2 = this->vtable3; /*0x5133a2*/
  v6 = 0; /*0x5133a5*/
  BYTE1(this->u8_D) = 1; /*0x5133a9*/
  if ( (int)vtable2 <= 0 ) /*0x5133ad*/
    return &this->AbstractClass; /*0x5133ad*/
  do /*0x5133c1*/
  {
    *((unsigned int *)this->veteranUnits_d + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x5133b8*/
    ++v6; /*0x5133be*/
  }
  while ( v6 < (int)this->veteranUnits_d ); /*0x5133c1*/
  return &this->AbstractClass; /*0x5133c5*/

}
}
// 0x67B8F0
namespace gamemd {
void * HouseTypeClass::ReadCountryName(int a1, unsigned char *** edx0, INIClass * a3, unsigned char * a4, unsigned int * a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  AircraftTypeVector v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)edx0, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x67b91c*/
  {
    ((AircraftTypeVector *)(&v17))->Constructor(0, 0); /*0x67b931*/
    v22 = 10; /*0x67b93a*/
    v21 = 0; /*0x67b948*/
    v17 = (AircraftTypeVector)&vt_TypeList; /*0x67b94c*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67b95e*/
    {
      if ( !*i ) /*0x67b960*/
        break; /*0x67b962*/
      v7 = KeywordClass::FindOrCreate(i); /*0x67b96b*/
      if ( v7 /*0x67b99b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && (*(uint8_t (**)(AircraftTypeVector *, int, unsigned int))(*(unsigned int *)&v17 + 8))(
              &v17,
              v22 + v19,
              0)) )
      {
        v8 = v21++; /*0x67b9a6*/
        *((unsigned int *)Block + v8) = v7; /*0x67b9b1*/
      }
    }
    a1->u32_4 = 0; /*0x67b9cd*/
    a1->VtableStub_8 = 0; /*0x67b9d0*/
    a1->u32_C = 1; /*0x67b9d3*/
    a1->u8_D = 0; /*0x67b9d7*/
    *(unsigned int *)a1 = &vt_VectorClass; /*0x67b9da*/
    HouseTypeClass::readBaseDefense((HouseTypeClass *)a1, &v17); /*0x67b9e0*/
    *(unsigned int *)a1 = &vt_TypeList; /*0x67b9e5*/
    v17 = (AircraftTypeVector)&vt_VectorClass; /*0x67b9eb*/
    v9 = v22; /*0x67b9f7*/
    a1->u32_10 = v21; /*0x67b9fb*/
    v10 = Block; /*0x67b9fe*/
    v11 = Block == 0; /*0x67ba02*/
    a1->AudioBuffer_14 = v9; /*0x67ba04*/
    if ( !v11 && v20 ) /*0x67ba11*/
    {
      operator delete((void *)(v10)); /*0x67ba18*/
      return a1; /*0x67ba2b*/
    }
  }
  else
  {
    a1->u32_4 = 0; /*0x67ba39*/
    a1->VtableStub_8 = 0; /*0x67ba3c*/
    a1->u32_C = 1; /*0x67ba3f*/
    a1->u8_D = 0; /*0x67ba43*/
    *(unsigned int *)a1 = &vt_VectorClass; /*0x67ba46*/
    if ( (unsigned int *)a1 != a5 ) /*0x67ba4c*/
    {
      VectorClass::ClearAndFree4(a1); /*0x67ba50*/
      v13 = a5[2]; /*0x67ba56*/
      a1->VtableStub_8 = v13; /*0x67ba5b*/
      if ( v13 ) /*0x67ba5e*/
      {
        v14 = operator new(4 * v13); /*0x67ba68*/
        a1->u32_4 = v14; /*0x67ba72*/
        if ( v14 ) /*0x67ba75*/
        {
          v15 = a1->VtableStub_8; /*0x67ba77*/
          v16 = 0; /*0x67ba7a*/
          a1->u8_D = 1; /*0x67ba7e*/
          if ( v15 > 0 ) /*0x67ba82*/
          {
            do /*0x67ba96*/
            {
              *(unsigned int *)(a1->u32_4 + 4 * v16) = *(unsigned int *)(a5[1] + 4 * v16); /*0x67ba8d*/
              ++v16; /*0x67ba93*/
            }
            while ( v16 < a1->VtableStub_8 ); /*0x67ba96*/
          }
        }
      }
      else
      {
        a1->u32_4 = 0; /*0x67ba9a*/
        a1->u8_D = 0; /*0x67ba9d*/
      }
    }
    a1->u32_10 = a5[4]; /*0x67baa3*/
    a1->AudioBuffer_14 = a5[5]; /*0x67baa9*/
    *(unsigned int *)a1 = &vt_TypeList; /*0x67baac*/
  }
  return a1; /*0x67ba22*/
}
}
// 0x4756F0
namespace gamemd {
int HouseTypeClass::loadCountryData(uint8_t *a2, uint8_t *a3, int a4, void *a4_1)
{
  int result; // eax
  SideClass *v5; // eax
  unsigned int *v6; // eax
  int v7; // ecx
  unsigned int *i; // edx
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475712*/
    return a4; /*0x475782*/
  result = HouseTypeClass::Find((HouseTypeClass *)Destination); /*0x47571f*/
  if ( result == -1 ) /*0x475727*/
  {
    v5 = (SideClass *)operator new(0xB4u); /*0x47572e*/
    if ( v5 ) /*0x475738*/
      v6 = SideClass::Construct(v5, Destination); /*0x475741*/
    else
      v6 = 0; /*0x475748*/
    v7 = 0; /*0x475751*/
    if ( FootClass_Array.barrelFacing[0] <= 0 ) /*0x475755*/
    {
      return -1; /*0x475769*/
    }
    else
    {
      for ( i = (unsigned int *)FootClass_Array.unloadTimer[0]; (unsigned int *)*i != v6; ++i ) /*0x475757*/
      {
        if ( ++v7 >= FootClass_Array.barrelFacing[0] ) /*0x475767*/
          return -1; /*0x475767*/
      }
      return v7; /*0x475776*/
    }
  }
  return result; /*0x47576d*/
}
} // namespace gamemd

// 0x512280
namespace gamemd {
int HouseTypeClass::StubReturnFalse(int a1)
{
  return 0; /*0x512282*/
}
} // namespace gamemd

// 0x512570
namespace gamemd {
int HouseTypeClass::LoadHouse(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x512576*/
    return -2147467261; /*0x512578*/
  a2[1] = 0; /*0x512580*/
  *a2 = 436; /*0x512587*/
  return 0; /*0x51257d*/
}
} // namespace gamemd

// 0x5125A0
namespace gamemd {
int HouseTypeClass::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  void **p_vtable1; // ecx

  if ( !a3 ) /*0x5125a7*/
    return -2147467261; /*0x5125a9*/
  *a3 = 0; /*0x5125c6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x5125d0*/
    *a3 = a1; /*0x5125d4*/
  if ( !memcmp(a2, &IID_IPersist, 0x10u) ) /*0x5125e5*/
    *a3 = a1; /*0x5125e9*/
  if ( !memcmp(a2, &IID_IPersistStream, 0x10u) ) /*0x5125f9*/
    *a3 = a1; /*0x5125fe*/
  if ( !memcmp(a2, &IID_IRTTITypeInfo, 0x10u) ) /*0x51260e*/
  {
    if ( a1 ) /*0x512616*/
      p_vtable1 = &a1->vfptr1; /*0x512618*/
    else
      p_vtable1 = 0; /*0x51261d*/
    *a3 = p_vtable1; /*0x51261f*/
  }
  if ( !*a3 ) /*0x512621*/
    return -2147467262; /*0x512626*/
  (*((void (__stdcall **)(HouseTypeClass *))a1->vfptr + 1))(a1); /*0x512632*/
  return 0; /*0x5125ae*/
}
} // namespace gamemd

// 0x512640
namespace gamemd {
int HouseTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x512646*/
    return -2147467261; /*0x512648*/
  *a2 = 500447528; /*0x512656*/
  a2[1] = 298976363; /*0x51265e*/
  a2[2] = 1610654892; /*0x512667*/
  a2[3] = unk_7E963C; /*0x512670*/
  return 0; /*0x51264d*/
}
} // namespace gamemd

// 0x512710
namespace gamemd {
int HouseTypeClass::GetTypeIdentifier()
{
  return 14; /*0x512715*/
}
} // namespace gamemd

// 0x512720
namespace gamemd {
int HouseTypeClass::GetObjectSize()
{
  return 432; /*0x512725*/
}
} // namespace gamemd

// 0x512730
namespace gamemd {
unsigned int HouseTypeClass::loadBuildLimits()
{
  return this->arrayIndex; /*0x512736*/
}
} // namespace gamemd

// 0x512740
namespace gamemd {
int HouseTypeClass::AddRef(int a1)
{
  return 1; /*0x512745*/
}
} // namespace gamemd

// 0x512750
namespace gamemd {
int HouseTypeClass::Release(int a1)
{
  return 1; /*0x512755*/
}
} // namespace gamemd

// 0x512760
namespace gamemd {
HouseTypeClass * HouseTypeClass::Destructor(char a2)
{

  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *veteranInfantryCount; // eax
  HouseTypeClass *v8; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &vt_HouseTypeClass; /*0x512766*/
  /* X11: vtable install elided (implicit via HouseTypeClass virtuals 0x51276c) */
  /* X11: vtable install elided (implicit via HouseTypeClass virtuals 0x512773) */
  /* X11: vtable install elided (implicit via HouseTypeClass virtuals 0x51277a) */
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x512781*/
  v8 = this; /*0x512796*/
  v3 = (*(int (**)(unsigned int *, HouseTypeClass **))(dword_A83C98 + 16))(&dword_A83C98, &v8); /*0x51279a*/
  if ( v3 != -1 && v3 < dword_A83CA8 && v3 < --dword_A83CA8 ) /*0x5127b5*/
  {
    do /*0x5127cd*/
    {
      ++v3; /*0x5127bd*/
      *((unsigned int *)dword_A83C9C + v3 - 1) = *((unsigned int *)dword_A83C9C + v3); /*0x5127c1*/
    }
    while ( v3 < dword_A83CA8 ); /*0x5127cd*/
  }
  v4 = *&this->q188; /*0x5127cf*/
  *&this->u32_184 = &vt_VectorClass; /*0x5127d8*/
  if ( v4 && this->u8_191 ) /*0x5127e6*/
  {
    __3_YAXPAX_Z(v4); /*0x5127ef*/
    *&this->q188 = 0; /*0x5127f7*/
  }
  this->u8_191 = 0; /*0x5127fd*/
  *&this->u32_18C = 0; /*0x512803*/
  v5 = *&this->smartAi; /*0x512809*/
  *&this->prefix = &vt_VectorClass; /*0x51280f*/
  if ( v5 && this->u8_175 ) /*0x51281d*/
  {
    __3_YAXPAX_Z(v5); /*0x512826*/
    *&this->smartAi = 0; /*0x51282e*/
  }
  this->u8_175 = 0; /*0x512834*/
  *&this->q170 = 0; /*0x51283a*/
  veteranInfantryCount = (void *)this->veteranInfantryCount; /*0x512840*/
  this->veteranInfantry[0] = (int)&vt_VectorClass; /*0x512846*/
  if ( veteranInfantryCount && BYTE1(this->veteranUnitsCount) ) /*0x512854*/
  {
    __3_YAXPAX_Z(veteranInfantryCount); /*0x51285d*/
    this->veteranInfantryCount = 0; /*0x512865*/
  }
  BYTE1(this->veteranUnitsCount) = 0; /*0x51286d*/
  this->veteranUnits[0] = 0; /*0x512873*/
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x512879*/
  if ( (a2 & 1) != 0 ) /*0x512885*/
    __3_YAXPAX_Z(this); /*0x512888*/
  return &this->AbstractClass; /*0x512892*/

}
} // namespace gamemd

// 0x512900
namespace gamemd {
wchar_t * HouseTypeClass_36::ddtor(void *a1_1)
{
  void *v2; // eax

  v2 = *(void **)&a1_1->q004; /*0x512906*/
  a1_1->q010 = 0; /*0x512909*/
  if ( v2 && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x512910*/
  {
    operator delete((void *)(v2)); /*0x512916*/
    *(unsigned int *)&a1_1->q004 = 0; /*0x51291e*/
  }
  (((unsigned char *)&(*(unsigned int *)&a1_1->q00C))[1]) = 0; /*0x512921*/
  a1_1->q008 = 0; /*0x512924*/
}
} // namespace gamemd

// 0x512930
namespace gamemd {
unsigned int HouseTypeClass_36::Write(int a2)
{

  if ( LOBYTE(this->q00C) ) /*0x512930*/
    return (unsigned int)(a2 - *&this->u32_4) >> 2; /*0x512945*/
  else
    return 0; /*0x512937*/

}
} // namespace gamemd

// 0x512950
namespace gamemd {
int HouseTypeClass_36::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x51295a*/

}
} // namespace gamemd

// 0x512960
namespace gamemd {
unsigned int * HouseTypeClass::readStartUnit()
{

  this->vtable2 = 0; /*0x512964*/
  this->vtable3 = 0; /*0x512967*/
  LOBYTE(this->vtable4) = 1; /*0x51296a*/
  BYTE1(this->u8_D) = 0; /*0x51296e*/
  this->abstractFlags = 10; /*0x512971*/
  this->uniqueId = 0; /*0x512978*/
  this->AbstractClass = &vt_TypeList; /*0x51297b*/
  return &this->AbstractClass; /*0x512981*/

}
} // namespace gamemd

// 0x512990
namespace gamemd {
wchar_t * HouseTypeClass_28::ddtor(void *a1)
{

  void *v2; // eax

  v2 = *&this->u32_4; /*0x512996*/
  this->q010 = 0; /*0x512999*/
  if ( v2 && BYTE1(this->q00C) ) /*0x5129a0*/
  {
    __3_YAXPAX_Z(v2); /*0x5129a6*/
    *&this->u32_4 = 0; /*0x5129ae*/
  }
  BYTE1(this->q00C) = 0; /*0x5129b1*/
  this->u32_8 = 0; /*0x5129b4*/

}
} // namespace gamemd

// 0x5129C0
namespace gamemd {
unsigned int HouseTypeClass_28::Write(int a2)
{

  if ( LOBYTE(this->q00C) ) /*0x5129c0*/
    return (unsigned int)(a2 - *&this->u32_4) >> 2; /*0x5129d5*/
  else
    return 0; /*0x5129c7*/

}
} // namespace gamemd

// 0x5129E0
namespace gamemd {
int HouseTypeClass_28::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x5129ea*/

}
} // namespace gamemd

// 0x512A40
namespace gamemd {
TypeList_flat * HouseTypeClass_36::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x512a43*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x512a46) */
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x512a50*/
  {
    operator delete((void *)(v3)); /*0x512a58*/
    *((unsigned int *)Block + 1) = 0; /*0x512a60*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x512a6b*/
  *((unsigned int *)Block + 2) = 0; /*0x512a71*/
  if ( (a2 & 1) != 0 ) /*0x512a78*/
    operator delete((void *)(Block)); /*0x512a7b*/
  return &Block->vfptr; /*0x512a85*/
}
} // namespace gamemd

// 0x512A90
namespace gamemd {
TypeList_flat * HouseTypeClass_28::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x512a93*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x512a96) */
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x512aa0*/
  {
    operator delete((void *)(v3)); /*0x512aa8*/
    *((unsigned int *)Block + 1) = 0; /*0x512ab0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x512abb*/
  *((unsigned int *)Block + 2) = 0; /*0x512ac1*/
  if ( (a2 & 1) != 0 ) /*0x512ac8*/
    operator delete((void *)(Block)); /*0x512acb*/
  return &Block->vfptr; /*0x512ad5*/
}
} // namespace gamemd

// 0x512B80
namespace gamemd {
VectorClass_flat * HouseTypeClass_36::Constructor(unsigned int * Block, char a2, void *a3_1, void *a4)
{

  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x512b83*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x512b86*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x512b90*/
  {
    __3_YAXPAX_Z(v3); /*0x512b98*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x512ba0*/
  }
  BYTE1(Block->m_C) = 0; /*0x512bab*/
  Block->m_8 = 0; /*0x512bb1*/
  if ( (a2 & 1) != 0 ) /*0x512bb8*/
    __3_YAXPAX_Z(Block); /*0x512bbb*/
  return Block->__pad_0; /*0x512bc5*/

}
} // namespace gamemd

// 0x512BD0
namespace gamemd {
unsigned int * HouseTypeClass::readStartInfantry(unsigned int * a2, void *a2_1)
{

  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (HouseTypeClass *)a2 ) /*0x512bda*/
    return &this->AbstractClass; /*0x512bda*/
  (*((void (**)(HouseTypeClass *))this->AbstractClass + 3))(this); /*0x512bde*/
  v3 = a2->vtable3; /*0x512be1*/
  this->vtable3 = v3; /*0x512be6*/
  if ( !v3 ) /*0x512be9*/
  {
    this->vtable2 = 0; /*0x512c2a*/
    BYTE1(this->u8_D) = 0; /*0x512c31*/
    return &this->AbstractClass; /*0x512c35*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (unsigned int)v3); /*0x512bf3*/
  this->vtable2 = v4; /*0x512bfb*/
  if ( !v4 ) /*0x512c00*/
    return &this->AbstractClass; /*0x512c00*/
  vtable2 = this->vtable3; /*0x512c02*/
  v6 = 0; /*0x512c05*/
  BYTE1(this->u8_D) = 1; /*0x512c09*/
  if ( (int)vtable2 <= 0 ) /*0x512c0d*/
    return &this->AbstractClass; /*0x512c0d*/
  do /*0x512c21*/
  {
    *((unsigned int *)this->veteranUnits_d + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x512c18*/
    ++v6; /*0x512c1e*/
  }
  while ( v6 < (int)this->veteranUnits_d ); /*0x512c21*/
  return &this->AbstractClass; /*0x512c25*/

}
} // namespace gamemd

// 0x513010
namespace gamemd {
char HouseTypeClass_36::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->u32_8; /*0x513012*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x51301d*/
  {
    v3 = 0; /*0x51301f*/
    if ( m_8 <= 0 ) /*0x513023*/
      return 1; /*0x513043*/
    v4 = *&this->u32_4; /*0x513025*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x51302b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x513034*/
    {
      ++v3; /*0x513036*/
      ++v4; /*0x513037*/
      if ( v3 >= m_8 ) /*0x51303c*/
        return 1; /*0x51303c*/
    }
  }
  return 0; /*0x51303e*/

}
} // namespace gamemd

// 0x513240
namespace gamemd {
char HouseTypeClass_36::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51324c*/
  {
    LOBYTE(this->q00C) = 0; /*0x513252*/
    if ( a3 ) /*0x513258*/
      v4 = a3; /*0x51326e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x51326a*/
    LOBYTE(this->q00C) = 1; /*0x513272*/
    if ( !v4 ) /*0x513276*/
      return 0; /*0x5132ea*/
    if ( *&this->u32_4 ) /*0x513278*/
    {
      m_8 = this->u32_8; /*0x51327f*/
      if ( a2 < m_8 ) /*0x513284*/
        m_8 = a2; /*0x513286*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->u32_4 + 4 * i - 4) ) /*0x51328c*/
        ++i; /*0x513291*/
      if ( BYTE1(this->q00C) ) /*0x51329e*/
      {
        __3_YAXPAX_Z(*&this->u32_4); /*0x5132a9*/
        *&this->u32_4 = 0; /*0x5132b1*/
      }
    }
    *&this->u32_4 = v4; /*0x5132ba*/
    this->u32_8 = a2; /*0x5132c2*/
    BYTE1(this->q00C) = a3 == 0; /*0x5132c5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVUnitTypeClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x5132ce*/
  }
  v7 = this->u32_8; /*0x5132d1*/
  if ( v7 < this->q010 ) /*0x5132d9*/
    this->q010 = v7; /*0x5132db*/
  return 1; /*0x5132de*/

}
} // namespace gamemd

// 0x513340
namespace gamemd {
int HouseTypeClass_36::Read(unsigned int * a2, void *a2_2, void *a3)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = a2_2->q010; /*0x513340*/
  result = 0; /*0x513343*/
  if ( m_10 <= 0 ) /*0x513348*/
    return -1; /*0x51335f*/
  for ( i = *(unsigned int **)&a2_2->q004; *i != *a2_2; ++i ) /*0x51334e*/
  {
    if ( ++result >= m_10 ) /*0x51335d*/
      return -1; /*0x51335d*/
  }
  return result; /*0x513362*/
}
}
// 0x5133E0
namespace gamemd {
char HouseTypeClass_28::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->u32_8; /*0x5133e2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5133ed*/
  {
    v3 = 0; /*0x5133ef*/
    if ( m_8 <= 0 ) /*0x5133f3*/
      return 1; /*0x513413*/
    v4 = *&this->u32_4; /*0x5133f5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5133fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x513404*/
    {
      ++v3; /*0x513406*/
      ++v4; /*0x513407*/
      if ( v3 >= m_8 ) /*0x51340c*/
        return 1; /*0x51340c*/
    }
  }
  return 0; /*0x51340e*/

}
} // namespace gamemd

// 0x513420
namespace gamemd {
char HouseTypeClass_36::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x51342c*/
  {
    LOBYTE(this->q00C) = 0; /*0x513436*/
    if ( a3 ) /*0x51343c*/
      v4 = a3; /*0x513452*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x51344e*/
    LOBYTE(this->q00C) = 1; /*0x513456*/
    if ( v4 ) /*0x51345a*/
    {
      if ( *&this->u32_4 ) /*0x513465*/
      {
        m_8 = this->u32_8; /*0x51346c*/
        if ( a2 < m_8 ) /*0x513471*/
          m_8 = a2; /*0x513473*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->u32_4 + 4 * i - 4) ) /*0x513479*/
          ++i; /*0x51347e*/
        if ( BYTE1(this->q00C) ) /*0x51348b*/
        {
          __3_YAXPAX_Z(*&this->u32_4); /*0x513496*/
          *&this->u32_4 = 0; /*0x51349e*/
        }
      }
      *&this->u32_4 = v4; /*0x5134a7*/
      this->u32_8 = a2; /*0x5134af*/
      BYTE1(this->q00C) = a3 == 0; /*0x5134b2*/
      return 1; /*0x5134b8*/
    }
    else
    {
      return 0; /*0x51345f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PBVAircraftTypeClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x5134c2*/
    return 1; /*0x5134c8*/
  }

}
} // namespace gamemd

// 0x513500
namespace gamemd {
int HouseTypeClass_36::IndexOf(unsigned int * a2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->q00C) ) /*0x513500*/
    return 0; /*0x513508*/
  m_8 = this->u32_8; /*0x51350e*/
  result = 0; /*0x513511*/
  if ( m_8 <= 0 ) /*0x513515*/
    return -1; /*0x51352c*/
  for ( i = *&this->u32_4; *i != *a2; ++i ) /*0x51351b*/
  {
    if ( ++result >= m_8 ) /*0x51352a*/
      return -1; /*0x51352a*/
  }
  return result; /*0x51350a*/

}
} // namespace gamemd

// 0x513540
namespace gamemd {
unsigned int HouseTypeClass_36::PointerToIndex(int a2)
{

  if ( LOBYTE(this->q00C) ) /*0x513540*/
    return (unsigned int)(a2 - *&this->u32_4) >> 2; /*0x513555*/
  else
    return 0; /*0x513547*/

}
} // namespace gamemd

// 0x513560
namespace gamemd {
unsigned int * HouseTypeClass::readDefaultAlly(int a2, int a3)
{

  this->vtable2 = 0; /*0x513569*/
  this->vtable3 = (void *)a2; /*0x513570*/
  LOBYTE(this->vtable4) = 1; /*0x513573*/
  BYTE1(this->u8_D) = 0; /*0x513577*/
  this->AbstractClass = &vt_VectorClass; /*0x51357b*/
  if ( a2 ) /*0x513581*/
  {
    if ( a3 ) /*0x513589*/
    {
      this->vtable2 = (void *)a3; /*0x51358b*/
    }
    else
    {
      this->vtable2 = (void *)__2_YAPAXI_Z(4 * a2); /*0x51359c*/
      BYTE1(this->u8_D) = 1; /*0x51359f*/
    }
  }
  this->AbstractClass = &vt_DynamicVectorClass; /*0x5135a3*/
  this->abstractFlags = 10; /*0x5135a9*/
  this->uniqueId = 0; /*0x5135b0*/
  return &this->AbstractClass; /*0x5135b9*/

}
} // namespace gamemd

// 0x513610
namespace gamemd {
char HouseTypeClass_28::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51361c*/
  {
    LOBYTE(this->q00C) = 0; /*0x513622*/
    if ( a3 ) /*0x513628*/
      v4 = a3; /*0x51363e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x51363a*/
    LOBYTE(this->q00C) = 1; /*0x513642*/
    if ( !v4 ) /*0x513646*/
      return 0; /*0x5136ba*/
    if ( *&this->u32_4 ) /*0x513648*/
    {
      m_8 = this->u32_8; /*0x51364f*/
      if ( a2 < m_8 ) /*0x513654*/
        m_8 = a2; /*0x513656*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->u32_4 + 4 * i - 4) ) /*0x51365c*/
        ++i; /*0x513661*/
      if ( BYTE1(this->q00C) ) /*0x51366e*/
      {
        __3_YAXPAX_Z(*&this->u32_4); /*0x513679*/
        *&this->u32_4 = 0; /*0x513681*/
      }
    }
    *&this->u32_4 = v4; /*0x51368a*/
    this->u32_8 = a2; /*0x513692*/
    BYTE1(this->q00C) = a3 == 0; /*0x513695*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVAircraftTypeClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x51369e*/
  }
  v7 = this->u32_8; /*0x5136a1*/
  if ( v7 < this->q010 ) /*0x5136a9*/
    this->q010 = v7; /*0x5136ab*/
  return 1; /*0x5136ae*/

}
} // namespace gamemd

// 0x5136C0
namespace gamemd {
char HouseTypeClass::readPowerPlants(TypeList_flat * a2)
{

  void *vtable2; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  unsigned int *vtable1; // edx

  vtable2 = this->vtable3; /*0x5136c3*/
  if ( this->veteranUnits_d >= (int)vtable2 ) /*0x5136cb*/
  {
    if ( !BYTE1(this->veteranUnits_d) && vtable2 ) /*0x5136d6*/
      return 0; /*0x5136d6*/
    abstractFlags = this->abstractFlags; /*0x5136d8*/
    if ( abstractFlags <= 0 /*0x5136e8*/
      || !(*((unsigned __int8 (**)(HouseTypeClass *, int, unsigned int))this->AbstractClass + 2))(
            this,
            (int)vtable2 + abstractFlags,
            0) )
    {
      return 0; /*0x5136ef*/
    }
  }
  uniqueId = this->uniqueId; /*0x5136f5*/
  vtable1 = this->vtable2; /*0x5136f8*/
  this->uniqueId = uniqueId + 1; /*0x5136fe*/
  vtable1[uniqueId] = *a2; /*0x513708*/
  return 1; /*0x5136f1*/

}
} // namespace gamemd

// 0x513710
namespace gamemd {
int HouseTypeClass_28::Read(unsigned int * a2, void *a2_2, void *a3)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = a2_2->q010; /*0x513710*/
  result = 0; /*0x513713*/
  if ( m_10 <= 0 ) /*0x513718*/
    return -1; /*0x51372f*/
  for ( i = *(unsigned int **)&a2_2->q004; *i != *a2_2; ++i ) /*0x51371e*/
  {
    if ( ++result >= m_10 ) /*0x51372d*/
      return -1; /*0x51372d*/
  }
  return result; /*0x513732*/
}
}
// 0x5137D0
namespace gamemd {
unsigned int * HouseTypeClass::readParaDropTypes(VectorClass_flat * a2)
{

  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  this->vtable2 = 0; /*0x5137dd*/
  this->vtable3 = 0; /*0x5137e0*/
  LOBYTE(this->vtable4) = 1; /*0x5137e3*/
  BYTE1(this->u8_D) = 0; /*0x5137e7*/
  this->AbstractClass = &vt_VectorClass; /*0x5137ea*/
  if ( this != (HouseTypeClass *)a2 ) /*0x5137f0*/
  {
    VectorClass::ClearAndFree4((int)this); /*0x5137f2*/
    v3 = a2->Capacity; /*0x5137f8*/
    this->vtable3 = v3; /*0x5137fd*/
    if ( v3 ) /*0x513800*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * (unsigned int)v3); /*0x513806*/
      this->vtable2 = v4; /*0x513810*/
      if ( v4 ) /*0x513813*/
      {
        vtable2 = this->vtable3; /*0x513815*/
        v6 = 0; /*0x513818*/
        BYTE1(this->u8_D) = 1; /*0x51381c*/
        if ( (int)vtable2 > 0 ) /*0x513820*/
        {
          do /*0x513834*/
          {
            *((unsigned int *)this->vtable2 + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x51382b*/
            ++v6; /*0x513831*/
          }
          while ( v6 < (int)this->vtable3 ); /*0x513834*/
        }
      }
    }
    else
    {
      this->vtable2 = 0; /*0x513838*/
      BYTE1(this->u8_D) = 0; /*0x51383b*/
    }
  }
  this->uniqueId = a2[4]; /*0x513841*/
  this->abstractFlags = a2[5]; /*0x513847*/
  this->AbstractClass = &vt_TypeList; /*0x51384a*/
  return &this->AbstractClass; /*0x513852*/

}
} // namespace gamemd

// 0x513860
namespace gamemd {
unsigned int * HouseTypeClass::readAllowedUnits(InfantryTypeClass * a2)
{

  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  this->vtable2 = 0; /*0x51386d*/
  this->vtable3 = 0; /*0x513870*/
  LOBYTE(this->vtable4) = 1; /*0x513873*/
  BYTE1(this->u8_D) = 0; /*0x513877*/
  this->AbstractClass = &vt_VectorClass; /*0x51387a*/
  if ( this != (HouseTypeClass *)a2 ) /*0x513880*/
  {
    Vector::Cleanup((_VectorClass_PBVInfantryTypeClass *)this); /*0x513882*/
    v3 = a2->Capacity; /*0x513888*/
    this->vtable3 = v3; /*0x51388d*/
    if ( v3 ) /*0x513890*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * (unsigned int)v3); /*0x513896*/
      this->vtable2 = v4; /*0x5138a0*/
      if ( v4 ) /*0x5138a3*/
      {
        vtable2 = this->vtable3; /*0x5138a5*/
        v6 = 0; /*0x5138a8*/
        BYTE1(this->u8_D) = 1; /*0x5138ac*/
        if ( (int)vtable2 > 0 ) /*0x5138b0*/
        {
          do /*0x5138c4*/
          {
            *((unsigned int *)this->vtable2 + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x5138bb*/
            ++v6; /*0x5138c1*/
          }
          while ( v6 < (int)this->vtable3 ); /*0x5138c4*/
        }
      }
    }
    else
    {
      this->vtable2 = 0; /*0x5138c8*/
      BYTE1(this->u8_D) = 0; /*0x5138cb*/
    }
  }
  this->uniqueId = a2[4]; /*0x5138d1*/
  this->abstractFlags = a2[5]; /*0x5138d7*/
  this->AbstractClass = &vt_DynamicVectorClass; /*0x5138da*/
  return &this->AbstractClass; /*0x5138e2*/

}
} // namespace gamemd

// 0x5139E0
namespace gamemd {
int HouseTypeClass::readBaseDefenses(int a1, const void * a2, unsigned int * a3)
{
  return HouseTypeClass::QueryInterface(a1 - 4, a2, a3);
}
} // namespace gamemd

// 0x5139F0
namespace gamemd {
int HouseTypeClass::readAiBuildLists(int a1)
{
  return HouseTypeClass::AddRef(a1 - 4);
}
} // namespace gamemd

// 0x513A00
namespace gamemd {
int HouseTypeClass::readLoadoutData(int a1)
{
  return HouseTypeClass::Release(a1 - 4);
}
} // namespace gamemd

// 0x6A46D0
namespace gamemd {
int HouseTypeClass::Find(void *a1, void *a2)
{
  int v1; // esi

  v1 = 0; /*0x6a46d6*/
  if ( FootClass_Array.barrelFacing[0] <= 0 ) /*0x6a46dd*/
    return -1; /*0x6a4702*/
  while ( _strcmpi((char *)(*(unsigned int *)(FootClass_Array.unloadTimer[0] + 4 * v1) + 36), (char *)this) ) /*0x6a46f6*/
  {
    if ( ++v1 >= FootClass_Array.barrelFacing[0] ) /*0x6a4700*/
      return -1; /*0x6a4700*/
  }
  return v1; /*0x6a4702*/
}
}