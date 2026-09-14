// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4B0DF0_e4.hpp"
#include "e4/classes/E4Recv_4B4E10_e4.hpp"
#include "e4/classes/E4Recv_4B53E0_e4.hpp"
#include "e4/classes/E4Recv_4B56E0_e4.hpp"
#include "e4/classes/E4Recv_4B5780_e4.hpp"
#include "e4/classes/E4Recv_4B5830_e4.hpp"
#include "e4/classes/E4Recv_4B69E0_e4.hpp"
#include "e4/classes/E4Recv_4B6AB0_e4.hpp"
#include "e4/classes/E4Recv_4B6B80_e4.hpp"
#include "e4/classes/E4Recv_4B6BE0_e4.hpp"
#include "e4/classes/E4Recv_4B6BF0_e4.hpp"
#include "e4/classes/E4Recv_4BAFE0_e4.hpp"

// 0x4B0500
namespace gamemd {
char JumpjetLocomotionClass_Process(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass_Process(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int *v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // ecx
  _WORD *v13; // ebp
  _WORD *v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v17; // ecx
  _BYTE *v18; // ecx
  void **v19; // eax
  int *v20; // ecx
  int v21; // ecx
  _BYTE *v22; // eax
  int v23; // eax
  int v24; // ecx
  _DWORD *v25; // eax
  _BYTE *v26; // ecx
  _DWORD *v27; // ecx
  int v28; // eax
  char v29; // [esp-4h] [ebp-24h]
  int v30; // [esp+10h] [ebp-10h] BYREF
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+18h] [ebp-8h]

  v1 = a1; /*0x4b0506*/
  v2 = a1 - 4; /*0x4b0518*/
  v3 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 444))(*(_DWORD *)(a1 + 8)) + 284); /*0x4b0521*/
  v4 = *(_DWORD *)(v2 + 28); /*0x4b0523*/
  if ( v3 != v4 ) /*0x4b0528*/
  {
    *(_DWORD *)(v2 + 32) = v4; /*0x4b052a*/
    *(_DWORD *)(v2 + 28) = v3; /*0x4b0533*/
    Timer::Start(&v30, 3); /*0x4b0536*/
    *(_DWORD *)(v2 + 36) = v30; /*0x4b0547*/
    *(_DWORD *)(v2 + 40) = v31; /*0x4b054d*/
    *(_DWORD *)(v2 + 44) = v32; /*0x4b0554*/
    *(_DWORD *)(v2 + 48) = 3; /*0x4b0557*/
  }
  if ( *(_DWORD *)(v1 + 84) == -1 || !*(_BYTE *)(v1 + 95) ) /*0x4b056a*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1444); /*0x4b066f*/
    if ( v11 /*0x4b06ad*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 11
      && (v12 = *(_DWORD **)(v1 + 8),
          v13 = (_WORD *)(v12[361] + 36),
          v14 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v12 + 440))(v12, &a1),
          *v14 == *v13)
      && v14[1] == v13[1] )
    {
      v15 = *(_DWORD **)(v2 + 12); /*0x4b06af*/
      if ( !v15[358] ) /*0x4b06b2*/
        goto LABEL_27; /*0x4b06b8*/
    }
    else
    {
      v17 = *(_DWORD **)(v1 + 8); /*0x4b06d5*/
      if ( v17[43] != 5 /*0x4b0732*/
        || *(_BYTE *)(v1 + 95)
        || *(_DWORD *)(v1 + 48) == MEMORY[0x8A0790] && *(_QWORD *)(v1 + 52) == MEMORY[0x8A0794]
        || v17[39] != *(_DWORD *)(v1 + 48)
        || v17[40] != *(_DWORD *)(v1 + 52)
        || v17[41] != *(_DWORD *)(v1 + 56) )
      {
        if ( TimerClass::Active((int)(v17 + 226)) ) /*0x4b077b*/
        {
          *(_BYTE *)(v1 + 94) = 1; /*0x4b0788*/
          goto LABEL_39; /*0x4b0788*/
        }
        if ( *(_BYTE *)(v1 + 94) ) /*0x4b0896*/
        {
          *(_BYTE *)(v1 + 94) = 0; /*0x4b089b*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v1 + 8) + 396))(*(_DWORD *)(v1 + 8), 0); /*0x4b08a4*/
          v22 = *(_BYTE **)(v1 + 8); /*0x4b08aa*/
          if ( !v22[144] || v22[129] || v22[141] ) /*0x4b08bd*/
            return 0; /*0x4b08ce*/
        }
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 5 /*0x4b08fd*/
          && !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 16 )
        {
          goto LABEL_39; /*0x4b08fd*/
        }
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1) ) /*0x4b0906*/
        {
          v23 = *(_DWORD *)(v1 + 8); /*0x4b0911*/
          if ( *(_DWORD *)(v23 + 1504) == -1 ) /*0x4b091b*/
          {
            if ( *(_BYTE *)(v23 + 973) ) /*0x4b0921*/
            {
              if ( *(_DWORD *)(v2 + 64) != MEMORY[0x8A0790] || *(_QWORD *)(v2 + 68) != MEMORY[0x8A0794] ) /*0x4b0940*/
              {
                *(_DWORD *)(v2 + 64) = MEMORY[0x8A0790]; /*0x4b094f*/
                *(_QWORD *)(v2 + 68) = MEMORY[0x8A0794]; /*0x4b0957*/
                *(_BYTE *)(v2 + 99) = 0; /*0x4b0963*/
              }
              *(_DWORD *)(v1 + 76) = 0; /*0x4b0966*/
              *(_DWORD *)(v1 + 80) = 0; /*0x4b0969*/
            }
            else
            {
              v24 = *(_DWORD *)(v23 + 1444); /*0x4b0971*/
              if ( v24 ) /*0x4b0979*/
              {
                v25 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v24 + 76))( /*0x4b0987*/
                                  v24,
                                  &v30,
                                  *(_DWORD *)(v1 + 8));
                (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1 + 68))(v1, *v25, v25[1], v25[2]); /*0x4b09a3*/
              }
            }
            goto LABEL_39; /*0x4b096c*/
          }
        }
        v26 = *(_BYTE **)(v1 + 8); /*0x4b09ab*/
        if ( v26[981] /*0x4b09e2*/
          && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v26 + 388))(v26) != 7
          && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(v1 + 8) + 716))(
                *(_DWORD *)(v1 + 8),
                v1 + 48) )
        {
          if ( *(_DWORD *)(v2 + 64) != MEMORY[0x8A0790] || *(_QWORD *)(v2 + 68) != MEMORY[0x8A0794] ) /*0x4b0a03*/
          {
            *(_DWORD *)(v2 + 64) = MEMORY[0x8A0790]; /*0x4b0a12*/
            *(_QWORD *)(v2 + 68) = MEMORY[0x8A0794]; /*0x4b0a1a*/
            *(_BYTE *)(v2 + 99) = 0; /*0x4b0a26*/
          }
          v27 = *(_DWORD **)(v2 + 12); /*0x4b0a29*/
          if ( v27[358] ) /*0x4b0a2c*/
          {
            FootClass::ClearPathIndex(v27); /*0x4b0a44*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))( /*0x4b0a51*/
                   *(_DWORD *)(v2 + 12),
                   0,
                   1) )
            {
              return 0; /*0x4b0a68*/
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v27 + 1152))(v27, 0, 1); /*0x4b0a39*/
          }
          goto LABEL_39; /*0x4b0a3f*/
        }
        LOBYTE(a1) = 0; /*0x4b0a75*/
        JumpjetLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x4b0a79*/
        if ( (_BYTE)a1 ) /*0x4b0a82*/
          return 0; /*0x4b0a8d*/
        if ( !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x4b0a93*/
          return 0; /*0x4b0aa4*/
        v29 = 0; /*0x4b0aa7*/
        goto LABEL_87; /*0x4b0aa7*/
      }
      v15 = *(_DWORD **)(v2 + 12); /*0x4b0734*/
      if ( !v15[358] ) /*0x4b073d*/
      {
LABEL_27:
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v15 + 1152))(v15, 0, 1); /*0x4b06be*/
        return 0; /*0x4b06d2*/
      }
    }
    FootClass::ClearPathIndex(v15); /*0x4b0756*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))(*(_DWORD *)(v2 + 12), 0, 1); /*0x4b0763*/
    return 0; /*0x4b0772*/
  }
  if ( JumpjetLocomotion::ProcessCollision(v1 - 4, 0) || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x4b0586*/
    return 0; /*0x4b058c*/
  if ( *(_DWORD *)(v1 + 84) == -1 /*0x4b05c4*/
    && ((*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1) || *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1504) != -1)
    && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 44))(*(_DWORD *)(v1 + 8)) != 1
     || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 1745)) )
  {
    v5 = *(_DWORD *)(v1 + 8); /*0x4b05d0*/
    LOBYTE(a1) = 0; /*0x4b05d3*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 1 ) /*0x4b05df*/
    {
      v6 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1444); /*0x4b05e4*/
      if ( v6 ) /*0x4b05ec*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 15 ) /*0x4b05f6*/
        {
          v7 = (int *)(*(int (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(*(_DWORD *)(v1 + 8) + 1444) + 76))( /*0x4b060f*/
                        *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1444),
                        &v30,
                        *(_DWORD *)(v1 + 8));
          v8 = *v7; /*0x4b0611*/
          v9 = v7[1]; /*0x4b0615*/
          v10 = v7[2]; /*0x4b0618*/
          if ( v8 != *(_DWORD *)(v1 + 48) || v9 != *(_DWORD *)(v1 + 52) || v10 != *(_DWORD *)(v1 + 56) ) /*0x4b0625*/
            (*(void (__stdcall **)(int, int, int, int))(*(_DWORD *)v1 + 68))(v1, v8, v9, v10); /*0x4b0638*/
        }
      }
    }
    JumpjetLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x4b0647*/
    if ( (_BYTE)a1 || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x4b0659*/
      return 0; /*0x4b065f*/
    v29 = 1; /*0x4b0665*/
LABEL_87:
    JumpjetLocomotion::ProcessCollision(v1 - 4, v29); /*0x4b0aa8*/
    v28 = *(_DWORD *)(v1 + 8); /*0x4b0aaf*/
    if ( !v28 || !*(_BYTE *)(v28 + 144) ) /*0x4b0ab6*/
      return 0; /*0x4b0ac5*/
  }
