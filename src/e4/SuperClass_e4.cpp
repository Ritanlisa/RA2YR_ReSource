// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53AE50
namespace gamemd {
RulesClass * SuperClass::LaunchPsychicDominator(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
RulesClass *__thiscall sub_53AE50(#375 *this, int a2)
{
  RulesClass *result; // eax
  void *v3; // esi
  void *v4; // eax
  int *v5; // eax
  void **v6; // eax
  char *v7; // edx
  int v8[3]; // [esp+4h] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+10h] [ebp-Ch] BYREF

  result = MEMORY[0x8871E0]; /*0x53ae50*/
  if ( MEMORY[0x8871E0]->?[0] && MEMORY[0x8871E0]->?[1] ) /*0x53ae66*/
  {
    unk_A9FAC8 = this; /*0x53ae79*/
    word_A9FA48 = a2; /*0x53ae7f*/
    v3 = (void *)MEMORY[0x8871E0]->?[0]; /*0x53ae85*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&word_A9FA48); /*0x53ae95*/
    v5 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v4 + 72))(v4, v9); /*0x53aea3*/
    v8[0] = *v5; /*0x53aea8*/
    v8[1] = v5[1]; /*0x53aeb4*/
    v8[2] = v5[2] + 750; /*0x53aec0*/
    v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53aec4*/
    if ( v6 ) /*0x53aece*/
      unk_A9FAC4 = (int)AnimClass::ctor(v6, v3, v8, 0, 1, (void *)0x600, 0, 0); /*0x53aeea*/
    else
      unk_A9FAC4 = 0; /*0x53aef1*/
    v7 = (char *)MEMORY[0xA8B230] + 4680; /*0x53af06*/
    unk_A9FAC0 = 1; /*0x53af0c*/
    *((_DWORD *)MEMORY[0xA8B230] + 1170) = MEMORY[0xA8ED84]; /*0x53af1b*/
    *((_DWORD *)v7 + 1) = v9[1]; /*0x53af21*/
    *((_DWORD *)v7 + 2) = 1; /*0x53af24*/
    return (RulesClass *)ScenarioClass::UpdateLighting(); /*0x53af27*/
  }
  return result; /*0x53af2d*/
}
}
} // namespace gamemd

// 0x6CAEC0
namespace gamemd {
int SuperClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6CAEC0(int this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6caec3*/
  this->SuperClass_field_0x24 = -1; /*0x6caecd*/
  this->SuperClass_field_0x28 = 0; /*0x6caed0*/
  this->SuperClass_field_0x2C = 0; /*0x6caed3*/
  this->SuperClass_field_0x30 = MEMORY[0xA8ED84]; /*0x6caedc*/
  this->SuperClass_field_0x38 = 0; /*0x6caedf*/
  *(_DWORD *)(this + 72) = 0; /*0x6caee2*/
  *(_BYTE *)(this + 64) = 0; /*0x6caee5*/
  *(_DWORD *)(this + 76) = 0; /*0x6caee8*/
  *(_DWORD *)(this + 80) = -1; /*0x6caeeb*/
  *(_BYTE *)(this + 96) = 1; /*0x6caeee*/
  *(_DWORD *)(this + 98) = MEMORY[0xB0C000]; /*0x6caef8*/
  this->SuperClass_field_0x68 = 0; /*0x6caefb*/
  *(_BYTE *)(this + 108) = 0; /*0x6caefe*/
  *(_BYTE *)(this + 109) = 0; /*0x6caf01*/
  *(_BYTE *)(this + 110) = 0; /*0x6caf04*/
  *(_BYTE *)(this + 111) = 0; /*0x6caf07*/
  *(_BYTE *)(this + 112) = 0; /*0x6caf0a*/
  this->SuperClass_field_0x7C = -1; /*0x6caf0d*/
  *(_DWORD *)this = &SuperClass::`vftable'; /*0x6caf10*/
  this->SuperClass_field_0x4 = &SuperClass::`vftable'; /*0x6caf16*/
  this->SuperClass_field_0x8 = &SuperClass::`vftable'; /*0x6caf1d*/
  *(_DWORD *)(this + 12) = &vt_SuperClass; /*0x6caf24*/
  *(_DWORD *)(this + 60) = &MEMORY[0x887734]; /*0x6caf2b*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6caf64*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v2 = dword_A83CC8++; /*0x6caf71*/
    *((_DWORD *)dword_A83CBC + v2) = this; /*0x6caf80*/
  }
  return this; /*0x6caf85*/
}
}
} // namespace gamemd

// 0x6CAF90
namespace gamemd {
int SuperClass::Construct(int a2, CCINIClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SuperClass::Construct(int this, int a2, CCINIClass *aP2)
{
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6caf94*/
  this->SuperClass_field_0x28 = a2; /*0x6cafa4*/
  this->SuperClass_field_0x24 = -1; /*0x6cafa7*/
  this->SuperClass_field_0x2C = aP2; /*0x6cafaa*/
  this->SuperClass_field_0x30 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6cafb5*/
  this->SuperClass_field_0x38 = 0; /*0x6cafb8*/
  *(_DWORD *)(this + 72) = 0; /*0x6cafbb*/
  *(_BYTE *)(this + 64) = 0; /*0x6cafbe*/
  *(_DWORD *)(this + 76) = 0; /*0x6cafc1*/
  *(_DWORD *)(this + 80) = -1; /*0x6cafc4*/
  *(_BYTE *)(this + 96) = 1; /*0x6cafc7*/
  v4 = *(_DWORD *)&stru_B05488.__pad_579C[5084]; /*0x6cafcb*/
  this->SuperClass_field_0x78 = -1; /*0x6cafd1*/
  this->SuperClass_field_0x7C = -1; /*0x6cafd4*/
  *(_DWORD *)(this + 98) = v4; /*0x6cafda*/
  this->SuperClass_field_0x68 = 0; /*0x6cafde*/
  *(_BYTE *)(this + 108) = 0; /*0x6cafe1*/
  *(_BYTE *)(this + 109) = 0; /*0x6cafe4*/
  *(_BYTE *)(this + 110) = 0; /*0x6cafe7*/
  *(_BYTE *)(this + 111) = 0; /*0x6cafea*/
  *(_BYTE *)(this + 112) = 0; /*0x6cafed*/
  this->SuperClass_field_0x74 = -100; /*0x6caff0*/
  *(_DWORD *)this = &SuperClass::`vftable'; /*0x6caff7*/
  this->SuperClass_field_0x4 = &SuperClass::`vftable'; /*0x6caffd*/
  this->SuperClass_field_0x8 = &SuperClass::`vftable'; /*0x6cb003*/
  *(_DWORD *)(this + 12) = &vt_SuperClass; /*0x6cb00a*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x6cb011*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6cb049*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_A83CB8->field_8)(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v5 = dword_A83CC8++; /*0x6cb056*/
    *(_DWORD *)&dword_A83CBC->__pad_0[4 * v5] = this; /*0x6cb065*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x6cb09c*/
    || (stru_B05488.__pad_579C[19033] || !*(_DWORD *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(_DWORD *)&stru_B05488.__pad_579C[19028] + *(_DWORD *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v6 = (*(_DWORD *)&stru_B05488.__pad_579C[19036])++; /*0x6cb0a9*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v6) = this; /*0x6cb0b8*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19124] < *(int *)&stru_B05488.__pad_579C[19116] /*0x6cb0ef*/
    || (stru_B05488.__pad_579C[19121] || !*(_DWORD *)&stru_B05488.__pad_579C[19116])
    && *(int *)&stru_B05488.__pad_579C[19128] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19108] + 8))(
         &stru_B05488.__pad_579C[19108],
         *(_DWORD *)&stru_B05488.__pad_579C[19116] + *(_DWORD *)&stru_B05488.__pad_579C[19128],
         0) )
  {
    v7 = (*(_DWORD *)&stru_B05488.__pad_579C[19124])++; /*0x6cb0fc*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19112] + 4 * v7) = this; /*0x6cb10b*/
  }
  return this; /*0x6cb110*/
}
}
} // namespace gamemd

