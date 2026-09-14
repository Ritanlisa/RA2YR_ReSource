// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x40B960
char MoveFeedback::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}

// 0x40BB90
int MoveFeedback::Draw(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}

// 0x40BCB0
DynamicVector * MoveFeedback::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TechnoClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}

// 0x40BE50
void MoveFeedback::Destroy()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MoveFeedback_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MoveFeedback_field_0x04 = 0;
  }
    this->IsAllocated = 0;
    this->MoveFeedback_field_0x08 = 0;
}
}

// 0x40C030
char MoveFeedback::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->MoveFeedback_field_0x04 )
    {
    v5 = this->MoveFeedback_field_0x08;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MoveFeedback_field_0x04 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MoveFeedback_field_0x04 = 0;
      }
    }
    this->MoveFeedback_field_0x04 = v4;
    this->MoveFeedback_field_0x08 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Clear();
  }
    v7 = this->MoveFeedback_field_0x08;
    if ( v7 < this->MoveFeedback_field_0x10 )
    this->MoveFeedback_field_0x10 = v7;
    return 1;
}
}

// 0x40C0E0
int MoveFeedback::FindMoveItem(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}

// 0x40C160
DynamicVector * MoveFeedback::Constructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CommandClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}

// 0x7327D0
char MoveFeedback::ProcessCommand()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MoveFeedback_Process(void *this)
{
  char v1; // bl
  int Height; // eax
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // ebp
  int i; // edi
  int v14; // ecx
  char v16; // [esp+13h] [ebp-9h]
  int v18; // [esp+18h] [ebp-4h] BYREF

  v1 = g_MoveFeedback; /*0x7327d9*/
  v16 = g_MoveFeedback; /*0x7327e8*/
  g_MoveFeedback = 0; /*0x7327ec*/
  if ( MEMORY[0xB0FE64] ) /*0x7327f5*/
  {
    Height = (int)__2_YAPAXI_Z(0x18u); /*0x7327fb*/
    v3 = (_DWORD *)Height; /*0x732800*/
    v4 = 0; /*0x732802*/
    if ( Height ) /*0x732809*/
    {
      LOBYTE(Height) = (unsigned __int8)EventClass::resetEvent((_DWORD *)Height, 0, 0); /*0x73280f*/
      *v3 = &vt_DynamicVectorClass_TechnoClass; /*0x732814*/
      v3[5] = 10; /*0x73281a*/
      v3[4] = 0; /*0x732821*/
    }
    else
    {
      v3 = 0; /*0x732826*/
    }
    v5 = MEMORY[0xA8EC88]; /*0x732828*/
    if ( MEMORY[0xA8EC88] > 0 ) /*0x732830*/
    {
      do /*0x732887*/
      {
        v6 = *((_DWORD *)MEMORY[0xA8EC7C] + v4); /*0x73283b*/
        LOBYTE(Height) = StepTechnoClassCleanupIfHuman(v6, this); /*0x732840*/
        if ( (_BYTE)Height ) /*0x732847*/
        {
          v7 = v3[2]; /*0x732849*/
          if ( v3[4] < v7 /*0x732873*/
            || ((LOBYTE(Height) = *((_BYTE *)v3 + 13), (_BYTE)Height) || !v7)
            && (Height = v3[5], Height > 0)
            && (LOBYTE(Height) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v7 + Height, 0),
                (_BYTE)Height) )
          {
            Height = v3[4]; /*0x732875*/
            v8 = v3[1]; /*0x732878*/
            v3[4] = Height + 1; /*0x73287e*/
            *(_DWORD *)(v8 + 4 * Height) = v6; /*0x732881*/
          }
        }
        ++v4; /*0x732884*/
      }
      while ( v4 < v5 ); /*0x732887*/
    }
    v1 = v16; /*0x732889*/
  }
  else
  {
    v9 = __2_YAPAXI_Z(0x18u); /*0x73288f*/
    v3 = v9; /*0x732894*/
    v10 = 0; /*0x732896*/
    if ( v9 ) /*0x73289d*/
    {
      EventClass::resetEvent(v9, 0, 0); /*0x7328a3*/
      *v3 = &vt_DynamicVectorClass_TechnoClass; /*0x7328a8*/
      v3[5] = 10; /*0x7328ae*/
      v3[4] = 0; /*0x7328b5*/
    }
    else
    {
      v3 = 0; /*0x7328ba*/
    }
    Height = GetHeightMap(MEMORY[0x887324]); /*0x7328c2*/
    v11 = Height; /*0x7328c7*/
    if ( Height > 0 ) /*0x7328cb*/
    {
      do /*0x73290b*/
      {
        Height = GetCoordDataMap(v10); /*0x7328d4*/
        if ( Height ) /*0x7328db*/
        {
          if ( (*(_BYTE *)(Height + 20) & 1) != 0 ) /*0x7328e7*/
          {
            v18 = Height; /*0x7328ef*/
            LOBYTE(Height) = StepTechnoClassCleanupIfHuman(Height, this); /*0x7328f3*/
            if ( (_BYTE)Height ) /*0x7328fa*/
              LOBYTE(Height) = DynamicVector::AddItem(v3, &v18); /*0x732903*/
          }
        }
        ++v10; /*0x732908*/
      }
      while ( v10 < v11 ); /*0x73290b*/
    }
  }
  v12 = v3[4]; /*0x73290d*/
  for ( i = 0; i < v12; ++i ) /*0x732914*/
  {
    v14 = *(_DWORD *)(v3[1] + 4 * i); /*0x732919*/
    LOBYTE(Height) = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 332))(v14); /*0x73291e*/
  }
  if ( v3 ) /*0x73292b*/
    LOBYTE(Height) = (*(int (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x732933*/
  g_MoveFeedback = v1; /*0x732937*/
  return Height; /*0x732935*/
}
}

// 0x40BE80
unsigned int MoveFeedback::GetIndex2(int a2)
{
{
    if ( (unsigned char)this->MoveFeedback_field_0x0C )
    return (unsigned int)(a2 - this->MoveFeedback_field_0x04) >> 2;
    else
    return 0;
}
}
