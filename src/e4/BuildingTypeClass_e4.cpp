// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x45DD90
int BuildingTypeClass::ConstructFull(char * Source)
{
  int v3; // ecx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebp
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // edi
  int v17; // edx
  _DWORD *v18; // eax
  int v19; // ecx
  _DWORD *v20; // edi

  TechnoTypeClass::ReadINI((char *)this, Source, 0); /*0x45dda1*/
  *(_DWORD *)(this + 3576) = -1; /*0x45ddaf*/
  *(_DWORD *)(this + 3580) = 0; /*0x45ddb5*/
  *(_DWORD *)(this + 3584) = 0; /*0x45ddbb*/
  *(_BYTE *)(this + 3588) = 0; /*0x45ddc1*/
  *(_DWORD *)(this + 3592) = 0; /*0x45ddc7*/
  *(_DWORD *)(this + 3596) = dword_89C8D0; /*0x45ddd3*/
  *(_DWORD *)(this + 3600) = dword_89C8D4; /*0x45ddda*/
  *(_DWORD *)(this + 3604) = dword_89C8D8; /*0x45dde9*/
  *(_DWORD *)(this + 3608) = dword_89C8D0; /*0x45ddf2*/
  *(_DWORD *)(this + 3612) = dword_89C8D4; /*0x45ddfa*/
  *(_DWORD *)(this + 3616) = dword_89C8D8; /*0x45de03*/
  *(_DWORD *)(this + 3624) = 0; /*0x45de06*/
  *(_DWORD *)(this + 3628) = 0; /*0x45de0c*/
  *(_DWORD *)(this + 3632) = 5000; /*0x45de12*/
  *(_DWORD *)(this + 3636) = 0; /*0x45de21*/
  *(_DWORD *)(this + 3640) = 1000000; /*0x45de27*/
  *(_DWORD *)(this + 3644) = 1000000; /*0x45de2d*/
  *(_DWORD *)(this + 3648) = 1000000; /*0x45de33*/
  *(_DWORD *)(this + 3652) = 0xFFFF; /*0x45de40*/
  *(_DWORD *)(this + 3656) = 0xFFFF; /*0x45de46*/
  *(_DWORD *)(this + 3660) = 0xFFFF; /*0x45de4c*/
  *(_DWORD *)(this + 3664) = 0xFFFF; /*0x45de52*/
  *(_DWORD *)(this + 3668) = 0; /*0x45de58*/
  *(_DWORD *)(this + 3672) = 0; /*0x45de5e*/
  *(_DWORD *)(this + 3692) = -1; /*0x45de64*/
  *(_DWORD *)(this + 3696) = -1; /*0x45de6a*/
  *(_DWORD *)(this + 3700) = -1; /*0x45de70*/
  *(_DWORD *)(this + 3704) = -1; /*0x45de76*/
  *(_DWORD *)(this + 3708) = -1; /*0x45de7c*/
  *(_DWORD *)(this + 3712) = -1; /*0x45de82*/
  *(_DWORD *)(this + 3716) = -1; /*0x45de88*/
  *(_DWORD *)(this + 3744) = 0; /*0x45de8e*/
  *(_DWORD *)(this + 3748) = 0; /*0x45de94*/
  *(_DWORD *)(this + 3752) = 0; /*0x45de9a*/
  *(_DWORD *)(this + 3756) = 0; /*0x45dea0*/
  *(_DWORD *)(this + 3760) = -1; /*0x45dea6*/
  *(_DWORD *)(this + 3764) = 3; /*0x45deac*/
  *(_DWORD *)(this + 3768) = 0; /*0x45deb6*/
  *(_DWORD *)(this + 3772) = 0; /*0x45debc*/
  *(_DWORD *)(this + 3776) = 0; /*0x45dec2*/
  *(_DWORD *)(this + 3780) = 0; /*0x45dec8*/
  *(_DWORD *)(this + 3784) = 0; /*0x45dece*/
  *(_DWORD *)(this + 3788) = 0; /*0x45ded4*/
  *(_DWORD *)(this + 3792) = 0; /*0x45deda*/
  *(_DWORD *)(this + 3796) = 0; /*0x45dee0*/
  *(_DWORD *)(this + 3800) = 0; /*0x45dee6*/
  *(_DWORD *)(this + 3804) = 128; /*0x45deec*/
  *(_DWORD *)(this + 3808) = 0; /*0x45def6*/
  *(_DWORD *)(this + 3812) = 0; /*0x45defc*/
  *(_DWORD *)(this + 3816) = 0; /*0x45df02*/
  *(_DWORD *)(this + 3820) = 0; /*0x45df08*/
  *(_DWORD *)(this + 3824) = 0; /*0x45df13*/
  *(_DWORD *)(this + 3828) = 2; /*0x45df19*/
  *(_DWORD *)(this + 3832) = 2; /*0x45df1f*/
  *(_DWORD *)(this + 3836) = 0; /*0x45df25*/
  *(_DWORD *)(this + 3840) = 0; /*0x45df2b*/
  *(_DWORD *)(this + 5344) = 0; /*0x45df31*/
  *(_DWORD *)(this + 5348) = 0; /*0x45df37*/
  *(_DWORD *)(this + 5356) = 0; /*0x45df3d*/
  *(_DWORD *)(this + 5364) = 0; /*0x45df43*/
  *(_DWORD *)(this + 5372) = 0; /*0x45df49*/
  *(_DWORD *)(this + 5380) = 0; /*0x45df4f*/
  *(_DWORD *)(this + 5388) = 0; /*0x45df55*/
  *(_DWORD *)(this + 5392) = 0; /*0x45df5b*/
  *(_DWORD *)(this + 5396) = 0; /*0x45df61*/
  *(_DWORD *)(this + 5400) = 0; /*0x45df67*/
  *(_BYTE *)(this + 5404) = 0; /*0x45df6d*/
  *(_DWORD *)(this + 5408) = 0; /*0x45df73*/
  *(_DWORD *)(this + 5412) = 0; /*0x45df79*/
  *(_DWORD *)(this + 5416) = 0; /*0x45df7f*/
  *(_DWORD *)(this + 5420) = 0; /*0x45df87*/
  *(_DWORD *)(this + 5424) = 0; /*0x45df8d*/
  *(_DWORD *)(this + 5428) = 0; /*0x45df93*/
  *(_DWORD *)(this + 5432) = dword_89C8A0; /*0x45dfa4*/
  *(_DWORD *)(this + 5436) = dword_89C8A4; /*0x45dfb0*/
  *(_DWORD *)(this + 5440) = dword_89C8A8; /*0x45dfb8*/
  v3 = dword_89C8AC; /*0x45dfbb*/
  *(_BYTE *)(this + 5454) = 0; /*0x45dfc3*/
  *(_DWORD *)(this + 5444) = v3; /*0x45dfc9*/
  *(_WORD *)(this + 5448) = 0; /*0x45dfcc*/
  *(_BYTE *)(this + 5450) = 1; /*0x45dfd3*/
  *(_BYTE *)(this + 5451) = 0; /*0x45dfda*/
  *(_BYTE *)(this + 5452) = 0; /*0x45dfe0*/
  *(_DWORD *)(this + 5656) = 0; /*0x45dfe6*/
  *(_BYTE *)(this + 5453) = 0; /*0x45dfec*/
  *(_BYTE *)(this + 5455) = 1; /*0x45dff2*/
  *(_BYTE *)(this + 5456) = 0; /*0x45dff9*/
  *(_BYTE *)(this + 5457) = 0; /*0x45dfff*/
  *(_BYTE *)(this + 5458) = 0; /*0x45e005*/
  *(_DWORD *)(this + 5460) = -1; /*0x45e00b*/
  *(_DWORD *)(this + 5464) = 0; /*0x45e011*/
  *(_DWORD *)(this + 5468) = 0; /*0x45e017*/
  *(_DWORD *)(this + 5472) = 0; /*0x45e01d*/
  *(_DWORD *)(this + 5476) = 0; /*0x45e023*/
  *(_DWORD *)(this + 5480) = 0; /*0x45e029*/
  *(_DWORD *)(this + 5484) = 25; /*0x45e02f*/
  *(_BYTE *)(this + 5488) = 0; /*0x45e039*/
  *(_BYTE *)(this + 5489) = 0; /*0x45e03f*/
  *(_BYTE *)(this + 5490) = 0; /*0x45e045*/
  *(_BYTE *)(this + 5491) = 0; /*0x45e04b*/
  *(_BYTE *)(this + 5492) = 0; /*0x45e051*/
  *(_BYTE *)(this + 5493) = 0; /*0x45e057*/
  *(_BYTE *)(this + 5494) = 0; /*0x45e05d*/
  *(_BYTE *)(this + 5495) = 1; /*0x45e063*/
  *(_BYTE *)(this + 5496) = 0; /*0x45e06a*/
  *(_BYTE *)(this + 5497) = 0; /*0x45e070*/
  *(_BYTE *)(this + 5498) = 1; /*0x45e076*/
  *(_BYTE *)(this + 5499) = 0; /*0x45e07d*/
  *(_BYTE *)(this + 5500) = 0; /*0x45e083*/
  *(_DWORD *)(this + 5504) = 0; /*0x45e089*/
  *(_BYTE *)(this + 5508) = 1; /*0x45e08f*/
  *(_DWORD *)(this + 5660) = 0; /*0x45e096*/
  *(_DWORD *)(this + 5664) = -1; /*0x45e09c*/
  *(_BYTE *)(this + 5796) = 0; /*0x45e0a2*/
  *(_BYTE *)(this + 5797) = 0; /*0x45e0a8*/
  *(_BYTE *)(this + 5798) = 0; /*0x45e0ae*/
  *(_BYTE *)(this + 5799) = 0; /*0x45e0b4*/
  *(_BYTE *)(this + 5800) = 0; /*0x45e0ba*/
  *(_BYTE *)(this + 5801) = 0; /*0x45e0c0*/
  *(_BYTE *)(this + 5802) = 0; /*0x45e0c6*/
  *(_BYTE *)(this + 5803) = 0; /*0x45e0cc*/
  *(_BYTE *)(this + 5804) = 0; /*0x45e0d2*/
  *(_BYTE *)(this + 5805) = 0; /*0x45e0d8*/
  *(_BYTE *)(this + 5806) = 0; /*0x45e0de*/
  *(_BYTE *)(this + 5807) = 0; /*0x45e0e4*/
  *(_BYTE *)(this + 5808) = 0; /*0x45e0ea*/
  *(_BYTE *)(this + 5809) = 0; /*0x45e0f0*/
  *(_BYTE *)(this + 5810) = 0; /*0x45e0f6*/
  *(_BYTE *)(this + 5811) = 0; /*0x45e0fc*/
  *(_BYTE *)(this + 5812) = 0; /*0x45e102*/
  *(_BYTE *)(this + 5813) = 1; /*0x45e108*/
  *(_BYTE *)(this + 5814) = 0; /*0x45e10f*/
  *(_BYTE *)(this + 5815) = 0; /*0x45e115*/
  *(_BYTE *)(this + 5816) = 0; /*0x45e11b*/
  *(_BYTE *)(this + 5817) = 0; /*0x45e121*/
  *(_BYTE *)(this + 5818) = 0; /*0x45e127*/
  *(_BYTE *)(this + 5819) = 0; /*0x45e12d*/
  *(_BYTE *)(this + 5820) = 0; /*0x45e133*/
  *(_BYTE *)(this + 5821) = 0; /*0x45e139*/
  *(_BYTE *)(this + 5822) = 0; /*0x45e13f*/
  *(_BYTE *)(this + 5823) = 0; /*0x45e145*/
  *(_BYTE *)(this + 5824) = 0; /*0x45e14b*/
  *(_BYTE *)(this + 5825) = 0; /*0x45e151*/
  *(_BYTE *)(this + 5826) = 0; /*0x45e157*/
  *(_BYTE *)(this + 5827) = 0; /*0x45e15d*/
  *(_BYTE *)(this + 5828) = 0; /*0x45e163*/
  *(_BYTE *)(this + 5829) = 0; /*0x45e169*/
  *(_BYTE *)(this + 5830) = 0; /*0x45e16f*/
  *(_BYTE *)(this + 5831) = 0; /*0x45e175*/
  *(_BYTE *)(this + 5832) = 0; /*0x45e17b*/
  *(_BYTE *)(this + 5833) = 0; /*0x45e181*/
  *(_BYTE *)(this + 5834) = 0; /*0x45e187*/
  *(_BYTE *)(this + 5835) = 0; /*0x45e18d*/
  *(_BYTE *)(this + 5836) = 0; /*0x45e193*/
  *(_BYTE *)(this + 5837) = 0; /*0x45e19e*/
  *(_DWORD *)(this + 5840) = 1065353216; /*0x45e1a4*/
  *(_DWORD *)(this + 5844) = 1065353216; /*0x45e1aa*/
  *(_DWORD *)(this + 5848) = 1065353216; /*0x45e1b0*/
  *(_DWORD *)(this + 5852) = 1065353216; /*0x45e1b6*/
  *(_DWORD *)(this + 5856) = 1065353216; /*0x45e1bc*/
  *(_BYTE *)(this + 5860) = 0; /*0x45e1c2*/
  *(_BYTE *)(this + 5861) = 0; /*0x45e1c8*/
  *(_BYTE *)(this + 5862) = 0; /*0x45e1ce*/
  *(_DWORD *)(this + 5864) = 1148829696; /*0x45e1d4*/
  *(_DWORD *)(this + 5868) = 0; /*0x45e1de*/
  *(_DWORD *)(this + 5872) = -1; /*0x45e1e4*/
  *(_DWORD *)(this + 5876) = -1; /*0x45e1ea*/
  *(_DWORD *)(this + 5880) = 9; /*0x45e1f0*/
  *(_DWORD *)(this + 5884) = -1; /*0x45e1fa*/
  *(_BYTE *)(this + 5888) = 0; /*0x45e200*/
  *(_BYTE *)(this + 5889) = 0; /*0x45e206*/
  *(_BYTE *)(this + 5890) = 0; /*0x45e20c*/
  *(_BYTE *)(this + 5891) = 0; /*0x45e212*/
  *(_BYTE *)(this + 5892) = 1; /*0x45e218*/
  *(_BYTE *)(this + 5893) = 0; /*0x45e21f*/
  *(_BYTE *)(this + 5894) = 0; /*0x45e225*/
  *(_BYTE *)(this + 5895) = 20; /*0x45e22b*/
  *(_BYTE *)(this + 5896) = 0; /*0x45e232*/
  *(_DWORD *)(this + 5900) = 0; /*0x45e238*/
  *(_DWORD *)(this + 5904) = 64; /*0x45e23e*/
  *(_BYTE *)(this + 5984) = 0; /*0x45e248*/
  *(_BYTE *)(this + 5985) = 0; /*0x45e24e*/
  *(_BYTE *)(this + 5986) = 0; /*0x45e254*/
  *(_BYTE *)(this + 5987) = 0; /*0x45e25a*/
  *(_BYTE *)(this + 5988) = 0; /*0x45e260*/
  *(_BYTE *)(this + 5989) = 0; /*0x45e266*/
  *(_BYTE *)(this + 5990) = 1; /*0x45e26c*/
  *(_BYTE *)(this + 5991) = 0; /*0x45e273*/
  *(_BYTE *)(this + 5992) = 0; /*0x45e279*/
  *(_BYTE *)(this + 5993) = 0; /*0x45e284*/
  *(_DWORD *)(this + 6016) = 1; /*0x45e28a*/
  *(_DWORD *)(this + 6024) = 0; /*0x45e292*/
  *(_DWORD *)(this + 6028) = 1; /*0x45e298*/
  *(_BYTE *)(this + 6032) = 1; /*0x45e29e*/
  *(_BYTE *)(this + 6033) = 0; /*0x45e2a5*/
  *(_DWORD *)(this + 6020) = &VectorClass<TPoint3D<int>>::`vftable'; /*0x45e2ab*/
  *(_DWORD *)(this + 6024) = __2_YAPAXI_Z(0xCu); /*0x45e2ba*/
  *(_BYTE *)(this + 6033) = 1; /*0x45e2c6*/
  *(_DWORD *)this = &BuildingTypeClass::`vftable'; /*0x45e2cd*/
  *(_DWORD *)(this + 4) = &BuildingTypeClass::`vftable'; /*0x45e2d3*/
  *(_DWORD *)(this + 8) = &BuildingTypeClass::`vftable'; /*0x45e2d9*/
  *(_DWORD *)(this + 12) = &BuildingTypeClass::`vftable'; /*0x45e2e1*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x45e2e8*/
  v4 = g_TriggerClassCount; /*0x45e2ed*/
  if ( g_TriggerClassCount < dword_A83C70 /*0x45e32b*/
    || (byte_A83C75 || !dword_A83C70)
    && dword_A83C7C > 0
    && (v5 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83C68 + 8))(
               &dword_A83C68,
               dword_A83C7C + dword_A83C70,
               0) == 0,
        v4 = g_TriggerClassCount,
        !v5) )
  {
    g_TriggerClassCount = v4 + 1; /*0x45e330*/
    *((_DWORD *)g_TriggerTypeCount + v4) = this; /*0x45e33a*/
    v4 = g_TriggerClassCount; /*0x45e33d*/
  }
  v6 = 0; /*0x45e342*/
  if ( v4 <= 0 ) /*0x45e346*/
  {
  LABEL_11:
    v6 = -1; /*0x45e35a*/
  }
  else
  {
    v7 = g_TriggerTypeCount; /*0x45e348*/
    while ( *v7 != this ) /*0x45e350*/
    {
      ++v6; /*0x45e352*/
      ++v7; /*0x45e353*/
      if ( v6 >= v4 ) /*0x45e358*/
        goto LABEL_11; /*0x45e358*/
    }
  }
  *(_DWORD *)(this + 3576) = v6; /*0x45e35c*/
  *(_DWORD *)(this + 3844) = 0; /*0x45e362*/
  *(_DWORD *)(this + 3848) = 1; /*0x45e368*/
  *(_DWORD *)(this + 3852) = 0; /*0x45e36e*/
  *(_DWORD *)(this + 3856) = 0; /*0x45e374*/
  *(_DWORD *)(this + 3860) = 1; /*0x45e37a*/
  *(_DWORD *)(this + 3864) = 0; /*0x45e380*/
  *(_DWORD *)(this + 3868) = 0; /*0x45e386*/
  *(_DWORD *)(this + 3872) = 1; /*0x45e38c*/
  *(_DWORD *)(this + 3876) = 0; /*0x45e392*/
  *(_DWORD *)(this + 3892) = 0; /*0x45e398*/
  *(_DWORD *)(this + 3896) = 1; /*0x45e39e*/
  *(_DWORD *)(this + 3900) = 0; /*0x45e3a4*/
  *(_DWORD *)(this + 3904) = 0; /*0x45e3aa*/
  *(_DWORD *)(this + 3908) = 1; /*0x45e3b0*/
  *(_DWORD *)(this + 3912) = 0; /*0x45e3b6*/
  v8 = (_DWORD *)(this + 3932); /*0x45e3be*/
  v9 = 21; /*0x45e3c4*/
  do /*0x45e414*/
  {
    v10 = v8 - 4; /*0x45e3c9*/
    *v10 = 0; /*0x45e3ce*/
    v10[1] = 0; /*0x45e3d1*/
    v10[2] = 0; /*0x45e3d4*/
    v10[3] = 0; /*0x45e3d7*/
    *v8 = 0; /*0x45e3dc*/
    v8[1] = 0; /*0x45e3df*/
    v8[2] = 0; /*0x45e3e2*/
    v8[3] = 0; /*0x45e3e5*/
    v11 = v8 + 4; /*0x45e3e8*/
    v8 += 17; /*0x45e3eb*/
    --v9; /*0x45e3ee*/
    *v11 = 0; /*0x45e3ef*/
    v11[1] = 0; /*0x45e3f2*/
    v11[2] = 0; /*0x45e3f5*/
    v11[3] = 0; /*0x45e3f8*/
    *(v8 - 9) = 0; /*0x45e3fb*/
    *(v8 - 8) = 0; /*0x45e3fe*/
    *(v8 - 7) = 0; /*0x45e401*/
    *(v8 - 6) = 0; /*0x45e404*/
    *((_BYTE *)v8 - 20) = 1; /*0x45e407*/
    *((_BYTE *)v8 - 19) = 0; /*0x45e40b*/
    *((_BYTE *)v8 - 18) = 0; /*0x45e40e*/
    *((_BYTE *)v8 - 17) = 0; /*0x45e411*/
  }
  while ( v9 ); /*0x45e414*/
  *(_BYTE *)(this + 3676) = 0; /*0x45e416*/
  *(_BYTE *)(this + 3720) = 0; /*0x45e41c*/
  *(_BYTE *)(this + 5994) = 0; /*0x45e422*/
  *(_BYTE *)(this + 5908) = 0; /*0x45e428*/
  *(_BYTE *)(this + 3214) = 0; /*0x45e42e*/
  *(_BYTE *)(this + 5352) = 0; /*0x45e434*/
  *(_BYTE *)(this + 5360) = 0; /*0x45e43a*/
  *(_BYTE *)(this + 5368) = 0; /*0x45e440*/
  *(_BYTE *)(this + 5376) = 0; /*0x45e446*/
  *(_BYTE *)(this + 5384) = 0; /*0x45e44c*/
  v12 = (_DWORD *)(this + 5512); /*0x45e452*/
  v13 = 10; /*0x45e458*/
  do /*0x45e472*/
  {
    v14 = dword_89C8D4; /*0x45e463*/
    *v12 = dword_89C8D0; /*0x45e469*/
    v12[1] = v14; /*0x45e46b*/
    v12 += 2; /*0x45e46e*/
    --v13; /*0x45e471*/
  }
  while ( v13 ); /*0x45e472*/
  v15 = (_DWORD *)(this + 5592); /*0x45e474*/
  v16 = 8; /*0x45e47a*/
  do /*0x45e494*/
  {
    v17 = dword_89C8D4; /*0x45e485*/
    *v15 = dword_89C8D0; /*0x45e48b*/
    v15[1] = v17; /*0x45e48d*/
    v15 += 2; /*0x45e490*/
    --v16; /*0x45e493*/
  }
  while ( v16 ); /*0x45e494*/
  v18 = (_DWORD *)(this + 5732); /*0x45e49b*/
  v19 = 8; /*0x45e4a7*/
  do /*0x45e4c4*/
  {
    *(v18 - 16) = 0xFFFF; /*0x45e4ac*/
    *(v18 - 15) = 0xFFFF; /*0x45e4b4*/
    *v18 = 0xFFFF; /*0x45e4b7*/
    v18[1] = 0xFFFF; /*0x45e4bd*/
    v18 += 2; /*0x45e4c0*/
    --v19; /*0x45e4c3*/
  }
  while ( v19 ); /*0x45e4c4*/
  v20 = *(_DWORD **)(this + 6024); /*0x45e4c6*/
  *v20 = 0; /*0x45e4d2*/
  v20[1] = 0; /*0x45e4d6*/
  v20[2] = 0; /*0x45e4d9*/
  *(_BYTE *)(this + 3381) = 1; /*0x45e4dc*/
  *(_BYTE *)(this + 3382) = 1; /*0x45e4e3*/
  *(_BYTE *)(this + 3387) = 0; /*0x45e4ea*/
  *(_BYTE *)(this + 3384) = 0; /*0x45e4f0*/
  *(_BYTE *)(this + 3479) = 0; /*0x45e4f6*/
  *(_BYTE *)(this + 3478) = 0; /*0x45e4fc*/
  *(_BYTE *)(this + 3374) = 0; /*0x45e502*/
  return this; /*0x45e508*/
}
// 0x45E520
unsigned int * BuildingTypeClass::loadBuildingProperty_b_545E520(ObjectTypeClass * aP1)
{
  TechnoTypeClass::Construct((int)this, aP1); /*0x45e528*/
  *(this + 896) = 0; /*0x45e52f*/
  *(this + 1506) = 0; /*0x45e535*/
  *(this + 1507) = 0; /*0x45e53b*/
  *((_BYTE *)this + 6032) = 1; /*0x45e541*/
  *((_BYTE *)this + 6033) = 0; /*0x45e548*/
  *(this + 1505) = &VectorClass<TPoint3D<int>>::`vftable'; /*0x45e54e*/
  *this = &BuildingTypeClass::`vftable'; /*0x45e558*/
  *(this + 1) = &BuildingTypeClass::`vftable'; /*0x45e55e*/
  *(this + 2) = &BuildingTypeClass::`vftable'; /*0x45e565*/
  *(this + 3) = &BuildingTypeClass::`vftable'; /*0x45e56c*/
  return this; /*0x45e575*/
}
// 0x45E580
AbstractClass * * BuildingTypeClass::CleanupMembers(AbstractClass * a1, AbstractClass * a2)
{
  char v2; // al
  int v3; // eax
  void *v4; // eax
  void **v6; // [esp+8h] [ebp-4h] BYREF

  v2 = *((_BYTE *)this + 3588); /*0x45e587*/
  *this = &BuildingTypeClass::`vftable'; /*0x45e58d*/
  *(this + 1) = &BuildingTypeClass::`vftable'; /*0x45e595*/
  *(this + 2) = &BuildingTypeClass::`vftable'; /*0x45e59c*/
  *(this + 3) = &BuildingTypeClass::`vftable'; /*0x45e5a3*/
  if ( v2 && *(this + 896) ) /*0x45e5ac*/
  {
    __3_YAXPAX_Z(*(this + 896)); /*0x45e5b7*/
    *(this + 896) = 0; /*0x45e5bf*/
    *((_BYTE *)this + 3588) = 0; /*0x45e5c5*/
  }
  if ( *((_BYTE *)this + 5404) && *(this + 1350) ) /*0x45e5d3*/
  {
    __3_YAXPAX_Z(*(this + 1350)); /*0x45e5de*/
    *(this + 1350) = 0; /*0x45e5e6*/
    *((_BYTE *)this + 5404) = 0; /*0x45e5ec*/
  }
  if ( *((_BYTE *)this + 5352) && *(this + 1337) ) /*0x45e5fa*/
  {
    __3_YAXPAX_Z(*(this + 1337)); /*0x45e605*/
    *(this + 1337) = 0; /*0x45e60d*/
    *((_BYTE *)this + 5352) = 0; /*0x45e613*/
  }
  if ( *((_BYTE *)this + 5360) && *(this + 1339) ) /*0x45e621*/
  {
    __3_YAXPAX_Z(*(this + 1339)); /*0x45e62c*/
    *(this + 1339) = 0; /*0x45e634*/
    *((_BYTE *)this + 5360) = 0; /*0x45e63a*/
  }
  if ( *((_BYTE *)this + 5368) && *(this + 1341) ) /*0x45e648*/
  {
    __3_YAXPAX_Z(*(this + 1341)); /*0x45e653*/
    *(this + 1341) = 0; /*0x45e65b*/
    *((_BYTE *)this + 5368) = 0; /*0x45e661*/
  }
  if ( *((_BYTE *)this + 5376) && *(this + 1343) ) /*0x45e66f*/
  {
    __3_YAXPAX_Z(*(this + 1343)); /*0x45e67a*/
    *(this + 1343) = 0; /*0x45e682*/
    *((_BYTE *)this + 5376) = 0; /*0x45e688*/
  }
  if ( *((_BYTE *)this + 5384) && *(this + 1345) ) /*0x45e696*/
  {
    __3_YAXPAX_Z(*(this + 1345)); /*0x45e6a1*/
    *(this + 1345) = 0; /*0x45e6a9*/
    *((_BYTE *)this + 5384) = 0; /*0x45e6af*/
  }
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x45e6b9*/
  v6 = this; /*0x45e6ce*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83C68 + 16))(&dword_A83C68, &v6); /*0x45e6d2*/
  if ( v3 != -1 && v3 < g_TriggerClassCount && v3 < --g_TriggerClassCount ) /*0x45e6ed*/
  {
    do /*0x45e705*/
    {
      ++v3; /*0x45e6f5*/
      *((_DWORD *)g_TriggerTypeCount + v3 - 1) = *((_DWORD *)g_TriggerTypeCount + v3); /*0x45e6f9*/
    }
    while ( v3 < g_TriggerClassCount ); /*0x45e705*/
  }
  v4 = *(this + 1506); /*0x45e707*/
  *(this + 1505) = &VectorClass<TPoint3D<int>>::`vftable'; /*0x45e70d*/
  if ( v4 && *((_BYTE *)this + 6033) ) /*0x45e71b*/
  {
    __3_YAXPAX_Z(v4); /*0x45e724*/
    *(this + 1506) = 0; /*0x45e72c*/
  }
  *((_BYTE *)this + 6033) = 0; /*0x45e734*/
  *(this + 1507) = 0; /*0x45e73a*/
  return TechnoTypeClass::DTOR((int)this); /*0x45e745*/
}
// 0x45E970
AbstractClass * * BuildingTypeClass::LoadRepairAnimations(void * this)
{
  int v1; // ecx
  int v2; // edi
  int v3; // ebp
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v2 = v1; /*0x45e97a*/
  ProcessDataCCFileClass(); /*0x45e97c*/
  FileSystem_POWEROFF_SHP = SearchMIXFile(aPoweroffShp, 0); /*0x45e994*/
  FileSystem_WRENCH_SHP = SearchMIXFile(aWrenchShp, 0); /*0x45e99e*/
  v3 = 0; /*0x45e9aa*/
  v9 = 0; /*0x45e9ae*/
  if ( g_TriggerClassCount > 0 ) /*0x45e9b2*/
  {
    do /*0x45eb42*/
    {
      v4 = *((_DWORD *)g_TriggerTypeCount + v3); /*0x45e9c1*/
      if ( v9 <= *(char *)(v4 + 5895) ) /*0x45e9cd*/
        v9 = *(char *)(v4 + 5895); /*0x45e9cf*/
      if ( *(_BYTE *)(v4 + 556) ) /*0x45e9d3*/
      {
        if ( *(_BYTE *)(v4 + 5984) ) /*0x45e9df*/
        {
          if ( *(_DWORD *)(v4 + 164) ) /*0x45ea23*/
          {
            __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x45ea2e*/
            *(_DWORD *)(v4 + 164) = 0; /*0x45ea36*/
            *(_BYTE *)(v4 + 168) = 0; /*0x45ea3c*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, (const char *)(v4 + 504), (const char *)&off_7E1BC6 + 112 * v2); /*0x45ea08*/
          *(_DWORD *)(v4 + 164) = SearchMIXFile(Buffer, 0); /*0x45ea1b*/
        }
        if ( *(_BYTE *)(v4 + 5985) ) /*0x45ea42*/
        {
          if ( *(_DWORD *)(v4 + 3584) ) /*0x45ea86*/
          {
            __3_YAXPAX_Z(*(void **)(v4 + 3584)); /*0x45ea91*/
            *(_DWORD *)(v4 + 3584) = 0; /*0x45ea99*/
            *(_BYTE *)(v4 + 3588) = 0; /*0x45ea9f*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, (const char *)(v4 + 3676), (const char *)&off_7E1BC6 + 112 * v2); /*0x45ea6b*/
          *(_DWORD *)(v4 + 3584) = SearchMIXFile(Buffer, 0); /*0x45ea7e*/
        }
        v5 = *(_DWORD *)(v4 + 3584); /*0x45eaa5*/
        if ( v5 ) /*0x45eaad*/
        {
          v6 = *(__int16 *)(v5 + 6); /*0x45eab3*/
          v7 = 1; /*0x45eab9*/
          if ( v6 ) /*0x45eabe*/
            v7 = 75 / v6; /*0x45eac6*/
          *(_DWORD *)(v4 + 3844) = 0; /*0x45eac8*/
          *(_DWORD *)(v4 + 3848) = v6; /*0x45eace*/
          *(_DWORD *)(v4 + 3852) = v7; /*0x45ead4*/
        }
      }
      else if ( *(_BYTE *)(v4 + 567) ) /*0x45eadc*/
      {
        if ( *(_BYTE *)(v4 + 5984) && *(_DWORD *)(v4 + 164) ) /*0x45eaec*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x45eaf7*/
          *(_DWORD *)(v4 + 164) = 0; /*0x45eaff*/
          *(_BYTE *)(v4 + 168) = 0; /*0x45eb05*/
        }
        if ( *(_BYTE *)(v4 + 5985) && *(_DWORD *)(v4 + 3584) ) /*0x45eb13*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 3584)); /*0x45eb1e*/
          *(_DWORD *)(v4 + 3584) = 0; /*0x45eb26*/
          *(_BYTE *)(v4 + 3588) = 0; /*0x45eb2c*/
        }
        BuildingTypeClass::LoadAnimations(v4, v2); /*0x45eb35*/
      }
      ++v3; /*0x45eb3f*/
    }
    while ( v3 < g_TriggerClassCount ); /*0x45eb42*/
    if ( v9 ) /*0x45eb4c*/
    {
      if ( dword_89DDC0 ) /*0x45eb56*/
        (**(void (__thiscall ***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x45eb5c*/
      v8 = __2_YAPAXI_Z(0x20u); /*0x45eb65*/
      if ( v8 ) /*0x45eb6c*/
      {
        v8[3] = 0; /*0x45eb72*/
        *v8 = &XSurface_Vtable; /*0x45eb78*/
        v8[1] = v9 + 16; /*0x45eb80*/
        v8[2] = v9 + 16; /*0x45eb8b*/
        v8[4] = 1; /*0x45eb8e*/
        Buffer::Init(v8 + 5, 0, (v9 + 16) * (v9 + 16)); /*0x45eb95*/
        *v8 = &BSurface_Vtable; /*0x45eb9a*/
        dword_89DDC0 = (int)v8; /*0x45eba0*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x45ebb1*/
      }
    }
  }
}
// 0x45F230
void* BuildingTypeClass::LoadAnimations(ObjectTypeClass * aP1)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  _BYTE *v6; // esi
  void *SHP; // eax
  _BYTE *v8; // esi
  void *v9; // eax
  int v10; // eax
  _BYTE *v11; // esi
  void *v12; // eax
  _BYTE *v13; // esi
  void *v14; // eax
  _BYTE *v15; // esi
  void *v16; // eax
  int v17; // eax
  _BYTE *v18; // esi
  void *v19; // eax
  const char *v20; // edi
  int v21; // eax
  int v23; // [esp+10h] [ebp-158h]
  char Filename[64]; // [esp+14h] [ebp-154h] BYREF
  char Ext[16]; // [esp+54h] [ebp-114h] BYREF
  char Source[260]; // [esp+64h] [ebp-104h] BYREF

  if ( !*(_BYTE *)(this + 5985) && strlen((const char *)(this + 3676)) ) /*0x45f257*/
  {
    _makepath(Source, 0, 0, (const char *)(this + 3676), ::Ext); /*0x45f26f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f282*/
    v3 = SearchMIXFile(Source, 0); /*0x45f28d*/
    if ( !v3 ) /*0x45f294*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f29a*/
      v3 = SearchMIXFile(Source, 0); /*0x45f2a5*/
    }
    *(_DWORD *)(this + 3584) = v3; /*0x45f2ac*/
    if ( v3 ) /*0x45f2b2*/
    {
      v4 = 1; /*0x45f2bb*/
      v5 = *(__int16 *)(v3 + 6) / 2; /*0x45f2c8*/
      v23 = v5; /*0x45f2cc*/
      if ( *(_BYTE *)(this + 5815) ) /*0x45f2c2*/
      {
        v5 = *(_DWORD *)(this + 5880) + 1; /*0x45f2d8*/
        v23 = v5; /*0x45f2d9*/
      }
      if ( v5 > 0 ) /*0x45f2df*/
        v4 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 675) * 900.0 / (double)v23); /*0x45f2fc*/
      *(_DWORD *)(this + 3844) = 0; /*0x45f2fe*/
      *(_DWORD *)(this + 3848) = v5; /*0x45f304*/
      *(_DWORD *)(this + 3852) = v4; /*0x45f30a*/
    }
  }
  INIClass::GetString( /*0x45f32d*/
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)aDeployinganim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f336*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f357*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f36a*/
    v6 = (_BYTE *)(this + 5352); /*0x45f375*/
    if ( *(_BYTE *)(this + 5352) && *(_DWORD *)(this + 5348) ) /*0x45f37f*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5348)); /*0x45f38a*/
      *(_DWORD *)(this + 5348) = 0; /*0x45f392*/
      *v6 = 0; /*0x45f398*/
    }
    SHP = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f3a0*/
    *(_DWORD *)(this + 5348) = SHP; /*0x45f3a7*/
    if ( !SHP ) /*0x45f3ad*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f3b3*/
      if ( *v6 && *(_DWORD *)(this + 5348) ) /*0x45f3bc*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5348)); /*0x45f3c7*/
        *(_DWORD *)(this + 5348) = 0; /*0x45f3cf*/
        *v6 = 0; /*0x45f3d5*/
      }
      *(_DWORD *)(this + 5348) = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f3e2*/
    }
  }
  INIClass::GetString( /*0x45f405*/
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)aRoofdeployinga,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f40e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f42f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f442*/
    v8 = (_BYTE *)(this + 5376); /*0x45f44d*/
    if ( *(_BYTE *)(this + 5376) && *(_DWORD *)(this + 5372) ) /*0x45f457*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5372)); /*0x45f462*/
      *(_DWORD *)(this + 5372) = 0; /*0x45f46a*/
      *v8 = 0; /*0x45f470*/
    }
    v9 = LoadFileSHP(Source, (bool *)(this + 5376)); /*0x45f478*/
    *(_DWORD *)(this + 5372) = v9; /*0x45f47f*/
    if ( !v9 ) /*0x45f485*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f48b*/
      if ( *v8 && *(_DWORD *)(this + 5372) ) /*0x45f494*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5372)); /*0x45f49f*/
        *(_DWORD *)(this + 5372) = 0; /*0x45f4a7*/
        *v8 = 0; /*0x45f4ad*/
      }
      *(_DWORD *)(this + 5372) = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f4be*/
    }
  }
  INIClass::GetString( /*0x45f4e1*/
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)aDooranim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f4ea*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f507*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f51a*/
    v10 = SearchMIXFile(Source, 0); /*0x45f525*/
    *(_DWORD *)(this + 5388) = v10; /*0x45f52c*/
    if ( !v10 ) /*0x45f532*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f538*/
      *(_DWORD *)(this + 5388) = SearchMIXFile(Source, 0); /*0x45f548*/
    }
  }
  INIClass::GetString( /*0x45f565*/
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)aUnderdooranim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f56e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f58f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f5a2*/
    v11 = (_BYTE *)(this + 5360); /*0x45f5ad*/
    if ( *(_BYTE *)(this + 5360) && *(_DWORD *)(this + 5356) ) /*0x45f5b7*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5356)); /*0x45f5c2*/
      *(_DWORD *)(this + 5356) = 0; /*0x45f5ca*/
      *v11 = 0; /*0x45f5d0*/
    }
    v12 = LoadFileSHP(Source, (bool *)(this + 5360)); /*0x45f5d8*/
    *(_DWORD *)(this + 5356) = v12; /*0x45f5df*/
    if ( !v12 ) /*0x45f5e5*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f5eb*/
      if ( *v11 && *(_DWORD *)(this + 5356) ) /*0x45f5f4*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5356)); /*0x45f5ff*/
        *(_DWORD *)(this + 5356) = 0; /*0x45f607*/
        *v11 = 0; /*0x45f60d*/
      }
      *(_DWORD *)(this + 5356) = SearchMIXFile(Source, 0); /*0x45f61a*/
    }
  }
  v13 = (_BYTE *)(this + 5368); /*0x45f626*/
  if ( *(_BYTE *)(this + 5368) && *(_DWORD *)(this + 5364) ) /*0x45f630*/
  {
    __3_YAXPAX_Z(*(void **)(this + 5364)); /*0x45f63b*/
    *(_DWORD *)(this + 5364) = 0; /*0x45f643*/
    *v13 = 0; /*0x45f649*/
  }
  INIClass::GetString( /*0x45f668*/
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)aRubble,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f671*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f68e*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f6a1*/
    v14 = LoadFileSHP(Source, (bool *)(this + 5368)); /*0x45f6ac*/
    *(_DWORD *)(this + 5364) = v14; /*0x45f6b3*/
    if ( !v14 ) /*0x45f6b9*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f6bf*/
      if ( *v13 && *(_DWORD *)(this + 5364) ) /*0x45f6c8*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5364)); /*0x45f6d3*/
        *(_DWORD *)(this + 5364) = 0; /*0x45f6db*/
        *v13 = 0; /*0x45f6e1*/
      }
      *(_DWORD *)(this + 5364) = SearchMIXFile(Source, 0); /*0x45f6ee*/
    }
  }
  INIClass::GetString( /*0x45f711*/
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)aUnderroofdoora,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f71a*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f73b*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f74e*/
    v15 = (_BYTE *)(this + 5384); /*0x45f759*/
    if ( *(_BYTE *)(this + 5384) && *(_DWORD *)(this + 5380) ) /*0x45f763*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5380)); /*0x45f76e*/
      *(_DWORD *)(this + 5380) = 0; /*0x45f776*/
      *v15 = 0; /*0x45f77c*/
    }
    v16 = LoadFileSHP(Source, (bool *)(this + 5384)); /*0x45f784*/
    *(_DWORD *)(this + 5380) = v16; /*0x45f78b*/
    if ( !v16 ) /*0x45f791*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f797*/
      if ( *v15 && *(_DWORD *)(this + 5380) ) /*0x45f7a0*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5380)); /*0x45f7ab*/
        *(_DWORD *)(this + 5380) = 0; /*0x45f7b3*/
        *v15 = 0; /*0x45f7b9*/
      }
      *(_DWORD *)(this + 5380) = SearchMIXFile(Source, 0); /*0x45f7c6*/
    }
  }
  INIClass::GetString( /*0x45f7e9*/
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)aSpecialzoverla,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f7f2*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f80f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f822*/
    v17 = SearchMIXFile(Source, 0); /*0x45f82d*/
    *(_DWORD *)(this + 5392) = v17; /*0x45f834*/
    if ( !v17 ) /*0x45f83a*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f840*/
      *(_DWORD *)(this + 5392) = SearchMIXFile(Source, 0); /*0x45f850*/
    }
  }
  INIClass::GetString( /*0x45f86d*/
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)aBibshape,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f876*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f897*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f8aa*/
    v18 = (_BYTE *)(this + 5404); /*0x45f8b5*/
    if ( *(_BYTE *)(this + 5404) && *(_DWORD *)(this + 5400) ) /*0x45f8bf*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5400)); /*0x45f8ca*/
      *(_DWORD *)(this + 5400) = 0; /*0x45f8d2*/
      *v18 = 0; /*0x45f8d8*/
    }
    v19 = LoadFileSHP(Source, (bool *)(this + 5404)); /*0x45f8e0*/
    *(_DWORD *)(this + 5400) = v19; /*0x45f8e7*/
    if ( !v19 ) /*0x45f8ed*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f8f3*/
      if ( *v18 && *(_DWORD *)(this + 5400) ) /*0x45f8fc*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5400)); /*0x45f907*/
        *(_DWORD *)(this + 5400) = 0; /*0x45f90f*/
        *v18 = 0; /*0x45f915*/
      }
      *(_DWORD *)(this + 5400) = SearchMIXFile(Source, 0); /*0x45f922*/
    }
  }
  INIClass::GetString( /*0x45f945*/
    (unsigned __int8 ***)&CCINIClass_INI_Art,
    (unsigned __int8 *)(this + 504),
    (unsigned __int8 *)g_INI_Key_Image,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( !*(_BYTE *)(this + 556) || aP1 == -1 ) /*0x45f95c*/
    v20 = ::Ext; /*0x45f97a*/
  else
    v20 = (const char *)(&off_7E1BC6 + 28 * aP1); /*0x45f96e*/
  strcpy(Ext, v20); /*0x45f993*/
  if ( strlen(Filename) ) /*0x45f9a2*/
    _makepath(Source, 0, 0, Filename, Ext); /*0x45f9bd*/
  else
    _makepath(Source, 0, 0, (const char *)(this + 504), Ext); /*0x45f9cd*/
  TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f9e0*/
  strncpy((char *)(this + 5994), Source, 0x13u); /*0x45f9f3*/
  if ( !*(_BYTE *)(this + 5984) ) /*0x45f9f8*/
  {
    v21 = SearchMIXFile(Source, 0); /*0x45fa0b*/
    *(_DWORD *)(this + 164) = v21; /*0x45fa12*/
    if ( !v21 ) /*0x45fa18*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa1e*/
      strncpy((char *)(this + 5994), Source, 0x13u); /*0x45fa2b*/
      *(_DWORD *)(this + 164) = SearchMIXFile(Source, 0); /*0x45fa3e*/
    }
    if ( !*(_DWORD *)(this + 164) ) /*0x45fa44*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa50*/
      strncpy((char *)(this + 5994), Source, 0x13u); /*0x45fa5d*/
      *(_DWORD *)(this + 164) = SearchMIXFile(Source, 0); /*0x45fa70*/
    }
  }
  return BuildingTypeClass::LoadVoxel(this); /*0x45fa7d*/
}
// 0x45FA90
void BuildingTypeClass::LoadVoxel()
{
  char *v2; // eax
  void *v3; // esi
  _DWORD *v4; // eax
  _DWORD *File; // eax
  void *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int Info; // eax
  char *v10; // eax
  char *v11; // eax
  _BYTE *v12; // eax
  void *v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  void *v16; // esi
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // eax
  char *v20; // [esp-Ch] [ebp-2D8h]
  char *v21; // [esp-Ch] [ebp-2D8h]
  _DWORD v22[22]; // [esp+8h] [ebp-2C4h] BYREF
  _BYTE v23[12]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  _DWORD v25[22]; // [esp+74h] [ebp-258h] BYREF
  _BYTE v26[12]; // [esp+CCh] [ebp-200h] BYREF
  int v27; // [esp+D8h] [ebp-1F4h]
  _DWORD v28[22]; // [esp+E0h] [ebp-1ECh] BYREF
  _BYTE v29[12]; // [esp+138h] [ebp-194h] BYREF
  int v30; // [esp+144h] [ebp-188h]
  char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
  char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
  char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
  char String[252]; // [esp+1D0h] [ebp-FCh] BYREF

  if ( *(_BYTE *)(this + 5829) || *(_BYTE *)(this + 5830) ) /*0x45faa4*/
  {
    strcpy(Destination, (const char *)(this + 4528)); /*0x45fadf*/
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45faf3*/
    v20 = _strupr(off_8194A8); /*0x45fb05*/
    v2 = _strupr(String); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      CCFileClass::Construct(v25, Buffer); /*0x45fb3b*/
      if ( CCFileClass::Open(v25, 0) ) /*0x45fb48*/
      {
        v3 = *(void **)(this + 184); /*0x45fb55*/
        if ( v3 ) /*0x45fb5d*/
        {
          WaveClass::Destroy(*(_DWORD *)(this + 184)); /*0x45fb61*/
          __3_YAXPAX_Z(v3); /*0x45fb67*/
        }
        v4 = __2_YAPAXI_Z(0x1Cu); /*0x45fb71*/
        if ( v4 ) /*0x45fb7b*/
          File = File::LoadFileVXL(v4, (int)v25, 0); /*0x45fb85*/
        else
          File = 0; /*0x45fb8c*/
        *(_DWORD *)(this + 184) = File; /*0x45fb8e*/
        _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fbab*/
        CCFileClass::Construct(v22, Buffer); /*0x45fbbf*/
        v6 = *(void **)(this + 188); /*0x45fbc4*/
        if ( v6 ) /*0x45fbcc*/
        {
          String::Release(*(void ***)(this + 188)); /*0x45fbd0*/
          __3_YAXPAX_Z(v6); /*0x45fbd6*/
        }
        v7 = __2_YAPAXI_Z(0x10u); /*0x45fbe0*/
        if ( v7 ) /*0x45fbea*/
          v8 = File::LoadFileHVA(v7, (int)v22); /*0x45fbf3*/
        else
          v8 = 0; /*0x45fbfa*/
        *(_DWORD *)(this + 188) = v8; /*0x45fbfe*/
        if ( v8 && !*(_BYTE *)v8 ) /*0x45fc06*/
        {
          Info = VoxelSection::GetInfo(*(_DWORD **)(this + 184), 0, 0); /*0x45fc12*/
          Matrix::Scale(*(unsigned int **)(this + 188), *(float *)(Info + 12)); /*0x45fc21*/
        }
        v22[0] = &CCFileClass::`vftable'; /*0x45fc2a*/
        v24 = 0; /*0x45fc32*/
        Vector::Clear((int)v23); /*0x45fc36*/
        v22[0] = &off_7E1668; /*0x45fc3f*/
        BufferIOFileClass::Dtor(v22); /*0x45fc43*/
      }
      v21 = _strupr(off_8194A8); /*0x45fc55*/
      v10 = _strupr(v32); /*0x45fc5e*/
      v11 = strstr(v10, v21); /*0x45fc67*/
      if ( v11 ) /*0x45fc71*/
      {
        *v11 = 66; /*0x45fc73*/
        v12 = v11 + 1; /*0x45fc76*/
        *v12++ = 65; /*0x45fc77*/
        *v12++ = 82; /*0x45fc7b*/
        *v12 = 76; /*0x45fc7f*/
        v12[1] = 0; /*0x45fc82*/
      }
      v25[0] = &CCFileClass::`vftable'; /*0x45fc8c*/
      v27 = 0; /*0x45fc94*/
      Vector::Clear((int)v26); /*0x45fc9b*/
      v25[0] = &off_7E1668; /*0x45fca4*/
      BufferIOFileClass::Dtor(v25); /*0x45fca8*/
    }
    else if ( *(_BYTE *)(this + 5830) ) /*0x45fcaf*/
    {
      strncpy(Destination, (const char *)(this + 5908), 0x80u); /*0x45fccb*/
    }
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45fcea*/
    CCFileClass::Construct(v28, Buffer); /*0x45fd01*/
    if ( CCFileClass::Open(v28, 0) ) /*0x45fd0e*/
    {
      v13 = *(void **)(this + 192); /*0x45fd1b*/
      if ( v13 ) /*0x45fd23*/
      {
        WaveClass::Destroy(*(_DWORD *)(this + 192)); /*0x45fd27*/
        __3_YAXPAX_Z(v13); /*0x45fd2d*/
      }
      v14 = __2_YAPAXI_Z(0x1Cu); /*0x45fd37*/
      if ( v14 ) /*0x45fd41*/
        v15 = File::LoadFileVXL(v14, (int)v28, 0); /*0x45fd4e*/
      else
        v15 = 0; /*0x45fd55*/
      *(_DWORD *)(this + 192) = v15; /*0x45fd63*/
      _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fd74*/
      CCFileClass::Construct(v22, Buffer); /*0x45fd88*/
      v16 = *(void **)(this + 196); /*0x45fd8d*/
      if ( v16 ) /*0x45fd95*/
      {
        String::Release(*(void ***)(this + 196)); /*0x45fd99*/
        __3_YAXPAX_Z(v16); /*0x45fd9f*/
      }
      v17 = __2_YAPAXI_Z(0x10u); /*0x45fda9*/
      if ( v17 ) /*0x45fdb3*/
        v18 = File::LoadFileHVA(v17, (int)v22); /*0x45fdbc*/
      else
        v18 = 0; /*0x45fdc3*/
      *(_DWORD *)(this + 196) = v18; /*0x45fdc7*/
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(_BYTE *)v18 ) /*0x45fdcf*/
        {
          v19 = VoxelSection::GetInfo(*(_DWORD **)(this + 192), 0, 0); /*0x45fddb*/
          Matrix::Scale(*(unsigned int **)(this + 196), *(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      v22[0] = &CCFileClass::`vftable'; /*0x45fdf3*/
      v24 = 0; /*0x45fdfb*/
      Vector::Clear((int)v23); /*0x45fdff*/
      v22[0] = &off_7E1668; /*0x45fe08*/
      BufferIOFileClass::Dtor(v22); /*0x45fe0c*/
    }
    v28[0] = &CCFileClass::`vftable'; /*0x45fe18*/
    v30 = 0; /*0x45fe23*/
    Vector::Clear((int)v29); /*0x45fe2a*/
    v28[0] = &off_7E1668; /*0x45fe36*/
    BufferIOFileClass::Dtor(v28); /*0x45fe3d*/
  }
}
// 0x464B30
int BuildingTypeClass::UpdatePower()
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  int v52; // edx
  int *v54; // [esp+Ch] [ebp+4h]

  BuildingTypeClass::ProcessPower((int)this, v54); /*0x464b39*/
  Checksummer::Add_double(*((_DWORD *)this + 906), *((_DWORD *)this + 907)); /*0x464b4e*/
  Power::TimerProcess(*((_DWORD *)this + 908)); /*0x464b5c*/
  Power::TimerProcess(*((_DWORD *)this + 909)); /*0x464b6a*/
  Power::TimerProcess(*((_DWORD *)this + 910)); /*0x464b78*/
  Power::TimerProcess(*((_DWORD *)this + 911)); /*0x464b86*/
  Power::TimerProcess(*((_DWORD *)this + 912)); /*0x464b94*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3676); /*0x464ba2*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3720); /*0x464bb0*/
  Power::TimerProcess(*((_DWORD *)this + 941)); /*0x464bbe*/
  Power::TimerProcess(*((_DWORD *)this + 942)); /*0x464bcc*/
  Power::TimerProcess(*((_DWORD *)this + 952)); /*0x464bda*/
  Power::TimerProcess(*((_DWORD *)this + 953)); /*0x464be8*/
  Power::TimerProcess(*((_DWORD *)this + 954)); /*0x464bf6*/
  Power::TimerProcess(*((_DWORD *)this + 955)); /*0x464c04*/
  Power::TimerProcess(*((_DWORD *)this + 956)); /*0x464c12*/
  Power::TimerProcess(*((_DWORD *)this + 957)); /*0x464c20*/
  Power::TimerProcess(*((_DWORD *)this + 958)); /*0x464c2e*/
  Power::TimerProcess(*((_DWORD *)this + 959)); /*0x464c3c*/
  Power::TimerProcess(*((_DWORD *)this + 960)); /*0x464c4a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3844, 72); /*0x464c5a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3916, 1428); /*0x464c6d*/
  Power::TimerProcess(*((_DWORD *)this + 1336)); /*0x464c7b*/
  v2 = Power::TimerProcess(*((_DWORD *)this + 1349)); /*0x464c89*/
  LOBYTE(v2) = *((_BYTE *)this + 5454); /*0x464c8e*/
  Power::FlagProcess(v54, v2); /*0x464c97*/
  LOBYTE(v3) = *((_BYTE *)this + 5453); /*0x464c9c*/
  Power::FlagProcess(v54, v3); /*0x464ca5*/
  LOBYTE(v4) = *((_BYTE *)this + 5452); /*0x464caa*/
  v5 = Power::FlagProcess(v54, v4); /*0x464cb3*/
  LOBYTE(v5) = *((_BYTE *)this + 5451); /*0x464cb8*/
  Power::FlagProcess(v54, v5); /*0x464cc1*/
  LOBYTE(v6) = *((_BYTE *)this + 5455); /*0x464cc6*/
  Power::FlagProcess(v54, v6); /*0x464ccf*/
  LOBYTE(v7) = *((_BYTE *)this + 5456); /*0x464cd4*/
  v8 = Power::FlagProcess(v54, v7); /*0x464cdd*/
  LOBYTE(v8) = *((_BYTE *)this + 5458); /*0x464ce2*/
  Power::FlagProcess(v54, v8); /*0x464ceb*/
  LOBYTE(v9) = *((_BYTE *)this + 5488); /*0x464cf0*/
  Power::FlagProcess(v54, v9); /*0x464cf9*/
  LOBYTE(v10) = *((_BYTE *)this + 5489); /*0x464cfe*/
  v11 = Power::FlagProcess(v54, v10); /*0x464d07*/
  LOBYTE(v11) = *((_BYTE *)this + 5490); /*0x464d0c*/
  Power::FlagProcess(v54, v11); /*0x464d15*/
  LOBYTE(v12) = *((_BYTE *)this + 5491); /*0x464d1a*/
  Power::FlagProcess(v54, v12); /*0x464d23*/
  LOBYTE(v13) = *((_BYTE *)this + 5497); /*0x464d28*/
  v14 = Power::FlagProcess(v54, v13); /*0x464d31*/
  LOBYTE(v14) = *((_BYTE *)this + 5796); /*0x464d36*/
  Power::FlagProcess(v54, v14); /*0x464d3f*/
  LOBYTE(v15) = *((_BYTE *)this + 5797); /*0x464d44*/
  Power::FlagProcess(v54, v15); /*0x464d4d*/
  LOBYTE(v16) = *((_BYTE *)this + 5798); /*0x464d52*/
  v17 = Power::FlagProcess(v54, v16); /*0x464d5b*/
  LOBYTE(v17) = *((_BYTE *)this + 5799); /*0x464d60*/
  Power::FlagProcess(v54, v17); /*0x464d69*/
  Power::TimerProcess(*((_DWORD *)this + 1467)); /*0x464d77*/
  LOBYTE(v18) = *((_BYTE *)this + 5800); /*0x464d7c*/
  v19 = Power::FlagProcess(v54, v18); /*0x464d85*/
  LOBYTE(v19) = *((_BYTE *)this + 5801); /*0x464d8a*/
  Power::FlagProcess(v54, v19); /*0x464d93*/
  LOBYTE(v20) = *((_BYTE *)this + 5802); /*0x464d98*/
  Power::FlagProcess(v54, v20); /*0x464da1*/
  LOBYTE(v21) = *((_BYTE *)this + 5804); /*0x464da6*/
  v22 = Power::FlagProcess(v54, v21); /*0x464daf*/
  LOBYTE(v22) = *((_BYTE *)this + 5805); /*0x464db4*/
  Power::FlagProcess(v54, v22); /*0x464dbd*/
  LOBYTE(v23) = *((_BYTE *)this + 5806); /*0x464dc2*/
  Power::FlagProcess(v54, v23); /*0x464dcb*/
  LOBYTE(v24) = *((_BYTE *)this + 5807); /*0x464dd0*/
  v25 = Power::FlagProcess(v54, v24); /*0x464dd9*/
  LOBYTE(v25) = *((_BYTE *)this + 5808); /*0x464dde*/
  Power::FlagProcess(v54, v25); /*0x464de7*/
  LOBYTE(v26) = *((_BYTE *)this + 5810); /*0x464dec*/
  Power::FlagProcess(v54, v26); /*0x464df5*/
  LOBYTE(v27) = *((_BYTE *)this + 5811); /*0x464dfa*/
  v28 = Power::FlagProcess(v54, v27); /*0x464e03*/
  LOBYTE(v28) = *((_BYTE *)this + 5812); /*0x464e08*/
  Power::FlagProcess(v54, v28); /*0x464e11*/
  LOBYTE(v29) = *((_BYTE *)this + 5814); /*0x464e16*/
  Power::FlagProcess(v54, v29); /*0x464e1f*/
  LOBYTE(v30) = *((_BYTE *)this + 5815); /*0x464e24*/
  v31 = Power::FlagProcess(v54, v30); /*0x464e2d*/
  LOBYTE(v31) = *((_BYTE *)this + 5816); /*0x464e32*/
  Power::FlagProcess(v54, v31); /*0x464e3b*/
  LOBYTE(v32) = *((_BYTE *)this + 5817); /*0x464e40*/
  Power::FlagProcess(v54, v32); /*0x464e49*/
  LOBYTE(v33) = *((_BYTE *)this + 5818); /*0x464e4e*/
  v34 = Power::FlagProcess(v54, v33); /*0x464e57*/
  LOBYTE(v34) = *((_BYTE *)this + 5819); /*0x464e5c*/
  Power::FlagProcess(v54, v34); /*0x464e65*/
  LOBYTE(v35) = *((_BYTE *)this + 5821); /*0x464e6a*/
  Power::FlagProcess(v54, v35); /*0x464e73*/
  LOBYTE(v36) = *((_BYTE *)this + 5822); /*0x464e78*/
  v37 = Power::FlagProcess(v54, v36); /*0x464e81*/
  LOBYTE(v37) = *((_BYTE *)this + 5823); /*0x464e86*/
  Power::FlagProcess(v54, v37); /*0x464e8f*/
  LOBYTE(v38) = *((_BYTE *)this + 5824); /*0x464e94*/
  Power::FlagProcess(v54, v38); /*0x464e9d*/
  LOBYTE(v39) = *((_BYTE *)this + 5835); /*0x464ea2*/
  v40 = Power::FlagProcess(v54, v39); /*0x464eab*/
  LOBYTE(v40) = *((_BYTE *)this + 5836); /*0x464eb0*/
  Power::FlagProcess(v54, v40); /*0x464eb9*/
  LOBYTE(v41) = *((_BYTE *)this + 5892); /*0x464ebe*/
  Power::FlagProcess(v54, v41); /*0x464ec7*/
  LOBYTE(v42) = *((_BYTE *)this + 5825); /*0x464ecc*/
  v43 = Power::FlagProcess(v54, v42); /*0x464ed5*/
  LOBYTE(v43) = *((_BYTE *)this + 5826); /*0x464eda*/
  Power::FlagProcess(v54, v43); /*0x464ee3*/
  Power::TimerProcess(*((_DWORD *)this + 1470)); /*0x464ef1*/
  v44 = Power::TimerProcess(*((_DWORD *)this + 1471)); /*0x464eff*/
  LOBYTE(v44) = *((_BYTE *)this + 5888); /*0x464f04*/
  Power::FlagProcess(v54, v44); /*0x464f0d*/
  LOBYTE(v45) = *((_BYTE *)this + 5889); /*0x464f12*/
  Power::FlagProcess(v54, v45); /*0x464f1b*/
  LOBYTE(v46) = *((_BYTE *)this + 5890); /*0x464f20*/
  v47 = Power::FlagProcess(v54, v46); /*0x464f29*/
  LOBYTE(v47) = *((_BYTE *)this + 5829); /*0x464f2e*/
  Power::FlagProcess(v54, v47); /*0x464f37*/
  LOBYTE(v48) = *((_BYTE *)this + 5830); /*0x464f3c*/
  Power::FlagProcess(v54, v48); /*0x464f45*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 5908); /*0x464f53*/
  Checksummer::Add_double(*((_DWORD *)this + 1482), *((_DWORD *)this + 1483)); /*0x464f68*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5936, 12); /*0x464f78*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5948, 12); /*0x464f88*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5960, 12); /*0x464f98*/
  v49 = Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5972, 12); /*0x464fa8*/
  LOBYTE(v49) = *((_BYTE *)this + 5991); /*0x464fad*/
  Power::FlagProcess(v54, v49); /*0x464fb6*/
  LOBYTE(v50) = *((_BYTE *)this + 5992); /*0x464fbb*/
  Power::FlagProcess(v54, v50); /*0x464fc4*/
  LOBYTE(v51) = *((_BYTE *)this + 5993); /*0x464fc9*/
  Power::FlagProcess(v54, v51); /*0x464fd2*/
  Power::TimerProcess(*((_DWORD *)this + 1504)); /*0x464fe0*/
  Power::TimerProcess(*((_DWORD *)this + 1476)); /*0x464fee*/
  LOBYTE(v52) = *((_BYTE *)this + 5896); /*0x464ff3*/
  return Power::FlagProcess(v54, v52); /*0x465001*/
}
// 0x465010
AbstractClass * * BuildingTypeClass::SaveLoad_Prefix()
{
  int v1; // esi
  int v2; // edi
  int result; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  int v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( *(_BYTE *)(v13 + 5986) && *(_DWORD *)(v13 + 3584) ) /*0x465025*/
  {
    __3_YAXPAX_Z(*(void **)(v13 + 3584)); /*0x465030*/
    *(_DWORD *)(v1 + 3584) = 0; /*0x465038*/
    *(_BYTE *)(v1 + 3588) = 0; /*0x46503e*/
  }
  if ( *(_BYTE *)(v1 + 5404) && *(_DWORD *)(v1 + 5400) ) /*0x46504c*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5400)); /*0x465057*/
    *(_DWORD *)(v1 + 5400) = 0; /*0x46505f*/
    *(_BYTE *)(v1 + 5404) = 0; /*0x465065*/
  }
  if ( *(_BYTE *)(v1 + 5352) && *(_DWORD *)(v1 + 5348) ) /*0x465073*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5348)); /*0x46507e*/
    *(_DWORD *)(v1 + 5348) = 0; /*0x465086*/
    *(_BYTE *)(v1 + 5352) = 0; /*0x46508c*/
  }
  if ( *(_BYTE *)(v1 + 5360) && *(_DWORD *)(v1 + 5356) ) /*0x46509a*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5356)); /*0x4650a5*/
    *(_DWORD *)(v1 + 5356) = 0; /*0x4650ad*/
    *(_BYTE *)(v1 + 5360) = 0; /*0x4650b3*/
  }
  if ( *(_BYTE *)(v1 + 5368) && *(_DWORD *)(v1 + 5364) ) /*0x4650c1*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5364)); /*0x4650cc*/
    *(_DWORD *)(v1 + 5364) = 0; /*0x4650d4*/
    *(_BYTE *)(v1 + 5368) = 0; /*0x4650da*/
  }
  if ( *(_BYTE *)(v1 + 5376) && *(_DWORD *)(v1 + 5372) ) /*0x4650e8*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5372)); /*0x4650f3*/
    *(_DWORD *)(v1 + 5372) = 0; /*0x4650fb*/
    *(_BYTE *)(v1 + 5376) = 0; /*0x465101*/
  }
  if ( *(_BYTE *)(v1 + 5384) && *(_DWORD *)(v1 + 5380) ) /*0x46510f*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5380)); /*0x46511a*/
    *(_DWORD *)(v1 + 5380) = 0; /*0x465122*/
    *(_BYTE *)(v1 + 5384) = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      BuildingTypeClass::loadBuildingProperty_b_545E520((_DWORD *)v1, (int)&v13); /*0x46514c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = v1 + 6020; /*0x465167*/
      if ( v1 != -6020 ) /*0x46516f*/
      {
        *(_DWORD *)(v1 + 6024) = 0; /*0x465171*/
        *(_DWORD *)(v1 + 6028) = 0; /*0x465174*/
        *(_BYTE *)(v1 + 6032) = 1; /*0x465177*/
        *(_BYTE *)(v1 + 6033) = 0; /*0x46517b*/
        *(_DWORD *)v4 = &VectorClass<TPoint3D<int>>::`vftable'; /*0x46517e*/
      }
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
  LABEL_32:
        BuildingTypeClass::LoadVoxel(v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        v9 = *(_DWORD *)(v1 + 3824); /*0x4651fb*/
        *(_DWORD *)(v1 + 3672) = 0; /*0x465210*/
        v9 *= 120; /*0x465219*/
        *(_DWORD *)(v1 + 3580) = (char *)&dword_89C900 + v9; /*0x465228*/
        *(_DWORD *)(v1 + 3796) = (char *)&dword_89D368 + v9; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3668)); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3744)); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3748)); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3752)); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3756)); /*0x465278*/
        BuildingTypeClass::LoadVoxel(v1); /*0x46527f*/
        *(_DWORD *)(v1 + 3584) = 0; /*0x465284*/
        *(_BYTE *)(v1 + 3588) = 0; /*0x46528a*/
        *(_DWORD *)(v1 + 5400) = 0; /*0x465290*/
        *(_BYTE *)(v1 + 5404) = 0; /*0x465296*/
        *(_DWORD *)(v1 + 5348) = 0; /*0x46529c*/
        *(_BYTE *)(v1 + 5352) = 0; /*0x4652a2*/
        *(_DWORD *)(v1 + 5356) = 0; /*0x4652a8*/
        *(_BYTE *)(v1 + 5360) = 0; /*0x4652ae*/
        *(_DWORD *)(v1 + 5364) = 0; /*0x4652b4*/
        *(_BYTE *)(v1 + 5368) = 0; /*0x4652ba*/
        *(_DWORD *)(v1 + 5372) = 0; /*0x4652c0*/
        *(_BYTE *)(v1 + 5376) = 0; /*0x4652c6*/
        *(_DWORD *)(v1 + 5380) = 0; /*0x4652cc*/
        *(_BYTE *)(v1 + 5384) = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations(v1, *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x4652e6*/
        return 0; /*0x4652eb*/
      }
      else
      {
        v13 = 0; /*0x465197*/
        while ( 1 ) /*0x46519b*/
        {
          v6 = *(_DWORD *)v2; /*0x46519b*/
          v10 = 0; /*0x4651a6*/
          v11 = 0; /*0x4651aa*/
          v12 = 0; /*0x4651ae*/
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 12))(v2, &v10, 12, 0); /*0x4651b2*/
          if ( result < 0 ) /*0x4651b7*/
            break; /*0x4651b7*/
          v7 = (_DWORD *)(v13 + *(_DWORD *)(v1 + 6024)); /*0x4651cb*/
          v8 = v13 + 12; /*0x4651cd*/
          ++v5; /*0x4651d0*/
          *v7 = v10; /*0x4651d1*/
          v13 = v8; /*0x4651d7*/
          v7[1] = v11; /*0x4651db*/
          v7[2] = v12; /*0x4651e2*/
          if ( v5 >= v14 ) /*0x4651eb*/
            goto LABEL_32; /*0x4651eb*/
        }
      }
    }
  }
  return result; /*0x4652ed*/
}
// 0x4653C0
BuildingTypeClass * * BuildingTypeClass::FindOrCreate()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( g_TriggerClassCount <= 0 ) /*0x4653f1*/
  {
  LABEL_6:
    if ( __2_YAPAXI_Z(0x1798u) ) /*0x46541b*/
      return BuildingTypeClass::ConstructFull(Source); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_TriggerTypeCount + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= g_TriggerClassCount ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return *((_DWORD *)g_TriggerTypeCount + v2); /*0x46542f*/
}
// 0x465AF0
void BuildingTypeClass::IsPowered()
{
  if ( *(_BYTE *)(this + 5986) ) /*0x465af3*/
  {
    if ( *(_DWORD *)(this + 3584) ) /*0x465afd*/
    {
      __3_YAXPAX_Z(*(void **)(this + 3584)); /*0x465b08*/
      *(_DWORD *)(this + 3584) = 0; /*0x465b10*/
      *(_BYTE *)(this + 3588) = 0; /*0x465b1a*/
    }
  }
}
// 0x50B760
int BuildingTypeClass::ProcessData(unsigned int * a2, short * a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebp
  __int16 *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !g_GameMode_Current[0] ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = (int)a2; /*0x50b783*/
  v11 = *(_DWORD *)&g_RulesClass_Instance[1].FreeMCV; /*0x50b78f*/
  v12 = 2 * v11 + BuildingTypeClass::GetFoundationWidth(a2); /*0x50b7a3*/
  v6 = 2 * v11 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x50b7b1*/
  v7 = 1 << *(this + 12); /*0x50b7b8*/
  v8 = a3; /*0x50b7ba*/
  v9 = *a3 - v11 - 1; /*0x50b7cd*/
  if ( v9 < *a3 + v12 + 1 ) /*0x50b7d0*/
  {
    while ( 1 ) /*0x50b7e2*/
    {
      v10 = v8[1] - v11 - 1; /*0x50b7e2*/
      if ( v10 < v8[1] + v6 + 1 ) /*0x50b7e5*/
        break; /*0x50b7e5*/
  LABEL_8:
      if ( ++v9 >= *v8 + v12 + 1 ) /*0x50b82d*/
        return 0; /*0x50b82d*/
    }
    while ( 1 ) /*0x50b7eb*/
    {
      LOWORD(a2) = v9; /*0x50b7eb*/
      HIWORD(a2) = v10; /*0x50b7f6*/
      if ( (v7 & *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 55)) != 0 ) /*0x50b806*/
        return 1; /*0x50b806*/
      if ( ++v10 >= a3[1] + v6 + 1 ) /*0x50b81b*/
      {
        v8 = a3; /*0x50b81d*/
        goto LABEL_8; /*0x50b81d*/
      }
    }
  }
  return 0; /*0x50b772*/
}
// 0x594010
int BuildingTypeClass::CheckPlacementArea(ObjectClass * aP1, ObjectClass * aP2)
{
  _WORD *v3; // edi
  __int16 v4; // ax
  __int16 v5; // ax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int v11; // ebp
  int v12; // esi
  int v13; // eax
  _DWORD *v14; // eax

  v3 = aP1; /*0x594015*/
  v4 = *aP1; /*0x594027*/
  HIWORD(aP1) = aP1[2]; /*0x59402a*/
  LOWORD(aP1) = v4; /*0x594035*/
  if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&aP1, 1) )
  {
    v5 = v3[2]; /*0x594052*/
    LOWORD(aP1) = *((_DWORD *)v3 + 2) + *(_DWORD *)v3 - 1; /*0x59405a*/
    HIWORD(aP1) = v5; /*0x594065*/
    if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&aP1, 1) )
    {
      v6 = *((_DWORD *)v3 + 1); /*0x59407a*/
      v7 = *((_DWORD *)v3 + 3); /*0x59407d*/
      LOWORD(aP1) = *v3; /*0x594080*/
      HIWORD(aP1) = v6 + v7 - 1; /*0x594095*/
      if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&aP1, 1) )
      {
        v8 = *((_DWORD *)v3 + 1); /*0x5940b2*/
        v9 = *((_DWORD *)v3 + 3); /*0x5940b5*/
        LOWORD(aP1) = *((_DWORD *)v3 + 2) + *(_DWORD *)v3 - 1; /*0x5940b8*/
        HIWORD(aP1) = v8 + v9 - 1; /*0x5940cb*/
        if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&aP1, 1) )
        {
          v10 = *((_DWORD *)v3 + 1); /*0x5940dd*/
          if ( v10 >= *((_DWORD *)v3 + 3) + v10 ) /*0x5940e9*/
            return 1; /*0x594177*/
          v11 = aP2; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v12 = *(_DWORD *)v3; /*0x5940f3*/
            if ( *(_DWORD *)v3 < *(_DWORD *)v3 + *((_DWORD *)v3 + 2) ) /*0x5940fc*/
              break; /*0x5940fc*/
  LABEL_15:
            if ( ++v10 >= *((_DWORD *)v3 + 3) + *((_DWORD *)v3 + 1) ) /*0x59416e*/
              return 1; /*0x59416e*/
          }
          while ( 1 )
          {
            LOWORD(aP1) = v12; /*0x594104*/
            HIWORD(aP1) = v10; /*0x59410b*/
            v13 = g_MapTileArray
                ? *((_DWORD *)g_MapTileArray + 20 * (__int16)v12 + 20 * g_MapCellWidth * (__int16)v10 + 14)
                : -1;
            if ( v13 != *(this + 2) && v13 != v11 ) /*0x59413b*/
              break; /*0x59413b*/
            v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP1); /*0x594147*/
            if ( !Cell::IsEmpty(v14) ) /*0x59414e*/
              break; /*0x59414e*/
            if ( ++v12 >= *(_DWORD *)v3 + *((_DWORD *)v3 + 2) ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  return 0; /*0x594170*/
}
// 0x5FEC70
OverlayTypeClass * * BuildingTypeClass::FindOrCreate2()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( g_ObjectTypeConfig <= 0 ) /*0x5feca1*/
  {
  LABEL_6:
    if ( __2_YAPAXI_Z(0x2BCu) ) /*0x5feccb*/
      return OverlayTypeClass::OverlayTypeClass(Source); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_BuildingTypeClass_Array + v2) + 36), Source) ) /*0x5fecba*/
  {
    if ( ++v2 >= g_ObjectTypeConfig ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *((_DWORD *)g_BuildingTypeClass_Array + v2); /*0x5fecdf*/
}
// 0x644890
ParticleSystemTypeClass * * BuildingTypeClass::LoadOrGet()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( g_InfantryTypeInitState <= 0 ) /*0x6448c1*/
  {
  LABEL_6:
    if ( __2_YAPAXI_Z(0x310u) ) /*0x6448eb*/
      return OverlayTypeClass::Construct(Source); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A83D6C + v2) + 36), Source) ) /*0x6448da*/
  {
    if ( ++v2 >= g_InfantryTypeInitState ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *((_DWORD *)dword_A83D6C + v2); /*0x6448ff*/
}
// 0x644BE0
unsigned int * BuildingTypeClass::Construct(AbstractClass * aP1)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int)this, aP1); /*0x644beb*/
  *(this + 165) = 0; /*0x644bf8*/
  *(this + 166) = 0; /*0x644bfe*/
  *(this + 167) = 0; /*0x644c04*/
  *(this + 172) = 0; /*0x644c10*/
  *(this + 168) = 1; /*0x644c19*/
  *(this + 169) = 1; /*0x644c1f*/
  *(this + 170) = 0; /*0x644c25*/
  *(this + 171) = 1; /*0x644c2b*/
  *(this + 173) = 0; /*0x644c31*/
  BuildingTypeClass::loadBuildingProperty_b_5478850(0, 0); /*0x644c37*/
  *(this + 179) = 10; /*0x644c3c*/
  *(this + 178) = 0; /*0x644c43*/
  *(this + 174) = &TypeList<RGBClass>::`vftable'; /*0x644c46*/
  *((_BYTE *)this + 724) = 0; /*0x644c4c*/
  *((_BYTE *)this + 725) = 0; /*0x644c52*/
  *((_BYTE *)this + 726) = 0; /*0x644c58*/
  *((_BYTE *)this + 727) = 0; /*0x644c60*/
  *((_BYTE *)this + 728) = 0; /*0x644c66*/
  *((_BYTE *)this + 729) = 0; /*0x644c6c*/
  *((_BYTE *)this + 781) = -1; /*0x644c72*/
  *((_BYTE *)this + 782) = -1; /*0x644c78*/
  *(this + 183) = 0; /*0x644c81*/
  *(this + 184) = 1; /*0x644c87*/
  *(this + 185) = 0; /*0x644c8d*/
  *(this + 186) = 0; /*0x644c93*/
  *(this + 187) = 0; /*0x644c99*/
  *(this + 188) = 1; /*0x644c9f*/
  *(this + 189) = 0; /*0x644ca5*/
  *(this + 190) = 0; /*0x644cab*/
  *(this + 191) = 0; /*0x644cb1*/
  *(this + 192) = 0; /*0x644cb7*/
  *(this + 193) = 0; /*0x644cbd*/
  *((_BYTE *)this + 776) = 0; /*0x644cc3*/
  *((_BYTE *)this + 777) = 0; /*0x644cc9*/
  *((_BYTE *)this + 778) = 0; /*0x644ccf*/
  *((_BYTE *)this + 779) = 4; /*0x644cd5*/
  *((_BYTE *)this + 780) = 0; /*0x644cdc*/
  *((_BYTE *)this + 783) = 0; /*0x644ce2*/
  *(this + 196) = -1; /*0x644ce8*/
  *(this + 197) = -1; /*0x644cee*/
  *this = &ParticleTypeClass::`vftable'; /*0x644cf4*/
  *(this + 1) = &ParticleTypeClass::`vftable'; /*0x644cfa*/
  *(this + 2) = &ParticleTypeClass::`vftable'; /*0x644d01*/
  *(this + 3) = &ParticleTypeClass::`vftable'; /*0x644d08*/
  if ( g_BuildingTypeInitState < dword_A83DA0 /*0x644d43*/
    || (byte_A83DA5 || !dword_A83DA0)
    && dword_A83DAC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83D98 + 8))(
         &dword_A83D98,
         dword_A83DA0 + dword_A83DAC,
         0) )
  {
    v3 = g_BuildingTypeInitState++; /*0x644d50*/
    *((_DWORD *)g_BuildingProductionQueue + v3) = this; /*0x644d5f*/
  }
  if ( g_AnimManager < g_AnimTypePool /*0x644d96*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v4 = g_AnimManager++; /*0x644da3*/
    *((_DWORD *)g_AnimPoolCount + v4) = this; /*0x644db2*/
  }
  *((_BYTE *)this + 564) = 0; /*0x644db5*/
  return this; /*0x644dbd*/
}
// 0x645430
ParticleTypeClass * * BuildingTypeClass::FindOrCreateEx()
{
  int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v6; // ecx
  _DWORD *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( g_BuildingTypeInitState <= 0 ) /*0x64544f*/
  {
  LABEL_5:
    v3 = __2_YAPAXI_Z(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = BuildingTypeClass::Construct(v3, Source); /*0x645488*/
    else
      v4 = 0; /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( g_BuildingTypeInitState > 0 ) /*0x6454a0*/
    {
      for ( i = g_BuildingProductionQueue; (_DWORD *)*i != v4; ++i ) /*0x6454a2*/
      {
        if ( ++v6 >= g_BuildingTypeInitState ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(Source, (const void *)(*((_DWORD *)g_BuildingProductionQueue + v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= g_BuildingTypeInitState ) /*0x645472*/
      goto LABEL_5; /*0x645472*/
  }
  return v2; /*0x645491*/
}
// 0x7171A0
void* BuildingTypeClass::ProcessPower(AbstractClass * aP1)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx

  AbstractTypeClass::ProcessPower((char *)this, aP1); /*0x7171a9*/
  Checksummer::Add_double(*(_DWORD *)(this + 752), *(_DWORD *)(this + 756)); /*0x7171be*/
  Power::TimerProcess(*(_DWORD *)(this + 760)); /*0x7171cc*/
  Checksummer::Add_double(*(_DWORD *)(this + 768), *(_DWORD *)(this + 772)); /*0x7171e1*/
  Checksummer::Add_double(*(_DWORD *)(this + 776), *(_DWORD *)(this + 780)); /*0x7171f6*/
  Power::TimerProcess(*(_DWORD *)(this + 784)); /*0x717204*/
  Power::TimerProcess(*(_DWORD *)(this + 804)); /*0x717212*/
  Power::TimerProcess(*(_DWORD *)(this + 1492)); /*0x717220*/
  Power::TimerProcess(*(_DWORD *)(this + 1016)); /*0x71722e*/
  Power::TimerProcess(*(_DWORD *)(this + 832)); /*0x71723c*/
  Checksummer::Add_Buffer((unsigned int *)aP1, (unsigned __int8 *)(this + 844), 16); /*0x71724c*/
  Checksummer::Add_double(*(_DWORD *)(this + 864), *(_DWORD *)(this + 868)); /*0x717261*/
  Checksummer::Add_double(*(_DWORD *)(this + 872), *(_DWORD *)(this + 876)); /*0x717276*/
  Checksummer::Add_double(*(_DWORD *)(this + 880), *(_DWORD *)(this + 884)); /*0x71728b*/
  Checksummer::Add_double(*(_DWORD *)(this + 888), *(_DWORD *)(this + 892)); /*0x7172a0*/
  Checksummer::Add_double(*(_DWORD *)(this + 896), *(_DWORD *)(this + 900)); /*0x7172b5*/
  Checksummer::Add_double(*(_DWORD *)(this + 904), *(_DWORD *)(this + 908)); /*0x7172ca*/
  LOBYTE(v3) = *(_BYTE *)(this + 912); /*0x7172cf*/
  Power::FlagProcess(aP1, v3); /*0x7172d8*/
  v4 = Power::TimerProcess(*(_DWORD *)(this + 920)); /*0x7172e6*/
  LOBYTE(v4) = *(_BYTE *)(this + 3217); /*0x7172eb*/
  Power::FlagProcess(aP1, v4); /*0x7172f4*/
  LOBYTE(v5) = *(_BYTE *)(this + 3218); /*0x7172f9*/
  Power::FlagProcess(aP1, v5); /*0x717302*/
  LOBYTE(v6) = *(_BYTE *)(this + 3216); /*0x717307*/
  Power::FlagProcess(aP1, v6); /*0x717310*/
  Checksummer::Add_double(*(_DWORD *)(this + 928), *(_DWORD *)(this + 932)); /*0x717325*/
  Checksummer::Add_double(*(_DWORD *)(this + 944), *(_DWORD *)(this + 948)); /*0x71733a*/
  Checksummer::Add_double(*(_DWORD *)(this + 936), *(_DWORD *)(this + 940)); /*0x71734f*/
  Power::TimerProcess(*(_DWORD *)(this + 1560)); /*0x71735d*/
  Power::TimerProcess(*(_DWORD *)(this + 952)); /*0x71736b*/
  Power::TimerProcess(*(_DWORD *)(this + 956)); /*0x717379*/
  Checksummer::Add_double(*(_DWORD *)(this + 968), *(_DWORD *)(this + 972)); /*0x71738e*/
  Power::TimerProcess(*(_DWORD *)(this + 976)); /*0x71739c*/
  Power::TimerProcess(*(_DWORD *)(this + 980)); /*0x7173aa*/
  Power::TimerProcess(*(_DWORD *)(this + 1060)); /*0x7173b8*/
  Power::TimerProcess(*(_DWORD *)(this + 1088)); /*0x7173c6*/
  Power::TimerProcess(*(_DWORD *)(this + 1144)); /*0x7173d4*/
  Power::TimerProcess(*(_DWORD *)(this + 1172)); /*0x7173e2*/
  Power::TimerProcess(*(_DWORD *)(this + 1200)); /*0x7173f0*/
  Power::TimerProcess(*(_DWORD *)(this + 1228)); /*0x7173fe*/
  Power::TimerProcess(*(_DWORD *)(this + 1256)); /*0x71740c*/
  Power::TimerProcess(*(_DWORD *)(this + 1284)); /*0x71741a*/
  Power::TimerProcess(*(_DWORD *)(this + 1312)); /*0x717428*/
  Power::TimerProcess(*(_DWORD *)(this + 1928)); /*0x717436*/
  Power::TimerProcess(*(_DWORD *)(this + 1956)); /*0x717444*/
  Power::TimerProcess(*(_DWORD *)(this + 1460)); /*0x717452*/
  Power::TimerProcess(*(_DWORD *)(this + 1464)); /*0x717460*/
  Power::TimerProcess(*(_DWORD *)(this + 1468)); /*0x71746e*/
  Power::TimerProcess(*(_DWORD *)(this + 1472)); /*0x71747c*/
  Power::TimerProcess(*(_DWORD *)(this + 1504)); /*0x71748a*/
  Power::TimerProcess(*(_DWORD *)(this + 1512)); /*0x717498*/
  Power::TimerProcess(*(_DWORD *)(this + 1552)); /*0x7174a6*/
  Power::TimerProcess(*(_DWORD *)(this + 1556)); /*0x7174b4*/
  Power::TimerProcess(*(_DWORD *)(this + 1588)); /*0x7174c2*/
  Power::TimerProcess(*(_DWORD *)(this + 1608)); /*0x7174d0*/
  Power::TimerProcess(*(_DWORD *)(this + 1636)); /*0x7174de*/
  Power::TimerProcess(*(_DWORD *)(this + 1648)); /*0x7174ec*/
  Power::TimerProcess(*(_DWORD *)(this + 1652)); /*0x7174fa*/
  Power::TimerProcess(*(_DWORD *)(this + 1656)); /*0x717508*/
  Power::TimerProcess(*(_DWORD *)(this + 1660)); /*0x717516*/
  Power::TimerProcess(*(_DWORD *)(this + 1668)); /*0x717524*/
  Power::TimerProcess(*(_DWORD *)(this + 1676)); /*0x717532*/
  Power::TimerProcess(*(_DWORD *)(this + 1740)); /*0x717540*/
  Power::TimerProcess(*(_DWORD *)(this + 1744)); /*0x71754e*/
  Power::TimerProcess(*(_DWORD *)(this + 1816)); /*0x71755c*/
  Power::TimerProcess(*(_DWORD *)(this + 1820)); /*0x71756a*/
  Power::TimerProcess(*(_DWORD *)(this + 1824)); /*0x717578*/
  Power::TimerProcess(*(_DWORD *)(this + 1832)); /*0x717586*/
  Power::TimerProcess(*(_DWORD *)(this + 1852)); /*0x717594*/
  Power::TimerProcess(*(_DWORD *)(this + 1880)); /*0x7175a2*/
  Power::TimerProcess(*(_DWORD *)(this + 2044)); /*0x7175b0*/
  v7 = Power::TimerProcess(*(_DWORD *)(this + 2048)); /*0x7175be*/
  LOBYTE(v7) = *(_BYTE *)(this + 3220); /*0x7175c3*/
  Power::FlagProcess(aP1, v7); /*0x7175cc*/
  LOBYTE(v8) = *(_BYTE *)(this + 3221); /*0x7175d1*/
  Power::FlagProcess(aP1, v8); /*0x7175da*/
  LOBYTE(v9) = *(_BYTE *)(this + 3222); /*0x7175df*/
  v10 = Power::FlagProcess(aP1, v9); /*0x7175e8*/
  LOBYTE(v10) = *(_BYTE *)(this + 3223); /*0x7175ed*/
  Power::FlagProcess(aP1, v10); /*0x7175f6*/
  LOBYTE(v11) = *(_BYTE *)(this + 3224); /*0x7175fb*/
  Power::FlagProcess(aP1, v11); /*0x717604*/
  LOBYTE(v12) = *(_BYTE *)(this + 3225); /*0x717609*/
  v13 = Power::FlagProcess(aP1, v12); /*0x717612*/
  LOBYTE(v13) = *(_BYTE *)(this + 3226); /*0x717617*/
  Power::FlagProcess(aP1, v13); /*0x717620*/
  LOBYTE(v14) = *(_BYTE *)(this + 3227); /*0x717625*/
  Power::FlagProcess(aP1, v14); /*0x71762e*/
  LOBYTE(v15) = *(_BYTE *)(this + 3228); /*0x717633*/
  v16 = Power::FlagProcess(aP1, v15); /*0x71763c*/
  LOBYTE(v16) = *(_BYTE *)(this + 3229); /*0x717641*/
  Power::FlagProcess(aP1, v16); /*0x71764a*/
  LOBYTE(v17) = *(_BYTE *)(this + 3230); /*0x71764f*/
  Power::FlagProcess(aP1, v17); /*0x717658*/
  LOBYTE(v18) = *(_BYTE *)(this + 3231); /*0x71765d*/
  v19 = Power::FlagProcess(aP1, v18); /*0x717666*/
  LOBYTE(v19) = *(_BYTE *)(this + 3232); /*0x71766b*/
  Power::FlagProcess(aP1, v19); /*0x717674*/
  LOBYTE(v20) = *(_BYTE *)(this + 3233); /*0x717679*/
  Power::FlagProcess(aP1, v20); /*0x717682*/
  LOBYTE(v21) = *(_BYTE *)(this + 3276); /*0x717687*/
  v22 = Power::FlagProcess(aP1, v21); /*0x717690*/
  LOBYTE(v22) = *(_BYTE *)(this + 3277); /*0x717695*/
  Power::FlagProcess(aP1, v22); /*0x71769e*/
  LOBYTE(v23) = *(_BYTE *)(this + 3279); /*0x7176a3*/
  Power::FlagProcess(aP1, v23); /*0x7176ac*/
  LOBYTE(v24) = *(_BYTE *)(this + 3280); /*0x7176b1*/
  v25 = Power::FlagProcess(aP1, v24); /*0x7176ba*/
  LOBYTE(v25) = *(_BYTE *)(this + 3281); /*0x7176bf*/
  Power::FlagProcess(aP1, v25); /*0x7176c8*/
  LOBYTE(v26) = *(_BYTE *)(this + 3282); /*0x7176cd*/
  Power::FinalizeDrain(aP1, v26); /*0x7176d6*/
  LOBYTE(v27) = *(_BYTE *)(this + 3283); /*0x7176db*/
  v28 = Power::FinalizeDrain(aP1, v27); /*0x7176e4*/
  LOBYTE(v28) = *(_BYTE *)(this + 3284); /*0x7176e9*/
  Power::FlagProcess(aP1, v28); /*0x7176f2*/
  LOBYTE(v29) = *(_BYTE *)(this + 3348); /*0x7176f7*/
  Power::FlagProcess(aP1, v29); /*0x717700*/
  LOBYTE(v30) = *(_BYTE *)(this + 3349); /*0x717705*/
  v31 = Power::FlagProcess(aP1, v30); /*0x71770e*/
  LOBYTE(v31) = *(_BYTE *)(this + 3360); /*0x717713*/
  Power::FlagProcess(aP1, v31); /*0x71771c*/
  LOBYTE(v32) = *(_BYTE *)(this + 3361); /*0x717721*/
  Power::FlagProcess(aP1, v32); /*0x71772a*/
  LOBYTE(v33) = *(_BYTE *)(this + 3363); /*0x71772f*/
  v34 = Power::FlagProcess(aP1, v33); /*0x717738*/
  LOBYTE(v34) = *(_BYTE *)(this + 3364); /*0x71773d*/
  Power::FlagProcess(aP1, v34); /*0x717746*/
  LOBYTE(v35) = *(_BYTE *)(this + 3365); /*0x71774b*/
  Power::FlagProcess(aP1, v35); /*0x717754*/
  LOBYTE(v36) = *(_BYTE *)(this + 3366); /*0x717759*/
  v37 = Power::FlagProcess(aP1, v36); /*0x717762*/
  LOBYTE(v37) = *(_BYTE *)(this + 3518); /*0x717767*/
  Power::FlagProcess(aP1, v37); /*0x717770*/
  LOBYTE(v38) = *(_BYTE *)(this + 3519); /*0x717775*/
  Power::FlagProcess(aP1, v38); /*0x71777e*/
  LOBYTE(v39) = *(_BYTE *)(this + 1710); /*0x717783*/
  v40 = Power::FlagProcess(aP1, v39); /*0x71778c*/
  LOBYTE(v40) = *(_BYTE *)(this + 1711); /*0x717791*/
  Power::FlagProcess(aP1, v40); /*0x71779a*/
  LOBYTE(v41) = *(_BYTE *)(this + 1712); /*0x71779f*/
  return Power::FlagProcess(aP1, v41); /*0x7177ad*/
}
// 0x7178C0
unsigned int * BuildingTypeClass::GetUpgradeOffset(unsigned int * a2)
{
  int v3; // eax
  int v4; // ecx
  int *v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ebp
  int v9; // edi
  double v10; // st7
  int v11; // eax
  int v12; // ebx
  int v14[3]; // [esp+18h] [ebp-14h] BYREF
  int v15[2]; // [esp+24h] [ebp-8h] BYREF

  if ( *(_BYTE *)(this + 1980) ) /*0x7178c6*/
  {
    v3 = *(_DWORD *)(this + 1968); /*0x7178d4*/
    v4 = *(_DWORD *)(this + 1972); /*0x7178da*/
    v15[0] = v3; /*0x7178e1*/
    v15[1] = v4; /*0x7178e6*/
    v5 = World::ToScreen((float *)g_TacticalClass_Instance, v14, v15); /*0x7178fb*/
    v6 = *v5; /*0x717900*/
    v7 = v5[1]; /*0x717905*/
    v14[0] = 10 * *(_DWORD *)(this + 1976); /*0x71791b*/
    v8 = v6 - v14[0]; /*0x717927*/
    v9 = v7 - v14[0]; /*0x717929*/
    v10 = Math::Sqrt((double)v14[0] * (double)v14[0] + (double)v14[0] * (double)v14[0]); /*0x717936*/
    v11 = Math::RoundToInt(v10 * 0.58); /*0x717944*/
    if ( *(int *)(this + 1976) >= 0 ) /*0x717951*/
      v12 = -v11; /*0x717957*/
    else
      v12 = v11; /*0x717953*/
    *a2 = v8; /*0x71795f*/
    a2[1] = v9; /*0x717961*/
    a2[2] = v12; /*0x717966*/
    return a2; /*0x717959*/
  }
  else
  {
    *a2 = *(_DWORD *)(this + 1968); /*0x71797f*/
    a2[1] = *(_DWORD *)(this + 1972); /*0x717984*/
    a2[2] = *(_DWORD *)(this + 1976); /*0x71798b*/
    return a2; /*0x717971*/
  }
}
// 0x746000
int BuildingTypeClass::IsPlacementValid(IUnknown * aP1, IUnknown * aP2)
{
  signed int v4; // ecx
  int v5; // eax
  int v6; // eax

  if ( (*(int (__fastcall **)(void *))(*(_DWORD *)this + 456))(this) < 0 /*0x746030*/
    || !MapSeed::CheckTileMatch(&MapClass_Instance, aP1, aP2, 0, 0, 0, 0) )
  {
    return 1; /*0x746030*/
  }
  if ( *aP1 == *aP2 && aP1[1] == aP2[1] ) /*0x746050*/
    return 0; /*0x746059*/
  v4 = abs32(aP2[1] - aP1[1]); /*0x74606b*/
  v5 = abs32(*aP2 - *aP1); /*0x746078*/
  if ( v5 <= v4 ) /*0x74607c*/
    v5 = v4; /*0x74607e*/
  if ( v5 == 1 ) /*0x746083*/
    return 0; /*0x74608c*/
  if ( v5 >= 12 /*0x7460ad*/
    || !LayerClass::IsWithinUsableArea(&MapClass_Instance, aP1, 1)
    || !LayerClass::IsWithinUsableArea(&MapClass_Instance, aP2, 1) )
  {
    return 1; /*0x7460f7*/
  }
  v6 = *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, aP2) + 80) >> 8; /*0x7460cd*/
  LOBYTE(v6) = v6 & 1; /*0x7460d0*/
  return Pathfinding::CalcDistance((int)&g_AudioInitFlag, aP1, aP2, (int)this, 0, v6, 0) > 15; /*0x746052*/
}
// 0x7480D0
AbstractClass * * BuildingTypeClass::FindOrCreateAlt()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x7480ec*/
    return 0; /*0x74814f*/
  v2 = 0; /*0x7480fd*/
  if ( g_CrateCount <= 0 ) /*0x748101*/
  {
  LABEL_6:
    if ( __2_YAPAXI_Z(0xE78u) ) /*0x74812b*/
      return UnitTypeClass::UnitTypeClass(Source); /*0x748141*/
    return 0; /*0x748135*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_UnitTypeCount2 + v2) + 36), Source) ) /*0x74811a*/
  {
    if ( ++v2 >= g_CrateCount ) /*0x748124*/
      goto LABEL_6; /*0x748124*/
  }
  return *((_DWORD *)g_UnitTypeCount2 + v2); /*0x74813f*/
}
// 0x41C500
char BuildingTypeClass::Enqueue(int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x41c50c*/
    return 0; /*0x41c50c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x41c520*/
  if ( !v3 ) /*0x41c527*/
    return 0; /*0x41c580*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x41c535*/
  {
    v5 = 8 * i; /*0x41c539*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x41c542*/
    *(_DWORD *)&v3[v5] = *v6; /*0x41c547*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x41c55b*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x41c566*/
  *(_DWORD *)this = v3; /*0x41c568*/
  *(_DWORD *)(this + 8) = v7; /*0x41c56a*/
  *(_DWORD *)(this + 16) = 0; /*0x41c56d*/
  return 1; /*0x41c574*/
}
// 0x41C590
size_t BuildingTypeClass::Dequeue(BuildingClass * aP1)
{
  size_t result; // eax
  char *v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // esi

  result = (size_t)*(this + 1); /*0x41c593*/
  if ( result ) /*0x41c598*/
  {
    if ( !*((_BYTE *)this + 12) ) /*0x41c59e*/
    {
      qsort(*this, result, 8u, CompareFunction); /*0x41c5b0*/
      *(this + 4) = 0; /*0x41c5b8*/
      *((_BYTE *)this + 12) = 1; /*0x41c5bf*/
    }
    v4 = *this; /*0x41c5c9*/
    v5 = *aP1; /*0x41c5cb*/
    v6 = (int)*(this + 1); /*0x41c5cd*/
    if ( v6 <= 0 ) /*0x41c5d2*/
      return 0; /*0x41c5fe*/
    while ( 1 ) /*0x41c5db*/
    {
      v7 = *(_DWORD *)&v4[8 * (v6 / 2)]; /*0x41c5db*/
      if ( v7 <= v5 ) /*0x41c5e3*/
      {
        if ( v7 == v5 ) /*0x41c5e9*/
          return (size_t)&v4[8 * (v6 / 2)]; /*0x41c603*/
        v4 += 8 * (v6 / 2) + 8; /*0x41c5eb*/
        v6 += -1 - v6 / 2; /*0x41c5f3*/
      }
      else
      {
        v6 /= 2; /*0x41c5e5*/
      }
      if ( v6 <= 0 ) /*0x41c5f7*/
        return 0; /*0x41c5f7*/
    }
  }
  return result; /*0x41c59a*/
}
// 0x45E7B0
int BuildingTypeClass::FindIndexByName()
{
  int v2; // esi

  if ( !this ) /*0x45e7b6*/
    return -1; /*0x45e7b6*/
  v2 = 0; /*0x45e7bd*/
  if ( g_TriggerClassCount <= 0 ) /*0x45e7c1*/
    return -1; /*0x45e7e6*/
  while ( _strcmpi((const void *)(*((_DWORD *)g_TriggerTypeCount + v2) + 36), this) ) /*0x45e7da*/
  {
    if ( ++v2 >= g_TriggerClassCount ) /*0x45e7e4*/
      return -1; /*0x45e7e4*/
  }
  return v2; /*0x45e7e6*/
}
// 0x45ECE0
int BuildingTypeClass::GetMaxPips()
{
  int result; // eax
  int v2; // ecx
  int v3; // ecx

  result = 60 * dword_8192B8[*(_DWORD *)(this + 3824)] / 8; /*0x45ed02*/
  if ( *(_DWORD *)(this + 980) == 2 ) /*0x45ed08*/
  {
    if ( *(_BYTE *)(this + 5820) ) /*0x45ed14*/
    {
      v2 = g_RulesClass_Instance[1].RadarEventVisibilityDurations[1]; /*0x45ed24*/
      if ( v2 >= 0 ) /*0x45ed2c*/
      {
        if ( v2 <= result ) /*0x45ed33*/
          return g_RulesClass_Instance[1].RadarEventVisibilityDurations[1]; /*0x45ed35*/
      }
      else
      {
        return 0; /*0x45ed2e*/
      }
    }
    else
    {
      v3 = *(_DWORD *)(this + 2048); /*0x45ed38*/
      if ( v3 >= 0 ) /*0x45ed40*/
      {
        if ( v3 <= result ) /*0x45ed47*/
          return v3; /*0x45ed49*/
      }
      else
      {
        return 0; /*0x45ed42*/
      }
    }
  }
  else if ( *(_DWORD *)(this + 980) != 4 ) /*0x45ed0d*/
  {
    return ObjectClass::GetModeSpecificValue((int *)this); /*0x45ed0f*/
  }
  return result; /*0x45ed30*/
}
// 0x464AF0
unsigned int * BuildingTypeClass::GetSizeInLeptons(unsigned int * a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax

  v2 = *(this + 956); /*0x464af0*/
  v3 = dword_89DDB8 * *(this + 957); /*0x464afc*/
  v2 *= 4; /*0x464b03*/
  v4 = *(int *)((char *)dword_8192B8 + v2); /*0x464b0b*/
  v5 = *(int *)((char *)dword_819310 + v2); /*0x464b11*/
  *a2 = v4 << 8; /*0x464b1d*/
  a2[1] = v5 << 8; /*0x464b22*/
  a2[2] = v3; /*0x464b27*/
  return a2; /*0x464b2a*/
}
// 0x465300
int BuildingTypeClass::SaveLoad_Prefix_0()
{
  int result; // eax
  int v2; // edx
  int v3; // ebp
  int i; // edi
  int v5; // [esp+4h] [ebp-10h]
  _DWORD *v6; // [esp+18h] [ebp+4h]
  int *v7; // [esp+1Ch] [ebp+8h]
  int v8; // [esp+20h] [ebp+Ch] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix_0((int)v6, v6, v7, v8, v5); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    v2 = *v7; /*0x465322*/
    v8 = v6[1507]; /*0x46532e*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v2 + 16))(v7, &v8, 4, 0); /*0x465332*/
    if ( result >= 0 ) /*0x465337*/
    {
      v3 = 0; /*0x46533d*/
      if ( v8 <= 0 ) /*0x465341*/
      {
        return 0; /*0x465368*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x465343*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*v7 + 16))(v7, i + v6[1506], 12, 0); /*0x465355*/
          if ( result < 0 ) /*0x46535a*/
            break; /*0x46535a*/
          if ( ++v3 >= v8 ) /*0x465366*/
            return 0; /*0x465366*/
        }
      }
    }
  }
  return result; /*0x46536a*/
}
// 0x465380
int BuildingTypeClass::GetClassIdentifier()
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x465386*/
    return -2147467261; /*0x465388*/
  *v2 = -1366608933; /*0x465396*/
  v2[1] = 298976796; /*0x46539e*/
  v2[2] = 1610654892; /*0x4653a7*/
  v2[3] = -1252326136; /*0x4653b0*/
  return 0; /*0x46538d*/
}
// 0x465D90
int BuildingTypeClass::GetTypeIdentifier()
{
  return 7; /*0x465d95*/
}
// 0x465DA0
int BuildingTypeClass::GetObjectSize()
{
  return 6040; /*0x465da5*/
}
// 0x465DB0
int BuildingTypeClass::GetAuxField()
{
  return *((_DWORD *)this + 894); /*0x465db6*/
}
// 0x465DC0
int BuildingTypeClass::ddtor()
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingTypeClass::CleanupMembers((void **)this); /*0x465dc3*/
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    __3_YAXPAX_Z(this); /*0x465dd0*/
  return (int)this; /*0x465dda*/
}
// 0x474A90
int BuildingTypeClass::FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{
  int v4; // esi
  _DWORD *v5; // eax
  bool v6; // zf
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, aP1, a2, *(char **)(*((_DWORD *)BuildingTypeClass_AnimTable + aP3) + 772), Destination, 32); /*0x474aba*/
  v4 = 0; /*0x474ac4*/
  if ( g_AnimClass_SaveState <= 0 ) /*0x474ac8*/
    return aP3; /*0x474b06*/
  v5 = BuildingTypeClass_AnimTable; /*0x474aca*/
  while ( 1 ) /*0x474ae6*/
  {
    v6 = _strcmpi(*(const void **)(v5[v4] + 772), Destination) == 0; /*0x474ae6*/
    v5 = BuildingTypeClass_AnimTable; /*0x474ae8*/
    if ( v6 && *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v4) + 784) != 1 ) /*0x474af9*/
      break; /*0x474af9*/
    if ( ++v4 >= g_AnimClass_SaveState ) /*0x474b04*/
      return aP3; /*0x474b04*/
  }
  return v4; /*0x474b08*/
}
// 0x478850
unsigned int * BuildingTypeClass::loadBuildingProperty_b_5478850(int a2, int a3)
{
  char *v4; // ebx
  _BYTE *v5; // eax
  int v6; // ecx
  char *v8; // eax
  _BYTE *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x478859*/
  *(this + 1) = 0; /*0x47885d*/
  *(this + 2) = a2; /*0x478860*/
  *((_BYTE *)this + 12) = 1; /*0x478863*/
  *((_BYTE *)this + 13) = 0; /*0x478867*/
  *this = &VectorClass<RGBClass>::`vftable'; /*0x47886a*/
  if ( !a2 ) /*0x478870*/
    return this; /*0x4788d0*/
  if ( !a3 ) /*0x478878*/
  {
    v8 = (char *)__2_YAPAXI_Z(3 * a2); /*0x4788a2*/
    if ( v8 ) /*0x4788ac*/
    {
      if ( a2 - 1 >= 0 ) /*0x4788b3*/
      {
        v9 = v8 + 2; /*0x4788b5*/
        v10 = a2; /*0x4788b8*/
        do /*0x4788c5*/
        {
          *(v9 - 2) = 0; /*0x4788b9*/
          *(v9 - 1) = 0; /*0x4788bc*/
          *v9 = 0; /*0x4788bf*/
          v9 += 3; /*0x4788c1*/
          --v10; /*0x4788c4*/
        }
        while ( v10 ); /*0x4788c5*/
      }
      v4 = v8; /*0x4788c7*/
    }
    *(this + 1) = v4; /*0x4788c9*/
    *((_BYTE *)this + 13) = 1; /*0x4788cc*/
    return this; /*0x4788cc*/
  }
  if ( a2 - 1 >= 0 ) /*0x47887f*/
  {
    v5 = (_BYTE *)(a3 + 2); /*0x478881*/
    v6 = a2; /*0x478884*/
    do /*0x478891*/
    {
      *(v5 - 2) = 0; /*0x478885*/
      *(v5 - 1) = 0; /*0x478888*/
      *v5 = 0; /*0x47888b*/
      v5 += 3; /*0x47888d*/
      --v6; /*0x478890*/
    }
    while ( v6 ); /*0x478891*/
  }
  *(this + 1) = a3; /*0x478893*/
  return this; /*0x478898*/
}
// 0x4C9680
int BuildingTypeClass::GetPowerOutput(ObjectClass * aP1)
{
  int result; // eax
  __int16 v3; // dx

  result = aP1; /*0x4c9680*/
  if ( aP1 >= 127 ) /*0x4c9687*/
    result = 127; /*0x4c9689*/
  LOBYTE(v3) = 0; /*0x4c968e*/
  HIBYTE(v3) = result; /*0x4c9690*/
  *(this + 10) = v3; /*0x4c9692*/
  return result; /*0x4c9696*/
}
// 0x747370
int BuildingTypeClass::FindIndex()
{
  int v2; // esi

  if ( !this ) /*0x747376*/
    return -1; /*0x747376*/
  v2 = 0; /*0x74737d*/
  if ( g_CrateCount <= 0 ) /*0x747381*/
    return -1; /*0x7473a6*/
  while ( _strcmpi((const void *)(*((_DWORD *)g_UnitTypeCount2 + v2) + 36), this) ) /*0x74739a*/
  {
    if ( ++v2 >= g_CrateCount ) /*0x7473a4*/
      return -1; /*0x7473a4*/
  }
  return v2; /*0x7473a6*/
}