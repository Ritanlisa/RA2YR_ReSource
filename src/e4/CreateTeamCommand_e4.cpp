// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/E4Recv_6BFA50_e4.hpp"
#include "e4/classes/E4Recv_6BFED0_e4.hpp"
#include "e4/classes/E4Recv_6C01D0_e4.hpp"
#include "e4/classes/E4Recv_6C04D0_e4.hpp"
#include "e4/classes/E4Recv_6C0650_e4.hpp"
#include "e4/classes/E4Recv_6C07D0_e4.hpp"
#include "e4/classes/E4Recv_6C0AD0_e4.hpp"
#include "e4/classes/E4Recv_6C0C50_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/E4Recv_6C0350_e4.hpp"
#include "e4/classes/E4Recv_6C0950_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Credits_e4.hpp"
#include "e4/classes/E4Recv_6C13D0_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/E4Recv_6C1CD0_e4.hpp"
#include "e4/classes/E4Recv_6C22D0_e4.hpp"
#include "e4/classes/E4Recv_6C2BD0_e4.hpp"
#include "e4/classes/E4Recv_6BFBD0_e4.hpp"
#include "e4/classes/E4Recv_6C1FD0_e4.hpp"
#include "e4/classes/E4Recv_6C2150_e4.hpp"
#include "e4/classes/E4Recv_6C1850_e4.hpp"
#include "e4/classes/E4Recv_6C2D50_e4.hpp"
#include "e4/classes/E4Recv_6C34D0_e4.hpp"
#include "e4/classes/E4Recv_6C2450_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/PlayerClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"  // G42.36 C2027 supply

// 0x535CF0
namespace gamemd {
int CreateTeamCommand::vt02()
{

  return (*(int (**)(void *))(*(unsigned int *)this + 16))(this);

}
// 0x537350
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_148()
{

  int v1; // eax
  unsigned int *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(((unsigned int *)(dword_A8B230))[373].referenceCount) << 8) + 128; /*0x537378*/
  v4[0] = (SHIWORD(((unsigned int *)(dword_A8B230))[373].nextArrayIndex) << 8) + 128; /*0x53737d*/
  v4[1] = v1; /*0x537386*/
  GroundHeight = 0; /*0x53738a*/
  GroundHeight = Cell::GetGroundHeight( (unsigned int *)(v4)); /*0x53739d*/
  ((Tactical *)((TacticalClass *)g_TacticalClass_Instance))->SetTacticalPosition(v4); /*0x5373a6*/
  result = (unsigned int *)dword_880990; /*0x5373ab*/
  if ( dword_880990 ) /*0x5373b2*/
    return ((Tactical *)((Tactical *)&dword_87F7E8))->MouseMove((unsigned int *)(&v3),(unsigned int *)(&word_A8F2F8)); /*0x5373c3*/
  return result; /*0x5373c8*/

}
}
// 0x537440
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_153()
{

  int v1; // eax
  unsigned int *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(((unsigned int *)(dword_A8B230))[373].NeedsSaveOrLink) << 8) + 128; /*0x537468*/
  v4[0] = (SHIWORD(((unsigned int *)(dword_A8B230))[373].referenceCount) << 8) + 128; /*0x53746d*/
  v4[1] = v1; /*0x537476*/
  GroundHeight = 0; /*0x53747a*/
  GroundHeight = Cell::GetGroundHeight( (unsigned int *)(v4)); /*0x53748d*/
  ((Tactical *)((TacticalClass *)g_TacticalClass_Instance))->SetTacticalPosition(v4); /*0x537496*/
  result = (unsigned int *)dword_880990; /*0x53749b*/
  if ( dword_880990 ) /*0x5374a2*/
    return ((Tactical *)((Tactical *)&dword_87F7E8))->MouseMove((unsigned int *)(&v3),(unsigned int *)(&word_A8F2F8)); /*0x5374b3*/
  return result; /*0x5374b8*/

}
}
// 0x537530
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_158()
{

  int v1; // eax
  unsigned int *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (SLOWORD(((unsigned int *)(dword_A8B230))[374].vtable0) << 8) + 128; /*0x537558*/
  v4[0] = (SHIWORD(((unsigned int *)(dword_A8B230))[373].NeedsSaveOrLink) << 8) + 128; /*0x53755d*/
  v4[1] = v1; /*0x537566*/
  GroundHeight = 0; /*0x53756a*/
  GroundHeight = Cell::GetGroundHeight( (unsigned int *)(v4)); /*0x53757d*/
  ((Tactical *)((TacticalClass *)g_TacticalClass_Instance))->SetTacticalPosition(v4); /*0x537586*/
  result = (unsigned int *)dword_880990; /*0x53758b*/
  if ( dword_880990 ) /*0x537592*/
    return ((Tactical *)((Tactical *)&dword_87F7E8))->MouseMove((unsigned int *)(&v3),(unsigned int *)(&word_A8F2F8)); /*0x5375a3*/
  return result; /*0x5375a8*/

}
}
// 0x5386A0
namespace gamemd {
AbstractClass * * CreateTeamCommand::performAction_241(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5386ac*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5386b2*/
    if ( a3 ) /*0x5386b8*/
      v4 = a3; /*0x5386ce*/
    else
      v4 = (unsigned int *)(__2_YAPAXI_Z(4 * a2)); /*0x5386ca*/
    *((unsigned char *)this + 12) = 1; /*0x5386d2*/
    if ( !v4 ) /*0x5386d6*/
      return 0; /*0x53874a*/
    if ( *((unsigned int *)this + 1) ) /*0x5386d8*/
    {
      v5 = *((unsigned int *)this + 2); /*0x5386df*/
      if ( a2 < v5 ) /*0x5386e4*/
        v5 = a2; /*0x5386e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5386ec*/
        ++i; /*0x5386f1*/
      if ( *((unsigned char *)this + 13) ) /*0x5386fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x538709*/
        *((unsigned int *)this + 1) = 0; /*0x538711*/
      }
    }
    *((unsigned int *)this + 1) = (unsigned int)(v4); /*0x53871a*/
    *((unsigned int *)this + 2) = a2; /*0x538722*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x538725*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x53872e*/
  }
  v7 = *((unsigned int *)this + 2); /*0x538731*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x538739*/
    *((unsigned int *)this + 4) = v7; /*0x53873b*/
  return 1; /*0x53873e*/

}
}
// 0x538A20
namespace gamemd {
void * CreateTeamCommand::performAction_243(rc_ptr_base * Block, char a2)
{

  int v3; // eax
  char *v4; // ebp
  ComPtr *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x538a2b*/
  {
    v3 = *((unsigned int *)this - 1); /*0x538a2d*/
    v4 = (char *)this - 4; /*0x538a31*/
    v5 = (ComPtr *)((char *)this + 8 * v3); /*0x538a34*/
    v6 = v3 - 1; /*0x538a37*/
    if ( v6 >= 0 ) /*0x538a38*/
    {
      v7 = v6 + 1; /*0x538a3b*/
      do /*0x538a4f*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x538a3e*/
        *(unsigned int *)v5->__pad_0 = (unsigned int)(&vt_rc_ptr); /*0x538a43*/
        ((ComPtr *)(v5))->Release(); /*0x538a49*/
        --v7; /*0x538a4e*/
      }
      while ( v7 ); /*0x538a4f*/
    }
    if ( (a2 & 1) != 0 ) /*0x538a55*/
      __3_YAXPAX_Z(v4); /*0x538a58*/
    return v4; /*0x538a60*/
  }
  else
  {
    *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_rc_ptr); /*0x538a6a*/
    ((ComPtr *)((ComPtr *)this))->Release(); /*0x538a70*/
    if ( (a2 & 1) != 0 ) /*0x538a78*/
      __3_YAXPAX_Z(this); /*0x538a7b*/
    return this->__pad_0; /*0x538a83*/
  }

}
}
// 0x6A6A00
namespace gamemd {
int CreateTeamCommand::performAction_245(char a2, int a3)
{

  int v3; // eax
  CreateTeamCommand *v4; // esi
  int v6; // eax
  int v7; // eax

  if ( !*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 424) ) /*0x6a6a09*/
  {
    v3 = a3; /*0x6a6a0f*/
    if ( a3 == -1 ) /*0x6a6a16*/
      v3 = *((unsigned int *)this + 5351); /*0x6a6a18*/
    v4 = (CreateTeamCommand *)((char *)this + 3988 * v3 + 5444); /*0x6a6a2b*/
    if ( a2 ) /*0x6a6a38*/
    {
      if ( *((unsigned int *)this + 997 * v3 + 1378) ) /*0x6a6a3a*/
      {
        --*((unsigned int *)this + 997 * v3 + 1379); /*0x6a6a4b*/
        (*(void (**)(CreateTeamCommand *, unsigned int))(*(unsigned int *)this->__pad_0 + 56))(this, 0); /*0x6a6a50*/
        return 1; /*0x6a6a57*/
      }
      return 0; /*0x6a6a3f*/
    }
    v6 = 26; /*0x6a6a68*/
    if ( ((unsigned int *)(dword_A8B230))[374].NeedsSaveOrLink ) /*0x6a6a60*/
      v6 = 18; /*0x6a6a6f*/
    v7 = (g_DSurface_ViewBounds - g_SidebarBounds - v6 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a6aa4*/
    if ( dword_A83D4C == (unsigned int)((gamemd::Object *))HouseClass_Observer ) /*0x6a6aae*/
    {
      if ( *(unsigned int *)&v4->__pad_14[48] + v7 / 2 < dword_884CF8 ) /*0x6a6ac2*/
        goto LABEL_13; /*0x6a6ac2*/
    }
    else if ( 2 * (v7 + *(unsigned int *)&v4->__pad_14[48]) < *(unsigned int *)&v4->__pad_14[64] ) /*0x6a6ad2*/
    {
LABEL_13:
      ++*(unsigned int *)&v4->__pad_14[52]; /*0x6a6ad4*/
      (*(void (**)(CreateTeamCommand *, unsigned int))(*(unsigned int *)this->__pad_0 + 56))(this, 0); /*0x6a6adf*/
      return 1; /*0x6a6ae6*/
    }
  }
  return 0; /*0x6a6a53*/

}
}
// 0x731060
namespace gamemd {
void CreateTeamCommand::performAction_246()
{

  int v1; // ebx
  int i; // edi
  int v4; // esi
  int v5; // ecx

  v1 = dword_A8EC88; /*0x731061*/
  for ( i = 0; i < v1; ++i )
  {
    v4 = *((unsigned int *)dword_A8EC7C + i); /*0x731077*/
    if ( v4 )
    {
      v5 = *(unsigned int *)(v4 + 540); /*0x731083*/
      if ( (&dword_A8B238)[0] ? ((House*)(void *)v5)->IsHumanPlayer() : *(unsigned char *)(v5 + 493) )
      {
        if ( *(char **)(v4 + 532) == this - 1 ) /*0x7310a9*/
          *(unsigned int *)(v4 + 532) = (unsigned int)(-1); /*0x7310ab*/
        if ( *(unsigned char *)(v4 + 131) ) /*0x7310b5*/
          *(unsigned int *)(v4 + 532) = (unsigned int)(this - 1); /*0x7310bf*/
      }
    }
  }

}
}
// 0x535BD0
namespace gamemd {
char CreateTeamCommand::Stub(int a1)
{

  return 0; /*0x535bd2*/

}
} // namespace gamemd

