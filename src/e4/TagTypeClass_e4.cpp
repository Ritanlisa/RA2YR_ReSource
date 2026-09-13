// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6E5B60
namespace gamemd {
char * TagTypeClass::Construct(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall TagTypeClass::Construct(char *this, ObjectClass *aP1)
{
  AbstractTypeClass *v3; // eax
  int v4; // eax
  char Destination[48]; // [esp+8h] [ebp-34h] BYREF
  char v7; // [esp+38h] [ebp-4h]

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6e5b6c*/
  *((_DWORD *)this + 38) = -1; /*0x6e5b78*/
  *((_DWORD *)this + 39) = 0; /*0x6e5b82*/
  *((_DWORD *)this + 40) = 0; /*0x6e5b88*/
  *(_DWORD *)this = &TagTypeClass::`vftable'; /*0x6e5b8e*/
  this->vtable1 = &TagTypeClass::`vftable'; /*0x6e5b95*/
  this->vtable2 = &TagTypeClass::`vftable'; /*0x6e5b9c*/
  this->vtable3 = &vt_TagTypeClass; /*0x6e5ba3*/
  if ( this == (char *)-36 ) /*0x6e5baa*/
  {
    Destination[0] = 0; /*0x6e5bac*/
  }
  else
  {
    strncpy(Destination, this + 36, 0x30u); /*0x6e5bba*/
    v7 = 0; /*0x6e5bc2*/
  }
  if ( Destination != this + 100 ) /*0x6e5bd0*/
  {
    qmemcpy(this + 100, Destination, 0x30u); /*0x6e5bdc*/
    *(this + 148) = v7; /*0x6e5bde*/
  }
  *((_DWORD *)this + 38) = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6140]; /*0x6e5be6*/
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[6140] < *(int *)&MEMORY[0xB077F8].__pad_579C[6132] /*0x6e5c1e*/
    || (MEMORY[0xB077F8].__pad_579C[6137] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6132])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[6144] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6124] + 8))(
         &MEMORY[0xB077F8].__pad_579C[6124],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6132] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6144],
         0) )
  {
    v3 = (AbstractTypeClass *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6140])++; /*0x6e5c2b*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6128] + 4 * (_DWORD)v3) = this; /*0x6e5c3a*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9964] < *(int *)&MEMORY[0xB077F8].__pad_579C[9956] /*0x6e5c71*/
    || (MEMORY[0xB077F8].__pad_579C[9961] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9968] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9948],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9968],
         0) )
  {
    v4 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964])++; /*0x6e5c7e*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v4) = this; /*0x6e5c8d*/
  }
  return this; /*0x6e5c92*/
}
}
} // namespace gamemd

// 0x6E5CA0
namespace gamemd {
int TagTypeClass::CleanupMembers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6E5CA0(int this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v10; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)this = &TagTypeClass::`vftable'; /*0x6e5ca7*/
  this->vtable1 = &TagTypeClass::`vftable'; /*0x6e5cad*/
  this->vtable2 = &TagTypeClass::`vftable'; /*0x6e5cb4*/
  this->vtable3 = &vt_TagTypeClass; /*0x6e5cbb*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x6e5cc2*/
  v2 = *(_DWORD **)(this + 160); /*0x6e5cc7*/
  *(_DWORD *)(this + 160) = 0; /*0x6e5ccd*/
  if ( v2 ) /*0x6e5cd9*/
  {
    do /*0x6e5cfa*/
    {
      v3 = (_DWORD *)v2[42]; /*0x6e5cdb*/
      v2[42] = 0; /*0x6e5ce1*/
      if ( v2 ) /*0x6e5ced*/
        (*(void (__thiscall **)(_DWORD *, int))(*v2 + 32))(v2, 1); /*0x6e5cf3*/
      v2 = v3; /*0x6e5cf8*/
    }
    while ( v3 ); /*0x6e5cfa*/
  }
  v4 = 0; /*0x6e5d01*/
  if ( MEMORY[0xB0E730] > 0 ) /*0x6e5d05*/
  {
    v5 = MEMORY[0xB0E724]; /*0x6e5d07*/
    do /*0x6e5d2e*/
    {
      v6 = (_DWORD *)v5[v4]; /*0x6e5d0c*/
      if ( v6[9] == this ) /*0x6e5d12*/
      {
        if ( v6 ) /*0x6e5d16*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v6 + 32))(v6, 1); /*0x6e5d1c*/
          v5 = MEMORY[0xB0E724]; /*0x6e5d1f*/
        }
        --v4; /*0x6e5d24*/
      }
      ++v4; /*0x6e5d2b*/
    }
    while ( v4 < MEMORY[0xB0E730] ); /*0x6e5d2e*/
  }
  v10 = this; /*0x6e5d40*/
  v7 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v10); /*0x6e5d44*/
  if ( v7 != -1 && v7 < MEMORY[0xB0F680] && v7 < --MEMORY[0xB0F680] ) /*0x6e5d5f*/
  {
    do /*0x6e5d77*/
    {
      ++v7; /*0x6e5d67*/
      *((_DWORD *)MEMORY[0xB0F674] + v7 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v7); /*0x6e5d6b*/
    }
    while ( v7 < MEMORY[0xB0F680] ); /*0x6e5d77*/
  }
  v10 = this; /*0x6e5d89*/
  v8 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0E780] + 16))(&MEMORY[0xB0E780], &v10); /*0x6e5d8d*/
  if ( v8 != -1 && v8 < MEMORY[0xB0E790] && v8 < --MEMORY[0xB0E790] ) /*0x6e5da8*/
  {
    do /*0x6e5dc0*/
    {
      ++v8; /*0x6e5db0*/
      *((_DWORD *)MEMORY[0xB0E784] + v8 - 1) = *((_DWORD *)MEMORY[0xB0E784] + v8); /*0x6e5db4*/
    }
    while ( v8 < MEMORY[0xB0E790] ); /*0x6e5dc0*/
  }
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x6e5dc9*/
}
}
} // namespace gamemd

