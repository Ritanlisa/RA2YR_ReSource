// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Player_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_465D80_e4.hpp"
#include "e4/classes/E4Recv_46D350_e4.hpp"
#include "e4/classes/E4Recv_46D490_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Control_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/E4Recv_4880F0_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/E4Recv_479740_e4.hpp"
#include "e4/classes/Settings_e4.hpp"

// 0x46D350
namespace gamemd {
void E4Recv_46D350::sub_46D350()
{

  this->m_0 = (int)&vt_CampaignScoreClass; /*0x46d350*/

}
} // namespace gamemd

// 0x46D650
namespace gamemd {
bool sub_46D650()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46D650)
}
}
// 0x46D8B0
namespace gamemd {
char sub_46D8B0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46D8B0)
}
}
// 0x46DA70
namespace gamemd {
void sub_46DA70()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46DA70)
}
}
// 0x46DCC0
namespace gamemd {
BOOL sub_46DCC0(HWND hDlg, bool a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46DCC0)
}
}
// 0x46DD70
namespace gamemd {
void * EnableGameModeControls(HWND hDlg, bool a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46DD70)
}
}
// 0x46DE20
namespace gamemd {
void * sub_46DE20(HWND hDlg, int nCmdShow)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46DE20)
}
}
// 0x465CB0
namespace gamemd {
void ObjectClass::nullsub_7()
{

  ; /*0x465cb0*/

}
} // namespace gamemd

// 0x465D80
namespace gamemd {
Iostream_init * E4Recv_465D80::__0Iostream_init_QAE_XZ_2()
{

  return (gamemd::Iostream_init *)(this); /*0x465d82*/

}
} // namespace gamemd

// 0x4660D0
namespace gamemd {
void sub_4660D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4660dc*/
  dbl_89DDF8 = Math::Sqrt(v0 + v0); /*0x4660ee*/
}
} // namespace gamemd

// 0x466100
namespace gamemd {
void sub_466100()
{
  dbl_89DE68 = dbl_89DDF8 / 60.0; /*0x46610c*/
}
} // namespace gamemd

// 0x466120
namespace gamemd {
void sub_466120()
{
  dbl_89DE50 = 1.0 / dbl_89DE68; /*0x46612c*/
}
} // namespace gamemd

// 0x466140
namespace gamemd {
void sub_466140()
{
  dbl_89DE48 = 0.0174532925199433 * 45.0; /*0x46614c*/
}
} // namespace gamemd

// 0x466160
namespace gamemd {
void sub_466160()
{
  dbl_89DE00 = 0.0174532925199433 * 60.0; /*0x46616c*/
}
} // namespace gamemd

// 0x466180
namespace gamemd {
void sub_466180()
{
  dbl_89DDD8 = 0.0174532925199433 * 90.0; /*0x46618c*/
}
} // namespace gamemd

// 0x4661A0
namespace gamemd {
long long sub_4661A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin((dbl_89DDD8 - dbl_89DE00)); /*0x4661b2*/
  result = Math::RoundToInt(v0 * dbl_89DDF8 * 0.5); /*0x4661c6*/
  dword_89DE70 = result; /*0x4661cb*/
  return result; /*0x4661d0*/
}
} // namespace gamemd

// 0x4661E0
namespace gamemd {
void sub_4661E0()
{
  dbl_89DE08 = Math::ArcTan(((double)dword_89DE70 * 0.00390625)); /*0x4661f7*/
}
} // namespace gamemd

// 0x466210
namespace gamemd {
void sub_466210()
{
  dbl_89DE40 = Math::ArcTan(((double)(2 * dword_89DE70) / dbl_89DDF8)); /*0x466232*/
}
} // namespace gamemd

// 0x466240
namespace gamemd {
long long sub_466240()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DE70) + 0.5); /*0x46625b*/
  dword_89DE64 = result; /*0x466260*/
  return result; /*0x466266*/
}
} // namespace gamemd

// 0x466270
namespace gamemd {
int sub_466270()
{
  dword_89DDF0 = 0; /*0x466272*/
  return 0; /*0x46627e*/
}
} // namespace gamemd

// 0x466280
namespace gamemd {
int sub_466280()
{
  dword_89DE30 = 0; /*0x466282*/
  qword_89DE34 = 0; /*0x466287*/
  return 0; /*0x466291*/
}
} // namespace gamemd

// 0x4662A0
namespace gamemd {
int sub_4662A0()
{
  dword_89DE60 = 0; /*0x4662a5*/
  dword_89DE58 = 128; /*0x4662af*/
  dword_89DE5C = 128; /*0x4662b4*/
  return 128; /*0x4662b9*/
}
} // namespace gamemd

