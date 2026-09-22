// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"

// 0x5FE250
unsigned int * OverlayTypeClass::OverlayTypeClass(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  OverlayTypeClass *v3; // eax
  CCINIClass *v6; // edx
  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x5fe259*/
  this->q2A0 = 1; /*0x5fe265*/
  this->Wall = 1; /*0x5fe26b*/
  this->Explodes = 1; /*0x5fe271*/
  *((_BYTE *)this + 691) = 1; /*0x5fe277*/
  this->LandType = -1; /*0x5fe280*/
  this->CellAnim = 0; /*0x5fe28a*/
  this->DamageLevels = 0; /*0x5fe290*/
  this->NoUseTileLandType = 0; /*0x5fe296*/
  this->IsVeinholeMonster = 0; /*0x5fe29c*/
  this->IsVeins = 0; /*0x5fe2a2*/
  this->ImageLoaded = 0; /*0x5fe2a8*/
  this->ChainReaction = 0; /*0x5fe2ae*/
  this->Overrides = 0; /*0x5fe2b4*/
  this->DrawFlat = 0; /*0x5fe2ba*/
  this->IsRubble = 0; /*0x5fe2c0*/
  this->IsARock = 0; /*0x5fe2c6*/
  this->q2B2 = 0; /*0x5fe2cc*/
  this->q2B4 = 0; /*0x5fe2d2*/
  this->tail_2B5 = 0; /*0x5fe2d8*/
  this->q2B6 = 0; /*0x5fe2de*/
  this->q2B7 = 0; /*0x5fe2e4*/
  this->q2B8 = 0; /*0x5fe2ea*/
  *this = &OverlayTypeClass::`vftable'; /*0x5fe2f1*/
  this->vtable2 = &OverlayTypeClass::`vftable'; /*0x5fe2f7*/
  this->vtable3 = &OverlayTypeClass::`vftable'; /*0x5fe2fd*/
  this->vtable4 = &vt_OverlayTypeClass; /*0x5fe304*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x5fe30b*/
  this->RadarInvisible = 1; /*0x5fe310*/
  this->Selectable = 0; /*0x5fe317*/
  this->Insignificant = 1; /*0x5fe31d*/
  this->AllowCellContent = 0; /*0x5fe324*/
  v3 = g_ObjectTypeConfig; /*0x5fe32a*/
  if ( (int)g_ObjectTypeConfig < DataGlobal_A83D88 /*0x5fe368*/
    || (DataGlobal_A83D8D || !DataGlobal_A83D88)
    && DataGlobal_A83D94 > 0
  bool v4; // zf
    && (v4 = ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))DataGlobal_A83D80->field_8)(
               &DataGlobal_A83D80,
               DataGlobal_A83D88 + DataGlobal_A83D94,
               0) == 0,
        v3 = g_ObjectTypeConfig,
        !v4) )
  {
    g_ObjectTypeConfig = (OverlayTypeClass *)&v3->__pad_0[1]; /*0x5fe36d*/
    *(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * (_DWORD)v3] = this; /*0x5fe377*/
    v3 = g_ObjectTypeConfig; /*0x5fe37a*/
  }
  int v5 = 0; /*0x5fe37f*/
  if ( (int)v3 <= 0 ) /*0x5fe383*/
  {
LABEL_11:
    this->LandType = -1; /*0x5fe397*/
    return this; /*0x5fe3a0*/
  }
  else
  {
    v6 = g_BuildingTypeClass_Array; /*0x5fe385*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x5fe38d*/
    {
      ++v5; /*0x5fe38f*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x5fe390*/
      if ( v5 >= (int)v3 ) /*0x5fe395*/
        goto LABEL_11; /*0x5fe395*/
    }
    this->LandType = v5; /*0x5fe3a7*/
    return this; /*0x5fe3ad*/
  }
}
}

// 0x5FE770
AnimTypeClass * OverlayTypeClass::LoadFromINI(unsigned char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AnimTypeClass *v3; // eax
  INIClass *v4; // ecx
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  AnimTypeClass *v12; // ebp
  AnimTypeClass *v13; // eax
  AnimTypeClass *v14; // eax
  int Coord; // eax
  CCINIClass v28; // [esp+8h] [ebp-284h] BYREF
  char Buffer[512]; // [esp+8Ch] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x5fe783*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x5fe78b*/
    return 0; /*0x5fea1f*/
  v3 = (AnimTypeClass *)OverlayTypeClass::ReadINIString( /*0x5fe7ac*/
                          aP1,
                          (INIClass *)(this + 36),
                          (unsigned __int8 *)&stru_830620[12128],
                          this->CellAnim);
  v4 = this->Wall; /*0x5fe7b1*/
  this->CellAnim = v3; /*0x5fe7b7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5fe7c6*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620[9560],
                    v4);
  bool v23 = this->NoUseTileLandType; /*0x5fe7d3*/
  this->Wall = Int_Overwrite; /*0x5fe7da*/
  this->NoUseTileLandType = INIClass::ReadBool_Overwrite( /*0x5fe7e5*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_81AC50.headNode[1],
                             v23);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fe7fa*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_817244.needsSave_flag,
                     this->IsVeinholeMonster);
  bool v7 = this->IsVeins; /*0x5fe7ff*/
  this->IsVeinholeMonster = Bool_Overwrite; /*0x5fe805*/
  char v8; // al
  v8 = INIClass::ReadBool_Overwrite( /*0x5fe814*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620[12120],
         v7);
  bool v24 = this->ImageLoaded; /*0x5fe821*/
  this->IsVeins = v8; /*0x5fe828*/
  this->ImageLoaded = INIClass::ReadBool_Overwrite( /*0x5fe833*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620[12104],
                             v24);
  char v9; // al
  v9 = INIClass::ReadBool_Overwrite( /*0x5fe848*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620[12092],
         this->IsRubble);
  char v10 = this->q2B2; /*0x5fe84d*/
  this->IsRubble = v9; /*0x5fe853*/
  char v11; // al
  v11 = INIClass::ReadBool_Overwrite( /*0x5fe862*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[12080],
          v10);
  v12 = this->DamageLevels; /*0x5fe867*/
  this->q2B2 = v11; /*0x5fe884*/
  if ( INIClass::GetString( /*0x5fe88a*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620[12068],
         (INIClass *)&DataGlobal_87F8E4[42624],
         (INIClass *)v28.headNode,
         128) )
  {
    v13 = AnimTypeClass::FindOrCreate((AbstractClass *)v28.headNode); /*0x5fe897*/
  }
  else
  {
    v13 = v12; /*0x5fe89e*/
  }
  this->DamageLevels = v13; /*0x5fe8a0*/
  this->Strength = INIClass::ReadInt_Overwrite( /*0x5fe8c3*/
                              (int)&DataGlobal_87F8E4[30876],
                              (unsigned __int8 *)(this + 504),
                              (CCINIClass *)&stru_830620[12052],
                              this->q2A0);
  if ( this->IsVeinholeMonster ) /*0x5fe8c9*/
  {
    v14 = this->CellAnim; /*0x5fe8d3*/
    this->Armor = 6; /*0x5fe8d9*/
    if ( !v14 ) /*0x5fe8e5*/
      this->CellAnim = 5; /*0x5fe8e7*/
  }
  if ( !this->Theater && !this->DrawFlat ) /*0x5fe8fb*/
  {
    _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext); /*0x5fe917*/
    this->Image = SearchMIXFile(Buffer, 1); /*0x5fe92d*/
  }
  Coord = INIClass::GetCoord( /*0x5fe947*/
            aP1,
            &v28,
            (INIClass *)(this + 36),
            (Color *)&stru_830620[12040],
            (Color *)(this + 694));
  this->q2B6 = *(_WORD *)Coord; /*0x5fe94f*/
  bool v25 = this->Explodes; /*0x5fe95e*/
  this->q2B8 = *(_BYTE *)(Coord + 2); /*0x5fe965*/
  char v16; // al
  v16 = INIClass::ReadBool_Overwrite( /*0x5fe968*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[12020],
          v25);
  bool v17 = this->ChainReaction; /*0x5fe96d*/
  this->Explodes = v16; /*0x5fe973*/
  char v18; // al
  v18 = INIClass::ReadBool_Overwrite( /*0x5fe982*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[12000],
          v17);
  bool v26 = this->Overrides; /*0x5fe98f*/
  this->ChainReaction = v18; /*0x5fe996*/
  this->Overrides = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &unk_8184A8, v26); /*0x5fe9a1*/
  char v19; // al
  v19 = INIClass::ReadBool_Overwrite( /*0x5fe9b6*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[11984],
          this->IsARock);
  char v20 = *(_BYTE *)(this + 691); /*0x5fe9bb*/
  this->IsARock = v19; /*0x5fe9c1*/
  char v21; // al
  v21 = INIClass::ReadBool_Overwrite( /*0x5fe9d0*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[11972],
          v20);
  char v27 = this->tail_2B5; /*0x5fe9dd*/
  *(_BYTE *)(this + 691) = v21; /*0x5fe9e4*/
  this->tail_2B5 = INIClass::ReadBool_Overwrite( /*0x5fe9ef*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620[11964],
                             v27);
  this->q2B4 = INIClass::ReadBool_Overwrite( /*0x5fea0a*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620[11952],
                             this->q2B4);
  return 1; /*0x5fea11*/
}
}

// 0x5FEAF0
ScenarioClass * OverlayTypeClass::SaveLoad_Prefix(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x5feb04*/
  if ( result >= 0 ) /*0x5feb0b*/
  {
    if ( a1 ) /*0x5feb13*/
    {
  char v3; // [esp+7h] [ebp-201h] BYREF
      ObjectTypeClass::Construct((_DWORD *)a1, (int)&v3); /*0x5feb1c*/
      *(_DWORD *)a1 = &OverlayTypeClass::`vftable'; /*0x5feb21*/
      *(_DWORD *)(a1 + 4) = &OverlayTypeClass::`vftable'; /*0x5feb27*/
      *(_DWORD *)(a1 + 8) = &OverlayTypeClass::`vftable'; /*0x5feb2e*/
      *(_DWORD *)(a1 + 12) = &vt_OverlayTypeClass; /*0x5feb35*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x5feb3e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x5feb45*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 668)); /*0x5feb56*/
    if ( !*(_BYTE *)(a1 + 687) ) /*0x5feb5b*/
    {
      if ( *(_BYTE *)(a1 + 556) ) /*0x5feb69*/
      {
        _makepath( /*0x5feba1*/
          Buffer,
          0,
          0,
          (const char *)(a1 + 504),
          (const char *)&off_7E1BC6 + 112 * *((_DWORD *)g_ScenarioClass_Instance + 1174));
      }
      else
      {
        _makepath(Buffer, 0, 0, (const char *)(a1 + 504), Ext); /*0x5febc0*/
        TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x5febd7*/
      }
      if ( !*(_DWORD *)(a1 + 164) ) /*0x5febdc*/
        *(_DWORD *)(a1 + 164) = SearchMIXFile(Buffer, 1); /*0x5febf1*/
    }
    return 0; /*0x5febf7*/
  }
  return result; /*0x5febf9*/
}
}

