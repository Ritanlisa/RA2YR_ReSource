// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6BF8D0_e4.hpp"
#include "e4/classes/E4Recv_6BFA50_e4.hpp"
#include "e4/classes/E4Recv_6BFBD0_e4.hpp"
#include "e4/classes/E4Recv_6BFD50_e4.hpp"
#include "e4/classes/E4Recv_6BFED0_e4.hpp"
#include "e4/classes/E4Recv_6C01D0_e4.hpp"
#include "e4/classes/E4Recv_6C0350_e4.hpp"
#include "e4/classes/E4Recv_6C04D0_e4.hpp"
#include "e4/classes/E4Recv_6C0650_e4.hpp"
#include "e4/classes/E4Recv_6C07D0_e4.hpp"
#include "e4/classes/E4Recv_6C0950_e4.hpp"
#include "e4/classes/E4Recv_6C0AD0_e4.hpp"
#include "e4/classes/E4Recv_6C0C50_e4.hpp"
#include "e4/classes/E4Recv_6C0DD0_e4.hpp"
#include "e4/classes/E4Recv_6C0F50_e4.hpp"
#include "e4/classes/E4Recv_6C10D0_e4.hpp"
#include "e4/classes/E4Recv_6C1250_e4.hpp"
#include "e4/classes/E4Recv_6C13D0_e4.hpp"
#include "e4/classes/E4Recv_6C1550_e4.hpp"
#include "e4/classes/E4Recv_6C16D0_e4.hpp"
#include "e4/classes/E4Recv_6C1850_e4.hpp"
#include "e4/classes/E4Recv_6C19D0_e4.hpp"
#include "e4/classes/E4Recv_6C1B50_e4.hpp"
#include "e4/classes/E4Recv_6C1CD0_e4.hpp"
#include "e4/classes/E4Recv_6C1E50_e4.hpp"
#include "e4/classes/E4Recv_6C1FD0_e4.hpp"
#include "e4/classes/E4Recv_6C2150_e4.hpp"
#include "e4/classes/E4Recv_6C22D0_e4.hpp"
#include "e4/classes/E4Recv_6C2450_e4.hpp"
#include "e4/classes/E4Recv_6C25D0_e4.hpp"
#include "e4/classes/E4Recv_6C2750_e4.hpp"
#include "e4/classes/E4Recv_6C28D0_e4.hpp"
#include "e4/classes/E4Recv_6C2A50_e4.hpp"
#include "e4/classes/E4Recv_6C2BD0_e4.hpp"
#include "e4/classes/E4Recv_6C2D50_e4.hpp"
#include "e4/classes/E4Recv_6C2ED0_e4.hpp"
#include "e4/classes/E4Recv_6C3050_e4.hpp"
#include "e4/classes/E4Recv_6C31D0_e4.hpp"
#include "e4/classes/E4Recv_6C3350_e4.hpp"
#include "e4/classes/E4Recv_6C34D0_e4.hpp"
#include "e4/classes/E4Recv_6C3650_e4.hpp"
#include "e4/classes/E4Recv_6C37D0_e4.hpp"
#include "e4/classes/E4Recv_6C3950_e4.hpp"
#include "e4/classes/E4Recv_6C3AD0_e4.hpp"
#include "e4/classes/E4Recv_6C3C50_e4.hpp"
#include "e4/classes/E4Recv_6C3DD0_e4.hpp"
#include "e4/classes/E4Recv_6C3F50_e4.hpp"
#include "e4/classes/E4Recv_6C40D0_e4.hpp"
#include "e4/classes/E4Recv_6C4250_e4.hpp"
#include "e4/classes/E4Recv_6C43D0_e4.hpp"
#include "e4/classes/E4Recv_6C4550_e4.hpp"
#include "e4/classes/E4Recv_6C46D0_e4.hpp"
#include "e4/classes/E4Recv_6C4850_e4.hpp"
#include "e4/classes/E4Recv_6C49D0_e4.hpp"
#include "e4/classes/E4Recv_6C4B50_e4.hpp"
#include "e4/classes/E4Recv_6C4CD0_e4.hpp"
#include "e4/classes/E4Recv_6C4E50_e4.hpp"
#include "e4/classes/E4Recv_6C4FD0_e4.hpp"
#include "e4/classes/E4Recv_6C5150_e4.hpp"
#include "e4/classes/E4Recv_6C52D0_e4.hpp"
#include "e4/classes/E4Recv_6C5450_e4.hpp"
#include "e4/classes/E4Recv_6C55D0_e4.hpp"
#include "e4/classes/E4Recv_6C5750_e4.hpp"
#include "e4/classes/E4Recv_6C58D0_e4.hpp"
#include "e4/classes/E4Recv_6C5A50_e4.hpp"
#include "e4/classes/E4Recv_6C5BD0_e4.hpp"
#include "e4/classes/E4Recv_6C5D50_e4.hpp"
#include "e4/classes/E4Recv_6C5ED0_e4.hpp"
#include "e4/classes/E4Recv_6C6050_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x6BF8D0
namespace gamemd {
int E4Recv_6BF8D0::CreateTClassFactory_CellClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf8d7*/
    return -2147467261; /*0x6bf8d9*/
  *v4 = 0; /*0x6bf8f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf912*/
    *v4 = a2; /*0x6bf916*/
  if ( !*v4 ) /*0x6bf918*/
    return -2147467262; /*0x6bf920*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bf92c*/
  return 0; /*0x6bf8de*/
}
} // namespace gamemd

