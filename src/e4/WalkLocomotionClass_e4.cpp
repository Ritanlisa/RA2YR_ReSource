// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/WalkLocomotionClass_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WWMouseClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CrateClass_e4.hpp"
#include "e4/classes/Function_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x6A0310
namespace gamemd {
int WalkLocomotionClass::SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A0310)
}
} // namespace gamemd
// 0x6A3F50
namespace gamemd {
int WalkLocomotionClass::IsAtDestination(int a1, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A3F50)
}
} // namespace gamemd
// 0x75C640
namespace gamemd {
int WalkLocomotionClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75C640)
}
} // namespace gamemd
// 0x75C680
namespace gamemd {
HRESULT WalkLocomotionClass::BeginMove(int * a1, int * pStm)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75C680)
}
} // namespace gamemd
// 0x75C700
namespace gamemd {
HRESULT WalkLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{

  IStream *v3; // esi
  WalkLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  ILocomotion * v6;
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  ILocomotion * v12;

  v3 = (gamemd::IStream *)((gamemd::WalkLocomotionClass *)((IStream *)pPStm));
  v4 = (gamemd::WalkLocomotionClass *)(a1);
  IPersistStream = LoadIPersistStream((gamemd::LocomotionClass *)a1, pPStm, a3); /*0x75c717*/
  if ( IPersistStream < 0 ) /*0x75c71b*/
    return IPersistStream; /*0x75c71b*/
  if ( !v4->Piggybackee ) /*0x75c726*/
  {
    v12 = (gamemd::ILocomotion *)((int)((gamemd::ILocomotion *)(*(unsigned int *)v3->__pad_0)));
    LOBYTE(a3) = 0; /*0x75c7cf*/
    (*(void (**)(IStream *, int *, int, unsigned int))((unsigned int)(v12)+ 16))(v3, &a3, 1, 0); /*0x75c7d4*/
    return IPersistStream; /*0x75c7d8*/
  }
  v6 = (gamemd::ILocomotion *)((int)((gamemd::ILocomotion *)(*(unsigned int *)v3->__pad_0)));
  LOBYTE(a3) = 1; /*0x75c738*/
  (*(void (**)(IStream *, int *, int, unsigned int))((unsigned int)(v6)+ 16))(v3, &a3, 1, 0); /*0x75c73d*/
  Piggybackee = (gamemd::ILocomotion *)(v4->Piggybackee); /*0x75c740*/
  pPStm = 0; /*0x75c743*/
  if ( Piggybackee ) /*0x75c74d*/
  {
    v8 = (**(int (***)(ILocomotion *, void *, WalkLocomotionClass **))Piggybackee)( /*0x75c75e*/
           Piggybackee,
           &unk_820270,
           (gamemd::WalkLocomotionClass **)&a1);
    if ( v8 >= 0 ) /*0x75c762*/
    {
      v9 = (int *)a1; /*0x75c77b*/
      if ( pPStm ) /*0x75c781*/
        (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x75c786*/
      pPStm = v9; /*0x75c789*/
    }
    else
    {
      ((Function *)((int *)&pPStm))->Method_4B4D60(); /*0x75c768*/
      pPStm = 0; /*0x75c76d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x75c797*/
      WinAPI::Wrapper(v8); /*0x75c79a*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x75c7ab*/
  if ( pPStm ) /*0x75c7b3*/
    (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x75c7b8*/
  return v10; /*0x75c7bd*/

}
} // namespace gamemd
// 0x75CBD0
namespace gamemd {
int WalkLocomotionClass::StubReturn60()
{

  return 60; /*0x75cbd5*/

}
} // namespace gamemd
// 0x75CBE0
namespace gamemd {
WalkLocomotionClass * WalkLocomotionClass::ProcessMove(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75CBE0)
}
} // namespace gamemd