// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x484680
int TacticalMap::ComputeScreenTint()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TacticalMap::ComputeScreenTint(int this)
{
  __int16 v2; // dx
  __int16 v3; // ax
  __int16 v4; // dx
  __int16 v5; // ax
  bool v6; // zf
  __int16 v7; // ax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  __int16 v11; // cx
  int v12; // eax
  __int16 v13; // dx
  __int16 v14; // cx
  __int16 v15; // ax
  __int16 v16; // ax

  v2 = *(_WORD *)(this + 264) + (__int16)(1000 * *((_WORD *)MEMORY[0xA8B230] + 6806)) / 100; /*0x4846ab*/
  *(_WORD *)(this + 266) = v2; /*0x4846b2*/
  *(_WORD *)(this + 270) = v2; /*0x4846b9*/
  if ( LightningStorm::IsActive() ) /*0x4846c0*/
  {
    v3 = *(char *)(this + 283); /*0x4846cf*/
    *(_WORD *)(this + 266) += v3 * *((_WORD *)MEMORY[0xA8B230] + 6830) - *((_WORD *)MEMORY[0xA8B230] + 6828); /*0x4846ec*/
    v4 = (v3 + 4) * *((_WORD *)MEMORY[0xA8B230] + 6830) - *((_WORD *)MEMORY[0xA8B230] + 6828); /*0x484703*/
  }
  else if ( PsyDom::IsActive() ) /*0x48470f*/
  {
    v5 = *(char *)(this + 283); /*0x48471e*/
    *(_WORD *)(this + 266) += v5 * *((_WORD *)MEMORY[0xA8B230] + 6856) - *((_WORD *)MEMORY[0xA8B230] + 6854); /*0x48473b*/
    v4 = (v5 + 4) * *((_WORD *)MEMORY[0xA8B230] + 6856) - *((_WORD *)MEMORY[0xA8B230] + 6854); /*0x484752*/
  }
  else
  {
    v6 = !NukeFlash::IsActive(); /*0x484766*/
    v7 = *(char *)(this + 283); /*0x484768*/
    if ( v6 ) /*0x484770*/
    {
      *(_WORD *)(this + 266) += v7 * *((_WORD *)MEMORY[0xA8B230] + 6818) - *((_WORD *)MEMORY[0xA8B230] + 6816); /*0x4847bc*/
      v4 = (v7 + 4) * *((_WORD *)MEMORY[0xA8B230] + 6818) - *((_WORD *)MEMORY[0xA8B230] + 6816); /*0x4847d3*/
    }
    else
    {
      *(_WORD *)(this + 266) += v7 * *((_WORD *)MEMORY[0xA8B230] + 6842) - *((_WORD *)MEMORY[0xA8B230] + 6840); /*0x484787*/
      v4 = (v7 + 4) * *((_WORD *)MEMORY[0xA8B230] + 6842) - *((_WORD *)MEMORY[0xA8B230] + 6840); /*0x48479e*/
    }
  }
  v8 = *(__int16 *)(this + 266); /*0x4847da*/
  v9 = *(_DWORD *)(this + 260); /*0x4847e1*/
  *(_WORD *)(this + 270) += v4; /*0x4847e7*/
  *(_WORD *)(this + 268) = (unsigned int)(v9 * v8) >> 16; /*0x4847f4*/
  v10 = v9 * *(__int16 *)(this + 270); /*0x484802*/
  v11 = *(_WORD *)(this + 266); /*0x484805*/
  v12 = v10 >> 16; /*0x48480c*/
  *(_WORD *)(this + 270) = v12; /*0x484814*/
  if ( v11 >= 2000 ) /*0x48481e*/
    v11 = 2000; /*0x484820*/
  *(_WORD *)(this + 266) = v11; /*0x484825*/
  v13 = *(_WORD *)(this + 268); /*0x484838*/
  if ( v13 >= 2000 ) /*0x48483b*/
    v13 = 2000; /*0x48483d*/
  *(_WORD *)(this + 268) = v13; /*0x484846*/
  v14 = v12; /*0x48484d*/
  if ( (__int16)v12 >= 2000 ) /*0x484850*/
    v14 = 2000; /*0x484852*/
  v15 = *(_WORD *)(this + 266); /*0x484857*/
  *(_WORD *)(this + 270) = v14; /*0x48485e*/
  if ( v15 <= 0 ) /*0x484868*/
    v15 = 0; /*0x48486f*/
  *(_WORD *)(this + 266) = v15; /*0x484874*/
  if ( v13 <= 0 ) /*0x48487b*/
    v16 = 0; /*0x484882*/
  else
    v16 = v13; /*0x48487d*/
  *(_WORD *)(this + 268) = v16; /*0x484887*/
  if ( v14 <= 0 ) /*0x48488e*/
  {
    *(_WORD *)(this + 270) = 0; /*0x48489e*/
    return 0; /*0x48489c*/
  }
  else
  {
    *(_WORD *)(this + 270) = v14; /*0x484893*/
    return v14; /*0x484890*/
  }
}
}

// 0x4F4480
int TacticalMap::Redraw()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4F4480(_DWORD *this)
{
  int v1; // ebp
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // [esp+8h] [ebp-8h]
  bool v7; // [esp+Ch] [ebp-4h]

  v1 = MEMORY[0x887314]; /*0x4f4489*/
  MEMORY[0x887314] = MEMORY[0x88731C]; /*0x4f4492*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 64))(MEMORY[0x887640], MEMORY[0x88731C], 0); /*0x4f44a2*/
  v3 = *(this + 3); /*0x4f44a5*/
  *(this + 3) = 0; /*0x4f44a8*/
  LOBYTE(v6) = v3 != 0; /*0x4f44b7*/
  v7 = v3 == 2; /*0x4f44be*/
  if ( !(unsigned __int8)UI_Helper() ) /*0x4f44c2*/
  {
    TacticalMap::Render((int)MEMORY[0x887324], MEMORY[0x88731C], v6, 0); /*0x4f44df*/
    TacticalMap::Render((int)MEMORY[0x887324], MEMORY[0x88731C], v6, 1); /*0x4f44f4*/
    (*(void (__thiscall **)(_DWORD *, bool))(*this + 64))(this, v7); /*0x4f4502*/
    TacticalMap::Render((int)MEMORY[0x887324], MEMORY[0x88731C], v6, 2); /*0x4f4515*/
  }
  if ( MEMORY[0xB0B519] && !MEMORY[0xA8ED6B] ) /*0x4f452b*/
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)MEMORY[0x887640] + 64))(MEMORY[0x887640], MEMORY[0x887300], 1); /*0x4f453d*/
    MEMORY[0xB0B519] = 0; /*0x4f4540*/
  }
  if ( MEMORY[0xA8EF54] ) /*0x4f454f*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xA8EF54] + 44))(MEMORY[0xA8EF54], 0); /*0x4f4555*/
  TacticalMap::DrawCursor(&MEMORY[0xA8BC60]); /*0x4f455d*/
  v4 = MEMORY[0x887368]; /*0x4f4562*/
  if ( MEMORY[0x887368] ) /*0x4f456a*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887368] + 12))(MEMORY[0x887368], 0); /*0x4f4570*/
  if ( MEMORY[0xA8B8B4] ) /*0x4f457a*/
  {
    LOBYTE(v4) = 0; /*0x4f457c*/
    DrawHUD(v4); /*0x4f457e*/
  }
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 60))(MEMORY[0x887640], MEMORY[0x88731C], 0); /*0x4f4593*/
  result = (*(int (__thiscall **)(_DWORD *))(*this + 68))(this); /*0x4f459a*/
  MEMORY[0x887314] = v1; /*0x4f459d*/
  return result; /*0x4f45a3*/
}
}