// 0x4662C0
namespace gamemd {
int sub_4662C0()
{
  dword_89DDE0 = 0; /*0x4662c2*/
  dword_89DDE4 = 0; /*0x4662c7*/
  dword_89DDE8 = 0; /*0x4662cc*/
  dword_89DDEC = 0; /*0x4662d1*/
  return 0; /*0x4662d6*/
}
} // namespace gamemd

// 0x4662E0
namespace gamemd {
int sub_4662E0()
{
  dword_89DE1C = 0; /*0x4662e7*/
  dword_89DE20 = 0; /*0x4662ec*/
  byte_89DE24 = 1; /*0x4662f1*/
  byte_89DE25 = 0; /*0x4662f8*/
  dword_89DE18 = (int)&off_7E4678; /*0x4662fd*/
  dword_89DE2C = 10; /*0x466307*/
  dword_89DE28 = 0; /*0x466311*/
  return atexit((void (__cdecl *)(void))sub_466320); /*0x46631c*/
}
} // namespace gamemd

// 0x466320
namespace gamemd {
void sub_466320()
{
  if ( (byte_89DDD0 & 1) == 0 ) /*0x46632a*/
  {
    dword_89DE18 = (int)&VectorClass_BulletClass___vftable; /*0x46632e*/
    byte_89DDD0 |= 1u; /*0x466341*/
    if ( dword_89DE1C ) /*0x466347*/
    {
      if ( byte_89DE25 ) /*0x466351*/
      {
        RA2_OPDEL(dword_89DE1C); /*0x466354*/
        dword_89DE1C = 0; /*0x46635c*/
      }
    }
    byte_89DE25 = 0; /*0x466366*/
    dword_89DE20 = 0; /*0x46636d*/
  }
}
} // namespace gamemd

// 0x4666B0
namespace gamemd {
void nullsub_108()
{
  ; /*0x4666b0*/
}
} // namespace gamemd

// 0x46B050
namespace gamemd {
LPVOID CreateUIObjectCOM(IUnknown * aP0, AbstractClass * aP1, AbstractClass * aP2, AbstractClass * aP3, AbstractClass * aP4, int a6, AbstractClass * aP7)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46B050)
}
} // namespace gamemd

// 0x46B9B0
namespace gamemd {
int sub_46B9B0()
{
  dword_89DE80 = 0; /*0x46b9b2*/
  dword_89DE84 = 0; /*0x46b9b7*/
  dword_89DE88 = 0; /*0x46b9bc*/
  dword_89DE8C = 0; /*0x46b9c1*/
  return 0; /*0x46b9c6*/
}
} // namespace gamemd

// 0x46B9D0
namespace gamemd {
void sub_46B9D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46b9dc*/
  dbl_89DE98 = Math::Sqrt(v0 + v0); /*0x46b9ee*/
}
} // namespace gamemd

// 0x46BA00
namespace gamemd {
void sub_46BA00()
{
  dbl_89DEE8 = dbl_89DE98 / 60.0; /*0x46ba0c*/
}
} // namespace gamemd

// 0x46BA20
namespace gamemd {
void sub_46BA20()
{
  dbl_89DED0 = 1.0 / dbl_89DEE8; /*0x46ba2c*/
}
} // namespace gamemd

// 0x46BA40
namespace gamemd {
void sub_46BA40()
{
  dbl_89DEC8 = 0.0174532925199433 * 45.0; /*0x46ba4c*/
}
} // namespace gamemd

// 0x46BA60
namespace gamemd {
void sub_46BA60()
{
  dbl_89DEA0 = 0.0174532925199433 * 60.0; /*0x46ba6c*/
}
} // namespace gamemd

// 0x46BA80
namespace gamemd {
void sub_46BA80()
{
  dbl_89DE78 = 0.0174532925199433 * 90.0; /*0x46ba8c*/
}
} // namespace gamemd

// 0x46BAA0
namespace gamemd {
long long sub_46BAA0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin((dbl_89DE78 - dbl_89DEA0)); /*0x46bab2*/
  result = Math::RoundToInt(v0 * dbl_89DE98 * 0.5); /*0x46bac6*/
  dword_89DEF0 = result; /*0x46bacb*/
  return result; /*0x46bad0*/
}
} // namespace gamemd

// 0x46BAE0
namespace gamemd {
void sub_46BAE0()
{
  dbl_89DEA8 = Math::ArcTan(((double)dword_89DEF0 * 0.00390625)); /*0x46baf7*/
}
} // namespace gamemd

