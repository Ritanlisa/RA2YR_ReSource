// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/utility_ext.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "house/house.hpp"
#include "misc/misc_ext.hpp"
#include "misc/super_weapon.hpp"
#include "network/session.hpp"
#include "object/abstract.hpp"
#include "object/mission.hpp"
#include "object/techno.hpp"
#include "render/display.hpp"
#include "structure/building.hpp"
#include "system/buffer_io_file.hpp"
#include "system/cc_file.hpp"
#include "system/cell.hpp"
#include "system/ini_class.hpp"
#include "system/scenario.hpp"
#include "team/campaign.hpp"
#include "team/script.hpp"
#include "team/taction.hpp"
#include "team/tag.hpp"
#include "team/team.hpp"
#include "team/team_type.hpp"
#include "team/tevent.hpp"
#include "team/trigger.hpp"
#include "type/abstract_type.hpp"
#include "ui/ui_ext.hpp"

// 0x41FB10
namespace gamemd {
char TriggerTypeClass::SaveToINI(char *a2, int a3) {
    void *v3; // ebp
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // eax
    unsigned int v8; // edi
    char *v9; // ebx
    bool v10; // zf
    void *v12; // [esp+10h] [ebp-40Ch]
    void *v13; // [esp+14h] [ebp-408h]
    void *v14; // [esp+18h] [ebp-404h]
    char Buffer[512]; // [esp+1Ch] [ebp-400h] BYREF
    char Source[512]; // [esp+21Ch] [ebp-200h] BYREF

    v12 = off_818114; /*0x41fb20*/
    v13 = off_818114; /*0x41fb24*/
    v3 = off_818114; /*0x41fb28*/
    v14 = off_818114; /*0x41fb2a*/
    v4 = *((unsigned int *)this + 55); /*0x41fb2e*/
    if ( v4 ) /*0x41fb37*/
      v12 = (void *)(v4 + 36); /*0x41fb3c*/
    v5 = *((unsigned int *)this + 56); /*0x41fb40*/
    if ( v5 ) /*0x41fb48*/
      v13 = (void *)(v5 + 36); /*0x41fb4d*/
    if ( *((unsigned int *)this + 40) == 1 ) /*0x41fb58*/
    {
      v6 = *((unsigned int *)this + 42); /*0x41fb65*/
      if ( v6 != -1 ) /*0x41fb6e*/
        v3 = (void *)(*((unsigned int *)dword_A83C9C + v6) + 36); /*0x41fb79*/
    }
    else if ( *((unsigned int *)this + 40) == 2 ) /*0x41fb5b*/
    {
      v3 = off_818118; /*0x41fb5d*/
    }
    v7 = *((unsigned int *)this + 54); /*0x41fb7c*/
    if ( v7 ) /*0x41fb84*/
      v14 = (void *)(v7 + 36); /*0x41fb89*/
    v8 = 0; /*0x41fb8d*/
    v9 = Buffer; /*0x41fb8f*/
    do /*0x41fbb2*/
    {
      sprintf(v9, &g_INI_Key_Civilian.uiNameLabel[15], *((uint8_t *)this + v8++ + 228)); /*0x41fba3*/
      v9 += 2; /*0x41fbac*/
    }
    while ( v8 < 0x20 ); /*0x41fbb2*/
    v10 = *((unsigned char *)this + 212) == 0; /*0x41fbbc*/
    *v9 = 0; /*0x41fbbe*/
    sprintf( /*0x41fc64*/
      Source,
      (const char *const)&g_INI_Key_Civilian.?,
      (char *)this + 100,
      v12,
      v3,
      *((unsigned int *)this + 44),
      *((unsigned int *)this + 38),
      v14,
      Buffer,
      *((unsigned int *)this + 46),
      *((unsigned int *)this + 47),
      *((unsigned int *)this + 48),
      *((unsigned int *)this + 49),
      *((unsigned int *)this + 50),
      *((unsigned int *)this + 51),
      *((unsigned char *)this + 208) != 0,
      0,
      *((unsigned int *)this + 43),
      *((unsigned char *)this + 209) != 0,
      v13,
      *((unsigned char *)this + 210) != 0,
      *((unsigned char *)this + 211) != 0,
      !v10);
    return INIClass::SetString( /*0x41fc8a*/
             a2,
             (uint8_t *)aAitriggertypes,
             (char *)&this->AITriggerTypeClass_field_0x24,
             Source);
}
} // namespace gamemd

// 0x46CCD0
namespace gamemd {
char CampaignClass::GetMapData(uint8_t ***a2) {
    int Int_Overwrite; // eax
    int v4; // ecx
    char Destination[1024]; // [esp+8h] [ebp-400h] BYREF

    INIClass::ResetSection((INIClass *)a2); /*0x46cce3*/
    if ( !(uint8_t)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x46cceb*/
      return 0; /*0x46cdf7*/
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46cd0c*/
                      (bool *)a2,
                      (uint8_t *)&this->idxCd,
                      (uint8_t *)&stru_81AF8C.?[1],
                      this->scenario[28]);
    v4 = this->description[28]; /*0x46cd11*/
    this->scenario[28] = Int_Overwrite; /*0x46cd17*/
    this->description[28] = INIClass::GetBool( /*0x46cd40*/
                              (INIClass *)a2,
                              (uint8_t *)&this->idxCd,
                              (uint8_t *)&stru_81AF8C.?[1],
                              v4);
    INIClass::GetString( /*0x46cd46*/
      (INIClass *)a2,
      (uint8_t *)&this->idxCd,
      (uint8_t *)&stru_81AF8C.?,
      (char *)&this->scenario[29],
      (char *)&this->scenario[29],
      512);
    _strupr((char *)&this->scenario[29]); /*0x46cd4c*/
    if ( (uint8_t)INIClass::ReadBool_Overwrite( /*0x46cd5e*/
                            (int *)a2,
                            (uint8_t *)&this->idxCd,
                            (uint8_t *)&stru_81AF8C.?[17],
                            0) )
    {
      INIClass::GetString( /*0x46cda3*/
        (INIClass *)a2,
        (uint8_t *)&this->idxCd,
        (uint8_t *)&stru_81AF8C.?[5],
        0,
        Destination,
        1024);
      strcat(Destination, &stru_81AF8C.?[8]); /*0x46cdcf*/
      BulkCharToWide(&this->description[29], (uint8_t *)Destination, -1); /*0x46cde2*/
    }
    else
    {
      INIClass::GetStringEx( /*0x46cd7b*/
        (int)a2,
        (uint8_t *)&this->idxCd,
        (uint8_t *)&stru_81AF8C.?[5],
        (wchar_t *)&this->description[29],
        0x80u);
    }
    return 1; /*0x46cd82*/
}
} // namespace gamemd

// 0x46CFC0
namespace gamemd {
int CampaignClass::Stat(int *a2) {
    AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x46cfc9*/
    Power::TimerProcess(this->scenario[28]); /*0x46cfd7*/
    Checksum::AddString((Checksum *)a2, (uint8_t *)&this->scenario[29]); /*0x46cfe5*/
    return Power::TimerProcess(this->description[28]); /*0x46cff8*/
}
} // namespace gamemd

// 0x49E4F0
namespace gamemd {
int CampaignClass::GetValue(unsigned int *a2) {
    int result; // eax

    if ( !*((unsigned char *)this + 96) ) /*0x49e4f3*/
      CampaignClass::LoadFromINI((int)this); /*0x49e4fa*/
    result = *(this + 23); /*0x49e503*/
    *a2 = result; /*0x49e506*/
    IDA_LOBYTE(result) = *((unsigned char *)this + 96); /*0x49e508*/
    return result; /*0x49e50b*/
}
} // namespace gamemd

// 0x49F090
namespace gamemd {
unsigned int * CampaignClass::Constructor_0(int a2, int a3) {
    this->? = 0; /*0x49f09b*/
    this->? = (void *)a2; /*0x49f09e*/
    IDA_LOBYTE(this->?) = 1; /*0x49f0a1*/
    IDA_BYTE1(this->?) = 0; /*0x49f0a5*/
    this->AbstractClass = 0; /*0x49f0a8*/
    if ( a2 ) /*0x49f0ae*/
    {
      if ( a3 ) /*0x49f0b6*/
      {
        this->? = (void *)a3; /*0x49f0b8*/
        return this; /*0x49f0be*/
      }
      this->? = (void *)RA2_OPNEW(4 * a2); /*0x49f0cd*/
      IDA_BYTE1(this->?) = 1; /*0x49f0d0*/
    }
    return this; /*0x49f0bd*/
}
} // namespace gamemd

// 0x509610
namespace gamemd {
char TriggerClass::ValidateTeamTriggerConditions(int a2) {
    int v2; // esi
    int v4; // eax
    int v5; // ebx
    int v6; // edi
    TriggerClass **v7; // esi
    bool v8; // cc
    int v10; // [esp+10h] [ebp-8h]
    int v11; // [esp+14h] [ebp-4h]

    v2 = a2; /*0x509616*/
    if ( !a2 ) /*0x50961f*/
      return 0; /*0x50961f*/
    v4 = *(unsigned int *)(a2 + 228); /*0x509625*/
    if ( !v4 ) /*0x50962d*/
      return 0; /*0x5096f1*/
    v11 = 0; /*0x509639*/
    if ( *(int *)(v4 + 156) > 0 ) /*0x509643*/
    {
      v10 = 168; /*0x509649*/
      do /*0x509655*/
      {
        v5 = *(unsigned int *)(v10 + v4); /*0x509655*/
        if ( !v5 /*0x509667*/
          || !(*(int (__thiscall **)(int, int, int, unsigned int, TriggerClass *))(*(unsigned int *)v5 + 148))(v5, 1, 1, 0, this) )
        {
          if ( *(unsigned int *)&dword_A8B238 ) /*0x509678*/
            return 0; /*0x509678*/
          v6 = FootClass_Array.? - 1; /*0x50967f*/
          if ( FootClass_Array.? - 1 < 0 ) /*0x509684*/
            return 0; /*0x509684*/
          while ( 1 ) /*0x50968c*/
          {
            v7 = (TriggerClass **)*((unsigned int *)FootClass_Array.? + v6); /*0x50968c*/
            if ( v7[135] == this /*0x5096ab*/
              && v5 == ((int (__thiscall *)(unsigned int))(*v7)[1].timer[2])(*((unsigned int *)FootClass_Array.? + v6))
              && TriggerClass::EvaluateObjectForTrigger(a2, (int)v7, (int)this) )
            {
              break; /*0x5096ab*/
            }
            if ( --v6 < 0 ) /*0x5096b5*/
              return 0; /*0x5096b5*/
          }
          v2 = a2; /*0x5096b9*/
        }
        v4 = *(unsigned int *)(v2 + 228); /*0x5096bd*/
        v8 = ++v11 < *(unsigned int *)(v4 + 156); /*0x5096d5*/
        v10 += 8; /*0x5096db*/
      }
      while ( v8 ); /*0x509655*/
    }
    return 1; /*0x5096e5*/
}
} // namespace gamemd

// 0x5AE460
namespace gamemd {
int CampaignClass::ReleaseSubobjectsAndDestruct() {
    void (__thiscall ***v2)(unsigned int, int); // ecx
    void (__thiscall ***v3)(unsigned int, int); // ecx
    void (__thiscall ***v4)(unsigned int, int); // ecx

    v2 = (void (__thiscall ***)(unsigned int, int))this->scenario[35]; /*0x5ae463*/
    if ( v2 ) /*0x5ae46b*/
    {
      (**v2)(v2, 1); /*0x5ae471*/
      this->scenario[35] = 0; /*0x5ae473*/
    }
    v3 = (void (__thiscall ***)(unsigned int, int))this->scenario[34]; /*0x5ae47d*/
    if ( v3 ) /*0x5ae485*/
    {
      (**v3)(v3, 1); /*0x5ae48b*/
      this->scenario[34] = 0; /*0x5ae48d*/
    }
    v4 = (void (__thiscall ***)(unsigned int, int))this->scenario[33]; /*0x5ae497*/
    if ( v4 ) /*0x5ae49f*/
    {
      (**v4)(v4, 1); /*0x5ae4a5*/
      this->scenario[33] = 0; /*0x5ae4a7*/
    }
    return SessionClass::Destruct((SessionClass *)&this->scenario[10]); /*0x5ae4b9*/
}
} // namespace gamemd

// 0x5CF760
namespace gamemd {
int CampaignClass::DeleteAndZero(const char **a2) {
    const char **v2; // ebx
    int v4; // esi
    int v6; // esi
    char *v7; // [esp+Ch] [ebp-4h] BYREF

    v2 = a2; /*0x5cf762*/
    if ( !(uint8_t)String::NotEquals((String *)a2, 0) ) /*0x5cf76e*/
      return 0; /*0x5cf76e*/
    v4 = 0; /*0x5cf77a*/
    if ( this->? <= 0 ) /*0x5cf77e*/
      return 0; /*0x5cf7db*/
    while ( 1 ) /*0x5cf785*/
    {
      String::AssignFromPtr((String *)&v7, v2); /*0x5cf785*/
      String::ToLower((String *)&v7); /*0x5cf78e*/
      String::AssignFromPtr((String *)&a2, (const char **)(*((unsigned int *)this->? + v4) + 4)); /*0x5cf7a1*/
      String::ToLower((String *)&a2); /*0x5cf7aa*/
      if ( (uint8_t)String::Compare((String *)&v7, (const char **)&a2) ) /*0x5cf7b8*/
        break; /*0x5cf7b8*/
      DeleteAndZero((ObjectClass *)&a2); /*0x5cf7c5*/
      DeleteAndZero((ObjectClass *)&v7); /*0x5cf7ce*/
      if ( ++v4 >= this->? ) /*0x5cf7d9*/
        return 0; /*0x5cf7d9*/
    }
    v6 = *((unsigned int *)this->? + v4); /*0x5cf7eb*/
    DeleteAndZero((ObjectClass *)&a2); /*0x5cf7ee*/
    DeleteAndZero((ObjectClass *)&v7); /*0x5cf7f7*/
    return v6; /*0x5cf7db*/
}
} // namespace gamemd

// 0x5CF810
namespace gamemd {
int CampaignClass::Check(uint16_t a2) {
    if ( this->? > a2 ) /*0x5cf81e*/
      return *((unsigned int *)this->? + a2); /*0x5cf828*/
    else
      return 0; /*0x5cf820*/
}
} // namespace gamemd

// 0x6913C0
namespace gamemd {
AbstractClass * ScriptClass::Construct(int a2) {
    int v3; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x6913c3*/
    this->field28 = 0; /*0x6913cc*/
    this->buildingType = (ScriptTypeClass *)a2; /*0x6913d3*/
    this->idxCurrentLine = -1; /*0x6913d6*/
    this->AbstractClass = 0; /*0x6913dd*/
    this->? = 0; /*0x6913e3*/
    this->? = 0; /*0x6913ea*/
    this->? = 0; /*0x6913f1*/
    if ( dword_8872C0 < dword_8872B8 /*0x69142f*/
      || (byte_8872BD || !dword_8872B8)
      && dword_8872C4 > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_8872B0 + 8))(
           &dword_8872B0,
           dword_8872B8 + dword_8872C4,
           0) )
    {
      v3 = dword_8872C0++; /*0x69143c*/
      *((unsigned int *)dword_8872B4 + v3) = this; /*0x69144b*/
    }
    return (AbstractClass *)this; /*0x691450*/
}
} // namespace gamemd

// 0x6914E0
namespace gamemd {
int ScriptClass::PowerDrainUpdate(int a2) {
    AbstractClass::ProcessPower((AbstractClass *)this); /*0x6914e9*/
    return Power::TimerProcess(this->idxCurrentLine); /*0x6914f9*/
}
} // namespace gamemd

// 0x6917F0
namespace gamemd {
char ScriptTypeClass::GetParameter(char *a2) {
    int v3; // esi
    ScriptTypeClass *v4; // ebx
    char Buffer[16]; // [esp+8h] [ebp-90h] BYREF
    char Source[128]; // [esp+18h] [ebp-80h] BYREF

    if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, a2) ) /*0x691802*/
      return 0; /*0x691885*/
    v3 = 0; /*0x69180d*/
    v4 = (ScriptTypeClass *)&this->scriptActions[29]; /*0x69180f*/
    do /*0x691873*/
    {
      sprintf(Buffer, "%d", v3); /*0x691820*/
      String::Trim(Buffer); /*0x69182c*/
      if ( v3 >= this->scriptActions[28] ) /*0x691837*/
      {
        INIClass::ClearSection((int *)a2, (int)&this->arrayIndex, (uint8_t *)Buffer); /*0x691867*/
      }
      else
      {
        ScriptTypeClass::FormatToString(v4, Source); /*0x691840*/
        INIClass::SetString(a2, (uint8_t *)&this->arrayIndex, Buffer, Source); /*0x691855*/
      }
      ++v3; /*0x69186c*/
      v4 = (ScriptTypeClass *)((char *)v4 + 8); /*0x69186d*/
    }
    while ( v3 < 50 ); /*0x691873*/
    return 1; /*0x691877*/
}
} // namespace gamemd

