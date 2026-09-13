// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_465D80_e4.hpp"
#include "e4/classes/E4Recv_46D350_e4.hpp"
#include "e4/classes/E4Recv_46D490_e4.hpp"

// 0x465D80
namespace gamemd {
Iostream_init * E4Recv_465D80::__0Iostream_init_QAE_XZ_2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_2(Iostream_init *this)
{
  return this; /*0x465d82*/
}
}
} // namespace gamemd

// 0x4660D0
namespace gamemd {
void sub_4660D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4660D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4660dc*/
  unk_89DDF8 = Math::Sqrt(v0 + v0); /*0x4660ee*/
}
}
} // namespace gamemd

// 0x466100
namespace gamemd {
void sub_466100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_466100()
{
  unk_89DE68 = unk_89DDF8 / 60.0; /*0x46610c*/
}
}
} // namespace gamemd

// 0x466120
namespace gamemd {
void sub_466120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_466120()
{
  unk_89DE50 = 1.0 / unk_89DE68; /*0x46612c*/
}
}
} // namespace gamemd

// 0x466140
namespace gamemd {
void sub_466140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_466140()
{
  unk_89DE48 = 0.0174532925199433 * 45.0; /*0x46614c*/
}
}
} // namespace gamemd

// 0x466160
namespace gamemd {
void sub_466160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_466160()
{
  unk_89DE00 = 0.0174532925199433 * 60.0; /*0x46616c*/
}
}
} // namespace gamemd

// 0x466180
namespace gamemd {
void sub_466180()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_466180()
{
  unk_89DDD8 = 0.0174532925199433 * 90.0; /*0x46618c*/
}
}
} // namespace gamemd

// 0x4661A0
namespace gamemd {
long long sub_4661A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4661A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89DDD8 - unk_89DE00); /*0x4661b2*/
  result = Math::RoundToInt(v0 * unk_89DDF8 * 0.5); /*0x4661c6*/
  unk_89DE70 = result; /*0x4661cb*/
  return result; /*0x4661d0*/
}
}
} // namespace gamemd

// 0x4661E0
namespace gamemd {
void sub_4661E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4661E0()
{
  unk_89DE08 = Math::ArcTan((double)unk_89DE70 * 0.00390625); /*0x4661f7*/
}
}
} // namespace gamemd

// 0x466210
namespace gamemd {
void sub_466210()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_466210()
{
  unk_89DE40 = Math::ArcTan((double)(2 * unk_89DE70) / unk_89DDF8); /*0x466232*/
}
}
} // namespace gamemd

// 0x466240
namespace gamemd {
long long sub_466240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_466240()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89DE70) + 0.5); /*0x46625b*/
  unk_89DE64 = result; /*0x466260*/
  return result; /*0x466266*/
}
}
} // namespace gamemd

// 0x466270
namespace gamemd {
int sub_466270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_466270()
{
  dword_89DDF0 = 0; /*0x466272*/
  return 0; /*0x46627e*/
}
}
} // namespace gamemd

// 0x466280
namespace gamemd {
int sub_466280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_466280()
{
  dword_89DE30 = 0; /*0x466282*/
  qword_89DE34 = 0; /*0x466287*/
  return 0; /*0x466291*/
}
}
} // namespace gamemd

// 0x4662A0
namespace gamemd {
int sub_4662A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4662A0()
{
  unk_89DE60 = 0; /*0x4662a5*/
  unk_89DE58 = 128; /*0x4662af*/
  unk_89DE5C = 128; /*0x4662b4*/
  return 128; /*0x4662b9*/
}
}
} // namespace gamemd

// 0x4662C0
namespace gamemd {
int sub_4662C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4662C0()
{
  unk_89DDE0 = 0; /*0x4662c2*/
  unk_89DDE4 = 0; /*0x4662c7*/
  unk_89DDE8 = 0; /*0x4662cc*/
  unk_89DDEC = 0; /*0x4662d1*/
  return 0; /*0x4662d6*/
}
}
} // namespace gamemd

// 0x4662E0
namespace gamemd {
int sub_4662E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4662E0()
{
  unk_89DE1C = 0; /*0x4662e7*/
  unk_89DE20 = 0; /*0x4662ec*/
  unk_89DE24 = 1; /*0x4662f1*/
  unk_89DE25 = 0; /*0x4662f8*/
  unk_89DE18 = (int)&off_7E4678; /*0x4662fd*/
  unk_89DE2C = 10; /*0x466307*/
  unk_89DE28 = 0; /*0x466311*/
  return atexit(sub_466320); /*0x46631c*/
}
}
} // namespace gamemd

// 0x466320
namespace gamemd {
void sub_466320()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_466320()
{
  if ( (unk_89DDD0 & 1) == 0 ) /*0x46632a*/
  {
    unk_89DE18 = (int)&vt_VectorClass_BulletClass; /*0x46632e*/
    unk_89DDD0 |= 1u; /*0x466341*/
    if ( unk_89DE1C ) /*0x466347*/
    {
      if ( unk_89DE25 ) /*0x466351*/
      {
        __3_YAXPAX_Z(unk_89DE1C); /*0x466354*/
        unk_89DE1C = 0; /*0x46635c*/
      }
    }
    unk_89DE25 = 0; /*0x466366*/
    unk_89DE20 = 0; /*0x46636d*/
  }
}
}
} // namespace gamemd