LABEL_39:
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 128))(v1) ) /*0x4b078f*/
  {
    if ( !((int)MEMORY[0xA8ED84] % 10) ) /*0x4b07a8*/
    {
      v18 = *(_BYTE **)(v1 + 8); /*0x4b07ae*/
      if ( !v18[140] && *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 444))(v18) + 236) == 2 ) /*0x4b07c8*/
      {
        if ( MEMORY[0x8871E0]->InfantryBrute ) /*0x4b07cf*/
        {
          v19 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b07dc*/
          if ( v19 ) /*0x4b07e6*/
          {
            v20 = (int *)(*(_DWORD *)(v1 + 8) + 156); /*0x4b07ec*/
            v30 = *v20; /*0x4b07fd*/
            v31 = v20[1]; /*0x4b0804*/
            v32 = v20[2]; /*0x4b0810*/
            AnimClass::ctor(v19, (void *)MEMORY[0x8871E0]->InfantryBrute, &v30, 0, 1, (void *)0x600, 0, 0); /*0x4b0823*/
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(v1 + 48) == MEMORY[0x8A0790] /*0x4b0856*/
    && *(_DWORD *)(v1 + 52) == (_DWORD)MEMORY[0x8A0794]
    && *(_QWORD *)(v1 + 56) == __PAIR64__(MEMORY[0x8A0790], HIDWORD(MEMORY[0x8A0794]))
    && *(_QWORD *)(v1 + 64) == MEMORY[0x8A0794] )
  {
    v21 = *(_DWORD *)(v1 + 8); /*0x4b085d*/
    if ( *(_DWORD *)(v21 + 1504) == -1 && *(double *)(v21 + 1400) > 0.0 ) /*0x4b087a*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v21 + 1348))(v21, 0, 0); /*0x4b0880*/
  }
  return (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1); /*0x4b06cb*/
}
}
} // namespace gamemd