// 0x6E5E50
namespace gamemd {
int TagTypeClass::GetEvent(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TagTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = *(this + 40); /*0x6e5e50*/
  if ( result == a2 ) /*0x6e5e5c*/
  {
    result = *(_DWORD *)(result + 168); /*0x6e5e5e*/
    *(this + 40) = result; /*0x6e5e64*/
  }
  return result; /*0x6e5e6a*/
}
}
} // namespace gamemd

// 0x6E6080
namespace gamemd {
char TagTypeClass::GetAction(unsigned char *** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TagTypeClass::_vt25(int this, unsigned __int8 ***a2)
{
  char *v3; // eax
  char *v4; // eax
  char Destination[48]; // [esp+8h] [ebp-B4h] BYREF
  char v7; // [esp+38h] [ebp-84h]
  char String[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x6e6093*/
  if ( !INIClass::GetString( /*0x6e60b4*/
          a2,
          (unsigned __int8 *)MEMORY[0x842C3C],
          (unsigned __int8 *)(this + 36),
          &MEMORY[0x889F64],
          String,
          128) )
    return 0; /*0x6e6151*/
  strtok(String, MEMORY[0x817F70]); /*0x6e60cb*/
  *(_DWORD *)(this + 156) = atoi(String); /*0x6e60e1*/
  v3 = strtok(0, MEMORY[0x817F70]); /*0x6e60e7*/
  if ( v3 ) /*0x6e60f1*/
  {
    strncpy(Destination, v3, 0x30u); /*0x6e6101*/
    v7 = 0; /*0x6e6109*/
  }
  else
  {
    Destination[0] = 0; /*0x6e60f3*/
  }
  if ( Destination != (char *)(this + 100) ) /*0x6e6118*/
  {
    qmemcpy((void *)(this + 100), Destination, 0x30u); /*0x6e6123*/
    *(_BYTE *)(this + 148) = v7; /*0x6e6125*/
  }
  v4 = strtok(0, MEMORY[0x817F70]); /*0x6e612d*/
  *(_DWORD *)(this + 160) = TagTypeClass::FindOrCreateTriggerType(v4); /*0x6e613d*/
  return 1; /*0x6e6143*/
}
}
} // namespace gamemd

// 0x6E6160
namespace gamemd {
char TagTypeClass::GetParameter(char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TagTypeClass::_vt26(int this, char *a2)
{
  int v3; // eax
  CHAR Source[128]; // [esp+4h] [ebp-80h] BYREF

  v3 = *(_DWORD *)(this + 160); /*0x6e6169*/
  if ( v3 ) /*0x6e6171*/
    wsprintfA(Source, MEMORY[0x842CCC], *(_DWORD *)(this + 156), (const char *)(this + 100), (const char *)(v3 + 36)); /*0x6e61b4*/
  else
    wsprintfA(Source, MEMORY[0x842CD8], (const char *)(this + 100)); /*0x6e6181*/
  INIClass::SetString(a2, (unsigned __int8 *)MEMORY[0x842C3C], (char *)(this + 36), Source); /*0x6e6199*/
  return 1; /*0x6e61db*/
}
}
} // namespace gamemd

// 0x6E6310
namespace gamemd {
char * TagTypeClass::FindOrCreate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall TagTypeClass::FindOrCreate(ObjectClass *this)
{
  int v2; // esi
  char *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x6e632c*/
    return 0; /*0x6e638f*/
  v2 = 0; /*0x6e633d*/
  if ( *(int *)&stru_B05488.__pad_579C[15212] <= 0 ) /*0x6e6341*/
  {
LABEL_6:
    v3 = (char *)__2_YAPAXI_Z(0xA4u); /*0x6e6366*/
    if ( v3 ) /*0x6e6375*/
      return TagTypeClass::Construct(v3, this); /*0x6e6381*/
    return 0; /*0x6e6375*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15200] + 4 * v2) + 36), this) ) /*0x6e635a*/
  {
    if ( ++v2 >= *(int *)&stru_B05488.__pad_579C[15212] ) /*0x6e6364*/
      goto LABEL_6; /*0x6e6364*/
  }
  return *(char **)(*(_DWORD *)&stru_B05488.__pad_579C[15200] + 4 * v2); /*0x6e637f*/
}
}
} // namespace gamemd

// 0x6E63E0
namespace gamemd {
int TagTypeClass::PowerDrainUpdate(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TagTypeClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6e63e9*/
  return Power::TimerProcess(*(_DWORD *)(this + 156)); /*0x6e63fc*/
}
}
} // namespace gamemd

