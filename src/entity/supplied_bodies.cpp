// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/utility_ext.hpp"
#include "entity/anim.hpp"
#include "entity/bullet.hpp"
#include "entity/rad_site.hpp"
#include "entity/terrain.hpp"
#include "entity/tiberium.hpp"
#include "house/house.hpp"
#include "misc/locomotion.hpp"
#include "misc/misc_ext.hpp"
#include "object/abstract.hpp"
#include "object/object.hpp"
#include "render/display.hpp"
#include "structure/building.hpp"
#include "system/cell.hpp"
#include "system/tactical.hpp"
#include "e4/e4_globals_decls.hpp"  // gB globals supply
// ---- g57b5 W2b: TU-local vocab supply (object/supplied_bodies.cpp 同款) ----
#include "core/cellcoord.hpp"  // CellCoord::To_CellObj 单源权威 (G42.36)
#include "e4/classes/Rules_e4.hpp"  // g57c5 W5d scope supply
// G57w10: dword_8871E0 宿主（ida_globals 裸 uint; 语料 ->GDIWallDefense/__pad_13BC 访问; render/supplied_bodies.cpp 同款）
struct dword_8871E0_v {
    unsigned char __pad_0[0x7B0];
    unsigned char GDIWallDefense[8];  // 0x7B0 canon RulesClass GDIWallDefense (double; byte-index use)
    unsigned char __pad_7B8[0xC3C - 0x7B8];
    unsigned char __pad_C3C[8];
    unsigned int CollapseChance;
    unsigned int MutateExplosion;
    unsigned int ChronoHarvTooFarDistance;
    unsigned char __pad_13BC[0x200];  // 语料 [192]/[256] 字节索引覆盖
};
extern dword_8871E0_v* dword_8871E0_t;  // data: 0x8871E0 (Rules 实例指针)
#define dword_8871E0 dword_8871E0_t
// ---- g57b5 W6: TU-local globals (csp_canon 驱动) ----extern int Mixer;  // 词表 (canon 无条目, int 兜底) L513
// ---- g57c5 W5 vocab (declaration-only) ----
namespace gamemd {
class Rules;  // g57c5 W5 fwd
bool ProductionCompletionCallback(...);  // g57c5 W5 vocab
int RemoveTarget(...);  // g57c5 W5 vocab
} // namespace gamemd
// ---- g57c5 W5 end ----
// ---- g57b5 W6 end ----
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int BuildingClass_StartProduction(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int IsPowered(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
} // namespace gamemd
// ---- g57b5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) ----
namespace gamemd {
    void Mixer_ReleaseChannel(void *a1);               // raw 0x4220d9 Mixer::ReleaseChannel;
    int StartAudioController(int aP0, int **a1);       // raw 0x449a9a;
    int StartAudioControllerAt(int aP0, unsigned int *a2, int **a1);  // 0x7509E0 真形;
} // namespace gamemd
// ---- g57b5 W3 end ----
class CellClass;                // firstObject 载体前置 (system/cell.hpp)
namespace gamemd {
struct Debug { static void Log(); };                // G57w8: _fwd struct Debug 完全体（namespace 形与 fwd 对撞 C2757）
struct Cell {                                   // csp_canon:127590 同名类静态词表
    static int ApplyDamage(Cell *a1, int a2, int a3, int a4, int a5);
    static void *GetNeighbourContent(Cell *a1, int a2);  // raw 0x449640 (g57b5 W2r3)
};
extern int ZCoordToScreenY(int a1);            // 0x423A6C 真形 (raw fn_42)
struct Math {
    static int RoundToInt(double a1);  // G57w8
    static double Sqrt(double a1);     // G57w10 raw 0x4CAC40: int __cdecl Math::Sqrt(double)
};  // G57w8: _fwd struct Math 完全体（同上）
// (g57b5 W2r2: namespace WinAPI 移除 — stream_ext.hpp:12 class WinAPI::Wrapper 已在闭包内)
struct Power {                                 // raw 0x4254xx FlagProcess/TimerProcess 家族
    static int FlagProcess(Power *a1, unsigned int a2);
    static int TimerProcess(unsigned int a1);
};
struct Checksummer {                           // raw 0x425490 Add_double
    static void Add_double(Checksummer *a1, int a2, unsigned int a3);
};
struct Coord {                                 // csp_canon:130963 同名类 + raw fn_42:3239 静态词表
    static void *GetCoords(void *a1, void *a2);
    static CellClass *To_Cell(void *a1, void *a2);
    unsigned char __pad_C[0x400];              // 0xC 槽词汇 (v12[2].vtable4[..] 词表)
};
struct stru_87F5F0_host {                      // 0x87F5F0 宿主 (object/supplied_bodies:106 同款)
    unsigned char __pad_0[0x58];
    unsigned char __pad_58[0x280 - 0x58];      // 覆盖 __pad_58[416] = +0x1F8
};
extern stru_87F5F0_host stru_87F5F0;           // data: 0x87F5F0
} // namespace gamemd
// ---- g57b5 W2b end ----

// 0x422720
namespace gamemd {
int AnimClass::SimpleCtor()
{
    IUnknown *v2; // eax
    int v3; // eax

    ((ObjectClass *)this)->ctor(); /*0x422724*/
    this->AnimClass_field_0xAC = 0; /*0x422730*/
    this->__pad_B0[0] = 0; /*0x422736*/
    v2 = (IUnknown *)(void *)*(unsigned int **)((char *)&stru_A8EB00 + 644); /*0x42273c g57w11 r4: uint** 槽读形 (IUnknown** 解引用歧义绕过)*/
    this->AnimClass_field_0xBC = 0; /*0x422741*/
    this->AnimClass_field_0xB4 = (unsigned int)v2; /*0x422747*/
    this->AnimClass_field_0xC0 = 0; /*0x422750*/
    *(unsigned int *)this->__pad_C4 = 1; /*0x422756*/
    this->AnimClass_field_0xC8 = 0; /*0x422761*/
    this->AnimClass_field_0xCC = 0; /*0x422767*/
    this->AnimClass_field_0xD0 = -1; /*0x42276d*/
    this->AnimClass_field_0xD4 = 0; /*0x422773*/
    *(unsigned int *)this->__pad_D8 = -1; /*0x422779*/
    this->AnimClass_field_0xFC = 1000; /*0x42277f*/
    this->AnimClass_field_0x100 = 0; /*0x422789*/
    this->AnimClass_field_0x104 = 0; /*0x42278f*/
    this->__pad_118[0] = 0; /*0x422795*/
    this->__pad_118[1] = 0; /*0x42279b*/
    this->__pad_118[2] = 0; /*0x4227a1*/
    this->__pad_118[3] = 0; /*0x4227a7*/
    this->AnimClass_field_0x11C = 0; /*0x4227ad*/
    this->__pad_120[0] = 0; /*0x4227b3*/
    *(unsigned int *)&this->__pad_120[8] = 0; /*0x4227ba*/
    *(unsigned int *)&this->__pad_120[16] = 0; /*0x4227c0*/
    *(unsigned int *)&this->__pad_120[24] = 0; /*0x4227c6*/
    *(unsigned int *)&this->__pad_120[12] = 0; /*0x4227d3*/
    *(unsigned int *)&this->__pad_120[20] = 0; /*0x4227d9*/
    *(unsigned int *)&this->__pad_120[28] = 0; /*0x4227df*/
    ((Int4 *)((Int4 *)&this->__pad_120[56]))->Set(0, 0, 0, 1065353216); /*0x4227e5*/
    ((Int4 *)((Int4 *)&this->__pad_120[72]))->Set(0, 0, 0, 1065353216); /*0x4227f8*/
    this->AnimClass_field_0x188 = 0; /*0x4227fd*/
    this->__pad_178[1] = 0; /*0x422803*/
    this->AnimClass_field_0x184 = 0; /*0x422809*/
    *(unsigned int *)this->__pad_18C = 0; /*0x42280f*/
    this->__pad_194[0] = 0; /*0x422815*/
    this->__pad_194[1] = 1; /*0x42281b*/
    this->__pad_194[2] = 0; /*0x422822*/
    this->__pad_194[3] = 0; /*0x422828*/
    this->__pad_194[7] = 0; /*0x42282e*/
    this->__pad_194[8] = 1; /*0x422834*/
    this->__pad_194[9] = 0; /*0x42283b*/
    this->__pad_194[10] = 0; /*0x422841*/
    this->AnimClass_field_0x0 = &vt_AnimClass; /*0x422847*/
    this->AnimClass_field_0x4 = (unsigned int)&vt_AnimClass; /*0x42284d*/
    this->AnimClass_field_0x8 = (unsigned int)&vt_AnimClass; /*0x422854*/
    *(unsigned int *)&this->__pad_C = (unsigned int)&off_7E3328;  /*g57w10 r4: raw fn_42:2007 原文 this->__pad_C*/ /*0x42285b*/
    if ( dword_A8E9B8 < dword_A8E9B0 /*0x422896*/
      || (byte_A8E9B5 || !dword_A8E9B0)
      && dword_A8E9BC > 0
      && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(dword_A8E9A8 + 8))(
           &dword_A8E9A8,
           dword_A8E9B0 + dword_A8E9BC,
           0) )
    {
      v3 = dword_A8E9B8++; /*0x4228a3*/
      *((unsigned int *)dword_A8E9AC + v3) = (unsigned int)this; /*0x4228b2*/
    }
    ((AudioController *)this->AnimClass_field_0x1A0)->Init(); /*0x4228bb*/
    ((AudioController *)&this->AnimClass_field_0x1B4)->Init(); /*0x4228c6*/
    this->__pad_7C[20] = 1; /*0x4228cb*/
    return (int)this; /*0x4228d4*/
}
} // namespace gamemd