// 0x535BF0
namespace gamemd {
char CreateTeamCommand::Do(int a1)
{

  return 0; /*0x535bf2*/

}
} // namespace gamemd

// 0x535C00
namespace gamemd {
unsigned int * CreateTeamCommand::Construct(int a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1)
{

  this->CreateTeamCommand_field_0x4 = (unsigned int)((void *)a2); /*0x535c06*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_CreateTeamCommandClass); /*0x535c09*/
  return this->__pad_0; /*0x535c0f*/

}
} // namespace gamemd

// 0x535C20
namespace gamemd {
ObjectClass * CreateTeamCommand::AddRef(void *a1_1)
{

  sprintf((char *const )((unsigned int *)((char *)&stru_A8EB00 + 2512)), "TeamCreate_%d", *(unsigned int *)&this->m_1[3]); /*0x535c2e*/
  return (unsigned int *)((char *)&stru_A8EB00 + 2512); /*0x535c3b*/

}
} // namespace gamemd

// 0x535C40
namespace gamemd {
wchar_t * CreateTeamCommand::Release(void *a1_1, void * aTxtCreateTeam)
{

  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x535c45*/
  StringCSF = GetStringCSF( (wchar_t *)(aTxtCreateTeam), 0, (const char *)(g_Str_File_Init_CPP), 6165); /*0x535c55*/
  swprintf((wchar_t *const)(unsigned int *)((char *)&stru_A8EB00 + 2672), (const size_t)StringCSF, v3); /*0x535c60*/
  return (wchar_t *)(unsigned int *)((char *)&stru_A8EB00 + 2672); /*0x535c6d*/

}
} // namespace gamemd

// 0x535C70
namespace gamemd {
wchar_t * CreateTeamCommand::ddtor()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_TEAM), 0, (const char *)(g_Str_File_Init_CPP), 6167); /*0x535c86*/

}
} // namespace gamemd

// 0x535C90
namespace gamemd {
wchar_t * CreateTeamCommand::Read(void *a1_1, void *a2_1, void * aTxtCreateTeamD)
{

  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x535c95*/
  StringCSF = GetStringCSF( (wchar_t *)(aTxtCreateTeamD), 0, (const char *)(g_Str_File_Init_CPP), 6169); /*0x535ca5*/
  swprintf((wchar_t *const)(unsigned int *)((char *)&stru_A8EB00 + 2672), (const size_t)StringCSF, v3); /*0x535cb0*/
  return (wchar_t *)(unsigned int *)((char *)&stru_A8EB00 + 2672); /*0x535cbd*/

}
} // namespace gamemd

// 0x535CC0
namespace gamemd {
void CreateTeamCommand::Undo(int a2)
{

  ((CreateTeamCommand *)*(char **)&this->m_1[3])->performAction_246(); /*0x535cc3*/

}
} // namespace gamemd

// 0x535CD0
namespace gamemd {
CreateTeamCommand * CreateTeamCommand::performAction_0(char a2)
{

  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_CommandClass); /*0x535cd9*/
  if ( (a2 & 1) != 0 ) /*0x535cdf*/
    __3_YAXPAX_Z(this); /*0x535ce2*/
  return (std::locale::facet *)this; /*0x535cec*/

}
} // namespace gamemd

// 0x535D00
namespace gamemd {
CommandClass * CreateTeamCommand::performAction_1(char a2)
{

  *this = (CommandClass)&vt_CommandClass; /*0x535d09*/
  if ( (a2 & 1) != 0 ) /*0x535d0f*/
    __3_YAXPAX_Z(this); /*0x535d12*/
  return (std::locale::facet *)this; /*0x535d1c*/

}
} // namespace gamemd

// 0x535D20
namespace gamemd {
char * CreateTeamCommand::performAction_2()
{

  return aStructuretab; /*0x535d25*/

}
} // namespace gamemd

// 0x535D30
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_3(void * aTxtStructureTa)
{

  return GetStringCSF( (wchar_t *)(aTxtStructureTa), 0, (const char *)(g_Str_File_Init_CPP), 6186); /*0x535d46*/

}
} // namespace gamemd

// 0x535D50
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_4()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 6188); /*0x535d66*/

}
} // namespace gamemd

// 0x535D70
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_5(void * aTxtStructureTa_0)
{

  return GetStringCSF( (wchar_t *)(aTxtStructureTa_0), 0, (const char *)(g_Str_File_Init_CPP), 6190); /*0x535d86*/

}
} // namespace gamemd

// 0x535D90
namespace gamemd {
char CreateTeamCommand::performAction_6()
{

  int _7342A0; // eax
  int v2; // eax
  unsigned int *v4; // [esp-4h] [ebp-4h]

  LOBYTE(_7342A0) = ((PlayerClass *)(&stru_880D2C))->HasPlayers(); /*0x535d95*/
  if ( (unsigned char)_7342A0 ) /*0x535d9c*/
  {
    ((SidebarClass *)(int)&dword_87F7E8)->SwitchTab( 0); /*0x535da5*/
    _7342A0 = UI_Create_7342A0(); /*0x535daa*/
    if ( _7342A0 ) /*0x535db1*/
    {
      v4 = (unsigned int *)_7342A0; /*0x535db5*/
      v2 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)_7342A0 + 400))(_7342A0, 0, 0); /*0x535dbc*/
      LOBYTE(_7342A0) = (unsigned char)(((BuildingPlacement *)dword_A83D4C)->Activate( v2, v4)); /*0x535dc9*/
    }
  }
  return _7342A0; /*0x535dce*/

}
} // namespace gamemd

// 0x535DE0
namespace gamemd {
char * CreateTeamCommand::performAction_7()
{

  return aDefensetab; /*0x535de5*/

}
} // namespace gamemd

// 0x535DF0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_8(void * aTxtDefenseTab)
{

  return GetStringCSF( (wchar_t *)(aTxtDefenseTab), 0, (const char *)(g_Str_File_Init_CPP), 6212); /*0x535e06*/

}
} // namespace gamemd

// 0x535E10
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_9()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 6214); /*0x535e26*/

}
} // namespace gamemd

// 0x535E30
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_10()
{

  return GetStringCSF( (wchar_t *)(aTxtDefenseTabD), 0, (const char *)(g_Str_File_Init_CPP), 6216); /*0x535e46*/

}
} // namespace gamemd

// 0x535E50
namespace gamemd {
char CreateTeamCommand::performAction_11()
{

  int _7342B0; // eax
  int v2; // eax
  unsigned int *v4; // [esp-4h] [ebp-4h]

  LOBYTE(_7342B0) = ((PlayerClass *)(&stru_881CC0))->HasPlayers(); /*0x535e55*/
  if ( (unsigned char)_7342B0 ) /*0x535e5c*/
  {
    ((SidebarClass *)(int)&dword_87F7E8)->SwitchTab( 1); /*0x535e65*/
    _7342B0 = UI_Create_7342B0(); /*0x535e6a*/
    if ( _7342B0 ) /*0x535e71*/
    {
      v4 = (unsigned int *)_7342B0; /*0x535e75*/
      v2 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)_7342B0 + 400))(_7342B0, 0, 0); /*0x535e7c*/
      LOBYTE(_7342B0) = (unsigned char)(((BuildingPlacement *)dword_A83D4C)->Activate( v2, v4)); /*0x535e89*/
    }
  }
  return _7342B0; /*0x535e8e*/

}
} // namespace gamemd

// 0x535EA0
namespace gamemd {
char * CreateTeamCommand::performAction_12()
{

  return aInfantrytab; /*0x535ea5*/

}
} // namespace gamemd

// 0x535EB0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_13()
{

  return GetStringCSF( (wchar_t *)(aTxtInfantryTab), 0, (const char *)(g_Str_File_Init_CPP), 6238); /*0x535ec6*/

}
} // namespace gamemd

// 0x535ED0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_14()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 6240); /*0x535ee6*/

}
} // namespace gamemd