// 0x46B050
namespace gamemd {
LPVOID CreateUIObjectCOM(IUnknown * aP0, AbstractClass * aP1, AbstractClass * aP2, AbstractClass * aP3, AbstractClass * aP4, int a6, AbstractClass * aP7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LPVOID __fastcall CreateUIObjectCOM(
        IUnknown *aP0,
        AbstractClass *aP1,
        AbstractClass *aP2,
        AbstractClass *aP3,
        AbstractClass *aP4,
        int a6,
        AbstractClass *aP7)
{
  void *v10; // esi
  LPVOID ppv; // [esp+8h] [ebp-4h] BYREF

  ppv = 0; /*0x46b06a*/
  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) < 0 ) /*0x46b07a*/
    return 0; /*0x46b07d*/
  v10 = ppv; /*0x46b0a4*/
  Particle::Init( /*0x46b0a6*/
    (int)ppv,
    (AbstractClass *)aP0,
    (TechnoClass *)aP1,
    (IUnknown *)aP2,
    (TechnoClass *)aP3,
    (InfantryClass *)aP4,
    a6,
    aP7);
  return v10; /*0x46b07c*/
}
}
} // namespace gamemd

// 0x46B9B0
namespace gamemd {
int sub_46B9B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46B9B0()
{
  unk_89DE80 = 0; /*0x46b9b2*/
  unk_89DE84 = 0; /*0x46b9b7*/
  unk_89DE88 = 0; /*0x46b9bc*/
  unk_89DE8C = 0; /*0x46b9c1*/
  return 0; /*0x46b9c6*/
}
}
} // namespace gamemd

// 0x46B9D0
namespace gamemd {
void sub_46B9D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46B9D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46b9dc*/
  unk_89DE98 = Math::Sqrt(v0 + v0); /*0x46b9ee*/
}
}
} // namespace gamemd

// 0x46BA00
namespace gamemd {
void sub_46BA00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46BA00()
{
  unk_89DEE8 = unk_89DE98 / 60.0; /*0x46ba0c*/
}
}
} // namespace gamemd

// 0x46BA20
namespace gamemd {
void sub_46BA20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46BA20()
{
  unk_89DED0 = 1.0 / unk_89DEE8; /*0x46ba2c*/
}
}
} // namespace gamemd

// 0x46BA40
namespace gamemd {
void sub_46BA40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46BA40()
{
  unk_89DEC8 = 0.0174532925199433 * 45.0; /*0x46ba4c*/
}
}
} // namespace gamemd

// 0x46BA60
namespace gamemd {
void sub_46BA60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46BA60()
{
  unk_89DEA0 = 0.0174532925199433 * 60.0; /*0x46ba6c*/
}
}
} // namespace gamemd

// 0x46BA80
namespace gamemd {
void sub_46BA80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46BA80()
{
  unk_89DE78 = 0.0174532925199433 * 90.0; /*0x46ba8c*/
}
}
} // namespace gamemd

// 0x46BAA0
namespace gamemd {
long long sub_46BAA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_46BAA0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89DE78 - unk_89DEA0); /*0x46bab2*/
  result = Math::RoundToInt(v0 * unk_89DE98 * 0.5); /*0x46bac6*/
  unk_89DEF0 = result; /*0x46bacb*/
  return result; /*0x46bad0*/
}
}
} // namespace gamemd

// 0x46BAE0
namespace gamemd {
void sub_46BAE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46BAE0()
{
  unk_89DEA8 = Math::ArcTan((double)unk_89DEF0 * 0.00390625); /*0x46baf7*/
}
}
} // namespace gamemd

// 0x46BB10
namespace gamemd {
void sub_46BB10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46BB10()
{
  unk_89DEC0 = Math::ArcTan((double)(2 * unk_89DEF0) / unk_89DE98); /*0x46bb32*/
}
}
} // namespace gamemd

// 0x46BB40
namespace gamemd {
long long sub_46BB40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_46BB40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89DEF0) + 0.5); /*0x46bb5b*/
  unk_89DEE4 = result; /*0x46bb60*/
  return result; /*0x46bb66*/
}
}
} // namespace gamemd

// 0x46BB70
namespace gamemd {
int sub_46BB70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46BB70()
{
  unk_89DE90 = 0; /*0x46bb72*/
  unk_89DE92 = 0; /*0x46bb78*/
  return 0; /*0x46bb7e*/
}
}
} // namespace gamemd

// 0x46BB80
namespace gamemd {
int sub_46BB80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46BB80()
{
  unk_89DEB0 = 0; /*0x46bb82*/
  unk_89DEB4 = 0; /*0x46bb87*/
  unk_89DEB8 = 0; /*0x46bb8c*/
  return 0; /*0x46bb91*/
}
}
} // namespace gamemd

// 0x46BBA0
namespace gamemd {
int sub_46BBA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46BBA0()
{
  unk_89DEE0 = 0; /*0x46bba5*/
  unk_89DED8 = 128; /*0x46bbaf*/
  unk_89DEDC = 128; /*0x46bbb4*/
  return 128; /*0x46bbb9*/
}
}
} // namespace gamemd

// 0x46C970
namespace gamemd {
void sub_46C970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46C970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46c97c*/
  unk_89DF08 = Math::Sqrt(v0 + v0); /*0x46c98e*/
}
}
} // namespace gamemd

// 0x46C9A0
namespace gamemd {
void sub_46C9A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46C9A0()
{
  unk_89DF58 = unk_89DF08 / 60.0; /*0x46c9ac*/
}
}
} // namespace gamemd

// 0x46C9C0
namespace gamemd {
void sub_46C9C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46C9C0()
{
  unk_89DF40 = 1.0 / unk_89DF58; /*0x46c9cc*/
}
}
} // namespace gamemd