// 0x6918A0
namespace gamemd {
char ScriptTypeClass::GetEvent(uint8_t ***a2) {
    int v3; // edi
    int v4; // eax
    unsigned int v6[2]; // [esp+8h] [ebp-98h] BYREF
    char Buffer[16]; // [esp+10h] [ebp-90h] BYREF
    char Destination[128]; // [esp+20h] [ebp-80h] BYREF

    INIClass::ResetSection((INIClass *)a2); /*0x6918b3*/
    if ( !(uint8_t)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x6918bb*/
      return 0; /*0x691963*/
    v3 = 0; /*0x6918ca*/
    this->scriptActions[28] = 0; /*0x6918cf*/
    do /*0x691951*/
    {
      sprintf(Buffer, "%d", v3); /*0x6918e0*/
      String::Trim(Buffer); /*0x6918ec*/
      if ( INIClass::GetString( /*0x69190f*/
             (INIClass *)a2,
             (uint8_t *)&this->arrayIndex,
             (uint8_t *)Buffer,
             &g_INI_DefaultBuffer,
             Destination,
             128) > 0 )
      {
        ScriptTypeClass::SetField((ScriptTypeClass *)v6, Destination); /*0x69191a*/
        v4 = this->scriptActions[28]; /*0x69191f*/
        if ( v4 < 50 ) /*0x691928*/
        {
          this->scriptActions[2 * v4 + 29] = v6[0]; /*0x69192e*/
          this->scriptActions[2 * v4 + 30] = v6[1]; /*0x691939*/
          ++this->scriptActions[28]; /*0x691947*/
        }
      }
      ++v3; /*0x69194d*/
    }
    while ( v3 < 50 ); /*0x691951*/
    return 1; /*0x691955*/
}
} // namespace gamemd

// 0x691E00
namespace gamemd {
int ScriptTypeClass::PowerDrainUpdate(int *a2) {
    AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x691e09*/
    return Power::TimerProcess(this->scriptActions[28]); /*0x691e1c*/
}
} // namespace gamemd

// 0x691F90
namespace gamemd {
int ScriptTypeClass::GetAuxField() {
    return this->scriptActions[26]; /*0x691f96*/
}
} // namespace gamemd

// 0x6E3EE0
namespace gamemd {
int TriggerTypeClass::Dispatch() {
    int result; // eax

    result = 0; /*0x6e3ee3*/
    switch ( (unsigned int)this ) /*0x6e3ef2*/
    {
      case 0xEu: /*0x6e3ef2*/
      case 0x20u: /*0x6e3ef2*/
      case 0x3Cu: /*0x6e3ef2*/
      case 0x3Du: /*0x6e3ef2*/
      case 0x3Eu: /*0x6e3ef2*/
      case 0x5Bu: /*0x6e3ef2*/
      case 0x6Fu: /*0x6e3ef2*/
        result = 2; /*0x6e3ef9*/
        break; /*0x6e3ef9*/
      default:
        return result;
    }
    return result; /*0x6e3efe*/
}
} // namespace gamemd

// 0x6E8160
namespace gamemd {
int TeamClass::SumMemberCounts() {
    int v1; // edx
    int result; // eax
    TeamClass *v3; // ecx
    void *vtable0; // esi

    v1 = this->countObjects[5]; /*0x6e8160*/
    result = 0; /*0x6e8166*/
    if ( v1 > 0 ) /*0x6e816a*/
    {
      v3 = (TeamClass *)((char *)this + 164); /*0x6e816d*/
      do /*0x6e817b*/
      {
        vtable0 = v3->AbstractClass; /*0x6e8173*/
        v3 = (TeamClass *)((char *)v3 + 8); /*0x6e8175*/
        result += (int)vtable0; /*0x6e8178*/
        --v1; /*0x6e817a*/
      }
      while ( v1 ); /*0x6e817b*/
    }
    return result; /*0x6e817e*/
}
} // namespace gamemd

// 0x6ECCE0
namespace gamemd {
void TeamClass::MoveToCellAndAttack(int a2, char a3) {
    TeamClass *v3; // edi
    void *CellFromArray; // esi
    unsigned int *Entry; // eax
    int v6; // eax
    FootClass *firstUnit; // esi
    int v8; // ebp
    FootClass *v9; // ebx
    int v10; // edi
    void *vtable0; // edx
    int v12; // eax
    AbstractClass *focus; // eax
    int v15; // [esp+10h] [ebp-14h] BYREF
    unsigned int v16[3]; // [esp+18h] [ebp-Ch] BYREF
    int v17; // [esp+28h] [ebp+4h]

    v3 = this; /*0x6eccea*/
    CellFromArray = ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(unsigned int *)(a2 + 4)); /*0x6eccff*/
    v17 = (int)CellFromArray; /*0x6ecd07*/
    if ( a3 ) /*0x6ecd0b*/
      TeamClass::SelectMember((int)v3, (int)CellFromArray); /*0x6ecd10*/
    if ( !v3->focus ) /*0x6ecd15*/
    {
      Entry = SessionClass::GetEntry((SessionClass *)v3->currentScript, &v15); /*0x6ecd24*/
      v16[0] = *Entry; /*0x6ecd2b*/
      if ( Entry[1] < 0x2BEu ) /*0x6ecd36*/
        TeamClass::SelectMember((int)v3, (int)CellFromArray); /*0x6ecd3b*/
    }
    IDA_LOWORD(v6) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4432) * 900.0); /*0x6ecd52*/
    if ( !(*(unsigned int *)&stru_A8EB00.?[416] % v6) ) /*0x6ecd5f*/
    {
      firstUnit = v3->firstUnit; /*0x6ecd69*/
      v8 = -1; /*0x6ecd6d*/
      v9 = firstUnit; /*0x6ecd70*/
      if ( firstUnit ) /*0x6ecd74*/
      {
        do /*0x6ecdd4*/
        {
          v10 = *(unsigned int *)((*((int (__thiscall **)(FootClass *))firstUnit->vtable1 + 33))(firstUnit) + 1532); /*0x6ecd80*/
          if ( firstUnit->? /*0x6ecdc6*/
            && firstUnit->?
            && (dword_A8E7AC || !firstUnit->?)
            && (firstUnit->isTeamLeader
             || (*((int (__thiscall **)(FootClass *))firstUnit->vtable1 + 11))(firstUnit) == 2)
            && v10 > v8 )
          {
            v9 = firstUnit; /*0x6ecdc8*/
            v8 = v10; /*0x6ecdca*/
          }
          firstUnit = firstUnit->nextTeamMember; /*0x6ecdcc*/
        }
        while ( firstUnit ); /*0x6ecdd4*/
        v3 = this; /*0x6ecdd6*/
      }
      if ( v9 ) /*0x6ecddd*/
      {
        v16[0] = v9->?[0]; /*0x6ecde9*/
        vtable0 = v9->TechnoClass; /*0x6ecded*/
        v16[1] = v9->?[1]; /*0x6ecdf2*/
        v16[2] = v9->?[2]; /*0x6ecdfe*/
        v12 = (*((int (__thiscall **)(FootClass *, int, unsigned int *, unsigned int))vtable0 + 241))(v9, 1, v16, 0); /*0x6ece06*/
        if ( v12 ) /*0x6ece0e*/
        {
          TeamClass::SelectMember((int)v3, v12); /*0x6ece11*/
        }
        else if ( v3->focus != (AbstractClass *)v17 ) /*0x6ece1c*/
        {
          TeamClass::SelectMember((int)v3, 0); /*0x6ece22*/
        }
      }
    }
    focus = v3->focus; /*0x6ece27*/
    if ( focus && (focus->abstractFlags & 2) != 0 ) /*0x6ece32*/
      TeamClass::AttackCoordinator(v3); /*0x6ece36*/
    else
      TeamClass::UpdateMembers(v3); /*0x6ece46*/
}
} // namespace gamemd

// 0x6ECFB0
namespace gamemd {
char TeamClass::Create(int a2, int a3) {
    int v4; // eax
    int *v5; // ebx
    FootClass *i; // esi

    v4 = RA2_OPNEW(0xA0u); /*0x6ecfba*/
    if ( v4 ) /*0x6ecfc4*/
    {
      v4 = MissionClass::Construct( /*0x6ecfdf*/
             v4,
             *(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * *(unsigned int *)(a2 + 4)),
             (int)this->owner,
             0);
      v5 = (int *)v4; /*0x6ecfe4*/
    }
    else
    {
      v5 = 0; /*0x6ecfe8*/
    }
    for ( i = this->firstUnit; i; i = this->firstUnit ) /*0x6ecfef*/
    {
      TeamClass::LiberateMember_Start((int *)this, (int)i, 0xFFFFFFFF, 0); /*0x6ecff8*/
      IDA_LOBYTE(v4) = TeamClass::AddMember(v5, (int)i, 0); /*0x6ed002*/
    }
    if ( this ) /*0x6ed010*/
      IDA_LOBYTE(v4) = (*((char (__thiscall **)(TeamClass *, int))this->vtable1 + 8))(this, 1); /*0x6ed018*/
    return v4; /*0x6ed01b*/
}
} // namespace gamemd