// 0x6E6410
namespace gamemd {
int TagTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TagTypeClass::LoadTypeData(AbstractTypeClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x6e641b*/
  if ( result >= 0 ) /*0x6e6422*/
  {
    if ( aP0 ) /*0x6e6426*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x6e642f*/
      *(_DWORD *)aP0->__pad_0 = &TagTypeClass::`vftable'; /*0x6e6434*/
      *(_DWORD *)&aP0->__pad_0[4] = &TagTypeClass::`vftable'; /*0x6e643a*/
      *(_DWORD *)&aP0->__pad_0[8] = &TagTypeClass::`vftable'; /*0x6e6441*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TagTypeClass; /*0x6e6448*/
    }
    ObjectPtr::RegisterForTracking( /*0x6e645b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
    return 0; /*0x6e6460*/
  }
  return result; /*0x6e6462*/
}
}
} // namespace gamemd

// 0x6E6470
namespace gamemd {
int TagTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
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

// 0x6E64B0
namespace gamemd {
int TagTypeClass::GetAuxField()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TagTypeClass::_vt16(_DWORD *this)
{
  return *(this + 38); /*0x6e64b6*/
}
}
} // namespace gamemd

// 0x6E64C0
namespace gamemd {
TagTypeClass * TagTypeClass::ddtor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TagTypeClass *__thiscall TagTypeClass::ddtor(void *this, char a2)
{
  TagTypeClass::CleanupMembers((int)this); /*0x6e64c3*/
  if ( (a2 & 1) != 0 ) /*0x6e64cd*/
    __3_YAXPAX_Z(this); /*0x6e64d0*/
  return (TagTypeClass *)this; /*0x6e64da*/
}
}
} // namespace gamemd

// 0x727AA0
namespace gamemd {
TriggerTypeClass * TagTypeClass::FindOrCreateTriggerType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TriggerTypeClass *__thiscall TagTypeClass::FindOrCreateTriggerType(ObjectClass *this)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x727abc*/
    return 0; /*0x727b1f*/
  v2 = 0; /*0x727acd*/
  if ( dword_8B4188 <= 0 ) /*0x727ad1*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0xB4u); /*0x727af6*/
    if ( v3 ) /*0x727b05*/
      return (TriggerTypeClass *)TriggerTypeClass::Construct(v3, this); /*0x727b11*/
    return 0; /*0x727b05*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)unk_8B417C + v2) + 36), this) ) /*0x727aea*/
  {
    if ( ++v2 >= dword_8B4188 ) /*0x727af4*/
      goto LABEL_6; /*0x727af4*/
  }
  return (TriggerTypeClass *)*((_DWORD *)unk_8B417C + v2); /*0x727b0f*/
}
}
} // namespace gamemd

// 0x6E63A0
namespace gamemd {
int TagTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1425466419;
  a2[1] = 298977773;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x6E6490
namespace gamemd {
int TagTypeClass::GetTypeIdentifier()
{
return 45;
}
} // namespace gamemd

// 0x6E64A0
namespace gamemd {
int TagTypeClass::GetObjectSize()
{
return 164;
}
} // namespace gamemd
