// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x520260
namespace gamemd {
char sub_520260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_520260(_DWORD *this)
{
  int v2; // eax
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = *(this + 373); /*0x520266*/
  if ( v2 && *((_BYTE *)this + 981) ) /*0x520270*/
    *(_BYTE *)(v2 + 130) = 1; /*0x52027a*/
  if ( *(this + 373) ) /*0x520281*/
    return 0; /*0x520281*/
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 5 ) /*0x520298*/
    return 0; /*0x520298*/
  v4[0] = *(this + 39); /*0x5202a6*/
  v4[1] = *(this + 40); /*0x5202b2*/
  v4[2] = *(this + 41); /*0x5202b9*/
  if ( Tactical::IsCellVisible(&MEMORY[0x87F7E8], v4) ) /*0x5202c2*/
    return 0; /*0x5202e6*/
  (*(void (__thiscall **)(_DWORD *))(*this + 928))(this); /*0x5202cf*/
  (*(void (__thiscall **)(_DWORD *))(*this + 248))(this); /*0x5202d9*/
  return 1; /*0x5202e1*/
}
}
} // namespace gamemd

// 0x522100
namespace gamemd {
bool sub_522100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_522100(_DWORD *this)
{
  int (__stdcall ***v2)(_DWORD, void *, int *); // eax
  int v3; // esi
  int v4; // eax
  int v5; // edi
  bool v6; // bl
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  _BYTE v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  if ( !*(_BYTE *)(*(this + 432) + 3476) ) /*0x522109*/
    return 0; /*0x522113*/
  v2 = (int (__stdcall ***)(_DWORD, void *, int *))*(this + 413); /*0x522119*/
  v7 = 0; /*0x522124*/
  if ( !v2 ) /*0x52212c*/
    goto LABEL_11; /*0x52212c*/
  v3 = (**v2)(v2, &unk_818858, &v8); /*0x52213d*/
  if ( v3 >= 0 ) /*0x522141*/
  {
    v5 = v8; /*0x522150*/
    ComPtr::Release_Alt(&v7); /*0x522158*/
    v4 = v5; /*0x52215d*/
  }
  else
  {
    ComPtr::Release_Alt(&v7); /*0x522147*/
    v4 = 0; /*0x52214c*/
  }
  v7 = v4; /*0x522161*/
  if ( v3 < 0 && v3 != -2147467262 ) /*0x52216d*/
    WinAPI::Wrapper(v3); /*0x522170*/
  if ( !v4 ) /*0x52217b*/
LABEL_11:
    WinAPI::Wrapper(-2147467261); /*0x522182*/
  (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v4 + 12))(v4, v9); /*0x522193*/
  v6 = memcmp(v9, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x5221ac*/
  if ( v7 ) /*0x5221b1*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x5221b6*/
  return v6; /*0x522115*/
}
}
} // namespace gamemd

// 0x522540
namespace gamemd {
char sub_522540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_522540(_DWORD *this)
{
  return *(_BYTE *)(*(this + 432) + 1708); /*0x52254c*/
}
}
} // namespace gamemd

// 0x522A50
namespace gamemd {
void nullsub_146(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall nullsub_146(int a1)
{
  ; /*0x522a50*/
}
}
} // namespace gamemd

// 0x523440
namespace gamemd {
int BinaryArraySearch(AbstractClass * aP0, int edx0, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall BinaryArraySearch(AbstractClass *aP0, int edx0, int *a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = edx0; /*0x523445*/
  if ( edx0 <= 0 ) /*0x523447*/
    return 0; /*0x523479*/
  v4 = *a2; /*0x52344d*/
  while ( 1 ) /*0x523456*/
  {
    v5 = *(_DWORD *)&aP0->__pad_0[8 * (v3 / 2)]; /*0x523456*/
    if ( v5 <= v4 ) /*0x52345e*/
      break; /*0x52345e*/
    v3 /= 2; /*0x523460*/
LABEL_7:
    if ( v3 <= 0 ) /*0x523472*/
      return 0; /*0x523472*/
  }
  if ( v5 != v4 ) /*0x523464*/
  {
    aP0 = (AbstractClass *)((char *)aP0 + 8 * (v3 / 2) + 8); /*0x523466*/
    v3 += -1 - v3 / 2; /*0x52346e*/
    goto LABEL_7; /*0x52346e*/
  }
  return (int)&aP0->__pad_0[8 * (v3 / 2)]; /*0x523474*/
}
}
} // namespace gamemd

// 0x523490
namespace gamemd {
void sub_523490()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_523490()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52349c*/
  MEMORY[0xA8F268] = Math::Sqrt(v0 + v0); /*0x5234ae*/
}
}
} // namespace gamemd

// 0x5234C0
namespace gamemd {
void sub_5234C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5234C0()
{
  MEMORY[0xA8F2C0] = MEMORY[0xA8F268] / 60.0; /*0x5234cc*/
}
}
} // namespace gamemd

// 0x5234E0
namespace gamemd {
void sub_5234E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5234E0()
{
  MEMORY[0xA8F2A8] = 1.0 / MEMORY[0xA8F2C0]; /*0x5234ec*/
}
}
} // namespace gamemd

// 0x523500
namespace gamemd {
void sub_523500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_523500()
{
  MEMORY[0xA8F2A0] = 0.0174532925199433 * 45.0; /*0x52350c*/
}
}
} // namespace gamemd

// 0x523520
namespace gamemd {
void sub_523520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_523520()
{
  MEMORY[0xA8F270] = 0.0174532925199433 * 60.0; /*0x52352c*/
}
}
} // namespace gamemd

// 0x523540
namespace gamemd {
void sub_523540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_523540()
{
  MEMORY[0xA8F248] = 0.0174532925199433 * 90.0; /*0x52354c*/
}
}
} // namespace gamemd

// 0x523560
namespace gamemd {
long long sub_523560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_523560()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xA8F248] - MEMORY[0xA8F270]); /*0x523572*/
  result = Math::RoundToInt(v0 * MEMORY[0xA8F268] * 0.5); /*0x523586*/
  MEMORY[0xA8F2CC] = result; /*0x52358b*/
  return result; /*0x523590*/
}
}
} // namespace gamemd

// 0x5235A0
namespace gamemd {
void sub_5235A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5235A0()
{
  MEMORY[0xA8F278] = Math::ArcTan((double)MEMORY[0xA8F2CC] * 0.00390625); /*0x5235b7*/
}
}
} // namespace gamemd

// 0x5235D0
namespace gamemd {
void sub_5235D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5235D0()
{
  MEMORY[0xA8F298] = Math::ArcTan((double)(2 * MEMORY[0xA8F2CC]) / MEMORY[0xA8F268]); /*0x5235f2*/
}
}
} // namespace gamemd

// 0x523600
namespace gamemd {
long long sub_523600()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_523600()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xA8F2CC]) + 0.5); /*0x52361b*/
  MEMORY[0xA8F2BC] = result; /*0x523620*/
  return result; /*0x523626*/
}
}
} // namespace gamemd

// 0x523630
namespace gamemd {
int sub_523630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_523630()
{
  MEMORY[0xA8F260] = 0; /*0x523632*/
  MEMORY[0xA8F262] = 0; /*0x523638*/
  return 0; /*0x52363e*/
}
}
} // namespace gamemd

// 0x523640
namespace gamemd {
int sub_523640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_523640()
{
  MEMORY[0xA8F280] = 0; /*0x523642*/
  MEMORY[0xA8F284] = 0; /*0x523647*/
  MEMORY[0xA8F288] = 0; /*0x52364c*/
  return 0; /*0x523651*/
}
}
} // namespace gamemd

// 0x523660
namespace gamemd {
int sub_523660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_523660()
{
  MEMORY[0xA8F2B8] = 0; /*0x523665*/
  MEMORY[0xA8F2B0] = 128; /*0x52366f*/
  MEMORY[0xA8F2B4] = 128; /*0x523674*/
  return 128; /*0x523679*/
}
}
} // namespace gamemd

// 0x523680
namespace gamemd {
int sub_523680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_523680()
{
  MEMORY[0xA8F250] = 0; /*0x523682*/
  MEMORY[0xA8F254] = 0; /*0x523687*/
  MEMORY[0xA8F258] = 0; /*0x52368c*/
  MEMORY[0xA8F25C] = 0; /*0x523691*/
  return 0; /*0x523696*/
}
}
} // namespace gamemd

// 0x523C80
namespace gamemd {
void nullsub_147()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl nullsub_147()
{
  ; /*0x523c80*/
}
}
} // namespace gamemd

// 0x5247B0
namespace gamemd {
int InfantryTypeClass_j__do_always_noconv_codecvt_base_std__MBE_NXZ_19()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
bool __thiscall InfantryTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19(std::codecvt_base *this)
{
  return AbstractClass::processWeaponFire(this);
}
}
} // namespace gamemd

// 0x524EC0
namespace gamemd {
Iostream_init * __0Iostream_init_QAE_XZ_4()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_4(Iostream_init *this)
{
  return this; /*0x524ec2*/
}
}
} // namespace gamemd