// 0x6EDB50
namespace gamemd {
char TeamClass::AssignAttackTarget(int a2, int a3) {
    AbstractClass **p_spawnCell; // edi
    unsigned int *health; // eax
    unsigned int *v6; // edi
    FootClass *i; // esi
    AbstractClass *target; // eax

    p_spawnCell = (AbstractClass **)&this->spawnCell; /*0x6edb57*/
    TeamClass::FindClosestEnemy((int)this, (void **)&this->spawnCell, &this->unknown38); /*0x6edb5c*/
    this->focus = *p_spawnCell; /*0x6edb63*/
    TeamClass::UpdateMembers(this); /*0x6edb68*/
    health = AbstractClass::IsTechnoType(*p_spawnCell); /*0x6edb6f*/
    v6 = health; /*0x6edb74*/
    if ( health ) /*0x6edb78*/
    {
      for ( i = this->firstUnit; i; i = i->nextTeamMember ) /*0x6edb83*/
      {
        IDA_LOBYTE(health) = i->?; /*0x6edb89*/
        if ( (unsigned char)health ) /*0x6edb91*/
        {
          health = (unsigned int *)i->?; /*0x6edb97*/
          if ( health ) /*0x6edb9c*/
          {
            if ( dword_A8E7AC || (IDA_LOBYTE(health) = i->?, !(unsigned char)health) ) /*0x6edbb3*/
            {
              if ( i->isTeamLeader /*0x6edbcd*/
                || (health = (unsigned int *)(*((int (__thiscall **)(FootClass *))i->vtable1 + 11))(i), health == (unsigned int *)2) )
              {
                target = i->?; /*0x6edbd3*/
                if ( target && target != (AbstractClass *)v6[173] ) /*0x6edbe3*/
                  (*((void (__thiscall **)(FootClass *, unsigned int))i->vtable1 + 242))(i, 0); /*0x6edbeb*/
                health = (unsigned int *)v6[173]; /*0x6edbf1*/
                if ( health ) /*0x6edbf9*/
                {
                  if ( !i->locomotor[0] ) /*0x6edbfb*/
                    WinAPI::Wrapper(-2147467261); /*0x6edc0a*/
                  IDA_LOBYTE(health) = (*(int (__stdcall **)(int))(*(unsigned int *)i->locomotor[0] + 16))(i->locomotor[0]); /*0x6edc18*/
                  if ( !(unsigned char)health ) /*0x6edc1d*/
                  {
                    IDA_LOBYTE(health) = (*((int (__thiscall **)(FootClass *))i->vtable1 + 171))(i); /*0x6edc23*/
                    if ( (unsigned char)health ) /*0x6edc2b*/
                    {
                      health = (unsigned int *)(*((int (__thiscall **)(FootClass *))i->vtable1 + 97))(i); /*0x6edc31*/
                      if ( health == (unsigned int *)5 ) /*0x6edc3a*/
                      {
                        (*((void (__thiscall **)(FootClass *, int, unsigned int))i->vtable1 + 122))(i, 1, 0); /*0x6edc44*/
                        IDA_LOBYTE(health) = (*((int (__thiscall **)(FootClass *, unsigned int))i->vtable1 + 242))(i, v6[173]); /*0x6edc55*/
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return (char)health; /*0x6edc69*/
}
} // namespace gamemd

// 0x6F0450
namespace gamemd {
void ** TeamClass::ProcessEvent(char a2) {
    TeamClass::Destructor(this); /*0x6f0453*/
    if ( (a2 & 1) != 0 ) /*0x6f045d*/
      RA2_OPDEL(this); /*0x6f0460*/
    return this; /*0x6f046a*/
}
} // namespace gamemd

// 0x6F09C0
namespace gamemd {
int TeamClass::CreateOneOf(int this, TeamClass *a2) {
    TeamClass *OwnerHouse; // edi
    int v4; // eax
    int v6; // eax

    Debug::Log(); /*0x6f09c9*/
    OwnerHouse = a2; /*0x6f09ce*/
    if ( !a2 ) /*0x6f09d7*/
    {
      OwnerHouse = *(TeamClass **)(this + 196); /*0x6f09d9*/
      if ( !OwnerHouse ) /*0x6f09e1*/
      {
        if ( !(uint8_t)BuildingType::IsSpecialType(*(void **)(this + 200)) ) /*0x6f09e9*/
          return 0; /*0x6f09e9*/
        OwnerHouse = (TeamClass *)BuildingType::FindOwnerHouse(*(void **)(this + 200)); /*0x6f09fd*/
        if ( !OwnerHouse ) /*0x6f0a01*/
          return 0; /*0x6f0a01*/
      }
    }
    if ( !dword_A8E7AC ) /*0x6f0a0a*/
    {
      v4 = *(unsigned int *)(this + 184); /*0x6f0a0c*/
      if ( v4 >= 0 ) /*0x6f0a14*/
      {
        if ( *(unsigned int *)&dword_A8B238 ) /*0x6f0a1e*/
        {
          if ( TeamClass::CountActiveTeamsForType(OwnerHouse, this) >= *(unsigned int *)(this + 184) ) /*0x6f0a3d*/
            return 0; /*0x6f0a3d*/
        }
        else if ( *(unsigned int *)(this + 220) >= v4 ) /*0x6f0a26*/
        {
          return 0; /*0x6f0a2c*/
        }
      }
    }
    Debug::Log(); /*0x6f0a48*/
    v6 = RA2_OPNEW(0xA0u); /*0x6f0a52*/
    if ( !v6 ) /*0x6f0a5c*/
      return 0; /*0x6f0a5c*/
    return MissionClass::Construct(v6, this, (int)OwnerHouse, 0); /*0x6f0a28*/
}
} // namespace gamemd

// 0x71AD40
namespace gamemd {
int TriggerClass::UnlinkTags() {
    TriggerClass *nextTrigger; // eax
    int v3; // eax
    int result; // eax

    nextTrigger = this->nextTrigger; /*0x71ad46*/
    if ( nextTrigger ) /*0x71ad4b*/
    {
      nextTrigger[8].destroyed = 0; /*0x71ad4d*/
      this->nextTrigger[8].timer[1] = 0; /*0x71ad56*/
      this->nextTrigger = 0; /*0x71ad5c*/
    }
    v3 = *(unsigned int *)&this->enabled; /*0x71ad5f*/
    if ( v3 ) /*0x71ad64*/
    {
      if ( *(TriggerClass **)(v3 + 64) == this ) /*0x71ad69*/
        *(unsigned int *)(v3 + 64) = 0; /*0x71ad6b*/
      TagClass::Unlink(*(TagClass **)&this->enabled); /*0x71ad71*/
      *(unsigned int *)&this->enabled = 0; /*0x71ad76*/
    }
    result = this->occuredEvents; /*0x71ad79*/
    if ( result ) /*0x71ad7e*/
    {
      if ( *(TriggerClass **)(result + 68) == this ) /*0x71ad83*/
        *(unsigned int *)(result + 68) = 0; /*0x71ad85*/
      result = TagClass::Unlink((TagClass *)this->occuredEvents); /*0x71ad8b*/
      this->occuredEvents = 0; /*0x71ad90*/
    }
    *(unsigned int *)&this->enabled = 0; /*0x71ad93*/
    this->occuredEvents = 0; /*0x71ad96*/
    this->timer[2] = 0; /*0x71ad99*/
    this->timer[1] = 0; /*0x71ad9c*/
    return result; /*0x71ad9f*/
}
} // namespace gamemd

// 0x71F4E0
namespace gamemd {
char * TriggerTypeClass::ParseActionData() {
    char *v2; // eax
    char *v3; // eax
    int v4; // edi
    char *v5; // ebp
    int v6; // ebx
    char *result; // eax
    int v8; // edi
    char Destination[24]; // [esp+10h] [ebp-1Ch] BYREF
    char v10; // [esp+28h] [ebp-4h]

    this->__pad_24[4] = 0; /*0x71f4f0*/
    v2 = strtok(0, Str); /*0x71f4f7*/
    this->__pad_24[2] = atoi(v2); /*0x71f509*/
    v3 = strtok(0, Str); /*0x71f50c*/
    v4 = atoi(v3); /*0x71f51e*/
    v5 = strtok(0, Str); /*0x71f525*/
    v6 = atoi(v5); /*0x71f52d*/
    result = 0; /*0x71f532*/
    if ( v4 == 2 ) /*0x71f537*/
      result = strtok(0, Str); /*0x71f53f*/
    if ( v4 ) /*0x71f54a*/
    {
      v8 = v4 - 1; /*0x71f54c*/
      if ( v8 ) /*0x71f54d*/
      {
        if ( v8 == 1 ) /*0x71f550*/
        {
          this->__pad_24[4] = v6; /*0x71f554*/
          if ( result ) /*0x71f557*/
          {
            result = strncpy(Destination, result, 0x18u); /*0x71f567*/
            v10 = 0; /*0x71f56f*/
          }
          else
          {
            Destination[0] = 0; /*0x71f559*/
          }
          if ( Destination != (char *)&this->__pad_24[5] ) /*0x71f57d*/
          {
            qmemcpy(&this->__pad_24[5], Destination, 0x18u); /*0x71f588*/
            this->UINameLabel[19] = v10; /*0x71f58a*/
          }
        }
      }
      else
      {
        result = (char *)TeamTypeClass::FindByName((TeamTypeClass *)v5); /*0x71f595*/
        this->__pad_24[3] = (int)result; /*0x71f59a*/
      }
    }
    else
    {
      this->__pad_24[4] = v6; /*0x71f5a5*/
    }
    return result; /*0x71f58b*/
}
} // namespace gamemd

// 0x71F680
namespace gamemd {
int TriggerTypeClass::GetActionCategoryFlags() {
    int v1; // esi

    v1 = 0; /*0x71f681*/
    switch ( (unsigned int)this ) /*0x71f690*/
    {
      case 0u: /*0x71f690*/
      case 1u: /*0x71f690*/
      case 4u: /*0x71f690*/
      case 8u: /*0x71f690*/
      case 0x18u: /*0x71f690*/
      case 0x19u: /*0x71f690*/
      case 0x1Au: /*0x71f690*/
      case 0x1Fu: /*0x71f690*/
      case 0x35u: /*0x71f690*/
      case 0x36u: /*0x71f690*/
      case 0x3Bu: /*0x71f690*/
        v1 = 1; /*0x71f697*/
        break; /*0x71f697*/
      default:
        break;
    }
    switch ( (unsigned int)this ) /*0x71f6a9*/
    {
      case 0u: /*0x71f6a9*/
      case 1u: /*0x71f6a9*/
      case 2u: /*0x71f6a9*/
      case 4u: /*0x71f6a9*/
      case 6u: /*0x71f6a9*/
      case 7u: /*0x71f6a9*/
      case 8u: /*0x71f6a9*/
      case 0x1Du: /*0x71f6a9*/
      case 0x21u: /*0x71f6a9*/
      case 0x22u: /*0x71f6a9*/
      case 0x23u: /*0x71f6a9*/
      case 0x26u: /*0x71f6a9*/
      case 0x27u: /*0x71f6a9*/
      case 0x28u: /*0x71f6a9*/
      case 0x29u: /*0x71f6a9*/
      case 0x2Au: /*0x71f6a9*/
      case 0x2Bu: /*0x71f6a9*/
      case 0x2Cu: /*0x71f6a9*/
      case 0x30u: /*0x71f6a9*/
      case 0x31u: /*0x71f6a9*/
        v1 |= 2u; /*0x71f6b0*/
        break; /*0x71f6b0*/
      default:
        break;
    }
    if ( this == (TriggerTypeClass *)8 || this == (TriggerTypeClass *)24 ) /*0x71f6bb*/
      v1 |= 4u; /*0x71f6bd*/
    switch ( (unsigned int)this ) /*0x71f6d0*/
    {
      case 3u: /*0x71f6d0*/
      case 5u: /*0x71f6d0*/
      case 8u: /*0x71f6d0*/
      case 9u: /*0x71f6d0*/
      case 0xAu: /*0x71f6d0*/
      case 0xBu: /*0x71f6d0*/
      case 0xCu: /*0x71f6d0*/
      case 0xFu: /*0x71f6d0*/
      case 0x10u: /*0x71f6d0*/
      case 0x11u: /*0x71f6d0*/
      case 0x12u: /*0x71f6d0*/
      case 0x13u: /*0x71f6d0*/
      case 0x14u: /*0x71f6d0*/
      case 0x15u: /*0x71f6d0*/
      case 0x16u: /*0x71f6d0*/
      case 0x1Eu: /*0x71f6d0*/
      case 0x20u: /*0x71f6d0*/
      case 0x34u: /*0x71f6d0*/
      case 0x37u: /*0x71f6d0*/
      case 0x38u: /*0x71f6d0*/
      case 0x39u: /*0x71f6d0*/
      case 0x3Au: /*0x71f6d0*/
        v1 |= 8u; /*0x71f6d7*/
        break; /*0x71f6d7*/
      default:
        break;
    }
    switch ( (unsigned int)this ) /*0x71f6ea*/
    {
      case 8u: /*0x71f6ea*/
      case 0xDu: /*0x71f6ea*/
      case 0xEu: /*0x71f6ea*/
      case 0x17u: /*0x71f6ea*/
      case 0x1Bu: /*0x71f6ea*/
      case 0x1Cu: /*0x71f6ea*/
      case 0x24u: /*0x71f6ea*/
      case 0x25u: /*0x71f6ea*/
      case 0x2Du: /*0x71f6ea*/
      case 0x2Eu: /*0x71f6ea*/
      case 0x2Fu: /*0x71f6ea*/
      case 0x32u: /*0x71f6ea*/
      case 0x33u: /*0x71f6ea*/
      case 0x3Cu: /*0x71f6ea*/
      case 0x3Du: /*0x71f6ea*/
        v1 |= 0x10u; /*0x71f6f1*/
        break; /*0x71f6f1*/
      default:
        return v1;
    }
    return v1; /*0x71f6f6*/
}
} // namespace gamemd

// 0x71F9C0
namespace gamemd {
char TEventClass::GetStateB_SpyEvent() {
    char result; // al

    switch ( this->TEventClass_field_2C ) /*0x71f9d3*/
    {
      case 1: /*0x71f9d3*/
      case 6: /*0x71f9d3*/
      case 0x1F: /*0x71f9d3*/
      case 0x2C: /*0x71f9d3*/
      case 0x3B: /*0x71f9d3*/
        result = 0; /*0x71f9da*/
        break; /*0x71f9dc*/
      default:
        result = 1; /*0x71f9dd*/
        break; /*0x71f9dd*/
    }
    return result; /*0x71f9dc*/
}
} // namespace gamemd

// 0x723CA0
namespace gamemd {
char * ScriptTypeClass::SetField(char *Buffer) {
    char *result; // eax
    void *v4; // ecx
    void *v5; // [esp+4h] [ebp-4h] BYREF

    result = Buffer; /*0x723ca1*/
    if ( Buffer ) /*0x723caa*/
    {
      sscanf(Buffer, "%d,%d", &Buffer, &v5); /*0x723cbc*/
      result = Buffer; /*0x723cc1*/
      v4 = v5; /*0x723cc5*/
      this->AbstractClass = Buffer; /*0x723ccc*/
      this->? = v4; /*0x723cce*/
    }
    return result; /*0x723cd1*/
}
} // namespace gamemd

// 0x723CE0
namespace gamemd {
unsigned int ScriptTypeClass::FormatToString(char *Buffer) {
    if ( !Buffer ) /*0x723ce7*/
      return 0; /*0x723d0e*/
    sprintf(Buffer, "%d,%d", this->AbstractClass, this->?); /*0x723cf6*/
    return strlen(Buffer); /*0x723d08*/
}
} // namespace gamemd

// 0x726690
namespace gamemd {
int TriggerClass::FireAction(int a2, int a3) {
    int result; // eax

    if ( this->buildingType == (TriggerTypeClass *)a2 ) /*0x726699*/
      this->buildingType = 0; /*0x72669b*/
    result = (int)this->nextTrigger; /*0x7266a2*/
    if ( result == a2 ) /*0x7266a7*/
    {
      result = *(unsigned int *)(result + 40); /*0x7266a9*/
      this->nextTrigger = (TriggerClass *)result; /*0x7266ac*/
    }
    if ( this->house == (HouseClass *)a2 ) /*0x7266b2*/
      this->house = 0; /*0x7266b4*/
    return result; /*0x7266bb*/
}
} // namespace gamemd

// 0x726720
namespace gamemd {
int TeamClass::AddToBuildQueue() {
    int result; // eax

    IDA_LOBYTE(this->target) = 1; /*0x726723*/
    result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x726727*/
    if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x726760*/
      || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (result = (*(int (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ToTile + 8))(
                     &g_BuildingLoadQueue_Array.ToTile,
                     *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                     0),
          (unsigned char)result) )
    {
      result = (*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x726768*/
      *(unsigned int *)(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x726777*/
    }
    return result; /*0x72677a*/
}
} // namespace gamemd

// 0x726790
namespace gamemd {
int TriggerClass::FireTrigger(int *a2) {
    int v3; // eax
    TriggerClass *nextTrigger; // eax
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax

    AbstractClass::ProcessPower((AbstractClass *)this); /*0x726799*/
    v3 = (*((int (__stdcall **)(void **))this->buildingType->? + 4))(&this->buildingType->?); /*0x7267a7*/
    Power::TimerProcess(v3); /*0x7267ad*/
    nextTrigger = this->nextTrigger; /*0x7267b2*/
    if ( nextTrigger ) /*0x7267b7*/
    {
      v5 = (*((int (__stdcall **)(void **))nextTrigger->? + 4))(&nextTrigger->?); /*0x7267c0*/
      nextTrigger = (TriggerClass *)Power::TimerProcess(v5); /*0x7267c6*/
    }
    IDA_LOBYTE(nextTrigger) = this->destroyed; /*0x7267cb*/
    Power::FlagProcess((Power *)a2, (int)nextTrigger); /*0x7267d1*/
    IDA_LOBYTE(v6) = this->enabled; /*0x7267d6*/
    Power::FlagProcess((Power *)a2, v6); /*0x7267dc*/
    v7 = this->timer[0]; /*0x7267e1*/
    v8 = this->timer[2]; /*0x7267e4*/
    if ( v7 != -1 ) /*0x7267ea*/
    {
      if ( *(unsigned int *)&stru_A8EB00.?[416] - v7 >= v8 ) /*0x7267f6*/
        v8 = 0; /*0x7267fc*/
      else
        v8 -= *(unsigned int *)&stru_A8EB00.?[416] - v7; /*0x7267f8*/
    }
    Power::TimerProcess(v8); /*0x726801*/
    return Power::TimerProcess(this->occuredEvents); /*0x726811*/
}
} // namespace gamemd

// 0x726C80
namespace gamemd {
unsigned int * TriggerTypeClass::Construct(char *Source) {
    int v3; // eax
    int v4; // eax
    int v5; // eax

    AbstractTypeClass::Constructor((int *)this, Source); /*0x726c89*/
    this->ArrayIndex = -1; /*0x726c92*/
    this->Difficulty[0] = 1; /*0x726c9c*/
    this->Difficulty[1] = 1; /*0x726ca2*/
    this->Difficulty[2] = 1; /*0x726ca8*/
    this->Enabled = 1; /*0x726cae*/
    this->MustTransfer = 0; /*0x726cb4*/
    this->House = 0; /*0x726cba*/
    this->NextTrigger = 0; /*0x726cc0*/
    this->FirstEvent = 0; /*0x726cc6*/
    this->FirstAction = 0; /*0x726ccc*/
    this->AbstractClass = 0; /*0x726cd2*/
    this->? = 0; /*0x726cd8*/
    this->? = 0; /*0x726cdf*/
    this->? = 0; /*0x726ce6*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x726d21*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v3 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x726d2e*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3) = this; /*0x726d3d*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x726d74*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726d81*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x726d90*/
    }
    this->ArrayIndex = *(unsigned int *)FootClass_Array.?; /*0x726d99*/
    if ( *(int *)FootClass_Array.? < FootClass_Array.?[1] /*0x726dd0*/
      || (IDA_BYTE1(FootClass_Array.?[2]) || !FootClass_Array.?[1])
      && *(int *)&FootClass_Array.? > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(FootClass_Array.? + 8))(
           &FootClass_Array.?,
           FootClass_Array.?[1] + *(unsigned int *)&FootClass_Array.?,
           0) )
    {
      v5 = (*(unsigned int *)FootClass_Array.?)++; /*0x726ddd*/
      *(unsigned int *)(FootClass_Array.?[0] + 4 * v5) = this; /*0x726dec*/
    }
    return this; /*0x726df1*/
}
} // namespace gamemd

// 0x726E00
namespace gamemd {
int TriggerClass::ProcessEvents() {
    int v2; // eax
    unsigned int *v3; // ecx
    unsigned int *v4; // esi
    unsigned int *v5; // ecx
    unsigned int *v6; // esi
    int v7; // eax
    int v8; // eax
    AbstractClass *v10; // [esp+10h] [ebp-4h] BYREF

    this->vtable0 = 0; /*0x726e06*/
    this->vtable1 = 0; /*0x726e0c*/
    this->vtable2 = 0; /*0x726e13*/
    this->vtable3 = 0; /*0x726e1a*/
    AbstractClass::AnnounceExpiredPointer(this, 1); /*0x726e21*/
    v10 = this; /*0x726e36*/
    v2 = (*(int (__thiscall **)(int *, AbstractClass **))(FootClass_Array.? + 16))(&FootClass_Array.?, &v10); /*0x726e3a*/
    if ( v2 != -1 && v2 < *(int *)FootClass_Array.? ) /*0x726e4a*/
    {
      --*(unsigned int *)FootClass_Array.?; /*0x726e4f*/
      for ( ; /*0x726e55*/
            v2 < *(int *)FootClass_Array.?;
            *(unsigned int *)(FootClass_Array.?[0] + 4 * v2 - 4) = *(unsigned int *)(FootClass_Array.?[0] + 4 * v2) )
      {
        ++v2; /*0x726e5d*/
      }
    }
    v3 = (unsigned int *)*((unsigned int *)this + 44); /*0x726e6f*/
    if ( v3 ) /*0x726e78*/
    {
      do /*0x726e8c*/
      {
        v4 = (unsigned int *)v3[10]; /*0x726e7a*/
        if ( v3 ) /*0x726e7f*/
          (*(void (__thiscall **)(unsigned int *, int))(*v3 + 32))(v3, 1); /*0x726e85*/
        v3 = v4; /*0x726e8a*/
      }
      while ( v4 ); /*0x726e8c*/
    }
    v5 = (unsigned int *)*((unsigned int *)this + 43); /*0x726e8e*/
    if ( v5 ) /*0x726e96*/
    {
      do /*0x726eaa*/
      {
        v6 = (unsigned int *)v5[10]; /*0x726e98*/
        if ( v5 ) /*0x726e9d*/
          (*(void (__thiscall **)(unsigned int *, int))(*v5 + 32))(v5, 1); /*0x726ea3*/
        v5 = v6; /*0x726ea8*/
      }
      while ( v6 ); /*0x726eaa*/
    }
    v10 = this; /*0x726ebc*/
    v7 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x726ec0*/
           &g_BuildingLoadQueue_Array.LightVisibility,
           &v10);
    if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x726ed1*/
    {
      --g_BuildingLoadQueue_Array.LightBlueTint; /*0x726ed6*/
      for ( ; /*0x726edc*/
            v7 < g_BuildingLoadQueue_Array.LightBlueTint;
            *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                           + 4 * v7) )
      {
        ++v7; /*0x726ee4*/
      }
    }
    v10 = this; /*0x726f06*/
    v8 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 16))( /*0x726f0a*/
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           &v10);
    if ( v8 != -1 && v8 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x726f1a*/
    {
      --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x726f1f*/
      for ( ; /*0x726f25*/
            v8 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
            *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v8 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v8) )
      {
        ++v8; /*0x726f2d*/
      }
    }
    return AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x726f46*/
}
} // namespace gamemd

// 0x727090
namespace gamemd {
int TriggerTypeClass::GetAction(int a2, int a3) {
    TriggerTypeClass *NextTrigger; // eax
    TActionClass *i; // esi
    TActionClass *FirstAction; // eax
    TEventClass *j; // esi
    int result; // eax

    NextTrigger = this->NextTrigger; /*0x727098*/
    if ( NextTrigger && NextTrigger == (TriggerTypeClass *)a2 ) /*0x7270a4*/
      this->NextTrigger = NextTrigger->NextTrigger; /*0x7270ac*/
    for ( i = this->FirstAction; i; i = (TActionClass *)i->TActionClass_field_28 ) /*0x7270bb*/
      (*((void (__thiscall **)(TActionClass *, int, int))i->vtable1 + 10))(i, a2, 1); /*0x7270c4*/
    FirstAction = this->FirstAction; /*0x7270ce*/
    if ( FirstAction == (TActionClass *)a2 ) /*0x7270d6*/
      this->FirstAction = (TActionClass *)FirstAction->TActionClass_field_28; /*0x7270db*/
    for ( j = this->FirstEvent; j; j = (TEventClass *)j->TEventClass_field_28 ) /*0x7270e9*/
      (*((void (__thiscall **)(TEventClass *, int, int))j->vtable1 + 10))(j, a2, 1); /*0x7270f2*/
    result = (int)this->FirstEvent; /*0x7270fc*/
    if ( result == a2 ) /*0x727105*/
    {
      result = *(unsigned int *)(result + 40); /*0x727107*/
      this->FirstEvent = (TEventClass *)result; /*0x72710a*/
    }
    return result; /*0x727110*/
}
} // namespace gamemd

// 0x7276A0
namespace gamemd {
char TriggerTypeClass::GetParameter(char *a2) {
    TriggerTypeClass *NextTrigger; // eax
    const char *pad_24; // esi
    HouseTypeClass *House; // eax
    const char *id; // eax
    int *v7; // esi
    TEventClass *FirstEvent; // eax
    int i; // ecx
    TEventClass *v10; // ebp
    TActionClass *FirstAction; // eax
    int j; // ecx
    TActionClass *v13; // ebx
    int *v15; // [esp+10h] [ebp-204h]
    char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

    NextTrigger = this->NextTrigger; /*0x7276ab*/
    pad_24 = (const char *)NextTrigger->__pad_24; /*0x7276b4*/
    if ( !NextTrigger ) /*0x7276b7*/
      pad_24 = g_Str__none_; /*0x7276b9*/
    House = this->House; /*0x7276be*/
    if ( House ) /*0x7276c6*/
      id = (const char *)House->id; /*0x7276c8*/
    else
      id = g_Str__none_; /*0x7276cd*/
    sprintf( /*0x727728*/
      Buffer,
      "%s,%s,%s,%d,%d,%d,%d,%d",
      id,
      pad_24,
      this->Name,
      this->Enabled == 0,
      this->Difficulty[0] != 0,
      this->Difficulty[1] != 0,
      this->Difficulty[2] != 0,
      this->MustTransfer != 0);
    v7 = this->__pad_24; /*0x72773a*/
    v15 = this->__pad_24; /*0x727747*/
    INIClass::SetString(a2, (uint8_t *)aTriggers, (char *)this->__pad_24, Buffer); /*0x72774b*/
    FirstEvent = this->FirstEvent; /*0x727750*/
    for ( i = 0; FirstEvent; ++i ) /*0x72775a*/
      FirstEvent = (TEventClass *)FirstEvent->TEventClass_field_28; /*0x72775c*/
    sprintf(Buffer, "%d", i); /*0x72776f*/
    v10 = this->FirstEvent; /*0x727774*/
    if ( v10 ) /*0x72777f*/
    {
      do /*0x7277c0*/
      {
        strcat(Buffer, Str); /*0x7277a6*/
        TEventClass::PrepareSaveToINI(v10, Buffer); /*0x7277b6*/
        v10 = (TEventClass *)v10->TEventClass_field_28; /*0x7277bb*/
      }
      while ( v10 ); /*0x7277c0*/
      v7 = this->__pad_24; /*0x7277c2*/
    }
    INIClass::SetString(a2, (uint8_t *)aEvents, (char *)v7, Buffer); /*0x7277da*/
    FirstAction = this->FirstAction; /*0x7277df*/
    for ( j = 0; FirstAction; ++j ) /*0x7277e9*/
      FirstAction = (TActionClass *)FirstAction->TActionClass_field_28; /*0x7277eb*/
    sprintf(Buffer, "%d", j); /*0x7277fe*/
    v13 = this->FirstAction; /*0x727803*/
    if ( v13 ) /*0x72780e*/
    {
      do /*0x72784f*/
      {
        strcat(Buffer, Str); /*0x727835*/
        ScriptAction::Serialize((int)v13, Buffer); /*0x727845*/
        v13 = (TActionClass *)v13->TActionClass_field_28; /*0x72784a*/
      }
      while ( v13 ); /*0x72784f*/
      v7 = v15; /*0x727851*/
    }
    INIClass::SetString(a2, (uint8_t *)aActions, (char *)v7, Buffer); /*0x727869*/
    return 1; /*0x72786e*/
}
} // namespace gamemd

// 0x727B30
namespace gamemd {
int TriggerTypeClass::PowerDrainUpdate(int *a2) {
    int v3; // eax
    TriggerTypeClass *NextTrigger; // eax
    int v5; // eax
    int result; // eax
    int v7; // eax
    TActionClass *FirstAction; // esi
    int v9; // eax

    AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x727b39*/
    v3 = (*((int (__stdcall **)(void **))this->House->? + 4))(&this->House->?); /*0x727b4a*/
    Power::TimerProcess(v3); /*0x727b50*/
    NextTrigger = this->NextTrigger; /*0x727b55*/
    if ( NextTrigger ) /*0x727b5d*/
    {
      v5 = (*((int (__stdcall **)(void **))NextTrigger->? + 4))(&NextTrigger->?); /*0x727b66*/
      Power::TimerProcess(v5); /*0x727b6c*/
    }
    result = (int)this->FirstEvent; /*0x727b71*/
    if ( result ) /*0x727b79*/
    {
      v7 = (*(int (__stdcall **)(int))(*(unsigned int *)(result + 4) + 16))(result + 4); /*0x727b82*/
      result = Power::TimerProcess(v7); /*0x727b88*/
    }
    FirstAction = this->FirstAction; /*0x727b8d*/
    if ( FirstAction ) /*0x727b95*/
    {
      v9 = (*((int (__stdcall **)(void **))FirstAction->? + 4))(&FirstAction->?); /*0x727b9e*/
      return Power::TimerProcess(v9); /*0x727ba4*/
    }
    return result; /*0x727ba9*/
}
} // namespace gamemd

// 0x727CC0
namespace gamemd {
int TriggerTypeClass::GetAuxField() {
    return this->ArrayIndex; /*0x727cc6*/
}
} // namespace gamemd

// 0x41E720
namespace gamemd {
char TriggerClass::EvaluateCondition(int this, TriggerClass *a2, unsigned int *a3, char a4) {
    int v5; // ecx
    int v6; // eax
    bool v7; // dl
    TriggerClass *v8; // edi
    char result; // al
    void *vtable0; // eax
    int referenceCount; // eax
    int v12; // eax
    int v13; // eax
    int v14; // eax
    bool v15; // al
    int v16; // eax
    int v17; // eax
    int v18; // eax
    int v19; // [esp+1Ch] [ebp+Ch]
    int v20; // [esp+1Ch] [ebp+Ch]

    v5 = *(unsigned int *)(this + 220); /*0x41e726*/
    v7 = 1; /*0x41e74e*/
    if ( !v5 || !*(unsigned char *)(v5 + 246) ) /*0x41e730*/
    {
      v6 = *(unsigned int *)(this + 224); /*0x41e73a*/
      if ( !v6 || !*(unsigned char *)(v6 + 246) ) /*0x41e744*/
        v7 = 0; /*0x41e738*/
    }
    if ( !v5 ) /*0x41e756*/
      return 0; /*0x41e756*/
    if ( a3 ) /*0x41e762*/
    {
      v8 = a2; /*0x41e769*/
      if ( !*(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6131) /*0x41e78c*/
        || a2[307].? >= *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5012) + 4 * a2[5].?) )
      {
        if ( !v7 ) /*0x41e7a3*/
          goto LABEL_17; /*0x41e7a3*/
        goto LABEL_16; /*0x41e7a3*/
      }
    }
    else
    {
      v8 = a2; /*0x41e790*/
    }
    if ( !v7 ) /*0x41e796*/
      return 0; /*0x41e79e*/
  LABEL_16:
    if ( a4 ) /*0x41e7ab*/
      return 0; /*0x41e7ab*/
  LABEL_17:
    if ( *(unsigned int *)(this + 156) == 1 && IDA_LOBYTE(dword_A8B230[374].referenceCount) == 1 || !*(unsigned char *)(this + 164) ) /*0x41e7cd*/
      return 0; /*0x41e7d5*/
    if ( *(unsigned int *)&dword_A8B238 ) /*0x41e7df*/
    {
      if ( !*(unsigned char *)(this + 208) ) /*0x41e7e1*/
        return 0; /*0x41e7f1*/
      referenceCount = v8[5].?; /*0x41e809*/
      if ( !referenceCount ) /*0x41e811*/
      {
  LABEL_28:
        if ( !*(unsigned char *)(this + 212) ) /*0x41e813*/
          return 0; /*0x41e823*/
        goto LABEL_36; /*0x41e81b*/
      }
      if ( referenceCount == 1 ) /*0x41e828*/
        goto LABEL_31; /*0x41e828*/
      if ( referenceCount != 2 ) /*0x41e840*/
        goto LABEL_36; /*0x41e840*/
      goto LABEL_34; /*0x41e840*/
    }
    vtable0 = dword_A8B230[43].vtable0; /*0x41e7f4*/
    if ( !vtable0 ) /*0x41e7fc*/
    {
  LABEL_34:
      if ( *(unsigned char *)(this + 210) ) /*0x41e842*/
        goto LABEL_36; /*0x41e84a*/
      return 0; /*0x41e852*/
    }
    if ( vtable0 != (void *)1 ) /*0x41e800*/
    {
      if ( vtable0 != (void *)2 ) /*0x41e805*/
        goto LABEL_36; /*0x41e805*/
      goto LABEL_28; /*0x41e805*/
    }
  LABEL_31:
    if ( !*(unsigned char *)(this + 211) ) /*0x41e82a*/
      return 0; /*0x41e83a*/
  LABEL_36:
    v12 = *(unsigned int *)(this + 160); /*0x41e855*/
    if ( !v12 ) /*0x41e85d*/
      return 0; /*0x41e865*/
    if ( v12 == 1 && *(unsigned int *)(v8->timer[0] + 184) != *(unsigned int *)(this + 168) ) /*0x41e882*/
      return 0; /*0x41e88a*/
    v13 = *(unsigned int *)(this + 172); /*0x41e88d*/
    if ( v13 == 1 ) /*0x41e895*/
    {
      if ( v8[6].timer[1] ) /*0x41e897*/
        return 0; /*0x41e8a7*/
    }
    else if ( v13 == 2 ) /*0x41e8ad*/
    {
      if ( v8[6].timer[1] != 1 ) /*0x41e8b5*/
        return 0; /*0x41e8bd*/
    }
    else if ( v13 == 3 && v8[6].timer[1] != 2 ) /*0x41e8cc*/
    {
      return 0; /*0x41e8d4*/
    }
    if ( *(unsigned int *)(this + 176) > (int)v8[6].buildingType ) /*0x41e8e5*/
      return 0; /*0x41e8ea*/
    v14 = *(unsigned int *)(this + 152); /*0x41e8f0*/
    if ( a3 ) /*0x41e8f8*/
    {
      switch ( v14 ) /*0x41e908*/
      {
        case -1: /*0x41e908*/
          goto LABEL_70;
        case 0: /*0x41e908*/
          v15 = AITriggerTypeClass::EnemyHouseOwns((AITriggerTypeClass *)this, (int)v8, a3); /*0x41e913*/
          break; /*0x41e918*/
        case 1: /*0x41e908*/
          v15 = AITriggerTypeClass::OwnerHouseOwns((AITriggerTypeClass *)this, v8, (int)a3); /*0x41e921*/
          break; /*0x41e926*/
        case 2: /*0x41e908*/
          v19 = (*(int (__stdcall **)(unsigned int *))(a3[9] + 36))(a3 + 9); /*0x41e93b*/
          if ( (double)((*(int (__stdcall **)(unsigned int *))(a3[9] + 32))(a3 + 9) - v19) >= 100.0 ) /*0x41e95b*/
            goto LABEL_58; /*0x41e95b*/
          v15 = 1; /*0x41e95d*/
          break; /*0x41e95f*/
        case 3: /*0x41e908*/
          v20 = (*(int (__stdcall **)(unsigned int *))(a3[9] + 36))(a3 + 9); /*0x41e975*/
          if ( (double)((*(int (__stdcall **)(unsigned int *))(a3[9] + 32))(a3 + 9) - v20) >= 0.0 ) /*0x41e995*/
  LABEL_58:
            v15 = 0; /*0x41e961*/
          else
            v15 = 1; /*0x41e997*/
          break; /*0x41e999*/
        case 4: /*0x41e908*/
          v15 = AITriggerTypeClass::HouseCredits((AITriggerTypeClass *)this, (int)v8, (int)a3); /*0x41e99f*/
          break; /*0x41e9a4*/
        case 5: /*0x41e908*/
          v15 = AITriggerTypeClass::IronCurtainCharged((int)v8, (int)a3); /*0x41e9aa*/
          break; /*0x41e9af*/
        case 6: /*0x41e908*/
          v15 = AITriggerTypeClass::ChronoSphereCharged((int)v8, (int)a3); /*0x41e9b5*/
          break; /*0x41e9ba*/
        case 7: /*0x41e908*/
          v15 = AITriggerTypeClass::CivilianHouseOwns((AITriggerTypeClass *)this, (int)v8, (int)a3); /*0x41e9c0*/
          break; /*0x41e9c5*/
        default:
          return 0;
      }
    }
    else if ( v14 == 1 ) /*0x41e9c9*/
    {
      v15 = AITriggerTypeClass::OwnerHouseOwns((AITriggerTypeClass *)this, v8, 0); /*0x41e9d0*/
    }
    else
    {
      v15 = v14 == -1; /*0x41e9da*/
    }
    if ( !v15 ) /*0x41e9df*/
      return 0; /*0x41e9e1*/
  LABEL_70:
    result = globalHelper_01FEE0(*(unsigned int *)(this + 220), v8, a3); /*0x41e9ea*/
    if ( result ) /*0x41e9fc*/
    {
      v16 = *(unsigned int *)(this + 224); /*0x41ea05*/
      if ( !v16 || (result = globalHelper_01FEE0(v16, v8, a3)) != 0 ) /*0x41ea1b*/
      {
        result = TriggerClass::ValidateTeamTriggerConditions(v8, *(unsigned int *)(this + 220)); /*0x41ea2d*/
        if ( result ) /*0x41ea34*/
        {
          if ( !*(unsigned int *)(this + 224) /*0x41ea51*/
            || (result = TriggerClass::ValidateTeamTriggerConditions(v8, *(unsigned int *)(this + 224))) != 0 )
          {
            v17 = *(unsigned int *)(this + 220); /*0x41ea5a*/
            if ( v17 /*0x41ea82*/
              && *(int *)(v17 + 184) >= 0
              && TeamClass::CountActiveTeamsForType((TeamClass *)v8, *(unsigned int *)(this + 220)) >= *(unsigned int *)(*(unsigned int *)(this + 220) + 184) )
            {
              return 0; /*0x41ea87*/
            }
            else
            {
              v18 = *(unsigned int *)(this + 224); /*0x41ea8d*/
              return !v18 /*0x41eaba*/
                  || *(int *)(v18 + 184) < 0
                  || TeamClass::CountActiveTeamsForType((TeamClass *)v8, *(unsigned int *)(this + 224)) < *(unsigned int *)(*(unsigned int *)(this + 224) + 184);
            }
          }
        }
      }
    }
    return result; /*0x41e798*/
}
} // namespace gamemd

// 0x49DB00
namespace gamemd {
int CampaignClass::LoadFromINI() {
    int v2; // ebx
    int KeyCount; // esi
    int *v5; // eax
    unsigned int *v6; // edi
    int v7; // eax
    unsigned int *v8; // esi
    int v9; // ebx
    unsigned int *v10; // eax
    int v11; // esi
    uint8_t *StringByIndex; // eax
    wchar_t *StringCSF; // esi
    wchar_t *v14; // eax
    int v15; // eax
    char *v16; // eax
    char *v17; // eax
    char *v18; // eax
    int v19; // esi
    int v20; // ecx
    int v21; // eax
    unsigned int *v22; // edi
    int v23; // ecx
    int v24; // eax
    int v25; // edx
    char *v26; // eax
    const char *v27; // esi
    char *v28; // edx
    int v29; // esi
    int v30; // eax
    int v31; // ecx
    int v32; // eax
    char *i; // esi
    char *v34; // edx
    int v35; // esi
    int v36; // eax
    int v37; // ecx
    int v38; // eax
    int v39; // esi
    int v40; // edx
    int v41; // eax
    unsigned int *v42; // edi
    int v43; // ecx
    int v44; // eax
    int v45; // edx
    char *v46; // eax
    const char *v47; // esi
    char *v48; // edx
    int v49; // esi
    int v50; // eax
    int v51; // ecx
    int v52; // eax
    char *j; // esi
    char *v54; // edx
    int v55; // esi
    int v56; // eax
    int v57; // ecx
    int v58; // eax
    bool v59; // cc
    int Int_Overwrite; // [esp+30h] [ebp-134h]
    int v61; // [esp+30h] [ebp-134h]
    char *v62; // [esp+34h] [ebp-130h]
    char *v63; // [esp+34h] [ebp-130h]
    char *v64; // [esp+34h] [ebp-130h]
    char *v65; // [esp+34h] [ebp-130h]
    int v66; // [esp+38h] [ebp-12Ch]
    int v67; // [esp+3Ch] [ebp-128h]
    int v68; // [esp+40h] [ebp-124h]
    int v69; // [esp+44h] [ebp-120h]
    char Buffer[48]; // [esp+48h] [ebp-11Ch] BYREF
    CCFileClass v71; // [esp+78h] [ebp-ECh] BYREF
    int v72[3]; // [esp+D0h] [ebp-94h] BYREF
    int v73; // [esp+DCh] [ebp-88h]
    char Destination[128]; // [esp+E4h] [ebp-80h] BYREF

    CCFileClass::Construct(&v71, g_Str_File_CoopCampMD_ini); /*0x49db13*/
    v2 = 0; /*0x49db18*/
    if ( !CCINIClass::Load((CCINIClass *)this, (int)&v71, 0, 0) ) /*0x49db23*/
    {
      *(unsigned int *)&this->scenario[52] = 0; /*0x49db33*/
      *(unsigned int *)&this->scenario[48] = 0; /*0x49db36*/
      this->scenario[56] = 0; /*0x49db39*/
      v71.FileClass = (FileClass)0; /*0x49db3c*/
      v73 = 0; /*0x49db44*/
      Vector::Clear((int)v72); /*0x49db4b*/
      v71.FileClass = (FileClass)&off_7E1668; /*0x49db54*/
      return BufferIOFileClass::Dtor(&v71); /*0x49db69*/
    }
    KeyCount = INIClass::GetKeyCount((char *)this, g_INI_Key_Campaigns); /*0x49db78*/
    *(unsigned int *)&this->scenario[52] = KeyCount; /*0x49db7c*/
    if ( KeyCount > 0 ) /*0x49db7f*/
    {
      v5 = (int *)RA2_OPNEW(76 * KeyCount + 4); /*0x49db9a*/
      if ( v5 ) /*0x49dba4*/
      {
        *v5 = KeyCount; /*0x49dba6*/
        v6 = v5 + 1; /*0x49dba8*/
        v7 = KeyCount - 1; /*0x49dbab*/
        if ( KeyCount - 1 >= 0 ) /*0x49dbb0*/
        {
          v8 = v6 + 4; /*0x49dbb2*/
          v9 = v7 + 1; /*0x49dbb5*/
          do /*0x49dbf7*/
          {
            CampaignClass::Constructor_0((CampaignClass *)v8, 0, 0); /*0x49dbbe*/
            *v8 = 0; /*0x49dbca*/
            v8[5] = 10; /*0x49dbd0*/
            v8[4] = 0; /*0x49dbd7*/
            CampaignClass::Constructor((CampaignClass *)(v8 + 6), 0, 0); /*0x49dbde*/
            unknown_libname_73(v8 + 13); /*0x49dbe6*/
            unknown_libname_73(v8 + 14); /*0x49dbee*/
            v8 += 19; /*0x49dbf3*/
            --v9; /*0x49dbf6*/
          }
          while ( v9 ); /*0x49dbf7*/
          v2 = 0; /*0x49dbf9*/
        }
        v10 = v6; /*0x49dbfb*/
      }
      else
      {
        v10 = 0; /*0x49dbff*/
      }
      *(unsigned int *)&this->scenario[48] = v10; /*0x49dc03*/
      if ( !v10 ) /*0x49dc06*/
        goto LABEL_80; /*0x49dc06*/
      v11 = 0; /*0x49dc0f*/
      v68 = 0; /*0x49dc13*/
      if ( *(int *)&this->scenario[52] <= 0 ) /*0x49dc17*/
        goto LABEL_80; /*0x49dc17*/
      while ( 1 ) /*0x49dc25*/
      {
        StringByIndex = (uint8_t *)INIClass::GetStringByIndex((char *)this, g_INI_Key_Campaigns, v11); /*0x49dc25*/
        if ( StringByIndex ) /*0x49dc2c*/
        {
          INIClass::GetString((INIClass *)this, g_INI_Key_Campaigns, StringByIndex, 0, Destination, 128); /*0x49dc49*/
          Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, (uint8_t *)Destination, aNumberofcampai, 0); /*0x49dc69*/
          if ( INIClass::GetString( /*0x49dc83*/
                 (INIClass *)this,
                 (uint8_t *)Destination,
                 aCampaignname,
                 0,
                 (char *)word_89F5D8,
                 128) )
          {
            StringCSF = GetStringCSF(word_89F5D8, 0, aDRa2mdpostCoop, 1048); /*0x49dca7*/
            *(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2 + 4) = RA2_OPNEW(0x102u); /*0x49dcb4*/
            v14 = *(wchar_t **)(*(unsigned int *)&this->scenario[48] + v2 + 4); /*0x49dcbb*/
            if ( v14 ) /*0x49dcc1*/
              wcscpy(v14, StringCSF); /*0x49dcc5*/
          }
          INIClass::GetString( /*0x49dce8*/
            (INIClass *)this,
            (uint8_t *)Destination,
            aCampaignloadsc,
            0,
            (char *)word_89F5D8,
            128);
          String::Assign_Alt((String *)(*(unsigned int *)&this->scenario[48] + v2 + 68), (const char *)word_89F5D8); /*0x49dcf9*/
          INIClass::GetString( /*0x49dd19*/
            (INIClass *)this,
            (uint8_t *)Destination,
            aCampaignloadsc_0,
            0,
            (char *)word_89F5D8,
            128);
          String::Assign_Alt((String *)(*(unsigned int *)&this->scenario[48] + v2 + 72), (const char *)word_89F5D8); /*0x49dd2a*/
          INIClass::GetString( /*0x49dd4d*/
            (INIClass *)this,
            (uint8_t *)Destination,
            aCampaignai,
            g_INI_Key_Easy,
            (char *)word_89F5D8,
            128);
          *(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2 + 64) = RA2_OPNEW(strlen((const char *)word_89F5D8) + 1); /*0x49dd71*/
          strcpy(*(char **)(*(unsigned int *)&this->scenario[48] + v2 + 64), (const char *)word_89F5D8); /*0x49dd8f*/
          *(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2) = v68; /*0x49dd9b*/
          *(unsigned char *)(*(unsigned int *)&this->scenario[48] + v2 + 8) = Int_Overwrite; /*0x49dda5*/
          *(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2 + 12) = RA2_OPNEW(780 * Int_Overwrite); /*0x49ddc7*/
          v15 = 1; /*0x49ddcb*/
          v67 = 1; /*0x49ddd2*/
          v69 = Int_Overwrite + 1; /*0x49ddd6*/
          if ( Int_Overwrite + 1 > 1 ) /*0x49ddda*/
          {
            v66 = 4; /*0x49dde0*/
            v61 = 780; /*0x49dde8*/
            while ( 2 ) /*0x49ddf0*/
            {
              sprintf(Buffer, "Map%d", v15); /*0x49ddf0*/
              if ( INIClass::GetString( /*0x49de1e*/
                     (INIClass *)this,
                     (uint8_t *)Destination,
                     (uint8_t *)Buffer,
                     0,
                     (char *)word_89F5D8,
                     128) )
              {
                v16 = strtok((char *)word_89F5D8, Str); /*0x49de35*/
                if ( v16 ) /*0x49de3f*/
                  strcpy((char *)(*(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2 + 12) + v61 - 780), v16); /*0x49de69*/
                v17 = strtok(0, Str); /*0x49de79*/
                if ( v17 ) /*0x49de83*/
                  strcpy((char *)(*(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2 + 12) + v61 - 520), v17); /*0x49dead*/
                v18 = strtok(0, Str); /*0x49debd*/
                if ( v18 ) /*0x49dec7*/
                  strcpy((char *)(*(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2 + 12) + v61 - 260), v18); /*0x49def1*/
              }
              v19 = RA2_OPNEW(0x18u); /*0x49df01*/
              if ( !v19 ) /*0x49df0a*/
                goto LABEL_77; /*0x49df0a*/
              *(unsigned int *)(v19 + 4) = 0; /*0x49df10*/
              *(unsigned int *)(v19 + 8) = 0; /*0x49df13*/
              *(unsigned char *)(v19 + 12) = 1; /*0x49df16*/
              *(unsigned char *)(v19 + 13) = 0; /*0x49df1a*/
              *(unsigned int *)v19 = 0; /*0x49df1d*/
              *(unsigned int *)(v19 + 20) = 10; /*0x49df23*/
              *(unsigned int *)(v19 + 16) = 0; /*0x49df2a*/
              v20 = *(unsigned int *)&this->scenario[48]; /*0x49df2d*/
              v21 = *(unsigned int *)(v20 + v2 + 24); /*0x49df30*/
              v22 = (unsigned int *)(v20 + v2 + 16); /*0x49df34*/
              if ( *(unsigned int *)(v20 + v2 + 32) < v21 /*0x49df5b*/
                || (*(unsigned char *)(v20 + v2 + 29) || !v21)
                && (v23 = *(unsigned int *)(v20 + v2 + 36), v23 > 0)
                && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*v22 + 8))(v22, v21 + v23, 0) )
              {
                v24 = v22[4]; /*0x49df62*/
                v25 = v22[1]; /*0x49df65*/
                v22[4] = v24 + 1; /*0x49df6b*/
                *(unsigned int *)(v25 + 4 * v24) = v19; /*0x49df6e*/
              }
              sprintf(Buffer, "%s%d", aCampaignplayer, v67); /*0x49df85*/
              if ( INIClass::GetString( /*0x49dfa8*/
                     (INIClass *)this,
                     (uint8_t *)Destination,
                     (uint8_t *)Buffer,
                     0,
                     (char *)word_89F5D8,
                     128) )
              {
                v26 = strtok((char *)word_89F5D8, Str); /*0x49dfbf*/
                v27 = v26; /*0x49dfc4*/
                if ( v26 ) /*0x49dfcb*/
                {
                  v28 = (char *)RA2_OPNEW(strlen(v26) + 1); /*0x49dfe2*/
                  v62 = v28; /*0x49dfee*/
                  strcpy(v28, v27); /*0x49e001*/
                  v29 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2 + 20) + v66 - 4); /*0x49e015*/
                  v30 = *(unsigned int *)(v29 + 8); /*0x49e019*/
                  if ( *(unsigned int *)(v29 + 16) < v30 ) /*0x49e021*/
                    goto LABEL_42; /*0x49e021*/
                  if ( *(unsigned char *)(v29 + 13) || !v30 ) /*0x49e02c*/
                  {
                    v31 = *(unsigned int *)(v29 + 20); /*0x49e02e*/
                    if ( v31 > 0 ) /*0x49e033*/
                    {
                      if ( (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v29 + 8))(v29, v30 + v31, 0) ) /*0x49e03e*/
                      {
                        v28 = v62; /*0x49e045*/
  LABEL_42:
                        v32 = *(unsigned int *)(v29 + 16); /*0x49e049*/
                        *(unsigned int *)(v29 + 16) = v32 + 1; /*0x49e04f*/
                        *(unsigned int *)(*(unsigned int *)(v29 + 4) + 4 * v32) = v28; /*0x49e055*/
                      }
                    }
                  }
                }
                for ( i = strtok(0, Str); i; i = strtok(0, Str) ) /*0x49e06b*/
                {
                  v34 = (char *)RA2_OPNEW(strlen(i) + 1); /*0x49e082*/
                  v63 = v34; /*0x49e08e*/
                  strcpy(v34, i); /*0x49e0a1*/
                  v35 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2 + 20) + v66 - 4); /*0x49e0b5*/
                  v36 = *(unsigned int *)(v35 + 8); /*0x49e0b9*/
                  if ( *(unsigned int *)(v35 + 16) >= v36 ) /*0x49e0c1*/
                  {
                    if ( !*(unsigned char *)(v35 + 13) && v36 ) /*0x49e0cc*/
                      continue; /*0x49e0cc*/
                    v37 = *(unsigned int *)(v35 + 20); /*0x49e0ce*/
                    if ( v37 <= 0 /*0x49e0de*/
                      || !(*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v35 + 8))(v35, v36 + v37, 0) )
                    {
                      continue; /*0x49e0e3*/
                    }
                    v34 = v63; /*0x49e0e5*/
                  }
                  v38 = *(unsigned int *)(v35 + 16); /*0x49e0e9*/
                  *(unsigned int *)(v35 + 16) = v38 + 1; /*0x49e0ef*/
                  *(unsigned int *)(*(unsigned int *)(v35 + 4) + 4 * v38) = v34; /*0x49e0f5*/
                }
              }
              v39 = RA2_OPNEW(0x18u); /*0x49e111*/
              if ( v39 ) /*0x49e121*/
              {
                *(unsigned int *)(v39 + 4) = 0; /*0x49e127*/
                *(unsigned int *)(v39 + 8) = 0; /*0x49e12a*/
                *(unsigned char *)(v39 + 12) = 1; /*0x49e12d*/
                *(unsigned char *)(v39 + 13) = 0; /*0x49e131*/
                *(unsigned int *)v39 = 0; /*0x49e134*/
                *(unsigned int *)(v39 + 20) = 10; /*0x49e13a*/
                *(unsigned int *)(v39 + 16) = 0; /*0x49e141*/
                v40 = *(unsigned int *)&this->scenario[48]; /*0x49e144*/
                v41 = *(unsigned int *)(v40 + v2 + 48); /*0x49e147*/
                v42 = (unsigned int *)(v40 + v2 + 40); /*0x49e14f*/
                if ( *(unsigned int *)(v40 + v2 + 56) < v41 /*0x49e172*/
                  || (*(unsigned char *)(v40 + v2 + 53) || !v41)
                  && (v43 = *(unsigned int *)(v40 + v2 + 60), v43 > 0)
                  && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*v42 + 8))(v42, v43 + v41, 0) )
                {
                  v44 = v42[4]; /*0x49e179*/
                  v45 = v42[1]; /*0x49e17c*/
                  v42[4] = v44 + 1; /*0x49e182*/
                  *(unsigned int *)(v45 + 4 * v44) = v39; /*0x49e185*/
                }
                sprintf(Buffer, "%s%d", aCampaignenemy, v67); /*0x49e19c*/
                if ( INIClass::GetString( /*0x49e1bf*/
                       (INIClass *)this,
                       (uint8_t *)Destination,
                       (uint8_t *)Buffer,
                       0,
                       (char *)word_89F5D8,
                       128) )
                {
                  v46 = strtok((char *)word_89F5D8, Str); /*0x49e1d6*/
                  v47 = v46; /*0x49e1db*/
                  if ( v46 ) /*0x49e1e2*/
                  {
                    v48 = (char *)RA2_OPNEW(strlen(v46) + 1); /*0x49e1f9*/
                    v64 = v48; /*0x49e205*/
                    strcpy(v48, v47); /*0x49e218*/
                    v49 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2 + 44) + v66 - 4); /*0x49e22c*/
                    v50 = *(unsigned int *)(v49 + 8); /*0x49e230*/
                    if ( *(unsigned int *)(v49 + 16) < v50 ) /*0x49e238*/
                      goto LABEL_67; /*0x49e238*/
                    if ( *(unsigned char *)(v49 + 13) || !v50 ) /*0x49e243*/
                    {
                      v51 = *(unsigned int *)(v49 + 20); /*0x49e245*/
                      if ( v51 > 0 ) /*0x49e24a*/
                      {
                        if ( (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v49 + 8))(v49, v51 + v50, 0) ) /*0x49e255*/
                        {
                          v48 = v64; /*0x49e25c*/
  LABEL_67:
                          v52 = *(unsigned int *)(v49 + 16); /*0x49e260*/
                          *(unsigned int *)(v49 + 16) = v52 + 1; /*0x49e266*/
                          *(unsigned int *)(*(unsigned int *)(v49 + 4) + 4 * v52) = v48; /*0x49e26c*/
                        }
                      }
                    }
                  }
                  for ( j = strtok(0, Str); j; j = strtok(0, Str) ) /*0x49e282*/
                  {
                    v54 = (char *)RA2_OPNEW(strlen(j) + 1); /*0x49e299*/
                    v65 = v54; /*0x49e2a5*/
                    strcpy(v54, j); /*0x49e2b8*/
                    v55 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&this->scenario[48] + v2 + 44) + v66 - 4); /*0x49e2cc*/
                    v56 = *(unsigned int *)(v55 + 8); /*0x49e2d0*/
                    if ( *(unsigned int *)(v55 + 16) >= v56 ) /*0x49e2d8*/
                    {
                      if ( !*(unsigned char *)(v55 + 13) && v56 ) /*0x49e2e3*/
                        continue; /*0x49e2e3*/
                      v57 = *(unsigned int *)(v55 + 20); /*0x49e2e5*/
                      if ( v57 <= 0 /*0x49e2f5*/
                        || !(*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v55 + 8))(v55, v57 + v56, 0) )
                      {
                        continue; /*0x49e2fa*/
                      }
                      v54 = v65; /*0x49e2fc*/
                    }
                    v58 = *(unsigned int *)(v55 + 16); /*0x49e300*/
                    *(unsigned int *)(v55 + 16) = v58 + 1; /*0x49e306*/
                    *(unsigned int *)(*(unsigned int *)(v55 + 4) + 4 * v58) = v54; /*0x49e30c*/
                  }
                }
              }
  LABEL_77:
              v15 = v67 + 1; /*0x49e328*/
              v59 = ++v67 < v69; /*0x49e342*/
              v61 += 780; /*0x49e348*/
              v66 += 4; /*0x49e34c*/
              if ( !v59 ) /*0x49e350*/
                break; /*0x49e350*/
              continue; /*0x49e350*/
            }
          }
          v11 = v68; /*0x49e356*/
        }
        ++v11; /*0x49e35d*/
        v2 += 76; /*0x49e35e*/
        v68 = v11; /*0x49e363*/
        if ( v11 >= *(unsigned int *)&this->scenario[52] ) /*0x49e367*/
          goto LABEL_80; /*0x49e367*/
      }
    }
    *(unsigned int *)&this->scenario[52] = 0; /*0x49db81*/
    *(unsigned int *)&this->scenario[48] = 0; /*0x49db84*/
  LABEL_80:
    this->scenario[56] = 1; /*0x49e36f*/
    v71.FileClass = (FileClass)0; /*0x49e37a*/
    v73 = 0; /*0x49e382*/
    Vector::Clear((int)v72); /*0x49e389*/
    v71.FileClass = (FileClass)&off_7E1668; /*0x49e392*/
    return BufferIOFileClass::Dtor(&v71); /*0x49db61*/
}
} // namespace gamemd