// 0x6BFA50
namespace gamemd {
int E4Recv_6BFA50::CreateTClassFactory_EMPulseClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfa57*/
    return -2147467261; /*0x6bfa59*/
  *v4 = 0; /*0x6bfa76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfa92*/
    *v4 = a2; /*0x6bfa96*/
  if ( !*v4 ) /*0x6bfa98*/
    return -2147467262; /*0x6bfaa0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bfaac*/
  return 0; /*0x6bfa5e*/
}
} // namespace gamemd

// 0x6BFBD0
namespace gamemd {
int E4Recv_6BFBD0::CreateTClassFactory_LightSourceClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfbd7*/
    return -2147467261; /*0x6bfbd9*/
  *v4 = 0; /*0x6bfbf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfc12*/
    *v4 = a2; /*0x6bfc16*/
  if ( !*v4 ) /*0x6bfc18*/
    return -2147467262; /*0x6bfc20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bfc2c*/
  return 0; /*0x6bfbde*/
}
} // namespace gamemd

// 0x6BFD50
namespace gamemd {
int E4Recv_6BFD50::CreateTClassFactory_SideClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfd57*/
    return -2147467261; /*0x6bfd59*/
  *v4 = 0; /*0x6bfd76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfd92*/
    *v4 = a2; /*0x6bfd96*/
  if ( !*v4 ) /*0x6bfd98*/
    return -2147467262; /*0x6bfda0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bfdac*/
  return 0; /*0x6bfd5e*/
}
} // namespace gamemd

// 0x6BFED0
namespace gamemd {
int E4Recv_6BFED0::CreateTClassFactory_TiberiumClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfed7*/
    return -2147467261; /*0x6bfed9*/
  *v4 = 0; /*0x6bfef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bff12*/
    *v4 = a2; /*0x6bff16*/
  if ( !*v4 ) /*0x6bff18*/
    return -2147467262; /*0x6bff20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bff2c*/
  return 0; /*0x6bfede*/
}
} // namespace gamemd

// 0x6C01D0
namespace gamemd {
int E4Recv_6C01D0::CreateTClassFactory_CampaignClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c01d7*/
    return -2147467261; /*0x6c01d9*/
  *v4 = 0; /*0x6c01f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0212*/
    *v4 = a2; /*0x6c0216*/
  if ( !*v4 ) /*0x6c0218*/
    return -2147467262; /*0x6c0220*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c022c*/
  return 0; /*0x6c01de*/
}
} // namespace gamemd

// 0x6C0350
namespace gamemd {
int E4Recv_6C0350::CreateTClassFactory_BuildingLightClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0357*/
    return -2147467261; /*0x6c0359*/
  *v4 = 0; /*0x6c0376*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0392*/
    *v4 = a2; /*0x6c0396*/
  if ( !*v4 ) /*0x6c0398*/
    return -2147467262; /*0x6c03a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c03ac*/
  return 0; /*0x6c035e*/
}
} // namespace gamemd

// 0x6C04D0
namespace gamemd {
int E4Recv_6C04D0::CreateTClassFactory_WaypointPathClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c04d7*/
    return -2147467261; /*0x6c04d9*/
  *v4 = 0; /*0x6c04f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0512*/
    *v4 = a2; /*0x6c0516*/
  if ( !*v4 ) /*0x6c0518*/
    return -2147467262; /*0x6c0520*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c052c*/
  return 0; /*0x6c04de*/
}
} // namespace gamemd

// 0x6C0650
namespace gamemd {
int E4Recv_6C0650::CreateTClassFactory_TemporalClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0657*/
    return -2147467261; /*0x6c0659*/
  *v4 = 0; /*0x6c0676*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0692*/
    *v4 = a2; /*0x6c0696*/
  if ( !*v4 ) /*0x6c0698*/
    return -2147467262; /*0x6c06a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c06ac*/
  return 0; /*0x6c065e*/
}
} // namespace gamemd

// 0x6C07D0
namespace gamemd {
int E4Recv_6C07D0::CreateTClassFactory_AirstrikeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c07d7*/
    return -2147467261; /*0x6c07d9*/
  *v4 = 0; /*0x6c07f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0812*/
    *v4 = a2; /*0x6c0816*/
  if ( !*v4 ) /*0x6c0818*/
    return -2147467262; /*0x6c0820*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c082c*/
  return 0; /*0x6c07de*/
}
} // namespace gamemd

