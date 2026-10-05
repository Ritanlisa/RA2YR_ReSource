// AUTO-GENERATED link stubs - unresolved legacy declarations.
// Each body is an empty placeholder pending C-line translation.
// Regenerate via tools/gen_link_stubs.py after linking passes.
// Suppress legacy using-decl aliasing: this TU combines headers
// whose gamemd-local forward declarations collide with the
// ra2::game::X using-decls (C2874). Pointer-only usage makes the
// incomplete gamemd::X declarations sufficient here.
#define GAMEMD_USING_ObjectClass
#define GAMEMD_USING_FootClass
// G42.35a: with those using-decls suppressed, the gamemd-local fwd
// must be self-supplied at TU top -- before headers using bare names.
namespace gamemd { class ObjectClass; class FootClass; }
#include <windows.h>
#include <cstdint>
#include "core/coordinate.hpp"
#include "core/math.hpp"
#include "core/utility_ext.hpp"
#include "entity/wave.hpp"
#include "house/house.hpp"
#include "misc/super_weapon.hpp"
#include "network/multiplayer.hpp"
#include "network/session.hpp"
#include "object/capture_manager.hpp"
#include "object/object.hpp"
#include "object/slave_manager.hpp"
#include "object/spawn_manager.hpp"
#include "render/display.hpp"
#include "render/light_source.hpp"
#include "render/surface.hpp"
#include "system/buffer_io_file.hpp"
#include "system/cd_file.hpp"
#include "system/file_class.hpp"
#include "system/mix_file.hpp"
#include "system/tactical.hpp"
#include "system/waypoint.hpp"
#include "team/taction.hpp"
#include "team/tag.hpp"
#include "team/team.hpp"
#include "team/tevent.hpp"
#include "type/abstract_type.hpp"
#include "structure/unit.hpp"
#include "type/object_type.hpp"
#include "type/particle_system_type.hpp"