// 0x49ECD0
namespace gamemd {
unsigned int * CampaignClass::Constructor(int a2, int a3) {
    this->? = 0; /*0x49ecd9*/
    this->? = (void *)a2; /*0x49ece0*/
    IDA_LOBYTE(this->?) = 1; /*0x49ece3*/
    IDA_BYTE1(this->?) = 0; /*0x49ece7*/
    this->AbstractClass = 0; /*0x49eceb*/
    if ( a2 ) /*0x49ecf1*/
    {
      if ( a3 ) /*0x49ecf9*/
      {
        this->? = (void *)a3; /*0x49ecfb*/
      }
      else
      {
        this->? = (void *)RA2_OPNEW(4 * a2); /*0x49ed0c*/
        IDA_BYTE1(this->?) = 1; /*0x49ed0f*/
      }
    }
    this->AbstractClass = 0; /*0x49ed13*/
    this->? = 10; /*0x49ed19*/
    this->? = 0; /*0x49ed20*/
    return this; /*0x49ed29*/
}
} // namespace gamemd

// 0x5D2E00
namespace gamemd {
unsigned char * CampaignClass::Constructor_1(int16_t a2) {
    IDA_LOBYTE(this->?) = 0; /*0x5d2e05*/
    IDA_BYTE1(this->?) = 0; /*0x5d2e08*/
    IDA_BYTE2(this->?) = 0; /*0x5d2e0b*/
    this->AbstractClass = 0; /*0x5d2e13*/
    FontClass::LoadFontResources((int)this, a2); /*0x5d2e19*/
    ++*(unsigned int *)&g_MissionQueueFrame.underParMessage[25]; /*0x5d2e24*/
    return this; /*0x5d2e2b*/
}
} // namespace gamemd