// 0x4B0DF0
namespace gamemd {
char E4Recv_4B0DF0::sub_4B0DF0(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4B0DF0(int this, IUnknown *aP1)
{
  int v2; // eax
  int *v4; // edi
  TechnoClass *v5; // eax
  IUnknown *v6; // eax
  _DWORD *v7; // eax
  AbstractClass *v9; // [esp-4h] [ebp-10h]

  v2 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]; /*0x4b0df1*/
  v4 = (int *)(this + 64); /*0x4b0dfd*/
  if ( this->M64 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772] /*0x4b0e1c*/
    || this->M68 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
    || this->M72 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
  {
    *v4 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]; /*0x4b0e20*/
    this->M68 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]; /*0x4b0e28*/
    v5 = *(TechnoClass **)&MEMORY[0x89F690].__pad_DFC[780]; /*0x4b0e2b*/
    *(_BYTE *)(this + 99) = 0; /*0x4b0e30*/
    this->M72 = v5; /*0x4b0e34*/
    v2 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]; /*0x4b0e37*/
  }
  if ( aP1->field_0 != v2 /*0x4b0e5d*/
    || aP1->field_4 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
    || aP1->field_8 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
  {
    *v4 = aP1->field_0; /*0x4b0e65*/
    this->M68 = aP1->field_4; /*0x4b0e6a*/
    v6 = (IUnknown *)aP1->field_8; /*0x4b0e6d*/
    *(_BYTE *)(this + 99) = 1; /*0x4b0e70*/
    this->M72 = v6; /*0x4b0e74*/
    v9 = *(AbstractClass **)(this + 12); /*0x4b0e7a*/
    v7 = Coord::To_Cell(&MEMORY[0x87F7E8], aP1); /*0x4b0e81*/
    if ( CrateClass::ProcessPickup(v7, v9) && !*(_BYTE *)(this->M12 + 129) ) /*0x4b0e94*/
    {
      JumpjetLocomotion::MoveTo(this, aP1, 1); /*0x4b0ea3*/
      return 1; /*0x4b0ead*/
    }
    if ( *(_BYTE *)(this->M12 + 144) ) /*0x4b0eb3*/
    {
      *v4 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]; /*0x4b0ec3*/
      this->M68 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]; /*0x4b0ecb*/
      this->M72 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780]; /*0x4b0ed3*/
      *(_BYTE *)(this + 99) = 0; /*0x4b0ed6*/
    }
  }
  return 0; /*0x4b0ea8*/
}
}
} // namespace gamemd

// 0x4B4E10
namespace gamemd {
DropListClass * E4Recv_4B4E10::sub_4B4E10(DropListClass * aP1, wchar_t * String, int a4, DropListClass * aP4, ControlClass * aP5, ControlClass * aP6, ControlClass * aP7, int a9, ListClass * a10, int a11)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DropListClass *__thiscall sub_4B4E10(
        int this,
        DropListClass *aP1,
        wchar_t *String,
        int a4,
        DropListClass *aP4,
        ControlClass *aP5,
        ControlClass *aP6,
        ControlClass *aP7,
        int a9,
        ListClass *a10,
        int a11)
{
  AbstractClass *Instance; // eax
  int v13; // edx

  sub_4C2FC0((int *)this, aP1, (ControlClass *)String, a4, aP4, aP5, aP6, aP7, 18, 7); /*0x4b4e3f*/
  *(_BYTE *)(this + 72) = 0; /*0x4b4e62*/
  this->M76 = a9; /*0x4b4e66*/
  ShapeButtonClass::Constructor((_BYTE *)(this + 80), 0, a11, (int)&aP5->__pad_0[(_DWORD)aP7], (int)aP6, 0, 0, 0); /*0x4b4e69*/
  ListClass::Construct( /*0x4b4ea3*/
    this + 176,
    0,
    (int)aP5,
    (int)&aP6->__pad_0[*(__int16 *)(a11 + 4)],
    (ListClass *)&aP7->__pad_0[*(__int16 *)(a11 + 2)],
    a9,
    (ControlClass *)aP4,
    a10,
    a11);
  *(_DWORD *)this = &vt_DropListClass; /*0x4b4eac*/
  Instance = TextRenderer::GetInstance(); /*0x4b4eb2*/
  v13 = this->M176; /*0x4b4eba*/
  this->M24 = Instance->referenceCount + 1; /*0x4b4ebf*/
  (*(void (__thiscall **)(int, int))(v13 + 132))(this + 176, this); /*0x4b4ec4*/
  (*(void (__thiscall **)(int, int))(this->M80 + 132))(this + 80, this); /*0x4b4ecf*/
  return (DropListClass *)this; /*0x4b4ed7*/
}
}
} // namespace gamemd

// 0x4B53E0
namespace gamemd {
int E4Recv_4B53E0::sub_4B53E0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4B53E0(int this, int a2)
{
  int v3; // eax

  ControlClass::CtorFromData((_DWORD *)this, a2); /*0x4b53eb*/
  this->M44 = *(_DWORD *)(a2 + 44); /*0x4b53f6*/
  this->M48 = *(_DWORD *)(a2 + 48); /*0x4b53fc*/
  this->M52 = *(_DWORD *)(a2 + 52); /*0x4b5402*/
  this->M56 = *(_DWORD *)(a2 + 56); /*0x4b5408*/
  this->M60 = *(_DWORD *)(a2 + 60); /*0x4b540e*/
  this->M64 = *(_DWORD *)(a2 + 64); /*0x4b5414*/
  this->M68 = *(_DWORD *)(a2 + 68); /*0x4b541a*/
  *(_DWORD *)this = &vt_EditClass; /*0x4b541d*/
  *(_BYTE *)(this + 72) = *(_BYTE *)(a2 + 72); /*0x4b5429*/
  this->M76 = *(_DWORD *)(a2 + 76); /*0x4b5432*/
  ControlClass::CtorFromData((_DWORD *)(this + 80), a2 + 80); /*0x4b5435*/
  *(_BYTE *)(this + 124) = *(_BYTE *)(a2 + 124); /*0x4b5443*/
  *(_BYTE *)(this + 125) = *(_BYTE *)(a2 + 125); /*0x4b5449*/
  this->M128 = *(_DWORD *)(a2 + 128); /*0x4b544f*/
  this->M80 = &vt_ToggleClass; /*0x4b5452*/
  *(_BYTE *)(this + 132) = *(_BYTE *)(a2 + 132); /*0x4b545c*/
  this->M136 = *(_DWORD *)(a2 + 136); /*0x4b5462*/
  this->M140 = *(_DWORD *)(a2 + 140); /*0x4b5468*/
  *(_BYTE *)(this + 144) = *(_BYTE *)(a2 + 144); /*0x4b546e*/
  this->M148 = *(_DWORD *)(a2 + 148); /*0x4b5474*/
  this->M152 = *(_DWORD *)(a2 + 152); /*0x4b547a*/
  *(_BYTE *)(this + 156) = *(_BYTE *)(a2 + 156); /*0x4b5480*/
  this->M160 = *(_DWORD *)(a2 + 160); /*0x4b5486*/
  *(_BYTE *)(this + 164) = *(_BYTE *)(a2 + 164); /*0x4b548c*/
  *(_BYTE *)(this + 165) = *(_BYTE *)(a2 + 165); /*0x4b5492*/
  this->M168 = *(_DWORD *)(a2 + 168); /*0x4b5498*/
  *(_BYTE *)(this + 172) = *(_BYTE *)(a2 + 172); /*0x4b54a4*/
  this->M80 = &vt_ShapeButtonClass; /*0x4b54a9*/
  sub_557380(this + 176, a2 + 176); /*0x4b54af*/
  v3 = this->M176; /*0x4b54b4*/
  *(_DWORD *)this = &vt_DropListClass; /*0x4b54b9*/
  (*(void (__thiscall **)(int, int))(v3 + 132))(this + 176, this); /*0x4b54bf*/
  (*(void (__thiscall **)(int, int))(this->M80 + 132))(this + 80, this); /*0x4b54ca*/
  return this; /*0x4b54d3*/
}
}
} // namespace gamemd