// 0x46BB10
namespace gamemd {
void sub_46BB10()
{
  dbl_89DEC0 = Math::ArcTan(((double)(2 * dword_89DEF0) / dbl_89DE98)); /*0x46bb32*/
}
} // namespace gamemd

// 0x46BB40
namespace gamemd {
long long sub_46BB40()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DEF0) + 0.5); /*0x46bb5b*/
  dword_89DEE4 = result; /*0x46bb60*/
  return result; /*0x46bb66*/
}
} // namespace gamemd

// 0x46BB70
namespace gamemd {
int sub_46BB70()
{
  word_89DE90 = 0; /*0x46bb72*/
  word_89DE92 = 0; /*0x46bb78*/
  return 0; /*0x46bb7e*/
}
} // namespace gamemd

// 0x46BB80
namespace gamemd {
int sub_46BB80()
{
  dword_89DEB0 = 0; /*0x46bb82*/
  dword_89DEB4 = 0; /*0x46bb87*/
  dword_89DEB8 = 0; /*0x46bb8c*/
  return 0; /*0x46bb91*/
}
} // namespace gamemd

// 0x46BBA0
namespace gamemd {
int sub_46BBA0()
{
  dword_89DEE0 = 0; /*0x46bba5*/
  dword_89DED8 = 128; /*0x46bbaf*/
  dword_89DEDC = 128; /*0x46bbb4*/
  return 128; /*0x46bbb9*/
}
} // namespace gamemd

// 0x46C970
namespace gamemd {
void sub_46C970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46c97c*/
  dbl_89DF08 = Math::Sqrt(v0 + v0); /*0x46c98e*/
}
} // namespace gamemd

// 0x46C9A0
namespace gamemd {
void sub_46C9A0()
{
  dbl_89DF58 = dbl_89DF08 / 60.0; /*0x46c9ac*/
}
} // namespace gamemd

// 0x46C9C0
namespace gamemd {
void sub_46C9C0()
{
  dbl_89DF40 = 1.0 / dbl_89DF58; /*0x46c9cc*/
}
} // namespace gamemd

// 0x46C9E0
namespace gamemd {
void sub_46C9E0()
{
  dbl_89DF38 = 0.0174532925199433 * 45.0; /*0x46c9ec*/
}
} // namespace gamemd

// 0x46CA00
namespace gamemd {
void sub_46CA00()
{
  dbl_89DF10 = 0.0174532925199433 * 60.0; /*0x46ca0c*/
}
} // namespace gamemd

// 0x46CA20
namespace gamemd {
void sub_46CA20()
{
  dbl_89DEF8 = 0.0174532925199433 * 90.0; /*0x46ca2c*/
}
} // namespace gamemd

// 0x46CA40
namespace gamemd {
long long sub_46CA40()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin((dbl_89DEF8 - dbl_89DF10)); /*0x46ca52*/
  result = Math::RoundToInt(v0 * dbl_89DF08 * 0.5); /*0x46ca66*/
  dword_89DF60 = result; /*0x46ca6b*/
  return result; /*0x46ca70*/
}
} // namespace gamemd

// 0x46CA80
namespace gamemd {
void sub_46CA80()
{
  dbl_89DF18 = Math::ArcTan(((double)dword_89DF60 * 0.00390625)); /*0x46ca97*/
}
} // namespace gamemd

// 0x46CAB0
namespace gamemd {
void sub_46CAB0()
{
  dbl_89DF30 = Math::ArcTan(((double)(2 * dword_89DF60) / dbl_89DF08)); /*0x46cad2*/
}
} // namespace gamemd

// 0x46CAE0
namespace gamemd {
long long sub_46CAE0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DF60) + 0.5); /*0x46cafb*/
  dword_89DF54 = result; /*0x46cb00*/
  return result; /*0x46cb06*/
}
} // namespace gamemd

// 0x46CB10
namespace gamemd {
int sub_46CB10()
{
  word_89DF00 = 0; /*0x46cb12*/
  word_89DF02 = 0; /*0x46cb18*/
  return 0; /*0x46cb1e*/
}
} // namespace gamemd

// 0x46CB20
namespace gamemd {
int sub_46CB20()
{
  dword_89DF20 = 0; /*0x46cb22*/
  dword_89DF24 = 0; /*0x46cb27*/
  dword_89DF28 = 0; /*0x46cb2c*/
  return 0; /*0x46cb31*/
}
} // namespace gamemd

// 0x46CB40
namespace gamemd {
int sub_46CB40()
{
  dword_89DF50 = 0; /*0x46cb45*/
  dword_89DF48 = 128; /*0x46cb4f*/
  dword_89DF4C = 128; /*0x46cb54*/
  return 128; /*0x46cb59*/
}
} // namespace gamemd

