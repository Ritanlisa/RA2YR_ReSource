// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/GUID_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/BufferIO_e4.hpp"
#include "e4/classes/FontClass_e4.hpp"
#include "e4/classes/IPersistStream_e4.hpp"
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/COMObject_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x4D3590
namespace gamemd {
AbstractClass * FootClass::Destruct()
{

  int *team; // ecx
  int v3; // eax
  int v4; // eax
  ParasiteClass *parasiteImUsing; // ecx
  unsigned int *v6; // eax
  int v7; // eax
  void *v8; // eax
  void *v9; // eax
  FootClass *v11; // [esp+8h] [ebp-4h] BYREF

  team = (int *)this->team; /*0x4d3597*/
  this->vtable1 = &vt_FootClass; /*0x4d359d*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_FootClass); /*0x4d35a5*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_FootClass); /*0x4d35ac*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_FootClass); /*0x4d35b3*/
  if ( team && byte_A8E9A0 ) /*0x4d35c2*/
    ((TeamClass *)(team))->LiberateMember_Start( (void *)((int)this), 0xFFFFFFFF, 0); /*0x4d35c8*/
  v11 = this; /*0x4d35dd*/
  v3 = (*((int (**)(FootClass *, FootClass **))FootClass_Array.TechnoClass + 4))( (FootClass *)(&FootClass_Array), (FootClass **)(&v11)); /*0x4d35e1*/
  if ( v3 != -1 ) /*0x4d35e7*/
    ((FootClass *)&FootClass_Array)->RemoveFromPointerArray( v3); /*0x4d35ef*/
  v11 = this; /*0x4d3604*/
v4 = (*(int (**)(char *, FootClass **))(*(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2) + 16))( /*0x4d3608*/ (char *)(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2), (FootClass **)(&v11));


  if ( v4 != -1 ) /*0x4d360e*/
    ((DynamicVector *)((DynamicVector *)(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)))->RemoveItem(v4); /*0x4d3616*/
  parasiteImUsing = (gamemd::ParasiteClass *)(this->parasiteImUsing); /*0x4d361b*/
  if ( parasiteImUsing ) /*0x4d3623*/
  {
    (*((void (**)(ParasiteClass *, int))parasiteImUsing->vtable1 + 8))( (ParasiteClass *)(parasiteImUsing), 1); /*0x4d3629*/
    this->parasiteImUsing = 0; /*0x4d362c*/
  }
  if ( (&this->currentJumpjetMapCoords)[0] != g_FootClass_Pool ) /*0x4d3646*/
  {
    v6 = (unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)this->currentJumpjetMapCoords); /*0x4d365b*/
    if ( (FootClass *)v6[56] == this ) /*0x4d3666*/
      v6[56] = 0; /*0x4d3668*/
  }
  ((Mixer*)(Mixer *)this->audioController7)->ReleaseChannel(); /*0x4d3677*/
  AudioFileClass::Release( (AudioFileClass *)this->audioController7); /*0x4d367e*/
  v7 = (&this->locomotor)[0]; /*0x4d3683*/
  if ( v7 ) /*0x4d368b*/
    (*(void (**)(int))(*(unsigned int *)&v7->q_20))((&this->locomotor)[0]); /*0x4d3690*/
  v8 = *(void **)this->__pad_5B0; /*0x4d3693*/
  (&this->FootClass_field_abstract_array_5AC)[0] = (int)&vt_VectorClass; /*0x4d36a0*/
  if ( v8 && this->__pad_5B0[9] ) /*0x4d36a8*/
  {
    __3_YAXPAX_Z(v8); /*0x4d36b1*/
    *(unsigned int *)this->__pad_5B0 = 0; /*0x4d36b9*/
  }
  this->__pad_5B0[9] = 0; /*0x4d36bf*/
  *(unsigned int *)&this->__pad_5B0[4] = 0; /*0x4d36c5*/
  v9 = *(void **)this->__pad_58C; /*0x4d36cb*/
  (&this->unknownAbstractArray588)[0] = (int)&vt_VectorClass; /*0x4d36d1*/
  if ( v9 && this->__pad_58C[9] ) /*0x4d36dc*/
  {
    __3_YAXPAX_Z(v9); /*0x4d36e5*/
    *(unsigned int *)this->__pad_58C = (unsigned int)((gamemd::AbstractClass *)(0)); /*0x4d36ed*/
  }
  this->__pad_58C[9] = 0; /*0x4d36f5*/
  *(unsigned int *)&this->__pad_58C[4] = (unsigned int)((gamemd::AbstractClass *)(0)); /*0x4d36fb*/
  return (gamemd::AbstractClass *)(((TechnoClass *)((int)this))->DTOR()); /*0x4d3706*/

}
} // namespace ra2