// 0x6C0950
namespace gamemd {
int E4Recv_6C0950::CreateTClassFactory_SpawnManagerClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0957*/
    return -2147467261; /*0x6c0959*/
  *v4 = 0; /*0x6c0976*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0992*/
    *v4 = a2; /*0x6c0996*/
  if ( !*v4 ) /*0x6c0998*/
    return -2147467262; /*0x6c09a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c09ac*/
  return 0; /*0x6c095e*/
}
} // namespace gamemd

// 0x6C0AD0
namespace gamemd {
int E4Recv_6C0AD0::CreateTClassFactory_SlaveManagerClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0ad7*/
    return -2147467261; /*0x6c0ad9*/
  *v4 = 0; /*0x6c0af6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0b12*/
    *v4 = a2; /*0x6c0b16*/
  if ( !*v4 ) /*0x6c0b18*/
    return -2147467262; /*0x6c0b20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c0b2c*/
  return 0; /*0x6c0ade*/
}
} // namespace gamemd

// 0x6C0C50
namespace gamemd {
int E4Recv_6C0C50::CreateTClassFactory_CaptureManagerClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0c57*/
    return -2147467261; /*0x6c0c59*/
  *v4 = 0; /*0x6c0c76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0c92*/
    *v4 = a2; /*0x6c0c96*/
  if ( !*v4 ) /*0x6c0c98*/
    return -2147467262; /*0x6c0ca0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c0cac*/
  return 0; /*0x6c0c5e*/
}
} // namespace gamemd

// 0x6C0DD0
namespace gamemd {
int E4Recv_6C0DD0::CreateTClassFactory_DiskLaserClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0dd7*/
    return -2147467261; /*0x6c0dd9*/
  *v4 = 0; /*0x6c0df6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0e12*/
    *v4 = a2; /*0x6c0e16*/
  if ( !*v4 ) /*0x6c0e18*/
    return -2147467262; /*0x6c0e20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c0e2c*/
  return 0; /*0x6c0dde*/
}
} // namespace gamemd

// 0x6C0F50
namespace gamemd {
int E4Recv_6C0F50::CreateTClassFactory_ParasiteClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0f57*/
    return -2147467261; /*0x6c0f59*/
  *v4 = 0; /*0x6c0f76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0f92*/
    *v4 = a2; /*0x6c0f96*/
  if ( !*v4 ) /*0x6c0f98*/
    return -2147467262; /*0x6c0fa0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c0fac*/
  return 0; /*0x6c0f5e*/
}
} // namespace gamemd

// 0x6C10D0
namespace gamemd {
int E4Recv_6C10D0::CreateTClassFactory_BombClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c10d7*/
    return -2147467261; /*0x6c10d9*/
  *v4 = 0; /*0x6c10f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1112*/
    *v4 = a2; /*0x6c1116*/
  if ( !*v4 ) /*0x6c1118*/
    return -2147467262; /*0x6c1120*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c112c*/
  return 0; /*0x6c10de*/
}
} // namespace gamemd

// 0x6C1250
namespace gamemd {
int E4Recv_6C1250::CreateTClassFactory_RadSiteClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1257*/
    return -2147467261; /*0x6c1259*/
  *v4 = 0; /*0x6c1276*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1292*/
    *v4 = a2; /*0x6c1296*/
  if ( !*v4 ) /*0x6c1298*/
    return -2147467262; /*0x6c12a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c12ac*/
  return 0; /*0x6c125e*/
}
} // namespace gamemd

// 0x6C13D0
namespace gamemd {
int E4Recv_6C13D0::CreateTClassFactory_TEventClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c13d7*/
    return -2147467261; /*0x6c13d9*/
  *v4 = 0; /*0x6c13f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1412*/
    *v4 = a2; /*0x6c1416*/
  if ( !*v4 ) /*0x6c1418*/
    return -2147467262; /*0x6c1420*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c142c*/
  return 0; /*0x6c13de*/
}
} // namespace gamemd

// 0x6C1550
namespace gamemd {
int E4Recv_6C1550::CreateTClassFactory_VoxelAnimTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1557*/
    return -2147467261; /*0x6c1559*/
  *v4 = 0; /*0x6c1576*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1592*/
    *v4 = a2; /*0x6c1596*/
  if ( !*v4 ) /*0x6c1598*/
    return -2147467262; /*0x6c15a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c15ac*/
  return 0; /*0x6c155e*/
}
} // namespace gamemd

// 0x6C16D0
namespace gamemd {
int E4Recv_6C16D0::CreateTClassFactory_VoxelAnimClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c16d7*/
    return -2147467261; /*0x6c16d9*/
  *v4 = 0; /*0x6c16f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1712*/
    *v4 = a2; /*0x6c1716*/
  if ( !*v4 ) /*0x6c1718*/
    return -2147467262; /*0x6c1720*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c172c*/
  return 0; /*0x6c16de*/
}
} // namespace gamemd

