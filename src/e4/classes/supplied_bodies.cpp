// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/utility_ext.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "misc/audio.hpp"
#include "misc/misc_ext.hpp"
#include "object/techno.hpp"
#include "render/surface.hpp"
#include "structure/building.hpp"
#include "system/cell.hpp"
#include "system/factory.hpp"
#include "team/tag.hpp"
#include "e4/classes/ArrayClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"

// 0x637DB0
namespace gamemd {
bool ScriptAction::SetField10() {
    return !stru_AC4B30.__pad_EC[216] || this != (ScriptAction *)4; /*0x637dc0*/
}
} // namespace gamemd

// 0x638CE0
namespace gamemd {
int ScriptAction::ClassifyAction(int *a1, char *a2) {
    char v3; // cl
    int *Type; // eax
    int v6; // ecx
    Array *v7; // esi
    int Value; // eax
    int v9; // eax
    unsigned char *v10; // esi
    unsigned char v11[108]; // [esp+8h] [ebp-70h] BYREF
    int16_t v12; // [esp+74h] [ebp-4h]
    char v13; // [esp+76h] [ebp-2h]

    v3 = *a2; /*0x638ce8*/
    if ( *a2 == 9 || v3 == 6 || v3 == 7 ) /*0x638cf8*/
      return 0; /*0x638d01*/
    if ( Team_Load(a1, a2[12], *(unsigned int *)(a2 + 14), a2[18]) ) /*0x638d1a*/
      return 0; /*0x638d2a*/
    Type = (int *)BuildingClass::GetType((BuildingClass *)a1); /*0x638d2d*/
    if ( !Type ) /*0x638d34*/
      return -1; /*0x638d34*/
    v6 = Type[5]; /*0x638d36*/
    if ( v6 <= 0 ) /*0x638d3b*/
      return -1; /*0x638d3b*/
    v7 = *(Array **)(Type[2] + 4 * v6 - 4); /*0x638d43*/
    Value = Array::FindValue(v7, *Type); /*0x638d49*/
    if ( Value == -1 ) /*0x638d51*/
      v9 = 0; /*0x638d53*/
    else
      v9 = *((unsigned int *)v7->Array_field_0x4 + Value); /*0x638d5a*/
    v10 = *(unsigned char **)(v9 + 4); /*0x638d5d*/
    qmemcpy(v11, v10, sizeof(v11)); /*0x638d69*/
    v10 += 108; /*0x638d69*/
    v12 = *(unsigned short *)v10; /*0x638d6b*/
    v13 = v10[2]; /*0x638d6d*/
    if ( v11[12] == 7 || v11[12] == 8 || v11[12] == 9 ) /*0x638d80*/
      return 1; /*0x638d8c*/
    if ( (v11[12] == 1 || v11[12] == 11) && (v11[18] == 11 || v11[12] == 11 && !v11[18]) ) /*0x638da7*/
      return 2; /*0x638da9*/
    else
      return -1; /*0x638db5*/
}
} // namespace gamemd

// 0x6E47C0
namespace gamemd {
void * ScriptAction::CopyStructField(void *a2, const void *a3) {
    if ( a3 != this ) /*0x6e47ca*/
      qmemcpy(this, a3, 0x20u); /*0x6e47d3*/
    qmemcpy(a2, this, 0x20u); /*0x6e47e2*/
    return a2; /*0x6e47e4*/
}
} // namespace gamemd

// 0x403730
namespace gamemd {
int AudioQueue::StopAllVoices() {
    int v1; // edx
    int v2; // ecx
    int v3; // ebx
    int result; // eax
    AudioQueue *v5; // esi
    int v6; // edi
    Voice *v7; // [esp+0h] [ebp-Ch]

    v3 = v1; /*0x403733*/
    result = AudioQueue::GetNext((AudioQueue *)(v2 + 248)); /*0x40373b*/
    v5 = (AudioQueue *)result; /*0x403740*/
    v6 = result; /*0x403744*/
    if ( result ) /*0x403746*/
    {
      do /*0x403766*/
      {
        result = AudioQueue::GetNextAlt(v5); /*0x40374a*/
        v5 = (AudioQueue *)result; /*0x403752*/
        if ( v3 == -1 || *(unsigned int *)(v6 + 12) == v3 ) /*0x403759*/
          result = Voice::Stop(v7); /*0x40375d*/
        v6 = (int)v5; /*0x403764*/
      }
      while ( v5 ); /*0x403766*/
    }
    return result; /*0x403768*/
}
} // namespace gamemd

// 0x633FA0
namespace gamemd {
int ScriptAction::CreatePlacementAction(unsigned int *a2, const void *a3) {
    int v4; // eax
    unsigned int *v5; // ebx
    unsigned char *v6; // eax
    int v7; // eax
    int ScriptAction_field_0x14; // ecx
    int v9; // eax
    int v10; // edx
    int Type; // edi
    int v12; // eax
    int v13; // ecx
    int v14; // eax
    int v15; // edx

    v4 = (int)(RA2_OPNEW(0x10u)); /*0x633fa7*/
    if ( v4 ) /*0x633fb1*/
    {
      *(unsigned int *)v4 = 0; /*0x633fb3*/
      *(unsigned int *)(v4 + 4) = 0; /*0x633fb9*/
      *(unsigned int *)(v4 + 8) = -1; /*0x633fc0*/
      *(unsigned char *)(v4 + 12) = 0; /*0x633fc7*/
      v5 = (unsigned int *)v4; /*0x633fcb*/
    }
    else
    {
      v5 = 0; /*0x633fcf*/
    }
    *v5 = (unsigned int)(a2); /*0x633fd7*/
    v6 = (unsigned char *)RA2_OPNEW(0x6Fu); /*0x633fd9*/
    if ( v6 ) /*0x633fe3*/
      *v6 = 0; /*0x633fe5*/
    else
      v6 = 0; /*0x633fea*/
    qmemcpy(v6, a3, 0x6Fu); /*0x633ff8*/
    v5[1] = (unsigned int)(v6); /*0x633ffd*/
    v7 = this->ScriptAction_field_0x8[0]; /*0x634000*/
    if ( this->ScriptAction_field_0x10[0] < v7 /*0x634024*/
      || (this->__pad_C[1] || !v7)
      && (ScriptAction_field_0x14 = this->ScriptAction_field_0x14, ScriptAction_field_0x14 > 0)
      && (*(uint8_t (__thiscall **)(ScriptAction *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
           this,
           v7 + ScriptAction_field_0x14,
           0) )
    {
      v9 = (unsigned int)(this->ScriptAction_field_0x10[0]); /*0x63402b*/
      v10 = this->ScriptAction_field_0x4[0]; /*0x63402e*/
      this->ScriptAction_field_0x10[0] = (int)(v9 + 1); /*0x634034*/
      *(unsigned int *)(v10 + 4 * v9) = (unsigned int)(v5); /*0x634037*/
    }
    Type = (int)(BuildingClass::GetType((BuildingClass *)a2)); /*0x634043*/
    v12 = *(unsigned int *)(Type + 12); /*0x634045*/
    if ( *(unsigned int *)(Type + 20) < v12 /*0x63406d*/
      || (*(unsigned char *)(Type + 17) || !v12)
      && (v13 = *(unsigned int *)(Type + 24), v13 > 0)
      && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(Type + 4) + 8))(Type + 4, v12 + v13, 0) )
    {
      v14 = *(unsigned int *)(Type + 20); /*0x634074*/
      v15 = *(unsigned int *)(Type + 8); /*0x634077*/
      *(unsigned int *)(Type + 20) = v14 + 1; /*0x63407d*/
      *(unsigned int *)(v15 + 4 * v14) = this; /*0x634080*/
    }
    if ( *(unsigned int *)(Type + 140) == -1 ) /*0x63408d*/
      *(unsigned int *)(Type + 140) = *(unsigned int *)(Type + 20) - 1; /*0x634093*/
    return ScriptAction::PlaceObject((int)this, v5); /*0x6340a1*/
}
} // namespace gamemd

// 0x6343C0
namespace gamemd {
unsigned int * ScriptAction::GetCoords(unsigned int *a2) {
    int *ScenarioClassActionCoords; // eax
    int v3; // ecx
    int v4; // edx
    int v5; // esi
    unsigned int v7[3]; // [esp+8h] [ebp-Ch] BYREF

    ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x6343d1*/
                                  v7,
                                  *(unsigned char **)(*(unsigned int *)this->ScriptAction_field_0x4[0] + 4));
    v3 = *ScenarioClassActionCoords; /*0x6343d6*/
    v4 = ScenarioClassActionCoords[1]; /*0x6343d8*/
    v5 = ScenarioClassActionCoords[2]; /*0x6343db*/
    *a2 = v3; /*0x6343e4*/
    a2[1] = v4; /*0x6343e6*/
    a2[2] = v5; /*0x6343e9*/
    return a2; /*0x6343ec*/
}
} // namespace gamemd

// 0x634400
namespace gamemd {
unsigned int * ScriptAction::GetScreenPos(unsigned int *a2) {
    unsigned int *ScenarioClassActionCoords; // eax
    char *v3; // edx
    int v5[3]; // [esp+0h] [ebp-18h] BYREF
    unsigned int v6[3]; // [esp+Ch] [ebp-Ch] BYREF

    ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x63440f*/
                                  v5,
                                  *(unsigned char **)(*(unsigned int *)this->ScriptAction_field_0x4[0] + 4));
    v6[0] = *ScenarioClassActionCoords; /*0x634416*/
    v6[1] = ScenarioClassActionCoords[1]; /*0x63441d*/
    v6[2] = ScenarioClassActionCoords[2]; /*0x634434*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x634438*/
    v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x634452*/
    *a2 = DSurface_ViewBounds.field_0 + v5[0]; /*0x634458*/
    a2[1] = (unsigned int)(v3); /*0x63445a*/
    return a2; /*0x63445d*/
}
} // namespace gamemd