// 0x5AEA10
void TacticalMap::MultiplyByScalar(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall TacticalMap::MultiplyByScalar(float *this, ObjectClass *aP1)
{
  *this = *(float *)&aP1 * *this; /*0x5aea16*/
  *(this + 4) = *(float *)&aP1 * *(this + 4); /*0x5aea1f*/
  *(this + 8) = *(float *)&aP1 * *(this + 8); /*0x5aea29*/
  *(this + 1) = *(float *)&aP1 * *(this + 1); /*0x5aea33*/
  *(this + 5) = *(float *)&aP1 * *(this + 5); /*0x5aea3d*/
  *(this + 9) = *(float *)&aP1 * *(this + 9); /*0x5aea47*/
  *(this + 2) = *(float *)&aP1 * *(this + 2); /*0x5aea51*/
  *(this + 6) = *(float *)&aP1 * *(this + 6); /*0x5aea5b*/
  *(this + 10) = *(float *)&aP1 * *(this + 10); /*0x5aea65*/
}
}

// 0x5D49A0
char TacticalMap::DrawCursor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5D49A0(_DWORD *this)
{
  char result; // al
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // [esp-Ch] [ebp-38h]
  int v8; // [esp-4h] [ebp-30h]
  int v9; // [esp+8h] [ebp-24h] BYREF
  _DWORD v10[2]; // [esp+Ch] [ebp-20h] BYREF
  int v11; // [esp+14h] [ebp-18h] BYREF
  _BYTE v12[16]; // [esp+1Ch] [ebp-10h] BYREF

  v9 = 0; /*0x5d49a6*/
  result = *((_BYTE *)this + 25); /*0x5d49b4*/
  if ( result ) /*0x5d49b9*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x5d49c8*/
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 9) + 108))(*(this + 9), 1); /*0x5d49d2*/
    TextRenderer::GetInstance(); /*0x5d49db*/
    v3 = Text::MeasureWidth(*(_DWORD *)(*(this + 9) + 48), 0); /*0x5d49f8*/
    if ( *((_WORD *)this + 348) /*0x5d4a1b*/
      && *(this + 172) - *(this + 173) < *(this + 4) - 1
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 88))(*(this + 9)) )
    {
      LOWORD(v9) = *((_WORD *)this + 348); /*0x5d4a29*/
      v4 = (_DWORD *)*(this + 9); /*0x5d4a2e*/
      v5 = v4[3]; /*0x5d4a31*/
      v10[1] = v4[4]; /*0x5d4a39*/
      v10[0] = v3 + v5; /*0x5d4a3d*/
      v8 = v4[11]; /*0x5d4a4c*/
      v7 = *((_DWORD *)MEMORY[0xB054D4] + v4[13]); /*0x5d4a56*/
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314], v12); /*0x5d4a65*/
      TextRenderer::DrawText(&v11, (size_t)&v9, MEMORY[0x887314], v6, (int)v10, v7, 0, v8); /*0x5d4a79*/
    }
    result = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x5d4a89*/
  }
  if ( *this ) /*0x5d4a8d*/
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 44))(*this, 1); /*0x5d4a98*/
  return result; /*0x5d4a8f*/
}
}