// 0x691540
namespace gamemd {
unsigned int * ScriptClass::GetNextAction(unsigned int *a2) {
    ScriptTypeClass *buildingType; // edx
    int idxCurrentLine; // ecx
    unsigned int *result; // eax

    buildingType = this->buildingType; /*0x691540*/
    idxCurrentLine = this->idxCurrentLine; /*0x691543*/
    result = a2; /*0x691554*/
    if ( idxCurrentLine + 1 < buildingType->scriptActions[28] ) /*0x691552*/
    {
      *a2 = buildingType->scriptActions[2 * idxCurrentLine + 31]; /*0x691571*/
      a2[1] = buildingType->scriptActions[2 * idxCurrentLine + 32]; /*0x69157a*/
    }
    else
    {
      *a2 = -1; /*0x69155e*/
      a2[1] = 0; /*0x691560*/
    }
    return result; /*0x69155d*/
}
} // namespace gamemd

// 0x6916B0
namespace gamemd {
unsigned int * ScriptTypeClass::Constructor(char *Source) {
    int v3; // ecx
    char v4; // al
    int v5; // eax
    ScriptTypeClass **v6; // edx

    AbstractTypeClass::Constructor((int *)this, Source); /*0x6916b8*/
    this->scriptActions[27] = 0; /*0x6916bd*/
    this->scriptActions[28] = 0; /*0x6916c7*/
    this->AbstractClass = 0; /*0x6916d1*/
    this->? = 0; /*0x6916d7*/
    this->? = 0; /*0x6916de*/
    this->? = 0; /*0x6916e5*/
    v3 = *(unsigned int *)&FootClass_Array.?; /*0x6916ec*/
    if ( *(int *)&FootClass_Array.? < FootClass_Array.?[6] /*0x69172e*/
      || (IDA_BYTE1(FootClass_Array.?[7]) || !FootClass_Array.?[6])
      && *(int *)&FootClass_Array.? > 0
      && (v4 = (*(int (__thiscall **)(int *, int, unsigned int))(FootClass_Array.?[4] + 8))(
                 &FootClass_Array.?[4],
                 FootClass_Array.?[6] + *(unsigned int *)&FootClass_Array.?,
                 0),
          v3 = *(unsigned int *)&FootClass_Array.?,
          v4) )
    {
      *(unsigned int *)&FootClass_Array.? = v3 + 1; /*0x691733*/
      *(unsigned int *)(FootClass_Array.?[5] + 4 * v3) = this; /*0x69173f*/
      v3 = *(unsigned int *)&FootClass_Array.?; /*0x691742*/
    }
    v5 = 0; /*0x691748*/
    if ( v3 <= 0 ) /*0x69174c*/
    {
  LABEL_11:
      v5 = -1; /*0x691760*/
    }
    else
    {
      v6 = (ScriptTypeClass **)FootClass_Array.?[5]; /*0x69174e*/
      while ( *v6 != this ) /*0x691756*/
      {
        ++v5; /*0x691758*/
        ++v6; /*0x691759*/
        if ( v5 >= v3 ) /*0x69175e*/
          goto LABEL_11; /*0x69175e*/
      }
    }
    this->scriptActions[26] = v5; /*0x691763*/
    return this; /*0x69176b*/
}
} // namespace gamemd

// 0x691E30
namespace gamemd {
void ScriptTypeClass::GetAction(int a2, int a3) {
    int v4; // ecx
    int v5; // edi
    int v6; // esi
    int *v7; // edx
    int v8; // eax
    unsigned int *i; // ecx

    if ( a2 ) /*0x691e3c*/
    {
      if ( (*(int (__thiscall **)(int))(*(unsigned int *)a2 + 44))(a2) == 35 ) /*0x691e49*/
      {
        v4 = -1; /*0x691e51*/
        v5 = 0; /*0x691e54*/
        if ( this->scriptActions[28] > 0 ) /*0x691e58*/
        {
          v6 = *(unsigned int *)&stru_A8EB00.?[204]; /*0x691e5a*/
          v7 = &this->scriptActions[30]; /*0x691e60*/
          do /*0x691e66*/
          {
            if ( *(v7 - 1) == 18 ) /*0x691e6a*/
            {
              if ( v4 == -1 ) /*0x691e6f*/
              {
                v8 = 0; /*0x691e71*/
                if ( v6 <= 0 ) /*0x691e75*/
                  return; /*0x691e75*/
                for ( i = *(unsigned int **)&stru_A8EB00.?[192]; *i != a2; ++i ) /*0x691e77*/
                {
                  if ( ++v8 >= v6 ) /*0x691e87*/
                    return; /*0x691e87*/
                }
                v4 = v8; /*0x691e8e*/
                if ( v8 == -1 ) /*0x691e90*/
                  return; /*0x691e90*/
              }
              if ( *v7 > v4 ) /*0x691e96*/
              {
                --*v7; /*0x691e99*/
  LABEL_17:
                v6 = *(unsigned int *)&stru_A8EB00.?[204]; /*0x691ea5*/
                goto LABEL_18; /*0x691ea5*/
              }
              if ( *v7 == v4 ) /*0x691e9d*/
              {
                *v7 = 0; /*0x691e9f*/
                goto LABEL_17; /*0x691e9f*/
              }
            }
  LABEL_18:
            ++v5; /*0x691eab*/
            v7 += 2; /*0x691eb2*/
          }
          while ( v5 < this->scriptActions[28] ); /*0x691e66*/
        }
      }
    }
}
} // namespace gamemd

// 0x691EE0
namespace gamemd {
void ** ScriptClass::ProcessEvent(char a2) {
    int v3; // eax
    ScriptClass *v5; // [esp+4h] [ebp-4h] BYREF

    this->AbstractClass = 0; /*0x691ee6*/
    this->? = 0; /*0x691eec*/
    this->? = 0; /*0x691ef3*/
    this->? = 0; /*0x691efa*/
    AbstractClass::AnnounceExpiredPointer(this, 1); /*0x691f01*/
    v5 = this; /*0x691f16*/
    v3 = (*(int (__thiscall **)(int *, ScriptClass **))(dword_8872B0 + 16))(&dword_8872B0, &v5); /*0x691f1a*/
    if ( v3 != -1 && v3 < dword_8872C0 && v3 < --dword_8872C0 ) /*0x691f35*/
    {
      do /*0x691f4d*/
      {
        ++v3; /*0x691f3d*/
        *((unsigned int *)dword_8872B4 + v3 - 1) = *((unsigned int *)dword_8872B4 + v3); /*0x691f41*/
      }
      while ( v3 < dword_8872C0 ); /*0x691f4d*/
    }
    AbstractClass::DTOR((AbstractClass *)this); /*0x691f51*/
    if ( (a2 & 1) != 0 ) /*0x691f5b*/
      RA2_OPDEL(this); /*0x691f5e*/
    return this; /*0x691f68*/
}
} // namespace gamemd

// 0x6DD000
namespace gamemd {
int TActionClass::ctor() {
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x6dd004*/
    this->idxArray = -1; /*0x6dd00b*/
    this->TActionClass_field_28 = 0; /*0x6dd012*/
    this->TActionClass_field_2C = 0; /*0x6dd015*/
    this->TActionClass_field_30 = 0; /*0x6dd018*/
    this->TActionClass_field_34 = 0; /*0x6dd01b*/
    this->TActionClass_field_38 = 0; /*0x6dd01e*/
    this->TActionClass_field_3C = 0; /*0x6dd021*/
    this->TActionClass_field_40 = 0; /*0x6dd024*/
    this->TActionClass_field_44 = 0; /*0x6dd027*/
    this->TActionClass_field_48 = 0; /*0x6dd02a*/
    this->TActionClass_field_4C = 0; /*0x6dd02d*/
    this->TActionClass_field_50 = 0; /*0x6dd030*/
    this->TActionClass_field_54 = 0; /*0x6dd033*/
    this->AbstractClass = 0; /*0x6dd036*/
    this->? = 0; /*0x6dd03c*/
    this->? = 0; /*0x6dd043*/
    this->? = 0; /*0x6dd04a*/
    v2 = dword_B0E668; /*0x6dd051*/
    if ( dword_B0E668 < dword_B0E660 /*0x6dd08f*/
      || (byte_B0E665 || !dword_B0E660)
      && dword_B0E66C > 0
      && (v3 = (*(int (__thiscall **)(int *, int, unsigned int))(dword_B0E658 + 8))(
                 &dword_B0E658,
                 dword_B0E660 + dword_B0E66C,
                 0),
          v2 = dword_B0E668,
          v3) )
    {
      dword_B0E668 = v2 + 1; /*0x6dd094*/
      *((unsigned int *)dword_B0E65C + v2) = this; /*0x6dd0a0*/
      v2 = dword_B0E668; /*0x6dd0a3*/
    }
    v4 = 0; /*0x6dd0a9*/
    if ( v2 <= 0 ) /*0x6dd0ad*/
    {
  LABEL_11:
      v4 = -1; /*0x6dd0c1*/
    }
    else
    {
      v5 = (TActionClass **)dword_B0E65C; /*0x6dd0af*/
      while ( *v5 != this ) /*0x6dd0b7*/
      {
        ++v4; /*0x6dd0b9*/
        ++v5; /*0x6dd0ba*/
        if ( v4 >= v2 ) /*0x6dd0bf*/
          goto LABEL_11; /*0x6dd0bf*/
      }
    }
    this->idxArray = v4; /*0x6dd0c4*/
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x6dd0fb*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x6dd108*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v6) = this; /*0x6dd117*/
    }
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x6dd14e*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x6dd15b*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v7) = this; /*0x6dd16a*/
    }
    this->TActionClass_field_6D = 0; /*0x6dd16d*/
    *(unsigned int *)&this->pad_6E[34] = 0; /*0x6dd170*/
    return (int)this; /*0x6dd178*/
}
} // namespace gamemd