// 0x525430
namespace gamemd {
int GetINIClassIntList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__fastcall GetINIClassIntList(
        int a1,
        unsigned __int8 ***edx0,
        INIClass *aP1,
        unsigned __int8 *a2,
        void **a5,
        void *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  char *i; // eax
  void *_751520; // eax
  CCINIClass *v14; // edi
  int v15; // eax
  VectorClass *v16; // ecx
  void *v17; // eax
  bool v18; // zf
  void *v19; // eax
  int v20; // ecx
  VectorClass *v22; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v24; // [esp+14h] [ebp-94h]
  char v25; // [esp+19h] [ebp-8Fh]
  int v26; // [esp+1Ch] [ebp-8Ch]
  int v27; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x52545c*/
  {
    VectorClass::Construct(&v22, 0, 0); /*0x525471*/
    v27 = 10; /*0x52547a*/
    v26 = 0; /*0x525488*/
    v22 = (VectorClass *)&TypeList<int>::`vftable'; /*0x52548c*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x52549e*/
    {
      if ( !*i ) /*0x5254a0*/
        break; /*0x5254a2*/
      _751520 = (void *)System_Get_751520(i); /*0x5254a6*/
      if ( _751520 ) /*0x5254ad*/
      {
        v14 = (CCINIClass *)System_Get_7515C0(_751520); /*0x5254ba*/
        if ( v26 < v24 /*0x5254e2*/
          || (v25 || !v24)
          && v27 > 0
          && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v22->field_8)(&v22, v27 + v24, 0) )
        {
          v15 = v26++; /*0x5254ed*/
          *((_DWORD *)Block + v15) = v14; /*0x5254f8*/
        }
      }
    }
    IntVector::Copy((_DWORD *)a1, (VectorClass *)&v22); /*0x525514*/
    *(_DWORD *)a1 = &TypeList<int>::`vftable'; /*0x52551e*/
    v16 = (VectorClass *)v27; /*0x525528*/
    *(_DWORD *)(a1 + 16) = v26; /*0x52552c*/
    v17 = Block; /*0x52552f*/
    v18 = Block == 0; /*0x525533*/
    *(_DWORD *)(a1 + 20) = v16; /*0x525535*/
    v22 = (VectorClass *)&VectorClass<int>::`vftable'; /*0x525538*/
    if ( !v18 && v25 ) /*0x525542*/
    {
      __3_YAXPAX_Z(v17); /*0x525545*/
      Block = 0; /*0x52554d*/
    }
    v19 = a6; /*0x525551*/
    v25 = 0; /*0x525558*/
    v24 = 0; /*0x52555e*/
    a5 = &VectorClass<int>::`vftable'; /*0x525562*/
    if ( a6 && HIBYTE(a8) ) /*0x525572*/
      goto LABEL_20; /*0x525572*/
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x525587*/
    *(_DWORD *)(a1 + 8) = 0; /*0x52558a*/
    *(_BYTE *)(a1 + 12) = 1; /*0x52558d*/
    *(_BYTE *)(a1 + 13) = 0; /*0x525591*/
    *(_DWORD *)a1 = &VectorClass<int>::`vftable'; /*0x525594*/
    TypeList::Copy((_DWORD *)a1, &a5); /*0x525596*/
    *(_DWORD *)a1 = &TypeList<int>::`vftable'; /*0x52559b*/
    a5 = &VectorClass<int>::`vftable'; /*0x5255a1*/
    v20 = a10; /*0x5255af*/
    *(_DWORD *)(a1 + 16) = a9; /*0x5255b6*/
    v19 = a6; /*0x5255b9*/
    v18 = a6 == 0; /*0x5255c0*/
    *(_DWORD *)(a1 + 20) = v20; /*0x5255c2*/
    if ( !v18 && HIBYTE(a8) ) /*0x5255ce*/
LABEL_20:
      __3_YAXPAX_Z(v19); /*0x5255d0*/
  }
  return (VectorClass *)a1; /*0x5255db*/
}
}
} // namespace gamemd

// 0x5256D0
namespace gamemd {
int sub_5256D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5256D0()
{
  MEMORY[0xA8F2D0] = 0; /*0x5256d2*/
  MEMORY[0xA8F2D4] = 0; /*0x5256d7*/
  MEMORY[0xA8F2D8] = 0; /*0x5256dc*/
  MEMORY[0xA8F2DC] = 0; /*0x5256e1*/
  return 0; /*0x5256e6*/
}
}
} // namespace gamemd

// 0x526950
namespace gamemd {
int sub_526950()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_526950(_DWORD *this)
{
  return *(this + 11); /*0x526953*/
}
}
} // namespace gamemd

// 0x528220
namespace gamemd {
int sub_528220(unsigned signed char * a2, unsigned signed char * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_528220(int this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v4; // ebp
  unsigned __int8 *v6; // edx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  _DWORD *v11; // ecx
  size_t v12; // eax
  _DWORD *v13; // ecx
  size_t v14; // eax
  int *v15; // esi
  int v16; // edi
  _DWORD *v17; // eax
  size_t v18; // eax
  int *v19; // esi
  int v21; // esi
  const char *v22; // esi
  unsigned int v23; // [esp+8h] [ebp-Ch] BYREF
  int v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+10h] [ebp-4h]

  v4 = a2; /*0x528227*/
  if ( a2 ) /*0x52822f*/
  {
    v6 = a3; /*0x528235*/
    if ( a3 ) /*0x52823b*/
    {
      if ( a2 == *(unsigned __int8 **)(this + 4) ) /*0x528248*/
      {
        v7 = *(_DWORD *)(this + 8); /*0x52824e*/
LABEL_5:
        if ( v7 ) /*0x528253*/
        {
          v23 = 0; /*0x528259*/
          v24 = 0; /*0x52825d*/
          v25 = 0; /*0x528261*/
          v8 = Checksummer::Add_Buffer(&v23, v6, strlen((const char *)v6)); /*0x528277*/
          v9 = *(_DWORD *)(v7 + 48); /*0x52827c*/
          v10 = v7 + 44; /*0x52827f*/
          a3 = (unsigned __int8 *)v8; /*0x528284*/
          if ( v9 ) /*0x528288*/
          {
            v11 = *(_DWORD **)(v10 + 16); /*0x52828e*/
            if ( v11 && *v11 == v8 ) /*0x528297*/
            {
LABEL_11:
              if ( *(_DWORD *)(v10 + 4) ) /*0x5282b4*/
              {
                v13 = *(_DWORD **)(v10 + 16); /*0x5282bf*/
                if ( v13 && *v13 == v8 ) /*0x5282c8*/
                  goto LABEL_16; /*0x5282c8*/
                v14 = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x5282d1*/
                if ( v14 ) /*0x5282d8*/
                {
                  *(_DWORD *)(v10 + 16) = v14; /*0x5282de*/
LABEL_16:
                  v15 = (int *)(*(_DWORD *)(v10 + 16) + 4); /*0x5282e1*/
                  goto LABEL_29; /*0x5282e7*/
                }
              }
              v15 = (int *)&unk_B78830; /*0x52838b*/
LABEL_29:
              v21 = *v15; /*0x528390*/
              if ( v21 ) /*0x528394*/
              {
                v22 = *(const char **)(v21 + 16); /*0x528396*/
                if ( v22 ) /*0x52839b*/
                  sscanf(v22, MEMORY[0x825BD4], &a4); /*0x5283a8*/
              }
              return a4; /*0x5283a8*/
            }
            v12 = HashTable::BinarySearchAlt((char **)v10, (int *)&a3); /*0x5282a0*/
            if ( v12 ) /*0x5282a7*/
            {
              *(_DWORD *)(v10 + 16) = v12; /*0x5282ad*/
              v8 = (int)a3; /*0x5282b0*/
              goto LABEL_11; /*0x5282b0*/
            }
          }
        }
        return a4; /*0x5283bb*/
      }
      v23 = 0; /*0x5282ec*/
      v24 = 0; /*0x5282f0*/
      v25 = 0; /*0x5282f4*/
      v16 = Checksummer::Add_Buffer(&v23, a2, strlen((const char *)a2)); /*0x528312*/
      a2 = (unsigned __int8 *)v16; /*0x528314*/
      if ( this->fallRate ) /*0x528318*/
      {
        v17 = *(_DWORD **)(this + 56); /*0x52831f*/
        if ( !v17 || *v17 != v16 ) /*0x528328*/
        {
          v18 = SortedArray::BinarySearch((char **)(this + 40), (int *)&a2); /*0x528331*/
          if ( !v18 ) /*0x528338*/
            goto LABEL_27; /*0x528338*/
          this->attachedBomb = v18; /*0x52833a*/
        }
        a2 = (unsigned __int8 *)v16; /*0x528341*/
        if ( HashTable::BinarySearch(this + 40, (int *)&a2) ) /*0x528348*/
          v19 = (int *)(this->attachedBomb + 4); /*0x528354*/
        else
          v19 = (int *)&unk_B7882C; /*0x528359*/
        v7 = *v19; /*0x52835e*/
        if ( v7 ) /*0x528362*/
        {
          v6 = a3; /*0x528364*/
          *(_DWORD *)(this + 8) = v7; /*0x528368*/
          *(_DWORD *)(this + 4) = v4; /*0x52836b*/
          goto LABEL_5; /*0x528370*/
        }
      }
LABEL_27:
      *(_DWORD *)(this + 4) = 0; /*0x528375*/
      *(_DWORD *)(this + 8) = 0; /*0x52837c*/
      return a4; /*0x528388*/
    }
  }
  return a4; /*0x528383*/
}
}
} // namespace gamemd

// 0x529E70
namespace gamemd {
char ** sub_529E70(char ** a2, char * Source, char ** a4, char ** a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char **__thiscall sub_529E70(_DWORD *this, char **a2, char *Source, char **a4, char **a5)
{
  char *v6; // edi
  char *v7; // ebp
  int v8; // ebx
  unsigned int v9; // kr04_4
  unsigned int *v10; // eax
  int v11; // ebx
  int v12; // eax
  char *v13; // eax
  char *v14; // ecx
  char *v15; // edx
  char *v16; // esi
  unsigned int v17; // kr0C_4
  unsigned int *v18; // eax
  int v19; // edi
  unsigned __int8 *v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp+0h] [ebp-70h] BYREF
  int v23; // [esp+Ch] [ebp-64h] BYREF
  int v24; // [esp+10h] [ebp-60h] BYREF
  char *v25; // [esp+14h] [ebp-5Ch] BYREF
  int v26[3]; // [esp+18h] [ebp-58h] BYREF
  int v27[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  v6 = String::GetOrEmpty_Alt(a4); /*0x529e85*/
  a4 = (char **)v6; /*0x529e87*/
  v7 = String::GetOrEmpty_Alt((char **)Source); /*0x529e90*/
  Source = &MEMORY[0x889F64]; /*0x529e98*/
  if ( &v22 == (int *)-48 || !v7 || !v6 ) /*0x529eb0*/
    goto LABEL_18; /*0x529eb0*/
  if ( v7 == (char *)*(this + 1) ) /*0x529ebc*/
  {
    v8 = *(this + 2); /*0x529ec2*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x529fab*/
    v18 = KeyValuePair::Init(v26, 0); /*0x529fb7*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x529fca*/
    v23 = v19; /*0x529fcf*/
    if ( !HashTable::BinarySearch((int)(this + 10), &v23) /*0x529ff0*/
      || (v24 = v19, (v8 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), &v24)) == 0) )
    {
      *(this + 1) = 0; /*0x52a006*/
      *(this + 2) = 0; /*0x52a009*/
      goto LABEL_11; /*0x52a00c*/
    }
    v6 = (char *)a4; /*0x529ff2*/
    *(this + 2) = v8; /*0x529ff9*/
    *(this + 1) = v7; /*0x529ffc*/
  }
  if ( v8 ) /*0x529ec7*/
  {
    v9 = strlen(v6) + 1; /*0x529ece*/
    v21 = (unsigned __int8 *)a4; /*0x529edb*/
    v10 = KeyValuePair::Init(v27, 0); /*0x529ee2*/
    v11 = v8 + 44; /*0x529ef5*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x529efb*/
    if ( SortedArray::Find(v11, (int *)&a4) ) /*0x529f02*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2(v11, (int *)&a4); /*0x529f1a*/
      if ( v12 ) /*0x529f1e*/
      {
        v13 = *(char **)(v12 + 16); /*0x529f20*/
        if ( v13 ) /*0x529f25*/
          Source = v13; /*0x529f27*/
      }
    }
  }
LABEL_11:
  if ( !Source /*0x529f5a*/
    || (strncpy(Destination, Source, 0x40u), Destination[63] = 0, String::Trim(Destination), !strlen(Destination)) )
  {
LABEL_18:
    v14 = *a5; /*0x52a011*/
    v15 = a5[1]; /*0x52a01a*/
    v16 = a5[2]; /*0x52a01d*/
    goto LABEL_19; /*0x52a01d*/
  }
  sscanf(Destination, MEMORY[0x8189B0], &Source, &a5, &v25); /*0x529f88*/
  v14 = Source; /*0x529f8d*/
  v15 = (char *)a5; /*0x529f94*/
  v16 = v25; /*0x529f9b*/
LABEL_19:
  *a2 = v14; /*0x52a020*/
  a2[1] = v15; /*0x52a028*/
  a2[2] = v16; /*0x52a02b*/
  return a2; /*0x52a02e*/
}
}
} // namespace gamemd

// 0x52A110
namespace gamemd {
float * sub_52A110(float * a2, unsigned signed char * a3, float a4, float * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__thiscall sub_52A110(_DWORD *this, float *a2, unsigned __int8 *a3, float a4, float *a5)
{
  unsigned __int8 *v6; // ebx
  const char *v7; // edx
  int v8; // esi
  unsigned int v9; // kr04_4
  unsigned int *v10; // eax
  int v11; // esi
  int v12; // eax
  char *v13; // eax
  double v15; // st7
  unsigned __int8 *v16; // esi
  float v17; // ecx
  unsigned __int8 *v18; // [esp-8h] [ebp-78h]
  char *Source; // [esp+10h] [ebp-60h]
  unsigned __int8 *v20; // [esp+14h] [ebp-5Ch] BYREF
  float v21; // [esp+18h] [ebp-58h] BYREF
  float v22; // [esp+1Ch] [ebp-54h]
  float v23; // [esp+20h] [ebp-50h]
  _DWORD v24[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  Source = &MEMORY[0x889F64]; /*0x52a11f*/
  if ( !Destination ) /*0x52a127*/
    goto LABEL_18; /*0x52a127*/
  v6 = a3; /*0x52a12d*/
  if ( *(float *)&a3 == 0.0 ) /*0x52a135*/
    goto LABEL_18; /*0x52a135*/
  v7 = (const char *)LODWORD(a4); /*0x52a13b*/
  if ( a4 == 0.0 ) /*0x52a141*/
    goto LABEL_18; /*0x52a141*/
  if ( a3 == (unsigned __int8 *)*(this + 1) ) /*0x52a14a*/
  {
    v8 = *(this + 2); /*0x52a150*/
  }
  else
  {
    v21 = 0.0; /*0x52a256*/
    v22 = 0.0; /*0x52a25a*/
    v23 = 0.0; /*0x52a25e*/
    *(float *)&v16 = COERCE_FLOAT(Checksummer::Add_Buffer((unsigned int *)&v21, a3, strlen((const char *)a3))); /*0x52a280*/
    a3 = v16; /*0x52a285*/
    if ( !HashTable::BinarySearch((int)(this + 10), (int *)&a3) /*0x52a2a6*/
      || (v20 = v16, (v8 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), (int *)&v20)) == 0) )
    {
      *(this + 1) = 0; /*0x52a2b9*/
      *(this + 2) = 0; /*0x52a2bc*/
      goto LABEL_11; /*0x52a2bf*/
    }
    v7 = (const char *)LODWORD(a4); /*0x52a2a8*/
    *(this + 2) = v8; /*0x52a2ac*/
    *(this + 1) = v6; /*0x52a2af*/
  }
  if ( v8 ) /*0x52a155*/
  {
    v9 = strlen(v7) + 1; /*0x52a15e*/
    v18 = (unsigned __int8 *)v7; /*0x52a164*/
    v10 = KeyValuePair::Init(v24, 0); /*0x52a16a*/
    a4 = COERCE_FLOAT(Checksummer::Add_Buffer(v10, v18, v9 - 1)); /*0x52a176*/
    v11 = v8 + 44; /*0x52a17a*/
    if ( SortedArray::Find(v11, (int *)&a4) ) /*0x52a184*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2(v11, (int *)&a4); /*0x52a199*/
      if ( v12 ) /*0x52a19d*/
      {
        v13 = *(char **)(v12 + 16); /*0x52a19f*/
        if ( v13 ) /*0x52a1a4*/
          Source = v13; /*0x52a1a6*/
      }
    }
  }
LABEL_11:
  if ( Source ) /*0x52a1b0*/
  {
    strncpy(Destination, Source, 0x40u); /*0x52a1be*/
    Destination[63] = 0; /*0x52a1ca*/
    String::Trim(Destination); /*0x52a1cf*/
    if ( strlen(Destination) ) /*0x52a1d8*/
    {
      sscanf(Destination, MEMORY[0x825BFC], &a4, &a3, &a5); /*0x52a209*/
      v21 = a4; /*0x52a21f*/
      v22 = *(float *)&a3; /*0x52a22d*/
      v15 = *(float *)&a5; /*0x52a231*/
      *a2 = a4; /*0x52a238*/
      v23 = v15; /*0x52a23e*/
      a2[1] = v22; /*0x52a242*/
      a2[2] = v23; /*0x52a24c*/
      return a2; /*0x52a253*/
    }
  }
LABEL_18:
  v17 = *(float *)&a5; /*0x52a2c4*/
  *a2 = *a5; /*0x52a2d4*/
  a2[1] = *(float *)(LODWORD(v17) + 4); /*0x52a2d9*/
  a2[2] = *(float *)(LODWORD(v17) + 8); /*0x52a2e1*/
  return a2; /*0x52a249*/
}
}
} // namespace gamemd

// 0x52A2F0
namespace gamemd {
float * sub_52A2F0(float * a2, float Source, char ** a4, float * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__thiscall sub_52A2F0(_DWORD *this, float *a2, float Source, char **a4, float *a5)
{
  char *v6; // edi
  char *v7; // ebp
  int v8; // ebx
  unsigned int v9; // kr04_4
  unsigned int *v10; // eax
  int v11; // ebx
  int v12; // eax
  char *v13; // eax
  float v14; // ecx
  float *v15; // edx
  float v16; // esi
  unsigned int v17; // kr0C_4
  unsigned int *v18; // eax
  int v19; // edi
  unsigned __int8 *v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp+0h] [ebp-70h] BYREF
  int v23; // [esp+Ch] [ebp-64h] BYREF
  int v24; // [esp+10h] [ebp-60h] BYREF
  float v25; // [esp+14h] [ebp-5Ch] BYREF
  float v26[3]; // [esp+18h] [ebp-58h] BYREF
  int v27[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  v6 = String::GetOrEmpty_Alt(a4); /*0x52a305*/
  a4 = (char **)v6; /*0x52a307*/
  v7 = String::GetOrEmpty_Alt((char **)LODWORD(Source)); /*0x52a310*/
  Source = COERCE_FLOAT(&MEMORY[0x889F64]); /*0x52a318*/
  if ( &v22 == (int *)-48 || !v7 || !v6 ) /*0x52a330*/
    goto LABEL_18; /*0x52a330*/
  if ( v7 == (char *)*(this + 1) ) /*0x52a33c*/
  {
    v8 = *(this + 2); /*0x52a342*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x52a443*/
    v18 = KeyValuePair::Init(v26, 0); /*0x52a44f*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x52a462*/
    v23 = v19; /*0x52a467*/
    if ( !HashTable::BinarySearch((int)(this + 10), &v23) /*0x52a488*/
      || (v24 = v19, (v8 = *(_DWORD *)SortedArray::FindValue((int)(this + 10), &v24)) == 0) )
    {
      *(this + 1) = 0; /*0x52a49e*/
      *(this + 2) = 0; /*0x52a4a1*/
      goto LABEL_11; /*0x52a4a4*/
    }
    v6 = (char *)a4; /*0x52a48a*/
    *(this + 2) = v8; /*0x52a491*/
    *(this + 1) = v7; /*0x52a494*/
  }
  if ( v8 ) /*0x52a347*/
  {
    v9 = strlen(v6) + 1; /*0x52a34e*/
    v21 = (unsigned __int8 *)a4; /*0x52a35b*/
    v10 = KeyValuePair::Init(v27, 0); /*0x52a362*/
    v11 = v8 + 44; /*0x52a375*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x52a37b*/
    if ( SortedArray::Find(v11, (int *)&a4) ) /*0x52a382*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2(v11, (int *)&a4); /*0x52a39a*/
      if ( v12 ) /*0x52a39e*/
      {
        v13 = *(char **)(v12 + 16); /*0x52a3a0*/
        if ( *(float *)&v13 != 0.0 ) /*0x52a3a5*/
          Source = *(float *)&v13; /*0x52a3a7*/
      }
    }
  }
LABEL_11:
  if ( Source == 0.0 /*0x52a3da*/
    || (strncpy(Destination, (const char *)LODWORD(Source), 0x40u),
        Destination[63] = 0,
        String::Trim(Destination),
        !strlen(Destination)) )
  {
LABEL_18:
    v14 = *a5; /*0x52a4a9*/
    v15 = (float *)*((_DWORD *)a5 + 1); /*0x52a4b2*/
    v16 = a5[2]; /*0x52a4b5*/
    goto LABEL_19; /*0x52a4b5*/
  }
  sscanf(Destination, MEMORY[0x825BFC], &Source, &a5, &v25); /*0x52a408*/
  v26[0] = Source; /*0x52a414*/
  v14 = Source; /*0x52a41f*/
  v26[1] = *(float *)&a5; /*0x52a426*/
  v15 = a5; /*0x52a42e*/
  v26[2] = v25; /*0x52a432*/
  v16 = v25; /*0x52a436*/
LABEL_19:
  *a2 = v14; /*0x52a4b8*/
  *((_DWORD *)a2 + 1) = v15; /*0x52a4c0*/
  a2[2] = v16; /*0x52a4c3*/
  return a2; /*0x52a4c6*/
}
}
} // namespace gamemd

// 0x52A4D0
namespace gamemd {
int sub_52A4D0(unsigned signed char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_52A4D0(int this, unsigned __int8 *a2)
{
  int v3; // eax
  size_t v4; // ecx
  unsigned int v5; // edi
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  size_t v10; // eax
  _DWORD *v11; // ecx
  int v12; // ecx
  int v13; // ebp
  int v14; // edi
  int v15; // edx
  unsigned int v17[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+1Ch] [ebp+4h]

  if ( !a2 ) /*0x52a4e0*/
    return 0; /*0x52a4e0*/
  memset(v17, 0, sizeof(v17)); /*0x52a4ed*/
  v3 = Checksummer::Add_Buffer(v17, a2, strlen((const char *)a2)); /*0x52a504*/
  v4 = this->nextObject; /*0x52a509*/
  v5 = v3; /*0x52a50c*/
  v18 = v3; /*0x52a510*/
  if ( !v4 ) /*0x52a514*/
    return 0; /*0x52a514*/
  v6 = *(_DWORD **)(this + 60); /*0x52a51a*/
  if ( v6 && *v6 == v5 ) /*0x52a523*/
    goto LABEL_9; /*0x52a523*/
  if ( !*(_BYTE *)(this + 56) ) /*0x52a525*/
  {
    qsort(*(void **)(this + 44), v4, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a536*/
    *(_DWORD *)(this + 60) = 0; /*0x52a53e*/
    *(_BYTE *)(this + 56) = 1; /*0x52a541*/
  }
  v7 = this->nextObject; /*0x52a545*/
  v8 = this->fallRate; /*0x52a54d*/
  v17[0] = v5; /*0x52a550*/
  v9 = UI_Find(v8, v7, (int *)v17); /*0x52a554*/
  if ( !v9 ) /*0x52a55b*/
    return 0; /*0x52a5f8*/
  *(_DWORD *)(this + 60) = v9; /*0x52a561*/
LABEL_9:
  v10 = this->nextObject; /*0x52a564*/
  if ( !v10 ) /*0x52a56a*/
    return unk_B78830; /*0x52a56a*/
  v11 = *(_DWORD **)(this + 60); /*0x52a56c*/
  if ( v11 && *v11 == v5 ) /*0x52a575*/
    return *(_DWORD *)(*(_DWORD *)(this + 60) + 4); /*0x52a5f3*/
  if ( !*(_BYTE *)(this + 56) ) /*0x52a577*/
  {
    qsort(*(void **)(this + 44), v10, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a588*/
    *(_DWORD *)(this + 60) = 0; /*0x52a590*/
    *(_BYTE *)(this + 56) = 1; /*0x52a593*/
  }
  v12 = this->nextObject; /*0x52a597*/
  v13 = this->fallRate; /*0x52a59a*/
  if ( v12 <= 0 ) /*0x52a59f*/
    return unk_B78830; /*0x52a59f*/
  while ( 1 ) /*0x52a5ac*/
  {
    v14 = *(_DWORD *)(v13 + 8 * (v12 / 2)); /*0x52a5ac*/
    v15 = v13 + 8 * (v12 / 2); /*0x52a5b0*/
    if ( v14 <= v18 ) /*0x52a5b6*/
      break; /*0x52a5b6*/
    v12 /= 2; /*0x52a5b8*/
LABEL_19:
    if ( v12 <= 0 ) /*0x52a5ca*/
      return unk_B78830; /*0x52a5ca*/
  }
  if ( v14 != v18 ) /*0x52a5bc*/
  {
    v13 = v15 + 8; /*0x52a5be*/
    v12 += -1 - v12 / 2; /*0x52a5c6*/
    goto LABEL_19; /*0x52a5c6*/
  }
  if ( v15 ) /*0x52a5df*/
  {
    *(_DWORD *)(this + 60) = v15; /*0x52a5e1*/
    return *(_DWORD *)(*(_DWORD *)(this + 60) + 4); /*0x52a5e1*/
  }
  return unk_B78830; /*0x52a5d2*/
}
}
} // namespace gamemd

// 0x52A610
namespace gamemd {
char sub_52A610(void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_52A610(char *this, void *a2)
{
  ObjectClass *v3; // eax
  ObjectClass *v4; // eax
  ObjectClass aP1[2]; // [esp+8h] [ebp-200h] BYREF

  v3 = (ObjectClass *)sub_631FC0(a2, aP1); /*0x52a628*/
  INIClass::ReadBase64Data(this, (unsigned __int8 *)MEMORY[0x825BF4].__pad_20, aP1, v3); /*0x52a63a*/
  v4 = (ObjectClass *)sub_631FE0(a2, aP1); /*0x52a646*/
  INIClass::ReadBase64Data(this, (unsigned __int8 *)&MEMORY[0x825BF4].sectionHead[1], aP1, v4); /*0x52a658*/
  return 1; /*0x52a65d*/
}
}
} // namespace gamemd

// 0x52AAF0
namespace gamemd {
void sub_52AAF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_52AAF0(INIEntry_INIClass *this)
{
  CCINIClass *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  void *v7; // [esp-8h] [ebp-10h]

  v2 = (CCINIClass *)this->field_C; /*0x52aaf4*/
  *(_DWORD *)this->__pad_0 = &INIClass::INIEntry::`vftable'; /*0x52aaf7*/
  free(v2); /*0x52aafe*/
  v7 = (void *)this->field_10; /*0x52ab08*/
  this->field_C = 0; /*0x52ab09*/
  free(v7); /*0x52ab0c*/
  v3 = *(_DWORD *)this->__pad_14; /*0x52ab11*/
  this->field_10 = 0; /*0x52ab19*/
  if ( v3 ) /*0x52ab1c*/
  {
    do /*0x52ab40*/
    {
      free(**(void ***)this->__pad_14); /*0x52ab25*/
      v4 = *(_DWORD *)(*(_DWORD *)this->__pad_14 + 4); /*0x52ab2f*/
      __3_YAXPAX_Z(*(void **)this->__pad_14); /*0x52ab33*/
      *(_DWORD *)this->__pad_14 = v4; /*0x52ab3d*/
    }
    while ( v4 ); /*0x52ab40*/
  }
  free((void *)this->field_18); /*0x52ab47*/
  this->field_18 = 0; /*0x52ab51*/
  *(_DWORD *)this->__pad_0 = &GenericNode::`vftable'; /*0x52ab54*/
  if ( this ) /*0x52ab5a*/
  {
    v5 = *(_DWORD *)&this->__pad_0[4]; /*0x52ab5c*/
    if ( v5 ) /*0x52ab61*/
    {
      v6 = *(_DWORD *)&this->__pad_0[8]; /*0x52ab63*/
      if ( v6 ) /*0x52ab68*/
      {
        *(_DWORD *)(v6 + 4) = v5; /*0x52ab6a*/
        *(_DWORD *)(*(_DWORD *)&this->__pad_0[4] + 8) = *(_DWORD *)&this->__pad_0[8]; /*0x52ab73*/
        *(_DWORD *)&this->__pad_0[8] = 0; /*0x52ab76*/
        *(_DWORD *)&this->__pad_0[4] = 0; /*0x52ab79*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x52B6A0
namespace gamemd {
int CompareFunc3Int(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl CompareFunc3Int(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x52b6b0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x52B720
namespace gamemd {
int CompareFunc4Int(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl CompareFunc4Int(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x52b730*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x52B7A0
namespace gamemd {
int sub_52B7A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_52B7A0()
{
  MEMORY[0xA8F2E8] = 0; /*0x52b7a2*/
  MEMORY[0xA8F2EC] = 0; /*0x52b7a7*/
  MEMORY[0xA8F2F0] = 0; /*0x52b7ac*/
  MEMORY[0xA8F2F4] = 0; /*0x52b7b1*/
  return 0; /*0x52b7b6*/
}
}
} // namespace gamemd

// 0x52B7C0
namespace gamemd {
void sub_52B7C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_52B7C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52b7cc*/
  MEMORY[0xA8F418] = Math::Sqrt(v0 + v0); /*0x52b7de*/
}
}
} // namespace gamemd

// 0x52B7F0
namespace gamemd {
void sub_52B7F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_52B7F0()
{
  MEMORY[0xA8F778] = MEMORY[0xA8F418] / 60.0; /*0x52b7fc*/
}
}
} // namespace gamemd

// 0x52B810
namespace gamemd {
void sub_52B810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_52B810()
{
  MEMORY[0xA8F760] = 1.0 / MEMORY[0xA8F778]; /*0x52b81c*/
}
}
} // namespace gamemd

// 0x52B830
namespace gamemd {
void sub_52B830()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_52B830()
{
  MEMORY[0xA8F758] = 0.0174532925199433 * 45.0; /*0x52b83c*/
}
}
} // namespace gamemd

// 0x52B850
namespace gamemd {
void sub_52B850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_52B850()
{
  MEMORY[0xA8F5A0] = 0.0174532925199433 * 60.0; /*0x52b85c*/
}
}
} // namespace gamemd

// 0x52B870
namespace gamemd {
void sub_52B870()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_52B870()
{
  MEMORY[0xA8F2E0] = 0.0174532925199433 * 90.0; /*0x52b87c*/
}
}
} // namespace gamemd

// 0x52B890
namespace gamemd {
long long sub_52B890()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_52B890()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xA8F2E0] - MEMORY[0xA8F5A0]); /*0x52b8a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xA8F418] * 0.5); /*0x52b8b6*/
  MEMORY[0xA8F780] = result; /*0x52b8bb*/
  return result; /*0x52b8c0*/
}
}
} // namespace gamemd

// 0x52B8D0
namespace gamemd {
void sub_52B8D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_52B8D0()
{
  MEMORY[0xA8F5A8] = Math::ArcTan((double)MEMORY[0xA8F780] * 0.00390625); /*0x52b8e7*/
}
}
} // namespace gamemd

// 0x52B900
namespace gamemd {
void sub_52B900()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_52B900()
{
  MEMORY[0xA8F648] = Math::ArcTan((double)(2 * MEMORY[0xA8F780]) / MEMORY[0xA8F418]); /*0x52b922*/
}
}
} // namespace gamemd

// 0x52B930
namespace gamemd {
long long sub_52B930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_52B930()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xA8F780]) + 0.5); /*0x52b94b*/
  MEMORY[0xA8F774] = result; /*0x52b950*/
  return result; /*0x52b956*/
}
}
} // namespace gamemd

// 0x52B960
namespace gamemd {
int sub_52B960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_52B960()
{
  MEMORY[0xA8F2F8] = 0; /*0x52b962*/
  MEMORY[0xA8F2FA] = 0; /*0x52b968*/
  return 0; /*0x52b96e*/
}
}
} // namespace gamemd

// 0x52B970
namespace gamemd {
int sub_52B970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_52B970()
{
  MEMORY[0xA8F638] = 0; /*0x52b972*/
  MEMORY[0xA8F63C] = 0; /*0x52b977*/
  MEMORY[0xA8F640] = 0; /*0x52b97c*/
  return 0; /*0x52b981*/
}
}
} // namespace gamemd

// 0x52B990
namespace gamemd {
int sub_52B990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_52B990()
{
  MEMORY[0xA8F770] = 0; /*0x52b995*/
  MEMORY[0xA8F768] = 128; /*0x52b99f*/
  MEMORY[0xA8F76C] = 128; /*0x52b9a4*/
  return 128; /*0x52b9a9*/
}
}
} // namespace gamemd

// 0x52BA60
namespace gamemd {
int InitGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int InitGame()
// {
//   int v0; // eax
//   int v1; // ebx
//   RulesClass *v3; // eax
//   _BYTE *TextBufferEntry; // eax
//   _DWORD *v5; // eax
//   IUnknown *v6; // edx
//   AbstractClass *v7; // eax
//   int i; // edi
//   char *esi20; // esi
//   ObjectClass *v9; // eax
//   IUnknown *v11; // edx
//   AbstractClass *v12; // eax
//   int j; // edi
//   char *v14; // esi
//   ObjectClass *v13; // eax
//   IUnknown *v16; // edx
//   AbstractClass *eax23; // eax
//   int k; // edi
//   char *v19; // esi
//   ObjectClass *v17; // eax
//   int v21; // edi
//   char *v22; // esi
//   ObjectClass *v20; // eax
//   char *ecx26; // ecx
//   _DWORD *v25; // eax
//   IUnknown *edx30; // edx
//   AbstractClass *v27; // eax
//   int m; // edi
//   ConvertClass *v24; // eax
//   _BYTE *v30; // esi
//   ObjectClass *v26; // eax
//   _DWORD *v32; // eax
//   IUnknown *v33; // edx
//   AbstractClass *eax35; // eax
//   int n; // edi
//   ConvertClass *v29; // eax
//   _BYTE *v37; // esi
//   ObjectClass *v31; // eax
//   _DWORD *eax37; // eax
//   IUnknown *v40; // edx
//   AbstractClass *eax40; // eax
//   int ii; // edi
// ... [29276 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x52CB50
namespace gamemd {
int PlayIntroSequence()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall Init::Intro@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  if ( (MEMORY[0xA8E960] & 4) != 0 ) /*0x52cb57*/
    Movie::Play(-1, a2, a3, 1, 1, 1, 0); /*0x52cb69*/
  Screen::Capture(1, 0, a1, a2); /*0x52cb72*/
  return Event::Dispatch();
}
}
} // namespace gamemd

// 0x52CB80
namespace gamemd {
void nullsub_18()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_18()
{
  ; /*0x52cb80*/
}
}
} // namespace gamemd

// 0x52CD70
namespace gamemd {
char InitRules()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char InitRules()
{
  HANDLE FirstFileA; // ebp
  char *cAlternateFileName; // edi
  INIClass *v2; // eax
  INIClass *v3; // esi
  int v4; // eax
  int v5; // eax
  INIClass *v6; // eax
  INIClass *v7; // esi
  int v8; // eax
  int v10; // eax
  INT_PTR v11; // eax
  int v12; // esi
  MultiplayerGameMode *v13; // eax
  void (__thiscall ***v14)(_DWORD, int); // ecx
  char v15; // [esp+13h] [ebp-309h]
  LPARAM dwInitParam; // [esp+14h] [ebp-308h] BYREF
  MultiplayerGameMode *Src; // [esp+18h] [ebp-304h]
  int v18; // [esp+1Ch] [ebp-300h]
  char v19; // [esp+21h] [ebp-2FBh]
  int v20; // [esp+24h] [ebp-2F8h]
  int v21; // [esp+28h] [ebp-2F4h]
  MultiplayerGameMode aP1[2]; // [esp+2Ch] [ebp-2F0h] BYREF
  char v23; // [esp+6Ch] [ebp-2B0h]
  _BYTE v24[12]; // [esp+84h] [ebp-298h] BYREF
  int v25; // [esp+90h] [ebp-28Ch]
  MultiplayerGameMode v26; // [esp+98h] [ebp-284h] BYREF
  _DWORD v27[3]; // [esp+F0h] [ebp-22Ch] BYREF
  int v28; // [esp+FCh] [ebp-220h]
  MultiplayerGameMode v29; // [esp+104h] [ebp-218h] BYREF
  _DWORD v30[3]; // [esp+15Ch] [ebp-1C0h] BYREF
  int v31; // [esp+168h] [ebp-1B4h]
  MultiplayerGameMode v32; // [esp+170h] [ebp-1ACh] BYREF
  _DWORD v33[5]; // [esp+1C8h] [ebp-154h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1DCh] [ebp-140h] BYREF

  RulesClass::InitINIChain(&dwInitParam, 0, 0); /*0x52cd82*/
  dwInitParam = (LPARAM)&DynamicVectorClass<CCINIClass *>::`vftable'; /*0x52cd8e*/
  v21 = 10; /*0x52cd9c*/
  v20 = 0; /*0x52cda4*/
  v15 = 0; /*0x52cda8*/
  FirstFileA = FindFirstFileA(aRulemdIni, &FindFileData); /*0x52cdb2*/
  if ( FirstFileA == (HANDLE)-1 ) /*0x52cdb7*/
    goto LABEL_27; /*0x52cdb7*/
  do /*0x52cf19*/
  {
    if ( (FindFileData.dwFileAttributes & 0x116) != 0 ) /*0x52cdc8*/
      continue; /*0x52cdc8*/
    cAlternateFileName = FindFileData.cAlternateFileName; /*0x52cdd5*/
    if ( !FindFileData.cAlternateFileName[0] ) /*0x52cdde*/
      cAlternateFileName = FindFileData.cFileName; /*0x52cde0*/
    CCFileClass::Construct(aP1, cAlternateFileName); /*0x52cdec*/
    v2 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x52cdf3*/
    v3 = v2; /*0x52cdf8*/
    if ( v2 ) /*0x52cdff*/
    {
      INIClass::INIClass(v2); /*0x52ce03*/
      v3[1].__pad_0[0] = 0; /*0x52ce08*/
      *(_DWORD *)v3->__pad_0 = &CCINIClass_Vtable; /*0x52ce0b*/
    }
    else
    {
      v3 = 0; /*0x52ce13*/
    }
    CCINIClass::Load(v3, aP1, 0, 0); /*0x52ce1e*/
    if ( _strcmpi(cAlternateFileName, aRulesmdIni) ) /*0x52ce29*/
    {
      if ( v20 < v18 /*0x52cecb*/
        || (v19 || !v18)
        && v21 > 0
        && (*(unsigned __int8 (__thiscall **)(LPARAM *, int, _DWORD))(dwInitParam + 8))(&dwInitParam, v21 + v18, 0) )
      {
        v5 = v20++; /*0x52ced6*/
        *(_DWORD *)&Src->__pad_0[4 * v5] = v3; /*0x52cee1*/
      }
      goto LABEL_24; /*0x52cee1*/
    }
    v4 = v20; /*0x52ce35*/
    v15 = 1; /*0x52ce3f*/
    if ( v20 < v18 ) /*0x52ce44*/
      goto LABEL_15; /*0x52ce44*/
    if ( (v19 || !v18) /*0x52ce6c*/
      && v21 > 0
      && (*(unsigned __int8 (__thiscall **)(LPARAM *, int, _DWORD))(dwInitParam + 8))(&dwInitParam, v21 + v18, 0) )
    {
      v4 = v20; /*0x52ce73*/
LABEL_15:
      if ( v4 ) /*0x52ce79*/
        memcpy(&Src->MultiplayerGameMode_field_0x04, Src, 4 * v4); /*0x52ce88*/
      *(_DWORD *)Src->__pad_0 = v3; /*0x52ce94*/
      ++v20; /*0x52ce9b*/
    }
LABEL_24:
    *(_DWORD *)aP1[0].__pad_0 = &CCFileClass::`vftable'; /*0x52cee4*/
    v25 = 0; /*0x52cef3*/
    Vector::Clear((int)v24); /*0x52cefa*/
    *(_DWORD *)aP1[0].__pad_0 = &off_7E1668; /*0x52cf03*/
    BufferIOFileClass::Dtor(aP1); /*0x52cf0b*/
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x52cf19*/
  FindClose(FirstFileA); /*0x52cf28*/
  if ( !v15 ) /*0x52cf32*/
  {
LABEL_27:
    CCFileClass::Construct(aP1, aRulesmdIni); /*0x52cf38*/
    v6 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x52cf48*/
    v7 = v6; /*0x52cf4d*/
    if ( v6 ) /*0x52cf54*/
    {
      INIClass::INIClass(v6); /*0x52cf58*/
      v7[1].__pad_0[0] = 0; /*0x52cf5d*/
      *(_DWORD *)v7->__pad_0 = &CCINIClass_Vtable; /*0x52cf60*/
    }
    else
    {
      v7 = 0; /*0x52cf68*/
    }
    CCINIClass::Load(v7, aP1, 0, 0); /*0x52cf73*/
    v8 = v20; /*0x52cf78*/
    if ( v20 < v18 ) /*0x52cf82*/
    {
LABEL_36:
      if ( v8 ) /*0x52cfaf*/
        memcpy(&Src->MultiplayerGameMode_field_0x04, Src, 4 * v8); /*0x52cfbe*/
      *(_DWORD *)Src->__pad_0 = v7; /*0x52cfca*/
      ++v20; /*0x52cfd1*/
    }
    else if ( (v19 || !v18) /*0x52cfa2*/
           && v21 > 0
           && (*(unsigned __int8 (__thiscall **)(LPARAM *, int, _DWORD))(dwInitParam + 8))(&dwInitParam, v21 + v18, 0) )
    {
      v8 = v20; /*0x52cfa9*/
      goto LABEL_36; /*0x52cfa9*/
    }
    *(_DWORD *)aP1[0].__pad_0 = &CCFileClass::`vftable'; /*0x52cfe1*/
    v25 = 0; /*0x52cfe5*/
    Vector::Clear((int)v24); /*0x52cfec*/
    *(_DWORD *)aP1[0].__pad_0 = &off_7E1668; /*0x52cffa*/
    BufferIOFileClass::Dtor(aP1); /*0x52cffe*/
  }
  if ( v20 <= 0 ) /*0x52d013*/
  {
    dwInitParam = (LPARAM)&VectorClass<CCINIClass *>::`vftable'; /*0x52d019*/
    VectorClass_ptr_CCINIClass::ddtor((int)&dwInitParam); /*0x52d021*/
    return 0; /*0x52d032*/
  }
  CCFileClass::Construct(&v26, aArtmdIni); /*0x52d03f*/
  if ( !CCINIClass::Load(&MEMORY[0x87F8E4].__pad_5568[9012], &v26, 0, 0) ) /*0x52d053*/
  {
    Debug::Log(); /*0x52d061*/
    *(_DWORD *)v26.__pad_0 = &CCFileClass::`vftable'; /*0x52d070*/
    v28 = 0; /*0x52d077*/
    Vector::Clear((int)v27); /*0x52d07e*/
    *(_DWORD *)v26.__pad_0 = &off_7E1668; /*0x52d08a*/
    BufferIOFileClass::Dtor(&v26); /*0x52d091*/
    dwInitParam = (LPARAM)&VectorClass<CCINIClass *>::`vftable'; /*0x52d09a*/
    VectorClass_ptr_CCINIClass::ddtor((int)&dwInitParam); /*0x52d0a2*/
    return 0; /*0x52d0b3*/
  }
  if ( v20 == 1 ) /*0x52d0b9*/
  {
    v10 = *(_DWORD *)Src->__pad_0; /*0x52d0bf*/
  }
  else
  {
    v11 = DialogBoxParamA( /*0x52d0df*/
            (HINSTANCE)g_hInstance,
            (LPCSTR)0x93,
            (HWND)g_hWnd,
            (DLGPROC)ReadModConfigINI,
            (LPARAM)&dwInitParam);
    if ( v11 == -1 ) /*0x52d0e8*/
      v11 = 0; /*0x52d0ea*/
    v10 = *(_DWORD *)&Src->__pad_0[4 * v11]; /*0x52d0f0*/
  }
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8700] = v10; /*0x52d0fa*/
  RulesClass::ReadColors(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d0ff*/
  RulesClass::ReadColorAdd(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d111*/
  RulesClass::ReadMovies(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d121*/
  Rules::ReadMiscINI(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d132*/
  Dialog::ReadMultiplayerDialogSettings(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d144*/
  MEMORY[0xA8B25C] = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5252); /*0x52d159*/
  MEMORY[0xA8B270] = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5268); /*0x52d165*/
  g_RulesInitConfig = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5276); /*0x52d171*/
  MEMORY[0xA8B268] = *(CellStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5280); /*0x52d17d*/
  MEMORY[0xA8B278] = *(IUnknown **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5284); /*0x52d189*/
  MEMORY[0xA8B274] = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5288); /*0x52d195*/
  LOBYTE(MEMORY[0xA8B260]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5292); /*0x52d1a1*/
  LOBYTE(MEMORY[0xA8B258]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5295); /*0x52d1ad*/
  LOBYTE(MEMORY[0xA8B261]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5297); /*0x52d1b9*/
  MEMORY[0xA8B31E] = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5298); /*0x52d1c5*/
  LOBYTE(MEMORY[0xA8B31D]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5299); /*0x52d1d1*/
  LOBYTE(MEMORY[0xA8B26C]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5300); /*0x52d1dd*/
  LOBYTE(MEMORY[0xA8B31C]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5301); /*0x52d1e9*/
  LOBYTE(MEMORY[0xA8B262]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5302); /*0x52d1f5*/
  LOBYTE(MEMORY[0xA8B263]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5305); /*0x52d201*/
  LOBYTE(MEMORY[0xA8B264]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5306); /*0x52d20d*/
  LOBYTE(MEMORY[0xA8B31F]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5303); /*0x52d219*/
  LOBYTE(MEMORY[0xA8B320]) = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5304); /*0x52d22c*/
  CCFileClass::Construct(&v29, aLangruleIni); /*0x52d231*/
  if ( CCFileClass::Open(&v29, 0) == 1 ) /*0x52d245*/
  {
    INIClass::INIClass(aP1); /*0x52d24f*/
    v23 = 0; /*0x52d25b*/
    *(_DWORD *)aP1[0].__pad_0 = &CCINIClass_Vtable; /*0x52d267*/
    if ( CCINIClass::Load(aP1, &v29, 1, 0) > 1 ) /*0x52d277*/
    {
      HashTable::DestroyHashTableINIClass((void **)aP1); /*0x52d281*/
      *(_DWORD *)v29.__pad_0 = &CCFileClass::`vftable'; /*0x52d28d*/
      v31 = 0; /*0x52d294*/
      Vector::Clear((int)v30); /*0x52d29b*/
      *(_DWORD *)v29.__pad_0 = &off_7E1668; /*0x52d2a7*/
      BufferIOFileClass::Dtor(&v29); /*0x52d2ae*/
      *(_DWORD *)v26.__pad_0 = &CCFileClass::`vftable'; /*0x52d2ba*/
      v28 = 0; /*0x52d2c1*/
      Vector::Clear((int)v27); /*0x52d2c8*/
      *(_DWORD *)v26.__pad_0 = &off_7E1668; /*0x52d2d4*/
      BufferIOFileClass::Dtor(&v26); /*0x52d2db*/
      dwInitParam = (LPARAM)&VectorClass<CCINIClass *>::`vftable'; /*0x52d2e4*/
      if ( Src ) /*0x52d2ee*/
      {
        if ( v19 ) /*0x52d2f4*/
          __3_YAXPAX_Z(Src); /*0x52d2f7*/
      }
      return 0; /*0x52d30b*/
    }
    RulesClass::Addition(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]); /*0x52d317*/
    HashTable::DestroyHashTableINIClass((void **)aP1); /*0x52d320*/
  }
  v12 = 0; /*0x52d329*/
  if ( v20 > 0 ) /*0x52d32d*/
  {
    v13 = Src; /*0x52d32f*/
    do /*0x52d355*/
    {
      v14 = *(void (__thiscall ****)(_DWORD, int))&v13->__pad_0[4 * v12]; /*0x52d333*/
      if ( v14 != *(void (__thiscall ****)(_DWORD, int))&MEMORY[0x87F8E4].__pad_5568[8700] && v14 ) /*0x52d342*/
      {
        (**v14)(v14, 1); /*0x52d348*/
        v13 = Src; /*0x52d34a*/
      }
      ++v12; /*0x52d352*/
    }
    while ( v12 < v20 ); /*0x52d355*/
  }
  CCFileClass::Construct(&v32, aAimdIni); /*0x52d363*/
  CCINIClass::Load(&MEMORY[0x87F8E4].__pad_5568[8924], &v32, 1, 0); /*0x52d378*/
  *(_DWORD *)v32.__pad_0 = &CCFileClass::`vftable'; /*0x52d384*/
  v33[3] = 0; /*0x52d38b*/
  Vector::Clear((int)v33); /*0x52d392*/
  *(_DWORD *)v32.__pad_0 = &off_7E1668; /*0x52d39e*/
  BufferIOFileClass::Dtor(&v32); /*0x52d3a5*/
  *(_DWORD *)v29.__pad_0 = &CCFileClass::`vftable'; /*0x52d3b1*/
  v31 = 0; /*0x52d3b8*/
  Vector::Clear((int)v30); /*0x52d3bf*/
  *(_DWORD *)v29.__pad_0 = &off_7E1668; /*0x52d3cb*/
  BufferIOFileClass::Dtor(&v29); /*0x52d3d2*/
  *(_DWORD *)v26.__pad_0 = &CCFileClass::`vftable'; /*0x52d3de*/
  v28 = 0; /*0x52d3e5*/
  Vector::Clear((int)v27); /*0x52d3ec*/
  *(_DWORD *)v26.__pad_0 = &off_7E1668; /*0x52d3f8*/
  BufferIOFileClass::Dtor(&v26); /*0x52d3ff*/
  dwInitParam = (LPARAM)&VectorClass<CCINIClass *>::`vftable'; /*0x52d408*/
  if ( Src && v19 ) /*0x52d418*/
    __3_YAXPAX_Z(Src); /*0x52d41b*/
  return 1; /*0x52d028*/
}
}
} // namespace gamemd