// 0x634550
namespace gamemd {
BOOL ScriptAction::GetActionCoordinates(int a2, int a3, int a4) {
    unsigned int *ScenarioClassActionCoords; // eax
    unsigned int v6[3]; // [esp+4h] [ebp-Ch] BYREF

    ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x634560*/
                                  v6,
                                  *(unsigned char **)(*(unsigned int *)this->ScriptAction_field_0x4[0] + 4));
    return *ScenarioClassActionCoords == a2 && ScenarioClassActionCoords[1] == a3 && ScenarioClassActionCoords[2] == a4; /*0x63456f*/
}
} // namespace gamemd

// 0x6346B0
namespace gamemd {
unsigned int * ScriptAction::FindItemByValue(int a2) {
    int v2; // edx
    int v3; // eax
    int v4; // esi
    unsigned int **i; // ecx

    v2 = this->ScriptAction_field_0x10[0]; /*0x6346b0*/
    v3 = 0; /*0x6346b4*/
    if ( v2 <= 0 ) /*0x6346ba*/
      return 0; /*0x6346ba*/
    v4 = this->ScriptAction_field_0x4[0]; /*0x6346bc*/
    for ( i = (unsigned int **)v4; **i != a2; ++i ) /*0x6346c3*/
    {
      if ( ++v3 >= v2 ) /*0x6346d1*/
        return 0; /*0x6346d8*/
    }
    if ( v3 == -1 ) /*0x6346de*/
      return 0; /*0x6346e2*/
    else
      return *(unsigned int **)(v4 + 4 * v3); /*0x6346e8*/
}
} // namespace gamemd

// 0x634CC0
namespace gamemd {
int ScriptAction::FindBuildingMatch(unsigned int *a2) {
    int Type; // esi
    int v4; // eax
    int v5; // eax
    ScriptAction *v6; // esi
    int v7; // ecx
    int v8; // eax
    int v9; // eax
    int v10; // ecx
    ScriptAction *v11; // ecx
    int Value; // eax
    int v13; // eax
    unsigned char *v14; // esi
    int v15; // edi
    int *ScenarioClassActionCoords; // eax
    int v17; // ebp
    int v18; // ebx
    unsigned int *v19; // esi
    unsigned int *v20; // esi
    unsigned int *v21; // eax
    void *ScriptAction_field_0x30; // [esp+10h] [ebp-100h] BYREF
    ScriptAction *v24; // [esp+14h] [ebp-FCh]
    int v25; // [esp+1Ch] [ebp-F4h]
    int i; // [esp+20h] [ebp-F0h]
    unsigned int v27[3]; // [esp+24h] [ebp-ECh] BYREF
    unsigned char v28[108]; // [esp+30h] [ebp-E0h] BYREF
    int16_t v29; // [esp+9Ch] [ebp-74h]
    char v30; // [esp+9Eh] [ebp-72h]
    unsigned char v31[108]; // [esp+A0h] [ebp-70h] BYREF
    int16_t v32; // [esp+10Ch] [ebp-4h]
    char v33; // [esp+10Eh] [ebp-2h]

    v24 = this; /*0x634cd5*/
    Type = (int)(BuildingClass::GetType((BuildingClass *)a2)); /*0x634cde*/
    v4 = *(unsigned int *)(Type + 4); /*0x634ce0*/
    ScriptAction_field_0x30 = this; /*0x634ce7*/
    v5 = (*(int (__thiscall **)(int, void **))(v4 + 16))(Type + 4, &ScriptAction_field_0x30); /*0x634cef*/
    if ( v5 == -1 ) /*0x634cf5*/
    {
      v6 = 0; /*0x634cf7*/
    }
    else
    {
      v7 = *(unsigned int *)(Type + 20); /*0x634cfb*/
      if ( v7 == 1 ) /*0x634d01*/
      {
        v6 = this; /*0x634d03*/
      }
      else
      {
        v8 = v5 - 1; /*0x634d07*/
        if ( v8 < 0 ) /*0x634d08*/
          v8 = v7 - 1; /*0x634d0a*/
        v6 = (gamemd::ScriptAction *)((int)((ScriptAction *)ArrayClass::GetAt_Wrap((ArrayClass *)Type, v8))); /*0x634d15*/
      }
    }
    v9 = (int)(BuildingClass::GetType((BuildingClass *)a2)); /*0x634d19*/
    v10 = *(unsigned int *)(v9 + 20) - 1; /*0x634d21*/
    if ( v10 >= 0 ) /*0x634d22*/
      v11 = *(ScriptAction **)(*(unsigned int *)(v9 + 8) + 4 * v10); /*0x634d2b*/
    else
      v11 = 0; /*0x634d24*/
    if ( v6 != v11 )
    {
      Value = Array::FindValue((Array *)v6, (int)a2); /*0x634d39*/
      v13 = Value == -1 ? 0 : *(unsigned int *)(v6->ScriptAction_field_0x4[0] + 4 * Value);
      v14 = *(unsigned char **)(v13 + 4); /*0x634d4d*/
      qmemcpy(v28, v14, sizeof(v28)); /*0x634d59*/
      v14 += 108; /*0x634d59*/
      v29 = *(unsigned short *)v14; /*0x634d5b*/
      v30 = v14[2]; /*0x634d5d*/
      ScriptAction_field_0x30 = this->ScriptAction_field_0x30; /*0x634d63*/
      v15 = (int)ScriptAction_field_0x30; /*0x634d5e*/
      if ( ScriptAction_field_0x30 ) /*0x634d67*/
      {
        ScenarioClassActionCoords = GetScenarioClassActionCoords(v27, v28); /*0x634d75*/
        v17 = *ScenarioClassActionCoords; /*0x634d7a*/
        v18 = 0; /*0x634d7c*/
        v25 = ScenarioClassActionCoords[1]; /*0x634d83*/
        for ( i = ScenarioClassActionCoords[2]; v18 < v15; ++v18 ) /*0x634d8e*/
        {
          v19 = *(unsigned int **)(v24->ScriptAction_field_0x24 + 4 * v18); /*0x634d97*/
          if ( v19[28] ) /*0x634d9a*/
          {
            qmemcpy(v31, v19, sizeof(v31)); /*0x634dad*/
            v20 = v19 + 27; /*0x634dad*/
            v32 = *(unsigned short *)v20; /*0x634daf*/
            v33 = *((unsigned char *)v20 + 2); /*0x634dbc*/
            v21 = GetScenarioClassActionCoords(v27, v31); /*0x634dbd*/
            if ( v17 == *v21 && v25 == v21[1] && i == v21[2] ) /*0x634dda*/
              return v18; /*0x634df3*/
            v15 = (int)ScriptAction_field_0x30; /*0x634ddc*/
          }
        }
      }
    }
    return -1; /*0x634de7*/
}
} // namespace gamemd

// 0x6351E0
namespace gamemd {
int ScriptAction::DecrementRefCount(int a2) {
    int result; // eax

    *(unsigned char *)(a2 + 12) = 0; /*0x6351e4*/
    result = (int)this->ScriptAction_field_0xA8 - 1; /*0x6351ee*/
    this->ScriptAction_field_0xA8 = (void *)result; /*0x6351ef*/
    if ( !result ) /*0x6351f5*/
      this->ScriptAction_field_0xB0 = (void *)-1; /*0x6351f7*/
    return result; /*0x635201*/
}
} // namespace gamemd

// 0x635F20
namespace gamemd {
unsigned int * ScriptAction::Constructor(int a2) {
    this->ScriptAction_field_0x8[0] = 0; /*0x635f27*/
    *(unsigned int *)this->__pad_C = 0; /*0x635f2a*/
    IDA_LOBYTE(this->ScriptAction_field_0x10[0]) = 1; /*0x635f2d*/
    IDA_BYTE1(this->ScriptAction_field_0x10[0]) = 0; /*0x635f31*/
    this->ScriptAction_field_0x4[0] = (int)&DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x635f34*/
    this->ScriptAction_field_0x18[0] = 10; /*0x635f3b*/
    this->ScriptAction_field_0x14 = 0; /*0x635f42*/
    this->__pad_1C[0] = 0; /*0x635f45*/
    this->__pad_1C[1] = 0; /*0x635f48*/
    IDA_LOBYTE(this->ScriptAction_field_0x98) = 0; /*0x635f4b*/
    IDA_BYTE1(this->ScriptAction_field_0x98) = 0; /*0x635f51*/
    this->ScriptAction_field_0x8C = (void *)-1; /*0x635f5b*/
    *(unsigned int *)this->__pad_90 = -1; /*0x635f61*/
    this->ScriptAction_field_0x94 = (void *)-1; /*0x635f67*/
    *(unsigned int *)this->__pad_0 = a2; /*0x635f6d*/
    return this->__pad_0; /*0x635f6f*/
}
} // namespace gamemd

// 0x636570
namespace gamemd {
BOOL ScriptAction::Check() {
    void *ScriptAction_field_0x8C; // eax
    BOOL result; // eax

    result = 0; /*0x636586*/
    if ( this->ScriptAction_field_0x14 > 0 ) /*0x636575*/
    {
      ScriptAction_field_0x8C = this->ScriptAction_field_0x8C; /*0x636577*/
      if ( ScriptAction_field_0x8C == (void *)-1 || (int)ScriptAction_field_0x8C > 0 ) /*0x636584*/
        return 1; /*0x636575*/
    }
    return result; /*0x63658b*/
}
} // namespace gamemd

