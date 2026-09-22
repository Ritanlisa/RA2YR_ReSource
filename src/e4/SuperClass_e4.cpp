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
  if ( !this->Granted ) /*0x6cb7b1*/
    return 0; /*0x6cb80d*/
  this->IsCharged = 0; /*0x6cb7ba*/
  this->Granted = 0; /*0x6cb7bd*/
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

// 0x6CC390
namespace gamemd {
void SuperClass::Launch(int ecx0, int a2, short * aP3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall SuperClass::Launch(int ecx0, int a2, __int16 *aP3, char a4)
{
  SuperClass *v4; // ebx
  int v5; // ebp
  void *v6; // eax
  int v7; // eax
  AnimClass *v8; // eax
  AbstractClass **v9; // eax
  _BYTE *v10; // eax
  void *v11; // eax
  int v12; // eax
  __int16 *v13; // ebp
  void *v14; // eax
  int v15; // eax
  IUnknown *v16; // esi
  _BYTE *v17; // eax
  IUnknown *v18; // eax
  void **v19; // eax
  void **v20; // eax
  char *v21; // edi
  __int16 v22; // cx
  __int16 v23; // dx
  int *v24; // esi
  __int16 v25; // ax
  bool v26; // zf
  int v27; // ecx
  int v28; // edx
  _DWORD *v29; // edx
  bool v30; // bl
  int v31; // eax
  int Member; // eax
  int *v33; // eax
  _DWORD *v34; // eax
  int v35; // ecx
  int v36; // edi
  int *v37; // eax
  int v38; // eax
  IUnknown **v39; // ebx
  int v40; // eax
  int InstanceCOM; // eax
  int v42; // edi
  __int16 v43; // ax
  int v44; // edi
  void *v45; // eax
  int v46; // eax
  SuperClass *v47; // ecx
  int v48; // eax
  SuperClass *v49; // eax
  SuperClass *v50; // edi
  IUnknown *v51; // edi
  void *v52; // eax
  _DWORD *v53; // ebp
  _DWORD *v54; // eax
  int v55; // ecx
  int v56; // edx
  int v57; // edi
  int v58; // ebx
  void *v59; // eax
  _DWORD *v60; // eax
  IUnknown *v61; // edi
  int v62; // ecx
  int v63; // eax
  IUnknown *v64; // edx
  int v65; // eax
  IUnknown *v66; // edx
  int v67; // eax
  _WORD *v68; // eax
  __int16 v69; // dx
  void *v70; // eax
  AnimClass *v71; // eax
  AnimClass *v72; // eax
  void *v73; // eax
  _DWORD *v74; // eax
  AnimClass *v75; // eax
  void *v76; // eax
  int *v77; // eax
  int v78; // edi
  int v79; // esi
  void **v80; // eax
  int v81; // edx
  char *v82; // edi
  __int16 v83; // dx
  __int16 v84; // ax
  int v85; // esi
  __int16 v86; // cx
  AnimClass *v87; // eax
  void *v88; // eax
  int v89; // eax
  void **v90; // eax
  IUnknown *v91; // eax
  int v92; // ecx
  IUnknown *v93; // eax
  void *v94; // ecx
  AudioController *v95; // ecx
  void *v96; // eax
  int v97; // edx
  int v98; // ebp
  int v99; // eax
  IUnknown *v100; // ecx
  int v101; // edi
  void **v102; // esi
  _DWORD *v103; // eax
  IUnknown *v104; // eax
  int eax143a; // eax
  AnimClass *v105; // eax
  int v107; // esi
  int *v108; // eax
  IUnknown *v109; // ebp
  IUnknown *eax153; // eax
  IUnknown *v110; // edi
  int v112; // eax
  _DWORD *v113; // eax
  int v114; // ecx
  int v115; // edi
  int v116; // ecx
  _DWORD *v117; // eax
  int v118; // ecx
  int v119; // edi
  int v120; // ecx
  _DWORD *v121; // eax
  int i; // edi
  int v123; // ecx
  char *ecx179; // ecx
  AnimClass *v124; // eax
  int v126; // ebp
  int *v127; // eax
  IUnknown *v128; // edi
  IUnknown *eax186; // eax
  IUnknown *v129; // esi
  _DWORD *v131; // eax
  int v132; // ecx
  int v133; // esi
  int v134; // ecx
  int v135; // esi
  IUnknown *eax198; // eax
  IUnknown *v136; // edi
  int v138; // ecx
  int v139; // eax
  int v140; // ebp
  void *v141; // esi
  int *v142; // eax
  IUnknown *v143; // ecx
  _DWORD *eax208a; // eax
  IUnknown *v144; // esi
  void *v146; // eax
  int v147; // eax
  void **v148; // eax
  int v149; // edx
  char *v150; // edi
  __int16 v151; // dx
  __int16 v152; // ax
  _DWORD *v153; // esi
  __int16 v154; // cx
  _DWORD *v155; // ebp
  int v156; // ecx
  void *v157; // eax
  int v158; // esi
  AbstractClass *v159; // ebp
  BulletClass *UIObject; // edi
  double v161; // st7
  double st7_238a; // st7
  double st7_238b; // st7
  IUnknown *v162; // edx
  AnimClass *v163; // eax
  DynamicVector *ecx244; // ecx
  ObjectClass *v165; // esi
  IUnknown *v166; // eax
  int edx247; // edx
  IUnknown *v168; // esi
  IUnknown *v169; // eax
  AnimClass *v170; // eax
  int v173; // [esp+54h] [ebp-1D8h] BYREF
  IUnknown *a1; // [esp+58h] [ebp-1D4h] BYREF
  int v175; // [esp+5Ch] [ebp-1D0h]
  IUnknown *GroundHeight; // [esp+60h] [ebp-1CCh]
  SuperClass *var1C8; // [esp+64h] [ebp-1C8h] BYREF
  BuildingTypeClass *v178; // [esp+68h] [ebp-1C4h]
  MouseClass *v177; // [esp+6Ch] [ebp-1C0h]
  SuperClass *v180; // [esp+70h] [ebp-1BCh] BYREF
  int j; // [esp+74h] [ebp-1B8h]
  IUnknown *ppv; // [esp+78h] [ebp-1B4h] BYREF
  double v183; // [esp+7Ch] [ebp-1B0h] BYREF
  IUnknown *var1A8; // [esp+84h] [ebp-1A8h]
  SuperClass *var1A4; // [esp+88h] [ebp-1A4h] BYREF
  IUnknown *v184; // [esp+8Ch] [ebp-1A0h]
  IUnknown *v185; // [esp+90h] [ebp-19Ch] BYREF
  int v188; // [esp+94h] [ebp-198h]
  IUnknown *v189; // [esp+98h] [ebp-194h]
  int v190; // [esp+9Ch] [ebp-190h]
  double v191; // [esp+A0h] [ebp-18Ch] BYREF
  double v192; // [esp+A8h] [ebp-184h]
  int v193; // [esp+B0h] [ebp-17Ch] BYREF
  int v194; // [esp+B4h] [ebp-178h] BYREF
  int v195; // [esp+B8h] [ebp-174h]
  IUnknown *var170; // [esp+BCh] [ebp-170h]
  MouseClass *v197; // [esp+C0h] [ebp-16Ch] BYREF
  IUnknown *v196; // [esp+C4h] [ebp-168h] BYREF
  BuildingTypeClass *v199; // [esp+C8h] [ebp-164h] BYREF
  int var160; // [esp+CCh] [ebp-160h] BYREF
  SuperClass *v201; // [esp+D0h] [ebp-15Ch] BYREF
  BuildingTypeClass *v200; // [esp+D4h] [ebp-158h] BYREF
  _DWORD v203[2]; // [esp+D8h] [ebp-154h] BYREF
  char *v204; // [esp+E0h] [ebp-14Ch]
  SuperClass *var148; // [esp+E4h] [ebp-148h] BYREF
  MouseClass *v206; // [esp+E8h] [ebp-144h] BYREF
  IUnknown *v205; // [esp+ECh] [ebp-140h] BYREF
  SuperClass *v208; // [esp+F0h] [ebp-13Ch] BYREF
  BuildingTypeClass *v209; // [esp+F4h] [ebp-138h] BYREF
  CoordStruct aP2; // [esp+F8h] [ebp-134h] BYREF
  CoordStruct v211; // [esp+104h] [ebp-128h] BYREF
  _DWORD v212[3]; // [esp+110h] [ebp-11Ch] BYREF
  CoordStruct v213; // [esp+11Ch] [ebp-110h] BYREF
  CoordStruct v214; // [esp+128h] [ebp-104h] BYREF
  CoordStruct v215; // [esp+134h] [ebp-F8h] BYREF
  int v216; // [esp+140h] [ebp-ECh] BYREF
  int v217; // [esp+144h] [ebp-E8h] BYREF
  _QWORD v218[3]; // [esp+148h] [ebp-E4h] BYREF
  char v219[4]; // [esp+160h] [ebp-CCh] BYREF
  int v220; // [esp+164h] [ebp-C8h]
  char v221[12]; // [esp+16Ch] [ebp-C0h] BYREF
  char v222[12]; // [esp+178h] [ebp-B4h] BYREF
  char v223[12]; // [esp+184h] [ebp-A8h] BYREF
  char v224[12]; // [esp+190h] [ebp-9Ch] BYREF
  char v225[12]; // [esp+19Ch] [ebp-90h] BYREF
  char v226[12]; // [esp+1A8h] [ebp-84h] BYREF
  char v227[12]; // [esp+1B4h] [ebp-78h] BYREF
  char v228[12]; // [esp+1C0h] [ebp-6Ch] BYREF
  char v229[12]; // [esp+1CCh] [ebp-60h] BYREF
  char v230[12]; // [esp+1D8h] [ebp-54h] BYREF
  char v231[8]; // [esp+1E4h] [ebp-48h] BYREF
  char v232[16]; // [esp+1ECh] [ebp-40h] BYREF
  char v233[12]; // [esp+1FCh] [ebp-30h] BYREF
  char v234[12]; // [esp+208h] [ebp-24h] BYREF
  int v235[3]; // [esp+214h] [ebp-18h] BYREF
  int v236[3]; // [esp+220h] [ebp-Ch] BYREF

  v4 = (SuperClass *)ecx0;
  v5 = *(_DWORD *)(ecx0 + 40);
  v184 = (IUnknown *)ecx0;
  switch ( *(_DWORD *)(v5 + 180) )
  {
    case 0:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        if ( *(_BYTE *)(ecx0 + 110) && *(_BYTE *)(ecx0 + 109) )
        {
          var1C8 = *(SuperClass **)aP3;
          GroundHeight = 0;
          a1 = (IUnknown *)(((__int16)var1C8 << 8) + 128);
          v175 = (SHIWORD(var1C8) << 8) + 128;
          GroundHeight = (IUnknown *)Cell::GetGroundHeight((IUnknown *)&a1);
          if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&var1C8) + 80) & 0x100) != 0 )
            GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
          v158 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23132]
                           + 4 * SuperWeaponClass::FindByName(g_INI_Key_NukePayload));
          v159 = (AbstractClass *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1);
          v189 = GroundHeight;
          v185 = a1;
          v188 = v175;
          v203[0] = a1;
          v203[1] = v175;
          v204 = &GroundHeight->__pad_14B0[14704];
          UIObject = (BulletClass *)CreateUIObjectCOM(
                                      *(IUnknown **)(v158 + 160),
                                      v159,
                                      0,
                                      *(AbstractClass **)(v158 + 164),
                                      *(AbstractClass **)(v158 + 172),
                                      *(_DWORD *)(v158 + 168),
                                      0);
          Function::Method_46B260(UIObject, v158);
          HouseClass::PsiWarn((InfantryClass *)v4->field_2C, (int)v159, (int)UIObject, aPsiwarn);
          if ( UIObject )
          {
            v183 = Math::SinCos((IUnknown *)0xFE8FBDA);
            v161 = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            v183 = v161 * v183 * -100.0;
            v191 = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            st7_238a = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            v192 = v183;
            *(double *)&v218[1] = v183;
            v191 = st7_238a * v191 * -100.0;
            *(double *)v218 = v191;
            st7_238b = Math::SinCos((IUnknown *)0xFE8FBDA);
            v162 = *(IUnknown **)UIObject->__pad_0;
            *(double *)&v218[2] = st7_238b * -100.0;
            (*(void (__thiscall **)(BulletClass *, _DWORD *, _QWORD *))&v162->__pad_1D8[24])(UIObject, v203, v218);
            if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
              VoxClass::FindAndPlay(&stru_830620.__pad_579C[51052], -1, -1);
            PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 372), &v185, 0);
          }
          if ( a4 )
          {
            *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
            v163 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50968]);
            ClearThemeQueuePlaylist((int)v163);
          }
          *((_BYTE *)v4->field_2C + 508) = 1;
        }
        else
        {
          ecx244 = 0;
          if ( (int)g_TriggerClassCount > 0 )
          {
            v165 = (ObjectClass *)g_TriggerTypeCount;
            while ( 1 )
            {
              v166 = *(IUnknown **)v165->__pad_0;
              if ( *(_BYTE *)(*(_DWORD *)v165->__pad_0 + 5818) )
              {
                edx247 = *(_DWORD *)(v5 + 152);
                if ( *(_DWORD *)&v166->__pad_14B0[576] == edx247 || *(_DWORD *)&v166->__pad_14B0[580] == edx247 )
                  break;
              }
              ecx244 = (DynamicVector *)((char *)ecx244 + 1);
              v165 = (ObjectClass *)((char *)v165 + 4);
              if ( (int)ecx244 >= (int)g_TriggerClassCount )
                goto LABEL_254;
            }
            v168 = (IUnknown *)HouseClass::FindBuildingOfType((int *)v4->field_2C, ecx244, -1);
            if ( v168 )
            {
              GroundHeight = 0;
              LODWORD(v183) = *(_DWORD *)aP3;
              v175 = (SWORD1(v183) << 8) + 128;
              a1 = (IUnknown *)((SLOWORD(v183) << 8) + 128);
              GroundHeight = (IUnknown *)Cell::GetGroundHeight((IUnknown *)&a1);
              v189 = GroundHeight;
              v169 = (IUnknown *)v168->field_0;
              v185 = a1;
              v188 = v175;
              (*(void (__thiscall **)(IUnknown *, int, _DWORD))&v169->__pad_1D8[16])(v168, 22, 0);
              (*(void (__thiscall **)(IUnknown *))(v168->field_0 + 492))(v168);
              *((_DWORD *)v4->field_2C + 5601) = *(_DWORD *)aP3;
              *(_DWORD *)&v168->__pad_524[212] = *((_DWORD *)v4->field_28 + 45);
              PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 372), &v185, 0);
              if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
                VoxClass::FindAndPlay(&stru_830620.__pad_579C[51052], -1, -1);
            }
          }