// 0x46C9E0
namespace gamemd {
void sub_46C9E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46C9E0()
{
  unk_89DF38 = 0.0174532925199433 * 45.0; /*0x46c9ec*/
}
}
} // namespace gamemd

// 0x46CA00
namespace gamemd {
void sub_46CA00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46CA00()
{
  unk_89DF10 = 0.0174532925199433 * 60.0; /*0x46ca0c*/
}
}
} // namespace gamemd

// 0x46CA20
namespace gamemd {
void sub_46CA20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46CA20()
{
  unk_89DEF8 = 0.0174532925199433 * 90.0; /*0x46ca2c*/
}
}
} // namespace gamemd

// 0x46CA40
namespace gamemd {
long long sub_46CA40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_46CA40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89DEF8 - unk_89DF10); /*0x46ca52*/
  result = Math::RoundToInt(v0 * unk_89DF08 * 0.5); /*0x46ca66*/
  unk_89DF60 = result; /*0x46ca6b*/
  return result; /*0x46ca70*/
}
}
} // namespace gamemd

// 0x46CA80
namespace gamemd {
void sub_46CA80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46CA80()
{
  unk_89DF18 = Math::ArcTan((double)unk_89DF60 * 0.00390625); /*0x46ca97*/
}
}
} // namespace gamemd

// 0x46CAB0
namespace gamemd {
void sub_46CAB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46CAB0()
{
  unk_89DF30 = Math::ArcTan((double)(2 * unk_89DF60) / unk_89DF08); /*0x46cad2*/
}
}
} // namespace gamemd

// 0x46CAE0
namespace gamemd {
long long sub_46CAE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_46CAE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89DF60) + 0.5); /*0x46cafb*/
  unk_89DF54 = result; /*0x46cb00*/
  return result; /*0x46cb06*/
}
}
} // namespace gamemd

// 0x46CB10
namespace gamemd {
int sub_46CB10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46CB10()
{
  unk_89DF00 = 0; /*0x46cb12*/
  unk_89DF02 = 0; /*0x46cb18*/
  return 0; /*0x46cb1e*/
}
}
} // namespace gamemd

// 0x46CB20
namespace gamemd {
int sub_46CB20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46CB20()
{
  unk_89DF20 = 0; /*0x46cb22*/
  unk_89DF24 = 0; /*0x46cb27*/
  unk_89DF28 = 0; /*0x46cb2c*/
  return 0; /*0x46cb31*/
}
}
} // namespace gamemd

// 0x46CB40
namespace gamemd {
int sub_46CB40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46CB40()
{
  unk_89DF50 = 0; /*0x46cb45*/
  unk_89DF48 = 128; /*0x46cb4f*/
  unk_89DF4C = 128; /*0x46cb54*/
  return 128; /*0x46cb59*/
}
}
} // namespace gamemd

// 0x46D120
namespace gamemd {
void sub_46D120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46D120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46d12c*/
  unk_89DFA8 = Math::Sqrt(v0 + v0); /*0x46d13e*/
}
}
} // namespace gamemd

// 0x46D150
namespace gamemd {
void sub_46D150()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46D150()
{
  unk_89E040 = unk_89DFA8 / 60.0; /*0x46d15c*/
}
}
} // namespace gamemd

// 0x46D170
namespace gamemd {
void sub_46D170()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46D170()
{
  unk_89E018 = 1.0 / unk_89E040; /*0x46d17c*/
}
}
} // namespace gamemd

// 0x46D190
namespace gamemd {
void sub_46D190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46D190()
{
  unk_89E010 = 0.0174532925199433 * 45.0; /*0x46d19c*/
}
}
} // namespace gamemd

// 0x46D1B0
namespace gamemd {
void sub_46D1B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46D1B0()
{
  unk_89DFB0 = 0.0174532925199433 * 60.0; /*0x46d1bc*/
}
}
} // namespace gamemd

// 0x46D1D0
namespace gamemd {
void sub_46D1D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46D1D0()
{
  unk_89DF68 = 0.0174532925199433 * 90.0; /*0x46d1dc*/
}
}
} // namespace gamemd

// 0x46D1F0
namespace gamemd {
long long sub_46D1F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_46D1F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89DF68 - unk_89DFB0); /*0x46d202*/
  result = Math::RoundToInt(v0 * unk_89DFA8 * 0.5); /*0x46d216*/
  unk_89E048 = result; /*0x46d21b*/
  return result; /*0x46d220*/
}
}
} // namespace gamemd

// 0x46D230
namespace gamemd {
void sub_46D230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46D230()
{
  unk_89DFB8 = Math::ArcTan((double)unk_89E048 * 0.00390625); /*0x46d247*/
}
}
} // namespace gamemd

// 0x46D260
namespace gamemd {
void sub_46D260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46D260()
{
  unk_89DFD8 = Math::ArcTan((double)(2 * unk_89E048) / unk_89DFA8); /*0x46d282*/
}
}
} // namespace gamemd

// 0x46D290
namespace gamemd {
long long sub_46D290()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_46D290()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89E048) + 0.5); /*0x46d2ab*/
  unk_89E034 = result; /*0x46d2b0*/
  return result; /*0x46d2b6*/
}
}
} // namespace gamemd

// 0x46D2C0
namespace gamemd {
int sub_46D2C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46D2C0()
{
  MEMORY[0x89DFA0] = 0; /*0x46d2c2*/
  MEMORY[0x89DFA2] = 0; /*0x46d2c8*/
  return 0; /*0x46d2ce*/
}
}
} // namespace gamemd