// 0x535EF0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_15()
{

  return GetStringCSF( (wchar_t *)(aTxtInfantryTab_0), 0, (const char *)(g_Str_File_Init_CPP), 6242); /*0x535f06*/

}
} // namespace gamemd

// 0x535F10
namespace gamemd {
int CreateTeamCommand::performAction_16()
{

  int result; // eax

  result = ((PlayerClass *)(&stru_882C54))->HasPlayers(); /*0x535f15*/
  if ( (unsigned char)result ) /*0x535f1c*/
    return ((SidebarClass *)(int)&dword_87F7E8)->SwitchTab( 2); /*0x535f25*/
  return result; /*0x535f2a*/

}
} // namespace gamemd

// 0x535F30
namespace gamemd {
char * CreateTeamCommand::performAction_17()
{

  return aUnittab; /*0x535f35*/

}
} // namespace gamemd

// 0x535F40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_18()
{

  return GetStringCSF( (wchar_t *)(aTxtUnitTab), 0, (const char *)(g_Str_File_Init_CPP), 6259); /*0x535f56*/

}
} // namespace gamemd

// 0x535F60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_19()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 6261); /*0x535f76*/

}
} // namespace gamemd

// 0x535F80
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_20()
{

  return GetStringCSF( (wchar_t *)(aTxtUnitTabDesc), 0, (const char *)(g_Str_File_Init_CPP), 6263); /*0x535f96*/

}
} // namespace gamemd

// 0x535FA0
namespace gamemd {
int CreateTeamCommand::performAction_21()
{

  int result; // eax

  result = ((PlayerClass *)(&stru_883BE8))->HasPlayers(); /*0x535fa5*/
  if ( (unsigned char)result ) /*0x535fac*/
    return ((SidebarClass *)(int)&dword_87F7E8)->SwitchTab( 3); /*0x535fb5*/
  return result; /*0x535fba*/

}
} // namespace gamemd

// 0x536090
namespace gamemd {
SelectTeamCommand * CreateTeamCommand::performAction_22(char a2)
{

  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_CommandClass); /*0x536099*/
  if ( (a2 & 1) != 0 ) /*0x53609f*/
    __3_YAXPAX_Z(this); /*0x5360a2*/
  return (std::locale::facet *)this; /*0x5360ac*/

}
} // namespace gamemd

// 0x536180
namespace gamemd {
AddTeamCommand * CreateTeamCommand::performAction_23(char a2)
{

  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_CommandClass); /*0x536189*/
  if ( (a2 & 1) != 0 ) /*0x53618f*/
    __3_YAXPAX_Z(this); /*0x536192*/
  return (std::locale::facet *)this; /*0x53619c*/

}
} // namespace gamemd

// 0x536270
namespace gamemd {
CenterTeamCommand * CreateTeamCommand::performAction_24(char a2)
{

  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_CommandClass); /*0x536279*/
  if ( (a2 & 1) != 0 ) /*0x53627f*/
    __3_YAXPAX_Z(this); /*0x536282*/
  return (std::locale::facet *)this; /*0x53628c*/

}
} // namespace gamemd

// 0x536580
namespace gamemd {
TauntCommandClass * CreateTeamCommand::performAction_25(char a2)
{

  *(unsigned int *)this->CommandClass = (unsigned int)&vt_CommandClass;
  if ( (a2 & 1) != 0 ) /*0x53658f*/
    __3_YAXPAX_Z(this); /*0x536592*/
  return (std::locale::facet *)this; /*0x53659c*/

}
} // namespace gamemd

// 0x5365A0
namespace gamemd {
char * CreateTeamCommand::performAction_26()
{

  return aNextobject; /*0x5365a5*/

}
} // namespace gamemd

// 0x5365B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_27(void * aTxtNextObject)
{

  return GetStringCSF( (wchar_t *)(aTxtNextObject), 0, (const char *)(g_Str_File_Init_CPP), 6526); /*0x5365c6*/

}
} // namespace gamemd

// 0x5365D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_28()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_SELECTION), 0, (const char *)(g_Str_File_Init_CPP), 6528); /*0x5365e6*/

}
} // namespace gamemd

// 0x5365F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_29()
{

  return GetStringCSF( (wchar_t *)(aTxtNextObjectD), 0, (const char *)(g_Str_File_Init_CPP), 6530); /*0x536606*/

}
} // namespace gamemd

// 0x536610
namespace gamemd {
unsigned char * CreateTeamCommand::performAction_30()
{

  MapClass *v3; // esi
  unsigned char *v4; // eax
  AnimClass *result; // eax
  AnimClass *v6; // esi
  MapClass *v7; // [esp-4h] [ebp-4h]
  TacticalClass *v8; // [esp-4h] [ebp-4h]

  TacticalClass::SetObserverMode((TacticalClass *)&dword_87F7E8, 0); /*0x536617*/
  ((TacticalClass *)(TacticalClass *)&dword_87F7E8)->SetDisplayMode( 0, 0); /*0x536625*/
  ((BuildingClass *)((BuildingClass *)&dword_87F7E8))->TogglePower2(0); /*0x536631*/
  ((BuildingClass *)((BuildingClass *)&dword_87F7E8))->TogglePower(0); /*0x53663d*/
  if ( dword_A8ECC8 ) /*0x536649*/
    v4 = *(unsigned char **)dword_A8ECBC; /*0x536650*/
  else
    v4 = 0; /*0x536654*/
  v7 = v3; /*0x536656*/
  result = (AnimClass *)sub_4AA2B0(v4); /*0x53665d*/
  v6 = result; /*0x536662*/
  if ( result ) /*0x536666*/
  {
    ((MapClass *)v7)->UnselectAll_ClearLimboLaunchers(); /*0x536668*/
    (*(void (**)(AnimClass *))(v6->AnimClass_field_0x0 + 332))(v6); /*0x536671*/
    ((TacticalClass *)v8)->InterpolateView(); /*0x53667c*/
    return (AnimClass *)((MapClass *)((int)((GScreenClass *)&dword_87F7E8)))->MarkForRedraw( 1); /*0x536688*/
  }
  return result; /*0x53668e*/

}
} // namespace gamemd

// 0x5366A0
namespace gamemd {
char * CreateTeamCommand::performAction_31()
{

  return (char *)g_INI_Key_PlanningMode; /*0x5366a5*/

}
} // namespace gamemd

// 0x5366B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_32()
{

  return GetStringCSF( (wchar_t *)(aCmndPlanningmo), 0, (const char *)(g_Str_File_Init_CPP), 6580); /*0x5366c6*/

}
} // namespace gamemd

// 0x5366D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_33()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_CONTROL), 0, (const char *)(g_Str_File_Init_CPP), 6582); /*0x5366e6*/

}
} // namespace gamemd

// 0x5366F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_34()
{

  return GetStringCSF( (wchar_t *)(aCmndPlanningmo_0), 0, (const char *)(g_Str_File_Init_CPP), 6584); /*0x536706*/

}
} // namespace gamemd

// 0x536710
namespace gamemd {
BOOL CreateTeamCommand::performAction_35()
{

  char v2; // [esp+5h] [ebp+5h]

  return (v2 & 7) != 0; /*0x53671b*/

}
} // namespace gamemd

// 0x536730
namespace gamemd {
char CreateTeamCommand::performAction_36()
{

  return 1; /*0x536732*/

}
} // namespace gamemd

// 0x536740
namespace gamemd {
unsigned int CreateTeamCommand::performAction_37()
{

  int v2; // [esp+4h] [ebp+4h]

  return ((unsigned int)~v2 >> 11) & 1; /*0x53674c*/

}
} // namespace gamemd

// 0x536750
namespace gamemd {
int CreateTeamCommand::performAction_38()
{

  char v2; // [esp+5h] [ebp+5h]

  if ( (v2 & 8) != 0 ) /*0x536757*/
    return UI_Create_731A70(0); /*0x53675b*/
  else
    return UI_Create_731A50(0); /*0x536765*/

}
} // namespace gamemd

// 0x536770
namespace gamemd {
char * CreateTeamCommand::performAction_39()
{

  return aCombatantselec; /*0x536775*/

}
} // namespace gamemd

// 0x536780
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_40()
{

  return GetStringCSF( (wchar_t *)(aCmndCombatants), 0, (const char *)(g_Str_File_Init_CPP), 6664); /*0x536796*/

}
} // namespace gamemd

// 0x5367A0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_41()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_SELECTION), 0, (const char *)(g_Str_File_Init_CPP), 6666); /*0x5367b6*/

}
} // namespace gamemd

// 0x5367C0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_42()
{

  return GetStringCSF( (wchar_t *)(aCmndCombatants_0), 0, (const char *)(g_Str_File_Init_CPP), 6668); /*0x5367d6*/

}
} // namespace gamemd

// 0x5367E0
namespace gamemd {
int CreateTeamCommand::performAction_43()
{

  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x5367ea*/

}
} // namespace gamemd

// 0x5367F0
namespace gamemd {
int CreateTeamCommand::performAction_44()
{

  unsigned int v1; // ecx
  unsigned int v3; // [esp+4h] [ebp+4h]

  v1 = v3 >> 8; /*0x5367f4*/
  LOBYTE(v1) = (v3 & 0x100) == 0; /*0x5367f9*/
  return ((int (*)(unsigned int))loc_732280)(v1); /*0x536801*/

}
} // namespace gamemd

// 0x536810
namespace gamemd {
char * CreateTeamCommand::performAction_45()
{

  return (char *)g_INI_Key_TypeSelect; /*0x536815*/

}
} // namespace gamemd

// 0x536820
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_46()
{

  return GetStringCSF( (wchar_t *)(aCmndTypeselect), 0, (const char *)(g_Str_File_Init_CPP), 6690); /*0x536836*/

}
} // namespace gamemd

