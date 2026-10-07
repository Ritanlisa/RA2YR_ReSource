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
namespace VectorClass { int ClearAndFree4(...); }  // w16g4 C3861 ns-supply (no carrier hpp)

// 0x511650
namespace gamemd {
unsigned int * HouseTypeClass::loadVeteranWeapons(HouseTypeClass * a2)
{
    ((AbstractTypeClass *)(int)this)->Init( (int)(a2)); /*0x511658*/
    this->veteranInfantry[0] = (gamemd::InfantryTypeClass *)((int)(void*)&TypeList_InfantryTypeClass_const___vftable); /*0x51165d*/
    *(unsigned int *)&this->prefix = (unsigned int)(void*)&TypeList_UnitTypeClass_const___vftable; /*0x511667*/
    *(unsigned int *)&this->__pad_16D[23] = (unsigned int)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x511671*/
    this->vtable1 = (void*)&HouseTypeClass_vftable; /*0x51167b*/
    ((void **)this)[1] = (void *)((unsigned int)(void*)&HouseTypeClass_vftable);
    ((void **)this)[2] = (void *)((unsigned int)(void*)&HouseTypeClass_vftable);
    ((void **)this)[3] = (void *)((unsigned int)(void*)&HouseTypeClass_vftable);
    return &this->vtable1; /*0x511698*/
}
}
// 0x5116A0
namespace gamemd {
AbstractClass * HouseTypeClass::Dtor(void *a1)
{
    int v2; // eax
    void *v3; // eax
    void *v4; // eax
    void *veteranInfantryCount; // eax
    HouseTypeClass *v7; // [esp+8h] [ebp-4h] BYREF

    this->vtable1 = (void*)&HouseTypeClass_vftable; /*0x5116a7*/
    ((void **)this)[1] = (void *)((unsigned int)(void*)&HouseTypeClass_vftable);
    ((void **)this)[2] = (void *)((unsigned int)(void*)&HouseTypeClass_vftable);
    ((void **)this)[3] = (void *)((unsigned int)(void*)&HouseTypeClass_vftable);
    AbstractClass::AnnounceExpiredPointer(&this->vtable1, 1); /*0x5116c2*/
    v7 = this; /*0x5116d7*/
    v2 = (*(int (**)(unsigned int *, HouseTypeClass **))(dword_A83C98 + 16))( (unsigned int *)(&dword_A83C98), (HouseTypeClass **)(&v7)); /*0x5116db*/
    if ( v2 != -1 && v2 < dword_A83CA8 && v2 < --dword_A83CA8 ) /*0x5116f6*/
    {
      do /*0x51170e*/
      {
        ++v2; /*0x5116fe*/
        *((unsigned int *)dword_A83C9C + v2 - 1) = *((unsigned int *)dword_A83C9C + v2); /*0x511702*/
      }
      while ( v2 < dword_A83CA8 ); /*0x51170e*/
    }
    v3 = *(void **)&this->__pad_16D[27]; /*0x511710*/
    *(unsigned int *)&this->__pad_16D[23] = (unsigned int)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x51171a*/
    if ( v3 && this->__pad_16D[36] ) /*0x511726*/
    {
      RA2_OPDEL(v3); /*0x51172f*/
      *(unsigned int *)&this->__pad_16D[27] = 0; /*0x511737*/
    }
    this->__pad_16D[36] = 0; /*0x51173d*/
    *(unsigned int *)&this->__pad_16D[31] = 0; /*0x511743*/
    v4 = *(void **)&this->smartAi; /*0x511749*/
    *(unsigned int *)&this->prefix = (unsigned int)(void*)&VectorClass_UnitTypeClass_const___vftable; /*0x51174f*/
    if ( v4 && this->__pad_16D[8] ) /*0x51175d*/
    {
      RA2_OPDEL(v4); /*0x511766*/
      *(unsigned int *)&this->smartAi = 0; /*0x51176e*/
    }
    this->__pad_16D[8] = 0; /*0x511774*/
    *(unsigned int *)&this->__pad_16D[3] = 0; /*0x51177a*/
    veteranInfantryCount = (void *)this->veteranInfantryCount; /*0x511780*/
    this->veteranInfantry[0] = (gamemd::InfantryTypeClass *)((int)(void*)&VectorClass_InfantryTypeClass_const___vftable); /*0x511786*/
    if ( veteranInfantryCount && IDA_BYTE1(this->veteranUnitsCount) ) /*0x511794*/
    {
      RA2_OPDEL(veteranInfantryCount); /*0x51179d*/
      this->veteranInfantryCount = 0; /*0x5117a5*/
    }
    IDA_BYTE1(this->veteranUnitsCount) = 0; /*0x5117ad*/
    this->veteranUnits[0] = 0; /*0x5117b3*/
    return (AbstractClass *)((AbstractTypeClass *)this)->Dtor(); /*0x5117be*/
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

    v4 = this; /*0x51185e*/
    _EBX = v3; /*0x511861*/
    INIClass::ResetSection( (INIClass *)this); /*0x511866*/
    if ( !(unsigned __int8)((AbstractTypeClass *)_EBX)->LoadFromINI( (unsigned __int8 ***)this) ) /*0x51186e*/
      return 0; /*0x51215c*/
    INIClass::GetString((INIClass *)this, (unsigned __int8 *)(_EBX + 36), aSuffix, &g_INI_DefaultBuffer, Source, 4); /*0x511892*/
    if ( strlen( (const char *)(Source)) ) /*0x51189b*/
    {
      strcpy( (char *)(_EBX + 416), (const char *)(Source)); /*0x5118c3*/
      v4 = this; /*0x5118cc*/
    }
    INIClass::GetString((INIClass *)v4, (unsigned __int8 *)(_EBX + 36), aParentcountry, (char *)(_EBX + 36), Source, 25); /*0x5118e2*/
    if ( Source ) /*0x5118ed*/
    {
      strncpy((char *)( Destination.__pad_0), (const char *)(Source), 0x18u); /*0x511901*/
      IDA_LOBYTE(Destination.UnitTypeVector_field_0x18) = 0; /*0x511909*/
    }
    else
    {
      Destination.__pad_0[0] = (unsigned __int8)Source; /*0x5118ef*/
    }
    if ( &Destination != (UnitTypeVector *)(_EBX + 152) ) /*0x51191a*/
    {
      qmemcpy( (void *)(_EBX + 152), (const void *)(&Destination), 0x18u); /*0x511925*/
      *(unsigned char *)(_EBX + 176) = Destination.UnitTypeVector_field_0x18; /*0x511927*/
      v4 = this; /*0x511928*/
    }
    *(unsigned int *)(_EBX + 192) = BuildingTypeClass::FindAnimByName( /*0x511942*/
                                (BuildingTypeClass *)v4,
                                (unsigned __int8 *)(_EBX + 36),
                                (unsigned __int8 *)&stru_81AF8C.?[95],
                                *(unsigned int *)(_EBX + 192));
    Source[0] = *(unsigned char *)(_EBX + 420); /*0x51195a*/
    Source[1] = 0; /*0x511966*/
    INIClass::GetString((INIClass *)v4, (unsigned __int8 *)(_EBX + 36), aPrefix, Source, v81, 2); /*0x51196b*/
    *(unsigned char *)(_EBX + 420) = v81[0]; /*0x511974*/
    *(double *)(_EBX + 200) = INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aFirepower, *(double *)(_EBX + 200)); /*0x511990 G57c4 x87c4: merged fstp qword [ebx+0C8h]@0x5119a1*/
    v6 = *(unsigned int *)(_EBX + 212); /*0x511995*/
    v7 = *(unsigned int *)(_EBX + 208); /*0x51199b*/
    *(double *)(_EBX + 208) = INIClass::ReadDouble_Overwrite((INIClass *)(/*0x5119b1*/
      (double *)v4), (unsigned __int8 *)(_EBX + 36), (unsigned char *)(aGroundspeed), COERCE_DOUBLE(IDA___PAIR64__(v6, v7))); /*G57c4 x87c4: merged fstp qword [ebx+0D0h]@0x5119c2*/
    v9 = *(unsigned int *)(_EBX + 220); /*0x5119b6*/
    v10 = *(unsigned int *)(_EBX + 216); /*0x5119bc*/
    *(double *)(_EBX + 216) = INIClass::ReadDouble_Overwrite((INIClass *)(/*0x5119d2*/
      (double *)v4), (unsigned __int8 *)(_EBX + 36), (unsigned char *)(aAirspeed), COERCE_DOUBLE(IDA___PAIR64__(v9, v10))); /*G57c4 x87c4: merged fstp qword [ebx+0D8h]@0x5119e3*/
    v12 = *(double *)(_EBX + 224); /*0x5119dd*/
    *(double *)(_EBX + 224) = INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), (unsigned char *)(g_INI_Key_Armor), v12); /*0x5119f3 G57c4 x87c4: merged fstp qword [ebx+0E0h]@0x511a04*/
    v14 = *(unsigned int *)(_EBX + 236); /*0x5119f8*/
    v15 = *(unsigned int *)(_EBX + 232); /*0x5119fe*/
    *(double *)(_EBX + 232) = INIClass::ReadDouble_Overwrite((INIClass *)(/*0x511a14*/
      (double *)v4), (unsigned __int8 *)(_EBX + 36), (unsigned char *)(&off_825478), COERCE_DOUBLE(IDA___PAIR64__(v14, v15))); /*G57c4 x87c4: merged fstp qword [ebx+0E8h]@0x511a25*/
    v17 = *(unsigned int *)(_EBX + 244); /*0x511a19*/
    v18 = *(unsigned int *)(_EBX + 240); /*0x511a1f*/
    *(double *)(_EBX + 240) = INIClass::ReadDouble_Overwrite((INIClass *)(/*0x511a35*/
      (double *)v4), (unsigned __int8 *)(_EBX + 36), (unsigned char *)(g_INI_Key_Cost), COERCE_DOUBLE(IDA___PAIR64__(v17, v18))); /*G57c4 x87c4: merged fstp qword [ebx+0F0h]@0x511a46*/
    v20 = *(double *)(_EBX + 248); /*0x511a40*/
    *(double *)(_EBX + 248) = INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), (unsigned char *)(aBuildtime), v20); /*0x511a56 G57c4 x87c4: merged fstp qword [ebx+0F8h]@0x511a61*/
    v22 = *(unsigned char *)(_EBX + 421); /*0x511a5b*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite((INIClass *)((int *)v4), (unsigned __int8 *)(_EBX + 36), (unsigned char *)(aMultiplay), v22); /*0x511a70*/
    v79 = *(unsigned char *)(_EBX + 422); /*0x511a7d*/
    *(unsigned char *)(_EBX + 421) = Bool_Overwrite; /*0x511a84*/
    *(unsigned char *)(_EBX + 422) = INIClass::ReadBool_Overwrite((INIClass *)((int *)v4), (unsigned __int8 *)(_EBX + 36), (unsigned char *)(aMultiplaypassi), v79); /*0x511a8f*/
    v25 = INIClass::ReadBool_Overwrite((INIClass *)((int *)v4), (unsigned __int8 *)(_EBX + 36), (unsigned char *)(aWallowner), *(unsigned char *)(_EBX + 423)); /*0x511aa4*/
    v26 = *(unsigned char *)(_EBX + 424); /*0x511aa9*/
    *(unsigned char *)(_EBX + 423) = v25; /*0x511aaf*/
    v27 = INIClass::ReadBool_Overwrite((INIClass *)((int *)v4), (unsigned __int8 *)(_EBX + 36), (unsigned char *)(aSmartai), v26); /*0x511abe*/
    v60 = (double)*(float *)(_EBX + 256); /*0x511ac3 G57c4 x87c4: fld dword [ebx+100h] + fstp var slot@0x511ad4*/
    *(unsigned char *)(_EBX + 424) = v27; /*0x511ace*/
    *(float *)(_EBX + 256) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aArmorinfantrym, v60); /*0x511add G57c4 x87c4: merged fstp dword [ebx+100h]@0x511ae2*/
    v61 = (double)*(float *)(_EBX + 260); /*0x511ae8 G57c4 x87c4: fld dword [ebx+104h] + fstp var slot@*/
    *(float *)(_EBX + 260) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aArmorunitsmult, v61); /*0x511afc G57c4 x87c4: merged fstp dword [ebx+104h]@0x511b01*/
    v62 = (double)*(float *)(_EBX + 264); /*0x511b07 G57c4 x87c4: fld dword [ebx+108h] + fstp var slot@*/
    *(float *)(_EBX + 264) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aArmoraircraftm, v62); /*0x511b1b G57c4 x87c4: merged fstp dword [ebx+108h]@0x511b20*/
    v63 = (double)*(float *)(_EBX + 268); /*0x511b26 G57c4 x87c4: fld dword [ebx+10Ch] + fstp var slot@*/
    *(float *)(_EBX + 268) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aArmorbuildings, v63); /*0x511b3a G57c4 x87c4: merged fstp dword [ebx+10Ch]@0x511b3f*/
    v64 = (double)*(float *)(_EBX + 272); /*0x511b45 G57c4 x87c4: fld dword [ebx+110h] + fstp var slot@*/
    *(float *)(_EBX + 272) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aArmordefensesm, v64); /*0x511b59 G57c4 x87c4: merged fstp dword [ebx+110h]@0x511b5e*/
    v65 = (double)*(float *)(_EBX + 276); /*0x511b64 G57c4 x87c4: fld dword [ebx+114h] + fstp var slot@*/
    *(float *)(_EBX + 276) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aCostinfantrymu, v65); /*0x511b78 G57c4 x87c4: merged fstp dword [ebx+114h]@0x511b7d*/
    v66 = (double)*(float *)(_EBX + 280); /*0x511b83 G57c4 x87c4: fld dword [ebx+118h] + fstp var slot@*/
    *(float *)(_EBX + 280) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aCostunitsmult, v66); /*0x511b97 G57c4 x87c4: merged fstp dword [ebx+118h]@0x511b9c*/
    v67 = (double)*(float *)(_EBX + 284); /*0x511ba2 G57c4 x87c4: fld dword [ebx+11Ch] + fstp var slot@*/
    *(float *)(_EBX + 284) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aCostaircraftmu, v67); /*0x511bb6 G57c4 x87c4: merged fstp dword [ebx+11Ch]@0x511bbb*/
    v68 = (double)*(float *)(_EBX + 288); /*0x511bc1 G57c4 x87c4: fld dword [ebx+120h] + fstp var slot@*/
    *(float *)(_EBX + 288) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aCostbuildingsm, v68); /*0x511bd5 G57c4 x87c4: merged fstp dword [ebx+120h]@0x511bda*/
    v69 = (double)*(float *)(_EBX + 292); /*0x511be0 G57c4 x87c4: fld dword [ebx+124h] + fstp var slot@*/
    *(float *)(_EBX + 292) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aCostdefensesmu, v69); /*0x511bf4 G57c4 x87c4: merged fstp dword [ebx+124h]@0x511bf9*/
    v70 = (double)*(float *)(_EBX + 296); /*0x511bff G57c4 x87c4: fld dword [ebx+128h] + fstp var slot@*/
    *(float *)(_EBX + 296) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aSpeedinfantrym, v70); /*0x511c13 G57c4 x87c4: merged fstp dword [ebx+128h]@0x511c18*/
    v71 = (double)*(float *)(_EBX + 300); /*0x511c1e G57c4 x87c4: fld dword [ebx+12Ch] + fstp var slot@*/
    *(float *)(_EBX + 300) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aSpeedunitsmult, v71); /*0x511c32 G57c4 x87c4: merged fstp dword [ebx+12Ch]@0x511c37*/
    v72 = (double)*(float *)(_EBX + 304); /*0x511c3d G57c4 x87c4: fld dword [ebx+130h] + fstp var slot@*/
    *(float *)(_EBX + 304) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aSpeedaircraftm, v72); /*0x511c51 G57c4 x87c4: merged fstp dword [ebx+130h]@0x511c56*/
    v73 = (double)*(float *)(_EBX + 308); /*0x511c5c G57c4 x87c4: fld dword [ebx+134h] + fstp var slot@*/
    *(float *)(_EBX + 308) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aBuildtimeinfan, v73); /*0x511c70 G57c4 x87c4: merged fstp dword [ebx+134h]@0x511c75*/
    v74 = (double)*(float *)(_EBX + 312); /*0x511c7b G57c4 x87c4: fld dword [ebx+138h] + fstp var slot@*/
    *(float *)(_EBX + 312) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aBuildtimeunits, v74); /*0x511c8f G57c4 x87c4: merged fstp dword [ebx+138h]@0x511c94*/
    v75 = (double)*(float *)(_EBX + 316); /*0x511c9a G57c4 x87c4: fld dword [ebx+13Ch] + fstp var slot@*/
    *(float *)(_EBX + 316) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aBuildtimeaircr, v75); /*0x511cae G57c4 x87c4: merged fstp dword [ebx+13Ch]@0x511cb3*/
    v76 = (double)*(float *)(_EBX + 320); /*0x511cb9 G57c4 x87c4: fld dword [ebx+140h] + fstp var slot@*/
    *(float *)(_EBX + 320) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aBuildtimebuild, v76); /*0x511ccd G57c4 x87c4: merged fstp dword [ebx+140h]@0x511cd2*/
    v77 = (double)*(float *)(_EBX + 324); /*0x511cd8 G57c4 x87c4: fld dword [ebx+144h] + fstp var slot@*/
    *(float *)(_EBX + 324) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aBuildtimedefen, v77); /*0x511cec G57c4 x87c4: merged fstp dword [ebx+144h]@0x511cf1*/
    v78 = (double)*(float *)(_EBX + 328); /*0x511cf7 G57c4 x87c4: fld dword [ebx+148h] + fstp var slot@*/
    *(float *)(_EBX + 328) = (float)INIClass::ReadDouble_Overwrite((INIClass *)((double *)v4), (unsigned __int8 *)(_EBX + 36), aIncomemult, v78); /*0x511d0b G57c4 x87c4: merged fstp dword [ebx+148h]@0x511d10*/
    if ( INIClass::GetString( /*0x511d2d*/
           (INIClass *)v4,
           (unsigned __int8 *)(_EBX + 36),
           aVeteraninfantr,
           &g_INI_DefaultBuffer,
           String,
           128) )
    {
      InfantryTypeVector::Construct(&v82, 0, 0); /*0x511d42*/
      *(unsigned int *)v82.__pad_0 = (unsigned int)(void*)&TypeList_InfantryTypeClass_const___vftable; /*0x511d56*/
      for ( i = strtok(String, (char *)&::Delimiter); i; i = strtok(0, (char *)&::Delimiter) ) /*0x511d64*/
      {
        if ( !*i ) /*0x511d66*/
          break; /*0x511d69*/
        v82.InfantryTypeVector_field_0x1C = KeywordType::FindOrCreate2(i); /*0x511d74*/
        if ( v82.InfantryTypeVector_field_0x1C ) /*0x511d78*/
          InfantryTypeVector::Add(&v82, &v82.InfantryTypeVector_field_0x1C); /*0x511d83*/
      }
      ((HouseTypeClass *)&Destination)->readAllowedUnits( (InfantryTypeClass *)(&v82)); /*0x511da4*/
      *(unsigned int *)Destination.__pad_0 = (unsigned int)(void*)&TypeList_InfantryTypeClass_const___vftable; /*0x511dad*/
      *(unsigned int *)v82.__pad_0 = (unsigned int)(void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x511db1*/
      ((Vector *)(_VectorClass_PBVInfantryTypeClass *)&v82)->Cleanup(); /*0x511db9*/
    }
    else
    {
      ((HouseTypeClass *)&Destination)->readAllowedUnits( (InfantryTypeClass *)((unsigned int *)(_EBX + 332))); /*0x511dcb*/
      *(unsigned int *)Destination.__pad_0 = (unsigned int)(void*)&TypeList_InfantryTypeClass_const___vftable; /*0x511dd0*/
    }
    ((HouseTypeClass *)(_EBX + 332))->readStartInfantry( (unsigned int *)(&Destination)); /*0x511de5*/
    UnitTypeVector_field_0x10 = Destination.UnitTypeVector_field_0x10; /*0x511dee*/
    UnitTypeVector_field_0x18 = Destination.UnitTypeVector_field_0x18; /*0x511df2*/
    *(unsigned int *)(_EBX + 352) = Destination.UnitTypeVector_field_0x14; /*0x511df6*/
    UnitTypeVector_field_0x04 = (void *)Destination.UnitTypeVector_field_0x04; /*0x511df9*/
    *(unsigned int *)(_EBX + 348) = UnitTypeVector_field_0x10; /*0x511dfd*/
    *(unsigned int *)(_EBX + 356) = UnitTypeVector_field_0x18; /*0x511e02*/
    *(unsigned int *)Destination.__pad_0 = (unsigned int)(void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x511e05*/
    if ( UnitTypeVector_field_0x04 && IDA_BYTE1(Destination.UnitTypeVector_field_0x0C) ) /*0x511e15*/
      RA2_OPDEL(UnitTypeVector_field_0x04); /*0x511e18*/
    if ( INIClass::GetString( /*0x511e3a*/
           (INIClass *)v4,
           (unsigned __int8 *)(_EBX + 36),
           aVeteranunits,
           &g_INI_DefaultBuffer,
           String,
           128) )
    {
      UnitTypeVector::Construct(&Destination, 0, 0); /*0x511e4f*/
      *(unsigned int *)Destination.__pad_0 = (unsigned int)(void*)&TypeList_UnitTypeClass_const___vftable; /*0x511e5e*/
      for ( j = strtok(String, (char *)&::Delimiter); j; j = strtok(0, (char *)&::Delimiter) ) /*0x511e70*/
      {
        if ( !*j ) /*0x511e72*/
          break; /*0x511e75*/
        Alt = BuildingTypeClass::FindOrCreateAlt( (INIClass *)(j)); /*0x511e7e*/
        if ( Alt /*0x511eb1*/
          && (Destination.UnitTypeVector_field_0x10 < Destination.UnitTypeVector_field_0x08
           || (IDA_BYTE1(Destination.UnitTypeVector_field_0x0C) || !Destination.UnitTypeVector_field_0x08)
           && Destination.UnitTypeVector_field_0x14 > 0
&& (*(unsigned __int8 (**)(UnitTypeVector *, int, unsigned int))(*(unsigned int *)Destination.__pad_0 + 8))( (UnitTypeVector *)(&Destination), Destination.UnitTypeVector_field_0x08 + Destination.UnitTypeVector_field_0x14, 0)) )



        {
          v34 = Destination.UnitTypeVector_field_0x10++; /*0x511ebc*/
          *(unsigned int *)(Destination.UnitTypeVector_field_0x04 + 4 * v34) = Alt; /*0x511ec7*/
        }
      }
      TypeList::CopyConstructor((TypeList *)&v82, &Destination); /*0x511ee6*/
      *(unsigned int *)Destination.__pad_0 = (unsigned int)(void*)&VectorClass_UnitTypeClass_const___vftable; /*0x511eef*/
      ((Vector *)(_VectorClass_PBVUnitTypeClass *)&Destination)->Destructor(); /*0x511ef7*/
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
    *(unsigned int *)v82.__pad_0 = (unsigned int)(void*)&VectorClass_UnitTypeClass_const___vftable; /*0x511f3b*/
    if ( InfantryTypeVector_field_0x04 && IDA_BYTE1(v82.InfantryTypeVector_field_0x0C) ) /*0x511f4b*/
      RA2_OPDEL(InfantryTypeVector_field_0x04); /*0x511f4e*/
    if ( INIClass::GetString( /*0x511f70*/
           (INIClass *)v4,
           (unsigned __int8 *)(_EBX + 36),
           aVeteranaircraf,
           &g_INI_DefaultBuffer,
           String,
           128) )
    {
      ((HouseTypeClass *)&Destination)->readDefaultAlly( 0, 0); /*0x511f85*/
      *(unsigned int *)Destination.__pad_0 = (unsigned int)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x511f94*/
      for ( k = strtok(String, (char *)&::Delimiter); k; k = strtok(0, (char *)&::Delimiter) ) /*0x511fa6*/
      {
        if ( !*k ) /*0x511fa8*/
          break; /*0x511fab*/
        v39 = KeywordClass::FindOrCreate(k); /*0x511fb4*/
        if ( v39 /*0x511fe7*/
          && (Destination.UnitTypeVector_field_0x10 < Destination.UnitTypeVector_field_0x08
           || (IDA_BYTE1(Destination.UnitTypeVector_field_0x0C) || !Destination.UnitTypeVector_field_0x08)
           && Destination.UnitTypeVector_field_0x14 > 0
&& (*(unsigned __int8 (**)(UnitTypeVector *, int, unsigned int))(*(unsigned int *)Destination.__pad_0 + 8))( (UnitTypeVector *)(&Destination), Destination.UnitTypeVector_field_0x08 + Destination.UnitTypeVector_field_0x14, 0)) )



        {
          v40 = Destination.UnitTypeVector_field_0x10++; /*0x511ff2*/
          *(unsigned int *)(Destination.UnitTypeVector_field_0x04 + 4 * v40) = v39; /*0x511ffd*/
        }
      }
      ((HouseTypeClass *)&v82)->readParaDropTypes( (VectorClass_flat *)(&Destination)); /*0x51201c*/
      *(unsigned int *)Destination.__pad_0 = (unsigned int)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x512025*/
      VectorClass::ClearAndFree4((int)&Destination); /*0x51202d*/
    }
    else
    {
      ((HouseTypeClass *)&v82)->readParaDropTypes( (VectorClass_flat *)((unsigned int *)(_EBX + 388))); /*0x51203f*/
    }
    ((HouseTypeClass *)(_EBX + 388))->readBaseDefense( (VectorClass_flat *)(&v82)); /*0x512051*/
    v41 = v82.InfantryTypeVector_field_0x10; /*0x51205a*/
    v42 = v82.InfantryTypeVector_field_0x18; /*0x51205e*/
    *(unsigned int *)(_EBX + 408) = v82.InfantryTypeVector_field_0x14; /*0x512062*/
    v43 = (void *)v82.InfantryTypeVector_field_0x04; /*0x512065*/
    *(unsigned int *)(_EBX + 404) = v41; /*0x512069*/
    *(unsigned int *)(_EBX + 412) = v42; /*0x51206e*/
    *(unsigned int *)v82.__pad_0 = (unsigned int)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x512071*/
    if ( v43 && IDA_BYTE1(v82.InfantryTypeVector_field_0x0C) ) /*0x512081*/
      RA2_OPDEL(v43); /*0x512084*/
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
        v47 = *(unsigned int *)(*(unsigned int *)((char *)&FootClass_Array + 889) + 4 * v44); /*0x5120c2*/
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
    return (gamemd::AbstractClass *)(1); /*0x512151*/
}
}
// 0x512170
namespace gamemd {
AbstractClass * * HouseTypeClass::ProcessPower(int * a2)
{
    int v3; // edx
    int v4; // eax

    ((AbstractTypeClass *)this)->ProcessPower( (int *)(a2)); /*0x51217a*/
    Power::TimerProcess((int)(this->arrayIndex2)); /*0x512188*/
    Power::TimerProcess(this->sideIndex); /*0x512196*/
    Power::TimerProcess(this->colorSchemeIndex); /*0x5121a4*/
    ((Checksummer *)a2)->Add_double( (&this->firepowerMult)[0], (&this->firepowerMult)[1]); /*0x5121b9*/
    ((Checksummer *)a2)->Add_double( (&this->groundspeedMult)[0], (&this->groundspeedMult)[1]); /*0x5121ce*/
    ((Checksummer *)a2)->Add_double( (&this->airspeedMult)[0], (&this->airspeedMult)[1]); /*0x5121e3*/
    ((Checksummer *)a2)->Add_double( (&this->armorMult)[0], (&this->armorMult)[1]); /*0x5121f8*/
    ((Checksummer *)a2)->Add_double( (&this->rofMult)[0], (&this->rofMult)[1]); /*0x51220d*/
    ((Checksummer *)a2)->Add_double( (&this->costMult)[0], (&this->costMult)[1]); /*0x512222*/
    ((Checksummer *)a2)->Add_double( (&this->buildtimeMult)[0], (&this->buildtimeMult)[1]); /*0x512237*/
    Checksummer::Add_Buffer( (Checksummer *)a2, (unsigned char *)((unsigned char)((unsigned __int8 *)&this->__pad_16D[51])), strlen( (const char *)(&this->__pad_16D[51]))); /*0x512252*/
    IDA_LOBYTE(v3) = this->__pad_16D[55]; /*0x512257*/
    v4 = ((Power *)a2)->FinalizeDrain( v3); /*0x512260*/
    IDA_LOBYTE(v4) = this->__pad_16D[56]; /*0x512265*/
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

    v2 = this; /*0x512295*/
    veteranInfantry = (int *)(this->veteranInfantry); /*0x51229f*/
    (*(void (**)(int *))(this->veteranInfantry[0] + 12))( (int *)(this->veteranInfantry)); /*0x5122a7*/
    (*(void (**)(char *))(*(unsigned int *)&v2->prefix + 12))( (char *)(&v2->prefix)); /*0x5122b8*/
    (*(void (**)(char *))(*(unsigned int *)&v2->__pad_16D[23] + 12))( (char *)(&v2->__pad_16D[23])); /*0x5122c7*/
    v4 = a2; /*0x5122ca*/
    result = AbstractClass::SaveLoad_Prefix_0( (AbstractClass *)(v2), (AbstractClass *)(a2)); /*0x5122d0*/
    if ( result >= 0 ) /*0x5122d7*/
    {
      if ( v2 ) /*0x5122df*/
        ((HouseTypeClass *)v2)->loadVeteranWeapons( (HouseTypeClass *)((int)&this)); /*0x5122e8*/
      if ( veteranInfantry ) /*0x5122ef*/
      {
        InfantryTypeVector::Construct((InfantryTypeVector *)veteranInfantry, 0, 0); /*0x5122f7*/
        *veteranInfantry = (int)(void*)&TypeList_InfantryTypeClass_const___vftable; /*0x5122fc*/
      }
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &a2, 4, 0);  /*0x51230e*/
      for ( this = 0; (int)this < a2; this = (HouseTypeClass *)((char *)this + 1) ) /*0x51231f*/
      {
        (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &v11, 4, 0);  /*0x51232d*/
        InfantryTypeVector::Add((InfantryTypeVector *)veteranInfantry, &v11); /*0x512337*/
      }
      if ( v2 != (HouseTypeClass *)-360 ) /*0x51234f*/
      {
        UnitTypeVector::Construct((UnitTypeVector *)&v2->prefix, 0, 0); /*0x512357*/
        *(unsigned int *)&v2->prefix = (unsigned int)(void*)&TypeList_UnitTypeClass_const___vftable; /*0x51235c*/
      }
      (*(void (__stdcall **)(int, HouseTypeClass **, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &this, 4, 0);  /*0x51236f*/
      for ( i = 0; i < (unsigned int *)((int)this); ++i ) /*0x51237a*/
      {
        (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &a2, 4, 0);  /*0x512388*/
        VectorClass::PushBack((VectorClass *)&v2->prefix, &a2); /*0x512392*/
      }
      if ( v2 != (HouseTypeClass *)-388 ) /*0x5123a6*/
        ((HouseTypeClass *)&v2->__pad_16D[23])->readStartUnit(); /*0x5123aa*/
      (*(void (__stdcall **)(int, HouseTypeClass **, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &this, 4, 0);  /*0x5123bb*/
      for ( j = 0; j < (int)this; ++j ) /*0x5123c6*/
      {
        (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &a2, 4, 0);  /*0x5123d4*/
        ((HouseTypeClass *)&v2->__pad_16D[23])->readPowerPlants( (TypeList_flat *)(&a2)); /*0x5123de*/
      }
      for ( k = 0; k  <  (int)(v2->veteranAircraft[0]); ++k ) /*0x5123f4*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2->veteranInfantryCount + 4 * k)); /*0x512405*/
      for ( m = 0; m < *(unsigned int *)&v2->__pad_16D[11]; ++m ) /*0x51241f*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&v2->smartAi + 4 * m)); /*0x512430*/
      for ( n = 0; n < *(unsigned int *)&v2->__pad_16D[39]; ++n ) /*0x51244a*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)&v2->__pad_16D[27] + 4 * n)); /*0x51245b*/
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

    result = AbstractClass::SaveLoad_Prefix( (ObjectTypeClass *)((int *)aP0), (ObjectTypeClass *)(a2), (ObjectTypeClass *)((int)a3)); /*0x512491*/
    if ( result >= 0 ) /*0x512498*/
    {
      v7 = *a2; /*0x5124a4*/
      a3 = (int *)aP0->veteranAircraft[0]; /*0x5124b1*/
      (*(void (__stdcall **)(int *, int **, int, unsigned int, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x5124b5*/
      for ( i = 0; i < a4; ++i ) /*0x5124c0*/
        (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->veteranInfantryCount + 4 * i, 4, 0); /*0x5124d3*/
      v9 = *a2; /*0x5124e3*/
      a4 = *(unsigned int *)&aP0->__pad_16D[11]; /*0x5124ef*/
      (*(void (__stdcall **)(int *, int *, int, unsigned int))(v9 + 16))(a2, &a4, 4, 0); /*0x5124f3*/
      for ( j = 0; j < a4; ++j ) /*0x5124fe*/
        (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&aP0->smartAi + 4 * j, 4, 0); /*0x512511*/
      v11 = *a2; /*0x512521*/
      a4 = *(unsigned int *)&aP0->__pad_16D[39]; /*0x51252d*/
      (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x512531*/
      for ( k = 0; k < (int)a3; ++k ) /*0x51253c*/
        (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&aP0->__pad_16D[27] + 4 * k, 4, 0); /*0x51254f*/
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
      return &this->vtable1; /*0x51337a*/
    (*((void (**)(HouseTypeClass *))this->vtable1 + 3))(this); /*0x51337e*/
    v3 = (void *)a2[2]; /*0x513381*/
    this->vtable3 = v3; /*0x513386*/
    if ( !v3 ) /*0x513389*/
    {
      this->vtable2 = 0; /*0x5133ca*/
      IDA_BYTE1(this->vtable4) = 0; /*0x5133d1*/
      return &this->vtable1; /*0x5133d5*/
    }
    v4 = (void *)RA2_OPNEW(4 * (unsigned int)v3); /*0x513393*/
    this->vtable2 = v4; /*0x51339b*/
    if ( !v4 ) /*0x5133a0*/
      return &this->vtable1; /*0x5133a0*/
    vtable2 = *(unsigned int *)&this->vtable3; /*0x5133a2*/
    v6 = 0; /*0x5133a5*/
    IDA_BYTE1(this->vtable4) = 1; /*0x5133a9*/
    if ( (int)vtable2 <= 0 ) /*0x5133ad*/
      return &this->vtable1; /*0x5133ad*/
    do /*0x5133c1*/
    {
      *((unsigned int *)this->vtable3 + v6) = *(unsigned int *)(((unsigned int *)a2)[1] + 4 * v6); /*0x5133b8*/
      ++v6; /*0x5133be*/
    }
    while ( v6 < (int)this->vtable3 ); /*0x5133c1*/
    return &this->vtable1; /*0x5133c5*/
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

    if ( INIClass::GetString((INIClass *)a4, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x67b91c*/
    {
      ((AircraftTypeVector *)((int)(&v17)))->Constructor((int)((AircraftTypeVector *)((int)(&v17))), 0, 0); /*0x67b931*/
      v22 = 10; /*0x67b93a*/
      v21 = 0; /*0x67b948*/
      v17 = (AircraftTypeVector)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x67b94c*/
      for ( i = strtok(String, (char *)&::Delimiter); i; i = strtok(0, (char *)&::Delimiter) ) /*0x67b95e*/
      {
        if ( !*i ) /*0x67b960*/
          break; /*0x67b962*/
        v7 = KeywordClass::FindOrCreate(i); /*0x67b96b*/
        if ( v7 /*0x67b99b*/
          && (v21 < v19
           || (v20 || !v19)
           && v22 > 0
&& (*(unsigned __int8 (**)(AircraftTypeVector *, int, unsigned int))(*(unsigned int *)&v17 + 8))( (AircraftTypeVector *)(&v17), v22 + v19, 0)) )



        {
          v8 = v21++; /*0x67b9a6*/
          *((unsigned int *)Block + v8) = v7; /*0x67b9b1*/
        }
      }
      *(unsigned int *)(a1 + 4) = 0; /*0x67b9cd*/
      *(unsigned int *)(a1 + 8) = 0; /*0x67b9d0*/
      *(unsigned char *)(a1 + 12) = 1; /*0x67b9d3*/
      *(unsigned char *)(a1 + 13) = 0; /*0x67b9d7*/
      *(unsigned int *)a1 = (unsigned int)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x67b9da*/
      ((HouseTypeClass *)a1)->readBaseDefense( (VectorClass_flat *)(&v17)); /*0x67b9e0*/
      *(unsigned int *)a1 = (unsigned int)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x67b9e5*/
      v17 = (AircraftTypeVector)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x67b9eb*/
      v9 = v22; /*0x67b9f7*/
      *(unsigned int *)(a1 + 16) = v21; /*0x67b9fb*/
      v10 = Block; /*0x67b9fe*/
      v11 = Block == 0; /*0x67ba02*/
      *(unsigned int *)(a1 + 20) = v9; /*0x67ba04*/
      if ( !v11 && v20 ) /*0x67ba11*/
      {
        RA2_OPDEL(v10); /*0x67ba18*/
        return (void *)a1; /*0x67ba2b*/
      }
    }
    else
    {
      *(unsigned int *)(a1 + 4) = 0; /*0x67ba39*/
      *(unsigned int *)(a1 + 8) = 0; /*0x67ba3c*/
      *(unsigned char *)(a1 + 12) = 1; /*0x67ba3f*/
      *(unsigned char *)(a1 + 13) = 0; /*0x67ba43*/
      *(unsigned int *)a1 = (unsigned int)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x67ba46*/
      if ( (unsigned int *)a1 != a5 ) /*0x67ba4c*/
      {
        VectorClass::ClearAndFree4(a1); /*0x67ba50*/
        v13 = a5[2]; /*0x67ba56*/
        *(unsigned int *)(a1 + 8) = v13; /*0x67ba5b*/
        if ( v13 ) /*0x67ba5e*/
        {
          v14 = RA2_OPNEW(4 * v13); /*0x67ba68*/
          *(unsigned int *)(a1 + 4) = v14; /*0x67ba72*/
          if ( v14 ) /*0x67ba75*/
          {
            v15 = *(unsigned int *)(a1 + 8); /*0x67ba77*/
            v16 = 0; /*0x67ba7a*/
            *(unsigned char *)(a1 + 13) = 1; /*0x67ba7e*/
            if ( v15 > 0 ) /*0x67ba82*/
            {
              do /*0x67ba96*/
              {
                *(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v16) = *(unsigned int *)(a5[1] + 4 * v16); /*0x67ba8d*/
                ++v16; /*0x67ba93*/
              }
              while ( v16 < *(unsigned int *)(a1 + 8) ); /*0x67ba96*/
            }
          }
        }
        else
        {
          *(unsigned int *)(a1 + 4) = 0; /*0x67ba9a*/
          *(unsigned char *)(a1 + 13) = 0; /*0x67ba9d*/
        }
      }
      *(unsigned int *)(a1 + 16) = a5[4]; /*0x67baa3*/
      *(unsigned int *)(a1 + 20) = a5[5]; /*0x67baa9*/
      *(unsigned int *)a1 = (unsigned int)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x67baac*/
    }
    return (void *)a1; /*0x67ba22*/
}
}
// 0x4756F0
namespace gamemd {
int HouseTypeClass::loadCountryData(unsigned char * a2, unsigned char * a3, int a4)
{
    int result; // eax
    SideClass *v5; // eax
    unsigned int *v6; // eax
    int v7; // ecx
    unsigned int *i; // edx
    char Destination[128]; // [esp+0h] [ebp-80h] BYREF

    if ( !INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475712*/
      return a4; /*0x475782*/
    result = ((HouseTypeClass *)Destination)->Find(); /*0x47571f*/
    if ( result == -1 ) /*0x475727*/
    {
      v5 = (SideClass *)RA2_OPNEW(0xB4u); /*0x47572e*/
      if ( v5 ) /*0x475738*/
        v6 = (unsigned int *)SideClass::Construct(v5, Destination); /*0x475741*/
      else
        v6 = (unsigned int *)(0); /*0x475748*/
      v7 = 0; /*0x475751*/
      if ( *(unsigned int *)((char *)&FootClass_Array + 889) <= 0 ) /*0x475755*/
      {
        return -1; /*0x475769*/
      }
      else
      {
        for ( i = (unsigned int *)*(unsigned int *)((char *)&FootClass_Array + 889); (unsigned int *)*i != v6; ++i ) /*0x475757*/
        {
          if ( ++v7 >= *(unsigned int *)((char *)&FootClass_Array + 889) ) /*0x475767*/
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
      *a3 = (unsigned int)this;
    if ( !memcmp(a2, &IID_IPersist, 0x10u) ) /*0x5125e5*/
      *a3 = (unsigned int)this;
    if ( !memcmp(a2, &IID_IPersistStream, 0x10u) ) /*0x5125f9*/
      *a3 = (unsigned int)this;
    if ( !memcmp(a2, &IID_IRTTITypeInfo, 0x10u) ) /*0x51260e*/
    {
      if ( this ) /*0x512616*/
        p_vtable1 = &this->vtable2; /*0x512618*/
      else
        p_vtable1 = (void **)(0); /*0x51261d*/
      *a3 = (unsigned int)p_vtable1; /*0x51261f*/
    }
    if ( !*a3 ) /*0x512621*/
      return -2147467262; /*0x512626*/
    (*((void (__stdcall **)(HouseTypeClass *))this->vtable1 + 1))(this); /*0x512632*/
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

    this->vtable1 = (void*)&HouseTypeClass_vftable; /*0x512766*/
    ((void **)this)[1] = (unsigned int)(void*)&HouseTypeClass_vftable;
    ((void **)this)[2] = (unsigned int)(void*)&HouseTypeClass_vftable;
    ((void **)this)[3] = (unsigned int)(void*)&HouseTypeClass_vftable;
    AbstractClass::AnnounceExpiredPointer(&this->vtable1, 1); /*0x512781*/
    v8 = this; /*0x512796*/
    v3 = (*(int (**)(unsigned int *, HouseTypeClass **))(dword_A83C98 + 16))( (unsigned int *)(&dword_A83C98), (HouseTypeClass **)(&v8)); /*0x51279a*/
    if ( v3 != -1 && v3 < dword_A83CA8 && v3 < --dword_A83CA8 ) /*0x5127b5*/
    {
      do /*0x5127cd*/
      {
        ++v3; /*0x5127bd*/
        *((unsigned int *)dword_A83C9C + v3 - 1) = *((unsigned int *)dword_A83C9C + v3); /*0x5127c1*/
      }
      while ( v3 < dword_A83CA8 ); /*0x5127cd*/
    }
    v4 = *(void **)&this->__pad_16D[27]; /*0x5127cf*/
    *(unsigned int *)&this->__pad_16D[23] = (unsigned int)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x5127d8*/
    if ( v4 && this->__pad_16D[36] ) /*0x5127e6*/
    {
      RA2_OPDEL(v4); /*0x5127ef*/
      *(unsigned int *)&this->__pad_16D[27] = 0; /*0x5127f7*/
    }
    this->__pad_16D[36] = 0; /*0x5127fd*/
    *(unsigned int *)&this->__pad_16D[31] = 0; /*0x512803*/
    v5 = *(void **)&this->smartAi; /*0x512809*/
    *(unsigned int *)&this->prefix = (unsigned int)(void*)&VectorClass_UnitTypeClass_const___vftable; /*0x51280f*/
    if ( v5 && this->__pad_16D[8] ) /*0x51281d*/
    {
      RA2_OPDEL(v5); /*0x512826*/
      *(unsigned int *)&this->smartAi = 0; /*0x51282e*/
    }
    this->__pad_16D[8] = 0; /*0x512834*/
    *(unsigned int *)&this->__pad_16D[3] = 0; /*0x51283a*/
    veteranInfantryCount = (void *)this->veteranInfantryCount; /*0x512840*/
    this->veteranInfantry[0] = (int)(void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x512846*/
    if ( veteranInfantryCount && IDA_BYTE1(this->veteranUnitsCount) ) /*0x512854*/
    {
      RA2_OPDEL(veteranInfantryCount); /*0x51285d*/
      this->veteranInfantryCount = 0; /*0x512865*/
    }
    IDA_BYTE1(this->veteranUnitsCount) = 0; /*0x51286d*/
    this->veteranUnits[0] = 0; /*0x512873*/
    ((AbstractTypeClass *)this)->Dtor(); /*0x512879*/
    if ( (a2 & 1) != 0 ) /*0x512885*/
      RA2_OPDEL(this); /*0x512888*/
    return &this->vtable1; /*0x512892*/
}
} // namespace gamemd

// 0x512900
namespace gamemd {
wchar_t * HouseTypeClass_36::ddtor(void *a1_1)
{
    void *v2; // eax

    v2 = *(void **)&this->m_1[3]; /*0x512906*/
    this->m_10 = 0; /*0x512909*/
    if ( v2 && IDA_BYTE1(this->m_C) ) /*0x512910*/
    {
      RA2_OPDEL(v2); /*0x512916*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x51291e*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x512921*/
    this->m_8 = 0; /*0x512924*/
}
} // namespace gamemd

// 0x512930
namespace gamemd {
unsigned int HouseTypeClass_36::Write(int a2)
{
    if ( IDA_LOBYTE(this->m_C) ) /*0x512930*/
      return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x512945*/
    else
      return 0; /*0x512937*/
}
} // namespace gamemd

// 0x512950
namespace gamemd {
int HouseTypeClass_36::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x51295a*/

}
} // namespace gamemd

// 0x512960
namespace gamemd {
unsigned int * HouseTypeClass::readStartUnit()
{
    this->vtable2 = 0; /*0x512964*/
    this->vtable3 = 0; /*0x512967*/
    IDA_LOBYTE(this->vtable4) = 1; /*0x51296a*/
    IDA_BYTE1(this->vtable4) = 0; /*0x51296e*/
    *(unsigned int *)this->abstractFlags = 10; /*0x512971*/
    *(unsigned int *)this->uniqueId = 0; /*0x512978*/
    this->vtable1 = (void*)&TypeList_AircraftTypeClass_const___vftable; /*0x51297b*/
    return &this->vtable1; /*0x512981*/
}
} // namespace gamemd

// 0x512990
namespace gamemd {
wchar_t * HouseTypeClass_28::ddtor()
{
    void *v2; // eax

    v2 = *(void **)&this->m_1[3]; /*0x512996*/
    this->m_10 = 0; /*0x512999*/
    if ( v2 && IDA_BYTE1(this->m_C) ) /*0x5129a0*/
    {
      RA2_OPDEL(v2); /*0x5129a6*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x5129ae*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x5129b1*/
    this->m_8 = 0; /*0x5129b4*/
}
} // namespace gamemd

// 0x5129C0
namespace gamemd {
unsigned int HouseTypeClass_28::Write(int a2)
{
    if ( IDA_LOBYTE(this->m_C) ) /*0x5129c0*/
      return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x5129d5*/
    else
      return 0; /*0x5129c7*/
}
} // namespace gamemd

// 0x5129E0
namespace gamemd {
int HouseTypeClass_28::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5129ea*/

}
} // namespace gamemd

// 0x512A40
namespace gamemd {
TypeList_flat * HouseTypeClass_36::QueryInterface(unsigned int * Block, char a2)
{
    void *v3; // eax

    v3 = (void *)*((unsigned int *)this + 1); /*0x512a43*/
    this->vfptr = (void*)&VectorClass_UnitTypeClass_const___vftable; /*0x512a46*/
    if ( v3 && *((unsigned char *)this + 13) ) /*0x512a50*/
    {
      RA2_OPDEL(v3); /*0x512a58*/
      *((unsigned int *)this + 1) = 0; /*0x512a60*/
    }
    *((unsigned char *)this + 13) = 0; /*0x512a6b*/
    *((unsigned int *)this + 2) = 0; /*0x512a71*/
    if ( (a2 & 1) != 0 ) /*0x512a78*/
      RA2_OPDEL(this); /*0x512a7b*/
    return &this->vfptr; /*0x512a85*/
}
} // namespace gamemd

// 0x512A90
namespace gamemd {
TypeList_flat * HouseTypeClass_28::QueryInterface(unsigned int * Block, char a2)
{
    void *v3; // eax

    v3 = (void *)*((unsigned int *)this + 1); /*0x512a93*/
    this->vfptr = (void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x512a96*/
    if ( v3 && *((unsigned char *)this + 13) ) /*0x512aa0*/
    {
      RA2_OPDEL(v3); /*0x512aa8*/
      *((unsigned int *)this + 1) = 0; /*0x512ab0*/
    }
    *((unsigned char *)this + 13) = 0; /*0x512abb*/
    *((unsigned int *)this + 2) = 0; /*0x512ac1*/
    if ( (a2 & 1) != 0 ) /*0x512ac8*/
      RA2_OPDEL(this); /*0x512acb*/
    return &this->vfptr; /*0x512ad5*/
}
} // namespace gamemd

// 0x512B80
namespace gamemd {
VectorClass_flat * HouseTypeClass_36::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    void *v3; // eax

    v3 = *(void **)&this->m_1[3]; /*0x512b83*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x512b86*/
    if ( v3 && IDA_BYTE1(this->m_C) ) /*0x512b90*/
    {
      RA2_OPDEL(v3); /*0x512b98*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x512ba0*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x512bab*/
    this->m_8 = 0; /*0x512bb1*/
    if ( (a2 & 1) != 0 ) /*0x512bb8*/
      RA2_OPDEL(this); /*0x512bbb*/
    return this->__pad_0; /*0x512bc5*/
}
} // namespace gamemd

// 0x512BD0
namespace gamemd {
unsigned int * HouseTypeClass::readStartInfantry(unsigned int * a2)
{
    void *v3; // eax
    void *v4; // eax
    void *vtable2; // ecx
    int v6; // eax

    if ( this == (HouseTypeClass *)a2 ) /*0x512bda*/
      return &this->vtable1; /*0x512bda*/
    (*((void (**)(HouseTypeClass *))this->vtable1 + 3))(this); /*0x512bde*/
    v3 = (void *)a2[2]; /*0x512be1*/
    this->vtable3 = v3; /*0x512be6*/
    if ( !v3 ) /*0x512be9*/
    {
      this->vtable2 = 0; /*0x512c2a*/
      IDA_BYTE1(this->vtable4) = 0; /*0x512c31*/
      return &this->vtable1; /*0x512c35*/
    }
    v4 = (void *)RA2_OPNEW(4 * (unsigned int)v3); /*0x512bf3*/
    this->vtable2 = v4; /*0x512bfb*/
    if ( !v4 ) /*0x512c00*/
      return &this->vtable1; /*0x512c00*/
    vtable2 = this->vtable3; /*0x512c02*/
    v6 = 0; /*0x512c05*/
    IDA_BYTE1(this->vtable4) = 1; /*0x512c09*/
    if ( (int)vtable2 <= 0 ) /*0x512c0d*/
      return &this->vtable1; /*0x512c0d*/
    do /*0x512c21*/
    {
      *((unsigned int *)this->vtable3 + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x512c18*/
      ++v6; /*0x512c1e*/
    }
    while ( v6 < (int)this->vtable3 ); /*0x512c21*/
    return &this->vtable1; /*0x512c25*/
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

    m_8 = this->m_8; /*0x513012*/
    if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x51301d*/
    {
      v3 = 0; /*0x51301f*/
      if ( m_8 <= 0 ) /*0x513023*/
        return 1; /*0x513043*/
      v4 = *(unsigned int **)&this->m_1[3]; /*0x513025*/
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
      IDA_LOBYTE(this->m_C) = 0; /*0x513252*/
      if ( a3 ) /*0x513258*/
        v4 = a3; /*0x51326e*/
      else
        v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x51326a*/
      IDA_LOBYTE(this->m_C) = 1; /*0x513272*/
      if ( !v4 ) /*0x513276*/
        return 0; /*0x5132ea*/
      if ( *(unsigned int *)&this->m_1[3] ) /*0x513278*/
      {
        m_8 = this->m_8; /*0x51327f*/
        if ( a2 < m_8 ) /*0x513284*/
          m_8 = a2; /*0x513286*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x51328c*/
          ++i; /*0x513291*/
        if ( IDA_BYTE1(this->m_C) ) /*0x51329e*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x5132a9*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x5132b1*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)v4; /*0x5132ba*/
      this->m_8 = a2; /*0x5132c2*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x5132c5*/
    }
    else
    {
      (*(void (**)(_DynamicVectorClass_PBVUnitTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5132ce*/
    }
    v7 = this->m_8; /*0x5132d1*/
    if ( v7 < this->m_10 ) /*0x5132d9*/
      this->m_10 = v7; /*0x5132db*/
    return 1; /*0x5132de*/
}
} // namespace gamemd

// 0x513340
namespace gamemd {
int HouseTypeClass_36::Read(unsigned int * a2, void *a2_2)
{
    int m_10; // edx
    int result; // eax
    unsigned int *i; // ecx

    m_10 = this->m_10; /*0x513340*/
    result = 0; /*0x513343*/
    if ( m_10 <= 0 ) /*0x513348*/
      return -1; /*0x51335f*/
    for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x51334e*/
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

    m_8 = this->m_8; /*0x5133e2*/
    if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5133ed*/
    {
      v3 = 0; /*0x5133ef*/
      if ( m_8 <= 0 ) /*0x5133f3*/
        return 1; /*0x513413*/
      v4 = *(unsigned int **)&this->m_1[3]; /*0x5133f5*/
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
      IDA_LOBYTE(this->m_C) = 0; /*0x513436*/
      if ( a3 ) /*0x51343c*/
        v4 = a3; /*0x513452*/
      else
        v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x51344e*/
      IDA_LOBYTE(this->m_C) = 1; /*0x513456*/
      if ( v4 ) /*0x51345a*/
      {
        if ( *(unsigned int *)&this->m_1[3] ) /*0x513465*/
        {
          m_8 = this->m_8; /*0x51346c*/
          if ( a2 < m_8 ) /*0x513471*/
            m_8 = a2; /*0x513473*/
          for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x513479*/
            ++i; /*0x51347e*/
          if ( IDA_BYTE1(this->m_C) ) /*0x51348b*/
          {
            RA2_OPDEL(*(void **)&this->m_1[3]); /*0x513496*/
            *(unsigned int *)&this->m_1[3] = 0; /*0x51349e*/
          }
        }
        *(unsigned int *)&this->m_1[3] = (unsigned int)v4; /*0x5134a7*/
        this->m_8 = a2; /*0x5134af*/
        IDA_BYTE1(this->m_C) = a3 == 0; /*0x5134b2*/
        return 1; /*0x5134b8*/
      }
      else
      {
        return 0; /*0x51345f*/
      }
    }
    else
    {
      (*(void (**)(_VectorClass_PBVAircraftTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5134c2*/
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

    if ( !IDA_LOBYTE(this->m_C) ) /*0x513500*/
      return 0; /*0x513508*/
    m_8 = this->m_8; /*0x51350e*/
    result = 0; /*0x513511*/
    if ( m_8 <= 0 ) /*0x513515*/
      return -1; /*0x51352c*/
    for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x51351b*/
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
    if ( IDA_LOBYTE(this->m_C) ) /*0x513540*/
      return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x513555*/
    else
      return 0; /*0x513547*/
}
} // namespace gamemd

// 0x513560
namespace gamemd {
unsigned int * HouseTypeClass::readDefaultAlly(int a2, int a3)
{
    this->Items = 0; /*0x513569*/
    this->Capacity = (void *)a2; /*0x513570*/
    IDA_LOBYTE(this->IsInitialized) = 1; /*0x513573*/
    IDA_BYTE1(this->IsInitialized) = 0; /*0x513577*/
    this->vtable1 = (void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x51357b*/
    if ( a2 ) /*0x513581*/
    {
      if ( a3 ) /*0x513589*/
      {
        this->Items = (void *)a3; /*0x51358b*/
      }
      else
      {
        this->Items = (void *)RA2_OPNEW(4 * a2); /*0x51359c*/
        IDA_BYTE1(this->IsInitialized) = 1; /*0x51359f*/
      }
    }
    this->vtable1 = (void*)&DynamicVectorClass_AircraftTypeClass_const___vftable; /*0x5135a3*/
    this->u32_14 = 10; /*0x5135a9*/
    this->q010 = 0; /*0x5135b0*/
    return &this->vtable1; /*0x5135b9*/
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
      IDA_LOBYTE(this->m_C) = 0; /*0x513622*/
      if ( a3 ) /*0x513628*/
        v4 = a3; /*0x51363e*/
      else
        v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x51363a*/
      IDA_LOBYTE(this->m_C) = 1; /*0x513642*/
      if ( !v4 ) /*0x513646*/
        return 0; /*0x5136ba*/
      if ( *(unsigned int *)&this->m_1[3] ) /*0x513648*/
      {
        m_8 = this->m_8; /*0x51364f*/
        if ( a2 < m_8 ) /*0x513654*/
          m_8 = a2; /*0x513656*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x51365c*/
          ++i; /*0x513661*/
        if ( IDA_BYTE1(this->m_C) ) /*0x51366e*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x513679*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x513681*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)v4; /*0x51368a*/
      this->m_8 = a2; /*0x513692*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x513695*/
    }
    else
    {
      (*(void (**)(_DynamicVectorClass_PBVAircraftTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x51369e*/
    }
    v7 = this->m_8; /*0x5136a1*/
    if ( v7 < this->m_10 ) /*0x5136a9*/
      this->m_10 = v7; /*0x5136ab*/
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
    if ( this->u8_D >= (int)vtable2 ) /*0x5136cb*/
    {
      if ( !IDA_BYTE1(this->u8_D) && vtable2 ) /*0x5136d6*/
        return 0; /*0x5136d6*/
      abstractFlags = this->abstractFlags; /*0x5136d8*/
      if ( abstractFlags <= 0 /*0x5136e8*/
        || !(*((unsigned __int8 (**)(HouseTypeClass *, int, unsigned int))this->vtable1 + 2))(
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
int HouseTypeClass_28::Read(unsigned int * a2, void *a2_2)
{
    int m_10; // edx
    int result; // eax
    unsigned int *i; // ecx

    m_10 = this->m_10; /*0x513710*/
    result = 0; /*0x513713*/
    if ( m_10 <= 0 ) /*0x513718*/
      return -1; /*0x51372f*/
    for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x51371e*/
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

    this->Items = 0; /*0x5137dd*/
    this->Capacity = 0; /*0x5137e0*/
    IDA_LOBYTE(this->IsInitialized) = 1; /*0x5137e3*/
    IDA_BYTE1(this->IsInitialized) = 0; /*0x5137e7*/
    this->vtable1 = (void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x5137ea*/
    if ( this != (HouseTypeClass *)a2 ) /*0x5137f0*/
    {
      VectorClass::ClearAndFree4((int)this); /*0x5137f2*/
      v3 = (void *)a2[2]; /*0x5137f8*/
      this->Capacity = v3; /*0x5137fd*/
      if ( v3 ) /*0x513800*/
      {
        v4 = (void *)RA2_OPNEW(4 * (unsigned int)v3); /*0x513806*/
        this->Items = v4; /*0x513810*/
        if ( v4 ) /*0x513813*/
        {
          vtable2 = this->Capacity; /*0x513815*/
          v6 = 0; /*0x513818*/
          IDA_BYTE1(this->IsInitialized) = 1; /*0x51381c*/
          if ( (int)vtable2 > 0 ) /*0x513820*/
          {
            do /*0x513834*/
            {
              *((unsigned int *)this->Capacity + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x51382b*/
              ++v6; /*0x513831*/
            }
            while ( v6 < (int)this->Items ); /*0x513834*/
          }
        }
      }
      else
      {
        this->Items = 0; /*0x513838*/
        IDA_BYTE1(this->IsInitialized) = 0; /*0x51383b*/
      }
    }
    this->q010 = a2[4]; /*0x513841*/
    this->u32_14 = a2[5]; /*0x513847*/
    this->vtable1 = (void*)&TypeList_AircraftTypeClass_const___vftable; /*0x51384a*/
    return &this->vtable1; /*0x513852*/
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

    this->Items = 0; /*0x51386d*/
    this->Capacity = 0; /*0x513870*/
    IDA_LOBYTE(this->IsInitialized) = 1; /*0x513873*/
    IDA_BYTE1(this->IsInitialized) = 0; /*0x513877*/
    this->vtable1 = (void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x51387a*/
    if ( this != (HouseTypeClass *)a2 ) /*0x513880*/
    {
      ((Vector *)(_VectorClass_PBVInfantryTypeClass *)this)->Cleanup(); /*0x513882*/
      v3 = (void *)a2[2]; /*0x513888*/
      this->Capacity = v3; /*0x51388d*/
      if ( v3 ) /*0x513890*/
      {
        v4 = (void *)RA2_OPNEW(4 * (unsigned int)v3); /*0x513896*/
        this->Items = v4; /*0x5138a0*/
        if ( v4 ) /*0x5138a3*/
        {
          vtable2 = this->Capacity; /*0x5138a5*/
          v6 = 0; /*0x5138a8*/
          IDA_BYTE1(this->IsInitialized) = 1; /*0x5138ac*/
          if ( (int)vtable2 > 0 ) /*0x5138b0*/
          {
            do /*0x5138c4*/
            {
              *((unsigned int *)this->Capacity + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x5138bb*/
              ++v6; /*0x5138c1*/
            }
            while ( v6 < (int)this->Items ); /*0x5138c4*/
          }
        }
      }
      else
      {
        this->Items = 0; /*0x5138c8*/
        IDA_BYTE1(this->IsInitialized) = 0; /*0x5138cb*/
      }
    }
    this->q010 = a2[4]; /*0x5138d1*/
    this->u32_14 = a2[5]; /*0x5138d7*/
    this->vtable1 = (void*)&DynamicVectorClass_InfantryTypeClass_const___vftable; /*0x5138da*/
    return &this->vtable1; /*0x5138e2*/
}
} // namespace gamemd

// 0x5139E0
namespace gamemd {
int HouseTypeClass::readBaseDefenses(int a1, const void * a2, unsigned int * a3)
{

  return HouseTypeClass::QueryInterface( a1 - 4, (const void *)(a2), (unsigned int *)(a3));

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
int HouseTypeClass::Find()
{
    int v1; // esi

    v1 = 0; /*0x6a46d6*/
    if ( *(unsigned int *)((char *)&FootClass_Array + 889) <= 0 ) /*0x6a46dd*/
      return -1; /*0x6a4702*/
    while ( _strcmpi((char *)(*(unsigned int *)(FootClass_Array.?[0] + 4 * v1) + 36), (char *)this) ) /*0x6a46f6*/
    {
      if ( ++v1 >= FootClass_Array.?[0] ) /*0x6a4700*/
        return -1; /*0x6a4700*/
    }
    return v1; /*0x6a4702*/
}
}