// 0x46D2D0
namespace gamemd {
int sub_46D2D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46D2D0()
{
  unk_89DFC8 = 0; /*0x46d2d2*/
  unk_89DFCC = 0; /*0x46d2d7*/
  unk_89DFD0 = 0; /*0x46d2dc*/
  return 0; /*0x46d2e1*/
}
}
} // namespace gamemd

// 0x46D2F0
namespace gamemd {
int sub_46D2F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46D2F0()
{
  unk_89E030 = 0; /*0x46d2f5*/
  unk_89E028 = 128; /*0x46d2ff*/
  unk_89E02C = 128; /*0x46d304*/
  return 128; /*0x46d309*/
}
}
} // namespace gamemd

// 0x46D310
namespace gamemd {
int sub_46D310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46D310()
{
  unk_89DF70 = 0; /*0x46d312*/
  unk_89DF74 = 0; /*0x46d317*/
  unk_89DF78 = 0; /*0x46d31c*/
  unk_89DF7C = 0; /*0x46d321*/
  return 0; /*0x46d326*/
}
}
} // namespace gamemd

// 0x46D350
namespace gamemd {
void E4Recv_46D350::sub_46D350()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_46D350(_DWORD *this)
{
  *this = &vt_CampaignScoreClass; /*0x46d350*/
}
}
} // namespace gamemd

// 0x46D480
namespace gamemd {
int sub_46D480()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __usercall sub_46D480@<edx:eax>(__int64 result@<edx:eax>, int a2@<ecx>)
{
  *((_BYTE *)&MEMORY[0x89E000] + a2) = BYTE4(result); /*0x46d480*/
  return result; /*0x46d486*/
}
}
} // namespace gamemd

// 0x46D490
namespace gamemd {
char E4Recv_46D490::sub_46D490()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_46D490(void *this)
{
  return *((_BYTE *)&MEMORY[0x89E000] + (_DWORD)this); /*0x46d496*/
}
}
} // namespace gamemd

// 0x46D650
namespace gamemd {
bool sub_46D650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool sub_46D650()
{
  bool v0; // bl
  HWND v1; // eax
  HWND DlgItem; // eax
  int v3; // ebp
  LPARAM *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // edi
  int v8; // edi
  LPARAM v9; // eax
  LPARAM v10; // eax
  LPARAM v11; // eax
  LPARAM v12; // eax
  LPARAM v13; // eax

  if ( MEMORY[0xA8D638] != 50 ) /*0x46d65b*/
    return 0; /*0x46d80a*/
  Debug::Log(); /*0x46d666*/
  v0 = MEMORY[0xA8EB68] != (char)MEMORY[0xA8D667]; /*0x46d67f*/
  MEMORY[0xA8EB68] = (char)MEMORY[0xA8D667]; /*0x46d686*/
  v1 = (HWND)Dialog::FindByHandle((void *)0xBC6); /*0x46d68b*/
  if ( v1 ) /*0x46d692*/
  {
    DlgItem = GetDlgItem(v1, 1842); /*0x46d69a*/
    if ( DlgItem ) /*0x46d6a2*/
      PostMessageA(DlgItem, 0x405u, 1u, MEMORY[0xA8EB68]); /*0x46d6b3*/
  }
  v3 = 0; /*0x46d6bc*/
  v4 = &MEMORY[0xA8DA90]; /*0x46d6be*/
  do /*0x46d7fd*/
  {
    v5 = *v4; /*0x46d6c3*/
    if ( *v4 && v5 != MEMORY[0xAC119C] && v5 != MEMORY[0xAC11A0] ) /*0x46d6d7*/
    {
      v6 = *(v4 - 266); /*0x46d6d9*/
      if ( SessionClass::GetOption(v5) != v6 ) /*0x46d6e6*/
        v0 = 1; /*0x46d6e8*/
      SessionClass::SetOption(*v4, v6); /*0x46d6ed*/
      v7 = *(v4 - 258); /*0x46d6f4*/
      if ( SessionClass::GetPlayerSide(*v4) != v7 ) /*0x46d701*/
        v0 = 1; /*0x46d703*/
      SessionClass::SetPlayerOption(*v4, v7); /*0x46d708*/
      v8 = *(v4 - 250); /*0x46d70f*/
      if ( SessionClass::GetPlayerColor(*v4) != v8 ) /*0x46d71c*/
        v0 = 1; /*0x46d71e*/
      SessionClass::SetPlayerColor(*v4, v8); /*0x46d723*/
    }
    ToWideStringChar((char *)*v4); /*0x46d72a*/
    SessionClass::GetPlayerColor(*v4); /*0x46d733*/
    SessionClass::GetPlayerSide(*v4); /*0x46d73b*/
    SessionClass::GetOption(*v4); /*0x46d743*/
    Debug::Log(); /*0x46d750*/
    v9 = *(v4 - 242); /*0x46d755*/
    if ( *(v4 - 2557) != v9 ) /*0x46d766*/
      v0 = 1; /*0x46d768*/
    *(v4 - 2557) = v9; /*0x46d76a*/
    v10 = *(v4 - 234); /*0x46d770*/
    if ( *(v4 - 2549) != v10 ) /*0x46d77c*/
      v0 = 1; /*0x46d77e*/
    *(v4 - 2549) = v10; /*0x46d780*/
    v11 = *(v4 - 226); /*0x46d786*/
    if ( *(v4 - 2565) != v11 ) /*0x46d792*/
      v0 = 1; /*0x46d794*/
    *(v4 - 2565) = v11; /*0x46d796*/
    v12 = *(v4 - 218); /*0x46d79c*/
    if ( *(v4 - 2541) != v12 ) /*0x46d7a8*/
      v0 = 1; /*0x46d7aa*/
    *(v4 - 2541) = v12; /*0x46d7ac*/
    v13 = *(v4 - 210); /*0x46d7b2*/
    if ( *(v4 - 2533) != v13 ) /*0x46d7be*/
      v0 = 1; /*0x46d7c0*/
    *(v4 - 2533) = v13; /*0x46d7c2*/
    Debug::Log(); /*0x46d7eb*/
    ++v4; /*0x46d7f3*/
    ++v3; /*0x46d7f6*/
  }
  while ( (int)v4 < (int)&MEMORY[0xA8DAB0] ); /*0x46d7fd*/
  return v0; /*0x46d808*/
}
}
} // namespace gamemd