// 0x4D98C0
namespace gamemd {
void FootClass::Destroyed(int a2)
{

  int64_t v3; // rax
  unsigned char v4[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (uint8_t)((House*)(House *)((unsigned int *)this)[0])->IsHumanPlayer() /*0x4d98dd*/
    && !*(unsigned char *)((*((int (**)(FootClass *))this->vtable1 + 33))(this) + 3412) )
  {
    v3 = ((int64_t (*)(FootClass *, unsigned char *))*((unsigned int *)this->vtable1 + 110))(this, v4); /*0x4d98f0*/
    if ( (uint8_t)CreateTriggerClassIfFarEnough(7, SHIDWORD(v3), *(unsigned int *)v3) ) /*0x4d98fe*/
      ((VoxClass *)((VoxClass *)(unsigned int *)((char *)&stru_822420 + 8)))->FindAndPlay(-1); /*0x4d9911*/
  }

}
} // namespace ra2

// 0x70F7E0
namespace gamemd {
int FootClass::updateThreat()
{

  int v1; // edx
  int v2; // eax

  v1 = ((unsigned int *)this)[0]; /*0x70f7e0*/
  v2 = ((unsigned int *)this)[2]; /*0x70f7e6*/
  if ( v1 != -1 ) /*0x70f7ef*/
  {
    if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) - v1 < v2 ) /*0x70f7fb*/
      return v2 == *(unsigned int *)((char *)&stru_A8EB00 + 416) - v1; /*0x70f808*/
    v2 = 0; /*0x70f809*/
  }
  return v2 == 0; /*0x70f808*/

}
} // namespace ra2