// 0x6C1850
namespace gamemd {
int E4Recv_6C1850::CreateTClassFactory_TActionClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1857*/
    return -2147467261; /*0x6c1859*/
  *v4 = 0; /*0x6c1876*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1892*/
    *v4 = a2; /*0x6c1896*/
  if ( !*v4 ) /*0x6c1898*/
    return -2147467262; /*0x6c18a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c18ac*/
  return 0; /*0x6c185e*/
}
} // namespace gamemd

// 0x6C19D0
namespace gamemd {
int E4Recv_6C19D0::CreateTClassFactory_TriggerClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c19d7*/
    return -2147467261; /*0x6c19d9*/
  *v4 = 0; /*0x6c19f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1a12*/
    *v4 = a2; /*0x6c1a16*/
  if ( !*v4 ) /*0x6c1a18*/
    return -2147467262; /*0x6c1a20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c1a2c*/
  return 0; /*0x6c19de*/
}
} // namespace gamemd

// 0x6C1B50
namespace gamemd {
int E4Recv_6C1B50::CreateTClassFactory_TriggerTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1b57*/
    return -2147467261; /*0x6c1b59*/
  *v4 = 0; /*0x6c1b76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1b92*/
    *v4 = a2; /*0x6c1b96*/
  if ( !*v4 ) /*0x6c1b98*/
    return -2147467262; /*0x6c1ba0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c1bac*/
  return 0; /*0x6c1b5e*/
}
} // namespace gamemd

// 0x6C1CD0
namespace gamemd {
int E4Recv_6C1CD0::CreateTClassFactory_ScriptClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1cd7*/
    return -2147467261; /*0x6c1cd9*/
  *v4 = 0; /*0x6c1cf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1d12*/
    *v4 = a2; /*0x6c1d16*/
  if ( !*v4 ) /*0x6c1d18*/
    return -2147467262; /*0x6c1d20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c1d2c*/
  return 0; /*0x6c1cde*/
}
} // namespace gamemd

// 0x6C1E50
namespace gamemd {
int E4Recv_6C1E50::CreateTClassFactory_ScriptTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1e57*/
    return -2147467261; /*0x6c1e59*/
  *v4 = 0; /*0x6c1e76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c1e92*/
    *v4 = a2; /*0x6c1e96*/
  if ( !*v4 ) /*0x6c1e98*/
    return -2147467262; /*0x6c1ea0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c1eac*/
  return 0; /*0x6c1e5e*/
}
} // namespace gamemd

// 0x6C1FD0
namespace gamemd {
int E4Recv_6C1FD0::CreateTClassFactory_TagClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c1fd7*/
    return -2147467261; /*0x6c1fd9*/
  *v4 = 0; /*0x6c1ff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2012*/
    *v4 = a2; /*0x6c2016*/
  if ( !*v4 ) /*0x6c2018*/
    return -2147467262; /*0x6c2020*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c202c*/
  return 0; /*0x6c1fde*/
}
} // namespace gamemd

// 0x6C2150
namespace gamemd {
int E4Recv_6C2150::CreateTClassFactory_TagTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2157*/
    return -2147467261; /*0x6c2159*/
  *v4 = 0; /*0x6c2176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2192*/
    *v4 = a2; /*0x6c2196*/
  if ( !*v4 ) /*0x6c2198*/
    return -2147467262; /*0x6c21a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c21ac*/
  return 0; /*0x6c215e*/
}
} // namespace gamemd

// 0x6C22D0
namespace gamemd {
int E4Recv_6C22D0::CreateTClassFactory_TeamClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c22d7*/
    return -2147467261; /*0x6c22d9*/
  *v4 = 0; /*0x6c22f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2312*/
    *v4 = a2; /*0x6c2316*/
  if ( !*v4 ) /*0x6c2318*/
    return -2147467262; /*0x6c2320*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c232c*/
  return 0; /*0x6c22de*/
}
} // namespace gamemd

// 0x6C2450
namespace gamemd {
int E4Recv_6C2450::CreateTClassFactory_TeamTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2457*/
    return -2147467261; /*0x6c2459*/
  *v4 = 0; /*0x6c2476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2492*/
    *v4 = a2; /*0x6c2496*/
  if ( !*v4 ) /*0x6c2498*/
    return -2147467262; /*0x6c24a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c24ac*/
  return 0; /*0x6c245e*/
}
} // namespace gamemd

// 0x6C25D0
namespace gamemd {
int E4Recv_6C25D0::CreateTClassFactory_TaskForceClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c25d7*/
    return -2147467261; /*0x6c25d9*/
  *v4 = 0; /*0x6c25f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2612*/
    *v4 = a2; /*0x6c2616*/
  if ( !*v4 ) /*0x6c2618*/
    return -2147467262; /*0x6c2620*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c262c*/
  return 0; /*0x6c25de*/
}
} // namespace gamemd

