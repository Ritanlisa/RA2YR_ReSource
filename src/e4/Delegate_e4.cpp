// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x42DDB0
int Delegate::ProcessBitmapStream(char * Src, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Delegate::ProcessBitmapStream(Base64Pipe *this, char *Src, int a3)
{
  AbstractClass *v3; // ebp
  int v5; // esi
  Pipe *pad_14; // ebx
  BombClass *v7; // ecx
  int v8; // ecx
  Pipe *v9; // eax
  Pipe *v10; // eax
  Pipe *aP0; // [esp+8h] [ebp-Ch]
  Pipe *v13; // [esp+Ch] [ebp-8h]
  int Size; // [esp+10h] [ebp-4h]
  int Srca; // [esp+18h] [ebp+4h]

  v3 = (AbstractClass *)Src; /*0x42ddb4*/
  if ( !Src || a3 < 1 ) /*0x42ddc8*/
    return (int)Delegate::Dispatch(this, (Pipe *)Src, (Pipe *)a3); /*0x42df25*/
  v13 = 0; /*0x42ddd5*/
  if ( this->field_C ) /*0x42ddce*/
  {
    v5 = 4; /*0x42ddfb*/
    aP0 = (Pipe *)this->__pad_14; /*0x42de00*/
    pad_14 = (Pipe *)&this->field_18; /*0x42de04*/
    Srca = 3; /*0x42de07*/
  }
  else
  {
    v5 = 3; /*0x42dde2*/
    aP0 = (Pipe *)&this->field_18; /*0x42dde7*/
    pad_14 = (Pipe *)this->__pad_14; /*0x42ddeb*/
    Srca = 4; /*0x42ddee*/
  }
  v7 = (BombClass *)this->field_10; /*0x42de0f*/
  if ( (int)v7 > 0 ) /*0x42de14*/
  {
    Size = a3; /*0x42de24*/
    if ( a3 >= v5 - (int)v7 ) /*0x42de28*/
      Size = v5 - (_DWORD)v7; /*0x42de2a*/
    memcpy(&aP0->__pad_0[this->field_10], v3, Size); /*0x42de3e*/
    v8 = Size + this->field_10; /*0x42de4e*/
    v3 = (AbstractClass *)((char *)v3 + Size); /*0x42de55*/
    this->field_10 = v8; /*0x42de59*/
    a3 -= Size; /*0x42de5c*/
    if ( v8 == v5 ) /*0x42de60*/
    {
      if ( this->field_C ) /*0x42de62*/
        v9 = (Pipe *)DecodeBitmapRGB(aP0, (BombClass *)v5, pad_14, Srca); /*0x42de88*/
      else
        v9 = (Pipe *)EncodeBitmapRGB(aP0, v5, pad_14, Srca); /*0x42de75*/
      v13 = Delegate::Dispatch(this, pad_14, v9); /*0x42de96*/
      this->field_10 = 0; /*0x42de9a*/
    }
  }
  for ( ; a3 >= v5; a3 -= v5 ) /*0x42dea5*/
  {
    if ( this->field_C ) /*0x42dea7*/
      v10 = (Pipe *)DecodeBitmapRGB((Pipe *)v3, (BombClass *)v5, pad_14, Srca); /*0x42dec9*/
    else
      v10 = (Pipe *)EncodeBitmapRGB((Pipe *)v3, v5, pad_14, Srca); /*0x42deb8*/
    v3 = (AbstractClass *)((char *)v3 + v5); /*0x42ded2*/
    v13 = (Pipe *)((char *)v13 + (_DWORD)Delegate::Dispatch(this, pad_14, v10)); /*0x42dee5*/
  }
  if ( a3 > 0 ) /*0x42def9*/
  {
    memcpy(aP0, v3, a3); /*0x42df02*/
    this->field_10 = a3; /*0x42df0e*/
  }
  return (int)v13->__pad_0; /*0x42df15*/
}
}