// 0x46D120
namespace gamemd {
void sub_46D120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46d12c*/
  dbl_89DFA8 = Math::Sqrt(v0 + v0); /*0x46d13e*/
}
} // namespace gamemd

// 0x46D150
namespace gamemd {
void sub_46D150()
{
  dbl_89E040 = dbl_89DFA8 / 60.0; /*0x46d15c*/
}
} // namespace gamemd

// 0x46D170
namespace gamemd {
void sub_46D170()
{
  dbl_89E018 = 1.0 / dbl_89E040; /*0x46d17c*/
}
} // namespace gamemd

// 0x46D190
namespace gamemd {
void sub_46D190()
{
  dbl_89E010 = 0.0174532925199433 * 45.0; /*0x46d19c*/
}
} // namespace gamemd

// 0x46D1B0
namespace gamemd {
void sub_46D1B0()
{
  dbl_89DFB0 = 0.0174532925199433 * 60.0; /*0x46d1bc*/
}
} // namespace gamemd

// 0x46D1D0
namespace gamemd {
void sub_46D1D0()
{
  dbl_89DF68 = 0.0174532925199433 * 90.0; /*0x46d1dc*/
}
} // namespace gamemd

// 0x46D1F0
namespace gamemd {
long long sub_46D1F0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin((dbl_89DF68 - dbl_89DFB0)); /*0x46d202*/
  result = Math::RoundToInt(v0 * dbl_89DFA8 * 0.5); /*0x46d216*/
  dword_89E048 = result; /*0x46d21b*/
  return result; /*0x46d220*/
}
} // namespace gamemd

// 0x46D230
namespace gamemd {
void sub_46D230()
{
  dbl_89DFB8 = Math::ArcTan(((double)dword_89E048 * 0.00390625)); /*0x46d247*/
}
} // namespace gamemd

// 0x46D260
namespace gamemd {
void sub_46D260()
{
  dbl_89DFD8 = Math::ArcTan(((double)(2 * dword_89E048) / dbl_89DFA8)); /*0x46d282*/
}
} // namespace gamemd

// 0x46D290
namespace gamemd {
long long sub_46D290()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E048) + 0.5); /*0x46d2ab*/
  dword_89E034 = result; /*0x46d2b0*/
  return result; /*0x46d2b6*/
}
} // namespace gamemd

// 0x46D2C0
namespace gamemd {
int sub_46D2C0()
{
  word_89DFA0 = 0; /*0x46d2c2*/
  word_89DFA2 = 0; /*0x46d2c8*/
  return 0; /*0x46d2ce*/
}
} // namespace gamemd

// 0x46D2D0
namespace gamemd {
int sub_46D2D0()
{
  dword_89DFC8 = 0; /*0x46d2d2*/
  dword_89DFCC = 0; /*0x46d2d7*/
  dword_89DFD0 = 0; /*0x46d2dc*/
  return 0; /*0x46d2e1*/
}
} // namespace gamemd

// 0x46D2F0
namespace gamemd {
int sub_46D2F0()
{
  dword_89E030 = 0; /*0x46d2f5*/
  dword_89E028 = 128; /*0x46d2ff*/
  dword_89E02C = 128; /*0x46d304*/
  return 128; /*0x46d309*/
}
} // namespace gamemd

// 0x46D310
namespace gamemd {
int sub_46D310()
{
  dword_89DF70 = 0; /*0x46d312*/
  dword_89DF74 = 0; /*0x46d317*/
  dword_89DF78 = 0; /*0x46d31c*/
  dword_89DF7C = 0; /*0x46d321*/
  return 0; /*0x46d326*/
}
} // namespace gamemd

// 0x46D480
namespace gamemd {
__int64 sub_46D480(void * a1, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46D480)
}
}
// 0x46D490
namespace gamemd {
char E4Recv_46D490::sub_46D490()
{

  return *((unsigned char *)&g_GameModeOptionState + (unsigned int)this); /*0x46d496*/

}
} // namespace gamemd

// 0x46D810
namespace gamemd {
int sub_46D810()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46D810)
}
} // namespace gamemd

// 0x46DA20
namespace gamemd {
LRESULT sub_46DA20(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46DA20)
}
} // namespace gamemd

// 0x46F810
namespace gamemd {
int Lobby_GetPlayerColor(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46F810)
}
} // namespace gamemd

// 0x46F880
namespace gamemd {
int HouseClass_GetSideIndex(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46F880)
}
} // namespace gamemd