// 0x46D810
namespace gamemd {
int sub_46D810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_46D810()
{
  int result; // eax
  int v1; // [esp+8h] [ebp-1C8h] BYREF
  char v2[43]; // [esp+Ch] [ebp-1C4h] BYREF
  int Option; // [esp+37h] [ebp-199h]
  int PlayerSide; // [esp+3Bh] [ebp-195h]
  int PlayerColor; // [esp+3Fh] [ebp-191h]

  v1 = 51; /*0x46d82c*/
  strcpy(v2, MEMORY[0xA8B380]); /*0x46d83d*/
  Option = SessionClass::GetOption(*(_DWORD *)MEMORY[0xA8DA78]); /*0x46d859*/
  PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)MEMORY[0xA8DA78]); /*0x46d864*/
  PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)MEMORY[0xA8DA78]); /*0x46d874*/
  result = MEMORY[0xA8DA90]; /*0x46d878*/
  if ( MEMORY[0xA8DA90] ) /*0x46d881*/
  {
    Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)&v1, 455, 1, (wchar_t *)MEMORY[0xA8DA90]); /*0x46d895*/
    return Network::ReceiveLoop(MEMORY[0xA8E9C0]); /*0x46d89f*/
  }
  return result; /*0x46d87d*/
}
}
} // namespace gamemd

// 0x46D8B0
namespace gamemd {
char sub_46D8B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_46D8B0()
{
  char v0; // bl
  int v1; // edi
  const wchar_t **v2; // esi
  char *v3; // eax
  int v5; // esi
  int PlayerSide; // eax
  int v7; // [esp-4h] [ebp-10h]

  v0 = 0; /*0x46d8b3*/
  v1 = 0; /*0x46d8b5*/
  v2 = (const wchar_t **)&MEMORY[0xA8DA90]; /*0x46d8b7*/
  while ( 1 ) /*0x46d8c1*/
  {
    v3 = CharToWideString(MEMORY[0xA8D63C]); /*0x46d8c1*/
    if ( !wcscmp((const wchar_t *)v3, *v2) ) /*0x46d8ca*/
      break; /*0x46d8ca*/
    ++v2; /*0x46d8d6*/
    ++v1; /*0x46d8d9*/
    if ( (int)v2 >= (int)&MEMORY[0xA8DAB0] ) /*0x46d8e0*/
      return 0; /*0x46d8e7*/
  }
  if ( v1 == -1 ) /*0x46d8eb*/
    return 0; /*0x46d8f2*/
  if ( SessionClass::GetPlayerSide(*(&MEMORY[0xA8DA90] + v1)) != *((_DWORD *)&MEMORY[0xA8D667] + 1) ) /*0x46d907*/
    v0 = 1; /*0x46d909*/
  if ( MEMORY[0xA8B23C] ) /*0x46d913*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xA8B23C] + 28))( /*0x46d918*/
           MEMORY[0xA8B23C],
           *((_DWORD *)&MEMORY[0xA8D667] + 1)) )
    {
      SessionClass::SetPlayerOption(*(&MEMORY[0xA8DA90] + v1), *((int *)&MEMORY[0xA8D667] + 1)); /*0x46d926*/
    }
    else if ( MEMORY[0xA8B23C] ) /*0x46d92f*/
    {
      v5 = *(_DWORD *)MEMORY[0xA8B23C]; /*0x46d938*/
      PlayerSide = SessionClass::GetPlayerSide(*(&MEMORY[0xA8DA90] + v1)); /*0x46d93a*/
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(v5 + 28))(MEMORY[0xA8B23C], PlayerSide) ) /*0x46d946*/
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 40))(MEMORY[0xA8B23C]); /*0x46d958*/
        SessionClass::SetPlayerOption(*(&MEMORY[0xA8DA90] + v1), v7); /*0x46d960*/
      }
    }
  }
  if ( SessionClass::GetPlayerColor(*(&MEMORY[0xA8DA90] + v1)) != MEMORY[0xA8D66F] ) /*0x46d979*/
    v0 = 1; /*0x46d97b*/
  if ( (unsigned __int8)IsAvailableColorhWnd() ) /*0x46d97d*/
  {
    if ( SessionClass::GetPlayerColor(*(&MEMORY[0xA8DA90] + v1)) != MEMORY[0xA8D66F] ) /*0x46d998*/
    {
      SessionClass::SetPlayerColor(*(&MEMORY[0xA8DA90] + v1), -2); /*0x46d9a3*/
      v0 = 1; /*0x46d9a8*/
    }
  }
  else
  {
    SessionClass::SetPlayerColor(*(&MEMORY[0xA8DA90] + v1), MEMORY[0xA8D66F]); /*0x46d9b9*/
  }
  if ( SessionClass::GetPlayerColor(*(&MEMORY[0xA8DA90] + v1)) != *(_DWORD *)&MEMORY[0xA8D667] ) /*0x46d9d2*/
    v0 = 1; /*0x46d9d4*/
  if ( (unsigned __int8)sub_4E50A0() ) /*0x46d9d6*/
  {
    if ( SessionClass::GetOption(*(&MEMORY[0xA8DA90] + v1)) != *(_DWORD *)&MEMORY[0xA8D667] ) /*0x46d9f1*/
    {
      SessionClass::SetOption(*(&MEMORY[0xA8DA90] + v1), -2); /*0x46d9fc*/
      return v0; /*0x46da06*/
    }
  }
  else
  {
    SessionClass::SetOption(*(&MEMORY[0xA8DA90] + v1), *(int *)&MEMORY[0xA8D667]); /*0x46da15*/
  }
  return v0; /*0x46d8e2*/
}
}
} // namespace gamemd