// 0x6C2750
namespace gamemd {
int E4Recv_6C2750::CreateTClassFactory_UnitTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2757*/
    return -2147467261; /*0x6c2759*/
  *v4 = 0; /*0x6c2776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2792*/
    *v4 = a2; /*0x6c2796*/
  if ( !*v4 ) /*0x6c2798*/
    return -2147467262; /*0x6c27a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c27ac*/
  return 0; /*0x6c275e*/
}
} // namespace gamemd

// 0x6C28D0
namespace gamemd {
int E4Recv_6C28D0::CreateTClassFactory_BuildingTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c28d7*/
    return -2147467261; /*0x6c28d9*/
  *v4 = 0; /*0x6c28f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2912*/
    *v4 = a2; /*0x6c2916*/
  if ( !*v4 ) /*0x6c2918*/
    return -2147467262; /*0x6c2920*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c292c*/
  return 0; /*0x6c28de*/
}
} // namespace gamemd

// 0x6C2A50
namespace gamemd {
int E4Recv_6C2A50::CreateTClassFactory_AircraftTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2a57*/
    return -2147467261; /*0x6c2a59*/
  *v4 = 0; /*0x6c2a76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2a92*/
    *v4 = a2; /*0x6c2a96*/
  if ( !*v4 ) /*0x6c2a98*/
    return -2147467262; /*0x6c2aa0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c2aac*/
  return 0; /*0x6c2a5e*/
}
} // namespace gamemd

// 0x6C2BD0
namespace gamemd {
int E4Recv_6C2BD0::CreateTClassFactory_InfantryTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2bd7*/
    return -2147467261; /*0x6c2bd9*/
  *v4 = 0; /*0x6c2bf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2c12*/
    *v4 = a2; /*0x6c2c16*/
  if ( !*v4 ) /*0x6c2c18*/
    return -2147467262; /*0x6c2c20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c2c2c*/
  return 0; /*0x6c2bde*/
}
} // namespace gamemd

// 0x6C2D50
namespace gamemd {
int E4Recv_6C2D50::CreateTClassFactory_BulletTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2d57*/
    return -2147467261; /*0x6c2d59*/
  *v4 = 0; /*0x6c2d76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2d92*/
    *v4 = a2; /*0x6c2d96*/
  if ( !*v4 ) /*0x6c2d98*/
    return -2147467262; /*0x6c2da0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c2dac*/
  return 0; /*0x6c2d5e*/
}
} // namespace gamemd

// 0x6C2ED0
namespace gamemd {
int E4Recv_6C2ED0::CreateTClassFactory_IsometricTileTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c2ed7*/
    return -2147467261; /*0x6c2ed9*/
  *v4 = 0; /*0x6c2ef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c2f12*/
    *v4 = a2; /*0x6c2f16*/
  if ( !*v4 ) /*0x6c2f18*/
    return -2147467262; /*0x6c2f20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c2f2c*/
  return 0; /*0x6c2ede*/
}
} // namespace gamemd

// 0x6C3050
namespace gamemd {
int E4Recv_6C3050::CreateTClassFactory_OverlayTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3057*/
    return -2147467261; /*0x6c3059*/
  *v4 = 0; /*0x6c3076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3092*/
    *v4 = a2; /*0x6c3096*/
  if ( !*v4 ) /*0x6c3098*/
    return -2147467262; /*0x6c30a0*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c30ac*/
  return 0; /*0x6c305e*/
}
} // namespace gamemd

// 0x6C31D0
namespace gamemd {
int E4Recv_6C31D0::CreateTClassFactory_SmudgeTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c31d7*/
    return -2147467261; /*0x6c31d9*/
  *v4 = 0; /*0x6c31f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3212*/
    *v4 = a2; /*0x6c3216*/
  if ( !*v4 ) /*0x6c3218*/
    return -2147467262; /*0x6c3220*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c322c*/
  return 0; /*0x6c31de*/
}
} // namespace gamemd

// 0x6C3350
namespace gamemd {
int E4Recv_6C3350::CreateTClassFactory_UnitClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3357*/
    return -2147467261; /*0x6c3359*/
  *v4 = 0; /*0x6c3376*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3392*/
    *v4 = a2; /*0x6c3396*/
  if ( !*v4 ) /*0x6c3398*/
    return -2147467262; /*0x6c33a0*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c33ac*/
  return 0; /*0x6c335e*/
}
} // namespace gamemd

// 0x6C34D0
namespace gamemd {
int E4Recv_6C34D0::CreateTClassFactory_BuildingClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c34d7*/
    return -2147467261; /*0x6c34d9*/
  *v4 = 0; /*0x6c34f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3512*/
    *v4 = a2; /*0x6c3516*/
  if ( !*v4 ) /*0x6c3518*/
    return -2147467262; /*0x6c3520*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c352c*/
  return 0; /*0x6c34de*/
}
} // namespace gamemd