// 0x5FEDE0
AnimTypeClass * * OverlayTypeClass::GetCategory()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void *result; // eax
  void *EntireFile; // edi
  char Buffer[512]; // [esp+70h] [ebp-200h] BYREF

  result = this->Image; /*0x5fede9*/
  if ( !result && this->DrawFlat ) /*0x5fedf7*/
  {
    Debug::Log(); /*0x5fee0e*/
    if ( this->Theater ) /*0x5fee13*/
    {
      _makepath( /*0x5fee4f*/
        Buffer,
        0,
        0,
        (const char *)(this + 504),
        (const char *)&off_7E1BC6 + 112 * *((_DWORD *)g_ScenarioClass_Instance + 1174));
    }
    else if ( this->NewTheater ) /*0x5fee59*/
    {
      _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext); /*0x5fee78*/
      TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x5fee90*/
    }
  _DWORD v4[22]; // [esp+4h] [ebp-26Ch] BYREF
    CCFileClass::Construct(v4, Buffer); /*0x5fee9f*/
    EntireFile = CCFileClass::ReadEntireFile(v4); /*0x5feead*/
    this->Image = EntireFile; /*0x5feeb1*/
    if ( EntireFile ) /*0x5feeb7*/
      this->ImageAllocated = 1; /*0x5feeb9*/
    v4[0] = &vt_CCFileClass; /*0x5feec4*/
    int v6 = 0; /*0x5feecc*/
  _BYTE v5[12]; // [esp+5Ch] [ebp-214h] BYREF
    Vector::Clear((int)v5); /*0x5feed4*/
    v4[0] = &off_7E1668; /*0x5feedd*/
    BufferIOFileClass::Dtor(v4); /*0x5feee5*/
    return EntireFile; /*0x5feeea*/
  }
  return result; /*0x5feeed*/
}
}