// 0x6E4660
namespace gamemd {
void ** TActionClass::Destructor(char a2) {
    int v3; // eax
    int v4; // eax
    int v5; // eax
    TActionClass *v7; // [esp+8h] [ebp-4h] BYREF

    this->AbstractClass = 0; /*0x6e4666*/
    this->? = 0; /*0x6e466c*/
    this->? = 0; /*0x6e4673*/
    this->? = 0; /*0x6e467a*/
    AbstractClass::AnnounceExpiredPointer(this, 1); /*0x6e4681*/
    v7 = this; /*0x6e4696*/
    v3 = (*(int (__thiscall **)(int *, TActionClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e469a*/
           &g_BuildingLoadQueue_Array.LightVisibility,
           &v7);
    if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e46aa*/
    {
      --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e46af*/
      for ( ; /*0x6e46b5*/
            v3 < g_BuildingLoadQueue_Array.LightBlueTint;
            *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                           + 4 * v3) )
      {
        ++v3; /*0x6e46bd*/
      }
    }
    v7 = this; /*0x6e46df*/
    v4 = (*(int (__thiscall **)(int *, TActionClass **))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 16))( /*0x6e46e3*/
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           &v7);
    if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x6e46f3*/
    {
      --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x6e46f8*/
      for ( ; /*0x6e46fe*/
            v4 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
            *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v4) )
      {
        ++v4; /*0x6e4706*/
      }
    }
    v7 = this; /*0x6e4728*/
    v5 = (*(int (__thiscall **)(int *, TActionClass **))(dword_B0E658 + 16))(&dword_B0E658, &v7); /*0x6e472c*/
    if ( v5 != -1 && v5 < dword_B0E668 && v5 < --dword_B0E668 ) /*0x6e4747*/
    {
      do /*0x6e475f*/
      {
        ++v5; /*0x6e474f*/
        *((unsigned int *)dword_B0E65C + v5 - 1) = *((unsigned int *)dword_B0E65C + v5); /*0x6e4753*/
      }
      while ( v5 < dword_B0E668 ); /*0x6e475f*/
    }
    this->TActionClass_field_6D = 0; /*0x6e4763*/
    AbstractClass::DTOR((AbstractClass *)this); /*0x6e4767*/
    if ( (a2 & 1) != 0 ) /*0x6e4771*/
      RA2_OPDEL(this); /*0x6e4774*/
    return this; /*0x6e477e*/
}
} // namespace gamemd

// 0x6EC9A0
namespace gamemd {
char TeamClass::SelectWaypointTarget(int a2, char a3) {
    void *CellFromArray; // eax
    int v5; // esi
    char v6; // al
    int ObjectCell; // eax
    int *firstUnit; // esi
    char result; // al
    unsigned int v10[2]; // [esp+8h] [ebp-8h] BYREF

    if ( a3 ) /*0x6ec9ad*/
    {
      CellFromArray = ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(unsigned int *)(a2 + 4)); /*0x6ec9bd*/
      v5 = (int)CellFromArray; /*0x6ec9c2*/
      if ( CellFromArray ) /*0x6ec9c6*/
      {
        if ( (*(int (__thiscall **)(void *))(*(unsigned int *)CellFromArray + 44))(CellFromArray) == 11 ) /*0x6ec9d2*/
        {
          v6 = IDA_BYTE1(*(unsigned int *)(v5 + 320)) & 1; /*0x6ec9e1*/
          v10[0] = 0; /*0x6ec9e3*/
          v10[1] = 0; /*0x6ec9ef*/
          ObjectCell = Object::FindObjectCell((Object *)v5, v10, v6); /*0x6ec9f7*/
          if ( ObjectCell ) /*0x6ec9fe*/
            v5 = ObjectCell; /*0x6eca00*/
        }
      }
      TeamClass::SelectMember((int)this, v5); /*0x6eca05*/
    }
    if ( this->queuedFocus && (firstUnit = (int *)this->firstUnit) != 0 ) /*0x6eca16*/
    {
      while ( *(int *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1668) > 0 && firstUnit[191] <= 0 ) /*0x6eca34*/
      {
        firstUnit = (int *)firstUnit[374]; /*0x6eca36*/
        if ( !firstUnit ) /*0x6eca3e*/
          goto LABEL_12; /*0x6eca3e*/
      }
      return TeamClass::AttackCoordinator(this); /*0x6eca5a*/
    }
    else
    {
  LABEL_12:
      result = TeamClass::SelectMember((int)this, 0); /*0x6eca40*/
      this->stepCompleted = 1; /*0x6eca49*/
    }
    return result; /*0x6eca50*/
}
} // namespace gamemd

// 0x6ECA70
namespace gamemd {
char TeamClass::SelectAttackTarget(int a2, char a3) {
    Object *CellFromArray; // eax
    Object *v5; // esi
    char v6; // al
    int ObjectCell; // eax
    int v8; // esi
    int *firstUnit; // esi
    char result; // al
    unsigned int v11[2]; // [esp+8h] [ebp-8h] BYREF

    if ( a3 ) /*0x6eca7d*/
    {
      CellFromArray = (Object *)ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(unsigned int *)(a2 + 4)); /*0x6eca8d*/
      v5 = CellFromArray; /*0x6eca92*/
      if ( !CellFromArray /*0x6ecadc*/
        || (*(int (__thiscall **)(Object *))(*(unsigned int *)CellFromArray->__pad_0 + 44))(CellFromArray) != 11
        || (v6 = IDA_BYTE1(*(unsigned int *)v5->__pad_140) & 1,
            v11[0] = 0,
            v11[1] = 0,
            ObjectCell = Object::FindObjectCell(v5, v11, v6),
            (v8 = ObjectCell) == 0)
        || (*(int (__thiscall **)(int))(*(unsigned int *)ObjectCell + 44))(ObjectCell) != 6 )
      {
        v8 = 0; /*0x6ecade*/
      }
      TeamClass::SelectMember((int)this, v8); /*0x6ecae3*/
    }
    if ( this->queuedFocus && (firstUnit = (int *)this->firstUnit) != 0 ) /*0x6ecaf4*/
    {
      while ( *(int *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1668) > 0 && firstUnit[191] <= 0 ) /*0x6ecb12*/
      {
        firstUnit = (int *)firstUnit[374]; /*0x6ecb14*/
        if ( !firstUnit ) /*0x6ecb1c*/
          goto LABEL_13; /*0x6ecb1c*/
      }
      return TeamClass::AttackCoordinator(this); /*0x6ecb38*/
    }
    else
    {
  LABEL_13:
      result = TeamClass::SelectMember((int)this, 0); /*0x6ecb1e*/
      this->stepCompleted = 1; /*0x6ecb27*/
    }
    return result; /*0x6ecb2e*/
}
} // namespace gamemd

// 0x6ECE60
namespace gamemd {
char TeamClass::AssignMemberToCoordinator(int a2, char a3) {
    void *CellFromArray; // eax
    AbstractClass *queuedFocus; // ecx
    AbstractClass *v6; // esi
    Object *v7; // eax
    int ObjectCell; // eax
    unsigned int v10[2]; // [esp+4h] [ebp-8h] BYREF

    if ( a3 ) /*0x6ece6c*/
    {
      CellFromArray = ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(unsigned int *)(a2 + 4)); /*0x6ece7c*/
      TeamClass::SelectMember((int)this, (int)CellFromArray); /*0x6ece84*/
    }
    queuedFocus = this->queuedFocus; /*0x6ece89*/
    if ( queuedFocus && (*((int (__thiscall **)(AbstractClass *))queuedFocus->vtable0 + 11))(queuedFocus) == 11 )
    {
      v6 = this->queuedFocus; /*0x6ece9b*/
      if ( v6 )
        v7 = (*((int (__thiscall **)(AbstractClass *))v6->vtable0 + 11))(this->queuedFocus) == 11 ? (Object *)v6 : 0;
      else
        v7 = 0; /*0x6ecea2*/
      v10[0] = 0; /*0x6ecec1*/
      v10[1] = 0; /*0x6ecec9*/
      ObjectCell = Object::FindObjectCell(v7, v10, 0); /*0x6eced1*/
      if ( ObjectCell ) /*0x6eced9*/
      {
        TeamClass::SelectMember((int)this, ObjectCell); /*0x6ecede*/
  LABEL_10:
        IDA_LOBYTE(ObjectCell) = TeamClass::AttackCoordinator(this); /*0x6ecee3*/
      }
    }
    else
    {
      if ( this->queuedFocus ) /*0x6ecef1*/
        goto LABEL_10; /*0x6ecef6*/
      IDA_LOBYTE(ObjectCell) = TeamClass::SelectMember((int)this, 0); /*0x6ecefc*/
      this->stepCompleted = 1; /*0x6ecf01*/
    }
    return ObjectCell; /*0x6eceea*/
}
} // namespace gamemd

// 0x6ED090
namespace gamemd {
char TeamClass::CoordinateSuperWeaponAttack(int this, int a2, int a3) {
    TeamClass *v3; // ebp
    int *v4; // esi
    int v5; // ebx
    int *v6; // edi
    int v7; // ebp
    int SuperWeaponTypeFlag; // eax
    int v9; // edx
    int v10; // ecx
    int v11; // eax
    int *v12; // esi
    int *firstUnit; // esi
    unsigned int v16[3]; // [esp+Ch] [ebp-Ch] BYREF

    v3 = (TeamClass *)this; /*0x6ed094*/
    if ( !*(unsigned int *)(this + 60) ) /*0x6ed09b*/
    {
      v4 = *(int **)(this + 84); /*0x6ed0a6*/
      if ( v4 ) /*0x6ed0ab*/
      {
        v5 = -1; /*0x6ed0b2*/
        v6 = *(int **)(this + 84); /*0x6ed0b6*/
        do /*0x6ed11a*/
        {
          v7 = *(unsigned int *)((*(int (__thiscall **)(int *))(*v4 + 132))(v4) + 1532); /*0x6ed0c6*/
          if ( *((unsigned char *)v4 + 144) /*0x6ed10c*/
            && v4[27]
            && (dword_A8E7AC || !*((unsigned char *)v4 + 129))
            && (*((unsigned char *)v4 + 1673) || (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 2)
            && v7 > v5 )
          {
            v6 = v4; /*0x6ed10e*/
            v5 = v7; /*0x6ed110*/
          }
          v4 = (int *)v4[374]; /*0x6ed112*/
        }
        while ( v4 ); /*0x6ed11a*/
        v3 = (TeamClass *)this; /*0x6ed11c*/
        SuperWeaponTypeFlag = GetSuperWeaponTypeFlag(*(ObjectClass **)(a2 + 4)); /*0x6ed127*/
        v16[0] = v6[39]; /*0x6ed138*/
        v16[1] = v6[40]; /*0x6ed13f*/
        v9 = *v6; /*0x6ed143*/
        v16[2] = v6[41]; /*0x6ed148*/
        v10 = *(unsigned int *)(this + 36); /*0x6ed14c*/
        IDA_LOBYTE(v10) = *(unsigned char *)(v10 + 247); /*0x6ed14f*/
        v11 = (*(int (__thiscall **)(int *, int, unsigned int *, int))(v9 + 964))(v6, SuperWeaponTypeFlag, v16, v10); /*0x6ed15e*/
        TeamClass::SelectMember(this, v11); /*0x6ed167*/
        if ( *(unsigned int *)(this + 60) && (v12 = *(int **)(this + 84)) != 0 ) /*0x6ed17a*/
        {
          while ( *(int *)((*(int (__thiscall **)(int *))(*v12 + 132))(v12) + 1668) > 0 && v12[191] <= 0 ) /*0x6ed198*/
          {
            v12 = (int *)v12[374]; /*0x6ed19a*/
            if ( !v12 ) /*0x6ed1a2*/
              goto LABEL_19; /*0x6ed1a2*/
          }
        }
        else
        {
  LABEL_19:
          *(unsigned char *)(this + 128) = 1; /*0x6ed1a4*/
        }
      }
      if ( !v3->queuedFocus ) /*0x6ed1ab*/
        goto LABEL_25; /*0x6ed1ab*/
    }
    firstUnit = (int *)v3->firstUnit; /*0x6ed1b2*/
    if ( firstUnit ) /*0x6ed1b7*/
    {
      while ( *(int *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1668) > 0 && firstUnit[191] <= 0 ) /*0x6ed1d5*/
      {
        firstUnit = (int *)firstUnit[374]; /*0x6ed1d7*/
        if ( !firstUnit ) /*0x6ed1df*/
          goto LABEL_25; /*0x6ed1df*/
      }
    }
    else
    {
  LABEL_25:
      v3->stepCompleted = 1; /*0x6ed1e1*/
    }
    return TeamClass::AttackCoordinator(v3); /*0x6ed1ef*/
}
} // namespace gamemd

// 0x6EE310
namespace gamemd {
char TeamClass::SelectAreaAttackTarget(int a2, char a3) {
    int firstUnit; // edi
    void *v5; // edx
    int v6; // ebx
    unsigned int *v7; // eax
    int *v8; // esi
    char result; // al

    if ( a3 ) /*0x6ee31b*/
    {
      if ( this->queuedFocus ) /*0x6ee31d*/
        goto LABEL_9; /*0x6ee322*/
      firstUnit = (int)this->firstUnit; /*0x6ee324*/
      if ( firstUnit ) /*0x6ee329*/
      {
        v5 = 0; /*0x6ee336*/
        v6 = *(unsigned int *)(*(unsigned int *)(firstUnit + 540) + 22016); /*0x6ee354*/
        if ( v6 != -1 ) /*0x6ee35d*/
          v5 = (void *)*((unsigned int *)stru_A80220.? + v6); /*0x6ee365*/
        v7 = DamageMapClassArea( /*0x6ee376*/
               *((unsigned int *)dword_A83C6C + (uint16_t)*(unsigned int *)(a2 + 4)),
               v5,
               firstUnit,
               (uint16_t)IDA_HIWORD(*(unsigned int *)(a2 + 4)),
               IDA_HIBYTE(this->buildingType[2].?));
        if ( v7 ) /*0x6ee37e*/
          TeamClass::SelectMember((int)this, (int)v7); /*0x6ee383*/
      }
    }
    if ( !this->queuedFocus ) /*0x6ee38d*/
    {
  LABEL_13:
      result = TeamClass::SelectMember((int)this, 0); /*0x6ee3be*/
      this->stepCompleted = 1; /*0x6ee3c8*/
      return result; /*0x6ee3d1*/
    }
  LABEL_9:
    v8 = (int *)this->firstUnit; /*0x6ee38f*/
    if ( !v8 ) /*0x6ee394*/
      goto LABEL_13; /*0x6ee394*/
    while ( *(int *)((*(int (__thiscall **)(int *))(*v8 + 132))(v8) + 1668) > 0 && v8[191] <= 0 ) /*0x6ee3b2*/
    {
      v8 = (int *)v8[374]; /*0x6ee3b4*/
      if ( !v8 ) /*0x6ee3bc*/
        goto LABEL_13; /*0x6ee3bc*/
    }
    return TeamClass::AttackCoordinator(this); /*0x6ee3c7*/
}
} // namespace gamemd

// 0x6EE3F0
namespace gamemd {
void TeamClass::ProcessTeamMovement(int a2, int a3) {
    TeamClass *v3; // ebp
    FootClass *firstUnit; // esi
    void *v5; // edx
    int enemyHouseIndex; // ebx
    unsigned int *v7; // ebx
    int v8; // edi
    int *v9; // ebx
    int v10; // eax
    int v11; // ecx
    int (__thiscall **vtable0)(FootClass *, unsigned char *); // edx
    unsigned int *v13; // eax
    int v14; // eax
    int TileIndex; // [esp-38h] [ebp-64h]
    void *v16; // [esp-Ch] [ebp-38h]
    int v18; // [esp+Ch] [ebp-20h] BYREF
    int16_t v19[2]; // [esp+10h] [ebp-1Ch] BYREF
    int16_t v20[2]; // [esp+14h] [ebp-18h] BYREF
    int v21; // [esp+18h] [ebp-14h] BYREF
    int v22; // [esp+1Ch] [ebp-10h] BYREF
    unsigned char v23[8]; // [esp+20h] [ebp-Ch] BYREF
    int v24; // [esp+28h] [ebp-4h]
    int v25; // [esp+30h] [ebp+4h]

    v3 = this; /*0x6ee3f4*/
    if ( !this->queuedFocus ) /*0x6ee3fb*/
    {
      firstUnit = this->firstUnit; /*0x6ee406*/
      if ( firstUnit ) /*0x6ee40b*/
      {
        v5 = 0; /*0x6ee420*/
        enemyHouseIndex = firstUnit->owner->enemyHouseIndex; /*0x6ee43b*/
        if ( enemyHouseIndex != -1 ) /*0x6ee444*/
          v5 = (void *)*((unsigned int *)stru_A80220.? + enemyHouseIndex); /*0x6ee44c*/
        v7 = DamageMapClassArea( /*0x6ee462*/
               *((unsigned int *)dword_A83C6C + (uint16_t)*(unsigned int *)(a2 + 4)),
               v5,
               (int)firstUnit,
               (uint16_t)IDA_HIWORD(*(unsigned int *)(a2 + 4)),
               IDA_HIBYTE(this->buildingType[2].?));
        if ( v7 ) /*0x6ee466*/
        {
          v8 = *(unsigned int *)((*((int (__thiscall **)(FootClass *))firstUnit->vtable1 + 33))(firstUnit) + 1460); /*0x6ee476*/
          v9 = v7 + 39; /*0x6ee47c*/
          v10 = *v9; /*0x6ee482*/
          v11 = v9[1]; /*0x6ee484*/
          v24 = v9[2]; /*0x6ee48f*/
          IDA_LOWORD(v25) = v10 / 256; /*0x6ee4a1*/
          vtable0 = (int (__thiscall **)(FootClass *, unsigned char *))firstUnit->TechnoClass; /*0x6ee4b3*/
          IDA_HIWORD(v25) = v11 / 256; /*0x6ee4b8*/
          v21 = v25; /*0x6ee4c1*/
          v18 = 0; /*0x6ee4c7*/
          v13 = (unsigned int *)vtable0[18](firstUnit, v23); /*0x6ee4d6*/
          IDA_LOWORD(v25) = *v13 / 256; /*0x6ee4ed*/
          IDA_HIWORD(v25) = v13[1] / 256; /*0x6ee50d*/
          IDA_LOBYTE(v13) = firstUnit->?; /*0x6ee516*/
          *(unsigned int *)v20 = v25; /*0x6ee520*/
          TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v20, v8, (char)v13); /*0x6ee538*/
          v14 = (*((int (__thiscall **)(FootClass *))firstUnit->vtable1 + 33))(firstUnit); /*0x6ee53b*/
          *(unsigned int *)v19 = *LayerClass::Pathfinding_Find( /*0x6ee565*/
                              (Type *)&stru_87F5F0.__pad_58[416],
                              (int)&v22,
                              &v22,
                              (int16_t *)&v21,
                              *(unsigned int *)(v14 + 1660),
                              TileIndex,
                              v8,
                              0,
                              1,
                              1,
                              0,
                              0,
                              0,
                              1,
                              (int16_t *)&v18,
                              0,
                              0);
          if ( *(unsigned int *)v19 == g_BuildingLoadQueue_Array.?[1] ) /*0x6ee569*/
          {
            TeamClass::SelectMember((int)this, 0); /*0x6ee591*/
          }
          else
          {
            v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x6ee588*/
            TeamClass::SelectMember((int)this, (int)v16); /*0x6ee589*/
          }
          v3 = this; /*0x6ee596*/
        }
        if ( !v3->queuedFocus ) /*0x6ee59a*/
          v3->stepCompleted = 1; /*0x6ee5a3*/
      }
    }
    TeamClass::UpdateMembers(v3); /*0x6ee5ac*/
}
} // namespace gamemd