// 0x536840
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_47()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_SELECTION), 0, (const char *)(g_Str_File_Init_CPP), 6692); /*0x536856*/

}
} // namespace gamemd

// 0x536860
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_48()
{

  return GetStringCSF( (wchar_t *)(aCmndTypeselect_0), 0, (const char *)(g_Str_File_Init_CPP), 6694); /*0x536876*/

}
} // namespace gamemd

// 0x536880
namespace gamemd {
int CreateTeamCommand::performAction_49()
{

  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x53688a*/

}
} // namespace gamemd

// 0x536890
namespace gamemd {
char CreateTeamCommand::performAction_50()
{

  return 1; /*0x536892*/

}
} // namespace gamemd

// 0x5368A0
namespace gamemd {
unsigned int CreateTeamCommand::performAction_51()
{

  int v2; // [esp+4h] [ebp+4h]

  return ((unsigned int)~v2 >> 11) & 1; /*0x5368ac*/

}
} // namespace gamemd

// 0x5368B0
namespace gamemd {
char CreateTeamCommand::performAction_52()
{

  char v2; // [esp+5h] [ebp+5h]

  if ( (v2 & 8) != 0 ) /*0x5368b7*/
    return UI_Create_732CC0(); /*0x5368b9*/
  else
    return UI_Create_732CA0(); /*0x5368c1*/

}
} // namespace gamemd

// 0x5368D0
namespace gamemd {
char * CreateTeamCommand::performAction_53()
{

  return aHealthnav; /*0x5368d5*/

}
} // namespace gamemd

// 0x5368E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_54()
{

  return GetStringCSF( (wchar_t *)(aCmndHealthnavi), 0, (const char *)(g_Str_File_Init_CPP), 6728); /*0x5368f6*/

}
} // namespace gamemd

// 0x536900
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_55()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_SELECTION), 0, (const char *)(g_Str_File_Init_CPP), 6730); /*0x536916*/

}
} // namespace gamemd

// 0x536920
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_56()
{

  return GetStringCSF( (wchar_t *)(aCmndHealthnavi_0), 0, (const char *)(g_Str_File_Init_CPP), 6732); /*0x536936*/

}
} // namespace gamemd

// 0x536940
namespace gamemd {
int CreateTeamCommand::performAction_57()
{

  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x53694a*/

}
} // namespace gamemd

// 0x536950
namespace gamemd {
int CreateTeamCommand::performAction_58()
{

  char v2; // [esp+5h] [ebp+5h]

  return UpdateUnitHealthTooltip((v2 & 1) == 0); /*0x536961*/

}
} // namespace gamemd

// 0x536970
namespace gamemd {
char * CreateTeamCommand::performAction_59()
{

  return aVeterancynav; /*0x536975*/

}
} // namespace gamemd

// 0x536980
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_60()
{

  return GetStringCSF( (wchar_t *)(aCmndVetnavigat), 0, (const char *)(g_Str_File_Init_CPP), 6754); /*0x536996*/

}
} // namespace gamemd

// 0x5369A0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_61()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_SELECTION), 0, (const char *)(g_Str_File_Init_CPP), 6756); /*0x5369b6*/

}
} // namespace gamemd

// 0x5369C0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_62()
{

  return GetStringCSF( (wchar_t *)(aCmndVetnavigat_0), 0, (const char *)(g_Str_File_Init_CPP), 6758); /*0x5369d6*/

}
} // namespace gamemd

// 0x5369E0
namespace gamemd {
int CreateTeamCommand::performAction_63()
{

  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x5369ea*/

}
} // namespace gamemd

// 0x5369F0
namespace gamemd {
int CreateTeamCommand::performAction_64()
{

  char v2; // [esp+5h] [ebp+5h]

  return DrawUnitExperiencePopup((v2 & 1) == 0); /*0x536a01*/

}
} // namespace gamemd

// 0x536A10
namespace gamemd {
char * CreateTeamCommand::performAction_65()
{

  return aPreviousobject; /*0x536a15*/

}
} // namespace gamemd

// 0x536A20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_66()
{

  return GetStringCSF( (wchar_t *)(aTxtPrevObject), 0, (const char *)(g_Str_File_Init_CPP), 6817); /*0x536a36*/

}
} // namespace gamemd

// 0x536A40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_67()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_SELECTION), 0, (const char *)(g_Str_File_Init_CPP), 6819); /*0x536a56*/

}
} // namespace gamemd

// 0x536A60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_68()
{

  return GetStringCSF( (wchar_t *)(aTxtPrevObjectD), 0, (const char *)(g_Str_File_Init_CPP), 6821); /*0x536a76*/

}
} // namespace gamemd

// 0x536A80
namespace gamemd {
unsigned char * CreateTeamCommand::performAction_69()
{

  MapClass *v3; // esi
  unsigned char *v4; // eax
  AnimClass *result; // eax
  AnimClass *v6; // esi
  MapClass *v7; // [esp-4h] [ebp-4h]
  TacticalClass *v8; // [esp-4h] [ebp-4h]

  TacticalClass::SetObserverMode((TacticalClass *)&dword_87F7E8, 0); /*0x536a87*/
  ((TacticalClass *)(TacticalClass *)&dword_87F7E8)->SetDisplayMode( 0, 0); /*0x536a95*/
  ((BuildingClass *)((BuildingClass *)&dword_87F7E8))->TogglePower2(0); /*0x536aa1*/
  ((BuildingClass *)((BuildingClass *)&dword_87F7E8))->TogglePower(0); /*0x536aad*/
  if ( dword_A8ECC8 ) /*0x536ab9*/
    v4 = *(unsigned char **)dword_A8ECBC; /*0x536ac0*/
  else
    v4 = 0; /*0x536ac4*/
  v7 = v3; /*0x536ac6*/
  result = (AnimClass *)sub_4AA380(v4); /*0x536acd*/
  v6 = result; /*0x536ad2*/
  if ( result ) /*0x536ad6*/
  {
    ((MapClass *)v7)->UnselectAll_ClearLimboLaunchers(); /*0x536ad8*/
    (*(void (**)(AnimClass *))(v6->AnimClass_field_0x0 + 332))(v6); /*0x536ae1*/
    ((TacticalClass *)v8)->InterpolateView(); /*0x536aec*/
    return (AnimClass *)((MapClass *)((int)((GScreenClass *)&dword_87F7E8)))->MarkForRedraw( 1); /*0x536af8*/
  }
  return result; /*0x536afe*/

}
} // namespace gamemd

// 0x536B10
namespace gamemd {
char * CreateTeamCommand::performAction_70()
{

  return aStopobject; /*0x536b15*/

}
} // namespace gamemd

// 0x536B20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_71()
{

  return GetStringCSF( (wchar_t *)(aTxtStopObject), 0, (const char *)(g_Str_File_Init_CPP), 6858); /*0x536b36*/

}
} // namespace gamemd

// 0x536B40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_72()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_CONTROL), 0, (const char *)(g_Str_File_Init_CPP), 6860); /*0x536b56*/

}
} // namespace gamemd

// 0x536B60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_73()
{

  return GetStringCSF( (wchar_t *)(aTxtStopObjectD), 0, (const char *)(g_Str_File_Init_CPP), 6862); /*0x536b76*/

}
} // namespace gamemd

// 0x536B80
namespace gamemd {
int CreateTeamCommand_performAction_74()
{
  return UI_Create_730EA0(); /*0x536b85*/
}
} // namespace gamemd

// 0x536B90
namespace gamemd {
char * CreateTeamCommand::performAction_75()
{

  return aAlltocheer; /*0x536b95*/

}
} // namespace gamemd

// 0x536BA0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_76()
{

  return GetStringCSF( (wchar_t *)(aCmndAllcheer), 0, (const char *)(g_Str_File_Init_CPP), 6876); /*0x536bb6*/

}
} // namespace gamemd

// 0x536BC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_77()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_CONTROL), 0, (const char *)(g_Str_File_Init_CPP), 6878); /*0x536bd6*/

}
} // namespace gamemd

// 0x536BE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_78()
{

  return GetStringCSF( (wchar_t *)(aCmndAllcheerde), 0, (const char *)(g_Str_File_Init_CPP), 6880); /*0x536bf6*/

}
} // namespace gamemd

// 0x536C00
namespace gamemd {
int CreateTeamCommand::performAction_79()
{

  return UI_Create_730F30(); /*0x536c05*/

}
}
// 0x536C10
namespace gamemd {
char * CreateTeamCommand::performAction_80()
{

  return aDeployobject; /*0x536c15*/

}
} // namespace gamemd

// 0x536C20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_81()
{

  return GetStringCSF( (wchar_t *)(aTxtDeployObjec), 0, (const char *)(g_Str_File_Init_CPP), 6903); /*0x536c36*/

}
} // namespace gamemd

// 0x536C40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_82()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_CONTROL), 0, (const char *)(g_Str_File_Init_CPP), 6905); /*0x536c56*/

}
} // namespace gamemd

// 0x536C60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_83()
{

  return GetStringCSF( (wchar_t *)(aTxtDeployObjec_0), 0, (const char *)(g_Str_File_Init_CPP), 6907); /*0x536c76*/

}
} // namespace gamemd

// 0x536C80
namespace gamemd {
int CreateTeamCommand_performAction_84()
{
  return ProcessSelectionExperience(); /*0x536c85*/
}
} // namespace gamemd

// 0x536C90
namespace gamemd {
char * CreateTeamCommand::performAction_85()
{

  return aGuardobject; /*0x536c95*/

}
} // namespace gamemd