// 0x42DF40
int Delegate::ProcessBitmapAndDispatch()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Delegate::ProcessBitmapAndDispatch(Base64Pipe *this)
{
  Pipe *v2; // edi
  BombClass *v3; // edx
  Pipe *pad_14; // edi
  Pipe *v5; // eax

  v2 = 0; /*0x42df44*/
  v3 = (BombClass *)this->field_10; /*0x42df46*/
  if ( v3 ) /*0x42df4b*/
  {
    if ( this->field_C ) /*0x42df4d*/
    {
      pad_14 = (Pipe *)&this->field_18; /*0x42df64*/
      v5 = (Pipe *)DecodeBitmapRGB((Pipe *)this->__pad_14, v3, &this->field_18, 3); /*0x42df6d*/
    }
    else
    {
      pad_14 = (Pipe *)this->__pad_14; /*0x42df54*/
      v5 = (Pipe *)EncodeBitmapRGB((Pipe *)&this->field_18, (int)v3, this->__pad_14, 4); /*0x42df5d*/
    }
    v2 = Delegate::Dispatch(this, pad_14, v5); /*0x42df7b*/
    this->field_10 = 0; /*0x42df7d*/
  }
  return (int)&v2->__pad_0[GameClass::GetRelatedObject(this)]; /*0x42df8d*/
}
}

// 0x4A2780
int Delegate::StreamToBuffer(char * a1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Delegate::StreamToBuffer(CacheStraw *this, char *a1, int a3)
{
  int result; // eax
  char *v5; // ebp
  ModemGame *v6; // ebx
  Straw *v7; // edi
  int v8; // ecx
  int v9; // eax
  ModemGame *v10; // [esp+10h] [ebp-4h]

  result = 0; /*0x4a2786*/
  v10 = 0; /*0x4a278c*/
  if ( *(_DWORD *)&this->__pad_0[12] ) /*0x4a2789*/
  {
    v5 = a1; /*0x4a2794*/
    if ( a1 ) /*0x4a279a*/
    {
      v6 = (ModemGame *)a3; /*0x4a279c*/
      if ( a3 > 0 ) /*0x4a27a2*/
      {
        do /*0x4a2805*/
        {
          v7 = (Straw *)this->field_1C; /*0x4a27a4*/
          if ( (int)v7 > 0 ) /*0x4a27a9*/
          {
            if ( (int)v7 >= (int)v6 ) /*0x4a27ad*/
              v7 = (Straw *)v6; /*0x4a27af*/
            memcpy(v5, (const void *)(*(_DWORD *)&this->__pad_0[12] + *(_DWORD *)&this->__pad_14[4]), (size_t)v7); /*0x4a27bc*/
            v8 = this->field_1C - (_DWORD)v7; /*0x4a27cf*/
            v6 = (ModemGame *)((char *)v6 - (int)v7); /*0x4a27d4*/
            *(_DWORD *)&this->__pad_14[4] += v7; /*0x4a27d6*/
            v10 = (ModemGame *)((char *)v10 + (_DWORD)v7); /*0x4a27d9*/
            this->field_1C = v8; /*0x4a27dd*/
            v5 = &v5[(_DWORD)v7]; /*0x4a27e0*/
          }
          if ( !v6 ) /*0x4a27e4*/
            break; /*0x4a27e4*/
          v9 = Delegate::Invoke(this, *(_DWORD *)&this->__pad_0[12], (Straw *)this->field_10); /*0x4a27f0*/
          this->field_1C = v9; /*0x4a27f7*/
          *(_DWORD *)&this->__pad_14[4] = 0; /*0x4a27fa*/
          if ( !v9 ) /*0x4a2801*/
            break; /*0x4a2801*/
        }
        while ( (int)v6 > 0 ); /*0x4a2805*/
        return (int)v10->__pad_0; /*0x4a2807*/
      }
    }
  }
  return result; /*0x4a280b*/
}
}