// 0x6D1C20
int TacticalMap::Construct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TacticalMap_Constructor(int this)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+0h] [ebp-10h]
  float v5; // [esp+0h] [ebp-10h]

  AbstractClass::Constructor(this); /*0x6d1c25*/
  *(_DWORD *)(this + 168) = -1; /*0x6d1c2c*/
  *(_BYTE *)(this + 172) = 0; /*0x6d1c36*/
  *(_BYTE *)(this + 173) = 0; /*0x6d1c3c*/
  *(_DWORD *)(this + 192) = 0; /*0x6d1c42*/
  *(_DWORD *)(this + 176) = 0; /*0x6d1c48*/
  *(_DWORD *)(this + 180) = 0; /*0x6d1c4e*/
  *(_DWORD *)(this + 184) = 0; /*0x6d1c54*/
  *(_DWORD *)(this + 188) = 0; /*0x6d1c5a*/
  *(_DWORD *)(this + 196) = 1072693248; /*0x6d1c60*/
  *(_DWORD *)(this + 200) = MEMORY[0xB0CE08]; /*0x6d1c6f*/
  *(_DWORD *)(this + 204) = MEMORY[0xB0CE0C]; /*0x6d1c7b*/
  *(_DWORD *)(this + 208) = MEMORY[0xB0CE08]; /*0x6d1c87*/
  *(_DWORD *)(this + 212) = MEMORY[0xB0CE0C]; /*0x6d1c92*/
  *(_DWORD *)(this + 216) = 0; /*0x6d1c98*/
  *(_DWORD *)(this + 220) = 0; /*0x6d1c9e*/
  *(_DWORD *)(this + 224) = 0; /*0x6d1ca4*/
  *(_DWORD *)(this + 3428) = 0; /*0x6d1caa*/
  *(_DWORD *)(this + 3432) = 0; /*0x6d1cb0*/
  *(_DWORD *)(this + 3436) = 0; /*0x6d1cb6*/
  *(_DWORD *)(this + 3440) = 0; /*0x6d1cbc*/
  *(_DWORD *)(this + 3444) = 0; /*0x6d1cc2*/
  *(_DWORD *)(this + 3448) = 0; /*0x6d1cc8*/
  *(_BYTE *)(this + 3452) = 1; /*0x6d1cce*/
  *(_BYTE *)(this + 3453) = 0; /*0x6d1cd5*/
  *(_BYTE *)(this + 3454) = 0; /*0x6d1cdb*/
  *(_DWORD *)(this + 3456) = MEMORY[0xB0CD60]; /*0x6d1ced*/
  *(_DWORD *)(this + 3460) = MEMORY[0xB0CD64]; /*0x6d1cf8*/
  *(_DWORD *)(this + 3464) = MEMORY[0xB0CD68]; /*0x6d1d01*/
  *(_DWORD *)(this + 3468) = MEMORY[0xB0CD6C]; /*0x6d1d09*/
  *(_DWORD *)(this + 3472) = 0; /*0x6d1d0c*/
  *(_DWORD *)(this + 3476) = 0; /*0x6d1d12*/
  *(_DWORD *)(this + 3480) = 0; /*0x6d1d18*/
  *(_DWORD *)(this + 3484) = 0; /*0x6d1d1e*/
  *(_DWORD *)(this + 3488) = 0; /*0x6d1d2a*/
  *(_DWORD *)(this + 3492) = Timer::GetTicks(this + 3496); /*0x6d1d35*/
  *(_DWORD *)(this + 3500) = 0; /*0x6d1d3b*/
  *(_DWORD *)(this + 3504) = 0; /*0x6d1d4e*/
  *(_DWORD *)this = &Tactical::`vftable'; /*0x6d1d54*/
  this->TacticalMap_field_04 = &Tactical::`vftable'; /*0x6d1d5a*/
  this->TacticalMap_field_08 = &Tactical::`vftable'; /*0x6d1d61*/
  this->TacticalMap_field_0C = &Tactical::`vftable'; /*0x6d1d68*/
  memset((void *)(this + 228), 0, 0xC80u); /*0x6d1d6f*/
  *(_WORD *)(this + 36) = 0; /*0x6d1d77*/
  *(_DWORD *)(this + 164) = -1; /*0x6d1d7d*/
  Matrix3x4::Identity(this + 3508); /*0x6d1d87*/
  v3 = MEMORY[0xB0CD88]; /*0x6d1d95*/
  Matrix3x3::RotateX(v3); /*0x6d1d98*/
  v4 = MEMORY[0xB0CE98]; /*0x6d1da6*/
  Matrix2D::Rotate(v4); /*0x6d1da9*/
  v5 = 60.0 / MEMORY[0xB0CD78]; /*0x6d1dbb*/
  TacticalMap::MultiplyByScalar(v5); /*0x6d1dc0*/
  *(_DWORD *)(this + 3556) = 1082689742; /*0x6d1dca*/
  *(_DWORD *)(this + 3560) = 1091078350; /*0x6d1dd4*/
  *(_DWORD *)(this + 3564) = 0; /*0x6d1dda*/
  *(_DWORD *)(this + 3568) = 0; /*0x6d1de0*/
  *(_DWORD *)(this + 3572) = -1064793906; /*0x6d1de6*/
  *(_DWORD *)(this + 3576) = 1091078350; /*0x6d1df0*/
  *(_DWORD *)(this + 3580) = 0; /*0x6d1df6*/
  *(_DWORD *)(this + 3584) = 0; /*0x6d1dfc*/
  *(_DWORD *)(this + 3588) = 0; /*0x6d1e02*/
  *(_DWORD *)(this + 3592) = 0; /*0x6d1e08*/
  *(_DWORD *)(this + 3596) = 1065353216; /*0x6d1e0e*/
  *(_DWORD *)(this + 3600) = 0; /*0x6d1e18*/
  MEMORY[0x887324] = (LPPERSISTSTREAM)this; /*0x6d1e1e*/
  return this; /*0x6d1e26*/
}
}