// 0x52D430
namespace gamemd {
INT_PTR ReadModConfigINI(HWND hDlg, UINT a2, WPARAM a3, int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
INT_PTR __stdcall ReadModConfigINI(HWND hDlg, UINT a2, WPARAM a3, int *a4)
{
  HWND v5; // ebx
  int i; // esi
  HWND DlgItem; // eax
  INT_PTR v8; // eax
  char lParam[128]; // [esp+4h] [ebp-80h] BYREF

  if ( a2 > 0x110 ) /*0x52d440*/
  {
    if ( a2 == 273 ) /*0x52d516*/
    {
      if ( ((unsigned __int16)a3 == 2 || (unsigned __int16)a3 == 1188) && !HIWORD(a3) ) /*0x52d563*/
      {
        DlgItem = GetDlgItem(hDlg, 1187); /*0x52d575*/
        v8 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x52d585*/
        EndDialog(hDlg, v8); /*0x52d58d*/
        DestroyWindow(hDlg); /*0x52d594*/
      }
    }
    else if ( a2 == 534 ) /*0x52d51d*/
    {
      return (unsigned __int8)Window::ClampToScreen(a4); /*0x52d546*/
    }
    return 0; /*0x52d51d*/
  }
  if ( a2 != 272 ) /*0x52d446*/
  {
    if ( a2 == 83 ) /*0x52d44b*/
    {
      System_Read_776880((HWND *)a4); /*0x52d475*/
      return 0; /*0x52d483*/
    }
    if ( a2 == 123 ) /*0x52d450*/
    {
      System_Read_7768A0((HWND)a3); /*0x52d45d*/
      return 0; /*0x52d46b*/
    }
    return 0; /*0x52d59a*/
  }
  Dialog::RestoreParent(hDlg); /*0x52d492*/
  v5 = GetDlgItem(hDlg, 1187); /*0x52d4a9*/
  for ( i = 0; i < a4[4]; ++i ) /*0x52d4b9*/
  {
    INIClass::GetString( /*0x52d4da*/
      *(unsigned __int8 ****)(a4[1] + 4 * i),
      (unsigned __int8 *)g_INI_Key_General,
      (unsigned __int8 *)MEMORY[0x817854],
      &MEMORY[0x889F64],
      lParam,
      128);
    SendMessageA(v5, 0x180u, 0, (LPARAM)lParam); /*0x52d4ec*/
  }
  SendMessageA(v5, 0x186u, 0, 0); /*0x52d500*/
  return 0; /*0x52d464*/
}
}
} // namespace gamemd