// 0x6C3650
namespace gamemd {
int E4Recv_6C3650::CreateTClassFactory_AircraftClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3657*/
    return -2147467261; /*0x6c3659*/
  *v4 = 0; /*0x6c3676*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3692*/
    *v4 = a2; /*0x6c3696*/
  if ( !*v4 ) /*0x6c3698*/
    return -2147467262; /*0x6c36a0*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c36ac*/
  return 0; /*0x6c365e*/
}
} // namespace gamemd

// 0x6C37D0
namespace gamemd {
int E4Recv_6C37D0::CreateTClassFactory_InfantryClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c37d7*/
    return -2147467261; /*0x6c37d9*/
  *v4 = 0; /*0x6c37f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3812*/
    *v4 = a2; /*0x6c3816*/
  if ( !*v4 ) /*0x6c3818*/
    return -2147467262; /*0x6c3820*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c382c*/
  return 0; /*0x6c37de*/
}
} // namespace gamemd

// 0x6C3950
namespace gamemd {
int E4Recv_6C3950::CreateTClassFactory_AnimClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3957*/
    return -2147467261; /*0x6c3959*/
  *v4 = 0; /*0x6c3976*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3992*/
    *v4 = a2; /*0x6c3996*/
  if ( !*v4 ) /*0x6c3998*/
    return -2147467262; /*0x6c39a0*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c39ac*/
  return 0; /*0x6c395e*/
}
} // namespace gamemd

// 0x6C3AD0
namespace gamemd {
int E4Recv_6C3AD0::CreateTClassFactory_AnimTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3ad7*/
    return -2147467261; /*0x6c3ad9*/
  *v4 = 0; /*0x6c3af6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3b12*/
    *v4 = a2; /*0x6c3b16*/
  if ( !*v4 ) /*0x6c3b18*/
    return -2147467262; /*0x6c3b20*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c3b2c*/
  return 0; /*0x6c3ade*/
}
} // namespace gamemd

// 0x6C3C50
namespace gamemd {
int E4Recv_6C3C50::CreateTClassFactory_HouseTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3c57*/
    return -2147467261; /*0x6c3c59*/
  *v4 = 0; /*0x6c3c76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3c92*/
    *v4 = a2; /*0x6c3c96*/
  if ( !*v4 ) /*0x6c3c98*/
    return -2147467262; /*0x6c3ca0*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c3cac*/
  return 0; /*0x6c3c5e*/
}
} // namespace gamemd

// 0x6C3DD0
namespace gamemd {
int E4Recv_6C3DD0::CreateTClassFactory_HouseClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3dd7*/
    return -2147467261; /*0x6c3dd9*/
  *v4 = 0; /*0x6c3df6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3e12*/
    *v4 = a2; /*0x6c3e16*/
  if ( !*v4 ) /*0x6c3e18*/
    return -2147467262; /*0x6c3e20*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c3e2c*/
  return 0; /*0x6c3dde*/
}
} // namespace gamemd

// 0x6C3F50
namespace gamemd {
int E4Recv_6C3F50::CreateTClassFactory_DriveLocomotionClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c3f57*/
    return -2147467261; /*0x6c3f59*/
  *v4 = 0; /*0x6c3f76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c3f92*/
    *v4 = a2; /*0x6c3f96*/
  if ( !*v4 ) /*0x6c3f98*/
    return -2147467262; /*0x6c3fa0*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c3fac*/
  return 0; /*0x6c3f5e*/
}
} // namespace gamemd

// 0x6C40D0
namespace gamemd {
int E4Recv_6C40D0::CreateTClassFactory_JumpjetLocomotionClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c40d7*/
    return -2147467261; /*0x6c40d9*/
  *v4 = 0; /*0x6c40f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4112*/
    *v4 = a2; /*0x6c4116*/
  if ( !*v4 ) /*0x6c4118*/
    return -2147467262; /*0x6c4120*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c412c*/
  return 0; /*0x6c40de*/
}
} // namespace gamemd

// 0x6C4250
namespace gamemd {
int E4Recv_6C4250::CreateTClassFactory_HoverLocomotionClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4257*/
    return -2147467261; /*0x6c4259*/
  *v4 = 0; /*0x6c4276*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4292*/
    *v4 = a2; /*0x6c4296*/
  if ( !*v4 ) /*0x6c4298*/
    return -2147467262; /*0x6c42a0*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c42ac*/
  return 0; /*0x6c425e*/
}
} // namespace gamemd

// 0x6C43D0
namespace gamemd {
int E4Recv_6C43D0::CreateTClassFactory_RocketLocomotionClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c43d7*/
    return -2147467261; /*0x6c43d9*/
  *v4 = 0; /*0x6c43f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4412*/
    *v4 = a2; /*0x6c4416*/
  if ( !*v4 ) /*0x6c4418*/
    return -2147467262; /*0x6c4420*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c442c*/
  return 0; /*0x6c43de*/
}
} // namespace gamemd