// 0x636CE0
namespace gamemd {
int ScriptAction::ClearBuildingState() {
    void *ScriptAction_field_0x94; // eax
    unsigned int *v2; // edx
    int v3; // esi
    int i; // eax
    int ScriptAction_field_0x14; // ebp
    int result; // eax
    int j; // ebx
    unsigned int *v8; // edx
    int v9; // esi
    int v10; // [esp+10h] [ebp-4h]

    if ( IDA_LOBYTE(this->ScriptAction_field_0x98) ) /*0x636ce1*/
    {
      ScriptAction_field_0x94 = this->ScriptAction_field_0x94; /*0x636cf2*/
      if ( ScriptAction_field_0x94 != (void *)-1 ) /*0x636cfa*/
      {
        v2 = *(unsigned int **)(this->ScriptAction_field_0x8[0] + 4 * (unsigned int)ScriptAction_field_0x94); /*0x636cff*/
        if ( v2 ) /*0x636d04*/
        {
          v2[45] = -1; /*0x636d06*/
          v3 = v2[12]; /*0x636d0c*/
          for ( i = 0; i < v3; *(unsigned int *)(*(unsigned int *)(v2[9] + 4 * i - 4) + 116) = -1 ) /*0x636d13*/
            ++i; /*0x636d18*/
          v2[43] = -1; /*0x636d24*/
        }
      }
      IDA_LOBYTE(this->ScriptAction_field_0x98) = 0; /*0x636d2a*/
    }
    ScriptAction_field_0x14 = this->ScriptAction_field_0x14; /*0x636d37*/
    v10 = ScriptAction_field_0x14; /*0x636d3c*/
    result = this->ScriptAction_field_0x8C != (void *)-1 ? (int)this->ScriptAction_field_0x8C : 0;
    for ( j = result; j < ScriptAction_field_0x14; ++j ) /*0x636d4b*/
    {
      result = this->ScriptAction_field_0x8[0]; /*0x636d4d*/
      v8 = *(unsigned int **)(result + 4 * j); /*0x636d50*/
      if ( v8 ) /*0x636d55*/
      {
        v8[45] = -1; /*0x636d57*/
        v9 = v8[12]; /*0x636d5d*/
        result = 0; /*0x636d60*/
        if ( v9 > 0 ) /*0x636d64*/
        {
          do /*0x636d73*/
          {
            ++result; /*0x636d69*/
            *(unsigned int *)(*(unsigned int *)(v8[9] + 4 * result - 4) + 116) = -1; /*0x636d70*/
          }
          while ( result < v9 ); /*0x636d73*/
          ScriptAction_field_0x14 = v10; /*0x636d75*/
        }
        v8[43] = -1; /*0x636d79*/
      }
    }
    this->ScriptAction_field_0x8C = (void *)-1; /*0x636d84*/
    return result; /*0x636d8a*/
}
} // namespace gamemd

// 0x638C70
namespace gamemd {
char ScriptAction::IsBuildingTypeMatch() {
    int v2; // edi
    unsigned char *WaypointCoords; // eax
    char v5; // al
    unsigned char v6[8]; // [esp+8h] [ebp-10h] BYREF
    int v7; // [esp+10h] [ebp-8h]

    if ( !this ) /*0x638c79*/
      return 0; /*0x638c79*/
    v2 = (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 388))(this); /*0x638c83*/
    if ( v2 == 5 ) /*0x638c88*/
      return 1; /*0x638c91*/
    if ( ((WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v6, *((unsigned int **)this + 173)), /*0x638cc0*/
           v7 = *(unsigned int *)WaypointCoords,
           v5 = WaypointCoords[4],
           v2 == 1)
       || v2 == 11)
      && (v5 == 11 || v2 == 11 && !v5) )
    {
      return 1; /*0x638cc3*/
    }
    else
    {
      return 0; /*0x638ccb*/
    }
}
} // namespace gamemd

// 0x63A8E0
namespace gamemd {
bool ScriptAction::HitTest(int a1, int a2) {
    int v3; // esi
    int v4; // edi
    void *Array_field_0x10; // ebp
    ScriptAction *v6; // esi
    int *ScreenPos; // eax
    int *v8; // eax
    int *v9; // eax
    int *v10; // eax
    ObjectClass *v11; // [esp+0h] [ebp-4Ch]
    int v12; // [esp+10h] [ebp-3Ch] BYREF
    int v13; // [esp+18h] [ebp-34h]
    int v14; // [esp+1Ch] [ebp-30h] BYREF
    int v15; // [esp+20h] [ebp-2Ch]
    int v16; // [esp+24h] [ebp-28h]
    int v17; // [esp+28h] [ebp-24h]
    int v18; // [esp+2Ch] [ebp-20h] BYREF
    int v19; // [esp+30h] [ebp-1Ch]
    int v20; // [esp+34h] [ebp-18h]
    int v21; // [esp+38h] [ebp-14h]
    unsigned int v22[4]; // [esp+3Ch] [ebp-10h] BYREF

    if ( !stru_AC4B30.__pad_EC[216] ) /*0x63a8ee*/
      return 0; /*0x63a8f9*/
    v3 = *(unsigned int *)&stru_AC4B30.__pad_EC[28]; /*0x63a902*/
    v4 = 0; /*0x63a90c*/
    v13 = *(unsigned int *)&stru_AC4B30.__pad_EC[28]; /*0x63a910*/
    if ( !*(unsigned int *)&stru_AC4B30.__pad_EC[176] /*0x63aa32*/
      || (v9 = ScriptAction::GetScreenPos(*(ScriptAction **)&stru_AC4B30.__pad_EC[176], &v12),
          v10 = ComputeBounds(&v18, 8, *v9, v9[1]),
          v14 = *v10,
          v15 = v10[1],
          v16 = v10[2],
          v17 = v10[3],
          ShrinkRect(&v14, 4),
          a1 < v14)
      || a1 >= v14 + v16
      || a2 < v15
      || a2 >= v15 + v17 )
    {
      v12 = 0; /*0x63a91a*/
  LABEL_5:
      Array_field_0x10 = stru_AC4B30.Array_field_0x10; /*0x63a91e*/
      if ( (int)stru_AC4B30.Array_field_0x10 > 0 ) /*0x63a926*/
      {
        while ( 1 ) /*0x63a936*/
        {
          v6 = (ScriptAction *)*((unsigned int *)stru_AC4B30.Array_field_0x4 + v4); /*0x63a936*/
          ScreenPos = ScriptAction::GetScreenPos(v6, &v14); /*0x63a93b*/
          v8 = ComputeBounds(v22, 8, *ScreenPos, ScreenPos[1]); /*0x63a950*/
          v18 = *v8; /*0x63a957*/
          v19 = v8[1]; /*0x63a95e*/
          v20 = v8[2]; /*0x63a965*/
          v21 = v8[3]; /*0x63a970*/
          ShrinkRect(&v18, 4); /*0x63a979*/
          if ( a1 >= v18 && a1 < v18 + v20 && a2 >= v19 && a2 < v19 + v21 ) /*0x63a9a4*/
            break; /*0x63a9a4*/
          if ( ++v4 >= (int)Array_field_0x10 ) /*0x63a9ad*/
            goto LABEL_22; /*0x63a9ad*/
        }
        if ( v6 && BuildingClass::CheckBuildability((BuildingClass *)v6) != -1 ) /*0x63aa73*/
          return 1; /*0x63aa7e*/
  LABEL_22:
        v3 = v13; /*0x63aa81*/
      }
      *(unsigned int *)&stru_AC4B30.__pad_EC[28] = 0; /*0x63aa87*/
      return v3 || v12; /*0x63aa87*/
    }
    v12 = *(unsigned int *)&stru_AC4B30.__pad_EC[176]; /*0x63aa3f*/
    if ( !*(unsigned int *)&stru_AC4B30.__pad_EC[176] || *(unsigned int *)&stru_AC4B30.__pad_EC[176] != v3 ) /*0x63aa4b*/
      goto LABEL_5; /*0x63aa4b*/
    Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 1); /*0x63aa59*/
    ExportSelectionAsScriptAction(v11); /*0x63aa5e*/
    return v3 || v12; /*0x63a8f0*/
}
} // namespace gamemd

