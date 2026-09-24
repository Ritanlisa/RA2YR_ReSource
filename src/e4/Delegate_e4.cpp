// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x42DDB0
int Delegate::ProcessBitmapStream(char * Src, int a3)
{
  char *v3; // ebp
  int v5; // esi
  _BYTE *v6; // ebx
  int v7; // ecx
  size_t v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned __int8 *v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  size_t Size; // [esp+10h] [ebp-4h]
  int Srca; // [esp+18h] [ebp+4h]

  v3 = Src; /*0x42ddb4*/
  if ( !Src || a3 < 1 ) /*0x42ddc8*/
    return Delegate::Dispatch(this, (int)Src, a3); /*0x42df25*/
  v13 = 0; /*0x42ddd5*/
  if ( *(this + 3) ) /*0x42ddce*/
  {
    v5 = 4; /*0x42ddfb*/
    v12 = (unsigned __int8 *)(this + 5); /*0x42de00*/
    v6 = this + 6; /*0x42de04*/
    Srca = 3; /*0x42de07*/
  }
  else
  {
    v5 = 3; /*0x42dde2*/
    v12 = (unsigned __int8 *)(this + 6); /*0x42dde7*/
    v6 = this + 5; /*0x42ddeb*/
    Srca = 4; /*0x42ddee*/
  }
  v7 = *(this + 4); /*0x42de0f*/
  if ( v7 > 0 ) /*0x42de14*/
  {
    Size = a3; /*0x42de24*/
    if ( a3 >= v5 - v7 ) /*0x42de28*/
      Size = v5 - v7; /*0x42de2a*/
    memcpy(&v12[*(this + 4)], v3, Size); /*0x42de3e*/
    v8 = Size + *(this + 4); /*0x42de4e*/
    v3 += Size; /*0x42de55*/
    *(this + 4) = v8; /*0x42de59*/
    a3 -= Size; /*0x42de5c*/
    if ( v8 == v5 ) /*0x42de60*/
    {
      if ( *(this + 3) ) /*0x42de62*/
        v9 = DecodeBitmapRGB(v12, v5, v6, Srca); /*0x42de88*/
      else
        v9 = EncodeBitmapRGB((char *)v12, v5, v6, Srca); /*0x42de75*/
      v13 = Delegate::Dispatch(this, (int)v6, v9); /*0x42de96*/
      *(this + 4) = 0; /*0x42de9a*/
    }
  }
  for ( ; a3 >= v5; a3 -= v5 ) /*0x42dea5*/
  {
    if ( *(this + 3) ) /*0x42dea7*/
      v10 = DecodeBitmapRGB((unsigned __int8 *)v3, v5, v6, Srca); /*0x42dec9*/
    else
      v10 = EncodeBitmapRGB(v3, v5, v6, Srca); /*0x42deb8*/
    v3 += v5; /*0x42ded2*/
    v13 += Delegate::Dispatch(this, (int)v6, v10); /*0x42dee5*/
  }
  if ( a3 > 0 ) /*0x42def9*/
  {
    memcpy(v12, v3, a3); /*0x42df02*/
    *(this + 4) = a3; /*0x42df0e*/
  }
  return v13; /*0x42df15*/
}
// 0x631D10
void * Delegate::Dispatch(Pipe * aP1, Pipe * aP2)
{
  int v3; // ecx

  v3 = *(this + 1); /*0x631d10*/
  if ( v3 ) /*0x631d15*/
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 16))(v3, aP1, aP2); /*0x631d23*/
  else
    return aP2; /*0x631d29*/
}
// 0x6C95E0
unsigned int * Delegate::GetField()
{
  *this = 0; /*0x6c95e6*/
  *(this + 1) = 0; /*0x6c95e8*/
  *(this + 2) = 0; /*0x6c95eb*/
  *(this + 3) = 0; /*0x6c95ee*/
  return this; /*0x6c95f1*/
}
// 0x6C9890
void Delegate::Set(AbstractTypeClass * aP1)
{
  int v3; // ecx
  int v4; // eax

  if ( *(this + 1) != aP1 ) /*0x6c989b*/
  {
    if ( aP1 ) /*0x6c989f*/
    {
      v3 = *(_DWORD *)(aP1 + 8); /*0x6c98a1*/
      if ( v3 ) /*0x6c98a6*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 4))(v3, 0); /*0x6c98ac*/
        *(_DWORD *)(aP1 + 8) = 0; /*0x6c98af*/
      }
    }
    v4 = *(this + 1); /*0x6c98b6*/
    if ( v4 ) /*0x6c98bb*/
      *(_DWORD *)(v4 + 8) = 0; /*0x6c98bd*/
    *(this + 1) = aP1; /*0x6c98c6*/
    if ( aP1 ) /*0x6c98c9*/
      *(_DWORD *)(aP1 + 8) = this; /*0x6c98cb*/
  }
}
// 0x6C98E0
int Delegate::Invoke(int a2, Straw * aP2)
{
  int v3; // ecx

  v3 = *(this + 1); /*0x6c98e0*/
  if ( v3 ) /*0x6c98e5*/
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 8))(v3, a2, aP2); /*0x6c98f3*/
  else
    return 0; /*0x6c98f9*/
}
// 0x42DF40
int Delegate::ProcessBitmapAndDispatch()
{
  int v2; // edi
  int v3; // edx
  int v4; // edi
  int v5; // eax

  v2 = 0; /*0x42df44*/
  v3 = *(_DWORD *)(this + 16); /*0x42df46*/
  if ( v3 ) /*0x42df4b*/
  {
    if ( *(_DWORD *)(this + 12) ) /*0x42df4d*/
    {
      v4 = this + 24; /*0x42df64*/
      v5 = DecodeBitmapRGB((unsigned __int8 *)(this + 20), v3, (_BYTE *)(this + 24), 3); /*0x42df6d*/
    }
    else
    {
      v4 = this + 20; /*0x42df54*/
      v5 = EncodeBitmapRGB((char *)(this + 24), v3, (_BYTE *)(this + 20), 4); /*0x42df5d*/
    }
    v2 = Delegate::Dispatch((_DWORD *)this, v4, v5); /*0x42df7b*/
    *(_DWORD *)(this + 16) = 0; /*0x42df7d*/
  }
  return v2 + GameClass::GetRelatedObject((_DWORD *)this); /*0x42df8d*/
}
// 0x4A2780
int Delegate::StreamToBuffer(char * a1, int a3)
{
  int result; // eax
  char *v5; // ebp
  int v6; // ebx
  signed int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // [esp+10h] [ebp-4h]

  result = 0; /*0x4a2786*/
  v10 = 0; /*0x4a278c*/
  if ( *(this + 3) ) /*0x4a2789*/
  {
    v5 = a1; /*0x4a2794*/
    if ( a1 ) /*0x4a279a*/
    {
      v6 = a3; /*0x4a279c*/
      if ( a3 > 0 ) /*0x4a27a2*/
      {
        do /*0x4a2805*/
        {
          v7 = *(this + 7); /*0x4a27a4*/
          if ( v7 > 0 ) /*0x4a27a9*/
          {
            if ( v7 >= v6 ) /*0x4a27ad*/
              v7 = v6; /*0x4a27af*/
            memcpy(v5, (const void *)(*(this + 3) + *(this + 6)), v7); /*0x4a27bc*/
            v8 = *(this + 7) - v7; /*0x4a27cf*/
            v6 -= v7; /*0x4a27d4*/
            *(this + 6) += v7; /*0x4a27d6*/
            v10 += v7; /*0x4a27d9*/
            *(this + 7) = v8; /*0x4a27dd*/
            v5 += v7; /*0x4a27e0*/
          }
          if ( !v6 ) /*0x4a27e4*/
            break; /*0x4a27e4*/
          v9 = Delegate::Invoke(this, *(this + 3), *(this + 4)); /*0x4a27f0*/
          *(this + 7) = v9; /*0x4a27f7*/
          *(this + 6) = 0; /*0x4a27fa*/
          if ( !v9 ) /*0x4a2801*/
            break; /*0x4a2801*/
        }
        while ( v6 > 0 ); /*0x4a2805*/
        return v10; /*0x4a2807*/
      }
    }
  }
  return result; /*0x4a280b*/
}
// 0x52AE20
GenericNode * Delegate::Constructor_GenericNode(char a2)
{
  int v3; // ecx
  int v4; // eax

  *this = &GenericNode::`vftable'; /*0x52ae27*/
  if ( this ) /*0x52ae2d*/
  {
    v3 = *(this + 1); /*0x52ae2f*/
    if ( v3 ) /*0x52ae34*/
    {
      v4 = *(this + 2); /*0x52ae36*/
      if ( v4 ) /*0x52ae3b*/
      {
        *(_DWORD *)(v4 + 4) = v3; /*0x52ae3d*/
        *(_DWORD *)(*(this + 1) + 8) = *(this + 2); /*0x52ae46*/
        *(this + 2) = 0; /*0x52ae49*/
        *(this + 1) = 0; /*0x52ae4c*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ae54*/
    __3_YAXPAX_Z(this); /*0x52ae57*/
  return this; /*0x52ae61*/
}
// 0x52AE70
int * Delegate::ClearVectorAndStraw(char a2)
{
  Vector::Clear((int)(this + 3)); /*0x52ae76*/
  Straw::Dtor(this); /*0x52ae7d*/
  if ( (a2 & 1) != 0 ) /*0x52ae87*/
    __3_YAXPAX_Z(this); /*0x52ae8a*/
  return this; /*0x52ae94*/
}
// 0x52AEA0
int * Delegate::DestroyStraw(char a2)
{
  Straw::Dtor(this); /*0x52aea3*/
  if ( (a2 & 1) != 0 ) /*0x52aead*/
    __3_YAXPAX_Z(this); /*0x52aeb0*/
  return this; /*0x52aeba*/
}
// 0x52AEE0
int * Delegate::DestroyPipe(char a2)
{
  Pipe::Dtor(this); /*0x52aee3*/
  if ( (a2 & 1) != 0 ) /*0x52aeed*/
    __3_YAXPAX_Z(this); /*0x52aef0*/
  return this; /*0x52aefa*/
}