// 0x422B80
namespace gamemd {
void TerrainClass::ClearAnimationLinkFlags()
{
    int i; // edx
    int v2; // eax

    if ( this ) /*0x422b82*/
    {
      for ( i = 0; i < dword_A8E9B8; ++i ) /*0x422b8d*/
      {
        v2 = *((unsigned int *)dword_A8E9AC + i); /*0x422b94*/
        if ( *(TerrainClass **)(v2 + 204) == this ) /*0x422b9d*/
          *(unsigned char *)(v2 + 405) = 0; /*0x422b9f*/
      }
    }
}
} // namespace gamemd

// 0x422BC0
namespace gamemd {
int AnimClass::SetAnimSpeed() {
    return this->AnimClass_field_0x104 + ((ObjectClass *)this)->GetBoundingSize(); /*0x422bce*/
}
} // namespace gamemd

// 0x422BE0
namespace gamemd {
int * AnimClass::UpdateZAdjust(int * a2)
{
    unsigned int *Coords; // esi
    unsigned int *v4; // eax
    int v5; // ecx
    int v6; // edx
    int v7; // esi
    int v8; // edx
    int v9; // edi
    int *v11; // edx
    CoordStruct v12; // [esp+14h] [ebp-Ch] BYREF

    if ( this->AnimClass_field_0xCC ) /*0x422be7*/
    {
      Coords = (unsigned int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x422c01*/
      v4 = (unsigned int *)(*(int (__thiscall **)(int, CoordStruct *))(*(unsigned int *)this->AnimClass_field_0xCC + 72))( /*0x422c0a*/
                       this->AnimClass_field_0xCC,
                       &v12);
      v5 = *Coords + *v4; /*0x422c14*/
      v6 = Coords[1]; /*0x422c16*/
      v7 = Coords[2]; /*0x422c19*/
      v8 = v4[1] + v6; /*0x422c1c*/
      v9 = v4[2]; /*0x422c1e*/
      *a2 = v5; /*0x422c29*/
      a2[1] = v8; /*0x422c2b*/
      a2[2] = v9 + v7; /*0x422c2e*/
      return a2; /*0x422c21*/
    }
    else
    {
      v11 = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x422c45*/
      *a2 = *v11; /*0x422c50*/
      a2[1] = v11[1]; /*0x422c55*/
      a2[2] = v11[2]; /*0x422c5c*/
      return a2; /*0x422c47*/
    }
}
} // namespace gamemd

// 0x422C70
namespace gamemd {
char AnimClass::CheckLayerFlags(int a2, int a3, int a4)
{
    if ( this->AnimClass_field_0x184 ) /*0x422c70*/
      return 0; /*0x422c7a*/
    else
      return ((ObjectClass *)this)->CalcDrawRect(); /*0x422c8e*/
}
} // namespace gamemd

// 0x4238B0
namespace gamemd {
bool AnimClass::UpdateMirrorState(int a2) {
    return (uint8_t)((ObjectClass *)this)->UpdateProductionDisplay() != 0; /*0x4238bf*/
}
} // namespace gamemd

// 0x423930
namespace gamemd {
int AnimClass::UpdateProjectileTrajectory()
{
    float *v1; // edi
    char *v3; // esi
    int v4; // ebx
    Coord *AnimClass_field_0xC8; // eax
    AnimClass *v6; // edi
    int *v7; // eax
    unsigned int *Coords; // eax
    ObjectClass *firstObject; // edi
    unsigned int *v10; // esi
    unsigned int *v11; // eax
    Coord *v12; // ebx
    int v13; // esi
    int v14; // eax
    void *vtable0; // edx
    int v16; // eax
    void (__thiscall **AnimClass_field_0x0)(AnimClass *, int); // esi
    int v18; // eax
    int v20; // [esp-8h] [ebp-60h]
    unsigned int *v21; // [esp+Ch] [ebp-4Ch]
    int v22; // [esp+1Ch] [ebp-3Ch] BYREF
    void (__thiscall **v23)(ObjectClass *, unsigned int *, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); // [esp+20h] [ebp-38h]
    int v24; // [esp+24h] [ebp-34h]
    char v25[12]; // [esp+28h] [ebp-30h] BYREF
    int v26[3]; // [esp+34h] [ebp-24h] BYREF
    char v27[12]; // [esp+40h] [ebp-18h] BYREF
    int v28[3]; // [esp+4Ch] [ebp-Ch] BYREF

    v3 = (char *)&this->__pad_120[8]; /*0x423939*/
    v4 = ((JumpjetLocomotionClass *)(double *)&this->__pad_120[8])->Update2(); /*0x423946*/
    AnimClass_field_0xC8 = (Coord *)(unsigned int)this->AnimClass_field_0xC8; /*0x423948*/
    v24 = v4; /*0x42394e*/
    if ( AnimClass_field_0xC8[2].__pad_C[202] ) /*0x423952*/
      *((float *)v3 + 11) = *((float *)v3 + 11) + *((double *)v3 + 1); /*0x423962*/
    if ( v4 == 1 ) /*0x423968*/
    {
      if ( *(unsigned int *)&((Coord *)(unsigned int)this->AnimClass_field_0xC8)[2].__pad_C[116] ) /*0x423987*/
      {
        v6 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x42399b*/
        if ( v6 ) /*0x4239a2*/
        {
          v7 = (int *)(*((int (__thiscall **)(AnimClass *, char *))this->AnimClass_field_0x0 + 18))(this, v25); /*0x4239bb*/
          ((AnimClass *)v6)->ctor(*(void **)&((Coord *)(unsigned int)this->AnimClass_field_0xC8)[2].__pad_C[116], v7, 0, 1, (void *)0x600, 0, 0); /*0x4239ce*/
        }
      }
      Coords = (unsigned int *)Coord::GetCoords(v26, v21); /*0x4239da*/
      firstObject = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], Coords)->firstObject; /*0x4239ea*/
      if ( firstObject ) /*0x4239f2*/
      {
        do /*0x423a88*/
        {
          v10 = (unsigned int *)(*((int (__thiscall **)(ObjectClass *, char *))firstObject->vtable1 + 18))( /*0x423a08*/
                            firstObject,
                            v27);
          v11 = (unsigned int *)Coord::GetCoords(v28, v21); /*0x423a11*/
          v12 = (Coord *)(unsigned int)this->AnimClass_field_0xC8; /*0x423a29*/
          v13 = abs32(v11[1] - v10[1]) + abs32(*v11 - *v10); /*0x423a3a*/
          if ( v13 <= *(unsigned int *)&v12[2].__pad_C[168] ) /*0x423a44*/
          {
            IDA_LOWORD(v14) = Math::RoundToInt(*(double *)&v12[2].__pad_C[28]); /*0x423a4c*/
            vtable0 = firstObject->vtable1; /*0x423a51*/
            v22 = v14; /*0x423a55*/
            v20 = *(unsigned int *)&v12[2].__pad_C[164]; /*0x423a65*/
            v23 = (void (__thiscall **)(ObjectClass *, unsigned int *, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))vtable0; /*0x423a68*/
            v16 = ZCoordToScreenY(v13); /*0x423a6c*/
            v23[91](firstObject, (unsigned int *)&v22, v16, v20, 0, 0, 0, 0); /*0x423a7d*/
          }
          firstObject = firstObject->nextObject; /*0x423a83*/
        }
        while ( firstObject ); /*0x423a88*/
        v4 = v24; /*0x423a8e*/
      }
    }
    else if ( v4 == 2 ) /*0x42396b*/
    {
      (*((void (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 62))(this); /*0x423976*/
    }
    AnimClass_field_0x0 = (void (__thiscall **)(AnimClass *, int))this->AnimClass_field_0x0; /*0x423a92*/
    v18 = (int)(unsigned int *)Coord::GetCoords(v28, v21); /*0x423aa0*/
    AnimClass_field_0x0[109](this, v18); /*0x423aa8*/
    return v4; /*0x423aae*/
}
} // namespace gamemd

// 0x425280
namespace gamemd {
int AnimClass::SaveLoad_Prefix(int a2, int a3)
{
    int Register; // edi
    int v4; // eax
    int v6; // eax
    int v7; // eax

    ((BuildingClass *)(ObjectClass *)this)->SaveLoad_Register(); /* g57b5 W2r2: thiscall 还原 (void 返回, 弃值) */ /*0x425291*/
    if ( Register >= 0 ) /*0x425295*/
    {
      if ( a2 ) /*0x42529d*/
      {
        ((ObjectClass *)a2)->Init((int)&a3); /*0x4252a6*/
        __4type_info_AAEAAV0_ABV0__Z((void *)(a2 + 180), (int)&a3); /*0x4252b6*/
        *(unsigned int *)a2 = (unsigned int)&vt_AnimClass; /*0x4252bb*/
        *(unsigned int *)(a2 + 4) = (unsigned int)&vt_AnimClass; /*0x4252c1*/
        *(unsigned int *)(a2 + 8) = (unsigned int)&vt_AnimClass; /*0x4252c8*/
        *(unsigned int *)(a2 + 12) = (unsigned int)&off_7E3328; /*0x4252cf*/
      }
      ((AudioController *)(a2 + 416)->Init()); /*0x4252dc*/
      ((AudioController *)(a2 + 436)->Init()); /*0x4252e7*/
      ((gamemd::ObjectPtr *)(void *)&SwizzleManagerClass_Instance)->RegisterForTracking((SwizzleManagerClass *)(void *)&SwizzleManagerClass_Instance, (MouseClass *)(void *)(a2 + 200)); /*g57w11 r4: 实例形 (misc_ext virtual 2 参)*/ /*g57w11 r4: 静态 2 实参形 (misc_ext 0x6CF240 virtual 形)*/ /*0x4252f8*/
      ((gamemd::ObjectPtr *)(void *)&SwizzleManagerClass_Instance)->RegisterForTracking((SwizzleManagerClass *)(void *)&SwizzleManagerClass_Instance, (MouseClass *)(void *)(a2 + 204)); /*g57w11 r4: 实例形 (misc_ext virtual 2 参)*/ /*g57w11 r4: 静态 2 实参形 (misc_ext 0x6CF240 virtual 形)*/ /*0x425309*/
      ((gamemd::ObjectPtr *)(void *)&SwizzleManagerClass_Instance)->RegisterForTracking((SwizzleManagerClass *)(void *)&SwizzleManagerClass_Instance, (MouseClass *)(void *)(a2 + 380)); /*g57w11 r4: 实例形 (misc_ext virtual 2 参)*/ /*g57w11 r4: 静态 2 实参形 (misc_ext 0x6CF240 virtual 形)*/ /*0x42531a*/
      ((gamemd::ObjectPtr *)(void *)&SwizzleManagerClass_Instance)->RegisterForTracking((SwizzleManagerClass *)(void *)&SwizzleManagerClass_Instance, (MouseClass *)(void *)(a2 + 384)); /*g57w11 r4: 实例形 (misc_ext virtual 2 参)*/ /*g57w11 r4: 静态 2 实参形 (misc_ext 0x6CF240 virtual 形)*/ /*0x42532b*/
      v4 = *(unsigned int *)(a2 + 216); /*0x425330*/
      if ( v4 <= -1 ) /*0x425339*/
      {
        if ( *(unsigned char *)(a2 + 220) ) /*0x42535f*/
        {
          v6 = ((FileExtension *)(const char *)(a2 + 220))->MapHandler(); /*0x42536f*/
          if ( v6 ) /*0x425376*/
          {
            v7 = (*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)v6 + 24))(v6, 0); /*0x42537e*/
            if ( v7 ) /*0x425383*/
            {
              *(unsigned int *)(a2 + 212) = *(unsigned int *)(v7 + 780); /*0x42538b*/
              return Register; /*0x425395*/
            }
          }
        }
        *(unsigned int *)(a2 + 212) = 0; /*0x425398*/
      }
      else if ( v4 < *(int *)stru_B054D0.__tail_10 ) /*0x425341*/
      {
        *(unsigned int *)(a2 + 212) = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v4) + 780); /*0x425352*/
        return Register; /*0x42535c*/
      }
    }
    return Register; /*0x42535a*/
}
} // namespace gamemd

