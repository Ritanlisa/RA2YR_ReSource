// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6B5260
char * SmudgeTypeClass::SmudgeTypeClass(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall SmudgeTypeClass::SmudgeTypeClass(char *this, ObjectClass *aP1)
{
  SmudgeTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x6b5269*/
  this->Width = -1; /*0x6b5277*/
  this->Height = 1; /*0x6b5281*/
  *((_DWORD *)this + 167) = 1; /*0x6b5287*/
  *(this + 672) = 0; /*0x6b528d*/
  *(this + 673) = 0; /*0x6b5294*/
  *(_DWORD *)this = &SmudgeTypeClass::`vftable'; /*0x6b529b*/
  *((_DWORD *)this + 1) = &SmudgeTypeClass::`vftable'; /*0x6b52a1*/
  *((_DWORD *)this + 2) = &SmudgeTypeClass::`vftable'; /*0x6b52a7*/
  *((_DWORD *)this + 3) = &SmudgeTypeClass::`vftable'; /*0x6b52ae*/
  AbstractClass::GenerateUniqueID((int)(this + 4)); /*0x6b52b5*/
  *(_WORD *)(this + 559) = 1; /*0x6b52ba*/
  *(this + 561) = 0; /*0x6b52c7*/
  *(this + 562) = 1; /*0x6b52ce*/
  *(this + 563) = 1; /*0x6b52d4*/
  *(this + 565) = 0; /*0x6b52da*/
  v3 = *(SmudgeTypeClass **)&MEMORY[0xA8D63C].__pad_14B0[316]; /*0x6b52e1*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[316] < *(int *)&MEMORY[0xA8D63C].__pad_14B0[308] /*0x6b5322*/
    || (MEMORY[0xA8D63C].__pad_14B0[313] || !*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[308])
    && *(int *)&MEMORY[0xA8D63C].__pad_14B0[320] > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[300] + 8))(
               &MEMORY[0xA8D63C].__pad_14B0[300],
               *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[308] + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[320],
               0) == 0,
        v3 = *(SmudgeTypeClass **)&MEMORY[0xA8D63C].__pad_14B0[316],
        !v4) )
  {
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[316] = &v3->__pad_0[1]; /*0x6b5327*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[304] + 4 * (_DWORD)v3) = this; /*0x6b5331*/
    v3 = *(SmudgeTypeClass **)&MEMORY[0xA8D63C].__pad_14B0[316]; /*0x6b5334*/
  }
  v5 = 0; /*0x6b5339*/
  if ( (int)v3 <= 0 ) /*0x6b533d*/
  {
LABEL_11:
    this->Width = -1; /*0x6b5351*/
    return this; /*0x6b535a*/
  }
  else
  {
    v6 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_14B0[304]; /*0x6b533f*/
    while ( *(char **)v6->__pad_0 != this ) /*0x6b5347*/
    {
      ++v5; /*0x6b5349*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x6b534a*/
      if ( v5 >= (int)v3 ) /*0x6b534f*/
        goto LABEL_11; /*0x6b534f*/
    }
    this->Width = v5; /*0x6b5361*/
    return this; /*0x6b5367*/
  }
}
}

// 0x6B5550
bool SmudgeTypeClass::GetType(short * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall SmudgeTypeClass::GetType(AbstractClass *this, __int16 *a2, int a3)
{
  void **v4; // eax
  int v5; // edx
  bool result; // al
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (void **)__2_YAPAXI_Z(0xB0u); /*0x6b555b*/
  result = 0; /*0x6b55a7*/
  if ( v4 ) /*0x6b5565*/
  {
    v7[2] = 0; /*0x6b556d*/
    v5 = a2[1]; /*0x6b5578*/
    v7[0] = (*a2 << 8) + 128; /*0x6b5585*/
    v7[1] = (v5 << 8) + 128; /*0x6b559a*/
    if ( UnitClass::Create(v4, this, (AbstractClass *)v7, -1) ) /*0x6b559e*/
      return 1; /*0x6b5565*/
  }
  return result; /*0x6b55a9*/
}
}