// 0x63B550
namespace gamemd {
char ScriptAction::ProcessIdleAction() {
    ArrayClass *Type; // esi
    int v3; // eax
    unsigned int *v4; // eax
    int v5; // edi
    BuildingClass *v6; // ebx
    void *v7; // eax
    bool v8; // dl
    char *v9; // esi
    unsigned int *v10; // eax
    unsigned int *v11; // eax
    int Coord3D_field_0x08; // eax
    char *v13; // edi
    ArrayClass *v14; // ebp
    Coord3D *Viewport; // eax
    int *v16; // eax
    int v17; // esi
    int v18; // eax
    int *v19; // eax
    int v20; // eax
    int v21; // esi
    int v22; // edi
    int *v23; // eax
    Coord3D *v24; // eax
    int *v25; // eax
    int updated; // eax
    char v27; // al
    int v28; // edx
    int *v29; // eax
    char v30; // al
    int v31; // edi
    char *v32; // esi
    Coord2D *v33; // eax
    Coord3D *v34; // eax
    Coord2D *v35; // eax
    Coord3D *v36; // eax
    int v37; // esi
    int v38; // eax
    int *v39; // eax
    int v40; // eax
    int v41; // esi
    int v42; // edi
    Coord3D *v43; // eax
    int v44; // esi
    int v45; // esi
    ArrayClass *v46; // esi
    int *ScreenPos; // eax
    int v48; // edi
    const void *TypeEntry; // eax
    const void *v50; // esi
    int *v51; // eax
    bool v53; // [esp+2Eh] [ebp-172h]
    char v54; // [esp+2Fh] [ebp-171h]
    Coord3D v55; // [esp+30h] [ebp-170h] BYREF
    int v56; // [esp+3Ch] [ebp-164h]
    int v57; // [esp+40h] [ebp-160h] BYREF
    int v58; // [esp+44h] [ebp-15Ch]
    int v59; // [esp+48h] [ebp-158h]
    Coord3D v60; // [esp+4Ch] [ebp-154h] BYREF
    int v61; // [esp+58h] [ebp-148h] BYREF
    int v62; // [esp+5Ch] [ebp-144h]
    int v63; // [esp+68h] [ebp-138h] BYREF
    int v64; // [esp+6Ch] [ebp-134h]
    int v65; // [esp+70h] [ebp-130h]
    int v66; // [esp+74h] [ebp-12Ch]
    Coord2D v67; // [esp+78h] [ebp-128h] BYREF
    int v68; // [esp+80h] [ebp-120h]
    int Coord2D_field_0x04; // [esp+84h] [ebp-11Ch]
    ArrayClass *v70; // [esp+88h] [ebp-118h] BYREF
    char *v71; // [esp+8Ch] [ebp-114h]
    Rect v72; // [esp+94h] [ebp-10Ch] BYREF
    Rect v73; // [esp+A4h] [ebp-FCh] BYREF
    unsigned int v74[3]; // [esp+B4h] [ebp-ECh] BYREF
    unsigned short v75[56]; // [esp+C0h] [ebp-E0h] BYREF
    char v76[112]; // [esp+130h] [ebp-70h] BYREF

    Type = (ArrayClass *)BuildingClass::GetType((BuildingClass *)this); /*0x63b565*/
    v3 = *(unsigned int *)this->__pad_0; /*0x63b567*/
    v70 = Type; /*0x63b56d*/
    v4 = (unsigned int *)(*(int (__thiscall **)(ScriptAction *, int *))(v3 + 88))(this, &v63); /*0x63b571*/
    v74[0] = *v4; /*0x63b576*/
    v74[1] = v4[1]; /*0x63b580*/
    v74[2] = v4[2]; /*0x63b59d*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v74, &v61); /*0x63b5a4*/
    v62 += (int)DSurface_ViewBounds.field_4; /*0x63b5c1*/
    v60.Coord3D_field_0x04 = v62; /*0x63b5c5*/
    v61 += DSurface_ViewBounds.field_0; /*0x63b5ce*/
    *(unsigned int *)v60.__pad_0 = v61; /*0x63b5d2*/
    v5 = PackRGBFromBytes((ObjectClass *)&byte_A83CD9); /*0x63b5dd*/
    if ( this ) /*0x63b5df*/
    {
      v6 = (BuildingClass *)PackRGBFromBytes(&stru_A80220); /*0x63b5f1*/
      if ( *(unsigned int *)&stru_AC4B30.__pad_70[80] ) /*0x63b5f5*/
      {
        if ( Array::FindValue(*(Array **)&stru_AC4B30.__pad_70[80], (int)this) != -1 ) /*0x63b600*/
          goto LABEL_7; /*0x63b600*/
      }
      else if ( this->__pad_78[11] ) /*0x63b604*/
      {
        goto LABEL_7; /*0x63b60c*/
      }
    }
    v6 = (BuildingClass *)v5; /*0x63b60e*/
  LABEL_7:
    if ( Type ) /*0x63b612*/
      v7 = Type->field_14; /*0x63b618*/
    else
      v7 = 0; /*0x63b614*/
    v53 = (int)v7 > 0; /*0x63b622*/
    v8 = (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 388))(this) != 5 /*0x63b653*/
      && !BuildingClass::IsIdleWithNoCaptives((BuildingClass *)this)
      && (v53 || this->__pad_78[11]);
    v57 = 4; /*0x63b657*/
    if ( Type && (*(unsigned int *)(*(unsigned int *)Type->__pad_0 + 172) == 28 || *(unsigned int *)(*(unsigned int *)Type->__pad_0 + 180) == 28) ) /*0x63b67a*/
    {
      v9 = &Type->__pad_18[5]; /*0x63b680*/
      qmemcpy(v75, v9, 0x6Cu); /*0x63b696*/
      v9 += 108; /*0x63b696*/
      v75[54] = *(unsigned short *)v9; /*0x63b698*/
      IDA_LOBYTE(v75[55]) = v9[2]; /*0x63b69e*/
      v55 = *(Coord3D *)GetScenarioClassActionCoords(&v63, v75); /*0x63b6a6*/
      v10 = Coord3D::Set(&v60, -1, -1, -1); /*0x63b6c2*/
      if ( (uint8_t)Coord3D::Equals(&v55, v10) && this ) /*0x63b6d7*/
      {
        v11 = (unsigned int *)(*(int (__thiscall **)(ScriptAction *, ArrayClass **))(*(unsigned int *)this->__pad_0 + 88))(this, &v70); /*0x63b6e3*/
        *(unsigned int *)v55.__pad_0 = *v11; /*0x63b6e8*/
        v55.Coord3D_field_0x04 = v11[1]; /*0x63b6ef*/
        Coord3D_field_0x08 = v11[2]; /*0x63b6f3*/
      }
      else
      {
        Coord3D_field_0x08 = v55.Coord3D_field_0x08; /*0x63b6f8*/
      }
      v68 = Coord3D_field_0x08; /*0x63b704*/
      v67 = *(Coord2D *)v55.__pad_0; /*0x63b708*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v67, &v57); /*0x63b720*/
      v13 = (char *)DSurface_ViewBounds.field_4 + v58; /*0x63b739*/
      v14 = (ArrayClass *)(DSurface_ViewBounds.field_0 + v57); /*0x63b73f*/
      v58 += (int)DSurface_ViewBounds.field_4; /*0x63b741*/
      Viewport = (Coord3D *)Display::GetViewport(&v72.X); /*0x63b745*/
      v55 = *Viewport; /*0x63b74c*/
      v56 = *(unsigned int *)Viewport[1].__pad_0; /*0x63b76f*/
      v16 = ComputeBounds(&v72, 6, v61, v62); /*0x63b778*/
      v63 = *v16; /*0x63b77f*/
      v64 = v16[1]; /*0x63b787*/
      v65 = v16[2]; /*0x63b78e*/
      v66 = v16[3]; /*0x63b79b*/
      (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63b7ab*/
                                                                               + 84))(
        DSurface_Composite,
        &v55,
        &v63,
        v6);
      v17 = -1; /*0x63b7ae*/
      do /*0x63b7cc*/
        DrawTacticalLine2D(v17++, (int)v6, v61, v62, (int)v14, (int)v13, 0); /*0x63b7c3*/
      while ( v17 <= 1 ); /*0x63b7cc*/
      if ( IDA_SLOBYTE(v75[6]) == 11 ) /*0x63b7d9*/
      {
        v18 = Memory::Alloc76(); /*0x63b7db*/
      }
      else
      {
        if ( IDA_SLOBYTE(v75[6]) != 29 ) /*0x63b7e5*/
        {
  LABEL_32:
          v24 = (Coord3D *)Display::GetViewport(&v72.X); /*0x63b8ac*/
          v55 = *v24; /*0x63b8b7*/
          v56 = *(unsigned int *)v24[1].__pad_0; /*0x63b8d5*/
          v25 = ComputeBounds(&v72, 6, (int)v14, (int)v13); /*0x63b8de*/
          v63 = *v25; /*0x63b8e5*/
          v64 = v25[1]; /*0x63b8ed*/
          v65 = v25[2]; /*0x63b8f4*/
          v66 = v25[3]; /*0x63b901*/
          IDA_LOBYTE(updated) = (*(char (__thiscall **)(AudioStream *, Coord3D *, int *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 + 84))( /*0x63b911*/
                              DSurface_Composite,
                              &v55,
                              &v63,
                              v6);
          return updated; /*0x63b91e*/
        }
        v18 = Factory::IdleHandler(); /*0x63b7eb*/
      }
      if ( v18 != -1 ) /*0x63b7f3*/
      {
        *(unsigned int *)v60.__pad_0 = v61; /*0x63b801*/
        v70 = v14; /*0x63b813*/
        v71 = v13; /*0x63b817*/
        v60.Coord3D_field_0x04 = v62; /*0x63b81b*/
        v19 = Coord2D::Sub((Coord2D *)&v60, (int *)v55.__pad_0, &v70); /*0x63b81f*/
        Vector::TwoDMagnitudeMath(v19); /*0x63b826*/
        if ( v20 >= 37 ) /*0x63b82e*/
        {
          v21 = (int)&v70->__pad_0[*(unsigned int *)v60.__pad_0] / 2 - 10; /*0x63b857*/
          v22 = (int)&v71[v60.Coord3D_field_0x04] / 2 - 10; /*0x63b85a*/
          v23 = Display::GetViewport(&v72.X); /*0x63b85d*/
          v63 = *v23; /*0x63b864*/
          v64 = v23[1]; /*0x63b86f*/
          v65 = v23[2]; /*0x63b878*/
          v66 = v23[3]; /*0x63b886*/
          Rect::Set(&v73, v21, v22, 21, 21); /*0x63b88a*/
          (*(void (__thiscall **)(AudioStream *, int *, Rect *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63b8a5*/
                                                                                + 84))(
            DSurface_Composite,
            &v63,
            &v73,
            v6);
          v13 = (char *)v58; /*0x63b8a8*/
        }
      }
      goto LABEL_32; /*0x63b8a8*/
    }
    if ( !v8 ) /*0x63b921*/
    {
      IDA_LOBYTE(updated) = v53; /*0x63bd19*/
      if ( !v53 ) /*0x63bd1f*/
        return updated; /*0x63bd1f*/
      goto LABEL_55; /*0x63bd1f*/
    }
    v27 = (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 1196))(this); /*0x63b92c*/
    v28 = *(unsigned int *)this->__pad_0; /*0x63b932*/
    IDA_HIBYTE(v59) = v27; /*0x63b937*/
    v54 = (*(int (__thiscall **)(ScriptAction *))(v28 + 1200))(this); /*0x63b945*/
    v29 = (int *)(*(int (__thiscall **)(ScriptAction *, Coord3D *))(*(unsigned int *)this->__pad_0 + 1068))(this, &v55); /*0x63b94f*/
    v63 = *v29; /*0x63b957*/
    v64 = v29[1]; /*0x63b95e*/
    v65 = v29[2]; /*0x63b975*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v63, &v57); /*0x63b979*/
    v30 = this->__pad_78[9]; /*0x63b992*/
    v31 = DSurface_ViewBounds.field_0 + v57; /*0x63b998*/
    v32 = (char *)DSurface_ViewBounds.field_4 + v58; /*0x63b99a*/
    v57 += DSurface_ViewBounds.field_0; /*0x63b99c*/
    v58 += (int)DSurface_ViewBounds.field_4; /*0x63b9a2*/
    if ( v30 ) /*0x63b9a6*/
    {
      v33 = (Coord2D *)Display::GetViewport(&v72.X); /*0x63b9ac*/
      v67 = *v33; /*0x63b9b3*/
      v68 = *(unsigned int *)v33[1].__pad_0; /*0x63b9ca*/
      Coord2D_field_0x04 = v33[1].Coord2D_field_0x04; /*0x63b9d6*/
      v34 = (Coord3D *)ComputeBounds(&v72, 6, v31, (int)v32); /*0x63b9da*/
      v55 = *v34; /*0x63b9e1*/
      v56 = *(unsigned int *)v34[1].__pad_0; /*0x63b9fd*/
      IDA_LOBYTE(updated) = (*(char (__thiscall **)(AudioStream *, Coord2D *, Coord3D *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 + 84))( /*0x63ba0d*/
                          DSurface_Composite,
                          &v67,
                          &v55,
                          v6);
      return updated; /*0x63ba1a*/
    }
    v35 = (Coord2D *)Display::GetViewport(&v72.X); /*0x63ba1f*/
    v67 = *v35; /*0x63ba26*/
    v68 = *(unsigned int *)v35[1].__pad_0; /*0x63ba34*/
    Coord2D_field_0x04 = v35[1].Coord2D_field_0x04; /*0x63ba44*/
    v36 = (Coord3D *)ComputeBounds(&v72, 6, v61, v62); /*0x63ba55*/
    v55 = *v36; /*0x63ba5c*/
    v56 = *(unsigned int *)v36[1].__pad_0; /*0x63ba78*/
    (*(void (__thiscall **)(AudioStream *, Coord2D *, Coord3D *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63ba88*/
                                                                                 + 84))(
      DSurface_Composite,
      &v67,
      &v55,
      v6);
    v37 = -1; /*0x63ba8b*/
    do /*0x63baad*/
      DrawTacticalLine2D(v37++, (int)v6, v61, v62, v31, v58, 0); /*0x63baa4*/
    while ( v37 <= 1 ); /*0x63baad*/
    if ( !IDA_HIBYTE(v59) || v54 ) /*0x63babd*/
    {
      if ( (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 388))(this) == 11 ) /*0x63bae8*/
      {
        v38 = Memory::Alloc76(); /*0x63baee*/
        goto LABEL_44; /*0x63baee*/
      }
    }
    else if ( (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 1204))(this) == 29 ) /*0x63bacd*/
    {
      v38 = Factory::IdleHandler(); /*0x63bad3*/
  LABEL_44:
      if ( v38 != -1 ) /*0x63baf6*/
      {
        v55.Coord3D_field_0x04 = v58; /*0x63bb08*/
        *(unsigned int *)v67.__pad_0 = v61; /*0x63bb0c*/
        *(unsigned int *)v55.__pad_0 = v31; /*0x63bb1e*/
        v67.Coord2D_field_0x04 = v62; /*0x63bb22*/
        v39 = Coord2D::Sub(&v67, &v61, &v55); /*0x63bb26*/
        Vector::TwoDMagnitudeMath(v39); /*0x63bb2d*/
        if ( v40 >= 37 ) /*0x63bb35*/
        {
          v41 = (*(unsigned int *)v55.__pad_0 + *(unsigned int *)v67.__pad_0) / 2 - 10; /*0x63bb61*/
          v42 = (v67.Coord2D_field_0x04 + v55.Coord3D_field_0x04) / 2 - 10; /*0x63bb64*/
          v73 = *(Rect *)Display::GetViewport(&v61); /*0x63bb6e*/
          Rect::Set(&v72, v41, v42, 21, 21); /*0x63bba0*/
          (*(void (__thiscall **)(AudioStream *, Rect *, Rect *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63bbbb*/
                                                                                 + 84))(
            DSurface_Composite,
            &v73,
            &v72,
            v6);
          v31 = v57; /*0x63bbbe*/
        }
      }
    }
    v43 = (Coord3D *)Display::GetViewport(&v72.X); /*0x63bbc2*/
    v44 = v58; /*0x63bbcd*/
    v55 = *v43; /*0x63bbd1*/
    v56 = *(unsigned int *)v43[1].__pad_0; /*0x63bbef*/
    v73 = *(Rect *)ComputeBounds(&v72, 6, v31, v58); /*0x63bbff*/
    (*(void (__thiscall **)(AudioStream *, Coord3D *, Rect *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 + 84))( /*0x63bc3a*/
      DSurface_Composite,
      &v55,
      &v73,
      v6);
    if ( v54 ) /*0x63bc43*/
    {
      v55 = *(Coord3D *)(*(int (__thiscall **)(ScriptAction *, Coord2D *))(*(unsigned int *)this->__pad_0 + 1208))(this, &v67); /*0x63bc5b*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v55, (int *)v60.__pad_0); /*0x63bc7d*/
      v45 = DSurface_ViewBounds.field_0 + *(unsigned int *)v60.__pad_0; /*0x63bc98*/
      v60.Coord3D_field_0x04 += (int)DSurface_ViewBounds.field_4; /*0x63bc9a*/
      DrawTacticalFillScanline( /*0x63bcad*/
        3,
        (int)v6,
        v31,
        v58,
        DSurface_ViewBounds.field_0 + *(unsigned int *)v60.__pad_0,
        v60.Coord3D_field_0x04);
      if ( (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 1204))(this) == 29 /*0x63bcca*/
        && Factory::IdleHandler() != -1 )
      {
        BuildingClass::DrawSelectionBlip(v6, v31, v58, v45, v60.Coord3D_field_0x04); /*0x63bcda*/
      }
      IDA_LOBYTE(updated) = DSurface::DrawMarker((DSurface *)v6, v45, v60.Coord3D_field_0x04); /*0x63bce7*/
      return updated; /*0x63bcf6*/
    }
    IDA_LOBYTE(updated) = v53; /*0x63bcf7*/
    if ( !v53 ) /*0x63bcfd*/
      return updated; /*0x63bcfd*/
    v60.Coord3D_field_0x04 = v44; /*0x63bd03*/
    Type = v70; /*0x63bd07*/
    *(unsigned int *)v60.__pad_0 = v31; /*0x63bd0b*/
    v57 = 3; /*0x63bd0f*/
  LABEL_55:
    v46 = (ArrayClass *)ArrayClass::GetAt_Wrap(Type, 0); /*0x63bd25*/
    v70 = v46; /*0x63bd37*/
    ScreenPos = ScriptAction::GetScreenPos((ScriptAction *)v46, &v55); /*0x63bd3b*/
    v48 = *ScreenPos; /*0x63bd40*/
    v61 = *ScreenPos; /*0x63bd45*/
    v62 = ScreenPos[1]; /*0x63bd4c*/
    TypeEntry = (const void *)BuildingClass::GetTypeEntry((BuildingClass *)v46, (int)this); /*0x63bd50*/
    v50 = TypeEntry; /*0x63bd55*/
    if ( TypeEntry ) /*0x63bd59*/
    {
      v51 = ActionScenarioClassCoordToScreen((int *)v55.__pad_0, TypeEntry, (int)this); /*0x63bd62*/
      v61 = *v51; /*0x63bd69*/
      v48 = v61; /*0x63bd6d*/
      v62 = v51[1]; /*0x63bd72*/
    }
    DSurface::DrawMarker((DSurface *)v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04); /*0x63bd82*/
    DrawTacticalFillScanline(v57, (int)v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04, v48, v62); /*0x63bd9d*/
    if ( v50 ) /*0x63bda4*/
      DSurface::DrawMarker((DSurface *)v6, v48, v62); /*0x63bdae*/
    qmemcpy(v75, (const void *)BuildingClass::CopyTypeDataForRender((BuildingClass *)v70, (int)v76, (int)this), 0x6Fu); /*0x63bdd3*/
    updated = BuildingClass::updateAnimationState((char *)v75); /*0x63bddf*/
    if ( updated != -1 ) /*0x63bde7*/
      IDA_LOBYTE(updated) = BuildingClass::DrawSelectionBlip(v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04, v61, v62); /*0x63bdff*/
    return updated; /*0x63b914*/
}
} // namespace gamemd