// 0x425410
namespace gamemd {
int AnimClass::ProcessPower(int *a2)
{
    unsigned int *AnimClass_field_0xCC; // eax
    int v4; // eax
    int v5; // ecx
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v10; // ecx

    ((HouseClass *)(ObjectClass *)this)->ProcessPower(); /*0x425419*/
    AnimClass_field_0xCC = (unsigned int *)(unsigned int)this->AnimClass_field_0xCC; /*0x42541e*/
    if ( AnimClass_field_0xCC ) /*0x425426*/
    {
      v4 = (*(int (__stdcall **)(unsigned int *))(AnimClass_field_0xCC[1] + 16))(AnimClass_field_0xCC + 1); /*0x42542f*/
      Power::TimerProcess(v4); /*0x425435*/
    }
    Power::TimerProcess(this->AnimClass_field_0xD0); /*0x425443*/
    Power::TimerProcess(this->AnimClass_field_0xFC); /*0x425451*/
    Power::TimerProcess(this->AnimClass_field_0x100); /*0x42545f*/
    Power::TimerProcess(this->AnimClass_field_0x104); /*0x42546d*/
    Power::TimerProcess((int)this->AnimClass_field_0x184->__pad_0); /*0x42547b*/
    Checksummer::Add_double((Checksummer *)a2, this->AnimClass_field_0x188, *(unsigned int *)this->__pad_18C); /*0x425490*/
    Power::TimerProcess(this->AnimClass_field_0x190); /*0x42549e*/
    IDA_LOBYTE(v5) = this->__pad_194[0]; /*0x4254a3*/
    Power::FlagProcess((Power *)a2, v5); /*0x4254ac*/
    v6 = Power::TimerProcess((unsigned __int8)this->__pad_194[1]); /*0x4254bc*/
    IDA_LOBYTE(v6) = this->__pad_194[2]; /*0x4254c1*/
    Power::FlagProcess((Power *)a2, v6); /*0x4254ca*/
    IDA_LOBYTE(v7) = this->__pad_194[3]; /*0x4254cf*/
    Power::FlagProcess((Power *)a2, v7); /*0x4254d8*/
    IDA_LOBYTE(v8) = this->__pad_194[7]; /*0x4254dd*/
    v9 = Power::FlagProcess((Power *)a2, v8); /*0x4254e6*/
    IDA_LOBYTE(v9) = this->__pad_194[8]; /*0x4254eb*/
    Power::FlagProcess((Power *)a2, v9); /*0x4254f4*/
    IDA_LOBYTE(v10) = this->__pad_194[10]; /*0x4254f9*/
    return Power::FlagProcess((Power *)a2, v10); /*0x425507*/
}
} // namespace gamemd

// 0x449540
namespace gamemd {
int AnimClass::resetAnimation()
{
    int v2; // eax
    int v3; // edi
    unsigned short *v4; // eax
    ObjectClass *v5; // ebp
    int ClosestObjectCell; // eax
    ObjectClass *NeighbourContent; // edi
    int v8; // eax
    unsigned int v10; // [esp+10h] [ebp-20h]
    int i; // [esp+10h] [ebp-20h]
    __int16 v12[2]; // [esp+18h] [ebp-18h] BYREF
    int v13; // [esp+1Ch] [ebp-14h] BYREF
    int v14; // [esp+20h] [ebp-10h]
    int v15[3]; // [esp+24h] [ebp-Ch] BYREF

    v2 = *(unsigned int *)&this->q41C[260]; /*0x44954b*/
    if ( !*(unsigned char *)(v2 + 5821) ) /*0x449551*/
      return 0; /*0x449551*/
    v3 = *(unsigned int *)(*(unsigned int *)(v2 + 3796) + 40); /*0x449567*/
    v4 = (unsigned short *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 110))(this, &v13); /*0x449573*/
    IDA_HIWORD(v10) = IDA_HIWORD(v3) + v4[1]; /*0x449596*/
    IDA_LOWORD(v10) = v3 + *v4 - 1; /*0x4495a1*/
    v15[1] = (IDA_SHIWORD(v10) << 8) + 128; /*0x4495be*/
    *(unsigned int *)v12 = v10; /*0x4495c2*/
    v15[0] = ((__int16)v10 << 8) + 128; /*0x4495cc*/
    v15[2] = 0; /*0x4495d6*/
    v5 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x4495e4*/
    v13 = 0; /*0x4495ea*/
    v14 = 0; /*0x4495ee*/
    ClosestObjectCell = ((ObjectClass *)v5)->FindClosestObjectCell((_DWORD *)&v13, 0, (int)this); /*0x4495f2*/
    if ( !ClosestObjectCell ) /*0x4495f9*/
      return 0; /*0x44969e*/
    (*(void (__thiscall **)(int))(*(unsigned int *)ClosestObjectCell + 132))(ClosestObjectCell); /*0x449603*/
    Debug::Log(); /*0x449612*/
    Cell::ApplyDamage((Cell *)v5, (int)&g_BuildingClassPool, 1, 1, 0); /*0x449626*/
    for ( i = 0; i < 8; ++i ) /*0x44962b*/
    {
      NeighbourContent = (ObjectClass *)((Cell *)v5)->GetNeighbourContent(i); /*0x449640*/
      v13 = 0; /*0x449646*/
      v14 = 0; /*0x44964a*/
      v8 = ((ObjectClass *)NeighbourContent)->FindClosestObjectCell((_DWORD *)&v13, 0, (int)this); /*0x44964e*/
      if ( v8 ) /*0x449655*/
      {
        (*(void (__thiscall **)(int))(*(unsigned int *)v8 + 132))(v8); /*0x44965b*/
        Debug::Log(); /*0x44966a*/
        Cell::ApplyDamage((Cell *)NeighbourContent, (int)v15, 1, 1, 0); /*0x44967e*/
      }
    }
    return 1; /*0x449691*/
}
} // namespace gamemd