// 0x6440A0
unsigned int * OverlayTypeClass::Construct(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ParticleSystemTypeClass *v3; // eax
  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x6440a9*/
  this->LandType = -1; /*0x6440b3*/
  this->q2B4 = -1; /*0x6440b9*/
  this->q2B8 = -1; /*0x6440bf*/
  this->CellAnim = 0; /*0x6440c5*/
  this->DamageLevels = 1; /*0x6440cb*/
  this->q2A0 = 0; /*0x6440d5*/
  this->Wall = 50; /*0x6440db*/
  this->NoUseTileLandType = 0; /*0x6440e5*/
  this->Explodes = 0; /*0x6440eb*/
  this->IsRubble = 0; /*0x6440f1*/
  this->q2BC = 0; /*0x6440fc*/
  this->MainVoxel = 0; /*0x644102*/
  *(this + 177) = 0; /*0x644108*/
  *(this + 178) = -1717986918; /*0x64410e*/
  this->TurretVoxel = -1717986918; /*0x644114*/
  *(this + 182) = 0; /*0x64411a*/
  this->BarrelVoxel = 0; /*0x644120*/
  *(this + 186) = 0; /*0x644126*/
  this->ChargerTurrets = 0; /*0x64412c*/
  *(this + 190) = 0; /*0x644132*/
  *(this + 179) = 1069128089; /*0x64413b*/
  *(this + 181) = 1067030937; /*0x644145*/
  *(this + 183) = 1077477376; /*0x64414f*/
  this->q0B9 = 0; /*0x644159*/
  *(this + 187) = 0; /*0x64415f*/
  *(this + 189) = 0; /*0x644165*/
  *(this + 191) = 0; /*0x64416b*/
  this->NoSpawnAlt = 0; /*0x644171*/
  *(this + 193) = 0; /*0x644177*/
  *(this + 194) = 0; /*0x64417d*/
  this->q0C3 = 0; /*0x644196*/
  *this = &ParticleSystemTypeClass::`vftable'; /*0x64419c*/
  this->vtable2 = &ParticleSystemTypeClass::`vftable'; /*0x6441a2*/
  this->vtable3 = &ParticleSystemTypeClass::`vftable'; /*0x6441a8*/
  this->vtable4 = &vt_ParticleSystemTypeClass; /*0x6441af*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x6441b6*/
  if ( (int)g_InfantryTypeInitState < DataGlobal_A83D70 /*0x6441ef*/
    || (DataGlobal_A83D75 || !DataGlobal_A83D70)
    && DataGlobal_A83D7C > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))DataGlobal_A83D68->field_8)(
         &DataGlobal_A83D68,
         DataGlobal_A83D70 + DataGlobal_A83D7C,
         0) )
  {
    v3 = g_InfantryTypeInitState; /*0x6441fc*/
    g_InfantryTypeInitState = (ParticleSystemTypeClass *)((char *)g_InfantryTypeInitState + 1); /*0x6441ff*/
    *(_DWORD *)&DataGlobal_A83D6C->__pad_0[4 * (_DWORD)v3] = this; /*0x64420b*/
  }
  this->IsLogic = 1; /*0x64420e*/
  return this; /*0x644217*/
}
}

// 0x4754B0
int OverlayTypeClass::ReadINIString(CCINIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{
{
    INIClass *v5;
    INIClass Destination[2];
    v5 = (INIClass *)sub_48DFD0((unsigned int)aP3);
    if ( INIClass::GetString(this, (INIClass *)aP1, a2, v5, Destination, 128) )
    return OverlayTypeClass::LookupByName(Destination);
    else
    return (int)aP3->__pad_0;
}
}

// 0x48DF80
int OverlayTypeClass::LookupByName()
{
{
    int v2;
    const void **v3;
    if ( !_strcmpi(&DataGlobal_817460.sectionHead[1], this) || !this )
    return -1;
    v2 = 0;
    v3 = (const void **)&DataGlobal_81DA28;
    while ( _strcmpi(*v3, this) )
  {
    ++v3;
    ++v2;
    if ( (int)v3 >= (int)&DataGlobal_81DA58 )
    return -1;
  }
    return v2;
}
}

// 0x5FE4C0
int * OverlayTypeClass::GetTile(int a1)
{
{
    if ( (DataGlobal_AC15E8 & 1) == 0 )
  {
    DataGlobal_AC15E8 |= 1u;
    DataGlobal_AC1640 = 0;
    DataGlobal_AC1644 = 2147450879;
    atexit(nullsub_213);
  }
    return &DataGlobal_AC1640;
}
}

// 0x5FE530
bool OverlayTypeClass::GetType(IUnknown * aP2, int a3)
{
{
    void *v4;
    v4 = (void *)__2_YAPAXI_Z(0xB0u);
    return v4 && Object::SpawnAtCell(v4, this, aP2, (BuildingTypeClass *)0xFFFFFFFF);
}
}

// 0x5FE570
OverlayClass * OverlayTypeClass::GetDamage(int a2)
{
{
    void *v3;
    v3 = (void *)__2_YAPAXI_Z(0xB0u);
    if ( v3 )
    return Object::SpawnAtCell( v3, this, (IUnknown *)(&(&g_MatrixTransformState)[213] + 2), (BuildingTypeClass *)0xFFFFFFFF);
    else
    return 0;
}
}

// 0x5FE5A0
void OverlayTypeClass::GetLandType(unsigned int * a2, int * a3, unsigned int a4)
{
{
    int v4;
    int v5;
    int v6[2];
    v4 = g_Map_VisibleRect + *((int*)(a2) + 1) + 15;
    v6[0] = DSurface_ViewBounds + *a2 + 30;
    v6[1] = v4;
    v5 = this->GetCategory();
    DrawToSurfaceSHP(g_DSurface_Hidden_2, DataGlobal_87F6B8, v5, a4, v6, a3, 1536, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
}
}

// 0x5FEA30
unsigned int * OverlayTypeClass::vt_entry_6C(unsigned int * a0, OverlayTypeClass * aP1)
{
{
    *a0 = *(int *)aP1->__pad_0;
    *((int*)(a0) + 1) = *(int *)&aP1->__pad_0[4];
    *((int*)(a0) + 2) = *(int *)&aP1->__pad_0[8];
    return a0;
}
}

// 0x5FEA50
int OverlayTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(this->LandType);
    Power::TimerProcess(this->CellAnim);
    Power::TimerProcess(this->Strength);
    Power::TimerProcess(this->Wall);
    LOBYTE(v3) = this->NoUseTileLandType;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->IsVeinholeMonster;
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->IsVeins;
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = this->ImageLoaded;
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = this->IsRubble;
    return Power::FlagProcess(a2, v7);
}
}

// 0x5FEC10
int OverlayTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// 0x5FEC30
int OverlayTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1525862009;
  a2[1] = 298976820;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// 0x5FED00
int OverlayTypeClass::GetRadarColor(int a2, unsigned int a3)
{
{
    char **v4;
    int v5;
    int v6;
    int v7;
    char v8;
    int PixelData;
    short v11;
    v4 = (char **)this->GetCategory();
    if ( v4 || (v5 = this->DamageLevels) != 0 && (v4 = (char **)(*(int (__thiscall **)(int))(*(int *)(v5) + 156))(v5)) != 0 )
  {
    v6 = this->LandType;
    if ( (v6 < 127 || v6 > 138) && (v6 < 147 || v6 > 158) )
    {
    PixelData = MixFileClass::GetPixelData(v4, (int)&a3, a3);
    *(short *)a2 = *(short *)PixelData;
    *(char *)(a2 + 2) = *(char *)(PixelData + 2);
    return a2;
    }
    else
    {
    v7 = MixFileClass::GetPixelData(v4, (int)&a3, a3);
    v11 = *(short *)v7;
    v8 = HIBYTE(*(short *)v7);
    BYTE1(a3) = *(char *)(v7 + 2);
    LOBYTE(a3) = v11;
    *(short *)a2 = a3;
    *(char *)(a2 + 2) = v8;
    return a2;
    }
  }
    else
  {
    *(short *)a2 = 0;
    *(char *)(a2 + 2) = 0;
    return a2;
  }
}
}

// 0x5FEF00
int OverlayTypeClass::GetTypeIdentifier()
{
return 21;
}

// 0x5FEF10
int OverlayTypeClass::GetObjectSize()
{
return 700;
}

// 0x5FEF20
int OverlayTypeClass::GetAuxField()
{
{
    return this->LandType;
}
}

// 0x5FEF30
OverlayTypeClass * OverlayTypeClass::ddtor(char a2)
{
{
    int v3;
    void **v5;
    *(void**)this = vt_OverlayTypeClass;
    *(this + 1) = (unsigned int)vt_OverlayTypeClass;
    *(this + 2) = (unsigned int)vt_OverlayTypeClass;
    *(this + 3) = &vt_OverlayTypeClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_A83D80 + 16))(&DataGlobal_A83D80, &v5);
    if ( v3 != -1 && v3 < g_ObjectTypeConfig && v3 < --g_ObjectTypeConfig )
  {
    do
    {
    ++v3;
    *(int *)&g_BuildingTypeClass_Array->vtable0[4 * v3 - 4] = *(int *)&g_BuildingTypeClass_Array->vtable0[4 * v3];
    }
    while ( v3 < g_ObjectTypeConfig );
  }
    ObjectTypeClass::Destruct((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (OverlayTypeClass *)this;
}
}