LABEL_254:
          if ( a4 )
          {
            *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
            v170 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50968]);
            ClearThemeQueuePlaylist((int)v170);
          }
          *((_BYTE *)v4->field_2C + 508) = 1;
        }
      }
      break;
    case 1:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v76 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v77 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v76 + 72))(v76, v222);
        v78 = *v77;
        v188 = v77[1];
        v79 = v77[2];
        if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          v79 += *(_DWORD *)&stru_B05488.__pad_579C[5208];
        v80 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( v80 )
        {
          v214.Y = v188;
          v214.Z = v79 + 5;
          v214.X = v78;
          AnimClass::ctor(
            v80,
            *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 840),
            &v214,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[51116], -1, -1);
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, v81, *(IUnknown **)aP3);
        v82 = &stru_B05488.__pad_579C[5140];
        do
        {
          v83 = aP3[1] + *((_WORD *)v82 + 1);
          LOWORD(var1C8) = *(_WORD *)v82 + *aP3;
          HIWORD(var1C8) = v83;
          v201 = var1C8;
          if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v201) + 80) & 0x100) != 0 )
          {
            v84 = aP3[1] + *((_WORD *)v82 + 1);
            LOWORD(v177) = *(_WORD *)v82 + *aP3;
            HIWORD(v177) = v84;
            v205 = (IUnknown *)v177;
            v85 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v205) + 58);
          }
          else
          {
            v86 = aP3[1] + *((_WORD *)v82 + 1);
            LOWORD(v178) = *(_WORD *)v82 + *aP3;
            HIWORD(v178) = v86;
            v209 = v178;
            v85 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v209) + 57);
          }
          for ( ; v85; v85 = *(_DWORD *)(v85 + 48) )
          {
            if ( (*(_BYTE *)(v85 + 20) & 4) == 0 || !*(_BYTE *)(v85 + 636) )
              (*(void (__thiscall **)(int, _DWORD, void *, _DWORD))(*(_DWORD *)v85 + 340))(
                v85,
                *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4072),
                v4->field_2C,
                0);
          }
          v82 += 4;
        }
        while ( (int)v82 < (int)&stru_B05488.__pad_579C[5176] );
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          v87 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50944]);
          ClearThemeQueuePlaylist((int)v87);
        }
      }
      break;
    case 2:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        LightningStorm::Start(
          *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6044),
          *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6036),
          *(_DWORD *)aP3,
          *(#375 **)(ecx0 + 44));
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(aEvaLightningst, -1, -1);
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          v72 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50896]);
          ClearThemeQueuePlaylist((int)v72);
        }
      }
      break;
    case 3:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        *(_DWORD *)(ecx0 + 98) = *(_DWORD *)aP3;
        v6 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v7 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v6 + 72))(v6, v233);
        a1 = *(IUnknown **)v7;
        v175 = *(_DWORD *)(v7 + 4);
        GroundHeight = *(IUnknown **)(v7 + 8);
        if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
        v8 = (AnimClass *)Coord3D::Set(v235, 0, 0, 5);
        v9 = (AbstractClass **)Coord3D::Add(&a1, (IUnknown *)v236, v8);
        SuperClass::CreateChronoAnim((int)v4, *v9, (SuperClass *)v9[1], (int)v9[2]);
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = 4;
        }
        else
        {
          v10 = v4->field_68;
          if ( v10 )
          {
            v10[413] = 1;
            AudioController::Stop((_DWORD *)v4->field_68 + 104);
          }
        }
      }
      break;
    case 4:
      CreateTriggerClassIfFarEnough((IUnknown *)0xD, a2, *(IUnknown **)(ecx0 + 98));
      CreateTriggerClassIfFarEnough((IUnknown *)0xD, *(_DWORD *)aP3, *(IUnknown **)aP3);
      v11 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
      v12 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v11 + 72))(v11, v223);
      v183 = *(double *)v12;
      v13 = *(__int16 **)(v12 + 8);
      v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v4->field_60 + 1);
      v15 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v14 + 72))(v14, v219);
      a1 = *(IUnknown **)v15;
      v175 = *(_DWORD *)(v15 + 4);
      GroundHeight = *(IUnknown **)(v15 + 8);
      if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
        v13 = (__int16 *)((char *)v13 + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
      v16 = GroundHeight;
      if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v4->field_60 + 1) + 80) & 0x100) != 0 )
        v16 = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
      v17 = v4->field_68;
      if ( v17 )
      {
        v17[405] = 0;
        v4->field_68 = 0;
        var1C8 = v4;
        v18 = (IUnknown *)(*(int (__thiscall **)(char *, SuperClass **))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 16))(
                            &stru_B05488.__pad_579C[18836],
                            &var1C8);
        if ( v18 != (IUnknown *)-1 )
          DynamicVector::RemoveItem(&stru_B05488.__pad_579C[18836], v18);
      }
      if ( LOBYTE(v4->field_6C) )
      {
        var1C8 = v4;
        VectorClass::RemoveAt((int *)&stru_B05488.__pad_579C[18836], (int)&var1C8);
        LOBYTE(v4->field_6C) = 0;
      }
      v19 = (void **)__2_YAPAXI_Z(0x1C8u);
      if ( v19 )
      {
        *(double *)&aP2.X = v183;
        aP2.Z = (int)v13 + 5;
        AnimClass::ctor(
          v19,
          *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 812),
          &aP2,
          0,
          (CoordStruct *)1,
          (void *)0x600,
          0,
          0);
      }
      v20 = (void **)__2_YAPAXI_Z(0x1C8u);
      if ( v20 )
      {
        v215.X = (int)a1;
        v215.Y = v175;
        v215.Z = (int)&v16->field_4 + 1;
        AnimClass::ctor(
          v20,
          *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 808),
          &v215,
          0,
          (CoordStruct *)1,
          (void *)0x600,
          0,
          0);
      }
      v21 = &stru_B05488.__pad_579C[5140];
      j = (int)&stru_B05488.__pad_579C[5140];
      do
      {
        v22 = *((_WORD *)v21 + 1) + *(_WORD *)v4->__pad_64;
        LOWORD(var170) = *(_WORD *)v21 + HIWORD(v4->field_60);
        HIWORD(var170) = v22;
        v196 = var170;
        if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v196) + 80) & 0x100) != 0 )
        {
          v23 = *((_WORD *)v21 + 1) + *(_WORD *)v4->__pad_64;
          LOWORD(v195) = HIWORD(v4->field_60) + *(_WORD *)v21;
          HIWORD(v195) = v23;
          var160 = v195;
          v24 = (int *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&var160) + 58);
        }
        else
        {
          v25 = *((_WORD *)v21 + 1) + *(_WORD *)v4->__pad_64;
          LOWORD(v178) = HIWORD(v4->field_60) + *(_WORD *)v21;
          HIWORD(v178) = v25;
          v199 = v178;
          v24 = (int *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v199) + 57);
        }
        if ( v24 )
        {
          do
          {
            v26 = (v24[5] & 4) == 0;
            HIBYTE(v190) = (v24[5] & 4) != 0;
            if ( !v26 && !(*(unsigned __int8 (__thiscall **)(int *))(*v24 + 84))(v24) )
            {
              v27 = v24[421];
              if ( v27 )
              {
                if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v27 + 132))(v27) + 3278) )
                {
                  v28 = *(_DWORD *)(v24[421] + 1692);
                  if ( v28 )
                  {
                    v29 = (_DWORD *)(v28 + 44);
                    *v29 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
                    v29[1] = v220;
                    v29[2] = 500;
                    BuildingClass::Deploy(*(_DWORD *)(v24[421] + 1692), (int)v13, (int)v21);
                  }
                }
              }
              v30 = 0;
              if ( (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 1 )
              {
                v31 = (*(int (__thiscall **)(int *))(*v24 + 44))(v24);
                Member = Team::GetMember(v31 == 1 ? v24 : 0, 0);
                v21 = (char *)Member;
                if ( Member )
                {
                  if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6
                    && *(_BYTE *)(*((_DWORD *)v21 + 328) + 5821) )
                  {
                    v33 = (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 1 ? v24 + 39 : (int *)156;
                    v212[0] = *v33;
                    v212[1] = v33[1];
                    v212[2] = v33[2];
                    v34 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v212);
                    v30 = Cell::IsBridge(v34) == (_DWORD *)v21;
                  }
                }
              }
              if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(*v24 + 132))(v24) + 3479)
                || *(_BYTE *)((*(int (__thiscall **)(int *))(*v24 + 132))(v24) + 3284)
                || (*(unsigned __int8 (__thiscall **)(int *))(*v24 + 84))(v24) )
              {
                if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v24 + 352))(v24)
                  && !*((_BYTE *)v24 + 636)
                  && !(*(unsigned __int8 (__thiscall **)(int *))(*v24 + 468))(v24)
                  && !(*(unsigned __int8 (__thiscall **)(int *))(*v24 + 472))(v24)
                  && !v30 )
                {
                  v35 = v24[185];
                  if ( v35 && (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 44))(v35) == 6 )
                  {
                    v36 = v24[185];
                    if ( v36 )
                      v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 44))(v24[185]) == 6 ? (int *)v36 : 0;
                    else
                      v37 = 0;
                    BuildingClass::UpdateDamageAnim(v37);
                  }
                  v38 = v24[413];
                  v39 = (IUnknown **)(v24 + 413);
                  v180 = 0;
                  if ( v38 )
                  {
                    v40 = StreamClass::Set(&v180, (IUnknown *)(v24 + 413));
                    if ( v40 < 0 && v40 != -2147467262 )
                      WinAPI::Wrapper(v40);
                  }
                  ppv = 0;
                  InstanceCOM = CreateInstanceCOM((LPVOID *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u);
                  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 )
                    WinAPI::Wrapper(InstanceCOM);
                  v42 = (*(int (__thiscall **)(int *))(*v24 + 44))(v24);
                  v43 = aP3[1] + *(_WORD *)(j + 2);
                  LOWORD(v177) = *aP3 + *(_WORD *)j;
                  HIWORD(v177) = v43;
                  v44 = v42 == 1 ? (unsigned int)v24 : 0;
                  v197 = v177;
                  LODWORD(v183) = v44;
                  v45 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v197);
                  v46 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v45 + 72))(v45, v225);
                  a1 = *(IUnknown **)v46;
                  v175 = *(_DWORD *)(v46 + 4);
                  GroundHeight = *(IUnknown **)(v46 + 8);
                  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1) + 80) & 0x100) != 0 )
                    GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
                  if ( v44 )
                  {
                    if ( !*v39 )
                      WinAPI::Wrapper(-2147467261);
                    (*(void (__stdcall **)(IUnknown *, _DWORD))((*v39)->field_0 + 156))(*v39, 0);
                    v189 = GroundHeight;
                    if ( !*v39 )
                      WinAPI::Wrapper(-2147467261);
                    (*(void (__stdcall **)(IUnknown *, int, IUnknown *, int, IUnknown *))((*v39)->field_0 + 112))(
                      *v39,
                      -1,
                      a1,
                      v175,
                      v189);
                    (*(void (__thiscall **)(int *, IUnknown **))(*v24 + 244))(v24, &a1);
                    *((_BYTE *)v24 + 1718) = 1;
                  }
                  if ( !ppv )
                    WinAPI::Wrapper(-2147467261);
                  (*(void (__stdcall **)(IUnknown *, int *))(ppv->field_0 + 12))(ppv, v24);
                  v47 = 0;
                  var1A4 = 0;
                  if ( ppv )
                  {
                    v48 = StreamClass::Set(&var1A4, (IUnknown *)&ppv);
                    if ( v48 < 0 && v48 != -2147467262 )
                      WinAPI::Wrapper(v48);
                    v47 = var1A4;
                  }
                  v49 = v180;
                  if ( v180 != v47 )
                  {
                    v180 = v47;
                    v50 = v49;
                    CellClass::SetField2C((int *)&v180);
                    if ( v50 )
                      (*(void (__stdcall **)(SuperClass *))(v50->field_0 + 8))(v50);
                    v49 = v180;
                    v47 = var1A4;
                  }
                  if ( v47 )
                  {
                    (*(void (__stdcall **)(SuperClass *))(v47->field_0 + 8))(v47);
                    v49 = v180;
                  }
                  if ( v49 )
                  {
                    (*(void (__stdcall **)(SuperClass *, IUnknown *))(v49->field_0 + 12))(v49, *v39);
                    v51 = *v39;
                    if ( *v39 != ppv )
                    {
                      *v39 = ppv;
                      SuperClass::SetFieldX(v24 + 413);
                      if ( v51 )
                        (*(void (__stdcall **)(IUnknown *))(v51->field_0 + 8))(v51);
                    }
                  }
                  v52 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v184->field_60 + 1);
                  v53 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v52 + 72))(v52, v231);
                  v54 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v24 + 72))(v24, v227);
                  v55 = v53[2];
                  v56 = v53[1];
                  v57 = *v54 - *v53;
                  v13 = aP3;
                  v58 = v54[1] - v56;
                  v204 = (char *)(v54[2] - v55);
                  if ( !LODWORD(v183) )
                  {
                    v59 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
                    v60 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v59 + 72))(v59, v221);
                    v61 = (IUnknown *)(*v60 + v57);
                    v62 = v60[1];
                    v63 = v60[2];
                    v175 = v58 + v62;
                    a1 = v61;
                    GroundHeight = (IUnknown *)&v204[v63];
                    if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1) + 80) & 0x100) != 0 )
                      GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
                  }
                  v64 = a1;
                  v65 = v175;
                  *((_BYTE *)v24 + 636) = 1;
                  v24[162] = (int)v64;
                  v66 = GroundHeight;
                  v24[163] = v65;
                  v67 = *v24;
                  v24[164] = (int)v66;
                  (*(void (__thiscall **)(int *, int))(v67 + 640))(v24, 3);
                  v68 = (_WORD *)j;
                  v24[267] = *(_DWORD *)&v184->__pad_28[4];
                  v69 = aP3[1] + v68[1];
                  LOWORD(var1C8) = *aP3 + *v68;
                  HIWORD(var1C8) = v69;
                  var148 = var1C8;
                  v21 = (char *)*v24;
                  v70 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&var148);
                  (*((void (__thiscall **)(int *, void *, int))v21 + 288))(v24, v70, 1);
                  if ( ppv )
                    (*(void (__stdcall **)(IUnknown *))(ppv->field_0 + 8))(ppv);
                  if ( v180 )
                    (*(void (__stdcall **)(SuperClass *))(v180->field_0 + 8))(v180);
                }
              }
              else
              {
                LODWORD(v191) = *(_DWORD *)((*(int (__thiscall **)(int *))(*v24 + 132))(v24) + 160);
                (*(void (__thiscall **)(int *, double *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*v24 + 364))(
                  v24,
                  &v191,
                  0,
                  *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
                  0,
                  1,
                  0,
                  *(_DWORD *)&v184->__pad_28[4]);
              }
            }
            v24 = (int *)v24[12];
          }
          while ( v24 );
          v4 = (SuperClass *)v184;
          v21 = (char *)j;
        }
        v21 += 4;
        j = (int)v21;
      }
      while ( (int)v21 < (int)&stru_B05488.__pad_579C[5176] );
      if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
        VoxClass::FindAndPlay(&stru_830620.__pad_579C[51176], -1, -1);
      if ( a4 )
      {
        *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
        v71 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50844]);
        ClearThemeQueuePlaylist((int)v71);
      }
      break;
    case 5:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v107 = TypeClass::FindByName(&stru_830620.__pad_579C[14668]);
        v108 = (int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v109 = (IUnknown *)v108;
        if ( v108 && v108 != g_CellClassArray )
        {
          if ( Cell::IsValidHeight(v108) )
          {
            v193 = 0;
            var1C8 = (SuperClass *)*LayerClass::Pathfinding_Find(
                                      (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                      (IUnknown *)&v193,
                                      (IUnknown *)&v217,
                                      (IUnknown *)aP3,
                                      0,
                                      (IUnknown *)0xFFFFFFFF,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)1,
                                      0,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)&v193,
                                      0,
                                      0);
            if ( var1C8 != *(SuperClass **)&stru_B05488.__pad_579C[5084] )
            {
              eax153 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&var1C8);
              v110 = eax153;
              if ( eax153 )
              {
                if ( eax153 != (IUnknown *)g_CellClassArray && !Cell::IsValidHeight(&eax153->field_0) )
                  v109 = v110;
              }
            }
          }
          v112 = *((_DWORD *)v4->field_2C + 122);
          if ( v112 )
          {
            if ( v112 == 2 )
            {
              v117 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
              v118 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3260);
              if ( v118 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3288) )
              {
                v119 = 0;
                if ( v118 > 0 )
                {
                  do
                  {
                    v120 = *(_DWORD *)(*(_DWORD *)(v117[812] + 4 * v119) + 3576);
                    if ( v107 != -1 && v120 != -1 )
                    {
                      SpawnSuperWeaponUnits(
                        (unsigned int *)v4->field_2C,
                        v107,
                        (IUnknown *)1,
                        26,
                        (int)v109,
                        0,
                        v120,
                        *(_DWORD *)(v117[819] + 4 * v119));
                      v117 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
                    }
                    ++v119;
                  }
                  while ( v119 < v117[815] );
                }
              }
            }
            else
            {
              v121 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
              for ( i = 0; i < v121[801]; ++i )
              {
                v123 = *(_DWORD *)(*(_DWORD *)(v121[798] + 4 * i) + 3576);
                if ( v107 != -1 && v123 != -1 )
                {
                  SpawnSuperWeaponUnits(
                    (unsigned int *)v4->field_2C,
                    v107,
                    (IUnknown *)1,
                    26,
                    (int)v109,
                    0,
                    v123,
                    *(_DWORD *)(v121[805] + 4 * i));
                  v121 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
                }
              }
            }
          }
          else
          {
            v113 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
            v114 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3148);
            if ( v114 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3176) )
            {
              v115 = 0;
              if ( v114 > 0 )
              {
                do
                {
                  v116 = *(_DWORD *)(*(_DWORD *)(v113[784] + 4 * v115) + 3576);
                  if ( v107 != -1 && v116 != -1 )
                  {
                    SpawnSuperWeaponUnits(
                      (unsigned int *)v4->field_2C,
                      v107,
                      (IUnknown *)1,
                      26,
                      (int)v109,
                      0,
                      v116,
                      *(_DWORD *)(v113[791] + 4 * v115));
                    v113 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
                  }
                  ++v115;
                }
                while ( v115 < v113[787] );
              }
            }
          }
        }
        goto LABEL_178;
      }
      break;
    case 6:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v126 = TypeClass::FindByName(&stru_830620.__pad_579C[14668]);
        v127 = (int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v128 = (IUnknown *)v127;
        if ( v127 && v127 != g_CellClassArray )
        {
          if ( Cell::IsValidHeight(v127) )
          {
            v194 = 0;
            var1C8 = (SuperClass *)*LayerClass::Pathfinding_Find(
                                      (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                      (IUnknown *)&v194,
                                      (IUnknown *)&v216,
                                      (IUnknown *)aP3,
                                      0,
                                      (IUnknown *)0xFFFFFFFF,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)1,
                                      0,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)&v194,
                                      0,
                                      0);
            if ( var1C8 != *(SuperClass **)&stru_B05488.__pad_579C[5084] )
            {
              eax186 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&var1C8);
              v129 = eax186;
              if ( eax186 )
              {
                if ( eax186 != (IUnknown *)g_CellClassArray && !Cell::IsValidHeight(&eax186->field_0) )
                  v128 = v129;
              }
            }
          }
          v131 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
          v132 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3092);
          if ( v132 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3120) )
          {
            v133 = 0;
            if ( v132 > 0 )
            {
              do
              {
                v134 = *(_DWORD *)(*(_DWORD *)(v131[770] + 4 * v133) + 3576);
                if ( v126 != -1 && v134 != -1 )
                {
                  SpawnSuperWeaponUnits(
                    (unsigned int *)v4->field_2C,
                    v126,
                    (IUnknown *)1,
                    26,
                    (int)v128,
                    0,
                    v134,
                    *(_DWORD *)(v131[777] + 4 * v133));
                  v131 = *(_DWORD **)&stru_87C374.__pad_579C[22224];
                }
                ++v133;
              }
              while ( v133 < v131[773] );
            }
          }
        }