// 0x6D2B60
int TacticalMap::RenderCell(char arg0, AbstractClass * aP2, int a4, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TacticalMap::RenderCell(_DWORD *this, char arg0, AbstractClass *aP2, int a4, int a2)
{
  int v6; // esi
  int v7; // ebp
  IUnknown *v8; // eax
  AbstractClass *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  int v12; // edx
  int v13; // eax
  const void *v14; // esi
  void *v15; // edi
  int result; // eax
  int v17; // ebp
  ObjectClass *v18; // edi
  ObjectClass *Coords; // eax
  int *v20; // eax
  int v21; // ecx
  AbstractClass *v22; // [esp-8h] [ebp-78h]
  AbstractClass *v23; // [esp-4h] [ebp-74h]
  IUnknown *v24; // [esp+10h] [ebp-60h]
  int v25; // [esp+14h] [ebp-5Ch] BYREF
  int v26; // [esp+18h] [ebp-58h]
  AbstractClass *v27; // [esp+1Ch] [ebp-54h]
  ObjectClass *v28; // [esp+20h] [ebp-50h] BYREF
  int v29; // [esp+24h] [ebp-4Ch]
  AbstractClass aP1; // [esp+28h] [ebp-48h] BYREF
  int v31; // [esp+4Ch] [ebp-24h]
  _DWORD v32[4]; // [esp+50h] [ebp-20h] BYREF
  _DWORD v33[4]; // [esp+60h] [ebp-10h] BYREF

  if ( !arg0 ) /*0x6d2b6f*/
  {
    if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] ) /*0x6d2b7d*/
    {
      v6 = *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1; /*0x6d2b83*/
      v24 = (IUnknown *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1); /*0x6d2b86*/
      if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36] - 1 >= 0 ) /*0x6d2b8a*/
      {
        v7 = 20 * v6; /*0x6d2b93*/
        do /*0x6d2cfd*/
        {
          *(_DWORD *)&aP1.__pad_0[8] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + v7); /*0x6d2ba2*/
          *(_DWORD *)&aP1.__pad_0[12] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + v7 + 4); /*0x6d2ba9*/
          aP1.uniqueId = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + v7 + 8); /*0x6d2bb0*/
          aP1.abstractFlags = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + v7 + 12); /*0x6d2bbd*/
          *(_DWORD *)&aP1.__pad_0[8] += aP2; /*0x6d2bc7*/
          *(_DWORD *)&aP1.__pad_0[12] += a4; /*0x6d2bd0*/
          v26 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d2bda*/
          v29 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6d2bde*/
          v25 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x6d2be7*/
          v28 = *(ObjectClass **)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x6d2beb*/
          v23 = *(AbstractClass **)&MEMORY[0x87F8E4].__pad_5568[8544]; /*0x6d2bf5*/
          v22 = *(AbstractClass **)&MEMORY[0x87F8E4].__pad_5568[8540]; /*0x6d2bfa*/
          v8 = (IUnknown *)Coord2D::Sub(&v28, &aP1, (IUnknown *)&v25); /*0x6d2c05*/
          v9 = Rect::Construct(v32, v8, v22, v23); /*0x6d2c0f*/
          aP1.nextArrayIndex = *(_DWORD *)v9->__pad_0; /*0x6d2c18*/
          aP1.referenceCount = *(_DWORD *)&v9->__pad_0[4]; /*0x6d2c21*/
          aP1.NeedsSaveOrLink = *(void **)&v9->__pad_0[8]; /*0x6d2c28*/
          v31 = *(_DWORD *)&v9->__pad_0[12]; /*0x6d2c37*/
          v10 = ClipRectIntersection(v33, &aP1.nextArrayIndex, (int *)&aP1.__pad_0[8], 0, 0); /*0x6d2c40*/
          *(_DWORD *)&aP1.__pad_0[8] = *v10; /*0x6d2c49*/
          *(_DWORD *)&aP1.__pad_0[12] = v10[1]; /*0x6d2c50*/
          aP1.uniqueId = v10[2]; /*0x6d2c57*/
          aP1.abstractFlags = v10[3]; /*0x6d2c64*/
          v11 = (_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + v7); /*0x6d2c68*/
          *v11 = *(_DWORD *)&aP1.__pad_0[8]; /*0x6d2c6b*/
          v11[1] = *(_DWORD *)&aP1.__pad_0[12]; /*0x6d2c72*/
          v11[2] = aP1.uniqueId; /*0x6d2c79*/
          v11[3] = aP1.abstractFlags; /*0x6d2c80*/
          if ( aP1.uniqueId > 0 && aP1.abstractFlags > 0 ) /*0x6d2c91*/
          {
            TacticalMap::FillScanlinesOpaque( /*0x6d2cee*/
              *(int *)&MEMORY[0x87F8E4].__pad_5568[10232],
              *(int *)&aP1.__pad_0[8],
              *(int *)&aP1.__pad_0[12],
              aP1.uniqueId,
              aP1.abstractFlags);
          }
          else if ( v6 < *(int *)&MEMORY[0xB077F8].__pad_566C[36] ) /*0x6d2c9a*/
          {
            v12 = v6; /*0x6d2c9d*/
            --*(_DWORD *)&MEMORY[0xB077F8].__pad_566C[36]; /*0x6d2ca1*/
            if ( v6 < *(int *)&MEMORY[0xB077F8].__pad_566C[36] ) /*0x6d2ca6*/
            {
              v13 = v7; /*0x6d2ca8*/
              do /*0x6d2cc8*/
              {
                ++v12; /*0x6d2cb0*/
                v14 = (const void *)(v13 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24] + 20); /*0x6d2cb1*/
                v15 = (void *)(v13 + *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[24]); /*0x6d2cb5*/
                v13 += 20; /*0x6d2cbd*/
                qmemcpy(v15, v14, 0x14u); /*0x6d2cc0*/
              }
              while ( v12 < *(int *)&MEMORY[0xB077F8].__pad_566C[36] ); /*0x6d2cc8*/
              v6 = (int)v24; /*0x6d2cca*/
            }
          }
          --v6; /*0x6d2cf3*/
          v7 -= 20; /*0x6d2cf4*/
          v24 = (IUnknown *)v6; /*0x6d2cf9*/
        }
        while ( v6 >= 0 ); /*0x6d2cfd*/
      }
    }
  }
  result = *(this + 56); /*0x6d2d03*/
  if ( result > 0 && !arg0 ) /*0x6d2d17*/
  {
    v17 = 0; /*0x6d2d1d*/
    v18 = (ObjectClass *)(this + 57); /*0x6d2d27*/
    do /*0x6d2dc2*/
    {
      Coords = (ObjectClass *)CellClass::GetCoords(*(_DWORD **)v18->__pad_0, (int *)&aP1.__pad_0[8]); /*0x6d2d34*/
      v25 = *(_DWORD *)Coords->__pad_0; /*0x6d2d3b*/
      v26 = *(_DWORD *)&Coords->__pad_0[4]; /*0x6d2d47*/
      v27 = 0; /*0x6d2d59*/
      v20 = Coord::To_ScreenRaw((int *)aP1.__pad_0, &v25); /*0x6d2d61*/
      v21 = v20[1] - *(this + 45); /*0x6d2d81*/
      v28 = (ObjectClass *)(*v20 - *(this + 44) + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] - 30); /*0x6d2d8d*/
      v29 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + v21 - 15; /*0x6d2d9c*/
      if ( g_hWnd ) /*0x6d2da0*/
        DSurface::Process(*(_DWORD *)v18->__pad_0, (IUnknown *)&v28, (int *)a2); /*0x6d2db1*/
      result = *(this + 56); /*0x6d2db6*/
      ++v17; /*0x6d2dbc*/
      v18 = (ObjectClass *)((char *)v18 + 4); /*0x6d2dbd*/
    }
    while ( v17 < result ); /*0x6d2dc2*/
  }
  return result; /*0x6d2dc8*/
}
}