// 0x4B56E0
namespace gamemd {
int E4Recv_4B56E0::sub_4B56E0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4B56E0(int this, int a2)
{
  LinkedList::MoveNode((void *)this, (void *)a2); /*0x4b56e9*/
  this->M12 = *(_DWORD *)(a2 + 12); /*0x4b56f1*/
  this->M16 = *(_DWORD *)(a2 + 16); /*0x4b56f7*/
  this->M20 = *(_DWORD *)(a2 + 20); /*0x4b56fd*/
  this->M24 = *(_DWORD *)(a2 + 24); /*0x4b5703*/
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28); /*0x4b5709*/
  *(_BYTE *)(this + 29) = *(_BYTE *)(a2 + 29); /*0x4b570f*/
  *(_BYTE *)(this + 30) = *(_BYTE *)(a2 + 30); /*0x4b5715*/
  this->M32 = *(_DWORD *)(a2 + 32); /*0x4b571b*/
  this->M36 = *(_DWORD *)(a2 + 36); /*0x4b5721*/
  this->M40 = *(_DWORD *)(a2 + 40); /*0x4b5727*/
  *(_BYTE *)(this + 44) = *(_BYTE *)(a2 + 44); /*0x4b572d*/
  *(_BYTE *)(this + 45) = *(_BYTE *)(a2 + 45); /*0x4b5733*/
  *(_BYTE *)(this + 46) = *(_BYTE *)(a2 + 46); /*0x4b5739*/
  this->M48 = *(_DWORD *)(a2 + 48); /*0x4b573f*/
  this->M52 = *(_DWORD *)(a2 + 52); /*0x4b5745*/
  this->M56 = *(_DWORD *)(a2 + 56); /*0x4b574b*/
  this->M60 = *(_DWORD *)(a2 + 60); /*0x4b5751*/
  this->M64 = *(_DWORD *)(a2 + 64); /*0x4b5757*/
  *(_BYTE *)(this + 68) = *(_BYTE *)(a2 + 68); /*0x4b575d*/
  this->M72 = *(_DWORD *)(a2 + 72); /*0x4b5763*/
  this->M76 = *(_DWORD *)(a2 + 76); /*0x4b5769*/
  this->M80 = *(_DWORD *)(a2 + 80); /*0x4b576f*/
  return this; /*0x4b5774*/
}
}
} // namespace gamemd

// 0x4B5780
namespace gamemd {
int E4Recv_4B5780::sub_4B5780(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4B5780(int this, int a2)
{
  LinkedList::MoveNode((void *)this, (void *)a2); /*0x4b5789*/
  this->M12 = *(_DWORD *)(a2 + 12); /*0x4b5791*/
  this->M16 = *(_DWORD *)(a2 + 16); /*0x4b5797*/
  this->M20 = *(_DWORD *)(a2 + 20); /*0x4b579d*/
  this->M24 = *(_DWORD *)(a2 + 24); /*0x4b57a3*/
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28); /*0x4b57a9*/
  *(_BYTE *)(this + 29) = *(_BYTE *)(a2 + 29); /*0x4b57af*/
  *(_BYTE *)(this + 30) = *(_BYTE *)(a2 + 30); /*0x4b57b5*/
  this->M32 = *(_DWORD *)(a2 + 32); /*0x4b57bb*/
  return this; /*0x4b57c0*/
}
}
} // namespace gamemd

// 0x4B5830
namespace gamemd {
unsigned int * E4Recv_4B5830::sub_4B5830(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4B5830(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == a2 ) /*0x4b583a*/
    return this; /*0x4b583a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x4b583e*/
  v3 = a2[2]; /*0x4b5841*/
  *(this + 2) = v3; /*0x4b5846*/
  if ( !v3 ) /*0x4b5849*/
  {
    *(this + 1) = 0; /*0x4b588a*/
    *((_BYTE *)this + 13) = 0; /*0x4b5891*/
    return this; /*0x4b5895*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x4b5853*/
  *(this + 1) = v4; /*0x4b585b*/
  if ( !v4 ) /*0x4b5860*/
    return this; /*0x4b5860*/
  v5 = *(this + 2); /*0x4b5862*/
  v6 = 0; /*0x4b5865*/
  *((_BYTE *)this + 13) = 1; /*0x4b5869*/
  if ( v5 <= 0 ) /*0x4b586d*/
    return this; /*0x4b586d*/
  do /*0x4b5881*/
  {
    *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x4b5878*/
    ++v6; /*0x4b587e*/
  }
  while ( v6 < *(this + 2) ); /*0x4b5881*/
  return this; /*0x4b5885*/
}
}
} // namespace gamemd

// 0x4B69E0
namespace gamemd {
char E4Recv_4B69E0::sub_4B69E0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4B69E0(int *this, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // eax

  if ( *(this + 4) >= 5 ) /*0x4b69f1*/
    return 0; /*0x4b69f1*/
  v2 = *((_DWORD *)MEMORY[0xA8B230] + 3385); /*0x4b6a01*/
  if ( v2 ) /*0x4b6a09*/
  {
    v4 = 0; /*0x4b6a10*/
    if ( v2 > 0 ) /*0x4b6a14*/
    {
      while ( *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * v4) != a2 /*0x4b6a2c*/
           || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * v4) == -1 )
      {
        if ( ++v4 >= v2 ) /*0x4b6a31*/
        {
          v3 = -1; /*0x4b6a33*/
          goto LABEL_11; /*0x4b6a36*/
        }
      }
      v3 = v4; /*0x4b6a3b*/
      if ( v4 == -1 /*0x4b6a53*/
        || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v4) < *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389)
                                                                                  + 4 * v4) )
      {
        goto LABEL_11; /*0x4b6a53*/
      }
      return 0; /*0x4b6a9a*/
    }
  }
  v3 = -1; /*0x4b6a0b*/