// 0x536CA0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_86()
{

  return GetStringCSF( (wchar_t *)(aTxtGuard), 0, (const char *)(g_Str_File_Init_CPP), 6931); /*0x536cb6*/

}
} // namespace gamemd

// 0x536CC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_87()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_CONTROL), 0, (const char *)(g_Str_File_Init_CPP), 6933); /*0x536cd6*/

}
} // namespace gamemd

// 0x536CE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_88()
{

  return GetStringCSF( (wchar_t *)(aTxtGuardDesc), 0, (const char *)(g_Str_File_Init_CPP), 6935); /*0x536cf6*/

}
} // namespace gamemd

// 0x536D00
int CreateTeamCommand_performAction_89()
{
  return GetFactoryData(); /*0x536d05*/
}

// 0x536D10
namespace gamemd {
char * CreateTeamCommand::performAction_90()
{

  return aScatterobject; /*0x536d15*/

}
} // namespace gamemd

// 0x536D20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_91()
{

  return GetStringCSF( (wchar_t *)(aTxtScatter), 0, (const char *)(g_Str_File_Init_CPP), 6960); /*0x536d36*/

}
} // namespace gamemd

// 0x536D40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_92()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_CONTROL), 0, (const char *)(g_Str_File_Init_CPP), 6962); /*0x536d56*/

}
} // namespace gamemd

// 0x536D60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_93()
{

  return GetStringCSF( (wchar_t *)(aTxtScatterDesc), 0, (const char *)(g_Str_File_Init_CPP), 6964); /*0x536d76*/

}
} // namespace gamemd

// 0x536D80
namespace gamemd {
int CreateTeamCommand_performAction_94()
{
  return UI_Create_730FE0(); /*0x536d85*/
}
} // namespace gamemd

// 0x536D90
namespace gamemd {
char * CreateTeamCommand::performAction_95()
{

  return aCenterview; /*0x536d95*/

}
} // namespace gamemd

// 0x536DA0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_96()
{

  return GetStringCSF( (wchar_t *)(aTxtCenterView), 0, (const char *)(g_Str_File_Init_CPP), 6987); /*0x536db6*/

}
} // namespace gamemd

// 0x536DC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_97()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_SELECTION), 0, (const char *)(g_Str_File_Init_CPP), 6989); /*0x536dd6*/

}
} // namespace gamemd

// 0x536DE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_98()
{

  return GetStringCSF( (wchar_t *)(aTxtCenterViewD), 0, (const char *)(g_Str_File_Init_CPP), 6991); /*0x536df6*/

}
} // namespace gamemd

// 0x536E00
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_99()
{

  wchar_t *result; // eax

  result = g_SelectionManager; /*0x536e00*/
  if ( (int)g_SelectionManager > 0 ) /*0x536e07*/
  {
    TacticalClass::InterpolateView(); /*0x536e0e*/
    return (wchar_t *)((MapClass *)((int)(&MapClass_Instance)))->MarkForRedraw( 1); /*0x536e1a*/
  }
  return result; /*0x536e1f*/

}
} // namespace gamemd

// 0x536E30
namespace gamemd {
char * CreateTeamCommand::performAction_100()
{

  return aCenterbase; /*0x536e35*/

}
} // namespace gamemd

// 0x536E40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_101()
{

  return GetStringCSF( (wchar_t *)(aTxtCenterBase), 0, (const char *)(g_Str_File_Init_CPP), 7018); /*0x536e56*/

}
} // namespace gamemd

// 0x536E60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_102()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_SELECTION), 0, (const char *)(g_Str_File_Init_CPP), 7020); /*0x536e76*/

}
} // namespace gamemd

// 0x536E80
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_103()
{

  return GetStringCSF( (wchar_t *)(aTxtCenterBaseD), 0, (const char *)(g_Str_File_Init_CPP), 7022); /*0x536e96*/

}
} // namespace gamemd

// 0x536EA0
namespace gamemd {
int CreateTeamCommand::performAction_104()
{

  return TAction::CenterOnStartCoords(); /*0x536ea5*/

}
}
// 0x536EB0
namespace gamemd {
char * CreateTeamCommand::performAction_105()
{

  return aTogglealliance; /*0x536eb5*/

}
} // namespace gamemd

// 0x536EC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_106()
{

  return GetStringCSF( (wchar_t *)(aTxtAlliance), 0, (const char *)(g_Str_File_Init_CPP), 7045); /*0x536ed6*/

}
} // namespace gamemd

// 0x536EE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_107()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_CONTROL), 0, (const char *)(g_Str_File_Init_CPP), 7047); /*0x536ef6*/

}
} // namespace gamemd

// 0x536F00
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_108()
{

  return GetStringCSF( (wchar_t *)(aTxtAllianceDes), 0, (const char *)(g_Str_File_Init_CPP), 7049); /*0x536f16*/

}
} // namespace gamemd

// 0x536F20
namespace gamemd {
int CreateTeamCommand::performAction_109()
{

  return UI_Create_7318F0(); /*0x536f25*/

}
}
// 0x536F30
namespace gamemd {
char * CreateTeamCommand::performAction_110()
{

  return aTogglerepair; /*0x536f35*/

}
} // namespace gamemd

// 0x536F40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_111()
{

  return GetStringCSF( (wchar_t *)(aTxtRepairMode), 0, (const char *)(g_Str_File_Init_CPP), 7103); /*0x536f56*/

}
} // namespace gamemd

// 0x536F60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_112()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7105); /*0x536f76*/

}
} // namespace gamemd

// 0x536F80
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_113()
{

  return GetStringCSF( (wchar_t *)(aTxtRepairModeD), 0, (const char *)(g_Str_File_Init_CPP), 7107); /*0x536f96*/

}
} // namespace gamemd

// 0x536FB0
namespace gamemd {
char * CreateTeamCommand::performAction_114()
{

  return aTogglesell; /*0x536fb5*/

}
} // namespace gamemd

// 0x536FC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_115()
{

  return GetStringCSF( (wchar_t *)(aTxtSellMode), 0, (const char *)(g_Str_File_Init_CPP), 7129); /*0x536fd6*/

}
} // namespace gamemd

// 0x536FE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_116()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7131); /*0x536ff6*/

}
} // namespace gamemd

// 0x537000
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_117()
{

  return GetStringCSF( (wchar_t *)(aTxtSellModeDes), 0, (const char *)(g_Str_File_Init_CPP), 7133); /*0x537016*/

}
} // namespace gamemd

// 0x537020
namespace gamemd {
char CreateTeamCommand::performAction_118(int a1)
{

  return ((BuildingClass *)((BuildingClass *)&stru_87F5F0.__pad_58[416]))->TogglePower(-1); /*0x53702c*/

}
} // namespace gamemd

// 0x537030
namespace gamemd {
char * CreateTeamCommand::performAction_119()
{

  return aPlacebeacon; /*0x537035*/

}
} // namespace gamemd

// 0x537040
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_120()
{

  return GetStringCSF( (wchar_t *)(aTxtPlaceBeacon), 0, (const char *)(g_Str_File_Init_CPP), 7172); /*0x537056*/

}
} // namespace gamemd

// 0x537060
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_121()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7174); /*0x537076*/

}
} // namespace gamemd

// 0x537080
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_122()
{

  return GetStringCSF( (wchar_t *)(aTxtPlaceBeacon_0), 0, (const char *)(g_Str_File_Init_CPP), 7176); /*0x537096*/

}
} // namespace gamemd

// 0x5370A0
namespace gamemd {
int CreateTeamCommand::performAction_123()
{

  int result; // eax

  result = *(unsigned int *)&dword_A8B238; /*0x5370a0*/
  if ( *(unsigned int *)&dword_A8B238 ) /*0x5370a7*/
  {
    if ( *(unsigned int *)&dword_A8B238 != 5 ) /*0x5370ac*/
      return UI_Create_731A30(); /*0x5370ae*/
  }
  return result; /*0x5370b3*/

}
} // namespace gamemd

// 0x5370C0
namespace gamemd {
char * CreateTeamCommand::performAction_124()
{

  return aCenteronradare; /*0x5370c5*/

}
} // namespace gamemd

// 0x5370D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_125()
{

  return GetStringCSF( (wchar_t *)(aTxtRadarEvent), 0, (const char *)(g_Str_File_Init_CPP), 7195); /*0x5370e6*/

}
} // namespace gamemd

// 0x5370F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_126()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7197); /*0x537106*/

}
} // namespace gamemd

// 0x537110
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_127()
{

  return GetStringCSF( (wchar_t *)(aTxtRadarEventD), 0, (const char *)(g_Str_File_Init_CPP), 7199); /*0x537126*/

}
} // namespace gamemd

// 0x537130
namespace gamemd {
int CreateTeamCommand::performAction_128()
{

  unsigned int result; // eax

  LOWORD(result) = UI_Create_734120(); /*0x537130*/
  return result; /*0x537135*/

}

// 0x537140
namespace gamemd {
char * CreateTeamCommand::performAction_129()
{

  return aSidebarup; /*0x537145*/

}
} // namespace gamemd

// 0x537150
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_130()
{

  return GetStringCSF( (wchar_t *)(aTxtSidebarUp), 0, (const char *)(g_Str_File_Init_CPP), 7249); /*0x537166*/

}
} // namespace gamemd

// 0x537170
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_131()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7251); /*0x537186*/

}
} // namespace gamemd

// 0x537190
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_132()
{

  return GetStringCSF( (wchar_t *)(aTxtSidebarUpDe), 0, (const char *)(g_Str_File_Init_CPP), 7253); /*0x5371a6*/

}
} // namespace gamemd