// 0x46DA20
namespace gamemd {
LRESULT sub_46DA20(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __fastcall sub_46DA20(CampaignScore *aP0, int nIDDlgItem, wchar_t *Format)
{
  HWND DlgItem; // eax
  CampaignScore *v7; // [esp+0h] [ebp-48h]
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7); /*0x46da38*/
  DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem); /*0x46da42*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x46da5b*/
}
}
} // namespace gamemd

// 0x46DA70
namespace gamemd {
void sub_46DA70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46DA70()
{
  int v0; // ebx
  int v1; // esi
  int v2; // edi
  size_t v3; // ebp
  int v4; // esi
  int v5; // eax
  int *v6; // ecx
  int v7; // edx
  int v8; // ebp
  int *v9; // ecx
  int v10; // edx
  int v11; // ebp
  int Count; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // edi
  int i; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]

  v0 = HouseClass_Count; /*0x46da74*/
  v1 = 0; /*0x46da7b*/
  MEMORY[0xA8D580] = 0; /*0x46da7f*/
  v17 = HouseClass_Count; /*0x46da85*/
  for ( i = 0; v1 < v0; i = v1 ) /*0x46da8d*/
  {
    v2 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v1]; /*0x46da9a*/
    if ( v2 /*0x46dab7*/
      && *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1
      && (unsigned __int8)House::IsCurrentPlayer(*(#375 **)&HouseClass_Array->__pad_0[4 * v1]) )
    {
      v3 = MEMORY[0xA8D580]++; /*0x46dacf*/
      v4 = 28 * v3; /*0x46dae1*/
      MEMORY[0xA8D228][28 * v3] = 0; /*0x46daea*/
      wcscpy((wchar_t *)&MEMORY[0xA8D1FC] + 56 * v3, (const wchar_t *)(v2 + 90154)); /*0x46daf5*/
      v5 = 0; /*0x46dafa*/
      MEMORY[0xA8D22C][28 * v3] = 0; /*0x46daff*/
      MEMORY[0xA8D23C][28 * v3] = 0; /*0x46db05*/
      MEMORY[0xA8D24C][28 * v3] = 0; /*0x46db0b*/
      MEMORY[0xA8D25C][28 * v3] = 0; /*0x46db11*/
      MEMORY[0xA8D224][28 * v3] = *(_DWORD *)(v2 + 90196); /*0x46db1d*/
      if ( !*(_BYTE *)(v2 + 501) ) /*0x46db23*/
      {
        ++MEMORY[0xA8D228][28 * v3]; /*0x46db34*/
        MEMORY[0xA8D584] = v3; /*0x46db3a*/
      }
      v6 = (int *)(v2 + 21476); /*0x46db40*/
      v7 = 20; /*0x46db46*/
      do /*0x46db53*/
      {
        v8 = *v6++; /*0x46db4b*/
        v5 += v8; /*0x46db50*/
        --v7; /*0x46db52*/
      }
      while ( v7 ); /*0x46db53*/
      v9 = (int *)(v2 + 21560); /*0x46db55*/
      v10 = 20; /*0x46db5b*/
      do /*0x46db68*/
      {
        v11 = *v9++; /*0x46db60*/
        v5 += v11; /*0x46db65*/
        --v10; /*0x46db67*/
      }
      while ( v10 ); /*0x46db68*/
      MEMORY[0xA8D23C][v4] = v5; /*0x46db6a*/
      MEMORY[0xA8D22C][v4] = *(_DWORD *)(v2 + 21640) + *(_DWORD *)(v2 + 21556); /*0x46db84*/
      Count = VectorClass::GetCount((_DWORD *)(v2 + 21840)); /*0x46db95*/
      v13 = VectorClass::GetCount((_DWORD *)(v2 + 21860)) + Count; /*0x46dba2*/
      v14 = VectorClass::GetCount((_DWORD *)(v2 + 21880)) + v13; /*0x46dbaf*/
      MEMORY[0xA8D24C][v4] = *(_DWORD *)(v2 + 21640) /*0x46dbc8*/
                           + VectorClass::GetCount((_DWORD *)(v2 + 21900))
                           + v14
                           + *(_DWORD *)(v2 + 21556);
      v15 = *(_DWORD *)(v2 + 21736); /*0x46dbce*/
      if ( v15 > 0 ) /*0x46dbd6*/
        MEMORY[0xA8D25C][v4] += v15; /*0x46dbd8*/
      Debug::Log(); /*0x46dc1c*/
      v1 = i; /*0x46dc21*/
      v0 = v17; /*0x46dc25*/
    }
    ++v1; /*0x46dc2c*/
  }
}
}
} // namespace gamemd