LABEL_11:
  *(this + (*(this + 4))++ + 5) = a2; /*0x4b6a55*/
  *(this + 10) += (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 172))(a2); /*0x4b6a74*/
  if ( v3 != -1 ) /*0x4b6a77*/
    ++*(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v3); /*0x4b6a8b*/
  return 1; /*0x4b6a8d*/
}
}
} // namespace gamemd

// 0x4B6AB0
namespace gamemd {
char E4Recv_4B6AB0::sub_4B6AB0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4B6AB0(int *this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // eax

  v3 = *(this + 4); /*0x4b6ab4*/
  if ( v3 <= 0 || a2 < 0 || a2 >= v3 ) /*0x4b6acd*/
    return 0; /*0x4b6b72*/
  v4 = *((_DWORD *)MEMORY[0xA8B230] + 3385); /*0x4b6adb*/
  if ( v4 ) /*0x4b6ae3*/
  {
    v5 = 0; /*0x4b6ae5*/
    if ( v4 > 0 ) /*0x4b6ae9*/
    {
      while ( *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * v5) != *(this + a2 + 5) /*0x4b6b05*/
           || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * v5) == -1 )
      {
        if ( ++v5 >= *((_DWORD *)MEMORY[0xA8B230] + 3385) ) /*0x4b6b10*/
          goto LABEL_12; /*0x4b6b10*/
      }
      if ( v5 != -1 ) /*0x4b6b17*/
        --*(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3396) + 4 * v5); /*0x4b6b22*/
    }
  }
LABEL_12:
  v6 = *(this + 10) - (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + a2 + 5) + 172))(*(this + a2 + 5)); /*0x4b6b24*/
  v7 = *(this + 4) - 1; /*0x4b6b3c*/
  *(this + 10) = v6; /*0x4b6b3d*/
  v8 = a2; /*0x4b6b42*/
  if ( a2 < v7 ) /*0x4b6b44*/
  {
    v9 = this + a2 + 5; /*0x4b6b46*/
    do /*0x4b6b57*/
    {
      ++v8; /*0x4b6b4b*/
      *v9 = v9[1]; /*0x4b6b4c*/
      ++v9; /*0x4b6b51*/
    }
    while ( v8 < *(this + 4) - 1 ); /*0x4b6b57*/
  }
  v10 = *(this + 4) - 1; /*0x4b6b5d*/
  *(this + 4) = v10; /*0x4b6b5f*/
  *(this + v10 + 5) = 0; /*0x4b6b62*/
  return 1; /*0x4b6b6a*/
}
}
} // namespace gamemd

// 0x4B6B80
namespace gamemd {
char E4Recv_4B6B80::sub_4B6B80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4B6B80(int this)
{
  int v2; // edi
  char result; // al

  v2 = this->M16; /*0x4b6b87*/
  *(_BYTE *)(this + 12) = 0; /*0x4b6b8a*/
  if ( v2 > 0 ) /*0x4b6b8f*/
  {
    do /*0x4b6b9a*/
    {
      result = sub_4B6AB0((int *)this, 0); /*0x4b6b94*/
      --v2; /*0x4b6b99*/
    }
    while ( v2 ); /*0x4b6b9a*/
  }
  this->M16 = 0; /*0x4b6b9c*/
  this->M40 = 0; /*0x4b6b9f*/
  return result; /*0x4b6ba2*/
}
}
} // namespace gamemd

// 0x4B6BF0
namespace gamemd {
int E4Recv_4B6BF0::sub_4B6BF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4B6BF0(void *this)
{
  int v1; // edx
  int result; // eax

  v1 = *((_DWORD *)MEMORY[0xA8B230] + 3385); /*0x4b6bf9*/
  if ( !v1 ) /*0x4b6c01*/
    return -1; /*0x4b6c01*/
  result = 0; /*0x4b6c03*/
  if ( v1 <= 0 ) /*0x4b6c07*/
    return -1; /*0x4b6c25*/
  while ( *(void **)(*((_DWORD *)MEMORY[0xA8B230] + 3382) + 4 * result) != this /*0x4b6c1e*/
       || *(_DWORD *)(*((_DWORD *)MEMORY[0xA8B230] + 3389) + 4 * result) == -1 )
  {
    if ( ++result >= v1 ) /*0x4b6c23*/
      return -1; /*0x4b6c23*/
  }
  return result; /*0x4b6c28*/
}
}
} // namespace gamemd