// 0x6B55C0
SmudgeClass * SmudgeTypeClass::GetFlag(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
SmudgeClass *__thiscall SmudgeTypeClass::GetFlag(AbstractClass *this, int a2)
{
  void **v3; // eax

  v3 = (void **)__2_YAPAXI_Z(0xB0u); /*0x6b55c8*/
  if ( v3 ) /*0x6b55d2*/
    return UnitClass::Create(v3, this, (AbstractClass *)&stru_B05488.__pad_579C[2948], -1); /*0x6b55de*/
  else
    return 0; /*0x6b55e7*/
}
}

// 0x6B55F0
void SmudgeTypeClass::vt_entry_A0(int * a2, int * a3, int a4, int a5, short * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall SmudgeTypeClass::vt_entry_A0(_DWORD *this, int *a2, int *a3, int a4, int a5, __int16 *a6)
{
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // [esp-1Ch] [ebp-2Ch]
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]

  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 156))(this); /*0x6b55ff*/
  if ( v7 ) /*0x6b5603*/
  {
    v8 = a2[1]; /*0x6b5614*/
    v13 = *a2; /*0x6b5619*/
    v14 = v8; /*0x6b561d*/
    if ( a4 ) /*0x6b5621*/
    {
      v9 = *(this + 166); /*0x6b5623*/
      v14 += -15 * (a4 / v9 + a4 % v9); /*0x6b5659*/
      v13 += 60 * (a4 / v9 - a4 % v9) / 2; /*0x6b5661*/
    }
    v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a6); /*0x6b5674*/
    v12 = *((__int16 *)v10 + 134); /*0x6b568a*/
    v11 = ZCoordToScreenY(a5); /*0x6b568c*/
    DrawToSurfaceSHP(MEMORY[0x887314], v10[13], v7, 0, &v13, a3, 3584, 0, -1 - v11, 0, v12, 0, 0, 0, 0, 0); /*0x6b56b4*/
  }
}
}

// 0x6B56D0
char SmudgeTypeClass::GetSize(unsigned signed char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SmudgeTypeClass::GetSize(int this, unsigned __int8 ***aP1)
{
  char Bool_Overwrite; // al
  char v4; // cl
  char v5; // al
  INIClass *v7; // [esp-8h] [ebp-210h]
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x6b56e3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x6b56eb*/
    return 0; /*0x6b57db*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6b570b*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     &unk_8185F4,
                     *(_BYTE *)(this + 672));
  v4 = *(_BYTE *)(this + 673); /*0x6b5710*/
  *(_BYTE *)(this + 672) = Bool_Overwrite; /*0x6b5716*/
  v5 = INIClass::ReadBool_Overwrite( /*0x6b5725*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[41580],
         v4);
  v7 = *(INIClass **)(this + 664); /*0x6b5732*/
  *(_BYTE *)(this + 673) = v5; /*0x6b5739*/
  this->Height = INIClass::ReadInt_Overwrite( /*0x6b5744*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_82BBD0.sectionHead[1],
                              v7);
  *(_DWORD *)(this + 668) = INIClass::ReadInt_Overwrite( /*0x6b575e*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              &g_INI_Key_Height,
                              *(INIClass **)(this + 668));
  if ( *(_BYTE *)(this + 556) ) /*0x6b5764*/
    _makepath(Buffer, 0, 0, (const char *)(this + 504), (const char *)&off_7E1BC6 + 112 * MEMORY[0xA8B230]->theater); /*0x6b57b4*/
  else
    _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext); /*0x6b5784*/
  *(_DWORD *)(this + 164) = SearchMIXFile(Buffer, 0); /*0x6b57c7*/
  return 1; /*0x6b57cd*/
}
}

// 0x6B57F0
int SmudgeTypeClass::PowerDrainUpdate(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SmudgeTypeClass::_vt13(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6b57f9*/
  Power::TimerProcess(this->Width); /*0x6b5807*/
  LOBYTE(v3) = *(_BYTE *)(this + 672); /*0x6b580c*/
  Power::FlagProcess(a2, v3); /*0x6b5815*/
  LOBYTE(v4) = *(_BYTE *)(this + 673); /*0x6b581a*/
  Power::FlagProcess(a2, v4); /*0x6b5823*/
  Power::TimerProcess(this->Height); /*0x6b5831*/
  return Power::TimerProcess(*(_DWORD *)(this + 668)); /*0x6b5844*/
}
}

// 0x6B5850
int SmudgeTypeClass::LoadTypeData(ObjectTypeClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SmudgeTypeClass::LoadTypeData(ObjectTypeClass *aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1); /*0x6b585b*/
  if ( result >= 0 ) /*0x6b5862*/
  {
    if ( aP0 ) /*0x6b5866*/
    {
      ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1); /*0x6b586f*/
      *(_DWORD *)aP0->__pad_0 = &SmudgeTypeClass::`vftable'; /*0x6b5874*/
      *(_DWORD *)&aP0->__pad_0[4] = &SmudgeTypeClass::`vftable'; /*0x6b587a*/
      *(_DWORD *)&aP0->__pad_0[8] = &SmudgeTypeClass::`vftable'; /*0x6b5881*/
      *(_DWORD *)&aP0->__pad_0[12] = &SmudgeTypeClass::`vftable'; /*0x6b5888*/
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x6b5891*/
    ObjectTypeClass::Load2DArt(aP0->__pad_0); /*0x6b5898*/
    return 0; /*0x6b589d*/
  }
  return result; /*0x6b589f*/
}
}