LABEL_178:
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50820];
          goto LABEL_180;
        }
      }
      break;
    case 7:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, *(_DWORD *)aP3, *(IUnknown **)aP3);
        SuperClass::LaunchPsychicDominator((#375 *)v4->field_2C, *(_DWORD *)aP3);
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[51144], -1, -1);
        v73 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v74 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v73 + 72))(v73, v229);
        PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 588), v74, 0);
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          v75 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50868]);
          ClearThemeQueuePlaylist((int)v75);
        }
      }
      break;
    case 8:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v135 = TypeClass::FindByName(&stru_830620.__pad_579C[51108]);
        eax198 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v136 = eax198;
        if ( eax198 )
        {
          if ( eax198 != (IUnknown *)g_CellClassArray )
          {
            v138 = *(_DWORD *)&stru_87C374.__pad_579C[22224];
            v139 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3148);
            if ( v139 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3176) )
            {
              v140 = 0;
              if ( v139 > 0 )
              {
                do
                {
                  if ( v135 != -1 )
                  {
                    globalHelper_05EAB0((unsigned int *)v4->field_2C, v135, (IUnknown *)1, 30, (int)v136, 0);
                    v138 = *(_DWORD *)&stru_87C374.__pad_579C[22224];
                  }
                  ++v140;
                }
                while ( v140 < *(_DWORD *)(v138 + 3148) );
              }
            }
          }
        }
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50800];
          goto LABEL_180;
        }
      }
      break;
    case 9:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v144 = (IUnknown *)aP3;
        v146 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v147 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v146 + 72))(v146, v234);
        a1 = *(IUnknown **)v147;
        v175 = *(_DWORD *)(v147 + 4);
        GroundHeight = *(IUnknown **)(v147 + 8);
        if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
        v148 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( v148 )
        {
          v213.X = (int)a1;
          v213.Y = v175;
          v213.Z = (int)&GroundHeight->field_4 + 1;
          AnimClass::ctor(
            v148,
            *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 664),
            &v213,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[51080], -1, -1);
        PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 592), &a1, 0);
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, v149, *(IUnknown **)aP3);
        if ( *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6088) )
        {
          PlaySoundEffectAt(
            (TechnoClass *)&a1,
            (IUnknown *)0x2710,
            0,
            *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3996),
            0,
            (int)v4->field_2C);
        }
        else
        {
          v150 = &stru_B05488.__pad_579C[5140];
          while ( 1 )
          {
            v151 = HIWORD(v144->field_0) + *((_WORD *)v150 + 1);
            LOWORD(var1C8) = *(_WORD *)v150 + LOWORD(v144->field_0);
            HIWORD(var1C8) = v151;
            v208 = var1C8;
            if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v208) + 80) & 0x100) != 0 )
            {
              v152 = HIWORD(v144->field_0) + *((_WORD *)v150 + 1);
              LOWORD(v177) = *(_WORD *)v150 + LOWORD(v144->field_0);
              HIWORD(v177) = v152;
              v206 = v177;
              v153 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v206) + 58);
            }
            else
            {
              v154 = HIWORD(v144->field_0) + *((_WORD *)v150 + 1);
              LOWORD(v178) = *(_WORD *)v150 + LOWORD(v144->field_0);
              HIWORD(v178) = v154;
              v200 = v178;
              v153 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v200) + 57);
            }
            if ( v153 )
            {
              do
              {
                v155 = (_DWORD *)v153[12];
                if ( v153 && (*(int (__thiscall **)(_DWORD *))(*v153 + 44))(v153) == 15 )
                {
                  v156 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v153 + 132))(v153) + 160);
                  v157 = v4->field_2C;
                  LODWORD(v183) = v156;
                  (*(void (__thiscall **)(_DWORD *, double *, _DWORD, _DWORD, _DWORD, int, _DWORD, void *))(*v153 + 364))(
                    v153,
                    &v183,
                    0,
                    *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3992),
                    0,
                    1,
                    0,
                    v157);
                }
                v153 = v155;
              }
              while ( v155 );
            }
            v150 += 4;
            if ( (int)v150 >= (int)&stru_B05488.__pad_579C[5176] )
              break;
            v144 = (IUnknown *)aP3;
          }
        }
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50776];
          goto LABEL_180;
        }
      }
      break;
    case 0xA:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v88 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v89 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v88 + 72))(v88, v224);
        a1 = *(IUnknown **)v89;
        v175 = *(_DWORD *)(v89 + 4);
        GroundHeight = *(IUnknown **)(v89 + 8);
        if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(_DWORD *)&stru_B05488.__pad_579C[5208]);
        v90 = (void **)__2_YAPAXI_Z(0x1C8u);
        if ( v90 )
        {
          v211.X = (int)a1;
          v211.Y = v175;
          v211.Z = (int)&GroundHeight->field_4 + 1;
          AnimClass::ctor(
            v90,
            *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 844),
            &v211,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        v91 = a1;
        *(_DWORD *)&v4->__pad_3C[20] = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6076)
                                     - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6084);
        v92 = v175;
        *(_DWORD *)&v4->__pad_3C[24] = v91;
        v93 = GroundHeight;
        *(_DWORD *)&v4->__pad_3C[28] = v92;
        v94 = v4->field_28;
        *(_DWORD *)&v4->__pad_3C[32] = v93;
        v95 = (AudioController *)*((_DWORD *)v94 + 49);
        if ( v95 != (AudioController *)-1 )
          StartAudioControllerAt(v95, (int)&a1, 0);
        HouseClass::CreatePowerOutage((int)v4->field_2C, *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6080));
        v96 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v97 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v96 + 72))(v96, v226);
        v98 = *(_DWORD *)v97;
        v99 = *(_DWORD *)(v97 + 4);
        HIDWORD(v183) = v99;
        v100 = *(IUnknown **)(v97 + 8);
        var1A8 = v100;
        v101 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6072) << 8;
        if ( (v98 != *(_DWORD *)&stru_B05488.__pad_579C[5116]
           || v99 != *(_DWORD *)&stru_B05488.__pad_579C[5120]
           || v100 != *(IUnknown **)&stru_B05488.__pad_579C[5124])
          && (v98 != *(_DWORD *)&stru_B05488.__pad_579C[5196]
           || v99 != *(_DWORD *)&stru_B05488.__pad_579C[5200]
           || v100 != *(IUnknown **)&stru_B05488.__pad_579C[5204]) )
        {
          for ( j = *(_DWORD *)&HouseClass_Player.__pad_5568[22684] - 1; j >= 0; --j )
          {
            v102 = *(void ***)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * j);
            if ( (unsigned __int8)HouseClass::IsAlliedWith(v102[135], (IUnknown *)v4->field_2C) )
            {
              v103 = (_DWORD *)(*((int (__thiscall **)(void **, char *))*v102 + 18))(v102, v228);
              v104 = Coord::Subtract(
                       &v185,
                       (IUnknown *)(v98 - *v103),
                       (IUnknown *)(HIDWORD(v183) - v103[1]),
                       (IUnknown *)((char *)var1A8 - v103[2]));
              v191 = *(double *)&v104->field_0;
              LODWORD(v192) = v104->field_8;
              Coord::Length((int *)&v191);
              if ( eax143a < v101 )
                (*((void (__thiscall **)(void **, _DWORD, void *, int))*v102 + 85))(
                  v102,
                  *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6076),
                  v4->field_2C,
                  1);
            }
          }
        }
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          v105 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50920]);
          ClearThemeQueuePlaylist((int)v105);
        }
      }
      break;
    case 0xB:
      if ( *(_BYTE *)(ecx0 + 111) )
      {
        v141 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v142 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)v141 + 72))(v141);
        v173 = *v142;
        v143 = (IUnknown *)v4->field_2C;
        a1 = (IUnknown *)v142[1];
        v175 = v142[2];
        MapClass::RevealArea1(
          (int *)&stru_87C374.__pad_14B0[8132],
          (IUnknown *)&v173,
          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4076),
          v143,
          0,
          0,
          0,
          0,
          0);
        MapClass::RevealArea1(
          (int *)&stru_87C374.__pad_14B0[8132],
          (IUnknown *)&v173,
          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4076),
          (IUnknown *)v4->field_2C,
          0,
          0,
          0,
          0,
          (IUnknown *)1);
        eax208a = (_DWORD *)(*(int (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)v141 + 72))(v141, v232, 0);
        PlayAudioAt2(*(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 596), eax208a, (int)v230);
        if ( a4 )
        {
          *(_DWORD *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50752];
LABEL_180:
          v124 = (AnimClass *)VocClass::FindByName(ecx179);
          ClearThemeQueuePlaylist((int)v124);
        }
      }
      break;
    default:
      return;
  }
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