// 0x449A50
// g57c5 W7 DEBT (wrong-universe body): raw decompile this=AnimClass* is an IDA til
// misbind -- body operates on BuildingClass production-exit state machine
// (BuildingClass_StartProduction / vtable1+157 / 311 / 122, WasOnline outparam,
// BuildingClass_field_bool_6DD). Same family as techno.cpp CreateUnit (gB audit
// §C.7). C2664/C2039 residuals here are honest debt pending re-ownership.
namespace gamemd {
int AnimClass::setLoopCount()
{
    int missionStatus; // eax
    BuildingTypeClass *Type; // eax
    __int16 v4; // cx
    int UnitExitSound; // ecx
    int v7; // [esp+14h] [ebp-1Ch] BYREF
    unsigned int v8[3]; // [esp+18h] [ebp-18h] BYREF
    unsigned int v9[3]; // [esp+24h] [ebp-Ch] BYREF

    missionStatus = ((unsigned int *)this)[0]; /*0x449a57*/
    if ( !missionStatus ) /*0x449a60*/
    {
      BuildingClass_StartProduction(this, 0); /*0x449b36*/
      (*((void (__thiscall **)(BuildingClass *, int))this->vtable1 + 157))((gamemd::BuildingClass *)(this), 11); /*0x449b41*/
      UnitExitSound = this->Type->UnitExitSound; /*0x449b4d*/
      if ( UnitExitSound != -1 /*0x449b67*/
        || (UnitExitSound = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1736), UnitExitSound != -1) )
      {
        v9[0] = *(unsigned int *)&this->vtable2; /*0x449b75*/
        v9[1] = *(unsigned int *)&this->vtable2; /*0x449b7c*/
        v9[2] = *(unsigned int *)&this->vtable3; /*0x449b8e*/
        StartAudioControllerAt(UnitExitSound, v9, (int **)&((BuildingClass *)this)->WasOnline); /*0x449b92*/
      }
      ((unsigned int *)this)[0] = 1; /*0x449b97*/
      ((unsigned int *)this)[0] = 1; /*0x449b9e*/
      return 1; /*0x449b9e*/
    }
    if ( missionStatus != 1 ) /*0x449a67*/
      return 1; /*0x449a67*/
    ((unsigned int *)this)[0] = 1; /*0x449a79*/
    v8[0] = *(unsigned int *)&this->vtable2; /*0x449a82*/
    v8[1] = *(unsigned int *)&this->vtable2; /*0x449a8d*/
    v8[2] = *(unsigned int *)&this->vtable3; /*0x449a96*/
    StartAudioController((int)(v8), (int **)&((BuildingClass *)this)->WasOnline); /*0x449a9a*/
    if ( !this->BuildingClass_field_bool_6DD ) /*0x449a9f*/
      return 1; /*0x449ba9*/
    (*((void (__thiscall **)(BuildingClass *, int))this->vtable1 + 157))((gamemd::BuildingClass *)(this), 12); /*0x449ab3*/
    (*((void (__thiscall **)(BuildingClass *, int))this->vtable1 + 157))((gamemd::BuildingClass *)(this), 3); /*0x449abf*/
    BuildingClass_StartProduction(this, 1); /*0x449ac9*/
    (*((void (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 311))((gamemd::BuildingClass *)(this), 0); /*0x449ad4*/
    (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))((gamemd::BuildingClass *)(this), 5, 0); /*0x449ae2*/
 Type = (BuildingTypeClass *)(this->Type); /*0x449ae8*/
    if ( !Type->LaserFence ) /*0x449aee*/
    {
      IDA_LOBYTE(v4) = 0; /*0x449af8*/
      IDA_HIBYTE(v4) = Type->unknown___2; /*0x449afe*/
      IDA_LOWORD(v7) = v4; /*0x449b05*/
      ((char *)((unsigned int *)this)[0])->Set_SyncLog(&v7); /*0x449b10*/
    }
    BuildingTypeClass::IsPowered(this->Type); /*0x449b1b*/
    Mixer_ReleaseChannel((Mixer *)&((BuildingClass *)this)->WasOnline); /*0x449b22*/
    return 1; /*0x449b27*/
}
} // namespace gamemd

// 0x4666C0
namespace gamemd {
bool BulletClass::CheckMirrorState(int a2) {
    return (uint8_t)((ObjectClass *)this)->UpdateProductionDisplay() != 0; /*0x4666cf*/
}
} // namespace gamemd