// 0x6D3D10
namespace gamemd {
int TacticalMap_Render()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x6D8DB0
int TacticalMap::RenderAllObjects(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TacticalMap_RenderAllObjects(int this, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  float *v5; // ebp
  float *v6; // eax
  float *v7; // eax
  int v8; // edi
  float *v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // edi
  int v13; // eax
  int v14; // ebx
  int *v15; // esi
  int v16; // eax
  int v17; // ecx
  _DWORD *v18; // eax
  LPPERSISTSTREAM v19; // edi
  int *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  _DWORD *v26; // eax
  int v27; // eax
  int *v28; // edx
  int v29; // eax
  int v30; // ecx
  char v31; // al
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int *v38; // eax
  LPPERSISTSTREAM v39; // ebx
  int *v40; // edi
  int *v41; // ecx
  int v42; // eax
  int v43; // edx
  int v44; // ecx
  int v45; // kr18_4
  int v46; // eax
  struct IPersistStreamVtbl *lpVtbl; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // ecx
  _BYTE *v51; // ebx
  int *v52; // eax
  LPPERSISTSTREAM v53; // ebp
  int *v54; // edi
  _DWORD *v55; // eax
  int v56; // ecx
  __int64 v57; // rax
  int v58; // esi
  int v59; // eax
  int v60; // esi
  int v61; // eax
  int *v62; // ecx
  int result; // eax
  int v64; // ebx
  int *v65; // eax
  int v66; // esi
  int v67; // edi
  int v68; // esi
  int v69; // eax
  int v70; // edi
  int v71; // esi
  bool v72; // cc
  int v73; // [esp+28h] [ebp-ECh]
  int v74; // [esp+28h] [ebp-ECh]
  int v75; // [esp+28h] [ebp-ECh]
  int v76; // [esp+28h] [ebp-ECh]
  int v77; // [esp+2Ch] [ebp-E8h] BYREF
  int v78; // [esp+30h] [ebp-E4h]
  float v79; // [esp+34h] [ebp-E0h] BYREF
  float v80; // [esp+38h] [ebp-DCh]
  int v81; // [esp+3Ch] [ebp-D8h]
  int *v82; // [esp+40h] [ebp-D4h]
  int v83; // [esp+44h] [ebp-D0h]
  int v84; // [esp+48h] [ebp-CCh]
  int v85; // [esp+4Ch] [ebp-C8h]
  int v86; // [esp+50h] [ebp-C4h] BYREF
  int v87; // [esp+54h] [ebp-C0h]
  int v88; // [esp+58h] [ebp-BCh]
  int v89; // [esp+5Ch] [ebp-B8h] BYREF
  int v90; // [esp+60h] [ebp-B4h]
  int v91; // [esp+64h] [ebp-B0h] BYREF
  int v92; // [esp+68h] [ebp-ACh]
  int v93; // [esp+74h] [ebp-A0h]
  int v94; // [esp+78h] [ebp-9Ch]
  float v95[4]; // [esp+7Ch] [ebp-98h] BYREF
  int v96; // [esp+8Ch] [ebp-88h]
  _DWORD v97[2]; // [esp+90h] [ebp-84h] BYREF
  _DWORD v98[4]; // [esp+98h] [ebp-7Ch] BYREF
  int v99[3]; // [esp+A8h] [ebp-6Ch] BYREF
  int v100; // [esp+B4h] [ebp-60h]
  _BYTE v101[12]; // [esp+B8h] [ebp-5Ch] BYREF
  _BYTE v102[12]; // [esp+C4h] [ebp-50h] BYREF
  int v103; // [esp+D0h] [ebp-44h] BYREF
  char v104[12]; // [esp+D8h] [ebp-3Ch] BYREF
  char v105[12]; // [esp+E4h] [ebp-30h] BYREF
  char v106[12]; // [esp+F0h] [ebp-24h] BYREF
  char v107[12]; // [esp+FCh] [ebp-18h] BYREF
  char v108[12]; // [esp+108h] [ebp-Ch] BYREF

  v2 = MEMORY[0x886FA8]; /*0x6d8db7*/
  v3 = *(_DWORD *)(this + 176); /*0x6d8dc4*/
  v4 = *(_DWORD *)(this + 180); /*0x6d8dd5*/
  v77 = v3 + MEMORY[0x886FA8] / 2; /*0x6d8ddb*/
  v73 = MEMORY[0x886FAC]; /*0x6d8de5*/
  v5 = (float *)(this + 3556); /*0x6d8deb*/
  v79 = (float)v77; /*0x6d8df1*/
  v78 = v4 - MEMORY[0x886FAC]; /*0x6d8df5*/
  v81 = 0; /*0x6d8e08*/
  v80 = (float)(v4 - MEMORY[0x886FAC]); /*0x6d8e10*/
  v6 = TransformMatrix3x4Point(v95, (float *)(this + 3556), &v79); /*0x6d8e14*/
  v79 = *v6; /*0x6d8e1b*/
  v80 = v6[1]; /*0x6d8e26*/
  v81 = *((_DWORD *)v6 + 2); /*0x6d8e2d*/
  v83 = Math::RoundToInt(v79); /*0x6d8e3a*/
  v84 = Math::RoundToInt(v80); /*0x6d8e43*/
  v77 = v3 + 2 * v2; /*0x6d8e4a*/
  v79 = (float)v77; /*0x6d8e62*/
  v74 = v73 / 2 + v4; /*0x6d8e74*/
  v78 = v74; /*0x6d8e66*/
  v81 = 0; /*0x6d8e78*/
  v80 = (float)v74; /*0x6d8e80*/
  v7 = TransformMatrix3x4Point(v95, v5, &v79); /*0x6d8e84*/
  v79 = *v7; /*0x6d8e8b*/
  v80 = v7[1]; /*0x6d8e96*/
  v81 = *((_DWORD *)v7 + 2); /*0x6d8e9d*/
  v8 = Math::RoundToInt(v79); /*0x6d8ea8*/
  v77 = v3 - v2; /*0x6d8eae*/
  v78 = v74; /*0x6d8eb6*/
  v79 = (float)(v3 - v2); /*0x6d8eba*/
  v80 = (float)v74; /*0x6d8ecd*/
  v81 = 0; /*0x6d8ed1*/
  v9 = TransformMatrix3x4Point(v95, v5, &v79); /*0x6d8ed9*/
  v79 = *v9; /*0x6d8ee0*/
  v80 = v9[1]; /*0x6d8ee7*/
  v81 = *((_DWORD *)v9 + 2); /*0x6d8ef2*/
  v10 = Math::RoundToInt(v80); /*0x6d8ef6*/
  v11 = v83; /*0x6d8efb*/
  v93 = 2 * (v8 - v83); /*0x6d8f03*/
  v12 = v84; /*0x6d8f07*/
  v94 = 2 * (v10 - v84); /*0x6d8f0f*/
  v13 = 0; /*0x6d8f13*/
  v82 = 0; /*0x6d8f15*/
  do /*0x6d95a9*/
  {
    v85 = 0; /*0x6d8f1c*/
    v14 = 24 * v13; /*0x6d8f24*/
    v75 = 24 * v13; /*0x6d8f27*/
    if ( MEMORY[0x8A0370][6 * v13] > 0 ) /*0x6d8f33*/
    {
      while ( 1 ) /*0x6d8f43*/
      {
        v15 = *(int **)(*(int *)((char *)MEMORY[0x8A0364] + v14) + 4 * v85); /*0x6d8f43*/
        *((_BYTE *)v15 + 153) = 0; /*0x6d8f48*/
        if ( v15 ) /*0x6d8f4f*/
        {
          if ( (v15[5] & 4) != 0 ) /*0x6d8f64*/
          {
            v16 = v15[39]; /*0x6d8f72*/
            v86 = v16; /*0x6d8f74*/
            v17 = v15[40]; /*0x6d8f7a*/
            v87 = v17; /*0x6d8f7d*/
            v88 = v15[41]; /*0x6d8f84*/
            if ( v16 < v11 ) /*0x6d8f88*/
              goto LABEL_53; /*0x6d8f88*/
            if ( v16 >= v11 + v93 ) /*0x6d8f96*/
              goto LABEL_53; /*0x6d8f96*/
            if ( v17 < v12 ) /*0x6d8f9e*/
              goto LABEL_53; /*0x6d8f9e*/
            if ( v17 >= v12 + v94 ) /*0x6d8fac*/
              goto LABEL_53; /*0x6d8fac*/
            (*(void (__thiscall **)(int *, char *, _DWORD))(*v15 + 76))(v15, v107, 0); /*0x6d8fc0*/
            if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0 ) /*0x6d8fce*/
            {
              if ( Game::Stub3((int)&v86) ) /*0x6d8fda*/
                goto LABEL_53; /*0x6d8fe1*/
            }
            v18 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v104); /*0x6d8ff3*/
            v19 = MEMORY[0x887324]; /*0x6d8ff6*/
            v20 = Coord::To_ScreenRaw(&v103, v18); /*0x6d9007*/
            v77 = *v20; /*0x6d9010*/
            v78 = v20[1]; /*0x6d9017*/
            v21 = v78 - (unsigned int)v19[45].__tail_0; /*0x6d9029*/
            v77 -= (int)v19[44].__tail_0; /*0x6d9030*/
            v78 = v21; /*0x6d9034*/
            if ( v77 >= -360 && v77 <= MEMORY[0xB0CE30] + 360 && v21 >= -180 && v21 <= MEMORY[0xB0CE34] + 180 ) /*0x6d906a*/
            {
              v22 = *v15; /*0x6d9070*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d907e*/
              (*(void (__thiscall **)(int *, int *, int *))(v22 + 268))(v15, &v77, &MEMORY[0x886FA0]); /*0x6d9085*/
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d909e*/
            }
            goto LABEL_52; /*0x6d90a4*/
          }
          if ( (v15[5] & 1) != 0 ) /*0x6d90af*/
          {
            v23 = v15[39]; /*0x6d90bd*/
            v86 = v23; /*0x6d90bf*/
            v24 = v15[40]; /*0x6d90c5*/
            v87 = v24; /*0x6d90c8*/
            v88 = v15[41]; /*0x6d90cf*/
            if ( v23 >= v11 && v23 < v11 + v93 && v24 >= v12 && v24 < v12 + v94 ) /*0x6d90f7*/
            {
              v25 = *v15; /*0x6d90fd*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d9111*/
              v26 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(v25 + 72))(v15, v106); /*0x6d9118*/
              if ( Coord::To_Screen(MEMORY[0x887324], v26, v99) ) /*0x6d9122*/
              {
                (*(void (__thiscall **)(int *, int *, int *))(*v15 + 268))(v15, v99, &MEMORY[0x886FA0]); /*0x6d913c*/
                (*(void (__thiscall **)(int *, int *, int *))(*v15 + 272))(v15, v99, &MEMORY[0x886FA0]); /*0x6d9153*/
              }
              (*(void (__thiscall **)(int *, int *, int, int))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 1); /*0x6d916c*/
            }
            goto LABEL_53; /*0x6d9172*/
          }
        }
        v27 = (*(int (__thiscall **)(int *))(*v15 + 44))(v15); /*0x6d917b*/
        if ( v27 == 4 ) /*0x6d9181*/
        {
          v28 = (int *)(*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v108); /*0x6d9196*/
          v29 = *v28; /*0x6d9198*/
          v86 = v29; /*0x6d919a*/
          v30 = v28[1]; /*0x6d91a0*/
          v87 = v30; /*0x6d91a3*/
          v88 = v28[2]; /*0x6d91aa*/
          if ( v29 >= v11 && v29 < v11 + v93 && v30 >= v12 && v30 < v12 + v94 ) /*0x6d91d2*/
          {
            v31 = *((_BYTE *)v15 + 280); /*0x6d91d8*/
            *((_BYTE *)v15 + 153) = 1; /*0x6d91de*/
            if ( v31 /*0x6d920e*/
              || !*(_BYTE *)(v15[50] + 884)
              || (v32 = (*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v105), !Game::Stub3(v32)) )
            {
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d921f*/
            }
          }
          goto LABEL_53; /*0x6d921f*/
        }
        if ( v27 == 36 ) /*0x6d9227*/
        {
          if ( *(_BYTE *)(v15[50] + 691) || *((_BYTE *)v15 + 205) ) /*0x6d923d*/
          {
            v33 = v15[39]; /*0x6d9251*/
            v86 = v33; /*0x6d9257*/
            v34 = v15[40]; /*0x6d925d*/
            v87 = v34; /*0x6d9260*/
            v88 = v15[41]; /*0x6d9267*/
            if ( v33 >= v11 && v33 < v11 + v93 && v34 >= v12 && v34 < v12 + v94 && !Game::Stub3((int)&v86) ) /*0x6d929f*/
            {
              v35 = *v15; /*0x6d92ac*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d92ae*/
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(v35 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d92b7*/
            }
          }
          goto LABEL_53; /*0x6d92b7*/
        }
        v36 = v15[39]; /*0x6d92c4*/
        v86 = v36; /*0x6d92c6*/
        v37 = v15[40]; /*0x6d92cc*/
        v87 = v37; /*0x6d92cf*/
        v88 = v15[41]; /*0x6d92d6*/
        if ( v36 >= v11 && v36 < v11 + v93 && v37 >= v12 && v37 < v12 + v94 ) /*0x6d92fe*/
        {
          v38 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*v15 + 72))(v15, v101); /*0x6d9310*/
          v39 = MEMORY[0x887324]; /*0x6d9313*/
          v40 = v38; /*0x6d9319*/
          v41 = IsoCoord::ToPixel(v95, *v38, v38[1]); /*0x6d932b*/
          v42 = *v41; /*0x6d932d*/
          v43 = v41[1]; /*0x6d932f*/
          v44 = v40[2]; /*0x6d9332*/
          v100 = v43; /*0x6d9335*/
          v45 = v42; /*0x6d9343*/
          v46 = ZCoordToScreenY(v44); /*0x6d934a*/
          v91 = v45 / 256; /*0x6d935f*/
          v92 = v100 / 256 - v46; /*0x6d936e*/
          lpVtbl = v39[45].__tail_0; /*0x6d9378*/
          v97[0] = v39[44].__tail_0; /*0x6d9383*/
          v97[1] = lpVtbl; /*0x6d938a*/
          Vector2::Subtract(&v91, v97); /*0x6d9391*/
          if ( v91 >= -360 && v91 <= MEMORY[0xB0CE30] + 360 && v92 >= -180 && v92 <= MEMORY[0xB0CE34] + 180 ) /*0x6d93ca*/
          {
            v48 = *v15; /*0x6d93cc*/
            *((_BYTE *)v15 + 153) = 1; /*0x6d93da*/
            (*(void (__thiscall **)(int *, int *, int *))(v48 + 268))(v15, &v91, &MEMORY[0x886FA0]); /*0x6d93e1*/
            (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &MEMORY[0x886FA0], a2, 0); /*0x6d93fa*/
          }
          v14 = v75; /*0x6d9400*/
          v11 = v83; /*0x6d9404*/
LABEL_52:
          v12 = v84; /*0x6d9408*/
        }
LABEL_53:
        v49 = *(int *)((char *)MEMORY[0x8A0370] + v14); /*0x6d940c*/
        if ( ++v85 >= v49 ) /*0x6d941d*/
        {
          v13 = (int)v82; /*0x6d9423*/
          break; /*0x6d9423*/
        }
      }
    }
    if ( v13 == 2 ) /*0x6d942a*/
    {
      v50 = 0; /*0x6d9436*/
      v76 = 0; /*0x6d943a*/
      if ( MEMORY[0xA8EB50] > 0 ) /*0x6d943e*/
      {
        do /*0x6d9597*/
        {
          v51 = (_BYTE *)*((_DWORD *)MEMORY[0xA8EB44] + v50); /*0x6d944a*/
          if ( v51[116] && v51[153] ) /*0x6d9458*/
          {
            v52 = (int *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v51 + 172))(v51, v102); /*0x6d9472*/
            v53 = MEMORY[0x887324]; /*0x6d9478*/
            v54 = v52; /*0x6d947e*/
            v55 = IsoCoord::ToPixel(&v79, *v52, v52[1]); /*0x6d948b*/
            v56 = v55[1]; /*0x6d9494*/
            v57 = (int)*v55; /*0x6d9497*/
            v96 = v56; /*0x6d949e*/
            v58 = (BYTE4(v57) + (int)v57) >> 8; /*0x6d94a9*/
            v59 = ZCoordToScreenY(v54[2]); /*0x6d94ac*/
            v89 = v58; /*0x6d94be*/
            v90 = v96 / 256 - v59; /*0x6d94c9*/
            v60 = v58 - (unsigned int)v53[44].__tail_0; /*0x6d94d9*/
            v61 = v90 - (unsigned int)v53[45].__tail_0; /*0x6d94db*/
            v89 = v60; /*0x6d94e3*/
            v90 = v61; /*0x6d94e7*/
            if ( v60 >= -360 && v60 <= MEMORY[0xB0CE30] + 360 && v61 >= -180 && v61 <= MEMORY[0xB0CE34] + 180 ) /*0x6d9516*/
            {
              v98[2] = MEMORY[0x886FA8]; /*0x6d952a*/
              v98[0] = MEMORY[0x886FA0]; /*0x6d9539*/
              v98[1] = MEMORY[0x886FA4]; /*0x6d9540*/
              v98[3] = MEMORY[0x886FAC]; /*0x6d9547*/
              BuildingClass::DrawVisible(&v89, v98); /*0x6d957a*/
            }
            v11 = v83; /*0x6d957f*/
            v12 = v84; /*0x6d9583*/
          }
          v50 = ++v76; /*0x6d9590*/
        }
        while ( v76 < MEMORY[0xA8EB50] ); /*0x6d9597*/
        v13 = (int)v82; /*0x6d959d*/
      }
    }
    v82 = (int *)++v13; /*0x6d95a5*/
  }
  while ( v13 < 5 ); /*0x6d95a9*/
  v62 = MEMORY[0x8A0364]; /*0x6d95af*/
  v82 = MEMORY[0x8A0364]; /*0x6d95b4*/
  do /*0x6d97b5*/
  {
    result = 0; /*0x6d95bb*/
    v83 = v62[3]; /*0x6d95bf*/
    v85 = 0; /*0x6d95c3*/
    if ( v83 > 0 ) /*0x6d95c7*/
    {
      do /*0x6d97a2*/
      {
        v64 = *(_DWORD *)(*v62 + 4 * result); /*0x6d95cf*/
        if ( *(_BYTE *)(v64 + 153) ) /*0x6d95d2*/
        {
          if ( v64 ) /*0x6d95e2*/
          {
            if ( (*(_BYTE *)(v64 + 20) & 1) != 0 ) /*0x6d95f4*/
            {
              if ( (*(_BYTE *)(v64 + 20) & 4) == 0 /*0x6d965d*/
                || ((*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v64 + 76))(v64, v102, 0), !g_hWnd)
                || MEMORY[0xA8ED6B]
                || (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) == 0
                || (v95[0] = *(float *)(v64 + 156),
                    v95[1] = *(float *)(v64 + 160),
                    v95[2] = *(float *)(v64 + 164),
                    !Game::Stub3((int)v95)) )
              {
                v65 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v64 + 72))(v64, v101); /*0x6d9676*/
                v66 = *v65; /*0x6d9683*/
                v96 = v65[1]; /*0x6d9689*/
                v89 = v65[2]; /*0x6d9697*/
                LODWORD(v79) = -60 * v96 / 2 + 60 * v66 / 2; /*0x6d96d0*/
                v67 = SLODWORD(v79) / 256; /*0x6d96f7*/
                v68 = (30 * v96 / 2 + 30 * v66 / 2) / 256; /*0x6d96fa*/
                v69 = Math::RoundToInt((double)v89 * MEMORY[0xB0CD48] + (double)(v89 >= 728) + 0.5); /*0x6d9721*/
                v77 = v67; /*0x6d972d*/
                v78 = v68 - v69; /*0x6d9731*/
                v70 = v67 - (unsigned int)MEMORY[0x887324][44].__tail_0; /*0x6d9741*/
                v71 = v68 - v69 - (unsigned int)MEMORY[0x887324][45].__tail_0; /*0x6d9743*/
                v77 = v70; /*0x6d974b*/
                v78 = v71; /*0x6d974f*/
                if ( v70 >= -360 && v70 <= MEMORY[0xB0CE30] + 360 && v71 >= -180 && v71 <= MEMORY[0xB0CE34] + 180 ) /*0x6d9779*/
                  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v64 + 272))(v64, &v77, &MEMORY[0x886FA0]); /*0x6d9789*/
              }
            }
          }
        }
        result = v85 + 1; /*0x6d9797*/
        v72 = v85 + 1 < v83; /*0x6d9798*/
        v62 = v82; /*0x6d979a*/
        ++v85; /*0x6d979e*/
      }
      while ( v72 ); /*0x6d97a2*/
    }
    v62 += 6; /*0x6d97a8*/
    v82 = v62; /*0x6d97b1*/
  }
  while ( (int)v62 < (int)((int *)&MEMORY[0x8A03D8] + 1) ); /*0x6d97b5*/
  return result; /*0x6d97bb*/
}
}