// 0x4B9890
namespace gamemd {
char DisplayBuildingInfoPanel(CampaignScore ** a1, unsigned int * a2, wchar_t * a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall DisplayBuildingInfoPanel(CampaignScore **a1, _DWORD *a2, wchar_t *a3, char a4)
{
  CampaignScore *v6; // eax
  CampaignScore *v7; // edi
  int v8; // edi
  CampaignScore *v9; // ebx
  int v10; // eax
  IUnknown *v11; // eax
  AbstractClass *v12; // eax
  char result; // al
  const wchar_t *v14; // eax
  int AudioEntry; // eax
  int *p_nextArrayIndex; // ecx
  CampaignScore *BuildingAnimByName; // esi
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  int v22; // [esp-10h] [ebp-174h]
  int v23; // [esp-Ch] [ebp-170h]
  ObjectClass *v24; // [esp-Ch] [ebp-170h]
  int v25; // [esp-8h] [ebp-16Ch]
  ObjectClass *v26; // [esp-8h] [ebp-16Ch]
  int v27; // [esp-8h] [ebp-16Ch]
  ObjectClass *v28; // [esp-4h] [ebp-168h]
  int v29; // [esp-4h] [ebp-168h]
  int v30; // [esp-4h] [ebp-168h]
  CampaignScore *v31; // [esp+0h] [ebp-164h]
  CampaignScore *v32; // [esp+0h] [ebp-164h]
  CampaignScore *v33; // [esp+0h] [ebp-164h]
  CampaignScore *v34; // [esp+0h] [ebp-164h]
  ObjectClass *v35; // [esp+0h] [ebp-164h]
  int v36; // [esp+0h] [ebp-164h]
  int v37; // [esp+0h] [ebp-164h]
  CampaignScore *v38; // [esp+4h] [ebp-160h]
  int v39; // [esp+4h] [ebp-160h]
  int v40; // [esp+8h] [ebp-15Ch]
  int v41; // [esp+10h] [ebp-154h] BYREF
  ObjectClass aP5; // [esp+14h] [ebp-150h] BYREF
  wchar_t v43; // [esp+D8h] [ebp-8Ch] BYREF
  size_t v44[14]; // [esp+DCh] [ebp-88h] BYREF
  wchar_t Buffer[6]; // [esp+114h] [ebp-50h] BYREF
  size_t BufferCount[17]; // [esp+120h] [ebp-44h] BYREF

  aP5.referenceCount = 450; /*0x4b98a8*/
  v6 = *a1; /*0x4b98ac*/
  aP5.NeedsSaveOrLink = (void *)300; /*0x4b98b8*/
  aP5.objectTypeFlags = 190; /*0x4b98be*/
  aP5.owningHouseIndex = 80; /*0x4b98c2*/
  v7 = (CampaignScore *)((int (__thiscall *)(CampaignScore **))v6[3].CampaignScore_field_0x14)(a1); /*0x4b98d2*/
  v8 = ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 128))(*(_DWORD *)&stru_87C374.__pad_579C[22524]) /*0x4b98e7*/
      - (int)v7)
     / 2;
  v9 = (CampaignScore *)((int (__thiscall *)(CampaignScore **))(*a1)[3].CampaignScore_field_0x10)(a1); /*0x4b98f2*/
  v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 124))(*(_DWORD *)&stru_87C374.__pad_579C[22524]); /*0x4b98f6*/
  aP5.nextArrayIndex = 300; /*0x4b9903*/
  *(_DWORD *)&aP5.__pad_0[4] = (v10 - (int)v9) / 2; /*0x4b9909*/
  aP5.abstractFlags = 450; /*0x4b9912*/
  *(_DWORD *)&aP5.__pad_0[8] = v8; /*0x4b992b*/
  v11 = (IUnknown *)Coord2D::Add( /*0x4b992f*/
                      &aP5.abstractFlags,
                      (AbstractClass *)&aP5.__pad_0[12],
                      (AbstractClass *)&aP5.__pad_0[4]);
  v12 = Rect::Construct(aP5.ambientSoundController, v11, (AbstractClass *)0xBE, (AbstractClass *)0x50); /*0x4b9939*/
  aP5.fallRate = *(_DWORD *)v12->__pad_0; /*0x4b9942*/
  aP5.nextObject = *(void **)&v12->__pad_0[4]; /*0x4b994b*/
  aP5.attachedTag = *(void **)&v12->__pad_0[8]; /*0x4b9958*/
  aP5.attachedBomb = *(void **)&v12->__pad_0[12]; /*0x4b9963*/
  v41 = 0; /*0x4b9967*/
  *(_DWORD *)aP5.__pad_0 = 0; /*0x4b996b*/
  BuildingClass::GetSHPFrame(a2, 0); /*0x4b996f*/
  result = BlitterDrawSHP(*(IUnknown **)&stru_87C374.__pad_579C[22524]); /*0x4b998e*/
  if ( a3 ) /*0x4b999c*/
  {
    swprintf(Buffer, (const size_t)&off_8205BC, a3 + 50, v31); /*0x4b99b3*/
    if ( a4 ) /*0x4b99c4*/
    {
      v14 = (const wchar_t *)(*(int (__thiscall **)(wchar_t *))(*(_DWORD *)a3 + 172))(a3); /*0x4b99ca*/
      swprintf((wchar_t *const)&aP5.ambientSoundController[4], (const size_t)&off_8205A8, v14, v32); /*0x4b99db*/
    }
    else
    {
      swprintf( /*0x4b99ef*/
        (wchar_t *const)&aP5.ambientSoundController[4],
        (const size_t)&off_820594,
        (const wchar_t *const)v32,
        v38);
    }
    if ( *(_DWORD *)TechnoClass::GetWeaponSlot(a3, 0) ) /*0x4b99ff*/
    {
      AudioEntry = TechnoClass::GetWeaponSlot(a3, 0); /*0x4b9a06*/
      swprintf( /*0x4b9a1e*/
        (wchar_t *const)&aP5.isOnMap,
        (const size_t)&off_820578,
        (const wchar_t *const)(*(_DWORD *)AudioEntry + 100),
        v33);
    }
    else
    {
      swprintf((wchar_t *const)&aP5.isOnMap, (const size_t)&off_820558, (const wchar_t *const)v33, v38); /*0x4b9a35*/
    }
    swprintf( /*0x4b9a58*/
      &v43,
      (const size_t)&stru_820524.NeedsSaveOrLink,
      *((const wchar_t *const *)&off_7E5210 + *((_DWORD *)a3 + 39)),
      v34);
    p_nextArrayIndex = &stru_820524.nextArrayIndex; /*0x4b9a6e*/
    if ( !a4 ) /*0x4b9a73*/
      p_nextArrayIndex = &stru_820524.abstractFlags; /*0x4b9a75*/
    BuildingAnimByName = (CampaignScore *)FindBuildingAnimByName((AbstractClass *)p_nextArrayIndex, 1); /*0x4b9a87*/
    *(_DWORD *)aP5.__pad_0 = *(_DWORD *)&aP5.__pad_0[8] + 300; /*0x4b9a97*/
    v41 = *(_DWORD *)&aP5.__pad_0[4] + 450; /*0x4b9aa8*/
    v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *, int *, CampaignScore *, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x4b9ab3*/
                                                                                         + 120))(
                      *(_DWORD *)&stru_87C374.__pad_579C[22524],
                      aP5.ambientSoundController,
                      &v41,
                      BuildingAnimByName,
                      0);
    TextRenderer::DrawText( /*0x4b9aca*/
      &aP5.nextArrayIndex,
      (size_t)BufferCount,
      *(IUnknown **)&stru_87C374.__pad_579C[22524],
      v18,
      70,
      v35,
      (int)v38,
      v40);
    *(_DWORD *)&aP5.__pad_0[12] = aP5.abstractFlags + 315; /*0x4b9ae0*/
    *(_DWORD *)&aP5.__pad_0[8] = aP5.uniqueId + 450; /*0x4b9af8*/
    v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *, char *, CampaignScore *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x4b9b03*/
                                                                                               + 120))(
                      *(_DWORD *)&stru_87C374.__pad_579C[22524],
                      &aP5.ambientSoundController[3],
                      &aP5.__pad_0[8],
                      BuildingAnimByName,
                      0,
                      70);
    TextRenderer::DrawText( /*0x4b9b1a*/
      &aP5.abstractFlags,
      (size_t)&aP5.visibilityFlags,
      *(IUnknown **)&stru_87C374.__pad_579C[22524],
      v19,
      v25,
      v28,
      v36,
      v39);
    *(_DWORD *)&aP5.__pad_0[8] = aP5.uniqueId + 330; /*0x4b9b30*/
    *(_DWORD *)&aP5.__pad_0[4] = *(_DWORD *)&aP5.__pad_0[12] + 450; /*0x4b9b48*/
    v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *, char *, CampaignScore *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] /*0x4b9b53*/
                                                                                               + 120))(
                      *(_DWORD *)&stru_87C374.__pad_579C[22524],
                      &aP5.ambientSoundController[2],
                      &aP5.__pad_0[4],
                      BuildingAnimByName,
                      0,
                      70);
    TextRenderer::DrawText( /*0x4b9b6a*/
      &aP5.uniqueId,
      (size_t)v44,
      *(IUnknown **)&stru_87C374.__pad_579C[22524],
      v20,
      v23,
      v26,
      v29,
      v37);
    *(_DWORD *)&aP5.__pad_0[4] = *(_DWORD *)&aP5.__pad_0[12] + 345; /*0x4b9b87*/
    *(_DWORD *)aP5.__pad_0 = *(_DWORD *)&aP5.__pad_0[8] + 450; /*0x4b9b98*/
    v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *, ObjectClass *, CampaignScore *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 120))( /*0x4b9ba3*/
                      *(_DWORD *)&stru_87C374.__pad_579C[22524],
                      &aP5.ambientSoundController[1],
                      &aP5,
                      BuildingAnimByName,
                      0,
                      70);
    return (unsigned __int8)TextRenderer::DrawText( /*0x4b9bb7*/
                              (int *)&aP5.__pad_0[12],
                              (size_t)&aP5.ambientSoundController[4],
                              *(IUnknown **)&stru_87C374.__pad_579C[22524],
                              v21,
                              v22,
                              v24,
                              v27,
                              v30);
  }
  return result; /*0x4b9bbf*/
}
}
} // namespace gamemd

