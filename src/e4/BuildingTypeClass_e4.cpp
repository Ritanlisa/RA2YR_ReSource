// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Matrix_e4.hpp"
#include "e4/classes/VoxelSection_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
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
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/Checksum_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/AbstractTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x45DD90
namespace gamemd {
int BuildingTypeClass::ConstructFull(char * Source, void *a2)
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

  ((TechnoTypeClass *)this)->ReadINI((int)(Source), 0); /*0x45dda1*/
  *((unsigned int *)this + 894) = -1; /*0x45ddaf*/
  *((unsigned int *)this + 895) = 0; /*0x45ddb5*/
  *((unsigned int *)this + 896) = 0; /*0x45ddbb*/
  *((unsigned char *)this + 3588) = 0; /*0x45ddc1*/
  *((unsigned int *)this + 898) = 0; /*0x45ddc7*/
  *((unsigned int *)this + 899) = dword_89C8D0; /*0x45ddd3*/
  *((unsigned int *)this + 900) = dword_89C8D4; /*0x45ddda*/
  *((unsigned int *)this + 901) = dword_89C8D8; /*0x45dde9*/
  *((unsigned int *)this + 902) = dword_89C8D0; /*0x45ddf2*/
  *((unsigned int *)this + 903) = dword_89C8D4; /*0x45ddfa*/
  *((unsigned int *)this + 904) = dword_89C8D8; /*0x45de03*/
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
  *((unsigned int *)this + 1358) = dword_89C8A0; /*0x45dfa4*/
  *((unsigned int *)this + 1359) = dword_89C8A4; /*0x45dfb0*/
  *((unsigned int *)this + 1360) = dword_89C8A8; /*0x45dfb8*/
  v3 = dword_89C8AC; /*0x45dfbb*/
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
  *((unsigned char *)this + 6032) = (unsigned int)(1); /*0x45e29e*/
  *((unsigned char *)this + 6033) = 0; /*0x45e2a5*/
  *((unsigned int *)this + 1505) = (unsigned int)(&vt_VectorClassTPoint3D); /*0x45e2ab*/
  *((unsigned int *)this + 1506) = (unsigned int)(__2_YAPAXI_Z(0xCu)); /*0x45e2ba*/
  *((unsigned char *)this + 6033) = 1; /*0x45e2c6*/
  *(unsigned int *)this = (unsigned int)(&vt_BuildingTypeClass); /*0x45e2cd*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_BuildingTypeClass); /*0x45e2d3*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_BuildingTypeClass); /*0x45e2d9*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_BuildingTypeClass); /*0x45e2e1*/
  AbstractClass::GenerateUniqueID((int)((char *)this + 4)); /*0x45e2e8*/
  v4 = dword_A83C78; /*0x45e2ed*/
  if ( dword_A83C78 < dword_A83C70 /*0x45e32b*/
    || (byte_A83C75 || !dword_A83C70)
    && dword_A83C7C > 0
    && (v5 = (*(uint8_t (**)(int *, int, unsigned int))(dword_A83C68 + 8))(
               (int *)&dword_A83C68,
               dword_A83C7C + dword_A83C70,
               0) == 0,
        v4 = dword_A83C78,
        !v5) )
  {
    dword_A83C78 = (unsigned int)(v4 + 1);
    *((unsigned int *)dword_A83C6C + v4) = (unsigned int)(this); /*0x45e33a*/
    v4 = dword_A83C78; /*0x45e33d*/
  }
  v6 = 0; /*0x45e342*/
  if ( v4 <= 0 ) /*0x45e346*/
  {
LABEL_11:
    v6 = -1; /*0x45e35a*/
  }
  else
  {
    v7 = (unsigned int *)(dword_A83C6C);
    while ( *(unsigned int *)(unsigned int)(v7) != this ) /*0x45e350*/
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
    v14 = dword_89C8D4; /*0x45e463*/
    *v12 = dword_89C8D0; /*0x45e469*/
    v12[1] = v14; /*0x45e46b*/
    v12 += 2; /*0x45e46e*/
    --v13; /*0x45e471*/
  }
  while ( v13 ); /*0x45e472*/
  v15 = (unsigned int *)((char *)this + 5592); /*0x45e474*/
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
  v20 = *(unsigned int **)&this->PreventsPlacementOverlap; /*0x45e4c6*/
  *v20 = 0; /*0x45e4d2*/
  v20[1] = 0; /*0x45e4d6*/
  v20[2] = 0; /*0x45e4d9*/
  *((unsigned char *)this + 3381) = 1; /*0x45e4dc*/
  *((unsigned char *)this + 3382) = 1; /*0x45e4e3*/
  *((unsigned char *)this + 3387) = 0; /*0x45e4ea*/
  *((unsigned char *)this + 3384) = 0; /*0x45e4f0*/
  *((unsigned char *)this + 3479) = (int)(0); /*0x45e4f6*/
  *((unsigned char *)this + 3478) = (int)(0); /*0x45e4fc*/
  *((unsigned char *)this + 3374) = 0; /*0x45e502*/
  return (int)(this); /*0x45e508*/

}
} // namespace gamemd
// 0x45E520
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_545E520(ObjectTypeClass * aP1)
{

  ((TechnoTypeClass*)((int)this))->Construct( (int)(aP1)); /*0x45e528*/
  this->Buildup[0] = 0; /*0x45e52f*/
  *(unsigned int *)&this->__pad_1714[116] = 0; /*0x45e535*/
  *(unsigned int *)&this->__pad_1714[120] = 0; /*0x45e53b*/
  this->__pad_1714[124] = (unsigned int)(1); /*0x45e541*/
  this->__pad_1714[125] = 0; /*0x45e548*/
  *(unsigned int *)&this->__pad_1714[112] = (unsigned int)(&vt_VectorClassTPoint3D); /*0x45e54e*/
  this->vtable1 = &vt_BuildingTypeClass; /*0x45e558*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_BuildingTypeClass); /*0x45e55e*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_BuildingTypeClass); /*0x45e565*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_BuildingTypeClass); /*0x45e56c*/
  return (unsigned int *)(this); /*0x45e575*/

}
} // namespace gamemd
// 0x45E580
namespace gamemd {
AbstractClass * * BuildingTypeClass::CleanupMembers(AbstractClass * a1, AbstractClass * a2)
{

  char BuildupLoaded; // al
  int v3; // eax
  void *v4; // eax
  BuildingTypeClass *v6; // [esp+8h] [ebp-4h] BYREF

  BuildupLoaded = (unsigned int)a1->BuildupLoaded; /*0x45e587*/
  a1->vtable1 = &vt_BuildingTypeClass; /*0x45e58d*/
  ((unsigned int *)a1)[0] = (unsigned int)(&vt_BuildingTypeClass); /*0x45e595*/
  ((unsigned int *)a1)[0] = (unsigned int)(&vt_BuildingTypeClass); /*0x45e59c*/
  ((unsigned int *)a1)[0] = (unsigned int)(&vt_BuildingTypeClass); /*0x45e5a3*/
  if ( BuildupLoaded && a1->Buildup[0] ) /*0x45e5ac*/
  {
    __3_YAXPAX_Z((void *)a1->Buildup[0]); /*0x45e5b7*/
    a1->Buildup[0] = 0; /*0x45e5bf*/
    a1->BuildupLoaded = 0; /*0x45e5c5*/
  }
  if ( a1->__pad_F70[1452] && *(unsigned int *)&a1->__pad_F70[1448] ) /*0x45e5d3*/
  {
    __3_YAXPAX_Z(*(void **)&a1->__pad_F70[1448]); /*0x45e5de*/
    *(unsigned int *)&a1->__pad_F70[1448] = 0; /*0x45e5e6*/
    a1->__pad_F70[1452] = 0; /*0x45e5ec*/
  }
  if ( a1->__pad_F70[1400] && *(unsigned int *)&a1->__pad_F70[1396] ) /*0x45e5fa*/
  {
    __3_YAXPAX_Z(*(void **)&a1->__pad_F70[1396]); /*0x45e605*/
    *(unsigned int *)&a1->__pad_F70[1396] = 0; /*0x45e60d*/
    a1->__pad_F70[1400] = 0; /*0x45e613*/
  }
  if ( a1->__pad_F70[1408] && *(unsigned int *)&a1->__pad_F70[1404] ) /*0x45e621*/
  {
    __3_YAXPAX_Z(*(void **)&a1->__pad_F70[1404]); /*0x45e62c*/
    *(unsigned int *)&a1->__pad_F70[1404] = 0; /*0x45e634*/
    a1->__pad_F70[1408] = 0; /*0x45e63a*/
  }
  if ( a1->__pad_F70[1416] && *(unsigned int *)&a1->__pad_F70[1412] ) /*0x45e648*/
  {
    __3_YAXPAX_Z(*(void **)&a1->__pad_F70[1412]); /*0x45e653*/
    *(unsigned int *)&a1->__pad_F70[1412] = 0; /*0x45e65b*/
    a1->__pad_F70[1416] = 0; /*0x45e661*/
  }
  if ( a1->__pad_F70[1424] && *(unsigned int *)&a1->__pad_F70[1420] ) /*0x45e66f*/
  {
    __3_YAXPAX_Z(*(void **)&a1->__pad_F70[1420]); /*0x45e67a*/
    *(unsigned int *)&a1->__pad_F70[1420] = 0; /*0x45e682*/
    a1->__pad_F70[1424] = 0; /*0x45e688*/
  }
  if ( a1->__pad_F70[1432] && *(unsigned int *)&a1->__pad_F70[1428] ) /*0x45e696*/
  {
    __3_YAXPAX_Z(*(void **)&a1->__pad_F70[1428]); /*0x45e6a1*/
    *(unsigned int *)&a1->__pad_F70[1428] = 0; /*0x45e6a9*/
    a1->__pad_F70[1432] = 0; /*0x45e6af*/
  }
  AbstractClass::AnnounceExpiredPointer(a1, 1); /*0x45e6b9*/
  v6 = (gamemd::BuildingTypeClass *)(a1); /*0x45e6ce*/
  v3 = (*(int (**)(unsigned int *, BuildingTypeClass **))(dword_A83C68 + 16))( (unsigned int *)(&dword_A83C68), (BuildingTypeClass **)(&v6)); /*0x45e6d2*/
  if ( v3 != -1 && v3 < dword_A83C78 && v3 < --dword_A83C78 ) /*0x45e6ed*/
  {
    do /*0x45e705*/
    {
      ++v3; /*0x45e6f5*/
      *((unsigned int *)dword_A83C6C + v3 - 1) = *((unsigned int *)dword_A83C6C + v3); /*0x45e6f9*/
    }
    while ( v3 < dword_A83C78 ); /*0x45e705*/
  }
  v4 = *(void **)&a1->__pad_1714[116]; /*0x45e707*/
  *(unsigned int *)&a1->__pad_1714[112] = (unsigned int)(&vt_VectorClassTPoint3D); /*0x45e70d*/
  if ( v4 && a1->__pad_1714[125] ) /*0x45e71b*/
  {
    __3_YAXPAX_Z(v4); /*0x45e724*/
    *(unsigned int *)&a1->__pad_1714[116] = 0; /*0x45e72c*/
  }
  a1->__pad_1714[125] = 0; /*0x45e734*/
  *(unsigned int *)&a1->__pad_1714[120] = 0; /*0x45e73a*/
  return TechnoTypeClass::DTOR(  (void *)((int)a1)); /*0x45e745*/

}
} // namespace gamemd
// 0x45E970
namespace gamemd {
AbstractClass * * BuildingTypeClass::LoadRepairAnimations()
{

  int v1; // ecx
  int v2; // edi
  int v3; // ebp
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // [esp+10h] [ebp-204h]
  char Buffer_v[512]; // [esp+14h] [ebp-200h] BYREF

  v2 = v1; /*0x45e97a*/
  ProcessDataCCFileClass(); /*0x45e97c*/
  FileSystem_POWEROFF_SHP = (int)(SearchMIXFile((char *)(aPoweroffShp), 0)); /*0x45e994*/
  FileSystem_WRENCH_SHP = (int)(SearchMIXFile((char *)(aWrenchShp), 0)); /*0x45e99e*/
  v3 = 0; /*0x45e9aa*/
  v9 = 0; /*0x45e9ae*/
  if ( dword_A83C78 > 0 ) /*0x45e9b2*/
  {
    do /*0x45eb42*/
    {
      v4 = *((unsigned int *)dword_A83C6C + v3); /*0x45e9c1*/
      if ( v9 <= *(char *)(v4 + 5895) ) /*0x45e9cd*/
        v9 = *(char *)(v4 + 5895); /*0x45e9cf*/
      if ( *(unsigned char *)(v4 + 556) ) /*0x45e9d3*/
      {
        if ( *(unsigned char *)(v4 + 5984) ) /*0x45e9df*/
        {
          if ( *(unsigned int *)(v4 + 164) ) /*0x45ea23*/
          {
            __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x45ea2e*/
            *(unsigned int *)(v4 + 164) = 0; /*0x45ea36*/
            *(unsigned char *)(v4 + 168) = 0; /*0x45ea3c*/
          }
        }
        else
        {
          _makepath(Buffer_v, 0, 0, (const char *)(v4 + 504), (const char *)&off_7E1BC6 + 112 * v2); /*0x45ea08*/
          *(unsigned int *)(v4 + 164) = (unsigned int)(SearchMIXFile( (char *)(Buffer_v), 0)); /*0x45ea1b*/
        }
        if ( *(unsigned char *)(v4 + 5985) ) /*0x45ea42*/
        {
          if ( *(unsigned int *)(v4 + 3584) ) /*0x45ea86*/
          {
            __3_YAXPAX_Z(*(void **)(v4 + 3584)); /*0x45ea91*/
            *(unsigned int *)(v4 + 3584) = 0; /*0x45ea99*/
            *(unsigned char *)(v4 + 3588) = 0; /*0x45ea9f*/
          }
        }
        else
        {
          _makepath(Buffer_v, 0, 0, (const char *)(v4 + 3676), (const char *)&off_7E1BC6 + 112 * v2); /*0x45ea6b*/
          *(unsigned int *)(v4 + 3584) = (unsigned int)(SearchMIXFile( (char *)(Buffer_v), 0)); /*0x45ea7e*/
        }
        v5 = *(unsigned int *)(v4 + 3584); /*0x45eaa5*/
        if ( v5 ) /*0x45eaad*/
        {
          v6 = *(int16_t *)(v5 + 6); /*0x45eab3*/
          v7 = 1; /*0x45eab9*/
          if ( v6 ) /*0x45eabe*/
            v7 = 75 / v6; /*0x45eac6*/
          *(unsigned int *)(v4 + 3844) = 0; /*0x45eac8*/
          *(unsigned int *)(v4 + 3848) = v6; /*0x45eace*/
          *(unsigned int *)(v4 + 3852) = v7; /*0x45ead4*/
        }
      }
      else if ( *(unsigned char *)(v4 + 567) ) /*0x45eadc*/
      {
        if ( *(unsigned char *)(v4 + 5984) && *(unsigned int *)(v4 + 164) ) /*0x45eaec*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x45eaf7*/
          *(unsigned int *)(v4 + 164) = 0; /*0x45eaff*/
          *(unsigned char *)(v4 + 168) = 0; /*0x45eb05*/
        }
        if ( *(unsigned char *)(v4 + 5985) && *(unsigned int *)(v4 + 3584) ) /*0x45eb13*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 3584)); /*0x45eb1e*/
          *(unsigned int *)(v4 + 3584) = 0; /*0x45eb26*/
          *(unsigned char *)(v4 + 3588) = 0; /*0x45eb2c*/
        }
        ((BuildingTypeClass *)(v4))->LoadAnimations(v2); /*0x45eb35*/
      }
      ++v3; /*0x45eb3f*/
    }
    while ( v3 < dword_A83C78 ); /*0x45eb42*/
    if ( v9 ) /*0x45eb4c*/
    {
      if ( dword_89DDC0 ) /*0x45eb56*/
        (*(void (**)(Draw *, int))dword_89DDC0->Draw_field_00)( (Draw *)(dword_89DDC0), 1); /*0x45eb5c*/
      v8 = (int)(__2_YAPAXI_Z(0x20u)); /*0x45eb65*/
      if ( v8 ) /*0x45eb6c*/
      {
        *(unsigned int *)(v8 + 12) = 0; /*0x45eb72*/
        *(unsigned int *)v8 = (unsigned int)(&XSurface_Vtable); /*0x45eb78*/
        *(unsigned int *)(v8 + 4) = v9 + 16; /*0x45eb80*/
        *(unsigned int *)(v8 + 8) = v9 + 16; /*0x45eb8b*/
        *(unsigned int *)(v8 + 16) = 1; /*0x45eb8e*/
        ((Buffer*)((Buffer *)(v8 + 20)))->Init(0, (v9 + 16) * (v9 + 16)); /*0x45eb95*/
        *(unsigned int *)v8 = (unsigned int)(&BSurface_Vtable); /*0x45eb9a*/
        dword_89DDC0 = (unsigned int)((Draw *)v8); /*0x45eba0*/
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
void* BuildingTypeClass::LoadAnimations(int aP1)
{

  int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  unsigned char *v7; // esi
  void *FileSHP; // eax
  unsigned char *v9; // esi
  void *v10; // eax
  int v11; // eax
  unsigned char *v12; // esi
  void *v13; // eax
  unsigned char *v14; // esi
  void *v15; // eax
  unsigned char *v16; // esi
  void *v17; // eax
  int v18; // eax
  unsigned char *v19; // esi
  void *v20; // eax
  const char *v21; // edi
  int v22; // eax
  int v23; // [esp+10h] [ebp-158h]
  char Filename[64]; // [esp+14h] [ebp-154h] BYREF
  char Ext[16]; // [esp+54h] [ebp-114h] BYREF
  char Source[260]; // [esp+64h] [ebp-104h] BYREF

  if ( !*((unsigned char *)this + 5985) && strlen((const char *)((char *)this + 3676)) ) /*0x45f257*/
  {
    _makepath(Source, 0, 0, (const char *)((char *)this + 3676),(const char *)(::Ext)); /*0x45f26f*/
    TheaterObjectTypeClassSpecificID( (char *)(Source), aP1); /*0x45f282*/
    v3 = (int)(SearchMIXFile( (char *)(Source), 0)); /*0x45f28d*/
    if ( !v3 ) /*0x45f294*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45f29a*/
      v3 = (int)(SearchMIXFile( (char *)(Source), 0)); /*0x45f2a5*/
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
      {
        LOWORD(v6) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5400) * 900.0 / (double)v23); /*0x45f2f7*/
        v4 = v6; /*0x45f2fc*/
      }
      *((unsigned int *)this + 961) = 0; /*0x45f2fe*/
      *((unsigned int *)this + 962) = v5; /*0x45f304*/
      *((unsigned int *)this + 963) = v4; /*0x45f30a*/
    }
  }
  /*0x45f32d*/
    ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x45f32d*/ (uint8_t *)((char *)this + 504), aDeployinganim, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen( (const char *)(Filename)) ) /*0x45f336*/
  {
    _makepath(Source, 0, 0, Filename,(const char *)(::Ext)); /*0x45f357*/
    TheaterObjectTypeClassSpecificID( (char *)(Source), aP1); /*0x45f36a*/
    v7 = (unsigned char *)((char *)this + 5352); /*0x45f375*/
    if ( *((unsigned char *)this + 5352) && *((unsigned int *)this + 1337) ) /*0x45f37f*/
    {
      __3_YAXPAX_Z(*(void **)&this->q14E4); /*0x45f38a*/
      *((unsigned int *)this + 1337) = 0; /*0x45f392*/
      *v7 = 0; /*0x45f398*/
    }
    FileSHP = (void *)LoadFileSHP((char *)(Source),(bool *)((bool *)((char *)this + 5352))); /*0x45f3a0*/
    *((unsigned int *)this + 1337) = (unsigned int)(FileSHP); /*0x45f3a7*/
    if ( !FileSHP ) /*0x45f3ad*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45f3b3*/
      if ( *v7 && *((unsigned int *)this + 1337) ) /*0x45f3bc*/
      {
        __3_YAXPAX_Z(*(void **)&this->q14E4); /*0x45f3c7*/
        *((unsigned int *)this + 1337) = 0; /*0x45f3cf*/
        *v7 = (unsigned int)(0); /*0x45f3d5*/
      }
      *((unsigned int *)this + 1337) = (unsigned int)(LoadFileSHP((char *)(Source),(bool *)((bool *)((char *)this + 5352)))); /*0x45f3e2*/
    }
  }
  /*0x45f405*/
    ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x45f405*/ (uint8_t *)((char *)this + 504), aRoofdeployinga, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen( (const char *)(Filename)) ) /*0x45f40e*/
  {
    _makepath(Source, 0, 0, Filename,(const char *)(::Ext)); /*0x45f42f*/
    TheaterObjectTypeClassSpecificID( (char *)(Source), aP1); /*0x45f442*/
    v9 = (unsigned char *)((char *)this + 5376); /*0x45f44d*/
    if ( *((unsigned char *)this + 5376) && *((unsigned int *)this + 1343) ) /*0x45f457*/
    {
      __3_YAXPAX_Z(*(void **)&this->RoofDeployingAnim); /*0x45f462*/
      *((unsigned int *)this + 1343) = 0; /*0x45f46a*/
      *v9 = 0; /*0x45f470*/
    }
    v10 = (void *)LoadFileSHP((char *)(Source),(bool *)((bool *)((char *)this + 5376))); /*0x45f478*/
    *((unsigned int *)this + 1343) = (unsigned int)(v10); /*0x45f47f*/
    if ( !v10 ) /*0x45f485*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45f48b*/
      if ( *v9 && *((unsigned int *)this + 1343) ) /*0x45f494*/
      {
        __3_YAXPAX_Z(*(void **)&this->RoofDeployingAnim); /*0x45f49f*/
        *((unsigned int *)this + 1343) = 0; /*0x45f4a7*/
        *v9 = (unsigned int)(0); /*0x45f4ad*/
      }
      *((unsigned int *)this + 1343) = (unsigned int)(LoadFileSHP((char *)(Source),(bool *)((bool *)((char *)this + 5352)))); /*0x45f4be*/
    }
  }
  /*0x45f4e1*/
    ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x45f4e1*/ (uint8_t *)((char *)this + 504), aDooranim, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen( (const char *)(Filename)) ) /*0x45f4ea*/
  {
    _makepath(Source, 0, 0, Filename,(const char *)(::Ext)); /*0x45f507*/
    TheaterObjectTypeClassSpecificID( (char *)(Source), aP1); /*0x45f51a*/
    v11 = (int)(SearchMIXFile( (char *)(Source), 0)); /*0x45f525*/
    *((unsigned int *)this + 1347) = v11; /*0x45f52c*/
    if ( !v11 ) /*0x45f532*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45f538*/
      *((unsigned int *)this + 1347) = (unsigned int)(SearchMIXFile( (char *)(Source), 0)); /*0x45f548*/
    }
  }
  /*0x45f565*/
    ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x45f565*/ (uint8_t *)((char *)this + 504), aUnderdooranim, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen( (const char *)(Filename)) ) /*0x45f56e*/
  {
    _makepath(Source, 0, 0, Filename,(const char *)(::Ext)); /*0x45f58f*/
    TheaterObjectTypeClassSpecificID( (char *)(Source), aP1); /*0x45f5a2*/
    v12 = (unsigned char *)((char *)this + 5360); /*0x45f5ad*/
    if ( *((unsigned char *)this + 5360) && *((unsigned int *)this + 1339) ) /*0x45f5b7*/
    {
      __3_YAXPAX_Z(*(void **)&this->q14EC); /*0x45f5c2*/
      *((unsigned int *)this + 1339) = 0; /*0x45f5ca*/
      *v12 = 0; /*0x45f5d0*/
    }
    v13 = (void *)LoadFileSHP((char *)(Source),(bool *)((bool *)((char *)this + 5360))); /*0x45f5d8*/
    *((unsigned int *)this + 1339) = (unsigned int)(v13); /*0x45f5df*/
    if ( !v13 ) /*0x45f5e5*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45f5eb*/
      if ( *v12 && *((unsigned int *)this + 1339) ) /*0x45f5f4*/
      {
        __3_YAXPAX_Z(*(void **)&this->q14EC); /*0x45f5ff*/
        *((unsigned int *)this + 1339) = 0; /*0x45f607*/
        *v12 = (unsigned int)(0); /*0x45f60d*/
      }
      *((unsigned int *)this + 1339) = (unsigned int)(SearchMIXFile( (char *)(Source), 0)); /*0x45f61a*/
    }
  }
  v14 = (unsigned char *)((char *)this + 5368); /*0x45f626*/
  if ( *((unsigned char *)this + 5368) && *((unsigned int *)this + 1341) ) /*0x45f630*/
  {
    __3_YAXPAX_Z(*(void **)&this->q14F4); /*0x45f63b*/
    *((unsigned int *)this + 1341) = 0; /*0x45f643*/
    *v14 = 0; /*0x45f649*/
  }
  /*0x45f668*/
    ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x45f668*/ (uint8_t *)((char *)this + 504), aRubble, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen( (const char *)(Filename)) ) /*0x45f671*/
  {
    _makepath(Source, 0, 0, Filename,(const char *)(::Ext)); /*0x45f68e*/
    TheaterObjectTypeClassSpecificID( (char *)(Source), aP1); /*0x45f6a1*/
    v15 = (void *)LoadFileSHP((char *)(Source),(bool *)((bool *)((char *)this + 5368))); /*0x45f6ac*/
    *((unsigned int *)this + 1341) = (unsigned int)(v15); /*0x45f6b3*/
    if ( !v15 ) /*0x45f6b9*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45f6bf*/
      if ( *v14 && *((unsigned int *)this + 1341) ) /*0x45f6c8*/
      {
        __3_YAXPAX_Z(*(void **)&this->q14F4); /*0x45f6d3*/
        *((unsigned int *)this + 1341) = 0; /*0x45f6db*/
        *v14 = 0; /*0x45f6e1*/
      }
      *((unsigned int *)this + 1341) = (unsigned int)(SearchMIXFile( (char *)(Source), 0)); /*0x45f6ee*/
    }
  }
  /*0x45f711*/
    ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x45f711*/ (uint8_t *)((char *)this + 504), aUnderroofdoora, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen( (const char *)(Filename)) ) /*0x45f71a*/
  {
    _makepath(Source, 0, 0, Filename,(const char *)(::Ext)); /*0x45f73b*/
    TheaterObjectTypeClassSpecificID( (char *)(Source), aP1); /*0x45f74e*/
    v16 = (unsigned char *)((char *)this + 5384); /*0x45f759*/
    if ( *((unsigned char *)this + 5384) && *((unsigned int *)this + 1345) ) /*0x45f763*/
    {
      __3_YAXPAX_Z(*(void **)&this->UnderRoofDoorAnim); /*0x45f76e*/
      *((unsigned int *)this + 1345) = 0; /*0x45f776*/
      *v16 = 0; /*0x45f77c*/
    }
    v17 = (void *)LoadFileSHP((char *)(Source),(bool *)((bool *)((char *)this + 5384))); /*0x45f784*/
    *((unsigned int *)this + 1345) = (unsigned int)(v17); /*0x45f78b*/
    if ( !v17 ) /*0x45f791*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45f797*/
      if ( *v16 && *((unsigned int *)this + 1345) ) /*0x45f7a0*/
      {
        __3_YAXPAX_Z(*(void **)&this->UnderRoofDoorAnim); /*0x45f7ab*/
        *((unsigned int *)this + 1345) = 0; /*0x45f7b3*/
        *v16 = 0; /*0x45f7b9*/
      }
      *((unsigned int *)this + 1345) = (unsigned int)(SearchMIXFile( (char *)(Source), 0)); /*0x45f7c6*/
    }
  }
  /*0x45f7e9*/
    ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x45f7e9*/ (uint8_t *)((char *)this + 504), aSpecialzoverla, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen( (const char *)(Filename)) ) /*0x45f7f2*/
  {
    _makepath(Source, 0, 0, Filename,(const char *)(::Ext)); /*0x45f80f*/
    TheaterObjectTypeClassSpecificID( (char *)(Source), aP1); /*0x45f822*/
    v18 = (int)(SearchMIXFile( (char *)(Source), 0)); /*0x45f82d*/
    *((unsigned int *)this + 1348) = v18; /*0x45f834*/
    if ( !v18 ) /*0x45f83a*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45f840*/
      *((unsigned int *)this + 1348) = (unsigned int)(SearchMIXFile( (char *)(Source), 0)); /*0x45f850*/
    }
  }
  /*0x45f86d*/
    ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x45f86d*/ (uint8_t *)((char *)this + 504), aBibshape, &g_INI_DefaultBuffer, Filename, 64);
  if ( strlen( (const char *)(Filename)) ) /*0x45f876*/
  {
    _makepath(Source, 0, 0, Filename,(const char *)(::Ext)); /*0x45f897*/
    TheaterObjectTypeClassSpecificID( (char *)(Source), aP1); /*0x45f8aa*/
    v19 = (unsigned char *)((char *)this + 5404); /*0x45f8b5*/
    if ( *((unsigned char *)this + 5404) && *((unsigned int *)this + 1350) ) /*0x45f8bf*/
    {
      __3_YAXPAX_Z(*(void **)&this->BibShape); /*0x45f8ca*/
      *((unsigned int *)this + 1350) = 0; /*0x45f8d2*/
      *v19 = (unsigned int)(0); /*0x45f8d8*/
    }
    v20 = (void *)LoadFileSHP( (char *)(Source), (bool *)((bool *)((char *)this + 5404))); /*0x45f8e0*/
    *((unsigned int *)this + 1350) = (unsigned int)(v20); /*0x45f8e7*/
    if ( !v20 ) /*0x45f8ed*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45f8f3*/
      if ( *v19 && *((unsigned int *)this + 1350) ) /*0x45f8fc*/
      {
        __3_YAXPAX_Z(*(void **)&this->BibShape); /*0x45f907*/
        *((unsigned int *)this + 1350) = (unsigned int)(0); /*0x45f90f*/
        *v19 = (unsigned int)(0); /*0x45f915*/
      }
      *((unsigned int *)this + 1350) = (unsigned int)(SearchMIXFile( (char *)(Source), 0)); /*0x45f922*/
    }
  }
  /*0x45f945*/
    ((INIClass*)((INIClass *)&DSurface_ViewBounds.__pad_FC[228]))->GetString(/*0x45f945*/ (uint8_t *)((char *)this + 504), (uint8_t *)g_INI_Key_Image, &g_INI_DefaultBuffer, Filename, 64);
  if ( !*((unsigned char *)this + 556) || aP1 == -1 ) /*0x45f95c*/
    v21 = (const char *)(::Ext); /*0x45f97a*/
  else
    v21 = (const char *)(&off_7E1BC6 + 28 * aP1); /*0x45f96e*/
  strcpy( (char *)(Ext), (const char *)(v21)); /*0x45f993*/
  if ( strlen( (const char *)(Filename)) ) /*0x45f9a2*/
    _makepath(Source, 0, 0, Filename, Ext); /*0x45f9bd*/
  else
    _makepath(Source, 0, 0, (const char *)((char *)this + 504), Ext); /*0x45f9cd*/
  TheaterObjectTypeClassSpecificID( (char *)(Source), aP1); /*0x45f9e0*/
  strncpy( (char *)((char *)this + 5994), (const char *)(Source), 0x13u); /*0x45f9f3*/
  if ( !*((unsigned char *)this + 5984) ) /*0x45f9f8*/
  {
    v22 = (int)(SearchMIXFile( (char *)(Source), 0)); /*0x45fa0b*/
    *((unsigned int *)this + 41) = v22; /*0x45fa12*/
    if ( !v22 ) /*0x45fa18*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45fa1e*/
      strncpy( (char *)((char *)this + 5994), (const char *)(Source), 0x13u); /*0x45fa2b*/
      *((unsigned int *)this + 41) = (unsigned int)(SearchMIXFile( (char *)(Source), 0)); /*0x45fa3e*/
    }
    if ( !*((unsigned int *)this + 41) ) /*0x45fa44*/
    {
      ((ObjectTypeClass *)((ObjectTypeClass *)Source))->SetRTTI71(); /*0x45fa50*/
      strncpy( (char *)((char *)this + 5994), (const char *)(Source), 0x13u); /*0x45fa5d*/
      *((unsigned int *)this + 41) = (unsigned int)(SearchMIXFile( (char *)(Source), 0)); /*0x45fa70*/
    }
  }
  ((BuildingTypeClass *)((BuildingTypeClass *)this))->LoadVoxel(); /*0x45fa78*/

}
} // namespace gamemd
// 0x45FA90
namespace gamemd {
void BuildingTypeClass::LoadVoxel()
{

  char *v2; // eax
  void *v3; // esi
  File *v4; // eax
  unsigned int *FileVXL; // eax
  void *v6; // esi
  File *v7; // eax
  unsigned int *FileHVA; // eax
  int Info; // eax
  char *v10; // eax
  char *v11; // eax
  unsigned char *v12; // eax
  void *v13; // esi
  File *v14; // eax
  unsigned int *v15; // eax
  void *v16; // esi
  File *v17; // eax
  unsigned int *v18; // eax
  int v19; // eax
  char *v20; // [esp-Ch] [ebp-2D8h]
  char *v21; // [esp-Ch] [ebp-2D8h]
  CCFileClass v22; // [esp+8h] [ebp-2C4h] BYREF
  int v23[3]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  CCFileClass v25; // [esp+74h] [ebp-258h] BYREF
  int v26[3]; // [esp+CCh] [ebp-200h] BYREF
  int v27; // [esp+D8h] [ebp-1F4h]
  CCFileClass v28; // [esp+E0h] [ebp-1ECh] BYREF
  int v29[3]; // [esp+138h] [ebp-194h] BYREF
  int v30; // [esp+144h] [ebp-188h]
  char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
  char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
  char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
  char String_v[252]; // [esp+1D0h] [ebp-FCh] BYREF

  if ( this->TurretAnimIsVoxel || this->BarrelAnimIsVoxel ) /*0x45faa4*/
  {
    strcpy( (char *)(Destination), (const char *)(&this->__pad_F70[576])); /*0x45fadf*/
    _makepath(Buffer, 0, 0, Destination,(const char *)(g_Str_File__VXL)); /*0x45faf3*/
    v20 = _strupr((char *)(off_8194A8)); /*0x45fb05*/
    v2 = _strupr(String_v); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      ((CCFileClass*)&v25)->Construct( (char *)(Buffer)); /*0x45fb3b*/
      if ( (uint8_t)((CCFileClass *)(&v25))->Open(0) ) /*0x45fb48*/
      {
        v3 = (void *)((unsigned int *)this)[0]; /*0x45fb55*/
        if ( v3 ) /*0x45fb5d*/
        {
          ((WaveClass*)(WaveClass *)((unsigned int *)this)[0])->Destroy(); /*0x45fb61*/
          __3_YAXPAX_Z(v3); /*0x45fb67*/
        }
        v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x45fb71*/
        if ( v4 ) /*0x45fb7b*/
          FileVXL = ((File *)(v4))->LoadFileVXL((int)&v25, 0); /*0x45fb85*/
        else
          FileVXL = (unsigned int *)(0); /*0x45fb8c*/
        ((unsigned int *)this)[0] = (int)FileVXL; /*0x45fb8e*/
        _makepath(Buffer, 0, 0, Destination,(const char *)(g_Str_File__HVA)); /*0x45fbab*/
        ((CCFileClass*)&v22)->Construct( (char *)(Buffer)); /*0x45fbbf*/
        v6 = (void *)((unsigned int *)this)[0]; /*0x45fbc4*/
        if ( v6 ) /*0x45fbcc*/
        {
          ((String *)((unsigned int *)this)[0])->Release(); /*0x45fbd0*/
          __3_YAXPAX_Z(v6); /*0x45fbd6*/
        }
        v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x45fbe0*/
        if ( v7 ) /*0x45fbea*/
          FileHVA = ((File *)(v7))->LoadFileHVA((int)&v22); /*0x45fbf3*/
        else
          FileHVA = (unsigned int *)(0); /*0x45fbfa*/
        ((unsigned int *)this)[0] = (int)FileHVA; /*0x45fbfe*/
        if ( FileHVA && !*(unsigned char *)FileHVA ) /*0x45fc06*/
        {
          Info = (unsigned int)(((VoxelSection *)((VoxelSection *)((unsigned int *)this)[0]))->GetInfo(0, 0)); /*0x45fc12*/
          ((Matrix *)((Matrix *)((unsigned int *)this)[0]))->Scale(*(float *)(Info + 12)); /*0x45fc21*/
        }
        *(unsigned int *)v22.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x45fc2a*/
        v24 = 0; /*0x45fc32*/
        ((Vector *)((int)v23))->Clear((int)((Vector *)((int)v23))); /*0x45fc36*/
        *(unsigned int *)v22.CDFileClass = (unsigned int)(&off_7E1668); /*0x45fc3f*/
        ((BufferIOFileClass *)((BufferIOFileClass *)&v22))->Dtor(); /*0x45fc43*/
      }
      v21 = _strupr((char *)(off_8194A8)); /*0x45fc55*/
      v10 = _strupr(v32); /*0x45fc5e*/
      v11 = strstr(v10, v21); /*0x45fc67*/
      if ( v11 ) /*0x45fc71*/
      {
        *v11 = 66; /*0x45fc73*/
        v12 = (unsigned char *)(v11 + 1); /*0x45fc76*/
        *v12++ = 65; /*0x45fc77*/
        *v12++ = 82; /*0x45fc7b*/
        *v12 = (unsigned int)(76); /*0x45fc7f*/
        v12[1] = 0; /*0x45fc82*/
      }
      *(unsigned int *)v25.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x45fc8c*/
      v27 = 0; /*0x45fc94*/
      ((Vector *)((int)v26))->Clear((int)((Vector *)((int)v26))); /*0x45fc9b*/
      *(unsigned int *)v25.CDFileClass = (unsigned int)(&off_7E1668); /*0x45fca4*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v25))->Dtor(); /*0x45fca8*/
    }
    else if ( this->BarrelAnimIsVoxel ) /*0x45fcaf*/
    {
      strncpy( (char *)(Destination), (const char *)(this->__pad_1714), 0x80u); /*0x45fccb*/
    }
    _makepath(Buffer, 0, 0, Destination,(const char *)(g_Str_File__VXL)); /*0x45fcea*/
    ((CCFileClass*)&v28)->Construct( (char *)(Buffer)); /*0x45fd01*/
    if ( (uint8_t)((CCFileClass *)(&v28))->Open(0) ) /*0x45fd0e*/
    {
      v13 = (void *)((unsigned int *)this)[1]; /*0x45fd1b*/
      if ( v13 ) /*0x45fd23*/
      {
        ((WaveClass*)(WaveClass *)((unsigned int *)this)[1])->Destroy(); /*0x45fd27*/
        __3_YAXPAX_Z(v13); /*0x45fd2d*/
      }
      v14 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x45fd37*/
      if ( v14 ) /*0x45fd41*/
        v15 = ((File *)(v14))->LoadFileVXL((int)&v28, 0); /*0x45fd4e*/
      else
        v15 = (unsigned int *)(0); /*0x45fd55*/
      ((unsigned int *)this)[1] = (int)v15; /*0x45fd63*/
      _makepath(Buffer, 0, 0, Destination,(const char *)(g_Str_File__HVA)); /*0x45fd74*/
      ((CCFileClass*)&v22)->Construct( (char *)(Buffer)); /*0x45fd88*/
      v16 = (void *)((unsigned int *)this)[2]; /*0x45fd8d*/
      if ( v16 ) /*0x45fd95*/
      {
        ((String *)((unsigned int *)this)[2])->Release(); /*0x45fd99*/
        __3_YAXPAX_Z(v16); /*0x45fd9f*/
      }
      v17 = (File *)__2_YAPAXI_Z(0x10u); /*0x45fda9*/
      if ( v17 ) /*0x45fdb3*/
        v18 = ((File *)(v17))->LoadFileHVA((int)&v22); /*0x45fdbc*/
      else
        v18 = (unsigned int *)(0); /*0x45fdc3*/
      ((unsigned int *)this)[2] = (int)v18; /*0x45fdc7*/
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(unsigned char *)v18 ) /*0x45fdcf*/
        {
          v19 = ((VoxelSection *)((VoxelSection *)((unsigned int *)this)[1]))->GetInfo(0, 0); /*0x45fddb*/
          ((Matrix *)((Matrix *)((unsigned int *)this)[2]))->Scale(*(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      *(unsigned int *)v22.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x45fdf3*/
      v24 = 0; /*0x45fdfb*/
      ((Vector *)((int)v23))->Clear((int)((Vector *)((int)v23))); /*0x45fdff*/
      *(unsigned int *)v22.CDFileClass = (unsigned int)(&off_7E1668); /*0x45fe08*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v22))->Dtor(); /*0x45fe0c*/
    }
    *(unsigned int *)v28.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x45fe18*/
    v30 = 0; /*0x45fe23*/
    ((Vector *)((int)v29))->Clear((int)((Vector *)((int)v29))); /*0x45fe2a*/
    *(unsigned int *)v28.CDFileClass = (unsigned int)(&off_7E1668); /*0x45fe36*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v28))->Dtor(); /*0x45fe3d*/
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
  Checksummer *v54; // [esp+Ch] [ebp+4h]

  ((BuildingTypeClass *)(int)this)->ProcessPower( (int *)(&v54->crcValue)); /*0x464b39*/
  ((Checksummer *)(v54))->Add_double((&this->GateCloseDelay)[0], (&this->GateCloseDelay)[1]); /*0x464b4e*/
  Power::TimerProcess(this->LightVisibility); /*0x464b5c*/
  Power::TimerProcess(this->LightIntensity); /*0x464b6a*/
  Power::TimerProcess(this->LightRedTint); /*0x464b78*/
  Power::TimerProcess(this->LightGreenTint); /*0x464b86*/
  Power::TimerProcess(this->LightBlueTint); /*0x464b94*/
  ((Checksum *)((Checksum *)v54))->AddString((uint8_t *)this->BuildupFile_0x10); /*0x464ba2*/
  ((Checksum *)((Checksum *)v54))->AddString((uint8_t *)this->__pad_E88); /*0x464bb0*/
  Power::TimerProcess(this->Adjacent); /*0x464bbe*/
  Power::TimerProcess(((unsigned int *)&this->Factory)[0]); /*0x464bcc*/
  Power::TimerProcess(this->PowerBonus); /*0x464bda*/
  Power::TimerProcess(this->PowerDrain); /*0x464be8*/
  Power::TimerProcess(this->ExtraPowerBonus); /*0x464bf6*/
  Power::TimerProcess(this->ExtraPowerDrain); /*0x464c04*/
  Power::TimerProcess((&this->Foundation)[0]); /*0x464c12*/
  Power::TimerProcess(this->Height); /*0x464c20*/
  Power::TimerProcess(this->OccupyHeight); /*0x464c2e*/
  Power::TimerProcess(this->MidPoint); /*0x464c3c*/
  Power::TimerProcess(this->DoorStages); /*0x464c4a*/
  ((Checksummer*)v54)->Add_Buffer( (unsigned char)((uint8_t *)this->BuildingAnimFrame), 72); /*0x464c5a*/
  ((Checksummer*)v54)->Add_Buffer( (unsigned char)((uint8_t *)&(&this->BuildingAnim)[12]), 1428); /*0x464c6d*/
  Power::TimerProcess(*(unsigned int *)&this->__pad_F70[1392]); /*0x464c7b*/
  v2 = Power::TimerProcess(*(unsigned int *)&this->__pad_F70[1444]); /*0x464c89*/
  LOBYTE(v2) = this->HoverPad; /*0x464c8e*/
  ((Power *)((Power *)v54))->FlagProcess(v2); /*0x464c97*/
  LOBYTE(v3) = this->IsPlug; /*0x464c9c*/
  ((Power *)((Power *)v54))->FlagProcess(v3); /*0x464ca5*/
  LOBYTE(v4) = this->IsTemple; /*0x464caa*/
  v5 = ((Power *)((Power *)v54))->FlagProcess(v4); /*0x464cb3*/
  LOBYTE(v5) = this->HasSpotlight; /*0x464cb8*/
  ((Power *)((Power *)v54))->FlagProcess(v5); /*0x464cc1*/
  LOBYTE(v6) = this->BaseNormal; /*0x464cc6*/
  ((Power *)((Power *)v54))->FlagProcess(v6); /*0x464ccf*/
  LOBYTE(v7) = this->EligibileForAllyBuilding; /*0x464cd4*/
  v8 = ((Power *)((Power *)v54))->FlagProcess(v7); /*0x464cdd*/
  LOBYTE(v8) = this->NeedsEngineer; /*0x464ce2*/
  ((Power *)((Power *)v54))->FlagProcess(v8); /*0x464ceb*/
  LOBYTE(v9) = this->Bib; /*0x464cf0*/
  ((Power *)((Power *)v54))->FlagProcess(v9); /*0x464cf9*/
  LOBYTE(v10) = this->Wall; /*0x464cfe*/
  v11 = ((Power *)((Power *)v54))->FlagProcess(v10); /*0x464d07*/
  LOBYTE(v11) = this->Capturable; /*0x464d0c*/
  ((Power *)((Power *)v54))->FlagProcess(v11); /*0x464d15*/
  LOBYTE(v12) = this->Powered; /*0x464d1a*/
  ((Power *)((Power *)v54))->FlagProcess(v12); /*0x464d23*/
  LOBYTE(v13) = this->Unsellable; /*0x464d28*/
  v14 = ((Power *)((Power *)v54))->FlagProcess(v13); /*0x464d31*/
  LOBYTE(v14) = this->RemoveOccupy[128]; /*0x464d36*/
  ((Power *)((Power *)v54))->FlagProcess(v14); /*0x464d3f*/
  LOBYTE(v15) = this->RemoveOccupy[129]; /*0x464d44*/
  ((Power *)((Power *)v54))->FlagProcess(v15); /*0x464d4d*/
  LOBYTE(v16) = this->ChargeAnim; /*0x464d52*/
  v17 = ((Power *)((Power *)v54))->FlagProcess(v16); /*0x464d5b*/
  LOBYTE(v17) = this->IsAnimDelayedFire; /*0x464d60*/
  ((Power *)((Power *)v54))->FlagProcess(v17); /*0x464d69*/
  Power::TimerProcess(this->DelayedFireDelay); /*0x464d77*/
  LOBYTE(v18) = this->SiloDamage; /*0x464d7c*/
  v19 = ((Power *)((Power *)v54))->FlagProcess(v18); /*0x464d85*/
  LOBYTE(v19) = this->UnitRepair; /*0x464d8a*/
  ((Power *)((Power *)v54))->FlagProcess(v19); /*0x464d93*/
  LOBYTE(v20) = this->UnitReload; /*0x464d98*/
  ((Power *)((Power *)v54))->FlagProcess(v20); /*0x464da1*/
  LOBYTE(v21) = this->Cloning; /*0x464da6*/
  v22 = ((Power *)((Power *)v54))->FlagProcess(v21); /*0x464daf*/
  LOBYTE(v22) = this->Grinding; /*0x464db4*/
  ((Power *)((Power *)v54))->FlagProcess(v22); /*0x464dbd*/
  LOBYTE(v23) = this->UnitAbsorb; /*0x464dc2*/
  ((Power *)((Power *)v54))->FlagProcess(v23); /*0x464dcb*/
  LOBYTE(v24) = this->InfantryAbsorb; /*0x464dd0*/
  v25 = ((Power *)((Power *)v54))->FlagProcess(v24); /*0x464dd9*/
  LOBYTE(v25) = this->SecretLab; /*0x464dde*/
  ((Power *)((Power *)v54))->FlagProcess(v25); /*0x464de7*/
  LOBYTE(v26) = this->Flat_flag; /*0x464dec*/
  ((Power *)((Power *)v54))->FlagProcess(v26); /*0x464df5*/
  LOBYTE(v27) = this->DockUnload; /*0x464dfa*/
  v28 = ((Power *)((Power *)v54))->FlagProcess(v27); /*0x464e03*/
  LOBYTE(v28) = this->Recoilless; /*0x464e08*/
  ((Power *)((Power *)v54))->FlagProcess(v28); /*0x464e11*/
  LOBYTE(v29) = this->BridgeRepairHut; /*0x464e16*/
  ((Power *)((Power *)v54))->FlagProcess(v29); /*0x464e1f*/
  LOBYTE(v30) = this->Gate; /*0x464e24*/
  v31 = ((Power *)((Power *)v54))->FlagProcess(v30); /*0x464e2d*/
  LOBYTE(v31) = this->SAM; /*0x464e32*/
  ((Power *)((Power *)v54))->FlagProcess(v31); /*0x464e3b*/
  LOBYTE(v32) = this->ConstructionYard; /*0x464e40*/
  ((Power *)((Power *)v54))->FlagProcess(v32); /*0x464e49*/
  LOBYTE(v33) = this->NukeSilo; /*0x464e4e*/
  v34 = ((Power *)((Power *)v54))->FlagProcess(v33); /*0x464e57*/
  LOBYTE(v34) = this->Refinery; /*0x464e5c*/
  ((Power *)((Power *)v54))->FlagProcess(v34); /*0x464e65*/
  LOBYTE(v35) = this->WeaponsFactory; /*0x464e6a*/
  ((Power *)((Power *)v54))->FlagProcess(v35); /*0x464e73*/
  LOBYTE(v36) = this->LaserFencePost; /*0x464e78*/
  v37 = ((Power *)((Power *)v54))->FlagProcess(v36); /*0x464e81*/
  LOBYTE(v37) = this->LaserFence; /*0x464e86*/
  ((Power *)((Power *)v54))->FlagProcess(v37); /*0x464e8f*/
  LOBYTE(v38) = this->FirestormWall; /*0x464e94*/
  ((Power *)((Power *)v54))->FlagProcess(v38); /*0x464e9d*/
  LOBYTE(v39) = this->Helipad; /*0x464ea2*/
  v40 = ((Power *)((Power *)v54))->FlagProcess(v39); /*0x464eab*/
  LOBYTE(v40) = this->OrePurifier; /*0x464eb0*/
  ((Power *)((Power *)v54))->FlagProcess(v40); /*0x464eb9*/
  LOBYTE(v41) = this->ExtraDamageStage; /*0x464ebe*/
  ((Power *)((Power *)v54))->FlagProcess(v41); /*0x464ec7*/
  LOBYTE(v42) = this->Hospital; /*0x464ecc*/
  v43 = ((Power *)((Power *)v54))->FlagProcess(v42); /*0x464ed5*/
  LOBYTE(v43) = this->Armory; /*0x464eda*/
  ((Power *)((Power *)v54))->FlagProcess(v43); /*0x464ee3*/
  Power::TimerProcess(this->GateStages); /*0x464ef1*/
  v44 = Power::TimerProcess(this->PowersUpToLevel); /*0x464eff*/
  LOBYTE(v44) = this->DamagedDoor; /*0x464f04*/
  ((Power *)((Power *)v54))->FlagProcess(v44); /*0x464f0d*/
  LOBYTE(v45) = this->InvisibleInGame; /*0x464f12*/
  ((Power *)((Power *)v54))->FlagProcess(v45); /*0x464f1b*/
  LOBYTE(v46) = this->TerrainPalette; /*0x464f20*/
  v47 = ((Power *)((Power *)v54))->FlagProcess(v46); /*0x464f29*/
  LOBYTE(v47) = this->TurretAnimIsVoxel; /*0x464f2e*/
  ((Power *)((Power *)v54))->FlagProcess(v47); /*0x464f37*/
  LOBYTE(v48) = this->BarrelAnimIsVoxel; /*0x464f3c*/
  ((Power *)((Power *)v54))->FlagProcess(v48); /*0x464f45*/
  ((Checksum *)((Checksum *)v54))->AddString((uint8_t *)this->__pad_1714); /*0x464f53*/
  ((Checksummer *)(v54))->Add_double(*(unsigned int *)&this->__pad_1714[20], *(unsigned int *)&this->__pad_1714[24]); /*0x464f68*/
  ((Checksummer*)v54)->Add_Buffer( (unsigned char)((uint8_t *)&this->__pad_1714[28]), 12); /*0x464f78*/
  ((Checksummer*)v54)->Add_Buffer( (unsigned char)((uint8_t *)&this->__pad_1714[40]), 12); /*0x464f88*/
  ((Checksummer*)v54)->Add_Buffer( (unsigned char)((uint8_t *)&this->__pad_1714[52]), 12); /*0x464f98*/
  v49 = ((Checksummer*)v54)->Add_Buffer( (unsigned char)((uint8_t *)&this->__pad_1714[64]), 12); /*0x464fa8*/
  LOBYTE(v49) = this->__pad_1714[83]; /*0x464fad*/
  ((Power *)((Power *)v54))->FlagProcess(v49); /*0x464fb6*/
  LOBYTE(v50) = this->__pad_1714[84]; /*0x464fbb*/
  ((Power *)((Power *)v54))->FlagProcess(v50); /*0x464fc4*/
  LOBYTE(v51) = this->__pad_1714[85]; /*0x464fc9*/
  ((Power *)((Power *)v54))->FlagProcess(v51); /*0x464fd2*/
  Power::TimerProcess(*(unsigned int *)&this->__pad_1714[108]); /*0x464fe0*/
  Power::TimerProcess(this->BarrelStartPitch); /*0x464fee*/
  LOBYTE(v52) = this->ConcentricRadialIndicator; /*0x464ff3*/
  return ((Power *)((Power *)v54))->FlagProcess(v52); /*0x465001*/

}
} // namespace gamemd
// 0x465010
namespace gamemd {
AbstractClass * * BuildingTypeClass::SaveLoad_Prefix()
{

  TechnoTypeClass *v1; // esi
  int v2; // edi
  int result; // eax
  char *v4; // ecx
  int v5; // ebp
  int v6; // eax
  unsigned int *v7; // edx
  TechnoTypeClass *v8; // eax
  int SpeedType; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  TechnoTypeClass *v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( v13[1].Weapon[210] && v13[1].vtable2 ) /*0x465025*/
  {
    __3_YAXPAX_Z((void *)v13[1].vtable2); /*0x465030*/
    v1[1].vtable2 = 0; /*0x465038*/
    LOBYTE(v1[1].vtable3) = 0; /*0x46503e*/
  }
  if ( (&v1[1].CanBeHidden)[0] && v1[1].TurretOffset ) /*0x46504c*/
  {
    __3_YAXPAX_Z((void *)v1[1].TurretOffset); /*0x465057*/
    v1[1].TurretOffset = 0; /*0x46505f*/
    (&v1[1].CanBeHidden)[0] = 0; /*0x465065*/
  }
  if ( LOBYTE(v1[1].Cameo) && *(unsigned int *)&(&v1[1].CameoFile)[22] ) /*0x465073*/
  {
    __3_YAXPAX_Z(*(void **)&(&v1[1].CameoFile)[22]); /*0x46507e*/
    *(unsigned int *)&(&v1[1].CameoFile)[22] = 0; /*0x465086*/
    LOBYTE(v1[1].Cameo) = 0; /*0x46508c*/
  }
  if ( (&v1[1].AltCameoFile)[3] && *(unsigned int *)v1[1].CameoAllocated ) /*0x46509a*/
  {
    __3_YAXPAX_Z(*(void **)v1[1].CameoAllocated); /*0x4650a5*/
    *(unsigned int *)v1[1].CameoAllocated = 0; /*0x4650ad*/
    (&v1[1].AltCameoFile)[3] = 0; /*0x4650b3*/
  }
  if ( (&v1[1].AltCameoFile)[11] && *(unsigned int *)&(&v1[1].AltCameoFile)[7] ) /*0x4650c1*/
  {
    __3_YAXPAX_Z(*(void **)&(&v1[1].AltCameoFile)[7]); /*0x4650cc*/
    *(unsigned int *)&(&v1[1].AltCameoFile)[7] = 0; /*0x4650d4*/
    (&v1[1].AltCameoFile)[11] = 0; /*0x4650da*/
  }
  if ( (&v1[1].AltCameoFile)[19] && *(unsigned int *)&(&v1[1].AltCameoFile)[15] ) /*0x4650e8*/
  {
    __3_YAXPAX_Z(*(void **)&(&v1[1].AltCameoFile)[15]); /*0x4650f3*/
    *(unsigned int *)&(&v1[1].AltCameoFile)[15] = 0; /*0x4650fb*/
    (&v1[1].AltCameoFile)[19] = 0; /*0x465101*/
  }
  if ( LOBYTE(v1[1].AltCameo) && *(unsigned int *)&(&v1[1].AltCameoFile)[23] ) /*0x46510f*/
  {
    __3_YAXPAX_Z(*(void **)&(&v1[1].AltCameoFile)[23]); /*0x46511a*/
    *(unsigned int *)&(&v1[1].AltCameoFile)[23] = 0; /*0x465122*/
    LOBYTE(v1[1].AltCameo) = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = ((TechnoTypeClass *)v1)->SaveLoad_Prefix( v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      ((BuildingTypeClass *)v1)->loadBuildingProperty_b_545E520( (ObjectTypeClass *)((int)&v13)); /*0x46514c*/
    result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))( v2, (int *)(&v14), 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = &v1[1].Weapon[244]; /*0x465167*/
      if ( v1 != (TechnoTypeClass *)-6020 ) /*0x46516f*/
      {
        *(unsigned int *)&v1[1].Weapon[248] = 0; /*0x465171*/
        *(unsigned int *)&v1[1].Weapon[252] = 0; /*0x465174*/
        v1[1].Weapon[256] = 1; /*0x465177*/
        v1[1].Weapon[257] = 0; /*0x46517b*/
        *(unsigned int *)v4 = (unsigned int)(&vt_VectorClassTPoint3D); /*0x46517e*/
      }
      (*(void (**)(char *, int, unsigned int))(*(unsigned int *)v4 + 8))( (char *)(v4), v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
LABEL_32:
        ((BuildingTypeClass *)((BuildingTypeClass *)v1))->LoadVoxel(); /*0x4651ed*/
        ((ObjectTypeClass*)((char *)v1))->Load2DArt(); /*0x4651f6*/
        SpeedType = v1[1].ChargerTurrets[15]; /*0x4651fb*/
        v1[1].UIName = 0; /*0x465210*/
        SpeedType *= 120; /*0x465219*/
        v1[1].vtable1 = (int)&dword_89C900 + SpeedType; /*0x465228*/
        v1[1].ChargerTurrets[8] = (int)&dword_89D368 + SpeedType; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&((unsigned int *)&v1[1].UINameLabel)[31]); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)v1[1].ImageAllocated); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].AlphaImage); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].MainVoxel); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1[1].TurretVoxel); /*0x465278*/
        ((BuildingTypeClass *)((BuildingTypeClass *)v1))->LoadVoxel(); /*0x46527f*/
        v1[1].vtable2 = 0; /*0x465284*/
        LOBYTE(v1[1].vtable3) = 0; /*0x46528a*/
        v1[1].TurretOffset = 0; /*0x465290*/
        ((unsigned int *)&v1[1].CanBeHidden)[0] = 0; /*0x465296*/
        *(unsigned int *)&((unsigned int *)&v1[1].CameoFile)[22] = 0; /*0x46529c*/
        LOBYTE(v1[1].Cameo) = 0; /*0x4652a2*/
        *(unsigned int *)v1[1].CameoAllocated = 0; /*0x4652a8*/
        ((unsigned int *)&v1[1].AltCameoFile)[3] = 0; /*0x4652ae*/
        *(unsigned int *)&((unsigned int *)&v1[1].AltCameoFile)[7] = 0; /*0x4652b4*/
        ((unsigned int *)&v1[1].AltCameoFile)[11] = 0; /*0x4652ba*/
        *(unsigned int *)&((unsigned int *)&v1[1].AltCameoFile)[15] = 0; /*0x4652c0*/
        ((unsigned int *)&v1[1].AltCameoFile)[19] = 0; /*0x4652c6*/
        *(unsigned int *)&((unsigned int *)&v1[1].AltCameoFile)[23] = 0; /*0x4652cc*/
        LOBYTE(v1[1].AltCameo) = 0; /*0x4652d2*/
        ((BuildingTypeClass *)((int)v1))->LoadAnimations((&dword_A8B230)[130].uniqueId); /*0x4652e6*/
        return 0; /*0x4652eb*/
      }
      else
      {
        v13 = (TechnoTypeClass *)(0); /*0x465197*/
        while ( 1 ) /*0x46519b*/
        {
          v6 = *(unsigned int *)v2; /*0x46519b*/
          v10 = 0; /*0x4651a6*/
          v11 = 0; /*0x4651aa*/
          v12 = 0; /*0x4651ae*/
          result = (*(int (**)(int, int *, int, unsigned int))(v6 + 12))( v2, (int *)(&v10), 12, 0); /*0x4651b2*/
          if ( result < 0 ) /*0x4651b7*/
            break; /*0x4651b7*/
          v7 = (unsigned int *)((int *)((char *)&v13->vtable1 + *(unsigned int *)&v1[1].Weapon[248])); /*0x4651cb*/
          v8 = (TechnoTypeClass *)&v13->vtable3; /*0x4651cd*/
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
  return (AbstractClass * *)result; /*0x4652ed*/

}
} // namespace gamemd
// 0x4653C0
namespace gamemd {
BuildingTypeClass * * BuildingTypeClass::FindOrCreate(char *Source)
{

  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( dword_A83C78 <= 0 ) /*0x4653f1*/
  {
LABEL_6:
    v3 = (unsigned int)__2_YAPAXI_Z(0x1798u); /*0x465416*/
    if ( v3 ) /*0x465425*/
      return BuildingTypeClass::ConstructFull( (char *)(v3), (void *)(Source)); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((*((unsigned int *)dword_A83C6C + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= dword_A83C78 ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return *((unsigned int *)dword_A83C6C + v2); /*0x46542f*/

}
} // namespace gamemd
// 0x465AF0
namespace gamemd {
void BuildingTypeClass::IsPowered()
{

  int result; // eax

  LOBYTE(result) = this->__pad_1714[78]; /*0x465af3*/
  if ( (unsigned char)result ) /*0x465afb*/
  {
    result = this->Buildup[0]; /*0x465afd*/
    if ( result ) /*0x465b05*/
    {
      __3_YAXPAX_Z((void *)this->Buildup[0]); /*0x465b08*/
      this->Buildup[0] = 0; /*0x465b10*/
      this->BuildupLoaded = 0; /*0x465b1a*/
    }
  }
  return result; /*0x465b21*/

}
} // namespace gamemd
// 0x50B760
namespace gamemd {
int BuildingTypeClass::ProcessData(unsigned int * a2, short * a3)
{

  int *v5; // ebx
  int v6; // ebx
  int v7; // ebp
  int16_t *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !*(unsigned int *)&dword_A8B238 ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = (int *)(a2); /*0x50b783*/
  v11 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5216); /*0x50b78f*/
  v12 = 2 * v11 + BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)a2); /*0x50b7a3*/
  v6 = 2 * v11 + ((BuildingTypeClass *)(v5))->GetFoundationHeight(0); /*0x50b7b1*/
  v7 = 1 << ((unsigned int *)this)[0]; /*0x50b7b8*/
  v8 = (int16_t *)(a3); /*0x50b7ba*/
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
      if ( (v7 & *((unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&a2) + 55)) != 0 ) /*0x50b806*/
        return 1; /*0x50b806*/
      if ( ++v10 >= a3[1] + v6 + 1 ) /*0x50b81b*/
      {
        v8 = (int16_t *)(a3); /*0x50b81d*/
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

  unsigned short *v3; // edi
  int16_t v4; // ax
  int result; // eax
  int16_t v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v12; // ebp
  int v13; // esi
  Cell *v14; // eax

  v3 = (unsigned short *)(aP1); /*0x594015*/
  v4 = *(unsigned int *)aP1;
  HIWORD(aP1) = aP1[2]; /*0x59402a*/
  LOWORD(aP1) = v4; /*0x594035*/
  result = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->IsWithinUsableArea((int16_t *)&aP1, 1); /*0x59403a*/
  if ( (unsigned char)result )
  {
    v6 = v3[2]; /*0x594052*/
    LOWORD(aP1) = *((unsigned int *)v3 + 2) + *(unsigned int *)v3 - 1; /*0x59405a*/
    HIWORD(aP1) = v6; /*0x594065*/
    result = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->IsWithinUsableArea((int16_t *)&aP1, 1); /*0x59406a*/
    if ( (unsigned char)result )
    {
      v7 = *((unsigned int *)v3 + 1); /*0x59407a*/
      v8 = *((unsigned int *)v3 + 3); /*0x59407d*/
      LOWORD(aP1) = *v3; /*0x594080*/
      HIWORD(aP1) = v7 + v8 - 1; /*0x594095*/
      result = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->IsWithinUsableArea((int16_t *)&aP1, 1); /*0x59409a*/
      if ( (unsigned char)result )
      {
        v9 = *((unsigned int *)v3 + 1); /*0x5940b2*/
        v10 = *((unsigned int *)v3 + 3); /*0x5940b5*/
        LOWORD(aP1) = *((unsigned int *)v3 + 2) + *(unsigned int *)v3 - 1; /*0x5940b8*/
        HIWORD(aP1) = v9 + v10 - 1; /*0x5940cb*/
        result = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->IsWithinUsableArea((int16_t *)&aP1, 1); /*0x5940d0*/
        if ( (unsigned char)result )
        {
          v11 = *((unsigned int *)v3 + 1); /*0x5940dd*/
          if ( v11 >= *((unsigned int *)v3 + 3) + v11 ) /*0x5940e9*/
          {
LABEL_16:
            LOBYTE(result) = 1; /*0x594170*/
            return result; /*0x594177*/
          }
          v12 = (unsigned int)aP2; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v13 = *(unsigned int *)v3; /*0x5940f3*/
            result = *(unsigned int *)v3 + *((unsigned int *)v3 + 2); /*0x5940f8*/
            if ( *(unsigned int *)v3 < result ) /*0x5940fc*/
              break; /*0x5940fc*/
LABEL_15:
            if ( ++v11 >= *((unsigned int *)v3 + 3) + *((unsigned int *)v3 + 1) ) /*0x59416e*/
              goto LABEL_16; /*0x59416e*/
          }
          while ( 1 )
          {
            LOWORD(aP1) = v13; /*0x594104*/
            HIWORD(aP1) = v11; /*0x59410b*/
            result = g_MissionQueueFrame.localVariables[163]
                   ? *(unsigned int *)(80 * ((int16_t)v13 + g_MapCellWidth * (int16_t)v11)
                               + g_MissionQueueFrame.localVariables[163]
                               + 56)
                   : -1;
            if ( (void *)result != ((unsigned int *)this)[0] && result != v12 ) /*0x59413b*/
              break; /*0x59413b*/
            v14 = (Cell *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&aP1); /*0x594147*/
            result = ((Cell*)v14)->IsEmpty(); /*0x59414e*/
            if ( !(unsigned char)result ) /*0x594155*/
              break; /*0x594155*/
            ++v13; /*0x59415c*/
            result = *(unsigned int *)v3 + *((unsigned int *)v3 + 2); /*0x59415d*/
            if ( v13 >= result ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x59417d*/
  return result; /*0x594170*/

}
} // namespace gamemd
// 0x5FEC70
namespace gamemd {
OverlayTypeClass * * BuildingTypeClass::FindOrCreate2(ObjectClass * Source)
{

  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5feca1*/
  {
LABEL_6:
    v3 = (OverlayTypeClass *)__2_YAPAXI_Z(0x2BCu); /*0x5fecc6*/
    if ( v3 ) /*0x5fecd5*/
      return OverlayTypeClass::OverlayTypeClass(v3, Source); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v2) + 36), Source) ) /*0x5fecba*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *(unsigned int **)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v2); /*0x5fecdf*/

}
} // namespace gamemd
// 0x644890
namespace gamemd {
ParticleSystemTypeClass * * BuildingTypeClass::LoadOrGet(ObjectClass * Source)
{

  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 <= 0 ) /*0x6448c1*/
  {
LABEL_6:
    v3 = (OverlayTypeClass *)__2_YAPAXI_Z(0x310u); /*0x6448e6*/
    if ( v3 ) /*0x6448f5*/
      return ((OverlayTypeClass *)v3)->Construct( (char *)(Source)); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((*(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * v2) + 36), Source) ) /*0x6448da*/
  {
    if ( ++v2 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *(unsigned int **)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * v2); /*0x6448ff*/

}
} // namespace gamemd
// 0x644BE0
namespace gamemd {
unsigned int * BuildingTypeClass::Construct(AbstractClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6)
{

  int v3; // eax
  int v4; // eax

  ((ObjectTypeClass *)((int *)this))->ConstructFull( (char *)(aP1)); /*0x644beb*/
  ((unsigned int *)this)[0] = 0; /*0x644bf8*/
  ((unsigned int *)this)[0] = 0; /*0x644bfe*/
  *(unsigned int *)((unsigned int *)this)[0] = 0; /*0x644c04*/
  *(unsigned int *)&((unsigned int *)this)[2] = 0; /*0x644c10*/
  *(unsigned int *)&((unsigned int *)this)[4] = 1; /*0x644c19*/
  *(unsigned int *)&((unsigned int *)this)[8] = 1; /*0x644c1f*/
  *(unsigned int *)&((unsigned int *)this)[12] = 0; /*0x644c25*/
  *(unsigned int *)&((unsigned int *)this)[16] = 1; /*0x644c2b*/
  *(unsigned int *)&((unsigned int *)this)[6] = 0; /*0x644c31*/
  ((BuildingTypeClass *)&((unsigned int *)this)[10])->loadBuildingProperty_b_5478850( 0, 0); /*0x644c37*/
  ((unsigned int *)this)[1] = 10; /*0x644c3c*/
  ((unsigned int *)this)[0] = 0; /*0x644c43*/
  *(unsigned int *)&((unsigned int *)this)[10] = (unsigned int)&vt_TypeList;
  ((unsigned int *)this)[1] = 0; /*0x644c4c*/
  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x644c66*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x644c6c*/
  BYTE1(((unsigned int *)this)[1]) = -1; /*0x644c72*/
  BYTE2(((unsigned int *)this)[1]) = -1; /*0x644c78*/
  ((unsigned int *)this)[1] = 0; /*0x644c81*/
  ((unsigned int *)this)[0] = 1; /*0x644c87*/
  ((unsigned int *)this)[1] = 0; /*0x644c8d*/
  ((unsigned int *)this)[0] = 0; /*0x644c93*/
  ((unsigned int *)this)[1] = 0; /*0x644c99*/
  ((unsigned int *)this)[0] = 1; /*0x644c9f*/
  ((unsigned int *)this)[1] = 0; /*0x644ca5*/
  ((unsigned int *)this)[0] = 0; /*0x644cab*/
  ((unsigned int *)this)[0] = 0; /*0x644cb1*/
  ((unsigned int *)this)[0] = 0; /*0x644cb7*/
  ((unsigned int *)this)[1] = 0; /*0x644cbd*/
  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x644cc3*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x644cc9*/
  BYTE2(((unsigned int *)this)[0]) = 0; /*0x644ccf*/
  HIBYTE(((unsigned int *)this)[0]) = 4; /*0x644cd5*/
  LOBYTE(((unsigned int *)this)[1]) = 0; /*0x644cdc*/
  HIBYTE(((unsigned int *)this)[1]) = 0; /*0x644ce2*/
  ((unsigned int *)this)[0] = -1; /*0x644ce8*/
  ((unsigned int *)this)[0] = -1; /*0x644cee*/
  this->vtable1 = &vt_ParticleTypeClass; /*0x644cf4*/
  ((unsigned int *)this)[0] = (unsigned int)&vt_ParticleTypeClass; /*0x644cfa*/
  ((unsigned int *)this)[0] = (unsigned int)&vt_ParticleTypeClass; /*0x644d01*/
  ((unsigned int *)this)[0] = (unsigned int)&vt_ParticleTypeClass; /*0x644d08*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] < *(int *)&stru_A83D50.__pad_3C[20] /*0x644d43*/
    || (stru_A83D50.__pad_3C[25] || !*(unsigned int *)&stru_A83D50.__pad_3C[20])
    && *(int *)&stru_A83D50.__pad_3C[32] > 0
&& (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_A83D50.__pad_3C[12] + 8))( (char *)(&stru_A83D50.__pad_3C[12]), *(unsigned int *)&stru_A83D50.__pad_3C[20] + *(unsigned int *)&stru_A83D50.__pad_3C[32], 0) )



  {
    v3 = (*(unsigned int *)&stru_A83D50.__pad_3C[28])++; /*0x644d50*/
    *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v3) = (unsigned int)this;
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x644d96*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
&& (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))( (int *)(&g_BuildingLoadQueue_Array.LightVisibility), g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0], 0) )



  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x644da3*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = (unsigned int)this;
  }
  ((unsigned int *)this)[0] = 0; /*0x644db5*/
  return (unsigned int *)this; /*0x644dbd*/

}
} // namespace gamemd
// 0x645430
namespace gamemd {
ParticleTypeClass * * BuildingTypeClass::FindOrCreateEx(char *Source)
{

  int v2; // esi
  BuildingTypeClass *v3; // eax
  unsigned int *v4; // eax
  int v6; // ecx
  unsigned int *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x64544f*/
  {
LABEL_5:
    v3 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = BuildingTypeClass::Construct(v3, Source); /*0x645488*/
    else
      v4 = (unsigned int *)(0); /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( *(int *)&stru_A83D50.__pad_3C[28] > 0 ) /*0x6454a0*/
    {
      for ( i = *(unsigned int **)&stru_A83D50.__pad_3C[16]; (unsigned int *)*i != v4; ++i ) /*0x6454a2*/
      {
        if ( ++v6 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return (ParticleTypeClass * *)v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(Source, (char *)(*(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645472*/
      goto LABEL_5; /*0x645472*/
  }
  return (ParticleTypeClass * *)v2; /*0x645491*/

}
} // namespace gamemd
// 0x7171A0
namespace gamemd {
void* BuildingTypeClass::ProcessPower(int *aP1)
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

  ((AbstractTypeClass *)((char *)this))->ProcessPower( (int *)(aP1)); /*0x7171a9*/
  ((Checksummer *)(*((unsigned int *)this + 188)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 188))), *((unsigned int *)this + 189)); /*0x7171be*/
  Power::TimerProcess(*((unsigned int *)this + 190)); /*0x7171cc*/
  ((Checksummer *)(*((unsigned int *)this + 192)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 192))), *((unsigned int *)this + 193)); /*0x7171e1*/
  ((Checksummer *)(*((unsigned int *)this + 194)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 194))), *((unsigned int *)this + 195)); /*0x7171f6*/
  Power::TimerProcess(*((unsigned int *)this + 196)); /*0x717204*/
  Power::TimerProcess(*((unsigned int *)this + 201)); /*0x717212*/
  Power::TimerProcess(*((unsigned int *)this + 373)); /*0x717220*/
  Power::TimerProcess(*((unsigned int *)this + 254)); /*0x71722e*/
  Power::TimerProcess(*((unsigned int *)this + 208)); /*0x71723c*/
  ((Checksummer*)((unsigned int *)aP1))->Add_Buffer((uint8_t *)((char *)this + 844), 16); /*0x71724c*/
  ((Checksummer *)(*((unsigned int *)this + 216)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 216))), *((unsigned int *)this + 217)); /*0x717261*/
  ((Checksummer *)(*((unsigned int *)this + 218)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 218))), *((unsigned int *)this + 219)); /*0x717276*/
  ((Checksummer *)(*((unsigned int *)this + 220)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 220))), *((unsigned int *)this + 221)); /*0x71728b*/
  ((Checksummer *)(*((unsigned int *)this + 222)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 222))), *((unsigned int *)this + 223)); /*0x7172a0*/
  ((Checksummer *)(*((unsigned int *)this + 224)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 224))), *((unsigned int *)this + 225)); /*0x7172b5*/
  ((Checksummer *)(*((unsigned int *)this + 226)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 226))), *((unsigned int *)this + 227)); /*0x7172ca*/
  LOBYTE(v3) = *((unsigned char *)this + 912); /*0x7172cf*/
  ((Power *)(aP1))->FlagProcess(v3); /*0x7172d8*/
  v4 = Power::TimerProcess(*((unsigned int *)this + 230)); /*0x7172e6*/
  LOBYTE(v4) = *((unsigned char *)this + 3217); /*0x7172eb*/
  ((Power *)(aP1))->FlagProcess(v4); /*0x7172f4*/
  LOBYTE(v5) = *((unsigned char *)this + 3218); /*0x7172f9*/
  ((Power *)(aP1))->FlagProcess(v5); /*0x717302*/
  LOBYTE(v6) = *((unsigned char *)this + 3216); /*0x717307*/
  ((Power *)(aP1))->FlagProcess(v6); /*0x717310*/
  ((Checksummer *)(*((unsigned int *)this + 232)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 232))), *((unsigned int *)this + 233)); /*0x717325*/
  ((Checksummer *)(*((unsigned int *)this + 236)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 236))), *((unsigned int *)this + 237)); /*0x71733a*/
  ((Checksummer *)(*((unsigned int *)this + 234)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 234))), *((unsigned int *)this + 235)); /*0x71734f*/
  Power::TimerProcess(*((unsigned int *)this + 390)); /*0x71735d*/
  Power::TimerProcess(*((unsigned int *)this + 238)); /*0x71736b*/
  Power::TimerProcess(*((unsigned int *)this + 239)); /*0x717379*/
  ((Checksummer *)(*((unsigned int *)this + 242)))->Add_double((int)((Checksummer *)(*((unsigned int *)this + 242))), *((unsigned int *)this + 243)); /*0x71738e*/
  Power::TimerProcess(*((unsigned int *)this + 244)); /*0x71739c*/
  Power::TimerProcess(*((unsigned int *)this + 245)); /*0x7173aa*/
  Power::TimerProcess(*((unsigned int *)this + 265)); /*0x7173b8*/
  Power::TimerProcess(*((unsigned int *)this + 272)); /*0x7173c6*/
  Power::TimerProcess(*((unsigned int *)this + 286)); /*0x7173d4*/
  Power::TimerProcess(*((unsigned int *)this + 293)); /*0x7173e2*/
  Power::TimerProcess(*((unsigned int *)this + 300)); /*0x7173f0*/
  Power::TimerProcess(*((unsigned int *)this + 307)); /*0x7173fe*/
  Power::TimerProcess(*((unsigned int *)this + 314)); /*0x71740c*/
  Power::TimerProcess(*((unsigned int *)this + 321)); /*0x71741a*/
  Power::TimerProcess(*((unsigned int *)this + 328)); /*0x717428*/
  Power::TimerProcess(*((unsigned int *)this + 482)); /*0x717436*/
  Power::TimerProcess(*((unsigned int *)this + 489)); /*0x717444*/
  Power::TimerProcess(*((unsigned int *)this + 365)); /*0x717452*/
  Power::TimerProcess(*((unsigned int *)this + 366)); /*0x717460*/
  Power::TimerProcess(*((unsigned int *)this + 367)); /*0x71746e*/
  Power::TimerProcess(*((unsigned int *)this + 368)); /*0x71747c*/
  Power::TimerProcess(*((unsigned int *)this + 376)); /*0x71748a*/
  Power::TimerProcess(*((unsigned int *)this + 378)); /*0x717498*/
  Power::TimerProcess(*((unsigned int *)this + 388)); /*0x7174a6*/
  Power::TimerProcess(*((unsigned int *)this + 389)); /*0x7174b4*/
  Power::TimerProcess(*((unsigned int *)this + 397)); /*0x7174c2*/
  Power::TimerProcess(*((unsigned int *)this + 402)); /*0x7174d0*/
  Power::TimerProcess(*((unsigned int *)this + 409)); /*0x7174de*/
  Power::TimerProcess(*((unsigned int *)this + 412)); /*0x7174ec*/
  Power::TimerProcess(*((unsigned int *)this + 413)); /*0x7174fa*/
  Power::TimerProcess(*((unsigned int *)this + 414)); /*0x717508*/
  Power::TimerProcess(*((unsigned int *)this + 415)); /*0x717516*/
  Power::TimerProcess(*((unsigned int *)this + 417)); /*0x717524*/
  Power::TimerProcess(*((unsigned int *)this + 419)); /*0x717532*/
  Power::TimerProcess(*((unsigned int *)this + 435)); /*0x717540*/
  Power::TimerProcess(*((unsigned int *)this + 436)); /*0x71754e*/
  Power::TimerProcess(*((unsigned int *)this + 454)); /*0x71755c*/
  Power::TimerProcess(*((unsigned int *)this + 455)); /*0x71756a*/
  Power::TimerProcess(*((unsigned int *)this + 456)); /*0x717578*/
  Power::TimerProcess(*((unsigned int *)this + 458)); /*0x717586*/
  Power::TimerProcess(*((unsigned int *)this + 463)); /*0x717594*/
  Power::TimerProcess(*((unsigned int *)this + 470)); /*0x7175a2*/
  Power::TimerProcess(*((unsigned int *)this + 511)); /*0x7175b0*/
  v7 = Power::TimerProcess(*((unsigned int *)this + 512)); /*0x7175be*/
  LOBYTE(v7) = *((unsigned char *)this + 3220); /*0x7175c3*/
  ((Power *)(aP1))->FlagProcess(v7); /*0x7175cc*/
  LOBYTE(v8) = *((unsigned char *)this + 3221); /*0x7175d1*/
  ((Power *)(aP1))->FlagProcess(v8); /*0x7175da*/
  LOBYTE(v9) = *((unsigned char *)this + 3222); /*0x7175df*/
  v10 = ((Power *)(aP1))->FlagProcess(v9); /*0x7175e8*/
  LOBYTE(v10) = *((unsigned char *)this + 3223); /*0x7175ed*/
  ((Power *)(aP1))->FlagProcess(v10); /*0x7175f6*/
  LOBYTE(v11) = *((unsigned char *)this + 3224); /*0x7175fb*/
  ((Power *)(aP1))->FlagProcess(v11); /*0x717604*/
  LOBYTE(v12) = *((unsigned char *)this + 3225); /*0x717609*/
  v13 = ((Power *)(aP1))->FlagProcess(v12); /*0x717612*/
  LOBYTE(v13) = *((unsigned char *)this + 3226); /*0x717617*/
  ((Power *)(aP1))->FlagProcess(v13); /*0x717620*/
  LOBYTE(v14) = *((unsigned char *)this + 3227); /*0x717625*/
  ((Power *)(aP1))->FlagProcess(v14); /*0x71762e*/
  LOBYTE(v15) = *((unsigned char *)this + 3228); /*0x717633*/
  v16 = ((Power *)(aP1))->FlagProcess(v15); /*0x71763c*/
  LOBYTE(v16) = *((unsigned char *)this + 3229); /*0x717641*/
  ((Power *)(aP1))->FlagProcess(v16); /*0x71764a*/
  LOBYTE(v17) = *((unsigned char *)this + 3230); /*0x71764f*/
  ((Power *)(aP1))->FlagProcess(v17); /*0x717658*/
  LOBYTE(v18) = *((unsigned char *)this + 3231); /*0x71765d*/
  v19 = ((Power *)(aP1))->FlagProcess(v18); /*0x717666*/
  LOBYTE(v19) = *((unsigned char *)this + 3232); /*0x71766b*/
  ((Power *)(aP1))->FlagProcess(v19); /*0x717674*/
  LOBYTE(v20) = *((unsigned char *)this + 3233); /*0x717679*/
  ((Power *)(aP1))->FlagProcess(v20); /*0x717682*/
  LOBYTE(v21) = *((unsigned char *)this + 3276); /*0x717687*/
  v22 = ((Power *)(aP1))->FlagProcess(v21); /*0x717690*/
  LOBYTE(v22) = *((unsigned char *)this + 3277); /*0x717695*/
  ((Power *)(aP1))->FlagProcess(v22); /*0x71769e*/
  LOBYTE(v23) = *((unsigned char *)this + 3279); /*0x7176a3*/
  ((Power *)(aP1))->FlagProcess(v23); /*0x7176ac*/
  LOBYTE(v24) = *((unsigned char *)this + 3280); /*0x7176b1*/
  v25 = ((Power *)(aP1))->FlagProcess(v24); /*0x7176ba*/
  LOBYTE(v25) = *((unsigned char *)this + 3281); /*0x7176bf*/
  ((Power *)(aP1))->FlagProcess(v25); /*0x7176c8*/
  LOBYTE(v26) = *((unsigned char *)this + 3282); /*0x7176cd*/
  ((Power *)(aP1))->FinalizeDrain(v26); /*0x7176d6*/
  LOBYTE(v27) = *((unsigned char *)this + 3283); /*0x7176db*/
  v28 = ((Power *)(aP1))->FinalizeDrain(v27); /*0x7176e4*/
  LOBYTE(v28) = *((unsigned char *)this + 3284); /*0x7176e9*/
  ((Power *)(aP1))->FlagProcess(v28); /*0x7176f2*/
  LOBYTE(v29) = *((unsigned char *)this + 3348); /*0x7176f7*/
  ((Power *)(aP1))->FlagProcess(v29); /*0x717700*/
  LOBYTE(v30) = *((unsigned char *)this + 3349); /*0x717705*/
  v31 = ((Power *)(aP1))->FlagProcess(v30); /*0x71770e*/
  LOBYTE(v31) = *((unsigned char *)this + 3360); /*0x717713*/
  ((Power *)(aP1))->FlagProcess(v31); /*0x71771c*/
  LOBYTE(v32) = *((unsigned char *)this + 3361); /*0x717721*/
  ((Power *)(aP1))->FlagProcess(v32); /*0x71772a*/
  LOBYTE(v33) = *((unsigned char *)this + 3363); /*0x71772f*/
  v34 = ((Power *)(aP1))->FlagProcess(v33); /*0x717738*/
  LOBYTE(v34) = *((unsigned char *)this + 3364); /*0x71773d*/
  ((Power *)(aP1))->FlagProcess(v34); /*0x717746*/
  LOBYTE(v35) = *((unsigned char *)this + 3365); /*0x71774b*/
  ((Power *)(aP1))->FlagProcess(v35); /*0x717754*/
  LOBYTE(v36) = *((unsigned char *)this + 3366); /*0x717759*/
  v37 = ((Power *)(aP1))->FlagProcess(v36); /*0x717762*/
  LOBYTE(v37) = *((unsigned char *)this + 3518); /*0x717767*/
  ((Power *)(aP1))->FlagProcess(v37); /*0x717770*/
  LOBYTE(v38) = *((unsigned char *)this + 3519); /*0x717775*/
  ((Power *)(aP1))->FlagProcess(v38); /*0x71777e*/
  LOBYTE(v39) = *((unsigned char *)this + 1710); /*0x717783*/
  v40 = ((Power *)(aP1))->FlagProcess(v39); /*0x71778c*/
  LOBYTE(v40) = *((unsigned char *)this + 1711); /*0x717791*/
  ((Power *)(aP1))->FlagProcess(v40); /*0x71779a*/
  LOBYTE(v41) = *((unsigned char *)this + 1712); /*0x71779f*/
  return (void*)((Power *)(aP1))->FlagProcess(v41); /*0x7177ad*/

}
} // namespace gamemd
// 0x7178C0
namespace gamemd {
unsigned int * BuildingTypeClass::GetUpgradeOffset(unsigned int * a2, double a3, unsigned int * a4)
{

  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int *v8; // eax
  int v9; // ecx
  int v10; // edi
  void *v11; // ebp
  void *v12; // edi
  int v13; // eax
  int v14; // ebx
  double v16; // [esp+0h] [ebp-2Ch]
  int v17[3]; // [esp+18h] [ebp-14h] BYREF
  unsigned int v18[2]; // [esp+24h] [ebp-8h] BYREF

  v5 = v4; /*0x7178c4*/
  if ( *(unsigned char *)(v4 + 1980) ) /*0x7178c6*/
  {
    v6 = *(unsigned int *)(v4 + 1968); /*0x7178d4*/
    v7 = *(unsigned int *)(v4 + 1972); /*0x7178da*/
    v18[0] = v6; /*0x7178e1*/
    v18[1] = v7; /*0x7178e6*/
    v8 = (int *)World::ToScreen(v17, v18, a2); /*0x7178fb*/
    v9 = *v8; /*0x717900*/
    v10 = v8[1]; /*0x717905*/
    v17[0] = 10 * *(unsigned int *)(v5 + 1976); /*0x71791b*/
    __asm { fild [esp+2Ch+var_14] } /*0x717921*/
    v11 = (void *)(v9 - v17[0]); /*0x717927*/
    v12 = (void *)(v10 - v17[0]); /*0x717929*/
    __asm /*0x71792b*/
    {
      fld st
      fmul st, st(1)
      fadd st, st
      fstp [esp+2Ch+var_2C]; double
      fstp st
    }
    Math::Sqrt(v16); /*0x717936*/
    __asm { fmul ds:dbl_7F4FC0 } /*0x71793b*/
    LOWORD(v13) = Math::RoundToInt(a3); /*0x717944*/
    if ( *(int *)(v5 + 1976) >= 0 ) /*0x717951*/
      v14 = -v13; /*0x717957*/
    else
      v14 = v13; /*0x717953*/
    a2->TechnoTypeClass = v11; /*0x71795f*/
    ((unsigned int *)a2)[0] = (unsigned int)v12; /*0x717961*/
    ((unsigned int *)a2)[0] = (unsigned int)(void *)v14; /*0x717966*/
    return a2; /*0x717959*/
  }
  else
  {
    a2->TechnoTypeClass = *(void **)(v4 + 1968); /*0x71797f*/
    ((unsigned int *)a2)[0] = (unsigned int)*(void **)(v4 + 1972); /*0x717984*/
    ((unsigned int *)a2)[0] = (unsigned int)*(void **)(v4 + 1976); /*0x71798b*/
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
  int v6; // eax

  if ( (*((int (__fastcall **)(BuildingTypeClass *))this->vtable1 + 114))(this) < 0 /*0x746030*/
    || !((MapSeed *)((MapSeed *)&stru_87F5F0.__pad_58[416]))->CheckTileMatch( (int16_t *)(aP1), (int16_t *)(aP2), 0, 0, 0, 0) )
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
    || !(uint8_t)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->IsWithinUsableArea( (int16_t *)(aP1), 1)
    || !(uint8_t)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->IsWithinUsableArea( (int16_t *)(aP2), 1) )
  {
    return 1; /*0x7460f7*/
  }
  v6 = *((unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj( (int16_t *)(aP2)) + 80) >> 8; /*0x7460cd*/
  LOBYTE(v6) = v6 & 1; /*0x7460d0*/
  return ((Pathfinding *)((int)&stru_87E790.__pad_D8[80]))->CalcDistance(aP1, aP2, (int)this, 0, v6, 0) > 15; /*0x746052*/

}
} // namespace gamemd
// 0x7480D0
namespace gamemd {
AbstractClass * * BuildingTypeClass::FindOrCreateAlt(INIClass * Source)
{

  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x7480ec*/
    return 0; /*0x74814f*/
  v2 = 0; /*0x7480fd*/
  if ( dword_A83CF0 <= 0 ) /*0x748101*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0xE78u) ) /*0x74812b*/
      return UnitTypeClass::UnitTypeClass(Source); /*0x748141*/
    return 0; /*0x748135*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)dword_A83CE4 + v2) + 36), Source) ) /*0x74811a*/
  {
    if ( ++v2 >= dword_A83CF0 ) /*0x748124*/
      goto LABEL_6; /*0x748124*/
  }
  return *((unsigned int *)dword_A83CE4 + v2); /*0x74813f*/

}
} // namespace gamemd
// 0x41C500
namespace gamemd {
char BuildingTypeClass::Enqueue(int a2, void *a2_2)
{

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x41c50c*/
    return 0; /*0x41c50c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *((unsigned int *)this + 2))); /*0x41c520*/
  if ( !v3 ) /*0x41c527*/
    return 0; /*0x41c580*/
  for ( i = 0; i < *((unsigned int *)this + 1); *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x41c535*/
  {
    v5 = 8 * i; /*0x41c539*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x41c542*/
    *(unsigned int *)&v3[v5] = *v6; /*0x41c547*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x41c55b*/
  v7 = a2 + *((unsigned int *)this + 2); /*0x41c566*/
  *(unsigned int *)this = (unsigned int)v3; /*0x41c568*/
  *((unsigned int *)this + 2) = v7; /*0x41c56a*/
  *((unsigned int *)this + 4) = 0; /*0x41c56d*/
  return 1; /*0x41c574*/

}
} // namespace gamemd
// 0x41C590
namespace gamemd {
size_t BuildingTypeClass::Dequeue(int *aP1)
{

  int result; // eax
  char *vtable0; // edi
  int v5; // ebx
  int vtable1; // ecx
  int v7; // esi

  result = (int)((unsigned int *)this)[0]; /*0x41c593*/
  if ( result ) /*0x41c598*/
  {
    if ( !LOBYTE(((unsigned int *)this)[0]) ) /*0x41c59e*/
    {
      qsort(this->TechnoTypeClass, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction); /*0x41c5b0*/
      ((unsigned int *)this)[0] = 0; /*0x41c5b8*/
      LOBYTE(((unsigned int *)this)[0]) = 1; /*0x41c5bf*/
    }
    vtable0 = (char *)this->TechnoTypeClass; /*0x41c5c9*/
    v5 = *aP1; /*0x41c5cb*/
    vtable1 = (int)((unsigned int *)this)[0]; /*0x41c5cd*/
    if ( vtable1 <= 0 ) /*0x41c5d2*/
      return 0; /*0x41c5fe*/
    while ( 1 ) /*0x41c5db*/
    {
      v7 = *(unsigned int *)&vtable0[8 * (vtable1 / 2)]; /*0x41c5db*/
      if ( v7 <= v5 ) /*0x41c5e3*/
      {
        if ( v7 == v5 ) /*0x41c5e9*/
          return (int)&vtable0[8 * (vtable1 / 2)]; /*0x41c603*/
        vtable0 += 8 * (vtable1 / 2) + 8; /*0x41c5eb*/
        vtable1 += -1 - vtable1 / 2; /*0x41c5f3*/
      }
      else
      {
        vtable1 /= 2; /*0x41c5e5*/
      }
      if ( vtable1 <= 0 ) /*0x41c5f7*/
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
  if ( dword_A83C78 <= 0 ) /*0x45e7c1*/
    return -1; /*0x45e7e6*/
  while ( _strcmpi((*((unsigned int *)dword_A83C6C + v2) + 36), (char *)this) ) /*0x45e7da*/
  {
    if ( ++v2 >= dword_A83C78 ) /*0x45e7e4*/
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
  int Storage; // ecx

  result = 60 * stru_81926C.Type[this->Foundation[0]] / 8; /*0x45ed02*/
  if ( ((unsigned int *)this)[0] == 2 ) /*0x45ed08*/
  {
    if ( this->Weeder ) /*0x45ed14*/
    {
      v2 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6096); /*0x45ed24*/
      if ( v2 >= 0 ) /*0x45ed2c*/
      {
        if ( v2 <= result ) /*0x45ed33*/
          return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6096); /*0x45ed35*/
      }
      else
      {
        return 0; /*0x45ed2e*/
      }
    }
    else
    {
      Storage = ((unsigned int *)this)[0]; /*0x45ed38*/
      if ( Storage >= 0 ) /*0x45ed40*/
      {
        if ( Storage <= result ) /*0x45ed47*/
          return Storage; /*0x45ed49*/
      }
      else
      {
        return 0; /*0x45ed42*/
      }
    }
  }
  else if ( ((unsigned int *)this)[0] != 4 ) /*0x45ed0d*/
  {
    return ObjectClass::GetModeSpecificValue((TechnoTypeClass *)this); /*0x45ed0f*/
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

  v2 = this->Foundation[0]; /*0x464af0*/
  v3 = dword_89DDB8 * this->Height; /*0x464afc*/
  v2 *= 4; /*0x464b03*/
  v4 = *(int *)((char *)stru_81926C.Type + v2); /*0x464b0b*/
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
  int v6; // [esp+8h] [ebp-Ch]
  TechnoTypeClass *v7; // [esp+18h] [ebp+4h]
  unsigned int *v8; // [esp+1Ch] [ebp+8h]
  int *v9; // [esp+20h] [ebp+Ch] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix_0(v7, v8, v9, v5, v6); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    v2 = *v8; /*0x465322*/
    v9 = *(int **)&((unsigned int *)&v7[1])[1424]; /*0x46532e*/
    result = (*(int (**)(unsigned int *, int **, int, unsigned int))(v2 + 16))( (unsigned int *)(v8), (int **)(&v9), 4, 0); /*0x465332*/
    if ( result >= 0 ) /*0x465337*/
    {
      v3 = 0; /*0x46533d*/
      if ( (int)v9 <= 0 ) /*0x465341*/
      {
        return 0; /*0x465368*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x465343*/
        {
          result = (*(int (**)(unsigned int *, int, int, unsigned int))(*v8 + 16))( /*0x465355*/
                     v8,
                     i + *(unsigned int *)&((unsigned int *)&v7[1])[1420],
                     12,
                     0);
          if ( result < 0 ) /*0x46535a*/
            break; /*0x46535a*/
          if ( ++v3 >= (int)v9 ) /*0x465366*/
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
  v2[3] = unk_7E95CC; /*0x4653b0*/
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

  return this->ArrayIndex; /*0x465db6*/

}
} // namespace gamemd
// 0x465DC0
namespace gamemd {
int BuildingTypeClass::ddtor(void *a1)
{

  char v3; // [esp+8h] [ebp+4h]

  BuildingTypeClass::CleanupMembers(this); /*0x465dc3*/
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    __3_YAXPAX_Z(this); /*0x465dd0*/
  return (int)this; /*0x465dda*/

}
} // namespace gamemd
// 0x474A90
namespace gamemd {
int BuildingTypeClass::FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3, void *a4)
{

  int v4; // esi
  int v5; // eax
  bool v6; // zf
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  /*0x474aba*/
    ((INIClass*)((INIClass *)this))->GetString(/*0x474aba*/ aP1, a2, *(char **)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * aP3) + 772), Destination, 32);
  v4 = 0; /*0x474ac4*/
  if ( *(int *)stru_B054D0.__tail_10 <= 0 ) /*0x474ac8*/
    return aP3; /*0x474b06*/
  v5 = *(unsigned int *)&stru_B054D0.m_1[3]; /*0x474aca*/
  while ( 1 ) /*0x474ae6*/
  {
    v6 = _strcmpi(*(char **)(*(unsigned int *)(v5 + 4 * v4) + 772), Destination) == 0; /*0x474ae6*/
    v5 = *(unsigned int *)&stru_B054D0.m_1[3]; /*0x474ae8*/
    if ( v6 && *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v4) + 784) != 1 ) /*0x474af9*/
      break; /*0x474af9*/
    if ( ++v4 >= *(int *)stru_B054D0.__tail_10 ) /*0x474b04*/
      return aP3; /*0x474b04*/
  }
  return v4; /*0x474b08*/

}
} // namespace gamemd
// 0x478850
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_5478850(int a2, int a3)
{

  void *v4; // ebx
  unsigned char *v5; // eax
  int v6; // ecx
  int v8; // eax
  unsigned char *v9; // ecx
  int v10; // edx

  v4 = (void *)(0); /*0x478859*/
  ((unsigned int *)this)[0] = 0; /*0x47885d*/
  ((unsigned int *)this)[0] = (unsigned int)(void *)a2; /*0x478860*/
  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x478863*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x478867*/
  this->vtable1 = &vt_VectorClass; /*0x47886a*/
  if ( !a2 ) /*0x478870*/
    return (unsigned int *)this; /*0x4788d0*/
  if ( !a3 ) /*0x478878*/
  {
    v8 = (unsigned int)__2_YAPAXI_Z(3 * a2); /*0x4788a2*/
    if ( v8 ) /*0x4788ac*/
    {
      if ( a2 - 1 >= 0 ) /*0x4788b3*/
      {
        v9 = (unsigned char *)(v8 + 2); /*0x4788b5*/
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
      v4 = (void *)v8; /*0x4788c7*/
    }
    ((unsigned int *)this)[0] = (unsigned int)v4; /*0x4788c9*/
    BYTE1(((unsigned int *)this)[0]) = 1; /*0x4788cc*/
    return (unsigned int *)this; /*0x4788cc*/
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
  ((unsigned int *)this)[0] = (unsigned int)(void *)a3; /*0x478893*/
  return (unsigned int *)this; /*0x478898*/

}
} // namespace gamemd
// 0x4C9680
namespace gamemd {
int BuildingTypeClass::GetPowerOutput(int aP1)
{

  int result; // eax
  int16_t v3; // dx

  result = aP1; /*0x4c9680*/
  if ( aP1 >= 127 ) /*0x4c9687*/
    result = 127; /*0x4c9689*/
  LOBYTE(v3) = 0; /*0x4c968e*/
  HIBYTE(v3) = result; /*0x4c9690*/
  LOWORD(((unsigned int *)this)[0]) = v3; /*0x4c9692*/
  return result; /*0x4c9696*/

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
  if ( dword_A83CF0 <= 0 ) /*0x747381*/
    return -1; /*0x7473a6*/
  while ( _strcmpi((*((unsigned int *)dword_A83CE4 + v2) + 36), (char *)this) ) /*0x74739a*/
  {
    if ( ++v2 >= dword_A83CF0 ) /*0x7473a4*/
      return -1; /*0x7473a4*/
  }
  return v2; /*0x7473a6*/

}
} // namespace gamemd