// 0x46DCC0
namespace gamemd {
BOOL sub_46DCC0(HWND hDlg, bool a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall sub_46DCC0(HWND hDlg, bool a2)
{
  int i; // edi
  BOOL result; // eax
  int v5; // eax
  HWND DlgItem; // eax
  int ResourceID2CSF; // eax
  HWND v8; // eax
  int ResourceIDCSF; // eax
  HWND v10; // eax
  int ResourceID3CSF; // eax
  HWND v12; // eax

  for ( i = 0; i < 8; ++i )
  {
    result = IsKnownPointer((wchar_t *)*(&MEMORY[0xA8DA90] + i)); /*0x46dcda*/
    if ( result && i != MEMORY[0xA8DA8C] )
    {
      if ( i )
        v5 = i != 1 ? -1 : 1042;
      else
        v5 = 1041; /*0x46dcef*/
      DlgItem = GetDlgItem(hDlg, v5); /*0x46dd09*/
      EnableWindow(DlgItem, a2); /*0x46dd17*/
      ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x46dd1f*/
      v8 = GetDlgItem(hDlg, ResourceID2CSF); /*0x46dd26*/
      EnableWindow(v8, a2); /*0x46dd2a*/
      ResourceIDCSF = GetResourceIDCSF((void *)i); /*0x46dd32*/
      v10 = GetDlgItem(hDlg, ResourceIDCSF); /*0x46dd39*/
      EnableWindow(v10, a2); /*0x46dd3d*/
      ResourceID3CSF = GetResourceID3CSF((void *)i); /*0x46dd45*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x46dd4c*/
      result = EnableWindow(v12, a2); /*0x46dd50*/
    }
  }
  return result; /*0x46dd60*/
}
}
} // namespace gamemd

// 0x46DD70
namespace gamemd {
HWND EnableGameModeControls(HWND hDlg, bool a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __fastcall EnableGameModeControls(HWND hDlg, bool a2)
{
  int v4; // eax
  HWND DlgItem; // eax
  int ResourceID2CSF; // eax
  HWND v7; // eax
  int ResourceIDCSF; // eax
  HWND v9; // eax
  int ResourceID3CSF; // eax
  HWND v11; // eax
  HWND result; // eax
  HWND v13; // edi

  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[32] )
    v4 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[32] != 1 ? -1 : 1042;
  else
    v4 = 1041; /*0x46dd81*/
  DlgItem = GetDlgItem(hDlg, v4); /*0x46dd9f*/
  EnableWindow(DlgItem, a2); /*0x46ddaf*/
  ResourceID2CSF = GetResourceID2CSF(*(void **)&MEMORY[0xA8D63C].__pad_430[32]); /*0x46ddb7*/
  v7 = GetDlgItem(hDlg, ResourceID2CSF); /*0x46ddbe*/
  EnableWindow(v7, a2); /*0x46ddc2*/
  ResourceIDCSF = GetResourceIDCSF(*(void **)&MEMORY[0xA8D63C].__pad_430[32]); /*0x46ddca*/
  v9 = GetDlgItem(hDlg, ResourceIDCSF); /*0x46ddd1*/
  EnableWindow(v9, a2); /*0x46ddd5*/
  ResourceID3CSF = GetResourceID3CSF(*(void **)&MEMORY[0xA8D63C].__pad_430[32]); /*0x46dddd*/
  v11 = GetDlgItem(hDlg, ResourceID3CSF); /*0x46dde4*/
  EnableWindow(v11, a2); /*0x46dde8*/
  result = (HWND)Settings::CheckString(); /*0x46ddea*/
  if ( (_BYTE)result ) /*0x46ddf1*/
  {
    result = GetDlgItem(hDlg, 1842); /*0x46ddf9*/
    v13 = result; /*0x46ddfb*/
    if ( result ) /*0x46ddff*/
    {
      EnableWindow(result, a2); /*0x46de03*/
      return (HWND)InvalidateRect(v13, 0, 0); /*0x46de0a*/
    }
  }
  return result; /*0x46de10*/
}
}
} // namespace gamemd

