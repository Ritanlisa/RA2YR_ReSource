// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"

// 0x6A01A0
namespace gamemd {
char WalkLocomotion::MoveTo(IUnknown * aP1, int aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall WalkLocomotion::MoveTo(int this, IUnknown *aP1, int aP3)
{
  IUnknown *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  _DWORD v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = aP1; /*0x6a01a0*/
  if ( aP1->field_0 != MEMORY[0xB077F8].field_0 /*0x6a01ce*/
    || aP1->field_4 != MEMORY[0xB077F8].field_4
    || (v5 = aP1->field_8, v5 != MEMORY[0xB077F8].field_8) )
  {
    LOBYTE(v5) = *(_BYTE *)(this + 96); /*0x6a01d4*/
    v6 = aP3; /*0x6a01d7*/
    if ( !(_BYTE)v5 ) /*0x6a01dd*/
    {
      v5 = this->WalkLocomotion_field_0x58; /*0x6a01e3*/
      if ( v5 != -1 ) /*0x6a01e9*/
      {
        v5 = byte_7F2A40[12 * v5]; /*0x6a01f2*/
        if ( v5 ) /*0x6a01fc*/
        {
          v7 = 4 * v5; /*0x6a0202*/
          v8 = dword_7F2960[v7]; /*0x6a0205*/
          v5 = dword_7F296C[v7]; /*0x6a020b*/
          if ( v5 > -1 ) /*0x6a0214*/
          {
            v9 = (_DWORD *)(v8 + 12 * v5); /*0x6a021d*/
            aP3 = v9[2]; /*0x6a0223*/
            if ( *(_DWORD *)(this + 92) < v5 ) /*0x6a022c*/
            {
              v10 = v9[1]; /*0x6a0234*/
              v18[0] = *v9; /*0x6a0237*/
              v18[1] = v10; /*0x6a023f*/
              v5 = (int)WalkLocomotion::TransformCoords( /*0x6a0250*/
                          (_DWORD *)this,
                          (ObjectClass *)&v19,
                          (IUnknown *)v18,
                          (ObjectClass *)&aP3);
              v11 = *(_DWORD *)v5; /*0x6a0255*/
              v12 = *(_DWORD *)(v5 + 4); /*0x6a0259*/
              if ( !v6 ) /*0x6a025c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x6a0263*/
                v14 = *(_DWORD *)(this + 12); /*0x6a0269*/
                v19 = v11; /*0x6a026c*/
                v20 = v12; /*0x6a0270*/
                v21 = v13; /*0x6a0274*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x6a027f*/
                LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x6a028f*/
                               *(_DWORD *)(this + 12),
                               aP1);
                return v5; /*0x6a029c*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x6a02a7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x6a02ae*/
                v16 = *(_DWORD *)(this + 12); /*0x6a02b4*/
                v21 = v15; /*0x6a02b7*/
                v19 = v11; /*0x6a02bb*/
                v20 = v12; /*0x6a02bf*/
                LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x6a02ca*/
              }
              v3 = aP1; /*0x6a02d0*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x6a02d6*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x6a02f6*/
        LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 240))( /*0x6a02fe*/
                       *(_DWORD *)(this + 12),
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x6a02de*/
                     *(_DWORD *)(this + 12),
                     v3);
    }
  }
  return v5; /*0x6a0295*/
}
}
} // namespace gamemd