// 0x6EE5C0
namespace gamemd {
void TeamClass::SelectBestMember(int a2, int a3) {
    TeamClass *v3; // ebp
    FootClass *firstUnit; // esi
    FootClass *v5; // edi
    int v6; // ebx
    int v7; // ebp
    unsigned int *v8; // ebx
    int v9; // edi
    int *v10; // ebx
    int v11; // eax
    int v12; // ecx
    int (__thiscall **vtable0)(FootClass *, unsigned char *); // edx
    unsigned int *v14; // eax
    int v15; // eax
    int TileIndex; // [esp-30h] [ebp-60h]
    void *v17; // [esp-4h] [ebp-34h]
    int16_t v19[2]; // [esp+14h] [ebp-1Ch] BYREF
    int16_t v20[2]; // [esp+18h] [ebp-18h] BYREF
    int v21; // [esp+1Ch] [ebp-14h] BYREF
    int v22; // [esp+20h] [ebp-10h] BYREF
    unsigned char v23[8]; // [esp+24h] [ebp-Ch] BYREF
    int v24; // [esp+2Ch] [ebp-4h]

    v3 = this; /*0x6ee5c9*/
    if ( (unsigned char)a3 ) /*0x6ee5d3*/
    {
      if ( this->queuedFocus ) /*0x6ee5d9*/
        goto LABEL_22; /*0x6ee5de*/
      firstUnit = this->firstUnit; /*0x6ee5e4*/
      if ( firstUnit ) /*0x6ee5e9*/
      {
        v5 = this->firstUnit; /*0x6ee5f9*/
        a3 = -1; /*0x6ee5fb*/
        v6 = (uint16_t)IDA_HIWORD(*(unsigned int *)(a2 + 4)); /*0x6ee613*/
        a2 = *((unsigned int *)dword_A83C6C + (uint16_t)*(unsigned int *)(a2 + 4)); /*0x6ee61b*/
        do /*0x6ee683*/
        {
          v7 = *(unsigned int *)((*((int (__thiscall **)(FootClass *))v5->vtable1 + 33))(v5) + 1532); /*0x6ee62b*/
          if ( v5 /*0x6ee673*/
            && v5->?
            && v5->?
            && (dword_A8E7AC || !v5->?)
            && (v5->isTeamLeader || (*((int (__thiscall **)(FootClass *))v5->vtable1 + 11))(v5) == 2)
            && v7 > a3 )
          {
            firstUnit = v5; /*0x6ee675*/
            a3 = v7; /*0x6ee677*/
          }
          v5 = v5->nextTeamMember; /*0x6ee67b*/
        }
        while ( v5 ); /*0x6ee683*/
        v3 = this; /*0x6ee685*/
        v8 = TeamClass::ScoreMember((TeamClass *)a2, firstUnit, v6, 0); /*0x6ee698*/
        if ( v8 ) /*0x6ee69c*/
        {
          v9 = *(unsigned int *)((*((int (__thiscall **)(FootClass *))firstUnit->vtable1 + 33))(firstUnit) + 1460); /*0x6ee6ac*/
          v10 = v8 + 39; /*0x6ee6b2*/
          v11 = *v10; /*0x6ee6bd*/
          v12 = v10[1]; /*0x6ee6bf*/
          v24 = v10[2]; /*0x6ee6c7*/
          IDA_LOWORD(a3) = v11 / 256; /*0x6ee6d7*/
          vtable0 = (int (__thiscall **)(FootClass *, unsigned char *))firstUnit->TechnoClass; /*0x6ee6e9*/
          IDA_HIWORD(a3) = v12 / 256; /*0x6ee6ee*/
          v21 = a3; /*0x6ee6f7*/
          a2 = 0; /*0x6ee6fd*/
          v14 = (unsigned int *)vtable0[18](firstUnit, v23); /*0x6ee70c*/
          IDA_LOWORD(a3) = *v14 / 256; /*0x6ee723*/
          IDA_HIWORD(a3) = v14[1] / 256; /*0x6ee743*/
          IDA_LOBYTE(v14) = firstUnit->?; /*0x6ee74c*/
          *(unsigned int *)v20 = a3; /*0x6ee756*/
          TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v20, v9, (char)v14); /*0x6ee76e*/
          v15 = (*((int (__thiscall **)(FootClass *))firstUnit->vtable1 + 33))(firstUnit); /*0x6ee771*/
          *(unsigned int *)v19 = *LayerClass::Pathfinding_Find( /*0x6ee79b*/
                              (Type *)&stru_87F5F0.__pad_58[416],
                              (int)&v22,
                              &v22,
                              (int16_t *)&v21,
                              *(unsigned int *)(v15 + 1660),
                              TileIndex,
                              v9,
                              0,
                              1,
                              1,
                              0,
                              0,
                              0,
                              1,
                              (int16_t *)&a2,
                              0,
                              0);
          if ( *(unsigned int *)v19 == g_BuildingLoadQueue_Array.?[1] ) /*0x6ee79f*/
          {
            TeamClass::SelectMember((int)this, 0); /*0x6ee7c7*/
          }
          else
          {
            v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x6ee7be*/
            TeamClass::SelectMember((int)this, (int)v17); /*0x6ee7bf*/
          }
          v3 = this; /*0x6ee7cc*/
        }
      }
    }
    if ( !v3->queuedFocus ) /*0x6ee7d0*/
    {
      v3->stepCompleted = 1; /*0x6ee7d8*/
      return; /*0x6ee7e5*/
    }
  LABEL_22:
    TeamClass::UpdateMembers(v3); /*0x6ee7e8*/
}
} // namespace gamemd

// 0x6EEEA0
namespace gamemd {
unsigned int * TeamClass::ScoreMember(unsigned int *a2, int a3, int a4) {
    double v4; // st7
    unsigned int *result; // eax
    int v6; // ecx
    int v7; // esi
    int v8; // edx
    unsigned int *v9; // esi
    int v10; // ecx
    unsigned int *v11; // eax
    int v12; // edx
    unsigned int *v13; // eax
    int v14; // edx
    int TileData; // eax
    int v16; // ebx
    int v17; // ecx
    int v18; // edx
    int v19; // eax
    int v20; // ebx
    int v21; // ecx
    int v22; // edx
    double v23; // [esp+0h] [ebp-88h]
    double v24; // [esp+0h] [ebp-88h]
    int v25; // [esp+18h] [ebp-70h]
    int v26; // [esp+1Ch] [ebp-6Ch]
    int v27; // [esp+20h] [ebp-68h]
    unsigned int *v28; // [esp+24h] [ebp-64h]
    int v29; // [esp+28h] [ebp-60h]
    int v30; // [esp+2Ch] [ebp-5Ch]
    int v32; // [esp+34h] [ebp-54h] BYREF
    int v33; // [esp+38h] [ebp-50h] BYREF
    int v34; // [esp+3Ch] [ebp-4Ch]
    int v35; // [esp+40h] [ebp-48h]
    int v36; // [esp+44h] [ebp-44h]
    int v37; // [esp+48h] [ebp-40h]
    int v38; // [esp+4Ch] [ebp-3Ch]
    int v39; // [esp+50h] [ebp-38h]
    int v40; // [esp+54h] [ebp-34h]
    int v41; // [esp+5Ch] [ebp-2Ch]
    int v42; // [esp+60h] [ebp-28h]
    int v43; // [esp+68h] [ebp-20h]
    int v44; // [esp+6Ch] [ebp-1Ch]
    char v45[12]; // [esp+70h] [ebp-18h] BYREF
    char v46[12]; // [esp+7Ch] [ebp-Ch] BYREF

    result = 0; /*0x6eeeb3*/
    v6 = a2[135]; /*0x6eeeb5*/
    v7 = 0; /*0x6eeebb*/
    v28 = 0; /*0x6eeebd*/
    v27 = -1; /*0x6eeec1*/
    v30 = v6; /*0x6eeecc*/
    v34 = *(unsigned int *)(v6 + 120); /*0x6eeed2*/
    v29 = 0; /*0x6eeed6*/
    if ( v34 > 0 ) /*0x6eeeda*/
    {
      v8 = a3; /*0x6eeee0*/
      while ( 1 ) /*0x6eeeef*/
      {
        v9 = *(unsigned int **)(*(unsigned int *)(v6 + 108) + 4 * v7); /*0x6eeeef*/
        if ( (TeamClass *)v9[328] == this ) /*0x6eeefc*/
        {
          v10 = -1; /*0x6eef02*/
          switch ( v8 ) /*0x6eef0e*/
          {
            case 0: /*0x6eef0e*/
              v11 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, char *))(*v9 + 72))(v9, v45); /*0x6eef1e*/
              IDA_LOWORD(v25) = *v11 / 256; /*0x6eef31*/
              v12 = a2[135]; /*0x6eef42*/
              IDA_HIWORD(v25) = v11[1] / 256; /*0x6eef4b*/
              v32 = v25; /*0x6eef58*/
              v10 = 0x7FFFFFFF - CellClass::GetTileData((int16_t *)&v32, v12); /*0x6eef6d*/
              break; /*0x6eef6f*/
            case 1: /*0x6eef0e*/
              v13 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, char *))(*v9 + 72))(v9, v46); /*0x6eef7d*/
              IDA_LOWORD(v26) = *v13 / 256; /*0x6eef90*/
              v14 = a2[135]; /*0x6eefa1*/
              IDA_HIWORD(v26) = v13[1] / 256; /*0x6eefaa*/
              v33 = v26; /*0x6eefb7*/
              TileData = CellClass::GetTileData((int16_t *)&v33, v14); /*0x6eefc2*/
              goto LABEL_10; /*0x6eefc7*/
            case 2: /*0x6eef0e*/
              v16 = a2[39]; /*0x6eefd5*/
              v41 = a2[40]; /*0x6eefda*/
              v42 = a2[41]; /*0x6eefe9*/
              v17 = v9[40]; /*0x6eeff5*/
              v35 = v9[39] - v16; /*0x6eeff8*/
              v18 = v9[41]; /*0x6eeffe*/
              v36 = v17 - v41; /*0x6ef001*/
              __asm { fild [esp+88h+var_44] } /*0x6ef009*/
              v37 = v18 - v42; /*0x6ef00f*/
              __asm /*0x6ef013*/
              {
                fild [esp+88h+var_40]
                fild [esp+88h+var_48]
                fld st
                fmul st, st(1)
                fld st(2)
                fmul st, st(3)
                faddp st(1), st
                fld st(3)
                fmul st, st(4)
                faddp st(1), st
                fstp [esp+88h+var_88]; double
                fstp st
                fstp st
                fstp st
              }
              Math::Sqrt(v23); /*0x6ef034*/
              IDA_LOWORD(v19) = Math::RoundToInt(v4); /*0x6ef03c*/
              v10 = 0x7FFFFFFF - v19; /*0x6ef046*/
              break; /*0x6ef048*/
            case 3: /*0x6eef0e*/
              v20 = a2[39]; /*0x6ef053*/
              v43 = a2[40]; /*0x6ef058*/
              v44 = a2[41]; /*0x6ef065*/
              v21 = v9[40]; /*0x6ef073*/
              v38 = v9[39] - v20; /*0x6ef076*/
              v22 = v9[41]; /*0x6ef07e*/
              v39 = v21 - v43; /*0x6ef083*/
              __asm { fild [esp+88h+var_38] } /*0x6ef089*/
              v40 = v22 - v44; /*0x6ef08d*/
              __asm /*0x6ef091*/
              {
                fild [esp+88h+var_34]
                fild [esp+88h+var_3C]
                fld st
                fmul st, st(1)
                fld st(2)
                fmul st, st(3)
                faddp st(1), st
                fld st(3)
                fmul st, st(4)
                faddp st(1), st
                fstp [esp+88h+var_88]; double
                fstp st
                fstp st
                fstp st
              }
              Math::Sqrt(v24); /*0x6ef0b2*/
              IDA_LOWORD(TileData) = Math::RoundToInt(v4); /*0x6ef0ba*/
  LABEL_10:
              v10 = TileData; /*0x6ef0bf*/
              break; /*0x6ef0bf*/
            default:
              break;
          }
          if ( v10 <= v27 ) /*0x6ef0c5*/
          {
            result = v28; /*0x6ef0d3*/
          }
          else
          {
            result = v9; /*0x6ef0c7*/
            v27 = v10; /*0x6ef0c9*/
            v28 = v9; /*0x6ef0cd*/
          }
        }
        v7 = ++v29; /*0x6ef0df*/
        if ( v29 >= v34 ) /*0x6ef0e6*/
          break; /*0x6ef0e6*/
        v8 = a3; /*0x6eeee5*/
        v6 = v30; /*0x6eeee8*/
      }
    }
    return result; /*0x6ef0ec*/
}
} // namespace gamemd

// 0x6EFA10
namespace gamemd {
void TeamClass::SelectDeploymentTarget(int a2, char a3) {
    double v3; // st7
    FootClass *firstUnit; // esi
    HouseClass **i; // edi
    int v6; // ebx
    HouseClass *v7; // esi
    int enemyHouseIndex; // eax
    int *StartCoords; // eax
    int v10; // ebx
    int v11; // ecx
    char v12; // al
    int16_t v13; // cx
    int16_t v14; // ax
    unsigned int *v15; // eax
    int v16; // ecx
    int v17; // edx
    int v18; // eax
    int v19; // eax
    int v20; // eax
    void *v21; // eax
    double v22; // [esp+0h] [ebp-58h]
    double v23; // [esp+8h] [ebp-50h]
    int16_t v24[2]; // [esp+1Ch] [ebp-3Ch] BYREF
    double v25; // [esp+20h] [ebp-38h] BYREF
    TeamClass *v26; // [esp+2Ch] [ebp-2Ch]
    double v27; // [esp+30h] [ebp-28h] BYREF
    double v28; // [esp+38h] [ebp-20h] BYREF
    int v29; // [esp+40h] [ebp-18h]
    int v30; // [esp+4Ch] [ebp-Ch]
    int v31; // [esp+50h] [ebp-8h]
    int v32; // [esp+54h] [ebp-4h]

    v26 = this; /*0x6efa21*/
    if ( a3 ) /*0x6efa25*/
    {
      firstUnit = this->firstUnit; /*0x6efa2b*/
      IDA_LODWORD(v25) = -1; /*0x6efa2e*/
      for ( i = (HouseClass **)firstUnit; firstUnit; firstUnit = firstUnit->nextTeamMember ) /*0x6efa3a*/
      {
        v6 = *(unsigned int *)((*((int (__thiscall **)(FootClass *))firstUnit->vtable1 + 33))(firstUnit) + 1532); /*0x6efa46*/
        if ( (uint8_t)TechnoClass::IsDeployed((TechnoClass *)firstUnit) /*0x6efa71*/
          && (firstUnit->isTeamLeader || (*((int (__thiscall **)(FootClass *))firstUnit->vtable1 + 11))(firstUnit) == 2)
          && v6 > IDA_SLODWORD(v25) )
        {
          i = (HouseClass **)firstUnit; /*0x6efa73*/
          IDA_LODWORD(v25) = v6; /*0x6efa75*/
        }
      }
      v7 = 0; /*0x6efa83*/
      if ( i ) /*0x6efa87*/
      {
        enemyHouseIndex = i[135]->enemyHouseIndex; /*0x6efa8f*/
        if ( enemyHouseIndex != -1 ) /*0x6efa98*/
          v7 = (HouseClass *)*((unsigned int *)stru_A80220.? + enemyHouseIndex); /*0x6efaa0*/
      }
      StartCoords = HouseClass::GetStartCoords(i[135], &v28); /*0x6efaae*/
      v10 = *StartCoords; /*0x6efab3*/
      v11 = StartCoords[1]; /*0x6efab7*/
      v30 = *StartCoords; /*0x6efaba*/
      v31 = v11; /*0x6efabe*/
      v32 = StartCoords[2]; /*0x6efac5*/
      if ( v7 ) /*0x6efac9*/
      {
        v15 = HouseClass::GetStartCoords(v7, &v28); /*0x6efaf7*/
        v16 = v15[1] - v31; /*0x6efb0f*/
        v17 = v15[2]; /*0x6efb11*/
        IDA_LODWORD(v28) = *v15 - v10; /*0x6efb14*/
        __asm { fild [esp+58h+var_20] } /*0x6efb18*/
        IDA_LODWORD(v25) = -v16; /*0x6efb1e*/
        v29 = v17; /*0x6efb22*/
        __asm /*0x6efb26*/
        {
          fstp [esp+58h+var_50]; double
          fild dword ptr [esp+58h+var_38]
          fstp [esp+58h+var_58]; double
        }
        Math::CalcAngle(v22, v23); /*0x6efb31*/
        __asm { fsub ds:dbl_7E2820 } /*0x6efb36*/
        __asm { fmul ds:dbl_7E2818 }
        v14 = Math::RoundToInt(v3); /*0x6efb45*/
        IDA_LOWORD(v25) = v14; /*0x6efb4a*/
      }
      else
      {
        v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 255); /*0x6efadc*/
        IDA_LOBYTE(v13) = 0; /*0x6efae1*/
        IDA_HIBYTE(v13) = v12; /*0x6efae3*/
        v14 = v13; /*0x6efaea*/
      }
      IDA_LODWORD(v25) = v14 - 0x3FFF; /*0x6efb61*/
      __asm { fild dword ptr [esp+48h+var_38] } /*0x6efb65*/
      __asm { fmul ds:dbl_7E2810 }
      IDA_LODWORD(v27) = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3444) << 8; /*0x6efb78*/
      __asm /*0x6efb7c*/
      {
        fstp [esp+48h+var_38]
        fild dword ptr [esp+48h+var_28]
      }
      __asm
      {
        fstp qword ptr [esp+50h+var_20]
        fild [esp+50h+var_8]
        fstp [esp+50h+var_28]
      }
      Math::SinCos(v25); /*0x6efb9a*/
      __asm /*0x6efb9f*/
      {
        fmul qword ptr [esp+50h+var_20]
        fsubr [esp+50h+var_28]
      }
      IDA_LOWORD(v18) = Math::RoundToInt(v3); /*0x6efba7*/
      IDA_LODWORD(v27) = v18; /*0x6efbae*/
      Math::ArcTan2(v25); /*0x6efbb2*/
      __asm { fmul qword ptr [esp+58h+var_20] } /*0x6efbb7*/
      __asm { fiadd [esp+48h+var_C] }
      IDA_LOWORD(v19) = Math::RoundToInt(v3); /*0x6efbc2*/
      IDA_LOWORD(v25) = v19 / 256; /*0x6efbd7*/
      IDA_WORD1(v25) = IDA_SLODWORD(v27) / 256; /*0x6efbef*/
      *(unsigned int *)v24 = IDA_LODWORD(v25); /*0x6efc01*/
      IDA_LODWORD(v25) = 0; /*0x6efc0d*/
      v20 = ((int (__thiscall *)(HouseClass **))(*i)->occupiablesCount)(i); /*0x6efc1e*/
      *(unsigned int *)v24 = *LayerClass::Pathfinding_Find( /*0x6efc4b*/
                          (Type *)&stru_87F5F0.__pad_58[416],
                          (int)&v27,
                          &v27,
                          v24,
                          *(unsigned int *)(v20 + 1660),
                          -1,
                          0,
                          0,
                          3,
                          3,
                          0,
                          0,
                          0,
                          1,
                          (int16_t *)&v25,
                          0,
                          0);
      v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x6efc4f*/
      TeamClass::SelectMember((int)v26, (int)v21); /*0x6efc59*/
      this = v26; /*0x6efc5e*/
    }
    TeamClass::UpdateMembers(this); /*0x6efc62*/
}
} // namespace gamemd