// 0x63CE40
namespace gamemd {
int ScriptAction::DrawPlacementMarker() {
    int DrawColor; // edi
    int *Viewport; // eax
    int v4; // edx
    int v5; // eax
    unsigned int *ScenarioClassActionCoords; // eax
    int v8[2]; // [esp+8h] [ebp-44h] BYREF
    unsigned int v9[3]; // [esp+10h] [ebp-3Ch] BYREF
    int v10[4]; // [esp+1Ch] [ebp-30h] BYREF
    unsigned int v11[4]; // [esp+2Ch] [ebp-20h] BYREF
    unsigned int v12[4]; // [esp+3Ch] [ebp-10h] BYREF

    DrawColor = BuildingClass::GetDrawColor((int)this); /*0x63ce50*/
    Viewport = Display::GetViewport(v10); /*0x63ce52*/
    v12[0] = *Viewport; /*0x63ce59*/
    v12[1] = Viewport[1]; /*0x63ce60*/
    v12[2] = Viewport[2]; /*0x63ce67*/
    v4 = Viewport[3]; /*0x63ce6b*/
    v5 = this->ScriptAction_field_0x4[0]; /*0x63ce6e*/
    v12[3] = v4; /*0x63ce71*/
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, *(unsigned char **)(*(unsigned int *)v5 + 4)); /*0x63ce7e*/
    v9[0] = *ScenarioClassActionCoords; /*0x63ce85*/
    v9[1] = ScenarioClassActionCoords[1]; /*0x63ce8c*/
    v9[2] = ScenarioClassActionCoords[2]; /*0x63cea3*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, v8); /*0x63cea7*/
    v8[0] += DSurface_ViewBounds.field_0; /*0x63cec7*/
    v11[0] = v8[0] - 4 + 1; /*0x63cedb*/
    v11[1] = (char *)DSurface_ViewBounds.field_4 + v8[1] - 3; /*0x63cedf*/
    v11[2] = 6; /*0x63cef5*/
    v11[3] = 6; /*0x63cef9*/
    return (*(int (__thiscall **)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)DSurface_Composite->__pad_0 + 16))( /*0x63cf07*/
             DSurface_Composite,
             v12,
             v11,
             DrawColor);
}
} // namespace gamemd