// 0x6CB120
namespace gamemd {
void SuperClass::CleanupMembers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_6CB120(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+14h] [ebp-4h] BYREF

  v2 = this->SuperClass_field_0x68; /*0x6cb124*/
  *(_DWORD *)this = &SuperClass::`vftable'; /*0x6cb127*/
  this->SuperClass_field_0x4 = &SuperClass::`vftable'; /*0x6cb12f*/
  this->SuperClass_field_0x8 = &SuperClass::`vftable'; /*0x6cb136*/
  *(_DWORD *)(this + 12) = &vt_SuperClass; /*0x6cb13d*/
  if ( v2 ) /*0x6cb144*/
  {
    *(_BYTE *)(v2 + 405) = 0; /*0x6cb146*/
    this->SuperClass_field_0x68 = 0; /*0x6cb14d*/
    v9 = this; /*0x6cb164*/
    v3 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v9); /*0x6cb168*/
    if ( v3 != -1 ) /*0x6cb16e*/
      DynamicVector::RemoveItem(&MEMORY[0xB0F5B8], v3); /*0x6cb176*/
  }
  if ( (unsigned char)this->SuperClass_field_0x6C ) /*0x6cb17b*/
  {
    v9 = this; /*0x6cb192*/
    v4 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v9); /*0x6cb196*/
    if ( v4 != -1 ) /*0x6cb19c*/
      DynamicVector::RemoveItem(&MEMORY[0xB0F5B8], v4); /*0x6cb1a4*/
    *(_BYTE *)(this + 108) = 0; /*0x6cb1a9*/
  }
  v9 = this; /*0x6cb1bd*/
  v5 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xA83D50] + 16))(&MEMORY[0xA83D50], &v9); /*0x6cb1c1*/
  if ( v5 != -1 && v5 < MEMORY[0xA83D60] && v5 < --MEMORY[0xA83D60] ) /*0x6cb1dc*/
  {
    do /*0x6cb1f4*/
    {
      ++v5; /*0x6cb1e4*/
      *((_DWORD *)MEMORY[0xA83D54] + v5 - 1) = *((_DWORD *)MEMORY[0xA83D54] + v5); /*0x6cb1e8*/
    }
    while ( v5 < MEMORY[0xA83D60] ); /*0x6cb1f4*/
  }
  v9 = this; /*0x6cb206*/
  v6 = (*(int (__thiscall **)(int *, int *))(dword_A83CB8 + 16))(&dword_A83CB8, &v9); /*0x6cb20a*/
  if ( v6 != -1 && v6 < dword_A83CC8 && v6 < --dword_A83CC8 ) /*0x6cb225*/
  {
    do /*0x6cb23d*/
    {
      ++v6; /*0x6cb22d*/
      *((_DWORD *)dword_A83CBC + v6 - 1) = *((_DWORD *)dword_A83CBC + v6); /*0x6cb231*/
    }
    while ( v6 < dword_A83CC8 ); /*0x6cb23d*/
  }
  v9 = this; /*0x6cb24f*/
  v7 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v9); /*0x6cb253*/
  if ( v7 != -1 && v7 < MEMORY[0xB0F680] && v7 < --MEMORY[0xB0F680] ) /*0x6cb26e*/
  {
    do /*0x6cb286*/
    {
      ++v7; /*0x6cb276*/
      *((_DWORD *)MEMORY[0xB0F674] + v7 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v7); /*0x6cb27a*/
    }
    while ( v7 < MEMORY[0xB0F680] ); /*0x6cb286*/
  }
  v9 = this; /*0x6cb298*/
  v8 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F6C8] + 16))(&MEMORY[0xB0F6C8], &v9); /*0x6cb29c*/
  if ( v8 != -1 && v8 < MEMORY[0xB0F6D8] && v8 < --MEMORY[0xB0F6D8] ) /*0x6cb2b7*/
  {
    do /*0x6cb2cf*/
    {
      ++v8; /*0x6cb2bf*/
      *((_DWORD *)MEMORY[0xB0F6CC] + v8 - 1) = *((_DWORD *)MEMORY[0xB0F6CC] + v8); /*0x6cb2c3*/
    }
    while ( v8 < MEMORY[0xB0F6D8] ); /*0x6cb2cf*/
  }
  AbstractClass::DTOR((_DWORD *)this); /*0x6cb2d3*/
}
}
} // namespace gamemd

// 0x6CB3A0
namespace gamemd {
void ** SuperClass::CreateChronoAnim(AbstractClass * aP1, SuperClass * aP2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void **__thiscall SuperClass::CreateChronoAnim(int this, AbstractClass *aP1, SuperClass *aP2, int a4)
{
  AnimClass *v5; // eax
  IUnknown *v6; // eax
  IUnknown *v7; // eax
  void **result; // eax
  int v9; // [esp+4h] [ebp-10h] BYREF
  CoordStruct aP2a; // [esp+8h] [ebp-Ch] BYREF

  v5 = *(AnimClass **)(this + 104); /*0x6cb3a6*/
  if ( v5 ) /*0x6cb3ab*/
  {
    v5->__pad_194[1] = 0; /*0x6cb3ad*/
    this->SuperClass_field_0x68 = 0; /*0x6cb3b4*/
    v9 = this; /*0x6cb3cb*/
    v6 = (IUnknown *)(*(int (__thiscall **)(char *, int *))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 16))( /*0x6cb3cf*/
                       &stru_B05488.__pad_579C[18836],
                       &v9);
    if ( v6 != (IUnknown *)-1 ) /*0x6cb3d5*/
      DynamicVector::RemoveItem(&stru_B05488.__pad_579C[18836], v6); /*0x6cb3dd*/
  }
  if ( (unsigned char)this->SuperClass_field_0x6C ) /*0x6cb3e2*/
  {
    v9 = this; /*0x6cb3f9*/
    v7 = (IUnknown *)(*(int (__thiscall **)(char *, int *))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 16))( /*0x6cb3fd*/
                       &stru_B05488.__pad_579C[18836],
                       &v9);
    if ( v7 != (IUnknown *)-1 ) /*0x6cb403*/
      DynamicVector::RemoveItem(&stru_B05488.__pad_579C[18836], v7); /*0x6cb40b*/
    *(_BYTE *)(this + 108) = 0; /*0x6cb410*/
  }
  result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6cb419*/
  if ( result ) /*0x6cb423*/
  {
    aP2a.X = (int)aP1; /*0x6cb444*/
    aP2a.Y = (int)aP2; /*0x6cb455*/
    aP2a.Z = a4 + 5; /*0x6cb459*/
    result = (void **)AnimClass::ctor( /*0x6cb467*/
                        result,
                        *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 816),
                        &aP2a,
                        0,
                        (CoordStruct *)1,
                        (void *)0x600,
                        0,
                        0);
    if ( result ) /*0x6cb470*/
    {
      this->SuperClass_field_0x68 = result; /*0x6cb472*/
      result = *(void ***)&stru_B05488.__pad_579C[18844]; /*0x6cb475*/
      if ( *(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844] /*0x6cb4ae*/
        || (stru_B05488.__pad_579C[18849] || !*(_DWORD *)&stru_B05488.__pad_579C[18844])
        && *(int *)&stru_B05488.__pad_579C[18856] > 0
        && (result = (void **)(*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 8))(
                                &stru_B05488.__pad_579C[18836],
                                *(_DWORD *)&stru_B05488.__pad_579C[18844] + *(_DWORD *)&stru_B05488.__pad_579C[18856],
                                0),
            (_BYTE)result) )
      {
        result = (void **)(*(_DWORD *)&stru_B05488.__pad_579C[18852])++; /*0x6cb4b6*/
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * (_DWORD)result) = this; /*0x6cb4c5*/
      }
    }
  }
  return result; /*0x6cb4c8*/
}
}
} // namespace gamemd

// 0x6CB4D0
namespace gamemd {
char SuperClass::SetOnHold(CoordStruct * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SuperClass::SetOnHold(int this, CoordStruct *aP1)
{
  IUnknown *v3; // esi
  int v4; // eax
  int v5; // eax

  if ( !*(_BYTE *)(this + 109) /*0x6cb4ea*/
    || *(_BYTE *)(this + 110)
    || (_BYTE)aP1 == (unsigned char)this->SuperClass_field_0x70
    || !(unsigned char)this->SuperClass_field_0x60 )
  {
    return 0; /*0x6cb552*/
  }
  if ( (_BYTE)aP1 || *(_BYTE *)(this->SuperClass_field_0x28 + 245) ) /*0x6cb4f9*/
  {
    v3 = *(IUnknown **)(this + 48); /*0x6cb51c*/
    if ( v3 != (IUnknown *)-1 ) /*0x6cb522*/
    {
      v4 = this->SuperClass_field_0x38; /*0x6cb524*/
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v3 >= v4 ) /*0x6cb536*/
        v5 = 0; /*0x6cb53c*/
      else
        v5 = v4 - (*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (_DWORD)v3); /*0x6cb538*/
      this->SuperClass_field_0x38 = v5; /*0x6cb53e*/
      this->SuperClass_field_0x30 = -1; /*0x6cb541*/
    }
  }
  else if ( this->SuperClass_field_0x30 == -1 ) /*0x6cb507*/
  {
    this->SuperClass_field_0x30 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cb510*/
    *(_BYTE *)(this + 112) = 0; /*0x6cb513*/
    return 1; /*0x6cb519*/
  }
  *(_BYTE *)(this + 112) = (_BYTE)aP1; /*0x6cb548*/
  return 1; /*0x6cb518*/
}
}
} // namespace gamemd

// 0x6CB560
namespace gamemd {
char SuperClass::StartTimer(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SuperClass::StartTimer(int this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3)
{
  char v5; // al
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  TerrainTypeClass *v11; // eax
  IUnknown *v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // eax
  DynamicVector *DefaultTimer; // eax
  int v17; // eax
  DynamicVector *v18; // ecx
  int v19; // edx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h]
  DynamicVector *v23; // [esp+10h] [ebp-4h]

  if ( !*(_BYTE *)(this + 109) ) /*0x6cb569*/
  {
    v5 = (char)aP1; /*0x6cb572*/
    v6 = this->SuperClass_field_0x28; /*0x6cb576*/
    *(_BYTE *)(this + 109) = 1; /*0x6cb579*/
    *(_BYTE *)(this + 110) = v5; /*0x6cb57d*/
    *(_BYTE *)(this + 64) = 0; /*0x6cb580*/
    v7 = *(_DWORD *)(v6 + 96); /*0x6cb583*/
    LOBYTE(aP1) = 0; /*0x6cb589*/
    *(_DWORD *)(this + 60) = v7; /*0x6cb58d*/
    if ( !v5 && (unsigned char)this->SuperClass_field_0x70 && (unsigned char)this->SuperClass_field_0x60 ) /*0x6cb597*/
    {
      if ( *(_BYTE *)(v6 + 245) ) /*0x6cb59c*/
      {
        if ( this->SuperClass_field_0x30 != -1 ) /*0x6cb5bd*/
        {
          this->SuperClass_field_0x38 = CDTimerClass::TimeRemaining((int *)(this + 48)); /*0x6cb5c6*/
          this->SuperClass_field_0x30 = -1; /*0x6cb5c9*/
        }
      }
      else if ( this->SuperClass_field_0x30 == -1 ) /*0x6cb5a8*/
      {
        this->SuperClass_field_0x30 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cb5af*/
      }
      *(_BYTE *)(this + 112) = 0; /*0x6cb5cf*/
    }
    if ( *(_BYTE *)(this->SuperClass_field_0x28 + 244) /*0x6cb61f*/
      && !*(_BYTE *)(*(_DWORD *)(this->SuperClass_field_0x2C + 52) + 422)
      && (MEMORY[0xA83D60] < MEMORY[0xA83D58]
       || (MEMORY[0xA83D5D] || !MEMORY[0xA83D58])
       && MEMORY[0xA83D64] > 0
       && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xA83D50]->field_8)(
            &MEMORY[0xA83D50],
            MEMORY[0xA83D58] + MEMORY[0xA83D64],
            0)) )
    {
      v8 = MEMORY[0xA83D60]++; /*0x6cb62c*/
      *(_DWORD *)&MEMORY[0xA83D54]->__pad_0[4 * v8] = this; /*0x6cb63b*/
    }
    v9 = this->SuperClass_field_0x28; /*0x6cb63e*/
    if ( *(_BYTE *)(v9 + 245) ) /*0x6cb641*/
    {
      v10 = this->SuperClass_field_0x24; /*0x6cb649*/
      this->SuperClass_field_0x78 = -1; /*0x6cb64c*/
      if ( v10 == -1 ) /*0x6cb656*/
        v10 = *(_DWORD *)(v9 + 176); /*0x6cb658*/
      v11 = (TerrainTypeClass *)(this + 48); /*0x6cb664*/
      this->SuperClass_field_0x30 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cb669*/
      *(_DWORD *)(this + 52) = v22; /*0x6cb66f*/
      this->SuperClass_field_0x38 = v10; /*0x6cb672*/
      v12 = *(IUnknown **)(this + 48); /*0x6cb675*/
      if ( v12 != (IUnknown *)-1 ) /*0x6cb67a*/
      {
        v13 = this->SuperClass_field_0x38; /*0x6cb680*/
        v14 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (_DWORD)v12; /*0x6cb68e*/
        if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v12 >= v13 ) /*0x6cb692*/
        {
          this->SuperClass_field_0x38 = 0; /*0x6cb6a6*/
          *(_DWORD *)v11->__pad_0 = -1; /*0x6cb6a9*/
        }
        else
        {
          *(_DWORD *)v11->__pad_0 = -1; /*0x6cb696*/
          this->SuperClass_field_0x38 = v13 - v14; /*0x6cb69c*/
        }
      }
    }
    else
    {
      v15 = this->SuperClass_field_0x68; /*0x6cb6b4*/
      if ( v15 ) /*0x6cb6b9*/
      {
        *(_BYTE *)(v15 + 405) = 0; /*0x6cb6bf*/
        this->SuperClass_field_0x68 = 0; /*0x6cb6cb*/
        aP1 = (IUnknown *)this; /*0x6cb6ce*/
        VectorClass::RemoveAt((int *)&MEMORY[0xB077F8].__pad_579C[9764], (int)&aP1); /*0x6cb6d2*/
      }
      if ( (unsigned char)this->SuperClass_field_0x6C ) /*0x6cb6d7*/
      {
        aP1 = (IUnknown *)this; /*0x6cb6e6*/
        VectorClass::RemoveAt((int *)&MEMORY[0xB077F8].__pad_579C[9764], (int)&aP1); /*0x6cb6ea*/
        *(_BYTE *)(this + 108) = 0; /*0x6cb6ef*/
      }
      if ( !*(_BYTE *)(this + 109) /*0x6cb704*/
        || *(_BYTE *)(this + 111)
        || (unsigned char)this->SuperClass_field_0x70 && !*(_BYTE *)(this->SuperClass_field_0x28 + 237) )
      {
        LOBYTE(aP1) = 0; /*0x6cb757*/
      }
      else
      {
        this->SuperClass_field_0x78 = -1; /*0x6cb70f*/
        SuperClass::SetCurrentFrame((_DWORD *)(this + 48)); /*0x6cb718*/
        DefaultTimer = (DynamicVector *)Super::GetDefaultTimer((_DWORD *)this); /*0x6cb71f*/
        Timer::Start(&v21, DefaultTimer); /*0x6cb729*/
        v17 = v22; /*0x6cb732*/
        v18 = v23; /*0x6cb736*/
        this->SuperClass_field_0x30 = v21; /*0x6cb73a*/
        v19 = this->SuperClass_field_0x28; /*0x6cb73c*/
        *(_DWORD *)(this + 52) = v17; /*0x6cb73f*/
        this->SuperClass_field_0x38 = v18; /*0x6cb742*/
        if ( *(_BYTE *)(v19 + 229) ) /*0x6cb745*/
          this->SuperClass_field_0x7C = 0; /*0x6cb74d*/
        LOBYTE(aP1) = 1; /*0x6cb750*/
      }
    }
    if ( (_BYTE)aP3 && *(_BYTE *)(this + 109) ) /*0x6cb764*/
    {
      if ( *(_BYTE *)(this + 110) ) /*0x6cb769*/
        goto LABEL_45; /*0x6cb76c*/
      if ( (unsigned char)this->SuperClass_field_0x70 != 1 ) /*0x6cb772*/
      {
        if ( (unsigned char)this->SuperClass_field_0x60 ) /*0x6cb774*/
        {
          SuperClass::AdvanceCountdown((int *)(this + 48)); /*0x6cb77c*/
          *(_BYTE *)(this + 112) = 1; /*0x6cb781*/
        }
      }
    }
    if ( !*(_BYTE *)(this + 110) ) /*0x6cb788*/
      return (char)aP1; /*0x6cb79f*/
LABEL_45:
    SuperClass::AnnounceReady(this, (DynamicVector *)aP2); /*0x6cb78a*/
    return (char)aP1; /*0x6cb791*/
  }
  return 0; /*0x6cb79a*/
}
}
} // namespace gamemd

// 0x6CB7B0
namespace gamemd {
char SuperClass::Lose()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SuperClass::Lose(_BYTE *this)
{
  int v1; // eax
  _BYTE *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x6cb7b0*/
  if ( !*(this + 109) ) /*0x6cb7b1*/
    return 0; /*0x6cb80d*/
  *(this + 111) = 0; /*0x6cb7ba*/
  *(this + 109) = 0; /*0x6cb7bd*/
  v3 = this; /*0x6cb7ca*/
  v1 = (*(int (__thiscall **)(int *, _BYTE **))(MEMORY[0xA83D50] + 16))(&MEMORY[0xA83D50], &v3); /*0x6cb7d4*/
  if ( v1 != -1 && v1 < MEMORY[0xA83D60] && v1 < --MEMORY[0xA83D60] ) /*0x6cb7ef*/
  {
    do /*0x6cb807*/
    {
      ++v1; /*0x6cb7f7*/
      *((_DWORD *)MEMORY[0xA83D54] + v1 - 1) = *((_DWORD *)MEMORY[0xA83D54] + v1); /*0x6cb7fb*/
    }
    while ( v1 < MEMORY[0xA83D60] ); /*0x6cb807*/
  }
  return 1; /*0x6cb80c*/
}
}
} // namespace gamemd

// 0x6CB820
namespace gamemd {
char SuperClass::SetReadiness(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SuperClass::SetReadiness(_BYTE *this, char a2)
{
  *(this + 111) = a2; /*0x6cb824*/
  return a2; /*0x6cb827*/
}
}
} // namespace gamemd

// 0x6CB830
namespace gamemd {
char SuperClass::StopPreclickAnim(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SuperClass::StopPreclickAnim(int this, IUnknown *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  _DWORD v8[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = this->SuperClass_field_0x68; /*0x6cb839*/
  if ( v3 ) /*0x6cb83e*/
  {
    *(_BYTE *)(v3 + 405) = 0; /*0x6cb840*/
    this->SuperClass_field_0x68 = 0; /*0x6cb846*/
    v8[0] = this; /*0x6cb859*/
    v4 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9764] + 16))( /*0x6cb85d*/
           &MEMORY[0xB077F8].__pad_579C[9764],
           v8);
    if ( v4 != -1 ) /*0x6cb863*/
      DynamicVector::RemoveItem(&MEMORY[0xB077F8].__pad_579C[9764], v4); /*0x6cb86b*/
  }
  if ( (unsigned char)this->SuperClass_field_0x6C ) /*0x6cb870*/
  {
    v8[0] = this; /*0x6cb885*/
    v5 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9764] + 16))( /*0x6cb889*/
           &MEMORY[0xB077F8].__pad_579C[9764],
           v8);
    if ( v5 != -1 ) /*0x6cb88f*/
      DynamicVector::RemoveItem(&MEMORY[0xB077F8].__pad_579C[9764], v5); /*0x6cb897*/
    *(_BYTE *)(this + 108) = 0; /*0x6cb89c*/
  }
  if ( !*(_BYTE *)(this + 109) /*0x6cb8b1*/
    || *(_BYTE *)(this + 111)
    || (unsigned char)this->SuperClass_field_0x70 && !*(_BYTE *)(this->SuperClass_field_0x28 + 237) )
  {
    return 0; /*0x6cb90d*/
  }
  this->SuperClass_field_0x78 = -1; /*0x6cb8b9*/
  if ( this->SuperClass_field_0x30 == -1 ) /*0x6cb8c6*/
    this->SuperClass_field_0x30 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cb8ce*/
  v6 = this->SuperClass_field_0x24; /*0x6cb8d1*/
  if ( v6 == -1 ) /*0x6cb8d7*/
    v6 = *(_DWORD *)(this->SuperClass_field_0x28 + 176); /*0x6cb8dc*/
  this->SuperClass_field_0x30 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cb8e7*/
  *(_DWORD *)(this + 52) = v8[2]; /*0x6cb8ee*/
  this->SuperClass_field_0x38 = v6; /*0x6cb8f1*/
  if ( *(_BYTE *)(this->SuperClass_field_0x28 + 229) ) /*0x6cb8f7*/
    this->SuperClass_field_0x7C = 0; /*0x6cb8ff*/
  return 1; /*0x6cb902*/
}
}
} // namespace gamemd

// 0x6CB920
namespace gamemd {
char SuperClass::ClickFire(int a2, short * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SuperClass::ClickFire(int this, int a2, __int16 *a3)
{
  int v4; // eax
  int v5; // eax
  __int16 *v6; // eax
  int v7; // edx
  int v8; // ecx
  wchar_t *v9; // edi
  wchar_t **v10; // esi
  wchar_t *v11; // eax
  int v13; // edi
  int v14; // edx
  int v15; // eax
  wchar_t *v16; // ebp
  int v17; // eax
  int v18; // edx
  wchar_t **v19; // edi
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // ecx
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  int v26; // ecx
  char *v27; // edx
  int v28; // eax
  int v29; // ecx
  wchar_t *v30; // [esp+14h] [ebp-8h]

  v4 = this->SuperClass_field_0x28; /*0x6cb92a*/
  if ( *(_BYTE *)(v4 + 229) ) /*0x6cb92d*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 44)) ) /*0x6cb93c*/
    {
      v5 = this->SuperClass_field_0x7C; /*0x6cb949*/
      if ( v5 == 2 ) /*0x6cb94f*/
      {
        v6 = *(__int16 **)(this + 36); /*0x6cb951*/
        this->SuperClass_field_0x7C = 1; /*0x6cb954*/
        if ( v6 == (__int16 *)-1 ) /*0x6cb95e*/
          a3 = *(__int16 **)(this->SuperClass_field_0x28 + 176); /*0x6cb96f*/
        else
          a3 = v6; /*0x6cb960*/
        v7 = this->SuperClass_field_0x30; /*0x6cb973*/
        v8 = this->SuperClass_field_0x38; /*0x6cb976*/
        v9 = MEMORY[0xA8ED84]; /*0x6cb979*/
        v10 = (wchar_t **)(this + 48); /*0x6cb97f*/
        if ( v7 != -1 ) /*0x6cb985*/
        {
          if ( (int)MEMORY[0xA8ED84] - v7 >= v8 ) /*0x6cb98d*/
          {
            a2 = 0; /*0x6cb9c7*/
            goto LABEL_11; /*0x6cb9cb*/
          }
          v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x6cb98f*/
        }
        a2 = v8; /*0x6cb991*/
LABEL_11:
        v11 = (wchar_t *)Math::RoundToInt((double)(int)a3 - (double)a2 /*0x6cb995*/
                                                          / *(double *)&MEMORY[0x8871E0]->WallBuildSpeedCoefficient[2]);
        *v10 = v9; /*0x6cb9b4*/
        v10[1] = v30; /*0x6cb9b6*/
        v10[2] = v11; /*0x6cb9b9*/
        return 0; /*0x6cb9c4*/
      }
      if ( v5 == 1 ) /*0x6cb9d0*/
      {
        v13 = this->SuperClass_field_0x24; /*0x6cb9d6*/
        this->SuperClass_field_0x7C = 2; /*0x6cb9d9*/
        if ( v13 == -1 ) /*0x6cb9e3*/
          v13 = *(_DWORD *)(this->SuperClass_field_0x28 + 176); /*0x6cb9e8*/
        v14 = this->SuperClass_field_0x30; /*0x6cb9ee*/
        v15 = this->SuperClass_field_0x38; /*0x6cb9f1*/
        v16 = MEMORY[0xA8ED84]; /*0x6cb9f5*/
        if ( v14 != -1 ) /*0x6cb9fe*/
        {
          if ( (int)MEMORY[0xA8ED84] - v14 >= v15 ) /*0x6cba06*/
            v15 = 0; /*0x6cba0c*/
          else
            v15 -= (int)MEMORY[0xA8ED84] - v14; /*0x6cba08*/
        }
        v17 = Math::RoundToInt((double)(v13 - v15) * *(double *)&MEMORY[0x8871E0]->WallBuildSpeedCoefficient[2]); /*0x6cba23*/
        v18 = a2; /*0x6cba2c*/
        this->SuperClass_field_0x30 = v16; /*0x6cba30*/
        *(_DWORD *)(this + 52) = v30; /*0x6cba33*/
        this->SuperClass_field_0x38 = v17; /*0x6cba36*/
        SuperClass::Launch(this, v18, a3, v18); /*0x6cba41*/
        return 0; /*0x6cba4f*/
      }
    }
    else if ( !*(_BYTE *)(this->SuperClass_field_0x2C + 506) ) /*0x6cba55*/
    {
      SuperClass::Launch(this, a2, a3, a2); /*0x6cba6d*/
      return 0; /*0x6cba7a*/
    }
    return 0; /*0x6cbc96*/
  }
  v19 = (wchar_t **)(this + 48); /*0x6cba80*/
  if ( (this->SuperClass_field_0x30 == -1 || !*(_BYTE *)(this + 109) || !*(_BYTE *)(this + 111)) && !*(_BYTE *)(v4 + 238) ) /*0x6cba98*/
    return 0; /*0x6cba98*/
  if ( *(_DWORD *)(v4 + 180) == 2 && (unsigned __int8)Weapon_Helper() ) /*0x6cbaa7*/
  {
    if ( (_BYTE)a2 ) /*0x6cbab4*/
    {
      Weapon_Get(); /*0x6cbaba*/
      return 0; /*0x6cbac7*/
    }
    return 0; /*0x6cbab4*/
  }
  if ( *(_DWORD *)(this->SuperClass_field_0x28 + 180) == 7 && PsyDom::IsActive() ) /*0x6cbad6*/
  {
    if ( (_BYTE)a2 ) /*0x6cbae3*/
    {
      Weapon_Get_53B410(); /*0x6cbae9*/
      return 0; /*0x6cbaf6*/
    }
    return 0; /*0x6cbae3*/
  }
  SuperClass::Launch(this, a2, a3, a2); /*0x6cbb05*/
  v20 = this->SuperClass_field_0x28; /*0x6cbb0a*/
  if ( !*(_BYTE *)(v20 + 238) ) /*0x6cbb0d*/
    *(_BYTE *)(this + 111) = 0; /*0x6cbb15*/
  if ( !*(_BYTE *)(this + 110) ) /*0x6cbb1b*/
  {
    if ( *(_BYTE *)(v20 + 245) ) /*0x6cbb63*/
    {
      v23 = this->SuperClass_field_0x24; /*0x6cbb6b*/
      if ( v23 == -1 ) /*0x6cbb71*/
        v23 = *(_DWORD *)(v20 + 176); /*0x6cbb73*/
      v24 = MEMORY[0xA8ED84]; /*0x6cbb79*/
      this->SuperClass_field_0x78 = -1; /*0x6cbb80*/
      *v19 = v24; /*0x6cbb87*/
      *(_DWORD *)(this + 52) = v30; /*0x6cbb8d*/
      this->SuperClass_field_0x38 = v23; /*0x6cbb90*/
      v25 = *v19; /*0x6cbb93*/
      if ( *v19 != (wchar_t *)-1 ) /*0x6cbb98*/
      {
        v26 = this->SuperClass_field_0x38; /*0x6cbb9e*/
        v27 = (char *)((char *)MEMORY[0xA8ED84] - (char *)v25); /*0x6cbbac*/
        if ( (char *)MEMORY[0xA8ED84] - (char *)v25 >= v26 ) /*0x6cbbb0*/
        {
          this->SuperClass_field_0x38 = 0; /*0x6cbbca*/
          *v19 = (wchar_t *)-1; /*0x6cbbcd*/
        }
        else
        {
          *v19 = (wchar_t *)-1; /*0x6cbbb4*/
          this->SuperClass_field_0x38 = v26 - (_DWORD)v27; /*0x6cbbba*/
        }
        return 0; /*0x6cbbc5*/
      }
    }
    else if ( !*(_BYTE *)(v20 + 237) && !*(_BYTE *)(v20 + 238) ) /*0x6cbbea*/
    {
      v28 = this->SuperClass_field_0x68; /*0x6cbbf6*/
      if ( v28 ) /*0x6cbbfb*/
      {
        *(_BYTE *)(v28 + 405) = 0; /*0x6cbc01*/
        this->SuperClass_field_0x68 = 0; /*0x6cbc0d*/
        a2 = this; /*0x6cbc10*/
        VectorClass::RemoveAt(&MEMORY[0xB0F5B8], (int)&a2); /*0x6cbc14*/
      }
      if ( (unsigned char)this->SuperClass_field_0x6C ) /*0x6cbc19*/
      {
        a2 = this; /*0x6cbc28*/
        VectorClass::RemoveAt(&MEMORY[0xB0F5B8], (int)&a2); /*0x6cbc2c*/
        *(_BYTE *)(this + 108) = 0; /*0x6cbc31*/
      }
      if ( *(_BYTE *)(this + 109) /*0x6cbc46*/
        && !*(_BYTE *)(this + 111)
        && (!(unsigned char)this->SuperClass_field_0x70 || *(_BYTE *)(this->SuperClass_field_0x28 + 237)) )
      {
        this->SuperClass_field_0x78 = -1; /*0x6cbc4e*/
        if ( *v19 == (wchar_t *)-1 ) /*0x6cbc5a*/
          *v19 = MEMORY[0xA8ED84]; /*0x6cbc62*/
        v29 = this->SuperClass_field_0x24; /*0x6cbc64*/
        if ( v29 == -1 ) /*0x6cbc6a*/
          v29 = *(_DWORD *)(this->SuperClass_field_0x28 + 176); /*0x6cbc6f*/
        *v19 = MEMORY[0xA8ED84]; /*0x6cbc7a*/
        *(_DWORD *)(this + 52) = v30; /*0x6cbc80*/
        this->SuperClass_field_0x38 = v29; /*0x6cbc83*/
        if ( *(_BYTE *)(this->SuperClass_field_0x28 + 229) ) /*0x6cbc89*/
          this->SuperClass_field_0x7C = 0; /*0x6cbc91*/
      }
    }
    return 0; /*0x6cbb98*/
  }
  v21 = *(_BYTE *)(this + 109); /*0x6cbb1d*/
  *(_BYTE *)(this + 110) = 0; /*0x6cbb20*/
  if ( !v21 ) /*0x6cbb25*/
    return 0; /*0x6cbb25*/
  *(_BYTE *)(this + 111) = 0; /*0x6cbb2f*/
  *(_BYTE *)(this + 109) = 0; /*0x6cbb32*/
  a2 = this; /*0x6cbb41*/
  v22 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xA83D50] + 16))(&MEMORY[0xA83D50], &a2); /*0x6cbb45*/
  if ( v22 != -1 ) /*0x6cbb4b*/
    SuperClass::RemoveFromPointerArray(v22); /*0x6cbb53*/
  return 1; /*0x6cb9bc*/
}
}
} // namespace gamemd

// 0x6CC080
namespace gamemd {
char SuperClass::AnnounceReady(DynamicVector * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SuperClass::AnnounceReady(int this, DynamicVector *aP1)
{
  char result; // al
  int v4; // edi
  int v5; // edi
  int v6; // edx
  int v7; // [esp+Ch] [ebp-8h]

  result = *(_BYTE *)(this + 109); /*0x6cc086*/
  if ( result ) /*0x6cc08b*/
  {
    v4 = this->SuperClass_field_0x24; /*0x6cc092*/
    *(_BYTE *)(this + 111) = 1; /*0x6cc098*/
    if ( v4 == -1 ) /*0x6cc09c*/
      v4 = *(_DWORD *)(this->SuperClass_field_0x28 + 176); /*0x6cc0a1*/
    v5 = v4 - Math::RoundToInt((double)v4); /*0x6cc0b4*/
    if ( !v5 ) /*0x6cc0b6*/
      *(_BYTE *)(this + 111) = 1; /*0x6cc0b8*/
    if ( this->SuperClass_field_0x30 == -1 ) /*0x6cc0c0*/
      this->SuperClass_field_0x30 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cc0c8*/
    this->SuperClass_field_0x30 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cc0d4*/
    *(_DWORD *)(this + 52) = v7; /*0x6cc0db*/
    this->SuperClass_field_0x38 = v5; /*0x6cc0de*/
    if ( (_BYTE)aP1 ) /*0x6cc0e4*/
    {
      switch ( *(_DWORD *)(this->SuperClass_field_0x28 + 180) ) /*0x6cc0fc*/
      {
        case 0: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50968], -1, -1); /*0x6cc10d*/
          break; /*0x6cc10d*/
        case 1: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50944], -1, -1); /*0x6cc119*/
          break; /*0x6cc119*/
        case 2: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50896], -1, -1); /*0x6cc131*/
          break; /*0x6cc131*/
        case 3: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50844], -1, -1); /*0x6cc149*/
          break; /*0x6cc149*/
        case 5: /*0x6cc0fc*/
        case 6: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50820], -1, -1); /*0x6cc155*/
          break; /*0x6cc155*/
        case 7: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50868], -1, -1); /*0x6cc13d*/
          break; /*0x6cc13d*/
        case 8: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50800], -1, -1); /*0x6cc161*/
          break; /*0x6cc161*/
        case 9: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50776], -1, -1); /*0x6cc16d*/
          break; /*0x6cc16d*/
        case 0xA: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50920], -1, -1); /*0x6cc125*/
          break; /*0x6cc125*/
        case 0xB: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50752], -1, -1); /*0x6cc179*/
          break; /*0x6cc179*/
        default:
          break;
      }
    }
    v6 = this->SuperClass_field_0x28; /*0x6cc17e*/
    this->SuperClass_field_0x74 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6cc187*/
    result = *(_BYTE *)(v6 + 229); /*0x6cc18a*/
    if ( result ) /*0x6cc192*/
      this->SuperClass_field_0x7C = 1; /*0x6cc194*/
  }
  return result; /*0x6cc19b*/
}
}
} // namespace gamemd

// 0x6CC1E0
namespace gamemd {
char SuperClass::SetCharge(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SuperClass::SetCharge(int this, int a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // esi
  int v7; // [esp+Ch] [ebp-8h]

  LOBYTE(v3) = *(_BYTE *)(this + 109); /*0x6cc1e6*/
  if ( (_BYTE)v3 ) /*0x6cc1eb*/
  {
    LOBYTE(v3) = a2; /*0x6cc1ed*/
    if ( (unsigned int)a2 <= 0x64 ) /*0x6cc1f3*/
    {
      v4 = this->SuperClass_field_0x24; /*0x6cc1fb*/
      if ( v4 == -1 ) /*0x6cc201*/
        v4 = *(_DWORD *)(this->SuperClass_field_0x28 + 176); /*0x6cc206*/
      v5 = v4 - Math::RoundToInt((double)a2 * 0.0099999998 * (double)v4); /*0x6cc223*/
      if ( !v5 ) /*0x6cc225*/
        *(_BYTE *)(this + 111) = 1; /*0x6cc227*/
      v3 = (_DWORD *)(this + 48); /*0x6cc22e*/
      if ( this->SuperClass_field_0x30 == -1 ) /*0x6cc234*/
        *v3 = MEMORY[0xA8ED84]; /*0x6cc23c*/
      *v3 = MEMORY[0xA8ED84]; /*0x6cc248*/
      *(_DWORD *)(this + 52) = v7; /*0x6cc24a*/
      this->SuperClass_field_0x38 = v5; /*0x6cc24d*/
    }
  }
  return (char)v3; /*0x6cc251*/
}
}
} // namespace gamemd

// 0x6CC280
namespace gamemd {
int SuperClass::SetRechargeTime(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SuperClass::SetRechargeTime(_DWORD *this, int a2)
{
  *(this + 9) = a2; /*0x6cc284*/
  return a2; /*0x6cc287*/
}
}
} // namespace gamemd

// 0x6CC290
namespace gamemd {
void SuperClass::ResetRechargeTime()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall SuperClass::ResetRechargeTime(_DWORD *this)
{
  *(this + 9) = -1; /*0x6cc290*/
}
}
} // namespace gamemd

// 0x6CC2B0
namespace gamemd {
wchar_t * SuperClass::NameReadiness()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall SuperClass::NameReadiness(int this)
{
  int v1; // ecx
  int v2; // ecx

  if ( (unsigned char)this->SuperClass_field_0x70 ) /*0x6cc2b0*/
    return GetStringCSF(MEMORY[0x83FB2C], 0, MEMORY[0x842510], 950); /*0x6cc34d*/
  if ( *(_BYTE *)(this->SuperClass_field_0x28 + 229) ) /*0x6cc2be*/
  {
    v1 = this->SuperClass_field_0x7C; /*0x6cc2c8*/
    if ( v1 ) /*0x6cc2ce*/
    {
      v2 = v1 - 1; /*0x6cc2d0*/
      if ( v2 ) /*0x6cc2d1*/
      {
        if ( v2 != 1 ) /*0x6cc2d4*/
          return 0; /*0x6cc2d8*/
        return GetStringCSF(MEMORY[0x8424FC], 0, MEMORY[0x842510], 925); /*0x6cc2ea*/
      }
      else
      {
        return GetStringCSF(g_Str_TXT_READY, 0, MEMORY[0x842510], 922); /*0x6cc301*/
      }
    }
    else
    {
      return GetStringCSF(MEMORY[0x8424EC], 0, MEMORY[0x842510], 919); /*0x6cc318*/
    }
  }
  else
  {
    if ( !*(_BYTE *)(this + 111) ) /*0x6cc323*/
      return 0; /*0x6cc323*/
    return GetStringCSF(g_Str_TXT_READY, 0, MEMORY[0x842510], 944); /*0x6cc336*/
  }
}
}
} // namespace gamemd

// 0x6CC360
namespace gamemd {
char SuperClass::CanFire()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SuperClass::CanFire(int this)
{
  if ( (unsigned char)this->SuperClass_field_0x70 ) /*0x6cc360*/
    return 0; /*0x6cc381*/
  if ( *(_BYTE *)(this->SuperClass_field_0x28 + 229) ) /*0x6cc36a*/
    return this->SuperClass_field_0x7C != 0; /*0x6cc379*/
  return *(_BYTE *)(this + 111); /*0x6cc37c*/
}
}
} // namespace gamemd

// 0x6CC390
namespace gamemd {
void SuperClass::Launch(int ecx0, int a2, short * aP3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// void __fastcall SuperClass::Launch(int ecx0, int a2, __int16 *aP3, char a4)
// {
//   SuperClass *v4; // ebx
//   int v5; // ebp
//   void *v6; // eax
//   int v7; // eax
//   AnimClass *v8; // eax
//   AbstractClass **v9; // eax
//   _BYTE *v10; // eax
//   void *v11; // eax
//   int v12; // eax
//   __int16 *v13; // ebp
//   void *v14; // eax
//   int v15; // eax
//   IUnknown *v16; // esi
//   _BYTE *v17; // eax
//   IUnknown *v18; // eax
//   void **v19; // eax
//   void **v20; // eax
//   char *v21; // edi
//   __int16 v22; // cx
//   __int16 v23; // dx
//   int *v24; // esi
//   __int16 v25; // ax
//   bool v26; // zf
//   int v27; // ecx
//   int v28; // edx
//   _DWORD *v29; // edx
//   bool v30; // bl
//   int v31; // eax
//   int Member; // eax
//   int *v33; // eax
//   _DWORD *v34; // eax
//   int v35; // ecx
//   int v36; // edi
//   int *v37; // eax
//   int v38; // eax
//   IUnknown **v39; // ebx
//   int v40; // eax
//   int InstanceCOM; // eax
//   int v42; // edi
//   __int16 v43; // ax
//   int v44; // edi
//   void *v45; // eax
//   int v46; // eax
//   SuperClass *v47; // ecx
//   int v48; // eax
//   S... [57374 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x6CDE90
namespace gamemd {
bool SuperClass::ShouldDrawProgress()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall SuperClass::ShouldDrawProgress(int this)
{
  return *(_BYTE *)(this->SuperClass_field_0x28 + 229) || *(_BYTE *)(this + 111) == 0; /*0x6cde9d*/
}
}
} // namespace gamemd

// 0x6CDEF0
namespace gamemd {
int SuperClass::LoadFromStream(AbstractClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SuperClass::LoadFromStream(AbstractClass *aP0, int aP1)
{
  int result; // eax
  int v3; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x6cdefb*/
  if ( result >= 0 ) /*0x6cdf02*/
  {
    if ( aP0 ) /*0x6cdf0a*/
    {
      AbstractClass::Constructor(aP0); /*0x6cdf0e*/
      *(_DWORD *)aP0->__pad_0 = &SuperClass::`vftable'; /*0x6cdf13*/
      *(_DWORD *)&aP0->__pad_0[4] = &SuperClass::`vftable'; /*0x6cdf19*/
      *(_DWORD *)&aP0->__pad_0[8] = &SuperClass::`vftable'; /*0x6cdf20*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_SuperClass; /*0x6cdf27*/
    }
    if ( aP0[2].NeedsSaveOrLink /*0x6cdf70*/
      && (*(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844]
       || (stru_B05488.__pad_579C[18849] || !*(_DWORD *)&stru_B05488.__pad_579C[18844])
       && *(int *)&stru_B05488.__pad_579C[18856] > 0
       && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 8))(
            &stru_B05488.__pad_579C[18836],
            *(_DWORD *)&stru_B05488.__pad_579C[18844] + *(_DWORD *)&stru_B05488.__pad_579C[18856],
            0)) )
    {
      v3 = (*(_DWORD *)&stru_B05488.__pad_579C[18852])++; /*0x6cdf7d*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * v3) = aP0; /*0x6cdf8c*/
    }
    ObjectPtr::RegisterForTracking( /*0x6cdf98*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x6cdfa6*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
    ObjectPtr::RegisterForTracking( /*0x6cdfb1*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].NeedsSaveOrLink);
    *(_DWORD *)aP0[2].__pad_0 = 0; /*0x6cdfb6*/
    *(_DWORD *)&aP0[2].__pad_0[4] = 0; /*0x6cdfbd*/
    return 0; /*0x6cdfc4*/
  }
  return result; /*0x6cdfc7*/
}
}
} // namespace gamemd

