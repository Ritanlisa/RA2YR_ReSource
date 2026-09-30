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
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/BulletClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"

// 0x45DD90
namespace gamemd {
int BuildingTypeClass::ConstructFull(char * Source)
{

  int v3; // ecx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  unsigned int *v7; // edx
  unsigned int *v8; // eax
  int v9; // ecx
  unsigned int *v10; // ebp
  unsigned int *v11; // ebp
  unsigned int *v12; // eax
  int v13; // edi
  int v14; // edx
  unsigned int *v15; // eax
  int v16; // edi
  int v17; // edx
  unsigned int *v18; // eax
  int v19; // ecx
  unsigned int *v20; // edi

  TechnoTypeClass::ReadINI((char *)this, Source, 0); /*0x45dda1*/
  *((unsigned int *)this + 894) = -1; /*0x45ddaf*/
  *((unsigned int *)this + 895) = 0; /*0x45ddb5*/
  *((unsigned int *)this + 896) = 0; /*0x45ddbb*/
  *((unsigned char *)this + 3588) = 0; /*0x45ddc1*/
  *((unsigned int *)this + 898) = 0; /*0x45ddc7*/
  *((unsigned int *)this + 899) = unk_89C8D0; /*0x45ddd3*/
  *((unsigned int *)this + 900) = unk_89C8D4; /*0x45ddda*/
  *((unsigned int *)this + 901) = unk_89C8D8; /*0x45dde9*/
  *((unsigned int *)this + 902) = unk_89C8D0; /*0x45ddf2*/
  *((unsigned int *)this + 903) = unk_89C8D4; /*0x45ddfa*/
  *((unsigned int *)this + 904) = unk_89C8D8; /*0x45de03*/
  *((unsigned int *)this + 906) = 0; /*0x45de06*/
  *((unsigned int *)this + 907) = 0; /*0x45de0c*/
  *((unsigned int *)this + 908) = 5000; /*0x45de12*/
  *((unsigned int *)this + 909) = 0; /*0x45de21*/
  *((unsigned int *)this + 910) = 1000000; /*0x45de27*/
  *((unsigned int *)this + 911) = 1000000; /*0x45de2d*/
  *((unsigned int *)this + 912) = 1000000; /*0x45de33*/
  *((unsigned int *)this + 913) = 0xFFFF; /*0x45de40*/
  *((unsigned int *)this + 914) = 0xFFFF; /*0x45de46*/
  *((unsigned int *)this + 915) = 0xFFFF; /*0x45de4c*/
  *((unsigned int *)this + 916) = 0xFFFF; /*0x45de52*/
  *((unsigned int *)this + 917) = 0; /*0x45de58*/
  *((unsigned int *)this + 918) = 0; /*0x45de5e*/
  *((unsigned int *)this + 923) = -1; /*0x45de64*/
  *((unsigned int *)this + 924) = -1; /*0x45de6a*/
  *((unsigned int *)this + 925) = -1; /*0x45de70*/
  *((unsigned int *)this + 926) = -1; /*0x45de76*/
  *((unsigned int *)this + 927) = -1; /*0x45de7c*/
  *((unsigned int *)this + 928) = -1; /*0x45de82*/
  *((unsigned int *)this + 929) = -1; /*0x45de88*/
  *((unsigned int *)this + 936) = 0; /*0x45de8e*/
  *((unsigned int *)this + 937) = 0; /*0x45de94*/
  *((unsigned int *)this + 938) = 0; /*0x45de9a*/
  *((unsigned int *)this + 939) = 0; /*0x45dea0*/
  *((unsigned int *)this + 940) = -1; /*0x45dea6*/
  *((unsigned int *)this + 941) = 3; /*0x45deac*/
  *((unsigned int *)this + 942) = 0; /*0x45deb6*/
  *((unsigned int *)this + 943) = 0; /*0x45debc*/
  *((unsigned int *)this + 944) = 0; /*0x45dec2*/
  *((unsigned int *)this + 945) = 0; /*0x45dec8*/
  *((unsigned int *)this + 946) = 0; /*0x45dece*/
  *((unsigned int *)this + 947) = 0; /*0x45ded4*/
  *((unsigned int *)this + 948) = 0; /*0x45deda*/
  *((unsigned int *)this + 949) = 0; /*0x45dee0*/
  *((unsigned int *)this + 950) = 0; /*0x45dee6*/
  *((unsigned int *)this + 951) = 128; /*0x45deec*/
  *((unsigned int *)this + 952) = 0; /*0x45def6*/
  *((unsigned int *)this + 953) = 0; /*0x45defc*/
  *((unsigned int *)this + 954) = 0; /*0x45df02*/
  *((unsigned int *)this + 955) = 0; /*0x45df08*/
  *((unsigned int *)this + 956) = 0; /*0x45df13*/
  *((unsigned int *)this + 957) = 2; /*0x45df19*/
  *((unsigned int *)this + 958) = 2; /*0x45df1f*/
  *((unsigned int *)this + 959) = 0; /*0x45df25*/
  *((unsigned int *)this + 960) = 0; /*0x45df2b*/
  *((unsigned int *)this + 1336) = 0; /*0x45df31*/
  *((unsigned int *)this + 1337) = 0; /*0x45df37*/
  *((unsigned int *)this + 1339) = 0; /*0x45df3d*/
  *((unsigned int *)this + 1341) = 0; /*0x45df43*/
  *((unsigned int *)this + 1343) = 0; /*0x45df49*/
  *((unsigned int *)this + 1345) = 0; /*0x45df4f*/
  *((unsigned int *)this + 1347) = 0; /*0x45df55*/
  *((unsigned int *)this + 1348) = 0; /*0x45df5b*/
  *((unsigned int *)this + 1349) = 0; /*0x45df61*/
  *((unsigned int *)this + 1350) = 0; /*0x45df67*/
  *((unsigned char *)this + 5404) = 0; /*0x45df6d*/
  *((unsigned int *)this + 1352) = 0; /*0x45df73*/
  *((unsigned int *)this + 1353) = 0; /*0x45df79*/
  *((unsigned int *)this + 1354) = 0; /*0x45df7f*/
  *((unsigned int *)this + 1355) = 0; /*0x45df87*/
  *((unsigned int *)this + 1356) = 0; /*0x45df8d*/
  *((unsigned int *)this + 1357) = 0; /*0x45df93*/
  *((unsigned int *)this + 1358) = unk_89C8A0; /*0x45dfa4*/
  *((unsigned int *)this + 1359) = unk_89C8A4; /*0x45dfb0*/
  *((unsigned int *)this + 1360) = unk_89C8A8; /*0x45dfb8*/
  v3 = unk_89C8AC; /*0x45dfbb*/
  *((unsigned char *)this + 5454) = 0; /*0x45dfc3*/
  *((unsigned int *)this + 1361) = v3; /*0x45dfc9*/
  *((unsigned short *)this + 2724) = 0; /*0x45dfcc*/
  *((unsigned char *)this + 5450) = 1; /*0x45dfd3*/
  *((unsigned char *)this + 5451) = 0; /*0x45dfda*/
  *((unsigned char *)this + 5452) = 0; /*0x45dfe0*/
  *((unsigned int *)this + 1414) = 0; /*0x45dfe6*/
  *((unsigned char *)this + 5453) = 0; /*0x45dfec*/
  *((unsigned char *)this + 5455) = 1; /*0x45dff2*/
  *((unsigned char *)this + 5456) = 0; /*0x45dff9*/
  *((unsigned char *)this + 5457) = 0; /*0x45dfff*/
  *((unsigned char *)this + 5458) = 0; /*0x45e005*/
  *((unsigned int *)this + 1365) = -1; /*0x45e00b*/
  *((unsigned int *)this + 1366) = 0; /*0x45e011*/
  *((unsigned int *)this + 1367) = 0; /*0x45e017*/
  *((unsigned int *)this + 1368) = 0; /*0x45e01d*/
  *((unsigned int *)this + 1369) = 0; /*0x45e023*/
  *((unsigned int *)this + 1370) = 0; /*0x45e029*/
  *((unsigned int *)this + 1371) = 25; /*0x45e02f*/
  *((unsigned char *)this + 5488) = 0; /*0x45e039*/
  *((unsigned char *)this + 5489) = 0; /*0x45e03f*/
  *((unsigned char *)this + 5490) = 0; /*0x45e045*/
  *((unsigned char *)this + 5491) = 0; /*0x45e04b*/
  *((unsigned char *)this + 5492) = 0; /*0x45e051*/
  *((unsigned char *)this + 5493) = 0; /*0x45e057*/
  *((unsigned char *)this + 5494) = 0; /*0x45e05d*/
  *((unsigned char *)this + 5495) = 1; /*0x45e063*/
  *((unsigned char *)this + 5496) = 0; /*0x45e06a*/
  *((unsigned char *)this + 5497) = 0; /*0x45e070*/
  *((unsigned char *)this + 5498) = 1; /*0x45e076*/
  *((unsigned char *)this + 5499) = 0; /*0x45e07d*/
  *((unsigned char *)this + 5500) = 0; /*0x45e083*/
  *((unsigned int *)this + 1376) = 0; /*0x45e089*/
  *((unsigned char *)this + 5508) = 1; /*0x45e08f*/
  *((unsigned int *)this + 1415) = 0; /*0x45e096*/
  *((unsigned int *)this + 1416) = -1; /*0x45e09c*/
  *((unsigned char *)this + 5796) = 0; /*0x45e0a2*/
  *((unsigned char *)this + 5797) = 0; /*0x45e0a8*/
  *((unsigned char *)this + 5798) = 0; /*0x45e0ae*/
  *((unsigned char *)this + 5799) = 0; /*0x45e0b4*/
  *((unsigned char *)this + 5800) = 0; /*0x45e0ba*/
  *((unsigned char *)this + 5801) = 0; /*0x45e0c0*/
  *((unsigned char *)this + 5802) = 0; /*0x45e0c6*/
  *((unsigned char *)this + 5803) = 0; /*0x45e0cc*/
  *((unsigned char *)this + 5804) = 0; /*0x45e0d2*/
  *((unsigned char *)this + 5805) = 0; /*0x45e0d8*/
  *((unsigned char *)this + 5806) = 0; /*0x45e0de*/
  *((unsigned char *)this + 5807) = 0; /*0x45e0e4*/
  *((unsigned char *)this + 5808) = 0; /*0x45e0ea*/
  *((unsigned char *)this + 5809) = 0; /*0x45e0f0*/
  *((unsigned char *)this + 5810) = 0; /*0x45e0f6*/
  *((unsigned char *)this + 5811) = 0; /*0x45e0fc*/
  *((unsigned char *)this + 5812) = 0; /*0x45e102*/
  *((unsigned char *)this + 5813) = 1; /*0x45e108*/
  *((unsigned char *)this + 5814) = 0; /*0x45e10f*/
  *((unsigned char *)this + 5815) = 0; /*0x45e115*/
  *((unsigned char *)this + 5816) = 0; /*0x45e11b*/
  *((unsigned char *)this + 5817) = 0; /*0x45e121*/
  *((unsigned char *)this + 5818) = 0; /*0x45e127*/
  *((unsigned char *)this + 5819) = 0; /*0x45e12d*/
  *((unsigned char *)this + 5820) = 0; /*0x45e133*/
  *((unsigned char *)this + 5821) = 0; /*0x45e139*/
  *((unsigned char *)this + 5822) = 0; /*0x45e13f*/
  *((unsigned char *)this + 5823) = 0; /*0x45e145*/
  *((unsigned char *)this + 5824) = 0; /*0x45e14b*/
  *((unsigned char *)this + 5825) = 0; /*0x45e151*/
  *((unsigned char *)this + 5826) = 0; /*0x45e157*/
  *((unsigned char *)this + 5827) = 0; /*0x45e15d*/
  *((unsigned char *)this + 5828) = 0; /*0x45e163*/
  *((unsigned char *)this + 5829) = 0; /*0x45e169*/
  *((unsigned char *)this + 5830) = 0; /*0x45e16f*/
  *((unsigned char *)this + 5831) = 0; /*0x45e175*/
  *((unsigned char *)this + 5832) = 0; /*0x45e17b*/
  *((unsigned char *)this + 5833) = 0; /*0x45e181*/
  *((unsigned char *)this + 5834) = 0; /*0x45e187*/
  *((unsigned char *)this + 5835) = 0; /*0x45e18d*/
  *((unsigned char *)this + 5836) = 0; /*0x45e193*/
  *((unsigned char *)this + 5837) = 0; /*0x45e19e*/
  *((unsigned int *)this + 1460) = 1065353216; /*0x45e1a4*/
  *((unsigned int *)this + 1461) = 1065353216; /*0x45e1aa*/
  *((unsigned int *)this + 1462) = 1065353216; /*0x45e1b0*/
  *((unsigned int *)this + 1463) = 1065353216; /*0x45e1b6*/
  *((unsigned int *)this + 1464) = 1065353216; /*0x45e1bc*/
  *((unsigned char *)this + 5860) = 0; /*0x45e1c2*/
  *((unsigned char *)this + 5861) = 0; /*0x45e1c8*/
  *((unsigned char *)this + 5862) = 0; /*0x45e1ce*/
  *((unsigned int *)this + 1466) = 1148829696; /*0x45e1d4*/
  *((unsigned int *)this + 1467) = 0; /*0x45e1de*/
  *((unsigned int *)this + 1468) = -1; /*0x45e1e4*/
  *((unsigned int *)this + 1469) = -1; /*0x45e1ea*/
  *((unsigned int *)this + 1470) = 9; /*0x45e1f0*/
  *((unsigned int *)this + 1471) = -1; /*0x45e1fa*/
  *((unsigned char *)this + 5888) = 0; /*0x45e200*/
  *((unsigned char *)this + 5889) = 0; /*0x45e206*/
  *((unsigned char *)this + 5890) = 0; /*0x45e20c*/
  *((unsigned char *)this + 5891) = 0; /*0x45e212*/
  *((unsigned char *)this + 5892) = 1; /*0x45e218*/
  *((unsigned char *)this + 5893) = 0; /*0x45e21f*/
  *((unsigned char *)this + 5894) = 0; /*0x45e225*/
  *((unsigned char *)this + 5895) = 20; /*0x45e22b*/
  *((unsigned char *)this + 5896) = 0; /*0x45e232*/
  *((unsigned int *)this + 1475) = 0; /*0x45e238*/
  *((unsigned int *)this + 1476) = 64; /*0x45e23e*/
  *((unsigned char *)this + 5984) = 0; /*0x45e248*/
  *((unsigned char *)this + 5985) = 0; /*0x45e24e*/
  *((unsigned char *)this + 5986) = 0; /*0x45e254*/
  *((unsigned char *)this + 5987) = 0; /*0x45e25a*/
  *((unsigned char *)this + 5988) = 0; /*0x45e260*/
  *((unsigned char *)this + 5989) = 0; /*0x45e266*/
  *((unsigned char *)this + 5990) = 1; /*0x45e26c*/
  *((unsigned char *)this + 5991) = 0; /*0x45e273*/
  *((unsigned char *)this + 5992) = 0; /*0x45e279*/
  *((unsigned char *)this + 5993) = 0; /*0x45e284*/
  *((unsigned int *)this + 1504) = 1; /*0x45e28a*/
  *((unsigned int *)this + 1506) = 0; /*0x45e292*/
  *((unsigned int *)this + 1507) = 1; /*0x45e298*/
  *((unsigned char *)this + 6032) = 1; /*0x45e29e*/
  *((unsigned char *)this + 6033) = 0; /*0x45e2a5*/
  *((unsigned int *)this + 1505) = &vt_VectorClass_TPoint3D_int; /*0x45e2ab*/
  *((unsigned int *)this + 1506) = __2_YAPAXI_Z(0xCu); /*0x45e2ba*/
  *((unsigned char *)this + 6033) = 1; /*0x45e2c6*/
  *(unsigned int *)this = &BuildingTypeClass::`vftable'; /*0x45e2cd*/
  *((unsigned int *)this + 1) = &BuildingTypeClass::`vftable'; /*0x45e2d3*/
  *((unsigned int *)this + 2) = &BuildingTypeClass::`vftable'; /*0x45e2d9*/
  *((unsigned int *)this + 3) = &vt_BuildingTypeClass; /*0x45e2e1*/
  AbstractClass::GenerateUniqueID((char *)this + 4); /*0x45e2e8*/
  v4 = g_TriggerClassCount; /*0x45e2ed*/
  if ( g_TriggerClassCount < dword_A83C70 /*0x45e32b*/
    || (byte_A83C75 || !dword_A83C70)
    && dword_A83C7C > 0
    && (v5 = (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_A83C68 + 8))(
               &dword_A83C68,
               dword_A83C7C + dword_A83C70,
               0) == 0,
        v4 = g_TriggerClassCount,
        !v5) )
  {
    g_TriggerClassCount = v4 + 1; /*0x45e330*/
    *((unsigned int *)g_TriggerTypeCount + v4) = this; /*0x45e33a*/
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
  *((unsigned int *)this + 894) = v6; /*0x45e35c*/
  *((unsigned int *)this + 961) = 0; /*0x45e362*/
  *((unsigned int *)this + 962) = 1; /*0x45e368*/
  *((unsigned int *)this + 963) = 0; /*0x45e36e*/
  *((unsigned int *)this + 964) = 0; /*0x45e374*/
  *((unsigned int *)this + 965) = 1; /*0x45e37a*/
  *((unsigned int *)this + 966) = 0; /*0x45e380*/
  *((unsigned int *)this + 967) = 0; /*0x45e386*/
  *((unsigned int *)this + 968) = 1; /*0x45e38c*/
  *((unsigned int *)this + 969) = 0; /*0x45e392*/
  *((unsigned int *)this + 973) = 0; /*0x45e398*/
  *((unsigned int *)this + 974) = 1; /*0x45e39e*/
  *((unsigned int *)this + 975) = 0; /*0x45e3a4*/
  *((unsigned int *)this + 976) = 0; /*0x45e3aa*/
  *((unsigned int *)this + 977) = 1; /*0x45e3b0*/
  *((unsigned int *)this + 978) = 0; /*0x45e3b6*/
  v8 = (unsigned int *)((char *)this + 3932); /*0x45e3be*/
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
    *((unsigned char *)v8 - 20) = 1; /*0x45e407*/
    *((unsigned char *)v8 - 19) = 0; /*0x45e40b*/
    *((unsigned char *)v8 - 18) = 0; /*0x45e40e*/
    *((unsigned char *)v8 - 17) = 0; /*0x45e411*/
  }
  while ( v9 ); /*0x45e414*/
  *((unsigned char *)this + 3676) = 0; /*0x45e416*/
  *((unsigned char *)this + 3720) = 0; /*0x45e41c*/
  *((unsigned char *)this + 5994) = 0; /*0x45e422*/
  *((unsigned char *)this + 5908) = 0; /*0x45e428*/
  *((unsigned char *)this + 3214) = 0; /*0x45e42e*/
  *((unsigned char *)this + 5352) = 0; /*0x45e434*/
  *((unsigned char *)this + 5360) = 0; /*0x45e43a*/
  *((unsigned char *)this + 5368) = 0; /*0x45e440*/
  *((unsigned char *)this + 5376) = 0; /*0x45e446*/
  *((unsigned char *)this + 5384) = 0; /*0x45e44c*/
  v12 = (unsigned int *)((char *)this + 5512); /*0x45e452*/
  v13 = 10; /*0x45e458*/
  do /*0x45e472*/
  {
    v14 = unk_89C8D4; /*0x45e463*/
    *v12 = unk_89C8D0; /*0x45e469*/
    v12[1] = v14; /*0x45e46b*/
    v12 += 2; /*0x45e46e*/
    --v13; /*0x45e471*/
  }
  while ( v13 ); /*0x45e472*/
  v15 = (unsigned int *)((char *)this + 5592); /*0x45e474*/
  v16 = 8; /*0x45e47a*/
  do /*0x45e494*/
  {
    v17 = unk_89C8D4; /*0x45e485*/
    *v15 = unk_89C8D0; /*0x45e48b*/
    v15[1] = v17; /*0x45e48d*/
    v15 += 2; /*0x45e490*/
    --v16; /*0x45e493*/
  }
  while ( v16 ); /*0x45e494*/
  v18 = (unsigned int *)((char *)this + 5732); /*0x45e49b*/
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
  v20 = *(unsigned int **)((char *)this + 6024); /*0x45e4c6*/
  *v20 = 0; /*0x45e4d2*/
  v20[1] = 0; /*0x45e4d6*/
  v20[2] = 0; /*0x45e4d9*/
  *((unsigned char *)this + 3381) = 1; /*0x45e4dc*/
  *((unsigned char *)this + 3382) = 1; /*0x45e4e3*/
  *((unsigned char *)this + 3387) = 0; /*0x45e4ea*/
  *((unsigned char *)this + 3384) = 0; /*0x45e4f0*/
  *((unsigned char *)this + 3479) = 0; /*0x45e4f6*/
  *((unsigned char *)this + 3478) = 0; /*0x45e4fc*/
  *((unsigned char *)this + 3374) = 0; /*0x45e502*/
  return this; /*0x45e508*/

}
} // namespace gamemd
// 0x45E520
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_545E520(ObjectTypeClass * aP1)
{

  TechnoTypeClass::Construct((int)this, aP1); /*0x45e528*/
  *((unsigned int *)this + 896) = 0; /*0x45e52f*/
  *((unsigned int *)this + 1506) = 0; /*0x45e535*/
  *((unsigned int *)this + 1507) = 0; /*0x45e53b*/
  *((unsigned char *)this + 6032) = 1; /*0x45e541*/
  *((unsigned char *)this + 6033) = 0; /*0x45e548*/
  *((unsigned int *)this + 1505) = &vt_VectorClass_TPoint3D_int; /*0x45e54e*/
  *this = &vt_BuildingTypeClass; /*0x45e558*/
  *((unsigned int *)this + 1) = &vt_BuildingTypeClass; /*0x45e55e*/
  *((unsigned int *)this + 2) = &vt_BuildingTypeClass; /*0x45e565*/
  *((unsigned int *)this + 3) = &vt_BuildingTypeClass; /*0x45e56c*/
  return this; /*0x45e575*/

}
} // namespace gamemd
// 0x45E580
namespace gamemd {
AbstractClass * * BuildingTypeClass::CleanupMembers(AbstractClass * a1, AbstractClass * a2)
{

  char nextArrayIndex; // al
  int eax22; // eax
  SHPStruct *v4; // eax
  BuildingTypeClass *v6; // [esp+8h] [ebp-4h] BYREF

  nextArrayIndex = a1[99].nextArrayIndex; /*0x45e587*/
  *(unsigned int *)a1->__pad_0 = &BuildingTypeClass::`vftable'; /*0x45e58d*/
  *(unsigned int *)&a1->__pad_0[4] = &BuildingTypeClass::`vftable'; /*0x45e595*/
  *(unsigned int *)&a1->__pad_0[8] = &BuildingTypeClass::`vftable'; /*0x45e59c*/
  *(unsigned int *)&a1->__pad_0[12] = &vt_BuildingTypeClass; /*0x45e5a3*/
  if ( nextArrayIndex && a1[99].abstractFlags ) /*0x45e5ac*/
  {
    __3_YAXPAX_Z((void *)a1[99].abstractFlags); /*0x45e5b7*/
    a1[99].abstractFlags = 0; /*0x45e5bf*/
    LOBYTE(a1[99].nextArrayIndex) = 0; /*0x45e5c5*/
  }
  if ( a1[150].__pad_0[4] && *(unsigned int *)a1[150].__pad_0 ) /*0x45e5d3*/
  {
    __3_YAXPAX_Z(*(void **)a1[150].__pad_0); /*0x45e5de*/
    *(unsigned int *)a1[150].__pad_0 = 0; /*0x45e5e6*/
    a1[150].__pad_0[4] = 0; /*0x45e5ec*/
  }
  if ( LOBYTE(a1[148].nextArrayIndex) && a1[148].abstractFlags ) /*0x45e5fa*/
  {
    __3_YAXPAX_Z((void *)a1[148].abstractFlags); /*0x45e605*/
    a1[148].abstractFlags = 0; /*0x45e60d*/
    LOBYTE(a1[148].nextArrayIndex) = 0; /*0x45e613*/
  }
  if ( LOBYTE(a1[148].NeedsSaveOrLink) && a1[148].referenceCount ) /*0x45e621*/
  {
    __3_YAXPAX_Z((void *)a1[148].referenceCount); /*0x45e62c*/
    a1[148].referenceCount = 0; /*0x45e634*/
    LOBYTE(a1[148].NeedsSaveOrLink) = 0; /*0x45e63a*/
  }
  if ( a1[149].__pad_0[4] && *(unsigned int *)a1[149].__pad_0 ) /*0x45e648*/
  {
    __3_YAXPAX_Z(*(void **)a1[149].__pad_0); /*0x45e653*/
    *(unsigned int *)a1[149].__pad_0 = 0; /*0x45e65b*/
    a1[149].__pad_0[4] = 0; /*0x45e661*/
  }
  if ( a1[149].__pad_0[12] && *(unsigned int *)&a1[149].__pad_0[8] ) /*0x45e66f*/
  {
    __3_YAXPAX_Z(*(void **)&a1[149].__pad_0[8]); /*0x45e67a*/
    *(unsigned int *)&a1[149].__pad_0[8] = 0; /*0x45e682*/
    a1[149].__pad_0[12] = 0; /*0x45e688*/
  }
  if ( LOBYTE(a1[149].abstractFlags) && a1[149].uniqueId ) /*0x45e696*/
  {
    __3_YAXPAX_Z((void *)a1[149].uniqueId); /*0x45e6a1*/
    a1[149].uniqueId = 0; /*0x45e6a9*/
    LOBYTE(a1[149].abstractFlags) = 0; /*0x45e6af*/
  }
  LOBYTE(a2) = 1; /*0x45e6b5*/
  AbstractClass::AnnounceExpiredPointer(a1, a2); /*0x45e6b9*/
  v6 = (BuildingTypeClass *)a1; /*0x45e6ce*/
  eax22 = ((int (*)(DynamicVector **, BuildingTypeClass **))dword_A83C68->field_10)(&dword_A83C68, &v6); /*0x45e6d2*/
  if ( eax22 != -1 && eax22 < (int)g_TriggerClassCount ) /*0x45e6e2*/
  {
    for ( g_TriggerClassCount = (BuildingTypeClass *)((char *)g_TriggerClassCount - 1); /*0x45e6ed*/
          eax22 < (int)g_TriggerClassCount;
          *((unsigned int *)g_TriggerTypeCount + eax22 - 1) = *((unsigned int *)g_TriggerTypeCount + eax22) )
    {
      ++eax22; /*0x45e6f5*/
    }
  }
  v4 = *(SHPStruct **)&a1[167].__pad_0[12]; /*0x45e707*/
  *(unsigned int *)&a1[167].__pad_0[8] = &vt_VectorClass_TPoint3D_int; /*0x45e70d*/
  if ( v4 && BYTE1(a1[167].abstractFlags) ) /*0x45e71b*/
  {
    __3_YAXPAX_Z(v4); /*0x45e724*/
    *(unsigned int *)&a1[167].__pad_0[12] = 0; /*0x45e72c*/
  }
  BYTE1(a1[167].abstractFlags) = 0; /*0x45e734*/
  a1[167].uniqueId = 0; /*0x45e73a*/
  return TechnoTypeClass::DTOR((int)a1); /*0x45e745*/

}
} // namespace gamemd
// 0x45E970
namespace gamemd {
AbstractClass * * BuildingTypeClass::LoadRepairAnimations()
{

  ObjectTypeClass *v1; // ecx
  ObjectTypeClass *v2; // edi
  int v3; // ebp
  ObjectTypeClass *v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  BuildingTypeClass *v8; // esi
  int v9; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v2 = v1; /*0x45e97a*/
  ProcessDataCCFileClass(); /*0x45e97c*/
  unk_89DDC4 = SearchMIXFile(aPoweroffShp, 0); /*0x45e994*/
  aP2 = SearchMIXFile(aWrenchShp, 0); /*0x45e99e*/
  v3 = 0; /*0x45e9aa*/
  v9 = 0; /*0x45e9ae*/
  if ( (int)g_TriggerClassCount > 0 ) /*0x45e9b2*/
  {
    do /*0x45eb42*/
    {
      v4 = (ObjectTypeClass *)*((unsigned int *)g_TriggerTypeCount + v3); /*0x45e9c1*/
      if ( v9 <= SHIBYTE(v4[8].VoxelCaches[8]) ) /*0x45e9cd*/
        v9 = SHIBYTE(v4[8].VoxelCaches[8]); /*0x45e9cf*/
      if ( v4->Theater ) /*0x45e9d3*/
      {
        if ( v4[9].__pad_24[8] ) /*0x45e9df*/
        {
          if ( v4->Image ) /*0x45ea23*/
          {
            __3_YAXPAX_Z(v4->Image); /*0x45ea2e*/
            v4->Image = 0; /*0x45ea36*/
            v4->ImageAllocated = 0; /*0x45ea3c*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, v4->ImageFile, (const char *)&off_7E1BC6 + 112 * (unsigned int)v2); /*0x45ea08*/
          v4->Image = (void *)SearchMIXFile(Buffer, 0); /*0x45ea1b*/
        }
        if ( v4[9].__pad_24[9] ) /*0x45ea42*/
        {
          if ( v4[5].ChargerBarrels[6] ) /*0x45ea86*/
          {
            __3_YAXPAX_Z((void *)v4[5].ChargerBarrels[6]); /*0x45ea91*/
            v4[5].ChargerBarrels[6] = 0; /*0x45ea99*/
            LOBYTE(v4[5].ChargerBarrels[7]) = 0; /*0x45ea9f*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, &v4[5].__pad_14D[43], (const char *)&off_7E1BC6 + 112 * (unsigned int)v2); /*0x45ea6b*/
          v4[5].ChargerBarrels[6] = SearchMIXFile(Buffer, 0); /*0x45ea7e*/
        }
        v5 = v4[5].ChargerBarrels[6]; /*0x45eaa5*/
        if ( v5 ) /*0x45eaad*/
        {
          v6 = *(__int16 *)(v5 + 6); /*0x45eab3*/
          v7 = 1; /*0x45eab9*/
          if ( v6 ) /*0x45eabe*/
            v7 = 75 / v6; /*0x45eac6*/
          *(unsigned int *)&v4[5].AlphaImageFile[13] = 0; /*0x45eac8*/
          *(unsigned int *)&v4[5].AlphaImageFile[17] = v6; /*0x45eace*/
          *(unsigned int *)&v4[5].AlphaImageFile[21] = v7; /*0x45ead4*/
        }
      }
      else if ( v4->NewTheater ) /*0x45eadc*/
      {
        if ( v4[9].__pad_24[8] && v4->Image ) /*0x45eaec*/
        {
          __3_YAXPAX_Z(v4->Image); /*0x45eaf7*/
          v4->Image = 0; /*0x45eaff*/
          v4->ImageAllocated = 0; /*0x45eb05*/
        }
        if ( v4[9].__pad_24[9] && v4[5].ChargerBarrels[6] ) /*0x45eb13*/
        {
          __3_YAXPAX_Z((void *)v4[5].ChargerBarrels[6]); /*0x45eb1e*/
          v4[5].ChargerBarrels[6] = 0; /*0x45eb26*/
          LOBYTE(v4[5].ChargerBarrels[7]) = 0; /*0x45eb2c*/
        }
        BuildingTypeClass::LoadAnimations((int)v4, v2); /*0x45eb35*/
      }
      ++v3; /*0x45eb3f*/
    }
    while ( v3 < (int)g_TriggerClassCount ); /*0x45eb42*/
    if ( v9 ) /*0x45eb4c*/
    {
      if ( dword_89DDC0 ) /*0x45eb56*/
        (*(void (**)(unsigned int *, int))*dword_89DDC0)(dword_89DDC0, 1); /*0x45eb5c*/
      v8 = (BuildingTypeClass *)__2_YAPAXI_Z(0x20u); /*0x45eb65*/
      if ( v8 ) /*0x45eb6c*/
      {
        *(unsigned int *)&v8->vtable0[12] = 0; /*0x45eb72*/
        *(unsigned int *)v8->vtable0 = &XSurface_Vtable; /*0x45eb78*/
        *(unsigned int *)&v8->vtable0[4] = v9 + 16; /*0x45eb80*/
        *(unsigned int *)&v8->vtable0[8] = v9 + 16; /*0x45eb8b*/
        v8->uniqueId = 1; /*0x45eb8e*/
        Buffer::Init(&v8->abstractFlags, 0, (AbstractClass *)((v9 + 16) * (v9 + 16))); /*0x45eb95*/
        *(unsigned int *)v8->vtable0 = &BSurface_Vtable; /*0x45eb9a*/
        dword_89DDC0 = v8->vtable0; /*0x45eba0*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x45ebb1*/
      }
    }
  }

}
} // namespace gamemd
// 0x45F230
namespace gamemd {
void* BuildingTypeClass::LoadAnimations(ObjectTypeClass * aP1)
{

  int v3; // eax
  int v4; // ecx
  int v5; // esi
  unsigned char *v6; // esi
  void *FileSHP; // eax
  unsigned char *v8; // esi
  void *v9; // eax
  int v10; // eax
  unsigned char *v11; // esi
  void *v12; // eax
  unsigned char *v13; // esi
  void *v14; // eax
  unsigned char *v15; // esi
  void *v16; // eax
  int v17; // eax
  unsigned char *v18; // esi
  void *v19; // eax
  const char *v20; // edi
  int v21; // eax
  int result; // eax
  int v23; // [esp+10h] [ebp-158h]
  INIClass Filename; // [esp+14h] [ebp-154h] BYREF
  char Ext[16]; // [esp+54h] [ebp-114h] BYREF
  char Source[260]; // [esp+64h] [ebp-104h] BYREF

  if ( !*((unsigned char *)this + 5985) && strlen((const char *)((char *)this + 3676)) ) /*0x45f257*/
  {
    _makepath(Source, 0, 0, (const char *)((char *)this + 3676), ::Ext); /*0x45f26f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f282*/
    v3 = SearchMIXFile(Source, 0); /*0x45f28d*/
    if ( !v3 ) /*0x45f294*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f29a*/
      v3 = SearchMIXFile(Source, 0); /*0x45f2a5*/
    }
    *((unsigned int *)this + 896) = v3; /*0x45f2ac*/
    if ( v3 ) /*0x45f2b2*/
    {
      v4 = 1; /*0x45f2bb*/
      v5 = *(int16_t *)(v3 + 6) / 2; /*0x45f2c8*/
      v23 = v5; /*0x45f2cc*/
      if ( *((unsigned char *)this + 5815) ) /*0x45f2c2*/
      {
        v5 = *((unsigned int *)this + 1470) + 1; /*0x45f2d8*/
        v23 = v5; /*0x45f2d9*/
      }
      if ( v5 > 0 ) /*0x45f2df*/
        v4 = Math::RoundToInt(*(double *)(*(unsigned int *)&g_abs_87F8E4 + 5400) * 900.0 / (double)v23); /*0x45f2fc*/
      *((unsigned int *)this + 961) = 0; /*0x45f2fe*/
      *((unsigned int *)this + 962) = v5; /*0x45f304*/
      *((unsigned int *)this + 963) = v4; /*0x45f30a*/
    }
  }
  INIClass::GetString( /*0x45f32d*/
    (uint8_t ***)&g_abs_87F8E4,
    (INIClass *)((char *)this + 504),
    aDeployinganim,
    (INIClass *)&g_abs_87F8E4,
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f336*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f357*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f36a*/
    v6 = (unsigned char *)((char *)this + 5352); /*0x45f375*/
    if ( *((unsigned char *)this + 5352) && *((unsigned int *)this + 1337) ) /*0x45f37f*/
    {
      RA2_OPDEL(*(void **)((char *)this + 5348)); /*0x45f38a*/
      *((unsigned int *)this + 1337) = 0; /*0x45f392*/
      *v6 = 0; /*0x45f398*/
    }
    FileSHP = LoadFileSHP(Source, (bool *)((char *)this + 5352)); /*0x45f3a0*/
    *((unsigned int *)this + 1337) = FileSHP; /*0x45f3a7*/
    if ( !FileSHP ) /*0x45f3ad*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f3b3*/
      if ( *v6 && *((unsigned int *)this + 1337) ) /*0x45f3bc*/
      {
        RA2_OPDEL(*(void **)((char *)this + 5348)); /*0x45f3c7*/
        *((unsigned int *)this + 1337) = 0; /*0x45f3cf*/
        *v6 = 0; /*0x45f3d5*/
      }
      *((unsigned int *)this + 1337) = LoadFileSHP(Source, (bool *)((char *)this + 5352)); /*0x45f3e2*/
    }
  }
  INIClass::GetString( /*0x45f405*/
    (uint8_t ***)&g_abs_87F8E4,
    (INIClass *)((char *)this + 504),
    aRoofdeployinga,
    (INIClass *)&g_abs_87F8E4,
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f40e*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f42f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f442*/
    v8 = (unsigned char *)((char *)this + 5376); /*0x45f44d*/
    if ( *((unsigned char *)this + 5376) && *((unsigned int *)this + 1343) ) /*0x45f457*/
    {
      RA2_OPDEL(*(void **)((char *)this + 5372)); /*0x45f462*/
      *((unsigned int *)this + 1343) = 0; /*0x45f46a*/
      *v8 = 0; /*0x45f470*/
    }
    v9 = LoadFileSHP(Source, (bool *)((char *)this + 5376)); /*0x45f478*/
    *((unsigned int *)this + 1343) = v9; /*0x45f47f*/
    if ( !v9 ) /*0x45f485*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f48b*/
      if ( *v8 && *((unsigned int *)this + 1343) ) /*0x45f494*/
      {
        RA2_OPDEL(*(void **)((char *)this + 5372)); /*0x45f49f*/
        *((unsigned int *)this + 1343) = 0; /*0x45f4a7*/
        *v8 = 0; /*0x45f4ad*/
      }
      *((unsigned int *)this + 1343) = LoadFileSHP(Source, (bool *)((char *)this + 5352)); /*0x45f4be*/
    }
  }
  INIClass::GetString( /*0x45f4e1*/
    (uint8_t ***)&g_abs_87F8E4,
    (INIClass *)((char *)this + 504),
    (uint8_t *)&g_INI_Key_Image.unknown50,
    (INIClass *)&g_abs_87F8E4,
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f4ea*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f507*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f51a*/
    v10 = SearchMIXFile(Source, 0); /*0x45f525*/
    *((unsigned int *)this + 1347) = v10; /*0x45f52c*/
    if ( !v10 ) /*0x45f532*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f538*/
      *((unsigned int *)this + 1347) = SearchMIXFile(Source, 0); /*0x45f548*/
    }
  }
  INIClass::GetString( /*0x45f565*/
    (uint8_t ***)&g_abs_87F8E4,
    (INIClass *)((char *)this + 504),
    (uint8_t *)&g_INI_Key_Image.ownsFile,
    (INIClass *)&g_abs_87F8E4,
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f56e*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f58f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f5a2*/
    v11 = (unsigned char *)((char *)this + 5360); /*0x45f5ad*/
    if ( *((unsigned char *)this + 5360) && *((unsigned int *)this + 1339) ) /*0x45f5b7*/
    {
      RA2_OPDEL(*(void **)((char *)this + 5356)); /*0x45f5c2*/
      *((unsigned int *)this + 1339) = 0; /*0x45f5ca*/
      *v11 = 0; /*0x45f5d0*/
    }
    v12 = LoadFileSHP(Source, (bool *)((char *)this + 5360)); /*0x45f5d8*/
    *((unsigned int *)this + 1339) = v12; /*0x45f5df*/
    if ( !v12 ) /*0x45f5e5*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f5eb*/
      if ( *v11 && *((unsigned int *)this + 1339) ) /*0x45f5f4*/
      {
        RA2_OPDEL(*(void **)((char *)this + 5356)); /*0x45f5ff*/
        *((unsigned int *)this + 1339) = 0; /*0x45f607*/
        *v11 = 0; /*0x45f60d*/
      }
      *((unsigned int *)this + 1339) = SearchMIXFile(Source, 0); /*0x45f61a*/
    }
  }
  v13 = (unsigned char *)((char *)this + 5368); /*0x45f626*/
  if ( *((unsigned char *)this + 5368) && *((unsigned int *)this + 1341) ) /*0x45f630*/
  {
    RA2_OPDEL(*(void **)((char *)this + 5364)); /*0x45f63b*/
    *((unsigned int *)this + 1341) = 0; /*0x45f643*/
    *v13 = 0; /*0x45f649*/
  }
  INIClass::GetString( /*0x45f668*/
    (uint8_t ***)&g_abs_87F8E4,
    (INIClass *)((char *)this + 504),
    (uint8_t *)&g_INI_Key_Image.unknown38,
    (INIClass *)&g_abs_87F8E4,
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f671*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f68e*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f6a1*/
    v14 = LoadFileSHP(Source, (bool *)((char *)this + 5368)); /*0x45f6ac*/
    *((unsigned int *)this + 1341) = v14; /*0x45f6b3*/
    if ( !v14 ) /*0x45f6b9*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f6bf*/
      if ( *v13 && *((unsigned int *)this + 1341) ) /*0x45f6c8*/
      {
        RA2_OPDEL(*(void **)((char *)this + 5364)); /*0x45f6d3*/
        *((unsigned int *)this + 1341) = 0; /*0x45f6db*/
        *v13 = 0; /*0x45f6e1*/
      }
      *((unsigned int *)this + 1341) = SearchMIXFile(Source, 0); /*0x45f6ee*/
    }
  }
  INIClass::GetString( /*0x45f711*/
    (uint8_t ***)&g_abs_87F8E4,
    (INIClass *)((char *)this + 504),
    (uint8_t *)&g_INI_Key_Image.__pad_20[4],
    (INIClass *)&g_abs_87F8E4,
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f71a*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f73b*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f74e*/
    v15 = (unsigned char *)((char *)this + 5384); /*0x45f759*/
    if ( *((unsigned char *)this + 5384) && *((unsigned int *)this + 1345) ) /*0x45f763*/
    {
      RA2_OPDEL(*(void **)((char *)this + 5380)); /*0x45f76e*/
      *((unsigned int *)this + 1345) = 0; /*0x45f776*/
      *v15 = 0; /*0x45f77c*/
    }
    v16 = LoadFileSHP(Source, (bool *)((char *)this + 5384)); /*0x45f784*/
    *((unsigned int *)this + 1345) = v16; /*0x45f78b*/
    if ( !v16 ) /*0x45f791*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f797*/
      if ( *v15 && *((unsigned int *)this + 1345) ) /*0x45f7a0*/
      {
        RA2_OPDEL(*(void **)((char *)this + 5380)); /*0x45f7ab*/
        *((unsigned int *)this + 1345) = 0; /*0x45f7b3*/
        *v15 = 0; /*0x45f7b9*/
      }
      *((unsigned int *)this + 1345) = SearchMIXFile(Source, 0); /*0x45f7c6*/
    }
  }
  INIClass::GetString( /*0x45f7e9*/
    (uint8_t ***)&g_abs_87F8E4,
    (INIClass *)((char *)this + 504),
    (uint8_t *)&g_INI_Key_Image.sectionHead[1],
    (INIClass *)&g_abs_87F8E4,
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f7f2*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f80f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f822*/
    v17 = SearchMIXFile(Source, 0); /*0x45f82d*/
    *((unsigned int *)this + 1348) = v17; /*0x45f834*/
    if ( !v17 ) /*0x45f83a*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f840*/
      *((unsigned int *)this + 1348) = SearchMIXFile(Source, 0); /*0x45f850*/
    }
  }
  INIClass::GetString( /*0x45f86d*/
    (uint8_t ***)&g_abs_87F8E4,
    (INIClass *)((char *)this + 504),
    (uint8_t *)&g_INI_Key_Image.headNode[1],
    (INIClass *)&g_abs_87F8E4,
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f876*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f897*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f8aa*/
    v18 = (unsigned char *)((char *)this + 5404); /*0x45f8b5*/
    if ( *((unsigned char *)this + 5404) && *((unsigned int *)this + 1350) ) /*0x45f8bf*/
    {
      RA2_OPDEL(*(void **)((char *)this + 5400)); /*0x45f8ca*/
      *((unsigned int *)this + 1350) = 0; /*0x45f8d2*/
      *v18 = 0; /*0x45f8d8*/
    }
    v19 = LoadFileSHP(Source, (bool *)((char *)this + 5404)); /*0x45f8e0*/
    *((unsigned int *)this + 1350) = v19; /*0x45f8e7*/
    if ( !v19 ) /*0x45f8ed*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f8f3*/
      if ( *v18 && *((unsigned int *)this + 1350) ) /*0x45f8fc*/
      {
        RA2_OPDEL(*(void **)((char *)this + 5400)); /*0x45f907*/
        *((unsigned int *)this + 1350) = 0; /*0x45f90f*/
        *v18 = 0; /*0x45f915*/
      }
      *((unsigned int *)this + 1350) = SearchMIXFile(Source, 0); /*0x45f922*/
    }
  }
  INIClass::GetString( /*0x45f945*/
    (uint8_t ***)&g_abs_87F8E4,
    (INIClass *)((char *)this + 504),
    (uint8_t *)&g_INI_Key_Image,
    (INIClass *)&g_abs_87F8E4,
    &Filename,
    64);
  if ( !*((unsigned char *)this + 556) || aP1 == (ObjectTypeClass *)-1 ) /*0x45f95c*/
    v20 = ::Ext; /*0x45f97a*/
  else
    v20 = (const char *)(&off_7E1BC6 + 28 * (unsigned int)aP1); /*0x45f96e*/
  strcpy(Ext, v20); /*0x45f993*/
  if ( strlen(Filename.__pad_0) ) /*0x45f9a2*/
    _makepath(Source, 0, 0, Filename.__pad_0, Ext); /*0x45f9bd*/
  else
    _makepath(Source, 0, 0, (const char *)((char *)this + 504), Ext); /*0x45f9cd*/
  TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f9e0*/
  strncpy((char *)((char *)this + 5994), Source, 0x13u); /*0x45f9f3*/
  if ( !*((unsigned char *)this + 5984) ) /*0x45f9f8*/
  {
    v21 = SearchMIXFile(Source, 0); /*0x45fa0b*/
    *((unsigned int *)this + 41) = v21; /*0x45fa12*/
    if ( !v21 ) /*0x45fa18*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa1e*/
      strncpy((char *)((char *)this + 5994), Source, 0x13u); /*0x45fa2b*/
      *((unsigned int *)this + 41) = SearchMIXFile(Source, 0); /*0x45fa3e*/
    }
    if ( !*((unsigned int *)this + 41) ) /*0x45fa44*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa50*/
      strncpy((char *)((char *)this + 5994), Source, 0x13u); /*0x45fa5d*/
      *((unsigned int *)this + 41) = SearchMIXFile(Source, 0); /*0x45fa70*/
    }
  }
  BuildingTypeClass::LoadVoxel(this); /*0x45fa78*/
  return result; /*0x45fa7d*/

}
} // namespace gamemd
// 0x45FA90
namespace gamemd {
void BuildingTypeClass::LoadVoxel()
{

  char *v2; // eax
  void *v3; // esi
  unsigned int *v4; // eax
  unsigned int *File; // eax
  void *v6; // esi
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  int Info; // eax
  char *v10; // eax
  char *v11; // eax
  unsigned char *v12; // eax
  void *v13; // esi
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  void *v16; // esi
  unsigned int *v17; // eax
  unsigned int *v18; // eax
  int v19; // eax
  char *v20; // [esp-Ch] [ebp-2D8h]
  char *v21; // [esp-Ch] [ebp-2D8h]
  unsigned int v22[22]; // [esp+8h] [ebp-2C4h] BYREF
  unsigned char v23[12]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  unsigned int v25[22]; // [esp+74h] [ebp-258h] BYREF
  unsigned char v26[12]; // [esp+CCh] [ebp-200h] BYREF
  int v27; // [esp+D8h] [ebp-1F4h]
  unsigned int v28[22]; // [esp+E0h] [ebp-1ECh] BYREF
  unsigned char v29[12]; // [esp+138h] [ebp-194h] BYREF
  int v30; // [esp+144h] [ebp-188h]
  char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
  char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
  char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
  char String[252]; // [esp+1D0h] [ebp-FCh] BYREF

  if ( *((unsigned char *)this + 5829) || *((unsigned char *)this + 5830) ) /*0x45faa4*/
  {
    strcpy(Destination, (const char *)((char *)this + 4528)); /*0x45fadf*/
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45faf3*/
    v20 = _strupr(off_8194A8); /*0x45fb05*/
    v2 = _strupr(String); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      CCFileClass::Construct(v25, Buffer); /*0x45fb3b*/
      if ( CCFileClass::Open(v25, 0) ) /*0x45fb48*/
      {
        v3 = *(void **)((char *)this + 184); /*0x45fb55*/
        if ( v3 ) /*0x45fb5d*/
        {
          WaveClass::Destroy(*((unsigned int *)this + 46)); /*0x45fb61*/
          RA2_OPDEL(v3); /*0x45fb67*/
        }
        v4 = RA2_OPNEW(0x1Cu); /*0x45fb71*/
        if ( v4 ) /*0x45fb7b*/
          File = File::LoadFileVXL(v4, (int)v25, 0); /*0x45fb85*/
        else
          File = 0; /*0x45fb8c*/
        *((unsigned int *)this + 46) = File; /*0x45fb8e*/
        _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fbab*/
        CCFileClass::Construct(v22, Buffer); /*0x45fbbf*/
        v6 = *(void **)((char *)this + 188); /*0x45fbc4*/
        if ( v6 ) /*0x45fbcc*/
        {
          String::Release(*(void ***)((char *)this + 188)); /*0x45fbd0*/
          RA2_OPDEL(v6); /*0x45fbd6*/
        }
        v7 = RA2_OPNEW(0x10u); /*0x45fbe0*/
        if ( v7 ) /*0x45fbea*/
          v8 = File::LoadFileHVA(v7, (int)v22); /*0x45fbf3*/
        else
          v8 = 0; /*0x45fbfa*/
        *((unsigned int *)this + 47) = v8; /*0x45fbfe*/
        if ( v8 && !*(unsigned char *)v8 ) /*0x45fc06*/
        {
          Info = VoxelSection::GetInfo(*(unsigned int **)((char *)this + 184), 0, 0); /*0x45fc12*/
          Matrix::Scale(*(unsigned int **)((char *)this + 188), *(float *)(Info + 12)); /*0x45fc21*/
        }
        v22[0] = &vt_CCFileClass; /*0x45fc2a*/
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
      v25[0] = &vt_CCFileClass; /*0x45fc8c*/
      v27 = 0; /*0x45fc94*/
      Vector::Clear((int)v26); /*0x45fc9b*/
      v25[0] = &off_7E1668; /*0x45fca4*/
      BufferIOFileClass::Dtor(v25); /*0x45fca8*/
    }
    else if ( *((unsigned char *)this + 5830) ) /*0x45fcaf*/
    {
      strncpy(Destination, (const char *)((char *)this + 5908), 0x80u); /*0x45fccb*/
    }
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45fcea*/
    CCFileClass::Construct(v28, Buffer); /*0x45fd01*/
    if ( CCFileClass::Open(v28, 0) ) /*0x45fd0e*/
    {
      v13 = *(void **)((char *)this + 192); /*0x45fd1b*/
      if ( v13 ) /*0x45fd23*/
      {
        WaveClass::Destroy(*((unsigned int *)this + 48)); /*0x45fd27*/
        RA2_OPDEL(v13); /*0x45fd2d*/
      }
      v14 = RA2_OPNEW(0x1Cu); /*0x45fd37*/
      if ( v14 ) /*0x45fd41*/
        v15 = File::LoadFileVXL(v14, (int)v28, 0); /*0x45fd4e*/
      else
        v15 = 0; /*0x45fd55*/
      *((unsigned int *)this + 48) = v15; /*0x45fd63*/
      _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fd74*/
      CCFileClass::Construct(v22, Buffer); /*0x45fd88*/
      v16 = *(void **)((char *)this + 196); /*0x45fd8d*/
      if ( v16 ) /*0x45fd95*/
      {
        String::Release(*(void ***)((char *)this + 196)); /*0x45fd99*/
        RA2_OPDEL(v16); /*0x45fd9f*/
      }
      v17 = RA2_OPNEW(0x10u); /*0x45fda9*/
      if ( v17 ) /*0x45fdb3*/
        v18 = File::LoadFileHVA(v17, (int)v22); /*0x45fdbc*/
      else
        v18 = 0; /*0x45fdc3*/
      *((unsigned int *)this + 49) = v18; /*0x45fdc7*/
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(unsigned char *)v18 ) /*0x45fdcf*/
        {
          v19 = VoxelSection::GetInfo(*(unsigned int **)((char *)this + 192), 0, 0); /*0x45fddb*/
          Matrix::Scale(*(unsigned int **)((char *)this + 196), *(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      v22[0] = &vt_CCFileClass; /*0x45fdf3*/
      v24 = 0; /*0x45fdfb*/
      Vector::Clear((int)v23); /*0x45fdff*/
      v22[0] = &off_7E1668; /*0x45fe08*/
      BufferIOFileClass::Dtor(v22); /*0x45fe0c*/
    }
    v28[0] = &vt_CCFileClass; /*0x45fe18*/
    v30 = 0; /*0x45fe23*/
    Vector::Clear((int)v29); /*0x45fe2a*/
    v28[0] = &off_7E1668; /*0x45fe36*/
    BufferIOFileClass::Dtor(v28); /*0x45fe3d*/
  }

}
} // namespace gamemd
// 0x464B30
namespace gamemd {
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
  Checksummer::Add_double(*((unsigned int *)this + 906), *((unsigned int *)this + 907)); /*0x464b4e*/
  Power::TimerProcess(*((unsigned int *)this + 908)); /*0x464b5c*/
  Power::TimerProcess(*((unsigned int *)this + 909)); /*0x464b6a*/
  Power::TimerProcess(*((unsigned int *)this + 910)); /*0x464b78*/
  Power::TimerProcess(*((unsigned int *)this + 911)); /*0x464b86*/
  Power::TimerProcess(*((unsigned int *)this + 912)); /*0x464b94*/
  Checksum::AddString((unsigned int *)v54, (uint8_t *)this + 3676); /*0x464ba2*/
  Checksum::AddString((unsigned int *)v54, (uint8_t *)this + 3720); /*0x464bb0*/
  Power::TimerProcess(*((unsigned int *)this + 941)); /*0x464bbe*/
  Power::TimerProcess(*((unsigned int *)this + 942)); /*0x464bcc*/
  Power::TimerProcess(*((unsigned int *)this + 952)); /*0x464bda*/
  Power::TimerProcess(*((unsigned int *)this + 953)); /*0x464be8*/
  Power::TimerProcess(*((unsigned int *)this + 954)); /*0x464bf6*/
  Power::TimerProcess(*((unsigned int *)this + 955)); /*0x464c04*/
  Power::TimerProcess(*((unsigned int *)this + 956)); /*0x464c12*/
  Power::TimerProcess(*((unsigned int *)this + 957)); /*0x464c20*/
  Power::TimerProcess(*((unsigned int *)this + 958)); /*0x464c2e*/
  Power::TimerProcess(*((unsigned int *)this + 959)); /*0x464c3c*/
  Power::TimerProcess(*((unsigned int *)this + 960)); /*0x464c4a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)this + 3844, 72); /*0x464c5a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)this + 3916, 1428); /*0x464c6d*/
  Power::TimerProcess(*((unsigned int *)this + 1336)); /*0x464c7b*/
  v2 = Power::TimerProcess(*((unsigned int *)this + 1349)); /*0x464c89*/
  IDA_LOBYTE(v2) = *((unsigned char *)this + 5454); /*0x464c8e*/
  Power::FlagProcess(v54, v2); /*0x464c97*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 5453); /*0x464c9c*/
  Power::FlagProcess(v54, v3); /*0x464ca5*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 5452); /*0x464caa*/
  v5 = Power::FlagProcess(v54, v4); /*0x464cb3*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 5451); /*0x464cb8*/
  Power::FlagProcess(v54, v5); /*0x464cc1*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 5455); /*0x464cc6*/
  Power::FlagProcess(v54, v6); /*0x464ccf*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 5456); /*0x464cd4*/
  v8 = Power::FlagProcess(v54, v7); /*0x464cdd*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 5458); /*0x464ce2*/
  Power::FlagProcess(v54, v8); /*0x464ceb*/
  IDA_LOBYTE(v9) = *((unsigned char *)this + 5488); /*0x464cf0*/
  Power::FlagProcess(v54, v9); /*0x464cf9*/
  IDA_LOBYTE(v10) = *((unsigned char *)this + 5489); /*0x464cfe*/
  v11 = Power::FlagProcess(v54, v10); /*0x464d07*/
  IDA_LOBYTE(v11) = *((unsigned char *)this + 5490); /*0x464d0c*/
  Power::FlagProcess(v54, v11); /*0x464d15*/
  IDA_LOBYTE(v12) = *((unsigned char *)this + 5491); /*0x464d1a*/
  Power::FlagProcess(v54, v12); /*0x464d23*/
  IDA_LOBYTE(v13) = *((unsigned char *)this + 5497); /*0x464d28*/
  v14 = Power::FlagProcess(v54, v13); /*0x464d31*/
  IDA_LOBYTE(v14) = *((unsigned char *)this + 5796); /*0x464d36*/
  Power::FlagProcess(v54, v14); /*0x464d3f*/
  IDA_LOBYTE(v15) = *((unsigned char *)this + 5797); /*0x464d44*/
  Power::FlagProcess(v54, v15); /*0x464d4d*/
  IDA_LOBYTE(v16) = *((unsigned char *)this + 5798); /*0x464d52*/
  v17 = Power::FlagProcess(v54, v16); /*0x464d5b*/
  IDA_LOBYTE(v17) = *((unsigned char *)this + 5799); /*0x464d60*/
  Power::FlagProcess(v54, v17); /*0x464d69*/
  Power::TimerProcess(*((unsigned int *)this + 1467)); /*0x464d77*/
  IDA_LOBYTE(v18) = *((unsigned char *)this + 5800); /*0x464d7c*/
  v19 = Power::FlagProcess(v54, v18); /*0x464d85*/
  IDA_LOBYTE(v19) = *((unsigned char *)this + 5801); /*0x464d8a*/
  Power::FlagProcess(v54, v19); /*0x464d93*/
  IDA_LOBYTE(v20) = *((unsigned char *)this + 5802); /*0x464d98*/
  Power::FlagProcess(v54, v20); /*0x464da1*/
  IDA_LOBYTE(v21) = *((unsigned char *)this + 5804); /*0x464da6*/
  v22 = Power::FlagProcess(v54, v21); /*0x464daf*/
  IDA_LOBYTE(v22) = *((unsigned char *)this + 5805); /*0x464db4*/
  Power::FlagProcess(v54, v22); /*0x464dbd*/
  IDA_LOBYTE(v23) = *((unsigned char *)this + 5806); /*0x464dc2*/
  Power::FlagProcess(v54, v23); /*0x464dcb*/
  IDA_LOBYTE(v24) = *((unsigned char *)this + 5807); /*0x464dd0*/
  v25 = Power::FlagProcess(v54, v24); /*0x464dd9*/
  IDA_LOBYTE(v25) = *((unsigned char *)this + 5808); /*0x464dde*/
  Power::FlagProcess(v54, v25); /*0x464de7*/
  IDA_LOBYTE(v26) = *((unsigned char *)this + 5810); /*0x464dec*/
  Power::FlagProcess(v54, v26); /*0x464df5*/
  IDA_LOBYTE(v27) = *((unsigned char *)this + 5811); /*0x464dfa*/
  v28 = Power::FlagProcess(v54, v27); /*0x464e03*/
  IDA_LOBYTE(v28) = *((unsigned char *)this + 5812); /*0x464e08*/
  Power::FlagProcess(v54, v28); /*0x464e11*/
  IDA_LOBYTE(v29) = *((unsigned char *)this + 5814); /*0x464e16*/
  Power::FlagProcess(v54, v29); /*0x464e1f*/
  IDA_LOBYTE(v30) = *((unsigned char *)this + 5815); /*0x464e24*/
  v31 = Power::FlagProcess(v54, v30); /*0x464e2d*/
  IDA_LOBYTE(v31) = *((unsigned char *)this + 5816); /*0x464e32*/
  Power::FlagProcess(v54, v31); /*0x464e3b*/
  IDA_LOBYTE(v32) = *((unsigned char *)this + 5817); /*0x464e40*/
  Power::FlagProcess(v54, v32); /*0x464e49*/
  IDA_LOBYTE(v33) = *((unsigned char *)this + 5818); /*0x464e4e*/
  v34 = Power::FlagProcess(v54, v33); /*0x464e57*/
  IDA_LOBYTE(v34) = *((unsigned char *)this + 5819); /*0x464e5c*/
  Power::FlagProcess(v54, v34); /*0x464e65*/
  IDA_LOBYTE(v35) = *((unsigned char *)this + 5821); /*0x464e6a*/
  Power::FlagProcess(v54, v35); /*0x464e73*/
  IDA_LOBYTE(v36) = *((unsigned char *)this + 5822); /*0x464e78*/
  v37 = Power::FlagProcess(v54, v36); /*0x464e81*/
  IDA_LOBYTE(v37) = *((unsigned char *)this + 5823); /*0x464e86*/
  Power::FlagProcess(v54, v37); /*0x464e8f*/
  IDA_LOBYTE(v38) = *((unsigned char *)this + 5824); /*0x464e94*/
  Power::FlagProcess(v54, v38); /*0x464e9d*/
  IDA_LOBYTE(v39) = *((unsigned char *)this + 5835); /*0x464ea2*/
  v40 = Power::FlagProcess(v54, v39); /*0x464eab*/
  IDA_LOBYTE(v40) = *((unsigned char *)this + 5836); /*0x464eb0*/
  Power::FlagProcess(v54, v40); /*0x464eb9*/
  IDA_LOBYTE(v41) = *((unsigned char *)this + 5892); /*0x464ebe*/
  Power::FlagProcess(v54, v41); /*0x464ec7*/
  IDA_LOBYTE(v42) = *((unsigned char *)this + 5825); /*0x464ecc*/
  v43 = Power::FlagProcess(v54, v42); /*0x464ed5*/
  IDA_LOBYTE(v43) = *((unsigned char *)this + 5826); /*0x464eda*/
  Power::FlagProcess(v54, v43); /*0x464ee3*/
  Power::TimerProcess(*((unsigned int *)this + 1470)); /*0x464ef1*/
  v44 = Power::TimerProcess(*((unsigned int *)this + 1471)); /*0x464eff*/
  IDA_LOBYTE(v44) = *((unsigned char *)this + 5888); /*0x464f04*/
  Power::FlagProcess(v54, v44); /*0x464f0d*/
  IDA_LOBYTE(v45) = *((unsigned char *)this + 5889); /*0x464f12*/
  Power::FlagProcess(v54, v45); /*0x464f1b*/
  IDA_LOBYTE(v46) = *((unsigned char *)this + 5890); /*0x464f20*/
  v47 = Power::FlagProcess(v54, v46); /*0x464f29*/
  IDA_LOBYTE(v47) = *((unsigned char *)this + 5829); /*0x464f2e*/
  Power::FlagProcess(v54, v47); /*0x464f37*/
  IDA_LOBYTE(v48) = *((unsigned char *)this + 5830); /*0x464f3c*/
  Power::FlagProcess(v54, v48); /*0x464f45*/
  Checksum::AddString((unsigned int *)v54, (uint8_t *)this + 5908); /*0x464f53*/
  Checksummer::Add_double(*((unsigned int *)this + 1482), *((unsigned int *)this + 1483)); /*0x464f68*/
  Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)this + 5936, 12); /*0x464f78*/
  Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)this + 5948, 12); /*0x464f88*/
  Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)this + 5960, 12); /*0x464f98*/
  v49 = Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)this + 5972, 12); /*0x464fa8*/
  IDA_LOBYTE(v49) = *((unsigned char *)this + 5991); /*0x464fad*/
  Power::FlagProcess(v54, v49); /*0x464fb6*/
  IDA_LOBYTE(v50) = *((unsigned char *)this + 5992); /*0x464fbb*/
  Power::FlagProcess(v54, v50); /*0x464fc4*/
  IDA_LOBYTE(v51) = *((unsigned char *)this + 5993); /*0x464fc9*/
  Power::FlagProcess(v54, v51); /*0x464fd2*/
  Power::TimerProcess(*((unsigned int *)this + 1504)); /*0x464fe0*/
  Power::TimerProcess(*((unsigned int *)this + 1476)); /*0x464fee*/
  IDA_LOBYTE(v52) = *((unsigned char *)this + 5896); /*0x464ff3*/
  return Power::FlagProcess(v54, v52); /*0x465001*/

}
} // namespace gamemd
// 0x465010
namespace gamemd {
AbstractClass * * BuildingTypeClass::SaveLoad_Prefix()
{

  int v1; // esi
  int v2; // edi
  int result; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  unsigned int *v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  int v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( *(unsigned char *)(v13 + 5986) && *(unsigned int *)(v13 + 3584) ) /*0x465025*/
  {
    RA2_OPDEL(*(void **)(v13 + 3584)); /*0x465030*/
    *(unsigned int *)(v1 + 3584) = 0; /*0x465038*/
    *(unsigned char *)(v1 + 3588) = 0; /*0x46503e*/
  }
  if ( *(unsigned char *)(v1 + 5404) && *(unsigned int *)(v1 + 5400) ) /*0x46504c*/
  {
    RA2_OPDEL(*(void **)(v1 + 5400)); /*0x465057*/
    *(unsigned int *)(v1 + 5400) = 0; /*0x46505f*/
    *(unsigned char *)(v1 + 5404) = 0; /*0x465065*/
  }
  if ( *(unsigned char *)(v1 + 5352) && *(unsigned int *)(v1 + 5348) ) /*0x465073*/
  {
    RA2_OPDEL(*(void **)(v1 + 5348)); /*0x46507e*/
    *(unsigned int *)(v1 + 5348) = 0; /*0x465086*/
    *(unsigned char *)(v1 + 5352) = 0; /*0x46508c*/
  }
  if ( *(unsigned char *)(v1 + 5360) && *(unsigned int *)(v1 + 5356) ) /*0x46509a*/
  {
    RA2_OPDEL(*(void **)(v1 + 5356)); /*0x4650a5*/
    *(unsigned int *)(v1 + 5356) = 0; /*0x4650ad*/
    *(unsigned char *)(v1 + 5360) = 0; /*0x4650b3*/
  }
  if ( *(unsigned char *)(v1 + 5368) && *(unsigned int *)(v1 + 5364) ) /*0x4650c1*/
  {
    RA2_OPDEL(*(void **)(v1 + 5364)); /*0x4650cc*/
    *(unsigned int *)(v1 + 5364) = 0; /*0x4650d4*/
    *(unsigned char *)(v1 + 5368) = 0; /*0x4650da*/
  }
  if ( *(unsigned char *)(v1 + 5376) && *(unsigned int *)(v1 + 5372) ) /*0x4650e8*/
  {
    RA2_OPDEL(*(void **)(v1 + 5372)); /*0x4650f3*/
    *(unsigned int *)(v1 + 5372) = 0; /*0x4650fb*/
    *(unsigned char *)(v1 + 5376) = 0; /*0x465101*/
  }
  if ( *(unsigned char *)(v1 + 5384) && *(unsigned int *)(v1 + 5380) ) /*0x46510f*/
  {
    RA2_OPDEL(*(void **)(v1 + 5380)); /*0x46511a*/
    *(unsigned int *)(v1 + 5380) = 0; /*0x465122*/
    *(unsigned char *)(v1 + 5384) = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      BuildingTypeClass::loadBuildingProperty_b_545E520((unsigned int *)v1, (int)&v13); /*0x46514c*/
    result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = v1 + 6020; /*0x465167*/
      if ( v1 != -6020 ) /*0x46516f*/
      {
        *(unsigned int *)(v1 + 6024) = 0; /*0x465171*/
        *(unsigned int *)(v1 + 6028) = 0; /*0x465174*/
        *(unsigned char *)(v1 + 6032) = 1; /*0x465177*/
        *(unsigned char *)(v1 + 6033) = 0; /*0x46517b*/
        *(unsigned int *)v4 = &vt_VectorClass_TPoint3D_int; /*0x46517e*/
      }
      (*(void (**)(int, int, unsigned int))(*(unsigned int *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
LABEL_32:
        BuildingTypeClass::LoadVoxel(v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        v9 = *(unsigned int *)(v1 + 3824); /*0x4651fb*/
        *(unsigned int *)(v1 + 3672) = 0; /*0x465210*/
        v9 *= 120; /*0x465219*/
        *(unsigned int *)(v1 + 3580) = (char *)&unk_89C900 + v9; /*0x465228*/
        *(unsigned int *)(v1 + 3796) = (char *)&unk_89D368 + v9; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v1 + 3668)); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v1 + 3744)); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v1 + 3748)); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v1 + 3752)); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v1 + 3756)); /*0x465278*/
        BuildingTypeClass::LoadVoxel(v1); /*0x46527f*/
        *(unsigned int *)(v1 + 3584) = 0; /*0x465284*/
        *(unsigned char *)(v1 + 3588) = 0; /*0x46528a*/
        *(unsigned int *)(v1 + 5400) = 0; /*0x465290*/
        *(unsigned char *)(v1 + 5404) = 0; /*0x465296*/
        *(unsigned int *)(v1 + 5348) = 0; /*0x46529c*/
        *(unsigned char *)(v1 + 5352) = 0; /*0x4652a2*/
        *(unsigned int *)(v1 + 5356) = 0; /*0x4652a8*/
        *(unsigned char *)(v1 + 5360) = 0; /*0x4652ae*/
        *(unsigned int *)(v1 + 5364) = 0; /*0x4652b4*/
        *(unsigned char *)(v1 + 5368) = 0; /*0x4652ba*/
        *(unsigned int *)(v1 + 5372) = 0; /*0x4652c0*/
        *(unsigned char *)(v1 + 5376) = 0; /*0x4652c6*/
        *(unsigned int *)(v1 + 5380) = 0; /*0x4652cc*/
        *(unsigned char *)(v1 + 5384) = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations(v1, *((unsigned int *)g_abs_A8B230 + 1174)); /*0x4652e6*/
        return 0; /*0x4652eb*/
      }
      else
      {
        v13 = 0; /*0x465197*/
        while ( 1 ) /*0x46519b*/
        {
          v6 = *(unsigned int *)v2; /*0x46519b*/
          v10 = 0; /*0x4651a6*/
          v11 = 0; /*0x4651aa*/
          v12 = 0; /*0x4651ae*/
          result = (*(int (**)(int, int *, int, unsigned int))(v6 + 12))(v2, &v10, 12, 0); /*0x4651b2*/
          if ( result < 0 ) /*0x4651b7*/
            break; /*0x4651b7*/
          v7 = (unsigned int *)(v13 + *(unsigned int *)(v1 + 6024)); /*0x4651cb*/
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
} // namespace gamemd
// 0x4653C0
namespace gamemd {
BuildingTypeClass * * BuildingTypeClass::FindOrCreate(char * Source)
{

  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( (int)g_TriggerClassCount <= 0 ) /*0x4653f1*/
  {
LABEL_6:
    v3 = RA2_OPNEW(0x1798u); /*0x465416*/
    if ( v3 ) /*0x465425*/
      return (BuildingTypeClass *)BuildingTypeClass::ConstructFull(v3, Source); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_TriggerTypeCount + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= (int)g_TriggerClassCount ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return (BuildingTypeClass *)*((unsigned int *)g_TriggerTypeCount + v2); /*0x46542f*/

}
} // namespace gamemd
// 0x465AF0
namespace gamemd {
void BuildingTypeClass::IsPowered()
{

  if ( *((unsigned char *)this + 5986) ) /*0x465af3*/
  {
    if ( *((unsigned int *)this + 896) ) /*0x465afd*/
    {
      RA2_OPDEL(*(void **)((char *)this + 3584)); /*0x465b08*/
      *((unsigned int *)this + 896) = 0; /*0x465b10*/
      *((unsigned char *)this + 3588) = 0; /*0x465b1a*/
    }
  }

}
} // namespace gamemd
// 0x50B760
namespace gamemd {
int BuildingTypeClass::ProcessData(unsigned int * a2, short * a3)
{

  int v5; // ebx
  int v6; // ebx
  int v7; // ebp
  int16_t *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !g_abs_A8B238[0] ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = (int)a2; /*0x50b783*/
  v11 = *(unsigned int *)&g_abs_8871E0[1].FreeMCV; /*0x50b78f*/
  v12 = 2 * v11 + BuildingTypeClass::GetFoundationWidth(a2); /*0x50b7a3*/
  v6 = 2 * v11 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x50b7b1*/
  v7 = 1 << *((unsigned int *)this + 12); /*0x50b7b8*/
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
      IDA_LOWORD(a2) = v9; /*0x50b7eb*/
      IDA_HIWORD(a2) = v10; /*0x50b7f6*/
      if ( (v7 & *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&a2) + 55)) != 0 ) /*0x50b806*/
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
} // namespace gamemd
// 0x594010
namespace gamemd {
int BuildingTypeClass::CheckPlacementArea(ObjectClass * aP1, ObjectClass * aP2)
{

  IUnknown *v3; // edi
  int16_t v4; // ax
  int16_t v5; // ax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  ObjectClass *v11; // ebp
  int v12; // esi
  ObjectClass *v13; // eax
  unsigned int *v14; // eax

  v3 = (IUnknown *)aP1; /*0x594015*/
  v4 = *(unsigned short *)aP1->__pad_0; /*0x594027*/
  IDA_HIWORD(aP1) = *(unsigned short *)&aP1->__pad_0[4]; /*0x59402a*/
  IDA_LOWORD(aP1) = v4; /*0x594035*/
  if ( LayerClass::IsWithinUsableArea(&g_abs_87F7E8, (IUnknown *)&aP1, (TechnoClass *)1) )
  {
    v5 = v3->field_4; /*0x594052*/
    IDA_LOWORD(aP1) = v3->field_8 + v3->field_0 - 1; /*0x59405a*/
    IDA_HIWORD(aP1) = v5; /*0x594065*/
    if ( LayerClass::IsWithinUsableArea(&g_abs_87F7E8, (IUnknown *)&aP1, (TechnoClass *)1) )
    {
      v6 = v3->field_4; /*0x59407a*/
      v7 = v3->field_C; /*0x59407d*/
      IDA_LOWORD(aP1) = v3->field_0; /*0x594080*/
      IDA_HIWORD(aP1) = v6 + v7 - 1; /*0x594095*/
      if ( LayerClass::IsWithinUsableArea(&g_abs_87F7E8, (IUnknown *)&aP1, (TechnoClass *)1) )
      {
        v8 = v3->field_4; /*0x5940b2*/
        v9 = v3->field_C; /*0x5940b5*/
        IDA_LOWORD(aP1) = v3->field_8 + v3->field_0 - 1; /*0x5940b8*/
        IDA_HIWORD(aP1) = v8 + v9 - 1; /*0x5940cb*/
        if ( LayerClass::IsWithinUsableArea(&g_abs_87F7E8, (IUnknown *)&aP1, (TechnoClass *)1) )
        {
          v10 = v3->field_4; /*0x5940dd*/
          if ( v10 >= v3->field_C + v10 ) /*0x5940e9*/
            return 1; /*0x594177*/
          v11 = aP2; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v12 = v3->field_0; /*0x5940f3*/
            if ( v3->field_0 < v3->field_0 + v3->field_8 ) /*0x5940fc*/
              break; /*0x5940fc*/
LABEL_15:
            if ( ++v10 >= v3->field_C + v3->field_4 ) /*0x59416e*/
              return 1; /*0x59416e*/
          }
          while ( 1 )
          {
            IDA_LOWORD(aP1) = v12; /*0x594104*/
            IDA_HIWORD(aP1) = v10; /*0x59410b*/
            v13 = (ObjectClass *)(g_MapTileArray
                                ? *((unsigned int *)g_MapTileArray + 20 * (int16_t)v12 + 20 * unk_89C2DC * (int16_t)v10 + 14)
                                : -1);
            if ( v13 != (ObjectClass *)*((unsigned int *)this + 2) && v13 != v11 ) /*0x59413b*/
              break; /*0x59413b*/
            v14 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP1); /*0x594147*/
            if ( !Cell::IsEmpty(v14) ) /*0x59414e*/
              break; /*0x59414e*/
            if ( ++v12 >= v3->field_0 + v3->field_8 ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  return 0; /*0x594170*/

}
} // namespace gamemd
// 0x5FEC70
namespace gamemd {
OverlayTypeClass * * BuildingTypeClass::FindOrCreate2(ObjectClass * Source)
{

  int v2; // esi
  unsigned int *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( *(int *)&HouseClass_Player.__pad_3C[8] <= 0 ) /*0x5feca1*/
  {
LABEL_6:
    v3 = (unsigned int *)RA2_OPNEW(0x2BCu); /*0x5fecc6*/
    if ( v3 ) /*0x5fecd5*/
      return (OverlayTypeClass *)OverlayTypeClass::OverlayTypeClass(v3, Source); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(HouseClass_Player.field_38 + 4 * v2) + 36), Source) ) /*0x5fecba*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_3C[8] ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *(OverlayTypeClass **)(HouseClass_Player.field_38 + 4 * v2); /*0x5fecdf*/

}
} // namespace gamemd
// 0x644890
namespace gamemd {
ParticleSystemTypeClass * * BuildingTypeClass::LoadOrGet(ObjectClass * Source)
{

  int v2; // esi
  unsigned int *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( *(int *)HouseClass_Player.__pad_2C <= 0 ) /*0x6448c1*/
  {
LABEL_6:
    v3 = (unsigned int *)RA2_OPNEW(0x310u); /*0x6448e6*/
    if ( v3 ) /*0x6448f5*/
      return (ParticleSystemTypeClass *)OverlayTypeClass::Construct(v3, Source); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_18[8] + 4 * v2) + 36), Source) ) /*0x6448da*/
  {
    if ( ++v2 >= *(int *)HouseClass_Player.__pad_2C ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *(ParticleSystemTypeClass **)(*(unsigned int *)&HouseClass_Player.__pad_18[8] + 4 * v2); /*0x6448ff*/

}
} // namespace gamemd
// 0x644BE0
namespace gamemd {
unsigned int * BuildingTypeClass::Construct(AbstractClass * aP1)
{

  ParticleTypeClass *v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int)this, aP1); /*0x644beb*/
  *((unsigned int *)this + 165) = 0; /*0x644bf8*/
  *((unsigned int *)this + 166) = 0; /*0x644bfe*/
  *((unsigned int *)this + 167) = 0; /*0x644c04*/
  *((unsigned int *)this + 172) = 0; /*0x644c10*/
  *((unsigned int *)this + 168) = 1; /*0x644c19*/
  *((unsigned int *)this + 169) = 1; /*0x644c1f*/
  *((unsigned int *)this + 170) = 0; /*0x644c25*/
  *((unsigned int *)this + 171) = 1; /*0x644c2b*/
  *((unsigned int *)this + 173) = 0; /*0x644c31*/
  BuildingTypeClass::loadBuildingProperty_b_5478850((unsigned int *)this + 174, 0, 0); /*0x644c37*/
  *((unsigned int *)this + 179) = 10; /*0x644c3c*/
  *((unsigned int *)this + 178) = 0; /*0x644c43*/
  *((unsigned int *)this + 174) = &vt_TypeList_RGBClass; /*0x644c46*/
  *((unsigned int *)this + 181) = 0; /*0x644c4c*/
  *((unsigned char *)this + 728) = 0; /*0x644c66*/
  *((unsigned char *)this + 729) = 0; /*0x644c6c*/
  *((unsigned char *)this + 781) = -1; /*0x644c72*/
  *((unsigned char *)this + 782) = -1; /*0x644c78*/
  *((unsigned int *)this + 183) = 0; /*0x644c81*/
  *((unsigned int *)this + 184) = 1; /*0x644c87*/
  *((unsigned int *)this + 185) = 0; /*0x644c8d*/
  *((unsigned int *)this + 186) = 0; /*0x644c93*/
  *((unsigned int *)this + 187) = 0; /*0x644c99*/
  *((unsigned int *)this + 188) = 1; /*0x644c9f*/
  *((unsigned int *)this + 189) = 0; /*0x644ca5*/
  *((unsigned int *)this + 190) = 0; /*0x644cab*/
  *((unsigned int *)this + 191) = 0; /*0x644cb1*/
  *((unsigned int *)this + 192) = 0; /*0x644cb7*/
  *((unsigned int *)this + 193) = 0; /*0x644cbd*/
  *((unsigned char *)this + 776) = 0; /*0x644cc3*/
  *((unsigned char *)this + 777) = 0; /*0x644cc9*/
  *((unsigned char *)this + 778) = 0; /*0x644ccf*/
  *((unsigned char *)this + 779) = 4; /*0x644cd5*/
  *((unsigned char *)this + 780) = 0; /*0x644cdc*/
  *((unsigned char *)this + 783) = 0; /*0x644ce2*/
  *((unsigned int *)this + 196) = -1; /*0x644ce8*/
  *((unsigned int *)this + 197) = -1; /*0x644cee*/
  *this = &vt_ParticleTypeClass; /*0x644cf4*/
  *((unsigned int *)this + 1) = &vt_ParticleTypeClass; /*0x644cfa*/
  *((unsigned int *)this + 2) = &vt_ParticleTypeClass; /*0x644d01*/
  *((unsigned int *)this + 3) = &vt_ParticleTypeClass; /*0x644d08*/
  if ( (int)g_abs_A83DA8 < g_abs_A83DA0 /*0x644d43*/
    || (g_abs_A83DA5 || !g_abs_A83DA0)
    && g_abs_A83DAC > 0
    && ((uint8_t (*)(DynamicVector **, int, unsigned int))g_abs_A83D98->field_8)(
         &g_abs_A83D98,
         g_abs_A83DA0 + g_abs_A83DAC,
         0) )
  {
    v3 = g_abs_A83DA8; /*0x644d50*/
    g_abs_A83DA8 = (ParticleTypeClass *)((char *)g_abs_A83DA8 + 1); /*0x644d53*/
    *(unsigned int *)&g_abs_A83D9C->__pad_0[4 * (unsigned int)v3] = this; /*0x644d5f*/
  }
  if ( *(int *)&g_abs_B077F8 < *(int *)&g_abs_B077F8 /*0x644d96*/
    || (g_abs_B077F8 || !*(unsigned int *)&g_abs_B077F8)
    && *(int *)&g_abs_B077F8 > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_B077F8 + 8))(
         &g_abs_B077F8,
         *(unsigned int *)&g_abs_B077F8 + *(unsigned int *)&g_abs_B077F8,
         0) )
  {
    v4 = (*(unsigned int *)&g_abs_B077F8)++; /*0x644da3*/
    *(unsigned int *)(*(unsigned int *)&g_abs_B077F8 + 4 * v4) = this; /*0x644db2*/
  }
  *((unsigned char *)this + 564) = 0; /*0x644db5*/
  return this; /*0x644dbd*/

}
} // namespace gamemd
// 0x645430
namespace gamemd {
ParticleTypeClass * * BuildingTypeClass::FindOrCreateEx(AbstractClass * Source)
{

  int v2; // esi
  unsigned int *v3; // eax
  ParticleTypeClass *v4; // eax
  int v6; // ecx
  ObjectClass *i; // edx

  if ( !_strcmpi(Source, &stru_817460.sectionHead[1]) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( *(int *)&HouseClass_Player.__pad_3C[32] <= 0 ) /*0x64544f*/
  {
LABEL_5:
    v3 = (unsigned int *)RA2_OPNEW(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = (ParticleTypeClass *)BuildingTypeClass::Construct(v3, Source); /*0x645488*/
    else
      v4 = 0; /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( *(int *)&HouseClass_Player.__pad_3C[32] > 0 ) /*0x6454a0*/
    {
      for ( i = *(ObjectClass **)&HouseClass_Player.__pad_3C[20]; /*0x6454a2*/
            *(ParticleTypeClass **)i->__pad_0 != v4;
            i = (ObjectClass *)((char *)i + 4) )
      {
        if ( ++v6 >= *(int *)&HouseClass_Player.__pad_3C[32] ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(Source, (const void *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_3C[20] + 4 * v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_3C[32] ) /*0x645472*/
      goto LABEL_5; /*0x645472*/
  }
  return v2; /*0x645491*/

}
} // namespace gamemd
// 0x7171A0
namespace gamemd {
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
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 752), *(AbstractClass **)((char *)this + 756)); /*0x7171be*/
  Power::TimerProcess(aP1); /*0x7171cc*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 768), *(AbstractClass **)((char *)this + 772)); /*0x7171e1*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 776), *(AbstractClass **)((char *)this + 780)); /*0x7171f6*/
  Power::TimerProcess(aP1); /*0x717204*/
  Power::TimerProcess(aP1); /*0x717212*/
  Power::TimerProcess(aP1); /*0x717220*/
  Power::TimerProcess(aP1); /*0x71722e*/
  Power::TimerProcess(aP1); /*0x71723c*/
  Checksummer::Add_Buffer((unsigned int *)aP1, (uint8_t *)((char *)this + 844), (IUnknown *)0x10); /*0x71724c*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 864), *(AbstractClass **)((char *)this + 868)); /*0x717261*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 872), *(AbstractClass **)((char *)this + 876)); /*0x717276*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 880), *(AbstractClass **)((char *)this + 884)); /*0x71728b*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 888), *(AbstractClass **)((char *)this + 892)); /*0x7172a0*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 896), *(AbstractClass **)((char *)this + 900)); /*0x7172b5*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 904), *(AbstractClass **)((char *)this + 908)); /*0x7172ca*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 912); /*0x7172cf*/
  Power::FlagProcess(aP1, v3); /*0x7172d8*/
  v4 = Power::TimerProcess(aP1); /*0x7172e6*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 3217); /*0x7172eb*/
  Power::FlagProcess(aP1, v4); /*0x7172f4*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 3218); /*0x7172f9*/
  Power::FlagProcess(aP1, v5); /*0x717302*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 3216); /*0x717307*/
  Power::FlagProcess(aP1, v6); /*0x717310*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 928), *(AbstractClass **)((char *)this + 932)); /*0x717325*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 944), *(AbstractClass **)((char *)this + 948)); /*0x71733a*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 936), *(AbstractClass **)((char *)this + 940)); /*0x71734f*/
  Power::TimerProcess(aP1); /*0x71735d*/
  Power::TimerProcess(aP1); /*0x71736b*/
  Power::TimerProcess(aP1); /*0x717379*/
  Checksummer::Add_double(aP1, *(AbstractClass **)((char *)this + 968), *(AbstractClass **)((char *)this + 972)); /*0x71738e*/
  Power::TimerProcess(aP1); /*0x71739c*/
  Power::TimerProcess(aP1); /*0x7173aa*/
  Power::TimerProcess(aP1); /*0x7173b8*/
  Power::TimerProcess(aP1); /*0x7173c6*/
  Power::TimerProcess(aP1); /*0x7173d4*/
  Power::TimerProcess(aP1); /*0x7173e2*/
  Power::TimerProcess(aP1); /*0x7173f0*/
  Power::TimerProcess(aP1); /*0x7173fe*/
  Power::TimerProcess(aP1); /*0x71740c*/
  Power::TimerProcess(aP1); /*0x71741a*/
  Power::TimerProcess(aP1); /*0x717428*/
  Power::TimerProcess(aP1); /*0x717436*/
  Power::TimerProcess(aP1); /*0x717444*/
  Power::TimerProcess(aP1); /*0x717452*/
  Power::TimerProcess(aP1); /*0x717460*/
  Power::TimerProcess(aP1); /*0x71746e*/
  Power::TimerProcess(aP1); /*0x71747c*/
  Power::TimerProcess(aP1); /*0x71748a*/
  Power::TimerProcess(aP1); /*0x717498*/
  Power::TimerProcess(aP1); /*0x7174a6*/
  Power::TimerProcess(aP1); /*0x7174b4*/
  Power::TimerProcess(aP1); /*0x7174c2*/
  Power::TimerProcess(aP1); /*0x7174d0*/
  Power::TimerProcess(aP1); /*0x7174de*/
  Power::TimerProcess(aP1); /*0x7174ec*/
  Power::TimerProcess(aP1); /*0x7174fa*/
  Power::TimerProcess(aP1); /*0x717508*/
  Power::TimerProcess(aP1); /*0x717516*/
  Power::TimerProcess(aP1); /*0x717524*/
  Power::TimerProcess(aP1); /*0x717532*/
  Power::TimerProcess(aP1); /*0x717540*/
  Power::TimerProcess(aP1); /*0x71754e*/
  Power::TimerProcess(aP1); /*0x71755c*/
  Power::TimerProcess(aP1); /*0x71756a*/
  Power::TimerProcess(aP1); /*0x717578*/
  Power::TimerProcess(aP1); /*0x717586*/
  Power::TimerProcess(aP1); /*0x717594*/
  Power::TimerProcess(aP1); /*0x7175a2*/
  Power::TimerProcess(aP1); /*0x7175b0*/
  v7 = Power::TimerProcess(aP1); /*0x7175be*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 3220); /*0x7175c3*/
  Power::FlagProcess(aP1, v7); /*0x7175cc*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 3221); /*0x7175d1*/
  Power::FlagProcess(aP1, v8); /*0x7175da*/
  IDA_LOBYTE(v9) = *((unsigned char *)this + 3222); /*0x7175df*/
  v10 = Power::FlagProcess(aP1, v9); /*0x7175e8*/
  IDA_LOBYTE(v10) = *((unsigned char *)this + 3223); /*0x7175ed*/
  Power::FlagProcess(aP1, v10); /*0x7175f6*/
  IDA_LOBYTE(v11) = *((unsigned char *)this + 3224); /*0x7175fb*/
  Power::FlagProcess(aP1, v11); /*0x717604*/
  IDA_LOBYTE(v12) = *((unsigned char *)this + 3225); /*0x717609*/
  v13 = Power::FlagProcess(aP1, v12); /*0x717612*/
  IDA_LOBYTE(v13) = *((unsigned char *)this + 3226); /*0x717617*/
  Power::FlagProcess(aP1, v13); /*0x717620*/
  IDA_LOBYTE(v14) = *((unsigned char *)this + 3227); /*0x717625*/
  Power::FlagProcess(aP1, v14); /*0x71762e*/
  IDA_LOBYTE(v15) = *((unsigned char *)this + 3228); /*0x717633*/
  v16 = Power::FlagProcess(aP1, v15); /*0x71763c*/
  IDA_LOBYTE(v16) = *((unsigned char *)this + 3229); /*0x717641*/
  Power::FlagProcess(aP1, v16); /*0x71764a*/
  IDA_LOBYTE(v17) = *((unsigned char *)this + 3230); /*0x71764f*/
  Power::FlagProcess(aP1, v17); /*0x717658*/
  IDA_LOBYTE(v18) = *((unsigned char *)this + 3231); /*0x71765d*/
  v19 = Power::FlagProcess(aP1, v18); /*0x717666*/
  IDA_LOBYTE(v19) = *((unsigned char *)this + 3232); /*0x71766b*/
  Power::FlagProcess(aP1, v19); /*0x717674*/
  IDA_LOBYTE(v20) = *((unsigned char *)this + 3233); /*0x717679*/
  Power::FlagProcess(aP1, v20); /*0x717682*/
  IDA_LOBYTE(v21) = *((unsigned char *)this + 3276); /*0x717687*/
  v22 = Power::FlagProcess(aP1, v21); /*0x717690*/
  IDA_LOBYTE(v22) = *((unsigned char *)this + 3277); /*0x717695*/
  Power::FlagProcess(aP1, v22); /*0x71769e*/
  IDA_LOBYTE(v23) = *((unsigned char *)this + 3279); /*0x7176a3*/
  Power::FlagProcess(aP1, v23); /*0x7176ac*/
  IDA_LOBYTE(v24) = *((unsigned char *)this + 3280); /*0x7176b1*/
  v25 = Power::FlagProcess(aP1, v24); /*0x7176ba*/
  IDA_LOBYTE(v25) = *((unsigned char *)this + 3281); /*0x7176bf*/
  Power::FlagProcess(aP1, v25); /*0x7176c8*/
  IDA_LOBYTE(v26) = *((unsigned char *)this + 3282); /*0x7176cd*/
  Power::FinalizeDrain(aP1, v26); /*0x7176d6*/
  IDA_LOBYTE(v27) = *((unsigned char *)this + 3283); /*0x7176db*/
  v28 = Power::FinalizeDrain(aP1, v27); /*0x7176e4*/
  IDA_LOBYTE(v28) = *((unsigned char *)this + 3284); /*0x7176e9*/
  Power::FlagProcess(aP1, v28); /*0x7176f2*/
  IDA_LOBYTE(v29) = *((unsigned char *)this + 3348); /*0x7176f7*/
  Power::FlagProcess(aP1, v29); /*0x717700*/
  IDA_LOBYTE(v30) = *((unsigned char *)this + 3349); /*0x717705*/
  v31 = Power::FlagProcess(aP1, v30); /*0x71770e*/
  IDA_LOBYTE(v31) = *((unsigned char *)this + 3360); /*0x717713*/
  Power::FlagProcess(aP1, v31); /*0x71771c*/
  IDA_LOBYTE(v32) = *((unsigned char *)this + 3361); /*0x717721*/
  Power::FlagProcess(aP1, v32); /*0x71772a*/
  IDA_LOBYTE(v33) = *((unsigned char *)this + 3363); /*0x71772f*/
  v34 = Power::FlagProcess(aP1, v33); /*0x717738*/
  IDA_LOBYTE(v34) = *((unsigned char *)this + 3364); /*0x71773d*/
  Power::FlagProcess(aP1, v34); /*0x717746*/
  IDA_LOBYTE(v35) = *((unsigned char *)this + 3365); /*0x71774b*/
  Power::FlagProcess(aP1, v35); /*0x717754*/
  IDA_LOBYTE(v36) = *((unsigned char *)this + 3366); /*0x717759*/
  v37 = Power::FlagProcess(aP1, v36); /*0x717762*/
  IDA_LOBYTE(v37) = *((unsigned char *)this + 3518); /*0x717767*/
  Power::FlagProcess(aP1, v37); /*0x717770*/
  IDA_LOBYTE(v38) = *((unsigned char *)this + 3519); /*0x717775*/
  Power::FlagProcess(aP1, v38); /*0x71777e*/
  IDA_LOBYTE(v39) = *((unsigned char *)this + 1710); /*0x717783*/
  v40 = Power::FlagProcess(aP1, v39); /*0x71778c*/
  IDA_LOBYTE(v40) = *((unsigned char *)this + 1711); /*0x717791*/
  Power::FlagProcess(aP1, v40); /*0x71779a*/
  IDA_LOBYTE(v41) = *((unsigned char *)this + 1712); /*0x71779f*/
  return Power::FlagProcess(aP1, v41); /*0x7177ad*/

}
} // namespace gamemd
// 0x7178C0
namespace gamemd {
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

  if ( *((unsigned char *)this + 1980) ) /*0x7178c6*/
  {
    v3 = *((unsigned int *)this + 492); /*0x7178d4*/
    v4 = *((unsigned int *)this + 493); /*0x7178da*/
    v15[0] = v3; /*0x7178e1*/
    v15[1] = v4; /*0x7178e6*/
    v5 = World::ToScreen((float *)g_abs_887324, v14, v15); /*0x7178fb*/
    v6 = *v5; /*0x717900*/
    v7 = v5[1]; /*0x717905*/
    v14[0] = 10 * *((unsigned int *)this + 494); /*0x71791b*/
    v8 = v6 - v14[0]; /*0x717927*/
    v9 = v7 - v14[0]; /*0x717929*/
    v10 = Math::Sqrt((double)v14[0] * (double)v14[0] + (double)v14[0] * (double)v14[0]); /*0x717936*/
    v11 = Math::RoundToInt(v10 * 0.58); /*0x717944*/
    if ( *((int *)this + 494) >= 0 ) /*0x717951*/
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
    *a2 = *((unsigned int *)this + 492); /*0x71797f*/
    a2[1] = *((unsigned int *)this + 493); /*0x717984*/
    a2[2] = *((unsigned int *)this + 494); /*0x71798b*/
    return a2; /*0x717971*/
  }

}
} // namespace gamemd
// 0x746000
namespace gamemd {
int BuildingTypeClass::IsPlacementValid(IUnknown * aP1, IUnknown * aP2)
{

  signed int v4; // ecx
  int v5; // eax
  IUnknown *v6; // eax

  if ( (*(int (__fastcall **)(void *))(*(unsigned int *)this + 456))(this) < 0 /*0x746030*/
    || !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)aP1, (__int16 *)aP2, 0, 0, 0, 0) )
  {
    return 1; /*0x746030*/
  }
  if ( LOWORD(aP1->field_0) == LOWORD(aP2->field_0) && HIWORD(aP1->field_0) == HIWORD(aP2->field_0) ) /*0x746050*/
    return 0; /*0x746059*/
  v4 = abs32(SHIWORD(aP2->field_0) - SHIWORD(aP1->field_0)); /*0x74606b*/
  v5 = abs32(SLOWORD(aP2->field_0) - SLOWORD(aP1->field_0)); /*0x746078*/
  if ( v5 <= v4 ) /*0x74607c*/
    v5 = v4; /*0x74607e*/
  if ( v5 == 1 ) /*0x746083*/
    return 0; /*0x74608c*/
  if ( v5 >= 12 /*0x7460ad*/
    || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], aP1, (TechnoClass *)1)
    || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], aP2, (TechnoClass *)1) )
  {
    return 1; /*0x7460f7*/
  }
  v6 = (IUnknown *)(*((unsigned int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP2) + 80) >> 8); /*0x7460cd*/
  LOBYTE(v6) = (unsigned __int8)v6 & 1; /*0x7460d0*/
  return Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], aP1, aP2, (TechnoClass *)this, 0, v6, 0) > 15; /*0x746052*/

}
} // namespace gamemd
// 0x7480D0
namespace gamemd {
AbstractClass * * BuildingTypeClass::FindOrCreateAlt(INIClass * Source)
{

  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x7480ec*/
    return 0; /*0x74814f*/
  v2 = 0; /*0x7480fd*/
  if ( (int)g_CrateCount <= 0 ) /*0x748101*/
  {
LABEL_6:
    v3 = RA2_OPNEW(0xE78u); /*0x748126*/
    if ( v3 ) /*0x748135*/
      return (UnitTypeClass *)UnitTypeClass::UnitTypeClass(v3, Source); /*0x748141*/
    return 0; /*0x748135*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)&g_UnitTypeCount2->__pad_0[4 * v2] + 36), Source) ) /*0x74811a*/
  {
    if ( ++v2 >= (int)g_CrateCount ) /*0x748124*/
      goto LABEL_6; /*0x748124*/
  }
  return *(UnitTypeClass **)&g_UnitTypeCount2->__pad_0[4 * v2]; /*0x74813f*/

}
} // namespace gamemd
// 0x41C500
namespace gamemd {
char BuildingTypeClass::Enqueue(int a2)
{

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x41c50c*/
    return 0; /*0x41c50c*/
  v3 = (char *)RA2_OPNEW(8 * (a2 + *((unsigned int *)this + 2))); /*0x41c520*/
  if ( !v3 ) /*0x41c527*/
    return 0; /*0x41c580*/
  for ( i = 0; i < *((unsigned int *)this + 1); *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x41c535*/
  {
    v5 = 8 * i; /*0x41c539*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x41c542*/
    *(unsigned int *)&v3[v5] = *v6; /*0x41c547*/
  }
  RA2_OPDEL(*(void **)this); /*0x41c55b*/
  v7 = a2 + *((unsigned int *)this + 2); /*0x41c566*/
  *(unsigned int *)this = v3; /*0x41c568*/
  *((unsigned int *)this + 2) = v7; /*0x41c56a*/
  *((unsigned int *)this + 4) = 0; /*0x41c56d*/
  return 1; /*0x41c574*/

}
} // namespace gamemd
// 0x41C590
namespace gamemd {
size_t BuildingTypeClass::Dequeue(BuildingClass * aP1)
{

  size_t result; // eax
  ObjectClass *v4; // edi
  ObjectClass *v5; // ebx
  int v6; // ecx
  ObjectClass *v7; // esi

  result = (size_t)*((unsigned int *)this + 1); /*0x41c593*/
  if ( result ) /*0x41c598*/
  {
    if ( !*((unsigned char *)this + 12) ) /*0x41c59e*/
    {
      qsort(*this, result, 8u, CompareFunction); /*0x41c5b0*/
      *((unsigned int *)this + 4) = 0; /*0x41c5b8*/
      *((unsigned char *)this + 12) = 1; /*0x41c5bf*/
    }
    v4 = (ObjectClass *)*this; /*0x41c5c9*/
    v5 = *(ObjectClass **)aP1->__pad_0; /*0x41c5cb*/
    v6 = (int)*((unsigned int *)this + 1); /*0x41c5cd*/
    if ( v6 <= 0 ) /*0x41c5d2*/
      return 0; /*0x41c5fe*/
    while ( 1 ) /*0x41c5db*/
    {
      v7 = *(ObjectClass **)&v4->__pad_0[8 * (v6 / 2)]; /*0x41c5db*/
      if ( (int)v7 <= (int)v5 ) /*0x41c5e3*/
      {
        if ( v7 == v5 ) /*0x41c5e9*/
          return (size_t)v4 + 8 * (v6 / 2); /*0x41c603*/
        v4 = (ObjectClass *)((char *)v4 + 8 * (v6 / 2) + 8); /*0x41c5eb*/
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
} // namespace gamemd
// 0x45E7B0
namespace gamemd {
int BuildingTypeClass::FindIndexByName()
{

  int v2; // esi

  if ( !this ) /*0x45e7b6*/
    return -1; /*0x45e7b6*/
  v2 = 0; /*0x45e7bd*/
  if ( (int)g_TriggerClassCount <= 0 ) /*0x45e7c1*/
    return -1; /*0x45e7e6*/
  while ( _strcmpi((const void *)(*((unsigned int *)g_TriggerTypeCount + v2) + 36), this) ) /*0x45e7da*/
  {
    if ( ++v2 >= (int)g_TriggerClassCount ) /*0x45e7e4*/
      return -1; /*0x45e7e4*/
  }
  return v2; /*0x45e7e6*/

}
} // namespace gamemd
// 0x45ECE0
namespace gamemd {
int BuildingTypeClass::GetMaxPips()
{

  int result; // eax
  int v2; // ecx
  int v3; // ecx

  result = 60 * dword_8192B8[*((unsigned int *)this + 956)] / 8; /*0x45ed02*/
  if ( *((unsigned int *)this + 245) == 2 ) /*0x45ed08*/
  {
    if ( *((unsigned char *)this + 5820) ) /*0x45ed14*/
    {
      v2 = g_abs_8871E0[1].?[1]; /*0x45ed24*/
      if ( v2 >= 0 ) /*0x45ed2c*/
      {
        if ( v2 <= result ) /*0x45ed33*/
          return g_abs_8871E0[1].?[1]; /*0x45ed35*/
      }
      else
      {
        return 0; /*0x45ed2e*/
      }
    }
    else
    {
      v3 = *((unsigned int *)this + 512); /*0x45ed38*/
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
  else if ( *((unsigned int *)this + 245) != 4 ) /*0x45ed0d*/
  {
    return ObjectClass::GetModeSpecificValue((int *)this); /*0x45ed0f*/
  }
  return result; /*0x45ed30*/

}
} // namespace gamemd
// 0x464AF0
namespace gamemd {
unsigned int * BuildingTypeClass::GetSizeInLeptons(unsigned int * a2)
{

  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax

  v2 = *((unsigned int *)this + 956); /*0x464af0*/
  v3 = unk_89DDB8 * *((unsigned int *)this + 957); /*0x464afc*/
  v2 *= 4; /*0x464b03*/
  v4 = *(int *)((char *)dword_8192B8 + v2); /*0x464b0b*/
  v5 = *(int *)((char *)dword_819310 + v2); /*0x464b11*/
  *a2 = v4 << 8; /*0x464b1d*/
  a2[1] = v5 << 8; /*0x464b22*/
  a2[2] = v3; /*0x464b27*/
  return a2; /*0x464b2a*/

}
} // namespace gamemd
// 0x465300
namespace gamemd {
int BuildingTypeClass::SaveLoad_Prefix_0()
{

  int result; // eax
  int v2; // edx
  int v3; // ebp
  int i; // edi
  int v5; // [esp+4h] [ebp-10h]
  unsigned int *v6; // [esp+18h] [ebp+4h]
  int *v7; // [esp+1Ch] [ebp+8h]
  int v8; // [esp+20h] [ebp+Ch] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix_0((int)v6, v6, v7, v8, v5); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    v2 = *v7; /*0x465322*/
    v8 = v6[1507]; /*0x46532e*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v2 + 16))(v7, &v8, 4, 0); /*0x465332*/
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
          result = (*(int (**)(int *, int, int, unsigned int))(*v7 + 16))(v7, i + v6[1506], 12, 0); /*0x465355*/
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
} // namespace gamemd
// 0x465380
namespace gamemd {
int BuildingTypeClass::GetClassIdentifier()
{

  unsigned int *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x465386*/
    return -2147467261; /*0x465388*/
  *v2 = -1366608933; /*0x465396*/
  v2[1] = 298976796; /*0x46539e*/
  v2[2] = 1610654892; /*0x4653a7*/
  v2[3] = -1252326136; /*0x4653b0*/
  return 0; /*0x46538d*/

}
} // namespace gamemd
// 0x465D90
namespace gamemd {
int BuildingTypeClass::GetTypeIdentifier()
{

  return 7; /*0x465d95*/

}
} // namespace gamemd
// 0x465DA0
namespace gamemd {
int BuildingTypeClass::GetObjectSize()
{

  return 6040; /*0x465da5*/

}
} // namespace gamemd
// 0x465DB0
namespace gamemd {
int BuildingTypeClass::GetAuxField()
{

  return *((unsigned int *)this + 894); /*0x465db6*/

}
} // namespace gamemd
// 0x465DC0
namespace gamemd {
int BuildingTypeClass::ddtor()
{

  char v3; // [esp+8h] [ebp+4h]

  BuildingTypeClass::CleanupMembers((void **)this); /*0x465dc3*/
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    RA2_OPDEL(this); /*0x465dd0*/
  return (int)this; /*0x465dda*/

}
} // namespace gamemd
// 0x474A90
namespace gamemd {
int BuildingTypeClass::FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{

  int v4; // esi
  IUnknown *v5; // eax
  bool v6; // zf
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString( /*0x474aba*/
    this,
    aP1,
    a2,
    *(INIClass **)(*(unsigned int *)(stru_B05488.field_4C + 4 * (unsigned int)aP3) + 772),
    (INIClass *)Destination,
    32);
  v4 = 0; /*0x474ac4*/
  if ( *(int *)stru_B05488.__pad_58 <= 0 ) /*0x474ac8*/
    return (int)aP3->__pad_0; /*0x474b06*/
  v5 = (IUnknown *)stru_B05488.field_4C; /*0x474aca*/
  while ( 1 ) /*0x474ae6*/
  {
    v6 = _strcmpi(*(const void **)(*(&v5->field_0 + v4) + 772), Destination) == 0; /*0x474ae6*/
    v5 = (IUnknown *)stru_B05488.field_4C; /*0x474ae8*/
    if ( v6 && *(unsigned int *)(*(unsigned int *)(stru_B05488.field_4C + 4 * v4) + 784) != 1 ) /*0x474af9*/
      break; /*0x474af9*/
    if ( ++v4 >= *(int *)stru_B05488.__pad_58 ) /*0x474b04*/
      return (int)aP3->__pad_0; /*0x474b04*/
  }
  return v4; /*0x474b08*/

}
} // namespace gamemd
// 0x478850
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_5478850(int a2, int a3)
{

  char *v4; // ebx
  unsigned char *v5; // eax
  int v6; // ecx
  char *v8; // eax
  unsigned char *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x478859*/
  *((unsigned int *)this + 1) = 0; /*0x47885d*/
  *((unsigned int *)this + 2) = a2; /*0x478860*/
  *((unsigned char *)this + 12) = 1; /*0x478863*/
  *((unsigned char *)this + 13) = 0; /*0x478867*/
  *this = &vt_VectorClass_RGBClass; /*0x47886a*/
  if ( !a2 ) /*0x478870*/
    return this; /*0x4788d0*/
  if ( !a3 ) /*0x478878*/
  {
    v8 = (char *)RA2_OPNEW(3 * a2); /*0x4788a2*/
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
    *((unsigned int *)this + 1) = v4; /*0x4788c9*/
    *((unsigned char *)this + 13) = 1; /*0x4788cc*/
    return this; /*0x4788cc*/
  }
  if ( a2 - 1 >= 0 ) /*0x47887f*/
  {
    v5 = (unsigned char *)(a3 + 2); /*0x478881*/
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
  *((unsigned int *)this + 1) = a3; /*0x478893*/
  return this; /*0x478898*/

}
} // namespace gamemd
// 0x4C9680
namespace gamemd {
int BuildingTypeClass::GetPowerOutput(ObjectClass * aP1)
{

  ObjectClass *result; // eax
  int16_t v3; // dx

  result = aP1; /*0x4c9680*/
  if ( (int)aP1 >= 127 ) /*0x4c9687*/
    result = (ObjectClass *)127; /*0x4c9689*/
  IDA_LOBYTE(v3) = 0; /*0x4c968e*/
  IDA_HIBYTE(v3) = (unsigned char)result; /*0x4c9690*/
  *((unsigned short *)this + 10) = v3; /*0x4c9692*/
  return (int)result->__pad_0; /*0x4c9696*/

}
} // namespace gamemd
// 0x747370
namespace gamemd {
int BuildingTypeClass::FindIndex()
{

  int v2; // esi

  if ( !this ) /*0x747376*/
    return -1; /*0x747376*/
  v2 = 0; /*0x74737d*/
  if ( (int)g_CrateCount <= 0 ) /*0x747381*/
    return -1; /*0x7473a6*/
  while ( _strcmpi((const void *)(*(unsigned int *)&g_UnitTypeCount2->__pad_0[4 * v2] + 36), this) ) /*0x74739a*/
  {
    if ( ++v2 >= (int)g_CrateCount ) /*0x7473a4*/
      return -1; /*0x7473a4*/
  }
  return v2; /*0x7473a6*/

}
} // namespace gamemd