// 0x65AD50
namespace gamemd {
int Array::Contains(int a2) {
    void *Array_field_0xE8; // edx
    int result; // eax
    unsigned int *Array_field_0xE4; // ecx

    if ( a2 && (Array_field_0xE8 = this->Array_field_0xE8, result = 0, (int)Array_field_0xE8 > 0) ) /*0x65ad63*/
    {
      Array_field_0xE4 = this->Array_field_0xE4; /*0x65ad65*/
      while ( *Array_field_0xE4 != a2 ) /*0x65ad6d*/
      {
        ++result; /*0x65ad6f*/
        ++Array_field_0xE4; /*0x65ad70*/
        if ( result >= (int)Array_field_0xE8 ) /*0x65ad75*/
          goto LABEL_6; /*0x65ad75*/
      }
    }
    else
    {
  LABEL_6:
      result = -1; /*0x65ad77*/
    }
    IDA_LOBYTE(result) = result != -1; /*0x65ad82*/
    return result; /*0x65ad84*/
}
} // namespace gamemd

// 0x6DD5B0
namespace gamemd {
const char * ScriptAction::ParseScriptActionParams() {
    char *v2; // eax
    char *v3; // eax
    int v4; // ebx
    char *v5; // esi
    int v6; // eax
    const char *v7; // eax
    char i; // cl
    unsigned int v9; // kr10_4
    unsigned int v10; // ecx
    char *v11; // eax
    char *v12; // eax
    char *v13; // eax
    char *v14; // eax
    const char *result; // eax
    char Destination[24]; // [esp+14h] [ebp-1Ch] BYREF
    char v17; // [esp+2Ch] [ebp-4h]

    *(unsigned int *)this->__pad_90 = 0; /*0x6dd5c1*/
    v2 = strtok(0, Str); /*0x6dd5c7*/
    *(unsigned int *)&this->__pad_28[4] = atoi(v2); /*0x6dd5d8*/
    v3 = strtok(0, Str); /*0x6dd5db*/
    v4 = atoi(v3); /*0x6dd5e6*/
    v5 = strtok(0, Str); /*0x6dd5f7*/
    v6 = atoi(v5); /*0x6dd5fa*/
    switch ( v4 ) /*0x6dd60d*/
    {
      case 0: /*0x6dd60d*/
      case 11: /*0x6dd60d*/
        *(unsigned int *)this->__pad_90 = v6; /*0x6dd614*/
        break; /*0x6dd61a*/
      case 1: /*0x6dd60d*/
      case 5: /*0x6dd60d*/
        if ( v6 == -1 ) /*0x6dd622*/
        {
          this->ScriptAction_field_0x30 = 0; /*0x6dd624*/
        }
        else if ( strlen(v5) >= 3 ) /*0x6dd63b*/
        {
          this->ScriptAction_field_0x30 = TechnoClass::Create(v5); /*0x6dd654*/
        }
        else
        {
          this->ScriptAction_field_0x30 = *(void **)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * v6); /*0x6dd645*/
        }
        break; /*0x6dd627*/
      case 2: /*0x6dd60d*/
        if ( v6 == -1 ) /*0x6dd65f*/
        {
          *(unsigned int *)&this->__pad_34[28] = 0; /*0x6dd661*/
        }
        else if ( strlen(v5) >= 3 ) /*0x6dd678*/
        {
          *(unsigned int *)&this->__pad_34[28] = TagTypeClass::FindOrCreateTriggerType(v5); /*0x6dd691*/
        }
        else
        {
          *(unsigned int *)&this->__pad_34[28] = *(unsigned int *)(FootClass_Array.?[0] + 4 * v6); /*0x6dd682*/
        }
        break; /*0x6dd664*/
      case 3: /*0x6dd60d*/
        if ( v6 == -1 ) /*0x6dd69c*/
        {
          *(unsigned int *)&this->__pad_34[24] = 0; /*0x6dd69e*/
        }
        else if ( strlen(v5) >= 3 ) /*0x6dd6b5*/
        {
          *(unsigned int *)&this->__pad_34[24] = TagTypeClass::FindOrCreate(v5); /*0x6dd6cb*/
        }
        else
        {
          *(unsigned int *)&this->__pad_34[24] = *((unsigned int *)dword_B0E784 + v6); /*0x6dd6bf*/
        }
        break; /*0x6dd6a1*/
      case 4: /*0x6dd60d*/
        if ( v6 == -1 ) /*0x6dd6d3*/
        {
          this->__pad_34[57] = 0; /*0x6dd6d5*/
        }
        else
        {
          v7 = v5; /*0x6dd6de*/
          this->__pad_34[57] = 0; /*0x6dd6e2*/
          if ( v5 ) /*0x6dd6e5*/
          {
            for ( i = *v5; i; i = *++v7 ) /*0x6dd6e7*/
            {
              if ( (uint8_t)i > 0x20u ) /*0x6dd6f1*/
                break; /*0x6dd6f1*/
            }
            if ( *v7 ) /*0x6dd6fb*/
            {
              strncpy(&this->__pad_34[57], v7, 0x1Fu); /*0x6dd704*/
              IDA_LOBYTE(this->ScriptAction_field_0x8C) = 0; /*0x6dd711*/
              v9 = strlen(&this->__pad_34[57]) + 1; /*0x6dd718*/
              v10 = v9 - 1; /*0x6dd71c*/
              if ( v9 != 1 ) /*0x6dd71d*/
              {
                do /*0x6dd726*/
                {
                  if ( this->__pad_34[v10 + 56] > 0x20u ) /*0x6dd723*/
                    break; /*0x6dd723*/
                  --v10; /*0x6dd725*/
                }
                while ( v10 ); /*0x6dd726*/
              }
              this->__pad_34[v10 + 57] = 0; /*0x6dd728*/
            }
          }
        }
        break; /*0x6dd6d9*/
      case 6: /*0x6dd60d*/
        *(unsigned int *)this->__pad_90 = VocClass::FindByName((VocClass *)v5); /*0x6dd7c3*/
        break; /*0x6dd7c9*/
      case 7: /*0x6dd60d*/
        *(unsigned int *)this->__pad_90 = VocClass::FindIndex((VocClass *)v5); /*0x6dd7d5*/
        break; /*0x6dd7db*/
      case 8: /*0x6dd60d*/
        *(unsigned int *)this->__pad_90 = StringList::Find((StringList *)&unk_A83D10, v5); /*0x6dd7eb*/
        break; /*0x6dd7f1*/
      case 9: /*0x6dd60d*/
      case 10: /*0x6dd60d*/
        if ( v5 ) /*0x6dd7f8*/
        {
          strncpy(Destination, v5, 0x18u); /*0x6dd809*/
          v17 = 0; /*0x6dd811*/
        }
        else
        {
          Destination[0] = 0; /*0x6dd7fa*/
        }
        if ( Destination != &this->__pad_34[32] ) /*0x6dd81f*/
        {
          qmemcpy(&this->__pad_34[32], Destination, 0x18u); /*0x6dd82e*/
          this->__pad_34[56] = v17; /*0x6dd830*/
        }
        break; /*0x6dd831*/
      default:
        break;
    }
    v11 = strtok(0, Str); /*0x6dd731*/
    *(unsigned int *)this->__pad_34 = atoi(v11); /*0x6dd74a*/
    v12 = strtok(0, Str); /*0x6dd74d*/
    *(unsigned int *)&this->__pad_34[4] = atoi(v12); /*0x6dd75f*/
    v13 = strtok(0, Str); /*0x6dd762*/
    *(unsigned int *)&this->__pad_34[8] = atoi(v13); /*0x6dd774*/
    v14 = strtok(0, Str); /*0x6dd777*/
    *(unsigned int *)&this->__pad_34[12] = atoi(v14); /*0x6dd789*/
    result = strtok(0, Str); /*0x6dd78c*/
    if ( result ) /*0x6dd796*/
    {
      if ( v4 == 5 || v4 == 9 ) /*0x6dd839*/
      {
        result = (const char *)atoi(result); /*0x6dd7a6*/
        *(unsigned int *)this->__pad_90 = result; /*0x6dd7ae*/
      }
      else if ( v4 == 11 ) /*0x6dd855*/
      {
        result = (const char *)atoi(result); /*0x6dd858*/
        *(unsigned int *)&this->__pad_34[20] = result; /*0x6dd860*/
      }
      else
      {
        result = (const char *)String::To_Waypoint((char *)result); /*0x6dd86d*/
        *(unsigned int *)&this->__pad_34[16] = result; /*0x6dd872*/
      }
    }
    return result; /*0x6dd7b4*/
}
} // namespace gamemd