// 0x6CDFF0
namespace gamemd {
long long SuperClass::ExecuteAction(unsigned int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __thiscall SuperClass::_vt10(int this, unsigned int a2, int a3)
{
  __int64 result; // rax

  result = a2; /*0x6cdff8*/
  if ( a2 == this->SuperClass_field_0x2C ) /*0x6cdffc*/
    this->SuperClass_field_0x2C = 0; /*0x6cdffe*/
  if ( a2 == this->SuperClass_field_0x28 ) /*0x6ce004*/
    this->SuperClass_field_0x28 = 0; /*0x6ce006*/
  if ( a2 == this->SuperClass_field_0x68 ) /*0x6ce00f*/
  {
    this->SuperClass_field_0x68 = 0; /*0x6ce011*/
    *(_BYTE *)(this + 108) = 1; /*0x6ce014*/
  }
  return result; /*0x6ce00e*/
}
}
} // namespace gamemd

// 0x6CE020
namespace gamemd {
int SuperClass::PowerDrainUpdate(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SuperClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int result; // eax
  int v9; // eax

  v3 = AbstractClass::ProcessPower((#378 *)this); /*0x6ce029*/
  LOBYTE(v3) = *(_BYTE *)(this + 109); /*0x6ce02e*/
  Power::FlagProcess(a2, v3); /*0x6ce034*/
  LOBYTE(v4) = *(_BYTE *)(this + 110); /*0x6ce039*/
  Power::FlagProcess(a2, v4); /*0x6ce03f*/
  LOBYTE(v5) = *(_BYTE *)(this + 111); /*0x6ce044*/
  Power::FlagProcess(a2, v5); /*0x6ce04a*/
  Power::TimerProcess(this->SuperClass_field_0x78); /*0x6ce055*/
  Power::TimerProcess(this->SuperClass_field_0x7C); /*0x6ce060*/
  LOBYTE(v6) = (unsigned char)this->SuperClass_field_0x60; /*0x6ce065*/
  v7 = Power::FlagProcess(a2, v6); /*0x6ce06b*/
  LOBYTE(v7) = (unsigned char)this->SuperClass_field_0x6C; /*0x6ce070*/
  Power::FlagProcess(a2, v7); /*0x6ce076*/
  result = this->SuperClass_field_0x68; /*0x6ce07b*/
  if ( result ) /*0x6ce080*/
  {
    Power::TimerProcess(*(unsigned __int8 *)(result + 405)); /*0x6ce08d*/
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->SuperClass_field_0x68 + 4) + 16))(this->SuperClass_field_0x68 + 4); /*0x6ce09c*/
    return Power::TimerProcess(v9); /*0x6ce0a2*/
  }
  return result; /*0x6ce0a7*/
}
}
} // namespace gamemd