// 0x52D610
namespace gamemd {
void nullsub_148()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_148()
{
  ; /*0x52d610*/
}
}
} // namespace gamemd

// 0x52D620
namespace gamemd {
void nullsub_149()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_149()
{
  ; /*0x52d620*/
}
}
} // namespace gamemd

// 0x52D630
namespace gamemd {
void nullsub_150()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_150()
{
  ; /*0x52d630*/
}
}
} // namespace gamemd

// 0x52D790
namespace gamemd {
int sub_52D790(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_52D790(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND DlgItem; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x52d7a9*/
  if ( result ) /*0x52d7b0*/
    return result; /*0x52d7b0*/
  WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x52d7b9*/
  if ( a2 == 15 ) /*0x52d7c2*/
  {
    DlgItem = GetDlgItem(hWnd, 1818); /*0x52d82a*/
    SendMessageA(DlgItem, 0x4F0u, 0, 0); /*0x52d83a*/
    return 0; /*0x52d83a*/
  }
  if ( a2 != 273 ) /*0x52d7ca*/
    return 0; /*0x52d840*/
  switch ( (__int16)a3 ) /*0x52d7e5*/
  {
    case 1670: /*0x52d7e5*/
      *WindowLongA = 18; /*0x52d817*/
      result = 0; /*0x52d81e*/
      break; /*0x52d821*/
    case 1677: /*0x52d7e5*/
      *WindowLongA = 13; /*0x52d7ed*/
      result = 0; /*0x52d7f4*/
      break; /*0x52d7f7*/
    case 1678: /*0x52d7e5*/
      *WindowLongA = 14; /*0x52d7fb*/
      result = 0; /*0x52d802*/
      break; /*0x52d805*/
    case 1679: /*0x52d7e5*/
      *WindowLongA = 15; /*0x52d809*/
      result = 0; /*0x52d810*/
      break; /*0x52d813*/
    default:
      return 0;
  }
  return result; /*0x52d7ec*/
}
}
} // namespace gamemd