namespace gamemd {
// link stub (no binary body yet)
 char gamemd::DSurface::BlitCore(int* self, int* dst_rect, int* src_rect, void* src_surface, int* clip_dst, int* clip_src, int flags, char option2)
{
    unsigned int *v6; // ebp
    void *v7; // edi
    int v8; // eax

    v6 = this + 28; /*0x4ba5b0*/
    *((unsigned int *)this + 1) = a2; /*0x4ba5b5*/
    *((unsigned int *)this + 2) = a3; /*0x4ba5b8*/
    *((unsigned int *)this + 3) = 0; /*0x4ba5bb*/
    *((unsigned int *)this + 4) = 0; /*0x4ba5be*/
    *((unsigned int *)this + 5) = 0; /*0x4ba5c1*/
    *(this + 24) = 0; /*0x4ba5c4*/
    *(this + 25) = 0; /*0x4ba5c7*/
    *((unsigned int *)this + 7) = 0; /*0x4ba5ca*/
    *((unsigned int *)this + 8) = 0; /*0x4ba5cd*/
    *(unsigned int *)this = &DSurface_Vtable; /*0x4ba5d0*/
    v7 = RA2_OPNEW(0x6Cu); /*0x4ba5db*/
    *((unsigned int *)this + 8) = v7; /*0x4ba5e2*/
    if ( v7 ) /*0x4ba5e5*/
    {
      memset(v7, 0, 0x6Cu); /*0x4ba5f2*/
      **((unsigned int **)this + 8) = 108; /*0x4ba5f7*/
      *(unsigned int *)(*((unsigned int *)this + 8) + 4) = 7; /*0x4ba604*/
      *(unsigned int *)(*((unsigned int *)this + 8) + 12) = a2; /*0x4ba60e*/
      *(unsigned int *)(*((unsigned int *)this + 8) + 8) = a3; /*0x4ba618*/
      if ( a4 == 1 ) /*0x4ba621*/
        *(unsigned int *)(*((unsigned int *)this + 8) + 104) = 2048; /*0x4ba626*/
      if ( g_DDraw_Force3D && a5 ) /*0x4ba639*/
        *(unsigned int *)(*((unsigned int *)this + 8) + 104) = 8256; /*0x4ba63e*/
      g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba653*/
        g_lpDirectDraw7,
        (LPDDSURFACEDESC)*((unsigned int *)this + 8),
        (LPDIRECTDRAWSURFACE *)(this + 28),
        0);
      if ( *v6 ) /*0x4ba656*/
      {
        memset(*((void **)this + 8), 0, 0x6Cu); /*0x4ba665*/
        **((unsigned int **)this + 8) = 108; /*0x4ba66a*/
        (*(void (__stdcall **)(unsigned int, unsigned int))(*(unsigned int *)*v6 + 88))(*v6, *((unsigned int *)this + 8)); /*0x4ba67a*/
        v8 = *((unsigned int *)this + 8); /*0x4ba67d*/
        *((unsigned int *)this + 4) = (unsigned int)(*(unsigned int *)(v8 + 84) + 7) >> 3; /*0x4ba689*/
        *(this + 25) = (*(unsigned int *)(v8 + 104) & 0x4000) != 0; /*0x4ba695*/
      }
    }
    return this; /*0x4ba69a*/
}
// link stub (no binary body yet)
gamemd::AbstractTypeClass::AbstractTypeClass(noinit_t) noexcept {}
// link stub (no binary body yet)
gamemd::BufferIOFileClass::BufferIOFileClass(const noinit_t& a0) noexcept {}
// link stub (no binary body yet)
gamemd::CDFileClass::CDFileClass(const noinit_t& a0) noexcept {}
// link stub (no binary body yet)
gamemd::LightSourceClass::LightSourceClass(const CoordStruct& location, int intensity, int visibility, const TintStruct& tint, int detail_level) noexcept
{
    int v10; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x554763*/
    this->LightTint[0] = a7; /*0x554774*/
    this->LightIntensity = a6; /*0x554777*/
    this->LightTint[1] = a8; /*0x55477e*/
    this->LightTint[2] = a9; /*0x554788*/
    this->DetailLevel = 2; /*0x55478f*/
    this->Location[0] = a2; /*0x554796*/
    this->Activated = 0; /*0x55479c*/
    this->AbstractClass = &LightSourceClass::`vftable'; /*0x5547a0*/
    this->Location[1] = a3; /*0x5547a6*/
    this->LightVisibility = a5; /*0x5547ad*/
    this->? = &LightSourceClass::`vftable'; /*0x5547b0*/
    this->Location[2] = a4; /*0x5547b7*/
    this->? = &LightSourceClass::`vftable'; /*0x5547ba*/
    this->? = &LightSourceClass::`vftable'; /*0x5547c1*/
    if ( g_MissionQueueFrame.random[133] < g_MissionQueueFrame.random[131] /*0x5547fd*/
      || (IDA_BYTE1(g_MissionQueueFrame.random[132]) || !g_MissionQueueFrame.random[131])
      && g_MissionQueueFrame.random[134] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(g_MissionQueueFrame.random[129] + 8))(
           &g_MissionQueueFrame.random[129],
           g_MissionQueueFrame.random[131] + g_MissionQueueFrame.random[134],
           0) )
    {
      v10 = g_MissionQueueFrame.random[133]++; /*0x55480a*/
      *(unsigned int *)(g_MissionQueueFrame.random[130] + 4 * v10) = this; /*0x554819*/
    }
    return &this->AbstractClass; /*0x55481e*/
}
// link stub (no binary body yet)
gamemd::ObjectTypeClass::ObjectTypeClass(noinit_t) noexcept {}
// link stub (no binary body yet)
gamemd::ParticleSystemTypeClass::ParticleSystemTypeClass(noinit_t) noexcept {}
// link stub (no binary body yet)
gamemd::SuperWeaponTypeClass::SuperWeaponTypeClass(noinit_t) noexcept {}
// link stub (no binary body yet)
gamemd::UnitClass::UnitClass() noexcept
{
    int v4; // eax
    unsigned int *Value; // eax
    int v6; // eax
    int InstanceCOM; // eax
    LPVOID v8; // edi
    LPVOID v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // ecx
    int v13; // eax
    BuildingClass *v14; // ecx
    int v15; // edi
    int v16; // eax
    int v17; // ecx
    int v18; // eax
    int v19; // edx
    unsigned int *v20; // eax
    int v21; // eax
    int v22; // eax
    int vtable2; // ebp
    unsigned int *v24; // edi
    int i; // eax
    unsigned int *v26; // edx
    TechnoClass *v28; // [esp+8h] [ebp-1Ch]
    int v29; // [esp+1Ch] [ebp-8h]

    FootClass::Construct((FootClass *)this, (int)ppv); /*0x7353ce*/
    *(this + 432) = -1; /*0x7353e0*/
    *(this + 433) = a2; /*0x7353e6*/
    *(this + 434) = 0; /*0x7353ec*/
    *(this + 435) = -1; /*0x7353f2*/
    *((unsigned char *)this + 1744) = 0; /*0x7353f8*/
    *((unsigned char *)this + 1745) = 0; /*0x7353fe*/
    *((unsigned char *)this + 1746) = 0; /*0x735404*/
    *((unsigned char *)this + 1747) = 0; /*0x73540a*/
    *(this + 437) = -1; /*0x735410*/
    *(this + 438) = -1; /*0x735416*/
    *(this + 439) = 0; /*0x73541c*/
    *((unsigned char *)this + 1760) = 0; /*0x735422*/
    *((unsigned char *)this + 1761) = 0; /*0x735428*/
    *((unsigned char *)this + 1762) = 0; /*0x73542e*/
    *(this + 441) = 0; /*0x735434*/
    *this = (int)&UnitClass::`vftable'; /*0x73543a*/
    *(this + 1) = (int)&UnitClass::`vftable'; /*0x735440*/
    *(this + 2) = (int)&UnitClass::`vftable'; /*0x735446*/
    *(this + 3) = (int)&off_7F5C44; /*0x73544d*/
    AbstractClass::GenerateUniqueID((AbstractClass *)(this + 1)); /*0x735454*/
    if ( FootClass_Array.?[2] < FootClass_Array.?[0] /*0x73548f*/
      || (IDA_BYTE1(FootClass_Array.?[1]) || !FootClass_Array.?[0])
      && FootClass_Array.?[3] > 0
      && (*(unsigned __int8 (__thiscall **)(float *, int, unsigned int))(IDA_LODWORD(FootClass_Array.?) + 8))(
           &FootClass_Array.?,
           FootClass_Array.?[0] + FootClass_Array.?[3],
           0) )
    {
      v4 = FootClass_Array.?[2]++; /*0x73549c*/
      *(unsigned int *)(FootClass_Array.? + 4 * v4) = this; /*0x7354ab*/
    }
    Value = ProgressTimer::GetValue((ProgressTimer *)(this + 226), &ppv); /*0x7354c1*/
    FacingClass::Set_SyncLog((char *)this + 928, Value); /*0x7354c9*/
    v6 = *(this + 433); /*0x7354ce*/
    if ( v6 ) /*0x7354d6*/
    {
      ppv = 0; /*0x7354ea*/
      InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)(v6 + 844), 0, 7u); /*0x7354f2*/
      if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x735500*/
        WinAPI::Wrapper(InstanceCOM); /*0x735503*/
      v8 = (LPVOID)*(this + 413); /*0x735508*/
      v9 = ppv; /*0x73550e*/
      if ( v8 != ppv ) /*0x735514*/
      {
        *(this + 413) = (int)ppv; /*0x735518*/
        if ( v9 ) /*0x73551e*/
        {
          (*(void (__stdcall **)(LPVOID))(*(unsigned int *)v9 + 4))(v9); /*0x735523*/
          v9 = ppv; /*0x735526*/
        }
        if ( v8 ) /*0x73552c*/
        {
          (*(void (__stdcall **)(LPVOID))(*(unsigned int *)v8 + 8))(v8); /*0x735531*/
          v9 = ppv; /*0x735534*/
        }
      }
      if ( v9 ) /*0x73553a*/
        (*(void (__stdcall **)(LPVOID))(*(unsigned int *)v9 + 8))(v9); /*0x73553f*/
      if ( !*(this + 413) ) /*0x735542*/
        WinAPI::Wrapper(-2147467261); /*0x735551*/
      (*(void (__stdcall **)(unsigned int, int *))(*(unsigned int *)*(this + 413) + 12))(*(this + 413), this); /*0x735560*/
    }
    v10 = *(this + 433); /*0x735566*/
    if ( v10 ) /*0x73556e*/
    {
      BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)(this + 226), *(unsigned int *)(v10 + 1820)); /*0x735579*/
      BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)(this + 232), *(unsigned int *)(*(this + 433) + 1820)); /*0x73558d*/
      v11 = *(this + 433); /*0x735592*/
      v12 = *(unsigned int *)(v11 + 1664); /*0x735598*/
      if ( v12 == -1 ) /*0x7355a0*/
        v12 = *(unsigned int *)(v11 + 1668); /*0x7355a2*/
      *(this + 191) = v12; /*0x7355a8*/
      *((unsigned char *)this + 978) = *(unsigned char *)(v11 + 3280); /*0x7355b4*/
      v13 = *(unsigned int *)(v11 + 160); /*0x7355ba*/
      *(this + 27) = v13; /*0x7355c0*/
      *(this + 28) = v13; /*0x7355c3*/
    }
    *(this + 127) = *(unsigned int *)&stru_A8EB00.?[416]; /*0x7355d3*/
    *(this + 128) = v29; /*0x7355d9*/
    *(this + 129) = 0; /*0x7355dc*/
    v14 = (BuildingClass *)*(this + 135); /*0x7355df*/
    if ( v14 ) /*0x7355e7*/
      BuildingClass::PowerUpdate(v14, this); /*0x7355ea*/
    TechnoClass::Update(v28, -1); /*0x7355f1*/
    v15 = *(this + 433); /*0x7355f6*/
    if ( v15 ) /*0x7355fe*/
    {
      v16 = *(this + 135); /*0x735604*/
      if ( v16 ) /*0x73560c*/
      {
        v17 = 0; /*0x735611*/
        v18 = *(unsigned int *)(v16 + 52) + 360; /*0x735613*/
        v19 = *(unsigned int *)(v18 + 16); /*0x735618*/
        if ( v19 > 0 ) /*0x73561d*/
        {
          v20 = *(unsigned int **)(v18 + 4); /*0x73561f*/
          while ( *v20 != v15 ) /*0x735624*/
          {
            ++v17; /*0x735626*/
            ++v20; /*0x735627*/
            if ( v17 >= v19 ) /*0x73562c*/
              goto LABEL_35; /*0x73562c*/
          }
          Power::ChangedHouse((Power *)this + 21, 1); /*0x735638*/
        }
      }
  LABEL_35:
      v21 = *(this + 135); /*0x73563d*/
      if ( v21 ) /*0x735645*/
      {
        if ( *(unsigned char *)(v21 + 704) ) /*0x735647*/
        {
          v22 = *(this + 433); /*0x735651*/
          if ( !*(unsigned char *)(v22 + 3278) ) /*0x735657*/
          {
            if ( *(unsigned char *)(v22 + 3214) ) /*0x735661*/
              Power::ChangedHouse((Power *)this + 21, 1); /*0x735673*/
          }
        }
      }
      if ( *(unsigned char *)(*(this + 433) + 2053) ) /*0x73567e*/
        UnitClass::SetTurret((UnitClass *)this, 0); /*0x73568c*/
    }
    ppv = (LPVOID)AbstractClass::GetVtable3((AbstractClass *)(this + 1)); /*0x7356a0*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x7356ac*/
      goto LABEL_50; /*0x7356ac*/
    if ( g_BuildingLoadQueue_Array.? ) /*0x7356b4*/
    {
      vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x7356bd*/
      if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x7356c1*/
        return (int)this; /*0x7356c1*/
    }
    else
    {
      vtable2 = 10; /*0x7356b6*/
    }
    v24 = (unsigned int *)RA2_OPNEW(8 * ((int)g_BuildingLoadQueue_Array.? + vtable2)); /*0x7356d7*/
    if ( v24 ) /*0x7356de*/
    {
      for ( i = 0; i < (int)g_BuildingLoadQueue_Array.?; v24[2 * i - 1] = v26[1] ) /*0x7356f3*/
      {
        v26 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * i++; /*0x7356fb*/
        v24[2 * i - 2] = *v26; /*0x735701*/
      }
      RA2_OPDEL(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x73571c*/
      g_BuildingLoadQueue_Array.TechnoTypeClass = v24; /*0x73572b*/
      g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + vtable2; /*0x735731*/
      g_BuildingLoadQueue_Array.? = 0; /*0x735736*/
  LABEL_50:
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = ppv; /*0x735740*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x73575e*/
      IDA_LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x735768*/
      ++g_BuildingLoadQueue_Array.?; /*0x73576f*/
    }
    return (int)this; /*0x735776*/
}
// link stub (no binary body yet)
gamemd::DSurface::DSurface(int width, int height, bool back_buffer, bool force_3d) noexcept : XSurface(width, height)
{
    unsigned int *v6; // ebp
    void *v7; // edi
    int v8; // eax

    v6 = this + 28; /*0x4ba5b0*/
    *((unsigned int *)this + 1) = a2; /*0x4ba5b5*/
    *((unsigned int *)this + 2) = a3; /*0x4ba5b8*/
    *((unsigned int *)this + 3) = 0; /*0x4ba5bb*/
    *((unsigned int *)this + 4) = 0; /*0x4ba5be*/
    *((unsigned int *)this + 5) = 0; /*0x4ba5c1*/
    *(this + 24) = 0; /*0x4ba5c4*/
    *(this + 25) = 0; /*0x4ba5c7*/
    *((unsigned int *)this + 7) = 0; /*0x4ba5ca*/
    *((unsigned int *)this + 8) = 0; /*0x4ba5cd*/
    *(unsigned int *)this = &DSurface_Vtable; /*0x4ba5d0*/
    v7 = RA2_OPNEW(0x6Cu); /*0x4ba5db*/
    *((unsigned int *)this + 8) = v7; /*0x4ba5e2*/
    if ( v7 ) /*0x4ba5e5*/
    {
      memset(v7, 0, 0x6Cu); /*0x4ba5f2*/
      **((unsigned int **)this + 8) = 108; /*0x4ba5f7*/
      *(unsigned int *)(*((unsigned int *)this + 8) + 4) = 7; /*0x4ba604*/
      *(unsigned int *)(*((unsigned int *)this + 8) + 12) = a2; /*0x4ba60e*/
      *(unsigned int *)(*((unsigned int *)this + 8) + 8) = a3; /*0x4ba618*/
      if ( a4 == 1 ) /*0x4ba621*/
        *(unsigned int *)(*((unsigned int *)this + 8) + 104) = 2048; /*0x4ba626*/
      if ( g_DDraw_Force3D && a5 ) /*0x4ba639*/
        *(unsigned int *)(*((unsigned int *)this + 8) + 104) = 8256; /*0x4ba63e*/
      g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba653*/
        g_lpDirectDraw7,
        (LPDDSURFACEDESC)*((unsigned int *)this + 8),
        (LPDIRECTDRAWSURFACE *)(this + 28),
        0);
      if ( *v6 ) /*0x4ba656*/
      {
        memset(*((void **)this + 8), 0, 0x6Cu); /*0x4ba665*/
        **((unsigned int **)this + 8) = 108; /*0x4ba66a*/
        (*(void (__stdcall **)(unsigned int, unsigned int))(*(unsigned int *)*v6 + 88))(*v6, *((unsigned int *)this + 8)); /*0x4ba67a*/
        v8 = *((unsigned int *)this + 8); /*0x4ba67d*/
        *((unsigned int *)this + 4) = (unsigned int)(*(unsigned int *)(v8 + 84) + 7) >> 3; /*0x4ba689*/
        *(this + 25) = (*(unsigned int *)(v8 + 104) & 0x4000) != 0; /*0x4ba695*/
      }
    }
    return this; /*0x4ba69a*/
}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::MixFileClass::MixFileClass(const char* a0) {}
// link stub (no binary body yet)
gamemd::WaveClass::WaveClass(ra2::game::TechnoClass* pTarget, WaveType waveType, const Point2D& coords, uint32_t intensity) noexcept
{
    double v6; // st7
    int v8; // edx
    int v10; // eax
    int v11; // eax
    int *WaveClass_field_14C; // edx
    int WaveClass_field_DC; // eax
    int v14; // edx
    int v15; // edx
    Voxel *v16; // [esp+8h] [ebp-10h]

    ObjectClass::ctor((ObjectClass *)this); /*0x75e956*/
    this->WaveClass_field_138 = 0; /*0x75e969*/
    this->WaveClass_field_140 = 0; /*0x75e96f*/
    this->Target = a6; /*0x75e975*/
    this->Type[0] = (int)a5; /*0x75e97b*/
    this->WaveClass_field_12C = 1; /*0x75e981*/
    this->WaveClass_field_12D = 0; /*0x75e988*/
    this->WaveIntensity = 100; /*0x75e98e*/
    this->WaveClass_field_134 = 0; /*0x75e998*/
    this->WaveClass_field_13C = 0; /*0x75e99e*/
    this->WaveClass_field_144 = 0; /*0x75e9a4*/
    this->WaveClass_field_148 = 0; /*0x75e9aa*/
    this->WaveClass_field_14C = 0; /*0x75e9b0*/
    this->WaveClass_field_1A0 = 0; /*0x75e9b6*/
    this->WaveClass_field_1A4 = 0; /*0x75e9bc*/
    this->WaveClass_field_1A8 = 0; /*0x75e9c2*/
    this->LaserIntensity = 0; /*0x75e9ce*/
    this->Owner = a4; /*0x75e9d4*/
    FrameSnapshot::Init((FrameSnapshot *)this->Facing); /*0x75e9da*/
    *((unsigned int *)this + 125) = 0; /*0x75e9e1*/
    *((unsigned int *)this + 126) = 5; /*0x75e9e7*/
    *((unsigned char *)this + 508) = 1; /*0x75e9f1*/
    *((unsigned char *)this + 509) = 0; /*0x75e9f8*/
    *((unsigned int *)this + 124) = &VectorClass<CellClass *>::`vftable'; /*0x75e9fe*/
    *((unsigned int *)this + 125) = RA2_OPNEW(0x14u); /*0x75ea18*/
    *((unsigned char *)this + 509) = 1; /*0x75ea1e*/
    *((unsigned int *)this + 124) = &DynamicVectorClass<CellClass *>::`vftable'; /*0x75ea25*/
    *((unsigned int *)this + 129) = 10; /*0x75ea2f*/
    *((unsigned int *)this + 128) = 0; /*0x75ea39*/
    this->ObjectClass = &WaveClass::`vftable'; /*0x75ea3f*/
    this->? = &WaveClass::`vftable'; /*0x75ea45*/
    this->? = &WaveClass::`vftable'; /*0x75ea4b*/
    this->? = &off_7F6BC8; /*0x75ea52*/
    v8 = a2[1] - a3[1]; /*0x75ea66*/
    Math::Sqrt((double)((*a2 - *a3) * (*a2 - *a3) + v8 * v8)); /*0x75ea7e*/
    if ( v6 >= 240.0 ) /*0x75ea91*/
    {
      AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x75eaa4*/
      if ( *(int *)&stru_A8EB00.?[100] < *(int *)&stru_A8EB00.?[92] /*0x75eadd*/
        || (stru_A8EB00.?[97] || !*(unsigned int *)&stru_A8EB00.?[92])
        && *(int *)&stru_A8EB00.?[104] > 0
        && (*(unsigned __int8 (__thiscall **)(unsigned char *, int, unsigned int))(*(unsigned int *)&stru_A8EB00.?[84] + 8))(
             &stru_A8EB00.?[84],
             *(unsigned int *)&stru_A8EB00.?[92] + *(unsigned int *)&stru_A8EB00.?[104],
             0) )
      {
        v10 = (*(unsigned int *)&stru_A8EB00.?[100])++; /*0x75eaea*/
        *(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[88] + 4 * v10) = this; /*0x75eaf9*/
      }
      if ( !byte_B725CC ) /*0x75eb02*/
        Voxel::InitDistanceTable(v16); /*0x75eb04*/
      if ( this->Type[0] == 3 ) /*0x75eb10*/
        Voxel::LightRender((Voxel *)this, a2, (int)a3); /*0x75eb1a*/
      else
        Voxel::SectionProject((Voxel *)this, a2, (int)a3); /*0x75eb29*/
      this->WaveClass_field_1A8 = 0; /*0x75eb3c*/
      this->WaveClass_field_1CC = CalcMathFacing8(&this->WaveClass_field_CC, &this->WaveClass_field_E4); /*0x75eb51*/
      WaveClass::DrawWave(this, this->someCoords, 0); /*0x75eb57*/
      v11 = this->Type[0]; /*0x75eb5c*/
      if ( v11 > 0 && v11 <= 2 ) /*0x75eb69*/
      {
        WaveClass_field_14C = (int *)this->WaveClass_field_14C; /*0x75eb6b*/
        WaveClass_field_DC = this->WaveClass_field_DC; /*0x75eb71*/
        this->WaveClass_field_138 = 0; /*0x75eb77*/
        this->WaveClass_field_13C = 1072693248; /*0x75eb7d*/
        this->LaserIntensity = 160; /*0x75eb87*/
        *WaveClass_field_14C = WaveClass_field_DC; /*0x75eb91*/
        WaveClass_field_14C[1] = this->WaveClass_field_E0; /*0x75eb99*/
        v14 = this->WaveClass_field_14C; /*0x75eb9c*/
        *(unsigned int *)(v14 + 8) = this->WaveClass_field_D4; /*0x75eba8*/
        *(unsigned int *)(v14 + 12) = this->WaveClass_field_D8; /*0x75ebb1*/
        v15 = this->WaveClass_field_14C; /*0x75ebb4*/
        *(unsigned int *)(v15 + 16) = this->WaveClass_field_E4; /*0x75ebbc*/
        *(unsigned int *)(v15 + 20) = this->WaveClass_field_E8; /*0x75ebc2*/
      }
      Voxel::TransformMatrix((int)this); /*0x75ebc7*/
      return &this->ObjectClass; /*0x75ebcc*/
    }
    else
    {
      ObjectClass::Destroy((ObjectClass *)this); /*0x75ea95*/
      return &this->ObjectClass; /*0x75ea9a*/
    }
}
// link stub (no binary body yet)
gamemd::XSurface::XSurface(int width, int height) noexcept {}
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::TEventClass::Execute(int a0, int a1, ra2::game::ObjectClass* a2, int a3, int* a4, int a5) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::TriggerClass::FireActions(ra2::game::ObjectClass* a0, gamemd::Vector2D<short> a1) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::TriggerClass::RegisterEvent(int a0, ra2::game::ObjectClass* a1, bool a2, bool a3, ra2::game::TechnoClass* a4) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::TriggerTypeClass::RemoveAction(gamemd::TActionClass* a0) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::TriggerTypeClass::RemoveEvent(gamemd::TEventClass* a0) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int gamemd::MapClass::GetCellIndex(const CellStruct& map_coords) { return {}; }
// link stub (no binary body yet)
 bool gamemd::AbstractTypeClass::LoadFromINI(CCINIClass* pINI)
{
    int result; // eax
    char *Name; // edi
    char *UINameLabel; // ebp
    char Destination[48]; // [esp+Ch] [ebp-434h] BYREF
    char v7; // [esp+3Ch] [ebp-404h]
    char Source[1024]; // [esp+40h] [ebp-400h] BYREF

    INIClass::ResetSection((INIClass *)a2); /*0x410a74*/
    result = INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)this->__pad_24); /*0x410a7f*/
    if ( result ) /*0x410a86*/
    {
      Name = this->Name; /*0x410a91*/
      INIClass::GetString( /*0x410aa0*/
        (INIClass *)a2,
        (unsigned __int8 *)this->__pad_24,
        (unsigned __int8 *)g_INI_Key_Name,
        this->Name,
        Source,
        49);
      if ( Source ) /*0x410aab*/
      {
        strncpy(Destination, Source, 0x30u); /*0x410abf*/
        v7 = 0; /*0x410ac7*/
      }
      else
      {
        Destination[0] = (unsigned __int8)Source; /*0x410aad*/
      }
      if ( Destination != Name ) /*0x410ad2*/
      {
        qmemcpy(Name, Destination, 0x30u); /*0x410add*/
        this->Name[48] = v7; /*0x410adf*/
      }
      UINameLabel = this->UINameLabel; /*0x410aeb*/
      INIClass::GetString( /*0x410afb*/
        (INIClass *)a2,
        (unsigned __int8 *)this->__pad_24,
        (unsigned __int8 *)g_INI_Key_UIName,
        this->UINameLabel,
        Source,
        32);
      if ( Source ) /*0x410b06*/
      {
        strncpy(Destination, Source, 0x1Fu); /*0x410b1a*/
        Destination[31] = 0; /*0x410b22*/
      }
      else
      {
        Destination[0] = (unsigned __int8)Source; /*0x410b08*/
      }
      result = (int)Destination; /*0x410b27*/
      if ( Destination != UINameLabel ) /*0x410b2d*/
        qmemcpy(UINameLabel, Destination, 0x20u); /*0x410b3a*/
      if ( *UINameLabel ) /*0x410b3c*/
      {
        result = (int)GetStringCSF((wchar_t *)this->UINameLabel, 0, aDRa2mdpostAbst, 215); /*0x410b52*/
        this->UIName = (void *)result; /*0x410b58*/
      }
      else
      {
        this->UIName = &g_TypeClass_DefaultString; /*0x410b69*/
      }
      IDA_LOBYTE(result) = 1; /*0x410b5c*/
    }
    else
    {
      IDA_LOBYTE(result) = 0; /*0x410b7f*/
    }
    return result; /*0x410b57*/
}
// link stub (no binary body yet)
 bool gamemd::AbstractTypeClass::WriteINI(CCINIClass* pINI)
{
    unsigned __int8 *pad_24; // edi

    pad_24 = (unsigned __int8 *)this->__pad_24; /*0x410b9b*/
    INIClass::ClearSection((int *)a2, (int)this->__pad_24, 0); /*0x410ba1*/
    INIClass::SetString(a2, pad_24, g_INI_Key_Name, this->Name); /*0x410bb2*/
    if ( this->UINameLabel[0] ) /*0x410bb7*/
      INIClass::SetString(a2, pad_24, g_INI_Key_UIName, this->UINameLabel); /*0x410bca*/
    return 1; /*0x410bcf*/
}
// link stub (no binary body yet)
 bool gamemd::DSurface::FillRectEx(const RectangleStruct& clip_rect, const RectangleStruct& fill_rect, uint32_t color)
{
    int v5; // eax
    void *DSurface_field_0xC; // ebx
    void *DSurface_field_0x0; // edx
    int *v8; // eax
    int *v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    int v13; // ebx
    int v14; // edx
    int v15; // ecx
    int v16; // edx
    int v17; // edi
    int *v18; // edi
    int v19; // ecx
    int v20; // edx
    int v21; // eax
    int v22; // edi
    int v23; // esi
    int v25; // [esp+20h] [ebp-B4h] BYREF
    int v26; // [esp+24h] [ebp-B0h]
    int v27; // [esp+28h] [ebp-ACh]
    int v28; // [esp+2Ch] [ebp-A8h]
    unsigned int v29[4]; // [esp+30h] [ebp-A4h] BYREF
    int v30[4]; // [esp+40h] [ebp-94h] BYREF
    unsigned int v31[4]; // [esp+50h] [ebp-84h] BYREF
    char v32[16]; // [esp+60h] [ebp-74h] BYREF
    unsigned int v33[25]; // [esp+70h] [ebp-64h] BYREF

    if ( this->DSurface_field_0x1C[0] && *(int *)(a3 + 8) > 0 && *(int *)(a3 + 12) > 0 ) /*0x4bb64d*/
    {
      if ( !IDA_LOBYTE(stru_820320.Start) /*0x4bb675*/
        || (*((unsigned __int8 (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 27))(this)
        || (*(int (__stdcall **)(int, int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 52))(
             this->DSurface_field_0x1C[0],
             1) )
      {
        return XSurface::FillRectEx((XSurface *)this, (unsigned int *)a2, (int *)a3, a4); /*0x4bb81d*/
      }
      if ( g_DDraw_Initialized || stru_A8EB00.?[412] ) /*0x4bb690*/
      {
        v5 = this->DSurface_field_0x1C[0]; /*0x4bb696*/
        if ( !v5 || (*(int (__stdcall **)(int))(*(unsigned int *)v5 + 96))(this->DSurface_field_0x1C[0]) != -2005532222 ) /*0x4bb6a8*/
          goto LABEL_15; /*0x4bb6a8*/
        if ( !(*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb6c1*/
          && !(*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
        {
          DSurface_field_0xC = this->DSurface_field_0xC; /*0x4bb6cc*/
          if ( (int)DSurface_field_0xC > 0 ) /*0x4bb6d1*/
          {
            DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4bb6d3*/
            this->DSurface_field_0xC = 0; /*0x4bb6db*/
            (*((void (__thiscall **)(DSurface *, unsigned int, unsigned int))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb6de*/
            ++this->DSurface_field_0xC; /*0x4bb6e7*/
            (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb6ec*/
            this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bb6ef*/
          }
  LABEL_15:
          v8 = (int *)(*((int (__thiscall **)(DSurface *, char *))this->DSurface_field_0x0 + 30))(this, v32); /*0x4bb6f2*/
          v9 = ClipRectIntersection(v31, (int *)a2, v8, 0, 0); /*0x4bb710*/
          v30[0] = *v9; /*0x4bb719*/
          v30[1] = v9[1]; /*0x4bb722*/
          v30[2] = v9[2]; /*0x4bb729*/
          v10 = *(unsigned int *)a3; /*0x4bb72d*/
          v11 = v9[3]; /*0x4bb72f*/
          v12 = *(unsigned int *)a2; /*0x4bb732*/
          v13 = *(unsigned int *)(a2 + 4); /*0x4bb734*/
          v30[3] = v11; /*0x4bb737*/
          v14 = *(unsigned int *)(a3 + 4); /*0x4bb73b*/
          v25 = v10 + v12; /*0x4bb740*/
          v15 = v13 + v14; /*0x4bb748*/
          v16 = *(unsigned int *)(a3 + 8); /*0x4bb74b*/
          v17 = *(unsigned int *)(a3 + 12); /*0x4bb74e*/
          v26 = v15; /*0x4bb751*/
          v27 = v16; /*0x4bb755*/
          v28 = v17; /*0x4bb762*/
          v18 = ClipRectIntersection(v31, &v25, v30, 0, 0); /*0x4bb76b*/
          v19 = *v18; /*0x4bb76d*/
          v25 = *v18; /*0x4bb76f*/
          v20 = v18[1]; /*0x4bb773*/
          v26 = v20; /*0x4bb776*/
          v21 = v18[2]; /*0x4bb77a*/
          v27 = v21; /*0x4bb77d*/
          v22 = v18[3]; /*0x4bb781*/
          v28 = v22; /*0x4bb786*/
          if ( v21 > 0 && v22 > 0 ) /*0x4bb792*/
          {
            v23 = this->DSurface_field_0x1C[0]; /*0x4bb79c*/
            v29[0] = v19; /*0x4bb79f*/
            v29[2] = v19 + v21; /*0x4bb7a3*/
            v29[3] = v20 + v22; /*0x4bb7a7*/
            v29[1] = v20; /*0x4bb7b6*/
            memset(v33, 0, sizeof(v33)); /*0x4bb7ba*/
            v33[20] = a4; /*0x4bb7c8*/
            v33[0] = 100; /*0x4bb7da*/
            return (*(int (__stdcall **)(int, unsigned int *, unsigned int, unsigned int, int, unsigned int *))(*(unsigned int *)v23 + 20))( /*0x4bb7f9*/
                     v23,
                     v29,
                     0,
                     0,
                     16778240,
                     v33) == 0;
          }
        }
      }
    }
    return 0; /*0x4bb7ef*/
}
// link stub (no binary body yet)
 bool gamemd::DisplayClass::ConvertAction(const CellStruct& cell, bool shrouded, ObjectClass* object, Action action, uint32_t unk) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::MapClass::DraggingInProgress() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::CreateFile() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::DeleteFile() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::Exists(bool a0) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::HasHandle() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::Open(gamemd::FileAccessMode) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::OpenEx(const char* a0, gamemd::FileAccessMode) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::CanLock(uint32_t unk1, uint32_t unk2)
{
    int result; // eax
    int v5; // eax
    unsigned int v6[27]; // [esp+4h] [ebp-6Ch] BYREF

    result = (int)this->DSurface_field_0xC; /*0x4baec6*/
    if ( !result ) /*0x4baecb*/
    {
      memset(v6, 0, sizeof(v6)); /*0x4baed9*/
      v5 = this->DSurface_field_0x1C[0]; /*0x4baedb*/
      v6[0] = 108; /*0x4baee6*/
      result = (*(int (__stdcall **)(int, unsigned int, unsigned int *, unsigned int, unsigned int))(*(unsigned int *)v5 + 100))(v5, 0, v6, 0, 0); /*0x4baef4*/
      if ( result ) /*0x4baefa*/
      {
        IDA_LOBYTE(result) = 0; /*0x4baefc*/
        return result; /*0x4baf02*/
      }
      result = (*(int (__stdcall **)(int, unsigned int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 128))( /*0x4baf10*/
                 this->DSurface_field_0x1C[0],
                 v6[9]);
    }
    IDA_LOBYTE(result) = 1; /*0x4baf16*/
    return result; /*0x4baefe*/
}
// link stub (no binary body yet)
 bool gamemd::XSurface::CheckBltStatus()
{
    return (*(int (__stdcall **)(int, int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 52))( /*0x4baf30*/
             this->DSurface_field_0x1C[0],
             1) == 0;
}
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawDashedLineStipple(const Point2D& start, const Point2D& end, uint16_t color, const uint8_t stipple[16], int dash_offset, bool update_z)
{
    int v7; // ebx
    int v8; // edi
    int v9; // ebp
    bool v10; // cc
    signed int v11; // esi
    signed int v12; // eax
    int v13; // esi
    __int16 *v14; // eax
    int v15; // edi
    int v16; // ecx
    int v17; // esi
    int v18; // ecx
    int v19; // eax
    int v20; // eax
    int v21; // esi
    int v22; // ebp
    int v23; // edi
    int v24; // eax
    int v25; // ebx
    int v26; // eax
    int v27; // ebp
    int v28; // eax
    int v29; // ecx
    int i; // eax
    int v31; // esi
    int v32; // edx
    int v33; // ecx
    int v34; // edi
    int v35; // esi
    int v38; // [esp+14h] [ebp-Ch]
    int v39; // [esp+18h] [ebp-8h]
    int v40; // [esp+1Ch] [ebp-4h]
    int v41; // [esp+24h] [ebp+4h]
    int *v42; // [esp+28h] [ebp+8h]
    __int16 *v43; // [esp+34h] [ebp+14h]

    v7 = *a2; /*0x7ba8cd*/
    v40 = a2[1]; /*0x7ba8cf*/
    v8 = *a3; /*0x7ba8dc*/
    v9 = a3[1]; /*0x7ba8de*/
    v10 = *a2 <= *a3; /*0x7ba8e1*/
    v41 = 1; /*0x7ba8e3*/
    if ( v10 ) /*0x7ba8eb*/
    {
      v13 = a6; /*0x7ba936*/
    }
    else
    {
      v7 = *a3; /*0x7ba8ed*/
      v8 = *a2; /*0x7ba8ef*/
      v9 = a2[1]; /*0x7ba8f3*/
      v40 = a3[1]; /*0x7ba8f8*/
      v11 = abs32(*a3 - *a2); /*0x7ba907*/
      v12 = abs32(v40 - v9) + 1; /*0x7ba90e*/
      if ( v11 < v12 ) /*0x7ba911*/
        v11 = v12; /*0x7ba913*/
      v13 = (a6 + v11) % 16; /*0x7ba927*/
      v41 = -1; /*0x7ba92c*/
    }
    v42 = (int *)(*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 112))(this); /*0x7ba947*/
    v14 = (__int16 *)(*(int (__thiscall **)(XSurface *, int, int))(*(unsigned int *)this->Surface + 92))(this, v7, v40); /*0x7ba94f*/
    v43 = v14; /*0x7ba954*/
    if ( v14 )
    {
      if ( v40 == v9 )
      {
        v15 = v8 - v7; /*0x7ba966*/
        if ( v15 >= 0 )
        {
          v16 = v15 + 1; /*0x7ba972*/
          do
          {
            v17 = v13 + (v13 < 0 ? 0x10 : 0);
            if ( v17 >= 16 ) /*0x7ba983*/
              v17 -= 16; /*0x7ba985*/
            if ( *(unsigned char *)(a5 + v17) ) /*0x7ba988*/
              *v14 = a4; /*0x7ba98e*/
            ++v14; /*0x7ba995*/
            v13 = v41 + v17; /*0x7ba998*/
            --v16; /*0x7ba99a*/
          }
          while ( v16 );
        }
      }
      else if ( v7 == v8 )
      {
        if ( v40 <= v9 ) /*0x7ba9ac*/
          v18 = (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 116))(this); /*0x7ba9be*/
        else
          v18 = -(*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 116))(this); /*0x7ba9b5*/
        v19 = abs32(v9 - v40); /*0x7ba9cb*/
        if ( v19 >= 0 )
        {
          v20 = v19 + 1; /*0x7ba9db*/
          do
          {
            v21 = v13 + (v13 < 0 ? 0x10 : 0);
            if ( v21 >= 16 ) /*0x7ba9e6*/
              v21 -= 16; /*0x7ba9e8*/
            if ( *(unsigned char *)(a5 + v21) ) /*0x7ba9eb*/
            {
              if ( v42 == (int *)1 ) /*0x7ba9fc*/
                *(unsigned char *)v43 = a4; /*0x7ba9fe*/
              else
                *v43 = a4; /*0x7baa02*/
            }
            v13 = v41 + v21; /*0x7baa0f*/
            --v20; /*0x7baa11*/
            v43 = (__int16 *)((char *)v43 + v18); /*0x7baa12*/
          }
          while ( v20 );
        }
      }
      else
      {
        v22 = v9 - v40; /*0x7baa1d*/
        v23 = v8 - v7; /*0x7baa23*/
        v24 = (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 116))(this); /*0x7baa27*/
        v25 = v24; /*0x7baa2a*/
        v39 = v24; /*0x7baa2e*/
        if ( v22 < 0 ) /*0x7baa32*/
        {
          v25 = -v24; /*0x7baa34*/
          v39 = -v24; /*0x7baa36*/
        }
        v26 = v22; /*0x7baa3a*/
        v27 = 2 * v23; /*0x7baa3c*/
        v28 = abs32(v26); /*0x7baa42*/
        v38 = 2 * v28; /*0x7baa49*/
        if ( v23 <= v28 )
        {
          v32 = 0; /*0x7baabd*/
          v33 = v27 - v28; /*0x7baabf*/
          if ( v28 > 0 )
          {
            v34 = v28; /*0x7baac5*/
            do
            {
              v35 = v13 + (v13 < 0 ? 0x10 : 0);
              if ( v35 >= 16 ) /*0x7baad5*/
                v35 -= 16; /*0x7baad7*/
              if ( *(unsigned char *)(a5 + v35) ) /*0x7baade*/
              {
                if ( v42 == (int *)1 ) /*0x7baaef*/
                  *((unsigned char *)v43 + v32) = a4; /*0x7baaf1*/
                else
                  v43[v32] = a4; /*0x7baaf6*/
              }
              if ( v33 > 0 ) /*0x7baafc*/
              {
                ++v32; /*0x7bab02*/
                v33 -= v38; /*0x7bab03*/
              }
              v33 += v27; /*0x7bab09*/
              v43 = (__int16 *)((char *)v43 + v39); /*0x7bab0b*/
              v13 = v41 + v35; /*0x7bab13*/
              --v34; /*0x7bab15*/
            }
            while ( v34 );
          }
        }
        else
        {
          v29 = 2 * v28 - v23; /*0x7baa4f*/
          for ( i = 0; i < v23; v13 = v41 + v31 )
          {
            v31 = v13 + (v13 < 0 ? 0x10 : 0);
            if ( v31 >= 16 ) /*0x7baa65*/
              v31 -= 16; /*0x7baa67*/
            if ( *(unsigned char *)(a5 + v31) ) /*0x7baa6e*/
            {
              if ( v42 == (int *)1 ) /*0x7baa79*/
                *((unsigned char *)v43 + i) = a4; /*0x7baa83*/
              else
                v43[i] = a4; /*0x7baa91*/
            }
            if ( v29 > 0 ) /*0x7baa97*/
            {
              v43 = (__int16 *)((char *)v43 + v25); /*0x7baa9f*/
              v29 -= 2 * v23; /*0x7baaa6*/
            }
            v29 += v38; /*0x7baaac*/
            ++i; /*0x7baab2*/
          }
        }
      }
      (*(void (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 96))(this); /*0x7bab1e*/
    }
    return v13; /*0x7bab23*/
}
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawGradientLine(const RectangleStruct& clip_rect, const Point2D& start, const Point2D& end, const uint8_t* color_from, const uint8_t* color_to, float* gradient_start, float* gradient_step)
{
    DSurface *v8; // ebp
    int *v9; // eax
    int *v10; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // eax
    int v14; // ecx
    unsigned short *v15; // ebx
    float *v16; // esi
    float *v17; // edi
    unsigned char *v18; // eax
    unsigned __int8 v19; // dl
    double v20; // st7
    char v22; // c0
    int v24; // eax
    int v25; // eax
    float *v26; // esi
    float *v27; // edi
    unsigned char *v28; // eax
    unsigned __int8 v29; // dl
    double v30; // st7
    char v32; // c0
    bool v33; // zf
    int v34; // esi
    int v35; // edi
    int v36; // eax
    int v37; // eax
    int v38; // ebx
    int v39; // ebp
    float *v40; // esi
    float *v41; // edi
    unsigned char *v42; // eax
    unsigned __int8 v43; // dl
    double v44; // st7
    char v46; // c0
    int v47; // ebx
    float *v48; // esi
    float *v49; // edi
    int v50; // ebp
    unsigned char *v51; // eax
    unsigned __int8 v52; // dl
    double v53; // st7
    char v55; // c0
    int v57; // [esp+10h] [ebp-48h]
    int v58; // [esp+14h] [ebp-44h]
    int v59; // [esp+14h] [ebp-44h]
    int v60; // [esp+18h] [ebp-40h] BYREF
    int v61; // [esp+1Ch] [ebp-3Ch]
    int v62; // [esp+20h] [ebp-38h] BYREF
    int v63; // [esp+24h] [ebp-34h]
    int v64; // [esp+28h] [ebp-30h] BYREF
    int v65; // [esp+2Ch] [ebp-2Ch]
    int v66; // [esp+30h] [ebp-28h]
    int v67; // [esp+34h] [ebp-24h]
    unsigned char v68[16]; // [esp+38h] [ebp-20h] BYREF
    int v69[4]; // [esp+48h] [ebp-10h] BYREF
    unsigned short *v70; // [esp+5Ch] [ebp+4h]
    int v71; // [esp+5Ch] [ebp+4h]
    unsigned int *v72; // [esp+60h] [ebp+8h]
    int v73; // [esp+60h] [ebp+8h]
    unsigned int *v74; // [esp+64h] [ebp+Ch]
    int v75; // [esp+64h] [ebp+Ch]

    v8 = this; /*0x4bf755*/
    v9 = (int *)(*((int (__thiscall **)(DSurface *, unsigned char *))this->DSurface_field_0x0 + 30))(this, v68); /*0x4bf766*/
    v10 = ClipRectIntersection(v69, (int *)a2, v9, 0, 0); /*0x4bf776*/
    v64 = *v10; /*0x4bf77d*/
    v65 = v10[1]; /*0x4bf784*/
    v66 = v10[2]; /*0x4bf78b*/
    v67 = v10[3]; /*0x4bf796*/
    v11 = v65 + a3[1]; /*0x4bf7a1*/
    v60 = v64 + *a3; /*0x4bf7a3*/
    v61 = v11; /*0x4bf7a7*/
    v12 = v64 + *a4; /*0x4bf7b6*/
    v63 = v65 + a4[1]; /*0x4bf7b8*/
    v62 = v12; /*0x4bf7c9*/
    if ( (unsigned __int8)ClipLine(&v60, &v62, &v64) ) /*0x4bf7cd*/
    {
      v13 = v60; /*0x4bf7da*/
      if ( v60 > v62 ) /*0x4bf7e4*/
      {
        v14 = v61; /*0x4bf7e6*/
        v60 = v62; /*0x4bf7ea*/
        v62 = v13; /*0x4bf7f2*/
        v61 = v63; /*0x4bf7f6*/
        v63 = v14; /*0x4bf7fa*/
      }
      if ( (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 28))(v8) == 2 ) /*0x4bf809*/
      {
        v15 = (unsigned short *)(*((int (__thiscall **)(DSurface *, int, int))v8->DSurface_field_0x0 + 23))(v8, v60, v61); /*0x4bf821*/
        v70 = v15; /*0x4bf825*/
        if ( v15 ) /*0x4bf829*/
        {
          if ( v61 == v63 ) /*0x4bf83a*/
          {
            v71 = 0; /*0x4bf84a*/
            if ( v62 - v60 >= 0 ) /*0x4bf852*/
            {
              v16 = a8; /*0x4bf858*/
              v17 = a7; /*0x4bf85c*/
              do /*0x4bf874*/
              {
                v18 = Color::Lerp2((Color *)&a7, a5, a6, *v16); /*0x4bf874*/
                IDA_LOWORD(a8) = *(unsigned short *)v18; /*0x4bf87f*/
                v19 = v18[2] >> g_BitMask_Red; /*0x4bf895*/
                IDA_LOWORD(v18) = (unsigned __int8)(IDA_BYTE1(a8) >> g_BitMask_Blue); /*0x4bf8ab*/
                *v15 = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bf8cd*/
                     | ((unsigned int)v18 << g_BitMask_Green)
                     | (v19 << g_BitShift_Blue);
                v20 = *v17 + *v16; /*0x4bf8d2*/
                *v16 = v20; /*0x4bf8da*/
                if ( v22 && *v17 < 0.0 ) /*0x4bf8f0*/
                {
                  *v16 = 0.0; /*0x4bf8f4*/
                }
                else
                {
                  if ( v20 <= 1.0 || *v17 <= 0.0 ) /*0x4bf916*/
                    goto LABEL_16; /*0x4bf916*/
                  *v16 = 1.0; /*0x4bf918*/
                }
                *v17 = -*v17; /*0x4bf922*/
  LABEL_16:
                ++v15; /*0x4bf924*/
                ++v71; /*0x4bf938*/
              }
              while ( v71 <= v62 - v60 ); /*0x4bf874*/
            }
  LABEL_17:
            (*((void (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 24))(v8); /*0x4bf942*/
            return 1; /*0x4bf953*/
          }
          if ( v60 == v62 ) /*0x4bf960*/
          {
            if ( v61 <= v63 ) /*0x4bf968*/
              v24 = (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf97b*/
            else
              v24 = -(*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf972*/
            v72 = (unsigned int *)v24; /*0x4bf982*/
            v25 = abs32(v63 - v61); /*0x4bf98f*/
            if ( v25 < 0 ) /*0x4bf991*/
              goto LABEL_17; /*0x4bf991*/
            v26 = a8; /*0x4bf997*/
            v27 = a7; /*0x4bf99b*/
            v74 = (unsigned int *)(v25 + 1); /*0x4bf9a4*/
            while ( 1 ) /*0x4bf9b8*/
            {
              v28 = Color::Lerp2((Color *)&a7, a5, a6, *v26); /*0x4bf9b8*/
              IDA_LOWORD(a8) = *(unsigned short *)v28; /*0x4bf9c3*/
              v29 = v28[2] >> g_BitMask_Red; /*0x4bf9d9*/
              IDA_LOWORD(v28) = (unsigned __int8)(IDA_BYTE1(a8) >> g_BitMask_Blue); /*0x4bf9ef*/
              *v70 = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfa15*/
                   | ((unsigned int)v28 << g_BitMask_Green)
                   | (v29 << g_BitShift_Blue);
              v30 = *v27 + *v26; /*0x4bfa1a*/
              *v26 = v30; /*0x4bfa22*/
              if ( v32 && *v27 < 0.0 ) /*0x4bfa38*/
              {
                *v26 = 0.0; /*0x4bfa3c*/
              }
              else
              {
                if ( v30 <= 1.0 || *v27 <= 0.0 ) /*0x4bfa5e*/
                  goto LABEL_31; /*0x4bfa5e*/
                *v26 = 1.0; /*0x4bfa60*/
              }
              *v27 = -*v27; /*0x4bfa6a*/
  LABEL_31:
              v33 = v74 == (unsigned int *)1; /*0x4bfa6c*/
              v70 = (unsigned short *)((char *)v70 + (unsigned int)v72); /*0x4bfa7b*/
              v74 = (unsigned int *)((char *)v74 - 1); /*0x4bfa7f*/
              if ( v33 ) /*0x4bfa83*/
                goto LABEL_17; /*0x4bfa83*/
            }
          }
          v34 = v63 - v61; /*0x4bfaa1*/
          v35 = v62 - v60; /*0x4bfaa6*/
          v58 = v62 - v60; /*0x4bfaaa*/
          v36 = (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bfaae*/
          v73 = v36; /*0x4bfab3*/
          if ( v34 < 0 ) /*0x4bfab7*/
            v73 = -v36; /*0x4bfabb*/
          v57 = 2 * v35; /*0x4bfac7*/
          v37 = abs32(v34); /*0x4bfacb*/
          v75 = 2 * v37; /*0x4bfad2*/
          if ( v35 > v37 ) /*0x4bfad6*/
          {
            v38 = 0; /*0x4bfade*/
            v39 = 2 * v37 - v35; /*0x4bfae0*/
            if ( v35 < 0 ) /*0x4bfae4*/
            {
  LABEL_61:
              v8 = this; /*0x4bfd08*/
              goto LABEL_17; /*0x4bfd08*/
            }
            v40 = a8; /*0x4bfaea*/
            v41 = a7; /*0x4bfaee*/
            while ( 1 ) /*0x4bfb06*/
            {
              v42 = Color::Lerp2((Color *)&a7, a5, a6, *v40); /*0x4bfb06*/
              IDA_LOWORD(a8) = *(unsigned short *)v42; /*0x4bfb11*/
              v43 = v42[2] >> g_BitMask_Red; /*0x4bfb27*/
              IDA_LOWORD(v42) = (unsigned __int8)(IDA_BYTE1(a8) >> g_BitMask_Blue); /*0x4bfb3d*/
              v70[v38] = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfb63*/
                       | ((unsigned int)v42 << g_BitMask_Green)
                       | (v43 << g_BitShift_Blue);
              v44 = *v41 + *v40; /*0x4bfb69*/
              *v40 = v44; /*0x4bfb71*/
              if ( v46 && *v41 < 0.0 ) /*0x4bfb87*/
              {
                *v40 = 0.0; /*0x4bfb8b*/
              }
              else
              {
                if ( v44 <= 1.0 || *v41 <= 0.0 ) /*0x4bfbad*/
                  goto LABEL_45; /*0x4bfbad*/
                *v40 = 1.0; /*0x4bfbaf*/
              }
              *v41 = -*v41; /*0x4bfbb9*/
  LABEL_45:
              if ( v39 > 0 ) /*0x4bfbbd*/
              {
                v39 -= v57; /*0x4bfbc9*/
                v70 = (unsigned short *)((char *)v70 + v73); /*0x4bfbcb*/
              }
              v39 += v75; /*0x4bfbd7*/
              if ( ++v38 > v58 ) /*0x4bfbdc*/
              {
                (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bfbeb*/
                return 1; /*0x4bfbf7*/
              }
            }
          }
          v47 = 2 * v35 - v37; /*0x4bfbfa*/
          if ( v37 < 0 ) /*0x4bfbfe*/
            goto LABEL_17; /*0x4bfbfe*/
          v48 = a8; /*0x4bfc04*/
          v49 = a7; /*0x4bfc08*/
          v50 = 0; /*0x4bfc0c*/
          v59 = v37 + 1; /*0x4bfc0f*/
          while ( 1 ) /*0x4bfc27*/
          {
            v51 = Color::Lerp2((Color *)&a7, a5, a6, *v48); /*0x4bfc27*/
            IDA_LOWORD(a8) = *(unsigned short *)v51; /*0x4bfc32*/
            v52 = v51[2] >> g_BitMask_Red; /*0x4bfc48*/
            IDA_LOWORD(v51) = (unsigned __int8)(IDA_BYTE1(a8) >> g_BitMask_Blue); /*0x4bfc5e*/
            v70[v50] = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfc84*/
                     | ((unsigned int)v51 << g_BitMask_Green)
                     | (v52 << g_BitShift_Blue);
            v53 = *v49 + *v48; /*0x4bfc8a*/
            *v48 = v53; /*0x4bfc92*/
            if ( v55 && *v49 < 0.0 ) /*0x4bfca8*/
            {
              *v48 = 0.0; /*0x4bfcac*/
            }
            else
            {
              if ( v53 <= 1.0 || *v49 <= 0.0 ) /*0x4bfcce*/
                goto LABEL_58; /*0x4bfcce*/
              *v48 = 1.0; /*0x4bfcd0*/
            }
            *v49 = -*v49; /*0x4bfcda*/
  LABEL_58:
            if ( v47 > 0 ) /*0x4bfcde*/
            {
              ++v50; /*0x4bfce4*/
              v47 -= v75; /*0x4bfce7*/
            }
            v47 += v57; /*0x4bfcf1*/
            v33 = v59 == 1; /*0x4bfcf9*/
            v70 = (unsigned short *)((char *)v70 + v73); /*0x4bfcfa*/
            --v59; /*0x4bfcfe*/
            if ( v33 ) /*0x4bfd02*/
              goto LABEL_61; /*0x4bfd02*/
          }
        }
      }
    }
    return 0; /*0x4bf94b*/
}
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawLineFaded(const Point2D& start, const Point2D& end, const uint8_t* stipple_pattern, int fade_start, int fade_end, bool z_buffer, float gradient_start, float gradient_step, bool flip_dir) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawLineModulated(const Point2D& start, const Point2D& end, int mod_strength, int fade_start, int fade_end, bool update_z_buffer)
{
    double v9; // st7
    int (__stdcall **DSurface_field_0x0)(unsigned int *); // eax
    int *v11; // eax
    int *v12; // eax
    int v13; // esi
    int v14; // edi
    int v15; // ecx
    int v16; // eax
    int v17; // ecx
    int v18; // esi
    int v19; // edx
    int v20; // ebp
    int v21; // ebx
    int v22; // edi
    int v23; // ebx
    int v24; // ebp
    int v25; // eax
    int v26; // eax
    int v27; // eax
    unsigned int v28; // eax
    int v29; // eax
    int v30; // eax
    int v31; // eax
    unsigned int v32; // eax
    int v33; // ebx
    int v34; // esi
    int Stream_field_04; // ebp
    int v36; // ecx
    int v37; // ebp
    int v38; // esi
    int v39; // edi
    int v40; // ebp
    int v41; // eax
    int v42; // ecx
    int v43; // esi
    int v44; // eax
    int v45; // edx
    int v46; // ebp
    Stream *v47; // esi
    unsigned __int16 v48; // ax
    int v49; // edx
    int v50; // eax
    int v51; // esi
    int v52; // edi
    unsigned short *v53; // eax
    int v54; // edx
    unsigned short *v55; // ecx
    int v56; // ecx
    unsigned short *v57; // eax
    bool v58; // zf
    Stream *v60; // edx
    unsigned __int16 v61; // ax
    int v62; // edx
    int v63; // eax
    int v64; // esi
    int v65; // esi
    unsigned short *v66; // eax
    unsigned short *v67; // ecx
    int v68; // ecx
    unsigned short *v69; // eax
    Stream *v70; // esi
    unsigned __int16 v71; // ax
    int v72; // edx
    int v73; // eax
    int v74; // esi
    int v75; // edx
    unsigned short *v76; // eax
    int v77; // ecx
    int v78; // edi
    unsigned short *v79; // eax
    unsigned short *v80; // ecx
    double v81; // [esp+4h] [ebp-80h]
    double v82; // [esp+4h] [ebp-80h]
    int v83; // [esp+1Ch] [ebp-68h]
    int v84; // [esp+20h] [ebp-64h]
    int v85; // [esp+24h] [ebp-60h]
    int v86; // [esp+28h] [ebp-5Ch]
    int v87; // [esp+2Ch] [ebp-58h]
    int v88; // [esp+30h] [ebp-54h]
    int v89; // [esp+34h] [ebp-50h]
    int v90; // [esp+34h] [ebp-50h]
    int v91; // [esp+34h] [ebp-50h]
    int v92[2]; // [esp+38h] [ebp-4Ch] BYREF
    int v93; // [esp+40h] [ebp-44h] BYREF
    int v94; // [esp+44h] [ebp-40h]
    unsigned int v95[5]; // [esp+50h] [ebp-34h] BYREF
    int v96; // [esp+64h] [ebp-20h] BYREF
    int v97; // [esp+68h] [ebp-1Ch]
    int v98[2]; // [esp+6Ch] [ebp-18h] BYREF
    int v99; // [esp+74h] [ebp-10h] BYREF
    int v100; // [esp+78h] [ebp-Ch]
    int v101; // [esp+7Ch] [ebp-8h]
    int v102; // [esp+80h] [ebp-4h]
    int v103; // [esp+88h] [ebp+4h]
    int v104; // [esp+88h] [ebp+4h]
    int pad_0; // [esp+8Ch] [ebp+8h]
    unsigned int *v106; // [esp+90h] [ebp+Ch]
    unsigned int *v107; // [esp+90h] [ebp+Ch]
    int v108; // [esp+90h] [ebp+Ch]
    unsigned int *v109; // [esp+90h] [ebp+Ch]
    int v110; // [esp+98h] [ebp+14h]
    int v111; // [esp+98h] [ebp+14h]
    int v112; // [esp+9Ch] [ebp+18h]
    int v113; // [esp+9Ch] [ebp+18h]
    int v114; // [esp+9Ch] [ebp+18h]
    int v115; // [esp+9Ch] [ebp+18h]
    int v116; // [esp+9Ch] [ebp+18h]
    unsigned short *SamplePosition; // [esp+9Ch] [ebp+18h]

    DSurface_field_0x0 = (int (__stdcall **)(unsigned int *))this->DSurface_field_0x0; /*0x4bbca3*/
    v95[0] = this; /*0x4bbcae*/
    v11 = (int *)DSurface_field_0x0[30](&v95[1]); /*0x4bbcb2*/
    v12 = ClipRectIntersection(&v93, (int *)a3, v11, 0, 0); /*0x4bbcc2*/
    v13 = *v12; /*0x4bbcc9*/
    v99 = *v12; /*0x4bbccb*/
    v14 = v12[1]; /*0x4bbccf*/
    v100 = v14; /*0x4bbcd2*/
    v101 = v12[2]; /*0x4bbcd9*/
    v15 = v12[3]; /*0x4bbcdd*/
    v102 = v15; /*0x4bbce2*/
    if ( v101 || v15 ) /*0x4bbcea*/
    {
      v16 = v13 + *a4; /*0x4bbd08*/
      v17 = v13 + *a5; /*0x4bbd0a*/
      v18 = a8; /*0x4bbd0c*/
      v19 = v14 + a4[1]; /*0x4bbd13*/
      v20 = v16; /*0x4bbd15*/
      v21 = v14 + a5[1]; /*0x4bbd17*/
      v22 = a7; /*0x4bbd19*/
      v96 = v16; /*0x4bbd22*/
      v97 = v19; /*0x4bbd26*/
      v98[0] = v17; /*0x4bbd2a*/
      v98[1] = v21; /*0x4bbd2e*/
      if ( v16 > v17 ) /*0x4bbd32*/
      {
        v20 = v17; /*0x4bbd34*/
        v22 = a8; /*0x4bbd36*/
        v18 = a7; /*0x4bbd38*/
        v96 = v17; /*0x4bbd3f*/
        v97 = v21; /*0x4bbd43*/
        v98[0] = v16; /*0x4bbd47*/
        v98[1] = v19; /*0x4bbd4b*/
      }
      v95[1] = v98[0]; /*0x4bbd5b*/
      v23 = v20; /*0x4bbd60*/
      v24 = v97; /*0x4bbd62*/
      v95[2] = v98[1]; /*0x4bbd6e*/
      if ( (unsigned __int8)ClipLine(&v96, v98, &v99) ) /*0x4bbd72*/
      {
        v106 = (unsigned int *)v18; /*0x4bbd8d*/
        v110 = v22; /*0x4bbd94*/
        if ( v98[0] != v95[1] || v98[1] != v95[2] ) /*0x4bbda1*/
        {
          v92[0] = v23 - v98[0]; /*0x4bbdb3*/
          v92[1] = v24 - v98[1]; /*0x4bbdb7*/
          v93 = v23 - v95[1]; /*0x4bbdc7*/
          v94 = v24 - v95[2]; /*0x4bbdcb*/
          Vector::TwoDMagnitudeMath(&v93); /*0x4bbdd3*/
          v103 = v25; /*0x4bbddc*/
          v9 = Vector::TwoDMagnitudeMath(v92); /*0x4bbde0*/
          v112 = v26; /*0x4bbde5*/
          __asm { fild [esp+78h+arg_14] } /*0x4bbdee*/
          v113 = v22 - v18; /*0x4bbdf7*/
          __asm /*0x4bbdfe*/
          {
            fidiv [esp+78h+arg_0]
            fild [esp+78h+arg_14]
            fmulp st(1), st
          }
          IDA_LOWORD(v27) = Math::RoundToInt(v9); /*0x4bbe0b*/
          v28 = abs32(v27); /*0x4bbe13*/
          if ( v22 >= v18 ) /*0x4bbe17*/
            v106 = (unsigned int *)(v22 - v28); /*0x4bbe28*/
          else
            v106 = (unsigned int *)(v22 + v28); /*0x4bbe1b*/
        }
        if ( v96 != v23 || v97 != v24 ) /*0x4bbe3d*/
        {
          v93 = v96 - v95[1]; /*0x4bbe52*/
          v94 = v97 - v95[2]; /*0x4bbe56*/
          __asm /*0x4bbe5a*/
          {
            fild dword ptr [esp+80h+var_4C.__pad_C]
            fild [esp+80h+var_4C.Vector_field_0x8]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fstp [esp+80h+var_84+4]; double
            fstp st
            fstp st
          }
          Math::Sqrt(v81); /*0x4bbe73*/
          IDA_LOWORD(v29) = Math::RoundToInt(v9); /*0x4bbe78*/
          v114 = v29; /*0x4bbe81*/
          v93 = v23 - v95[1]; /*0x4bbe90*/
          v94 = v24 - v95[2]; /*0x4bbe94*/
          __asm /*0x4bbe98*/
          {
            fild dword ptr [esp+80h+var_4C.__pad_C]
            fild [esp+80h+var_4C.Vector_field_0x8]
            fild [esp+80h+arg_14]
            fstp qword ptr [esp+50h]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fstp [esp+80h+var_84+4]; double
            fstp st
            fstp st
          }
          Math::Sqrt(v82); /*0x4bbebc*/
          IDA_LOWORD(v30) = Math::RoundToInt(v9); /*0x4bbec4*/
          v115 = v30; /*0x4bbec9*/
          __asm { fild [esp+78h+arg_14] } /*0x4bbed2*/
          v116 = v22 - v18; /*0x4bbedb*/
          __asm /*0x4bbee2*/
          {
            fdivr qword ptr [esp+48h]
            fild [esp+78h+arg_14]
            fmulp st(1), st
          }
          IDA_LOWORD(v31) = Math::RoundToInt(v9); /*0x4bbeef*/
          v32 = abs32(v31); /*0x4bbef7*/
          if ( v18 <= v22 ) /*0x4bbefb*/
            v110 = v18 + v32; /*0x4bbf0a*/
          else
            v110 = v18 - v32; /*0x4bbeff*/
        }
        v33 = v95[0]; /*0x4bbf11*/
        (*(void (__thiscall **)(unsigned int))(*(unsigned int *)v95[0] + 112))(v95[0]); /*0x4bbf19*/
        v34 = (*(int (__thiscall **)(int, int, int))(*(unsigned int *)v33 + 92))(v33, v96, v97); /*0x4bbf33*/
        v104 = v34; /*0x4bbf37*/
        if ( g_ZBufferDescriptor ) /*0x4bbf3b*/
        {
          Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4bbf45*/
          v95[2] = v97; /*0x4bbf4c*/
          SamplePosition = (unsigned short *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v96, v97 - Stream_field_04); /*0x4bbf5d*/
          v88 = -1; /*0x4bbf6d*/
          IDA_LOWORD(v36) = IDA_LOWORD(g_ZBufferDescriptor->Stream_field_04) + IDA_LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4bbf79*/
          pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4bbf80*/
          v37 = v110; /*0x4bbf8b*/
          v111 = v110 + v36 - v97 - v100; /*0x4bbf96*/
          if ( v34 ) /*0x4bbf9d*/
          {
            v38 = v98[1] - v97; /*0x4bbfb6*/
            v39 = v98[0] - v96; /*0x4bbfba*/
            v89 = v98[0] - v96; /*0x4bbfc0*/
            v40 = (int)v106 - v37; /*0x4bbfc4*/
            v41 = (*(int (__thiscall **)(int))(*(unsigned int *)v33 + 116))(v33); /*0x4bbfc6*/
            v87 = v41; /*0x4bbfcb*/
            if ( v38 < 0 ) /*0x4bbfcf*/
            {
              v87 = -v41; /*0x4bbfd3*/
              pad_0 = -pad_0; /*0x4bbfe0*/
              v88 = 1; /*0x4bbfe7*/
            }
            v83 = 1; /*0x4bbff6*/
            v42 = abs32(v38); /*0x4bc000*/
            if ( v40 < 0 ) /*0x4bc004*/
              v83 = -1; /*0x4bc006*/
            v43 = 2 * v42; /*0x4bc010*/
            v84 = 2 * v42; /*0x4bc016*/
            v44 = abs32(v40); /*0x4bc01a*/
            v45 = 2 * v39; /*0x4bc01c*/
            v85 = 2 * v39; /*0x4bc021*/
            v46 = 2 * v44; /*0x4bc025*/
            v86 = 2 * v44; /*0x4bc028*/
            if ( v44 > v39 && v44 > v42 ) /*0x4bc034*/
            {
              v92[0] = v43 - v44; /*0x4bc03e*/
              v90 = v45 - v44; /*0x4bc048*/
              if ( v44 > 0 ) /*0x4bc04c*/
              {
                v47 = g_ZBufferDescriptor; /*0x4bc052*/
                v107 = 0; /*0x4bc058*/
                v93 = v44; /*0x4bc05f*/
                do /*0x4bc27e*/
                {
                  if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc075*/
                  {
                    v48 = *(unsigned short *)((char *)v107 + v104); /*0x4bc092*/
                    IDA_LOBYTE(v95[1]) = (unsigned __int8)(v48 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc0ab*/
                    IDA_BYTE1(v95[1]) = (unsigned __int8)(v48 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc0cc*/
                    IDA_BYTE2(v95[1]) = (unsigned __int8)(v48 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc0d2*/
                    v49 = ((a6 * IDA_LOBYTE(v95[1])) >> 8) + IDA_LOBYTE(v95[1]); /*0x4bc0f7*/
                    v50 = ((a6 * IDA_BYTE2(v95[1])) >> 8) + IDA_BYTE2(v95[1]); /*0x4bc11e*/
                    if ( v50 > 255 ) /*0x4bc125*/
                      v50 = 255; /*0x4bc127*/
                    v51 = 255; /*0x4bc132*/
                    if ( ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]) <= 255 ) /*0x4bc137*/
                      v51 = ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]); /*0x4bc139*/
                    if ( v49 > 255 ) /*0x4bc141*/
                      v49 = 255; /*0x4bc143*/
                    *(unsigned short *)((char *)v107 + v104) = (v50 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc17b*/
                                                    | (v51 >> g_BitMask_Blue << g_BitMask_Green)
                                                    | (v49 >> g_BitShift_Green_0 << g_BitShift_Red);
                    if ( a9 ) /*0x4bc188*/
                      *SamplePosition = v111; /*0x4bc199*/
                    v47 = g_ZBufferDescriptor; /*0x4bc19c*/
                  }
                  v52 = v92[0]; /*0x4bc1a2*/
                  if ( v92[0] <= 0 ) /*0x4bc1a8*/
                  {
                    v54 = v111; /*0x4bc213*/
                  }
                  else
                  {
                    v52 = v92[0] - v86; /*0x4bc1c6*/
                    v104 += v87; /*0x4bc1c8*/
                    v53 = &SamplePosition[pad_0]; /*0x4bc1ce*/
                    if ( pad_0 <= 0 ) /*0x4bc1d1*/
                    {
                      v55 = &SamplePosition[pad_0]; /*0x4bc1f2*/
                      if ( (unsigned int)v53 < v47[1].Stream_field_04 ) /*0x4bc1f6*/
                        v55 = (unsigned short *)((char *)v53 + v47[1].Stream_field_0C); /*0x4bc1fb*/
                      SamplePosition = v55; /*0x4bc208*/
                      v54 = v88 + v111; /*0x4bc20f*/
                    }
                    else
                    {
                      if ( (unsigned int)v53 >= v47[1].Stream_field_08 ) /*0x4bc1d6*/
                        v53 = (unsigned short *)((char *)v53 - v47[1].Stream_field_0C); /*0x4bc1d8*/
                      SamplePosition = v53; /*0x4bc1e2*/
                      v54 = v88 + v111; /*0x4bc1e9*/
                    }
                  }
                  v56 = v90; /*0x4bc21a*/
                  if ( v90 > 0 ) /*0x4bc220*/
                  {
                    v57 = SamplePosition + 1; /*0x4bc233*/
                    v107 = (unsigned int *)((char *)v107 + 2); /*0x4bc23b*/
                    if ( (unsigned int)(SamplePosition + 1) >= v47[1].Stream_field_08 ) /*0x4bc242*/
                      v57 = (unsigned short *)((char *)v57 - v47[1].Stream_field_0C); /*0x4bc244*/
                    SamplePosition = v57; /*0x4bc247*/
                    v56 = v90 - v86; /*0x4bc252*/
                  }
                  v111 = v83 + v54; /*0x4bc25e*/
                  v90 = v85 + v56; /*0x4bc26b*/
                  v58 = v93 == 1; /*0x4bc275*/
                  v92[0] = v84 + v52; /*0x4bc276*/
                  --v93; /*0x4bc27a*/
                }
                while ( !v58 ); /*0x4bc27e*/
              }
              goto LABEL_50; /*0x4bc27e*/
            }
            if ( v39 <= v42 ) /*0x4bc29b*/
            {
              v93 = v45 - v42; /*0x4bc501*/
              v92[0] = v46 - v42; /*0x4bc50b*/
              if ( v42 > 0 ) /*0x4bc50f*/
              {
                v70 = g_ZBufferDescriptor; /*0x4bc515*/
                v109 = 0; /*0x4bc51b*/
                v91 = v42; /*0x4bc522*/
                do /*0x4bc728*/
                {
                  if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc538*/
                  {
                    v71 = *(unsigned short *)((char *)v109 + v104); /*0x4bc555*/
                    IDA_LOBYTE(v95[1]) = (unsigned __int8)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc56e*/
                    IDA_BYTE1(v95[1]) = (unsigned __int8)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc58f*/
                    IDA_BYTE2(v95[1]) = (unsigned __int8)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc595*/
                    v72 = ((a6 * IDA_LOBYTE(v95[1])) >> 8) + IDA_LOBYTE(v95[1]); /*0x4bc5ba*/
                    v73 = ((a6 * IDA_BYTE2(v95[1])) >> 8) + IDA_BYTE2(v95[1]); /*0x4bc5e1*/
                    if ( v73 > 255 ) /*0x4bc5e8*/
                      v73 = 255; /*0x4bc5ea*/
                    v74 = 255; /*0x4bc5f5*/
                    if ( ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]) <= 255 ) /*0x4bc5fa*/
                      v74 = ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]); /*0x4bc5fc*/
                    if ( v72 > 255 ) /*0x4bc604*/
                      v72 = 255; /*0x4bc606*/
                    *(unsigned short *)((char *)v109 + v104) = (v73 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc63e*/
                                                    | (v74 >> g_BitMask_Blue << g_BitMask_Green)
                                                    | (v72 >> g_BitShift_Green_0 << g_BitShift_Red);
                    if ( a9 ) /*0x4bc64b*/
                      *SamplePosition = v111; /*0x4bc65c*/
                    v70 = g_ZBufferDescriptor; /*0x4bc65f*/
                  }
                  v75 = v93; /*0x4bc665*/
                  if ( v93 <= 0 ) /*0x4bc66b*/
                  {
                    v76 = SamplePosition; /*0x4bc698*/
                  }
                  else
                  {
                    v76 = SamplePosition + 1; /*0x4bc67e*/
                    v109 = (unsigned int *)((char *)v109 + 2); /*0x4bc686*/
                    if ( (unsigned int)(SamplePosition + 1) >= v70[1].Stream_field_08 ) /*0x4bc68d*/
                      v76 = (unsigned short *)((char *)v76 - v70[1].Stream_field_0C); /*0x4bc68f*/
                    v75 = v93 - v84; /*0x4bc692*/
                  }
                  v77 = v92[0]; /*0x4bc69f*/
                  v78 = v111; /*0x4bc6a3*/
                  if ( v92[0] > 0 ) /*0x4bc6ac*/
                  {
                    v78 = v83 + v111; /*0x4bc6b6*/
                    v77 = v92[0] - v84; /*0x4bc6b8*/
                  }
                  v93 = v85 + v75; /*0x4bc6c4*/
                  v92[0] = v86 + v77; /*0x4bc6d5*/
                  v79 = &v76[pad_0]; /*0x4bc6e2*/
                  v104 += v87; /*0x4bc6e4*/
                  if ( pad_0 <= 0 ) /*0x4bc6ea*/
                  {
                    v80 = v79; /*0x4bc700*/
                    if ( (unsigned int)v79 < v70[1].Stream_field_04 ) /*0x4bc704*/
                      v80 = (unsigned short *)((char *)v79 + v70[1].Stream_field_0C); /*0x4bc709*/
                    SamplePosition = v80; /*0x4bc70b*/
                  }
                  else
                  {
                    if ( (unsigned int)v79 >= v70[1].Stream_field_08 ) /*0x4bc6ef*/
                      v79 = (unsigned short *)((char *)v79 - v70[1].Stream_field_0C); /*0x4bc6f1*/
                    SamplePosition = v79; /*0x4bc6f4*/
                  }
                  v58 = v91 == 1; /*0x4bc71c*/
                  v111 = v88 + v78; /*0x4bc71d*/
                  --v91; /*0x4bc724*/
                }
                while ( !v58 ); /*0x4bc728*/
              }
              goto LABEL_50; /*0x4bc728*/
            }
            v108 = 0; /*0x4bc2a3*/
            v93 = v43 - v39; /*0x4bc2ac*/
            v92[0] = v46 - v39; /*0x4bc2b6*/
            if ( v39 <= 0 ) /*0x4bc2ba*/
            {
  LABEL_50:
              (*(void (__thiscall **)(unsigned int))(*(unsigned int *)v95[0] + 96))(v95[0]); /*0x4bc284*/
              return 1; /*0x4bc296*/
            }
            v60 = g_ZBufferDescriptor; /*0x4bc2c0*/
            while ( 1 ) /*0x4bc2c6*/
            {
              if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc2d8*/
              {
                v61 = *(unsigned short *)(v104 + 2 * v108); /*0x4bc2f5*/
                IDA_LOBYTE(v95[1]) = (unsigned __int8)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc30e*/
                IDA_BYTE1(v95[1]) = (unsigned __int8)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc32f*/
                IDA_BYTE2(v95[1]) = (unsigned __int8)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc335*/
                v62 = ((a6 * IDA_LOBYTE(v95[1])) >> 8) + IDA_LOBYTE(v95[1]); /*0x4bc35a*/
                v63 = ((a6 * IDA_BYTE2(v95[1])) >> 8) + IDA_BYTE2(v95[1]); /*0x4bc381*/
                if ( v63 > 255 ) /*0x4bc388*/
                  v63 = 255; /*0x4bc38a*/
                v64 = 255; /*0x4bc395*/
                if ( ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]) <= 255 ) /*0x4bc39a*/
                  v64 = ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]); /*0x4bc39c*/
                if ( v62 > 255 ) /*0x4bc3a4*/
                  v62 = 255; /*0x4bc3a6*/
                *(unsigned short *)(v104 + 2 * v108) = (v63 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc3de*/
                                            | (v64 >> g_BitMask_Blue << g_BitMask_Green)
                                            | (v62 >> g_BitShift_Green_0 << g_BitShift_Red);
                if ( a9 ) /*0x4bc3eb*/
                  *SamplePosition = v111; /*0x4bc3fc*/
                v60 = g_ZBufferDescriptor; /*0x4bc3ff*/
              }
              v65 = v93; /*0x4bc405*/
              if ( v93 <= 0 ) /*0x4bc40b*/
              {
                v66 = SamplePosition; /*0x4bc47c*/
                goto LABEL_73; /*0x4bc47c*/
              }
              v65 = v93 - v85; /*0x4bc429*/
              v104 += v87; /*0x4bc42b*/
              v66 = &SamplePosition[pad_0]; /*0x4bc431*/
              if ( pad_0 <= 0 ) /*0x4bc434*/
                break; /*0x4bc434*/
              if ( (unsigned int)v66 < v60[1].Stream_field_08 ) /*0x4bc439*/
                goto LABEL_71; /*0x4bc439*/
              v66 = (unsigned short *)((char *)v66 - v60[1].Stream_field_0C); /*0x4bc445*/
              v111 += v88; /*0x4bc44d*/
  LABEL_73:
              v68 = v92[0]; /*0x4bc483*/
              if ( v92[0] > 0 ) /*0x4bc489*/
              {
                v111 += v83; /*0x4bc49c*/
                v68 = v92[0] - v85; /*0x4bc4a3*/
              }
              v69 = v66 + 1; /*0x4bc4a9*/
              v93 = v84 + v65; /*0x4bc4ae*/
              v92[0] = v86 + v68; /*0x4bc4b8*/
              if ( (unsigned int)v69 >= v60[1].Stream_field_08 ) /*0x4bc4c1*/
                v69 = (unsigned short *)((char *)v69 - v60[1].Stream_field_0C); /*0x4bc4c3*/
              SamplePosition = v69; /*0x4bc4ca*/
              if ( ++v108 >= v89 ) /*0x4bc4e2*/
                goto LABEL_50; /*0x4bc4e2*/
            }
            v67 = &SamplePosition[pad_0]; /*0x4bc459*/
            if ( (unsigned int)v66 < v60[1].Stream_field_04 ) /*0x4bc45d*/
              v67 = (unsigned short *)((char *)v66 + v60[1].Stream_field_0C); /*0x4bc462*/
            v66 = v67; /*0x4bc464*/
  LABEL_71:
            v111 += v88; /*0x4bc466*/
            goto LABEL_73; /*0x4bc47a*/
          }
        }
      }
    }
    return 0; /*0x4bc28d*/
}
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawLineZBuf(const Point2D& start, const Point2D& end, uint16_t color, int fade_start, int fade_end, bool update_z_buffer)
{
    double v9; // st7
    int (__stdcall **DSurface_field_0x0)(unsigned int *); // eax
    int *v11; // eax
    int *v12; // ecx
    int v13; // esi
    int v14; // edi
    int result; // eax
    int v16; // ecx
    int v17; // eax
    int v18; // ecx
    int v19; // ebx
    int v20; // edx
    int v21; // ebp
    int v22; // esi
    int v23; // edi
    int v24; // esi
    int v25; // ebp
    int v26; // eax
    int v27; // eax
    int v28; // eax
    unsigned int v29; // eax
    int v30; // eax
    int v31; // eax
    int v32; // eax
    unsigned int v33; // eax
    int v34; // ebp
    int v35; // esi
    int v36; // ebx
    int Stream_field_04; // edi
    unsigned short *SamplePosition; // esi
    int v39; // edi
    unsigned short *v40; // edi
    int v41; // ecx
    int v42; // ebx
    int v43; // ebp
    int v44; // eax
    int v45; // ecx
    int v46; // eax
    int v47; // ebp
    int v48; // ebx
    Stream *v49; // edx
    unsigned int *v50; // ebp
    int v51; // eax
    int v52; // edx
    int v53; // eax
    unsigned short *v54; // eax
    unsigned short *v55; // eax
    int v56; // ebx
    Stream *v57; // edx
    unsigned int *v58; // ebp
    int v59; // eax
    int v60; // edx
    unsigned short *v61; // eax
    unsigned short *v62; // eax
    int v63; // eax
    int v64; // ebp
    unsigned int *v65; // edx
    Stream *v66; // ecx
    int v67; // ebx
    int v68; // eax
    int v69; // eax
    unsigned short *v70; // eax
    unsigned short *v71; // eax
    double v72; // [esp+4h] [ebp-7Ch]
    double v73; // [esp+4h] [ebp-7Ch]
    double v74; // [esp+4h] [ebp-7Ch]
    double v75; // [esp+4h] [ebp-7Ch]
    int v76; // [esp+1Ch] [ebp-64h]
    int v77; // [esp+20h] [ebp-60h]
    int v78; // [esp+20h] [ebp-60h]
    int v79; // [esp+20h] [ebp-60h]
    int v80; // [esp+24h] [ebp-5Ch]
    int v81; // [esp+28h] [ebp-58h]
    int v82; // [esp+2Ch] [ebp-54h]
    int v83; // [esp+30h] [ebp-50h]
    int v84; // [esp+30h] [ebp-50h]
    int v85; // [esp+34h] [ebp-4Ch]
    int v86; // [esp+38h] [ebp-48h]
    double v87; // [esp+3Ch] [ebp-44h] BYREF
    unsigned int v88[5]; // [esp+4Ch] [ebp-34h] BYREF
    int v89; // [esp+60h] [ebp-20h] BYREF
    int v90; // [esp+64h] [ebp-1Ch]
    int v91[2]; // [esp+68h] [ebp-18h] BYREF
    int v92; // [esp+70h] [ebp-10h] BYREF
    int v93; // [esp+74h] [ebp-Ch]
    int v94; // [esp+78h] [ebp-8h]
    int v95; // [esp+7Ch] [ebp-4h]
    int v96; // [esp+84h] [ebp+4h]
    unsigned int *v97; // [esp+88h] [ebp+8h]
    int v98; // [esp+88h] [ebp+8h]
    int v99; // [esp+8Ch] [ebp+Ch]
    unsigned int *v100; // [esp+8Ch] [ebp+Ch]
    unsigned int *v101; // [esp+8Ch] [ebp+Ch]
    int v102; // [esp+94h] [ebp+14h]
    int v103; // [esp+94h] [ebp+14h]
    int v104; // [esp+94h] [ebp+14h]
    int v105; // [esp+94h] [ebp+14h]
    int v106; // [esp+98h] [ebp+18h]
    int v107; // [esp+98h] [ebp+18h]
    int v108; // [esp+98h] [ebp+18h]
    int v109; // [esp+98h] [ebp+18h]
    int v110; // [esp+98h] [ebp+18h]

    DSurface_field_0x0 = (int (__stdcall **)(unsigned int *))this->DSurface_field_0x0; /*0x4bfd33*/
    v88[0] = this; /*0x4bfd3e*/
    v11 = (int *)DSurface_field_0x0[30](&v88[1]); /*0x4bfd42*/
    v12 = ClipRectIntersection(&v87, (int *)a3, v11, 0, 0); /*0x4bfd57*/
    v13 = *v12; /*0x4bfd59*/
    v92 = *v12; /*0x4bfd5b*/
    v14 = v12[1]; /*0x4bfd5f*/
    v93 = v14; /*0x4bfd62*/
    result = v12[2]; /*0x4bfd66*/
    v94 = result; /*0x4bfd69*/
    v16 = v12[3]; /*0x4bfd6d*/
    v95 = v16; /*0x4bfd72*/
    if ( !result && !v16 ) /*0x4bfd7a*/
      goto LABEL_121; /*0x4bfd7a*/
    v17 = v13 + *a4; /*0x4bfd92*/
    v18 = v13 + *a5; /*0x4bfd94*/
    v19 = a7; /*0x4bfd99*/
    v20 = v14 + a4[1]; /*0x4bfda0*/
    v21 = v17; /*0x4bfda2*/
    v22 = v14 + a5[1]; /*0x4bfda4*/
    v23 = a8; /*0x4bfda6*/
    v89 = v17; /*0x4bfdaf*/
    v90 = v20; /*0x4bfdb3*/
    v91[0] = v18; /*0x4bfdb7*/
    v91[1] = v22; /*0x4bfdbb*/
    if ( v17 > v18 ) /*0x4bfdbf*/
    {
      v21 = v18; /*0x4bfdc1*/
      v19 = a8; /*0x4bfdc3*/
      v23 = a7; /*0x4bfdc5*/
      v89 = v18; /*0x4bfdcc*/
      v90 = v22; /*0x4bfdd0*/
      v91[0] = v17; /*0x4bfdd4*/
      v91[1] = v20; /*0x4bfdd8*/
    }
    v88[1] = v91[0]; /*0x4bfde8*/
    v24 = v21; /*0x4bfded*/
    v25 = v90; /*0x4bfdef*/
    v88[2] = v91[1]; /*0x4bfdfb*/
    result = ClipLine(&v89, v91, &v92); /*0x4bfdff*/
    if ( !(unsigned char)result ) /*0x4bfe06*/
      goto LABEL_121; /*0x4bfe06*/
    v97 = (unsigned int *)v23; /*0x4bfe1a*/
    v106 = v19; /*0x4bfe1e*/
    if ( v91[0] != v88[1] || v91[1] != v88[2] ) /*0x4bfe2b*/
    {
      IDA_LODWORD(v87) = v24 - v91[0]; /*0x4bfe3a*/
      __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe40*/
      IDA_HIDWORD(v87) = v25 - v91[1]; /*0x4bfe44*/
      __asm /*0x4bfe48*/
      {
        fild [esp+7Ch+var_40]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+7Ch+var_80+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v72); /*0x4bfe5d*/
      IDA_LOWORD(v26) = Math::RoundToInt(v9); /*0x4bfe62*/
      v102 = v26; /*0x4bfe6d*/
      IDA_LODWORD(v87) = v24 - v88[1]; /*0x4bfe7c*/
      __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe82*/
      IDA_HIDWORD(v87) = v25 - v88[2]; /*0x4bfe86*/
      __asm /*0x4bfe8a*/
      {
        fild [esp+7Ch+var_40]
        fild [esp+7Ch+arg_10]
        fstp [esp+7Ch+var_48+4]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+7Ch+var_80+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v73); /*0x4bfeaa*/
      IDA_LOWORD(v27) = Math::RoundToInt(v9); /*0x4bfeb2*/
      v103 = v27; /*0x4bfeb7*/
      __asm { fild [esp+74h+arg_10] } /*0x4bfec0*/
      v104 = v19 - v23; /*0x4bfec9*/
      __asm /*0x4bfed0*/
      {
        fdivr [esp+74h+var_48+4]
        fild [esp+74h+arg_10]
        fmulp st(1), st
      }
      IDA_LOWORD(v28) = Math::RoundToInt(v9); /*0x4bfedd*/
      v29 = abs32(v28); /*0x4bfee5*/
      if ( v19 >= v23 ) /*0x4bfee9*/
        v97 = (unsigned int *)(v19 - v29); /*0x4bfef7*/
      else
        v97 = (unsigned int *)(v19 + v29); /*0x4bfeed*/
    }
    if ( v89 == v24 && v90 == v25 ) /*0x4bff09*/
      goto LABEL_16; /*0x4bff09*/
    IDA_LODWORD(v87) = v89 - v88[1]; /*0x4bff18*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff20*/
    IDA_HIDWORD(v87) = v90 - v88[2]; /*0x4bff26*/
    __asm /*0x4bff2a*/
    {
      fild [esp+7Ch+var_40]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v74); /*0x4bff3f*/
    IDA_LOWORD(v30) = Math::RoundToInt(v9); /*0x4bff44*/
    v107 = v30; /*0x4bff49*/
    IDA_LODWORD(v87) = v24 - v88[1]; /*0x4bff56*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff5e*/
    IDA_HIDWORD(v87) = v25 - v88[2]; /*0x4bff64*/
    __asm /*0x4bff68*/
    {
      fild [esp+7Ch+var_40]
      fild [esp+7Ch+arg_14]
      fstp qword ptr [esp+7Ch+var_34+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v75); /*0x4bff88*/
    IDA_LOWORD(v31) = Math::RoundToInt(v9); /*0x4bff90*/
    v108 = v31; /*0x4bff95*/
    __asm { fild [esp+74h+arg_14] } /*0x4bff9e*/
    v109 = v19 - v23; /*0x4bffa7*/
    __asm /*0x4bffae*/
    {
      fdivr qword ptr [esp+74h+var_34+4]
      fild [esp+74h+arg_14]
      fmulp st(1), st
    }
    IDA_LOWORD(v32) = Math::RoundToInt(v9); /*0x4bffbb*/
    v33 = abs32(v32); /*0x4bffc3*/
    if ( v23 <= v19 ) /*0x4bffc7*/
    {
      v106 = v23 + v33; /*0x4bffd1*/
  LABEL_16:
      v34 = v106; /*0x4bffd8*/
      goto LABEL_17; /*0x4bffd8*/
    }
    v34 = v23 - v33; /*0x4bffcb*/
  LABEL_17:
    v35 = v88[0]; /*0x4bffdf*/
    (*(void (__thiscall **)(unsigned int))(*(unsigned int *)v88[0] + 112))(v88[0]); /*0x4bffe7*/
    result = (*(int (__thiscall **)(int, int, int))(*(unsigned int *)v35 + 92))(v35, v89, v90); /*0x4bfff8*/
    v36 = result; /*0x4c0001*/
    v105 = result; /*0x4c0005*/
    if ( !g_ZBufferDescriptor ) /*0x4c000c*/
      goto LABEL_121; /*0x4c000c*/
    Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4c0016*/
    v88[2] = v90; /*0x4c001d*/
    SamplePosition = (unsigned short *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v89, v90 - Stream_field_04); /*0x4c0034*/
    v39 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4); /*0x4c003a*/
    v88[2] = v90; /*0x4c003d*/
    v40 = (unsigned short *)StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v89, v90 - v39); /*0x4c004e*/
    v82 = -1; /*0x4c0055*/
    IDA_LOWORD(v41) = IDA_LOWORD(g_ZBufferDescriptor->Stream_field_04) + IDA_LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4c0061*/
    result = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4c0065*/
    v96 = result; /*0x4c0068*/
    v110 = v34 + v41 - v90 - v93; /*0x4c0076*/
    if ( !v36 ) /*0x4c007d*/
    {
  LABEL_121:
      IDA_LOBYTE(result) = 0; /*0x4c073b*/
      return result; /*0x4c073e*/
    }
    IDA_LOBYTE(v88[1]) = (unsigned __int8)(a6 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4c00a5*/
    IDA_BYTE1(v88[1]) = (unsigned __int8)(a6 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4c00c6*/
    v42 = v91[1] - v90; /*0x4c00ce*/
    IDA_BYTE2(v88[1]) = (unsigned __int8)(a6 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4c00d6*/
    v85 = IDA_LOBYTE(v88[1]); /*0x4c00e3*/
    v86 = IDA_BYTE1(v88[1]); /*0x4c00f0*/
    IDA_LODWORD(v87) = IDA_BYTE2(v88[1]); /*0x4c00fd*/
    v99 = v91[0] - v89; /*0x4c010b*/
    v43 = (int)v97 - v34; /*0x4c011a*/
    v44 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v88[0] + 116))(v88[0]); /*0x4c011c*/
    v81 = v44; /*0x4c0121*/
    if ( v42 < 0 ) /*0x4c0125*/
    {
      v81 = -v44; /*0x4c0129*/
      v96 = -v96; /*0x4c0133*/
      v82 = 1; /*0x4c0137*/
    }
    v80 = 1; /*0x4c0141*/
    v45 = abs32(v42); /*0x4c014e*/
    if ( v43 < 0 ) /*0x4c0152*/
      v80 = -1; /*0x4c0154*/
    v98 = 2 * v45; /*0x4c0164*/
    v46 = abs32(v43); /*0x4c0168*/
    v47 = 2 * v99; /*0x4c0173*/
    v83 = 2 * v99; /*0x4c0179*/
    v76 = 2 * v46; /*0x4c017d*/
    if ( v46 <= v99 || v46 <= v45 ) /*0x4c0189*/
    {
      if ( v99 <= v45 ) /*0x4c0375*/
      {
        v64 = v47 - v45; /*0x4c0559*/
        v88[1] = 2 * v46 - v45; /*0x4c055f*/
        if ( v45 > 0 ) /*0x4c0563*/
        {
          v65 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0569*/
          v79 = v45; /*0x4c056f*/
          v66 = g_ZBufferDescriptor; /*0x4c0573*/
          v101 = 0; /*0x4c0579*/
          do /*0x4c0720*/
          {
            v67 = v110; /*0x4c0584*/
            v68 = (unsigned __int16)*v40; /*0x4c0590*/
            if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c058b*/
            {
              if ( v68 == 127 ) /*0x4c05a4*/
              {
                *(unsigned short *)((char *)v101 + v105) = a6; /*0x4c0627*/
              }
              else
              {
                v67 = v110; /*0x4c05f2*/
                *(unsigned short *)((char *)v101 + v105) = ((IDA_LODWORD(v87) * v68) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c060b*/
                                                | ((v86 * v68) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                                | ((v85 * v68) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
              }
              if ( a9 ) /*0x4c0634*/
                *SamplePosition = v67; /*0x4c0636*/
              v66 = g_ZBufferDescriptor; /*0x4c0639*/
              v65 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c063f*/
            }
            if ( v64 > 0 ) /*0x4c0647*/
            {
              ++SamplePosition; /*0x4c0650*/
              v101 = (unsigned int *)((char *)v101 + 2); /*0x4c0656*/
              if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c0662*/
                SamplePosition = (unsigned short *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c0664*/
              if ( (unsigned int)++v40 >= v65[7] ) /*0x4c066f*/
                v40 = (unsigned short *)((char *)v40 - v65[8]); /*0x4c0671*/
              v64 -= v98; /*0x4c0674*/
            }
            v69 = v88[1]; /*0x4c0678*/
            if ( v88[1] > 0 ) /*0x4c067e*/
            {
              v110 = v80 + v67; /*0x4c0684*/
              v69 = v88[1] - v98; /*0x4c068f*/
            }
            v64 += v83; /*0x4c0695*/
            v88[1] = v76 + v69; /*0x4c06a4*/
            v105 += v81; /*0x4c06ae*/
            SamplePosition += v96; /*0x4c06bc*/
            if ( v96 <= 0 ) /*0x4c06c0*/
            {
              v70 = SamplePosition; /*0x4c06cf*/
              if ( (unsigned int)SamplePosition < v66[1].Stream_field_04 ) /*0x4c06d3*/
                v70 = (unsigned short *)((char *)SamplePosition + v66[1].Stream_field_0C); /*0x4c06d8*/
              SamplePosition = v70; /*0x4c06da*/
            }
            else if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c06c5*/
            {
              SamplePosition = (unsigned short *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c06c7*/
            }
            v110 += v82; /*0x4c06e9*/
            v40 += v96; /*0x4c06f7*/
            if ( v96 <= 0 ) /*0x4c06fb*/
            {
              v71 = v40; /*0x4c070a*/
              if ( (unsigned int)v40 < v65[6] ) /*0x4c070e*/
                v71 = (unsigned short *)((char *)v40 + v65[8]); /*0x4c0713*/
              v40 = v71; /*0x4c0715*/
            }
            else if ( (unsigned int)v40 >= v65[7] ) /*0x4c0700*/
            {
              v40 = (unsigned short *)((char *)v40 - v65[8]); /*0x4c0702*/
            }
            --v79; /*0x4c071c*/
          }
          while ( v79 ); /*0x4c0720*/
        }
      }
      else
      {
        v56 = v98 - v99; /*0x4c038a*/
        v78 = 0; /*0x4c038e*/
        v84 = v76 - v99; /*0x4c0398*/
        if ( v99 > 0 ) /*0x4c039c*/
        {
          v57 = g_ZBufferDescriptor; /*0x4c03a2*/
          v58 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c03a8*/
          do /*0x4c053c*/
          {
            v59 = (unsigned __int16)*v40; /*0x4c03bb*/
            if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c03b6*/
            {
              if ( v59 == 127 ) /*0x4c03cf*/
                IDA_LOWORD(v60) = a6; /*0x4c0423*/
              else
                v60 = ((IDA_LODWORD(v87) * v59) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c041f*/
                    | ((v86 * v59) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                    | ((v85 * v59) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
              *(unsigned short *)(v105 + 2 * v78) = v60; /*0x4c0436*/
              if ( a9 ) /*0x4c0443*/
                *SamplePosition = v110; /*0x4c044d*/
              v57 = g_ZBufferDescriptor; /*0x4c0450*/
              v58 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0456*/
            }
            if ( v56 > 0 ) /*0x4c045e*/
            {
              v105 += v81; /*0x4c046d*/
              v56 -= 2 * v99; /*0x4c047e*/
              SamplePosition += v96; /*0x4c0487*/
              if ( v96 <= 0 ) /*0x4c048b*/
              {
                v61 = SamplePosition; /*0x4c049a*/
                if ( (unsigned int)SamplePosition < v57[1].Stream_field_04 ) /*0x4c049c*/
                  v61 = (unsigned short *)((char *)SamplePosition + v57[1].Stream_field_0C); /*0x4c04a1*/
                SamplePosition = v61; /*0x4c04a3*/
              }
              else if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0490*/
              {
                SamplePosition = (unsigned short *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c0492*/
              }
              v40 += v96; /*0x4c04a9*/
              v110 += v82; /*0x4c04ab*/
              if ( v96 <= 0 ) /*0x4c04b8*/
              {
                v62 = v40; /*0x4c04c7*/
                if ( (unsigned int)v40 < v58[6] ) /*0x4c04cb*/
                  v62 = (unsigned short *)((char *)v40 + v58[8]); /*0x4c04d0*/
                v40 = v62; /*0x4c04d2*/
              }
              else if ( (unsigned int)v40 >= v58[7] ) /*0x4c04bd*/
              {
                v40 = (unsigned short *)((char *)v40 - v58[8]); /*0x4c04bf*/
              }
            }
            v63 = v84; /*0x4c04d4*/
            if ( v84 > 0 ) /*0x4c04da*/
            {
              v110 += v80; /*0x4c04e9*/
              v63 = v84 - 2 * v99; /*0x4c04fe*/
            }
            ++SamplePosition; /*0x4c0504*/
            v56 += v98; /*0x4c0507*/
            v84 = v76 + v63; /*0x4c050f*/
            if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0518*/
              SamplePosition = (unsigned short *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c051a*/
            if ( (unsigned int)++v40 >= v58[7] ) /*0x4c0525*/
              v40 = (unsigned short *)((char *)v40 - v58[8]); /*0x4c0527*/
            ++v78; /*0x4c0538*/
          }
          while ( v78 < v99 ); /*0x4c053c*/
        }
      }
    }
    else
    {
      v48 = v98 - v46; /*0x4c0195*/
      v77 = v47 - v46; /*0x4c019b*/
      if ( v46 > 0 ) /*0x4c019f*/
      {
        v49 = g_ZBufferDescriptor; /*0x4c01a5*/
        v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c01ab*/
        v100 = 0; /*0x4c01b1*/
        v88[1] = v46; /*0x4c01bc*/
        do /*0x4c0358*/
        {
          v51 = (unsigned __int16)*v40; /*0x4c01cd*/
          if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c01c8*/
          {
            if ( v51 == 127 ) /*0x4c01e1*/
              IDA_LOWORD(v52) = a6; /*0x4c0235*/
            else
              v52 = ((IDA_LODWORD(v87) * v51) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c0231*/
                  | ((v86 * v51) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                  | ((v85 * v51) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            *(unsigned short *)((char *)v100 + v105) = v52; /*0x4c024b*/
            if ( a9 ) /*0x4c0258*/
              *SamplePosition = v110; /*0x4c0262*/
            v49 = g_ZBufferDescriptor; /*0x4c0265*/
            v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c026b*/
          }
          if ( v48 > 0 ) /*0x4c0273*/
          {
            v48 -= v76; /*0x4c0286*/
            v53 = v96; /*0x4c0288*/
            v105 += v81; /*0x4c028c*/
            SamplePosition += v96; /*0x4c0296*/
            if ( v96 <= 0 ) /*0x4c029a*/
            {
              v54 = SamplePosition; /*0x4c02a9*/
              if ( (unsigned int)SamplePosition < v49[1].Stream_field_04 ) /*0x4c02ab*/
                v54 = (unsigned short *)((char *)SamplePosition + v49[1].Stream_field_0C); /*0x4c02b0*/
              SamplePosition = v54; /*0x4c02b2*/
              v53 = v96; /*0x4c02b4*/
            }
            else if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c029f*/
            {
              SamplePosition = (unsigned short *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c02a1*/
            }
            v40 += v96; /*0x4c02b8*/
            if ( v53 <= 0 ) /*0x4c02bc*/
            {
              v55 = v40; /*0x4c02cb*/
              if ( (unsigned int)v40 < v50[6] ) /*0x4c02cf*/
                v55 = (unsigned short *)((char *)v40 + v50[8]); /*0x4c02d4*/
              v40 = v55; /*0x4c02d6*/
            }
            else if ( (unsigned int)v40 >= v50[7] ) /*0x4c02c1*/
            {
              v40 = (unsigned short *)((char *)v40 - v50[8]); /*0x4c02c3*/
            }
            v110 += v82; /*0x4c02e5*/
          }
          if ( v77 > 0 ) /*0x4c02f2*/
          {
            ++SamplePosition; /*0x4c02fb*/
            v100 = (unsigned int *)((char *)v100 + 2); /*0x4c0301*/
            if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c030d*/
              SamplePosition = (unsigned short *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c030f*/
            if ( (unsigned int)++v40 >= v50[7] ) /*0x4c031a*/
              v40 = (unsigned short *)((char *)v40 - v50[8]); /*0x4c031c*/
            v77 -= v76; /*0x4c0323*/
          }
          v110 += v80; /*0x4c0338*/
          v77 += v83; /*0x4c0349*/
          v48 += v98; /*0x4c0351*/
          --v88[1]; /*0x4c0354*/
        }
        while ( v88[1] ); /*0x4c0358*/
      }
    }
    result = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v88[0] + 96))(v88[0]); /*0x4c0364*/
    IDA_LOBYTE(result) = 1; /*0x4c036a*/
    return result; /*0x4c0367*/
}
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawLineZBufColored(const Point2D& start, const Point2D& end, const uint8_t src_rgb[3], float brightness, int fade_start, int fade_end)
{
    double v8; // st7
    int v11; // eax
    int v12; // ebx
    int v13; // eax
    int v14; // ebp
    int v15; // eax
    int *v16; // eax
    int *v17; // eax
    int v18; // esi
    int v19; // edi
    int v20; // ecx
    int v21; // eax
    int v22; // ecx
    int v23; // ebp
    int v24; // edx
    int v25; // ebx
    int v26; // esi
    int v27; // edi
    int v28; // esi
    int v29; // ebx
    int v30; // eax
    int v31; // eax
    int v32; // eax
    unsigned int v33; // eax
    int v34; // eax
    int v35; // eax
    int v36; // eax
    unsigned int v37; // eax
    int v38; // ebx
    int Stream_field_04; // edi
    unsigned short *SamplePosition; // esi
    int v41; // edi
    unsigned __int16 *v42; // ebp
    int v43; // edi
    int v44; // ebx
    int v45; // eax
    int v46; // ecx
    int v47; // eax
    int v48; // edi
    int v49; // ecx
    Stream *v50; // ebx
    int v51; // edx
    unsigned __int16 v52; // di
    __int16 v53; // ax
    unsigned short *v54; // eax
    unsigned __int16 *v55; // eax
    bool v56; // zf
    int v58; // edi
    Stream *v59; // ebx
    int v60; // edx
    unsigned __int16 v61; // di
    __int16 v62; // ax
    unsigned short *v63; // eax
    unsigned __int16 *v64; // eax
    int v65; // eax
    unsigned int Stream_field_08; // eax
    int v67; // edi
    int v68; // ebx
    Stream *v69; // ecx
    int v70; // edx
    unsigned __int16 v71; // di
    __int16 v72; // ax
    unsigned short *v73; // eax
    unsigned __int16 *v74; // eax
    double v75; // [esp+4h] [ebp-84h]
    double v76; // [esp+4h] [ebp-84h]
    double v77; // [esp+4h] [ebp-84h]
    double v78; // [esp+4h] [ebp-84h]
    int v79; // [esp+1Ch] [ebp-6Ch]
    int v80; // [esp+20h] [ebp-68h]
    int v81; // [esp+24h] [ebp-64h]
    int v82; // [esp+24h] [ebp-64h]
    int v83; // [esp+24h] [ebp-64h]
    int v84; // [esp+28h] [ebp-60h]
    int v85; // [esp+2Ch] [ebp-5Ch]
    int v86; // [esp+30h] [ebp-58h]
    int v87; // [esp+30h] [ebp-58h]
    int v88; // [esp+30h] [ebp-58h]
    int v89; // [esp+34h] [ebp-54h]
    int v90; // [esp+38h] [ebp-50h]
    int v91; // [esp+3Ch] [ebp-4Ch]
    unsigned char v93[12]; // [esp+44h] [ebp-44h] BYREF
    unsigned int v94[5]; // [esp+54h] [ebp-34h] BYREF
    int v95; // [esp+68h] [ebp-20h] BYREF
    int v96; // [esp+6Ch] [ebp-1Ch]
    int v97[2]; // [esp+70h] [ebp-18h] BYREF
    int v98; // [esp+78h] [ebp-10h] BYREF
    int v99; // [esp+7Ch] [ebp-Ch]
    int v100; // [esp+80h] [ebp-8h]
    int v101; // [esp+84h] [ebp-4h]
    int pad_0; // [esp+8Ch] [ebp+4h]
    int v103; // [esp+90h] [ebp+8h]
    int v104; // [esp+94h] [ebp+Ch]
    unsigned __int8 *v105; // [esp+98h] [ebp+10h]
    unsigned __int8 *v106; // [esp+98h] [ebp+10h]
    unsigned __int8 *v107; // [esp+98h] [ebp+10h]
    unsigned __int8 *v108; // [esp+98h] [ebp+10h]
    int v109; // [esp+9Ch] [ebp+14h]
    int v110; // [esp+9Ch] [ebp+14h]
    int v111; // [esp+9Ch] [ebp+14h]
    int v112; // [esp+9Ch] [ebp+14h]
    __int16 v113; // [esp+9Ch] [ebp+14h]
    __int16 v114; // [esp+9Ch] [ebp+14h]
    __int16 v115; // [esp+9Ch] [ebp+14h]

    v105 = (unsigned __int8 *)*a5; /*0x4bdf18*/
    __asm /*0x4bdf1f*/
    {
      fild [esp+7Ch+arg_C]
      fmul [esp+7Ch+arg_10]
    }
    IDA_LOWORD(v11) = Math::RoundToInt(v8); /*0x4bdf2d*/
    v12 = v11; /*0x4bdf34*/
    v91 = v11; /*0x4bdf39*/
    v106 = (unsigned __int8 *)a5[1]; /*0x4bdf3d*/
    __asm /*0x4bdf44*/
    {
      fild [esp+7Ch+arg_C]
      fmul [esp+7Ch+arg_10]
    }
    IDA_LOWORD(v13) = Math::RoundToInt(v8); /*0x4bdf52*/
    v14 = v13; /*0x4bdf59*/
    v90 = v13; /*0x4bdf5e*/
    v107 = (unsigned __int8 *)a5[2]; /*0x4bdf62*/
    __asm /*0x4bdf69*/
    {
      fild [esp+7Ch+arg_C]
      fmul [esp+7Ch+arg_10]
    }
    IDA_LOWORD(v15) = Math::RoundToInt(v8); /*0x4bdf77*/
    v89 = v15; /*0x4bdf7f*/
    if ( v12 < 8 && v14 < 8 && v15 < 8 ) /*0x4bdf8d*/
      return 0; /*0x4bdf8d*/
    v16 = (int *)(*((int (__thiscall **)(DSurface *, unsigned int *))this->DSurface_field_0x0 + 30))(this, &v94[1]); /*0x4bdf9c*/
    v17 = ClipRectIntersection(&v93[4], (int *)a2, v16, 0, 0); /*0x4bdfaf*/
    v18 = *v17; /*0x4bdfb6*/
    v98 = *v17; /*0x4bdfb8*/
    v19 = v17[1]; /*0x4bdfbc*/
    v99 = v19; /*0x4bdfbf*/
    v100 = v17[2]; /*0x4bdfc6*/
    v20 = v17[3]; /*0x4bdfca*/
    v101 = v20; /*0x4bdfcf*/
    if ( !v100 && !v20 ) /*0x4bdfd7*/
      return 0; /*0x4bdfd7*/
    v21 = v18 + *a3; /*0x4bdff3*/
    v22 = v18 + *a4; /*0x4bdff5*/
    v23 = a7; /*0x4bdffa*/
    v24 = v19 + a3[1]; /*0x4be001*/
    v25 = v21; /*0x4be003*/
    v26 = v19 + a4[1]; /*0x4be005*/
    v27 = a8; /*0x4be007*/
    v95 = v21; /*0x4be010*/
    v96 = v24; /*0x4be014*/
    v97[0] = v22; /*0x4be018*/
    v97[1] = v26; /*0x4be01c*/
    if ( v21 > v22 ) /*0x4be020*/
    {
      v25 = v22; /*0x4be022*/
      v23 = a8; /*0x4be024*/
      v27 = a7; /*0x4be026*/
      v95 = v22; /*0x4be02d*/
      v96 = v26; /*0x4be031*/
      v97[0] = v21; /*0x4be035*/
      v97[1] = v24; /*0x4be039*/
    }
    v94[2] = v97[1]; /*0x4be049*/
    v28 = v25; /*0x4be04e*/
    v29 = v96; /*0x4be050*/
    v94[1] = v97[0]; /*0x4be05c*/
    if ( !(unsigned __int8)ClipLine(&v95, v97, &v98) ) /*0x4be060*/
      return 0; /*0x4be060*/
    a7 = v27; /*0x4be07b*/
    v109 = v23; /*0x4be082*/
    if ( v97[0] != v94[1] || v97[1] != v94[2] ) /*0x4be08f*/
    {
      *(unsigned int *)&v93[4] = v28 - v97[0]; /*0x4be09e*/
      __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0a4*/
      *(unsigned int *)&v93[8] = v29 - v97[1]; /*0x4be0a8*/
      __asm /*0x4be0ac*/
      {
        fild [esp+84h+var_3C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+84h+var_88+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v75); /*0x4be0c1*/
      IDA_LOWORD(v30) = Math::RoundToInt(v8); /*0x4be0c6*/
      a8 = v30; /*0x4be0d1*/
      *(unsigned int *)&v93[4] = v28 - v94[1]; /*0x4be0e0*/
      __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0e6*/
      *(unsigned int *)&v93[8] = v29 - v94[2]; /*0x4be0ea*/
      __asm /*0x4be0ee*/
      {
        fild [esp+84h+var_3C]
        fild [esp+84h+arg_18]
        fstp [esp+84h+var_44+4]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+84h+var_88+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v76); /*0x4be10e*/
      IDA_LOWORD(v31) = Math::RoundToInt(v8); /*0x4be116*/
      a8 = v31; /*0x4be11b*/
      __asm { fild [esp+7Ch+arg_18] } /*0x4be124*/
      a8 = v23 - v27; /*0x4be12d*/
      __asm /*0x4be134*/
      {
        fdivr [esp+7Ch+var_44+4]
        fild [esp+7Ch+arg_18]
        fmulp st(1), st
      }
      IDA_LOWORD(v32) = Math::RoundToInt(v8); /*0x4be141*/
      v33 = abs32(v32); /*0x4be149*/
      if ( v23 >= v27 ) /*0x4be14d*/
        a7 = v23 - v33; /*0x4be15e*/
      else
        a7 = v23 + v33; /*0x4be151*/
    }
    if ( v95 != v28 || v96 != v29 ) /*0x4be173*/
    {
      *(unsigned int *)&v93[4] = v95 - v94[1]; /*0x4be182*/
      __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be18a*/
      *(unsigned int *)&v93[8] = v96 - v94[2]; /*0x4be190*/
      __asm /*0x4be194*/
      {
        fild [esp+84h+var_3C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+84h+var_88+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v77); /*0x4be1a9*/
      IDA_LOWORD(v34) = Math::RoundToInt(v8); /*0x4be1ae*/
      v110 = v34; /*0x4be1b3*/
      *(unsigned int *)&v93[4] = v28 - v94[1]; /*0x4be1c0*/
      __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be1c8*/
      *(unsigned int *)&v93[8] = v29 - v94[2]; /*0x4be1ce*/
      __asm /*0x4be1d2*/
      {
        fild [esp+84h+var_3C]
        fild [esp+84h+arg_10]
        fstp qword ptr [esp+84h+var_34+4]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+84h+var_88+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v78); /*0x4be1f2*/
      IDA_LOWORD(v35) = Math::RoundToInt(v8); /*0x4be1fa*/
      v111 = v35; /*0x4be1ff*/
      __asm { fild [esp+7Ch+arg_10] } /*0x4be208*/
      v112 = v23 - v27; /*0x4be211*/
      __asm /*0x4be218*/
      {
        fdivr qword ptr [esp+7Ch+var_34+4]
        fild [esp+7Ch+arg_10]
        fmulp st(1), st
      }
      IDA_LOWORD(v36) = Math::RoundToInt(v8); /*0x4be225*/
      v37 = abs32(v36); /*0x4be22d*/
      if ( v27 <= v23 ) /*0x4be231*/
        v109 = v27 + v37; /*0x4be240*/
      else
        v109 = v27 - v37; /*0x4be235*/
    }
    (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this); /*0x4be24f*/
    v38 = (*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v95, v96); /*0x4be269*/
    v108 = (unsigned __int8 *)v38; /*0x4be26d*/
    if ( !g_ZBufferDescriptor ) /*0x4be274*/
      return 0; /*0x4be274*/
    Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4be27e*/
    v94[2] = v96; /*0x4be285*/
    SamplePosition = (unsigned short *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v95, v96 - Stream_field_04); /*0x4be29c*/
    v41 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4); /*0x4be2a2*/
    v94[2] = v96; /*0x4be2a5*/
    v42 = (unsigned __int16 *)StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v95, v96 - v41); /*0x4be2b6*/
    v85 = -1; /*0x4be2c1*/
    IDA_LOWORD(v41) = IDA_LOWORD(g_ZBufferDescriptor->Stream_field_04) + IDA_LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4be2cd*/
    pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4be2d4*/
    a8 = v109 + v41 - v96 - v99; /*0x4be2ea*/
    if ( !v38 ) /*0x4be2f1*/
      return 0; /*0x4be9b9*/
    v86 = v97[0] - v95; /*0x4be305*/
    v43 = v97[1] - v96; /*0x4be310*/
    v44 = a7 - v109; /*0x4be31a*/
    v45 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4be31c*/
    v80 = v45; /*0x4be321*/
    if ( v43 < 0 ) /*0x4be325*/
    {
      v85 = 1; /*0x4be32e*/
      v80 = -v45; /*0x4be33a*/
      pad_0 = -pad_0; /*0x4be33e*/
    }
    v84 = 1; /*0x4be347*/
    v46 = abs32(v43); /*0x4be354*/
    if ( v44 < 0 ) /*0x4be358*/
      v84 = -1; /*0x4be35a*/
    IDA_LOWORD(a7) = 0; /*0x4be364*/
    v47 = abs32(v44); /*0x4be377*/
    IDA_BYTE2(a7) = 0; /*0x4be37f*/
    v104 = 2 * v86; /*0x4be38a*/
    v103 = 2 * v46; /*0x4be394*/
    v79 = 2 * v47; /*0x4be39e*/
    if ( v47 <= v86 || v47 <= v46 ) /*0x4be3aa*/
    {
      if ( v86 <= v46 ) /*0x4be5aa*/
      {
        v67 = v104 - v46; /*0x4be7b5*/
        v68 = v79 - v46; /*0x4be7b7*/
        *(unsigned int *)&v93[4] = v104 - v46; /*0x4be7bb*/
        *(unsigned int *)v93 = v79 - v46; /*0x4be7bf*/
        if ( v46 > 0 ) /*0x4be7c3*/
        {
          v94[1] = v46; /*0x4be7d0*/
          v69 = g_ZBufferDescriptor; /*0x4be7d4*/
          v83 = 0; /*0x4be7da*/
          v88 = 2 * pad_0; /*0x4be7e5*/
          do /*0x4be99b*/
          {
            v70 = *v42; /*0x4be7f6*/
            if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be7fa*/
            {
              v71 = *(unsigned short *)&v108[v83]; /*0x4be80b*/
              IDA_LOBYTE(v115) = (unsigned __int8)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be82a*/
              IDA_HIBYTE(v115) = (unsigned __int8)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be845*/
              IDA_LOWORD(a7) = v115; /*0x4be861*/
              IDA_BYTE2(a7) = (unsigned __int8)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be870*/
              v72 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v70) >> 7, (v90 * v70) >> 7, (v89 * v70) >> 7); /*0x4be895*/
              v67 = *(unsigned int *)&v93[4]; /*0x4be89e*/
              *(unsigned short *)&v108[v83] = v72; /*0x4be8a2*/
              v69 = g_ZBufferDescriptor; /*0x4be8a6*/
              v68 = *(unsigned int *)v93; /*0x4be8ac*/
            }
            if ( v67 > 0 ) /*0x4be8b2*/
            {
              ++SamplePosition; /*0x4be8bb*/
              v83 += 2; /*0x4be8c3*/
              if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be8c7*/
                SamplePosition = (unsigned short *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be8c9*/
              v67 -= v103; /*0x4be8cc*/
            }
            if ( v68 > 0 ) /*0x4be8d5*/
            {
              a8 += v84; /*0x4be8eb*/
              v68 -= v103; /*0x4be8f2*/
            }
            v67 += v104; /*0x4be8ff*/
            v68 += v79; /*0x4be908*/
            v108 += v80; /*0x4be914*/
            SamplePosition = (unsigned short *)((char *)SamplePosition + v88); /*0x4be922*/
            *(unsigned int *)&v93[4] = v67; /*0x4be924*/
            *(unsigned int *)v93 = v68; /*0x4be92a*/
            if ( pad_0 <= 0 ) /*0x4be92e*/
            {
              v73 = SamplePosition; /*0x4be93d*/
              if ( (unsigned int)SamplePosition < v69[1].Stream_field_04 ) /*0x4be941*/
                v73 = (unsigned short *)((char *)SamplePosition + v69[1].Stream_field_0C); /*0x4be946*/
              SamplePosition = v73; /*0x4be948*/
            }
            else if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be933*/
            {
              SamplePosition = (unsigned short *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be935*/
            }
            v42 = (unsigned __int16 *)((char *)v42 + v88); /*0x4be955*/
            if ( pad_0 <= 0 ) /*0x4be959*/
            {
              v74 = v42; /*0x4be970*/
              if ( (unsigned int)v42 < *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be975*/
                v74 = (unsigned __int16 *)((char *)v42 + *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be97a*/
              v42 = v74; /*0x4be97c*/
            }
            else if ( (unsigned int)v42 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be963*/
            {
              v42 = (unsigned __int16 *)((char *)v42 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be965*/
            }
            v56 = v94[1] == 1; /*0x4be98f*/
            a8 += v85; /*0x4be990*/
            --v94[1]; /*0x4be997*/
          }
          while ( !v56 ); /*0x4be99b*/
        }
      }
      else
      {
        v58 = v103 - v86; /*0x4be5bf*/
        *(unsigned int *)&v93[4] = v103 - v86; /*0x4be5c3*/
        *(unsigned int *)v93 = v79 - v86; /*0x4be5c9*/
        v82 = 0; /*0x4be5cd*/
        if ( v86 > 0 ) /*0x4be5d5*/
        {
          v59 = g_ZBufferDescriptor; /*0x4be5db*/
          do /*0x4be78f*/
          {
            v60 = *v42; /*0x4be5ee*/
            if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be5f2*/
            {
              v61 = *(unsigned short *)&v108[2 * v82]; /*0x4be603*/
              IDA_LOBYTE(v114) = (unsigned __int8)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be622*/
              IDA_HIBYTE(v114) = (unsigned __int8)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be63d*/
              IDA_LOWORD(a7) = v114; /*0x4be659*/
              IDA_BYTE2(a7) = (unsigned __int8)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be668*/
              v62 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v60) >> 7, (v90 * v60) >> 7, (v89 * v60) >> 7); /*0x4be68d*/
              v58 = *(unsigned int *)&v93[4]; /*0x4be696*/
              *(unsigned short *)&v108[2 * v82] = v62; /*0x4be69a*/
              v59 = g_ZBufferDescriptor; /*0x4be69e*/
            }
            if ( v58 > 0 ) /*0x4be6a6*/
            {
              v58 -= v104; /*0x4be6c0*/
              v108 += v80; /*0x4be6c9*/
              SamplePosition += pad_0; /*0x4be6d3*/
              if ( pad_0 <= 0 ) /*0x4be6d7*/
              {
                v63 = SamplePosition; /*0x4be6e6*/
                if ( (unsigned int)SamplePosition < v59[1].Stream_field_04 ) /*0x4be6ea*/
                  v63 = (unsigned short *)((char *)SamplePosition + v59[1].Stream_field_0C); /*0x4be6ef*/
                SamplePosition = v63; /*0x4be6f1*/
              }
              else if ( (unsigned int)SamplePosition >= v59[1].Stream_field_08 ) /*0x4be6dc*/
              {
                SamplePosition = (unsigned short *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be6de*/
              }
              v42 += pad_0; /*0x4be6fa*/
              if ( pad_0 <= 0 ) /*0x4be6fe*/
              {
                v64 = v42; /*0x4be715*/
                if ( (unsigned int)v42 < *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be71a*/
                  v64 = (unsigned __int16 *)((char *)v42 + *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be71f*/
                v42 = v64; /*0x4be721*/
              }
              else if ( (unsigned int)v42 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be708*/
              {
                v42 = (unsigned __int16 *)((char *)v42 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be70a*/
              }
              a8 += v85; /*0x4be730*/
            }
            v65 = *(unsigned int *)v93; /*0x4be737*/
            if ( *(int *)v93 > 0 ) /*0x4be73d*/
            {
              a8 += v84; /*0x4be74c*/
              v65 = *(unsigned int *)v93 - v104; /*0x4be75a*/
            }
            ++SamplePosition; /*0x4be769*/
            *(unsigned int *)v93 = v79 + v65; /*0x4be76c*/
            Stream_field_08 = v59[1].Stream_field_08; /*0x4be770*/
            v58 += v103; /*0x4be773*/
            *(unsigned int *)&v93[4] = v58; /*0x4be777*/
            if ( (unsigned int)SamplePosition >= Stream_field_08 ) /*0x4be77b*/
              SamplePosition = (unsigned short *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be77d*/
            ++v82; /*0x4be78b*/
          }
          while ( v82 < v86 ); /*0x4be78f*/
        }
      }
    }
    else
    {
      v48 = v103 - v47; /*0x4be3be*/
      v49 = v104 - v47; /*0x4be3c0*/
      *(unsigned int *)v93 = v103 - v47; /*0x4be3c4*/
      v87 = v104 - v47; /*0x4be3c8*/
      if ( v47 > 0 ) /*0x4be3cc*/
      {
        v50 = g_ZBufferDescriptor; /*0x4be3d2*/
        v81 = 0; /*0x4be3d8*/
        *(unsigned int *)&v93[4] = v47; /*0x4be3e0*/
        do /*0x4be58d*/
        {
          v51 = *v42; /*0x4be3f1*/
          if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be3f5*/
          {
            v52 = *(unsigned short *)&v108[v81]; /*0x4be406*/
            IDA_LOBYTE(v113) = (unsigned __int8)(v52 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be425*/
            IDA_HIBYTE(v113) = (unsigned __int8)(v52 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be440*/
            IDA_LOWORD(a7) = v113; /*0x4be45c*/
            IDA_BYTE2(a7) = (unsigned __int8)(v52 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be46b*/
            v53 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v51) >> 7, (v90 * v51) >> 7, (v89 * v51) >> 7); /*0x4be490*/
            v48 = *(unsigned int *)v93; /*0x4be499*/
            v49 = v87; /*0x4be49d*/
            *(unsigned short *)&v108[v81] = v53; /*0x4be4a1*/
            v50 = g_ZBufferDescriptor; /*0x4be4a5*/
          }
          if ( v48 > 0 ) /*0x4be4ad*/
          {
            v108 += v80; /*0x4be4c4*/
            v48 -= v79; /*0x4be4d2*/
            SamplePosition += pad_0; /*0x4be4d7*/
            if ( pad_0 <= 0 ) /*0x4be4db*/
            {
              v54 = SamplePosition; /*0x4be4ea*/
              if ( (unsigned int)SamplePosition < v50[1].Stream_field_04 ) /*0x4be4ec*/
                v54 = (unsigned short *)((char *)SamplePosition + v50[1].Stream_field_0C); /*0x4be4f1*/
              SamplePosition = v54; /*0x4be4f3*/
            }
            else if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be4e0*/
            {
              SamplePosition = (unsigned short *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be4e2*/
            }
            v42 += pad_0; /*0x4be4f5*/
            if ( pad_0 <= 0 ) /*0x4be4f9*/
            {
              v55 = v42; /*0x4be510*/
              if ( (unsigned int)v42 < *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be515*/
                v55 = (unsigned __int16 *)((char *)v42 + *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be51a*/
              v42 = v55; /*0x4be51c*/
            }
            else if ( (unsigned int)v42 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be503*/
            {
              v42 = (unsigned __int16 *)((char *)v42 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be505*/
            }
            v49 = v87; /*0x4be52b*/
            a8 += v85; /*0x4be52f*/
          }
          if ( v49 > 0 ) /*0x4be538*/
          {
            ++SamplePosition; /*0x4be541*/
            v81 += 2; /*0x4be549*/
            if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be54d*/
              SamplePosition = (unsigned short *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be54f*/
            v49 -= v79; /*0x4be552*/
          }
          a8 += v84; /*0x4be56a*/
          v49 += v104; /*0x4be578*/
          v48 += v103; /*0x4be57e*/
          v56 = *(unsigned int *)&v93[4] == 1; /*0x4be580*/
          v87 = v49; /*0x4be581*/
          *(unsigned __int64 *)v93 = IDA___PAIR64__(*(unsigned int *)&v93[4], v48) - 0x100000000LL; /*0x4be589*/
        }
        while ( !v56 ); /*0x4be58d*/
      }
    }
    (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4be599*/
    return 1; /*0x4be59c*/
}
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawStippledRect(const Point2D& top_left, const Point2D& bottom_right, uint16_t color, bool fill_interior)
{
    int *v6; // eax
    int v7; // ecx
    int v8; // eax
    int v9; // ecx
    int v10; // esi
    int v11; // edx
    int v12; // eax
    unsigned short *v13; // esi
    int v14; // edx
    __int16 *v15; // ecx
    unsigned int *v16; // eax
    int v17; // ecx
    int v18; // eax
    __int16 *v19; // ebp
    int v20; // edx
    unsigned int *v21; // eax
    int v22; // ebx
    int v23; // edi
    int v24; // eax
    int v25; // eax
    int v26; // ebp
    int v27; // edx
    int v28; // ecx
    unsigned int *v29; // eax
    __int16 *v30; // edi
    int v31; // edx
    unsigned int *v32; // ecx
    __int16 *v33; // eax
    int v34; // edi
    int v35; // edx
    __int16 *v36; // ecx
    unsigned int *v37; // eax
    int v38; // ecx
    int v39; // eax
    __int16 *v40; // ebp
    int v41; // edx
    unsigned int *v42; // eax
    int v43; // ebx
    int v44; // edi
    int v45; // eax
    int v46; // ebp
    int v47; // eax
    int v48; // ecx
    int v49; // edx
    unsigned int *v50; // eax
    __int16 *v51; // edi
    int v53; // edx
    unsigned int *v54; // ecx
    int v55; // edi
    int v56; // [esp+Ch] [ebp-3Ch]
    int v57; // [esp+Ch] [ebp-3Ch]
    int v58; // [esp+10h] [ebp-38h]
    int v59; // [esp+10h] [ebp-38h]
    int v60; // [esp+10h] [ebp-38h]
    unsigned int v62[4]; // [esp+18h] [ebp-30h] BYREF
    int v63; // [esp+28h] [ebp-20h] BYREF
    int v64; // [esp+2Ch] [ebp-1Ch]
    int v65; // [esp+30h] [ebp-18h] BYREF
    int v66; // [esp+34h] [ebp-14h]
    int v67; // [esp+38h] [ebp-10h] BYREF
    int v68; // [esp+3Ch] [ebp-Ch]
    int v69; // [esp+40h] [ebp-8h]
    int v70; // [esp+44h] [ebp-4h]
    int v71; // [esp+4Ch] [ebp+4h]
    __int16 *v72; // [esp+50h] [ebp+8h]
    int v73; // [esp+58h] [ebp+10h]
    int v74; // [esp+58h] [ebp+10h]

    if ( (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c0e45*/
      return 0; /*0x4c0e45*/
    v6 = (int *)(*((int (__thiscall **)(DSurface *, unsigned int *))this->DSurface_field_0x0 + 30))(this, v62); /*0x4c0e55*/
    v67 = *v6; /*0x4c0e5a*/
    v68 = v6[1]; /*0x4c0e61*/
    v69 = v6[2]; /*0x4c0e68*/
    v70 = v6[3]; /*0x4c0e73*/
    v7 = v68 + a2[1]; /*0x4c0e7e*/
    v63 = v67 + *a2; /*0x4c0e80*/
    v64 = v7; /*0x4c0e84*/
    v8 = v67 + *a3; /*0x4c0e93*/
    v66 = v68 + a3[1]; /*0x4c0e95*/
    v65 = v8; /*0x4c0ea6*/
    if ( !(unsigned __int8)ClipLine(&v63, &v65, &v67) ) /*0x4c0eaa*/
      return 0; /*0x4c0eaa*/
    v9 = v63; /*0x4c0eb7*/
    if ( v63 <= v65 ) /*0x4c0ec1*/
    {
      v12 = v64; /*0x4c0ee1*/
    }
    else
    {
      v10 = v64; /*0x4c0ec3*/
      v11 = v63; /*0x4c0ec7*/
      v9 = v65; /*0x4c0ec9*/
      v12 = v66; /*0x4c0ecb*/
      v63 = v65; /*0x4c0ecf*/
      v64 = v66; /*0x4c0ed3*/
      v65 = v11; /*0x4c0ed7*/
      v66 = v10; /*0x4c0edb*/
    }
    v62[1] = v12; /*0x4c0eeb*/
    v13 = (unsigned short *)StreamClass::ReadAndSeek( /*0x4c0f01*/
                     *(int **)&stru_87E790.__pad_D8[60],
                     v9,
                     v12 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4));
    v71 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f10*/
    if ( v64 > v66 ) /*0x4c0f14*/
      v71 = -*(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f18*/
    v72 = (__int16 *)(*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v63, v64); /*0x4c0f2c*/
    if ( !v72 ) /*0x4c0f30*/
      return 0; /*0x4c1428*/
    if ( a5 ) /*0x4c0f45*/
    {
      if ( v64 == v66 ) /*0x4c0f4d*/
      {
        v14 = 0; /*0x4c0f57*/
        if ( v65 - v63 >= 0 ) /*0x4c0f5b*/
        {
          v15 = v72; /*0x4c0f61*/
          v16 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0f69*/
          do /*0x4c0fae*/
          {
            if ( !*v13 ) /*0x4c0f72*/
            {
              *v15 = a4; /*0x4c0f78*/
              v16 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0f7b*/
            }
            if ( v71 <= 0 ) /*0x4c0f82*/
            {
              if ( (unsigned int)++v13 < v16[6] ) /*0x4c0f9b*/
                v13 = (unsigned short *)((char *)v13 + v16[8]); /*0x4c0f9d*/
            }
            else if ( (unsigned int)++v13 >= v16[7] ) /*0x4c0f8c*/
            {
              v13 = (unsigned short *)((char *)v13 - v16[8]); /*0x4c0f8e*/
            }
            ++v14; /*0x4c0fa4*/
            ++v15; /*0x4c0fa9*/
          }
          while ( v14 <= v65 - v63 ); /*0x4c0fae*/
        }
      }
      else if ( v63 == v65 ) /*0x4c0fcf*/
      {
        if ( v64 <= v66 ) /*0x4c0fd7*/
          v17 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fef*/
        else
          v17 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fe3*/
        v18 = abs32(v66 - v64); /*0x4c0ffe*/
        if ( v18 >= 0 ) /*0x4c1000*/
        {
          v19 = v72; /*0x4c100e*/
          v20 = v18 + 1; /*0x4c1012*/
          v21 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1015*/
          do /*0x4c1045*/
          {
            if ( !*v13 ) /*0x4c101a*/
            {
              *v19 = a4; /*0x4c1020*/
              v21 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1024*/
            }
            v13 += v71; /*0x4c102b*/
            if ( v71 <= 0 ) /*0x4c102e*/
            {
              if ( (unsigned int)v13 < v21[6] ) /*0x4c103d*/
                v13 = (unsigned short *)((char *)v13 + v21[8]); /*0x4c103f*/
            }
            else if ( (unsigned int)v13 >= v21[7] ) /*0x4c1033*/
            {
              v13 = (unsigned short *)((char *)v13 - v21[8]); /*0x4c1035*/
            }
            v19 = (__int16 *)((char *)v19 + v17); /*0x4c1042*/
            --v20; /*0x4c1044*/
          }
          while ( v20 ); /*0x4c1045*/
        }
      }
      else
      {
        v22 = v65 - v63; /*0x4c1063*/
        v23 = v66 - v64; /*0x4c1067*/
        v24 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1069*/
        v73 = v24; /*0x4c106e*/
        if ( v23 < 0 ) /*0x4c1072*/
          v73 = -v24; /*0x4c1076*/
        v25 = abs32(v23); /*0x4c107f*/
        v62[0] = 2 * v22; /*0x4c1086*/
        v26 = 2 * v25; /*0x4c108a*/
        v56 = 2 * v25; /*0x4c108d*/
        if ( v22 <= v25 ) /*0x4c1091*/
        {
          v31 = 2 * v22 - v25; /*0x4c1126*/
          if ( v25 > 0 ) /*0x4c112a*/
          {
            v32 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1130*/
            v58 = v25; /*0x4c113a*/
            v33 = v72; /*0x4c113e*/
            v34 = 0; /*0x4c1142*/
            while ( 1 ) /*0x4c114a*/
            {
              if ( !*v13 ) /*0x4c114a*/
              {
                v33[v34] = a4; /*0x4c1155*/
                v32 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1159*/
              }
              if ( v31 > 0 ) /*0x4c1161*/
              {
                v31 -= v26; /*0x4c1163*/
                ++v13; /*0x4c1168*/
                ++v34; /*0x4c116b*/
                if ( (unsigned int)v13 >= v32[7] ) /*0x4c1170*/
                  v13 = (unsigned short *)((char *)v13 - v32[8]); /*0x4c1172*/
              }
              v13 += v71; /*0x4c1179*/
              v31 += v62[0]; /*0x4c117c*/
              v33 = (__int16 *)((char *)v33 + v73); /*0x4c1182*/
              if ( v71 <= 0 ) /*0x4c1186*/
              {
                if ( (unsigned int)v13 < v32[6] ) /*0x4c1195*/
                  v13 = (unsigned short *)((char *)v13 + v32[8]); /*0x4c1197*/
              }
              else if ( (unsigned int)v13 >= v32[7] ) /*0x4c118b*/
              {
                v13 = (unsigned short *)((char *)v13 - v32[8]); /*0x4c118d*/
              }
              if ( !--v58 ) /*0x4c11a3*/
                break; /*0x4c11a3*/
              v26 = v56; /*0x4c1146*/
            }
          }
        }
        else
        {
          v27 = 0; /*0x4c1099*/
          v28 = v26 - v22; /*0x4c109b*/
          if ( v22 > 0 ) /*0x4c109f*/
          {
            v29 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c10a5*/
            v30 = v72; /*0x4c10aa*/
            do /*0x4c110f*/
            {
              if ( !*v13 ) /*0x4c10ae*/
              {
                v30[v27] = a4; /*0x4c10b9*/
                v29 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c10bd*/
              }
              if ( v28 > 0 ) /*0x4c10c4*/
              {
                v30 = (__int16 *)((char *)v30 + v73); /*0x4c10ca*/
                v13 += v71; /*0x4c10d0*/
                if ( (unsigned int)v13 >= v29[7] ) /*0x4c10d8*/
                  v13 = (unsigned short *)((char *)v13 - v29[8]); /*0x4c10da*/
                v28 -= 2 * v22; /*0x4c10e0*/
              }
              if ( v71 <= 0 ) /*0x4c10e8*/
              {
                if ( (unsigned int)++v13 < v29[6] ) /*0x4c1101*/
                  v13 = (unsigned short *)((char *)v13 + v29[8]); /*0x4c1103*/
              }
              else if ( (unsigned int)++v13 >= v29[7] ) /*0x4c10f2*/
              {
                v13 = (unsigned short *)((char *)v13 - v29[8]); /*0x4c10f4*/
              }
              v28 += v56; /*0x4c110a*/
              ++v27; /*0x4c110c*/
            }
            while ( v27 < v22 ); /*0x4c110f*/
          }
        }
      }
    }
    else if ( v64 == v66 ) /*0x4c11bc*/
    {
      v35 = 0; /*0x4c11c6*/
      if ( v65 - v63 >= 0 ) /*0x4c11ca*/
      {
        v36 = v72; /*0x4c11d0*/
        v37 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c11d8*/
        do /*0x4c121d*/
        {
          if ( *v13 ) /*0x4c11e1*/
          {
            *v36 = a4; /*0x4c11e7*/
            v37 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c11ea*/
          }
          if ( v71 <= 0 ) /*0x4c11f1*/
          {
            if ( (unsigned int)++v13 < v37[6] ) /*0x4c120a*/
              v13 = (unsigned short *)((char *)v13 + v37[8]); /*0x4c120c*/
          }
          else if ( (unsigned int)++v13 >= v37[7] ) /*0x4c11fb*/
          {
            v13 = (unsigned short *)((char *)v13 - v37[8]); /*0x4c11fd*/
          }
          ++v35; /*0x4c1213*/
          ++v36; /*0x4c1218*/
        }
        while ( v35 <= v65 - v63 ); /*0x4c121d*/
      }
    }
    else if ( v63 == v65 ) /*0x4c123e*/
    {
      if ( v64 <= v66 ) /*0x4c1246*/
        v38 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c125e*/
      else
        v38 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1252*/
      v39 = abs32(v66 - v64); /*0x4c126d*/
      if ( v39 >= 0 ) /*0x4c126f*/
      {
        v40 = v72; /*0x4c127d*/
        v41 = v39 + 1; /*0x4c1281*/
        v42 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1284*/
        do /*0x4c12b4*/
        {
          if ( *v13 ) /*0x4c1289*/
          {
            *v40 = a4; /*0x4c128f*/
            v42 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1293*/
          }
          v13 += v71; /*0x4c129a*/
          if ( v71 <= 0 ) /*0x4c129d*/
          {
            if ( (unsigned int)v13 < v42[6] ) /*0x4c12ac*/
              v13 = (unsigned short *)((char *)v13 + v42[8]); /*0x4c12ae*/
          }
          else if ( (unsigned int)v13 >= v42[7] ) /*0x4c12a2*/
          {
            v13 = (unsigned short *)((char *)v13 - v42[8]); /*0x4c12a4*/
          }
          v40 = (__int16 *)((char *)v40 + v38); /*0x4c12b1*/
          --v41; /*0x4c12b3*/
        }
        while ( v41 ); /*0x4c12b4*/
      }
    }
    else
    {
      v43 = v65 - v63; /*0x4c12cf*/
      v44 = v66 - v64; /*0x4c12d5*/
      v45 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c12d9*/
      v46 = v45; /*0x4c12dc*/
      v59 = v45; /*0x4c12e0*/
      if ( v44 < 0 ) /*0x4c12e4*/
      {
        v46 = -v45; /*0x4c12e6*/
        v59 = -v45; /*0x4c12e8*/
      }
      v47 = abs32(v44); /*0x4c12f1*/
      v57 = 2 * v43; /*0x4c12f8*/
      v74 = 2 * v47; /*0x4c12ff*/
      if ( v43 <= v47 ) /*0x4c1303*/
      {
        v53 = 2 * v43 - v47; /*0x4c1395*/
        if ( v47 > 0 ) /*0x4c1399*/
        {
          v54 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c139b*/
          v60 = v47; /*0x4c13a1*/
          v55 = 0; /*0x4c13a9*/
          do /*0x4c140f*/
          {
            if ( *v13 ) /*0x4c13ab*/
            {
              v72[v55] = a4; /*0x4c13b5*/
              v54 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c13b9*/
            }
            if ( v53 > 0 ) /*0x4c13c1*/
            {
              ++v13; /*0x4c13c7*/
              v53 -= v74; /*0x4c13ca*/
              ++v55; /*0x4c13cf*/
              if ( (unsigned int)v13 >= v54[7] ) /*0x4c13d4*/
                v13 = (unsigned short *)((char *)v13 - v54[8]); /*0x4c13d6*/
            }
            v53 += v57; /*0x4c13dd*/
            v72 = (__int16 *)((char *)v72 + v46); /*0x4c13e5*/
            v13 += v71; /*0x4c13ef*/
            if ( v71 <= 0 ) /*0x4c13f2*/
            {
              if ( (unsigned int)v13 < v54[6] ) /*0x4c1401*/
                v13 = (unsigned short *)((char *)v13 + v54[8]); /*0x4c1403*/
            }
            else if ( (unsigned int)v13 >= v54[7] ) /*0x4c13f7*/
            {
              v13 = (unsigned short *)((char *)v13 - v54[8]); /*0x4c13f9*/
            }
            --v60; /*0x4c140b*/
          }
          while ( v60 ); /*0x4c140f*/
        }
      }
      else
      {
        v48 = 2 * v47 - v43; /*0x4c1309*/
        v49 = 0; /*0x4c130b*/
        if ( v43 > 0 ) /*0x4c130f*/
        {
          v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1315*/
          v51 = v72; /*0x4c131a*/
          do /*0x4c137e*/
          {
            if ( *v13 ) /*0x4c131e*/
            {
              v51[v49] = a4; /*0x4c1329*/
              v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c132d*/
            }
            if ( v48 > 0 ) /*0x4c1334*/
            {
              v51 = (__int16 *)((char *)v51 + v59); /*0x4c133a*/
              v13 += v71; /*0x4c1340*/
              if ( (unsigned int)v13 >= v50[7] ) /*0x4c1348*/
                v13 = (unsigned short *)((char *)v13 - v50[8]); /*0x4c134a*/
              v48 -= v57; /*0x4c134d*/
            }
            if ( v71 <= 0 ) /*0x4c1357*/
            {
              if ( (unsigned int)++v13 < v50[6] ) /*0x4c1370*/
                v13 = (unsigned short *)((char *)v13 + v50[8]); /*0x4c1372*/
            }
            else if ( (unsigned int)++v13 >= v50[7] ) /*0x4c1361*/
            {
              v13 = (unsigned short *)((char *)v13 - v50[8]); /*0x4c1363*/
            }
            v48 += v74; /*0x4c1379*/
            ++v49; /*0x4c137b*/
          }
          while ( v49 < v43 ); /*0x4c137e*/
        }
      }
    }
    (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c1386*/
    return 1; /*0x4c0fba*/
}
// link stub (no binary body yet)
 bool gamemd::XSurface::FillRectWithFlags(const RectangleStruct& clip_rect, const ColorStruct& color, int opacity_percent)
{
    int v5; // ecx
    int v6; // edi
    int *v8; // eax
    unsigned int *v9; // eax
    int v10; // ecx
    unsigned int v11; // ebp
    unsigned int v12; // esi
    unsigned int *v13; // eax
    int v14; // eax
    int v15; // edx
    unsigned int v16; // edi
    int v17; // edx
    int v18; // ebx
    int v19; // ebx
    int v20; // eax
    unsigned int v21; // ecx
    int v22; // edx
    int v23; // esi
    int v24; // edi
    unsigned __int16 *v25; // eax
    int v26; // eax
    __int16 v27; // bp
    int v28; // ebx
    int v29; // [esp+10h] [ebp-5Ch]
    __int16 v30; // [esp+14h] [ebp-58h]
    __int16 v31; // [esp+18h] [ebp-54h]
    int v32; // [esp+1Ch] [ebp-50h]
    unsigned __int16 v33; // [esp+20h] [ebp-4Ch]
    unsigned int v34; // [esp+24h] [ebp-48h]
    int v35; // [esp+28h] [ebp-44h]
    unsigned int v36; // [esp+2Ch] [ebp-40h]
    __int16 i; // [esp+38h] [ebp-34h]
    unsigned int v38[4]; // [esp+3Ch] [ebp-30h] BYREF
    unsigned int v39[2]; // [esp+4Ch] [ebp-20h] BYREF
    int v40; // [esp+54h] [ebp-18h]
    int v41; // [esp+58h] [ebp-14h]
    unsigned int v42[4]; // [esp+5Ch] [ebp-10h] BYREF
    DSurface *thisa; // [esp+70h] [ebp+4h]
    unsigned short *v44; // [esp+74h] [ebp+8h]
    unsigned int v45; // [esp+78h] [ebp+Ch]

    v6 = v5; /*0x4bb837*/
    v32 = v5; /*0x4bb839*/
    if ( (*(int (**)(void))(*(unsigned int *)v5 + 112))() < 2 ) /*0x4bb845*/
      return 0; /*0x4bb847*/
    if ( (int)this->DSurface_field_0x8 <= 0 || (int)this->DSurface_field_0xC <= 0 ) /*0x4bb863*/
      return 0; /*0x4bb865*/
    v8 = (int *)(*(int (__thiscall **)(int, unsigned int *))(*(unsigned int *)v6 + 120))(v6, v38); /*0x4bb87a*/
    v9 = ClipRectIntersection(v42, v8, (int *)this, 0, 0); /*0x4bb888*/
    v39[0] = *v9; /*0x4bb891*/
    v39[1] = v9[1]; /*0x4bb898*/
    v40 = v9[2]; /*0x4bb89f*/
    v10 = v9[3]; /*0x4bb8a3*/
    v41 = v10; /*0x4bb8a8*/
    if ( v40 <= 0 || v10 <= 0 ) /*0x4bb8b0*/
      return 0; /*0x4bb8b2*/
    v11 = 0xFFu >> g_BitShift_Green_0 << g_BitShift_Red; /*0x4bb8de*/
    v31 = v11; /*0x4bb8f1*/
    v12 = 0xFFu >> g_BitMask_Blue << g_BitMask_Green; /*0x4bb8f5*/
    v30 = v12; /*0x4bb908*/
    v34 = 0xFFu >> g_BitMask_Red << g_BitShift_Blue; /*0x4bb917*/
    v13 = CellStruct::Copy((CellStruct *)v39, v38); /*0x4bb91b*/
    v35 = (*(int (__thiscall **)(int, unsigned int, unsigned int))(*(unsigned int *)v6 + 92))(v6, *v13, v13[1]); /*0x4bb938*/
    if ( !v35 ) /*0x4bb93c*/
      return 0; /*0x4bb93e*/
    v14 = (int)a4; /*0x4bb94a*/
    if ( (unsigned int)a4 > 0x64 ) /*0x4bb951*/
      v14 = 100; /*0x4bb953*/
    v15 = (1374389535 * (unsigned __int64)(unsigned int)(255 * v14)) >> 32; /*0x4bb967*/
    v16 = 255 * v14 / 0x64u; /*0x4bb970*/
    v33 = 255 - v16; /*0x4bb97b*/
    v45 = v16; /*0x4bb983*/
    thisa = 0; /*0x4bb987*/
    IDA_LOWORD(a2) = (unsigned __int8)(*(unsigned char *)(a3 + 2) >> g_BitMask_Red); /*0x4bb99a*/
    IDA_LOWORD(v15) = (unsigned __int8)(*(unsigned char *)(a3 + 1) >> g_BitMask_Blue); /*0x4bb9b1*/
    v17 = v15 << g_BitMask_Green; /*0x4bb9b5*/
    v18 = v17 | (a2 << g_BitShift_Blue); /*0x4bb9c5*/
    IDA_LOWORD(v17) = (unsigned __int8)(*(unsigned char *)a3 >> g_BitShift_Green_0); /*0x4bb9ca*/
    v19 = (v17 << g_BitShift_Red) | v18; /*0x4bb9d2*/
    for ( i = v19; (int)thisa < v41; thisa = (DSurface *)((char *)thisa + 1) ) /*0x4bb9da*/
    {
      v29 = 0; /*0x4bb9ed*/
      v20 = (unsigned int)thisa * ((*(int (__thiscall **)(int))(*(unsigned int *)v32 + 116))(v32) / 2); /*0x4bb9fa*/
      if ( v40 > 0 ) /*0x4bba01*/
      {
        v11 = (unsigned __int16)v11; /*0x4bba0f*/
        v21 = (unsigned __int16)v12; /*0x4bba15*/
        v22 = v16 * (v12 & (unsigned __int16)v19); /*0x4bba23*/
        v23 = v16 * (unsigned __int16)(v19 & v11); /*0x4bba26*/
        v24 = v45 * (unsigned __int16)(v19 & v34); /*0x4bba4b*/
        v25 = (unsigned __int16 *)(v35 + 2 * v20); /*0x4bba50*/
        v36 = (unsigned __int16)v11; /*0x4bba53*/
        v44 = v25; /*0x4bba57*/
        while ( 1 ) /*0x4bba68*/
        {
          v26 = *v25; /*0x4bba68*/
          v27 = v30 & ((v22 + v33 * (v26 & v21)) >> 8) | v31 & ((v23 + v33 * (v26 & v11)) >> 8); /*0x4bba8b*/
          v28 = (unsigned __int16)(v26 & v34); /*0x4bba91*/
          v25 = v44 + 1; /*0x4bba9c*/
          *v44++ = ((v24 + (unsigned int)v33 * v28) >> 8) | v27; /*0x4bbaa8*/
          if ( ++v29 >= v40 ) /*0x4bbabb*/
            break; /*0x4bbabb*/
          v11 = v36; /*0x4bba5d*/
        }
        IDA_LOWORD(v12) = v30; /*0x4bbabd*/
        IDA_LOWORD(v19) = i; /*0x4bbac1*/
        IDA_LOWORD(v11) = v31; /*0x4bbac5*/
        v16 = v45; /*0x4bbac9*/
      }
    }
    (*(void (__thiscall **)(int))(*(unsigned int *)v32 + 96))(v32); /*0x4bbae8*/
    return 1; /*0x4bb849*/
}
// link stub (no binary body yet)
 bool gamemd::XSurface::Unlock()
{
    --this->LockCount; /*0x411574*/
    return 1; /*0x411579*/
}
// link stub (no binary body yet)
//NODCL member not in any current header: int32_t __stdcall gamemd::MapClass::IsVisible(CellStruct cell) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int gamemd::RawFileClass::GetFileSize() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int gamemd::RawFileClass::ReadBytes(void* a0, int a1) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int gamemd::RawFileClass::Seek(int a0, gamemd::FileSeekMode) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int gamemd::RawFileClass::WriteBytes(void* a0, int a1) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TActionClass::GetClassID(CLSID* class_id)
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
    this->idxArray = -1; /*0x71e6ab*/
    this->TActionClass_field_28 = 0; /*0x71e6b2*/
    this->TActionClass_field_2C = 0; /*0x71e6b5*/
    this->TActionClass_field_30 = 0; /*0x71e6b8*/
    IDA_LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
    *(unsigned int *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
    this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
    this->? = &TEventClass::`vftable'; /*0x71e6c7*/
    this->? = &TEventClass::`vftable'; /*0x71e6ce*/
    this->? = &TEventClass::`vftable'; /*0x71e6d5*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
    if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
      && g_BuildingLoadQueue_Array.?[55] > 0
      && (v3 = (*(int (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.?[50] + 8))(
                 &g_BuildingLoadQueue_Array.?[50],
                 g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
                 0),
          v2 = g_BuildingLoadQueue_Array.?[54],
          v3) )
    {
      g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
      v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
    }
    v4 = 0; /*0x71e734*/
    if ( v2 <= 0 ) /*0x71e738*/
    {
  LABEL_11:
      v4 = -1; /*0x71e74c*/
    }
    else
    {
      v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
      while ( *v5 != this ) /*0x71e742*/
      {
        ++v4; /*0x71e744*/
        ++v5; /*0x71e745*/
        if ( v4 >= v2 ) /*0x71e74a*/
          goto LABEL_11; /*0x71e74a*/
      }
    }
    this->idxArray = v4; /*0x71e74f*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
    }
    this->TActionClass_field_34 = 0; /*0x71e7f8*/
    return (int)this; /*0x71e7fd*/
}
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TActionClass::Load(IStream* stream)
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
    this->idxArray = -1; /*0x71e6ab*/
    this->TActionClass_field_28 = 0; /*0x71e6b2*/
    this->TActionClass_field_2C = 0; /*0x71e6b5*/
    this->TActionClass_field_30 = 0; /*0x71e6b8*/
    IDA_LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
    *(unsigned int *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
    this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
    this->? = &TEventClass::`vftable'; /*0x71e6c7*/
    this->? = &TEventClass::`vftable'; /*0x71e6ce*/
    this->? = &TEventClass::`vftable'; /*0x71e6d5*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
    if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
      && g_BuildingLoadQueue_Array.?[55] > 0
      && (v3 = (*(int (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.?[50] + 8))(
                 &g_BuildingLoadQueue_Array.?[50],
                 g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
                 0),
          v2 = g_BuildingLoadQueue_Array.?[54],
          v3) )
    {
      g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
      v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
    }
    v4 = 0; /*0x71e734*/
    if ( v2 <= 0 ) /*0x71e738*/
    {
  LABEL_11:
      v4 = -1; /*0x71e74c*/
    }
    else
    {
      v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
      while ( *v5 != this ) /*0x71e742*/
      {
        ++v4; /*0x71e744*/
        ++v5; /*0x71e745*/
        if ( v4 >= v2 ) /*0x71e74a*/
          goto LABEL_11; /*0x71e74a*/
      }
    }
    this->idxArray = v4; /*0x71e74f*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
    }
    this->TActionClass_field_34 = 0; /*0x71e7f8*/
    return (int)this; /*0x71e7fd*/
}
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TActionClass::Save(IStream* stream, int clear_dirty)
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
    this->idxArray = -1; /*0x71e6ab*/
    this->TActionClass_field_28 = 0; /*0x71e6b2*/
    this->TActionClass_field_2C = 0; /*0x71e6b5*/
    this->TActionClass_field_30 = 0; /*0x71e6b8*/
    IDA_LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
    *(unsigned int *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
    this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
    this->? = &TEventClass::`vftable'; /*0x71e6c7*/
    this->? = &TEventClass::`vftable'; /*0x71e6ce*/
    this->? = &TEventClass::`vftable'; /*0x71e6d5*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
    if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
      && g_BuildingLoadQueue_Array.?[55] > 0
      && (v3 = (*(int (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.?[50] + 8))(
                 &g_BuildingLoadQueue_Array.?[50],
                 g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
                 0),
          v2 = g_BuildingLoadQueue_Array.?[54],
          v3) )
    {
      g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
      v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
    }
    v4 = 0; /*0x71e734*/
    if ( v2 <= 0 ) /*0x71e738*/
    {
  LABEL_11:
      v4 = -1; /*0x71e74c*/
    }
    else
    {
      v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
      while ( *v5 != this ) /*0x71e742*/
      {
        ++v4; /*0x71e744*/
        ++v5; /*0x71e745*/
        if ( v4 >= v2 ) /*0x71e74a*/
          goto LABEL_11; /*0x71e74a*/
      }
    }
    this->idxArray = v4; /*0x71e74f*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
    }
    this->TActionClass_field_34 = 0; /*0x71e7f8*/
    return (int)this; /*0x71e7fd*/
}
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TEventClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TEventClass::Load(IStream* stream)
{
    int result; // eax

    result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x71f93f*/
    if ( result >= 0 ) /*0x71f946*/
      return 0; /*0x71f948*/
    return result; /*0x71f94a*/
}
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TEventClass::Save(IStream* stream, int clear_dirty)
{
    int result; // eax

    result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x71f93f*/
    if ( result >= 0 ) /*0x71f946*/
      return 0; /*0x71f948*/
    return result; /*0x71f94a*/
}
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TacticalClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TacticalClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TacticalClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::TeamTypeClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::TeamTypeClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::TeamTypeClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::WaypointPathClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::WaypointPathClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::WaypointPathClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
 CellStruct* gamemd::MPBattleClass::AssignStartingPositionsToHouse(CellStruct* a0, int32_t, DynamicVectorClass<CellStruct>* a2, uint8_t* a3)
{
    unsigned int *v6; // eax

    v6 = RA2_OPNEW(0x40u); /*0x5d8172*/
    if ( v6 ) /*0x5d817c*/
      return MPBattleClass::initGame(v6, a1, a2, a3, a4, a5, a6); /*0x5d819e*/
    else
      return 0; /*0x5d81a6*/
}
// link stub (no binary body yet)
 CellStruct* gamemd::MPGameModeClass::AssignStartingPositionsToHouse(CellStruct* a0, int32_t, DynamicVectorClass<CellStruct>* a2, uint8_t* a3) { return {}; }
// link stub (no binary body yet)
 void* gamemd::XSurface::Lock(int x, int y)
{
    ++this->LockCount; /*0x411564*/
    return 0; /*0x411569*/
}
// link stub (no binary body yet)
 void gamemd::AbstractTypeClass::LoadTheaterSpecificArt(TheaterType th_type)
{
    char *v3; // ebx
    int v4; // eax
    char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
    char Destination[48]; // [esp+20h] [ebp-34h] BYREF
    char v8; // [esp+50h] [ebp-4h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x410809*/
    v3 = (char *)(this + 9); /*0x410812*/
    *((unsigned char *)this + 36) = 0; /*0x410817*/
    *((unsigned char *)this + 61) = 0; /*0x41081a*/
    *((unsigned char *)this + 100) = 0; /*0x41081e*/
    *this = (int)&AbstractTypeClass::`vftable'; /*0x410822*/
    *(this + 1) = (int)&AbstractTypeClass::`vftable'; /*0x410829*/
    *(this + 2) = (int)&AbstractTypeClass::`vftable'; /*0x410830*/
    *(this + 3) = (int)&AbstractTypeClass::`vftable'; /*0x410837*/
    if ( Source ) /*0x41083e*/
    {
      strncpy(Destination, Source, 0x18u); /*0x410895*/
      Destination[24] = 0; /*0x4108a3*/
      if ( Destination == v3 ) /*0x4108a8*/
        goto LABEL_9; /*0x4108a8*/
      goto LABEL_8; /*0x4108a8*/
    }
    sprintf(Buffer, "%08X", this); /*0x41084b*/
    if ( Buffer ) /*0x410859*/
    {
      strncpy(Destination, Buffer, 0x18u); /*0x41086d*/
      Destination[24] = 0; /*0x410875*/
    }
    else
    {
      Destination[0] = 0; /*0x41085b*/
    }
    if ( Destination != v3 ) /*0x410880*/
    {
  LABEL_8:
      qmemcpy(v3, Destination, 0x18u); /*0x4108b5*/
      *((unsigned char *)this + 60) = Destination[24]; /*0x4108b7*/
    }
  LABEL_9:
    if ( this == (int *)-36 ) /*0x4108ba*/
    {
      Destination[0] = 0; /*0x4108bc*/
    }
    else
    {
      strncpy(Destination, (const char *)this + 36, 0x30u); /*0x4108ca*/
      v8 = 0; /*0x4108d2*/
    }
    if ( Destination != (char *)(this + 25) ) /*0x4108e0*/
    {
      qmemcpy(this + 25, Destination, 0x30u); /*0x4108eb*/
      *((unsigned char *)this + 148) = v8; /*0x4108ed*/
    }
    *(this + 24) = (int)&g_TypeClass_DefaultString; /*0x4108ee*/
    if ( dword_A8E978 < dword_A8E970 /*0x410929*/
      || (byte_A8E975 || !dword_A8E970)
      && dword_A8E97C > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(dword_A8E968 + 8))(
           &dword_A8E968,
           dword_A8E970 + dword_A8E97C,
           0) )
    {
      v4 = dword_A8E978++; /*0x410936*/
      *((unsigned int *)dword_A8E96C + v4) = this; /*0x410945*/
    }
    return (int)this; /*0x410948*/
}
// link stub (no binary body yet)
 void gamemd::DisplayClass::LeftMouseButtonUp(const CoordStruct& coords, const CellStruct& cell, ObjectClass* object, Action action, uint32_t unk2) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::AllocateCells() {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::ConstructCells() {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::CreateEmptyMap(const RectangleStruct& map_rect, bool reuse, int8_t n_level, bool unk2) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::DestructCells() {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::PointerGotInvalid(AbstractClass* ptr, bool unk) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::SetVisibleRect(const RectangleStruct& map_rect) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::UpdateCrates() {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::RawFileClass::CDCheck(unsigned int a0, bool a1, const char* a2) {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::RawFileClass::Close() {}
// link stub (no binary body yet)
 void gamemd::TActionClass::pointerExpired(AbstractClass* ptr, bool removed)
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
    this->idxArray = -1; /*0x71e6ab*/
    this->TActionClass_field_28 = 0; /*0x71e6b2*/
    this->TActionClass_field_2C = 0; /*0x71e6b5*/
    this->TActionClass_field_30 = 0; /*0x71e6b8*/
    IDA_LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
    *(unsigned int *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
    this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
    this->? = &TEventClass::`vftable'; /*0x71e6c7*/
    this->? = &TEventClass::`vftable'; /*0x71e6ce*/
    this->? = &TEventClass::`vftable'; /*0x71e6d5*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
    if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
      && g_BuildingLoadQueue_Array.?[55] > 0
      && (v3 = (*(int (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.?[50] + 8))(
                 &g_BuildingLoadQueue_Array.?[50],
                 g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
                 0),
          v2 = g_BuildingLoadQueue_Array.?[54],
          v3) )
    {
      g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
      v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
    }
    v4 = 0; /*0x71e734*/
    if ( v2 <= 0 ) /*0x71e738*/
    {
  LABEL_11:
      v4 = -1; /*0x71e74c*/
    }
    else
    {
      v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
      while ( *v5 != this ) /*0x71e742*/
      {
        ++v4; /*0x71e744*/
        ++v5; /*0x71e745*/
        if ( v4 >= v2 ) /*0x71e74a*/
          goto LABEL_11; /*0x71e74a*/
      }
    }
    this->idxArray = v4; /*0x71e74f*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
    }
    this->TActionClass_field_34 = 0; /*0x71e7f8*/
    return (int)this; /*0x71e7fd*/
}
// link stub (no binary body yet)
 void gamemd::TEventClass::pointerExpired(AbstractClass* ptr, bool removed) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::TeamTypeClass::pointerExpired(AbstractClass* ptr, bool removed) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::WaypointPathClass::pointerExpired(AbstractClass* ptr, bool removed) {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::BuildingClass::CreateDestructionCrater() {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::TActionClass::ExecuteAction(int a0, ra2::game::ObjectClass* a1, ra2::game::TechnoClass* a2, gamemd::HouseClass* a3, int a4, int a5) {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::TActionClass::ddtor() {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::TEventClass::ddtor() {}
} // namespace gamemd

// link stub (no binary body yet)
//NODCL member not in any current header: ra2::game::DirStruct::DirStruct() {}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::CaptureManagerClass::GetClassID(CLSID* class_id)
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(unsigned char *)(this + 48) = 1; /*0x4717e2*/
    *(unsigned int *)(this + 40) = 0; /*0x4717e6*/
    *(unsigned int *)(this + 44) = 0; /*0x4717e9*/
    *(unsigned char *)(this + 49) = 0; /*0x4717ec*/
    *(unsigned int *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(unsigned int *)(this + 56) = 10; /*0x4717f6*/
    *(unsigned int *)(this + 52) = 0; /*0x4717fd*/
    *(unsigned int *)(this + 72) = a2; /*0x471800*/
    *(unsigned int *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(unsigned int *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(unsigned int *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(unsigned int *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(unsigned int *)(this + 60) = a3; /*0x471822*/
    *(unsigned char *)(this + 64) = a4; /*0x471825*/
    *(unsigned char *)(this + 65) = 0; /*0x471828*/
    *(unsigned int *)(this + 76) = 30; /*0x47182b*/
    *(unsigned int *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((unsigned int *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::CaptureManagerClass::Load(IStream* stream)
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(unsigned char *)(this + 48) = 1; /*0x4717e2*/
    *(unsigned int *)(this + 40) = 0; /*0x4717e6*/
    *(unsigned int *)(this + 44) = 0; /*0x4717e9*/
    *(unsigned char *)(this + 49) = 0; /*0x4717ec*/
    *(unsigned int *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(unsigned int *)(this + 56) = 10; /*0x4717f6*/
    *(unsigned int *)(this + 52) = 0; /*0x4717fd*/
    *(unsigned int *)(this + 72) = a2; /*0x471800*/
    *(unsigned int *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(unsigned int *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(unsigned int *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(unsigned int *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(unsigned int *)(this + 60) = a3; /*0x471822*/
    *(unsigned char *)(this + 64) = a4; /*0x471825*/
    *(unsigned char *)(this + 65) = 0; /*0x471828*/
    *(unsigned int *)(this + 76) = 30; /*0x47182b*/
    *(unsigned int *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((unsigned int *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::CaptureManagerClass::QueryInterface(const IID& a0, void** a1)
{
    void *v3; // eax

    v3 = *(void **)&this->m_1[3]; /*0x473053*/
    *(unsigned int *)this->__pad_0 = &VectorClass<ControlNode *>::`vftable'; /*0x473056*/
    if ( v3 && IDA_BYTE1(this->m_C) ) /*0x473060*/
    {
      RA2_OPDEL(v3); /*0x473068*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x473070*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x47307b*/
    this->m_8 = 0; /*0x473081*/
    if ( (a2 & 1) != 0 ) /*0x473088*/
      RA2_OPDEL(this); /*0x47308b*/
    return this->__pad_0; /*0x473095*/
}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::CaptureManagerClass::Save(IStream* stream, int clear_dirty)
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(unsigned char *)(this + 48) = 1; /*0x4717e2*/
    *(unsigned int *)(this + 40) = 0; /*0x4717e6*/
    *(unsigned int *)(this + 44) = 0; /*0x4717e9*/
    *(unsigned char *)(this + 49) = 0; /*0x4717ec*/
    *(unsigned int *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(unsigned int *)(this + 56) = 10; /*0x4717f6*/
    *(unsigned int *)(this + 52) = 0; /*0x4717fd*/
    *(unsigned int *)(this + 72) = a2; /*0x471800*/
    *(unsigned int *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(unsigned int *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(unsigned int *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(unsigned int *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(unsigned int *)(this + 60) = a3; /*0x471822*/
    *(unsigned char *)(this + 64) = a4; /*0x471825*/
    *(unsigned char *)(this + 65) = 0; /*0x471828*/
    *(unsigned int *)(this + 76) = 30; /*0x47182b*/
    *(unsigned int *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((unsigned int *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SlaveManagerClass::GetClassID(CLSID* class_id)
{
    int v2; // eax
    int v4; // [esp+8h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
    this->slaveVectorCount = 0; /*0x6af371*/
    this->slaveVectorCapacity = 0; /*0x6af374*/
    IDA_LOBYTE(this->creationFrame) = 1; /*0x6af377*/
    IDA_BYTE1(this->creationFrame) = 0; /*0x6af37b*/
    this->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af37e*/
    *(unsigned int *)&this->__pad_48[4] = 10; /*0x6af385*/
    *(unsigned int *)this->__pad_48 = 0; /*0x6af38c*/
    *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)&stru_A8EB00.?[416]; /*0x6af395*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
    this->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6af39b*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3af*/
    this->master = 0; /*0x6af3b6*/
    this->house = 0; /*0x6af3b9*/
    this->slaveOwner = 0; /*0x6af3bc*/
    this->slaveType = 0; /*0x6af3bf*/
    this->slaveCount = 0; /*0x6af3c2*/
    *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)&stru_A8EB00.?[416]; /*0x6af3cb*/
    this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
    this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
    this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
    if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
      || (byte_B0B5FD || !dword_B0B5F8)
      && dword_B0B604 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(SlaveManagerClass_Array + 8))(
           &SlaveManagerClass_Array,
           dword_B0B5F8 + dword_B0B604,
           0) )
    {
      v2 = dword_B0B600++; /*0x6af419*/
      *((unsigned int *)dword_B0B5F4 + v2) = this; /*0x6af428*/
    }
    return (int)this; /*0x6af42d*/
}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SlaveManagerClass::Load(IStream* stream)
{
    int v2; // eax
    int v4; // [esp+8h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
    this->slaveVectorCount = 0; /*0x6af371*/
    this->slaveVectorCapacity = 0; /*0x6af374*/
    IDA_LOBYTE(this->creationFrame) = 1; /*0x6af377*/
    IDA_BYTE1(this->creationFrame) = 0; /*0x6af37b*/
    this->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af37e*/
    *(unsigned int *)&this->__pad_48[4] = 10; /*0x6af385*/
    *(unsigned int *)this->__pad_48 = 0; /*0x6af38c*/
    *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)&stru_A8EB00.?[416]; /*0x6af395*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
    this->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6af39b*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3af*/
    this->master = 0; /*0x6af3b6*/
    this->house = 0; /*0x6af3b9*/
    this->slaveOwner = 0; /*0x6af3bc*/
    this->slaveType = 0; /*0x6af3bf*/
    this->slaveCount = 0; /*0x6af3c2*/
    *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)&stru_A8EB00.?[416]; /*0x6af3cb*/
    this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
    this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
    this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
    if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
      || (byte_B0B5FD || !dword_B0B5F8)
      && dword_B0B604 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(SlaveManagerClass_Array + 8))(
           &SlaveManagerClass_Array,
           dword_B0B5F8 + dword_B0B604,
           0) )
    {
      v2 = dword_B0B600++; /*0x6af419*/
      *((unsigned int *)dword_B0B5F4 + v2) = this; /*0x6af428*/
    }
    return (int)this; /*0x6af42d*/
}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SlaveManagerClass::Save(IStream* stream, int clear_dirty)
{
    int v2; // eax
    int v4; // [esp+8h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
    this->slaveVectorCount = 0; /*0x6af371*/
    this->slaveVectorCapacity = 0; /*0x6af374*/
    IDA_LOBYTE(this->creationFrame) = 1; /*0x6af377*/
    IDA_BYTE1(this->creationFrame) = 0; /*0x6af37b*/
    this->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af37e*/
    *(unsigned int *)&this->__pad_48[4] = 10; /*0x6af385*/
    *(unsigned int *)this->__pad_48 = 0; /*0x6af38c*/
    *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)&stru_A8EB00.?[416]; /*0x6af395*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
    this->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6af39b*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3af*/
    this->master = 0; /*0x6af3b6*/
    this->house = 0; /*0x6af3b9*/
    this->slaveOwner = 0; /*0x6af3bc*/
    this->slaveType = 0; /*0x6af3bf*/
    this->slaveCount = 0; /*0x6af3c2*/
    *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)&stru_A8EB00.?[416]; /*0x6af3cb*/
    this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
    this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
    this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
    if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
      || (byte_B0B5FD || !dword_B0B5F8)
      && dword_B0B604 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(SlaveManagerClass_Array + 8))(
           &SlaveManagerClass_Array,
           dword_B0B5F8 + dword_B0B604,
           0) )
    {
      v2 = dword_B0B600++; /*0x6af419*/
      *((unsigned int *)dword_B0B5F4 + v2) = this; /*0x6af428*/
    }
    return (int)this; /*0x6af42d*/
}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SpawnManagerClass::GetClassID(CLSID* class_id)
{
    wchar_t *v7; // eax
    int *v8; // ebp
    wchar_t *v9; // eax
    int v10; // ebx
    int v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    int v17; // edx
    int v18; // eax
    int v20; // [esp+14h] [ebp-8h]
    int i; // [esp+20h] [ebp+4h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6b6c99*/
    SpawnControlVector::Constructor(0, 0); /*0x6b6ca7*/
    *(unsigned int *)(this + 56) = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6cb0*/
    *(unsigned int *)(this + 76) = 10; /*0x6b6cb6*/
    *(unsigned int *)(this + 72) = 0; /*0x6b6cbd*/
    v7 = dword_A8ED84; /*0x6b6cc0*/
    *(unsigned int *)(this + 88) = 0; /*0x6b6cc5*/
    *(unsigned int *)(this + 80) = v7; /*0x6b6cc8*/
    *(unsigned int *)(this + 92) = dword_A8ED84; /*0x6b6cd5*/
    *(unsigned int *)(this + 100) = 0; /*0x6b6cdc*/
    *(unsigned int *)(this + 40) = a3; /*0x6b6cdf*/
    *(unsigned int *)(this + 36) = a2; /*0x6b6ce6*/
    *(unsigned int *)this = &SpawnManagerClass::`vftable'; /*0x6b6cef*/
    *(unsigned int *)(this + 4) = &SpawnManagerClass::`vftable'; /*0x6b6cf5*/
    *(unsigned int *)(this + 8) = &SpawnManagerClass::`vftable'; /*0x6b6cfc*/
    *(unsigned int *)(this + 12) = &SpawnManagerClass::`vftable'; /*0x6b6d03*/
    *(unsigned int *)(this + 44) = a4; /*0x6b6d0a*/
    *(unsigned int *)(this + 48) = a5; /*0x6b6d0d*/
    *(unsigned int *)(this + 52) = a6; /*0x6b6d10*/
    for ( i = 0; i < *(unsigned int *)(this + 44); ++i ) /*0x6b6d17*/
    {
      v8 = (int *)RA2_OPNEW(0x18u); /*0x6b6d24*/
      if ( !v8 ) /*0x6b6d2b*/
        break; /*0x6b6d2b*/
      v9 = dword_A8ED84; /*0x6b6d31*/
      v8[4] = 0; /*0x6b6d36*/
      v8[2] = (int)v9; /*0x6b6d39*/
      v10 = **(unsigned int **)(this + 40); /*0x6b6d44*/
      v11 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(this + 36) + 60))(*(unsigned int *)(this + 36)); /*0x6b6d46*/
      v12 = (*(int (__thiscall **)(unsigned int, int))(v10 + 140))(*(unsigned int *)(this + 40), v11); /*0x6b6d4d*/
      *v8 = v12; /*0x6b6d55*/
      if ( v12 ) /*0x6b6d5a*/
      {
        v13 = *(unsigned int *)(this + 40); /*0x6b6d66*/
        v8[5] = v13 == *((unsigned int *)dword_8871E0 + 312) /*0x6b6d86*/
             || v13 == *((unsigned int *)dword_8871E0 + 325)
             || v13 == *((unsigned int *)dword_8871E0 + 338);
        (*(void (__thiscall **)(int))(*(unsigned int *)v12 + 212))(v12); /*0x6b6d91*/
        *(unsigned int *)(*v8 + 724) = *(unsigned int *)(this + 36); /*0x6b6da1*/
        v8[1] = 0; /*0x6b6da7*/
        v8[2] = (int)dword_A8ED84; /*0x6b6db1*/
        v8[3] = v20; /*0x6b6db4*/
        v8[4] = 0; /*0x6b6db7*/
        v14 = *(unsigned int *)(this + 64); /*0x6b6dba*/
        if ( *(unsigned int *)(this + 72) < v14 /*0x6b6dda*/
          || (*(unsigned char *)(this + 69) || !v14)
          && (v15 = *(unsigned int *)(this + 76), v15 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(this + 56) + 8))(this + 56, v14 + v15, 0) )
        {
          v16 = *(unsigned int *)(this + 72); /*0x6b6de1*/
          v17 = *(unsigned int *)(this + 60); /*0x6b6de4*/
          *(unsigned int *)(this + 72) = v16 + 1; /*0x6b6dea*/
          *(unsigned int *)(v17 + 4 * v16) = v8; /*0x6b6ded*/
        }
      }
    }
    *(unsigned int *)(this + 80) = dword_A8ED84; /*0x6b6e0d*/
    *(unsigned int *)(this + 84) = v20; /*0x6b6e19*/
    *(unsigned int *)(this + 88) = 20; /*0x6b6e1c*/
    *(unsigned int *)(this + 104) = 0; /*0x6b6e1f*/
    *(unsigned int *)(this + 108) = 0; /*0x6b6e22*/
    *(unsigned int *)(this + 112) = 0; /*0x6b6e25*/
    *(unsigned int *)(this + 92) = dword_A8ED84; /*0x6b6e2f*/
    *(unsigned int *)(this + 96) = v20; /*0x6b6e32*/
    *(unsigned int *)(this + 100) = 0; /*0x6b6e35*/
    if ( dword_B0B890 < dword_B0B888 /*0x6b6e69*/
      || (byte_B0B88D || !dword_B0B888)
      && dword_B0B894 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(SpawnManagerClass_Array + 8))(
           &SpawnManagerClass_Array,
           dword_B0B888 + dword_B0B894,
           0) )
    {
      v18 = dword_B0B890++; /*0x6b6e76*/
      *((unsigned int *)dword_B0B884 + v18) = this; /*0x6b6e85*/
    }
    return this; /*0x6b6e8a*/
}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SpawnManagerClass::Load(IStream* stream)
{
    wchar_t *v7; // eax
    int *v8; // ebp
    wchar_t *v9; // eax
    int v10; // ebx
    int v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    int v17; // edx
    int v18; // eax
    int v20; // [esp+14h] [ebp-8h]
    int i; // [esp+20h] [ebp+4h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6b6c99*/
    SpawnControlVector::Constructor(0, 0); /*0x6b6ca7*/
    *(unsigned int *)(this + 56) = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6cb0*/
    *(unsigned int *)(this + 76) = 10; /*0x6b6cb6*/
    *(unsigned int *)(this + 72) = 0; /*0x6b6cbd*/
    v7 = dword_A8ED84; /*0x6b6cc0*/
    *(unsigned int *)(this + 88) = 0; /*0x6b6cc5*/
    *(unsigned int *)(this + 80) = v7; /*0x6b6cc8*/
    *(unsigned int *)(this + 92) = dword_A8ED84; /*0x6b6cd5*/
    *(unsigned int *)(this + 100) = 0; /*0x6b6cdc*/
    *(unsigned int *)(this + 40) = a3; /*0x6b6cdf*/
    *(unsigned int *)(this + 36) = a2; /*0x6b6ce6*/
    *(unsigned int *)this = &SpawnManagerClass::`vftable'; /*0x6b6cef*/
    *(unsigned int *)(this + 4) = &SpawnManagerClass::`vftable'; /*0x6b6cf5*/
    *(unsigned int *)(this + 8) = &SpawnManagerClass::`vftable'; /*0x6b6cfc*/
    *(unsigned int *)(this + 12) = &SpawnManagerClass::`vftable'; /*0x6b6d03*/
    *(unsigned int *)(this + 44) = a4; /*0x6b6d0a*/
    *(unsigned int *)(this + 48) = a5; /*0x6b6d0d*/
    *(unsigned int *)(this + 52) = a6; /*0x6b6d10*/
    for ( i = 0; i < *(unsigned int *)(this + 44); ++i ) /*0x6b6d17*/
    {
      v8 = (int *)RA2_OPNEW(0x18u); /*0x6b6d24*/
      if ( !v8 ) /*0x6b6d2b*/
        break; /*0x6b6d2b*/
      v9 = dword_A8ED84; /*0x6b6d31*/
      v8[4] = 0; /*0x6b6d36*/
      v8[2] = (int)v9; /*0x6b6d39*/
      v10 = **(unsigned int **)(this + 40); /*0x6b6d44*/
      v11 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(this + 36) + 60))(*(unsigned int *)(this + 36)); /*0x6b6d46*/
      v12 = (*(int (__thiscall **)(unsigned int, int))(v10 + 140))(*(unsigned int *)(this + 40), v11); /*0x6b6d4d*/
      *v8 = v12; /*0x6b6d55*/
      if ( v12 ) /*0x6b6d5a*/
      {
        v13 = *(unsigned int *)(this + 40); /*0x6b6d66*/
        v8[5] = v13 == *((unsigned int *)dword_8871E0 + 312) /*0x6b6d86*/
             || v13 == *((unsigned int *)dword_8871E0 + 325)
             || v13 == *((unsigned int *)dword_8871E0 + 338);
        (*(void (__thiscall **)(int))(*(unsigned int *)v12 + 212))(v12); /*0x6b6d91*/
        *(unsigned int *)(*v8 + 724) = *(unsigned int *)(this + 36); /*0x6b6da1*/
        v8[1] = 0; /*0x6b6da7*/
        v8[2] = (int)dword_A8ED84; /*0x6b6db1*/
        v8[3] = v20; /*0x6b6db4*/
        v8[4] = 0; /*0x6b6db7*/
        v14 = *(unsigned int *)(this + 64); /*0x6b6dba*/
        if ( *(unsigned int *)(this + 72) < v14 /*0x6b6dda*/
          || (*(unsigned char *)(this + 69) || !v14)
          && (v15 = *(unsigned int *)(this + 76), v15 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(this + 56) + 8))(this + 56, v14 + v15, 0) )
        {
          v16 = *(unsigned int *)(this + 72); /*0x6b6de1*/
          v17 = *(unsigned int *)(this + 60); /*0x6b6de4*/
          *(unsigned int *)(this + 72) = v16 + 1; /*0x6b6dea*/
          *(unsigned int *)(v17 + 4 * v16) = v8; /*0x6b6ded*/
        }
      }
    }
    *(unsigned int *)(this + 80) = dword_A8ED84; /*0x6b6e0d*/
    *(unsigned int *)(this + 84) = v20; /*0x6b6e19*/
    *(unsigned int *)(this + 88) = 20; /*0x6b6e1c*/
    *(unsigned int *)(this + 104) = 0; /*0x6b6e1f*/
    *(unsigned int *)(this + 108) = 0; /*0x6b6e22*/
    *(unsigned int *)(this + 112) = 0; /*0x6b6e25*/
    *(unsigned int *)(this + 92) = dword_A8ED84; /*0x6b6e2f*/
    *(unsigned int *)(this + 96) = v20; /*0x6b6e32*/
    *(unsigned int *)(this + 100) = 0; /*0x6b6e35*/
    if ( dword_B0B890 < dword_B0B888 /*0x6b6e69*/
      || (byte_B0B88D || !dword_B0B888)
      && dword_B0B894 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(SpawnManagerClass_Array + 8))(
           &SpawnManagerClass_Array,
           dword_B0B888 + dword_B0B894,
           0) )
    {
      v18 = dword_B0B890++; /*0x6b6e76*/
      *((unsigned int *)dword_B0B884 + v18) = this; /*0x6b6e85*/
    }
    return this; /*0x6b6e8a*/
}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SpawnManagerClass::Save(IStream* stream, int clear_dirty)
{
    wchar_t *v7; // eax
    int *v8; // ebp
    wchar_t *v9; // eax
    int v10; // ebx
    int v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    int v17; // edx
    int v18; // eax
    int v20; // [esp+14h] [ebp-8h]
    int i; // [esp+20h] [ebp+4h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6b6c99*/
    SpawnControlVector::Constructor(0, 0); /*0x6b6ca7*/
    *(unsigned int *)(this + 56) = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6cb0*/
    *(unsigned int *)(this + 76) = 10; /*0x6b6cb6*/
    *(unsigned int *)(this + 72) = 0; /*0x6b6cbd*/
    v7 = dword_A8ED84; /*0x6b6cc0*/
    *(unsigned int *)(this + 88) = 0; /*0x6b6cc5*/
    *(unsigned int *)(this + 80) = v7; /*0x6b6cc8*/
    *(unsigned int *)(this + 92) = dword_A8ED84; /*0x6b6cd5*/
    *(unsigned int *)(this + 100) = 0; /*0x6b6cdc*/
    *(unsigned int *)(this + 40) = a3; /*0x6b6cdf*/
    *(unsigned int *)(this + 36) = a2; /*0x6b6ce6*/
    *(unsigned int *)this = &SpawnManagerClass::`vftable'; /*0x6b6cef*/
    *(unsigned int *)(this + 4) = &SpawnManagerClass::`vftable'; /*0x6b6cf5*/
    *(unsigned int *)(this + 8) = &SpawnManagerClass::`vftable'; /*0x6b6cfc*/
    *(unsigned int *)(this + 12) = &SpawnManagerClass::`vftable'; /*0x6b6d03*/
    *(unsigned int *)(this + 44) = a4; /*0x6b6d0a*/
    *(unsigned int *)(this + 48) = a5; /*0x6b6d0d*/
    *(unsigned int *)(this + 52) = a6; /*0x6b6d10*/
    for ( i = 0; i < *(unsigned int *)(this + 44); ++i ) /*0x6b6d17*/
    {
      v8 = (int *)RA2_OPNEW(0x18u); /*0x6b6d24*/
      if ( !v8 ) /*0x6b6d2b*/
        break; /*0x6b6d2b*/
      v9 = dword_A8ED84; /*0x6b6d31*/
      v8[4] = 0; /*0x6b6d36*/
      v8[2] = (int)v9; /*0x6b6d39*/
      v10 = **(unsigned int **)(this + 40); /*0x6b6d44*/
      v11 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(this + 36) + 60))(*(unsigned int *)(this + 36)); /*0x6b6d46*/
      v12 = (*(int (__thiscall **)(unsigned int, int))(v10 + 140))(*(unsigned int *)(this + 40), v11); /*0x6b6d4d*/
      *v8 = v12; /*0x6b6d55*/
      if ( v12 ) /*0x6b6d5a*/
      {
        v13 = *(unsigned int *)(this + 40); /*0x6b6d66*/
        v8[5] = v13 == *((unsigned int *)dword_8871E0 + 312) /*0x6b6d86*/
             || v13 == *((unsigned int *)dword_8871E0 + 325)
             || v13 == *((unsigned int *)dword_8871E0 + 338);
        (*(void (__thiscall **)(int))(*(unsigned int *)v12 + 212))(v12); /*0x6b6d91*/
        *(unsigned int *)(*v8 + 724) = *(unsigned int *)(this + 36); /*0x6b6da1*/
        v8[1] = 0; /*0x6b6da7*/
        v8[2] = (int)dword_A8ED84; /*0x6b6db1*/
        v8[3] = v20; /*0x6b6db4*/
        v8[4] = 0; /*0x6b6db7*/
        v14 = *(unsigned int *)(this + 64); /*0x6b6dba*/
        if ( *(unsigned int *)(this + 72) < v14 /*0x6b6dda*/
          || (*(unsigned char *)(this + 69) || !v14)
          && (v15 = *(unsigned int *)(this + 76), v15 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(this + 56) + 8))(this + 56, v14 + v15, 0) )
        {
          v16 = *(unsigned int *)(this + 72); /*0x6b6de1*/
          v17 = *(unsigned int *)(this + 60); /*0x6b6de4*/
          *(unsigned int *)(this + 72) = v16 + 1; /*0x6b6dea*/
          *(unsigned int *)(v17 + 4 * v16) = v8; /*0x6b6ded*/
        }
      }
    }
    *(unsigned int *)(this + 80) = dword_A8ED84; /*0x6b6e0d*/
    *(unsigned int *)(this + 84) = v20; /*0x6b6e19*/
    *(unsigned int *)(this + 88) = 20; /*0x6b6e1c*/
    *(unsigned int *)(this + 104) = 0; /*0x6b6e1f*/
    *(unsigned int *)(this + 108) = 0; /*0x6b6e22*/
    *(unsigned int *)(this + 112) = 0; /*0x6b6e25*/
    *(unsigned int *)(this + 92) = dword_A8ED84; /*0x6b6e2f*/
    *(unsigned int *)(this + 96) = v20; /*0x6b6e32*/
    *(unsigned int *)(this + 100) = 0; /*0x6b6e35*/
    if ( dword_B0B890 < dword_B0B888 /*0x6b6e69*/
      || (byte_B0B88D || !dword_B0B888)
      && dword_B0B894 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(SpawnManagerClass_Array + 8))(
           &SpawnManagerClass_Array,
           dword_B0B888 + dword_B0B894,
           0) )
    {
      v18 = dword_B0B890++; /*0x6b6e76*/
      *((unsigned int *)dword_B0B884 + v18) = this; /*0x6b6e85*/
    }
    return this; /*0x6b6e8a*/
}
// link stub (no binary body yet)
 ULONG __stdcall ra2::game::CaptureManagerClass::AddRef()
{
    int m_8; // esi
    int v3; // edx
    unsigned int *v4; // eax
    int v5; // ecx

    m_8 = this->m_8; /*0x472b42*/
    if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x472b4d*/
    {
      v3 = 0; /*0x472b4f*/
      if ( m_8 <= 0 ) /*0x472b53*/
        return 1; /*0x472b73*/
      v4 = *(unsigned int **)&this->m_1[3]; /*0x472b55*/
      v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x472b5b*/
      while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x472b64*/
      {
        ++v3; /*0x472b66*/
        ++v4; /*0x472b67*/
        if ( v3 >= m_8 ) /*0x472b6c*/
          return 1; /*0x472b6c*/
      }
    }
    return 0; /*0x472b6e*/
}
// link stub (no binary body yet)
 ULONG __stdcall ra2::game::CaptureManagerClass::Release()
{
    unsigned int *v4; // edi
    int m_8; // ecx
    int i; // eax
    int v7; // eax

    if ( a2 ) /*0x472ccc*/
    {
      IDA_LOBYTE(this->m_C) = 0; /*0x472cd2*/
      if ( a3 ) /*0x472cd8*/
        v4 = a3; /*0x472cee*/
      else
        v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x472cea*/
      IDA_LOBYTE(this->m_C) = 1; /*0x472cf2*/
      if ( !v4 ) /*0x472cf6*/
        return 0; /*0x472d6a*/
      if ( *(unsigned int *)&this->m_1[3] ) /*0x472cf8*/
      {
        m_8 = this->m_8; /*0x472cff*/
        if ( a2 < m_8 ) /*0x472d04*/
          m_8 = a2; /*0x472d06*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x472d0c*/
          ++i; /*0x472d11*/
        if ( IDA_BYTE1(this->m_C) ) /*0x472d1e*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x472d29*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x472d31*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x472d3a*/
      this->m_8 = a2; /*0x472d42*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x472d45*/
    }
    else
    {
      (*(void (__thiscall **)(_DynamicVectorClass_PAUControlNode *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x472d4e*/
    }
    v7 = this->m_8; /*0x472d51*/
    if ( v7 < this->m_10 ) /*0x472d59*/
      this->m_10 = v7; /*0x472d5b*/
    return 1; /*0x472d5e*/
}
// link stub (no binary body yet)
 void ra2::game::CaptureManagerClass::pointerExpired(AbstractClass* ptr, bool removed)
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(unsigned char *)(this + 48) = 1; /*0x4717e2*/
    *(unsigned int *)(this + 40) = 0; /*0x4717e6*/
    *(unsigned int *)(this + 44) = 0; /*0x4717e9*/
    *(unsigned char *)(this + 49) = 0; /*0x4717ec*/
    *(unsigned int *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(unsigned int *)(this + 56) = 10; /*0x4717f6*/
    *(unsigned int *)(this + 52) = 0; /*0x4717fd*/
    *(unsigned int *)(this + 72) = a2; /*0x471800*/
    *(unsigned int *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(unsigned int *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(unsigned int *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(unsigned int *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(unsigned int *)(this + 60) = a3; /*0x471822*/
    *(unsigned char *)(this + 64) = a4; /*0x471825*/
    *(unsigned char *)(this + 65) = 0; /*0x471828*/
    *(unsigned int *)(this + 76) = 30; /*0x47182b*/
    *(unsigned int *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((unsigned int *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// link stub (no binary body yet)
//NODCL member not in any current header: ra2::game::FootClass::Draw_A_SHP(struct ra2::game::SHPStruct* a0, int a1, gamemd::Vector2D<int>* a2, gamemd::RectangleStruct* a3, unsigned int a4, unsigned int a5, unsigned int a6, enum ra2::game::ZGradient, unsigned int a8, int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15) {}
// link stub (no binary body yet)
//NODCL member not in any current header: ra2::game::FootClass::Draw_A_VXL(struct ra2::game::VoxelStruct* a0, int a1, int a2, struct ra2::game::SomeVoxelCache* a3, gamemd::RectangleStruct* a4, gamemd::Vector2D<int>* a5, struct ra2::game::Matrix3DStruct* a6, unsigned int a7, unsigned int a8, unsigned int a9) {}
// link stub (no binary body yet)
 void ra2::game::SlaveManagerClass::pointerExpired(AbstractClass* ptr, bool removed)
{
    int v2; // eax
    int v4; // [esp+8h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
    this->slaveVectorCount = 0; /*0x6af371*/
    this->slaveVectorCapacity = 0; /*0x6af374*/
    IDA_LOBYTE(this->creationFrame) = 1; /*0x6af377*/
    IDA_BYTE1(this->creationFrame) = 0; /*0x6af37b*/
    this->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af37e*/
    *(unsigned int *)&this->__pad_48[4] = 10; /*0x6af385*/
    *(unsigned int *)this->__pad_48 = 0; /*0x6af38c*/
    *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)&stru_A8EB00.?[416]; /*0x6af395*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
    this->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6af39b*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3af*/
    this->master = 0; /*0x6af3b6*/
    this->house = 0; /*0x6af3b9*/
    this->slaveOwner = 0; /*0x6af3bc*/
    this->slaveType = 0; /*0x6af3bf*/
    this->slaveCount = 0; /*0x6af3c2*/
    *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)&stru_A8EB00.?[416]; /*0x6af3cb*/
    this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
    this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
    this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
    if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
      || (byte_B0B5FD || !dword_B0B5F8)
      && dword_B0B604 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(SlaveManagerClass_Array + 8))(
           &SlaveManagerClass_Array,
           dword_B0B5F8 + dword_B0B604,
           0) )
    {
      v2 = dword_B0B600++; /*0x6af419*/
      *((unsigned int *)dword_B0B5F4 + v2) = this; /*0x6af428*/
    }
    return (int)this; /*0x6af42d*/
}
// link stub (no binary body yet)
 void ra2::game::SpawnManagerClass::pointerExpired(AbstractClass* ptr, bool removed)
{
    wchar_t *v7; // eax
    int *v8; // ebp
    wchar_t *v9; // eax
    int v10; // ebx
    int v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    int v17; // edx
    int v18; // eax
    int v20; // [esp+14h] [ebp-8h]
    int i; // [esp+20h] [ebp+4h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6b6c99*/
    SpawnControlVector::Constructor(0, 0); /*0x6b6ca7*/
    *(unsigned int *)(this + 56) = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6cb0*/
    *(unsigned int *)(this + 76) = 10; /*0x6b6cb6*/
    *(unsigned int *)(this + 72) = 0; /*0x6b6cbd*/
    v7 = dword_A8ED84; /*0x6b6cc0*/
    *(unsigned int *)(this + 88) = 0; /*0x6b6cc5*/
    *(unsigned int *)(this + 80) = v7; /*0x6b6cc8*/
    *(unsigned int *)(this + 92) = dword_A8ED84; /*0x6b6cd5*/
    *(unsigned int *)(this + 100) = 0; /*0x6b6cdc*/
    *(unsigned int *)(this + 40) = a3; /*0x6b6cdf*/
    *(unsigned int *)(this + 36) = a2; /*0x6b6ce6*/
    *(unsigned int *)this = &SpawnManagerClass::`vftable'; /*0x6b6cef*/
    *(unsigned int *)(this + 4) = &SpawnManagerClass::`vftable'; /*0x6b6cf5*/
    *(unsigned int *)(this + 8) = &SpawnManagerClass::`vftable'; /*0x6b6cfc*/
    *(unsigned int *)(this + 12) = &SpawnManagerClass::`vftable'; /*0x6b6d03*/
    *(unsigned int *)(this + 44) = a4; /*0x6b6d0a*/
    *(unsigned int *)(this + 48) = a5; /*0x6b6d0d*/
    *(unsigned int *)(this + 52) = a6; /*0x6b6d10*/
    for ( i = 0; i < *(unsigned int *)(this + 44); ++i ) /*0x6b6d17*/
    {
      v8 = (int *)RA2_OPNEW(0x18u); /*0x6b6d24*/
      if ( !v8 ) /*0x6b6d2b*/
        break; /*0x6b6d2b*/
      v9 = dword_A8ED84; /*0x6b6d31*/
      v8[4] = 0; /*0x6b6d36*/
      v8[2] = (int)v9; /*0x6b6d39*/
      v10 = **(unsigned int **)(this + 40); /*0x6b6d44*/
      v11 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(this + 36) + 60))(*(unsigned int *)(this + 36)); /*0x6b6d46*/
      v12 = (*(int (__thiscall **)(unsigned int, int))(v10 + 140))(*(unsigned int *)(this + 40), v11); /*0x6b6d4d*/
      *v8 = v12; /*0x6b6d55*/
      if ( v12 ) /*0x6b6d5a*/
      {
        v13 = *(unsigned int *)(this + 40); /*0x6b6d66*/
        v8[5] = v13 == *((unsigned int *)dword_8871E0 + 312) /*0x6b6d86*/
             || v13 == *((unsigned int *)dword_8871E0 + 325)
             || v13 == *((unsigned int *)dword_8871E0 + 338);
        (*(void (__thiscall **)(int))(*(unsigned int *)v12 + 212))(v12); /*0x6b6d91*/
        *(unsigned int *)(*v8 + 724) = *(unsigned int *)(this + 36); /*0x6b6da1*/
        v8[1] = 0; /*0x6b6da7*/
        v8[2] = (int)dword_A8ED84; /*0x6b6db1*/
        v8[3] = v20; /*0x6b6db4*/
        v8[4] = 0; /*0x6b6db7*/
        v14 = *(unsigned int *)(this + 64); /*0x6b6dba*/
        if ( *(unsigned int *)(this + 72) < v14 /*0x6b6dda*/
          || (*(unsigned char *)(this + 69) || !v14)
          && (v15 = *(unsigned int *)(this + 76), v15 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(this + 56) + 8))(this + 56, v14 + v15, 0) )
        {
          v16 = *(unsigned int *)(this + 72); /*0x6b6de1*/
          v17 = *(unsigned int *)(this + 60); /*0x6b6de4*/
          *(unsigned int *)(this + 72) = v16 + 1; /*0x6b6dea*/
          *(unsigned int *)(v17 + 4 * v16) = v8; /*0x6b6ded*/
        }
      }
    }
    *(unsigned int *)(this + 80) = dword_A8ED84; /*0x6b6e0d*/
    *(unsigned int *)(this + 84) = v20; /*0x6b6e19*/
    *(unsigned int *)(this + 88) = 20; /*0x6b6e1c*/
    *(unsigned int *)(this + 104) = 0; /*0x6b6e1f*/
    *(unsigned int *)(this + 108) = 0; /*0x6b6e22*/
    *(unsigned int *)(this + 112) = 0; /*0x6b6e25*/
    *(unsigned int *)(this + 92) = dword_A8ED84; /*0x6b6e2f*/
    *(unsigned int *)(this + 96) = v20; /*0x6b6e32*/
    *(unsigned int *)(this + 100) = 0; /*0x6b6e35*/
    if ( dword_B0B890 < dword_B0B888 /*0x6b6e69*/
      || (byte_B0B88D || !dword_B0B888)
      && dword_B0B894 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, unsigned int))(SpawnManagerClass_Array + 8))(
           &SpawnManagerClass_Array,
           dword_B0B888 + dword_B0B894,
           0) )
    {
      v18 = dword_B0B890++; /*0x6b6e76*/
      *((unsigned int *)dword_B0B884 + v18) = this; /*0x6b6e85*/
    }
    return this; /*0x6b6e8a*/
}