// 0x6C4550
namespace gamemd {
int E4Recv_6C4550::CreateTClassFactory_TunnelLocomotionClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4557*/
    return -2147467261; /*0x6c4559*/
  *v4 = 0; /*0x6c4576*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4592*/
    *v4 = a2; /*0x6c4596*/
  if ( !*v4 ) /*0x6c4598*/
    return -2147467262; /*0x6c45a0*/
  (*(void (__stdcall **, unsigned int a3, unsigned int a2)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c45ac*/
  return 0; /*0x6c455e*/
}
} // namespace gamemd

// 0x6C46D0
namespace gamemd {
int E4Recv_6C46D0::CreateTClassFactory_WalkLocomotionClass(void * a1, void * a2, void * a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c46d7*/
    return -2147467261; /*0x6c46d9*/
  *v4 = 0; /*0x6c46f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4712*/
    *v4 = a2; /*0x6c4716*/
  if ( !*v4 ) /*0x6c4718*/
    return -2147467262; /*0x6c4720*/
  (*(void (__stdcall **, unsigned int a3)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c472c*/
  return 0; /*0x6c46de*/
}
} // namespace gamemd

// 0x6C4850
namespace gamemd {
int E4Recv_6C4850::CreateTClassFactory_DropPodLocomotionClass(void * a1, void * a2, void * a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4857*/
    return -2147467261; /*0x6c4859*/
  *v4 = 0; /*0x6c4876*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4892*/
    *v4 = a2; /*0x6c4896*/
  if ( !*v4 ) /*0x6c4898*/
    return -2147467262; /*0x6c48a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c48ac*/
  return 0; /*0x6c485e*/
}
} // namespace gamemd

// 0x6C49D0
namespace gamemd {
int E4Recv_6C49D0::CreateTClassFactory_FlyLocomotionClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c49d7*/
    return -2147467261; /*0x6c49d9*/
  *v4 = 0; /*0x6c49f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4a12*/
    *v4 = a2; /*0x6c4a16*/
  if ( !*v4 ) /*0x6c4a18*/
    return -2147467262; /*0x6c4a20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c4a2c*/
  return 0; /*0x6c49de*/
}
} // namespace gamemd

// 0x6C4B50
namespace gamemd {
int E4Recv_6C4B50::CreateTClassFactory_TeleportLocomotionClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4b57*/
    return -2147467261; /*0x6c4b59*/
  *v4 = 0; /*0x6c4b76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4b92*/
    *v4 = a2; /*0x6c4b96*/
  if ( !*v4 ) /*0x6c4b98*/
    return -2147467262; /*0x6c4ba0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c4bac*/
  return 0; /*0x6c4b5e*/
}
} // namespace gamemd

// 0x6C4CD0
namespace gamemd {
int E4Recv_6C4CD0::CreateTClassFactory_MechLocomotionClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4cd7*/
    return -2147467261; /*0x6c4cd9*/
  *v4 = 0; /*0x6c4cf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4d12*/
    *v4 = a2; /*0x6c4d16*/
  if ( !*v4 ) /*0x6c4d18*/
    return -2147467262; /*0x6c4d20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c4d2c*/
  return 0; /*0x6c4cde*/
}
} // namespace gamemd

// 0x6C4E50
namespace gamemd {
int E4Recv_6C4E50::CreateTClassFactory_ShipLocomotionClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4e57*/
    return -2147467261; /*0x6c4e59*/
  *v4 = 0; /*0x6c4e76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c4e92*/
    *v4 = a2; /*0x6c4e96*/
  if ( !*v4 ) /*0x6c4e98*/
    return -2147467262; /*0x6c4ea0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c4eac*/
  return 0; /*0x6c4e5e*/
}
} // namespace gamemd

// 0x6C4FD0
namespace gamemd {
int E4Recv_6C4FD0::CreateTClassFactory_BulletClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c4fd7*/
    return -2147467261; /*0x6c4fd9*/
  *v4 = 0; /*0x6c4ff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5012*/
    *v4 = a2; /*0x6c5016*/
  if ( !*v4 ) /*0x6c5018*/
    return -2147467262; /*0x6c5020*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c502c*/
  return 0; /*0x6c4fde*/
}
} // namespace gamemd

// 0x6C5150
namespace gamemd {
int E4Recv_6C5150::CreateTClassFactory_FactoryClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5157*/
    return -2147467261; /*0x6c5159*/
  *v4 = 0; /*0x6c5176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5192*/
    *v4 = a2; /*0x6c5196*/
  if ( !*v4 ) /*0x6c5198*/
    return -2147467262; /*0x6c51a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c51ac*/
  return 0; /*0x6c515e*/
}
} // namespace gamemd