// 0x52D870
namespace gamemd {
int sub_52D870(HWND hDlg, unsigned int a2, unsigned int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_52D870(HWND hDlg, unsigned int a2, unsigned int a3, unsigned int a4)
{
  HWND DlgItem; // esi
  int result; // eax
  _DWORD *WindowLongA; // eax
  LRESULT v7; // eax
  LRESULT v8; // eax
  bool v9; // [esp+13h] [ebp-1h]
  HWND hDlga; // [esp+18h] [ebp+4h]

  v9 = 0; /*0x52d87f*/
  DlgItem = GetDlgItem(hDlg, 1860); /*0x52d88a*/
  result = BaseDialogProc(hDlg, a2, a3, a4); /*0x52d89e*/
  if ( !result ) /*0x52d8a5*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hDlg, 8); /*0x52d8ae*/
    hDlga = (HWND)WindowLongA; /*0x52d8c2*/
    if ( a2 == 273 ) /*0x52d8c6*/
    {
      if ( (unsigned __int16)a3 == 1670 ) /*0x52d92b*/
      {
        if ( WindowLongA ) /*0x52d94c*/
          *WindowLongA = -1; /*0x52d94e*/
      }
      else if ( (unsigned __int16)a3 == 1860 ) /*0x52d932*/
      {
        v9 = HIWORD(a3) == 0; /*0x52d943*/
      }
      else
      {
        v9 = (unsigned __int16)a3 == 1861; /*0x52d937*/
      }
    }
    else if ( a2 == 1175 ) /*0x52d8ce*/
    {
      if ( !DlgItem ) /*0x52d8d6*/
      {
        if ( WindowLongA ) /*0x52d909*/
        {
          *WindowLongA = -1; /*0x52d912*/
          return 0; /*0x52d91c*/
        }
        return 0; /*0x52d909*/
      }
      GameOptionsClass::PopulateMovieList(MEMORY[0xA8EB60], DlgItem); /*0x52d8de*/
      if ( SendMessageA(DlgItem, 0x186u, wParam, 0) == -1 ) /*0x52d8f7*/
        SendMessageA(DlgItem, 0x186u, 0, 0); /*0x52d903*/
    }
    if ( DlgItem ) /*0x52d956*/
    {
      if ( v9 ) /*0x52d95e*/
      {
        v7 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x52d96a*/
        wParam = v7; /*0x52d96f*/
        if ( v7 != -1 ) /*0x52d974*/
        {
          v8 = SendMessageA(DlgItem, 0x199u, v7, 0); /*0x52d97f*/
          if ( v8 ) /*0x52d983*/
          {
            if ( hDlga ) /*0x52d98b*/
              *(_DWORD *)hDlga = v8; /*0x52d98d*/
          }
        }
      }
    }
    return 0; /*0x52d98f*/
  }
  return result; /*0x52d90f*/
}
}
} // namespace gamemd