// 0x46DE20
namespace gamemd {
HWND sub_46DE20(HWND hDlg, int nCmdShow)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __fastcall sub_46DE20(HWND hDlg, int nCmdShow)
{
  HWND DlgItem; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND result; // eax
  HWND hWnd; // [esp+10h] [ebp-4h]

  DlgItem = GetDlgItem(hDlg, 1842); /*0x46de35*/
  hWnd = DlgItem; /*0x46de3f*/
  if ( DlgItem ) /*0x46de43*/
  {
    ShowWindow(DlgItem, nCmdShow); /*0x46de47*/
    InvalidateRect(hWnd, 0, 0); /*0x46de52*/
  }
  v5 = GetDlgItem(hDlg, 1839); /*0x46de5e*/
  if ( v5 ) /*0x46de62*/
    ShowWindow(v5, nCmdShow); /*0x46de66*/
  v6 = GetDlgItem(hDlg, 1944); /*0x46de6e*/
  if ( v6 ) /*0x46de72*/
    ShowWindow(v6, nCmdShow); /*0x46de76*/
  v7 = GetDlgItem(hDlg, 1945); /*0x46de7e*/
  if ( v7 ) /*0x46de82*/
    ShowWindow(v7, nCmdShow); /*0x46de86*/
  v8 = GetDlgItem(hDlg, 1946); /*0x46de8e*/
  if ( v8 ) /*0x46de92*/
    ShowWindow(v8, nCmdShow); /*0x46de96*/
  v9 = GetDlgItem(hDlg, 1947); /*0x46de9e*/
  if ( v9 ) /*0x46dea2*/
    ShowWindow(v9, nCmdShow); /*0x46dea6*/
  v10 = GetDlgItem(hDlg, 1918); /*0x46deae*/
  if ( v10 ) /*0x46deb2*/
    ShowWindow(v10, nCmdShow); /*0x46deb6*/
  v11 = GetDlgItem(hDlg, 1746); /*0x46debe*/
  if ( v11 ) /*0x46dec2*/
    ShowWindow(v11, nCmdShow); /*0x46dec6*/
  v12 = GetDlgItem(hDlg, 1747); /*0x46dece*/
  if ( v12 ) /*0x46ded2*/
    ShowWindow(v12, nCmdShow); /*0x46ded6*/
  v13 = GetDlgItem(hDlg, 1041); /*0x46dede*/
  if ( v13 ) /*0x46dee2*/
    ShowWindow(v13, nCmdShow); /*0x46dee6*/
  v14 = GetDlgItem(hDlg, 1042); /*0x46deee*/
  if ( v14 ) /*0x46def2*/
    ShowWindow(v14, nCmdShow); /*0x46def6*/
  v15 = GetDlgItem(hDlg, 1754); /*0x46defe*/
  if ( v15 ) /*0x46df02*/
    ShowWindow(v15, nCmdShow); /*0x46df06*/
  v16 = GetDlgItem(hDlg, 1755); /*0x46df0e*/
  if ( v16 ) /*0x46df12*/
    ShowWindow(v16, nCmdShow); /*0x46df16*/
  v17 = GetDlgItem(hDlg, 1697); /*0x46df1e*/
  if ( v17 ) /*0x46df22*/
    ShowWindow(v17, nCmdShow); /*0x46df26*/
  v18 = GetDlgItem(hDlg, 1296); /*0x46df2e*/
  if ( v18 ) /*0x46df32*/
    ShowWindow(v18, nCmdShow); /*0x46df36*/
  v19 = GetDlgItem(hDlg, 1698); /*0x46df3e*/
  if ( v19 ) /*0x46df42*/
    ShowWindow(v19, nCmdShow); /*0x46df46*/
  v20 = GetDlgItem(hDlg, 1314); /*0x46df4e*/
  if ( v20 ) /*0x46df52*/
    ShowWindow(v20, nCmdShow); /*0x46df56*/
  v21 = GetDlgItem(hDlg, 1699); /*0x46df5e*/
  if ( v21 ) /*0x46df62*/
    ShowWindow(v21, nCmdShow); /*0x46df66*/
  v22 = GetDlgItem(hDlg, 1700); /*0x46df6e*/
  if ( v22 ) /*0x46df72*/
    ShowWindow(v22, nCmdShow); /*0x46df76*/
  v23 = GetDlgItem(hDlg, 1745); /*0x46df7e*/
  if ( v23 ) /*0x46df82*/
    ShowWindow(v23, nCmdShow); /*0x46df86*/
  v24 = GetDlgItem(hDlg, 1448); /*0x46df8e*/
  if ( v24 ) /*0x46df92*/
    ShowWindow(v24, nCmdShow); /*0x46df96*/
  v25 = GetDlgItem(hDlg, 1820); /*0x46df9e*/
  if ( v25 ) /*0x46dfa2*/
    ShowWindow(v25, nCmdShow == 0); /*0x46dfaf*/
  result = GetDlgItem(hDlg, 1128); /*0x46dfb7*/
  if ( result ) /*0x46dfbb*/
    return (HWND)ShowWindow(result, nCmdShow); /*0x46dfbf*/
  return result; /*0x46dfc1*/
}
}
} // namespace gamemd

// 0x46F810
namespace gamemd {
int Lobby_GetPlayerColor(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Lobby_GetPlayerColor(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x46f814*/
  if ( Player::IsObserver(v2) ) /*0x46f81d*/
    return MEMORY[0xA8B2BC][a1]; /*0x46f826*/
  if ( v2 == (wchar_t *)MEMORY[0xAC119C] ) /*0x46f836*/
    return -2; /*0x46f839*/
  if ( v2 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x46f846*/
    return -2; /*0x46f849*/
  if ( v2 == MEMORY[0xAC11B0] ) /*0x46f856*/
    return -2; /*0x46f859*/
  if ( v2 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x46f866*/
    return -2; /*0x46f869*/
  return SessionClass::GetPlayerColor((int)v2); /*0x46f82d*/
}
}
} // namespace gamemd

// 0x46F880
namespace gamemd {
int HouseClass_GetSideIndex(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall HouseClass_GetSideIndex(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x46f884*/
  if ( Player::IsObserver(v2) ) /*0x46f88d*/
    return MEMORY[0xA8B2DC][a1]; /*0x46f896*/
  if ( v2 == (wchar_t *)MEMORY[0xAC119C] ) /*0x46f8a6*/
    return -2; /*0x46f8a9*/
  if ( v2 == (wchar_t *)MEMORY[0xAC11A0] ) /*0x46f8b6*/
    return -2; /*0x46f8b9*/
  if ( v2 == MEMORY[0xAC11B0] ) /*0x46f8c6*/
    return -2; /*0x46f8c9*/
  if ( v2 == (wchar_t *)MEMORY[0xAC11B4] ) /*0x46f8d6*/
    return -2; /*0x46f8d9*/
  return SessionClass::GetOption((int)v2); /*0x46f89d*/
}
}
} // namespace gamemd

// 0x465CB0
namespace gamemd {
void nullsub_7()
{
  ;
}
} // namespace gamemd

// 0x4666B0
namespace gamemd {
void nullsub_108()
{
  ;
}
} // namespace gamemd