// 0x6E1830
namespace gamemd {
unsigned int * ScriptAction::ReadParameter() {
    int v1; // esi
    int v2; // eax
    Cell *v3; // esi
    unsigned int *result; // eax
    int16_t v5[2]; // [esp+4h] [ebp-4h] BYREF

    v1 = *(unsigned int *)this->__pad_0 / 256; /*0x6e184b*/
    v2 = this->ScriptAction_field_0x4[0] / 256; /*0x6e184e*/
    v5[0] = v1; /*0x6e1851*/
    v5[1] = v2; /*0x6e1856*/
    if ( (unsigned short)v1 == *(unsigned short *)dword_B0E680 && (unsigned short)v2 == *(unsigned short *)&dword_B0E680[2] ) /*0x6e1875*/
      return 0; /*0x6e189e*/
    v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v5); /*0x6e1886*/
    result = Cell::IsBridge(v3); /*0x6e188a*/
    if ( !result ) /*0x6e1891*/
      return CellClass::FindInfantry((CellClass *)v3, 0); /*0x6e1896*/
    return result; /*0x6e189b*/
}
} // namespace gamemd

// 0x6E3B60
namespace gamemd {
int ScriptAction::GetActionTypeInfo() {
    int result; // eax

    switch ( (unsigned int)this ) /*0x6e3b76*/
    {
      case 1u: /*0x6e3b76*/
      case 2u: /*0x6e3b76*/
      case 3u: /*0x6e3b76*/
      case 6u: /*0x6e3b76*/
      case 9u: /*0x6e3b76*/
      case 0xDu: /*0x6e3b76*/
      case 0xEu: /*0x6e3b76*/
      case 0x24u: /*0x6e3b76*/
      case 0x25u: /*0x6e3b76*/
      case 0x26u: /*0x6e3b76*/
      case 0x4Au: /*0x6e3b76*/
      case 0x4Bu: /*0x6e3b76*/
      case 0x71u: /*0x6e3b76*/
      case 0x77u: /*0x6e3b76*/
      case 0x78u: /*0x6e3b76*/
      case 0x79u: /*0x6e3b76*/
      case 0x7Au: /*0x6e3b76*/
      case 0x7Bu: /*0x6e3b76*/
      case 0x7Cu: /*0x6e3b76*/
      case 0x7Eu: /*0x6e3b76*/
      case 0x82u: /*0x6e3b76*/
        result = 13; /*0x6e3b89*/
        break; /*0x6e3b8e*/
      case 4u: /*0x6e3b76*/
      case 5u: /*0x6e3b76*/
      case 7u: /*0x6e3b76*/
      case 0x69u: /*0x6e3b76*/
        result = 12; /*0x6e3b95*/
        break; /*0x6e3b9a*/
      case 8u: /*0x6e3b76*/
      case 0x11u: /*0x6e3b76*/
      case 0x12u: /*0x6e3b76*/
      case 0x3Bu: /*0x6e3b76*/
      case 0x3Fu: /*0x6e3b76*/
      case 0x40u: /*0x6e3b76*/
      case 0x41u: /*0x6e3b76*/
      case 0x42u: /*0x6e3b76*/
      case 0x59u: /*0x6e3b76*/
      case 0x5Au: /*0x6e3b76*/
      case 0x5Eu: /*0x6e3b76*/
      case 0x5Fu: /*0x6e3b76*/
      case 0x60u: /*0x6e3b76*/
      case 0x65u: /*0x6e3b76*/
      case 0x66u: /*0x6e3b76*/
      case 0x6Du: /*0x6e3b76*/
      case 0x70u: /*0x6e3b76*/
      case 0x74u: /*0x6e3b76*/
      case 0x80u: /*0x6e3b76*/
      case 0x87u: /*0x6e3b76*/
      case 0x89u: /*0x6e3b76*/
      case 0x8Cu: /*0x6e3b76*/
        result = 9; /*0x6e3c01*/
        break; /*0x6e3c06*/
      case 0xAu: /*0x6e3b76*/
      case 0x64u: /*0x6e3b76*/
      case 0x75u: /*0x6e3b76*/
        result = 2; /*0x6e3bb9*/
        break; /*0x6e3bbe*/
      case 0xBu: /*0x6e3b76*/
      case 0x67u: /*0x6e3b76*/
        result = 39; /*0x6e3b7d*/
        break; /*0x6e3b82*/
      case 0xCu: /*0x6e3b76*/
      case 0x16u: /*0x6e3b76*/
      case 0x35u: /*0x6e3b76*/
      case 0x36u: /*0x6e3b76*/
        result = 11; /*0x6e3bad*/
        break; /*0x6e3bb2*/
      case 0x13u: /*0x6e3b76*/
      case 0x62u: /*0x6e3b76*/
        result = 3; /*0x6e3bbf*/
        break; /*0x6e3bc4*/
      case 0x14u: /*0x6e3b76*/
        result = 1; /*0x6e3bb3*/
        break; /*0x6e3bb8*/
      case 0x15u: /*0x6e3b76*/
        result = 4; /*0x6e3bc5*/
        break; /*0x6e3bca*/
      case 0x19u: /*0x6e3b76*/
      case 0x1Au: /*0x6e3b76*/
      case 0x1Bu: /*0x6e3b76*/
      case 0x27u: /*0x6e3b76*/
      case 0x2Cu: /*0x6e3b76*/
      case 0x49u: /*0x6e3b76*/
      case 0x4Cu: /*0x6e3b76*/
      case 0x4Du: /*0x6e3b76*/
      case 0x4Eu: /*0x6e3b76*/
      case 0x4Fu: /*0x6e3b76*/
      case 0x54u: /*0x6e3b76*/
      case 0x6Eu: /*0x6e3b76*/
      case 0x72u: /*0x6e3b76*/
      case 0x7Fu: /*0x6e3b76*/
      case 0x8Bu: /*0x6e3b76*/
      case 0x8Eu: /*0x6e3b76*/
      case 0x8Fu: /*0x6e3b76*/
      case 0x90u: /*0x6e3b76*/
        result = 10; /*0x6e3c19*/
        break; /*0x6e3c1e*/
      case 0x1Cu: /*0x6e3b76*/
      case 0x1Du: /*0x6e3b76*/
        result = 22; /*0x6e3bdd*/
        break; /*0x6e3be2*/
      case 0x1Eu: /*0x6e3b76*/
      case 0x55u: /*0x6e3b76*/
      case 0x56u: /*0x6e3b76*/
      case 0x57u: /*0x6e3b76*/
        result = 16; /*0x6e3b8f*/
        break; /*0x6e3b94*/
      case 0x21u: /*0x6e3b76*/
      case 0x22u: /*0x6e3b76*/
      case 0x86u: /*0x6e3b76*/
        result = 17; /*0x6e3b83*/
        break; /*0x6e3b88*/
      case 0x23u: /*0x6e3b76*/
        result = 15; /*0x6e3be9*/
        break; /*0x6e3bee*/
      case 0x28u: /*0x6e3b76*/
        result = 21; /*0x6e3bef*/
        break; /*0x6e3bf4*/
      case 0x29u: /*0x6e3b76*/
        result = 23; /*0x6e3bf5*/
        break; /*0x6e3bfa*/
      case 0x2Au: /*0x6e3b76*/
        result = 24; /*0x6e3c07*/
        break; /*0x6e3c0c*/
      case 0x2Bu: /*0x6e3b76*/
        result = 27; /*0x6e3c0d*/
        break; /*0x6e3c12*/
      case 0x30u: /*0x6e3b76*/
        result = 30; /*0x6e3c13*/
        break; /*0x6e3c18*/
      case 0x34u: /*0x6e3b76*/
        result = 25; /*0x6e3c1f*/
        break; /*0x6e3c24*/
      case 0x37u: /*0x6e3b76*/
        result = 28; /*0x6e3c25*/
        break; /*0x6e3c2a*/
      case 0x38u: /*0x6e3b76*/
      case 0x39u: /*0x6e3b76*/
        result = 29; /*0x6e3be3*/
        break; /*0x6e3be8*/
      case 0x3Au: /*0x6e3b76*/
        result = 31; /*0x6e3c2b*/
        break; /*0x6e3c30*/
      case 0x46u: /*0x6e3b76*/
        result = 26; /*0x6e3bcb*/
        break; /*0x6e3bd0*/
      case 0x47u: /*0x6e3b76*/
      case 0x48u: /*0x6e3b76*/
        result = 33; /*0x6e3c31*/
        break; /*0x6e3c36*/
      case 0x50u: /*0x6e3b76*/
      case 0x6Bu: /*0x6e3b76*/
        result = 34; /*0x6e3ba1*/
        break; /*0x6e3ba6*/
      case 0x58u: /*0x6e3b76*/
        result = 35; /*0x6e3ba7*/
        break; /*0x6e3bac*/
      case 0x63u: /*0x6e3b76*/
        result = 38; /*0x6e3bfb*/
        break; /*0x6e3c00*/
      case 0x68u: /*0x6e3b76*/
        result = 40; /*0x6e3b9b*/
        break; /*0x6e3ba0*/
      case 0x6Au: /*0x6e3b76*/
      case 0x73u: /*0x6e3b76*/
        result = 43; /*0x6e3bd1*/
        break; /*0x6e3bd6*/
      case 0x6Cu: /*0x6e3b76*/
        result = 44; /*0x6e3c37*/
        break; /*0x6e3c3c*/
      case 0x7Du: /*0x6e3b76*/
        result = 45; /*0x6e3c3d*/
        break; /*0x6e3c42*/
      case 0x81u: /*0x6e3b76*/
      case 0x84u: /*0x6e3b76*/
      case 0x85u: /*0x6e3b76*/
        result = 46; /*0x6e3bd7*/
        break; /*0x6e3bdc*/
      case 0x83u: /*0x6e3b76*/
        result = 47; /*0x6e3c43*/
        break; /*0x6e3c48*/
      default:
        result = 0; /*0x6e3c49*/
        break; /*0x6e3c49*/
    }
    return result; /*0x6e3b82*/
}
} // namespace gamemd