// 0x710000
namespace gamemd {
AbstractClass * FootClass::FootClass_ImbueLocomotor(void * a1, void * a2, void * a3, void *a4, void *a5, void *a6)
{

  int v4; // ebp
  int v5; // edi
  int *v6; // esi
  TaskManager *v7; // ecx
  unsigned int *v8; // ecx
  int v9; // eax
  int *v10; // edi
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int InstanceCOM; // eax
  int v20; // eax
  int m_Size; // ebx
  int v22; // ebp
  int *v23; // ecx
  int Member; // eax
  unsigned int *v25; // ecx
  unsigned int *v26; // ebx
  BuildingClass *v27; // [esp+50h] [ebp-2Ch]
  StreamClass v28; // [esp+60h] [ebp-1Ch] BYREF
  int v29; // [esp+78h] [ebp-4h]

  v6 = (int *)a1; /*0x710006*/
  v28.m_Size = (int)this; /*0x71000d*/
  if ( a1 )
  {
    v7 = *(TaskManager **)((unsigned int)(a1)+ 720); /*0x710017*/
    if ( v7 ) /*0x71001f*/
      ((TaskManager *)(v7))->Update(); /*0x710021*/
    v8 = (unsigned int *)v6[421]; /*0x710026*/
    if ( v8 && v8[423] && *(unsigned char *)((*(int (**)(unsigned int *))(*v8 + 132))( (unsigned int *)(v8)) + 3278) ) /*0x710042*/
      BuildingClass::Deploy(v27, v4, v5); /*0x710058*/
    v9 = v6[413]; /*0x71005d*/
    v10 = v6 + 413; /*0x710063*/
    *(unsigned int *)v28.__pad_0 = 0; /*0x71006b*/
    if ( v9 ) /*0x710073*/
    {
      v11 = ((StreamClass *)(&v28))->Set((unsigned int *)(v6 + 413)); /*0x71007a*/
      if ( v11 < 0 && v11 != -2147467262 ) /*0x710088*/
        WinAPI::Wrapper(v11); /*0x71008b*/
    }
    if ( *(unsigned char *)((*(int (**)(int *))(*v6 + 132))( (int *)(v6)) + 1516)
      && *(unsigned int *)v28.__pad_0
      && !v6[172]
      && (*(uint8_t (**)(unsigned int))(**(unsigned int **)v28.__pad_0 + 28))(*(unsigned int *)v28.__pad_0) )
    {
      if ( !*(unsigned int *)v28.__pad_0 ) /*0x7100d6*/
        WinAPI::Wrapper(-2147467261); /*0x7100dd*/
      v12 = (*(uint8_t (**)(unsigned int))(**(unsigned int **)v28.__pad_0 + 20))(*(unsigned int *)v28.__pad_0) == 0; /*0x7100ec*/
      v13 = *v10; /*0x7100ee*/
      if ( v12 ) /*0x7100f0*/
      {
        if ( !v13 ) /*0x710126*/
          WinAPI::Wrapper(-2147467261); /*0x71012d*/
        (*(void (**)(int))(*(unsigned int *)*v10 + 72))(*v10); /*0x710137*/
        (*(void (**)(int *, int))(*v6 + 496))( (int *)(v6), -1); /*0x710140*/
        (*(void (**)(int *, int, unsigned int))(*v6 + 488))( (int *)(v6), 13, 0); /*0x71014e*/
      }
      else
      {
        if ( v13 ) /*0x7100f4*/
          (*(void (**)(int))(*(unsigned int *)v13 + 8))(*v10); /*0x7100f9*/
        v14 = *(unsigned int *)v28.__pad_0; /*0x7100fc*/
        *v10 = 0; /*0x710100*/
        if ( !v14 ) /*0x710108*/
          WinAPI::Wrapper(-2147467261); /*0x71010f*/
        (*(void (**)(int, int *))(*(unsigned int *)v14 + 16))(v14, v6 + 413); /*0x71011c*/
      }
    }
    else
    {
      if ( !*v10 ) /*0x710159*/
        WinAPI::Wrapper(-2147467261); /*0x710163*/
      (*(void (**)(int, unsigned int))(*(unsigned int *)*v10 + 156))(*v10, 0); /*0x71016f*/
      v12 = *v10 == 0; /*0x710189*/
      v29 = dword_B0EA98; /*0x71018b*/
      if ( v12 ) /*0x71018f*/
        WinAPI::Wrapper(-2147467261); /*0x710196*/
      (*(void (**)(int, int, unsigned int, int, int))(*(unsigned int *)*v10 + 112))( /*0x7101b3*/
        *v10,
        -1,
        dword_B0EA90,
        dword_B0EA94,
        v29);
      v15 = *v6; /*0x7101b6*/
      v16 = (*(int (**)(int *, int *))(*v6 + 72))( (int *)(v6), (int *)&v28.StreamClass_field_0C); /*0x7101bf*/
      (*(void (**)(int *, int))(v15 + 244))( (int *)(v6), v16); /*0x7101c5*/
      v17 = *v6; /*0x7101cb*/
      *((unsigned char *)v6 + 1718) = 1; /*0x7101cf*/
      (*(void (**)(int *))(v17 + 976))( (int *)(v6)); /*0x7101d6*/
      v12 = *v10 == 0; /*0x7101e0*/
      v28.m_Data = 0; /*0x7101e2*/
      if ( !v12 ) /*0x7101e6*/
      {
        v18 = ((StreamClass *)((StreamClass *)&v28.m_Data))->Set((unsigned int *)(v6 + 413)); /*0x7101ed*/
        if ( v18 < 0 && v18 != -2147467262 ) /*0x7101fb*/
          WinAPI::Wrapper(v18); /*0x7101fe*/
      }
      a1 = (void *)(0); /*0x71020f*/
      InstanceCOM = CreateInstanceCOM((ObjectClass *)&a1, (IID *)&a2, 0, 7u); /*0x710213*/
      if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x710221*/
        WinAPI::Wrapper(InstanceCOM); /*0x710224*/
      if ( !a1 ) /*0x71022f*/
        WinAPI::Wrapper(-2147467261); /*0x710236*/
      (*(void (**)(int, int *))(*(unsigned int *)a1 + 12))( (int)a1, (int *)(v6)); /*0x710243*/
      v28.m_Position = 0; /*0x71024a*/
      if ( a1 ) /*0x710250*/
      {
        v20 = ((StreamClass *)((StreamClass *)&v28.m_Position))->Set( (unsigned int *)(&a1)); /*0x71025b*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x710269*/
          WinAPI::Wrapper(v20); /*0x71026c*/
      }
      ((COMObject *)((COMObject *)&v28.m_Data))->SwapReference((int)(v28.m_Position)); /*0x71027a*/
      if ( v28.m_Position ) /*0x710285*/
        (*(void (**)(int))(*(unsigned int *)v28.m_Position + 8))((int)v28.m_Position); /*0x71028a*/
      if ( v28.m_Data )
      {
        m_Size = (int)(v28.m_Size); /*0x710297*/
        if ( *(unsigned int *)(v28.m_Size + 684) ) /*0x71029b*/
          ((TechnoClass *)v28.m_Size)->EjectPassengers( 0); /*0x7102a6*/
        if ( v6[171] ) /*0x7102ab*/
          ((TechnoClass *)v6)->EjectPassengers( 1); /*0x7102b7*/
        if ( !v28.m_Data ) /*0x7102c4*/
          WinAPI::Wrapper(-2147467261); /*0x7102cb*/
        (*(void (**)(int, int))(*(unsigned int *)v28.m_Data + 12))((int)v28.m_Data, *v10); /*0x7102d8*/
        v22 = *v10; /*0x7102db*/
        if ( *v10   !=   (int)((int)(a1 ))) /*0x7102e3*/
        {
          *v10 = (int)(a1); /*0x7102e7*/
          ((SuperClass *)((SuperClass *)(v6 + 413)))->SetFieldX(); /*0x7102e9*/
          if ( v22 ) /*0x7102f0*/
            (*(void (**)(int))(*(unsigned int *)v22 + 8))(v22); /*0x7102f6*/
        }
        *(unsigned int *)(m_Size + 684) = (unsigned int)((v6[5] & 1) != 0 ? v6 : 0);
        *((v6[5] & 1) != 0 ? v6 + 172 : (int *)688) = m_Size;
        (*(void (**)(unsigned int, int, int))(**(unsigned int **)(m_Size + 684) + 1152))( /*0x710326*/
          *(unsigned int *)(m_Size + 684),
          m_Size,
          1);
        (*(void (**)(unsigned int))(**(unsigned int **)(m_Size + 684) + 336))(*(unsigned int *)(m_Size + 684)); /*0x710334*/
        v23 = (int *)v6[373]; /*0x71033a*/
        if ( v23 ) /*0x710342*/
          ((TeamClass *)(v23))->LiberateMember_Start( (void *)((int)v6), 0xFFFFFFFF, 0); /*0x710349*/
        *((unsigned char *)v6 + 1709) = 1; /*0x710352*/
        Member = ((Team *)((Team *)v6))->GetMember(0); /*0x710359*/
        if ( Member && (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x71036c*/
          (*(void (**)(int *, int))(*v6 + 640))( (int *)(v6), 3); /*0x710374*/
        (*(void (**)(unsigned int, int, int))(**(unsigned int **)(m_Size + 684) + 488))(*(unsigned int *)(m_Size + 684), 5, 1); /*0x710386*/
        v25 = *(unsigned int **)(m_Size + 684); /*0x71038c*/
        if ( !*(unsigned char *)(v25[135] + 492) && !*(unsigned char *)((*(int (**)(unsigned int *))(*v25 + 132))( (unsigned int *)(v25)) + 1516) ) /*0x7103aa*/
        {
          v26 = *(unsigned int **)(m_Size + 684); /*0x7103b4*/
          if ( !*(unsigned char *)(*(unsigned int *)(v26[135] + 52) + 422) ) /*0x7103c3*/
            (*(void (**)(unsigned int *, int, unsigned int))(*v26 + 488))( (unsigned int *)(v26), 15, 0); /*0x7103d5*/
        }
      }
      if ( a1 ) /*0x7103e1*/
        (*(void (**)(int))(*(unsigned int *)a1 + 8))((int)a1); /*0x7103e6*/
      if ( v28.m_Data ) /*0x7103ef*/
        (*(void (**)(int))(*(unsigned int *)v28.m_Data + 8))((int)v28.m_Data); /*0x7103f4*/
    }
    if ( *(unsigned int *)v28.__pad_0 ) /*0x7103fd*/
      (*(void (**)(unsigned int))(**(unsigned int **)v28.__pad_0 + 8))(*(unsigned int *)v28.__pad_0); /*0x710402*/
  }

}
} // namespace ra2

// 0x41C120
namespace gamemd {
void FootClass::Stub(int a1)
{

  ; /*0x41c120*/

}
} // namespace gamemd

// 0x50DAA0
namespace gamemd {
unsigned int FootClass::checkTurning()
{

  unsigned int result; // eax

  result = ((unsigned int *)this)[0]; /*0x50daa0*/
  if ( result >= 4 ) /*0x50daa8*/
    return 0; /*0x50daaf*/
  return result; /*0x50dab1*/

}
} // namespace gamemd