// 0x6C52D0
namespace gamemd {
int E4Recv_6C52D0::CreateTClassFactory_WarheadTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c52d7*/
    return -2147467261; /*0x6c52d9*/
  *v4 = 0; /*0x6c52f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5312*/
    *v4 = a2; /*0x6c5316*/
  if ( !*v4 ) /*0x6c5318*/
    return -2147467262; /*0x6c5320*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c532c*/
  return 0; /*0x6c52de*/
}
} // namespace gamemd

// 0x6C5450
namespace gamemd {
int E4Recv_6C5450::CreateTClassFactory_WeaponTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5457*/
    return -2147467261; /*0x6c5459*/
  *v4 = 0; /*0x6c5476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5492*/
    *v4 = a2; /*0x6c5496*/
  if ( !*v4 ) /*0x6c5498*/
    return -2147467262; /*0x6c54a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c54ac*/
  return 0; /*0x6c545e*/
}
} // namespace gamemd

// 0x6C55D0
namespace gamemd {
int E4Recv_6C55D0::CreateTClassFactory_ParticleClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c55d7*/
    return -2147467261; /*0x6c55d9*/
  *v4 = 0; /*0x6c55f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5612*/
    *v4 = a2; /*0x6c5616*/
  if ( !*v4 ) /*0x6c5618*/
    return -2147467262; /*0x6c5620*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c562c*/
  return 0; /*0x6c55de*/
}
} // namespace gamemd

// 0x6C5750
namespace gamemd {
int E4Recv_6C5750::CreateTClassFactory_ParticleTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5757*/
    return -2147467261; /*0x6c5759*/
  *v4 = 0; /*0x6c5776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5792*/
    *v4 = a2; /*0x6c5796*/
  if ( !*v4 ) /*0x6c5798*/
    return -2147467262; /*0x6c57a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c57ac*/
  return 0; /*0x6c575e*/
}
} // namespace gamemd

// 0x6C58D0
namespace gamemd {
int E4Recv_6C58D0::CreateTClassFactory_ParticleSystemClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c58d7*/
    return -2147467261; /*0x6c58d9*/
  *v4 = 0; /*0x6c58f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5912*/
    *v4 = a2; /*0x6c5916*/
  if ( !*v4 ) /*0x6c5918*/
    return -2147467262; /*0x6c5920*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c592c*/
  return 0; /*0x6c58de*/
}
} // namespace gamemd

// 0x6C5A50
namespace gamemd {
int E4Recv_6C5A50::CreateTClassFactory_ParticleSystemTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5a57*/
    return -2147467261; /*0x6c5a59*/
  *v4 = 0; /*0x6c5a76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5a92*/
    *v4 = a2; /*0x6c5a96*/
  if ( !*v4 ) /*0x6c5a98*/
    return -2147467262; /*0x6c5aa0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c5aac*/
  return 0; /*0x6c5a5e*/
}
} // namespace gamemd

// 0x6C5BD0
namespace gamemd {
int E4Recv_6C5BD0::CreateTClassFactory_AITriggerTypeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5bd7*/
    return -2147467261; /*0x6c5bd9*/
  *v4 = 0; /*0x6c5bf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5c12*/
    *v4 = a2; /*0x6c5c16*/
  if ( !*v4 ) /*0x6c5c18*/
    return -2147467262; /*0x6c5c20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c5c2c*/
  return 0; /*0x6c5bde*/
}
} // namespace gamemd

// 0x6C5D50
namespace gamemd {
int E4Recv_6C5D50::CreateTClassFactory_NeuronClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5d57*/
    return -2147467261; /*0x6c5d59*/
  *v4 = 0; /*0x6c5d76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5d92*/
    *v4 = a2; /*0x6c5d96*/
  if ( !*v4 ) /*0x6c5d98*/
    return -2147467262; /*0x6c5da0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c5dac*/
  return 0; /*0x6c5d5e*/
}
} // namespace gamemd

// 0x6C5ED0
namespace gamemd {
int E4Recv_6C5ED0::CreateTClassFactory_FoggedObjectClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c5ed7*/
    return -2147467261; /*0x6c5ed9*/
  *v4 = 0; /*0x6c5ef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c5f12*/
    *v4 = a2; /*0x6c5f16*/
  if ( !*v4 ) /*0x6c5f18*/
    return -2147467262; /*0x6c5f20*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c5f2c*/
  return 0; /*0x6c5ede*/
}
} // namespace gamemd

// 0x6C6050
namespace gamemd {
int E4Recv_6C6050::CreateTClassFactory_AlphaShapeClass()
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c6057*/
    return -2147467261; /*0x6c6059*/
  *v4 = 0; /*0x6c6076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c6092*/
    *v4 = a2; /*0x6c6096*/
  if ( !*v4 ) /*0x6c6098*/
    return -2147467262; /*0x6c60a0*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c60ac*/
  return 0; /*0x6c605e*/
}
} // namespace gamemd