// 0x65B4B0
namespace gamemd {
int RadSiteClass::GetSpread() const {  // g57c5 W7: const-sync (rad_site.hpp:53)
    return this->Spread; /*0x65b4b3*/
}
} // namespace gamemd
// 0x421EA0
namespace gamemd {
int* AnimClass::ctor(void* a1, void* a2, void* a3, int a4, void* a5, void* a6, int a7)  // g57e2 W5e: raw 8th param
{
    wchar_t *v9; // eax
    int v10; // eax
    int v11; // eax
    int AnimClass_field_0xC8; // eax
    int AnimClass_field_0xCC; // ecx
    int v14; // eax
    unsigned int *v15; // eax
    unsigned int *v17; // ecx
    int v18; // ecx
    int v19; // eax
    unsigned int *v20; // ecx
    int v21; // edx
    char *ProductionTimeMult; // eax
    int v23; // ecx
    int v24; // edx
    int v25; // eax
    int v26; // eax
    int v27; // eax
    double v28; // st7
    int v29; // eax
    double v30; // st7
    double v31; // st7
    float v32; // eax
    float v33; // eax
    float v34; // eax
    unsigned int *v35; // eax
    int v36; // ecx
    int v37; // eax
    int *v38; // eax
    int v39; // edx
    unsigned int *v40; // edi
    unsigned int *v41; // eax
    int v42; // ecx
    int v43; // edx
    int v44; // eax
    int *v45; // eax
    int v46; // ebx
    int v47; // eax
    int v48; // edi
    int v49; // eax
    double v50; // st7
    int v51; // eax
    double v52; // st6
    char v53; // cl
    char v54; // al
    int v55; // [esp+Ch] [ebp-54h]
    float v56; // [esp+Ch] [ebp-54h]
    int v57; // [esp+Ch] [ebp-54h]
    int v58; // [esp+10h] [ebp-50h]
    unsigned int *Coords; // [esp+10h] [ebp-50h]
    int v60; // [esp+10h] [ebp-50h]
    float v61; // [esp+10h] [ebp-50h]
    int v62; // [esp+14h] [ebp-4Ch]
    float v63; // [esp+18h] [ebp-48h] BYREF
    float v64; // [esp+1Ch] [ebp-44h]
    float v65; // [esp+20h] [ebp-40h]
    int vfptr; // [esp+24h] [ebp-3Ch] BYREF
    int v67; // [esp+28h] [ebp-38h]
    int v68; // [esp+2Ch] [ebp-34h]
    float v69; // [esp+30h] [ebp-30h] BYREF
    float v70; // [esp+34h] [ebp-2Ch]
    float v71; // [esp+38h] [ebp-28h]
    CoordStruct v72; // [esp+3Ch] [ebp-24h] BYREF
    int v73; // [esp+40h] [ebp-20h]
    CoordStruct out; // [esp+48h] [ebp-18h] BYREF
    CoordStruct v75; // [esp+54h] [ebp-Ch] BYREF

    ((ObjectClass *)this)->ctor(); /*0x421eae*/
    this->AnimClass_field_0xAC = 0; /*0x421eb8*/
    this->__pad_B0[0] = 0; /*0x421ebe*/
    v9 = (wchar_t *)(void *)(dword_A8ED84); /*0x421ec4*/
    this->AnimClass_field_0xBC = 0; /*0x421ec9*/
    this->AnimClass_field_0xB4 = (int)v9; /*0x421ecf*/
    this->AnimClass_field_0xC0 = 0; /*0x421ed5*/
    *(unsigned int *)this->__pad_C4 = 1; /*0x421edb*/
    this->AnimClass_field_0xC8 = (int)a2; /*0x421ee5*/
    this->AnimClass_field_0xCC = 0; /*0x421eee*/
    this->AnimClass_field_0xD0 = -1; /*0x421ef4*/
    this->AnimClass_field_0xD4 = 0; /*0x421efa*/
    *(unsigned int *)this->__pad_D8 = -1; /*0x421f00*/
    this->AnimClass_field_0xFC = 1000; /*0x421f06*/
    this->AnimClass_field_0x100 = 0; /*0x421f10*/
    this->AnimClass_field_0x104 = 0; /*0x421f16*/
    this->AnimClass_field_0x108 = Map_InvalidCoord_X; /*0x421f32*/
    *(unsigned int *)this->__pad_10C = Map_InvalidCoord_Y; /*0x421f3c*/
    v10 = Map_InvalidCoord_Z; /*0x421f3f*/
    this->__pad_118[0] = 0; /*0x421f44*/
    this->__pad_118[1] = 0; /*0x421f4a*/
    *(unsigned int *)&(&this->__pad_10C)[4] = v10; /*0x421f50*/
    this->AnimClass_field_0x114 = 0; /*0x421f53*/
    this->__pad_118[2] = 0; /*0x421f59*/
    this->__pad_118[3] = 0; /*0x421f5f*/
    this->AnimClass_field_0x11C = 0; /*0x421f65*/
    this->__pad_120[0] = 0; /*0x421f6b*/
    *(unsigned int *)&this->__pad_120[8] = 0; /*0x421f71*/
    *(unsigned int *)&this->__pad_120[16] = 0; /*0x421f73*/
    *(unsigned int *)&this->__pad_120[24] = 0; /*0x421f76*/
    *(unsigned int *)&this->__pad_120[12] = 0; /*0x421f7d*/
    *(unsigned int *)&this->__pad_120[20] = 0; /*0x421f80*/
    *(unsigned int *)&this->__pad_120[28] = 0; /*0x421f83*/
    ((Int4 *)((Int4 *)&this->__pad_120[56]))->Set(0, 0, 0, 1065353216); /*0x421f86*/
    ((Int4 *)((Int4 *)&this->__pad_120[72]))->Set(0, 0, 0, 1065353216); /*0x421f96*/
    this->AnimClass_field_0x188 = 0; /*0x421fa4*/
    this->__pad_178[0] = 0; /*0x421faa*/
    this->__pad_178[1] = 0; /*0x421fb0*/
    this->AnimClass_field_0x17C = 0; /*0x421fb6*/
    this->AnimClass_field_0x180 = 0; /*0x421fbc*/
    this->AnimClass_field_0x184 = (int)a4; /*0x421fc2*/
    *(unsigned int *)this->__pad_18C = 1072693248; /*0x421fc8*/
    this->AnimClass_field_0x190 = (int)a6; /*0x421fd2*/
    this->__pad_194[0] = 0; /*0x421fd8*/
    this->__pad_194[1] = 1; /*0x421fde*/
    this->__pad_194[2] = 0; /*0x421fe5*/
    this->__pad_194[3] = 0; /*0x421feb*/
    this->__pad_194[4] = 0; /*0x421ff1*/
    this->__pad_194[5] = 0; /*0x421ff7*/
    this->__pad_194[6] = 0; /*0x421ffd*/
    this->__pad_194[7] = 0; /*0x422003*/
    this->__pad_194[8] = 1; /*0x422009*/
    this->__pad_194[9] = 0; /*0x422010*/
    this->__pad_194[10] = 0; /*0x422016*/
    this->AnimClass_field_0x0 = (void *)(void *)(int)&vt_AnimClass; /*0x42201c*/
    this->AnimClass_field_0x4 = (int)&vt_AnimClass; /*0x422022*/
    this->AnimClass_field_0x8 = (int)&vt_AnimClass; /*0x422028*/
    *(unsigned int *)&this->__pad_C = (unsigned int)&off_7E3328;  /*g57w10 r4: raw fn_42:2007 原文 this->__pad_C*/ /*0x422030*/
    (&this->__pad_D8)[4] = 0; /*0x422037*/
    AbstractClass::GenerateUniqueID((int)((AbstractClass *)&this->AnimClass_field_0x4)); /*0x42203d*/
    ((AudioController *)&this->AnimClass_field_0x1A0)->Init(); /*0x422048*/
    ((AudioController *)&this->AnimClass_field_0x1B4)->Init(); /*0x422053*/
    if ( dword_A8E9B8 < dword_A8E9B0 /*0x42208b*/
      || (byte_A8E9B5 || !dword_A8E9B0)
      && dword_A8E9BC > 0
      && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(dword_A8E9A8 + 8))(
           &dword_A8E9A8,
           dword_A8E9BC + dword_A8E9B0,
           0) )
    {
      v11 = dword_A8E9B8++; /*0x422098*/
      *((unsigned int *)dword_A8E9AC + v11) = (unsigned int)(void *)(this); /*0x4220a7*/
    }
    AnimClass_field_0xC8 = (int)(void *)(Coord *)(unsigned int)this->AnimClass_field_0xC8; /*0x4220aa*/
    this->__pad_7C[20] = 1; /*0x4220b0*/
    if ( AnimClass_field_0xC8 ) /*0x4220b9*/
    {
      this->AnimClass_field_0x104 = *(unsigned int *)(AnimClass_field_0xC8 + 832); /*0x422137*/
      v17 = (unsigned int *)this->AnimClass_field_0xC8; /*0x42213d*/
      if ( v17[176] == -1 ) /*0x42214a*/
      {
        *(unsigned int *)(this->AnimClass_field_0xC8 + 704) = *(__int16 *)((*(int (__thiscall **)(unsigned int *))(*v17 + 156))(v17) /*0x42215e*/
                                                                   + 6);
        v18 = this->AnimClass_field_0xC8; /*0x422164*/
        if ( *(unsigned char *)(v18 + 882) ) /*0x42216a*/
          *(int *)(v18 + 704) /= 2; /*0x42217d*/
      }
      v19 = this->AnimClass_field_0xC8; /*0x422183*/
      if ( *(unsigned int *)(v19 + 700) == -1 ) /*0x422190*/
        *(unsigned int *)(v19 + 700) = *(unsigned int *)(v19 + 704); /*0x422198*/
      if ( a7 ) /*0x4221a3*/
        this->AnimClass_field_0x100 = (int)a7; /*0x4221a5*/
      else
        this->AnimClass_field_0x100 = *(unsigned int *)(this->AnimClass_field_0xC8 + 840); /*0x4221b9*/
      v20 = (unsigned int *)this->AnimClass_field_0xC8; /*0x4221bf*/
      v21 = v20[185]; /*0x4221c5*/
      ProductionTimeMult = (char *)v20[172]; /*0x4221cb*/
      if ( v21 || v20[186] ) /*0x4221d5*/
      {
        v23 = v20[186]; /*0x4221dd*/
        if ( v21 <= v23 ) /*0x4221e5*/
          ProductionTimeMult = (char *)((gamemd::Random *)(void *)((Random *)&((AbstractClass *)dword_A8B230)[14].NeedsSaveOrLink))->Range(v21, v23); /*0x4221f5*/
      }
      if ( *(unsigned char *)(this->AnimClass_field_0xC8 + 866) ) /*0x422200*/
        ProductionTimeMult = ((gamemd::Rules *)(void *)((Rules *)&dword_A8EB60))->GetProductionTimeMult((int)ProductionTimeMult); /*0x42220e*/
      this->AnimClass_field_0xB4 = (int)dword_A8ED84; /*0x42221f*/
      this->AnimClass_field_0xB8 = v73; /*0x422241*/
      this->AnimClass_field_0xBC = (int)ProductionTimeMult; /*0x422244*/
      this->AnimClass_field_0xC0 = (int)ProductionTimeMult; /*0x422247*/
      v24 = this->AnimClass_field_0xC8; /*0x42224d*/
      this->AnimClass_field_0xAC = 0; /*0x422253*/
      v25 = *(unsigned int *)(v24 + 868); /*0x422259*/
      if ( v25 == 3 || v25 == 4 ) /*0x422267*/
        ((gamemd::ObjectClass *)(void *)((ObjectClass *)this))->SetAnim(dword_8871E0->GDIWallDefense[1]); /*0x422281*/
      else
        ((gamemd::ObjectClass *)(void *)((IUnknown *)(void *)this))->SetZ(); /*0x42226c*/
      if ( a8 ) /*0x422289*/
        this->__pad_120[0] = 1; /*0x42228b*/
      v26 = this->AnimClass_field_0xC8; /*0x422292*/
      if ( *(unsigned char *)(v26 + 881) || this->__pad_120[0] ) /*0x4222a0*/
      {
        this->AnimClass_field_0xAC = *(unsigned int *)(v26 + 700) - 1; /*0x4222af*/
        *(unsigned int *)this->__pad_C4 = -*(unsigned int *)this->__pad_C4; /*0x4222bd*/
      }
      v27 = this->AnimClass_field_0xC8; /*0x4222c3*/
      if ( *(unsigned char *)(v27 + 858) || *(unsigned char *)(v27 + 854) ) /*0x4222d1*/
      {
        this->__pad_194[0] = 1; /*0x4222ea*/
        if ( *(unsigned char *)(v27 + 854) ) /*0x4222f1*/
        {
          v55 = ((gamemd::Random *)(void *)((Random *)&((AbstractClass *)dword_A8B230)[14].NeedsSaveOrLink))->State(); /*0x422310*/
          v58 = ((gamemd::Random *)(void *)((Random *)&((AbstractClass *)dword_A8B230)[14].NeedsSaveOrLink))->State(); /*0x422324*/
          v28 = *(double *)(this->AnimClass_field_0xC8 + 792); /*0x42232e*/
          IDA_LOWORD(v29) = Math::RoundToInt(v28); /*0x42233c*/
          v56 = (double)((int)abs32(v55) % v29) - *(double *)(this->AnimClass_field_0xC8 + 808); /*0x422375*/
          v63 = (double)((int)abs32(v58) % v29) - *(double *)(this->AnimClass_field_0xC8 + 808); /*0x422387*/
          v64 = v56; /*0x42238b*/
          v65 = v28; /*0x42238f*/
          v30 = -v56; /*0x422397*/
          if ( v63 < v30 ) /*0x4223a4*/
          {
            v63 = -v63; /*0x4223ac*/
            v64 = v30; /*0x4223b0*/
          }
          v31 = (double)(int)(70 - abs32(((gamemd::Random *)(void *)((Random *)&((AbstractClass *)dword_A8B230)[14].NeedsSaveOrLink))->State() % 20)); /*0x4223e6*/
          IDA_LOWORD(v32) = Math::RoundToInt(v31); /*0x4223f4*/
          v69 = v32; /*0x4223fc*/
          IDA_LOWORD(v33) = Math::RoundToInt(v31); /*0x42240b*/
          v70 = v33; /*0x422413*/
          IDA_LOWORD(v34) = Math::RoundToInt((double)a3[2] - v31 * v65); /*0x422422*/
          v71 = v34; /*0x422427*/
          ((gamemd::ObjectClass *)(void *)((ObjectClass *)this))->Deploy(); /*0x422433*/
          if ( this->AnimClass_field_0xCC ) /*0x422438*/
          {
            Coords = (unsigned int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x422452*/
            v35 = (unsigned int *)(*(int (__thiscall **)(int, CoordStruct *))(*(unsigned int *)this->AnimClass_field_0xCC + 72))( /*0x42245d*/
                              this->AnimClass_field_0xCC,
                              &v75);
            v72.X = (*v35 + *Coords); /*0x422468*/
            v36 = Coords[1] + v35[1]; /*0x422472*/
            v37 = Coords[2] + v35[2]; /*0x422475*/
            vfptr = (int)v72.vfptr; /*0x42247c*/
            v67 = v36; /*0x422480*/
          }
          else
          {
            v38 = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x42248d*/
            vfptr = *v38; /*0x422494*/
            v67 = v38[1]; /*0x42249b*/
            v37 = v38[2]; /*0x42249f*/
          }
          v39 = this->AnimClass_field_0xC8; /*0x4224a2*/
          v68 = v37; /*0x4224ae*/
          ((AnimClass *)(void *)&this->__pad_120[8])->InitRotation(/*0x4224d4 g57w11 r4: 实例形 (hpp 9 参)*/
            &vfptr,
            *(unsigned int *)(v39 + 784),
            *(unsigned int *)(v39 + 788),
            1610612736,
            1073112678,
            0,
            0,
            &v63,
            0.0);
        }
        else
        {
          ((gamemd::ObjectClass *)(void *)((ObjectClass *)this))->Deploy(); /*0x4224e0*/
          if ( this->AnimClass_field_0xCC ) /*0x4224e5*/
          {
            v40 = (unsigned int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x4224ff*/
            v41 = (unsigned int *)(*(int (__thiscall **)(int, CoordStruct *))(*(unsigned int *)this->AnimClass_field_0xCC + 72))( /*0x422508*/
                              this->AnimClass_field_0xCC,
                              &out);
            v42 = *v40 + *v41; /*0x422512*/
            v43 = v40[1] + v41[1]; /*0x42251a*/
            v44 = v40[2] + v41[2]; /*0x42251f*/
          }
          else
          {
            v45 = (int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x42252a*/
            v42 = *v45; /*0x42252f*/
            v43 = v45[1]; /*0x422531*/
            v44 = v45[2]; /*0x422534*/
          }
          v67 = v43; /*0x422537*/
          vfptr = v42; /*0x422544*/
          v68 = v44 + 10; /*0x42254e*/
          v46 = ((gamemd::Random *)(void *)((Random *)&((AbstractClass *)dword_A8B230)[14].NeedsSaveOrLink))->State(); /*0x422557*/
          v60 = ((gamemd::Random *)(void *)((Random *)&((AbstractClass *)dword_A8B230)[14].NeedsSaveOrLink))->State(); /*0x42256f*/
          v47 = ((gamemd::Random *)(void *)((Random *)&((AbstractClass *)dword_A8B230)[14].NeedsSaveOrLink))->State(); /*0x422579*/
          v48 = this->AnimClass_field_0xC8; /*0x42257e*/
          v57 = v47; /*0x422584*/
          IDA_LOWORD(v49) = Math::RoundToInt(*(double *)(v48 + 808) + *(double *)(v48 + 808)); /*0x422590*/
          v62 = v49; /*0x42259e*/
          v50 = (double)((int)abs32(v60) % v49) - *(double *)(v48 + 808); /*0x4225b2*/
          IDA_LOWORD(v51) = Math::RoundToInt(v50); /*0x4225d0*/
          v61 = (double)((int)abs32(v46) % v51) + *(double *)(v48 + 792); /*0x4225f8*/
          v52 = (double)((int)abs32(v57) % v62) - *(double *)(v48 + 808); /*0x422621*/
          v71 = v61; /*0x422627*/
          v69 = v52; /*0x42262b*/
          v70 = v50; /*0x42262f*/
          ((AnimClass *)(void *)&this->__pad_120[8])->InitRotation(/*0x422648 g57w11 r4: 实例形 (hpp 9 参)*/
            &vfptr,
            *(unsigned int *)(v48 + 784),
            *(unsigned int *)(v48 + 788),
            1610612736,
            1073112678,
            0,
            0,
            &v69,
            0.0);
        }
      }
      else
      {
        ((gamemd::ObjectClass *)(void *)((ObjectClass *)this))->Deploy(); /*0x4222e0*/
      }
      if ( this->AnimClass_field_0xC8 == *(unsigned int *)&dword_8871E0->__pad_13BC[192] ) /*0x42265e*/
      {
        MapClass::RevealArea1( /*0x422689*/
          (MapClass *)&dword_87F7E8,
          a3,
          *(unsigned int *)&dword_8871E0->__pad_13BC[256] / 256,
          (void *)dword_A83D4C,
          0,
          0,
          0,
          1,
          0);
        MapClass::RevealArea1( /*0x4226ba*/
          (MapClass *)&dword_87F7E8,
          a3,
          *(unsigned int *)&dword_8871E0->__pad_13BC[256] / 256,
          (void *)dword_A83D4C,
          0,
          0,
          0,
          1,
          1);
      }
      v53 = (char)(void *)(a5); /*0x4226bf*/
      if ( a5 <= 1 ) /*0x4226c5*/
        v53 = 1; /*0x4226c7*/
      v54 = v53 * *(unsigned char *)(this->AnimClass_field_0xC8 + 708); /*0x4226d8*/
      this->__pad_194[1] = v54; /*0x4226dc*/
      if ( (unsigned __int8)v54 <= 1u ) /*0x4226e2*/
        v54 = 1; /*0x4226eb*/
      this->__pad_194[1] = v54; /*0x4226f0*/
      if ( !this->AnimClass_field_0x184 ) /*0x4226f6*/
        ProductionCompletionCallback((TechnoClass *)this); /*0x422702*/
      return (void **)this; /*0x422707*/
    }
    else
    {
      AnimClass_field_0xCC = (int)(void *)(unsigned int *)(unsigned int)this->AnimClass_field_0xCC; /*0x4220bb*/
      if ( AnimClass_field_0xCC ) /*0x4220c3*/
        (*(void (__thiscall **)(int, AnimClass *))(*(unsigned int *)AnimClass_field_0xCC + 96))(AnimClass_field_0xCC, this); /*0x4220c8*/
      ((gamemd::BuildingClass *)(void *)((BuildingClass *)this))->AimTurret(0); /*0x4220ce*/
      Mixer_ReleaseChannel((Mixer *)&this->AnimClass_field_0x1A0); /*0x4220d9*/
      if ( !this->__pad_194[4] ) /*0x4220de*/
      {
        v14 = this->AnimClass_field_0xC8; /*0x4220e6*/
        if ( v14 ) /*0x4220ee*/
        {
          if ( *(unsigned int *)(v14 + 764) != -1 ) /*0x4220f7*/
          {
            v15 = (unsigned int *)(*(int (__thiscall **)(AnimClass *, CoordStruct *))(this->AnimClass_field_0x0 + 72))( /*0x422109*/
                              this,
                              &v72);
            StartAudioControllerAt( /*0x42211a*/
              *(unsigned int *)(this->AnimClass_field_0xC8 + 764),
              v15,
              (int **)&this->AnimClass_field_0x1B4);
          }
        }
      }
      ((gamemd::ObjectClass *)(void *)((ObjectClass *)this))->Destroy(); /*0x422121*/
      return (void **)this; /*0x422126*/
    }
}
} // namespace gamemd

// 0x425150
namespace gamemd {
int AnimClass::ClearTargetReferences(int a2, int a3)
{
    int result; // eax
    int (__thiscall **AnimClass_field_0x0)(AnimClass *, unsigned int); // eax
    int (__thiscall **v6)(AnimClass *); // edx
    int (__thiscall **v7)(AnimClass *); // eax

    ((gamemd::ObjectClass *)(void *)((ObjectClass *)this))->Unlink(); /*0x42515f*/
    result = (int)this->AnimClass_field_0xCC; /*0x425164*/
    if ( result == a2 && a2 ) /*0x425172*/
    {
      RemoveTarget((int)this); /*0x42517a*/
      (*(void (__thiscall **)(void *, AnimClass *))(*(unsigned int *)this->AnimClass_field_0xCC + 96))( /*0x425188*/
        this->AnimClass_field_0xCC,
        this);
      AnimClass_field_0x0 = (int (__thiscall **)(AnimClass *, unsigned int))this->AnimClass_field_0x0; /*0x42518b*/
      this->AnimClass_field_0xCC = 0; /*0x425190*/
      this->__pad_194[7] = 1; /*0x425196*/
      result = AnimClass_field_0x0[73](this, 0); /*0x42519d*/
    }
    if ( this->AnimClass_field_0xC8 == (Coord *)a2 ) /*0x4251a9*/
      this->AnimClass_field_0xC8 = 0; /*0x4251ab*/
    if ( this->AnimClass_field_0x17C == (AbstractClass *)a2 ) /*0x4251b7*/
    {
      v6 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x4251b9*/
      this->AnimClass_field_0x17C = 0; /*0x4251bd*/
      result = v6[62](this); /*0x4251c3*/
    }
    if ( this->AnimClass_field_0x180 == a2 ) /*0x4251cf*/
    {
      v7 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x4251d1*/
      this->AnimClass_field_0x17C = 0; /*0x4251d5*/
      return v7[62](this); /*0x4251db*/
    }
    return result; /*0x4251e1*/
}
} // namespace gamemd

// 0x65B4D0
namespace gamemd {
int RadSiteClass::SetSpread(int a2)
{
    int result; // eax

    this->Spread = a2; /*0x65b4d4*/
    result = (a2 << 8) + 128; /*0x65b4da*/
    this->SpreadInLeptons = result; /*0x65b4df*/
    return result; /*0x65b4e2*/
}
} // namespace gamemd

// 0x65B4F0
namespace gamemd {
int RadSiteClass::SetRadLevel(int a2)
{
    int result; // eax

    this->RadLevel = a2; /*0x65b4f4*/
    result = a2 * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6148); /*0x65b502*/
    this->RadDuration = (void *)(void *)(result); /*0x65b505*/
    this->RadTimeLeft = (void *)(void *)(result); /*0x65b508*/
    return result; /*0x65b50b*/
}
} // namespace gamemd

// 0x65B530
namespace gamemd {
int RadSiteClass::Add(int a2)
{
    int v3; // eax
    int v4; // edi
    int v5; // eax

    IDA_LOWORD(v3) = Math::RoundToInt((double)this->RadLevel * (double)this->RadTimeLeft / (double)this->RadDuration); /*0x65b541*/
    v4 = v3; /*0x65b548*/
    ((gamemd::RadSiteClass *)(void *)(this))->Deactivate(); /*0x65b54a*/
    this->RadLevel = v4 + a2; /*0x65b556*/
    v5 = (v4 + a2) * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6148); /*0x65b565*/
    this->RadDuration = (void *)(void *)(v5); /*0x65b56a*/
    this->RadTimeLeft = (void *)(void *)(v5); /*0x65b56d*/
    return Warhead::ProcessDamageArea((Warhead *)this); /*0x65b575*/
}
} // namespace gamemd

