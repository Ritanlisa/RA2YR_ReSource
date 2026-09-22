// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x42DDB0
int Delegate::ProcessBitmapStream(char * Src, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Delegate::ProcessBitmapStream(char *Src, int a3)
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
      Pipe *v9 = (Pipe *)EncodeBitmapRGB(aP0, v5, pad_14, Srca); /*0x42de75*/
      v13 = Delegate::Dispatch(this, pad_14, v9); /*0x42de96*/
      this->field_10 = 0; /*0x42de9a*/
    }
  }
  for ( ; a3 >= v5; a3 -= v5 ) /*0x42dea5*/
  {
    if ( this->field_C ) /*0x42dea7*/
      v10 = (Pipe *)DecodeBitmapRGB((Pipe *)v3, (BombClass *)v5, pad_14, Srca); /*0x42dec9*/
    Pipe *v10 = (Pipe *)EncodeBitmapRGB((Pipe *)v3, v5, pad_14, Srca); /*0x42deb8*/
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

// 0x631D10
Pipe * Delegate::Dispatch(Pipe * aP1, Pipe * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Pipe *__thiscall Delegate::Dispatch(_DWORD *this, Pipe *aP1, Pipe *aP2)
{
  Pipe *v3; // ecx
  v3 = (Pipe *)this->m_count; /*0x631d10*/
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
  this->m_count = 0; /*0x6c95e8*/
  this->Delegate_field_08 = 0; /*0x6c95eb*/
  this->m_allocated = 0; /*0x6c95ee*/
  return this; /*0x6c95f1*/
}
}

// 0x6C9890
void Delegate::Set(AbstractTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Delegate::Set(AbstractTypeClass *aP1)
{
  Straw *v3; // ecx
  AbstractTypeClass *v4; // eax
  if ( (AbstractTypeClass *)this->m_count != aP1 ) /*0x6c989b*/
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
    v4 = (AbstractTypeClass *)this->m_count; /*0x6c98b6*/
    if ( v4 ) /*0x6c98bb*/
      *(_DWORD *)&v4->__pad_0[8] = 0; /*0x6c98bd*/
    this->m_count = aP1; /*0x6c98c6*/
    if ( aP1 ) /*0x6c98c9*/
      *(_DWORD *)&aP1->__pad_0[8] = this; /*0x6c98cb*/
  }
}
}

// 0x6C98E0
int Delegate::Invoke(int a2, Straw * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Delegate::Invoke(int a2, Straw *aP2)
{
  Straw *v3; // ecx
  v3 = (Straw *)this->m_count; /*0x6c98e0*/
  if ( v3 ) /*0x6c98e5*/
    return (*(int (__thiscall **)(Straw *, int, Straw *))(*(_DWORD *)v3->__pad_0 + 8))(v3, a2, aP2); /*0x6c98f3*/
  else
    return 0; /*0x6c98f9*/
}
}

// 0x42DF40
int Delegate::ProcessBitmapAndDispatch()
{
{
    Pipe *v2;
    BombClass *v3;
    Pipe *pad_14;
    Pipe *v5;
    v2 = 0;
    v3 = (BombClass *)this->field_10;
    if ( v3 )
  {
    if ( this->field_C )
    {
    pad_14 = (Pipe *)&this->field_18;
    v5 = (Pipe *)DecodeBitmapRGB((Pipe *)this->__pad_14, v3, &this->field_18, 3);
    }
    else
    {
    pad_14 = (Pipe *)this->__pad_14;
    v5 = (Pipe *)EncodeBitmapRGB((Pipe *)&this->field_18, (int)v3, this->__pad_14, 4);
    }
    v2 = Delegate::Dispatch(this, pad_14, v5);
    this->field_10 = 0;
  }
    return (int)&v2->__pad_0[GameClass::GetRelatedObject(this)];
}
}

// 0x4A2780
int Delegate::StreamToBuffer(char * a1, int a3)
{
{
    int result;
    char *v5;
    ModemGame *v6;
    Straw *v7;
    int v8;
    int v9;
    ModemGame *v10;
    result = 0;
    v10 = 0;
    if ( *(int *)&this->__pad_0[12] )
  {
    v5 = a1;
    if ( a1 )
    {
    v6 = (ModemGame *)a3;
    if ( a3 > 0 )
      {
    do
        {
    v7 = (Straw *)this->field_1C;
    if ( (int)v7 > 0 )
          {
    if ( (int)v7 >= (int)v6 )
    v7 = (Straw *)v6;
    memcpy(v5, (const void *)(*(int *)&this->__pad_0[12] + *(int *)&this->__pad_14[4]), (size_t)v7);
    v8 = this->field_1C - (int)v7;
    v6 = (ModemGame *)((char *)v6 - (int)v7);
    *(int *)&this->__pad_14[4] += v7;
    v10 = (ModemGame *)((char *)(v10) + (int)v7);
    this->field_1C = v8;
    v5 = &v5[(int)v7];
          }
    if ( !v6 )
    break;
    v9 = Delegate::Invoke(this, *(int *)&this->__pad_0[12], (Straw *)this->field_10);
    this->field_1C = v9;
    *(int *)&this->__pad_14[4] = 0;
    if ( !v9 )
    break;
        }
    while ( (int)v6 > 0 );
    return (int)v10->__pad_0;
      }
    }
  }
    return result;
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
