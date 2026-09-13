// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

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

// 0x5FE250
unsigned int * OverlayTypeClass::OverlayTypeClass(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall OverlayTypeClass::OverlayTypeClass(_DWORD *this, ObjectClass *aP1)
{
  OverlayTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x5fe259*/
  *(this + 168) = 1; /*0x5fe265*/
  *(this + 169) = 1; /*0x5fe26b*/
  this->Explodes = 1; /*0x5fe271*/
  *((_BYTE *)this + 691) = 1; /*0x5fe277*/
  *(this + 165) = -1; /*0x5fe280*/
  *(this + 166) = 0; /*0x5fe28a*/
  *(this + 167) = 0; /*0x5fe290*/
  this->NoUseTileLandType = 0; /*0x5fe296*/
  this->IsVeinholeMonster = 0; /*0x5fe29c*/
  this->IsVeins = 0; /*0x5fe2a2*/
  this->ImageLoaded = 0; /*0x5fe2a8*/
  this->ChainReaction = 0; /*0x5fe2ae*/
  this->Overrides = 0; /*0x5fe2b4*/
  this->DrawFlat = 0; /*0x5fe2ba*/
  this->IsRubble = 0; /*0x5fe2c0*/
  this->IsARock = 0; /*0x5fe2c6*/
  *((_BYTE *)this + 690) = 0; /*0x5fe2cc*/
  *((_BYTE *)this + 692) = 0; /*0x5fe2d2*/
  *((_BYTE *)this + 693) = 0; /*0x5fe2d8*/
  *((_BYTE *)this + 694) = 0; /*0x5fe2de*/
  *((_BYTE *)this + 695) = 0; /*0x5fe2e4*/
  *((_BYTE *)this + 696) = 0; /*0x5fe2ea*/
  *this = &OverlayTypeClass::`vftable'; /*0x5fe2f1*/
  *(this + 1) = &OverlayTypeClass::`vftable'; /*0x5fe2f7*/
  *(this + 2) = &OverlayTypeClass::`vftable'; /*0x5fe2fd*/
  *(this + 3) = &vt_OverlayTypeClass; /*0x5fe304*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x5fe30b*/
  this->RadarInvisible = 1; /*0x5fe310*/
  this->Selectable = 0; /*0x5fe317*/
  this->Insignificant = 1; /*0x5fe31d*/
  this->AllowCellContent = 0; /*0x5fe324*/
  v3 = MEMORY[0xA83D90]; /*0x5fe32a*/
  if ( (int)MEMORY[0xA83D90] < MEMORY[0xA83D88] /*0x5fe368*/
    || (MEMORY[0xA83D8D] || !MEMORY[0xA83D88])
    && MEMORY[0xA83D94] > 0
    && (v4 = ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xA83D80]->field_8)(
               &MEMORY[0xA83D80],
               MEMORY[0xA83D88] + MEMORY[0xA83D94],
               0) == 0,
        v3 = MEMORY[0xA83D90],
        !v4) )
  {
    MEMORY[0xA83D90] = (OverlayTypeClass *)&v3->__pad_0[1]; /*0x5fe36d*/
    *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * (_DWORD)v3] = this; /*0x5fe377*/
    v3 = MEMORY[0xA83D90]; /*0x5fe37a*/
  }
  v5 = 0; /*0x5fe37f*/
  if ( (int)v3 <= 0 ) /*0x5fe383*/
  {
LABEL_11:
    *(this + 165) = -1; /*0x5fe397*/
    return this; /*0x5fe3a0*/
  }
  else
  {
    v6 = MEMORY[0xA83D84]; /*0x5fe385*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x5fe38d*/
    {
      ++v5; /*0x5fe38f*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x5fe390*/
      if ( v5 >= (int)v3 ) /*0x5fe395*/
        goto LABEL_11; /*0x5fe395*/
    }
    *(this + 165) = v5; /*0x5fe3a7*/
    return this; /*0x5fe3ad*/
  }
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

// 0x5FE770
char OverlayTypeClass::LoadFromINI(unsigned char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall OverlayTypeClass::LoadFromINI(int this, unsigned __int8 ***aP1)
{
  AnimTypeClass *v3; // eax
  INIClass *v4; // ecx
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char v7; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  AnimTypeClass *v12; // ebp
  AnimTypeClass *v13; // eax
  AnimTypeClass *v14; // eax
  int Coord; // eax
  char v16; // al
  char v17; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  char v23; // [esp-Ch] [ebp-298h]
  char v24; // [esp-Ch] [ebp-298h]
  char v25; // [esp-Ch] [ebp-298h]
  char v26; // [esp-Ch] [ebp-298h]
  char v27; // [esp-Ch] [ebp-298h]
  CCINIClass v28; // [esp+8h] [ebp-284h] BYREF
  char Buffer[512]; // [esp+8Ch] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x5fe783*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x5fe78b*/
    return 0; /*0x5fea1f*/
  v3 = (AnimTypeClass *)OverlayTypeClass::ReadINIString( /*0x5fe7ac*/
                          aP1,
                          (INIClass *)(this + 36),
                          (unsigned __int8 *)&stru_830620.__pad_14B0[6832],
                          this->CellAnim);
  v4 = *(INIClass **)(this + 676); /*0x5fe7b1*/
  this->CellAnim = v3; /*0x5fe7b7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5fe7c6*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_14B0[4264],
                    v4);
  v23 = this->NoUseTileLandType; /*0x5fe7d3*/
  *(_DWORD *)(this + 676) = Int_Overwrite; /*0x5fe7da*/
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
  v7 = this->IsVeins; /*0x5fe7ff*/
  this->IsVeinholeMonster = Bool_Overwrite; /*0x5fe805*/
  v8 = INIClass::ReadBool_Overwrite( /*0x5fe814*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_14B0[6824],
         v7);
  v24 = this->ImageLoaded; /*0x5fe821*/
  this->IsVeins = v8; /*0x5fe828*/
  this->ImageLoaded = INIClass::ReadBool_Overwrite( /*0x5fe833*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_14B0[6808],
                             v24);
  v9 = INIClass::ReadBool_Overwrite( /*0x5fe848*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_14B0[6796],
         this->IsRubble);
  v10 = *(_BYTE *)(this + 690); /*0x5fe84d*/
  this->IsRubble = v9; /*0x5fe853*/
  v11 = INIClass::ReadBool_Overwrite( /*0x5fe862*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6784],
          v10);
  v12 = *(AnimTypeClass **)(this + 668); /*0x5fe867*/
  *(_BYTE *)(this + 690) = v11; /*0x5fe884*/
  if ( INIClass::GetString( /*0x5fe88a*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620.__pad_14B0[6772],
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
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
                              (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                              (unsigned __int8 *)(this + 504),
                              (CCINIClass *)&stru_830620.__pad_14B0[6756],
                              *(INIClass **)(this + 672));
  if ( this->IsVeinholeMonster ) /*0x5fe8c9*/
  {
    v14 = *(AnimTypeClass **)(this + 664); /*0x5fe8d3*/
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
            (Color *)&stru_830620.__pad_14B0[6744],
            (Color *)(this + 694));
  *(_WORD *)(this + 694) = *(_WORD *)Coord; /*0x5fe94f*/
  v25 = this->Explodes; /*0x5fe95e*/
  *(_BYTE *)(this + 696) = *(_BYTE *)(Coord + 2); /*0x5fe965*/
  v16 = INIClass::ReadBool_Overwrite( /*0x5fe968*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6724],
          v25);
  v17 = this->ChainReaction; /*0x5fe96d*/
  this->Explodes = v16; /*0x5fe973*/
  v18 = INIClass::ReadBool_Overwrite( /*0x5fe982*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6704],
          v17);
  v26 = this->Overrides; /*0x5fe98f*/
  this->ChainReaction = v18; /*0x5fe996*/
  this->Overrides = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &unk_8184A8, v26); /*0x5fe9a1*/
  v19 = INIClass::ReadBool_Overwrite( /*0x5fe9b6*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6688],
          this->IsARock);
  v20 = *(_BYTE *)(this + 691); /*0x5fe9bb*/
  this->IsARock = v19; /*0x5fe9c1*/
  v21 = INIClass::ReadBool_Overwrite( /*0x5fe9d0*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6676],
          v20);
  v27 = *(_BYTE *)(this + 693); /*0x5fe9dd*/
  *(_BYTE *)(this + 691) = v21; /*0x5fe9e4*/
  *(_BYTE *)(this + 693) = INIClass::ReadBool_Overwrite( /*0x5fe9ef*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_14B0[6668],
                             v27);
  *(_BYTE *)(this + 692) = INIClass::ReadBool_Overwrite( /*0x5fea0a*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_14B0[6656],
                             *(_BYTE *)(this + 692));
  return 1; /*0x5fea11*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall OverlayTypeClass::_vt13(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x5fea59*/
  Power::TimerProcess(this->LandType); /*0x5fea67*/
  Power::TimerProcess(this->CellAnim); /*0x5fea75*/
  Power::TimerProcess(this->Strength); /*0x5fea83*/
  Power::TimerProcess(*(_DWORD *)(this + 676)); /*0x5fea91*/
  LOBYTE(v3) = this->NoUseTileLandType; /*0x5fea96*/
  Power::FlagProcess(a2, v3); /*0x5fea9f*/
  LOBYTE(v4) = this->IsVeinholeMonster; /*0x5feaa4*/
  v5 = Power::FlagProcess(a2, v4); /*0x5feaad*/
  LOBYTE(v5) = this->IsVeins; /*0x5feab2*/
  Power::FlagProcess(a2, v5); /*0x5feabb*/
  LOBYTE(v6) = this->ImageLoaded; /*0x5feac0*/
  Power::FlagProcess(a2, v6); /*0x5feac9*/
  LOBYTE(v7) = this->IsRubble; /*0x5feace*/
  return Power::FlagProcess(a2, v7); /*0x5feadc*/
}
}

// 0x5FEAF0
int OverlayTypeClass::SaveLoad_Prefix(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall OverlayTypeClass::SaveLoad_Prefix(int a1, int a2)
{
  int result; // eax
  char v3; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x5feb04*/
  if ( result >= 0 ) /*0x5feb0b*/
  {
    if ( a1 ) /*0x5feb13*/
    {
      ObjectTypeClass::Construct((_DWORD *)a1, (int)&v3); /*0x5feb1c*/
      *(_DWORD *)a1 = &OverlayTypeClass::`vftable'; /*0x5feb21*/
      *(_DWORD *)(a1 + 4) = &OverlayTypeClass::`vftable'; /*0x5feb27*/
      *(_DWORD *)(a1 + 8) = &OverlayTypeClass::`vftable'; /*0x5feb2e*/
      *(_DWORD *)(a1 + 12) = &vt_OverlayTypeClass; /*0x5feb35*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x5feb3e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x5feb45*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(a1 + 668)); /*0x5feb56*/
    if ( !*(_BYTE *)(a1 + 687) ) /*0x5feb5b*/
    {
      if ( *(_BYTE *)(a1 + 556) ) /*0x5feb69*/
      {
        _makepath( /*0x5feba1*/
          Buffer,
          0,
          0,
          (const char *)(a1 + 504),
          (const char *)&off_7E1BC6 + 112 * *((_DWORD *)MEMORY[0xA8B230] + 1174));
      }
      else
      {
        _makepath(Buffer, 0, 0, (const char *)(a1 + 504), Ext); /*0x5febc0*/
        TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x5febd7*/
      }
      if ( !*(_DWORD *)(a1 + 164) ) /*0x5febdc*/
        *(_DWORD *)(a1 + 164) = SearchMIXFile(Buffer, 1); /*0x5febf1*/
    }
    return 0; /*0x5febf7*/
  }
  return result; /*0x5febf9*/
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

// 0x5FEDE0
void * OverlayTypeClass::GetCategory()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall sub_5FEDE0(int this)
{
  void *result; // eax
  void *EntireFile; // edi
  _DWORD v4[22]; // [esp+4h] [ebp-26Ch] BYREF
  _BYTE v5[12]; // [esp+5Ch] [ebp-214h] BYREF
  int v6; // [esp+68h] [ebp-208h]
  char Buffer[512]; // [esp+70h] [ebp-200h] BYREF

  result = *(void **)(this + 164); /*0x5fede9*/
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
        (const char *)&off_7E1BC6 + 112 * *((_DWORD *)MEMORY[0xA8B230] + 1174));
    }
    else if ( this->NewTheater ) /*0x5fee59*/
    {
      _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext); /*0x5fee78*/
      TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x5fee90*/
    }
    CCFileClass::Construct(v4, Buffer); /*0x5fee9f*/
    EntireFile = CCFileClass::ReadEntireFile(v4); /*0x5feead*/
    this->Image = EntireFile; /*0x5feeb1*/
    if ( EntireFile ) /*0x5feeb7*/
      this->ImageAllocated = 1; /*0x5feeb9*/
    v4[0] = &vt_CCFileClass; /*0x5feec4*/
    v6 = 0; /*0x5feecc*/
    Vector::Clear((int)v5); /*0x5feed4*/
    v4[0] = &off_7E1668; /*0x5feedd*/
    BufferIOFileClass::Dtor(v4); /*0x5feee5*/
    return EntireFile; /*0x5feeea*/
  }
  return result; /*0x5feeed*/
}
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
// [IDA decompile] original pseudocode - translation pending (final goal)
OverlayTypeClass *__thiscall OverlayTypeClass::ddtor(void **this, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *this = &OverlayTypeClass::`vftable'; /*0x5fef36*/
  *(this + 1) = &OverlayTypeClass::`vftable'; /*0x5fef3c*/
  *(this + 2) = &OverlayTypeClass::`vftable'; /*0x5fef43*/
  *(this + 3) = &vt_OverlayTypeClass; /*0x5fef4a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x5fef51*/
  v5 = this; /*0x5fef66*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA83D80] + 16))(&MEMORY[0xA83D80], &v5); /*0x5fef6a*/
  if ( v3 != -1 && v3 < MEMORY[0xA83D90] && v3 < --MEMORY[0xA83D90] ) /*0x5fef85*/
  {
    do /*0x5fef9d*/
    {
      ++v3; /*0x5fef8d*/
      *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v3 - 4] = *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v3]; /*0x5fef91*/
    }
    while ( v3 < MEMORY[0xA83D90] ); /*0x5fef9d*/
  }
  ObjectTypeClass::Destruct((int)this); /*0x5fefa1*/
  if ( (a2 & 1) != 0 ) /*0x5fefab*/
    __3_YAXPAX_Z(this); /*0x5fefae*/
  return (OverlayTypeClass *)this; /*0x5fefb8*/
}
}

// 0x6440A0
unsigned int * OverlayTypeClass::Construct(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall OverlayTypeClass::Construct(_DWORD *this, ObjectClass *aP1)
{
  ParticleSystemTypeClass *v3; // eax

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x6440a9*/
  *(this + 165) = -1; /*0x6440b3*/
  *(this + 173) = -1; /*0x6440b9*/
  *(this + 174) = -1; /*0x6440bf*/
  *((_BYTE *)this + 664) = 0; /*0x6440c5*/
  *(this + 167) = 1; /*0x6440cb*/
  *(this + 168) = 0; /*0x6440d5*/
  *(this + 169) = 50; /*0x6440db*/
  *(this + 170) = 0; /*0x6440e5*/
  *(this + 171) = 0; /*0x6440eb*/
  *(this + 172) = 0; /*0x6440f1*/
  *(this + 175) = 0; /*0x6440fc*/
  *(this + 176) = 0; /*0x644102*/
  *(this + 177) = 0; /*0x644108*/
  *(this + 178) = -1717986918; /*0x64410e*/
  *(this + 180) = -1717986918; /*0x644114*/
  *(this + 182) = 0; /*0x64411a*/
  *(this + 184) = 0; /*0x644120*/
  *(this + 186) = 0; /*0x644126*/
  *(this + 188) = 0; /*0x64412c*/
  *(this + 190) = 0; /*0x644132*/
  *(this + 179) = 1069128089; /*0x64413b*/
  *(this + 181) = 1067030937; /*0x644145*/
  *(this + 183) = 1077477376; /*0x64414f*/
  *(this + 185) = 0; /*0x644159*/
  *(this + 187) = 0; /*0x64415f*/
  *(this + 189) = 0; /*0x644165*/
  *(this + 191) = 0; /*0x64416b*/
  *(this + 192) = 0; /*0x644171*/
  *(this + 193) = 0; /*0x644177*/
  *(this + 194) = 0; /*0x64417d*/
  *((_BYTE *)this + 780) = 0; /*0x644196*/
  *this = &ParticleSystemTypeClass::`vftable'; /*0x64419c*/
  *(this + 1) = &ParticleSystemTypeClass::`vftable'; /*0x6441a2*/
  *(this + 2) = &ParticleSystemTypeClass::`vftable'; /*0x6441a8*/
  *(this + 3) = &vt_ParticleSystemTypeClass; /*0x6441af*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x6441b6*/
  if ( (int)MEMORY[0xA83D78] < MEMORY[0xA83D70] /*0x6441ef*/
    || (MEMORY[0xA83D75] || !MEMORY[0xA83D70])
    && MEMORY[0xA83D7C] > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xA83D68]->field_8)(
         &MEMORY[0xA83D68],
         MEMORY[0xA83D70] + MEMORY[0xA83D7C],
         0) )
  {
    v3 = MEMORY[0xA83D78]; /*0x6441fc*/
    MEMORY[0xA83D78] = (ParticleSystemTypeClass *)((char *)MEMORY[0xA83D78] + 1); /*0x6441ff*/
    *(_DWORD *)&MEMORY[0xA83D6C]->__pad_0[4 * (_DWORD)v3] = this; /*0x64420b*/
  }
  this->IsLogic = 1; /*0x64420e*/
  return this; /*0x644217*/
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