// 0x6F0130
namespace gamemd {
void TeamClass::CheckMemberSuperWeapon(int this, int a2, int a3) {
    int *v3; // esi
    int v4; // ebx
    int *v5; // ebp
    int v6; // edi
    int v7; // ebx
    int *v8; // edi
    int *v9; // edx
    int v10; // esi
    int v11; // ecx
    int v12; // eax
    int v13; // edx
    int v14; // ecx
    int v15; // eax
    int v16; // ebp
    int v17; // esi
    unsigned int *v18; // eax
    int v19; // eax
    unsigned int *v20; // eax
    int v21; // edx
    int v22; // ecx
    int v23; // [esp+14h] [ebp-20h] BYREF
    int DefaultTimer; // [esp+18h] [ebp-1Ch]
    unsigned int v25[3]; // [esp+1Ch] [ebp-18h] BYREF
    unsigned int v26[3]; // [esp+28h] [ebp-Ch] BYREF
    int v27; // [esp+38h] [ebp+4h]
    int v28; // [esp+38h] [ebp+4h]

    v3 = *(int **)(this + 84); /*0x6f0136*/
    v4 = -1; /*0x6f0139*/
    v23 = this; /*0x6f013f*/
    v5 = v3; /*0x6f0143*/
    if ( v3 ) /*0x6f0145*/
    {
      do /*0x6f0188*/
      {
        v6 = *(unsigned int *)((*(int (__thiscall **)(int *))(*v3 + 132))(v3) + 1532); /*0x6f0151*/
        if ( TechnoClass::IsDeployed((int)v3) /*0x6f017a*/
          && (*((unsigned char *)v3 + 1673) || (*(int (__thiscall **)(int *))(*v3 + 44))(v3) == 2)
          && v6 > v4 )
        {
          v5 = v3; /*0x6f017c*/
          v4 = v6; /*0x6f017e*/
        }
        v3 = (int *)v3[374]; /*0x6f0180*/
      }
      while ( v3 ); /*0x6f0188*/
      this = v23; /*0x6f018a*/
    }
    v7 = 0; /*0x6f018e*/
    if ( !v5 ) /*0x6f0192*/
      goto LABEL_33; /*0x6f0192*/
    v8 = (int *)v5[135]; /*0x6f0198*/
    DefaultTimer = 0; /*0x6f019e*/
    if ( v8[153] <= 0 ) /*0x6f01aa*/
      goto LABEL_33; /*0x6f01aa*/
    v9 = (int *)v8[150]; /*0x6f01b0*/
    v10 = v8[153]; /*0x6f01b6*/
    do /*0x6f01d7*/
    {
      v11 = *(unsigned int *)(*(unsigned int *)(*v9 + 40) + 180); /*0x6f01bd*/
      if ( v11 == 3 ) /*0x6f01c6*/
        v7 = *v9; /*0x6f01c8*/
      if ( v11 == 4 ) /*0x6f01cd*/
        DefaultTimer = *v9; /*0x6f01cf*/
      ++v9; /*0x6f01d3*/
      --v10; /*0x6f01d6*/
    }
    while ( v10 ); /*0x6f01d7*/
    if ( !v7 || !DefaultTimer ) /*0x6f01e7*/
    {
  LABEL_32:
      this = v23; /*0x6f038d*/
  LABEL_33:
      *(unsigned char *)(this + 128) = 1; /*0x6f0391*/
      return; /*0x6f0391*/
    }
    if ( !*(unsigned char *)(v7 + 111) || HouseClass::GetPowerRatio(v8) < 1.0 ) /*0x6f020a*/
    {
      v21 = *(unsigned int *)(v7 + 48); /*0x6f032b*/
      v22 = *(unsigned int *)(v7 + 56); /*0x6f032e*/
      if ( v21 != -1 ) /*0x6f0334*/
      {
        if ( (int)dword_A8ED84 - v21 >= v22 ) /*0x6f033f*/
        {
          v28 = 0; /*0x6f0381*/
          goto LABEL_28; /*0x6f0389*/
        }
        v22 -= (int)dword_A8ED84 - v21; /*0x6f0341*/
      }
      v28 = v22; /*0x6f0343*/
  LABEL_28:
      DefaultTimer = Super::GetDefaultTimer((unsigned int *)v7); /*0x6f0347*/
      if ( *(unsigned char *)(v7 + 109) && 1.0 - *(float *)&dword_8871E0->? >= (double)v28 / (double)DefaultTimer ) /*0x6f037d*/
        return; /*0x6f037d*/
      goto LABEL_32; /*0x6f037d*/
    }
    v12 = GetSuperWeaponTypeFlag(*(unsigned int *)(a2 + 4)); /*0x6f0217*/
    v25[0] = v5[39]; /*0x6f0228*/
    v25[1] = v5[40]; /*0x6f022f*/
    v13 = *v5; /*0x6f0233*/
    v25[2] = v5[41]; /*0x6f0239*/
    v14 = *(unsigned int *)(v23 + 36); /*0x6f0241*/
    IDA_LOBYTE(v14) = *(unsigned char *)(v14 + 247); /*0x6f0244*/
    v15 = (*(int (__thiscall **)(int *, int, unsigned int *, int))(v13 + 964))(v5, v12, v25, v14); /*0x6f0253*/
    v16 = v23; /*0x6f0259*/
    v17 = v15; /*0x6f025d*/
    if ( v15 ) /*0x6f0261*/
    {
      v18 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned int *))(**(unsigned int **)(v23 + 52) + 72))(*(unsigned int *)(v23 + 52), v26); /*0x6f0271*/
      IDA_LOWORD(v27) = *v18 / 256; /*0x6f0284*/
      IDA_HIWORD(v27) = v18[1] / 256; /*0x6f029c*/
      v19 = *(unsigned int *)(v7 + 40); /*0x6f02a5*/
      v23 = v27; /*0x6f02a8*/
      SuperWeapon::FireSuperWeaponHouseClass((void *)v8, *(unsigned int *)(v19 + 180), (int)&v23); /*0x6f02b6*/
      v20 = (unsigned int *)(*(int (__thiscall **)(int, unsigned int *))(*(unsigned int *)v17 + 72))(v17, v26); /*0x6f02c4*/
      IDA_LOWORD(v27) = *v20 / 256; /*0x6f02d7*/
      IDA_HIWORD(v27) = v20[1] / 256; /*0x6f02ef*/
      v23 = v27; /*0x6f02fc*/
      SuperWeapon::FireSuperWeaponHouseClass((void *)v8, *(unsigned int *)(*(unsigned int *)(DefaultTimer + 40) + 180), (int)&v23); /*0x6f030d*/
      TeamClass::SelectMember(v16, v17); /*0x6f0315*/
    }
    *(unsigned char *)(v16 + 128) = 1; /*0x6f031b*/
}
} // namespace gamemd

// 0x725FA0
namespace gamemd {
int TriggerClass::Construct(int this, int a2) {
    int v3; // ecx
    int v4; // eax
    int v5; // eax
    int v6; // eax
    unsigned char *v7; // eax
    void *vtable0; // ecx

    AbstractClass::Constructor((AbstractClass *)this); /*0x725fa4*/
    *(unsigned int *)(this + 36) = a2; /*0x725faf*/
    *(unsigned int *)(this + 40) = 0; /*0x725fb2*/
    *(unsigned int *)(this + 44) = 0; /*0x725fb5*/
    *(unsigned char *)(this + 48) = 0; /*0x725fb8*/
    v3 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x725fbb*/
    *(unsigned int *)(this + 60) = 0; /*0x725fc1*/
    *(unsigned int *)(this + 52) = v3; /*0x725fc4*/
    *(unsigned int *)(this + 64) = 0; /*0x725fc7*/
    *(unsigned char *)(this + 68) = 1; /*0x725fca*/
    *(unsigned int *)this = 0; /*0x725fce*/
    *(unsigned int *)(this + 4) = 0; /*0x725fd4*/
    *(unsigned int *)(this + 8) = 0; /*0x725fdb*/
    *(unsigned int *)(this + 12) = 0; /*0x725fe2*/
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x72601b*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726028*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x726037*/
    }
    if ( g_BuildingLoadQueue_Array.unknown___2 < g_BuildingLoadQueue_Array.ExitCoord[2] /*0x72606e*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.FoundationOutside[0]) || !g_BuildingLoadQueue_Array.ExitCoord[2])
      && g_BuildingLoadQueue_Array.DeployFacing > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ExitCoord[0] + 8))(
           g_BuildingLoadQueue_Array.ExitCoord,
           g_BuildingLoadQueue_Array.ExitCoord[2] + g_BuildingLoadQueue_Array.DeployFacing,
           0) )
    {
      v5 = g_BuildingLoadQueue_Array.unknown___2++; /*0x72607b*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v5) = this; /*0x72608a*/
    }
    if ( dword_A8EAF8 < dword_A8EAF0 /*0x7260c1*/
      || (byte_A8EAF5 || !dword_A8EAF0)
      && dword_A8EAFC > 0
      && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(dword_A8EAE8 + 8))(
           &dword_A8EAE8,
           dword_A8EAF0 + dword_A8EAFC,
           0) )
    {
      v6 = dword_A8EAF8++; /*0x7260ce*/
      *((unsigned int *)dword_A8EAEC + v6) = this; /*0x7260dd*/
    }
    if ( *(unsigned int *)(this + 36) ) /*0x7260e0*/
    {
      if ( (BuildingClass::ProcessUpgradeEffects((BuildingClass *)this), v7 = *(unsigned char **)(this + 36), !v7[159]) /*0x726121*/
        || (vtable0 = dword_A8B230[43].vtable0) == 0 && !v7[156]
        || vtable0 == (void *)1 && !v7[157]
        || vtable0 == (void *)2 && !v7[158] )
      {
        *(unsigned char *)(this + 68) = 0; /*0x726129*/
      }
    }
    return this; /*0x72612e*/
}
} // namespace gamemd

// 0x726630
namespace gamemd {
int TriggerClass::Create() {
    int v2; // eax
    char *v3; // ecx
    int v4; // eax

    if ( !this ) /*0x726637*/
      return 0; /*0x72667f*/
    v2 = 0; /*0x72663f*/
    if ( dword_A8EAF8 <= 0 ) /*0x726643*/
    {
  LABEL_6:
      v4 = RA2_OPNEW(0x48u); /*0x72665c*/
      if ( v4 ) /*0x726668*/
        return TriggerClass::Construct(v4, (int)this); /*0x726675*/
      return 0; /*0x726668*/
    }
    v3 = (char *)dword_A8EAEC; /*0x72664b*/
    while ( this != *(TriggerClass **)(*(unsigned int *)v3 + 36) ) /*0x726652*/
    {
      ++v2; /*0x726654*/
      v3 += 4; /*0x726655*/
      if ( v2 >= dword_A8EAF8 ) /*0x72665a*/
        goto LABEL_6; /*0x72665a*/
    }
    return *((unsigned int *)dword_A8EAEC + v2); /*0x726672*/
}
} // namespace gamemd

// 0x726950
namespace gamemd {
void ** TriggerClass::CheckCondition(char a2) {
    int v3; // eax
    int v4; // eax
    int v5; // eax
    TriggerClass *v7; // [esp+8h] [ebp-4h] BYREF

    this->AbstractClass = 0; /*0x726956*/
    this->? = 0; /*0x72695c*/
    this->? = 0; /*0x726963*/
    this->? = 0; /*0x72696a*/
    AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x726971*/
    v7 = this; /*0x726986*/
    v3 = (*(int (__thiscall **)(unsigned int *, TriggerClass **))(dword_A8EAE8 + 16))(&dword_A8EAE8, &v7); /*0x72698a*/
    if ( v3 != -1 && v3 < dword_A8EAF8 && v3 < --dword_A8EAF8 ) /*0x7269a5*/
    {
      do /*0x7269bd*/
      {
        ++v3; /*0x7269ad*/
        *((unsigned int *)dword_A8EAEC + v3 - 1) = *((unsigned int *)dword_A8EAEC + v3); /*0x7269b1*/
      }
      while ( v3 < dword_A8EAF8 ); /*0x7269bd*/
    }
    v7 = this; /*0x7269cf*/
    v4 = (*(int (__thiscall **)(int *, TriggerClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x7269d3*/
           &g_BuildingLoadQueue_Array.LightVisibility,
           &v7);
    if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x7269e3*/
    {
      --g_BuildingLoadQueue_Array.LightBlueTint; /*0x7269e8*/
      for ( ; /*0x7269ee*/
            v4 < g_BuildingLoadQueue_Array.LightBlueTint;
            *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                           + 4 * v4) )
      {
        ++v4; /*0x7269f6*/
      }
    }
    v7 = this; /*0x726a18*/
    v5 = (*(int (__thiscall **)(int *, TriggerClass **))(g_BuildingLoadQueue_Array.ExitCoord[0] + 16))( /*0x726a1c*/
           g_BuildingLoadQueue_Array.ExitCoord,
           &v7);
    if ( v5 != -1 && v5 < g_BuildingLoadQueue_Array.unknown___2 ) /*0x726a2c*/
    {
      --g_BuildingLoadQueue_Array.unknown___2; /*0x726a31*/
      for ( ; /*0x726a37*/
            v5 < g_BuildingLoadQueue_Array.unknown___2;
            *(unsigned int *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v5 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.ExitCoord[1]
                                                                                         + 4 * v5) )
      {
        ++v5; /*0x726a3f*/
      }
    }
    AbstractClass::DTOR((AbstractClass *)this); /*0x726a53*/
    if ( (a2 & 1) != 0 ) /*0x726a5d*/
      RA2_OPDEL(this); /*0x726a60*/
    return this; /*0x726a6a*/
}
} // namespace gamemd

// 0x727240
namespace gamemd {
char TriggerTypeClass::LoadFromINI(uint8_t ***a2) {
    char *v3; // esi
    HouseTypeClass *v4; // edx
    char *v5; // esi
    int v6; // edi
    TriggerTypeClass *v7; // eax
    TriggerTypeClass *v8; // eax
    char *v9; // eax
    char *v10; // eax
    char *v11; // eax
    char *v12; // eax
    char *v13; // eax
    char *v14; // eax
    char *v15; // eax
    int v16; // eax
    int v17; // edi
    TActionClass *v18; // eax
    TriggerTypeClass *v19; // esi
    char *v20; // eax
    int v21; // eax
    ScriptAction *v22; // edi
    int v23; // ebx
    TActionClass *v24; // eax
    ScriptAction *v25; // esi
    char Destination[48]; // [esp+8h] [ebp-234h] BYREF
    char v28; // [esp+38h] [ebp-204h]
    char String[512]; // [esp+3Ch] [ebp-200h] BYREF

    INIClass::ResetSection((INIClass *)a2); /*0x727253*/
    if ( !INIClass::GetString( /*0x72727b*/
            (INIClass *)a2,
            (uint8_t *)aTriggers,
            (uint8_t *)this->__pad_24,
            &g_INI_DefaultBuffer,
            String,
            512) )
      return 0; /*0x7275b5*/
    v3 = strtok(String, Str); /*0x727290*/
    if ( _strcmpi(v3, g_Str__none_) ) /*0x727298*/
      v4 = (HouseTypeClass *)*((unsigned int *)dword_A83C9C + SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)v3)); /*0x7272bb*/
    else
      v4 = *(HouseTypeClass **)dword_A83C9C; /*0x7272aa*/
    this->House = v4; /*0x7272cb*/
    v5 = strtok(0, Str); /*0x7272d6*/
    this->NextTrigger = 0; /*0x7272de*/
    if ( _strcmpi(v5, g_Str__none_) ) /*0x7272e4*/
    {
      if ( !_strcmpi(g_Str__none_, v5) || !_strcmpi(g_Str_none, v5) ) /*0x72730c*/
        goto LABEL_14; /*0x72730c*/
      v6 = 0; /*0x72731d*/
      if ( *(int *)FootClass_Array.? > 0 ) /*0x727321*/
      {
        while ( _strcmpi((char *)(*(unsigned int *)(FootClass_Array.?[0] + 4 * v6) + 36), v5) ) /*0x72733a*/
        {
          if ( ++v6 >= *(int *)FootClass_Array.? ) /*0x727344*/
            goto LABEL_11; /*0x727344*/
        }
        v8 = *(TriggerTypeClass **)(FootClass_Array.?[0] + 4 * v6); /*0x727367*/
        goto LABEL_15; /*0x72736a*/
      }
  LABEL_11:
      v7 = (TriggerTypeClass *)RA2_OPNEW(0xB4u); /*0x72734b*/
      if ( v7 ) /*0x727355*/
        v8 = (TriggerTypeClass *)TriggerTypeClass::Construct(v7, v5); /*0x72735a*/
      else
  LABEL_14:
        v8 = 0; /*0x72736c*/
  LABEL_15:
      this->NextTrigger = v8; /*0x72736e*/
    }
    v9 = strtok(0, Str); /*0x727374*/
    if ( v9 ) /*0x727384*/
    {
      strncpy(Destination, v9, 0x30u); /*0x727395*/
      v28 = 0; /*0x72739d*/
    }
    else
    {
      Destination[0] = 0; /*0x727386*/
    }
    if ( Destination != this->Name ) /*0x7273ab*/
    {
      qmemcpy(this->Name, Destination, 0x30u); /*0x7273b6*/
      this->Name[48] = v28; /*0x7273b8*/
    }
    v10 = strtok(0, Str); /*0x7273bf*/
    this->Enabled = v10 && !atoi(v10); /*0x7273e1*/
    v11 = strtok(0, Str); /*0x7273ee*/
    this->Difficulty[0] = v11 && atoi(v11); /*0x727407*/
    v12 = strtok(0, Str); /*0x72741d*/
    this->Difficulty[1] = v12 && atoi(v12); /*0x727436*/
    v13 = strtok(0, Str); /*0x72744c*/
    this->Difficulty[2] = v13 && atoi(v13); /*0x727465*/
    v14 = strtok(0, Str); /*0x72747b*/
    if ( v14 && atoi(v14) ) /*0x727488*/
      this->MustTransfer = 1; /*0x727494*/
    if ( INIClass::GetString( /*0x7274bb*/
           (INIClass *)a2,
           (uint8_t *)aEvents,
           (uint8_t *)this->__pad_24,
           &g_INI_DefaultBuffer,
           String,
           512) )
    {
      v15 = strtok(String, Str); /*0x7274ce*/
      v16 = atoi(v15); /*0x7274d4*/
      if ( v16 ) /*0x7274de*/
      {
        v17 = v16; /*0x7274e0*/
        do /*0x727514*/
        {
          v18 = (TActionClass *)RA2_OPNEW(0x58u); /*0x7274e4*/
          if ( v18 ) /*0x7274ee*/
            v19 = (TriggerTypeClass *)TActionClass::TActionClass(v18); /*0x7274f7*/
          else
            v19 = 0; /*0x7274fb*/
          TriggerTypeClass::ParseActionData(v19); /*0x7274ff*/
          --v17; /*0x72750a*/
          v19->__pad_24[1] = (int)this->FirstEvent; /*0x72750b*/
          this->FirstEvent = (TEventClass *)v19; /*0x72750e*/
        }
        while ( v17 ); /*0x727514*/
      }
    }
    if ( INIClass::GetString( /*0x727537*/
           (INIClass *)a2,
           (uint8_t *)aActions,
           (uint8_t *)this->__pad_24,
           &g_INI_DefaultBuffer,
           String,
           512) )
    {
      v20 = strtok(String, Str); /*0x72754a*/
      v21 = atoi(v20); /*0x727550*/
      v22 = 0; /*0x727558*/
      this->FirstAction = 0; /*0x72755c*/
      if ( v21 ) /*0x727562*/
      {
        v23 = v21; /*0x727564*/
        do /*0x7275a3*/
        {
          v24 = (TActionClass *)RA2_OPNEW(0x94u); /*0x72756b*/
          if ( v24 ) /*0x727575*/
            v25 = (ScriptAction *)TActionClass::ctor(v24); /*0x72757e*/
          else
            v25 = 0; /*0x727582*/
          ScriptAction::ParseScriptActionParams(v25); /*0x727586*/
          if ( this->FirstAction ) /*0x72758b*/
            *(unsigned int *)v22->__pad_28 = v25; /*0x72759d*/
          else
            this->FirstAction = (TActionClass *)v25; /*0x727595*/
          --v23; /*0x7275a0*/
          v22 = v25; /*0x7275a1*/
        }
        while ( v23 ); /*0x7275a3*/
      }
    }
    return 1; /*0x7275a7*/
}
} // namespace gamemd