// 0x6E4790
namespace gamemd {
char * ScriptAction::CopyStringField(char *Destination, char *Source) {
    if ( Source ) /*0x6e4799*/
    {
      strncpy(Destination, Source, 0x1Fu); /*0x6e47a7*/
      *(Destination + 31) = 0; /*0x6e47af*/
      return Destination; /*0x6e47b3*/
    }
    else
    {
      *Destination = 0; /*0x6e479b*/
      return Destination; /*0x6e479d*/
    }
}
} // namespace gamemd

// 0x6E6AB0
namespace gamemd {
unsigned char * ScriptAction::GetWaypointCoords(unsigned int *a2) {
    if ( a2 ) /*0x6e6aba*/
    {
      if ( (*(int (__thiscall **)(unsigned int *))(*a2 + 44))(a2) == 11 ) /*0x6e6ac6*/
      {
        IDA_LOBYTE(this->ScriptAction_field_0x4[0]) = 11; /*0x6e6ac8*/
        *(unsigned int *)this->__pad_0 = (int16_t)a2[9] + 1000 * (int16_t)IDA_HIWORD(a2[9]); /*0x6e6ae7*/
      }
      else
      {
        IDA_LOBYTE(this->ScriptAction_field_0x4[0]) = 52; /*0x6e6af2*/
        *(unsigned int *)this->__pad_0 = (*(int (__stdcall **)(unsigned int *))(a2[1] + 16))(a2 + 1); /*0x6e6afc*/
      }
      return this->__pad_0; /*0x6e6ae9*/
    }
    else
    {
      IDA_LOBYTE(this->ScriptAction_field_0x4[0]) = 0; /*0x6e6b05*/
      *(unsigned int *)this->__pad_0 = 0; /*0x6e6b09*/
      return this->__pad_0; /*0x6e6b0f*/
    }
}
} // namespace gamemd

// 0x6FFBE0
namespace gamemd {
int ScriptAction::ExecuteMissionCmd() {
    bool v2; // al
    int v3; // edi
    unsigned char *WaypointCoords; // eax
    int result; // eax
    unsigned int v6; // ebx
    int v7; // eax
    unsigned char *v8; // eax
    int v9[27]; // [esp-70h] [ebp-108h] BYREF
    int v10; // [esp-4h] [ebp-9Ch]
    unsigned int v11[2]; // [esp+10h] [ebp-88h] BYREF
    unsigned char v12[8]; // [esp+18h] [ebp-80h] BYREF
    unsigned char v13[8]; // [esp+20h] [ebp-78h] BYREF
    char v14[108]; // [esp+28h] [ebp-70h] BYREF
    int16_t v15; // [esp+94h] [ebp-4h]
    char v16; // [esp+96h] [ebp-2h]
    int v17; // [esp+9Ch] [ebp+4h]
    unsigned int *v18; // [esp+A0h] [ebp+8h]
    unsigned int *v19; // [esp+A4h] [ebp+Ch]
    unsigned int *v20; // [esp+A8h] [ebp+10h]

    v2 = Render_Draw_731BF0() && (*((uint8_t (__thiscall **)(TechnoClass *))this->vtable1 + 304))(this); /*0x6ffc03*/
    v3 = v17; /*0x6ffc09*/
    if ( (v17 == 2 || v17 == 1) && v2 ) /*0x6ffc1c*/
      v3 = 29; /*0x6ffc1e*/
    if ( (uint8_t)FactoryClass::GetFlag() ) /*0x6ffc23*/
    {
      ScriptAction::GetWaypointCoords((ScriptAction *)&v9[26], v20); /*0x6ffc3d*/
      ScriptAction::GetWaypointCoords((ScriptAction *)&v9[24], v19); /*0x6ffc4f*/
      ScriptAction::GetWaypointCoords((ScriptAction *)&v9[22], v18); /*0x6ffc61*/
      WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v12, this); /*0x6ffc6c*/
      ScriptAction::InitActionFields( /*0x6ffc8e*/
        v14,
        (int)dword_A83D4C->Object_field_0x30,
        *(unsigned int *)WaypointCoords,
        WaypointCoords[4],
        v3,
        v9[22],
        v9[23],
        v9[24],
        v9[25],
        v9[26],
        v10);
      qmemcpy(v9, v14, sizeof(v9)); /*0x6ffca4*/
      IDA_LOWORD(v10) = v15; /*0x6ffca6*/
      IDA_BYTE2(v10) = v16; /*0x6ffca8*/
      Object_Helper_637DD0( /*0x6ffca9*/
        v9[0],
        v9[1],
        v9[2],
        v9[3],
        v9[4],
        v9[5],
        v9[6],
        v9[7],
        v9[8],
        v9[9],
        v9[10],
        v9[11],
        v9[12],
        v9[13],
        v9[14],
        v9[15],
        v9[16],
        v9[17],
        v9[18],
        v9[19],
        v9[20],
        v9[21],
        v9[22],
        v9[23],
        v9[24],
        v9[25],
        v9[26],
        v10);
      IDA_LOBYTE(result) = 0; /*0x6ffcae*/
    }
    else
    {
      if ( g_MoveFeedback ) /*0x6ffccb*/
      {
        switch ( v3 ) /*0x6ffcd4*/
        {
          case 10: /*0x6ffcd4*/
            (*((void (__thiscall **)(TechnoClass *))this->vtable1 + 215))(this); /*0x6ffcda*/
            break;
          case 1: /*0x6ffcd4*/
            (*((void (__thiscall **)(TechnoClass *, unsigned int *))this->vtable1 + 220))(this, v18); /*0x6ffcef*/
            break;
          case 2: /*0x6ffcd4*/
          case 29: /*0x6ffcd4*/
            (*((void (__thiscall **)(TechnoClass *))this->vtable1 + 218))(this); /*0x6ffd9f*/
            break;
          case 7: /*0x6ffcd4*/
            (*((void (__thiscall **)(TechnoClass *))this->vtable1 + 214))(this); /*0x6ffd15*/
            break;
          case 8: /*0x6ffcd4*/
            (*((void (__thiscall **)(TechnoClass *))this->vtable1 + 217))(this); /*0x6ffd29*/
            break;
          case 16: /*0x6ffcd4*/
            (*((void (__thiscall **)(TechnoClass *))this->vtable1 + 219))(this); /*0x6ffd3a*/
            break;
          default:
            if ( *(int *)((*((int (__thiscall **)(TechnoClass *))this->vtable1 + 33))(this) + 1200) > 0 ) /*0x6ffd59*/
            {
              v6 = Random::State(&Randomizer_Global); /*0x6ffd65*/
              v7 = (*((int (__thiscall **)(TechnoClass *))this->vtable1 + 33))(this); /*0x6ffd6b*/
              v11[0] = this->RadioClass; /*0x6ffd7b*/
              (*(void (__thiscall **)(TechnoClass *, unsigned int))(v11[0] + 852))( /*0x6ffd93*/
                this,
                *(unsigned int *)(*(unsigned int *)(v7 + 1188) + 4 * (v6 % *(unsigned int *)(v7 + 1200))));
            }
            break;
        }
      }
      ScriptAction::GetWaypointCoords((ScriptAction *)v11, v19); /*0x6ffdb1*/
      ScriptAction::GetWaypointCoords((ScriptAction *)v12, v18); /*0x6ffdbb*/
      v8 = ScriptAction::GetWaypointCoords((ScriptAction *)v13, this); /*0x6ffdce*/
      Object_Init(v3, (int)v12, *(unsigned int *)v8, v8[4], (int)v11); /*0x6ffde6*/
      IDA_LOBYTE(result) = 1; /*0x6ffdee*/
    }
    return result; /*0x6ffcb0*/
}
} // namespace gamemd

// 0x721270
namespace gamemd {
char * ScriptAction::GetArgumentString(int a2) {
    if ( a2 < 0 || a2 >= this->ScriptAction_field_0x24 ) /*0x72127b*/
      return g_Str_none; /*0x721286*/
    else
      return *(char **)(this->ScriptAction_field_0x18[0] + 4 * a2); /*0x721280*/
}
} // namespace gamemd