// 0x65B8F0
namespace gamemd {
double RadSiteClass::GetRadLevelAt(short *a2)
{ /*g57w11 r4: raw 0x65B8F0 double(this,__int16*a2); 体用 a2; hpp 同步*/
    double v2; // st7
    void *v4; // esi
    int *v5; // eax
    int v6; // esi
    int v7; // edi
    int v8; // ebx
    unsigned int *v9; // eax
    int v10; // esi
    int v11; // edx
    int v12; // eax
    int SpreadInLeptons; // ecx
    double result; // st7
    int v15; // [esp+24h] [ebp-Ch] BYREF
    int v16; // [esp+28h] [ebp-8h]
    int v17; // [esp+2Ch] [ebp-4h]
    __int16 *v18; // [esp+34h] [ebp+4h]

    v4 = ((gamemd::CellCoord *)(void *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((__int16 *)this->BaseCell); /*0x65b90b*/
    v18 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x65b91a*/
    v5 = (int *)(*(int (__thiscall **)(void *, int *))(*(unsigned int *)v4 + 72))(v4, &v15); /*0x65b925*/
    v6 = *v5; /*0x65b928*/
    v7 = v5[1]; /*0x65b92e*/
    v8 = v5[2]; /*0x65b933*/
    v9 = (unsigned int *)(*(int (__thiscall **)(__int16 *, int *))(*(unsigned int *)v18 + 72))(v18, &v15); /*0x65b93b*/
    v10 = v6 - *v9; /*0x65b945*/
    v11 = v9[2]; /*0x65b94c*/
    v16 = v7 - v9[1]; /*0x65b94f*/
    v15 = v10; /*0x65b959*/
    v17 = v8 - v11; /*0x65b95d*/
    Math::Sqrt((double)v10 * (double)v10 + (double)(v8 - v11) * (double)(v8 - v11) + (double)v16 * (double)v16); /*0x65b982*/
    IDA_LOWORD(v12) = Math::RoundToInt(v2); /*0x65b98a*/
    SpreadInLeptons = this->SpreadInLeptons; /*0x65b98f*/
    result = 0.0; /*0x65b992*/
    if ( v12 <= SpreadInLeptons ) /*0x65b99e*/
      return (double)(SpreadInLeptons - v12) / (double)this->SpreadInLeptons * (double)this->RadLevel; /*0x65b9b0*/
    return result; /*0x65b9b3*/
}
} // namespace gamemd

// 0x65B9C0
namespace gamemd {
int RadSiteClass::Radiate(int a1)
{ /*g57w11 r4: raw 0x65B9C0 __fastcall(int a1) 折合显式参; int 返回*/
    int v1; // esi
    int v2; // edx
    int result; // eax
    int v4; // edi
    int v5; // esi
    void *v6; // esi
    void *v7; // ebp
    int *v8; // eax
    int v9; // esi
    int v10; // edi
    int v11; // ebx
    unsigned int *v12; // eax
    int v13; // ecx
    int v14; // edx
    double v15; // st7
    int v16; // eax
    double *v17; // eax
    __int16 v18[2]; // [esp+24h] [ebp-4Ch] BYREF
    int v19; // [esp+28h] [ebp-48h]
    int v20; // [esp+2Ch] [ebp-44h]
    int i; // [esp+30h] [ebp-40h]
    int v22; // [esp+34h] [ebp-3Ch]
    double v23; // [esp+38h] [ebp-38h]
    int v24; // [esp+40h] [ebp-30h]
    int v25; // [esp+44h] [ebp-2Ch]
    int v26; // [esp+48h] [ebp-28h]
    int v27; // [esp+4Ch] [ebp-24h]
    int v28; // [esp+50h] [ebp-20h]
    int v29; // [esp+54h] [ebp-1Ch]
    char v30[12]; // [esp+58h] [ebp-18h] BYREF
    char v31[12]; // [esp+64h] [ebp-Ch] BYREF

    v1 = *(unsigned int *)(a1 + 68); /*0x65b9d4*/
    v2 = *(__int16 *)(a1 + 64) - v1; /*0x65b9d7*/
    result = *(__int16 *)(a1 + 66) - v1; /*0x65b9d9*/
    v20 = a1; /*0x65b9dc*/
    v4 = v2 + 2 * v1 + 1; /*0x65b9e0*/
    v5 = result + 2 * v1 + 1; /*0x65b9e4*/
    v26 = v2; /*0x65b9ea*/
    v22 = v4; /*0x65b9ee*/
    v25 = v5; /*0x65b9f2*/
    for ( i = result; i < v5; ++i ) /*0x65b9fa*/
    {
      v19 = v2; /*0x65ba04*/
      if ( v2 < v22 ) /*0x65ba0a*/
      {
        while ( 1 ) /*0x65ba20*/
        {
          v18[0] = v19; /*0x65ba20*/
          v18[1] = i; /*0x65ba2e*/
          v6 = ((gamemd::CellCoord *)(void *)(&dword_87F7E8))->To_CellObj((__int16 *)(a1 + 64)); /*0x65ba38*/
          v7 = CellCoord::To_CellObj(&dword_87F7E8, v18); /*0x65ba4b*/
          v8 = (int *)(*(int (__thiscall **)(void *, char *))(*(unsigned int *)v6 + 72))(v6, v30); /*0x65ba54*/
          v9 = *v8; /*0x65ba57*/
          v10 = v8[1]; /*0x65ba5e*/
          v11 = v8[2]; /*0x65ba61*/
          v12 = (unsigned int *)(*(int (__thiscall **)(void *, char *))(*(unsigned int *)v7 + 72))(v7, v31); /*0x65ba69*/
          v13 = v12[1]; /*0x65ba75*/
          v27 = v9 - *v12; /*0x65ba78*/
          v14 = v12[2]; /*0x65ba7e*/
          v28 = v10 - v13; /*0x65ba81*/
          v29 = v11 - v14; /*0x65ba8b*/
          v15 = Math::Sqrt((double)v27 * (double)v27 + (double)(v11 - v14) * (double)(v11 - v14) + (double)v28 /*0x65bab0*/
                                                                                                 * (double)v28);
          v16 = Math::RoundToInt(v15); /*0x65bab8*/
          v23 = 0.0; /*0x65bac1*/
          v24 = *(unsigned int *)(v20 + 72); /*0x65bad6*/
          if ( v16 <= v24 ) /*0x65bada*/
          {
            IDA_LODWORD(v23) = v24 - v16; /*0x65bade*/
            v23 = (double)(v24 - v16) / (double)v24 * (double)*(int *)(v20 + 76); /*0x65baed*/
          }
          v17 = (double *)CellCoord::To_CellObj(&dword_87F7E8, v18); /*0x65bafb*/
          ((gamemd::CellClass *)(void *)(v17))->RadLevel_Increase(v23); /*0x65bb0c*/
          if ( ++v19 >= v22 ) /*0x65bb20*/
            break; /*0x65bb20*/
          a1 = v20; /*0x65ba12*/
        }
        v5 = v25; /*0x65bb26*/
        v2 = v26; /*0x65bb2a*/
        a1 = v20; /*0x65bb2e*/
      }
      result = i + 1; /*0x65bb36*/
    }
    return result; /*0x65bb43*/
}
} // namespace gamemd

// 0x65BB50
namespace gamemd {
int RadSiteClass::Deactivate(unsigned int *a1)
{ /*g57w11 r4: raw 0x65BB50 __fastcall(_DWORD*a1) 折合显式参; int 返回*/
    int v1; // eax
    int v2; // edx
    int v3; // esi
    int v4; // edx
    int result; // eax
    int v6; // esi
    void *v7; // esi
    void *v8; // ebp
    int *v9; // eax
    int v10; // esi
    int v11; // edi
    int v12; // ebx
    unsigned int *v13; // eax
    int v14; // ecx
    int v15; // edx
    double v16; // st7
    int v17; // eax
    double v18; // st7
    void *v19; // eax
    __int16 v20[2]; // [esp+24h] [ebp-5Ch] BYREF
    int v21; // [esp+28h] [ebp-58h]
    unsigned int *v22; // [esp+2Ch] [ebp-54h]
    int v23; // [esp+30h] [ebp-50h]
    int v24; // [esp+34h] [ebp-4Ch]
    int v25; // [esp+38h] [ebp-48h]
    int v26; // [esp+3Ch] [ebp-44h]
    double v27; // [esp+40h] [ebp-40h]
    unsigned __int64 v28; // [esp+48h] [ebp-38h]
    double v29; // [esp+50h] [ebp-30h]
    int v30; // [esp+5Ch] [ebp-24h]
    int v31; // [esp+60h] [ebp-20h]
    int v32; // [esp+64h] [ebp-1Ch]
    char v33[12]; // [esp+68h] [ebp-18h] BYREF
    char v34[12]; // [esp+74h] [ebp-Ch] BYREF

    v1 = a1[28] / dword_8871E0[1].?[1]; /*0x65bb67*/
    v2 = *((__int16 *)a1 + 32); /*0x65bb6d*/
    v3 = a1[17]; /*0x65bb71*/
    v22 = a1; /*0x65bb74*/
    v4 = v2 - v3; /*0x65bb78*/
    v24 = v4 + 2 * v3 + 1; /*0x65bb82*/
    v25 = v1 + 1; /*0x65bb87*/
    result = *((__int16 *)a1 + 33) - v3; /*0x65bb8f*/
    v23 = result; /*0x65bb91*/
    v6 = result + 2 * v3 + 1; /*0x65bb95*/
    v28 = IDA___PAIR64__(v4, v6); /*0x65bb9b*/
    if ( result < v6 ) /*0x65bb9f*/
    {
      do /*0x65bce9*/
      {
        v21 = v4; /*0x65bba9*/
        if ( v4 < v24 ) /*0x65bbaf*/
        {
          v29 = (double)v25; /*0x65bbb9*/
          while ( 1 ) /*0x65bbcd*/
          {
            v20[0] = v21; /*0x65bbcd*/
            v20[1] = v23; /*0x65bbdb*/
            v7 = ((gamemd::CellCoord *)(void *)(&dword_87F7E8))->To_CellObj((__int16 *)a1 + 32); /*0x65bbe5*/
            v8 = CellCoord::To_CellObj(&dword_87F7E8, v20); /*0x65bbf8*/
            v9 = (int *)(*(int (__thiscall **)(void *, char *))(*(unsigned int *)v7 + 72))(v7, v33); /*0x65bc01*/
            v10 = *v9; /*0x65bc04*/
            v11 = v9[1]; /*0x65bc0b*/
            v12 = v9[2]; /*0x65bc0e*/
            v13 = (unsigned int *)(*(int (__thiscall **)(void *, char *))(*(unsigned int *)v8 + 72))(v8, v34); /*0x65bc16*/
            v14 = v13[1]; /*0x65bc22*/
            v30 = v10 - *v13; /*0x65bc25*/
            v15 = v13[2]; /*0x65bc2b*/
            v31 = v11 - v14; /*0x65bc2e*/
            v32 = v12 - v15; /*0x65bc38*/
            v16 = Math::Sqrt((double)v30 * (double)v30 + (double)(v12 - v15) * (double)(v12 - v15) + (double)v31 /*0x65bc5d*/
                                                                                                   * (double)v31);
            v17 = Math::RoundToInt(v16); /*0x65bc65*/
            v18 = 0.0; /*0x65bc6e*/
            IDA_LODWORD(v27) = v22[18]; /*0x65bc79*/
            if ( v17 <= IDA_SLODWORD(v27) ) /*0x65bc7d*/
            {
              v26 = IDA_LODWORD(v27) - v17; /*0x65bc83*/
              v18 = (double)(IDA_LODWORD(v27) - v17) / (double)IDA_SLODWORD(v27) * (double)(int)v22[19]; /*0x65bc8f*/
            }
            v27 = v18 / (double)(int)v22[20] * v29; /*0x65bca3*/
            v19 = CellCoord::To_CellObj(&dword_87F7E8, v20); /*0x65bca7*/
            ((gamemd::CellClass *)(void *)((int)v19))->RadLevel_Decrease(v27); /*0x65bcb8*/
            if ( ++v21 >= v24 ) /*0x65bccc*/
              break; /*0x65bccc*/
            a1 = v22; /*0x65bbbf*/
          }
          v4 = IDA_HIDWORD(v28); /*0x65bcd6*/
          v6 = v28; /*0x65bcd6*/
          a1 = v22; /*0x65bcda*/
        }
        result = ++v23; /*0x65bce2*/
      }
      while ( v23 < v6 ); /*0x65bce9*/
    }
    return result; /*0x65bcef*/
}
} // namespace gamemd

// 0x65BD00
namespace gamemd {
void RadSiteClass::DecreaseRadiation()
{
    int v1; // esi
    int v2; // edx
    int result; // eax
    int v4; // edi
    int v5; // esi
    void *v6; // esi
    void *v7; // ebp
    int *v8; // eax
    int v9; // esi
    int v10; // edi
    int v11; // ebx
    unsigned int *v12; // eax
    int v13; // ecx
    int v14; // edx
    double v15; // st7
    int v16; // eax
    double v17; // st7
    void *v18; // eax
    __int16 v19[2]; // [esp+20h] [ebp-50h] BYREF
    int v20; // [esp+24h] [ebp-4Ch]
    unsigned int *v21; // [esp+28h] [ebp-48h]
    int i; // [esp+2Ch] [ebp-44h]
    int v23; // [esp+30h] [ebp-40h]
    int v24; // [esp+34h] [ebp-3Ch]
    double v25; // [esp+38h] [ebp-38h]
    int v26; // [esp+44h] [ebp-2Ch]
    int v27; // [esp+48h] [ebp-28h]
    int v28; // [esp+4Ch] [ebp-24h]
    int v29; // [esp+50h] [ebp-20h]
    int v30; // [esp+54h] [ebp-1Ch]
    char v31[12]; // [esp+58h] [ebp-18h] BYREF
    char v32[12]; // [esp+64h] [ebp-Ch] BYREF

    v1 = a1[17]; /*0x65bd14*/
    v2 = *((__int16 *)a1 + 32) - v1; /*0x65bd17*/
    result = *((__int16 *)a1 + 33) - v1; /*0x65bd19*/
    v21 = a1; /*0x65bd1c*/
    v4 = v2 + 2 * v1 + 1; /*0x65bd20*/
    v5 = result + 2 * v1 + 1; /*0x65bd24*/
    v27 = v2; /*0x65bd2a*/
    v23 = v4; /*0x65bd2e*/
    v26 = v5; /*0x65bd32*/
    for ( i = result; i < v5; ++i ) /*0x65bd3a*/
    {
      v20 = v2; /*0x65bd44*/
      if ( v2 < v23 ) /*0x65bd4a*/
      {
        while ( 1 ) /*0x65bd60*/
        {
          v19[0] = v20; /*0x65bd60*/
          v19[1] = i; /*0x65bd6e*/
          v6 = ((gamemd::CellCoord *)(void *)(&dword_87F7E8))->To_CellObj((__int16 *)a1 + 32); /*0x65bd78*/
          v7 = CellCoord::To_CellObj(&dword_87F7E8, v19); /*0x65bd8b*/
          v8 = (int *)(*(int (__thiscall **)(void *, char *))(*(unsigned int *)v6 + 72))(v6, v31); /*0x65bd94*/
          v9 = *v8; /*0x65bd97*/
          v10 = v8[1]; /*0x65bd9e*/
          v11 = v8[2]; /*0x65bda1*/
          v12 = (unsigned int *)(*(int (__thiscall **)(void *, char *))(*(unsigned int *)v7 + 72))(v7, v32); /*0x65bda9*/
          v13 = v12[1]; /*0x65bdb5*/
          v28 = v9 - *v12; /*0x65bdb8*/
          v14 = v12[2]; /*0x65bdbe*/
          v29 = v10 - v13; /*0x65bdc1*/
          v30 = v11 - v14; /*0x65bdcb*/
          v15 = Math::Sqrt((double)v28 * (double)v28 + (double)(v11 - v14) * (double)(v11 - v14) + (double)v29 /*0x65bdf0*/
                                                                                                 * (double)v29);
          v16 = Math::RoundToInt(v15); /*0x65bdf8*/
          v17 = 0.0; /*0x65be01*/
          IDA_LODWORD(v25) = v21[18]; /*0x65be0c*/
          if ( v16 <= IDA_SLODWORD(v25) ) /*0x65be10*/
          {
            v24 = IDA_LODWORD(v25) - v16; /*0x65be16*/
            v17 = (double)(IDA_LODWORD(v25) - v16) / (double)IDA_SLODWORD(v25) * (double)(int)v21[19]; /*0x65be22*/
          }
          v25 = v17 / (double)(int)v21[20]; /*0x65be32*/
          v18 = CellCoord::To_CellObj(&dword_87F7E8, v19); /*0x65be36*/
          ((gamemd::CellClass *)(void *)((int)v18))->RadLevel_Decrease(v25); /*0x65be47*/
          if ( ++v20 >= v23 ) /*0x65be5b*/
            break; /*0x65be5b*/
          a1 = v21; /*0x65bd52*/
        }
        v5 = v26; /*0x65be61*/
        v2 = v27; /*0x65be65*/
        a1 = v21; /*0x65be69*/
      }
      result = i + 1; /*0x65be71*/
    }
    return result; /*0x65be7e*/
}
} // namespace gamemd

// 0x65BE90
namespace gamemd {
char RadSiteClass::DecreaseLight() {
    return TacticalClass::UpdateScrollTarget( /*0x65becc*/
             (int)this->LightSource,
             this->LightSource->LightIntensity - this->IntensityDecrement,
             this->RadTimeLeft * this->Tint[0] / this->RadDuration,
             this->RadTimeLeft * this->Tint[1] / this->RadDuration,
             this->RadTimeLeft * this->Tint[2] / this->RadDuration,
             0);
}
} // namespace gamemd

// 0x7220A0
namespace gamemd {
int TiberiumClass::SpreadGrowth(int a2, unsigned int *a3)
{
    int result; // eax

    result = ((gamemd::ObjectClass *)(void *)((AbstractClass *)this))->GetSizeMax(); /*0x7220ac*/
    if ( result >= 0 ) /*0x7220b3*/
    {
      *a3 += 4 * *(unsigned int *)(a2 + 212) + 4; /*0x7220c6*/
      return 0; /*0x7220c8*/
    }
    return result; /*0x7220ca*/
}
} // namespace gamemd