// 0x6DA180
int TacticalMap::DrawOccupiedRegion()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6DA180(int *this)
{
  int result; // eax
  int v2; // edx
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  _DWORD v10[4]; // [esp+0h] [ebp-10h] BYREF

  if ( *(this + 868) || (result = *(this + 869)) != 0 ) /*0x6da195*/
  {
    v2 = *(this + 868); /*0x6da19b*/
    v3 = *(this + 870); /*0x6da1a1*/
    v4 = *(this + 869); /*0x6da1a9*/
    v5 = *(this + 871); /*0x6da1af*/
    if ( v3 < v2 ) /*0x6da1b8*/
    {
      v6 = v2; /*0x6da1ba*/
      v2 = v3; /*0x6da1bc*/
      v3 = v6; /*0x6da1be*/
    }
    if ( v5 < v4 ) /*0x6da1c2*/
    {
      v7 = v4; /*0x6da1c4*/
      v4 = v5; /*0x6da1c6*/
      v5 = v7; /*0x6da1c8*/
    }
    v8 = v3 - v2 + 1; /*0x6da1ce*/
    if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x6da1dc*/
      v9 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 15); /*0x6da1ea*/
    else
      v9 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 30); /*0x6da1f7*/
    v10[2] = v8; /*0x6da201*/
    v10[0] = v2; /*0x6da209*/
    v10[1] = v4; /*0x6da20d*/
    v10[3] = v5 - v4 + 1; /*0x6da211*/
    return (*(int (__thiscall **)(int, int *, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 84))( /*0x6da21e*/
             MEMORY[0x887314],
             &MEMORY[0x886FA0],
             v10,
             v9);
  }
  return result; /*0x6da224*/
}
}