// 0x52D9A0
namespace gamemd {
char MenuSelect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char MenuSelect()
// {
//   Movie *v0; // eax
//   int v1; // edx
//   _DWORD *v2; // eax
//   int v3; // ecx
//   int v4; // edx
//   int v5; // edx
//   int j; // edi
//   int i; // eax
//   int v8; // edx
//   LONG esi12; // esi
//   Movie *v9; // eax
//   void (__thiscall ***v11)(_DWORD, int); // ecx
//   Movie *eax34; // eax
//   Movie *v12; // eax
//   wchar_t *StringCSF; // esi
//   wchar_t *v15; // ebp
//   LONG v16; // eax
//   IUnknown *v17; // eax
//   Movie *v18; // eax
//   HWND Dialog; // eax
//   unsigned __int64 v20; // rax
//   Frame *v21; // ecx
//   __int64 v22; // rax
//   unsigned __int64 v23; // rax
//   _DWORD *Options; // eax
//   char v25; // bl
//   int *p_visibilityFlags; // eax
//   char v27; // al
//   int *v28; // eax
//   char v29; // bl
//   int v30; // eax
//   Movie *v31; // eax
//   int *v32; // eax
//   _DWORD *v33; // eax
//   IPXInterfaceClass *v36; // eax
//   wchar_t *v35; // eax
//   Frame *ecx152; // ecx
//   int v37; // eax
//   int v38; // esi
//   DWORD Ticks; // ecx
//   int v40; // esi
//   int v41; // edi
//   int v42; // esi
//   char result; // al
//   int v44; // eax
//   M... [39299 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x52F620
namespace gamemd {
char CommandLine_Parse(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall CommandLine_Parse(int a1, int a2)
{
  char **v4; // esi
  char *v5; // esi
  int v6; // eax
  int v7; // edi
  char *v8; // eax
  int *v9; // eax
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  int v12; // eax
  char *v13; // esi
  char v14; // al
  bool v15; // cc
  const wchar_t *v17; // eax
  const wchar_t *v18; // eax
  const wchar_t *v19; // eax
  const wchar_t *v20; // eax
  const wchar_t *v21; // eax
  const wchar_t *v22; // eax
  char v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h]
  char **v25; // [esp+18h] [ebp-20h]
  _BYTE v26[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v27; // [esp+20h] [ebp-18h]
  int v28; // [esp+24h] [ebp-14h] BYREF
  __int16 v29; // [esp+28h] [ebp-10h]

  v27 = a1; /*0x52f630*/
  ScenarioClass::ResetIntroFlags(&MEMORY[0xA8E960]); /*0x52f634*/
  MEMORY[0xA8ED6B] = 0; /*0x52f63e*/
  v24 = 1; /*0x52f644*/
  if ( a1 <= 1 ) /*0x52f64c*/
    return 1; /*0x52fb40*/
  v4 = (char **)(a2 + 4); /*0x52f652*/
  v25 = v4; /*0x52f65a*/
  while ( 1 ) /*0x52f666*/
  {
    v5 = _strupr(*v4); /*0x52f666*/
    if ( _strcmpi(MEMORY[0x8265E8], v5) ) /*0x52f66e*/
      break; /*0x52f66e*/
    RestartNetworkSession(1); /*0x52f67f*/
LABEL_64:
    v4 = v25 + 1; /*0x52fb17*/
    v15 = ++v24 < v27; /*0x52fb27*/
    ++v25; /*0x52fb2d*/
    if ( !v15 ) /*0x52fb31*/
      return 1; /*0x52fb31*/
  }
  if ( !_strcmpi(MEMORY[0x8265E0], v5) ) /*0x52f68f*/
  {
    ToggleNetworkSession(1); /*0x52f6a0*/
    goto LABEL_64; /*0x52f6a5*/
  }
  if ( !_strcmpi(MEMORY[0x8265D8], v5) ) /*0x52f6b0*/
  {
    ToggleNetworkSession(0); /*0x52f6be*/
    goto LABEL_64; /*0x52f6c3*/
  }
  if ( !_strcmpi(MEMORY[0x8265CC], v5) ) /*0x52f6ce*/
  {
    MEMORY[0x840A70] = 0; /*0x52f6da*/
    goto LABEL_64; /*0x52f6e0*/
  }
  if ( !_strcmpi(MEMORY[0x8265C4], v5) ) /*0x52f6eb*/
  {
    MEMORY[0xA8F784] = 1; /*0x52f6f7*/
    goto LABEL_64; /*0x52f701*/
  }
  if ( !_strcmpi(MEMORY[0x8265BC], v5) ) /*0x52f70c*/
  {
    MEMORY[0xA8F784] = 2; /*0x52f718*/
    goto LABEL_64; /*0x52f71e*/
  }
  if ( !_strcmpi(&MEMORY[0x8265B8], v5) /*0x52f76b*/
    || !_strcmpi(&MEMORY[0x8265B4], v5)
    || !_strcmpi(&MEMORY[0x8265B0], v5)
    || !_strcmpi(&MEMORY[0x8265AC], v5) )
  {
    v18 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0, (int)g_Str_File_Init_CPP, 3414); /*0x52fb7b*/
    _putws(v18); /*0x52fb81*/
    v19 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_0, (int)g_Str_File_Init_CPP, 3415); /*0x52fb9a*/
    _putws(v19); /*0x52fba0*/
    v20 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_1, (int)g_Str_File_Init_CPP, 3416); /*0x52fbb9*/
    _putws(v20); /*0x52fbbf*/
    v21 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_2, (int)g_Str_File_Init_CPP, 3417); /*0x52fbd8*/
    _putws(v21); /*0x52fbde*/
    v22 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_3, (int)g_Str_File_Init_CPP, 3418); /*0x52fbf7*/
    _putws(v22); /*0x52fbfd*/
    v17 = (const wchar_t *)GetStringCSF((wchar_t *)aTxtOptionHelp0_4, (int)g_Str_File_Init_CPP, 3419); /*0x52fc16*/
    goto LABEL_67; /*0x52fc16*/
  }
  if ( Checksummer::HashString(v5) == -648255326 ) /*0x52f787*/
  {
    v6 = MEMORY[0xA8E960]; /*0x52f789*/
    LOBYTE(v6) = MEMORY[0xA8E960] | 4; /*0x52f78e*/
    MEMORY[0xA8E960] = v6; /*0x52f790*/
    goto LABEL_64; /*0x52f795*/
  }
  if ( strstr(v5, MEMORY[0x8265A8]) ) /*0x52f7a0*/
  {
    MEMORY[0x89E3A0] = 1; /*0x52f7af*/
    Game::FindGameDirectoryCD(v5 + 3); /*0x52f7b6*/
    goto LABEL_64; /*0x52f7bb*/
  }
  if ( strstr(v5, MEMORY[0x82659C]) ) /*0x52f7c6*/
  {
    v7 = 0; /*0x52f7df*/
    v8 = strtok(v5 + 8, stru_826598); /*0x52f7e1*/
    if ( v8 ) /*0x52f7eb*/
    {
      do /*0x52f82c*/
      {
        sscanf(v8, MEMORY[0x825BD4], &v23); /*0x52f7fc*/
        if ( v7 >= 4 ) /*0x52f807*/
          *((_BYTE *)&v27 + v7) = v23; /*0x52f817*/
        else
          v26[v7] = v23; /*0x52f80d*/
        ++v7; /*0x52f821*/
        v8 = strtok(0, stru_826598); /*0x52f822*/
      }
      while ( v8 ); /*0x52f82c*/
      if ( v7 >= 4 ) /*0x52f831*/
      {
        v28 = -1; /*0x52f83e*/
        v29 = -1; /*0x52f847*/
        MEMORY[0xA8D5FC] = 1; /*0x52f852*/
        v9 = (int *)NetworkAddress::Assign(v26, &v28, 0); /*0x52f85c*/
        MEMORY[0xA8D600] = *v9; /*0x52f863*/
        MEMORY[0xA8D604] = v9[1]; /*0x52f86c*/
        MEMORY[0xA8D608] = v9[2]; /*0x52f875*/
      }
    }
    goto LABEL_64; /*0x52f87a*/
  }
  if ( strstr(v5, SubStr) ) /*0x52f885*/
  {
    v10 = atoi(&v5[strlen(aSocket_1)]) + 0x4000; /*0x52f8a8*/
    if ( v10 >= 0x4000 ) /*0x52f8b4*/
      Network::GetField(v10); /*0x52f8ca*/
    goto LABEL_64; /*0x52f8cf*/
  }
  SessionClass::SetInstance(0); /*0x52f8d6*/
  if ( strstr(v5, aMpdebug) ) /*0x52f8e1*/
  {
    byte_B04880 = 1; /*0x52f8ed*/
    MEMORY[0xA8B8B4] = 1; /*0x52f8f4*/
  }
  if ( strstr(v5, aDrop) ) /*0x52f901*/
  {
    v11 = atoi(&v5[strlen(aDrop)]); /*0x52f91f*/
    SessionClass::SetInstance(v11); /*0x52f92f*/
    goto LABEL_64; /*0x52f934*/
  }
  if ( strstr(v5, aSpeedcontrol) ) /*0x52f93f*/
    MEMORY[0xA8EDDC] = 1; /*0x52f94b*/
  if ( strstr(v5, aDlink1) ) /*0x52f958*/
    dword_B77E18 = 1; /*0x52f964*/
  if ( strstr(v5, aNetgear) ) /*0x52f974*/
    dword_B77E18 = 2; /*0x52f980*/
  if ( strstr(v5, aNorouter) ) /*0x52f98c*/
    MEMORY[0xA8E2C8] = 0; /*0x52f998*/
  if ( strstr(v5, aStealth) ) /*0x52f9a4*/
  {
    MEMORY[0xA8D60C] = 1; /*0x52f9b0*/
    goto LABEL_64; /*0x52f9b7*/
  }
  if ( strstr(v5, aMessages) ) /*0x52f9c2*/
  {
    MEMORY[0xA8D60D] = 0; /*0x52f9ce*/
    goto LABEL_64; /*0x52f9d4*/
  }
  if ( strstr(v5, aAttract) ) /*0x52f9df*/
  {
    v12 = MEMORY[0xA8D5F8]; /*0x52f9eb*/
    LOBYTE(v12) = MEMORY[0xA8D5F8] | 4; /*0x52f9f0*/
    MEMORY[0xA8D5F8] = v12; /*0x52f9f2*/
    goto LABEL_64; /*0x52f9f7*/
  }
  if ( isdigit(v5[1]) ) /*0x52fa01*/
  {
    sscanf(v5, "-%dX%d", &MEMORY[0xA8EB84], &MEMORY[0xA8EB88]); /*0x52fa1d*/
    goto LABEL_64; /*0x52fa25*/
  }
  if ( !strcmp(v5, a480) ) /*0x52fa37*/
  {
    MEMORY[0xA8EB88] = 480; /*0x52fa5c*/
    goto LABEL_64; /*0x52fa66*/
  }
  if ( !strcmp(v5, a16) ) /*0x52fa78*/
  {
    g_Is16BitMode = 1; /*0x52fa9d*/
    goto LABEL_64; /*0x52faa4*/
  }
  if ( !_strcmpi(v5, aWin) ) /*0x52faac*/
  {
    MEMORY[0x89F978] = 1; /*0x52fab8*/
    goto LABEL_64; /*0x52fabf*/
  }
  if ( _strnicmp(v5, asc_8264FC, strlen(aO)) ) /*0x52fad7*/
    goto LABEL_64; /*0x52fad7*/
  v13 = &v5[strlen(asc_8264FC)]; /*0x52faf0*/
  v14 = *v13; /*0x52faf2*/
  if ( !*v13 ) /*0x52faf2*/
    goto LABEL_64; /*0x52faf6*/
  while ( 1 ) /*0x52fafc*/
  {
    ++v13; /*0x52fafc*/
    if ( toupper(v14) != 81 ) /*0x52fb08*/
      break; /*0x52fb08*/
    MEMORY[0xA8ED64] = 1; /*0x52fb0a*/
    v14 = *v13; /*0x52fb11*/
    if ( !*v13 ) /*0x52fb11*/
      goto LABEL_64; /*0x52fb15*/
  }
  v17 = (const wchar_t *)GetStringCSF(aTxtInvalid, (int)g_Str_File_Init_CPP, 3732); /*0x52fb52*/