// 0x6CB3A0
namespace gamemd {
void ** SuperClass::CreateChronoAnim(AbstractClass * aP1, SuperClass * aP2, int a4)
{
{
    AnimClass *v5;
    IUnknown *v6;
    IUnknown *v7;
    void **result;
    int v9;
    CoordStruct aP2a;
    v5 = *(AnimClass **)(this + 104);
    if ( v5 )
  {
    v5->__pad_194[1] = 0;
    this->SuperClass_field_0x68 = 0;
    v9 = this;
    v6 = (IUnknown *)(*(int (__thiscall **)(char *, int *))(*(int *)&DataGlobal_B05488.__pad_579C[18836] + 16))( &DataGlobal_B05488.__pad_579C[18836], &v9);
    if ( v6 != (IUnknown *)-1 )
    DynamicVector::RemoveItem(&DataGlobal_B05488.__pad_579C[18836], v6);
  }
    if ( (unsigned char)this->SuperClass_field_0x6C )
  {
    v9 = this;
    v7 = (IUnknown *)(*(int (__thiscall **)(char *, int *))(*(int *)&DataGlobal_B05488.__pad_579C[18836] + 16))( &DataGlobal_B05488.__pad_579C[18836], &v9);
    if ( v7 != (IUnknown *)-1 )
    DynamicVector::RemoveItem(&DataGlobal_B05488.__pad_579C[18836], v7);
    this->AnimationGotInvalid = 0;
  }
    result = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( result )
  {
    aP2a.X = (int)aP1;
    aP2a.Y = (int)aP2;
    aP2a.Z = a4 + 5;
    result = (void **)AnimClass::ctor( result, *(CoordStruct **)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 816), &aP2a, 0, (CoordStruct *)1, (void *)0x600, 0, 0);
    if ( result )
    {
    this->SuperClass_field_0x68 = result;
    result = *(void ***)&DataGlobal_B05488.__pad_579C[18844];
    if ( *(int *)&DataGlobal_B05488.__pad_579C[18852] < *(int *)&DataGlobal_B05488.__pad_579C[18844] || (DataGlobal_B05488.__pad_579C[18849] || !*(int *)&DataGlobal_B05488.__pad_579C[18844]) && *(int *)&DataGlobal_B05488.__pad_579C[18856] > 0 && (result = (void **)(*(int (__thiscall **)(char *, int, int))(*(int *)&DataGlobal_B05488.__pad_579C[18836] + 8))( &DataGlobal_B05488.__pad_579C[18836], *(int *)&DataGlobal_B05488.__pad_579C[18844] + *(int *)&DataGlobal_B05488.__pad_579C[18856], 0), (char)result) )
      {
    result = (void **)(*(int *)&DataGlobal_B05488.__pad_579C[18852])++;
    *(int *)(*(int *)&DataGlobal_B05488.__pad_579C[18840] + 4 * (int)result) = this;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6CB4D0
namespace gamemd {
char SuperClass::SetOnHold(CoordStruct * aP1)
{
{
    IUnknown *v3;
    int v4;
    int v5;
    if ( !this->Granted || this->OneTime || (char)aP1 == (unsigned char)this->SuperClass_field_0x70 || !(unsigned char)this->SuperClass_field_0x60 )
  {
    return 0;
  }
    if ( (char)aP1 || *(char *)(this->SuperClass_field_0x28 + 245) )
  {
    v3 = *(IUnknown **)(this + 48);
    if ( v3 != (IUnknown *)-1 )
    {
    v4 = this->SuperClass_field_0x38;
    if ( *(int *)&g_NetworkPlayerBuffer.__pad_14B0[664] - (int)v3 >= v4 )
    v5 = 0;
    else
    v5 = v4 - (*(int *)&g_NetworkPlayerBuffer.__pad_14B0[664] - (int)v3);
    this->SuperClass_field_0x38 = v5;
    this->SuperClass_field_0x30 = -1;
    }
  }
    else if ( this->SuperClass_field_0x30 == -1 )
  {
    this->SuperClass_field_0x30 = *(int *)&g_NetworkPlayerBuffer.__pad_14B0[664];
    this->IsOnHold = 0;
    return 1;
  }
    this->IsOnHold = (char)aP1;
    return 1;
}
}
} // namespace gamemd

// 0x6CB820
namespace gamemd {
char SuperClass::SetReadiness(char a2)
{
{
    this->IsCharged = a2;
    return a2;
}
}
} // namespace gamemd

// 0x6CC280
namespace gamemd {
int SuperClass::SetRechargeTime(int a2)
{
{
    this->CustomChargeTime = a2;
    return a2;
}
}
} // namespace gamemd

// 0x6CC290
namespace gamemd {
void SuperClass::ResetRechargeTime()
{
{
    this->CustomChargeTime = -1;
}
}
} // namespace gamemd

// 0x6CC2B0
namespace gamemd {
wchar_t * SuperClass::NameReadiness()
{
{
    int v1;
    int v2;
    if ( (unsigned char)this->SuperClass_field_0x70 )
    return GetStringCSF(DataGlobal_83FB2C, 0, g_Str_File_Super_CPP, 950);
    if ( *(char *)(this->SuperClass_field_0x28 + 229) )
  {
    v1 = this->SuperClass_field_0x7C;
    if ( v1 )
    {
    v2 = v1 - 1;
    if ( v2 )
      {
    if ( v2 != 1 )
    return 0;
    return GetStringCSF(DataGlobal_8424FC, 0, g_Str_File_Super_CPP, 925);
      }
    else
      {
    return GetStringCSF(g_Str_TXT_READY, 0, g_Str_File_Super_CPP, 922);
      }
    }
    else
    {
    return GetStringCSF(DataGlobal_8424EC, 0, g_Str_File_Super_CPP, 919);
    }
  }
    else
  {
    if ( !this->IsCharged )
    return 0;
    return GetStringCSF(g_Str_TXT_READY, 0, g_Str_File_Super_CPP, 944);
  }
}
}
} // namespace gamemd

// 0x6CC360
namespace gamemd {
char SuperClass::CanFire()
{
{
    if ( (unsigned char)this->SuperClass_field_0x70 )
    return 0;
    if ( *(char *)(this->SuperClass_field_0x28 + 229) )
    return this->SuperClass_field_0x7C != 0;
    return this->IsCharged;
}
}
} // namespace gamemd

// 0x6CDE90
namespace gamemd {
bool SuperClass::ShouldDrawProgress()
{
{
    return *(char *)(this->SuperClass_field_0x28 + 229) || this->IsCharged == 0;
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

// 0x6CDEF0
namespace gamemd {
int SuperClass::LoadFromStream(AbstractClass * aP0, int aP1)
{
{
    int result;
    int v3;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::Constructor(aP0);
    *(int *)aP0->__pad_0 = (unsigned int)vt_SuperClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_SuperClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_SuperClass;
    *(int *)&aP0->__pad_0[12] = &vt_SuperClass;
    }
    if ( aP0[2].NeedsSaveOrLink && (*(int *)&DataGlobal_B05488.__pad_579C[18852] < *(int *)&DataGlobal_B05488.__pad_579C[18844] || (DataGlobal_B05488.__pad_579C[18849] || !*(int *)&DataGlobal_B05488.__pad_579C[18844]) && *(int *)&DataGlobal_B05488.__pad_579C[18856] > 0 && (*(unsigned char (__thiscall **)(char *, int, int))(*(int *)&DataGlobal_B05488.__pad_579C[18836] + 8))( &DataGlobal_B05488.__pad_579C[18836], *(int *)&DataGlobal_B05488.__pad_579C[18844] + *(int *)&DataGlobal_B05488.__pad_579C[18856], 0)) )
    {
    v3 = (*(int *)&DataGlobal_B05488.__pad_579C[18852])++;
    *(int *)(*(int *)&DataGlobal_B05488.__pad_579C[18840] + 4 * v3) = aP0;
    }
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[8]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].NeedsSaveOrLink);
    *(int *)aP0[2].__pad_0 = 0;
    *(int *)&aP0[2].__pad_0[4] = 0;
    return 0;
  }
    return result;
}
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

// 0x6CDFF0
namespace gamemd {
long long SuperClass::ExecuteAction(unsigned int a2, int a3)
{
{
    __int64 result;
    result = a2;
    if ( a2 == this->SuperClass_field_0x2C )
    this->SuperClass_field_0x2C = 0;
    if ( a2 == this->SuperClass_field_0x28 )
    this->SuperClass_field_0x28 = 0;
    if ( a2 == this->SuperClass_field_0x68 )
  {
    this->SuperClass_field_0x68 = 0;
    this->AnimationGotInvalid = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6CE020
namespace gamemd {
int SuperClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int result;
    int v9;
    v3 = AbstractClass::ProcessPower((AbstractClass *)this);
    LOBYTE(v3) = this->Granted;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->OneTime;
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->IsCharged;
    Power::FlagProcess(a2, v5);
    Power::TimerProcess(this->SuperClass_field_0x78);
    Power::TimerProcess(this->SuperClass_field_0x7C);
    LOBYTE(v6) = (unsigned char)this->SuperClass_field_0x60;
    v7 = Power::FlagProcess(a2, v6);
    LOBYTE(v7) = (unsigned char)this->SuperClass_field_0x6C;
    Power::FlagProcess(a2, v7);
    result = this->SuperClass_field_0x68;
    if ( result )
  {
    Power::TimerProcess(*(unsigned char *)(result + 405));
    v9 = (*(int (__stdcall **)(int))(*(int *)(this->SuperClass_field_0x68 + 4) + 16))(this->SuperClass_field_0x68 + 4);
    return Power::TimerProcess(v9);
  }
    return result;
}
}
} // namespace gamemd

// 0x6CE1A0
namespace gamemd {
bool SuperClass::ShouldFlashTab()
{
{
    int v1;
    int v2;
    if ( (unsigned char)this->SuperClass_field_0x70 )
    return 0;
    v1 = this->SuperClass_field_0x28;
    if ( *(char *)(v1 + 229) )
  {
    if ( !this->SuperClass_field_0x7C )
    return 0;
  }
    else if ( !this->IsCharged )
  {
    return 0;
  }
    v2 = *(int *)(v1 + 232);
    if ( v2 == -1 )
    return 1;
    return v2 && v2 + this->SuperClass_field_0x74 > (int)g_CurrentFrame;
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