// 0x5371B0
namespace gamemd {
char CreateTeamCommand::performAction_133()
{

  return ((CreateTeamCommand *)(CreateTeamCommand *)&dword_87F7E8)->performAction_245( 1, -1); /*0x5371be*/

}
} // namespace gamemd

// 0x5371D0
namespace gamemd {
char * CreateTeamCommand::performAction_134()
{

  return aSidebardown; /*0x5371d5*/

}
} // namespace gamemd

// 0x5371E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_135()
{

  return GetStringCSF( (wchar_t *)(aTxtSidebarDown), 0, (const char *)(g_Str_File_Init_CPP), 7389); /*0x5371f6*/

}
} // namespace gamemd

// 0x537200
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_136()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7391); /*0x537216*/

}
} // namespace gamemd

// 0x537220
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_137()
{

  return GetStringCSF( (wchar_t *)(aTxtSidebarDown_0), 0, (const char *)(g_Str_File_Init_CPP), 7393); /*0x537236*/

}
} // namespace gamemd

// 0x537240
namespace gamemd {
char CreateTeamCommand::performAction_138()
{

  return ((CreateTeamCommand *)(CreateTeamCommand *)&dword_87F7E8)->performAction_245( 0, -1); /*0x53724e*/

}
} // namespace gamemd

// 0x537260
namespace gamemd {
CHAR * CreateTeamCommand::performAction_139()
{

  return (CHAR *)g_INI_Key_Options; /*0x537265*/

}
} // namespace gamemd

// 0x537270
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_140()
{

  return GetStringCSF( (wchar_t *)(aTxtOptions), 0, (const char *)(g_Str_File_Init_CPP), 7530); /*0x537286*/

}
} // namespace gamemd

// 0x537290
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_141()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7532); /*0x5372a6*/

}
} // namespace gamemd

// 0x5372B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_142()
{

  return GetStringCSF( (wchar_t *)(aTxtOptionsDesc), 0, (const char *)(g_Str_File_Init_CPP), 7534); /*0x5372c6*/

}
} // namespace gamemd

// 0x5372D0
namespace gamemd {
int CreateTeamCommand::performAction_143()
{

  return UI_Create(); /*0x5372d5*/

}
}
// 0x5372E0
namespace gamemd {
char * CreateTeamCommand::performAction_144()
{

  return aView1; /*0x5372e5*/

}
} // namespace gamemd

// 0x5372F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_145()
{

  return GetStringCSF( (wchar_t *)(aTxtViewBookmar), 0, (const char *)(g_Str_File_Init_CPP), 7707); /*0x537306*/

}
} // namespace gamemd

// 0x537310
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_146()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7709); /*0x537326*/

}
} // namespace gamemd

// 0x537330
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_147()
{

  return GetStringCSF( (wchar_t *)(aTxtViewBookmar_0), 0, (const char *)(g_Str_File_Init_CPP), 7711); /*0x537346*/

}
} // namespace gamemd

// 0x5373D0
namespace gamemd {
char * CreateTeamCommand::performAction_149()
{

  return aView2; /*0x5373d5*/

}
} // namespace gamemd

// 0x5373E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_150()
{

  return GetStringCSF( (wchar_t *)(aTxtViewBookmar_1), 0, (const char *)(g_Str_File_Init_CPP), 7743); /*0x5373f6*/

}
} // namespace gamemd

// 0x537400
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_151()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7745); /*0x537416*/

}
} // namespace gamemd

// 0x537420
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_152()
{

  return GetStringCSF( (wchar_t *)(aTxtViewBookmar_2), 0, (const char *)(g_Str_File_Init_CPP), 7747); /*0x537436*/

}
} // namespace gamemd

// 0x5374C0
namespace gamemd {
char * CreateTeamCommand::performAction_154()
{

  return aView3; /*0x5374c5*/

}
} // namespace gamemd

// 0x5374D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_155()
{

  return GetStringCSF( (wchar_t *)(aTxtViewBookmar_3), 0, (const char *)(g_Str_File_Init_CPP), 7779); /*0x5374e6*/

}
} // namespace gamemd

// 0x5374F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_156()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7781); /*0x537506*/

}
} // namespace gamemd

// 0x537510
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_157()
{

  return GetStringCSF( (wchar_t *)(aTxtViewBookmar_4), 0, (const char *)(g_Str_File_Init_CPP), 7783); /*0x537526*/

}
} // namespace gamemd

// 0x5375B0
namespace gamemd {
char * CreateTeamCommand::performAction_159()
{

  return aView4; /*0x5375b5*/

}
} // namespace gamemd

// 0x5375C0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_160()
{

  return GetStringCSF( (wchar_t *)(aTxtViewBookmar_5), 0, (const char *)(g_Str_File_Init_CPP), 7815); /*0x5375d6*/

}
} // namespace gamemd

// 0x5375E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_161()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7817); /*0x5375f6*/

}
} // namespace gamemd

// 0x537600
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_162()
{

  return GetStringCSF( (wchar_t *)(aTxtViewBookmar_6), 0, (const char *)(g_Str_File_Init_CPP), 7819); /*0x537616*/

}
} // namespace gamemd

// 0x5376A0
namespace gamemd {
char * CreateTeamCommand::performAction_163()
{

  return aSetview1; /*0x5376a5*/

}
} // namespace gamemd

// 0x5376B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_164()
{

  return GetStringCSF( (wchar_t *)(aTxtSetBookmark), 0, (const char *)(g_Str_File_Init_CPP), 7851); /*0x5376c6*/

}
} // namespace gamemd

// 0x5376D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_165()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7853); /*0x5376e6*/

}
} // namespace gamemd

// 0x5376F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_166()
{

  return GetStringCSF( (wchar_t *)(aTxtSetBookmark_0), 0, (const char *)(g_Str_File_Init_CPP), 7855); /*0x537706*/

}
} // namespace gamemd

// 0x537710
namespace gamemd {
void * CreateTeamCommand::performAction_167()
{

  int *v1; // eax
  int v2; // edx
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x53771e*/
  v5[0] = *v1; /*0x537725*/
  v5[1] = v1[1]; /*0x53773c*/
  v2 = *((Tactical *)((Tactical *)g_TacticalClass_Instance))->PixelToCell(v4, v5); /*0x537745*/
  result = dword_A8B230; /*0x537747*/
  *(int *)((char *)&dword_A8B230[373].nextArrayIndex + 2) = v2; /*0x53774c*/
  return result; /*0x537752*/

}
} // namespace gamemd

// 0x537760
namespace gamemd {
char * CreateTeamCommand::performAction_168()
{

  return aSetview2; /*0x537765*/

}
} // namespace gamemd

// 0x537770
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_169()
{

  return GetStringCSF( (wchar_t *)(aTxtSetBookmark_1), 0, (const char *)(g_Str_File_Init_CPP), 7878); /*0x537786*/

}
} // namespace gamemd

// 0x537790
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_170()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7880); /*0x5377a6*/

}
} // namespace gamemd

// 0x5377B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_171()
{

  return GetStringCSF( (wchar_t *)(aTxtSetBookmark_2), 0, (const char *)(g_Str_File_Init_CPP), 7882); /*0x5377c6*/

}
} // namespace gamemd

// 0x5377D0
namespace gamemd {
void * CreateTeamCommand::performAction_172()
{

  int *v1; // eax
  int v2; // edx
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x5377de*/
  v5[0] = *v1; /*0x5377e5*/
  v5[1] = v1[1]; /*0x5377fc*/
  v2 = *((Tactical *)((Tactical *)g_TacticalClass_Instance))->PixelToCell(v4, v5); /*0x537805*/
  result = dword_A8B230; /*0x537807*/
  *(int *)((char *)&dword_A8B230[373].referenceCount + 2) = v2; /*0x53780c*/
  return result; /*0x537812*/

}
} // namespace gamemd

// 0x537820
namespace gamemd {
char * CreateTeamCommand::performAction_173()
{

  return aSetview3; /*0x537825*/

}
} // namespace gamemd

// 0x537830
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_174()
{

  return GetStringCSF( (wchar_t *)(aTxtSetBookmark_3), 0, (const char *)(g_Str_File_Init_CPP), 7905); /*0x537846*/

}
} // namespace gamemd

// 0x537850
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_175()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7907); /*0x537866*/

}
} // namespace gamemd

// 0x537870
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_176()
{

  return GetStringCSF( (wchar_t *)(aTxtSetBookmark_4), 0, (const char *)(g_Str_File_Init_CPP), 7909); /*0x537886*/

}
} // namespace gamemd

// 0x537890
namespace gamemd {
void * CreateTeamCommand::performAction_177()
{

  int *v1; // eax
  int v2; // edx
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x53789e*/
  v5[0] = *v1; /*0x5378a5*/
  v5[1] = v1[1]; /*0x5378bc*/
  v2 = *((Tactical *)((Tactical *)g_TacticalClass_Instance))->PixelToCell(v4, v5); /*0x5378c5*/
  result = dword_A8B230; /*0x5378c7*/
  *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2) = v2; /*0x5378cc*/
  return result; /*0x5378d2*/

}
} // namespace gamemd

// 0x5378E0
namespace gamemd {
char * CreateTeamCommand::performAction_178()
{

  return aSetview4; /*0x5378e5*/

}
} // namespace gamemd

// 0x5378F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_179()
{

  return GetStringCSF( (wchar_t *)(aTxtSetBookmark_5), 0, (const char *)(g_Str_File_Init_CPP), 7932); /*0x537906*/

}
} // namespace gamemd

// 0x537910
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_180()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7934); /*0x537926*/

}
} // namespace gamemd

// 0x537930
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_181()
{

  return GetStringCSF( (wchar_t *)(aTxtSetBookmark_6), 0, (const char *)(g_Str_File_Init_CPP), 7936); /*0x537946*/

}
} // namespace gamemd