// 0x6A05F0
namespace gamemd {
char WalkLocomotion::ProcessCollision(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __thiscall WalkLocomotion::ProcessCollision(int this, char a2)
// {
//   int v3; // eax
//   int v4; // edx
//   bool v5; // al
//   int v6; // esi
//   int v7; // eax
//   _DWORD *v8; // esi
//   int v9; // edx
//   int v10; // esi
//   double v11; // st7
//   int v12; // eax
//   MouseClass *v13; // ecx
//   int v14; // esi
//   char v15; // bl
//   int v16; // edx
//   int v17; // eax
//   int v18; // eax
//   double v19; // st7
//   double v20; // st7
//   MouseClass *v21; // ecx
//   double v22; // st7
//   int v23; // eax
//   double v24; // st7
//   _DWORD *v25; // esi
//   int v26; // eax
//   MouseClass *v27; // ecx
//   int v28; // edx
//   int v29; // eax
//   int v30; // edx
//   int *v31; // esi
//   TechnoClass *v32; // eax
//   int v33; // edx
//   int v34; // ebx
//   int v35; // ecx
//   MouseClass *v36; // eax
//   int v37; // edx
//   _DWORD *v38; // eax
//   ObjectClass *Coords; // eax
//   _DWORD *v40; // ecx
//   int v41; // ecx
//   int GroundHeight; // esi
//   int v43; // ebx
//   char *v45; // esi
//   char v46; // dl
//   int v47; // edx
//   __int16 v48; // cx
//   int v49; // eax
//   IUnknown... [45824 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x6A1C80
namespace gamemd {
char WalkLocomotion::Update(unsigned char * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __thiscall WalkLocomotion_Update(int this, _BYTE *a2, int a3, int a4)
// {
//   int v5; // ecx
//   unsigned int v6; // ebx
//   int v7; // ecx
//   char v8; // al
//   char result; // al
//   int v10; // ecx
//   int v11; // ecx
//   _DWORD *v12; // eax
//   _DWORD *v13; // eax
//   int v14; // eax
//   int v15; // eax
//   wchar_t *v16; // edi
//   int v17; // edx
//   wchar_t **v18; // esi
//   int v19; // eax
//   wchar_t *v20; // eax
//   wchar_t *v21; // ecx
//   _DWORD *v22; // ebx
//   int v23; // ecx
//   char v24; // al
//   _DWORD *v25; // ecx
//   int v26; // ecx
//   _DWORD *v27; // eax
//   _DWORD *v28; // eax
//   _DWORD *v29; // ecx
//   _DWORD *Value; // edi
//   _DWORD *v31; // esi
//   int v32; // kr0C_4
//   unsigned int v33; // edx
//   _DWORD *v34; // eax
//   _BYTE *v35; // ecx
//   int v36; // edi
//   unsigned int v37; // esi
//   void *v38; // eax
//   int v39; // eax
//   int v40; // edx
//   _DWORD *v41; // edi
//   _DWORD *v42; // ecx
//   int v43; // esi
//   int GroundHeight; // eax
//   int ClosestObject; // eax
//   _DWORD *v46; // eax
//   _DWORD *v47; // eax
//   _DWORD *v48; //... [58004 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x6A3DB0
namespace gamemd {
unsigned int * WalkLocomotion::TransformCoords(ObjectClass * aP1, IUnknown * aP2, ObjectClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall WalkLocomotion::TransformCoords(_DWORD *this, ObjectClass *aP1, IUnknown *aP2, ObjectClass *aP3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // ecx

  v4 = *(_DWORD *)aP3->__pad_0; /*0x6a3dbd*/
  v5 = dword_7F2A48[3 * *(this + 22)]; /*0x6a3dc1*/
  v6 = aP2->field_0; /*0x6a3dcf*/
  v7 = aP2->field_4; /*0x6a3dd1*/
  if ( (v5 & 1) != 0 ) /*0x6a3dd4*/
  {
    v6 = aP2->field_4; /*0x6a3dd8*/
    v7 = aP2->field_0; /*0x6a3dda*/
    v4 = (unsigned __int8)(-64 - v4); /*0x6a3de9*/
  }
  if ( (v5 & 2) != 0 ) /*0x6a3dee*/
  {
    v6 = -v6; /*0x6a3df2*/
    v4 = (unsigned __int8)-(char)v4; /*0x6a3df4*/
  }
  if ( (v5 & 4) != 0 ) /*0x6a3dfc*/
  {
    v7 = -v7; /*0x6a3e05*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x6a3e0d*/
  }
  *(_DWORD *)aP3->__pad_0 = v4; /*0x6a3e0f*/
  v8 = *(this + 16); /*0x6a3e12*/
  v9 = *(this + 17); /*0x6a3e15*/
  *(_DWORD *)aP1->__pad_0 = v6 + v8; /*0x6a3e22*/
  *(_DWORD *)&aP1->__pad_0[4] = v7 + v9; /*0x6a3e25*/
  return aP1->__pad_0; /*0x6a3e20*/
}
}
} // namespace gamemd