LABEL_67:
  _putws(v17); /*0x52fb57*/
  return 0; /*0x52fb37*/
}
}
} // namespace gamemd

// 0x52FC20
namespace gamemd {
int Random_Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Random_Init()
{
  DWORD TickCount; // eax
  int result; // eax
  struct _SYSTEMTIME SystemTime; // [esp+8h] [ebp-408h] BYREF
  _BYTE v3[1012]; // [esp+1Ch] [ebp-3F4h] BYREF

  Debug::Log(MEMORY[0x826600]); /*0x52fc2d*/
  if ( MEMORY[0xA8B8B8] || (MEMORY[0xA8D5F8] & 2) != 0 || UI_Update() ) /*0x52fc4f*/
  {
    SeedInitRNG(MEMORY[0xA8ED94]); /*0x52fe66*/
    qmemcpy((char *)MEMORY[0xA8B230] + 536, v3, 0x3F4u); /*0x52fe80*/
    SeedInitRNG(MEMORY[0xA8ED94]); /*0x52fe8d*/
    qmemcpy(&MEMORY[0x886B88], v3, 0x3F4u); /*0x52feab*/
    return Debug::Log(MEMORY[0x8265F0], MEMORY[0xA8ED94]); /*0x52fead*/
  }
  else
  {
    if ( !MEMORY[0xA8B238] || MEMORY[0xA8B238] == 5 ) /*0x52fc68*/
    {
      GetSystemTime(&SystemTime); /*0x52fc73*/
      Random::AdvanceRandomBytes(SystemTime.wMilliseconds); /*0x52fc83*/
      SHA1TickRNG(SystemTime.wSecond); /*0x52fc98*/
      SHA1TickRNG(SystemTime.wSecond >> 1); /*0x52fcae*/
      SHA1TickRNG(SystemTime.wSecond >> 2); /*0x52fcc6*/
      SHA1TickRNG(SystemTime.wSecond >> 3); /*0x52fcde*/
      SHA1TickRNG(SystemTime.wSecond >> 4); /*0x52fcf5*/
      SHA1TickRNG(SystemTime.wMinute); /*0x52fd0a*/
      SHA1TickRNG(SystemTime.wMinute >> 1); /*0x52fd21*/
      SHA1TickRNG(SystemTime.wMinute >> 2); /*0x52fd38*/
      SHA1TickRNG(SystemTime.wMinute >> 3); /*0x52fd50*/
      SHA1TickRNG(SystemTime.wMinute >> 4); /*0x52fd68*/
      SHA1TickRNG(SystemTime.wHour); /*0x52fd7c*/
      SHA1TickRNG(SystemTime.wDay); /*0x52fd91*/
      SHA1TickRNG(SystemTime.wDayOfWeek); /*0x52fda6*/
      SHA1TickRNG(SystemTime.wMonth); /*0x52fdba*/
      SHA1TickRNG(SystemTime.wYear); /*0x52fdcf*/
      TickCount = MEMORY[0xA8ED98]; /*0x52fdd4*/
      if ( !MEMORY[0xA8ED98] ) /*0x52fddb*/
      {
        RandomStraw::Release(&MEMORY[0xA8ED94], 4); /*0x52fde9*/
        TickCount = GetTickCount(); /*0x52fdee*/
      }
      MEMORY[0xA8ED94] = TickCount; /*0x52fdf4*/
    }
    Debug::Log(MEMORY[0x8265F0], MEMORY[0xA8ED94]); /*0x52fe05*/
    SeedInitRNG(MEMORY[0xA8ED94]); /*0x52fe17*/
    qmemcpy((char *)MEMORY[0xA8B230] + 536, v3, 0x3F4u); /*0x52fe31*/
    result = SeedInitRNG(MEMORY[0xA8ED94]); /*0x52fe3e*/
    qmemcpy(&MEMORY[0x886B88], v3, 0x3F4u); /*0x52fe51*/
  }
  return result; /*0x52fe53*/
}
}
} // namespace gamemd

// 0x52FFD0
namespace gamemd {
int sub_52FFD0(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_52FFD0(char a1)
{
  int result; // eax
  Frame *v3; // ecx

  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x88730C] + 24))(MEMORY[0x88730C], 0); /*0x52ffdd*/
  if ( a1 ) /*0x52ffe3*/
  {
    LOBYTE(v3) = 1; /*0x52ffed*/
    return Frame::Present(v3, 0); /*0x52ffef*/
  }
  return result; /*0x52ffe2*/
}
}
} // namespace gamemd