// 0x4BE9D0
namespace gamemd {
int Color_BlendPack(unsigned char * a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Color_BlendPack(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  bool v9; // cc

  v4 = a2 + *a1; /*0x4be9dc*/
  v5 = a3 + a1[1]; /*0x4be9ec*/
  v6 = a4 + a1[2]; /*0x4be9ee*/
  v7 = 0; /*0x4be9f0*/
  v8 = 0; /*0x4be9f2*/
  if ( v4 >= 255 ) /*0x4be9fa*/
  {
    v8 = 1; /*0x4be9fc*/
    v7 = v4 - 255; /*0x4bea01*/
  }
  if ( v5 >= 255 ) /*0x4bea0d*/
  {
    ++v8; /*0x4bea0f*/
    v7 = v7 + v5 - 255; /*0x4bea10*/
  }
  if ( v6 >= 255 ) /*0x4bea1c*/
  {
    ++v8; /*0x4bea1e*/
    v7 = v7 + v6 - 255; /*0x4bea1f*/
  }
  if ( !v8 || v8 >= 3 ) /*0x4bea2d*/
    goto LABEL_17; /*0x4bea2d*/
  if ( v8 == 1 ) /*0x4bea32*/
    v7 >>= 1; /*0x4bea34*/
  if ( v4 < 255 ) /*0x4bea3c*/
    v4 += v7; /*0x4bea3e*/
  if ( v5 < 255 ) /*0x4bea46*/
    v5 += v7; /*0x4bea48*/
  v9 = v6 <= 255; /*0x4bea4a*/
  if ( v6 < 255 ) /*0x4bea4f*/
  {
    v6 += v7; /*0x4bea51*/
LABEL_17:
    v9 = v6 <= 255; /*0x4bea53*/
  }
  if ( !v9 ) /*0x4bea58*/
    v6 = 255; /*0x4bea5a*/
  if ( v5 > 255 ) /*0x4bea65*/
    v5 = 255; /*0x4bea67*/
  if ( v4 > 255 ) /*0x4bea72*/
    v4 = 255; /*0x4bea74*/
  return (v4 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4bea7f*/
       | (v5 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
       | (v6 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
}
}
} // namespace gamemd

// 0x4B4770
namespace gamemd {
void nullsub_118()
{
  ;
}
} // namespace gamemd

// 0x4B4DF0
namespace gamemd {
int sub_4B4DF0()
{
{
    DataGlobal_8A07D8 = 0;
    DataGlobal_8A07DC = 0;
    DataGlobal_8A07E0 = 0;
    DataGlobal_8A07E4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4B58A0
namespace gamemd {
void sub_4B58A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A0808 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4B58D0
namespace gamemd {
void sub_4B58D0()
{
{
    DataGlobal_8A0858 = DataGlobal_8A0808 / 60.0;
}
}
} // namespace gamemd

// 0x4B58F0
namespace gamemd {
void sub_4B58F0()
{
{
    DataGlobal_8A0840 = 1.0 / DataGlobal_8A0858;
}
}
} // namespace gamemd

// 0x4B5910
namespace gamemd {
void sub_4B5910()
{
{
    DataGlobal_8A0838 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4B5930
namespace gamemd {
void sub_4B5930()
{
{
    DataGlobal_8A0810 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4B5950
namespace gamemd {
void sub_4B5950()
{
{
    DataGlobal_8A07E8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4B5970
namespace gamemd {
long long sub_4B5970()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A07E8 - DataGlobal_8A0810);
    result = Math::RoundToInt(v0 * DataGlobal_8A0808 * 0.5);
    DataGlobal_8A0860 = result;
    return result;
}
}
} // namespace gamemd

// 0x4B59B0
namespace gamemd {
void sub_4B59B0()
{
{
    DataGlobal_8A0818 = Math::ArcTan((double)DataGlobal_8A0860 * 0.00390625);
}
}
} // namespace gamemd

// 0x4B59E0
namespace gamemd {
void sub_4B59E0()
{
{
    DataGlobal_8A0830 = Math::ArcTan((double)(2 * DataGlobal_8A0860) / DataGlobal_8A0808);
}
}
} // namespace gamemd

// 0x4B5A10
namespace gamemd {
long long sub_4B5A10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A0860) + 0.5);
    DataGlobal_8A0854 = result;
    return result;
}
}
} // namespace gamemd

// 0x4B5A40
namespace gamemd {
int sub_4B5A40()
{
{
    DataGlobal_8A0800 = 0;
    DataGlobal_8A0802 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4B5A50
namespace gamemd {
int sub_4B5A50()
{
{
    DataGlobal_8A0820 = 0;
    DataGlobal_8A0824 = 0;
    DataGlobal_8A0828 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4B5A70
namespace gamemd {
int sub_4B5A70()
{
{
    DataGlobal_8A0850 = 0;
    DataGlobal_8A0848 = 128;
    DataGlobal_8A084C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4B5A90
namespace gamemd {
int sub_4B5A90()
{
{
    DataGlobal_8A07F0 = 0;
    DataGlobal_8A07F4 = 0;
    DataGlobal_8A07F8 = 0;
    DataGlobal_8A07FC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4B67A0
namespace gamemd {
void sub_4B67A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A08A8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4B67D0
namespace gamemd {
void sub_4B67D0()
{
{
    DataGlobal_8A0918 = DataGlobal_8A08A8 / 60.0;
}
}
} // namespace gamemd

// 0x4B67F0
namespace gamemd {
void sub_4B67F0()
{
{
    DataGlobal_8A0900 = 1.0 / DataGlobal_8A0918;
}
}
} // namespace gamemd

// 0x4B6810
namespace gamemd {
void sub_4B6810()
{
{
    DataGlobal_8A08F8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4B6830
namespace gamemd {
void sub_4B6830()
{
{
    DataGlobal_8A08B0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4B6850
namespace gamemd {
void sub_4B6850()
{
{
    DataGlobal_8A0868 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4B6870
namespace gamemd {
long long sub_4B6870()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A0868 - DataGlobal_8A08B0);
    result = Math::RoundToInt(v0 * DataGlobal_8A08A8 * 0.5);
    DataGlobal_8A0920 = result;
    return result;
}
}
} // namespace gamemd

// 0x4B68B0
namespace gamemd {
void sub_4B68B0()
{
{
    DataGlobal_8A08B8 = Math::ArcTan((double)DataGlobal_8A0920 * 0.00390625);
}
}
} // namespace gamemd

// 0x4B68E0
namespace gamemd {
void sub_4B68E0()
{
{
    DataGlobal_8A08F0 = Math::ArcTan((double)(2 * DataGlobal_8A0920) / DataGlobal_8A08A8);
}
}
} // namespace gamemd

// 0x4B6910
namespace gamemd {
long long sub_4B6910()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A0920) + 0.5);
    DataGlobal_8A0914 = result;
    return result;
}
}
} // namespace gamemd

// 0x4B6940
namespace gamemd {
int sub_4B6940()
{
{
    DataGlobal_8A08A0 = 0;
    DataGlobal_8A08A2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4B6950
namespace gamemd {
int sub_4B6950()
{
{
    DataGlobal_8A08E0 = 0;
    DataGlobal_8A08E4 = 0;
    DataGlobal_8A08E8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4B6970
namespace gamemd {
int sub_4B6970()
{
{
    DataGlobal_8A0910 = 0;
    DataGlobal_8A0908 = 128;
    DataGlobal_8A090C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4B6990
namespace gamemd {
int sub_4B6990()
{
{
    DataGlobal_8A0890 = 0;
    DataGlobal_8A0894 = 0;
    DataGlobal_8A0898 = 0;
    DataGlobal_8A089C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4B69D0
namespace gamemd {
void nullsub_126()
{
  ;
}
} // namespace gamemd

// 0x4B6BE0
namespace gamemd {
int E4Recv_4B6BE0::sub_4B6BE0(int a2)
{
{
    return *(this + a2 + 5);
}
}
} // namespace gamemd

// 0x4BA390
namespace gamemd {
int sub_4BA390()
{
{
    DataGlobal_8A0930 = 0;
    DataGlobal_8A0934 = 0;
    DataGlobal_8A0938 = 0;
    DataGlobal_8A093C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4BA3B0
namespace gamemd {
void sub_4BA3B0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A0968 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4BA3E0
namespace gamemd {
void sub_4BA3E0()
{
{
    DataGlobal_8A0DC0 = DataGlobal_8A0968 / 60.0;
}
}
} // namespace gamemd

// 0x4BA400
namespace gamemd {
void sub_4BA400()
{
{
    DataGlobal_8A0DA8 = 1.0 / DataGlobal_8A0DC0;
}
}
} // namespace gamemd

// 0x4BA420
namespace gamemd {
void sub_4BA420()
{
{
    DataGlobal_8A0DA0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4BA440
namespace gamemd {
void sub_4BA440()
{
{
    DataGlobal_8A0970 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4BA460
namespace gamemd {
void sub_4BA460()
{
{
    DataGlobal_8A0928 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4BA4C0
namespace gamemd {
void sub_4BA4C0()
{
{
    DataGlobal_8A0978 = Math::ArcTan((double)DataGlobal_8A0DC8 * 0.00390625);
}
}
} // namespace gamemd

// 0x4BA4F0
namespace gamemd {
void sub_4BA4F0()
{
{
    DataGlobal_8A0D98 = Math::ArcTan((double)(2 * DataGlobal_8A0DC8) / DataGlobal_8A0968);
}
}
} // namespace gamemd

// 0x4BA520
namespace gamemd {
long long sub_4BA520()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A0DC8) + 0.5);
    DataGlobal_8A0DBC = result;
    return result;
}
}
} // namespace gamemd

// 0x4BA550
namespace gamemd {
int sub_4BA550()
{
{
    DataGlobal_8A0940 = 0;
    DataGlobal_8A0942 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4BA560
namespace gamemd {
int sub_4BA560()
{
{
    DataGlobal_8A0D88 = 0;
    DataGlobal_8A0D8C = 0;
    DataGlobal_8A0D90 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4BA580
namespace gamemd {
int sub_4BA580()
{
{
    DataGlobal_8A0DB8 = 0;
    DataGlobal_8A0DB0 = 128;
    DataGlobal_8A0DB4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4BAFE0
namespace gamemd {
BOOL E4Recv_4BAFE0::sub_4BAFE0()
{
{
    int v1;
    v1 = this->M28;
    return v1 && (*(int (__stdcall **)(int))(*(int *)(v1) + 96))(v1) == -2005532222;
}
}
} // namespace gamemd

// 0x4BF650
namespace gamemd {
short BlendMinimapPixel(unsigned short a1, unsigned short a2, int a3)
{
{
    int v3;
    LOWORD(v3) = a1;
    switch ( a3 )
  {
    case 0: LOWORD(v3) = a2;
    break;
    case 25: v3 = 4 * (HIWORD(DataGlobal_8A0DE8) & (a1 >> 2));
    break;
    case 50: v3 = ((unsigned short)DataGlobal_8A0DE8 & (a2 >> 1)) + ((unsigned short)DataGlobal_8A0DE8 & (a1 >> 1));
    break;
    case 75: v3 = 4 * (HIWORD(DataGlobal_8A0DE8) & (a1 >> 2));
    break;
    default: return v3;
  }
    return v3;
}
}
} // namespace gamemd