// 0x7BCFB0
unsigned int TacticalMap::FillScanlinesOpaque(int a2, int a3, TacticalMap * aP3, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TacticalMap::FillScanlinesOpaque(int this, int a2, int a3, TacticalMap *aP3, int a5)
{
  TacticalMap *v5; // edi
  int v6; // esi
  unsigned int result; // eax
  unsigned int v8; // edx
  TacticalMap *v9; // ecx
  char *v10; // ebp
  unsigned int v11; // eax
  char *v12; // edi
  int v13; // esi
  int v14; // eax
  _WORD *v15; // ebx
  _WORD *v16; // ecx
  int v17; // esi
  TacticalMap *v18; // ebx
  char *v19; // ebp
  char *v20; // eax
  int v21; // esi
  int v23; // [esp+Ch] [ebp-Ch]
  _WORD *v24; // [esp+Ch] [ebp-Ch]
  char v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v5 = (TacticalMap *)this; /*0x7bcfbd*/
  v6 = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 20) + 92))(this->TacticalMap_field_14, a2, a3); /*0x7bcfd0*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v5->TacticalMap_field_14 + 96))(v5->TacticalMap_field_14); /*0x7bcfd4*/
  result = v5->TacticalMap_field_1C; /*0x7bcfda*/
  v8 = v6 + v5->TacticalMap_field_10; /*0x7bcfdd*/
  if ( v8 >= result ) /*0x7bcfe1*/
    v8 -= v5->TacticalMap_field_20; /*0x7bcfe3*/
  if ( a5 > 0 ) /*0x7bcfec*/
  {
    v26 = a5; /*0x7bcff4*/
    do /*0x7bd0cf*/
    {
      v9 = aP3; /*0x7bcff8*/
      if ( v8 + 2 * (_DWORD)aP3 < result ) /*0x7bd001*/
      {
        v18 = aP3; /*0x7bd0e2*/
        v19 = (char *)v8; /*0x7bd0e4*/
        if ( (v8 & 2) != 0 && aP3 ) /*0x7bd0ea*/
        {
          *(_WORD *)v8 = -1; /*0x7bd0ec*/
          v19 = (char *)(v8 + 2); /*0x7bd0f1*/
          v18 = (TacticalMap *)((char *)aP3 - 1); /*0x7bd0f4*/
        }
        v20 = 0; /*0x7bd0f9*/
        v21 = (int)v18 >> 1; /*0x7bd0fe*/
        if ( (int)v18 >> 1 ) /*0x7bd0fe*/
        {
          memset(v19, 0xFFu, 4 * v21); /*0x7bd109*/
          v5 = (TacticalMap *)this; /*0x7bd10b*/
          v20 = &v19[4 * v21]; /*0x7bd10f*/
        }
        if ( ((unsigned __int8)v18 & 1) != 0 && v20 ) /*0x7bd11a*/
          *(_WORD *)v20 = -1; /*0x7bd11c*/
      }
      else
      {
        v10 = (char *)v8; /*0x7bd009*/
        v11 = (result - v8) >> 1; /*0x7bd00b*/
        v23 = v11; /*0x7bd012*/
        if ( (v8 & 2) != 0 && v11 ) /*0x7bd01a*/
        {
          *(_WORD *)v8 = -1; /*0x7bd01f*/
          v10 = (char *)(v8 + 2); /*0x7bd024*/
          v23 = v11 - 1; /*0x7bd027*/
        }
        v12 = 0; /*0x7bd02f*/
        v13 = v23 >> 1; /*0x7bd034*/
        if ( v23 >> 1 ) /*0x7bd034*/
        {
          memset(v10, 0xFFu, 4 * v13); /*0x7bd03f*/
          v9 = aP3; /*0x7bd041*/
          v12 = &v10[4 * v13]; /*0x7bd045*/
        }
        if ( (v23 & 1) != 0 && v12 ) /*0x7bd052*/
          *(_WORD *)v12 = -1; /*0x7bd054*/
        v14 = (int)v9 - v11; /*0x7bd05f*/
        v15 = *(_WORD **)(this + 24); /*0x7bd061*/
        v25 = v14; /*0x7bd064*/
        v24 = v15; /*0x7bd06b*/
        if ( ((unsigned __int8)v15 & 2) != 0 && v14 ) /*0x7bd073*/
        {
          *v15++ = -1; /*0x7bd075*/
          --v14; /*0x7bd07d*/
          v24 = v15; /*0x7bd07e*/
          v25 = v14; /*0x7bd082*/
        }
        v16 = 0; /*0x7bd088*/
        v17 = v14 >> 1; /*0x7bd08d*/
        if ( v14 >> 1 ) /*0x7bd08d*/
        {
          memset(v15, 0xFFu, 4 * v17); /*0x7bd098*/
          v16 = &v24[2 * v17]; /*0x7bd09e*/
          LOBYTE(v14) = v25; /*0x7bd0a1*/
        }
        if ( (v14 & 1) != 0 && v16 ) /*0x7bd0ab*/
          *v16 = -1; /*0x7bd0ad*/
        v5 = (TacticalMap *)this; /*0x7bd0b2*/
      }
      result = v5->TacticalMap_field_1C; /*0x7bd0b9*/
      v8 += 2 * v5[1].TacticalMap_field_04; /*0x7bd0bc*/
      if ( v8 >= result ) /*0x7bd0c1*/
        v8 -= v5->TacticalMap_field_20; /*0x7bd0c3*/
      --v26; /*0x7bd0cb*/
    }
    while ( v26 ); /*0x7bd0cf*/
  }
  return result; /*0x7bd0d7*/
}
}