// 0x631D10
Pipe * Delegate::Dispatch(Pipe * aP1, Pipe * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Pipe *__thiscall Delegate::Dispatch(_DWORD *this, Pipe *aP1, Pipe *aP2)
{
  Pipe *v3; // ecx

  v3 = (Pipe *)*(this + 1); /*0x631d10*/
  if ( v3 ) /*0x631d15*/
    return (*(Pipe *(__thiscall **)(Pipe *, Pipe *, Pipe *))(*(_DWORD *)v3->__pad_0 + 16))(v3, aP1, aP2); /*0x631d23*/
  else
    return aP2; /*0x631d29*/
}
}

// 0x6C95E0
unsigned int * Delegate::GetField()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Delegate::GetField(_DWORD *this)
{
  *this = 0; /*0x6c95e6*/
  *(this + 1) = 0; /*0x6c95e8*/
  *(this + 2) = 0; /*0x6c95eb*/
  *(this + 3) = 0; /*0x6c95ee*/
  return this; /*0x6c95f1*/
}
}

// 0x6C9890
void Delegate::Set(AbstractTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Delegate::Set(_DWORD *this, AbstractTypeClass *aP1)
{
  Straw *v3; // ecx
  AbstractTypeClass *v4; // eax

  if ( (AbstractTypeClass *)*(this + 1) != aP1 ) /*0x6c989b*/
  {
    if ( aP1 ) /*0x6c989f*/
    {
      v3 = *(Straw **)&aP1->__pad_0[8]; /*0x6c98a1*/
      if ( v3 ) /*0x6c98a6*/
      {
        (*(void (__thiscall **)(Straw *, _DWORD))(*(_DWORD *)v3->__pad_0 + 4))(v3, 0); /*0x6c98ac*/
        *(_DWORD *)&aP1->__pad_0[8] = 0; /*0x6c98af*/
      }
    }
    v4 = (AbstractTypeClass *)*(this + 1); /*0x6c98b6*/
    if ( v4 ) /*0x6c98bb*/
      *(_DWORD *)&v4->__pad_0[8] = 0; /*0x6c98bd*/
    *(this + 1) = aP1; /*0x6c98c6*/
    if ( aP1 ) /*0x6c98c9*/
      *(_DWORD *)&aP1->__pad_0[8] = this; /*0x6c98cb*/
  }
}
}

// 0x6C98E0
int Delegate::Invoke(int a2, Straw * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Delegate::Invoke(_DWORD *this, int a2, Straw *aP2)
{
  Straw *v3; // ecx

  v3 = (Straw *)*(this + 1); /*0x6c98e0*/
  if ( v3 ) /*0x6c98e5*/
    return (*(int (__thiscall **)(Straw *, int, Straw *))(*(_DWORD *)v3->__pad_0 + 8))(v3, a2, aP2); /*0x6c98f3*/
  else
    return 0; /*0x6c98f9*/
}
}

// 0x52AE20
GenericNode * Delegate::Constructor_GenericNode(char a2)
{
{
    GenericNode *v3;
    GenericNode *v4;
    *(void**)this = (GenericNode *)&vt_GenericNode;
    if ( this )
  {
    v3 = *(this + 1);
    if ( v3 )
    {
    v4 = *(this + 2);
    if ( v4 )
      {
    v4->Previous = v3;
    *(int *)(*(this + 1))[1].__pad_0 = *(this + 2);
    *(this + 2) = 0;
    *(this + 1) = 0;
      }
    }
  }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (GenericNode *)this;
}
}

// 0x52AE70
int * Delegate::ClearVectorAndStraw(char a2)
{
{
    Vector::Clear((int)&this->__pad_0[12]);
    Straw::Dtor((int *)this->__pad_0);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int *)this->__pad_0;
}
}

// 0x52AEA0
int * Delegate::DestroyStraw(char a2)
{
{
    Straw::Dtor((int *)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int *)this;
}
}

// 0x52AEE0
int * Delegate::DestroyPipe(char a2)
{
{
    Pipe::Dtor((int *)this->__pad_0);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int *)this->__pad_0;
}
}