// 0x537950
namespace gamemd {
void * CreateTeamCommand::performAction_182()
{

  int *v1; // eax
  int v2; // edx
  void *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  int v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta((ObjectClass *)g_TacticalClass_Instance, v4); /*0x53795e*/
  v5[0] = *v1; /*0x537965*/
  v5[1] = v1[1]; /*0x53797c*/
  v2 = *((Tactical *)((Tactical *)g_TacticalClass_Instance))->PixelToCell(v4, v5); /*0x537985*/
  result = dword_A8B230; /*0x537987*/
  *(int *)((char *)&dword_A8B230[374].vtable0 + 2) = v2; /*0x53798c*/
  return result; /*0x537992*/

}
} // namespace gamemd

// 0x5379A0
namespace gamemd {
char * CreateTeamCommand::performAction_183()
{

  return aFollow; /*0x5379a5*/

}
} // namespace gamemd

// 0x5379B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_184()
{

  return GetStringCSF( (wchar_t *)(aTxtFollow), 0, (const char *)(g_Str_File_Init_CPP), 7959); /*0x5379c6*/

}
} // namespace gamemd

// 0x5379D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_185()
{

  return GetStringCSF( (wchar_t *)(g_Str_TXT_INTERFACE), 0, (const char *)(g_Str_File_Init_CPP), 7961); /*0x5379e6*/

}
} // namespace gamemd

// 0x5379F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_186()
{

  return GetStringCSF( (wchar_t *)(aTxtFollowDesc), 0, (const char *)(g_Str_File_Init_CPP), 7963); /*0x537a06*/

}
} // namespace gamemd

// 0x537A10
namespace gamemd {
bool CreateTeamCommand::performAction_187()
{

  if ( !dword_A8ECC8 || MapClass::GetScrollMode( (MapClass *)&dword_87F7E8) ) /*0x537a1e*/
    return ((MapClass *)((int)&dword_87F7E8))->SetScrollMode(0); /*0x537a43*/
  else
    return ((MapClass *)((int)&dword_87F7E8))->SetScrollMode(*(unsigned int *)dword_A8ECBC); /*0x537a34*/

}
} // namespace gamemd

// 0x537AB0
namespace gamemd {
char * CreateTeamCommand::performAction_188()
{

  return aExtrasynccheck; /*0x537ab5*/

}
} // namespace gamemd

// 0x537AC0
namespace gamemd {
const wchar_t * CreateTeamCommand::performAction_189()
{

  return (const wchar_t *)g_INI_Key_De; /*0x537ac5*/

}
} // namespace gamemd

// 0x537AD0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_190()
{

  return aGameSyncLoggin; /*0x537ad5*/

}
} // namespace gamemd

// 0x537AE0
void ** CreateTeamCommand::performAction_191()
{

  return &off_827970; /*0x537ae5*/

}

// 0x537AF0
namespace gamemd {
int CreateTeamCommand::performAction_192()
{

  bool v1; // zf
  char *v2; // ecx
  char *v3; // eax

  v1 = byte_B04880 != 0; /*0x537b07*/
  byte_B04880 = byte_B04880 == 0; /*0x537b09*/
  v2 = aExtraSyncInfoO; /*0x537b10*/
  if ( v1 ) /*0x537b15*/
    v2 = aExtraSyncInfoO_0; /*0x537b17*/
  v3 = CharToWideString(v2); /*0x537b1c*/
  return MessageListClass::AddMessage(&unk_A8BC60, 0, 0, (wchar_t *)v3, 3, 16454, 150, 0); /*0x537b30*/

}
} // namespace gamemd

// 0x537E80
namespace gamemd {
char * CreateTeamCommand::performAction_193()
{

  return aCursorcheat; /*0x537e85*/

}
} // namespace gamemd

// 0x537E90
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_194()
{

  return GetStringCSF( aGuiCursorcheat, 0, (const char *)(g_Str_File_Init_CPP), 8231); /*0x537ea6*/

}
} // namespace gamemd

// 0x537EB0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_195()
{

  return GetStringCSF( (wchar_t *)(aGuiDebug), 0, (const char *)(g_Str_File_Init_CPP), 8232); /*0x537ec6*/

}
} // namespace gamemd

// 0x537ED0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_196()
{

  return GetStringCSF( (wchar_t *)(aDescCursorchea), 0, (const char *)(g_Str_File_Init_CPP), 8233); /*0x537ee6*/

}
} // namespace gamemd

// 0x537EF0
namespace gamemd {
bool CreateTeamCommand::performAction_197(int a1)
{

  bool result; // al

  result = LOBYTE(stru_A8EB00.__pad_CD4[1]) == 0; /*0x537ef7*/
  LOBYTE(stru_A8EB00.__pad_CD4[1]) = LOBYTE(stru_A8EB00.__pad_CD4[1]) == 0; /*0x537efa*/
  return result; /*0x537eff*/

}
} // namespace gamemd

// 0x537FA0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_198(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x537fa9*/
  if ( (a2 & 1) != 0 ) /*0x537faf*/
    __3_YAXPAX_Z(this); /*0x537fb2*/
  return (std::locale::facet *)this; /*0x537fbc*/

}
} // namespace gamemd

// 0x537FC0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_199(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x537fc9*/
  if ( (a2 & 1) != 0 ) /*0x537fcf*/
    __3_YAXPAX_Z(this); /*0x537fd2*/
  return (std::locale::facet *)this; /*0x537fdc*/

}
} // namespace gamemd

// 0x537FE0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_200(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x537fe9*/
  if ( (a2 & 1) != 0 ) /*0x537fef*/
    __3_YAXPAX_Z(this); /*0x537ff2*/
  return (std::locale::facet *)this; /*0x537ffc*/

}
} // namespace gamemd

// 0x538000
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_201(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538009*/
  if ( (a2 & 1) != 0 ) /*0x53800f*/
    __3_YAXPAX_Z(this); /*0x538012*/
  return (std::locale::facet *)this; /*0x53801c*/

}
} // namespace gamemd

// 0x538020
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_202(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538029*/
  if ( (a2 & 1) != 0 ) /*0x53802f*/
    __3_YAXPAX_Z(this); /*0x538032*/
  return (std::locale::facet *)this; /*0x53803c*/

}
} // namespace gamemd

// 0x538040
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_203(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538049*/
  if ( (a2 & 1) != 0 ) /*0x53804f*/
    __3_YAXPAX_Z(this); /*0x538052*/
  return (std::locale::facet *)this; /*0x53805c*/

}
} // namespace gamemd

// 0x538060
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_204(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538069*/
  if ( (a2 & 1) != 0 ) /*0x53806f*/
    __3_YAXPAX_Z(this); /*0x538072*/
  return (std::locale::facet *)this; /*0x53807c*/

}
} // namespace gamemd

// 0x538080
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_205(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538089*/
  if ( (a2 & 1) != 0 ) /*0x53808f*/
    __3_YAXPAX_Z(this); /*0x538092*/
  return (std::locale::facet *)this; /*0x53809c*/

}
} // namespace gamemd

// 0x5380A0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_206(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x5380a9*/
  if ( (a2 & 1) != 0 ) /*0x5380af*/
    __3_YAXPAX_Z(this); /*0x5380b2*/
  return (std::locale::facet *)this; /*0x5380bc*/

}
} // namespace gamemd

// 0x5380C0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_207(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x5380c9*/
  if ( (a2 & 1) != 0 ) /*0x5380cf*/
    __3_YAXPAX_Z(this); /*0x5380d2*/
  return (std::locale::facet *)this; /*0x5380dc*/

}
} // namespace gamemd

// 0x5380E0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_208(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x5380e9*/
  if ( (a2 & 1) != 0 ) /*0x5380ef*/
    __3_YAXPAX_Z(this); /*0x5380f2*/
  return (std::locale::facet *)this; /*0x5380fc*/

}
} // namespace gamemd

// 0x538100
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_209(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538109*/
  if ( (a2 & 1) != 0 ) /*0x53810f*/
    __3_YAXPAX_Z(this); /*0x538112*/
  return (std::locale::facet *)this; /*0x53811c*/

}
} // namespace gamemd

// 0x538120
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_210(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538129*/
  if ( (a2 & 1) != 0 ) /*0x53812f*/
    __3_YAXPAX_Z(this); /*0x538132*/
  return (std::locale::facet *)this; /*0x53813c*/

}
} // namespace gamemd

// 0x538140
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_211(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538149*/
  if ( (a2 & 1) != 0 ) /*0x53814f*/
    __3_YAXPAX_Z(this); /*0x538152*/
  return (std::locale::facet *)this; /*0x53815c*/

}
} // namespace gamemd

// 0x538160
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_212(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538169*/
  if ( (a2 & 1) != 0 ) /*0x53816f*/
    __3_YAXPAX_Z(this); /*0x538172*/
  return (std::locale::facet *)this; /*0x53817c*/

}
} // namespace gamemd

// 0x538180
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_213(char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538189*/
  if ( (a2 & 1) != 0 ) /*0x53818f*/
    __3_YAXPAX_Z(this); /*0x538192*/
  return (std::locale::facet *)this; /*0x53819c*/

}
} // namespace gamemd

// 0x5381A0
namespace gamemd {
ToggleSellCommandClass * CreateTeamCommand::performAction_214(char a2)
{

  *this = (ToggleSellCommandClass)&vt_CommandClass; /*0x5381a9*/
  if ( (a2 & 1) != 0 ) /*0x5381af*/
    __3_YAXPAX_Z(this); /*0x5381b2*/
  return (std::locale::facet *)this; /*0x5381bc*/

}
} // namespace gamemd