// 0x6CE0B0
namespace gamemd {
int * SuperClass::Reset()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall SuperClass::Reset(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int *result; // eax
  int v7; // ebx
  bool v8; // bl
  int v9; // esi
  int v10; // ecx
  char *v11; // edx
  _DWORD v12[4]; // [esp+4h] [ebp-10h] BYREF

  v2 = this->SuperClass_field_0x68; /*0x6ce0b6*/
  if ( v2 ) /*0x6ce0bb*/
  {
    *(_BYTE *)(v2 + 405) = 0; /*0x6ce0bd*/
    this->SuperClass_field_0x68 = 0; /*0x6ce0c4*/
    v12[0] = this; /*0x6ce0db*/
    v3 = (*(int (__thiscall **)(int *, _DWORD *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], v12); /*0x6ce0df*/
    if ( v3 != -1 ) /*0x6ce0e5*/
      DynamicVector::RemoveItem(&MEMORY[0xB0F5B8], v3); /*0x6ce0ed*/
  }
  if ( (unsigned char)this->SuperClass_field_0x6C ) /*0x6ce0f2*/
  {
    v12[0] = this; /*0x6ce109*/
    v4 = (*(int (__thiscall **)(int *, _DWORD *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], v12); /*0x6ce10d*/
    if ( v4 != -1 ) /*0x6ce113*/
      DynamicVector::RemoveItem(&MEMORY[0xB0F5B8], v4); /*0x6ce11b*/
    *(_BYTE *)(this + 108) = 0; /*0x6ce120*/
  }
  v5 = this->SuperClass_field_0x24; /*0x6ce124*/
  result = (int *)(this + 48); /*0x6ce127*/
  *(_BYTE *)(this + 111) = 0; /*0x6ce12b*/
  v7 = this->SuperClass_field_0x30; /*0x6ce12f*/
  this->SuperClass_field_0x78 = -1; /*0x6ce131*/
  v8 = v7 != -1; /*0x6ce13b*/
  if ( v5 == -1 ) /*0x6ce141*/
    v5 = *(_DWORD *)(this->SuperClass_field_0x28 + 176); /*0x6ce146*/
  *result = (int)MEMORY[0xA8ED84]; /*0x6ce156*/
  *(_DWORD *)(this + 52) = v12[2]; /*0x6ce15d*/
  this->SuperClass_field_0x38 = v5; /*0x6ce160*/
  if ( !v8 ) /*0x6ce163*/
  {
    v9 = *result; /*0x6ce165*/
    if ( *result != -1 ) /*0x6ce16a*/
    {
      v10 = result[2]; /*0x6ce16c*/
      v11 = (char *)MEMORY[0xA8ED84] - v9; /*0x6ce17a*/
      if ( (int)MEMORY[0xA8ED84] - v9 >= v10 ) /*0x6ce17e*/
      {
        result[2] = 0; /*0x6ce192*/
        *result = -1; /*0x6ce195*/
      }
      else
      {
        *result = -1; /*0x6ce182*/
        result[2] = v10 - (_DWORD)v11; /*0x6ce188*/
      }
    }
  }
  return result; /*0x6ce18b*/
}
}
} // namespace gamemd

// 0x6CE1A0
namespace gamemd {
bool SuperClass::ShouldFlashTab()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall SuperClass::ShouldFlashTab(int this)
{
  int v1; // eax
  int v2; // eax

  if ( (unsigned char)this->SuperClass_field_0x70 ) /*0x6ce1a0*/
    return 0; /*0x6ce1a5*/
  v1 = this->SuperClass_field_0x28; /*0x6ce1a7*/
  if ( *(_BYTE *)(v1 + 229) ) /*0x6ce1aa*/
  {
    if ( !this->SuperClass_field_0x7C ) /*0x6ce1b9*/
      return 0; /*0x6ce1b9*/
  }
  else if ( !*(_BYTE *)(this + 111) ) /*0x6ce1c2*/
  {
    return 0; /*0x6ce1c2*/
  }
  v2 = *(_DWORD *)(v1 + 232); /*0x6ce1c4*/
  if ( v2 == -1 ) /*0x6ce1cd*/
    return 1; /*0x6ce1d1*/
  return v2 && v2 + this->SuperClass_field_0x74 > (int)MEMORY[0xA8ED84]; /*0x6ce1d1*/
}
}
} // namespace gamemd

// 0x6CDEB0
namespace gamemd {
int SuperClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -671656762;
  a2[1] = 298989852;
  a2[2] = 268461211;
  a2[3] = -399534261;
  return 0;
}
} // namespace gamemd

// 0x6CDFD0
namespace gamemd {
int SuperClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x6CE200
namespace gamemd {
int SuperClass::StubReturn57()
{
return 57;
}
} // namespace gamemd

// 0x6CE210
namespace gamemd {
int SuperClass::StubReturn128()
{
return 128;
}
} // namespace gamemd