// 0x6B58B0
int SmudgeTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SmudgeTypeClass::SaveToINI(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x6b58bf*/
  if ( result >= 0 ) /*0x6b58c6*/
    return 0; /*0x6b58c8*/
  return result; /*0x6b58ca*/
}
}

// 0x6B58D0
int SmudgeTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SmudgeTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6b58d6*/
    return -2147467261; /*0x6b58d8*/
  *a2 = 1525862008; /*0x6b58e6*/
  a2[1] = 298976820; /*0x6b58ee*/
  a2[2] = 1610654892; /*0x6b58f7*/
  a2[3] = -1252326136; /*0x6b5900*/
  return 0; /*0x6b58dd*/
}
}

// 0x6B6130
int SmudgeTypeClass::GetTypeIdentifier()
{
return 30;
}

// 0x6B6140
int SmudgeTypeClass::GetObjectSize()
{
return 676;
}

// 0x6B6150
int SmudgeTypeClass::GetAuxField()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SmudgeTypeClass::_vt16(_DWORD *this)
{
  return *(this + 165); /*0x6b6156*/
}
}

// 0x6B6160
SmudgeTypeClass * SmudgeTypeClass::ddtor(AbstractClass * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
SmudgeTypeClass *__fastcall SmudgeTypeClass::ddtor(void **this, AbstractClass *a2, char a3)
{
  CCINIClass *v3; // eax
  int v5; // eax
  void **v7; // [esp+4h] [ebp-4h] BYREF

  v3 = (CCINIClass *)*(this + 41); /*0x6b6164*/
  *this = &SmudgeTypeClass::`vftable'; /*0x6b616a*/
  *(this + 1) = &SmudgeTypeClass::`vftable'; /*0x6b6172*/
  *(this + 2) = &SmudgeTypeClass::`vftable'; /*0x6b6179*/
  *(this + 3) = &SmudgeTypeClass::`vftable'; /*0x6b6180*/
  if ( v3 ) /*0x6b6187*/
  {
    __3_YAXPAX_Z(v3); /*0x6b618a*/
    *(this + 41) = 0; /*0x6b6192*/
  }
  LOBYTE(a2) = 1; /*0x6b619c*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, a2); /*0x6b61a0*/
  v7 = this; /*0x6b61b5*/
  v5 = (*(int (__thiscall **)(char *, void ***))(*(_DWORD *)&HouseClass_Player.__pad_5568[22884] + 16))( /*0x6b61b9*/
         &HouseClass_Player.__pad_5568[22884],
         &v7);
  if ( v5 != -1 && v5 < *(int *)&HouseClass_Player.__pad_5568[22900] ) /*0x6b61c9*/
  {
    --*(_DWORD *)&HouseClass_Player.__pad_5568[22900]; /*0x6b61ce*/
    for ( ; /*0x6b61d4*/
          v5 < *(int *)&HouseClass_Player.__pad_5568[22900];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888]
                                                                                                + 4 * v5) )
    {
      ++v5; /*0x6b61dc*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x6b61f0*/
  if ( (a3 & 1) != 0 ) /*0x6b61fa*/
    __3_YAXPAX_Z(this); /*0x6b61fd*/
  return (SmudgeTypeClass *)this; /*0x6b6207*/
}
}