// 0x5381C0
namespace gamemd {
ToggleRepairCommandClass * CreateTeamCommand::performAction_215(unsigned int * Block, char a2)
{

  *Block = (unsigned int)&vt_CommandClass;
  if ( (a2 & 1) != 0 ) /*0x5381cf*/
    __3_YAXPAX_Z(Block); /*0x5381d2*/
  return Block; /*0x5381dc*/

}
} // namespace gamemd

// 0x5381E0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_216(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x5381e9*/
  if ( (a2 & 1) != 0 ) /*0x5381ef*/
    __3_YAXPAX_Z(this); /*0x5381f2*/
  return &this->m_0; /*0x5381fc*/

}
} // namespace gamemd

// 0x538200
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_217(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538209*/
  if ( (a2 & 1) != 0 ) /*0x53820f*/
    __3_YAXPAX_Z(this); /*0x538212*/
  return &this->m_0; /*0x53821c*/

}
} // namespace gamemd

// 0x538220
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_218(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538229*/
  if ( (a2 & 1) != 0 ) /*0x53822f*/
    __3_YAXPAX_Z(this); /*0x538232*/
  return &this->m_0; /*0x53823c*/

}
} // namespace gamemd

// 0x538240
namespace gamemd {
ScatterCommandClass * CreateTeamCommand::performAction_219(unsigned int * Block, char a2)
{

  *Block = (unsigned int)&vt_CommandClass;
  if ( (a2 & 1) != 0 ) /*0x53824f*/
    __3_YAXPAX_Z(Block); /*0x538252*/
  return Block; /*0x53825c*/

}
} // namespace gamemd

// 0x538260
namespace gamemd {
GuardCommandClass * CreateTeamCommand::performAction_220(unsigned int * Block, char a2)
{

  *Block = (unsigned int)&vt_CommandClass;
  if ( (a2 & 1) != 0 ) /*0x53826f*/
    __3_YAXPAX_Z(Block); /*0x538272*/
  return Block; /*0x53827c*/

}
} // namespace gamemd

// 0x538280
namespace gamemd {
StopCommandClass * CreateTeamCommand::performAction_221(unsigned int * Block, char a2)
{

  *Block = (unsigned int)&vt_CommandClass;
  if ( (a2 & 1) != 0 ) /*0x53828f*/
    __3_YAXPAX_Z(Block); /*0x538292*/
  return Block; /*0x53829c*/

}
} // namespace gamemd

// 0x5382A0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_222(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x5382a9*/
  if ( (a2 & 1) != 0 ) /*0x5382af*/
    __3_YAXPAX_Z(this); /*0x5382b2*/
  return &this->m_0; /*0x5382bc*/

}
} // namespace gamemd

// 0x5382C0
namespace gamemd {
DeployCommandClass * CreateTeamCommand::performAction_223(unsigned int * Block, char a2)
{

  *Block = (unsigned int)&vt_CommandClass;
  if ( (a2 & 1) != 0 ) /*0x5382cf*/
    __3_YAXPAX_Z(Block); /*0x5382d2*/
  return Block; /*0x5382dc*/

}
} // namespace gamemd

// 0x5382E0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_224(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x5382e9*/
  if ( (a2 & 1) != 0 ) /*0x5382ef*/
    __3_YAXPAX_Z(this); /*0x5382f2*/
  return &this->m_0; /*0x5382fc*/

}
} // namespace gamemd

// 0x538300
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_225(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538309*/
  if ( (a2 & 1) != 0 ) /*0x53830f*/
    __3_YAXPAX_Z(this); /*0x538312*/
  return &this->m_0; /*0x53831c*/

}
} // namespace gamemd

// 0x538320
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_226(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538329*/
  if ( (a2 & 1) != 0 ) /*0x53832f*/
    __3_YAXPAX_Z(this); /*0x538332*/
  return &this->m_0; /*0x53833c*/

}
} // namespace gamemd

// 0x538340
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_227(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538349*/
  if ( (a2 & 1) != 0 ) /*0x53834f*/
    __3_YAXPAX_Z(this); /*0x538352*/
  return &this->m_0; /*0x53835c*/

}
} // namespace gamemd

// 0x538360
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_228(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538369*/
  if ( (a2 & 1) != 0 ) /*0x53836f*/
    __3_YAXPAX_Z(this); /*0x538372*/
  return &this->m_0; /*0x53837c*/

}
} // namespace gamemd

// 0x538380
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_229(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538389*/
  if ( (a2 & 1) != 0 ) /*0x53838f*/
    __3_YAXPAX_Z(this); /*0x538392*/
  return &this->m_0; /*0x53839c*/

}
} // namespace gamemd

// 0x5383A0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_230(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x5383a9*/
  if ( (a2 & 1) != 0 ) /*0x5383af*/
    __3_YAXPAX_Z(this); /*0x5383b2*/
  return &this->m_0; /*0x5383bc*/

}
} // namespace gamemd

// 0x5383C0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_231(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x5383c9*/
  if ( (a2 & 1) != 0 ) /*0x5383cf*/
    __3_YAXPAX_Z(this); /*0x5383d2*/
  return &this->m_0; /*0x5383dc*/

}
} // namespace gamemd

// 0x5383E0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_232(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x5383e9*/
  if ( (a2 & 1) != 0 ) /*0x5383ef*/
    __3_YAXPAX_Z(this); /*0x5383f2*/
  return &this->m_0; /*0x5383fc*/

}
} // namespace gamemd

// 0x538400
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_233(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538409*/
  if ( (a2 & 1) != 0 ) /*0x53840f*/
    __3_YAXPAX_Z(this); /*0x538412*/
  return &this->m_0; /*0x53841c*/

}
} // namespace gamemd

// 0x538420
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_234(unsigned int * Block, char a2)
{

  this->m_0 = (int)&vt_CommandClass; /*0x538429*/
  if ( (a2 & 1) != 0 ) /*0x53842f*/
    __3_YAXPAX_Z(this); /*0x538432*/
  return &this->m_0; /*0x53843c*/

}
} // namespace gamemd

// 0x538440
namespace gamemd {
ScreenCaptureCommandClass * CreateTeamCommand::performAction_235(unsigned int * Block, char a2)
{

  *(unsigned int *)this->CommandClass = (unsigned int)&vt_CommandClass;
  if ( (a2 & 1) != 0 ) /*0x53844f*/
    __3_YAXPAX_Z(this); /*0x538452*/
  return this->CommandClass; /*0x53845c*/

}
} // namespace gamemd

// 0x538460
namespace gamemd {
PageUserCommandClass * CreateTeamCommand::performAction_236(unsigned int * Block, char a2)
{

  *(unsigned int *)this->CommandClass = (unsigned int)&vt_CommandClass;
  if ( (a2 & 1) != 0 ) /*0x53846f*/
    __3_YAXPAX_Z(this); /*0x538472*/
  return this->CommandClass; /*0x53847c*/

}
} // namespace gamemd

// 0x538480
namespace gamemd {
CursorPositionCommandClass * CreateTeamCommand::performAction_237(unsigned int * Block, char a2)
{

  *(unsigned int *)this->CommandClass = (unsigned int)&vt_CommandClass;
  if ( (a2 & 1) != 0 ) /*0x53848f*/
    __3_YAXPAX_Z(this); /*0x538492*/
  return this->CommandClass; /*0x53849c*/

}
} // namespace gamemd

// 0x5384A0
namespace gamemd {
DeleteCommandClass * CreateTeamCommand::performAction_238(unsigned int * Block, char a2)
{

  *(unsigned int *)this->CommandClass = (unsigned int)&vt_CommandClass;
  if ( (a2 & 1) != 0 ) /*0x5384af*/
    __3_YAXPAX_Z(this); /*0x5384b2*/
  return this->CommandClass; /*0x5384bc*/

}
} // namespace gamemd

// 0x5384C0
namespace gamemd {
void CreateTeamCommand::performAction_239()
{

  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x5384c6*/
  *((unsigned int *)this + 4) = 0; /*0x5384c9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5384d0*/
  {
    __3_YAXPAX_Z(v2); /*0x5384d6*/
    *((unsigned int *)this + 1) = 0; /*0x5384de*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5384e1*/
  *((unsigned int *)this + 2) = 0; /*0x5384e4*/

}
} // namespace gamemd

// 0x5384F0
namespace gamemd {
unsigned int CreateTeamCommand::performAction_240(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5384f0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x538505*/
  else
    return 0; /*0x5384f7*/

}
} // namespace gamemd

// 0x538750
namespace gamemd {
{
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x538753*/
  if ( v2 <= 0 ) /*0x538758*/
  {
    int v2; // edx
    int result; // eax
    unsigned int *i; // ecx

      v2 = *((unsigned int *)this + 16);
    result = 0; /*0x538753*/
    if ( v2 <= 0 ) /*0x538758*/
      return -1; /*0x53876f*/
      for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
    {
      if ( ++result >= v2 ) /*0x53876d*/
        return -1; /*0x53876d*/
    }
    return result; /*0x538772*/
  }
  return result; /*0x538772*/
}
// 0x538AE0
namespace gamemd {
DynamicVector * CreateTeamCommand::performAction_244(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x538ae3*/
  *Block = (unsigned int)&vt_VectorClass;
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x538af0*/
  {
    __3_YAXPAX_Z(v3); /*0x538af8*/
    *(Block + 1) = 0; /*0x538b00*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x538b0b*/
  *(Block + 2) = 0; /*0x538b11*/
  if ( (a2 & 1) != 0 ) /*0x538b18*/
    __3_YAXPAX_Z(Block); /*0x538b1b*/
  return Block; /*0x538b25*/

}
} // namespace gamemd
