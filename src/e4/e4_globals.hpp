// E1: pseudo-body referenced globals missing from src (auto-generated)#pragma once
// G57a1: e4-universe marker battery -- gap2 twins in core/utility_ext.hpp
// (math.hpp type aliases CellStruct/Point2D/CoordStruct, the ra2::game::
// ObjectClass using-bridge, and the HashTable/ComPtr/Random/Compare/Flag/
// Buffer/StringVector/VectorCursor_uint_DynamicVectorClass_uint class
// twins) are suppressed; the e4 flat carriers in src/e4/classes/ are the
// single truth in e4 TUs. gap2 TUs never include this header (verified),
// so their utility_ext.hpp view is unchanged.
#ifndef GAMEMD_E4_UNIVERSE
#define GAMEMD_E4_UNIVERSE 1
#endif

// G57w8: flat math carriers are the single truth in ALL e4 TUs (W7 removed
// every GAMEMD_E4_MATH_ALIASES definer; gap2 headers pulled into e4 TUs via
// bridges -- multiplayer/network_ext/etc -- expect these names to resolve).
#ifndef GAMEMD_E4_MATH_ALIASES  // G57w9: alias TUs (gap2-chain TUs like Commands_e4) take math.hpp aliases instead
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#endif
#ifndef GAMEMD_E4_HashTable
#define GAMEMD_E4_HashTable 1
#endif
#ifndef GAMEMD_E4_VectorCursor_uint_DynamicVectorClass_uint
#define GAMEMD_E4_VectorCursor_uint_DynamicVectorClass_uint 1
#endif
#ifndef GAMEMD_E4_Buffer
#define GAMEMD_E4_Buffer 1
#endif
#ifndef GAMEMD_E4_ComPtr
#define GAMEMD_E4_ComPtr 1
#endif
#ifndef GAMEMD_E4_Random
#define GAMEMD_E4_Random 1
#endif
#ifndef GAMEMD_E4_Compare
#define GAMEMD_E4_Compare 1
#endif
#ifndef GAMEMD_E4_Flag
#define GAMEMD_E4_Flag 1
#endif
#ifndef GAMEMD_E4_StringVector
#define GAMEMD_E4_StringVector 1
#endif

// G57c1: battery extension -- utility_ext twins that collide with e4 flat carriers / TU-local defs (C2011 family)
#ifndef GAMEMD_E4_AllocCallback
#define GAMEMD_E4_AllocCallback 1
#endif
#ifndef GAMEMD_E4_COM
#define GAMEMD_E4_COM 1
#endif
#ifndef GAMEMD_E4_COMClass
#define GAMEMD_E4_COMClass 1
#endif
#ifndef GAMEMD_E4_COMObject
#define GAMEMD_E4_COMObject 1
#endif
#ifndef GAMEMD_E4_Config
#define GAMEMD_E4_Config 1
#endif
#ifndef GAMEMD_E4_Delegate
#define GAMEMD_E4_Delegate 1
#endif
#ifndef GAMEMD_E4_EnumConnectionPointsClass
#define GAMEMD_E4_EnumConnectionPointsClass 1
#endif
#ifndef GAMEMD_E4_EnumConnectionsClass
#define GAMEMD_E4_EnumConnectionsClass 1
#endif
#ifndef GAMEMD_E4_EventQueue
#define GAMEMD_E4_EventQueue 1
#endif
#ifndef GAMEMD_E4_Event_Dispatch
#define GAMEMD_E4_Event_Dispatch 1
#endif
#ifndef GAMEMD_E4_Float
#define GAMEMD_E4_Float 1
#endif
#ifndef GAMEMD_E4_Float4
#define GAMEMD_E4_Float4 1
#endif
#ifndef GAMEMD_E4_GraphicMenuAnimItem
#define GAMEMD_E4_GraphicMenuAnimItem 1
#endif
#ifndef GAMEMD_E4_GraphicMenuItem
#define GAMEMD_E4_GraphicMenuItem 1
#endif
#ifndef GAMEMD_E4_Hash
#define GAMEMD_E4_Hash 1
#endif
#ifndef GAMEMD_E4_Helper
#define GAMEMD_E4_Helper 1
#endif
#ifndef GAMEMD_E4_LoadGame
#define GAMEMD_E4_LoadGame 1
#endif
#ifndef GAMEMD_E4_Count  // G57w17h4: e4 flat carrier Count_e4.hpp is the single Count truth in e4 TUs
#define GAMEMD_E4_Count 1
#endif
#ifndef GAMEMD_E4_Main
#define GAMEMD_E4_Main 1
#endif
#ifndef GAMEMD_E4_MoveFeedback
#define GAMEMD_E4_MoveFeedback 1
#endif
#ifndef GAMEMD_E4_Player
#define GAMEMD_E4_Player 1
#endif
#ifndef GAMEMD_E4_PlayerClass
#define GAMEMD_E4_PlayerClass 1
#endif
#ifndef GAMEMD_E4_Process
#define GAMEMD_E4_Process 1
#endif
#ifndef GAMEMD_E4_PtrVector
#define GAMEMD_E4_PtrVector 1
#endif
#ifndef GAMEMD_E4_Queue
#define GAMEMD_E4_Queue 1
#endif
#ifndef GAMEMD_E4_Rect
#define GAMEMD_E4_Rect 1
#endif
#ifndef GAMEMD_E4_Rect_Point
#define GAMEMD_E4_Rect_Point 1
#endif
#ifndef GAMEMD_E4_RefCount
#define GAMEMD_E4_RefCount 1
#endif
#ifndef GAMEMD_E4_Return
#define GAMEMD_E4_Return 1
#endif
#ifndef GAMEMD_E4_SHA1
#define GAMEMD_E4_SHA1 1
#endif
#ifndef GAMEMD_E4_Selection
#define GAMEMD_E4_Selection 1
#endif
#ifndef GAMEMD_E4_Settings
#define GAMEMD_E4_Settings 1
#endif
#ifndef GAMEMD_E4_StringList
#define GAMEMD_E4_StringList 1
#endif
#ifndef GAMEMD_E4_Struct
#define GAMEMD_E4_Struct 1
#endif
#ifndef GAMEMD_E4_Time
#define GAMEMD_E4_Time 1
#endif
#ifndef GAMEMD_E4_Type
#define GAMEMD_E4_Type 1
#endif
#ifndef GAMEMD_E4_Value
#define GAMEMD_E4_Value 1
#endif
#ifndef GAMEMD_E4_Vector2
#define GAMEMD_E4_Vector2 1
#endif
#ifndef GAMEMD_E4_Vector3
#define GAMEMD_E4_Vector3 1
#endif
#ifndef GAMEMD_E4_VectorCursor
#define GAMEMD_E4_VectorCursor 1
#endif
#ifndef GAMEMD_E4_WinMain
#define GAMEMD_E4_WinMain 1
#endif
#ifndef GAMEMD_E4_unknown
#define GAMEMD_E4_unknown 1
#endif



#include <cstdint>
#include "e4/e4_abs_decls.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"  // G57a1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/ComPtr_e4.hpp"  // G57a1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Random_e4.hpp"  // G57a1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Flag_e4.hpp"  // G57a1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/StringVector_e4.hpp"  // G57a1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/_fwd_tree_e4.hpp"
#include "core/guid.hpp"  // G42.55 closure (GUID)

extern char DataGlobal_815F54[172];  // data: 0x815F54  (DumpAudioDeviceDebug format blob: Chan TYPE/STATE)
extern char DataGlobal_8331A8[79016];  // data: 0x8331A8  (GameSettings key blob head: ShowHidden)
extern char DataGlobal_8331C8[78984];  // data: 0x8331C8  (GameSettings::Read key blob entry: UnitActionLines)
extern char DataGlobal_8331EC[78948];  // data: 0x8331EC  (GameSettings::Read key table blob head: SidebarCameoText)
extern char DataGlobal_833240[78864];  // data: 0x833240  (GameSettings::Read INI key table)
extern char DataGlobal_833280[78800];  // data: 0x833280
extern char DataGlobal_8392C0[54160];  // data: 0x8392C0  (EVA message name blob: EVA_IncomingTransmission; RadarClass xref)
extern char DataGlobal_83B3B4[45724];  // data: 0x83B3B4  (RulesINI blob head: ContainScan/Dest...; ReadDifficultyModifiers xref)
extern char DataGlobal_83D4C0[37256];  // data: 0x83D4C0  (RulesINI IQ blob head: SellBack/Harvester/AutoCrush)
extern char DataGlobal_83D4D8[37240];  // data: 0x83D4D8  (RulesINI IQ-section key blob head: AutoCrush; LoadExtras xref)
extern char DataGlobal_83D4E4[37228];  // data: 0x83D4E4  (RulesINI IQ-section key table)
extern char DataGlobal_83F104[30016];  // data: 0x83F104  (network config key blob head: Skirmish/LANScrollText)
extern char DataGlobal_83F120[30000];  // data: 0x83F120
extern char DataGlobal_83F148[29960];  // data: 0x83F148  (WOL/network config key blob head: SideEx)
extern char DataGlobal_83F150[29952];  // data: 0x83F150  (WOL/network config key blob head: ColorEx/Handle)
extern char DataGlobal_83F158[29944];  // data: 0x83F158  (ScenarioClass network config key table)
extern double DataGlobal_7E1708;  // data: 0x7E1708
extern double DataGlobal_7E1710;  // data: 0x7E1710
extern double DataGlobal_7E1718;  // data: 0x7E1718
extern double DataGlobal_7E1728;  // data: 0x7E1728
extern double DataGlobal_7E1738;  // data: 0x7E1738
extern double DataGlobal_7E1740;  // data: 0x7E1740
extern double DataGlobal_7E1E18;  // data: 0x7E1E18
extern double DataGlobal_7E27F8;  // data: 0x7E27F8
extern double DataGlobal_7E2800;  // data: 0x7E2800
extern double DataGlobal_7E2808;  // data: 0x7E2808
extern double DataGlobal_7E2810;  // data: 0x7E2810
extern double DataGlobal_7E2818;  // data: 0x7E2818
extern double DataGlobal_7E2820;  // data: 0x7E2820
extern double DataGlobal_7E2AC0;  // data: 0x7E2AC0
extern double DataGlobal_7E3558;  // data: 0x7E3558
extern double DataGlobal_7E3570;  // data: 0x7E3570
extern double DataGlobal_7E3808;  // data: 0x7E3808
extern double DataGlobal_7E3810;  // data: 0x7E3810
extern double DataGlobal_7E3860;  // data: 0x7E3860
extern double DataGlobal_7E3CC0;  // data: 0x7E3CC0
extern double DataGlobal_7E3D88;  // data: 0x7E3D88
extern double DataGlobal_7E3D90;  // data: 0x7E3D90
extern double DataGlobal_7E4408;  // data: 0x7E4408
extern double DataGlobal_7E4410;  // data: 0x7E4410
extern double DataGlobal_7E44A8;  // data: 0x7E44A8
extern double DataGlobal_7E44E8;  // data: 0x7E44E8
extern double DataGlobal_7E48E0;  // data: 0x7E48E0
extern double DataGlobal_7E5138;  // data: 0x7E5138
extern double DataGlobal_7E5F30;  // data: 0x7E5F30
extern double DataGlobal_7E5F78;  // data: 0x7E5F78
extern double DataGlobal_7E8AE8;  // data: 0x7E8AE8
extern double DataGlobal_7EAA48;  // data: 0x7EAA48
extern double DataGlobal_7EAA50;  // data: 0x7EAA50
extern double DataGlobal_7ED7C8;  // data: 0x7ED7C8
extern double DataGlobal_7ED7E0;  // data: 0x7ED7E0
extern double DataGlobal_7ED898;  // data: 0x7ED898
extern double DataGlobal_7ED8A0;  // data: 0x7ED8A0
extern double DataGlobal_7ED8B0;  // data: 0x7ED8B0
extern double DataGlobal_7ED8C0;  // data: 0x7ED8C0
extern double DataGlobal_7ED8D8;  // data: 0x7ED8D8
extern double DataGlobal_7EDA98;  // data: 0x7EDA98
extern double DataGlobal_7EDAA0;  // data: 0x7EDAA0
extern double DataGlobal_7EDAA8;  // data: 0x7EDAA8
extern double DataGlobal_7EDAB0;  // data: 0x7EDAB0
extern double DataGlobal_7EDB18;  // data: 0x7EDB18
extern double DataGlobal_7EFB40;  // data: 0x7EFB40
extern double DataGlobal_7EFB48;  // data: 0x7EFB48
extern double DataGlobal_7F0AF0;  // data: 0x7F0AF0
extern double DataGlobal_7F0DC0;  // data: 0x7F0DC0
extern double DataGlobal_7F4048;  // data: 0x7F4048
extern double DataGlobal_7F5B20;  // data: 0x7F5B20
extern double DataGlobal_81C9B0;  // data: 0x81C9B0
extern double DataGlobal_81CAA0;  // data: 0x81CAA0
extern double DataGlobal_81CAF8;  // data: 0x81CAF8
extern double DataGlobal_81CB20;  // data: 0x81CB20
extern double DataGlobal_81CB40;  // data: 0x81CB40
extern double DataGlobal_81CB48;  // data: 0x81CB48
extern double DataGlobal_81CB70;  // data: 0x81CB70
extern double DataGlobal_81CB98;  // data: 0x81CB98
extern double DataGlobal_81CBA0;  // data: 0x81CBA0
extern double DataGlobal_81CBC0;  // data: 0x81CBC0
extern double DataGlobal_81CBC8;  // data: 0x81CBC8
extern double DataGlobal_81CBE8;  // data: 0x81CBE8
extern double DataGlobal_81CBF0;  // data: 0x81CBF0
extern double DataGlobal_81CC10;  // data: 0x81CC10
extern double DataGlobal_87BED0;  // data: 0x87BED0
extern double DataGlobal_A83D40;  // data: 0xA83D40
extern double DataGlobal_ABB118;  // data: 0xABB118
extern double DataGlobal_ABC1E0;  // data: 0xABC1E0
extern double DataGlobal_ABC1F0;  // data: 0xABC1F0
extern double DataGlobal_ABC2C0;  // data: 0xABC2C0
extern double DataGlobal_ABC570;  // data: 0xABC570
extern double DataGlobal_ABC590;  // data: 0xABC590
extern double DataGlobal_ABC598;  // data: 0xABC598
extern double DataGlobal_ABC5A0;  // data: 0xABC5A0
extern double DataGlobal_ABC5B8;  // data: 0xABC5B8
extern double DataGlobal_ABC5C0;  // data: 0xABC5C0
extern double DataGlobal_ABC5C8;  // data: 0xABC5C8
extern double DataGlobal_ABC5E0;  // data: 0xABC5E0
extern double DataGlobal_ABC5F0;  // data: 0xABC5F0
extern double DataGlobal_ABC638;  // data: 0xABC638
extern double DataGlobal_ABC640;  // data: 0xABC640
extern double DataGlobal_ABC648;  // data: 0xABC648
extern double DataGlobal_ABC660;  // data: 0xABC660
extern double DataGlobal_ABC668;  // data: 0xABC668
extern double DataGlobal_ABC670;  // data: 0xABC670
extern double DataGlobal_ABC688;  // data: 0xABC688
extern double DataGlobal_ABC698;  // data: 0xABC698
extern double DataGlobal_ABC6B8;  // data: 0xABC6B8
extern double DataGlobal_ABC6C0;  // data: 0xABC6C0
extern double DataGlobal_ABC6C8;  // data: 0xABC6C8
extern double DataGlobal_ABC6E0;  // data: 0xABC6E0
extern double DataGlobal_ABC6E8;  // data: 0xABC6E8
extern double DataGlobal_ABC6F0;  // data: 0xABC6F0
extern double DataGlobal_ABC708;  // data: 0xABC708
extern double DataGlobal_ABC720;  // data: 0xABC720
extern double DataGlobal_ABC7C0;  // data: 0xABC7C0
extern double DataGlobal_ABC7D0;  // data: 0xABC7D0
extern double DataGlobal_ABC7D8;  // data: 0xABC7D8
extern double DataGlobal_ABC7F0;  // data: 0xABC7F0
extern double DataGlobal_ABC890;  // data: 0xABC890
extern double DataGlobal_ABC898;  // data: 0xABC898
extern double DataGlobal_ABC8B0;  // data: 0xABC8B0
extern double DataGlobal_ABC8C0;  // data: 0xABC8C0
extern double DataGlobal_ABC8E0;  // data: 0xABC8E0
extern double DataGlobal_ABC8E8;  // data: 0xABC8E8
extern double DataGlobal_ABC8F0;  // data: 0xABC8F0
extern double DataGlobal_ABC908;  // data: 0xABC908
extern double DataGlobal_ABC910;  // data: 0xABC910
extern double DataGlobal_ABC918;  // data: 0xABC918
extern double DataGlobal_ABC930;  // data: 0xABC930
extern double DataGlobal_ABC940;  // data: 0xABC940
extern double DataGlobal_ABC960;  // data: 0xABC960
extern double DataGlobal_ABC968;  // data: 0xABC968
extern double DataGlobal_ABC970;  // data: 0xABC970
extern double DataGlobal_ABC988;  // data: 0xABC988
extern double DataGlobal_ABC990;  // data: 0xABC990
extern double DataGlobal_ABC998;  // data: 0xABC998
extern double DataGlobal_ABC9B0;  // data: 0xABC9B0
extern double DataGlobal_ABC9C8;  // data: 0xABC9C8
extern double DataGlobal_ABC9E8;  // data: 0xABC9E8
extern double DataGlobal_ABC9F0;  // data: 0xABC9F0
extern double DataGlobal_ABC9F8;  // data: 0xABC9F8
extern double DataGlobal_ABCA28;  // data: 0xABCA28
extern double DataGlobal_ABCA30;  // data: 0xABCA30
extern double DataGlobal_ABCA38;  // data: 0xABCA38
extern double DataGlobal_ABCA68;  // data: 0xABCA68
extern double DataGlobal_ABCA98;  // data: 0xABCA98
extern double DataGlobal_ABCAB8;  // data: 0xABCAB8
extern double DataGlobal_ABCAC0;  // data: 0xABCAC0
extern double DataGlobal_ABCAC8;  // data: 0xABCAC8
extern double DataGlobal_ABCAE0;  // data: 0xABCAE0
extern double DataGlobal_ABCAE8;  // data: 0xABCAE8
extern double DataGlobal_ABCAF0;  // data: 0xABCAF0
extern double DataGlobal_ABCB08;  // data: 0xABCB08
extern double DataGlobal_ABCB18;  // data: 0xABCB18
extern double DataGlobal_ABCB38;  // data: 0xABCB38
extern double DataGlobal_ABCB40;  // data: 0xABCB40
extern double DataGlobal_ABCB48;  // data: 0xABCB48
extern double DataGlobal_ABCB60;  // data: 0xABCB60
extern double DataGlobal_ABCB68;  // data: 0xABCB68
extern double DataGlobal_ABCB70;  // data: 0xABCB70
extern double DataGlobal_ABCBA0;  // data: 0xABCBA0
extern double DataGlobal_ABCBC0;  // data: 0xABCBC0
extern double DataGlobal_ABCBE0;  // data: 0xABCBE0
extern double DataGlobal_ABCBE8;  // data: 0xABCBE8
extern double DataGlobal_ABCBF0;  // data: 0xABCBF0
extern double DataGlobal_ABCC08;  // data: 0xABCC08
extern double DataGlobal_ABCC10;  // data: 0xABCC10
extern double DataGlobal_ABCC18;  // data: 0xABCC18
extern double DataGlobal_ABCC30;  // data: 0xABCC30
extern double DataGlobal_ABCC40;  // data: 0xABCC40
extern double DataGlobal_ABCC60;  // data: 0xABCC60
extern double DataGlobal_ABCC68;  // data: 0xABCC68
extern double DataGlobal_ABCC70;  // data: 0xABCC70
extern double DataGlobal_ABCC88;  // data: 0xABCC88
extern double DataGlobal_ABCC90;  // data: 0xABCC90
extern double DataGlobal_ABCC98;  // data: 0xABCC98
extern double DataGlobal_ABCCB0;  // data: 0xABCCB0
extern double DataGlobal_ABCCC0;  // data: 0xABCCC0
extern double DataGlobal_ABCCE0;  // data: 0xABCCE0
extern double DataGlobal_ABCCE8;  // data: 0xABCCE8
extern double DataGlobal_ABCCF0;  // data: 0xABCCF0
extern double DataGlobal_ABCD08;  // data: 0xABCD08
extern double DataGlobal_ABCD10;  // data: 0xABCD10
extern double DataGlobal_ABCD18;  // data: 0xABCD18
extern double DataGlobal_ABCD30;  // data: 0xABCD30
extern double DataGlobal_ABCD60;  // data: 0xABCD60
extern double DataGlobal_ABCD80;  // data: 0xABCD80
extern double DataGlobal_ABCD98;  // data: 0xABCD98
extern double DataGlobal_ABCDA0;  // data: 0xABCDA0
extern double DataGlobal_ABCDC0;  // data: 0xABCDC0
extern double DataGlobal_ABCDC8;  // data: 0xABCDC8
extern double DataGlobal_ABCDD0;  // data: 0xABCDD0
extern double DataGlobal_ABCDF0;  // data: 0xABCDF0
extern double DataGlobal_ABCE50;  // data: 0xABCE50
extern double DataGlobal_ABCE68;  // data: 0xABCE68
extern double DataGlobal_ABCF28;  // data: 0xABCF28
extern double DataGlobal_ABCF30;  // data: 0xABCF30
extern double DataGlobal_ABCF48;  // data: 0xABCF48
extern double DataGlobal_ABD458;  // data: 0xABD458
extern double DataGlobal_ABD488;  // data: 0xABD488
extern double DataGlobal_ABDA58;  // data: 0xABDA58
extern double DataGlobal_ABDA60;  // data: 0xABDA60
extern double DataGlobal_ABDC20;  // data: 0xABDC20
extern double DataGlobal_ABDC30;  // data: 0xABDC30
extern double DataGlobal_ABDC38;  // data: 0xABDC38
extern double DataGlobal_ABDE90;  // data: 0xABDE90
extern double DataGlobal_ABDEB0;  // data: 0xABDEB0
extern double DataGlobal_ABDEB8;  // data: 0xABDEB8
extern double DataGlobal_ABDEC0;  // data: 0xABDEC0
extern double DataGlobal_ABDED8;  // data: 0xABDED8
extern double DataGlobal_ABDEE0;  // data: 0xABDEE0
extern double DataGlobal_ABDEE8;  // data: 0xABDEE8
extern double DataGlobal_ABDF00;  // data: 0xABDF00
extern double DataGlobal_ABDF10;  // data: 0xABDF10
extern double DataGlobal_ABDF30;  // data: 0xABDF30
extern double DataGlobal_ABDF38;  // data: 0xABDF38
extern double DataGlobal_ABDF40;  // data: 0xABDF40
extern double DataGlobal_ABDF58;  // data: 0xABDF58
extern double DataGlobal_ABDF60;  // data: 0xABDF60
extern double DataGlobal_ABDF68;  // data: 0xABDF68
extern double DataGlobal_ABDF80;  // data: 0xABDF80
extern double DataGlobal_ABDFA8;  // data: 0xABDFA8
extern double DataGlobal_ABE368;  // data: 0xABE368
extern double DataGlobal_ABEC88;  // data: 0xABEC88
extern double DataGlobal_ABEC98;  // data: 0xABEC98
extern double DataGlobal_ABECD8;  // data: 0xABECD8
extern double DataGlobal_ABECE0;  // data: 0xABECE0
extern double DataGlobal_ABECF8;  // data: 0xABECF8
extern double DataGlobal_ABED58;  // data: 0xABED58
extern double DataGlobal_ABED78;  // data: 0xABED78
extern double DataGlobal_ABED80;  // data: 0xABED80
extern double DataGlobal_ABED88;  // data: 0xABED88
extern double DataGlobal_ABEDA0;  // data: 0xABEDA0
extern double DataGlobal_ABEDA8;  // data: 0xABEDA8
extern double DataGlobal_ABEDB0;  // data: 0xABEDB0
extern double DataGlobal_ABEDC8;  // data: 0xABEDC8
extern double DataGlobal_ABEDD8;  // data: 0xABEDD8
extern double DataGlobal_ABEDF8;  // data: 0xABEDF8
extern double DataGlobal_ABEE00;  // data: 0xABEE00
extern double DataGlobal_ABEE08;  // data: 0xABEE08
extern double DataGlobal_AFA260;  // data: 0xAFA260
extern double DataGlobal_AFA270;  // data: 0xAFA270
extern double DataGlobal_AFA330;  // data: 0xAFA330
extern double DataGlobal_AFA408;  // data: 0xAFA408
extern double DataGlobal_AFA410;  // data: 0xAFA410
extern double DataGlobal_AFA460;  // data: 0xAFA460
extern double DataGlobal_B048A0;  // data: 0xB048A0
extern double DataGlobal_B048D8;  // data: 0xB048D8
extern double DataGlobal_B048E8;  // data: 0xB048E8
extern double DataGlobal_B048F0;  // data: 0xB048F0
extern double DataGlobal_B04A78;  // data: 0xB04A78
extern double DataGlobal_B04A80;  // data: 0xB04A80
extern double DataGlobal_B04A88;  // data: 0xB04A88
extern double DataGlobal_B04AA0;  // data: 0xB04AA0
extern double DataGlobal_B04AA8;  // data: 0xB04AA8
extern double DataGlobal_B04AB0;  // data: 0xB04AB0
extern double DataGlobal_B04AC8;  // data: 0xB04AC8
extern double DataGlobal_B04AD8;  // data: 0xB04AD8
extern double DataGlobal_B04AF8;  // data: 0xB04AF8
extern double DataGlobal_B04B00;  // data: 0xB04B00
extern double DataGlobal_B04B08;  // data: 0xB04B08
extern double DataGlobal_B04B20;  // data: 0xB04B20
extern double DataGlobal_B04B28;  // data: 0xB04B28
extern double DataGlobal_B04B30;  // data: 0xB04B30
extern double DataGlobal_B04B48;  // data: 0xB04B48
extern double DataGlobal_B04B58;  // data: 0xB04B58
extern double DataGlobal_B04B78;  // data: 0xB04B78
extern double DataGlobal_B04B80;  // data: 0xB04B80
extern double DataGlobal_B04B88;  // data: 0xB04B88
extern double DataGlobal_B04BA0;  // data: 0xB04BA0
extern double DataGlobal_B04BA8;  // data: 0xB04BA8
extern double DataGlobal_B04BB0;  // data: 0xB04BB0
extern double DataGlobal_B04BC8;  // data: 0xB04BC8
extern double DataGlobal_B04C20;  // data: 0xB04C20
extern double DataGlobal_B04C40;  // data: 0xB04C40
extern double DataGlobal_B04C48;  // data: 0xB04C48
extern double DataGlobal_B04C50;  // data: 0xB04C50
extern double DataGlobal_B04C68;  // data: 0xB04C68
extern double DataGlobal_B04C70;  // data: 0xB04C70
extern double DataGlobal_B04C78;  // data: 0xB04C78
extern double DataGlobal_B04C90;  // data: 0xB04C90
extern double DataGlobal_B04CA8;  // data: 0xB04CA8
extern double DataGlobal_B04CC8;  // data: 0xB04CC8
extern double DataGlobal_B04CD0;  // data: 0xB04CD0
extern double DataGlobal_B04CD8;  // data: 0xB04CD8
extern double DataGlobal_B04CF0;  // data: 0xB04CF0
extern double DataGlobal_B04CF8;  // data: 0xB04CF8
extern double DataGlobal_B04D00;  // data: 0xB04D00
extern double DataGlobal_B04D18;  // data: 0xB04D18
extern double DataGlobal_B04D30;  // data: 0xB04D30
extern double DataGlobal_B04D70;  // data: 0xB04D70
extern double DataGlobal_B04D80;  // data: 0xB04D80
extern double DataGlobal_B04D90;  // data: 0xB04D90
extern double DataGlobal_B04DC0;  // data: 0xB04DC0
extern double DataGlobal_B04DC8;  // data: 0xB04DC8
extern double DataGlobal_B04DD0;  // data: 0xB04DD0
extern double DataGlobal_B04DF0;  // data: 0xB04DF0
extern double DataGlobal_B04E00;  // data: 0xB04E00
extern double DataGlobal_B04E20;  // data: 0xB04E20
extern double DataGlobal_B04E28;  // data: 0xB04E28
extern double DataGlobal_B04E30;  // data: 0xB04E30
extern double DataGlobal_B04E48;  // data: 0xB04E48
extern double DataGlobal_B04E50;  // data: 0xB04E50
extern double DataGlobal_B04E58;  // data: 0xB04E58
extern double DataGlobal_B04E70;  // data: 0xB04E70
extern double DataGlobal_B04E80;  // data: 0xB04E80
extern double DataGlobal_B052A0;  // data: 0xB052A0
extern double DataGlobal_B052B0;  // data: 0xB052B0
extern double DataGlobal_B052B8;  // data: 0xB052B8
extern double DataGlobal_B05300;  // data: 0xB05300
extern double DataGlobal_B05308;  // data: 0xB05308
extern double DataGlobal_B05310;  // data: 0xB05310
extern double DataGlobal_B05328;  // data: 0xB05328
extern double DataGlobal_B05338;  // data: 0xB05338
extern double DataGlobal_B05358;  // data: 0xB05358
extern double DataGlobal_B05360;  // data: 0xB05360
extern double DataGlobal_B05368;  // data: 0xB05368
extern double DataGlobal_B05380;  // data: 0xB05380
extern double DataGlobal_B05388;  // data: 0xB05388
extern double DataGlobal_B05390;  // data: 0xB05390
extern double DataGlobal_B053A8;  // data: 0xB053A8
extern double DataGlobal_B053C0;  // data: 0xB053C0
extern double DataGlobal_B053E0;  // data: 0xB053E0
extern double DataGlobal_B053E8;  // data: 0xB053E8
extern double DataGlobal_B053F0;  // data: 0xB053F0
extern double DataGlobal_B05408;  // data: 0xB05408
extern double DataGlobal_B05410;  // data: 0xB05410
extern double DataGlobal_B05418;  // data: 0xB05418
extern double DataGlobal_B05430;  // data: 0xB05430
extern double DataGlobal_B05440;  // data: 0xB05440
extern double DataGlobal_B05460;  // data: 0xB05460
extern double DataGlobal_B05468;  // data: 0xB05468
extern double DataGlobal_B05470;  // data: 0xB05470
extern double DataGlobal_B43ED8;  // data: 0xB43ED8
extern double DataGlobal_B43EF8;  // data: 0xB43EF8
extern double DataGlobal_B43F00;  // data: 0xB43F00
extern double DataGlobal_B43F08;  // data: 0xB43F08
extern double DataGlobal_B44310;  // data: 0xB44310
extern double DataGlobal_B44498;  // data: 0xB44498
extern double DataGlobal_B450A0;  // data: 0xB450A0
extern double DataGlobal_B45180;  // data: 0xB45180
extern double DataGlobal_B45B10;  // data: 0xB45B10
extern double DataGlobal_B45B30;  // data: 0xB45B30
extern double DataGlobal_B45B38;  // data: 0xB45B38
extern double DataGlobal_B45B40;  // data: 0xB45B40
extern double DataGlobal_B45B70;  // data: 0xB45B70
extern double DataGlobal_B45B78;  // data: 0xB45B78
extern double DataGlobal_B45B80;  // data: 0xB45B80
extern double DataGlobal_B45B98;  // data: 0xB45B98
extern double DataGlobal_B45BB0;  // data: 0xB45BB0
extern double DataGlobal_B45BD0;  // data: 0xB45BD0
extern double DataGlobal_B45BD8;  // data: 0xB45BD8
extern double DataGlobal_B45BE0;  // data: 0xB45BE0
extern double DataGlobal_B725C0;  // data: 0xB725C0
extern double DataGlobal_B725D0;  // data: 0xB725D0
extern double DataGlobal_B725F0;  // data: 0xB725F0
extern double DataGlobal_B725F8;  // data: 0xB725F8
extern double DataGlobal_B72600;  // data: 0xB72600
extern double DataGlobal_B72630;  // data: 0xB72630
extern double DataGlobal_B72638;  // data: 0xB72638
extern double DataGlobal_B72640;  // data: 0xB72640
extern double DataGlobal_B72660;  // data: 0xB72660
extern double DataGlobal_B72670;  // data: 0xB72670
extern double DataGlobal_B72690;  // data: 0xB72690
extern double DataGlobal_B72698;  // data: 0xB72698
extern double DataGlobal_B726A0;  // data: 0xB726A0
extern double DataGlobal_B726B8;  // data: 0xB726B8
extern double DataGlobal_B726C0;  // data: 0xB726C0
extern double DataGlobal_B726C8;  // data: 0xB726C8
extern double DataGlobal_B726E0;  // data: 0xB726E0
extern double DataGlobal_B726F0;  // data: 0xB726F0
extern double DataGlobal_B72710;  // data: 0xB72710
extern double DataGlobal_B72718;  // data: 0xB72718
extern double DataGlobal_B72720;  // data: 0xB72720
extern double DataGlobal_B72738;  // data: 0xB72738
extern double DataGlobal_B72740;  // data: 0xB72740
extern double DataGlobal_B72748;  // data: 0xB72748
extern double DataGlobal_B72780;  // data: 0xB72780
extern double DataGlobal_B72790;  // data: 0xB72790
extern double DataGlobal_B727B0;  // data: 0xB727B0
extern double DataGlobal_B727B8;  // data: 0xB727B8
extern double DataGlobal_B727C0;  // data: 0xB727C0
extern double DataGlobal_B727D8;  // data: 0xB727D8
extern double DataGlobal_B727E0;  // data: 0xB727E0
extern double DataGlobal_B727E8;  // data: 0xB727E8
extern double DataGlobal_B72800;  // data: 0xB72800
extern double DataGlobal_B72810;  // data: 0xB72810
extern double DataGlobal_B72830;  // data: 0xB72830
extern double DataGlobal_B72838;  // data: 0xB72838
extern double DataGlobal_B72840;  // data: 0xB72840
extern double DataGlobal_B72858;  // data: 0xB72858
extern double DataGlobal_B72860;  // data: 0xB72860
extern double DataGlobal_B72868;  // data: 0xB72868
extern double DataGlobal_B72880;  // data: 0xB72880
extern double DataGlobal_B72890;  // data: 0xB72890
extern double DataGlobal_B728B0;  // data: 0xB728B0
extern double DataGlobal_B728B8;  // data: 0xB728B8
extern double DataGlobal_B728C0;  // data: 0xB728C0
extern double DataGlobal_B728D8;  // data: 0xB728D8
extern double DataGlobal_B728E0;  // data: 0xB728E0
extern double DataGlobal_B728E8;  // data: 0xB728E8
extern double DataGlobal_B72900;  // data: 0xB72900
extern double DataGlobal_B72910;  // data: 0xB72910
extern double DataGlobal_B72930;  // data: 0xB72930
extern double DataGlobal_B72938;  // data: 0xB72938
extern double DataGlobal_B72940;  // data: 0xB72940
extern double DataGlobal_B72958;  // data: 0xB72958
extern double DataGlobal_B72960;  // data: 0xB72960
extern double DataGlobal_B72968;  // data: 0xB72968
extern double DataGlobal_B72980;  // data: 0xB72980
extern double DataGlobal_B72990;  // data: 0xB72990
extern double DataGlobal_B729B0;  // data: 0xB729B0
extern double DataGlobal_B729B8;  // data: 0xB729B8
extern double DataGlobal_B729C0;  // data: 0xB729C0
extern double DataGlobal_B729D8;  // data: 0xB729D8
extern double DataGlobal_B729E0;  // data: 0xB729E0
extern double DataGlobal_B729E8;  // data: 0xB729E8
extern double DataGlobal_B72A00;  // data: 0xB72A00
extern double DataGlobal_B72A10;  // data: 0xB72A10
extern double DataGlobal_B72A30;  // data: 0xB72A30
extern double DataGlobal_B72A38;  // data: 0xB72A38
extern double DataGlobal_B72A40;  // data: 0xB72A40
extern double DataGlobal_B72A58;  // data: 0xB72A58
extern double DataGlobal_B72A60;  // data: 0xB72A60
extern double DataGlobal_B72A68;  // data: 0xB72A68
extern double DataGlobal_B72A80;  // data: 0xB72A80
extern double DataGlobal_B72A90;  // data: 0xB72A90
extern double DataGlobal_B72AB0;  // data: 0xB72AB0
extern double DataGlobal_B72AB8;  // data: 0xB72AB8
extern double DataGlobal_B72AC0;  // data: 0xB72AC0
extern double DataGlobal_B72AD8;  // data: 0xB72AD8
extern double DataGlobal_B72AE0;  // data: 0xB72AE0
extern double DataGlobal_B72AE8;  // data: 0xB72AE8
extern double DataGlobal_B72B00;  // data: 0xB72B00
extern double DataGlobal_B72B10;  // data: 0xB72B10
extern double DataGlobal_B72B30;  // data: 0xB72B30
extern double DataGlobal_B72B38;  // data: 0xB72B38
extern double DataGlobal_B72B40;  // data: 0xB72B40
extern double DataGlobal_B72B58;  // data: 0xB72B58
extern double DataGlobal_B72B60;  // data: 0xB72B60
extern double DataGlobal_B72B68;  // data: 0xB72B68
extern double DataGlobal_B72B80;  // data: 0xB72B80
extern double DataGlobal_B72B90;  // data: 0xB72B90
extern double DataGlobal_B72BB0;  // data: 0xB72BB0
extern double DataGlobal_B72BB8;  // data: 0xB72BB8
extern double DataGlobal_B72BC0;  // data: 0xB72BC0
extern double DataGlobal_B72BD8;  // data: 0xB72BD8
extern double DataGlobal_B72BE0;  // data: 0xB72BE0
extern double DataGlobal_B72BE8;  // data: 0xB72BE8
extern double DataGlobal_B72C00;  // data: 0xB72C00
extern double DataGlobal_B72C10;  // data: 0xB72C10
extern double DataGlobal_B72C30;  // data: 0xB72C30
extern double DataGlobal_B72C38;  // data: 0xB72C38
extern double DataGlobal_B72C40;  // data: 0xB72C40
extern double DataGlobal_B72C58;  // data: 0xB72C58
extern double DataGlobal_B72C60;  // data: 0xB72C60
extern double DataGlobal_B72C68;  // data: 0xB72C68
extern double DataGlobal_B72C80;  // data: 0xB72C80
extern double DataGlobal_B72C90;  // data: 0xB72C90
extern double DataGlobal_B72CB0;  // data: 0xB72CB0
extern double DataGlobal_B72CB8;  // data: 0xB72CB8
extern double DataGlobal_B72CC0;  // data: 0xB72CC0
extern double DataGlobal_B72CD8;  // data: 0xB72CD8
extern double DataGlobal_B72CE0;  // data: 0xB72CE0
extern double DataGlobal_B72CE8;  // data: 0xB72CE8
extern double DataGlobal_B72D00;  // data: 0xB72D00
extern double DataGlobal_B730B0;  // data: 0xB730B0
extern double DataGlobal_B730D0;  // data: 0xB730D0
extern double DataGlobal_B730D8;  // data: 0xB730D8
extern double DataGlobal_B730E0;  // data: 0xB730E0
extern double DataGlobal_B73308;  // data: 0xB73308
extern double DataGlobal_B73310;  // data: 0xB73310
extern double DataGlobal_B73520;  // data: 0xB73520
extern double DataGlobal_B73538;  // data: 0xB73538
extern double DataGlobal_B73578;  // data: 0xB73578
extern double DataGlobal_B73640;  // data: 0xB73640
extern double DataGlobal_B73648;  // data: 0xB73648
extern double DataGlobal_B73650;  // data: 0xB73650
extern double DataGlobal_B73668;  // data: 0xB73668
extern double DataGlobal_B73AC0;  // data: 0xB73AC0
extern double DataGlobal_B75F60;  // data: 0xB75F60
extern double DataGlobal_B761A0;  // data: 0xB761A0
extern double DataGlobal_B76460;  // data: 0xB76460
extern double DataGlobal_B76550;  // data: 0xB76550
extern double DataGlobal_B76558;  // data: 0xB76558
extern double DataGlobal_B76628;  // data: 0xB76628
extern double DataGlobal_B76630;  // data: 0xB76630
extern double DataGlobal_B76660;  // data: 0xB76660
extern double DataGlobal_B76668;  // data: 0xB76668
extern double DataGlobal_B766A0;  // data: 0xB766A0
extern double DataGlobal_B766A8;  // data: 0xB766A8
extern double DataGlobal_B768E8;  // data: 0xB768E8
extern double DataGlobal_B769B0;  // data: 0xB769B0
extern double DataGlobal_B769B8;  // data: 0xB769B8
extern double DataGlobal_B76AF8;  // data: 0xB76AF8
extern double DataGlobal_B778C0;  // data: 0xB778C0
extern double DataGlobal_B778E8;  // data: 0xB778E8
extern double DataGlobal_B77CD8;  // data: 0xB77CD8
extern double DataGlobal_B77DA8;  // data: 0xB77DA8
extern double DataGlobal_B77EB8;  // data: 0xB77EB8
extern double DataGlobal_B77EE8;  // data: 0xB77EE8
extern double DataGlobal_B77EF8;  // data: 0xB77EF8
extern double DataGlobal_B77F00;  // data: 0xB77F00
extern double DataGlobal_B77F28;  // data: 0xB77F28
extern double DataGlobal_B77F38;  // data: 0xB77F38
extern double DataGlobal_B77F40;  // data: 0xB77F40
extern double DataGlobal_B77F88;  // data: 0xB77F88
extern double DataGlobal_B77FB0;  // data: 0xB77FB0
extern double DataGlobal_B77FC0;  // data: 0xB77FC0
extern double DataGlobal_B77FC8;  // data: 0xB77FC8
extern double DataGlobal_B77FD0;  // data: 0xB77FD0
extern double DataGlobal_B77FE8;  // data: 0xB77FE8
extern double DataGlobal_B77FF0;  // data: 0xB77FF0
extern double DataGlobal_B77FF8;  // data: 0xB77FF8
extern double DataGlobal_B78010;  // data: 0xB78010
extern double DataGlobal_B78020;  // data: 0xB78020
extern double DataGlobal_B78040;  // data: 0xB78040
extern double DataGlobal_B78048;  // data: 0xB78048
extern double DataGlobal_B78050;  // data: 0xB78050
extern double DataGlobal_B78068;  // data: 0xB78068
extern double DataGlobal_B78070;  // data: 0xB78070
extern double DataGlobal_B78078;  // data: 0xB78078
extern double DataGlobal_B78090;  // data: 0xB78090
extern double DataGlobal_B780A8;  // data: 0xB780A8
extern double DataGlobal_B780C8;  // data: 0xB780C8
extern double DataGlobal_B780D0;  // data: 0xB780D0
extern double DataGlobal_B780D8;  // data: 0xB780D8
extern double DataGlobal_B780F0;  // data: 0xB780F0
extern double DataGlobal_B780F8;  // data: 0xB780F8
extern double DataGlobal_B78100;  // data: 0xB78100
extern double DataGlobal_B78118;  // data: 0xB78118
extern float DataGlobal_7E1748;  // data: 0x7E1748
extern float DataGlobal_7E2220;  // data: 0x7E2220
extern float DataGlobal_7E2224;  // data: 0x7E2224
extern float DataGlobal_7E2AC8;  // data: 0x7E2AC8
extern float DataGlobal_7E3560;  // data: 0x7E3560
extern float DataGlobal_7E37B4;  // data: 0x7E37B4
extern float DataGlobal_7E37B8;  // data: 0x7E37B8
extern float DataGlobal_7E37BC;  // data: 0x7E37BC
extern float DataGlobal_7E3DA8;  // data: 0x7E3DA8
extern float DataGlobal_7EAAE0;  // data: 0x7EAAE0
extern float DataGlobal_7ED968;  // data: 0x7ED968
extern float DataGlobal_7EF38C;  // data: 0x7EF38C
extern float DataGlobal_7EF710;  // data: 0x7EF710
extern float DataGlobal_7EF718;  // data: 0x7EF718
extern float DataGlobal_7EFB50;  // data: 0x7EFB50
extern float DataGlobal_7EFD84;  // data: 0x7EFD84
extern float DataGlobal_7EFD88;  // data: 0x7EFD88
extern float DataGlobal_7F0278;  // data: 0x7F0278
extern float DataGlobal_7F041C;  // data: 0x7F041C
extern float DataGlobal_7F0420;  // data: 0x7F0420
extern float DataGlobal_7F0AE8;  // data: 0x7F0AE8
extern float DataGlobal_7F0DB8;  // data: 0x7F0DB8
extern float DataGlobal_7F4E34;  // data: 0x7F4E34
extern float DataGlobal_7F695C;  // data: 0x7F695C
extern float DataGlobal_7F6968;  // data: 0x7F6968
extern float DataGlobal_7F696C;  // data: 0x7F696C
extern float DataGlobal_7F6BB4;  // data: 0x7F6BB4
extern float DataGlobal_81870C;  // data: 0x81870C
extern float DataGlobal_8223B0;  // data: 0x8223B0
extern float DataGlobal_8223B4;  // data: 0x8223B4
extern float DataGlobal_8650B8;  // data: 0x8650B8
extern float DataGlobal_89C490;  // data: 0x89C490
extern float DataGlobal_B432D8;  // data: 0xB432D8
extern float DataGlobal_B44318;  // data: 0xB44318
extern float DataGlobal_B44348;  // data: 0xB44348
extern float DataGlobal_B444A0;  // data: 0xB444A0
extern float DataGlobal_B45AD0;  // data: 0xB45AD0
extern int __ctype;  // data: 0x87C598
extern int _ZTI2x1;  // data: 0x81B9DC
extern int _ZTS2x1;  // data: 0x81BBC0
extern int AbstractClass_Array;  // data: 0xB0F720
extern int Addend;  // data: 0xB7649C
extern int AircraftClass_Array;  // data: 0xA8E390
extern int AircraftTypeClass_Array;  // data: 0xA8B218
extern int AITriggerTypeClass_Array;  // data: 0xA8B200
extern int AlliesAllowed;  // data: 0xA8B31C
extern int AnimClass_Array;  // data: 0xA8E9A8
extern int AnimTypeClass_Array;  // data: 0x8B4150
extern int ApplicationName;  // data: 0x8399EC
extern int ArmageddonMode;  // data: 0xA8ED6B
extern int AsyncIO_Instance;  // data: 0xB45B5C
extern int Base;  // data: 0x87F680
extern int Bases;  // data: 0xA8B258
extern int Block;  // data: 0x87C484
extern int BombClass_Array;  // data: 0xA8E828
extern int BounceClass_Array;  // data: 0xA8ED58
extern int BridgeDestruction;  // data: 0xA8B260
// Buffer @0x8A3A08 removed G34: name clashed with class Buffer; use byte_8A3A08 (ida_globals.h)
extern int BuildingClass_Array;  // data: 0xA8EB40
extern int BuildingClass_InstanceArray;  // data: 0xB0F4EC
extern int BuildingTypeClass_AnimTable;  // data: 0xB054D4
extern int BulletClass_Array;  // data: 0xA8ED40
extern int BulletTypeClass_Array;  // data: 0xA83C80
extern int Caption;  // data: 0x81FCC8
extern int CCINIClass_AIHash;  // data: 0xB77E08
extern int CCINIClass_ArtHash;  // data: 0xB77E04
extern int CCINIClass_INI_AI;  // data: 0x887128
extern int CCINIClass_INI_RA2MD;  // data: 0x8870C0
extern int CCINIClass_INI_UIMD;  // data: 0x887208
extern int CCINIClass_RulesHash;  // data: 0xB77E00
extern int ChronoScreenEffect_Duration;  // data: 0xA9FA98
extern int ChronoScreenEffect_Status;  // data: 0xA9FAB0
extern int ClassName;  // data: 0x8357B0
extern int CmdLine_NoCD;  // data: 0x89E410
extern int CodePage;  // data: 0xB782B0
extern int ColorScheme_Array;  // data: 0xB054D0
extern int Control;  // data: 0x8423D8
extern int Crates;  // data: 0xA8B261
extern int CRC32_Table;  // data: 0x81F7B4
extern int CriticalSection;  // data: 0x87E7F8
extern int CRTGlobal_B7819C;  // data: 0xB7819C
extern int CRTGlobal_B781A8;  // data: 0xB781A8
extern int CRTGlobal_B781B0;  // data: 0xB781B0
extern int CRTGlobal_B781C0;  // data: 0xB781C0
extern int CRTGlobal_B781C4;  // data: 0xB781C4
extern int CRTGlobal_B781C8;  // data: 0xB781C8
extern int CRTGlobal_B781CC;  // data: 0xB781CC
extern int CRTGlobal_B781D0;  // data: 0xB781D0
extern int CRTGlobal_B781D4;  // data: 0xB781D4
extern int CRTGlobal_B781D8;  // data: 0xB781D8
extern int CRTGlobal_B781DC;  // data: 0xB781DC
extern int CRTGlobal_B781E4;  // data: 0xB781E4
extern int CRTGlobal_B781E8;  // data: 0xB781E8
extern int CRTGlobal_B781EC;  // data: 0xB781EC
extern int CRTGlobal_B781F4;  // data: 0xB781F4
extern int CRTGlobal_B781FC;  // data: 0xB781FC
extern int CRTGlobal_B78200;  // data: 0xB78200
extern int CRTGlobal_B78204;  // data: 0xB78204
extern int CRTGlobal_B78218;  // data: 0xB78218
extern int CRTGlobal_B78228;  // data: 0xB78228
extern int CRTGlobal_B78230;  // data: 0xB78230
extern int CRTGlobal_B78298;  // data: 0xB78298
extern int CRTGlobal_B782A0;  // data: 0xB782A0
extern int CRTGlobal_B782A4;  // data: 0xB782A4
extern int CRTGlobal_B782A8;  // data: 0xB782A8
extern int CRTGlobal_B782AC;  // data: 0xB782AC
extern int CRTGlobal_B782B4;  // data: 0xB782B4
extern int CRTGlobal_B782B8;  // data: 0xB782B8
extern int CRTGlobal_B782C4;  // data: 0xB782C4
extern int CRTGlobal_B782C8;  // data: 0xB782C8
extern int CRTGlobal_B782D0;  // data: 0xB782D0
extern int CRTGlobal_B782D8;  // data: 0xB782D8
extern int CRTGlobal_B782DC;  // data: 0xB782DC
extern int CRTGlobal_B782E0;  // data: 0xB782E0
extern int CRTGlobal_B782E4;  // data: 0xB782E4
extern int CRTGlobal_B782E8;  // data: 0xB782E8
extern int CRTGlobal_B782EC;  // data: 0xB782EC
extern int CRTGlobal_B782F0;  // data: 0xB782F0
extern int CRTGlobal_B783A4;  // data: 0xB783A4
extern int CRTGlobal_B783A8;  // data: 0xB783A8
extern int CRTGlobal_B783D4;  // data: 0xB783D4
extern int CRTGlobal_B784FC;  // data: 0xB784FC
extern int CRTGlobal_B78500;  // data: 0xB78500
extern int CRTGlobal_B78504;  // data: 0xB78504
extern int CRTGlobal_B78508;  // data: 0xB78508
extern int CRTGlobal_B7850C;  // data: 0xB7850C
extern int CRTGlobal_B78510;  // data: 0xB78510
extern int CRTGlobal_B78514;  // data: 0xB78514
extern int CRTGlobal_B78518;  // data: 0xB78518
extern int CRTGlobal_B7851C;  // data: 0xB7851C
extern int CRTGlobal_B7852C;  // data: 0xB7852C
extern int CRTGlobal_B7853A;  // data: 0xB7853A
extern int CRTGlobal_B78548;  // data: 0xB78548
extern int CRTGlobal_B7854C;  // data: 0xB7854C
extern int CRTGlobal_B78550;  // data: 0xB78550
extern int CRTGlobal_B78554;  // data: 0xB78554
extern int CRTGlobal_B78558;  // data: 0xB78558
extern int CRTGlobal_B7855C;  // data: 0xB7855C
extern int CRTGlobal_B78560;  // data: 0xB78560
extern int CRTGlobal_B78578;  // data: 0xB78578
extern int CRTGlobal_B7857C;  // data: 0xB7857C
extern int CRTGlobal_B78580;  // data: 0xB78580
extern int CRTGlobal_B78584;  // data: 0xB78584
extern int CRTGlobal_B78588;  // data: 0xB78588
extern int CRTGlobal_B78594;  // data: 0xB78594
extern int CRTGlobal_B78598;  // data: 0xB78598
extern int CRTGlobal_B7859C;  // data: 0xB7859C
extern int CRTGlobal_B78840;  // data: 0xB78840
extern int CRTGlobal_B7885C;  // data: 0xB7885C
extern int CRTGlobal_B78860;  // data: 0xB78860
extern int CRTGlobal_B78961;  // data: 0xB78961
extern int CRTGlobal_B78A80;  // data: 0xB78A80
extern int CRTGlobal_B78B84;  // data: 0xB78B84
extern int CRTGlobal_B78B88;  // data: 0xB78B88
extern int CRTGlobal_B78B8C;  // data: 0xB78B8C
extern int CRTGlobal_B78B90;  // data: 0xB78B90
extern int CRTGlobal_B78B94;  // data: 0xB78B94
extern int CRTGlobal_B78BA0;  // data: 0xB78BA0
extern int CRTGlobal_B78BA4;  // data: 0xB78BA4
extern int CRTGlobal_B78BA8;  // data: 0xB78BA8
extern int CRTGlobal_B78BAC;  // data: 0xB78BAC
extern int CRTGlobal_B78BB0;  // data: 0xB78BB0
extern int CRTGlobal_B78BB4;  // data: 0xB78BB4
extern int CRTGlobal_B78BB8;  // data: 0xB78BB8
extern int CRTGlobal_B78BBC;  // data: 0xB78BBC
extern int CRTGlobal_B78BC0;  // data: 0xB78BC0
extern int CRTGlobal_B78BC4;  // data: 0xB78BC4
extern int CRTStreamCount;  // data: 0xB79BE0
extern int CSF_Language;  // data: 0x845728
extern int CTF;  // data: 0xA8B31E
extern int Data;  // data: 0x840B4C
extern int DataGlobal_7EAF7C;  // data: 0x7EAF7C
extern int DataGlobal_7EAF7F;  // data: 0x7EAF7F
extern int DataGlobal_7F5C44;  // data: 0x7F5C44
extern int DataGlobal_7F7CC0;  // data: 0x7F7CC0
extern int DataGlobal_816204;  // data: 0x816204
extern int DataGlobal_81B958;  // data: 0x81B958
extern int DataGlobal_81B95C;  // data: 0x81B95C
extern int DataGlobal_81CC70;  // data: 0x81CC70
extern int DataGlobal_81CC80;  // data: 0x81CC80
extern int DataGlobal_81CC84;  // data: 0x81CC84
extern int DataGlobal_81FFB0;  // data: 0x81FFB0
extern int DataGlobal_820538;  // data: 0x820538
extern int DataGlobal_824410;  // data: 0x824410
extern int DataGlobal_824FC4;  // data: 0x824FC4
extern int DataGlobal_825478;  // data: 0x825478
extern int DataGlobal_825500;  // data: 0x825500
extern int DataGlobal_825C88;  // data: 0x825C88
extern int DataGlobal_829C20;  // data: 0x829C20
extern int DataGlobal_829D20;  // data: 0x829D20
extern int DataGlobal_82A280;  // data: 0x82A280
extern int DataGlobal_839D1C;  // data: 0x839D1C
extern int DataGlobal_839D3C;  // data: 0x839D3C
extern int DataGlobal_83F13C;  // data: 0x83F13C
extern int DataGlobal_89A304[4];  // data: 0x89A304
extern int DataGlobal_89A308;  // data: 0x89A308
extern int DataGlobal_89A310;  // data: 0x89A310
extern int DataGlobal_89A318;  // data: 0x89A318  (CellClass setOverlayType matrix scalar)
extern int DataGlobal_89A31C;  // data: 0x89A31C  (CellClass setOverlayType -1 sentinel scalar)
extern int DataGlobal_89A320;  // data: 0x89A320  (CellClass setOverlayType -1 sentinel scalar)
extern int DataGlobal_89C428;  // data: 0x89C428
extern int DataGlobal_A8DB3C;  // data: 0xA8DB3C
extern int DataGlobal_A8DB44;  // data: 0xA8DB44
extern int DataGlobal_A8DB48;  // data: 0xA8DB48
extern int DataGlobal_A8DB5C;  // data: 0xA8DB5C
extern int DataGlobal_A8DB60;  // data: 0xA8DB60
extern int DataGlobal_B048D0;  // data: 0xB048D0
extern int DataGlobal_B048D4;  // data: 0xB048D4
extern int DataGlobal_B730E8;  // data: 0xB730E8
extern int DataGlobal_B78160;  // data: 0xB78160  (WWMouseClass::processFrame -1 sentinel scalar)
extern int Delimiter;  // data: 0x817F70
extern int Destination[];  // data: 0xA8B8E0
extern int Direction_X_Offsets;  // data: 0x89F688
extern int Direction_Y_Offsets;  // data: 0x89F6A0
extern int DSurface_Alternate;  // data: 0x887310
extern int DSurface_Composite;  // data: 0x88731C
extern int DSurface_Sidebar;  // data: 0x887300
extern int DSurface_SidebarBounds;  // data: 0x886F90
extern int DSurface_Tile;  // data: 0x8872FC
// G42.3: DSurface::ViewBounds static-object flat host (data: 0x886FA0)
// -- offsets honor the corpus pad naming (__pad_N at +N); covers max indexed
//    access __pad_FC[324] = +0x240
struct DSurface_ViewBounds_flat {
    unsigned int field_0;                   // +0x0
    unsigned int field_4;                   // +0x4
    unsigned char __pad_8[0x34 - 0x8];      // +0x8  (idx<=20)
    unsigned char __pad_34[0xFC - 0x34];    // +0x34 (idx<=116)
    unsigned char __pad_FC[0x240 - 0xFC];   // +0xFC (idx<=324)
};
extern DSurface_ViewBounds_flat DSurface_ViewBounds;  // data: 0x886FA0
extern int DSurface_WindowBounds;  // data: 0x886FB0
extern int dwInitParam;  // data: 0xB72F54
extern int dword_A8ED54;  // data: 0xA8ED54
extern int dwRegister;  // data: 0x840A74
extern int dwTlsIndex;  // data: 0x87C7A8
extern int ExistingFileName;  // data: 0x829ABC
extern int Ext;  // data: 0x81834C
extern int Factory_ExitCellTable;  // data: 0xA8E34C
extern int FactoryClass_Array;  // data: 0xA8EC1C
extern int FactoryClass_Count;  // data: 0xA8EC28
extern int File;  // data: 0x87BF70
extern int FileName;  // data: 0x8221F8
extern int Filename;  // data: 0xB783F8
extern int FileSystem_GRFTXT_TIBERIUM_PAL;  // data: 0x87F6BC
extern int FileSystem_PIPBRD_SHP;  // data: 0xAC1478
extern int FileSystem_PIPS2_SHP;  // data: 0xAC1480
extern int FileSystem_PIPS_SHP;  // data: 0xAC147C
extern int FileSystem_POWEROFF_SHP;  // data: 0x89DDC4
extern int FileSystem_TALKBUBL_SHP;  // data: 0xAC1484
extern int FileSystem_TEMPERAT_PAL;  // data: 0x885780
extern int FileSystem_WRENCH_SHP;  // data: 0x89DDC8
extern int FileTime;  // data: 0x822D5C
extern int First;  // data: 0x815DA8
extern int FootClass_Array;  // data: 0x8B3DC0
extern int Format;  // data: 0x817828
extern int FOW;  // data: 0xA8B31F
extern int funcs_756843;  // data: 0x846840
extern int funcs_7CDE2B;  // data: 0x87C488
extern int g_AbstractTypePool;  // data: 0xA8E978
extern int g_AircraftClassCount;  // data: 0xA8E3A0
extern int g_AircraftStatusFlag;  // data: 0x889E68
extern int g_AircraftTrackerPool;  // data: 0x87F914
extern int g_AircraftTrackerState;  // data: 0x87F918
extern int g_AircraftTypeCount;  // data: 0xA8B21C
extern int g_AlphaShapeLimit;  // data: 0x88A100
extern int g_AlphaShapePool;  // data: 0xB0F730
extern int g_AnimationManager;  // data: 0xB0BC88
extern int g_AnimClass_Capacity;  // data: 0xB0BC90
extern int g_AnimClass_SaveState;  // data: 0xB054E0
extern int g_AnimClassCount;  // data: 0xA8E9B8
extern int g_AnimClassPool;  // data: 0xA8E9AC
extern int g_AnimFrameCounter;  // data: 0xB0F688
extern int g_AnimManager;  // data: 0xB0F680
extern int g_AnimManagerConfig;  // data: 0xB0F684
extern int g_AnimPoolCount;  // data: 0xB0F674
extern int g_AnimPoolLocked;  // data: 0xB0F67D
extern int g_AnimPoolManager;  // data: 0xB0F670
extern int g_AnimTypeCount;  // data: 0x8B4154
extern int g_AnimTypeInitQueue;  // data: 0xA8B210
extern int g_AnimTypePool;  // data: 0xB0F678
extern int g_ArmageddonMode;  // data: 0xA8ED6B
extern int g_AsyncIOState;  // data: 0xB45B68
extern int g_AsyncMovieState;  // data: 0xB45BE8
extern int g_AudioConfigState;  // data: 0x87E2A0
extern int g_AudioDSPState;  // data: 0xB78198
extern int g_AudioFileData;  // data: 0x87E724
extern int g_AudioInitFlag;  // data: 0x87E8B8
extern int g_AudioInitialized;  // data: 0x87E72C
extern int g_AudioStreamObject;  // data: 0x87E180
extern int g_BigIntModExpObject;  // data: 0xABF6BC
extern int g_BigIntPool;  // data: 0xABF3F4
extern int g_BinkMoviePlayer;  // data: 0x87F770
extern int g_BitMask_Blue;  // data: 0x8A0DE4
extern int g_BitMask_Green;  // data: 0x8A0DE0
extern int g_BitMask_Red;  // data: 0x8A0DDC
extern int g_BitShift_Blue;  // data: 0x8A0DD8
extern int g_BitShift_Green_0;  // data: 0x8A0DD4
extern int g_BitShift_Red;  // data: 0x8A0DD0
extern int g_BounceClassInit;  // data: 0xA8ED5C
extern int g_BridgeCellPool;  // data: 0xABCA20
extern int g_BuildingClass_Capacity;  // data: 0xB0F540
extern int g_BuildingClass_Count;  // data: 0xA83DF8
extern int g_BuildingClass_InstanceCount;  // data: 0xA8EB44
extern int g_BuildingClassPool;  // data: 0x89C848
extern int g_BuildingClassPoolManager;  // data: 0xB0F5BC
extern int g_BuildingInstanceCount;  // data: 0xB0F5B8
extern int g_BuildingLoadQueue_Active;  // data: 0xB0E850
extern int g_BuildingLoadQueue_Array;  // data: 0xB0E840
extern int g_BuildingLoadQueue_Capacity;  // data: 0xB0E848
extern int g_BuildingLoadQueue_Count;  // data: 0xB0E844
extern int g_BuildingLoadQueue_Dirty;  // data: 0xB0E84C
extern int g_BuildingPlacementState;  // data: 0x8809A0
extern int g_BuildingProductionQueue;  // data: 0xA83D9C
extern int g_BuildingProductionState;  // data: 0xA8EB50
extern int g_BuildingTypeClass_Array;  // data: 0xA83D84
extern int g_BuildingTypeInitState;  // data: 0xA83DA8
extern int g_BuildingTypeInstanceCount;  // data: 0xB0F5C8
extern int g_BulletClassPool;  // data: 0xABCD3C
extern int g_BulletTypeInitState;  // data: 0xA83C90
extern int g_CameoRenderFlag;  // data: 0x884B8F
extern int g_CampaignConfig;  // data: 0xA8B2BC
extern int g_CampaignFactionSlot;  // data: 0xA8B2FC
extern int g_CampaignPlayerArray;  // data: 0xA8B29C
extern int g_CampaignScoreFlags;  // data: 0xA8D580
extern int g_CampaignSideIndex;  // data: 0xA8B2DC
extern int g_CampaignTypeArray;  // data: 0xA83CFC
extern int g_Cell_BuildabilityLUT;  // data: 0xAA0E28
extern int g_Cell_PositionLUT;  // data: 0x87F8DC
extern int g_CellClassArray;  // data: 0xABDC50
extern int g_CellClassManager;  // data: 0x887888
extern int g_CellDirectionOffsets;  // data: 0x89F690
extern int g_CellPassabilityLUT;  // data: 0xAA0738
extern int g_CellPositionOffset;  // data: 0x87F8E0
extern int g_CellTileLookup;  // data: 0xABC1D8
extern int g_CellTileTypeCache;  // data: 0xABBEC8
extern int g_ChronoEffectState;  // data: 0xA9FA9C
extern int g_ClipboardBuffer;  // data: 0xB72D20
extern int g_ComboBoxState;  // data: 0xAC1DE0
extern int g_CommandClass_Capacity;  // data: 0x87F65C
extern int g_CommandClass_Extra;  // data: 0x87F66C
extern int g_CommandClass_HasInit;  // data: 0x87F665
extern int g_CommandClass_Size;  // data: 0x87F660
extern int g_CommandClassVector;  // data: 0x87F658
extern int g_CommandClassVector_State;  // data: 0x87F668
extern int g_CommandExecState;  // data: 0xA8B3AC
extern int g_CommandLineFlags;  // data: 0xA8EB84
extern int g_ControlGroupConfig;  // data: 0xA8EFFC
extern int g_ControlGroupLimit;  // data: 0xA8F000
extern int g_ControlGroupPool;  // data: 0xA8EFF8
extern int g_ControlGroupState;  // data: 0xA8EF98
extern int g_CoordScatterManager;  // data: 0xA8ECE0
extern int g_CrateCount;  // data: 0xA83CF0
extern int g_CrateProcessState;  // data: 0xB0F4F8
extern int g_CraterCreationState;  // data: 0xB0CE88
extern int g_CraterPool;  // data: 0xB0CE7C
extern int g_CrateSystemState;  // data: 0xA83A54
extern int g_CreditsScreenBounds;  // data: 0x886FB8
extern int g_CreditsScreenConfig;  // data: 0x886FBC
extern int g_CreditsScreenState;  // data: 0xAC48BC
extern int g_CurrentFrame;  // data: 0xA8ED84
extern int g_CurrentPlayerName;  // data: 0xA8D610
extern int g_DDraw_Active;  // data: 0xA8ED80
extern int g_DDraw_AllowOverlayBlit;  // data: 0x8205D5
extern int g_DDraw_ClipRect;  // data: 0x8A0790
extern int g_DDraw_ErrorCallback;  // data: 0x8A00B0
extern int g_DDraw_Force3D;  // data: 0x8A0DEF
extern int g_DDraw_PaletteEntries;  // data: 0x89FC94
extern int g_DDraw_PixelFormatDesc;  // data: 0x8A0948
extern int g_DDrawSurfaceManager;  // data: 0x89F518
extern int g_DialogBuffer;  // data: 0xAC18C8
extern int g_DialogControlPool;  // data: 0xB0FB50
extern int g_DialogHashMap_Base;  // data: 0xAC1B00
extern int g_DialogHashMap_Buckets;  // data: 0xAC1B0C
extern int g_DialogHashMap_Callback;  // data: 0xAC1B60
extern int g_DialogHashMap_Count;  // data: 0xAC1B04
extern int g_DialogHashMap_Entries;  // data: 0xAC1B48
extern int g_DialogHashMap_Grow;  // data: 0xAC1B4C
extern int g_DialogHashMap_Hasher;  // data: 0xAC1B18
extern int g_DialogHashMap_Insert;  // data: 0xAC1B54
extern int g_DialogHashTable;  // data: 0xAC4848
extern int g_DialogPool;  // data: 0xAC18C0
extern int g_DialogPoolCount;  // data: 0xAC18C4
extern int g_DialogTrackingList;  // data: 0xB72F50
extern int g_DirectionOffsetPool;  // data: 0x89F698
extern int g_DisplayWidth;  // data: 0x8A00A4
extern int g_DrawColorState;  // data: 0x8A0DF8
extern int g_DSurface_Hidden;  // data: 0x88730C
extern int g_DSurface_Hidden_2;  // data: 0x887314
extern int g_DSurface_Primary;  // data: 0x887308
extern int g_DSurface_SidebarBounds;  // data: 0x886F94
extern int g_DSurface_ViewBounds;  // data: 0x886F9C
extern int g_DSurface_WindowOffset;  // data: 0x886FAC
extern int g_EventDispatchState;  // data: 0xA8DB30
extern int g_EventManager;  // data: 0xA8EA70
extern int g_EventProcessState;  // data: 0xA8DB38
extern int g_ExceptionReturnAddr;  // data: 0x8B3A80
extern int g_ExceptionReturnFrame;  // data: 0x8B3A84
extern int g_ExceptionReturnStack;  // data: 0x8B3A7C
extern int g_FileCacheHashRoot;  // data: 0xABF00C
extern int g_FileExtensionState;  // data: 0xAC48F0
extern int g_FileSystem_THEATER_PAL;  // data: 0x87F6C4
extern int g_FileSystemInitFlag;  // data: 0x87F68C
extern int g_FileSystemPool;  // data: 0x87F690
extern int g_FogOfWarState;  // data: 0x89C4D0
extern int g_FootClass_Pool;  // data: 0x8B3D88
extern int g_FootClassConfig;  // data: 0x8B3D20
extern int g_FrameCounter;  // data: 0xA8ED2C
extern int g_FrameCounter_Samples;  // data: 0xABCD4C
extern int g_FrameCounter_Total;  // data: 0xABCD48
extern int g_GadgetAnimState;  // data: 0xB0FC1C
extern int g_GameActive;  // data: 0xA8ED9C
extern int g_GameCleanupState;  // data: 0xA80218
extern int g_GameConfigManager;  // data: 0x87F778
extern int g_GameDifficulty;  // data: 0xA8B240
extern int g_GameFlags_Campaign;  // data: 0xA8DAB4
extern int g_GameFlagsMisc;  // data: 0xA8DABC
extern int g_GameInitState;  // data: 0x8B41F8
extern int g_GameMode_Current;  // data: 0xA8B238
extern int g_GameModeOptions;  // data: 0xA8EB60
extern int g_GameModeOptionState;  // data: 0x89E000
extern int g_GameNetworkObject;  // data: 0xA8BC60
extern int g_GameObjectCleanup;  // data: 0xB0E730
extern int g_GameObjectManager;  // data: 0xA8EC44
extern int g_GameOptionsFlags;  // data: 0xA8B244
extern int g_GameRulesOptions;  // data: 0xA8B254
extern int g_GameScreenConfig;  // data: 0xB78838
extern int g_GameScreenFlags;  // data: 0xB78834
extern int g_GameScreenManager;  // data: 0xAC48D0
extern int g_GameScreenState;  // data: 0xAC48B4
extern int g_GameSessionFlags;  // data: 0xA8B570
extern int g_GameSessionPool;  // data: 0xA8B56C
extern int g_GameSetupBuffer;  // data: 0xA8B380
extern int g_GameSetupConfig;  // data: 0xA8DA54
extern int g_GameSetupFlags;  // data: 0xA8DA48
extern int g_GameStateFlags;  // data: 0xA8B23C
extern int g_GameTypeFlags;  // data: 0xA8B24C
extern int g_hInstance;  // data: 0xB732F0
extern int g_HouseClass_AIProductionState;  // data: 0x8B40F8
extern int g_HouseClass_BuildState;  // data: 0x8B4118
extern int g_HouseClass_ObserverFlags;  // data: 0xAC119C
extern int g_HouseClassInitState;  // data: 0xA8E340
extern int g_hWnd;  // data: 0xB73550
extern int g_IKnowWhatImDoing;  // data: 0xA8E7AC
extern int g_InfantryClassLimit;  // data: 0xA83DEC
extern int g_InfantryDrawState;  // data: 0xB1D4CC
extern int g_InfantryRenderPool;  // data: 0xB1D4A4
extern int g_InfantrySelectState;  // data: 0xB1D4B0
extern int g_InfantryTypeInitState;  // data: 0xA83D78
extern char g_INI_DefaultBuffer;  // data: 0x889F64 (W19K4: IDA disasm 0x41d12c fstp qword ptr g_INI_DefaultBuffer+4 = byte-offset => char scalar)
extern int g_INI_Key_A1;  // data: 0x831688
extern int g_INI_Key_Action;  // data: 0x817270
extern int g_INI_Key_AlliedLoad;  // data: 0x836EC0
extern int g_INI_Key_Ambient;  // data: 0x82BF94
extern int g_INI_Key_Amphibious;  // data: 0x81BB18
extern int g_INI_Key_Animations;  // data: 0x83D0DC
extern int g_INI_Key_Apr;  // data: 0x84A090
extern int g_INI_Key_Armor;  // data: 0x81D9D4
extern int g_INI_Key_Attack;  // data: 0x816E64
extern int g_INI_Key_Audio;  // data: 0x8330B4
extern int g_INI_Key_Aug;  // data: 0x84A044
extern int g_INI_Key_AutoLogin;  // data: 0x84A120
extern int g_INI_Key_Back;  // data: 0x83E3E8
extern int g_INI_Key_BarGraph;  // data: 0x83E3F0
extern int g_INI_Key_Basic;  // data: 0x82BF9C
extern int g_INI_Key_Battleclans;  // data: 0x84A45C
extern int g_INI_Key_Battles;  // data: 0x81B1D8
extern int g_INI_Key_Beacon;  // data: 0x8427FC
extern int g_INI_Key_BeginMovie;  // data: 0x842354
extern int g_INI_Key_BestBox;  // data: 0x83E408
extern int g_INI_Key_Blue;  // data: 0x8207DC
extern int g_INI_Key_Brief;  // data: 0x83D8A8
extern int g_INI_Key_Briefing;  // data: 0x839718
extern int g_INI_Key_BROK;  // data: 0x842058
extern int g_INI_Key_BuildOffAlly;  // data: 0x83CF84
extern int g_INI_Key_Cameo;  // data: 0x843350
extern int g_INI_Key_CampaignID;  // data: 0x847FD0
extern int g_INI_Key_Campaigns;  // data: 0x81F3B4
extern int g_INI_Key_CellTags;  // data: 0x81FFE4
extern int g_INI_Key_Cheer;  // data: 0x8256E4
extern int g_INI_Key_Civilian;  // data: 0x818164
extern int g_INI_Key_Clear;  // data: 0x81DC1C
extern int g_INI_Key_CLEAR;  // data: 0x832174
extern int g_INI_Key_CLSID;  // data: 0x840B44
extern int g_INI_Key_Color;  // data: 0x81B138
extern int g_INI_Key_ComboBox;  // data: 0x83370C
extern int g_INI_Key_Community;  // data: 0x84CD6C
extern int g_INI_Key_Computer;  // data: 0x824FD8
extern int g_INI_Key_Cost;  // data: 0x825470
extern int g_INI_Key_Country;  // data: 0x824D4C
extern int g_INI_Key_Credits;  // data: 0x824E38
extern int g_INI_Key_CurrentMap;  // data: 0x81F19C
extern int g_INI_Key_Damage;  // data: 0x81859C
extern int g_INI_Key_De;  // data: 0x8278B4
extern int g_INI_Key_Dec;  // data: 0x849FEC
extern int g_INI_Key_DefaultPersona;  // data: 0x84A13C
extern int g_INI_Key_Defaults;  // data: 0x84658C
extern int g_INI_Key_Deploy;  // data: 0x825724
extern int g_INI_Key_Description;  // data: 0x81B1A4
extern int g_INI_Key_DescriptionText;  // data: 0x83F648
extern int g_INI_Key_DestNet;  // data: 0x83300C
extern int g_INI_Key_DetailLevel;  // data: 0x81855C
extern int g_INI_Key_DialogList;  // data: 0x8467D4
extern int g_INI_Key_Digest;  // data: 0x81BFE0
extern int g_INI_Key_Easy;  // data: 0x818134
extern char g_INI_Key_Edit[5];  // data: 0x833728  (declsync G42.31: core twin)
extern int g_INI_Key_Efficiency;  // data: 0x83E3FC
extern int g_INI_Key_Elasticity;  // data: 0x8184F4
extern int g_INI_Key_Emblem;  // data: 0x83E410
extern int g_INI_Key_Feb;  // data: 0x84A0BC
extern int g_INI_Key_Fire;  // data: 0x836F04
extern int g_INI_Key_FirewallDelta;  // data: 0x830CB0
extern int g_INI_Key_FirewallSettings;  // data: 0x830CC0
extern int g_INI_Key_Flat;  // data: 0x818624
extern int g_INI_Key_Float;  // data: 0x81DBAC
extern int g_INI_Key_FloatBeach;  // data: 0x81DBA0
extern int g_INI_Key_FogOfWar;  // data: 0x83CF78
extern int g_INI_Key_Foot;  // data: 0x81DBD4
extern int g_INI_Key_Foundation;  // data: 0x81A734
extern int g_INI_Key_GameMode;  // data: 0x83EFD0
extern int g_INI_Key_GameSpeed;  // data: 0x8332E8
extern int g_INI_Key_GameType;  // data: 0x83D6C0
extern int g_INI_Key_General;  // data: 0x826278
extern int g_INI_Key_Green;  // data: 0x82053C
extern int g_INI_Key_Grey;  // data: 0x822728
extern int g_INI_Key_Ground;  // data: 0x81DB84
extern int g_INI_Key_Group;  // data: 0x842DC4
extern int g_INI_Key_Guard;  // data: 0x816E44
extern int g_INI_Key_Header;  // data: 0x83DE68
extern int g_INI_Key_Height;  // data: 0x81A7A8
extern int g_INI_Key_Hotkey;  // data: 0x827B80
extern int g_INI_Key_Houses;  // data: 0x824D54
extern int g_INI_Key_Hover;  // data: 0x81DBBC
extern int g_INI_Key_HTMLPath;  // data: 0x849640
extern int g_INI_Key_Image;  // data: 0x819420
extern int g_INI_Key_Infantry;  // data: 0x8173D0
extern int g_INI_Key_InitStrings;  // data: 0x83F05C
extern int g_INI_Key_Intro;  // data: 0x8241C0
extern int g_INI_Key_INTRO;  // data: 0x8263A8
extern int g_INI_Key_IonAmbient;  // data: 0x82BF5C
extern int g_INI_Key_IonBlue;  // data: 0x82BF40
extern int g_INI_Key_IonGreen;  // data: 0x82BF48
extern int g_INI_Key_IonGround;  // data: 0x82BF34
extern int g_INI_Key_IonLevel;  // data: 0x82BF28
extern int g_INI_Key_IonRed;  // data: 0x82BF54
extern int g_INI_Key_IQ;  // data: 0x824DD8
extern int g_INI_Key_IsBaseDefense;  // data: 0x81A7EC
extern int g_INI_Key_Jan;  // data: 0x84A0F8
extern int g_INI_Key_Jul;  // data: 0x84A058
extern int g_INI_Key_Jun;  // data: 0x84A06C
extern int g_INI_Key_Ladder;  // data: 0x84A468
extern int g_INI_Key_LastDay;  // data: 0x8481AC
extern int g_INI_Key_Level;  // data: 0x81B0D4
extern int g_INI_Key_LightGrey;  // data: 0x836ECC
extern int g_INI_Key_Lighting;  // data: 0x82BF88
extern int g_INI_Key_ListBox;  // data: 0x833718
extern int g_INI_Key_Locale;  // data: 0x849F7C
extern int g_INI_Key_LocalSize;  // data: 0x820164
extern int g_INI_Key_Lose;  // data: 0x83E180
extern int g_INI_Key_Loser;  // data: 0x81B41C
extern int g_INI_Key_LS640BkgdName;  // data: 0x83DBC8
extern int g_INI_Key_LS640BriefLocX;  // data: 0x83DC08
extern int g_INI_Key_LS640BriefLocY;  // data: 0x83DBF8
extern int g_INI_Key_LS800BkgdName;  // data: 0x83DBB8
extern int g_INI_Key_LS800BkgdPal;  // data: 0x83DBA8
extern int g_INI_Key_LS800BriefLocX;  // data: 0x83DBE8
extern int g_INI_Key_LS800BriefLocY;  // data: 0x83DBD8
extern int g_INI_Key_LSLoadBriefing;  // data: 0x83DC18
extern int g_INI_Key_LSLoadMessage;  // data: 0x83DC28
extern int g_INI_Key_Manage;  // data: 0x84A478
extern int g_INI_Key_Mar;  // data: 0x84A0A4
extern int g_INI_Key_May;  // data: 0x84A07C
extern int g_INI_Key_MultiMaps;  // data: 0x83F514
extern int g_INI_Key_MultiMissile;  // data: 0x8425F0
extern int g_INI_Key_MultiPlayer;  // data: 0x82642C
extern int g_INI_Key_Name;  // data: 0x817854
extern int g_INI_Key_Network;  // data: 0x833060
extern int g_INI_Key_Neutral;  // data: 0x82BA08
extern int g_INI_Key_NewEdit;  // data: 0x833720
extern int g_INI_Key_No;  // data: 0x821F04
extern int g_INI_Key_None;  // data: 0x817F64
extern int g_INI_Key_NORMAL;  // data: 0x8161D4
extern int g_INI_Key_Normal;  // data: 0x81BB60
extern int g_INI_Key_Normalized;  // data: 0x818610
extern int g_INI_Key_Nov;  // data: 0x84A004
extern int g_INI_Key_NukePayload;  // data: 0x81AFA0
extern int g_INI_Key_NumberStartingPoints;  // data: 0x83DE48
extern int g_INI_Key_NumCoopHumanStartSpots;  // data: 0x83DE30
extern int g_INI_Key_NumPlayers;  // data: 0x82BBD8
extern int g_INI_Key_Oct;  // data: 0x84A018
extern int g_INI_Key_Official;  // data: 0x83DC5C
extern int g_INI_Key_OK;  // data: 0x81FD14
extern int g_INI_Key_Options;  // data: 0x8254DC
extern int g_INI_Key_OverlayDataPack;  // data: 0x833474
extern int g_INI_Key_OverlayPack;  // data: 0x833484
extern int g_INI_Key_Palette;  // data: 0x824254
extern int g_INI_Key_Particles;  // data: 0x83D0F4
extern int g_INI_Key_ParticleSystems;  // data: 0x83D100
extern int g_INI_Key_PDPLANE;  // data: 0x839708
extern int g_INI_Key_PhoneBook;  // data: 0x83F050
extern int g_INI_Key_PlanningMode;  // data: 0x827278
extern int g_INI_Key_Player;  // data: 0x82BFA4
extern int g_INI_Key_Points;  // data: 0x8439A8
extern int g_INI_Key_Priority;  // data: 0x84301C
extern int g_INI_Key_Railgun;  // data: 0x836EF4
extern int g_INI_Key_RandomMap;  // data: 0x82BB24
extern int g_INI_Key_Range;  // data: 0x842690
extern int g_INI_Key_Ranking;  // data: 0x83DFC4
extern int g_INI_Key_Rate;  // data: 0x8185A4
extern int g_INI_Key_Scenario;  // data: 0x81B1BC
extern int g_INI_Key_SCORE;  // data: 0x82FEBC
extern int g_INI_Key_ScreenHeight;  // data: 0x833150
extern int g_INI_Key_ScreenWidth;  // data: 0x833168
extern int g_INI_Key_ScriptTypes;  // data: 0x83E728
extern int g_INI_Key_SecondaryProne;  // data: 0x825670
extern int g_INI_Key_Sep;  // data: 0x84A030
extern int g_INI_Key_SerialDefaults;  // data: 0x83F0D8
extern int g_INI_Key_Server;  // data: 0x849F84
extern int g_INI_Key_ShortGame;  // data: 0x83CFA8
extern int g_INI_Key_Side;  // data: 0x817334
extern int g_INI_Key_Size;  // data: 0x820178
extern int g_INI_Key_Smoke;  // data: 0x836F0C
extern int g_INI_Key_Socket;  // data: 0x83301C
extern int g_INI_Key_SoundList;  // data: 0x846580
extern int g_INI_Key_SovietLoad;  // data: 0x836EB4
extern int g_INI_Key_Spawns;  // data: 0x8184C8
extern int g_INI_Key_Special;  // data: 0x817318
extern int g_INI_Key_Speed;  // data: 0x81D9CC
extern int g_INI_Key_StartSound;  // data: 0x818418
extern int g_INI_Key_StartX;  // data: 0x83DE70
extern int g_INI_Key_StartY;  // data: 0x83DE60
extern int g_INI_Key_Stop;  // data: 0x816E00
extern int g_INI_Key_StopSound;  // data: 0x818404
extern int g_INI_Key_Suicide;  // data: 0x843050
extern int g_INI_Key_SuperWeaponsAllowed;  // data: 0x83CF94
extern int g_INI_Key_SyncBug;  // data: 0x83F040
extern int g_INI_Key_TaskForces;  // data: 0x842DB8
extern int g_INI_Key_TeamTypes;  // data: 0x8430FC
extern int g_INI_Key_TechLevel;  // data: 0x824E40
extern int g_INI_Key_Theater;  // data: 0x818658
extern int g_INI_Key_Theme;  // data: 0x824194
extern int g_INI_Key_Themes;  // data: 0x844760
extern int g_INI_Key_Tiberium;  // data: 0x817278
extern int g_INI_Key_TiberiumExplosive;  // data: 0x83AD2C
extern int g_INI_Key_TiberiumGrows;  // data: 0x83D000
extern int g_INI_Key_Tiberiums;  // data: 0x84492C
extern int g_INI_Key_Time;  // data: 0x81F11C
extern int g_INI_Key_Track;  // data: 0x81DBCC
extern int g_INI_Key_TRUCKA;  // data: 0x842DCC
extern int g_INI_Key_TRUCKB;  // data: 0x842DD4
extern int g_INI_Key_Type;  // data: 0x824314
extern int g_INI_Key_TypeSelect;  // data: 0x827304
extern int g_INI_Key_UIName;  // data: 0x81784C
extern int g_INI_Key_UnitCount;  // data: 0x83D06C
extern int g_INI_Key_UpdateDate;  // data: 0x849F64
extern int g_INI_Key_UpdateTime;  // data: 0x849F70
extern int g_INI_Key_VariableNames;  // data: 0x83D824
extern int g_INI_Key_Video;  // data: 0x833160
extern int g_INI_Key_Volume;  // data: 0x846568
extern int g_INI_Key_VoxelAnims;  // data: 0x83D0E8
extern int g_INI_Key_VRAM;  // data: 0x827C88
extern int g_INI_Key_Wall;  // data: 0x81AC58
extern int g_INI_Key_Warhead;  // data: 0x8183B4
extern int g_INI_Key_Warheads;  // data: 0x83A0D0
extern int g_INI_Key_Water;  // data: 0x81BAE8
extern int g_INI_Key_Waypoints;  // data: 0x82DB0C
extern int g_INI_Key_Wheel;  // data: 0x81DBC4
extern int g_INI_Key_Width;  // data: 0x82BBE4
extern int g_INI_Key_Winner;  // data: 0x81B424
extern int g_INI_Key_Wipe;  // data: 0x83E418
extern int g_INI_Key_WOnline;  // data: 0x84A52C
extern int g_INI_Key_XXICON;  // data: 0x844530
extern int g_IntroMovieObject;  // data: 0xA8E960
extern int g_IsMultiplayerSession;  // data: 0xB777B0
extern uint8_t g_IsWindowed[1024];  // X34-L5 array retype (binary width+bound)
extern int g_LastPerformanceTick;  // data: 0x887338
extern int g_LoadScreenFlag;  // data: 0x8A00A0
extern int g_LoadScreenProgress;  // data: 0xA8E358
extern int g_Lobby_MaxPlayers;  // data: 0xAC11B4
extern int g_Lobby_PlayerColor;  // data: 0xAC11AC
extern int g_Lobby_PlayerCount;  // data: 0xAC11A0
extern int g_Lobby_PlayerReady;  // data: 0xAC11B0
extern int g_Lobby_PlayerSide;  // data: 0xAC11A8
extern int g_Lobby_PlayerTeam;  // data: 0xAC11A4
extern int g_lParam;  // data: 0xA8EB78
extern int g_lpDirectDraw7;  // data: 0x8A0094
extern int g_MainLoopObject;  // data: 0xA8D58C
extern int g_Map_GlobalCellIndex;  // data: 0xABDC74
extern int g_Map_TiberiumConfig;  // data: 0xABE154
extern int g_Map_VisibleRect;  // data: 0x886FA4
extern int g_Map_VisibleRectOffset;  // data: 0x886FA8
extern int g_MapCellCount;  // data: 0xABED08
extern int g_MapCellHeight_Value;  // data: 0xABED04
extern int g_MapCellWidth;  // data: 0x89C2DC
extern int g_MapRenderState;  // data: 0xABDE88
extern int g_MapSeedState;  // data: 0xABD480
extern int g_MapTileArray;  // data: 0xABED10
extern int g_MapTileArrayEnd;  // data: 0xABED14
extern int g_MatrixTransformState;  // data: 0xABEE10
extern int g_MenuInitComplete;  // data: 0x8B4204
extern int g_MenuInitFlags;  // data: 0x8B41FC
extern int g_MenuInitState;  // data: 0x8B4200
extern int g_MenuRandomSeed;  // data: 0xA8ED94
extern int g_MenuStateFlags;  // data: 0xAC10C8
extern int g_MiscFlag;  // data: 0xABF23A
extern int g_MissionPool;  // data: 0x8B3CC0
extern int g_MissionQueueFrame;  // data: 0xABC5F8
extern int dword_ABCD44;  // data: 0xABCD44 (MissionQueue waypoints[282], verified @0x422FD1)
extern int dword_A83D4C;  // data: 0xA83D4C (object ptr array base, verified @0x42314B)
extern void nullsub_89();  // G42.33 supply (atexit no-op stub, CheckMirrorFlags @0x423904)
extern int g_MissionQueueParam;  // data: 0xABC5FC
extern int g_MissionQueueType;  // data: 0xABC600
extern int g_MissionState;  // data: 0x8B3CC4
extern int g_MixerBuffer1;  // data: 0x87E2C0
extern int g_MixerBuffer2;  // data: 0x87E4E0
extern int g_MixerBuffer3;  // data: 0x87E578
extern int g_MixerBuffer4;  // data: 0x87E450
extern int g_MixerBuffer5;  // data: 0x87E340
extern int g_MixerBuffer6;  // data: 0x87E6A0
extern int g_MixerBuffer7;  // data: 0x87E5F8
extern int g_MixerBuffer8;  // data: 0x87E3C0
extern int g_MixerChannel_Ambient;  // data: 0x87E750
extern int g_MixerChannel_Misc;  // data: 0x87E74C
extern int g_MixerChannel_Score;  // data: 0x87E748
extern int g_MixerChannel_SFX;  // data: 0x87E73C
extern int g_MixerChannel_Stream;  // data: 0x87E754
extern int g_MixerChannel_Theme;  // data: 0x87E744
extern int g_MixerChannel_Voice;  // data: 0x87E740
extern int g_MixerState;  // data: 0x87E758
extern int g_MixFile_AUDIO;  // data: 0x87E734
extern int g_MixFile_CACHE;  // data: 0x884E4C
extern int g_MixFile_CACHEMD;  // data: 0x884E48
extern int g_MixFile_CAMEO;  // data: 0x884E44
extern int g_MixFile_CAMEOMD;  // data: 0x884E40
extern int g_MixFile_CONQMD;  // data: 0x884E38
extern int g_MixFile_CONQUER;  // data: 0x884E3C
extern int g_MixFile_GENERIC;  // data: 0x884E14
extern int g_MixFile_GENERMD;  // data: 0x884E18
extern int g_MixFile_ISOGEN;  // data: 0x884E24
extern int g_MixFile_ISOGENMD;  // data: 0x884E28
extern int g_MixFile_LoadCount;  // data: 0xA8E7B0
extern int g_MixFile_LOCAL;  // data: 0x884E54
extern int g_MixFile_LOCALMD;  // data: 0x884E50
extern int g_MixFile_MAPSFirst;  // data: 0x884E64
extern int g_MixFile_MAPSMDFirst;  // data: 0x884E60
extern int g_MixFile_MOVIES;  // data: 0x884E2C
extern int g_MixFile_MULTIMD;  // data: 0x884DD8
extern int g_MixFile_RA2;  // data: 0x884DFC
extern int g_MixFile_RA2MD;  // data: 0x884DF8
extern int g_MixFile_THEME;  // data: 0x87E738
extern int g_MixFileArray;  // data: 0x884D90
extern int g_MixFileArray_Maps;  // data: 0x884DA8
extern int g_MixFileArray_Movies;  // data: 0x884DE0
extern int g_MixFilePool;  // data: 0x884D94
extern int g_MixFilePool_Capacity;  // data: 0x884D98
extern int g_MixFilePool_Count;  // data: 0x884DA0
extern int g_MixFilePool_Flag;  // data: 0x884D9D
extern int g_MixFilePool_GrowSize;  // data: 0x884DA4
extern int g_MixFilePool_Root;  // data: 0xABEFF0
extern int g_MoveFeedback;  // data: 0x822CF2
extern int g_MovieFrameState1;  // data: 0xB45BEC
extern int g_MovieFrameState2;  // data: 0xB45BF0
extern int g_MPCooperativeState;  // data: 0x8316A4
extern int g_MultiplayerCleanup;  // data: 0xB0E790
extern int g_MultiplayerConfigState;  // data: 0xA8BB04
extern int g_MultiplayerDebugState;  // data: 0x8B41D8
extern int g_MultiplayerFlags;  // data: 0xA8BAE2
extern int g_MultiplayerGameList;  // data: 0xABFDB0
extern int g_MultiplayerGameState;  // data: 0xA8B8CC
extern int g_MultiplayerLogBuffer;  // data: 0x8B4188
extern int g_MultiplayerLogEntry;  // data: 0xA8E8D4
extern int g_MultiplayerLogFlags;  // data: 0xA8E8E0
extern int g_MultiplayerLogState;  // data: 0xA8ECB0
extern int g_MultiplayerMode;  // data: 0xABFD70
extern int g_MultiplayerModeConfig;  // data: 0xABFDA0
extern int g_MultiplayerOptions;  // data: 0xA8B8D8
extern int g_MultiplayerPool;  // data: 0xA8EB38
extern int g_MultiplayerSetupState;  // data: 0xA8BB08
extern int g_MultiplayerSyncState;  // data: 0x8B41CC
extern int g_Network_IsHosting;  // data: 0xA8DBA0
extern int g_NetworkEventIndex;  // data: 0xA802CC
extern int g_NetworkEventPending;  // data: 0xA8D5F8
extern int g_NetworkEventQueue;  // data: 0xB052D0
extern int g_NetworkHostState;  // data: 0xA8DB9C
extern int g_NetworkInterface;  // data: 0x887628
extern int g_NetworkLobby_Init;  // data: 0xB77DC1
extern int g_NetworkLobbyState;  // data: 0xB77E28
extern int g_NetworkManager;  // data: 0xA8E9C0
extern int g_NetworkOptionsState;  // data: 0xAC025C
extern int g_NetworkPacketIndex;  // data: 0xA802D4
extern int g_NetworkPlayerBuffer;  // data: 0xA8D63C
extern int g_NetworkPlayerConfig;  // data: 0xA8DA60
extern int g_NetworkPlayerCount;  // data: 0xA8DA8C
extern int g_NetworkPlayerList;  // data: 0xA8DA6C
extern int g_NetworkPlayerName;  // data: 0xA8DA90
extern int g_NetworkQuitFlag;  // data: 0xA8D60E
extern int g_NetworkRematchObject;  // data: 0xA8BB1C
extern int g_NetworkRematchState;  // data: 0x84A234
extern int g_NetworkSettingsState;  // data: 0xAC0264
extern int g_NetworkSetupConfig;  // data: 0xAC0260
extern int g_NetworkTestFlag;  // data: 0xAC1344
extern int g_ObjectClass_Capacity;  // data: 0xA8EC54
extern int g_ObjectClass_CurrentCount;  // data: 0xA8ECBC
extern unsigned int g_ObjectTrackingPool[];  // data: 0xB0CB78 G42.33 b9 array (truth 0x6cfd95 pool[a2])
extern int g_ObjectTypeConfig;  // data: 0xA83D90
extern int g_ObjectTypeList;  // data: 0x8B4130
extern int g_OverlayTypeConfig;  // data: 0xB077F8
extern int g_PaletteManagerPool;  // data: 0xB0FB98
extern int g_PathClass_State;  // data: 0x8B413C
extern int g_PerformanceTickOffset;  // data: 0x887340
extern int g_PlanningModeActive;  // data: 0xAC4C08
extern int g_PlayerHouseFlags;  // data: 0x825C28
extern int g_PlayerHouseFlags_End;  // data: 0x825C68
extern int g_PlayerInfoCount;  // data: 0xA8DA74
extern int g_PlayerNameListEnd;  // data: 0xA8DAB0
extern int g_ProductionQueueState;  // data: 0xA8EAF8
extern int g_RadarBlipManager;  // data: 0x880990
extern int g_RadarBlipPool;  // data: 0x88098C
extern int g_Randomizer;  // data: 0xABE890
extern int g_RandomMap_BuildObject;  // data: 0xABDF90
extern int g_RandomMap_TerrainState;  // data: 0xABDF94
extern int g_RandomMap_TileData;  // data: 0xABDFA0
extern int g_Rules_AlliesAllowed;  // data: 0xA8B274
extern int g_Rules_Bases;  // data: 0xA8B25C
extern int g_Rules_EngineerCount;  // data: 0xA8B268
extern int g_Rules_MultiEngineer;  // data: 0xA8B270
extern int g_Rules_ShortGame;  // data: 0xA8B264
namespace gamemd { struct RulesClass; }  // G42.33 supply (ptr-typed singleton access)
extern gamemd::RulesClass *g_RulesClass_Instance;  // data: 0x8871E0 (RulesClass* singleton slot; G42.33 retyped int->RulesClass*)
extern int g_RulesClassInitState;  // data: 0xA8E328
extern int g_RulesInitConfig;  // data: 0x822CF4
extern int g_ScenarioClass_Instance;  // data: 0xA8B230
extern int g_ScenarioFlags;  // data: 0xA8B250
extern int g_ScenarioLoadEvent;  // data: 0x825C20
extern int g_ScenarioLoadFlags;  // data: 0xA8B54C
extern int g_ScenarioLoadState;  // data: 0xA8B554
extern int g_ScenarioState;  // data: 0xA8B550
extern int g_ScenarioUpdateState;  // data: 0x8B40D8
extern int g_ScoreDisplayState1;  // data: 0xA8F180
extern int g_ScoreDisplayState2;  // data: 0xA8F184
extern int g_ScoreDisplayState3;  // data: 0xA8F188
extern unsigned char g_ScreenRenderFlag[256];  // X34-L5 array retype (binary width+bound)
extern int g_ScreenRenderLUT1;  // data: 0x879B30
extern int g_ScreenRenderLUT2;  // data: 0x87B170
extern char g_ScreenRenderMask[256];  // X34-L5 array retype (binary width+bound)
extern int g_ScreenSaverState;  // data: 0xAC48B8
extern int g_ScriptActionPool;  // data: 0xAC4BF0
extern int g_ScriptConfig;  // data: 0xAC4C98
extern int g_ScriptPool;  // data: 0xAC4CCC
extern int g_ScriptState;  // data: 0xAC4C38
extern int g_SelectionManager;  // data: 0xA8ECC8
extern int g_Shroud_CellArray;  // data: 0x87F924
extern int g_SidebarBounds;  // data: 0xB0B4F8
extern int g_SidebarButtonState;  // data: 0xB0BD50
extern int g_SidebarConfig;  // data: 0x87F6CC
extern int g_SidebarFlag;  // data: 0xB0B408
extern int g_SidebarPool;  // data: 0xB0BD58
extern int g_SidebarState;  // data: 0xA8EC88
extern int g_SlaveManagerPool;  // data: 0xB0B6EC
extern int g_SlaveMgrPool;  // data: 0xB0B660
extern int g_SpawnModeActive;  // data: 0xA8ED5D
extern char g_Str_______FAILED_[16];  // data: 0x83D584
extern char g_Str_____vwin32[11];  // data: 0x81C5AC
extern char g_Str__none_[7];  // data: 0x817474  (declsync G42.31: core twin)
extern char g_Str__Player___A_[13];  // data: 0x825070
extern char g_Str__Player___B_[13];  // data: 0x825060
extern char g_Str__Player___C_[13];  // data: 0x825050
extern char g_Str__Player___D_[13];  // data: 0x825040
extern char g_Str__Player___E_[13];  // data: 0x825030
extern char g_Str__Player___F_[13];  // data: 0x825020
extern char g_Str__Player___G_[13];  // data: 0x825010
extern char g_Str__Player___H_[13];  // data: 0x825000
extern char g_Str__random_[9];  // data: 0x81C008
extern char g_Str_Attempt_to_open_non_removable_[62];  // data: 0x81C474
extern char g_Str_Closing_serial_port[21];  // data: 0x8497A4
extern char g_Str_Creating_WOLBrowser_component_[32];  // data: 0x8495AC
extern char g_Str_Direct_X[9];  // data: 0x81FC70
extern char g_Str_DirectDrawCreate_failed_[26];  // data: 0x81FD44
extern char g_Str_DSurface__Create_Primary_done[31];  // data: 0x82061C
extern char g_Str_EVA_BuildingInfiltrated[24];  // data: 0x819198
extern char g_Str_EVA_CannotDeployHere[21];  // data: 0x82012C
extern char g_Str_EVA_ChronosphereReady[22];  // data: 0x842458  (declsync G42.31: core twin)
extern char g_Str_EVA_ForceShieldReady[21];  // data: 0x8424A4
extern char g_Str_EVA_GeneticMutatorReady[24];  // data: 0x842414
extern char g_Str_EVA_IronCurtainReady[21];  // data: 0x8424BC
extern char g_Str_EVA_LightningStormReady[24];  // data: 0x84248C
extern char g_Str_EVA_NuclearMissileReady[24];  // data: 0x8424D4
extern char g_Str_EVA_OreMinerUnderAttack[24];  // data: 0x824784
extern char g_Str_EVA_PsychicDominatorReady[26];  // data: 0x842470
extern char g_Str_EVA_PsychicRevealReady[23];  // data: 0x8423FC
extern char g_Str_EVA_ReinforcementsReady[24];  // data: 0x842440
extern char g_Str_EVA_RobotTanksOffline[22];  // data: 0x824E4C
extern char g_Str_EVA_SpyPlaneReady[18];  // data: 0x84242C
extern char g_Str_FAILED_[14];  // data: 0x81C2B4
extern char g_Str_false[6];  // data: 0x81C5E8
extern char g_Str_File__HVA[5];  // data: 0x8194A0
extern char g_Str_File__MAP[5];  // data: 0x82DF18
extern char g_Str_File__PCX[5];  // data: 0x8241AC
extern char g_Str_File__s_MAP[7];  // data: 0x82DEA0
extern char g_Str_File__s_MIX[7];  // data: 0x827D64
extern char g_Str_File__VXL[5];  // data: 0x8194AC
extern char g_Str_File__WAV[5];  // data: 0x844768
extern char g_Str_File_arbi_pcx[9];  // data: 0x836358
extern char g_Str_File_CACHE_MIX[11];  // data: 0x826668
extern char g_Str_File_CampScor_cpp[26];  // data: 0x81B304
extern char g_Str_File_comchief_pcx[13];  // data: 0x835FE4
extern char g_Str_File_comctl32_dll[13];  // data: 0x840C48
extern char g_Str_File_Conquer_CPP[25];  // data: 0x81D4F8
extern char g_Str_File_CoopCampMD_ini[15];  // data: 0x81F3C0
extern char g_Str_File_cooperat_pcx[13];  // data: 0x835FD4
extern char g_Str_File_coopsave_ini[13];  // data: 0x81F0F8
extern char g_Str_File_djbi_pcx[9];  // data: 0x836364
extern char g_Str_File_Event_CPP[23];  // data: 0x820E44
extern char g_Str_File_frai_pcx[9];  // data: 0x836388
extern char g_Str_File_FULLFNT3_SHP[13];  // data: 0x830664
extern char g_Str_File_gbri_pcx[9];  // data: 0x836370
extern char g_Str_File_GDlgSupp_cpp[26];  // data: 0x8229C0
extern char g_Str_File_geri_pcx[9];  // data: 0x83637C
extern char g_Str_File_GOptions_CPP[26];  // data: 0x8240BC
extern char g_Str_File_gt18_pcx[9];  // data: 0x836070
extern char g_Str_File_House_CPP[23];  // data: 0x824724
extern char g_Str_File_Ini_CPP[21];  // data: 0x825BDC
extern char g_Str_File_Init_CPP[22];  // data: 0x825fb8  (declsync G42.31: core twin)
extern char g_Str_File_Ion_cpp[21];  // data: 0x828034
extern char g_Str_File_japi_pcx[9];  // data: 0x836394
extern char g_Str_File_lati_pcx[9];  // data: 0x83634C
extern char g_Str_File_LdPrgMgr_cpp[26];  // data: 0x829AC8
extern char g_Str_File_LoadDlg_CPP[25];  // data: 0x829F5C
extern char g_Str_File_MainLoop_CPP[26];  // data: 0x82A170
extern char g_Str_File_MainOpt_cpp[25];  // data: 0x82A2A8
extern char g_Str_File_MapGen_cpp[24];  // data: 0x82BA48
extern char g_Str_File_MapSel_CPP[24];  // data: 0x82C11C
extern char g_Str_File_ModemGst_cpp[26];  // data: 0x82C534
extern char g_Str_File_ModemHst_cpp[26];  // data: 0x82C9A4
extern char g_Str_File_MOUSE_SHA[10];  // data: 0x82604C
extern char g_Str_File_MOVMD__MIX[11];  // data: 0x826748
extern char g_Str_File_MPCoop_cpp[24];  // data: 0x82DC4C
extern char g_Str_File_MPScore_cpp[25];  // data: 0x82FE24
extern char g_Str_File_MPSiege_cpp[25];  // data: 0x82FF2C
extern char g_Str_File_MULTIMD_MIX[12];  // data: 0x81C284
extern char g_Str_File_netdlg2_cpp[25];  // data: 0x831288
extern char g_Str_File_netshare_cpp[26];  // data: 0x8317d8  (declsync G42.31: core twin)
extern char g_Str_File_NullDlg_CPP[25];  // data: 0x831E84
extern char g_Str_File_NullMgr_CPP[25];  // data: 0x832730
extern char g_Str_File_number0_pcx[12];  // data: 0x835FC8
extern char g_Str_File_number1_pcx[12];  // data: 0x835FBC
extern char g_Str_File_OPTBTN_SHP[11];  // data: 0x83927C
extern char g_Str_File_Options_CPP[25];  // data: 0x833370
extern char g_Str_File_ownrdraw_cpp[26];  // data: 0x833730
extern char g_Str_File_PhoneEd_cpp[25];  // data: 0x836778
extern char g_Str_File_pingg_pcx[10];  // data: 0x835CA8
extern char g_Str_File_pingr_pcx[10];  // data: 0x835C90
extern char g_Str_File_pingy_pcx[10];  // data: 0x835C9C
extern char g_Str_File_PlanMgr_cpp[25];  // data: 0x836bd4  (declsync G42.31: core twin)
extern char g_Str_File_Preview_bin[12];  // data: 0x82CC50
extern char g_Str_File_PROGBARM_SHP[13];  // data: 0x83DA30
extern char g_Str_File_Queue_CPP[23];  // data: 0x8374A0
extern char g_Str_File_RA2MD_INI[10];  // data: 0x826444
extern char g_Str_File_RandMap_Sed[12];  // data: 0x82BC30
extern char g_Str_File_rusi_pcx[9];  // data: 0x836340
extern char g_Str_File_Scenario_CPP[26];  // data: 0x83D838
extern char g_Str_File_Score_CPP[23];  // data: 0x83E3C4
extern char g_Str_File_SerialEd_cpp[26];  // data: 0x83EC28
extern char g_Str_File_Session_CPP[25];  // data: 0x83EEB8
extern char g_Str_File_Sidebar_CPP[25];  // data: 0x83FAC4
extern char g_Str_File_Skirmish_cpp[26];  // data: 0x83fc4c  (declsync G42.31: core twin)
extern char g_Str_File_Startup_CPP[25];  // data: 0x840E0C
extern char g_Str_File_Super_CPP[23];  // data: 0x842510
extern char g_Str_File_tab_tlu_pcx[12];  // data: 0x835944
extern char g_Str_File_TAction_CPP[25];  // data: 0x842BF8
extern char g_Str_File_Techno_CPP[24];  // data: 0x843178
extern char g_Str_File_THEME_MIX[10];  // data: 0x81C220
extern char g_Str_File_THEMEMD_MIX[12];  // data: 0x81C24C
extern char g_Str_File_UICmnds_cpp[25];  // data: 0x845598
extern char g_Str_File_Unit_CPP[22];  // data: 0x845964
extern char g_Str_File_usai_pcx[9];  // data: 0x8363A0
extern char g_Str_File_VERSION_TXT[12];  // data: 0x84635C
extern char g_Str_File_WDT_MIX[8];  // data: 0x84B63C
extern char g_Str_File_WDTGameOptions_cpp[32];  // data: 0x8486AC
extern char g_Str_File_WDTHist_ini[12];  // data: 0x8481F0
extern char g_Str_File_WDTSel_cpp[24];  // data: 0x848DE4
extern char g_Str_File_wodact_pcx[11];  // data: 0x83614C
extern char g_Str_File_wodref_pcx[11];  // data: 0x836134
extern char g_Str_File_wolacpt_pcx[12];  // data: 0x81B2AC
extern char g_Str_File_wolclan_pcx[12];  // data: 0x83609C
extern char g_Str_File_wolhost_pcx[12];  // data: 0x81B2B8
extern char g_Str_File_wolinfoMD_ini[14];  // data: 0x849F8C
extern char g_Str_File_wolob_pcx[10];  // data: 0x831DDC
extern char g_Str_File_WOLPersonaInformation_cpp[39];  // data: 0x84A0D0
extern char g_Str_File_wolpriv_pcx[12];  // data: 0x8360A8
extern char g_Str_File_wolreslk_pcx[13];  // data: 0x835D14
extern char g_Str_File_wolrslkob_pcx[14];  // data: 0x83608C
extern char g_Str_File_woltrny_pcx[12];  // data: 0x8360D0
extern char g_Str_File_wonline_cpp[25];  // data: 0x84a430  (declsync G42.31: core twin)
extern char g_Str_File_WorldDom_cpp[26];  // data: 0x84D818
extern char g_Str_File_wouact_pcx[11];  // data: 0x836158
extern char g_Str_File_wouref_pcx[11];  // data: 0x836140
extern char g_Str_File_wwmous_cpp[24];  // data: 0x84E61C
extern char g_Str_File_XXICON_SHP[11];  // data: 0x8204FC
extern char g_Str_Fmt_D_D[7];  // data: 0x840F5C
extern char g_Str_Fmt_Hs_S_Bracket[18];  // data: 0x84B94C
extern char g_Str_Fmt_PctD[2];  // data: 0x81B3D0
extern char g_Str_Fmt_PctS[3];  // data: 0x832904
extern char g_Str_gsmallwoo[10];  // data: 0x822D20
extern char g_Str_GUI_AIEasy[11];  // data: 0x831C68
extern char g_Str_GUI_AIHard[11];  // data: 0x831C4C
extern char g_Str_GUI_AINormal[13];  // data: 0x831C58
extern char g_Str_GUI_Closed[11];  // data: 0x831C74
extern char g_Str_GUI_DifficultyString[21];  // data: 0x81B4E8
extern char g_Str_GUI_HostNoMap[14];  // data: 0x831460
extern char g_Str_GUI_Observe[12];  // data: 0x8240D8
extern char g_Str_GUI_Open[9];  // data: 0x831C80
extern char g_Str_GUI_OpenObserver[17];  // data: 0x831C2C
extern char g_Str_GUI_RandomAsSymbols[20];  // data: 0x822B7C
extern char g_Str_GUI_UnknownStats[17];  // data: 0x84A16C
extern char g_Str_Index_____CRC[15];  // data: 0x838828
extern char g_Str_Instantiating_embedded_WebBrow[35];  // data: 0x8495CC
extern char g_Str_Invalid_Voc[12];  // data: 0x846574
extern char g_Str_Lob_40_[8];  // data: 0x84A21C
extern char g_Str_Lob_41_[8];  // data: 0x84A214
extern char g_Str_MSG_Mixed[10];  // data: 0x84560C
extern char g_Str_MSG_NodeMaximum[16];  // data: 0x836B8C
extern char g_Str_MSG_NoDescription[18];  // data: 0x83F4B8
extern char g_Str_MSG_NothingSelected[20];  // data: 0x845584
extern char g_Str_MSG_PlanningModeNoDeploy[25];  // data: 0x836C34
extern char g_Str_MSG_PlanningModeNoScatter[26];  // data: 0x836C00
extern char g_Str_MSG_PlanningModeNoStop[23];  // data: 0x836C1C
extern char g_Str_MSG_PostContinualCommand[25];  // data: 0x836B9C
extern char g_Str_MSG_PostTerminatingCommand[27];  // data: 0x836BB8
extern char g_Str_MSG_SelAcrossMap[17];  // data: 0x8455C8
extern char g_Str_MSG_SelAcrossScreen[20];  // data: 0x8455B4
extern char g_Str_no[3];  // data: 0x825BF4
extern char g_Str_No_Digest[10];  // data: 0x83F3E4
extern char g_Str_No_Name[8];  // data: 0x829284
extern char g_Str_none[5];  // data: 0x817694  (declsync G42.31: core twin)
extern char g_Str_None[5];  // data: 0x8373A4
extern char g_Str_RMG__Recalculating_cell_attrib[36];  // data: 0x82BE9C
extern char g_Str_SOFTWARE_Westwood_WOLAPI_[26];  // data: 0x8254E4
extern char g_Str_SOFTWARE_Westwood_Yuri_s_Reven[33];  // data: 0x8313B0
extern char g_Str_Software_Westwood_Yuri_s_Reven[33];  // data: 0x84964C
extern char g_Str_Starting_up_WOLBrowser[24];  // data: 0x849594
extern char g_Str_STT_GuestComboPlayer[21];  // data: 0x8338D4
extern char g_Str_STT_HostComboPlayer[20];  // data: 0x833768
extern char g_Str_STT_ObserverToggle[19];  // data: 0x835354
extern char g_Str_STT_PlayerDumbAI[17];  // data: 0x831D0C
extern char g_Str_STT_PlayerGeniusAI[19];  // data: 0x831CE4
extern char g_Str_STT_PlayerSmartAI[18];  // data: 0x831CF8
extern char g_Str_STT_WOLBuddy[13];  // data: 0x83443C
extern char g_Str_STT_WOLManageAccount[21];  // data: 0x834228
extern char g_Str_STT_WOLMyInformationLocale[27];  // data: 0x8342FC
extern char g_Str_STT_WOLNewAccount[18];  // data: 0x834268
extern char g_Str_STT_WOLNewGameCancel[21];  // data: 0x833FF0
extern char g_Str_STT_WOLPageButton[18];  // data: 0x834318
extern char g_Str_SYSTEM_MEMORY[14];  // data: 0x827C78
extern char g_Str_T[2];  // data: 0x83ED5C
extern char g_Str_Tip_ThumbClosed[16];  // data: 0x842838
extern char g_Str_Toggle_display_mode_back_to_sh[39];  // data: 0x83D924
extern char g_Str_Trace______c_[8];  // data: 0x81C46C
extern char g_Str_Trace___d[4];  // data: 0x8190DC
extern char g_Str_Trace___hs____s___s[28];  // data: 0x84B9B0
extern char g_Str_Trace___hs___s[18];  // data: 0x84B020
extern char g_Str_Trace___s___s[16];  // data: 0x81B460
extern char g_Str_Trace__c__[5];  // data: 0x81C4B4
extern char g_Str_Trace__d[3];  // data: 0x817F6C
extern char g_Str_Trace__d_[4];  // data: 0x831D44
extern char g_Str_Trace__d__d[6];  // data: 0x81C000
extern char g_Str_Trace__d__d__d[9];  // data: 0x8189B0
extern char g_Str_Trace__d__d__d__d[12];  // data: 0x825BBC
extern char g_Str_Trace__f__f__f[9];  // data: 0x825BFC
extern char g_Str_Trace__hs[2];  // data: 0x835874
extern char g_Str_Trace__hs__s[14];  // data: 0x84B224
extern char g_Str_Trace__s[4];  // data: 0x81FD08
extern char g_Str_Trace__s__d[12];  // data: 0x84A788
extern char g_Str_Trace__s__s[6];  // data: 0x840B78
extern char g_Str_Trace__s__Type__d_[14];  // data: 0x838AA0
extern char g_Str_Trace__s__Type__d__s__[18];  // data: 0x838AB0
extern char g_Str_Trace__s_d[5];  // data: 0x81F31C
extern char g_Str_Trace__sBARL[7];  // data: 0x832AD0
extern char g_Str_Trace__sTUR[6];  // data: 0x832ABC
extern char g_Str_Trace_Adding_event__s[17];  // data: 0x820BF0
extern char g_Str_Trace_Ahandle__PauseAdjust__ld[26];  // data: 0x8178C0
extern char g_Str_Trace_AIDifficulty___d[18];  // data: 0x82C464
extern char g_Str_Trace_AIPlayers___d[15];  // data: 0x82C488
extern char g_Str_Trace_Assigning_Starting_Points_for_house__d__[45];  // data: 0x82DD2C
extern char g_Str_Trace_Average_FPS___d[17];  // data: 0x81D95C
extern char g_Str_Trace_Bases___s[11];  // data: 0x82C43C
extern char g_Str_Trace_BridgeDestroy___s[19];  // data: 0x82C3C0
extern char g_Str_Trace_Color___d[11];  // data: 0x82C4C8
extern char g_Str_Trace_Command_cound_stalls___d[26];  // data: 0x81D870
extern char g_Str_Trace_Command_response_was__s[25];  // data: 0x8326D8
extern char g_Str_Trace_CPU__s__MMX__s__Vendor___s[29];  // data: 0x821EE4
extern char g_Str_Trace_Crap_Engineers___s[20];  // data: 0x82C3F0
extern char g_Str_Trace_Crates___s[12];  // data: 0x82C3E4
extern char g_Str_Trace_Credits___d[13];  // data: 0x82C498
extern char g_Str_Trace_DDRAW_DLL_Error_code____08X[28];  // data: 0x81FC7C
extern char g_Str_Trace_DeviceIoControl_failed_to_dismount_volum[58];  // data: 0x81C3D0
extern char g_Str_Trace_DeviceIoControl_failed_to_eject_media__E[54];  // data: 0x81C358
extern char g_Str_Trace_DeviceIoControl_failed_to_lock_volume__E[54];  // data: 0x81C40C
extern char g_Str_Trace_DeviceIoControl_failed_to_perform_DOS_IO[74];  // data: 0x81C51C
extern char g_Str_Trace_DeviceIoControl_failed_to_prevent_media_[64];  // data: 0x81C390
extern char g_Str_Trace_DeviceIoControl_failed_to_unlock_volume_[56];  // data: 0x81C4BC
extern char g_Str_Trace_Dial_result_is__s[19];  // data: 0x8327C4
extern char g_Str_Trace_FogOfWar___s[14];  // data: 0x82C3D4
extern char g_Str_Trace_Frame_sync_stalls___d[23];  // data: 0x81D88C
extern char g_Str_Trace_Frames___d[12];  // data: 0x81D970
extern char g_Str_Trace_Game_Speed___d[16];  // data: 0x82C478
extern char g_Str_Trace_Game_speed_setting___d[24];  // data: 0x81D918
extern char g_Str_Trace_gethostbyname_failed__Error_code__d[37];  // data: 0x830E28
extern char g_Str_Trace_Harvester_Truce___s[21];  // data: 0x82C3A8
extern char g_Str_Trace_Initializing__s[22];  // data: 0x81C2D4
extern char g_Str_Trace_Initilizing__s[21];  // data: 0x827DF4
extern char g_Str_Trace_Latency_setting___d[21];  // data: 0x81D930
extern char g_Str_Trace_LatencyFudge_is__d[20];  // data: 0x820C54
extern char g_Str_Trace_Leave_Channel__channel__s_type__d[35];  // data: 0x84B658
extern char g_Str_Trace_Loaded_recording_values_for_scenario____[43];  // data: 0x82637C
extern char g_Str_Trace_Local_address___d__d__d__d[28];  // data: 0x81D8FC
extern char g_Str_Trace_Lost___d[10];  // data: 0x81D864
extern char g_Str_Trace_Map_d[6];  // data: 0x81F114
extern char g_Str_Trace_Max_avg_round_trip___d[24];  // data: 0x81D8C8
extern char g_Str_Trace_Max_MaxAhead___d[18];  // data: 0x81D948
extern char g_Str_Trace_Max_ping_is__d_ms[19];  // data: 0x82E0D0
extern char g_Str_Trace_Max_round_trip___d[20];  // data: 0x81D8B4
extern char g_Str_Trace_mphmd_exe__d__d__d__d[22];  // data: 0x839B84
extern char g_Str_Trace_Name___ls[11];  // data: 0x82C550
extern char g_Str_Trace_Name___s[11];  // data: 0x81D8F0
extern char g_Str_Trace_Object__d___x[15];  // data: 0x838AC4
extern char g_Str_Trace_Owner___s[11];  // data: 0x83894C
extern char g_Str_Trace_Percent_lost___d[18];  // data: 0x81D850
extern char g_Str_Trace_Release_Build___s_by__s____s[31];  // data: 0x821F0C
extern char g_Str_Trace_Releasing__s[19];  // data: 0x81C320
extern char g_Str_Trace_Requesting_channel_list_type____d__ping_[46];  // data: 0x84A554
extern char g_Str_Trace_Requesting_ping_for__s_at__s[30];  // data: 0x84ACE0
extern char g_Str_Trace_Resends___d[13];  // data: 0x81D8A4
extern char g_Str_Trace_Result_is__s[14];  // data: 0x832924
extern char g_Str_Trace_ScoreRepeat_is__s[19];  // data: 0x832F88
extern char g_Str_Trace_ScoreShuffle_is__s[20];  // data: 0x832F74
extern char g_Str_Trace_ScoreVolume____f[18];  // data: 0x832F9C
extern char g_Str_Trace_Send_overflow__d[18];  // data: 0x8283D4
extern char g_Str_Trace_Sending_public_options_string__s[34];  // data: 0x831B60
extern char g_Str_Trace_SetCommState_returned_error__s_[33];  // data: 0x849830
extern char g_Str_Trace_Short_Game___s[16];  // data: 0x82C42C
extern char g_Str_Trace_SoundVolume____f[18];  // data: 0x832FB0
extern char g_Str_Trace_TechLevel___d[15];  // data: 0x82C4A8
extern char g_Str_Trace_Theme__QueueSong__d_[22];  // data: 0x8447D4
extern char g_Str_Trace_Unable_to_lock_volume__c_[27];  // data: 0x81C590
extern char g_Str_Trace_Unable_to_open_drive__c__for_ejection[39];  // data: 0x81C444
extern char g_Str_Trace_UnitCount___d[15];  // data: 0x82C4B8
extern char g_Str_Trace_VoiceVolume____f[18];  // data: 0x832FC4
extern char g_Str_Trace_Warning__Probable_deadlock_occurred_on_M[64];  // data: 0x84E5DC
extern char g_Str_Trace_Waypoint_d[11];  // data: 0x83DE24
extern char g_Str_Trace_Writing_to_port_handle_failed_with_error[45];  // data: 0x849AA4
extern char g_Str_true[5];  // data: 0x81C5F0
extern char g_Str_TXT_APRIL[10];  // data: 0x84A084
extern char g_Str_TXT_AUGUST[11];  // data: 0x84A038
extern char g_Str_TXT_BADPASS[12];  // data: 0x84AC84
extern char g_Str_TXT_CANCEL[11];  // data: 0x825FD0
extern char g_Str_TXT_CANNOT_ALLY[16];  // data: 0x831450
extern char g_Str_TXT_CANT_CONNECT[17];  // data: 0x84A5BC
extern char g_Str_TXT_CANT_SEND_BLANK_PAGE[25];  // data: 0x82A108
extern char g_Str_TXT_CHANNEL_FULL[17];  // data: 0x84AD60
extern char g_Str_TXT_CLAN_NOSTART[17];  // data: 0x84BB6C
extern char g_Str_TXT_COMPUTER[13];  // data: 0x824FC8
extern char g_Str_TXT_CONTROL[12];  // data: 0x82729C
extern char g_Str_TXT_CUSTOM[11];  // data: 0x83EBBC
extern char g_Str_TXT_DECEMBER[13];  // data: 0x849FDC
extern char g_Str_TXT_DESTGAME_OUTDATED[22];  // data: 0x82C6FC
extern char g_Str_TXT_ENTER_MESSAGE[18];  // data: 0x84B9E0
extern char g_Str_TXT_ERROR_TIMEOUT[18];  // data: 0x831F54
extern char g_Str_TXT_FAST[9];  // data: 0x8227D0
extern char g_Str_TXT_FASTER[11];  // data: 0x8227C4
extern char g_Str_TXT_FASTEST[12];  // data: 0x8227B8
extern char g_Str_TXT_FEBRUARY[13];  // data: 0x84A0AC
extern char g_Str_TXT_FETCHING_SERVLIST[22];  // data: 0x84B5D0
extern char g_Str_TXT_FROM[9];  // data: 0x82A150
extern char g_Str_TXT_GDI[8];  // data: 0x831280
extern char g_Str_TXT_IGNORE[11];  // data: 0x832618
extern char g_Str_TXT_INTERFACE[14];  // data: 0x826FEC
extern char g_Str_TXT_JANUARY[12];  // data: 0x84A0C4
extern char g_Str_TXT_JOINLOB[12];  // data: 0x84B5E8
extern char g_Str_TXT_JULY[9];  // data: 0x84A04C
extern char g_Str_TXT_JUNE[9];  // data: 0x84A060
extern char g_Str_TXT_MARCH[10];  // data: 0x84A098
extern char g_Str_TXT_MAY[8];  // data: 0x84A074
extern char g_Str_TXT_MEDIUM[11];  // data: 0x8227DC
extern char g_Str_TXT_MISMATCH[13];  // data: 0x82C6D4
extern char g_Str_TXT_NAME_ERROR[15];  // data: 0x8315B0
extern char g_Str_TXT_NAME_TOO_LONG[18];  // data: 0x84B9CC
extern char g_Str_TXT_NO[7];  // data: 0x829F1C
extern char g_Str_TXT_NO_NAME_SPECIFIED[22];  // data: 0x82A124
extern char g_Str_TXT_NOD[8];  // data: 0x831278
extern char g_Str_TXT_NONAME[11];  // data: 0x83676C
extern char g_Str_TXT_NOT_IN_CHAN[16];  // data: 0x84B9F4
extern char g_Str_TXT_NOVEMBER[13];  // data: 0x849FF4
extern char g_Str_TXT_OBSERVER_CANT_PAGE[23];  // data: 0x84B90C
extern char g_Str_TXT_OBSERVER_FULL[18];  // data: 0x8315FC
extern char g_Str_TXT_OCTOBER[12];  // data: 0x84A00C
extern char g_Str_TXT_OK[7];  // data: 0x825FB0
extern char g_Str_TXT_OPER[9];  // data: 0x84A770
extern char g_Str_TXT_PAGE_COMMAND[17];  // data: 0x82A13C
extern char g_Str_TXT_QUEUE_FULL[15];  // data: 0x837474
extern char g_Str_TXT_RANDOM_MAP_DESCRIPTION[27];  // data: 0x82BA2C
extern char g_Str_TXT_RANK[9];  // data: 0x84A690
extern char g_Str_TXT_READY[10];  // data: 0x81B454
extern char g_Str_TXT_REPLY_COMMAND[18];  // data: 0x82A0D4
extern char g_Str_TXT_REPLY_COMMAND_SHORT[24];  // data: 0x82A0BC
extern char g_Str_TXT_SCENARIO_TOO_SMALL[23];  // data: 0x82C9FC
extern char g_Str_TXT_SCENARIOS_DO_NOT_MATCH[27];  // data: 0x837484
extern char g_Str_TXT_SELECT_SETTINGS[20];  // data: 0x831E70
extern char g_Str_TXT_SELECTION[14];  // data: 0x827250
extern char g_Str_TXT_SEPTEMBER[14];  // data: 0x84A020
extern char g_Str_TXT_SHORT_TITLE[16];  // data: 0x81D57C
extern char g_Str_TXT_SLOW[9];  // data: 0x8227E8
extern char g_Str_TXT_SLOWER[11];  // data: 0x8227F4
extern char g_Str_TXT_SLOWEST[12];  // data: 0x822800
extern char g_Str_TXT_SYSTEM_NOT_RESPONDING[26];  // data: 0x82C754
extern char g_Str_TXT_TEAM[9];  // data: 0x826FA4
extern char g_Str_TXT_TIME_FORMAT_HOURS[22];  // data: 0x81B2EC
extern char g_Str_TXT_UNABLE_FIND_MODEM[22];  // data: 0x8320F0
extern char g_Str_TXT_UNKNOWN_PING[17];  // data: 0x84A6AC
extern char g_Str_TXT_UNRANKED[13];  // data: 0x83FB1C
extern char g_Str_TXT_WAITING[12];  // data: 0x81B448
extern char g_Str_TXT_WDT_NET_ERR[16];  // data: 0x84B420
extern char g_Str_TXT_YES[8];  // data: 0x829F14
extern char g_Str_TXT_YOURGAME_OUTDATED[22];  // data: 0x82C6E4
extern char g_Str_undefined[10];  // data: 0x81F108
extern char g_Str_unknown[8];  // data: 0x816210
extern char g_Str_W[2];  // data: 0x8258C0
extern char g_Str_WDT_TerritorySelectToolTip[27];  // data: 0x848F24
extern char g_Str_We_tried_to_reset_the_shroud_w[46];  // data: 0x82AD48
extern char g_Str_WOL_LeavingChannel[19];  // data: 0x84B644
extern char g_Str_WOL_MatchFailExit[18];  // data: 0x84D060
extern char g_Str_WOL_URL_RegKey[37];  // data: 0x849690
extern char g_Str_WW_TiberianSun[15];  // data: 0x840B34
extern char g_Str_WW_TiberianSun_1[17];  // data: 0x840B5C
extern char g_Str_WWD_Allied[11];  // data: 0x8491F0
extern char g_Str_WWD_Soviet[11];  // data: 0x8491FC
extern int g_StreamBufferState;  // data: 0xAA0444
extern int g_StreamConfig;  // data: 0xAA0464
extern int g_StreamPool;  // data: 0xAA0448
extern int g_SuperWeaponPool;  // data: 0xA8E334
extern int g_SuperWeaponTypeArray;  // data: 0xA83CA8
extern int g_SuperWeaponTypeCount;  // data: 0xA83C9C
extern int g_SurfaceAnimState;  // data: 0x87F6A8
extern int g_TacticalClass_Instance;  // data: 0x887324
extern int g_TacticalRender;  // data: 0x887368
extern int g_TActionClassState;  // data: 0xB0F668
extern int g_TagClassCount;  // data: 0xB0E724
extern int g_TauntCommandState;  // data: 0xA8B394
extern int g_TeamClassPool;  // data: 0x8B40EC
extern int g_TeamCommandBuffer;  // data: 0xA8F654
extern int g_TeamTypeCapacity;  // data: 0xA83E40
extern int g_TeamTypeCount;  // data: 0xA83E34
extern int g_TeamTypePool;  // data: 0xA8ECA4
extern int g_TechnoClass_Count;  // data: 0xA8EC7C
extern int g_TechnoClassCount;  // data: 0xA8ED38
extern int g_TechnoClassPool;  // data: 0xB0EA90
extern int g_TechnoHouseState;  // data: 0xB0EA50
extern int g_TerrainBridgeIndex;  // data: 0xABAD1C
extern int g_TerrainBuildConfig;  // data: 0xAA1020
extern int g_TerrainNoiseAmplitude;  // data: 0xAA10B8
extern int g_TerrainNoiseDataPtr1;  // data: 0xAA10D8
extern int g_TerrainNoiseDataPtr2;  // data: 0xAA10DC
extern int g_TerrainNoiseFrequency;  // data: 0xAA10F8
extern int g_TerrainNoiseParam;  // data: 0xAA10C8
extern int g_TerrainNoisePhase;  // data: 0xAA10BC
extern int g_TerrainNoisePhaseX;  // data: 0xAA10E8
extern int g_TerrainNoisePhaseY;  // data: 0xAA10EC
extern int g_TerrainNoiseSeed1;  // data: 0xAA10C4
extern int g_TerrainNoiseSeed2;  // data: 0xAA10CC
extern int g_TerrainSoundConfig;  // data: 0xAA1028
extern int g_TerrainSoundTable2;  // data: 0xABAD30
extern int g_TerrainTypeTable2;  // data: 0xABC1F8
extern int g_TerrainTypeTable;  // data: 0x89C818
extern int g_ThemeMIXLoaded;  // data: 0xA8EC74
extern int g_TileSystemInit;  // data: 0xABDFB8
extern int g_TimerPool;  // data: 0xABC888
extern int g_TooltipActive;  // data: 0xB0B518
extern int g_TriggerClassCapacity;  // data: 0xA8EAEC
extern int g_TriggerClassCount;  // data: 0xA83C78
extern int g_TriggerEventState;  // data: 0xB04DB8
extern int g_TriggerPool;  // data: 0xB04DAC
extern int g_TriggerTypeCount;  // data: 0xA83C6C
extern int g_TypeClass_DefaultString;  // data: 0x887734
extern int g_TypeClass_FindCache;  // data: 0xA8B228
extern int g_UIControlState;  // data: 0xAC1154
extern int g_UIManager;  // data: 0xAC4F58
extern int g_UIPointerTable;  // data: 0xAC1170
extern int g_UnitClassPool;  // data: 0x8B410C
extern int g_UnitSelectionState;  // data: 0xB1CFB8
extern int g_UnitTooltipState;  // data: 0xB0FE6C
extern int g_UnitTypeCount2;  // data: 0xA83CE4
extern int g_Tubes_Count;  // data: 0x8B4148
extern int g_UnitTypeInitState;  // data: 0xA83D08
extern int g_VeinholeMonsterPool;  // data: 0xB1D2F0
extern int g_VeinholePool;  // data: 0xB1D2A0
extern int g_VisibilitySystem;  // data: 0x89C3B0
extern int g_VisibleSurfaceDescriptor;  // data: 0x87E8A4
extern int g_VocAudioConfig;  // data: 0xB1D37C
extern int g_VocPlayState;  // data: 0xB1D388
extern int g_VoxelColorPalette;  // data: 0xB41178
extern int g_VoxelDepthBuffer;  // data: 0xB2FF79
extern int g_VoxelDrawState;  // data: 0xB1D294
extern int g_VoxelOffsetTable;  // data: 0xB45590
extern int g_VoxelRenderBuffer;  // data: 0xB2FF78
extern int g_VoxelShadeTable;  // data: 0xB45990
extern int g_WarheadTypePool;  // data: 0x8874D0
extern int g_WeaponTypeConfig;  // data: 0x88756C
extern int g_WeaponTypePool;  // data: 0x887578
extern int g_WebBrowser;  // data: 0xB73E40
extern int g_WebBrowserConfig;  // data: 0xB7778C
extern int g_WindowManager;  // data: 0xB73AA8
extern int g_WOL_AccountInfo;  // data: 0xB76990
extern int g_WOL_AuthObject;  // data: 0xB73ACC
extern int g_WOL_AuthPool;  // data: 0xB73E10
extern int g_WOL_BuddyList;  // data: 0xB779B0
extern int g_WOL_ChannelLeaveState;  // data: 0xB77DD8
extern int g_WOL_ChannelList;  // data: 0xB77DC8
extern int g_WOL_ChannelMgr;  // data: 0xB779B8
extern int g_WOL_ChannelState;  // data: 0xB77DD0
extern int g_WOL_ChatPool;  // data: 0xB777A0
extern int g_WOL_ChatState;  // data: 0xB76AE0
extern int g_WOL_ConnectFlag;  // data: 0xB761A8
extern int g_WOL_ConnectionFlags;  // data: 0xB77908
extern int g_WOL_ConnectionHandler;  // data: 0xB76AE8
extern int g_WOL_ConnectionPool;  // data: 0xB76530
extern int g_WOL_ConnectionToken;  // data: 0xB76AD0
extern int g_WOL_EventQueue;  // data: 0xB76608
extern int g_WOL_GameConfig;  // data: 0xB77A90
extern int g_WOL_GameListPool;  // data: 0xB77A88
extern int g_WOL_GameListRender;  // data: 0xB77E44
extern int g_WOL_GameListState;  // data: 0xB77E14
extern int g_WOL_GameProcessState;  // data: 0xB77D70
extern int g_WOL_HashTable;  // data: 0xB77E0C
extern int g_WOL_IdleFlag;  // data: 0xB76B44
extern int g_WOL_IdleHandler;  // data: 0xB73A20
extern int g_WOL_ListParser;  // data: 0xB768C0
extern int g_WOL_LoginObject;  // data: 0xB76E24
extern int g_WOL_LoginPool;  // data: 0xB76970
extern int g_WOL_LoginQueue;  // data: 0xB73AB0
extern int g_WOL_LoginToken;  // data: 0xB765F8
extern int g_WOL_MessageConfig;  // data: 0xB76684
extern int g_WOL_MessageQueue;  // data: 0xB76680
extern int g_WOL_MsgPool;  // data: 0xB76688
extern int g_WOL_ObjectState;  // data: 0xB76AD8
extern int g_WOL_PacketQueue;  // data: 0xB76610
extern int g_WOL_ParseState;  // data: 0xB779D0
extern int g_WOL_ProcessIdle;  // data: 0xB76B10
extern int g_WOL_RequestFlags;  // data: 0xB76528
extern int g_WOL_RequestManager;  // data: 0xB76980
extern int g_WOL_RequestObject;  // data: 0xB736CC
extern int g_WOL_RequestState;  // data: 0xB76520
extern int g_WOL_RequestToken;  // data: 0xB76524
extern int g_WOL_SessionID;  // data: 0xB76988
extern int g_WOL_State;  // data: 0xB77900
extern int g_WOL_StateFlags;  // data: 0xB77904
extern int g_WOL_UserList;  // data: 0xB778D8
extern int g_WOLReturnCode;  // data: 0x825C84
extern int g_WTFMode;  // data: 0xA8E9A0
extern int g_WWMouseClass_Instance;  // data: 0x887640
extern int g_ZBufferDescriptor;  // data: 0x887644
extern int Game_bAllowVRAMSidebar;  // data: 0xA8EB96
extern int Game_bVideoBackBuffer;  // data: 0x840A6C
extern int Game_PlayerCount;  // data: 0xA8DA84
extern int Game_PlayerInfoArray;  // data: 0xA8DA78
extern int GameFlags_Campaign;  // data: 0xA8DAB8
extern int Handles;  // data: 0xB73684
extern int HarvesterTruce;  // data: 0xA8B31D
extern int hConsoleInput;  // data: 0x87DD80
extern int hConsoleOutput;  // data: 0x87DD84
extern int hDlg;  // data: 0xAC0D40
extern int hEvent;  // data: 0xB73698
extern int hFindFile;  // data: 0x81C8EC
extern int hHandle;  // data: 0xAA03F8
extern void *hHeap;  // data: 0xB78B9C G42.33 b18: HANDLE truth
extern int himl;  // data: 0xB730A8
extern int hLibModule;  // data: 0x89F974
extern int hMutex;  // data: 0xB78168
extern int hObject;  // data: 0x87E7F0
extern int hostshort;  // data: 0x841F30
extern int HouseClass_Array;  // data: 0xA8022C
extern int HouseClass_Array_0;  // data: 0xA80228
extern int HouseClass_Observer;  // data: 0xAC1198
extern int HouseClass_Player;  // data: 0xA83D4C
extern int hWndParent;  // data: 0xABF234
extern int IKnowWhatImDoing;  // data: 0xA8E7AC
extern int InfantryClass_Array;  // data: 0xA83DE8
extern int InfantryTypeClass_Array;  // data: 0xA8E348
extern int iProtocols;  // data: 0x84DD90
extern int Last;  // data: 0x815DBC
extern int LCData;  // data: 0xB7858C
extern int LibFileName;  // data: 0x822174
extern int LightConvertClass_Array;  // data: 0x8B4180
extern int LightningStorm_Active;  // data: 0xA9FAB4
extern int LightningStorm_BoltsPresent;  // data: 0xA9FA18
extern int LightningStorm_CloudHeightFactor;  // data: 0xB0CDD8
extern int LightningStorm_CloudsManifesting;  // data: 0xA9FA60
extern int LightningStorm_CloudsPresent;  // data: 0xA9F9D0
extern int LightningStorm_Coords;  // data: 0xA9F9CC
extern int LightningStorm_Deferment;  // data: 0xA9FAB8
extern int LightningStorm_Duration;  // data: 0x827FC4
extern int LightningStorm_Owner;  // data: 0xA9FACC
extern int LightningStorm_StartTime;  // data: 0x827FC0
extern int LightningStorm_TimeToEnd;  // data: 0xA9FAD0
extern int Locale;  // data: 0xB78544
extern int lp;  // data: 0xB78B98
extern int lpBaseAddress;  // data: 0x89F75C
extern int lpBuffer;  // data: 0xABC554
extern int lpCriticalSection;  // data: 0x87C2EC
extern int lpfn;  // data: 0xB7856C
extern char *lpMultiByteStr;  // data: 0x87CAEC (W19K4: IDA online verdict -- 0x87CAEC holds char* (tzname[2] ptr slot); xrefs __tzset_lk 0x7d4e13 push [0x87CAEC] as LPSTR; deref/string-index sites need char*)
extern int lpString2;  // data: 0x820E8C
extern int Map_BottomRightCell;  // data: 0xB0B788
extern int Map_CellHeight;  // data: 0x89A1C0
extern int Map_InvalidCoord_X;  // data: 0x89A178
extern int Map_InvalidCoord_Y;  // data: 0x89A17C
extern int Map_InvalidCoord_Z;  // data: 0x89A180
extern int Map_MaxHeight;  // data: 0x89A1B4
extern int MaxCount;  // data: 0xB73568
extern int MCV_DeployModeEnabled;  // data: 0xA8EB7F
extern int MixFileClass_MULTI;  // data: 0x884DDC
extern int Mode;  // data: 0x81D988
extern int ModuleName;  // data: 0x81D820
extern int MouseClass_Cursors;  // data: 0x82D028
extern int MovieInfo_Array;  // data: 0xABF390
extern int MultiByteStr;  // data: 0x820DAC
extern int MultiEngineer;  // data: 0xA8B26C
extern int MuteSWLaunches;  // data: 0xA8B538
extern int Network_EventHeader;  // data: 0xA8D810
extern int Network_EventType;  // data: 0xA8D638
extern int Network_EventValue;  // data: 0xA8D804
extern int Network_LastPacketTime;  // data: 0xA8E284
extern int Network_PlayerPorts;  // data: 0xA8E2B2
extern int Networking_CurrentFrameCRC;  // data: 0xAC51FC
extern int Networking_LastEventIndex;  // data: 0xA802C8
extern int Networking_NextPacketIndex;  // data: 0xA802D0
extern int nIDDlgItem;  // data: 0xA8F7A8
extern int NukeFlash_Duration;  // data: 0x827FCC
extern int NukeFlash_StartTime;  // data: 0x827FC8
extern int NukeFlash_Status;  // data: 0xA9FABC
extern int NumOfElements;  // data: 0x87F684
extern int optval;  // data: 0x84DDA0
extern int OverlayClass_Array;  // data: 0xA8EC50
extern int PathName;  // data: 0x82BB1C
extern int pdwRegister;  // data: 0xB0BCEC
extern int ppv;  // data: 0xAC116C
extern int PrefixString;  // data: 0x829774
extern int ProcName;  // data: 0x81D80C
extern int PsyDom_Anim;  // data: 0xA9FAC4
extern int PsyDom_Coords;  // data: 0xA9FA48
extern int PsyDom_Owner;  // data: 0xA9FAC8
extern int PsyDom_Status;  // data: 0xA9FAC0
extern int psz;  // data: 0x8186E8
extern int punk;  // data: 0x89A29C
extern int pUnk;  // data: 0xA8E8C8
extern int RadBeam_Array;  // data: 0xB04A60
extern int RadSiteClass_Array;  // data: 0xB04BD0
extern int Randomizer_Global;  // data: 0x886B88
extern int riid;  // data: 0x817BC0
extern int ShortGame;  // data: 0xA8B262
extern int SidebarClass_TooltipBuffer;  // data: 0xB07BC4
extern int Size;  // data: 0x87CBA0
extern int SlaveManagerClass_Array;  // data: 0xB0B5F0
extern int SmudgeClass_Array;  // data: 0xA8B1E0
extern int Source;  // data: 0x84E865
extern int SpawnManagerClass_Array;  // data: 0xB0B880
extern int Src;  // data: 0xABFDA4
extern int SrcCh;  // data: 0x87C7A0
extern int SrcSizeInBytes;  // data: 0x87C79C
extern int Str1;  // data: 0x87C3F8
extern int Str2;  // data: 0x81C8F8
extern int Str;  // data: 0xA8F7B8
extern int Stream;  // data: 0xAA0468
extern int String2;  // data: 0x822050
extern int String;  // data: 0x822024
extern int SubBlock;  // data: 0x84639C
extern int SubKey;  // data: 0x81F554
extern int SubStr;  // data: 0x8265A8
extern int SuperClass_ShowTimers;  // data: 0xA83D50
extern int SWAllowed;  // data: 0xA8B263
extern int SwizzleManagerClass_Instance;  // data: 0xB0C110
extern int szFile;  // data: 0x840AD0
extern int szHelp;  // data: 0x849E2C
extern int TActionClass_Array;  // data: 0xB0F658
extern int TagClass_Array;  // data: 0xB0E720
extern int TeamClass_Array;  // data: 0x8B40E8
extern int TeamTypeClass_Array;  // data: 0xA8ECA0
extern int TechnoClass_Array;  // data: 0xA8EC78
extern int Text;  // data: 0x81FC98
extern int ThreadId;  // data: 0x87E7F4
extern int TimeZoneInformation;  // data: 0xB782F8
extern int TriggerClass_Array;  // data: 0xA8EAE8
extern int uElapse;  // data: 0x84A248
extern int UnitClass_Array;  // data: 0x8B4108
extern int UnitTypeClass_Array;  // data: 0xA83CE0
extern int uNumber;  // data: 0xB78B80
extern int ValueName;  // data: 0x81F550
extern int VocClass_VoicesEnabled;  // data: 0x8464AC
extern int VoxelAnimClass_Array;  // data: 0x887388
extern int VoxelAnimTypeClass_Array;  // data: 0xA8EB28
extern int WarheadTypeClass_Array;  // data: 0x8874C0
extern int WeaponTypeClass_Array;  // data: 0x887568
extern int WideCharStr;  // data: 0xB73318
extern int WindowName;  // data: 0x849F48
extern int xRight;  // data: 0xA8EB8C
extern int yBottom;  // data: 0xA8EB90
extern int yTop;  // data: 0xAC18A4
extern int* DataGlobal_A8DB50;  // data: 0xA8DB50
extern BOOL (__stdcall * __imp_AdjustWindowRect)(LPRECT lpRect, DWORD dwStyle, BOOL bMenu);  // data: 0x7c86f8 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_AdjustWindowRectEx)(LPRECT lpRect, DWORD dwStyle, BOOL bMenu, DWORD dwExStyle);  // data: 0x7c86ec IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_AllocConsole)(void);  // data: 0x7c8452 IAT slot fn-ptr truth (G42.33 b3)
extern HDC (__stdcall * __imp_BeginPaint)(HWND hWnd, LPPAINTSTRUCT lpPaint);  // data: 0x7c8710 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_bind)(unsigned int s, const void* name, int namelen);  // data: 0x7c8998 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_BringWindowToTop)(HWND hWnd);  // data: 0x7c876a IAT slot fn-ptr truth (G42.33 b3)
extern LRESULT (__stdcall * __imp_CallWindowProcA)(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);  // data: 0x7c8764 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_CharToOemBuffA)(LPCSTR lpszSrc, LPSTR lpszDst, DWORD cchDstLength);  // data: 0x7c8716 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_CheckDlgButton)(HWND hDlg, int nIDButton, UINT uCheck);  // data: 0x7c8800 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_ChildWindowFromPoint)(HWND hWndParent, POINT Point);  // data: 0x7c87c4 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_ChildWindowFromPointEx)(HWND hwnd, POINT pt, UINT flags);  // data: 0x7c86b6 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ClearCommBreak)(HANDLE hFile);  // data: 0x7c8500 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ClearCommError)(HANDLE hFile, LPDWORD lpErrors, LPCOMSTAT lpStat);  // data: 0x7c8566 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ClientToScreen)(HWND hWnd, LPPOINT lpPoint);  // data: 0x7c85de IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_CloseHandle)(HANDLE hObject);  // data: 0x7c83aa IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_closesocket)(unsigned int s);  // data: 0x7c8992 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_CloseWindow)(HWND hWnd);  // data: 0x7c865c IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_CLSIDFromString)(const wchar_t * lpsz, LPCLSID pclsid);  // data: 0x7c88e4 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_CoCreateInstance)(const IID* const rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, const IID* const riid, LPVOID* ppv);  // data: 0x7c88d2 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_CoDisconnectObject)(LPUNKNOWN pUnk, DWORD dwReserved);  // data: 0x7c8908 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_CoFileTimeNow)(FILETIME* lpFileTime);  // data: 0x7c88f0 IAT slot fn-ptr truth (G42.33 b3)
extern LONG (__stdcall * __imp_CompareFileTime)(const FILETIME* lpFileTime1, const FILETIME* lpFileTime2);  // data: 0x7c84e2 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_CompareStringA[4];  // data: 0x7E1324
extern unsigned char __imp_CompareStringW[4];  // data: 0x7E1328
extern BOOL (__stdcall * __imp_CopyFileA)(LPCSTR lpExistingFileName, LPCSTR lpNewFileName, BOOL bFailIfExists);  // data: 0x7c84e8 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_CoRegisterClassObject)(const IID* const rclsid, LPUNKNOWN pUnk, DWORD dwClsContext, DWORD flags, LPDWORD lpdwRegister);  // data: 0x7c890e IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_CoRevokeClassObject)(DWORD dwRegister);  // data: 0x7c8920 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_CreateDialogIndirectParamA)(HINSTANCE hInstance, LPCDLGTEMPLATEA lpTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);  // data: 0x7c87a0 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_CreateDialogParamA)(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);  // data: 0x7c8704 IAT slot fn-ptr truth (G42.33 b3)
extern HBITMAP (__stdcall * __imp_CreateDIBSection)(HDC hdc, const BITMAPINFO* pbmi, UINT usage, void** ppvBits, HANDLE hSection, DWORD offset);  // data: 0x7c880c IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_CreateDirectoryA)(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);  // data: 0x7c84ee IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_CreateErrorInfo[4];  // data: 0x7E1378
extern HANDLE (__stdcall * __imp_CreateEventA)(LPSECURITY_ATTRIBUTES lpEventAttributes, BOOL bManualReset, BOOL bInitialState, LPCSTR lpName);  // data: 0x7c857e IAT slot fn-ptr truth (G42.33 b3)
extern HANDLE (__stdcall * __imp_CreateFileA)(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);  // data: 0x7c83e0 IAT slot fn-ptr truth (G42.33 b3)
extern HFONT (__stdcall * __imp_CreateFontIndirectA)(const LOGFONTA* lplf);  // data: 0x7c8824 IAT slot fn-ptr truth (G42.33 b3)
extern HANDLE (__stdcall * __imp_CreateMutexA)(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName);  // data: 0x7c840a IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_CreateProcessA)(LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);  // data: 0x7c84ac IAT slot fn-ptr truth (G42.33 b3)
extern HBRUSH (__stdcall * __imp_CreateSolidBrush)(COLORREF color);  // data: 0x7c8848 IAT slot fn-ptr truth (G42.33 b3)
extern HANDLE (__stdcall * __imp_CreateThread)(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);  // data: 0x7c8386 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_CreateWindowExA)(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam);  // data: 0x7c875e IAT slot fn-ptr truth (G42.33 b3)
extern LRESULT (__stdcall * __imp_DefWindowProcA)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);  // data: 0x7c8662 IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);  // data: 0x7c83a4 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_DeleteFileA)(LPCSTR lpFileName);  // data: 0x7c84b2 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_DeleteObject)(HGDIOBJ ho);  // data: 0x7c8812 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_DestroyWindow)(HWND hWnd);  // data: 0x7c8698 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_DeviceIoControl)(HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped);  // data: 0x7c83e6 IAT slot fn-ptr truth (G42.33 b3)
extern INT_PTR (__stdcall * __imp_DialogBoxIndirectParamA)(HINSTANCE hInstance, LPCDLGTEMPLATEA hDialogTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);  // data: 0x7c8686 IAT slot fn-ptr truth (G42.33 b3)
extern INT_PTR (__stdcall * __imp_DialogBoxParamA)(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);  // data: 0x7c8680 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_DirectDrawCreate)(GUID* lpGUID, void* lplpDD, IUnknown* pUnkOuter);  // data: 0x7c89d4 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_DirectSoundCreate)(LPCGUID pcGuidDevice, void* ppDS, LPUNKNOWN pUnkOuter);  // data: 0x7c89da IAT slot fn-ptr truth (G42.33 b3)
extern LRESULT (__stdcall * __imp_DispatchMessageA)(const MSG* lpMsg);  // data: 0x7c85d2 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_DosDateTimeToFileTime)(WORD wFatDate, WORD wFatTime, LPFILETIME lpFileTime);  // data: 0x7c852a IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_DPtoLP)(HDC hdc, LPPOINT lppt, int c);  // data: 0x7c886c IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_EnableWindow)(HWND hWnd, BOOL bEnable);  // data: 0x7c8602 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_EndDialog)(HWND hDlg, INT_PTR nResult);  // data: 0x7c866e IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_EndPaint)(HWND hWnd, const PAINTSTRUCT* lpPaint);  // data: 0x7c870a IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);  // data: 0x7c839e IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_EnumChildWindows)(HWND hWndParent, WNDENUMPROC lpEnumFunc, LPARAM lParam);  // data: 0x7c8746 IAT slot fn-ptr truth (G42.33 b3)
extern INT (__stdcall * __imp_EnumProtocolsA)(LPINT lpiProtocols, LPVOID lpProtocolBuffer, LPDWORD lpdwBufferLength);  // data: 0x7c89c2 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_EnumSystemLocalesA[4];  // data: 0x7E1310
extern BOOL (__stdcall * __imp_EscapeCommFunction)(HANDLE hFile, DWORD dwFunc);  // data: 0x7c84fa IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_ExitProcess)(UINT uExitCode);  // data: 0x7c8458 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_FatalAppExitA[4];  // data: 0x7E134C
extern BOOL (__stdcall * __imp_FileTimeToDosDateTime)(const FILETIME* lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime);  // data: 0x7c8518 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_FileTimeToLocalFileTime)(const FILETIME* lpFileTime, LPFILETIME lpLocalFileTime);  // data: 0x7c84d6 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_FileTimeToSystemTime)(const FILETIME* lpFileTime, LPSYSTEMTIME lpSystemTime);  // data: 0x7c84d0 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_FindClose)(HANDLE hFindFile);  // data: 0x7c8362 IAT slot fn-ptr truth (G42.33 b3)
extern HINSTANCE (__stdcall * __imp_FindExecutableA)(LPCSTR lpFile, LPCSTR lpDirectory, LPSTR lpResult);  // data: 0x7c88c6 IAT slot fn-ptr truth (G42.33 b3)
extern HANDLE (__stdcall * __imp_FindFirstFileA)(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData);  // data: 0x7c836e IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_FindNextFileA)(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData);  // data: 0x7c8368 IAT slot fn-ptr truth (G42.33 b3)
extern HRSRC (__stdcall * __imp_FindResourceA)(HMODULE hModule, LPCSTR lpName, LPCSTR lpType);  // data: 0x7c8434 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_FindWindowA)(LPCSTR lpClassName, LPCSTR lpWindowName);  // data: 0x7c87ac IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_FlushFileBuffers[4];  // data: 0x7E12C4
extern BOOL (__stdcall * __imp_FlushInstructionCache)(HANDLE hProcess, LPCVOID lpBaseAddress, SIZE_T dwSize);  // data: 0x7c8488 IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_FormatMessageA)(DWORD dwFlags, LPCVOID lpSource, DWORD dwMessageId, DWORD dwLanguageId, LPSTR lpBuffer, DWORD nSize, va_list* Arguments);  // data: 0x7c8374 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_FreeConsole)(void);  // data: 0x7c844c IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_FreeEnvironmentStringsA[4];  // data: 0x7E12F0
extern unsigned char __imp_FreeEnvironmentStringsW[4];  // data: 0x7E12F4
extern BOOL (__stdcall * __imp_FreeLibrary)(HMODULE hLibModule);  // data: 0x7c8440 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetACP[4];  // data: 0x7E12D8
extern HWND (__stdcall * __imp_GetActiveWindow)(void);  // data: 0x7c8668 IAT slot fn-ptr truth (G42.33 b3)
extern SHORT (__stdcall * __imp_GetAsyncKeyState)(int vKey);  // data: 0x7c86ce IAT slot fn-ptr truth (G42.33 b3)
extern COLORREF (__stdcall * __imp_GetBkColor)(HDC hdc);  // data: 0x7c8854 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_GetBkMode)(HDC hdc);  // data: 0x7c885a IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_GetCapture)(void);  // data: 0x7c86a4 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_GetClassNameA)(HWND hWnd, LPSTR lpClassName, int nMaxCount);  // data: 0x7c8740 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetClientRect)(HWND hWnd, LPRECT lpRect);  // data: 0x7c85cc IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetCommandLineA[4];  // data: 0x7E1280
extern BOOL (__stdcall * __imp_GetCommMask)(HANDLE hFile, LPDWORD lpEvtMask);  // data: 0x7c8590 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetCommModemStatus)(HANDLE hFile, LPDWORD lpModemStat);  // data: 0x7c859c IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetCommState)(HANDLE hFile, LPDCB lpDCB);  // data: 0x7c8578 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetComputerNameA)(LPSTR lpBuffer, LPDWORD nSize);  // data: 0x7c85c0 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetConsoleMode[4];  // data: 0x7E1270
extern unsigned char __imp_GetCPInfo[4];  // data: 0x7E12D4
extern DWORD (__stdcall * __imp_GetCurrentDirectoryA)(DWORD nBufferLength, LPSTR lpBuffer);  // data: 0x7c85b4 IAT slot fn-ptr truth (G42.33 b3)
extern HANDLE (__stdcall * __imp_GetCurrentProcess)(void);  // data: 0x7c847c IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetCurrentProcessId[4];  // data: 0x7E12E8
extern unsigned char __imp_GetCurrentThread[4];  // data: 0x7E12BC
extern DWORD (__stdcall * __imp_GetCurrentThreadId)(void);  // data: 0x7c83c2 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetCursorPos)(LPPOINT lpPoint);  // data: 0x7c86c2 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_GetDateFormatA)(LCID Locale, DWORD dwFlags, const SYSTEMTIME* lpDate, LPCSTR lpFormat, LPSTR lpDateStr, int cchDate);  // data: 0x7c84ca IAT slot fn-ptr truth (G42.33 b3)
extern HDC (__stdcall * __imp_GetDC)(HWND hWnd);  // data: 0x7c8656 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_GetDeviceCaps)(HDC hdc, int index);  // data: 0x7c882a IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetDiskFreeSpaceA)(LPCSTR lpRootPathName, LPDWORD lpSectorsPerCluster, LPDWORD lpBytesPerSector, LPDWORD lpNumberOfFreeClusters, LPDWORD lpTotalNumberOfClusters);  // data: 0x7c83f8 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_GetDlgCtrlID)(HWND hWnd);  // data: 0x7c86b0 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_GetDlgItem)(HWND hDlg, int nIDDlgItem);  // data: 0x7c85f6 IAT slot fn-ptr truth (G42.33 b3)
extern UINT (__stdcall * __imp_GetDriveTypeA)(LPCSTR lpRootPathName);  // data: 0x7c83ec IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetEnvironmentStrings[4];  // data: 0x7E12F8
extern unsigned char __imp_GetEnvironmentStringsW[4];  // data: 0x7E12FC
extern unsigned char __imp_GetErrorInfo[4];  // data: 0x7E136C
extern BOOL (__stdcall * __imp_GetExitCodeProcess)(HANDLE hProcess, LPDWORD lpExitCode);  // data: 0x7c85ae IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetFileAttributesA[4];  // data: 0x7E12E4
extern BOOL (__stdcall * __imp_GetFileInformationByHandle)(HANDLE hFile, LPBY_HANDLE_FILE_INFORMATION lpFileInformation);  // data: 0x7c851e IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetFileTime)(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);  // data: 0x7c855a IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetFileType[4];  // data: 0x7E12D0
extern BOOL (__stdcall * __imp_GetFileVersionInfoA)(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData);  // data: 0x7c89e6 IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_GetFileVersionInfoSizeA)(LPCSTR lptstrFilename, LPDWORD lpdwHandle);  // data: 0x7c89ec IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_GetFocus)(void);  // data: 0x7c8788 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_GetForegroundWindow)(void);  // data: 0x7c87ee IAT slot fn-ptr truth (G42.33 b3)
extern void* (__stdcall * __imp_gethostbyname)(const char* name);  // data: 0x7c8980 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_gethostname)(char* name, int namelen);  // data: 0x7c89ce IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_GetKeyNameTextA)(LONG lParam, LPSTR lpString, int cchSize);  // data: 0x7c879a IAT slot fn-ptr truth (G42.33 b3)
extern SHORT (__stdcall * __imp_GetKeyState)(int nVirtKey);  // data: 0x7c86c8 IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_GetLastError)(void);  // data: 0x7c837a IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetLocaleInfoA[4];  // data: 0x7E130C
extern unsigned char __imp_GetLocaleInfoW[4];  // data: 0x7E1338
extern unsigned char __imp_GetLocalTime[4];  // data: 0x7E1284
extern DWORD (__stdcall * __imp_GetLogicalDriveStringsA)(DWORD nBufferLength, LPSTR lpBuffer);  // data: 0x7c8560 IAT slot fn-ptr truth (G42.33 b3)
extern HMENU (__stdcall * __imp_GetMenu)(HWND hWnd);  // data: 0x7c86f2 IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_GetModuleFileNameA)(HMODULE hModule, LPSTR lpFilename, DWORD nSize);  // data: 0x7c8476 IAT slot fn-ptr truth (G42.33 b3)
extern HMODULE (__stdcall * __imp_GetModuleHandleA)(LPCSTR lpModuleName);  // data: 0x7c8404 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_GetNextDlgTabItem)(HWND hDlg, HWND hCtl, BOOL bPrevious);  // data: 0x7c8734 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetNumberOfConsoleInputEvents[4];  // data: 0x7E1354
extern unsigned char __imp_GetOEMCP[4];  // data: 0x7E12DC
extern BOOL (__stdcall * __imp_GetOverlappedResult)(HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait);  // data: 0x7c85a2 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_GetParent)(HWND hWnd);  // data: 0x7c873a IAT slot fn-ptr truth (G42.33 b3)
extern FARPROC (__stdcall * __imp_GetProcAddress)(HMODULE hModule, LPCSTR lpProcName);  // data: 0x7c83fe IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_getsockopt)(unsigned int s, int level, int optname, char* optval, int* optlen);  // data: 0x7c898c IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_GetStartupInfoA)(LPSTARTUPINFOA lpStartupInfo);  // data: 0x7c8530 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetStdHandle[4];  // data: 0x7E12CC
extern HGDIOBJ (__stdcall * __imp_GetStockObject)(int i);  // data: 0x7c8860 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetStringTypeA[4];  // data: 0x7E131C
extern unsigned char __imp_GetStringTypeW[4];  // data: 0x7E1320
extern DWORD (__stdcall * __imp_GetSysColor)(int nIndex);  // data: 0x7c86fe IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_GetSystemMetrics)(int nIndex);  // data: 0x7c86e0 IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_GetSystemTime)(LPSYSTEMTIME lpSystemTime);  // data: 0x7c84a0 IAT slot fn-ptr truth (G42.33 b3)
extern UINT (__stdcall * __imp_GetTempFileNameA)(LPCSTR lpPathName, LPCSTR lpPrefixString, UINT uUnique, LPSTR lpTempFileName);  // data: 0x7c84b8 IAT slot fn-ptr truth (G42.33 b3)
extern COLORREF (__stdcall * __imp_GetTextColor)(HDC hdc);  // data: 0x7c884e IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetTextMetricsA)(HDC hdc, LPTEXTMETRICA lptm);  // data: 0x7c8818 IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_GetTickCount)(void);  // data: 0x7c849a IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_GetTimeFormatA)(LCID Locale, DWORD dwFlags, const SYSTEMTIME* lpTime, LPCSTR lpFormat, LPSTR lpTimeStr, int cchTime);  // data: 0x7c84c4 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetTimeZoneInformation[4];  // data: 0x7E1274
extern HWND (__stdcall * __imp_GetTopWindow)(HWND hWnd);  // data: 0x7c87f4 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetUpdateRect)(HWND hWnd, LPRECT lpRect, BOOL bErase);  // data: 0x7c8782 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_GetUserDefaultLCID[4];  // data: 0x7E1314
extern unsigned char __imp_GetVersion[4];  // data: 0x7E1288
extern BOOL (__stdcall * __imp_GetVersionExA)(LPOSVERSIONINFOA lpVersionInformation);  // data: 0x7c85a8 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetVolumeInformationA)(LPCSTR lpRootPathName, LPSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize);  // data: 0x7c843a IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_GetWindow)(HWND hWnd, UINT uCmd);  // data: 0x7c8770 IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_GetWindowContextHelpId)(HWND);  // data: 0x7c87d0 IAT slot fn-ptr truth (G42.33 b3)
extern LONG (__stdcall * __imp_GetWindowLongA)(HWND hWnd, int nIndex);  // data: 0x7c862c IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_GetWindowRect)(HWND hWnd, LPRECT lpRect);  // data: 0x7c86bc IAT slot fn-ptr truth (G42.33 b3)
extern UINT (__stdcall * __imp_GetWindowsDirectoryA)(LPSTR lpBuffer, UINT uSize);  // data: 0x7c84be IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_GetWindowTextA)(HWND hWnd, LPSTR lpString, int nMaxCount);  // data: 0x7c8728 IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_GlobalMemoryStatus)(LPMEMORYSTATUS lpBuffer);  // data: 0x7c84a6 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_HeapAlloc[4];  // data: 0x7E1278
extern unsigned char __imp_HeapCreate[4];  // data: 0x7E1298
extern BOOL (__stdcall * __imp_HeapDestroy)(HANDLE hHeap);  // data: 0x7c85ba IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_HeapFree[4];  // data: 0x7E127C
extern unsigned char __imp_HeapReAlloc[4];  // data: 0x7E12A4
extern unsigned char __imp_HeapSize[4];  // data: 0x7E12A0
extern int (__stdcall * __imp_htonl)(unsigned long hostlong);  // data: 0x7c8962 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_htons)(unsigned short hostshort);  // data: 0x7c8968 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_ImmAssociateContext)(HWND, void *);  // data: 0x7c8a1c IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_ImmGetCandidateListA)(void *, DWORD deIndex, void * lpCandList, DWORD dwBufLen);  // data: 0x7c8a2e IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_ImmGetCompositionStringA)(void *, DWORD, LPVOID lpBuf, DWORD dwBufLen);  // data: 0x7c8a34 IAT slot fn-ptr truth (G42.33 b3)
extern void * (__stdcall * __imp_ImmGetContext)(HWND);  // data: 0x7c8a22 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ImmNotifyIME)(void *, DWORD dwAction, DWORD dwIndex, DWORD dwValue);  // data: 0x7c8a28 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ImmSetOpenStatus)(void *, BOOL);  // data: 0x7c8a3a IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_InitCommonControls)(void);  // data: 0x7c8a16 IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_InitializeCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);  // data: 0x7c838c IAT slot fn-ptr truth (G42.33 b3)
extern LONG (__stdcall * __imp_InterlockedDecrement)(volatile LONG* lpAddend);  // data: 0x7c83c8 IAT slot fn-ptr truth (G42.33 b3)
extern LONG (__stdcall * __imp_InterlockedIncrement)(volatile LONG* lpAddend);  // data: 0x7c83ce IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_IntersectRect)(LPRECT lprcDst, const RECT* lprcSrc1, const RECT* lprcSrc2);  // data: 0x7c8776 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_InvalidateRect)(HWND hWnd, const RECT* lpRect, BOOL bErase);  // data: 0x7c8608 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_IsBadCodePtr)(FARPROC lpfn);  // data: 0x7c8464 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_IsBadReadPtr)(const void* lp, UINT_PTR ucb);  // data: 0x7c845e IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_IsBadWritePtr[4];  // data: 0x7E129C
extern BOOL (__stdcall * __imp_IsDialogMessageA)(HWND hDlg, LPMSG lpMsg);  // data: 0x7c8722 IAT slot fn-ptr truth (G42.33 b3)
extern UINT (__stdcall * __imp_IsDlgButtonChecked)(HWND hDlg, int nIDButton);  // data: 0x7c8806 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_IsValidCodePage[4];  // data: 0x7E1308
extern unsigned char __imp_IsValidLocale[4];  // data: 0x7E1304
extern BOOL (__stdcall * __imp_IsWindowEnabled)(HWND hWnd);  // data: 0x7c872e IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_IsWindowVisible)(HWND hWnd);  // data: 0x7c874c IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_KillTimer)(HWND hWnd, UINT_PTR uIDEvent);  // data: 0x7c8620 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_LCMapStringA[4];  // data: 0x7E12B0
extern unsigned char __imp_LCMapStringW[4];  // data: 0x7E12A8
extern void (__stdcall * __imp_LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);  // data: 0x7c8398 IAT slot fn-ptr truth (G42.33 b3)
extern HCURSOR (__stdcall * __imp_LoadCursorA)(HINSTANCE hInstance, LPCSTR lpCursorName);  // data: 0x7c87be IAT slot fn-ptr truth (G42.33 b3)
extern HICON (__stdcall * __imp_LoadIconA)(HINSTANCE hInstance, LPCSTR lpIconName);  // data: 0x7c87e8 IAT slot fn-ptr truth (G42.33 b3)
extern HMODULE (__stdcall * __imp_LoadLibraryA)(LPCSTR lpLibFileName);  // data: 0x7c8446 IAT slot fn-ptr truth (G42.33 b3)
extern HGLOBAL (__stdcall * __imp_LoadResource)(HMODULE hModule, HRSRC hResInfo);  // data: 0x7c842e IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_LoadTypeLib)(const wchar_t * szFile, void** pptlib);  // data: 0x7c8932 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_LocalFree[4];  // data: 0x7E1340
extern LPVOID (__stdcall * __imp_LockResource)(HGLOBAL hResData);  // data: 0x7c8428 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_LockWindowUpdate)(HWND hWndLock);  // data: 0x7c878e IAT slot fn-ptr truth (G42.33 b3)
extern LPSTR (__stdcall * __imp_lstrcatA)(LPSTR lpString1, LPCSTR lpString2);  // data: 0x7c846a IAT slot fn-ptr truth (G42.33 b3)
extern LPSTR (__stdcall * __imp_lstrcpyA)(LPSTR lpString1, LPCSTR lpString2);  // data: 0x7c8542 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_lstrlenA)(LPCSTR lpString);  // data: 0x7c8470 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_lstrlenW[4];  // data: 0x7E133C
extern LPVOID (__stdcall * __imp_MapViewOfFileEx)(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap, LPVOID lpBaseAddress);  // data: 0x7c8410 IAT slot fn-ptr truth (G42.33 b3)
extern UINT (__stdcall * __imp_MapVirtualKeyA)(UINT uCode, UINT uMapType);  // data: 0x7c86da IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_MessageBoxA)(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);  // data: 0x7c864a IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_MessageBoxIndirectA)(const MSGBOXPARAMSA* lpmbp);  // data: 0x7c863e IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ModifyWorldTransform)(HDC hdc, const XFORM* lpxf, DWORD mode);  // data: 0x7c887e IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_MoveWindow)(HWND hWnd, int X, int Y, int nWidth, int nHeight, BOOL bRepaint);  // data: 0x7c86e6 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_MulDiv)(int nNumber, int nNumerator, int nDenominator);  // data: 0x7c84f4 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_MultiByteToWideChar)(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, wchar_t * lpWideCharStr, int cchWideChar);  // data: 0x7c83d4 IAT slot fn-ptr (G42.33 b24: arg5 LPWSTR)
extern int (__stdcall * __imp_ntohl)(unsigned long netlong);  // data: 0x7c896e IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_ntohs)(unsigned short netshort);  // data: 0x7c8974 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_OleInitialize)(LPVOID pvReserved);  // data: 0x7c8914 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_OleLoadFromStream)(LPSTREAM pStm, const IID* const iidInterface, LPVOID* ppvObj);  // data: 0x7c88d8 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_OleRun)(LPUNKNOWN pUnknown);  // data: 0x7c88cc IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_OleSaveToStream)(void * pPStm, LPSTREAM pStm);  // data: 0x7c88de IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_OleUninitialize[4];  // data: 0x7E15D0
extern HANDLE (__stdcall * __imp_OpenEventA)(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCSTR lpName);  // data: 0x7c841c IAT slot fn-ptr truth (G42.33 b3)
extern HANDLE (__stdcall * __imp_OpenMutexA)(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCSTR lpName);  // data: 0x7c8554 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_PeekConsoleInputA[4];  // data: 0x7E1350
extern BOOL (__stdcall * __imp_PeekMessageA)(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);  // data: 0x7c8644 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_PostMessageA)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);  // data: 0x7c85f0 IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_PostQuitMessage)(int nExitCode);  // data: 0x7c87b2 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_PurgeComm)(HANDLE hFile, DWORD dwFlags);  // data: 0x7c8584 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_QueryPerformanceCounter)(LARGE_INTEGER* lpPerformanceCount);  // data: 0x7c83bc IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_QueryPerformanceFrequency)(LARGE_INTEGER* lpFrequency);  // data: 0x7c83b6 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_RaiseException[4];  // data: 0x7E12C0
extern unsigned char __imp_ReadConsoleInputA[4];  // data: 0x7E128C
extern BOOL (__stdcall * __imp_ReadFile)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);  // data: 0x7c850c IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_recvfrom)(unsigned int s, char* buf, int len, int flags, void* from, int* fromlen);  // data: 0x7c89aa IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_RedrawWindow)(HWND hWnd, const RECT* lprcUpdate, HRGN hrgnUpdate, UINT flags);  // data: 0x7c87d6 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_RegCloseKey)(HKEY hKey);  // data: 0x7c8890 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_RegCreateKeyExA)(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired, const LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition);  // data: 0x7c88ae IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_RegDeleteKeyA)(HKEY hKey, LPCSTR lpSubKey);  // data: 0x7c88ba IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_RegDeleteValueA)(HKEY hKey, LPCSTR lpValueName);  // data: 0x7c88a2 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_RegEnumKeyExA)(HKEY hKey, DWORD dwIndex, LPSTR lpName, LPDWORD lpcchName, LPDWORD lpReserved, LPSTR lpClass, LPDWORD lpcchClass, PFILETIME lpftLastWriteTime);  // data: 0x7c88b4 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_RegisterActiveObject)(IUnknown* punk, const IID* const rclsid, DWORD dwFlags, DWORD* pdwRegister);  // data: 0x7c893e IAT slot fn-ptr truth (G42.33 b3)
extern ATOM (__stdcall * __imp_RegisterClassA)(const WNDCLASSA* lpWndClass);  // data: 0x7c8758 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_RegisterHotKey)(HWND hWnd, int id, UINT fsModifiers, UINT vk);  // data: 0x7c87e2 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_RegOpenKeyExA)(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult);  // data: 0x7c889c IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_RegQueryInfoKeyA)(HKEY hKey, LPSTR lpClass, LPDWORD lpcchClass, LPDWORD lpReserved, LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen, LPDWORD lpcbMaxClassLen, LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen, LPDWORD lpcbMaxValueLen, LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime);  // data: 0x7c88c0 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_RegQueryValueExA)(HKEY hKey, LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);  // data: 0x7c8896 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_RegSetValueExA)(HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType, const BYTE* lpData, DWORD cbData);  // data: 0x7c88a8 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ReleaseCapture)(void);  // data: 0x7c869e IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_ReleaseDC)(HWND hWnd, HDC hDC);  // data: 0x7c8650 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ReleaseMutex)(HANDLE hMutex);  // data: 0x7c85c6 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ResetEvent)(HANDLE hEvent);  // data: 0x7c8596 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_RestoreDC)(HDC hdc, int nSavedDC);  // data: 0x7c8866 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_RevokeActiveObject)(DWORD dwRegister, void* pvReserved);  // data: 0x7c8938 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_RtlUnwind[4];  // data: 0x7E1268
extern int (__stdcall * __imp_SaveDC)(HDC hdc);  // data: 0x7c888a IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ScreenToClient)(HWND hWnd, LPPOINT lpPoint);  // data: 0x7c8794 IAT slot fn-ptr truth (G42.33 b3)
extern HGDIOBJ (__stdcall * __imp_SelectObject)(HDC hdc, HGDIOBJ h);  // data: 0x7c881e IAT slot fn-ptr truth (G42.33 b3)
extern LRESULT (__stdcall * __imp_SendDlgItemMessageA)(HWND hDlg, int nIDDlgItem, UINT Msg, WPARAM wParam, LPARAM lParam);  // data: 0x7c861a IAT slot fn-ptr truth (G42.33 b3)
extern LRESULT (__stdcall * __imp_SendMessageA)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);  // data: 0x7c85fc IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_sendto)(unsigned int s, const char* buf, int len, int flags, const void* to, int tolen);  // data: 0x7c89b0 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_SetActiveWindow)(HWND hWnd);  // data: 0x7c87dc IAT slot fn-ptr truth (G42.33 b3)
extern COLORREF (__stdcall * __imp_SetBkColor)(HDC hdc, COLORREF color);  // data: 0x7c883c IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_SetBkMode)(HDC hdc, int mode);  // data: 0x7c8842 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_SetCapture)(HWND hWnd);  // data: 0x7c86aa IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetCommBreak)(HANDLE hFile);  // data: 0x7c8506 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetCommState)(HANDLE hFile, LPDCB lpDCB);  // data: 0x7c8572 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetCommTimeouts)(HANDLE hFile, LPCOMMTIMEOUTS lpCommTimeouts);  // data: 0x7c856c IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_SetConsoleCtrlHandler[4];  // data: 0x7E12E0
extern unsigned char __imp_SetConsoleMode[4];  // data: 0x7E126C
extern BOOL (__stdcall * __imp_SetCurrentDirectoryA)(LPCSTR lpPathName);  // data: 0x7c854e IAT slot fn-ptr truth (G42.33 b3)
extern HCURSOR (__stdcall * __imp_SetCursor)(HCURSOR hCursor);  // data: 0x7c87b8 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetCursorPos)(int X, int Y);  // data: 0x7c87a6 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetDlgItemTextA)(HWND hDlg, int nIDDlgItem, LPCSTR lpString);  // data: 0x7c867a IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_SetEndOfFile[4];  // data: 0x7E1334
extern unsigned char __imp_SetEnvironmentVariableA[4];  // data: 0x7E132C
extern unsigned char __imp_SetErrorInfo[4];  // data: 0x7E135C
extern BOOL (__stdcall * __imp_SetEvent)(HANDLE hEvent);  // data: 0x7c8416 IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_SetFilePointer)(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);  // data: 0x7c83da IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetFileTime)(HANDLE hFile, const FILETIME* lpCreationTime, const FILETIME* lpLastAccessTime, const FILETIME* lpLastWriteTime);  // data: 0x7c8524 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_SetFocus)(HWND hWnd);  // data: 0x7c8674 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetForegroundWindow)(HWND hWnd);  // data: 0x7c8752 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_SetGraphicsMode)(HDC hdc, int iMode);  // data: 0x7c8884 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_SetHandleCount[4];  // data: 0x7E12C8
extern unsigned char __imp_SetLastError[4];  // data: 0x7E12B4
extern BOOL (__stdcall * __imp_SetRect)(LPRECT lprc, int xLeft, int yTop, int xRight, int yBottom);  // data: 0x7c85e4 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_setsockopt)(unsigned int s, int level, int optname, const char* optval, int optlen);  // data: 0x7c89a4 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_SetStdHandle[4];  // data: 0x7E1318
extern COLORREF (__stdcall * __imp_SetTextColor)(HDC hdc, COLORREF color);  // data: 0x7c8836 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetThreadPriority)(HANDLE hThread, int nPriority);  // data: 0x7c8380 IAT slot fn-ptr truth (G42.33 b3)
extern UINT_PTR (__stdcall * __imp_SetTimer)(HWND hWnd, UINT_PTR nIDEvent, UINT uElapse, TIMERPROC lpTimerFunc);  // data: 0x7c8614 IAT slot fn-ptr truth (G42.33 b3)
extern LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall * __imp_SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);  // data: 0x7c8548 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetupComm)(HANDLE hFile, DWORD dwInQueue, DWORD dwOutQueue);  // data: 0x7c858a IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetViewportOrgEx)(HDC hdc, int x, int y, LPPOINT lppt);  // data: 0x7c8878 IAT slot fn-ptr truth (G42.33 b3)
extern LONG (__stdcall * __imp_SetWindowLongA)(HWND hWnd, int nIndex, LONG dwNewLong);  // data: 0x7c8632 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetWindowOrgEx)(HDC hdc, int x, int y, LPPOINT lppt);  // data: 0x7c8872 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SetWindowPos)(HWND hWnd, HWND hWndInsertAfter, int X, int Y, int cx, int cy, UINT uFlags);  // data: 0x7c8692 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_ShowCursor)(BOOL bShow);  // data: 0x7c868c IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ShowWindow)(HWND hWnd, int nCmdShow);  // data: 0x7c860e IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_Sleep)(DWORD dwMilliseconds);  // data: 0x7c8392 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_socket)(int af, int type, int protocol);  // data: 0x7c899e IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_StgCreateDocfile)(const WCHAR* pwcsName, DWORD grfMode, DWORD reserved, void** ppstgOpen);  // data: 0x7c88f6 IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_StgOpenStorage)(const WCHAR* pwcsName, void* pstgPriority, DWORD grfMode, wchar_t ** snbExclude, DWORD reserved, void** ppstgOpen);  // data: 0x7c88fc IAT slot fn-ptr truth (G42.33 b3)
extern HRESULT (__stdcall * __imp_StringFromCLSID)(const IID* const rclsid, wchar_t ** lplpsz);  // data: 0x7c88ea IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_StringFromGUID2)(const GUID* const rguid, wchar_t * lpsz, int cchMax);  // data: 0x7c8902 IAT slot fn-ptr truth (G42.33 b3)
extern wchar_t * (__stdcall * __imp_SysAllocString)(const wchar_t* psz);  // data: 0x7c8926 IAT slot fn-ptr truth (G42.33 b3)
extern void (__stdcall * __imp_SysFreeString)(wchar_t * bstrString);  // data: 0x7c892c IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_SystemTimeToFileTime)(const SYSTEMTIME* lpSystemTime, LPFILETIME lpFileTime);  // data: 0x7c84dc IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_TerminateProcess)(HANDLE hProcess, UINT uExitCode);  // data: 0x7c8536 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_TextOutA)(HDC hdc, int x, int y, LPCSTR lpString, int c);  // data: 0x7c8830 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned int (__stdcall * __imp_timeBeginPeriod)(UINT uPeriod);  // data: 0x7c895c IAT slot fn-ptr truth (G42.33 b3)
extern unsigned int (__stdcall * __imp_timeEndPeriod)(UINT uPeriod);  // data: 0x7c894a IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_timeGetTime[4];  // data: 0x7E1530
extern unsigned int (__stdcall * __imp_timeKillEvent)(UINT uTimerID);  // data: 0x7c8950 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned int (__stdcall * __imp_timeSetEvent)(UINT uDelay, UINT uResolution, void (__stdcall *fptc)(unsigned int, unsigned int, void *, unsigned int, unsigned int), DWORD_PTR dwUser, UINT fuEvent);  // data: 0x7c8956 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_TlsAlloc[4];  // data: 0x7E1330
extern unsigned char __imp_TlsFree[4];  // data: 0x7E1348
extern unsigned char __imp_TlsGetValue[4];  // data: 0x7E12B8
extern unsigned char __imp_TlsSetValue[4];  // data: 0x7E12AC
extern int (__stdcall * __imp_ToAscii)(UINT uVirtKey, UINT uScanCode, const BYTE* lpKeyState, LPWORD lpChar, UINT uFlags);  // data: 0x7c86d4 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_TranslateAcceleratorA)(HWND hWnd, HACCEL hAccTable, LPMSG lpMsg);  // data: 0x7c871c IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_TranslateMessage)(const MSG* lpMsg);  // data: 0x7c85d8 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_UnhandledExceptionFilter[4];  // data: 0x7E12EC
extern BOOL (__stdcall * __imp_UnmapViewOfFile)(LPCVOID lpBaseAddress);  // data: 0x7c8422 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_UpdateWindow)(HWND hWnd);  // data: 0x7c8638 IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_ValidateRect)(HWND hWnd, const RECT* lpRect);  // data: 0x7c8626 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_VariantChangeType[4];  // data: 0x7E1374
extern unsigned char __imp_VariantClear[4];  // data: 0x7E137C
extern unsigned char __imp_VariantInit[4];  // data: 0x7E1380
extern BOOL (__stdcall * __imp_VerQueryValueA)(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID* lplpBuffer, PUINT puLen);  // data: 0x7c89e0 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_VirtualAlloc[4];  // data: 0x7E1294
extern unsigned char __imp_VirtualFree[4];  // data: 0x7E1290
extern BOOL (__stdcall * __imp_VirtualProtect)(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);  // data: 0x7c848e IAT slot fn-ptr truth (G42.33 b3)
extern SIZE_T (__stdcall * __imp_VirtualQuery)(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength);  // data: 0x7c8494 IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_WaitForInputIdle)(HANDLE hProcess, DWORD dwMilliseconds);  // data: 0x7c87fa IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_WaitForMultipleObjects)(DWORD nCount, const HANDLE* lpHandles, BOOL bWaitAll, DWORD dwMilliseconds);  // data: 0x7c853c IAT slot fn-ptr truth (G42.33 b3)
extern DWORD (__stdcall * __imp_WaitForSingleObject)(HANDLE hHandle, DWORD dwMilliseconds);  // data: 0x7c83b0 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_WideCharToMultiByte)(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar);  // data: 0x7c83f2 IAT slot fn-ptr truth (G42.33 b3)
extern HWND (__stdcall * __imp_WindowFromPoint)(POINT Point);  // data: 0x7c877c IAT slot fn-ptr truth (G42.33 b3)
extern BOOL (__stdcall * __imp_WinHelpA)(HWND hWndMain, LPCSTR lpszHelp, UINT uCommand, ULONG_PTR dwData);  // data: 0x7c87ca IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char __imp_WriteConsoleA[4];  // data: 0x7E1344
extern BOOL (__stdcall * __imp_WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);  // data: 0x7c8482 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_WSAAsyncSelect)(unsigned int s, HWND hWnd, unsigned int wMsg, int lEvent);  // W13-B: 返回 int（wsock32 真值，e4_globals_decls.hpp:2381 同步）  // data: 0x7c89bc IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_WSACleanup)(void);  // data: 0x7c89b6 IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_WSAGetLastError)(void);  // data: 0x7c897a IAT slot fn-ptr truth (G42.33 b3)
extern int (__stdcall * __imp_WSAStartup)(WORD wVersionRequested, void * lpWSAData);  // data: 0x7c89c8 IAT slot fn-ptr truth (G42.33 b3)
extern unsigned char a0000_0[4];  // data: 0x8497CC
extern unsigned char a00W017V00[4];  // data: 0x84CCF4
extern unsigned char a00W018V00[4];  // data: 0x84CCE8
extern unsigned char a00W020V00[4];  // data: 0x84CCDC
extern unsigned char a00W022V00[4];  // data: 0x84CD18
extern unsigned char a00W024V00[4];  // data: 0x84CD0C
extern unsigned char a00W026V00[4];  // data: 0x84CD00
extern unsigned char a00W029V00[4];  // data: 0x84CCAC
extern unsigned char a00W031V00[4];  // data: 0x84CCB8
extern unsigned char a01W018V01[4];  // data: 0x84CD3C
extern unsigned char a01W020V01[4];  // data: 0x84CD30
extern unsigned char a01W022V01[4];  // data: 0x84CD24
extern unsigned char a01W024V01[4];  // data: 0x84CD60
extern unsigned char a01W026V01[4];  // data: 0x84CD54
extern unsigned char a01W028V01[4];  // data: 0x84CD48
extern unsigned char a01W030V01[4];  // data: 0x84CCC4
extern unsigned char a01W032V01[4];  // data: 0x84CCD0
extern unsigned char a0_0[4];  // data: 0x822BA4
extern unsigned char a1_0[4];  // data: 0x81F210
extern unsigned char a1_2[4];  // data: 0x822BC4
extern unsigned char a2f[4];  // data: 0x82A23C
extern unsigned char a480[4];  // data: 0x826510
extern char aAarate[7];  // data: 0x82C27C
extern char aAb[3];  // data: 0x822B78
extern char aAimdIni[9];  // data: 0x82621C
extern char aAirlift[8];  // data: 0x81B820
extern char aAitriggertypes[15];  // data: 0x8180F8
extern char aAitriggertypes_0[21];  // data: 0x8180E0
extern char aAlltocheer[11];  // data: 0x82741C
extern char aAnim_0[5];  // data: 0x817448
extern char aAnims[6];  // data: 0x8302FC
extern char aArmoraircraftm[18];  // data: 0x8253F8
extern char aArmorbuildings[19];  // data: 0x8253E4
extern char aArmordefensesm[18];  // data: 0x8253D0
extern char aArmorinfantrym[18];  // data: 0x82541C
extern char aArmorunitsmult[15];  // data: 0x82540C
extern char aArtmdIni[10];  // data: 0x826254
extern char aAtd[4];  // data: 0x849B44
extern char aAttachedpartic[23];  // data: 0x849274
extern char aAttract[9];  // data: 0x826520
extern char aAuthenticamd[13];  // data: 0x822CD8
extern char aBackground[11];  // data: 0x8241B4
extern char aBag[5];  // data: 0x815E78
extern char aBik[5];  // data: 0x82D9CC
extern char aBik_0[5];  // data: 0x82419C
extern char aBleep1[7];  // data: 0x830178
extern char aBluetint[9];  // data: 0x82BF68
extern char aBuildngzSha[13];  // data: 0x8193F4
extern char aBuildtimeaircr[22];  // data: 0x8252F4
extern char aBuildtimebuild[23];  // data: 0x8252DC
extern char aBuildtimedefen[22];  // data: 0x8252C4
extern char aBuildtimeinfan[22];  // data: 0x825320
extern char aBuildtimeunits[19];  // data: 0x82530C
extern char aBummer[7];  // data: 0x821CA8
extern char aCabhut[7];  // data: 0x82BA00
extern char aCameoPal[10];  // data: 0x8204E0
extern char aCanceled[9];  // data: 0x848F18
extern char aCenterbase[11];  // data: 0x827514
extern char aCenteronradare[19];  // data: 0x827610
extern char aCenterview[11];  // data: 0x8274E0
extern char aCmid[5];  // data: 0x848CB8
extern char aCmndAllcheer[14];  // data: 0x827428
extern char aCmndAllcheerde[18];  // data: 0x827438
extern char aCmndCombatants[21];  // data: 0x8272D0
extern char aCmndCombatants_0[25];  // data: 0x8272E8
extern char aCmndDelete[12];  // data: 0x827B44
extern char aCmndDeletedesc[16];  // data: 0x827B50
extern char aCmndHealthnavi[22];  // data: 0x827340
extern char aCmndHealthnavi_0[26];  // data: 0x827358
extern char aCmndPlanningmo[18];  // data: 0x827288
extern char aCmndPlanningmo_0[22];  // data: 0x8272A8
extern char aCmndTypeselect[16];  // data: 0x827310
extern char aCmndTypeselect_0[20];  // data: 0x827320
extern char aCmndVetnavigat[19];  // data: 0x827384
extern char aCmndVetnavigat_0[23];  // data: 0x827398
extern char aCodeWdtmapmdIn[21];  // data: 0x848BC4
extern char aCombatantselec[16];  // data: 0x8272C0
extern char aConqmdMix[11];  // data: 0x826838
extern char aConquerMix[12];  // data: 0x8267EC
extern char aConstruction[13];  // data: 0x816DCC
extern char aCopyprotection_0[50];  // data: 0x81F408
extern char aCopyprotection_1[34];  // data: 0x81F4C0
extern char aCostaircraftmu[17];  // data: 0x825398
extern char aCostbuildingsm[18];  // data: 0x825384
extern char aCostdefensesmu[17];  // data: 0x825370
extern char aCostinfantrymu[17];  // data: 0x8253BC
extern char aCostunitsmult[14];  // data: 0x8253AC
extern char aCreatesurfaceO[18];  // data: 0x82066C
extern char aCreateunitsoun[16];  // data: 0x81AB3C
extern char aCredits[8];  // data: 0x824E38
extern char aCrtk[5];  // data: 0x848CF0
extern char aCyid[5];  // data: 0x848CB0
extern char aCyln[5];  // data: 0x848CE8
extern char aCyrixinstead[13];  // data: 0x822CC8
extern char aD6e7fc9764f94d[37];  // data: 0x81F498
extern char aDD_2[2];  // data: 0x8201C4
extern char aDefault[9];  // data: 0x849F14
extern char aDelete[7];  // data: 0x827B3C
extern char aDeployinganim[14];  // data: 0x819490
extern char aDeployobject[13];  // data: 0x82744C
extern char aDescCursorchea[17];  // data: 0x827B04
extern char aDisabled[9];  // data: 0x8242C0
extern char aDlink1[8];  // data: 0x82655C
extern char aDllgetversion[14];  // data: 0x8201D4
extern char aDowebpagedialo[37];  // data: 0x849738
extern char aDpodHva[9];  // data: 0x8268D8
extern char aDpodVxl[9];  // data: 0x826900
extern char aDRa2mdpostCred[25];  // data: 0x81FBBC
extern char aDRa2mdpostDisp[25];  // data: 0x8201A8
extern char aDRa2mdpostGame[25];  // data: 0x822848
extern char aDRa2mdpostMpla[25];  // data: 0x82E134
extern char aDRa2mdpostWdtp[26];  // data: 0x848D80
extern char aDRa2mdpostWolp[39];  // data: 0x84A0D0
extern char aDraw[5];  // data: 0x8491E8
extern char aDrop[7];  // data: 0x826574
extern char aDsurfaceCreate[26];  // data: 0x8206F0
extern char aDsurfaceCreate_0[45];  // data: 0x820680
extern char aEdge[5];  // data: 0x824DD0
extern char aEnum[5];  // data: 0x82CD38
extern char aError[6];  // data: 0x849B60
extern char aErrorRecursive[91];  // data: 0x821CC0
extern char aEvaAlliancebro[19];  // data: 0x824808
extern char aEvaAlliancefor[19];  // data: 0x8247E4
extern char aEvaAlliancereq[22];  // data: 0x82479C
extern char aEvaBuildingcap[21];  // data: 0x818FAC
extern char aEvaBuildingonl[19];  // data: 0x8190C8
extern char aEvaEnemyallian[24];  // data: 0x8247CC
extern char aEvaLightningst[26];  // data: 0x828080
extern char aEvamdIni[10];  // data: 0x825DF0
extern char aEvaMissionacco[24];  // data: 0x824C54
extern char aEvaMissionfail[18];  // data: 0x824CAC
extern char aEvaOurallyisun[25];  // data: 0x82474C
extern char aEvaOurbaseisun[25];  // data: 0x824768
extern char aEvaPlayerdefea[19];  // data: 0x824B70
extern char aEvaRequestinga[23];  // data: 0x8247B4
extern char aEvaRobottanksb[25];  // data: 0x824FE4
extern char aEvaTechbuildin[21];  // data: 0x818FC4
extern char aEvaUnitlost[13];  // data: 0x822620
extern char aEvaUnitready[14];  // data: 0x8249A0
extern char aEvaYouarevicto[21];  // data: 0x824C2C
extern char aEvaYouhavelost[16];  // data: 0x824C08
extern char aExpandDat[11];  // data: 0x822210
extern char aExtrasynccheck[18];  // data: 0x827938
extern char aExtraSyncInfoO[19];  // data: 0x8279D8
extern char aExtraSyncInfoO_0[20];  // data: 0x8279C4
extern char aFactory[8];  // data: 0x81C028
extern char aFailedToCreate_0[26];  // data: 0x8268E4
extern char aFailedToCreate_1[26];  // data: 0x8268BC
extern char aFailedToGetDes[46];  // data: 0x82063C
extern char aFailedToNotify[34];  // data: 0x81F43C
extern char aFirepower[10];  // data: 0x81D9C0
extern char aFocusGained[14];  // data: 0x849EF8
extern char aFocusLost[12];  // data: 0x849F08
extern char aFogShp[8];  // data: 0x81CE10
extern char aFollow[7];  // data: 0x818BB4
extern char aFriendlyname[13];  // data: 0x8497BC
extern char aGameFnt[9];  // data: 0x818B98
extern char aGameSyncLoggin[2];  // data: 0x82794C
extern char aGaplug[7];  // data: 0x824EB8
extern char aGlslmdShp[11];  // data: 0x826898
extern char aGlsmdPal[10];  // data: 0x8268B0
extern char aGlssmdShp[11];  // data: 0x8268A4
extern char aGreentint[10];  // data: 0x82BF74
extern char aGt18Bmp[9];  // data: 0x84CDA8
extern char aGuardobject[12];  // data: 0x827488
extern char aGuiBlank[10];  // data: 0x81B4AC
extern char aGuiBlueabbrev[15];  // data: 0x822B48
extern char aGuiCampaignlab[18];  // data: 0x81B514
extern char aGuiCancel[11];  // data: 0x82635C
extern char aGuiConfirmmode[22];  // data: 0x82A57C
extern char aGuiCreatingcha[20];  // data: 0x84B8A8
extern char aGuiDebug[10];  // data: 0x827AF8
extern char aGuiDefault[12];  // data: 0x84A1AC
extern char aGuiDeletemapme[18];  // data: 0x82BC5C
extern char aGuiDeletemissi[22];  // data: 0x829FC8
extern char aGuiExitareyous[19];  // data: 0x826368
extern char aGuiGoldabbrev[15];  // data: 0x822B68
extern char aGuiGrayabbrev[15];  // data: 0x822ADC
extern char aGuiGreenabbrev[16];  // data: 0x822B38
extern char aGuiLeave[10];  // data: 0x8240F0
extern char aGuiLoadingex[14];  // data: 0x82686C
extern char aGuiLoadmission[20];  // data: 0x829FA0
extern char aGuiLogincomple[18];  // data: 0x84B5F4
extern char aGuiMapsaved[13];  // data: 0x82BC70
extern char aGuiNoneassymbo[18];  // data: 0x822BF8
extern char aGuiNoserversav[23];  // data: 0x84B800
extern char aGuiObserver[13];  // data: 0x8229EC
extern char aGuiOrangeabbre[17];  // data: 0x822B24
extern char aGuiPinkabbrev[15];  // data: 0x822AEC
extern char aGuiPlaywdt[12];  // data: 0x848DD8
extern char aGuiPurpleabbre[17];  // data: 0x822AFC
extern char aGuiRandomex[13];  // data: 0x8229DC
extern char aGuiRedabbrev[14];  // data: 0x822B58
extern char aGuiRestart[12];  // data: 0x8240E4
extern char aGuiSavemapmenu[16];  // data: 0x82BC4C
extern char aGuiSavemission[20];  // data: 0x829FB4
extern char aGuiSkyblueabbr[18];  // data: 0x822B10
extern char aGuiUserprofile[21];  // data: 0x84A194
extern char aGuiWelcomeupda[18];  // data: 0x84A180
extern char aGuiWwbrand[12];  // data: 0x82687C
extern char aHealthnav[10];  // data: 0x827334
extern char aHey[5];  // data: 0x81FFC4
extern char aHighlighted[12];  // data: 0x8242CC
extern char aHighlightsound[15];  // data: 0x8242B0
extern char aHouse[6];  // data: 0x8173E8
extern char aHsDD[2];  // data: 0x84A724
extern char aHsS_1[2];  // data: 0x84AFB0
extern char aHsS_2[2];  // data: 0x84AFC8
extern char aHsvc[5];  // data: 0x848CC0
extern char aHttpApiregiste_1[55];  // data: 0x84B500
extern char aHttpPrivacypol[34];  // data: 0x84BA1C
extern char aIdx[5];  // data: 0x815E80
extern char aIncomemult[11];  // data: 0x8252B8
extern char aInetmib1Dll[13];  // data: 0x84C9BC
extern char aInfantrytab[12];  // data: 0x827048
extern char aIntroWav[10];  // data: 0x82CFF4
extern char aIsotem[7];  // data: 0x7E1BBC
extern char aIsotemp[8];  // data: 0x7E1BB2
extern char aItemmax[8];  // data: 0x82418C
extern char aLangruleIni[13];  // data: 0x826228
extern char aLauncherNotifi[20];  // data: 0x81F484
extern char aLayouts[8];  // data: 0x848DFC
extern char aLdsc[5];  // data: 0x848CD0
extern char aLevel[6];  // data: 0x81B0D4
extern char aLoading[8];  // data: 0x82C1BC
extern char aLob39[8];  // data: 0x84A22C
extern char aLosingthreshol[16];  // data: 0x848E90
extern char aMapcheckTxt[13];  // data: 0x82AF00
extern char aMapenter[9];  // data: 0x848F00
extern char aMapleave[9];  // data: 0x848F0C
extern char aMapselmdIni[13];  // data: 0x830370
extern char aMapsmdMix[12];  // data: 0x82679C
extern char aMapsMix[10];  // data: 0x826790
extern char aMegalosingthre[20];  // data: 0x848E7C
extern char aMegawinningthr[21];  // data: 0x848EA0
extern char aMessages[10];  // data: 0x82652C
extern char aMixfilesMovies[21];  // data: 0x8266FC
extern char aMmt[5];  // data: 0x829148
extern char aMode_0[7];  // data: 0x84BA40
extern char aModem[6];  // data: 0x82CECC
extern char aMousecancel[12];  // data: 0x848F6C
extern char aMpdebug[9];  // data: 0x82657C
extern char aMpIllegalteam[15];  // data: 0x82FF0C
extern char aMpNoattackers[15];  // data: 0x82FEE8
extern char aMpNodefender[14];  // data: 0x82FF1C
extern char aMpOnlyonebesei[19];  // data: 0x82FEF8
extern char aMpstatsTxt[12];  // data: 0x81D97C
extern char aMpvc[5];  // data: 0x848CC8
extern char aMsenginePausin[31];  // data: 0x8305E8
extern char aMsengineResumi[32];  // data: 0x8305B0
extern char aMsengineSleepi[21];  // data: 0x8305D0
extern char aMsgDominatorac[20];  // data: 0x8280B8
extern char aMsgLightningst[25];  // data: 0x82809C
extern char aMulticast[10];  // data: 0x8283C8
extern char aMultiplayerdeb[17];  // data: 0x8278A0
extern char aNack[5];  // data: 0x848D00
extern char aNameTemperate[15];  // data: 0x7E1B88
extern char aNetgear[9];  // data: 0x826550
extern char aNews[5];  // data: 0x84A470
extern char aNoName_0[2];  // data: 0x8182E0
extern char aNorouter[10];  // data: 0x826544
extern char aO8[3];  // data: 0x82DC2C
extern char aO[3];  // data: 0x826500
extern char aOlCruddy[10];  // data: 0x84CC08
extern char aOrigin800[11];  // data: 0x84915C
extern unsigned char aP5[4];  // data: 0x89C848
extern unsigned char aP6[4];  // data: 0xB1CFC0
extern char aP7[1];  // data: 0x7E8BF0
extern char aPings[7];  // data: 0x84D3AC
extern char aPingTimesNotAv_0[26];  // data: 0x82E0B4
extern char aPip[4];  // data: 0x825A6C
extern char aPlacebeacon[12];  // data: 0x81BD08
extern char aPlaceShp[10];  // data: 0x820080
extern char aPlayerfaction[14];  // data: 0x84819C
extern char aPlayMovieAsBin[23];  // data: 0x82D9B4
extern char aPotato[7];  // data: 0x84CC14
extern char aPotatotoo[10];  // data: 0x84CC1C
extern char aPower[6];  // data: 0x81C030
extern char aPoweroffShp[13];  // data: 0x819410
extern char aPreviousobject[15];  // data: 0x8273B0
extern char aProc[5];  // data: 0x81C1C0
extern char aProcessingNetP[32];  // data: 0x81D5A0
extern char aProgbar2Shp[13];  // data: 0x82BF18
extern char aProjectile[11];  // data: 0x849268
extern char aPsiwarn[8];  // data: 0x81907C
extern char aRa2tsL[8];  // data: 0x825CE0
extern char aRa2tsS[8];  // data: 0x825CE8
extern char aRandmapSed[12];  // data: 0x82BC30
extern char aRedtint[8];  // data: 0x82BF80
extern char aRegpath[8];  // data: 0x84A944
extern char aRing1[6];  // data: 0x8182F0
extern char aRmcacheMmp[14];  // data: 0x82BB0C
extern char aRmglevellights[22];  // data: 0x82BD8C
extern char aRmgvegetationm[22];  // data: 0x82BD74
extern char aRmgvegetationm_0[22];  // data: 0x82BD5C
extern char aRoofdeployinga[18];  // data: 0x81947C
extern char aRoot[5];  // data: 0x8497D4
extern char aRulemdIni[12];  // data: 0x82626C
extern char aRulesmdIni[12];  // data: 0x826260
extern char aScatterobject[14];  // data: 0x8274B0
extern char aScreencapture[14];  // data: 0x827A18
extern char aSD_3[2];  // data: 0x84A670
extern char aSDD_0[2];  // data: 0x84A658
extern char aSdsc[5];  // data: 0x848CD8
extern char aSelectvq[9];  // data: 0x8242A4
extern char aSendingCampaig[29];  // data: 0x81B390
extern char aSendingNetPort[45];  // data: 0x81D710
extern char aSetview1[9];  // data: 0x8277A4
extern char aSetview2[9];  // data: 0x8277DC
extern char aSetview3[9];  // data: 0x827814
extern char aSetview4[9];  // data: 0x82784C
extern char aSGame[8];  // data: 0x84D590
extern char aShroudShp[11];  // data: 0x81CE18
extern char aSidebardown[12];  // data: 0x82767C
extern char aSidebarup[10];  // data: 0x82764C
extern char aSnmpapiDll[12];  // data: 0x84C974
extern char aSnmpextensioni[18];  // data: 0x84C944
extern char aSnmpextensionq[19];  // data: 0x84C930
extern char aSnmputilmemall[17];  // data: 0x84C91C
extern char aSnmputilmemfre[16];  // data: 0x84C90C
extern char aSnowambientlig[17];  // data: 0x82BD30
extern char aSnoworepatchla[18];  // data: 0x82BC80
extern char aSocket_1[7];  // data: 0x826588
extern char aSorryYouCanOnl[106];  // data: 0x821C3C
extern char aSoundmdIni[12];  // data: 0x825E50
extern char aSounds[7];  // data: 0x8302CC
extern char aSounds_0[7];  // data: 0x848E04
extern char aSpeedaircraftm[18];  // data: 0x825338
extern char aSpeedcontrol[14];  // data: 0x826564
extern char aSpeedinfantrym[18];  // data: 0x82535C
extern char aSpeedunitsmult[15];  // data: 0x82534C
extern char aSpyplaneOverfl[17];  // data: 0x816D2C
extern char aStart443900100[84];  // data: 0x84D638
extern char aStart443900100_0[83];  // data: 0x84D5E4
extern char aStartup[8];  // data: 0x8491E0
extern char aStealth[9];  // data: 0x826538
extern char aSteveT2[9];  // data: 0x84CC28
extern char aSteveT3[9];  // data: 0x84CC34
extern char aStopobject[11];  // data: 0x8273E8
extern char aStrangePortNum[42];  // data: 0x81D620
extern char aStrong[7];  // data: 0x81BAC8
extern char aStructures[11];  // data: 0x818CE8
extern char aSttAlliedcampa[23];  // data: 0x8263C8
extern char aSttHostcombost[19];  // data: 0x822B90
extern char aSttPlayersidea[22];  // data: 0x822978
extern char aSttPlayersideb[22];  // data: 0x82291C
extern char aSttPlayersidec[19];  // data: 0x8228E0
extern char aSttPlayersidef[21];  // data: 0x82294C
extern char aSttPlayersideg[22];  // data: 0x822934
extern char aSttPlayersidei[19];  // data: 0x8228F4
extern char aSttPlayersidek[20];  // data: 0x822964
extern char aSttPlayersidel[20];  // data: 0x822908
extern char aSttPlayersideo[23];  // data: 0x822990
extern char aSttPlayersider[21];  // data: 0x8229A8
extern char aSttPlayersider_0[21];  // data: 0x8228C8
extern char aSttPlayersidey[26];  // data: 0x8228AC
extern char aSttSovietcampa[23];  // data: 0x8263B0
extern char aSun[2];  // data: 0x818704
extern char aSyslistview32[14];  // data: 0x849E3C
extern char aSystreeview32[14];  // data: 0x849E54
extern char aTarget800[11];  // data: 0x849168
extern char aTargetdividing[20];  // data: 0x848ECC
extern char aTargetpalette[14];  // data: 0x848EE0
extern char aTargetzoom[11];  // data: 0x849058
extern char aTauntsTauam02i[21];  // data: 0x846770
extern char aTech[5];  // data: 0x81C1C8
extern char aTechlevel[10];  // data: 0x824E40
extern char aTem[5];  // data: 0x829140
extern char aTemperat[9];  // data: 0x7E1BA8
extern char aTemperateambie[22];  // data: 0x82BD44
extern char aTemperateambie_0[20];  // data: 0x82BD1C
extern char aTemperateambie_1[22];  // data: 0x82BD04
extern char aTemperateorepa[23];  // data: 0x82BC94
extern char aTerrain[8];  // data: 0x8172E0
extern char aTerritoryselec[16];  // data: 0x8491D0
extern char aTesteffect[11];  // data: 0x82D000
extern char aTestenvelopefs[19];  // data: 0x82D00C
extern char aTextrect[9];  // data: 0x8302F0
extern char aThememdIni[12];  // data: 0x825D94
extern char aTicc[5];  // data: 0x848CA8
extern char aTitleHiThereTi[25];  // data: 0x84A4A8
extern char aTogglealliance[15];  // data: 0x827548
extern char aTogglerepair[13];  // data: 0x82757C
extern char aTogglesell[11];  // data: 0x8275B4
extern char aTotile[7];  // data: 0x81AEF0
extern char aTotk[5];  // data: 0x848CF8
extern char aTxtAboutToTryM[22];  // data: 0x82A290
extern char aTxtAlliance[13];  // data: 0x827558
extern char aTxtAllianceDes[18];  // data: 0x827568
extern char aTxtApimissing[15];  // data: 0x84A930
extern char aTxtApiwrongver[20];  // data: 0x84A94C
extern char aTxtAtWar[11];  // data: 0x82481C
extern char aTxtAwayLoading[17];  // data: 0x8262F0
extern char aTxtAwayQuickma[20];  // data: 0x84C600
extern char aTxtBack[9];  // data: 0x848DCC
extern char aTxtBadChankey[16];  // data: 0x84B8D0
extern char aTxtBannedtill[15];  // data: 0x84B234
extern char aTxtBattleclanG[20];  // data: 0x84A710
extern char aTxtBuddyFilter[17];  // data: 0x84A41C
extern char aTxtBytesWTime[17];  // data: 0x84D744
extern char aTxtCantcreateC[20];  // data: 0x84B8BC
extern char aTxtCdDialog1[16];  // data: 0x825FA0
extern char aTxtCenterBase[16];  // data: 0x827520
extern char aTxtCenterBaseD[21];  // data: 0x827530
extern char aTxtCenterView[16];  // data: 0x8274EC
extern char aTxtCenterViewD[21];  // data: 0x8274FC
extern char aTxtChanBan[13];  // data: 0x84B254
extern char aTxtChancreateF[22];  // data: 0x84ACC8
extern char aTxtChanUnban[15];  // data: 0x84B244
extern char aTxtClanFilter[16];  // data: 0x84A44C
extern char aTxtConnecting[15];  // data: 0x84D758
extern char aTxtConnectingS[22];  // data: 0x84B430
extern char aTxtCopyright[14];  // data: 0x826888
extern char aTxtCreatedChan[17];  // data: 0x84ACB4
extern char aTxtDefenseTabD[21];  // data: 0x827030
extern char aTxtDeployObjec[18];  // data: 0x82745C
extern char aTxtDeployObjec_0[23];  // data: 0x827470
extern char aTxtDifficultyB[22];  // data: 0x81B4B8
extern char aTxtDifficultyE[20];  // data: 0x81B500
extern char aTxtDifficultyM[22];  // data: 0x81B4D0
extern char aTxtDownloadFai[20];  // data: 0x84BA04
extern char aTxtDownloading[23];  // data: 0x84ABCC
extern char aTxtFetchingWdt[17];  // data: 0x84CC5C
extern char aTxtFindingPatc[18];  // data: 0x84D768
extern char aTxtFollow[11];  // data: 0x827884
extern char aTxtFollowDesc[16];  // data: 0x827890
extern char aTxtGamePasswor[18];  // data: 0x84A6E8
extern char aTxtGameRestart[17];  // data: 0x84ABB8
extern char aTxtGameWasSave[19];  // data: 0x829FE0
extern char aTxtGuard[10];  // data: 0x827494
extern char aTxtGuardDesc[15];  // data: 0x8274A0
extern char aTxtHasAllied[15];  // data: 0x8247F8
extern char aTxtHowToReply[17];  // data: 0x84B00C
extern char aTxtInfantryTab[17];  // data: 0x827054
extern char aTxtInfantryTab_0[22];  // data: 0x827068
extern char aTxtInitgameFai[20];  // data: 0x81D58C
extern char aTxtInvalid[12];  // data: 0x8264F0
extern char aTxtInvalidDay[16];  // data: 0x84B6B8
extern char aTxtInvalidEmai[18];  // data: 0x84B6DC
extern char aTxtInvalidMont[18];  // data: 0x84B6A4
extern char aTxtInvalidYear[17];  // data: 0x84B6F0
extern char aTxtLaunchbrows[18];  // data: 0x84A494
extern char aTxtLightningSt[20];  // data: 0x82804C
extern char aTxtLightningSt_0[32];  // data: 0x828060
extern char aTxtLoading[12];  // data: 0x829F94
extern char aTxtLob1[10];  // data: 0x84A64C
extern char aTxtLob2[10];  // data: 0x84A640
extern char aTxtLob3[10];  // data: 0x84A634
extern char aTxtLob4[10];  // data: 0x84A628
extern char aTxtLob5[10];  // data: 0x84A61C
extern char aTxtLob6[10];  // data: 0x84A610
extern char aTxtLob7[10];  // data: 0x84A604
extern char aTxtLob8[10];  // data: 0x84A5F8
extern char aTxtLoginUsed[15];  // data: 0x84AC90
extern char aTxtLost[9];  // data: 0x824CA0
extern char aTxtMultiplayer[21];  // data: 0x820DBC
extern char aTxtNeedEqualTe[21];  // data: 0x84BB98
extern char aTxtNeedMorePla[22];  // data: 0x84BBB0
extern char aTxtNextObjectD[21];  // data: 0x827260
extern char aTxtNoAiObserva[22];  // data: 0x84BBC8
extern char aTxtNobrowser[14];  // data: 0x84A484
extern char aTxtNoClan[12];  // data: 0x84CE18
extern char aTxtNone[9];  // data: 0x820DE4
extern char aTxtOptionHelp0[19];  // data: 0x8264DC
extern char aTxtOptionHelp0_0[19];  // data: 0x8264C8
extern char aTxtOptionHelp0_1[19];  // data: 0x8264B4
extern char aTxtOptionHelp0_2[19];  // data: 0x8264A0
extern char aTxtOptionHelp0_3[19];  // data: 0x82648C
extern char aTxtOptionHelp0_4[19];  // data: 0x826478
extern char aTxtOptions[12];  // data: 0x8276B4
extern char aTxtOptionsDesc[17];  // data: 0x8276C0
extern char aTxtPagedisable[17];  // data: 0x84B058
extern char aTxtPagesent[13];  // data: 0x84B06C
extern char aTxtPageusergon[17];  // data: 0x84B044
extern char aTxtPasswordToo[23];  // data: 0x84B714
extern char aTxtPasswordVer[20];  // data: 0x84B72C
extern char aTxtPlaceBeacon[17];  // data: 0x8275E4
extern char aTxtPlaceBeacon_0[22];  // data: 0x8275F8
extern char aTxtPlayerChang[25];  // data: 0x820DF0
extern char aTxtPlayerChang_0[27];  // data: 0x820C38
extern char aTxtPlayerDefea[20];  // data: 0x824C18
extern char aTxtPlayerToolt[26];  // data: 0x84BAE0
extern char aTxtPlayerToolt_0[28];  // data: 0x84BAC4
extern char aTxtPlayerToolt_1[25];  // data: 0x84BAA8
extern char aTxtPlayerToolt_2[28];  // data: 0x84BA8C
extern char aTxtPlayerToolt_3[30];  // data: 0x84BA6C
extern char aTxtPlayerToolt_4[27];  // data: 0x84BA50
extern char aTxtPrevObject[16];  // data: 0x8273C0
extern char aTxtPrevObjectD[21];  // data: 0x8273D0
extern char aTxtRadarEvent[16];  // data: 0x827624
extern char aTxtRadarEventD[21];  // data: 0x827634
extern char aTxtRepairMode[16];  // data: 0x82758C
extern char aTxtRepairModeD[21];  // data: 0x82759C
extern char aTxtReqChanlist[17];  // data: 0x84A5D0
extern char aTxtReqNick[13];  // data: 0x84B704
extern char aTxtRequiredFie[19];  // data: 0x84B6C8
extern char aTxtSaveCampAva[24];  // data: 0x82DF50
extern char aTxtSavingGame[16];  // data: 0x820DD4
extern char aTxtScatter[12];  // data: 0x8274C0
extern char aTxtScatterDesc[17];  // data: 0x8274CC
extern char aTxtScenarioLos[18];  // data: 0x824CC0
extern char aTxtScenarioWon[17];  // data: 0x824C6C
extern char aTxtScrncap[12];  // data: 0x827A28
extern char aTxtScrncapDesc[17];  // data: 0x827A34
extern char aTxtSellMode[14];  // data: 0x8275C0
extern char aTxtSellModeDes[19];  // data: 0x8275D0
extern char aTxtSendingGoAc[19];  // data: 0x82C7CC
extern char aTxtSetBookmark[18];  // data: 0x8277B0
extern char aTxtSetBookmark_0[23];  // data: 0x8277C4
extern char aTxtSetBookmark_1[18];  // data: 0x8277E8
extern char aTxtSetBookmark_2[23];  // data: 0x8277FC
extern char aTxtSetBookmark_3[18];  // data: 0x827820
extern char aTxtSetBookmark_4[23];  // data: 0x827834
extern char aTxtSetBookmark_5[18];  // data: 0x827858
extern char aTxtSetBookmark_6[23];  // data: 0x82786C
extern char aTxtShadow[11];  // data: 0x82019C
extern char aTxtSidebarDown[17];  // data: 0x827688
extern char aTxtSidebarDown_0[22];  // data: 0x82769C
extern char aTxtSidebarUp[15];  // data: 0x827658
extern char aTxtSidebarUpDe[20];  // data: 0x827668
extern char aTxtSigningOff[16];  // data: 0x82C7BC
extern char aTxtSpecialWarn[20];  // data: 0x820E30
extern char aTxtStopObject[16];  // data: 0x8273F4
extern char aTxtStopObjectD[21];  // data: 0x827404
extern char aTxtSurrender[14];  // data: 0x81D4E8
extern char aTxtTalkForward[32];  // data: 0x84BD00
extern char aTxtTalkForward_0[32];  // data: 0x84BCA8
extern char aTxtTalkLocalPr[23];  // data: 0x84BD44
extern char aTxtTalkReporte[26];  // data: 0x84BD7C
extern char aTxtTooManyPlay[21];  // data: 0x84BB80
extern char aTxtTournamentG[20];  // data: 0x84A6FC
extern char aTxtUnablePlayW[23];  // data: 0x82C6AC
extern char aTxtUnitTab[13];  // data: 0x827088
extern char aTxtUnitTabDesc[18];  // data: 0x827098
extern char aTxtUserKicked[16];  // data: 0x84B264
extern char aTxtVictorious[15];  // data: 0x824C44
extern char aTxtViewBookmar[19];  // data: 0x8276DC
extern char aTxtViewBookmar_0[24];  // data: 0x8276F0
extern char aTxtViewBookmar_1[19];  // data: 0x827710
extern char aTxtViewBookmar_2[24];  // data: 0x827724
extern char aTxtViewBookmar_3[19];  // data: 0x827744
extern char aTxtViewBookmar_4[24];  // data: 0x827758
extern char aTxtViewBookmar_5[19];  // data: 0x827778
extern char aTxtViewBookmar_6[24];  // data: 0x82778C
extern char aTxtWolLoggingO[20];  // data: 0x84B3D8
extern char aTxtYouleft[12];  // data: 0x84B380
extern char aTxtYoureKicked[17];  // data: 0x84B274
extern char aUnittab[8];  // data: 0x827080
extern char aUnknownStatus[2];  // data: 0x84AAA0
extern char aUrb[5];  // data: 0x829138
extern char aVeteranaircraf[16];  // data: 0x825288
extern char aVeterancynav[13];  // data: 0x827374
extern char aVeteraninfantr[16];  // data: 0x8252A8
extern char aVeteranunits[13];  // data: 0x825298
extern char aView1[6];  // data: 0x8276D4
extern char aView2[6];  // data: 0x827708
extern char aView3[6];  // data: 0x82773C
extern char aView4[6];  // data: 0x827770
extern char aVoiceovers[11];  // data: 0x848E0C
extern char aVqa[5];  // data: 0x8241A4
extern char aW[2];  // data: 0x82AF10
extern char aWaitingForMess[36];  // data: 0x81F460
extern char aWdtAlliedheldt[22];  // data: 0x8490A8
extern char aWdtBases[10];  // data: 0x8484B0
extern char aWdtchoicemdIni[16];  // data: 0x84D864
extern char aWdtCrates[11];  // data: 0x84843C
extern char aWdtDefaultlong[29];  // data: 0x848D40
extern char aWdtDefaultshor[30];  // data: 0x848D60
extern char aWdtFactionsele_0[31];  // data: 0x84D7F8
extern char aWdtFactionsele_1[31];  // data: 0x84D7D8
extern char aWdtfsasmPcx[13];  // data: 0x84D844
extern char aWdtfsbsmPcx[13];  // data: 0x84D854
extern char aWdtfsssmPcx[13];  // data: 0x84D834
extern char aWdthistIni_0[12];  // data: 0x847FDC
extern char aWdtmapmdIni[13];  // data: 0x848E18
extern char aWdtNobases[12];  // data: 0x8484A4
extern char aWdtNocrates[13];  // data: 0x84842C
extern char aWdtNoredeploym[18];  // data: 0x848448
extern char aWdtNotshortgam[17];  // data: 0x848480
extern char aWdtRedeployabl[20];  // data: 0x84845C
extern char aWdtShortgame[14];  // data: 0x848494
extern char aWdtSovietheldt[22];  // data: 0x8490C0
extern char aWdtTechlevel[14];  // data: 0x8484BC
extern char aWdtTerritorypr[20];  // data: 0x849064
extern char aWdtTerritoryse_0[28];  // data: 0x84908C
extern char aWdtTerritorysu[20];  // data: 0x849078
extern char aWdtUnitcount[14];  // data: 0x848470
extern char aWin[5];  // data: 0x826504
extern char aWinningthresho[17];  // data: 0x848EB8
extern char aWmInitdialog[15];  // data: 0x821CB0
extern char aWolBuddydisabl[22];  // data: 0x84CDF0
extern char aWolBuddyofflin[17];  // data: 0x84CDDC
extern char aWolBuddyonline[16];  // data: 0x84CDB4
extern char aWolBuddyplayin[21];  // data: 0x84CD90
extern char aWolBuddyquickm[23];  // data: 0x84CDC4
extern char aWolBuddyunknow[23];  // data: 0x84CD78
extern char aWolChanneljoin[23];  // data: 0x84D074
extern char aWolGamefull[13];  // data: 0x84CE08
extern char aWolMatchattemp[30];  // data: 0x84D570
extern char aWolMatchbadpar[23];  // data: 0x84D508
extern char aWolMatchcreati[22];  // data: 0x84D5CC
extern char aWolMatcherrorc[27];  // data: 0x84D598
extern char aWolMatcherrorj[26];  // data: 0x84D520
extern char aWolMatchfoundw[19];  // data: 0x84D4F4
extern char aWolMatchgamech[29];  // data: 0x84D550
extern char aWolMatchgamest[22];  // data: 0x84D048
extern char aWolMatchingser[30];  // data: 0x84D08C
extern char aWolMatchjoined[20];  // data: 0x84D53C
extern char aWolMatchoppone[22];  // data: 0x84D4DC
extern char aWolMatchoppone_0[29];  // data: 0x84D4BC
extern char aWolMatchtimeou[17];  // data: 0x84A5E4
extern char aWolMatchwaitin[24];  // data: 0x84D5B4
extern char aWolNomatchinga[25];  // data: 0x84D0AC
extern char aWolResolutionl[25];  // data: 0x84B860
extern char aWolResolutionl_0[25];  // data: 0x84B844
extern char aWolWdtterritor[21];  // data: 0x848F54
extern char aWrenchShp[11];  // data: 0x819404
extern char aWurl[5];  // data: 0x848CE0
extern char aXgrymed1[9];  // data: 0x82ADC0
extern char aXgrymed2[9];  // data: 0x82ADB4
extern char aXgrysml1[9];  // data: 0x82ADA8
extern char aYr1[4];  // data: 0x81FFC0
extern char aZoomingtarget[14];  // data: 0x848EF0
extern char aZotclot9[9];  // data: 0x84B698
extern unsigned char BSurface_Vtable[4];  // data: 0x7E2070
extern unsigned char DataGlobal_4F8390[38];  // data: 0x4F8390
extern unsigned char DataGlobal_4FA9E4[40];  // data: 0x4FA9E4
extern unsigned char DataGlobal_4FACBC[40];  // data: 0x4FACBC
extern unsigned char DataGlobal_4FACF8[40];  // data: 0x4FACF8
extern unsigned char DataGlobal_4FB688[40];  // data: 0x4FB688
extern unsigned char DataGlobal_4FB82C[15];  // data: 0x4FB82C
extern unsigned char DataGlobal_4FF6E8[15];  // data: 0x4FF6E8
extern unsigned char DataGlobal_500588[40];  // data: 0x500588
extern unsigned char DataGlobal_50062C[40];  // data: 0x50062C
extern unsigned char DataGlobal_500778[40];  // data: 0x500778
extern unsigned char DataGlobal_5092C0[38];  // data: 0x5092C0
extern unsigned char DataGlobal_50C134[38];  // data: 0x50C134
extern unsigned char DataGlobal_54F59C[29];  // data: 0x54F59C
extern unsigned char DataGlobal_572210[18];  // data: 0x572210
extern unsigned char DataGlobal_57790C[18];  // data: 0x57790C
extern unsigned char DataGlobal_57B950[23];  // data: 0x57B950
extern unsigned char DataGlobal_57B974[22];  // data: 0x57B974
extern unsigned char DataGlobal_57BA6C[15];  // data: 0x57BA6C
extern unsigned char DataGlobal_57BA88[14];  // data: 0x57BA88
extern unsigned char DataGlobal_57CB98[23];  // data: 0x57CB98
extern unsigned char DataGlobal_57CBBC[22];  // data: 0x57CBBC
extern unsigned char DataGlobal_57CCC0[15];  // data: 0x57CCC0
extern unsigned char DataGlobal_57CCDC[14];  // data: 0x57CCDC
extern unsigned char DataGlobal_57FBA4[23];  // data: 0x57FBA4
extern unsigned char DataGlobal_5800B8[15];  // data: 0x5800B8
extern unsigned char DataGlobal_5805E0[23];  // data: 0x5805E0
extern unsigned char DataGlobal_580B04[15];  // data: 0x580B04
extern unsigned char DataGlobal_660374[13];  // data: 0x660374
extern unsigned char DataGlobal_660394[13];  // data: 0x660394
extern unsigned char DataGlobal_6E3F08[98];  // data: 0x6E3F08
extern unsigned char DataGlobal_71F700[60];  // data: 0x71F700
extern unsigned char DataGlobal_71F744[50];  // data: 0x71F744
extern unsigned char DataGlobal_71F780[56];  // data: 0x71F780
extern unsigned char DataGlobal_71F7C0[54];  // data: 0x71F7C0
extern unsigned char DataGlobal_724414[246];  // data: 0x724414
extern unsigned char DataGlobal_7C80F2;  // data: 0x7C80F2
extern unsigned char DataGlobal_7C80F6[26];  // data: 0x7C80F6
extern unsigned char DataGlobal_7E1BCE;  // data: 0x7E1BCE
extern unsigned char DataGlobal_7E2B20[4];  // data: 0x7E2B20
extern unsigned char DataGlobal_7E36C0[4];  // data: 0x7E36C0
extern unsigned char DataGlobal_7E3914;  // data: 0x7E3914
extern unsigned char DataGlobal_7E7B28;  // data: 0x7E7B28
extern unsigned char DataGlobal_7E9500[12];  // data: 0x7E9500
extern unsigned char DataGlobal_7E9510[12];  // data: 0x7E9510
extern unsigned char DataGlobal_7E9540[12];  // data: 0x7E9540
extern unsigned char DataGlobal_7E9A30[12];  // data: 0x7E9A30
extern unsigned char DataGlobal_7E9A50[12];  // data: 0x7E9A50
extern unsigned char DataGlobal_7EA6E8[4];  // data: 0x7EA6E8
extern unsigned char DataGlobal_7EC450[4];  // data: 0x7EC450
extern unsigned char DataGlobal_7EC4C8;  // data: 0x7EC4C8
extern unsigned char DataGlobal_7EC4C9[4];  // data: 0x7EC4C9
extern unsigned char DataGlobal_7ED3C0[4];  // data: 0x7ED3C0
extern unsigned char DataGlobal_7ED3C8[4];  // data: 0x7ED3C8
extern unsigned char DataGlobal_7F09A4;  // data: 0x7F09A4
extern unsigned char DataGlobal_7F2A40;  // data: 0x7F2A40
extern unsigned char DataGlobal_7F4194;  // data: 0x7F4194
extern unsigned char DataGlobal_7F7540[12];  // data: 0x7F7540
extern unsigned char DataGlobal_7F7550[4];  // data: 0x7F7550
extern unsigned char DataGlobal_7F7560[12];  // data: 0x7F7560
extern unsigned char DataGlobal_7F7570[4];  // data: 0x7F7570
extern unsigned char DataGlobal_7F7580[12];  // data: 0x7F7580
extern unsigned char DataGlobal_7F7590[4];  // data: 0x7F7590
extern unsigned char DataGlobal_7F75E0[12];  // data: 0x7F75E0
extern unsigned char DataGlobal_7F75F0[12];  // data: 0x7F75F0
extern unsigned char DataGlobal_7F7600[12];  // data: 0x7F7600
extern unsigned char DataGlobal_7F7930;  // data: 0x7F7930
extern unsigned char DataGlobal_7F7C20[4];  // data: 0x7F7C20
extern unsigned char DataGlobal_7F7C30[12];  // data: 0x7F7C30
extern unsigned char DataGlobal_7F7C60[12];  // data: 0x7F7C60
extern unsigned char DataGlobal_7F7CA0[4];  // data: 0x7F7CA0
extern unsigned char DataGlobal_7F7CB0[4];  // data: 0x7F7CB0
extern unsigned char DataGlobal_7F7CD0[4];  // data: 0x7F7CD0
extern unsigned char DataGlobal_7F7D00[4];  // data: 0x7F7D00
extern unsigned char DataGlobal_7F7D10[4];  // data: 0x7F7D10
extern unsigned char DataGlobal_7F7D50[4];  // data: 0x7F7D50
extern unsigned char DataGlobal_7F8070[4];  // data: 0x7F8070
extern unsigned char DataGlobal_7F80B0[4];  // data: 0x7F80B0
extern unsigned char DataGlobal_7F8130[4];  // data: 0x7F8130
extern unsigned char DataGlobal_7F97CC;  // data: 0x7F97CC
extern unsigned char DataGlobal_7F97EC;  // data: 0x7F97EC
extern unsigned char DataGlobal_7F98E4[4];  // data: 0x7F98E4
extern unsigned char DataGlobal_7F9928[4];  // data: 0x7F9928
extern unsigned char DataGlobal_7F9948;  // data: 0x7F9948
extern unsigned char DataGlobal_7F995F;  // data: 0x7F995F
extern unsigned char DataGlobal_7FA2D4[4];  // data: 0x7FA2D4
extern unsigned char DataGlobal_7FA2D8[4];  // data: 0x7FA2D8
extern unsigned char DataGlobal_7FFFFF[4];  // data: 0x7FFFFF
extern unsigned char DataGlobal_800000[4];  // data: 0x800000
extern unsigned char DataGlobal_802100[4];  // data: 0x802100
extern unsigned char DataGlobal_807A68[4];  // data: 0x807A68
extern unsigned char DataGlobal_808080[4];  // data: 0x808080
extern unsigned char DataGlobal_80F038[4];  // data: 0x80F038
extern unsigned char DataGlobal_80F0D0[4];  // data: 0x80F0D0
extern unsigned char DataGlobal_815EA8[172];  // data: 0x815EA8
extern unsigned char DataGlobal_81622C[172];  // data: 0x81622C
extern unsigned char DataGlobal_81624C[140];  // data: 0x81624C
extern unsigned char DataGlobal_81626C[108];  // data: 0x81626C
extern unsigned char DataGlobal_816274[100];  // data: 0x816274
extern unsigned char DataGlobal_816280[88];  // data: 0x816280
extern unsigned char DataGlobal_8162C8[16];  // data: 0x8162C8
extern unsigned char DataGlobal_817244[64];  // data: 0x817244
extern unsigned char DataGlobal_81728C[4];  // data: 0x81728C
extern unsigned char DataGlobal_8172FC[64];  // data: 0x8172FC
extern unsigned char DataGlobal_81732C[16];  // data: 0x81732C
extern unsigned char DataGlobal_817348[64];  // data: 0x817348
extern unsigned char DataGlobal_817460[88];  // data: 0x817460
extern unsigned char DataGlobal_817830[164];  // data: 0x817830
extern unsigned char DataGlobal_817BB0[12];  // data: 0x817BB0
extern unsigned char DataGlobal_817F40[172];  // data: 0x817F40
extern unsigned char DataGlobal_817FD8[20];  // data: 0x817FD8
extern unsigned char DataGlobal_817FE4[8];  // data: 0x817FE4
extern unsigned char DataGlobal_817FF0[4];  // data: 0x817FF0
extern unsigned char DataGlobal_817FF8[4];  // data: 0x817FF8
extern unsigned char DataGlobal_818000[4];  // data: 0x818000
extern unsigned char DataGlobal_81800C[4];  // data: 0x81800C
extern unsigned char DataGlobal_818014[4];  // data: 0x818014
extern unsigned char DataGlobal_818020[4];  // data: 0x818020
extern unsigned char DataGlobal_818028[4];  // data: 0x818028
extern unsigned char DataGlobal_818034[4];  // data: 0x818034
extern unsigned char DataGlobal_81803C[4];  // data: 0x81803C
extern unsigned char DataGlobal_81804C[4];  // data: 0x81804C
extern unsigned char DataGlobal_818174[];  // data: 0x818174
extern unsigned char DataGlobal_8181B0[112];  // data: 0x8181B0
extern unsigned char DataGlobal_8183BC[4];  // data: 0x8183BC
extern unsigned char DataGlobal_8183E0[4];  // data: 0x8183E0
extern unsigned char DataGlobal_8183EC[4];  // data: 0x8183EC
extern unsigned char DataGlobal_8183F8[4];  // data: 0x8183F8
extern unsigned char DataGlobal_8184A8[4];  // data: 0x8184A8
extern unsigned char DataGlobal_8184B0[4];  // data: 0x8184B0
extern unsigned char DataGlobal_8184BC[4];  // data: 0x8184BC
extern unsigned char DataGlobal_818524[4];  // data: 0x818524
extern unsigned char DataGlobal_8185F4[4];  // data: 0x8185F4
extern unsigned char DataGlobal_818604[4];  // data: 0x818604
extern unsigned char DataGlobal_81864C[4];  // data: 0x81864C
extern unsigned char DataGlobal_818660[4];  // data: 0x818660
extern unsigned char DataGlobal_818858[4];  // data: 0x818858
extern unsigned char DataGlobal_81898C[172];  // data: 0x81898C
extern unsigned char DataGlobal_818994[164];  // data: 0x818994
extern unsigned char DataGlobal_818A5C[28];  // data: 0x818A5C
extern unsigned char DataGlobal_818C08[4];  // data: 0x818C08
extern unsigned char DataGlobal_818CB4;  // data: 0x818CB4
extern unsigned char DataGlobal_819088[4];  // data: 0x819088
extern unsigned char DataGlobal_81938C[88];  // data: 0x81938C
extern unsigned char DataGlobal_81AC50[88];  // data: 0x81AC50
extern unsigned char DataGlobal_81AE4C[88];  // data: 0x81AE4C
extern unsigned char DataGlobal_81AFD0[88];  // data: 0x81AFD0
extern unsigned char DataGlobal_81B02C[4];  // data: 0x81B02C
extern unsigned char DataGlobal_81B03C[4];  // data: 0x81B03C
extern unsigned char DataGlobal_81B04C[4];  // data: 0x81B04C
extern unsigned char DataGlobal_81B05C[4];  // data: 0x81B05C
extern unsigned char DataGlobal_81B064[4];  // data: 0x81B064
extern unsigned char DataGlobal_81B070[4];  // data: 0x81B070
extern unsigned char DataGlobal_81B078[4];  // data: 0x81B078
extern unsigned char DataGlobal_81B084[4];  // data: 0x81B084
extern unsigned char DataGlobal_81B08C[4];  // data: 0x81B08C
extern unsigned char DataGlobal_81B098[4];  // data: 0x81B098
extern unsigned char DataGlobal_81B09C[4];  // data: 0x81B09C
extern unsigned char DataGlobal_81B0A0[4];  // data: 0x81B0A0
extern unsigned char DataGlobal_81B0AC[4];  // data: 0x81B0AC
extern unsigned char DataGlobal_81B0B8[4];  // data: 0x81B0B8
extern unsigned char DataGlobal_81B0C0[4];  // data: 0x81B0C0
extern unsigned char DataGlobal_81B0CC[4];  // data: 0x81B0CC
extern unsigned char DataGlobal_81B0DC[4];  // data: 0x81B0DC
extern unsigned char DataGlobal_81B0E8[4];  // data: 0x81B0E8
extern unsigned char DataGlobal_81B0F4[4];  // data: 0x81B0F4
extern unsigned char DataGlobal_81B104[4];  // data: 0x81B104
extern unsigned char DataGlobal_81B118[4];  // data: 0x81B118
extern unsigned char DataGlobal_81B128[4];  // data: 0x81B128
extern unsigned char DataGlobal_81B130[4];  // data: 0x81B130
extern unsigned char DataGlobal_81B140[80];  // data: 0x81B140
extern unsigned char DataGlobal_81B1E8[20];  // data: 0x81B1E8
extern unsigned char DataGlobal_81B1FC[4];  // data: 0x81B1FC
extern unsigned char DataGlobal_81BB58[88];  // data: 0x81BB58
extern unsigned char DataGlobal_81BEBC[];  // data: 0x81BEBC
extern unsigned char DataGlobal_81C200[172];  // data: 0x81C200
extern unsigned char DataGlobal_81C2C4[172];  // data: 0x81C2C4
extern unsigned char DataGlobal_81C918[144];  // data: 0x81C918
extern unsigned char DataGlobal_81C920[136];  // data: 0x81C920
extern unsigned char DataGlobal_81C924[132];  // data: 0x81C924
extern unsigned char DataGlobal_81C928[128];  // data: 0x81C928
extern unsigned char DataGlobal_81C92C[124];  // data: 0x81C92C
extern unsigned char DataGlobal_81C930[120];  // data: 0x81C930
extern unsigned char DataGlobal_81C934[116];  // data: 0x81C934
extern unsigned char DataGlobal_81C938[112];  // data: 0x81C938
extern unsigned char DataGlobal_81C93C[108];  // data: 0x81C93C
extern unsigned char DataGlobal_81C940[104];  // data: 0x81C940
extern unsigned char DataGlobal_81C948[96];  // data: 0x81C948
extern unsigned char DataGlobal_81C94C[92];  // data: 0x81C94C
extern unsigned char DataGlobal_81C950[88];  // data: 0x81C950
extern unsigned char DataGlobal_81C954[84];  // data: 0x81C954
extern unsigned char DataGlobal_81C958[80];  // data: 0x81C958
extern unsigned char DataGlobal_81C95C[76];  // data: 0x81C95C
extern unsigned char DataGlobal_81C960[72];  // data: 0x81C960
extern unsigned char DataGlobal_81C968[64];  // data: 0x81C968
extern unsigned char DataGlobal_81C970[56];  // data: 0x81C970
extern unsigned char DataGlobal_81C974[52];  // data: 0x81C974
extern unsigned char DataGlobal_81C978[48];  // data: 0x81C978
extern unsigned char DataGlobal_81C97C[44];  // data: 0x81C97C
extern unsigned char DataGlobal_81C980[40];  // data: 0x81C980
extern unsigned char DataGlobal_81C984[36];  // data: 0x81C984
extern unsigned char DataGlobal_81C988[32];  // data: 0x81C988
extern unsigned char DataGlobal_81C990[24];  // data: 0x81C990
extern unsigned char DataGlobal_81C998[16];  // data: 0x81C998
extern unsigned char DataGlobal_81C99C[12];  // data: 0x81C99C
extern unsigned char DataGlobal_81C9A0[8];  // data: 0x81C9A0
extern unsigned char DataGlobal_81C9A4[4];  // data: 0x81C9A4
extern unsigned char DataGlobal_81CCE8[4];  // data: 0x81CCE8
extern unsigned char DataGlobal_81CD28;  // data: 0x81CD28
extern unsigned char DataGlobal_81DA20[4];  // data: 0x81DA20
extern unsigned char DataGlobal_81DA28[4];  // data: 0x81DA28
extern unsigned char DataGlobal_81DA58[4];  // data: 0x81DA58
extern unsigned char DataGlobal_81F0A8[172];  // data: 0x81F0A8
extern unsigned char DataGlobal_81F124[48];  // data: 0x81F124
extern unsigned char DataGlobal_81F12C[40];  // data: 0x81F12C
extern unsigned char DataGlobal_81F134[32];  // data: 0x81F134
extern unsigned char DataGlobal_81F13C[24];  // data: 0x81F13C
extern unsigned char DataGlobal_81F144[16];  // data: 0x81F144
extern unsigned char DataGlobal_81F14C[8];  // data: 0x81F14C
extern unsigned char DataGlobal_81F154[4];  // data: 0x81F154
extern unsigned char DataGlobal_81F15C[4];  // data: 0x81F15C
extern unsigned char DataGlobal_81F164[4];  // data: 0x81F164
extern unsigned char DataGlobal_81F16C[4];  // data: 0x81F16C
extern unsigned char DataGlobal_81F174[4];  // data: 0x81F174
extern unsigned char DataGlobal_81F17C[4];  // data: 0x81F17C
extern unsigned char DataGlobal_81F184[4];  // data: 0x81F184
extern unsigned char DataGlobal_81F194[4];  // data: 0x81F194
extern unsigned char DataGlobal_81F218[172];  // data: 0x81F218
extern unsigned char DataGlobal_81F3D0[4];  // data: 0x81F3D0
extern unsigned char DataGlobal_81F3E0[4];  // data: 0x81F3E0
extern unsigned char DataGlobal_81FC50[4];  // data: 0x81FC50
extern unsigned char DataGlobal_81FC6C;  // data: 0x81FC6C
extern unsigned char DataGlobal_81FCD0[88];  // data: 0x81FCD0
extern unsigned char DataGlobal_81FCD4[84];  // data: 0x81FCD4
extern unsigned char DataGlobal_81FCE0[72];  // data: 0x81FCE0
extern unsigned char DataGlobal_81FD0C[28];  // data: 0x81FD0C
extern unsigned char DataGlobal_81FD18[16];  // data: 0x81FD18
extern unsigned char DataGlobal_81FE6C[172];  // data: 0x81FE6C
extern unsigned char DataGlobal_81FFCC[172];  // data: 0x81FFCC
extern unsigned char DataGlobal_81FFF0[136];  // data: 0x81FFF0
extern unsigned char DataGlobal_81FFF4[132];  // data: 0x81FFF4
extern unsigned char DataGlobal_820000[120];  // data: 0x820000
extern unsigned char DataGlobal_82000C[108];  // data: 0x82000C
extern unsigned char DataGlobal_820018[96];  // data: 0x820018
extern unsigned char DataGlobal_820024[84];  // data: 0x820024
extern unsigned char DataGlobal_820030[72];  // data: 0x820030
extern unsigned char DataGlobal_82003C[60];  // data: 0x82003C
extern unsigned char DataGlobal_820048[48];  // data: 0x820048
extern unsigned char DataGlobal_820074[4];  // data: 0x820074
extern unsigned char DataGlobal_820270[4];  // data: 0x820270
extern unsigned char DataGlobal_820320[4];  // data: 0x820320
extern unsigned char DataGlobal_820524[36];  // data: 0x820524
extern unsigned char DataGlobal_820768[36];  // data: 0x820768
extern unsigned char DataGlobal_82083C[36];  // data: 0x82083C
extern unsigned char DataGlobal_82085C[4];  // data: 0x82085C
extern unsigned char DataGlobal_8208EC;  // data: 0x8208EC
extern unsigned char DataGlobal_820E60;  // data: 0x820E60
extern unsigned char DataGlobal_821F08[64];  // data: 0x821F08
extern unsigned char DataGlobal_822410[4];  // data: 0x822410
extern unsigned char DataGlobal_822730[28];  // data: 0x822730
extern unsigned char DataGlobal_822CF1;  // data: 0x822CF1
extern unsigned char DataGlobal_824238[88];  // data: 0x824238
extern unsigned char DataGlobal_824320[52];  // data: 0x824320
extern unsigned char DataGlobal_824324[48];  // data: 0x824324
extern unsigned char DataGlobal_824328[44];  // data: 0x824328
extern unsigned char DataGlobal_824370[172];  // data: 0x824370
extern unsigned char DataGlobal_824374[168];  // data: 0x824374
extern unsigned char DataGlobal_82437C[160];  // data: 0x82437C
extern unsigned char DataGlobal_824384[152];  // data: 0x824384
extern unsigned char DataGlobal_8243C8[84];  // data: 0x8243C8
extern unsigned char DataGlobal_8243EC[48];  // data: 0x8243EC
extern unsigned char DataGlobal_825430[88];  // data: 0x825430
extern unsigned char DataGlobal_825488[4];  // data: 0x825488
extern unsigned char DataGlobal_825494[4];  // data: 0x825494
extern unsigned char DataGlobal_82549C[4];  // data: 0x82549C
extern unsigned char DataGlobal_8254AC[4];  // data: 0x8254AC
extern unsigned char DataGlobal_825584[172];  // data: 0x825584
extern unsigned char DataGlobal_8257B8[88];  // data: 0x8257B8
extern unsigned char DataGlobal_8258AC[172];  // data: 0x8258AC
extern unsigned char DataGlobal_8258DC[124];  // data: 0x8258DC
extern unsigned char DataGlobal_82595C[4];  // data: 0x82595C
extern unsigned char DataGlobal_82596C[4];  // data: 0x82596C
extern unsigned char DataGlobal_825978[4];  // data: 0x825978
extern unsigned char DataGlobal_82597C[4];  // data: 0x82597C
extern unsigned char DataGlobal_825988[4];  // data: 0x825988
extern unsigned char DataGlobal_82599C[4];  // data: 0x82599C
extern unsigned char DataGlobal_8259A8[4];  // data: 0x8259A8
extern unsigned char DataGlobal_8259B4[4];  // data: 0x8259B4
extern unsigned char DataGlobal_8259BC[4];  // data: 0x8259BC
extern unsigned char DataGlobal_8259C8[4];  // data: 0x8259C8
extern unsigned char DataGlobal_8259D4[4];  // data: 0x8259D4
extern unsigned char DataGlobal_8259E0[4];  // data: 0x8259E0
extern unsigned char DataGlobal_8259F0[4];  // data: 0x8259F0
extern unsigned char DataGlobal_825A00[4];  // data: 0x825A00
extern unsigned char DataGlobal_825A0C[4];  // data: 0x825A0C
extern unsigned char DataGlobal_825A14[4];  // data: 0x825A14
extern unsigned char DataGlobal_825A20[4];  // data: 0x825A20
extern unsigned char DataGlobal_825A2C[16];  // data: 0x825A2C
extern unsigned char DataGlobal_825A3C[4];  // data: 0x825A3C
extern unsigned char DataGlobal_825A50[4];  // data: 0x825A50
extern unsigned char DataGlobal_825A60[4];  // data: 0x825A60
extern unsigned char DataGlobal_825BAC[172];  // data: 0x825BAC
extern unsigned char DataGlobal_825BB0[168];  // data: 0x825BB0
extern unsigned char DataGlobal_825BB4[164];  // data: 0x825BB4
extern unsigned char DataGlobal_825BB8[160];  // data: 0x825BB8
extern unsigned char DataGlobal_825BD4[132];  // data: 0x825BD4
extern unsigned char DataGlobal_825BD8[128];  // data: 0x825BD8
extern unsigned char DataGlobal_825BF8[96];  // data: 0x825BF8
extern unsigned char DataGlobal_825C2C[44];  // data: 0x825C2C
extern unsigned char DataGlobal_825CD0[4];  // data: 0x825CD0
extern unsigned char DataGlobal_826198[48];  // data: 0x826198
extern unsigned char DataGlobal_8261A8[32];  // data: 0x8261A8
extern unsigned char DataGlobal_826420[88];  // data: 0x826420
extern unsigned char DataGlobal_826438[64];  // data: 0x826438
extern unsigned char DataGlobal_826450[40];  // data: 0x826450
extern unsigned char DataGlobal_826598[172];  // data: 0x826598
extern unsigned char DataGlobal_82659C[168];  // data: 0x82659C
extern unsigned char DataGlobal_8265AC[152];  // data: 0x8265AC
extern unsigned char DataGlobal_8265B0[148];  // data: 0x8265B0
extern unsigned char DataGlobal_8265B4[144];  // data: 0x8265B4
extern unsigned char DataGlobal_8265B8[140];  // data: 0x8265B8
extern unsigned char DataGlobal_8265BC[136];  // data: 0x8265BC
extern unsigned char DataGlobal_8265C4[128];  // data: 0x8265C4
extern unsigned char DataGlobal_8265CC[120];  // data: 0x8265CC
extern unsigned char DataGlobal_8265D8[108];  // data: 0x8265D8
extern unsigned char DataGlobal_8265E0[100];  // data: 0x8265E0
extern unsigned char DataGlobal_8265E8[92];  // data: 0x8265E8
extern unsigned char DataGlobal_8265F0[84];  // data: 0x8265F0
extern unsigned char DataGlobal_826600[68];  // data: 0x826600
extern unsigned char DataGlobal_826614[48];  // data: 0x826614
extern unsigned char DataGlobal_826620[36];  // data: 0x826620
extern unsigned char DataGlobal_826844[4];  // data: 0x826844
extern unsigned char DataGlobal_826858[4];  // data: 0x826858
extern unsigned char DataGlobal_82690C[172];  // data: 0x82690C
extern unsigned char DataGlobal_826920[152];  // data: 0x826920
extern unsigned char DataGlobal_826940[120];  // data: 0x826940
extern unsigned char DataGlobal_826954[100];  // data: 0x826954
extern unsigned char DataGlobal_826960[88];  // data: 0x826960
extern unsigned char DataGlobal_82696C[76];  // data: 0x82696C
extern unsigned char DataGlobal_826F84[172];  // data: 0x826F84
extern unsigned char DataGlobal_826F94[156];  // data: 0x826F94
extern unsigned char DataGlobal_826FB0[128];  // data: 0x826FB0
extern unsigned char DataGlobal_826FC8[104];  // data: 0x826FC8
extern unsigned char DataGlobal_826FD8[88];  // data: 0x826FD8
extern unsigned char DataGlobal_826FFC[52];  // data: 0x826FFC
extern unsigned char DataGlobal_827014[28];  // data: 0x827014
extern unsigned char DataGlobal_827020[16];  // data: 0x827020
extern unsigned char DataGlobal_8270D8[172];  // data: 0x8270D8
extern unsigned char DataGlobal_8270E8[156];  // data: 0x8270E8
extern unsigned char DataGlobal_8270F8[140];  // data: 0x8270F8
extern unsigned char DataGlobal_827148[60];  // data: 0x827148
extern unsigned char DataGlobal_82715C[40];  // data: 0x82715C
extern unsigned char DataGlobal_8271A0[172];  // data: 0x8271A0
extern unsigned char DataGlobal_8271B0[156];  // data: 0x8271B0
extern unsigned char DataGlobal_8271C0[140];  // data: 0x8271C0
extern unsigned char DataGlobal_827204[72];  // data: 0x827204
extern unsigned char DataGlobal_827218[52];  // data: 0x827218
extern unsigned char DataGlobal_827224[40];  // data: 0x827224
extern unsigned char DataGlobal_827234[24];  // data: 0x827234
extern unsigned char DataGlobal_827240[12];  // data: 0x827240
extern unsigned char DataGlobal_827A48[172];  // data: 0x827A48
extern unsigned char DataGlobal_827A7C[120];  // data: 0x827A7C
extern unsigned char DataGlobal_827A88[108];  // data: 0x827A88
extern unsigned char DataGlobal_827A98[92];  // data: 0x827A98
extern unsigned char DataGlobal_827ADC[24];  // data: 0x827ADC
extern unsigned char DataGlobal_827AE8[12];  // data: 0x827AE8
extern unsigned char DataGlobal_827B88[56];  // data: 0x827B88
extern unsigned char DataGlobal_827DC8[4];  // data: 0x827DC8
extern unsigned char DataGlobal_827DD4[172];  // data: 0x827DD4
extern unsigned char DataGlobal_827DE4[156];  // data: 0x827DE4
extern unsigned char DataGlobal_827E0C[116];  // data: 0x827E0C
extern unsigned char DataGlobal_828144[172];  // data: 0x828144
extern unsigned char DataGlobal_828158[152];  // data: 0x828158
extern unsigned char DataGlobal_828924[4];  // data: 0x828924
extern unsigned char DataGlobal_829748[172];  // data: 0x829748
extern unsigned char DataGlobal_8298B8[48];  // data: 0x8298B8
extern unsigned char DataGlobal_8298C4[36];  // data: 0x8298C4
extern unsigned char DataGlobal_8298D0[24];  // data: 0x8298D0
extern unsigned char DataGlobal_829AE4;  // data: 0x829AE4
extern unsigned char DataGlobal_829EE8[172];  // data: 0x829EE8
extern unsigned char DataGlobal_82A044[160];  // data: 0x82A044
extern unsigned char DataGlobal_82A28C;  // data: 0x82A28C
extern unsigned char DataGlobal_82A2C4[172];  // data: 0x82A2C4
extern unsigned char DataGlobal_82AF78[4];  // data: 0x82AF78
extern unsigned char DataGlobal_82AF8C[40];  // data: 0x82AF8C
extern unsigned char DataGlobal_82AFF0[4];  // data: 0x82AFF0
extern unsigned char DataGlobal_82B004[40];  // data: 0x82B004
extern unsigned char DataGlobal_82BB30[160];  // data: 0x82BB30
extern unsigned char DataGlobal_82BB38[152];  // data: 0x82BB38
extern unsigned char DataGlobal_82BBD0[88];  // data: 0x82BBD0
extern unsigned char DataGlobal_82BC24[4];  // data: 0x82BC24
extern unsigned char DataGlobal_82BCAC[88];  // data: 0x82BCAC
extern unsigned char DataGlobal_82BCB8[76];  // data: 0x82BCB8
extern unsigned char DataGlobal_82BCC8[60];  // data: 0x82BCC8
extern unsigned char DataGlobal_82BCDC[40];  // data: 0x82BCDC
extern unsigned char DataGlobal_82BCEC[24];  // data: 0x82BCEC
extern unsigned char DataGlobal_82BDA4[88];  // data: 0x82BDA4
extern unsigned char DataGlobal_82BDB8[68];  // data: 0x82BDB8
extern unsigned char DataGlobal_82BDCC[48];  // data: 0x82BDCC
extern unsigned char DataGlobal_82BFAC[52];  // data: 0x82BFAC
extern unsigned char DataGlobal_82C090[172];  // data: 0x82C090
extern unsigned char DataGlobal_82C284[88];  // data: 0x82C284
extern unsigned char DataGlobal_82C28C[80];  // data: 0x82C28C
extern unsigned char DataGlobal_82C298[68];  // data: 0x82C298
extern unsigned char DataGlobal_82C2A4[56];  // data: 0x82C2A4
extern unsigned char DataGlobal_82C2B0[44];  // data: 0x82C2B0
extern unsigned char DataGlobal_82C2B8[36];  // data: 0x82C2B8
extern unsigned char DataGlobal_82D020[172];  // data: 0x82D020
extern unsigned char DataGlobal_82D02C[160];  // data: 0x82D02C
extern unsigned char DataGlobal_82D030[156];  // data: 0x82D030
extern unsigned char DataGlobal_82D034[152];  // data: 0x82D034
extern unsigned char DataGlobal_82D03C[144];  // data: 0x82D03C
extern unsigned char DataGlobal_82D040[140];  // data: 0x82D040
extern unsigned char DataGlobal_82DCB0[96];  // data: 0x82DCB0
extern unsigned char DataGlobal_82DCB8[88];  // data: 0x82DCB8
extern unsigned char DataGlobal_82DF04[72];  // data: 0x82DF04
extern unsigned char DataGlobal_82DF40[12];  // data: 0x82DF40
extern unsigned char DataGlobal_82E174[4];  // data: 0x82E174
extern unsigned char DataGlobal_8304AC[88];  // data: 0x8304AC
extern unsigned char DataGlobal_830620[90160];  // data: 0x830620
extern unsigned char DataGlobal_83079C[89780];  // data: 0x83079C
extern unsigned char DataGlobal_8308AC[89508];  // data: 0x8308AC
extern unsigned char DataGlobal_830BCC[88708];  // data: 0x830BCC
extern unsigned char DataGlobal_830BD8[88696];  // data: 0x830BD8
extern unsigned char DataGlobal_830BE4[88684];  // data: 0x830BE4
extern unsigned char DataGlobal_830BEC[88676];  // data: 0x830BEC
extern unsigned char DataGlobal_830BF4[88668];  // data: 0x830BF4
extern unsigned char DataGlobal_830C00[88656];  // data: 0x830C00
extern unsigned char DataGlobal_830C08[88648];  // data: 0x830C08
extern unsigned char DataGlobal_830CA8[88488];  // data: 0x830CA8
extern unsigned char DataGlobal_830CF4[88412];  // data: 0x830CF4
extern unsigned char DataGlobal_8311EC[87140];  // data: 0x8311EC
extern unsigned char DataGlobal_831398[86712];  // data: 0x831398
extern unsigned char DataGlobal_8313A4[86700];  // data: 0x8313A4
extern unsigned char DataGlobal_8313A8[86696];  // data: 0x8313A8
extern unsigned char DataGlobal_83156C[86244];  // data: 0x83156C
extern unsigned char DataGlobal_831580[86224];  // data: 0x831580
extern unsigned char DataGlobal_83159C[86196];  // data: 0x83159C
extern unsigned char DataGlobal_8315C0[86160];  // data: 0x8315C0
extern unsigned char DataGlobal_83168C[85956];  // data: 0x83168C
extern unsigned char DataGlobal_8316A8[85928];  // data: 0x8316A8
extern unsigned char DataGlobal_8316CC[85892];  // data: 0x8316CC
extern unsigned char DataGlobal_8316D0[85888];  // data: 0x8316D0
extern unsigned char DataGlobal_8316D4[85884];  // data: 0x8316D4
extern unsigned char DataGlobal_8316D8[85880];  // data: 0x8316D8
extern unsigned char DataGlobal_8316DC[85876];  // data: 0x8316DC
extern unsigned char DataGlobal_8316E0[85872];  // data: 0x8316E0
extern unsigned char DataGlobal_8316E4[85868];  // data: 0x8316E4
extern unsigned char DataGlobal_8316E8[85864];  // data: 0x8316E8
extern unsigned char DataGlobal_831704[85836];  // data: 0x831704
extern unsigned char DataGlobal_831708[85832];  // data: 0x831708
extern unsigned char DataGlobal_83170C[85828];  // data: 0x83170C
extern unsigned char DataGlobal_831710[85824];  // data: 0x831710
extern unsigned char DataGlobal_831714[85820];  // data: 0x831714
extern unsigned char DataGlobal_831718[85816];  // data: 0x831718
extern unsigned char DataGlobal_83171C[85812];  // data: 0x83171C
extern unsigned char DataGlobal_831774[85724];  // data: 0x831774
extern unsigned char DataGlobal_8317F4[85596];  // data: 0x8317F4
extern unsigned char DataGlobal_831898[85432];  // data: 0x831898
extern unsigned char DataGlobal_8318B8[85400];  // data: 0x8318B8
extern unsigned char DataGlobal_831A80[84944];  // data: 0x831A80
extern unsigned char DataGlobal_831A88[84936];  // data: 0x831A88
extern unsigned char DataGlobal_831C40[84496];  // data: 0x831C40
extern unsigned char DataGlobal_831CBC[84372];  // data: 0x831CBC
extern unsigned char DataGlobal_831CCC[84356];  // data: 0x831CCC
extern unsigned char DataGlobal_831D20[84272];  // data: 0x831D20
extern unsigned char DataGlobal_831D34[84252];  // data: 0x831D34
extern unsigned char DataGlobal_831D9C[84148];  // data: 0x831D9C
extern unsigned char DataGlobal_831DA4[84140];  // data: 0x831DA4
extern unsigned char DataGlobal_831DB4[84124];  // data: 0x831DB4
extern unsigned char DataGlobal_831DC4[84108];  // data: 0x831DC4
extern unsigned char DataGlobal_831DD0[84096];  // data: 0x831DD0
extern unsigned char DataGlobal_832678[81880];  // data: 0x832678
extern unsigned char DataGlobal_8327A0[81584];  // data: 0x8327A0
extern unsigned char DataGlobal_832A80[80848];  // data: 0x832A80
extern unsigned char DataGlobal_832A90[80832];  // data: 0x832A90
extern unsigned char DataGlobal_832A9C[80820];  // data: 0x832A9C
extern unsigned char DataGlobal_832AA8[80808];  // data: 0x832AA8
extern unsigned char DataGlobal_832AB4[80796];  // data: 0x832AB4
extern unsigned char DataGlobal_832AC4[80780];  // data: 0x832AC4
extern unsigned char DataGlobal_832AD8[80760];  // data: 0x832AD8
extern unsigned char DataGlobal_832AE0[80752];  // data: 0x832AE0
extern unsigned char DataGlobal_832AE4[80748];  // data: 0x832AE4
extern unsigned char DataGlobal_832AE8[80744];  // data: 0x832AE8
extern unsigned char DataGlobal_833260[32];  // data: 0x833260
extern unsigned char DataGlobal_8332A8[];  // data: 0x8332A8
extern unsigned char DataGlobal_8332CC[78724];  // data: 0x8332CC
extern unsigned char DataGlobal_833328[78632];  // data: 0x833328
extern unsigned char DataGlobal_8333BC[78484];  // data: 0x8333BC
extern unsigned char DataGlobal_8333C0[78480];  // data: 0x8333C0
extern unsigned char DataGlobal_8333D0[78464];  // data: 0x8333D0
extern unsigned char DataGlobal_8333E0[78448];  // data: 0x8333E0
extern unsigned char DataGlobal_8333F0[78432];  // data: 0x8333F0
extern unsigned char DataGlobal_8333F8[78424];  // data: 0x8333F8
extern unsigned char DataGlobal_833408[78408];  // data: 0x833408
extern unsigned char DataGlobal_833418[78392];  // data: 0x833418
extern unsigned char DataGlobal_833428[78376];  // data: 0x833428
extern unsigned char DataGlobal_833438[78360];  // data: 0x833438
extern unsigned char DataGlobal_833440[78352];  // data: 0x833440
extern unsigned char DataGlobal_833588[78024];  // data: 0x833588
extern unsigned char DataGlobal_833654[77820];  // data: 0x833654
extern unsigned char DataGlobal_833674[77788];  // data: 0x833674
extern unsigned char DataGlobal_833CEC[76132];  // data: 0x833CEC
extern unsigned char DataGlobal_8357A0[69296];  // data: 0x8357A0
extern unsigned char DataGlobal_835804[69196];  // data: 0x835804
extern unsigned char DataGlobal_835814[69180];  // data: 0x835814
extern unsigned char DataGlobal_83581C[69172];  // data: 0x83581C
extern unsigned char DataGlobal_83582C[69156];  // data: 0x83582C
extern unsigned char DataGlobal_835834[69148];  // data: 0x835834
extern unsigned char DataGlobal_835848[69128];  // data: 0x835848
extern unsigned char DataGlobal_83585C[69108];  // data: 0x83585C
extern unsigned char DataGlobal_835950[68864];  // data: 0x835950
extern unsigned char DataGlobal_8363F0[66144];  // data: 0x8363F0
extern unsigned char DataGlobal_8363FC[66132];  // data: 0x8363FC
extern unsigned char DataGlobal_83665C[65524];  // data: 0x83665C
extern unsigned char DataGlobal_8366A4[65452];  // data: 0x8366A4
extern unsigned char DataGlobal_8366C4[65420];  // data: 0x8366C4
extern unsigned char DataGlobal_836704[65356];  // data: 0x836704
extern unsigned char DataGlobal_836724[65324];  // data: 0x836724
extern unsigned char DataGlobal_836C50[64000];  // data: 0x836C50
extern unsigned char DataGlobal_836C6C[63972];  // data: 0x836C6C
extern unsigned char DataGlobal_836C80[63952];  // data: 0x836C80
extern unsigned char DataGlobal_836C9C[63924];  // data: 0x836C9C
extern unsigned char DataGlobal_836CB4[63900];  // data: 0x836CB4
extern unsigned char DataGlobal_836CD0[63872];  // data: 0x836CD0
extern unsigned char DataGlobal_836CF0[63840];  // data: 0x836CF0
extern unsigned char DataGlobal_836D0C[63812];  // data: 0x836D0C
extern unsigned char DataGlobal_836D9C[63668];  // data: 0x836D9C
extern unsigned char DataGlobal_836DA8[63656];  // data: 0x836DA8
extern unsigned char DataGlobal_836DB8[];  // data: 0x836DB8
extern unsigned char DataGlobal_836DF4[63580];  // data: 0x836DF4
extern unsigned char DataGlobal_836ED8[63352];  // data: 0x836ED8
extern unsigned char DataGlobal_837320[62256];  // data: 0x837320
extern unsigned char DataGlobal_8377DC[61044];  // data: 0x8377DC
extern unsigned char DataGlobal_8379D8[60536];  // data: 0x8379D8
extern unsigned char DataGlobal_8379E8[60520];  // data: 0x8379E8
extern unsigned char DataGlobal_837A30[60448];  // data: 0x837A30
extern unsigned char DataGlobal_8391A8[54440];  // data: 0x8391A8
extern unsigned char DataGlobal_8391CC[54404];  // data: 0x8391CC
extern unsigned char DataGlobal_8391F4[54364];  // data: 0x8391F4
extern unsigned char DataGlobal_8391F8[54360];  // data: 0x8391F8
extern unsigned char DataGlobal_8391FC[54356];  // data: 0x8391FC
extern unsigned char DataGlobal_839200[54352];  // data: 0x839200
extern unsigned char DataGlobal_83921C[54324];  // data: 0x83921C
extern unsigned char DataGlobal_839220[54320];  // data: 0x839220
extern unsigned char DataGlobal_83923C[54292];  // data: 0x83923C
extern unsigned char DataGlobal_839240[54288];  // data: 0x839240
extern unsigned char DataGlobal_83925C[54260];  // data: 0x83925C
extern unsigned char DataGlobal_839260[54256];  // data: 0x839260
extern unsigned char DataGlobal_8394E4[53612];  // data: 0x8394E4
extern unsigned char DataGlobal_8394E8[53608];  // data: 0x8394E8
extern unsigned char DataGlobal_839530[53536];  // data: 0x839530
extern unsigned char DataGlobal_839644[53260];  // data: 0x839644
extern unsigned char DataGlobal_839690[53184];  // data: 0x839690
extern unsigned char DataGlobal_839710[53056];  // data: 0x839710
extern unsigned char DataGlobal_839714[53052];  // data: 0x839714
extern unsigned char DataGlobal_839BBC[51860];  // data: 0x839BBC
extern unsigned char DataGlobal_839BE8[51816];  // data: 0x839BE8
extern unsigned char DataGlobal_839D10[];  // data: 0x839D10
extern unsigned char DataGlobal_839D50[51456];  // data: 0x839D50
extern unsigned char DataGlobal_839D58[51448];  // data: 0x839D58
extern unsigned char DataGlobal_839D68[51432];  // data: 0x839D68
extern unsigned char DataGlobal_839D98[51384];  // data: 0x839D98
extern unsigned char DataGlobal_839DB8[51352];  // data: 0x839DB8
extern unsigned char DataGlobal_839DC4[51340];  // data: 0x839DC4
extern unsigned char DataGlobal_839DCC[51332];  // data: 0x839DCC
extern unsigned char DataGlobal_839DDC[51316];  // data: 0x839DDC
extern unsigned char DataGlobal_839DEC[51300];  // data: 0x839DEC
extern unsigned char DataGlobal_839E08[51272];  // data: 0x839E08
extern unsigned char DataGlobal_839E18[51256];  // data: 0x839E18
extern unsigned char DataGlobal_839E28[51240];  // data: 0x839E28
extern unsigned char DataGlobal_839E34[51228];  // data: 0x839E34
extern unsigned char DataGlobal_839E44[51212];  // data: 0x839E44
extern unsigned char DataGlobal_839E50[51200];  // data: 0x839E50
extern unsigned char DataGlobal_839E5C[51188];  // data: 0x839E5C
extern unsigned char DataGlobal_839E64[51180];  // data: 0x839E64
extern unsigned char DataGlobal_839E70[51168];  // data: 0x839E70
extern unsigned char DataGlobal_83A0BC[50580];  // data: 0x83A0BC
extern unsigned char DataGlobal_83B344[45836];  // data: 0x83B344
extern unsigned char DataGlobal_83B358[45816];  // data: 0x83B358
extern unsigned char DataGlobal_83B370[45792];  // data: 0x83B370
extern unsigned char DataGlobal_83B384[45772];  // data: 0x83B384
extern unsigned char DataGlobal_83B39C[45748];  // data: 0x83B39C
extern unsigned char DataGlobal_83CC84[39372];  // data: 0x83CC84
extern unsigned char DataGlobal_83CC94[39356];  // data: 0x83CC94
extern unsigned char DataGlobal_83CF68[38632];  // data: 0x83CF68
extern unsigned char DataGlobal_83CFB4[38556];  // data: 0x83CFB4
extern unsigned char DataGlobal_83CFC8[38536];  // data: 0x83CFC8
extern unsigned char DataGlobal_83CFD8[38520];  // data: 0x83CFD8
extern unsigned char DataGlobal_83CFE8[38504];  // data: 0x83CFE8
extern unsigned char DataGlobal_83CFF8[38488];  // data: 0x83CFF8
extern unsigned char DataGlobal_83D010[38464];  // data: 0x83D010
extern unsigned char DataGlobal_83D018[38456];  // data: 0x83D018
extern unsigned char DataGlobal_83D020[38448];  // data: 0x83D020
extern unsigned char DataGlobal_83D02C[38436];  // data: 0x83D02C
extern unsigned char DataGlobal_83D040[38416];  // data: 0x83D040
extern unsigned char DataGlobal_83D04C[38404];  // data: 0x83D04C
extern unsigned char DataGlobal_83D05C[38388];  // data: 0x83D05C
extern unsigned char DataGlobal_83D078[38360];  // data: 0x83D078
extern unsigned char DataGlobal_83D088[38344];  // data: 0x83D088
extern unsigned char DataGlobal_83D098[38328];  // data: 0x83D098
extern unsigned char DataGlobal_83D0A4[38316];  // data: 0x83D0A4
extern unsigned char DataGlobal_83D4AC[37284];  // data: 0x83D4AC
extern unsigned char DataGlobal_83D4CC[37252];  // data: 0x83D4CC
extern unsigned char DataGlobal_83D4F0[37216];  // data: 0x83D4F0
extern unsigned char DataGlobal_83D4FC[];  // data: 0x83D4FC
extern unsigned char DataGlobal_83D50C[37188];  // data: 0x83D50C
extern unsigned char DataGlobal_83D518[37176];  // data: 0x83D518
extern unsigned char DataGlobal_83D528[37160];  // data: 0x83D528
extern unsigned char DataGlobal_83D53C[37140];  // data: 0x83D53C
extern unsigned char DataGlobal_83D54C[37124];  // data: 0x83D54C
extern unsigned char DataGlobal_83D554[37116];  // data: 0x83D554
extern unsigned char DataGlobal_83D560[37104];  // data: 0x83D560
extern unsigned char DataGlobal_83D598[37048];  // data: 0x83D598
extern unsigned char DataGlobal_83D5A8[37032];  // data: 0x83D5A8
extern unsigned char DataGlobal_83D5BC[37012];  // data: 0x83D5BC
extern unsigned char DataGlobal_83D658[36856];  // data: 0x83D658
extern unsigned char DataGlobal_83D65C[36852];  // data: 0x83D65C
extern unsigned char DataGlobal_83D834[36380];  // data: 0x83D834
extern unsigned char DataGlobal_83D868[36328];  // data: 0x83D868
extern unsigned char DataGlobal_83D888[36296];  // data: 0x83D888
extern unsigned char DataGlobal_83DA90[35776];  // data: 0x83DA90
extern unsigned char DataGlobal_83DB0C[35652];  // data: 0x83DB0C
extern unsigned char DataGlobal_83DB34[35612];  // data: 0x83DB34
extern unsigned char DataGlobal_83DC8C[35268];  // data: 0x83DC8C
extern unsigned char DataGlobal_83DE1C[34868];  // data: 0x83DE1C
extern unsigned char DataGlobal_83E188[33992];  // data: 0x83E188
extern unsigned char DataGlobal_83E1AC[33956];  // data: 0x83E1AC
extern unsigned char DataGlobal_83E6DC[32628];  // data: 0x83E6DC
extern unsigned char DataGlobal_83E76C[32484];  // data: 0x83E76C
extern unsigned char DataGlobal_83E790[32448];  // data: 0x83E790
extern unsigned char DataGlobal_83E7D0[32384];  // data: 0x83E7D0
extern unsigned char DataGlobal_83E7F4[32348];  // data: 0x83E7F4
extern unsigned char DataGlobal_83E81C[32308];  // data: 0x83E81C
extern unsigned char DataGlobal_83E83C[32276];  // data: 0x83E83C
extern unsigned char DataGlobal_83E878[32216];  // data: 0x83E878
extern unsigned char DataGlobal_83E88C[32196];  // data: 0x83E88C
extern unsigned char DataGlobal_83E8AC[32164];  // data: 0x83E8AC
extern unsigned char DataGlobal_83E8DC[32116];  // data: 0x83E8DC
extern unsigned char DataGlobal_83E8F8[32088];  // data: 0x83E8F8
extern unsigned char DataGlobal_83E9C8[31880];  // data: 0x83E9C8
extern unsigned char DataGlobal_83E9E4[31852];  // data: 0x83E9E4
extern unsigned char DataGlobal_83EA14[31804];  // data: 0x83EA14
extern unsigned char DataGlobal_83EA30[31776];  // data: 0x83EA30
extern unsigned char DataGlobal_83EA38[31768];  // data: 0x83EA38
extern unsigned char DataGlobal_83EA40[31760];  // data: 0x83EA40
extern unsigned char DataGlobal_83EA74[31708];  // data: 0x83EA74
extern unsigned char DataGlobal_83EA9C[31668];  // data: 0x83EA9C
extern unsigned char DataGlobal_83EAC4[31628];  // data: 0x83EAC4
extern unsigned char DataGlobal_83EAE0[31600];  // data: 0x83EAE0
extern unsigned char DataGlobal_83EB08[31560];  // data: 0x83EB08
extern unsigned char DataGlobal_83EB28[31528];  // data: 0x83EB28
extern unsigned char DataGlobal_83EB44[31500];  // data: 0x83EB44
extern unsigned char DataGlobal_83EB54[31484];  // data: 0x83EB54
extern unsigned char DataGlobal_83EB58[31480];  // data: 0x83EB58
extern unsigned char DataGlobal_83ECF4[31068];  // data: 0x83ECF4
extern unsigned char DataGlobal_83ECFC[31060];  // data: 0x83ECFC
extern unsigned char DataGlobal_83ED04[31052];  // data: 0x83ED04
extern unsigned char DataGlobal_83ED58[30968];  // data: 0x83ED58
extern unsigned char DataGlobal_83EEAC[30628];  // data: 0x83EEAC
extern unsigned char DataGlobal_83EF00[30544];  // data: 0x83EF00
extern unsigned char DataGlobal_83F110[16];  // data: 0x83F110
extern unsigned char DataGlobal_83F130[];  // data: 0x83F130
extern unsigned char DataGlobal_83F160[16];  // data: 0x83F160
extern unsigned char DataGlobal_83F170[];  // data: 0x83F170
extern unsigned char DataGlobal_83F190[29888];  // data: 0x83F190
extern unsigned char DataGlobal_83F318[29496];  // data: 0x83F318
extern unsigned char DataGlobal_83F328[29480];  // data: 0x83F328
extern unsigned char DataGlobal_83F490[29120];  // data: 0x83F490
extern unsigned char DataGlobal_83F4CC[29060];  // data: 0x83F4CC
extern unsigned char DataGlobal_83F4DC[29044];  // data: 0x83F4DC
extern unsigned char DataGlobal_83F4F0[29024];  // data: 0x83F4F0
extern unsigned char DataGlobal_83F4F4[29020];  // data: 0x83F4F4
extern unsigned char DataGlobal_83F504[29004];  // data: 0x83F504
extern unsigned char DataGlobal_83F50C[28996];  // data: 0x83F50C
extern unsigned char DataGlobal_83F520[28976];  // data: 0x83F520
extern unsigned char DataGlobal_83F668[28648];  // data: 0x83F668
extern unsigned char DataGlobal_83F674[28636];  // data: 0x83F674
extern unsigned char DataGlobal_83F870[28128];  // data: 0x83F870
extern unsigned char DataGlobal_83F92C[27940];  // data: 0x83F92C
extern unsigned char DataGlobal_83F938[27928];  // data: 0x83F938
extern unsigned char DataGlobal_83F944[27916];  // data: 0x83F944
extern unsigned char DataGlobal_83F950[27904];  // data: 0x83F950
extern unsigned char DataGlobal_83F95C[27892];  // data: 0x83F95C
extern unsigned char DataGlobal_83F968[27880];  // data: 0x83F968
extern unsigned char DataGlobal_83F974[27868];  // data: 0x83F974
extern unsigned char DataGlobal_83F980[27856];  // data: 0x83F980
extern unsigned char DataGlobal_83F98C[27844];  // data: 0x83F98C
extern unsigned char DataGlobal_83F998[27832];  // data: 0x83F998
extern unsigned char DataGlobal_83F9A4[27820];  // data: 0x83F9A4
extern unsigned char DataGlobal_83F9B0[27808];  // data: 0x83F9B0
extern unsigned char DataGlobal_83F9BC[27796];  // data: 0x83F9BC
extern unsigned char DataGlobal_83F9C8[27784];  // data: 0x83F9C8
extern unsigned char DataGlobal_83F9D4[27772];  // data: 0x83F9D4
extern unsigned char DataGlobal_83F9E0[27760];  // data: 0x83F9E0
extern unsigned char DataGlobal_83F9EC[27748];  // data: 0x83F9EC
extern unsigned char DataGlobal_83F9F8[27736];  // data: 0x83F9F8
extern unsigned char DataGlobal_83FA04[27724];  // data: 0x83FA04
extern unsigned char DataGlobal_83FA10[27712];  // data: 0x83FA10
extern unsigned char DataGlobal_83FA1C[27700];  // data: 0x83FA1C
extern unsigned char DataGlobal_83FA28[27688];  // data: 0x83FA28
extern unsigned char DataGlobal_83FA34[27676];  // data: 0x83FA34
extern unsigned char DataGlobal_83FA40[27664];  // data: 0x83FA40
extern unsigned char DataGlobal_83FA4C[27652];  // data: 0x83FA4C
extern unsigned char DataGlobal_83FA58[27640];  // data: 0x83FA58
extern unsigned char DataGlobal_83FA64[27628];  // data: 0x83FA64
extern unsigned char DataGlobal_83FB2C[27428];  // data: 0x83FB2C
extern unsigned char DataGlobal_83FB9C[27316];  // data: 0x83FB9C
extern unsigned char DataGlobal_83FBAC[27300];  // data: 0x83FBAC
extern unsigned char DataGlobal_83FBBC[27284];  // data: 0x83FBBC
extern unsigned char DataGlobal_83FC3C[27156];  // data: 0x83FC3C
extern unsigned char DataGlobal_83FF18[26424];  // data: 0x83FF18
extern unsigned char DataGlobal_83FF64[26348];  // data: 0x83FF64
extern unsigned char DataGlobal_83FFD8[26232];  // data: 0x83FFD8
extern unsigned char DataGlobal_83FFFC[26196];  // data: 0x83FFFC
extern unsigned char DataGlobal_840070[26080];  // data: 0x840070
extern unsigned char DataGlobal_840098[26040];  // data: 0x840098
extern unsigned char DataGlobal_84009C[26036];  // data: 0x84009C
extern unsigned char DataGlobal_8400A0[26032];  // data: 0x8400A0
extern unsigned char DataGlobal_8401C8[25736];  // data: 0x8401C8
extern unsigned char DataGlobal_84026C[25572];  // data: 0x84026C
extern unsigned char DataGlobal_84066C[24548];  // data: 0x84066C
extern unsigned char DataGlobal_840A70[23520];  // data: 0x840A70
extern unsigned char DataGlobal_840AE0[23408];  // data: 0x840AE0
extern unsigned char DataGlobal_840AE8[23400];  // data: 0x840AE8
extern unsigned char DataGlobal_840AF8[23384];  // data: 0x840AF8
extern unsigned char DataGlobal_840B08[23368];  // data: 0x840B08
extern unsigned char DataGlobal_840B24[23340];  // data: 0x840B24
extern unsigned char DataGlobal_840B2C[23332];  // data: 0x840B2C
extern unsigned char DataGlobal_840B70[23264];  // data: 0x840B70
extern unsigned char DataGlobal_840B80[23248];  // data: 0x840B80
extern unsigned char DataGlobal_840B98[23224];  // data: 0x840B98
extern unsigned char DataGlobal_840BB0[23200];  // data: 0x840BB0
extern unsigned char DataGlobal_841F34[18204];  // data: 0x841F34
extern unsigned char DataGlobal_841F38[18200];  // data: 0x841F38
extern unsigned char DataGlobal_841F3C[18196];  // data: 0x841F3C
extern unsigned char DataGlobal_842158[17656];  // data: 0x842158
extern unsigned char DataGlobal_842194[17596];  // data: 0x842194
extern unsigned char DataGlobal_8421A8[17576];  // data: 0x8421A8
extern unsigned char DataGlobal_8424EC[16740];  // data: 0x8424EC
extern unsigned char DataGlobal_8424FC[16724];  // data: 0x8424FC
extern unsigned char DataGlobal_8427CC[16004];  // data: 0x8427CC
extern unsigned char DataGlobal_8427D0[16000];  // data: 0x8427D0
extern unsigned char DataGlobal_842828[15912];  // data: 0x842828
extern unsigned char DataGlobal_842848[15880];  // data: 0x842848
extern unsigned char DataGlobal_842858[15864];  // data: 0x842858
extern unsigned char DataGlobal_842868[15848];  // data: 0x842868
extern unsigned char DataGlobal_842874[15836];  // data: 0x842874
extern unsigned char DataGlobal_842880[15824];  // data: 0x842880
extern unsigned char DataGlobal_84288C[15812];  // data: 0x84288C
extern unsigned char DataGlobal_842898[15800];  // data: 0x842898
extern unsigned char DataGlobal_8428AC[15780];  // data: 0x8428AC
extern unsigned char DataGlobal_8428B8[15768];  // data: 0x8428B8
extern unsigned char DataGlobal_8428C4[15756];  // data: 0x8428C4
extern unsigned char DataGlobal_8428D0[15744];  // data: 0x8428D0
extern unsigned char DataGlobal_8428DC[15732];  // data: 0x8428DC
extern unsigned char DataGlobal_8428EC[15716];  // data: 0x8428EC
extern unsigned char DataGlobal_842930[15648];  // data: 0x842930
extern unsigned char DataGlobal_842940[15632];  // data: 0x842940
extern unsigned char DataGlobal_842950[15616];  // data: 0x842950
extern unsigned char DataGlobal_842954[15612];  // data: 0x842954
extern unsigned char DataGlobal_842B94[15036];  // data: 0x842B94
extern unsigned char DataGlobal_842BAC[15012];  // data: 0x842BAC
extern unsigned char DataGlobal_842BC4[14988];  // data: 0x842BC4
extern unsigned char DataGlobal_842BDC[14964];  // data: 0x842BDC
extern unsigned char DataGlobal_842BF4[14940];  // data: 0x842BF4
extern unsigned char DataGlobal_842C3C[14868];  // data: 0x842C3C
extern unsigned char DataGlobal_842CCC[14724];  // data: 0x842CCC
extern unsigned char DataGlobal_842CD8[14712];  // data: 0x842CD8
extern unsigned char DataGlobal_843108[13640];  // data: 0x843108
extern unsigned char DataGlobal_84310C[13636];  // data: 0x84310C
extern unsigned char DataGlobal_84311C[13620];  // data: 0x84311C
extern unsigned char DataGlobal_843120[13616];  // data: 0x843120
extern unsigned char DataGlobal_843124[13612];  // data: 0x843124
extern unsigned char DataGlobal_84314C[13572];  // data: 0x84314C
extern unsigned char DataGlobal_844504[8524];  // data: 0x844504
extern unsigned char DataGlobal_844714[7996];  // data: 0x844714
extern unsigned char DataGlobal_844750[7936];  // data: 0x844750
extern unsigned char DataGlobal_8449F8[7256];  // data: 0x8449F8
extern unsigned char DataGlobal_844A60[7152];  // data: 0x844A60
extern unsigned char DataGlobal_844A98[7096];  // data: 0x844A98
extern unsigned char DataGlobal_844A9C[7092];  // data: 0x844A9C
extern unsigned char DataGlobal_844B9C[6836];  // data: 0x844B9C
extern unsigned char DataGlobal_844BA0[6832];  // data: 0x844BA0
extern unsigned char DataGlobal_844BA4[6828];  // data: 0x844BA4
extern unsigned char DataGlobal_844BA8[6824];  // data: 0x844BA8
extern unsigned char DataGlobal_844BAC[6820];  // data: 0x844BAC
extern unsigned char DataGlobal_844BB0[6816];  // data: 0x844BB0
extern unsigned char DataGlobal_844BB4[6812];  // data: 0x844BB4
extern unsigned char DataGlobal_844BB8[6808];  // data: 0x844BB8
extern unsigned char DataGlobal_844BBC[6804];  // data: 0x844BBC
extern unsigned char DataGlobal_844BC8[6792];  // data: 0x844BC8
extern unsigned char DataGlobal_844BCC[6788];  // data: 0x844BCC
extern unsigned char DataGlobal_844BD0[6784];  // data: 0x844BD0
extern unsigned char DataGlobal_844BD4[6780];  // data: 0x844BD4
extern unsigned char DataGlobal_844BD8[6776];  // data: 0x844BD8
extern unsigned char DataGlobal_844BDC[6772];  // data: 0x844BDC
extern unsigned char DataGlobal_844BE0[6768];  // data: 0x844BE0
extern unsigned char DataGlobal_844BE4[6764];  // data: 0x844BE4
extern unsigned char DataGlobal_844BE8[6760];  // data: 0x844BE8
extern unsigned char DataGlobal_844BEC[6756];  // data: 0x844BEC
extern unsigned char DataGlobal_844BF0[6752];  // data: 0x844BF0
extern unsigned char DataGlobal_844BF4[6748];  // data: 0x844BF4
extern unsigned char DataGlobal_844BF8[6744];  // data: 0x844BF8
extern unsigned char DataGlobal_844BFC[6740];  // data: 0x844BFC
extern unsigned char DataGlobal_844C00[6736];  // data: 0x844C00
extern unsigned char DataGlobal_844C04[6732];  // data: 0x844C04
extern unsigned char DataGlobal_844C08[6728];  // data: 0x844C08
extern unsigned char DataGlobal_844C44[6668];  // data: 0x844C44
extern unsigned char DataGlobal_844C48[6664];  // data: 0x844C48
extern unsigned char DataGlobal_844C4C[6660];  // data: 0x844C4C
extern unsigned char DataGlobal_844C50[6656];  // data: 0x844C50
extern unsigned char DataGlobal_844C54[6652];  // data: 0x844C54
extern unsigned char DataGlobal_844C58[6648];  // data: 0x844C58
extern unsigned char DataGlobal_844C5C[6644];  // data: 0x844C5C
extern unsigned char DataGlobal_844C60[6640];  // data: 0x844C60
extern unsigned char DataGlobal_844C64[6636];  // data: 0x844C64
extern unsigned char DataGlobal_844C68[6632];  // data: 0x844C68
extern unsigned char DataGlobal_844C6C[6628];  // data: 0x844C6C
extern unsigned char DataGlobal_844C70[6624];  // data: 0x844C70
extern unsigned char DataGlobal_844C74[6620];  // data: 0x844C74
extern unsigned char DataGlobal_844C78[6616];  // data: 0x844C78
extern unsigned char DataGlobal_844C7C[6612];  // data: 0x844C7C
extern unsigned char DataGlobal_844C80[6608];  // data: 0x844C80
extern unsigned char DataGlobal_844C84[6604];  // data: 0x844C84
extern unsigned char DataGlobal_844C88[6600];  // data: 0x844C88
extern unsigned char DataGlobal_844C8C[6596];  // data: 0x844C8C
extern unsigned char DataGlobal_844C90[6592];  // data: 0x844C90
extern unsigned char DataGlobal_844C94[6588];  // data: 0x844C94
extern unsigned char DataGlobal_844C98[6584];  // data: 0x844C98
extern unsigned char DataGlobal_844C9C[6580];  // data: 0x844C9C
extern unsigned char DataGlobal_844CA0[6576];  // data: 0x844CA0
extern unsigned char DataGlobal_844CA4[6572];  // data: 0x844CA4
extern unsigned char DataGlobal_844CA8[6568];  // data: 0x844CA8
extern unsigned char DataGlobal_844CAC[6564];  // data: 0x844CAC
extern unsigned char DataGlobal_844CB0[6560];  // data: 0x844CB0
extern unsigned char DataGlobal_844CB4[6556];  // data: 0x844CB4
extern unsigned char DataGlobal_844CB8[6552];  // data: 0x844CB8
extern unsigned char DataGlobal_844CC4[6540];  // data: 0x844CC4
extern unsigned char DataGlobal_844CC8[6536];  // data: 0x844CC8
extern unsigned char DataGlobal_844CCC[6532];  // data: 0x844CCC
extern unsigned char DataGlobal_844CD0[6528];  // data: 0x844CD0
extern unsigned char DataGlobal_844CD4[6524];  // data: 0x844CD4
extern unsigned char DataGlobal_844CD8[6520];  // data: 0x844CD8
extern unsigned char DataGlobal_844CDC[6516];  // data: 0x844CDC
extern unsigned char DataGlobal_844CE0[6512];  // data: 0x844CE0
extern unsigned char DataGlobal_844CE4[6508];  // data: 0x844CE4
extern unsigned char DataGlobal_844CE8[6504];  // data: 0x844CE8
extern unsigned char DataGlobal_844CEC[6500];  // data: 0x844CEC
extern unsigned char DataGlobal_844CF0[6496];  // data: 0x844CF0
extern unsigned char DataGlobal_844CF4[6492];  // data: 0x844CF4
extern unsigned char DataGlobal_844CF8[6488];  // data: 0x844CF8
extern unsigned char DataGlobal_844CFC[6484];  // data: 0x844CFC
extern unsigned char DataGlobal_844D00[6480];  // data: 0x844D00
extern unsigned char DataGlobal_844D04[6476];  // data: 0x844D04
extern unsigned char DataGlobal_844D08[6472];  // data: 0x844D08
extern unsigned char DataGlobal_844D0C[6468];  // data: 0x844D0C
extern unsigned char DataGlobal_844D10[6464];  // data: 0x844D10
extern unsigned char DataGlobal_844D14[6460];  // data: 0x844D14
extern unsigned char DataGlobal_844D18[6456];  // data: 0x844D18
extern unsigned char DataGlobal_844D1C[6452];  // data: 0x844D1C
extern unsigned char DataGlobal_844D20[6448];  // data: 0x844D20
extern unsigned char DataGlobal_844D24[6444];  // data: 0x844D24
extern unsigned char DataGlobal_844D28[6440];  // data: 0x844D28
extern unsigned char DataGlobal_844D2C[6436];  // data: 0x844D2C
extern unsigned char DataGlobal_844D30[6432];  // data: 0x844D30
extern unsigned char DataGlobal_844D34[6428];  // data: 0x844D34
extern unsigned char DataGlobal_844D38[6424];  // data: 0x844D38
extern unsigned char DataGlobal_844D3C[6420];  // data: 0x844D3C
extern unsigned char DataGlobal_844D40[6416];  // data: 0x844D40
extern unsigned char DataGlobal_844D44[6412];  // data: 0x844D44
extern unsigned char DataGlobal_844D48[6408];  // data: 0x844D48
extern unsigned char DataGlobal_844D4C[6404];  // data: 0x844D4C
extern unsigned char DataGlobal_844D50[6400];  // data: 0x844D50
extern unsigned char DataGlobal_844D54[6396];  // data: 0x844D54
extern unsigned char DataGlobal_844D58[6392];  // data: 0x844D58
extern unsigned char DataGlobal_844D5C[6388];  // data: 0x844D5C
extern unsigned char DataGlobal_844D60[6384];  // data: 0x844D60
extern unsigned char DataGlobal_844D64[6380];  // data: 0x844D64
extern unsigned char DataGlobal_844D68[6376];  // data: 0x844D68
extern unsigned char DataGlobal_844D6C[6372];  // data: 0x844D6C
extern unsigned char DataGlobal_844D70[6368];  // data: 0x844D70
extern unsigned char DataGlobal_844D74[6364];  // data: 0x844D74
extern unsigned char DataGlobal_844D78[6360];  // data: 0x844D78
extern unsigned char DataGlobal_844D7C[6356];  // data: 0x844D7C
extern unsigned char DataGlobal_844D80[6352];  // data: 0x844D80
extern unsigned char DataGlobal_844D84[6348];  // data: 0x844D84
extern unsigned char DataGlobal_844D88[6344];  // data: 0x844D88
extern unsigned char DataGlobal_844D8C[6340];  // data: 0x844D8C
extern unsigned char DataGlobal_844D90[6336];  // data: 0x844D90
extern unsigned char DataGlobal_844D94[6332];  // data: 0x844D94
extern unsigned char DataGlobal_844D98[6328];  // data: 0x844D98
extern unsigned char DataGlobal_844D9C[6324];  // data: 0x844D9C
extern unsigned char DataGlobal_844DA0[6320];  // data: 0x844DA0
extern unsigned char DataGlobal_844DA4[6316];  // data: 0x844DA4
extern unsigned char DataGlobal_844DA8[6312];  // data: 0x844DA8
extern unsigned char DataGlobal_844DAC[6308];  // data: 0x844DAC
extern unsigned char DataGlobal_844DB0[6304];  // data: 0x844DB0
extern unsigned char DataGlobal_844DB4[6300];  // data: 0x844DB4
extern unsigned char DataGlobal_844DB8[6296];  // data: 0x844DB8
extern unsigned char DataGlobal_844DBC[6292];  // data: 0x844DBC
extern unsigned char DataGlobal_844DC0[6288];  // data: 0x844DC0
extern unsigned char DataGlobal_844DC4[6284];  // data: 0x844DC4
extern unsigned char DataGlobal_844DC8[6280];  // data: 0x844DC8
extern unsigned char DataGlobal_845530[4384];  // data: 0x845530
extern unsigned char DataGlobal_845540[4368];  // data: 0x845540
extern unsigned char DataGlobal_845550[4352];  // data: 0x845550
extern unsigned char DataGlobal_845554[4348];  // data: 0x845554
extern unsigned char DataGlobal_845558[4344];  // data: 0x845558
extern unsigned char DataGlobal_84555C[4340];  // data: 0x84555C
extern unsigned char DataGlobal_845568[4328];  // data: 0x845568
extern unsigned char DataGlobal_8458B0[3488];  // data: 0x8458B0
extern unsigned char DataGlobal_84599C[3252];  // data: 0x84599C
extern unsigned char DataGlobal_8459AC[3236];  // data: 0x8459AC
extern unsigned char DataGlobal_8459BC[3220];  // data: 0x8459BC
extern unsigned char DataGlobal_8459D4[3196];  // data: 0x8459D4
extern unsigned char DataGlobal_8459E8[3176];  // data: 0x8459E8
extern unsigned char DataGlobal_845A00[3152];  // data: 0x845A00
extern unsigned char DataGlobal_845A18[3128];  // data: 0x845A18
extern unsigned char DataGlobal_845A2C[3108];  // data: 0x845A2C
extern unsigned char DataGlobal_845A40[3088];  // data: 0x845A40
extern unsigned char DataGlobal_845A58[3064];  // data: 0x845A58
extern unsigned char DataGlobal_845A6C[3044];  // data: 0x845A6C
extern unsigned char DataGlobal_845A7C[3028];  // data: 0x845A7C
extern unsigned char DataGlobal_845A8C[3012];  // data: 0x845A8C
extern unsigned char DataGlobal_845AAC[2980];  // data: 0x845AAC
extern unsigned char DataGlobal_845AC8[2952];  // data: 0x845AC8
extern unsigned char DataGlobal_845ADC[2932];  // data: 0x845ADC
extern unsigned char DataGlobal_845AF0[2912];  // data: 0x845AF0
extern unsigned char DataGlobal_845B08[2888];  // data: 0x845B08
extern unsigned char DataGlobal_845B20[2864];  // data: 0x845B20
extern unsigned char DataGlobal_845B38[2840];  // data: 0x845B38
extern unsigned char DataGlobal_845B50[2816];  // data: 0x845B50
extern unsigned char DataGlobal_845B64[2796];  // data: 0x845B64
extern unsigned char DataGlobal_845B78[2776];  // data: 0x845B78
extern unsigned char DataGlobal_845B8C[2756];  // data: 0x845B8C
extern unsigned char DataGlobal_845BA0[2736];  // data: 0x845BA0
extern unsigned char DataGlobal_845BB4[2716];  // data: 0x845BB4
extern unsigned char DataGlobal_845BC8[2696];  // data: 0x845BC8
extern unsigned char DataGlobal_845BDC[2676];  // data: 0x845BDC
extern unsigned char DataGlobal_845BF0[2656];  // data: 0x845BF0
extern unsigned char DataGlobal_845C04[2636];  // data: 0x845C04
extern unsigned char DataGlobal_845C14[2620];  // data: 0x845C14
extern unsigned char DataGlobal_845C2C[2596];  // data: 0x845C2C
extern unsigned char DataGlobal_845C44[2572];  // data: 0x845C44
extern unsigned char DataGlobal_845C58[2552];  // data: 0x845C58
extern unsigned char DataGlobal_845C6C[2532];  // data: 0x845C6C
extern unsigned char DataGlobal_845C80[2512];  // data: 0x845C80
extern unsigned char DataGlobal_845C94[2492];  // data: 0x845C94
extern unsigned char DataGlobal_845CA0[2480];  // data: 0x845CA0
extern unsigned char DataGlobal_845CB0[2464];  // data: 0x845CB0
extern unsigned char DataGlobal_845CC4[2444];  // data: 0x845CC4
extern unsigned char DataGlobal_845CD4[2428];  // data: 0x845CD4
extern unsigned char DataGlobal_845CE4[2412];  // data: 0x845CE4
extern unsigned char DataGlobal_845CF8[2392];  // data: 0x845CF8
extern unsigned char DataGlobal_845D08[2376];  // data: 0x845D08
extern unsigned char DataGlobal_845D18[2360];  // data: 0x845D18
extern unsigned char DataGlobal_845D20[2352];  // data: 0x845D20
extern unsigned char DataGlobal_845D30[2336];  // data: 0x845D30
extern unsigned char DataGlobal_845D3C[2324];  // data: 0x845D3C
extern unsigned char DataGlobal_845D4C[2308];  // data: 0x845D4C
extern unsigned char DataGlobal_845D58[2296];  // data: 0x845D58
extern unsigned char DataGlobal_845D64[2284];  // data: 0x845D64
extern unsigned char DataGlobal_845D7C[2260];  // data: 0x845D7C
extern unsigned char DataGlobal_845D84[2252];  // data: 0x845D84
extern unsigned char DataGlobal_845D94[2236];  // data: 0x845D94
extern unsigned char DataGlobal_845DA0[2224];  // data: 0x845DA0
extern unsigned char DataGlobal_845DB0[2208];  // data: 0x845DB0
extern unsigned char DataGlobal_845DC8[2184];  // data: 0x845DC8
extern unsigned char DataGlobal_845DE0[2160];  // data: 0x845DE0
extern unsigned char DataGlobal_845DF0[2144];  // data: 0x845DF0
extern unsigned char DataGlobal_845DFC[2132];  // data: 0x845DFC
extern unsigned char DataGlobal_845E10[2112];  // data: 0x845E10
extern unsigned char DataGlobal_845E20[2096];  // data: 0x845E20
extern unsigned char DataGlobal_846118[1336];  // data: 0x846118
extern unsigned char DataGlobal_846140[1296];  // data: 0x846140
extern unsigned char DataGlobal_846144[1292];  // data: 0x846144
extern unsigned char DataGlobal_846150[1280];  // data: 0x846150
extern unsigned char DataGlobal_846154[1276];  // data: 0x846154
extern unsigned char DataGlobal_846158[1272];  // data: 0x846158
extern unsigned char DataGlobal_846358[760];  // data: 0x846358
extern unsigned char DataGlobal_846368[744];  // data: 0x846368
extern unsigned char DataGlobal_846374[732];  // data: 0x846374
extern unsigned char DataGlobal_8463B8[664];  // data: 0x8463B8
extern unsigned char DataGlobal_8464B0[416];  // data: 0x8464B0
extern unsigned char DataGlobal_8464B4[412];  // data: 0x8464B4
extern unsigned char DataGlobal_8464B8[408];  // data: 0x8464B8
extern unsigned char DataGlobal_8464BC[404];  // data: 0x8464BC
extern unsigned char DataGlobal_8464C0[400];  // data: 0x8464C0
extern unsigned char DataGlobal_8464C4[396];  // data: 0x8464C4
extern unsigned char DataGlobal_846598[184];  // data: 0x846598
extern unsigned char DataGlobal_84660C[68];  // data: 0x84660C
extern unsigned char DataGlobal_846610[64];  // data: 0x846610
extern unsigned char DataGlobal_846614[60];  // data: 0x846614
extern unsigned char DataGlobal_84667C[4];  // data: 0x84667C
extern unsigned char DataGlobal_846688[4];  // data: 0x846688
extern unsigned char DataGlobal_846698[172];  // data: 0x846698
extern unsigned char DataGlobal_8466B0[148];  // data: 0x8466B0
extern unsigned char DataGlobal_8466C8[124];  // data: 0x8466C8
extern unsigned char DataGlobal_8466E0[100];  // data: 0x8466E0
extern unsigned char DataGlobal_8466F8[76];  // data: 0x8466F8
extern unsigned char DataGlobal_846710[52];  // data: 0x846710
extern unsigned char DataGlobal_846728[28];  // data: 0x846728
extern unsigned char DataGlobal_846740[4];  // data: 0x846740
extern unsigned char DataGlobal_8467FC[24];  // data: 0x8467FC
extern unsigned int DataGlobal_848628[];  // data: 0x848628 (MapSize lookup table: index 4*byte+byte)
extern unsigned char DataGlobal_8487BC;  // data: 0x8487BC
extern unsigned char DataGlobal_8487BD;  // data: 0x8487BD
extern unsigned char DataGlobal_8489C0[88];  // data: 0x8489C0
extern unsigned char DataGlobal_848BDC[88];  // data: 0x848BDC
extern unsigned char DataGlobal_848BE4[80];  // data: 0x848BE4
extern unsigned char DataGlobal_849174[88];  // data: 0x849174
extern unsigned char DataGlobal_8491A0[44];  // data: 0x8491A0
extern unsigned char DataGlobal_8491AC[32];  // data: 0x8491AC
extern unsigned char DataGlobal_8491B4[24];  // data: 0x8491B4
extern unsigned char DataGlobal_8491BC[16];  // data: 0x8491BC
extern unsigned char DataGlobal_8491C4[8];  // data: 0x8491C4
extern unsigned char DataGlobal_84962C[36];  // data: 0x84962C
extern unsigned char DataGlobal_84968C[88];  // data: 0x84968C
extern unsigned char DataGlobal_8496B8[44];  // data: 0x8496B8
extern unsigned char DataGlobal_8496C4[32];  // data: 0x8496C4
extern unsigned char DataGlobal_849E64[88];  // data: 0x849E64
extern unsigned char DataGlobal_849E70[76];  // data: 0x849E70
extern unsigned char DataGlobal_849E94[40];  // data: 0x849E94
extern unsigned char DataGlobal_849F20[172];  // data: 0x849F20
extern unsigned char DataGlobal_849F58[116];  // data: 0x849F58
extern unsigned char DataGlobal_849F9C[48];  // data: 0x849F9C
extern unsigned char DataGlobal_849FA8[36];  // data: 0x849FA8
extern unsigned char DataGlobal_849FB4[24];  // data: 0x849FB4
extern unsigned char DataGlobal_849FBC[16];  // data: 0x849FBC
extern unsigned char DataGlobal_849FC4[8];  // data: 0x849FC4
extern unsigned char DataGlobal_849FCC[4];  // data: 0x849FCC
extern unsigned char DataGlobal_84A11C[64];  // data: 0x84A11C
extern unsigned char DataGlobal_84A12C[48];  // data: 0x84A12C
extern unsigned char DataGlobal_84A14C[16];  // data: 0x84A14C
extern unsigned char DataGlobal_84A1B8;  // data: 0x84A1B8
extern unsigned char DataGlobal_84A210;  // data: 0x84A210
extern unsigned char DataGlobal_84A4C4[88];  // data: 0x84A4C4
extern unsigned char DataGlobal_84A4D0[76];  // data: 0x84A4D0
extern unsigned char DataGlobal_84A4E0[60];  // data: 0x84A4E0
extern unsigned char DataGlobal_84A4F0[44];  // data: 0x84A4F0
extern unsigned char DataGlobal_84A500[28];  // data: 0x84A500
extern unsigned char DataGlobal_84A508[20];  // data: 0x84A508
extern unsigned char DataGlobal_84A514[8];  // data: 0x84A514
extern unsigned char DataGlobal_84A520[4];  // data: 0x84A520
extern unsigned char DataGlobal_84A534[56];  // data: 0x84A534
extern unsigned char DataGlobal_84A684[88];  // data: 0x84A684
extern unsigned char DataGlobal_84A69C[64];  // data: 0x84A69C
extern unsigned char DataGlobal_84A6A4[56];  // data: 0x84A6A4
extern unsigned char DataGlobal_84ABE4[172];  // data: 0x84ABE4
extern unsigned char DataGlobal_84ABEC[164];  // data: 0x84ABEC
extern unsigned char DataGlobal_84AC00[144];  // data: 0x84AC00
extern unsigned char DataGlobal_84AC14[124];  // data: 0x84AC14
extern unsigned char DataGlobal_84AC20[112];  // data: 0x84AC20
extern unsigned char DataGlobal_84AC2C[100];  // data: 0x84AC2C
extern unsigned char DataGlobal_84AC44[76];  // data: 0x84AC44
extern unsigned char DataGlobal_84AC54[60];  // data: 0x84AC54
extern unsigned char DataGlobal_84AC68[40];  // data: 0x84AC68
extern unsigned char DataGlobal_84AC78[24];  // data: 0x84AC78
extern unsigned char DataGlobal_84AE48[40];  // data: 0x84AE48
extern unsigned char DataGlobal_84B120[172];  // data: 0x84B120
extern unsigned char DataGlobal_84B128[164];  // data: 0x84B128
extern unsigned char DataGlobal_84B15C[112];  // data: 0x84B15C
extern unsigned char DataGlobal_84B448[172];  // data: 0x84B448
extern unsigned char DataGlobal_84B484[112];  // data: 0x84B484
extern unsigned char DataGlobal_84B4C4[48];  // data: 0x84B4C4
extern unsigned char DataGlobal_84B608[64];  // data: 0x84B608
extern unsigned char DataGlobal_84B614[52];  // data: 0x84B614
extern unsigned char DataGlobal_84B61C[44];  // data: 0x84B61C
extern unsigned char DataGlobal_84B62C[28];  // data: 0x84B62C
extern unsigned char DataGlobal_84B740[172];  // data: 0x84B740
extern unsigned char DataGlobal_84B77C[112];  // data: 0x84B77C
extern unsigned char DataGlobal_84B794[88];  // data: 0x84B794
extern unsigned char DataGlobal_84B7AC[64];  // data: 0x84B7AC
extern unsigned char DataGlobal_84B7B4[56];  // data: 0x84B7B4
extern unsigned char DataGlobal_84B7D8[20];  // data: 0x84B7D8
extern unsigned char DataGlobal_84B8E0[172];  // data: 0x84B8E0
extern unsigned char DataGlobal_84BBE0[172];  // data: 0x84BBE0
extern unsigned char DataGlobal_84D170[88];  // data: 0x84D170
extern unsigned char DataGlobal_84D178[80];  // data: 0x84D178
extern unsigned char DataGlobal_84D180[72];  // data: 0x84D180
extern unsigned char DataGlobal_84D188[64];  // data: 0x84D188
extern unsigned char DataGlobal_84D190[56];  // data: 0x84D190
extern unsigned char DataGlobal_84D198[48];  // data: 0x84D198
extern unsigned char DataGlobal_84D1A0[40];  // data: 0x84D1A0
extern unsigned char DataGlobal_84D1A8[32];  // data: 0x84D1A8
extern unsigned char DataGlobal_84D1B0[24];  // data: 0x84D1B0
extern unsigned char DataGlobal_84D1B8[16];  // data: 0x84D1B8
extern unsigned char DataGlobal_84D1CC[4];  // data: 0x84D1CC
extern unsigned char DataGlobal_84D1D4[4];  // data: 0x84D1D4
extern unsigned char DataGlobal_84D1DC[4];  // data: 0x84D1DC
extern unsigned char DataGlobal_84D1E4[4];  // data: 0x84D1E4
extern unsigned char DataGlobal_84D1F0[4];  // data: 0x84D1F0
extern unsigned char DataGlobal_84D24C[172];  // data: 0x84D24C
extern unsigned char DataGlobal_84D68C[172];  // data: 0x84D68C
extern unsigned char DataGlobal_84D690[168];  // data: 0x84D690
extern unsigned char DataGlobal_84D730[8];  // data: 0x84D730
extern unsigned char DataGlobal_84D874[172];  // data: 0x84D874
extern unsigned char DataGlobal_84DD9C[90160];  // data: 0x84DD9C
extern unsigned char DataGlobal_84DEDC[89840];  // data: 0x84DEDC
extern unsigned char DataGlobal_84DF00[89804];  // data: 0x84DF00
extern unsigned char DataGlobal_84DF24[89768];  // data: 0x84DF24
extern unsigned char DataGlobal_84DF50[89724];  // data: 0x84DF50
extern unsigned char DataGlobal_84DF6C[89696];  // data: 0x84DF6C
extern unsigned char DataGlobal_84DF84[89672];  // data: 0x84DF84
extern unsigned char DataGlobal_84DFB4[89624];  // data: 0x84DFB4
extern unsigned char DataGlobal_84DFD0[89596];  // data: 0x84DFD0
extern unsigned char DataGlobal_84E000[89548];  // data: 0x84E000
extern unsigned char DataGlobal_84E028[89508];  // data: 0x84E028
extern unsigned char DataGlobal_84E738[87700];  // data: 0x84E738
extern unsigned char DataGlobal_84E7C0[87564];  // data: 0x84E7C0
extern unsigned char DataGlobal_84E7C4[87560];  // data: 0x84E7C4
extern unsigned char DataGlobal_84E860[87404];  // data: 0x84E860
extern unsigned char DataGlobal_84E861[87403];  // data: 0x84E861
extern unsigned char DataGlobal_84E862[87402];  // data: 0x84E862
extern unsigned char DataGlobal_84E863[87401];  // data: 0x84E863
extern unsigned char DataGlobal_84E864[87400];  // data: 0x84E864
extern unsigned char DataGlobal_84F084[85320];  // data: 0x84F084
extern unsigned char DataGlobal_84F088[85316];  // data: 0x84F088
extern unsigned char DataGlobal_859094[44344];  // data: 0x859094
extern unsigned char DataGlobal_85D0A4[27944];  // data: 0x85D0A4
extern unsigned char DataGlobal_8610B4[11544];  // data: 0x8610B4
extern unsigned char DataGlobal_86D0BC[4];  // data: 0x86D0BC
extern unsigned char DataGlobal_878720[4];  // data: 0x878720
extern unsigned char DataGlobal_879124[2572];  // data: 0x879124
extern unsigned char DataGlobal_87BF60[4];  // data: 0x87BF60
extern unsigned char DataGlobal_87BF90[4];  // data: 0x87BF90
extern unsigned char DataGlobal_87C1B0[32];  // data: 0x87C1B0
extern unsigned char DataGlobal_87C1D0[4];  // data: 0x87C1D0
extern unsigned char DataGlobal_87C1D4[4];  // data: 0x87C1D4
extern unsigned char DataGlobal_87C1D8[4];  // data: 0x87C1D8
extern unsigned char DataGlobal_87C1DC[4];  // data: 0x87C1DC
extern unsigned char DataGlobal_87C370[4];  // data: 0x87C370
extern unsigned char DataGlobal_87C374[90160];  // data: 0x87C374
extern unsigned char DataGlobal_87C48C[89880];  // data: 0x87C48C
extern unsigned char DataGlobal_87C4BC[89832];  // data: 0x87C4BC
extern unsigned char DataGlobal_87C4C0[89828];  // data: 0x87C4C0
extern unsigned char DataGlobal_87C4C8[89820];  // data: 0x87C4C8
extern unsigned char DataGlobal_87C4CC[89816];  // data: 0x87C4CC
extern unsigned char DataGlobal_87C4D0[89812];  // data: 0x87C4D0
extern unsigned char DataGlobal_87C4D4[89808];  // data: 0x87C4D4
extern unsigned char DataGlobal_87C4D8[89804];  // data: 0x87C4D8
extern unsigned char DataGlobal_87C4DC[89800];  // data: 0x87C4DC
extern unsigned char DataGlobal_87C4E0[89796];  // data: 0x87C4E0
extern unsigned char DataGlobal_87C4E4[89792];  // data: 0x87C4E4
extern unsigned char DataGlobal_87C4F0[89780];  // data: 0x87C4F0
extern unsigned char DataGlobal_87C50E[89750];  // data: 0x87C50E
extern unsigned char DataGlobal_87C522[89730];  // data: 0x87C522
extern unsigned char DataGlobal_87C550[89684];  // data: 0x87C550
extern unsigned char DataGlobal_87C584[89632];  // data: 0x87C584
extern unsigned char DataGlobal_87C590[89620];  // data: 0x87C590
extern unsigned char DataGlobal_87C594[89616];  // data: 0x87C594
extern unsigned char DataGlobal_87C7A4[89088];  // data: 0x87C7A4
extern unsigned char DataGlobal_87C7B0[89076];  // data: 0x87C7B0
extern unsigned char DataGlobal_87C7B4[89072];  // data: 0x87C7B4
extern unsigned char DataGlobal_87C918[88716];  // data: 0x87C918
extern unsigned char DataGlobal_87C920[88708];  // data: 0x87C920
extern unsigned char DataGlobal_87C928[88700];  // data: 0x87C928
extern unsigned char DataGlobal_87C950[88660];  // data: 0x87C950
extern unsigned char DataGlobal_87C958[88652];  // data: 0x87C958
extern unsigned char DataGlobal_87C95C[88648];  // data: 0x87C95C
extern unsigned char DataGlobal_87C968[88636];  // data: 0x87C968
extern unsigned char DataGlobal_87CA48[88412];  // data: 0x87CA48
extern unsigned char DataGlobal_87CA60[88388];  // data: 0x87CA60
extern unsigned char DataGlobal_87CA64[88384];  // data: 0x87CA64
extern unsigned char DataGlobal_87CA68[88380];  // data: 0x87CA68
extern unsigned char DataGlobal_87CAF0[88244];  // data: 0x87CAF0
extern unsigned char DataGlobal_87CAF8[88236];  // data: 0x87CAF8
extern unsigned char DataGlobal_87CAFC[88232];  // data: 0x87CAFC
extern unsigned char DataGlobal_87CB00[88228];  // data: 0x87CB00
extern unsigned char DataGlobal_87CB08[88220];  // data: 0x87CB08
extern unsigned char DataGlobal_87CB0C[88216];  // data: 0x87CB0C
extern unsigned char DataGlobal_87CB10[88212];  // data: 0x87CB10
extern unsigned char DataGlobal_87CB14[88208];  // data: 0x87CB14
extern unsigned char DataGlobal_87CB20[88196];  // data: 0x87CB20
extern unsigned char DataGlobal_87CB98[88076];  // data: 0x87CB98
extern unsigned char DataGlobal_87CB9C[88072];  // data: 0x87CB9C
extern unsigned char DataGlobal_87CBA4[88064];  // data: 0x87CBA4
extern unsigned char DataGlobal_87CBA8[88060];  // data: 0x87CBA8
extern unsigned char DataGlobal_87CBAC[88056];  // data: 0x87CBAC
extern unsigned char DataGlobal_87CC38[87916];  // data: 0x87CC38
extern unsigned char DataGlobal_87CC40[87908];  // data: 0x87CC40
extern unsigned char DataGlobal_87CC44[87904];  // data: 0x87CC44
extern unsigned char DataGlobal_87CC4C[87896];  // data: 0x87CC4C
extern unsigned char DataGlobal_87CC50[87892];  // data: 0x87CC50
extern unsigned char DataGlobal_87CC54[87888];  // data: 0x87CC54
extern unsigned char DataGlobal_87CC58[87884];  // data: 0x87CC58
extern unsigned char DataGlobal_87CC5C[87880];  // data: 0x87CC5C
extern unsigned char DataGlobal_87CC64[87872];  // data: 0x87CC64
extern unsigned char DataGlobal_87D0E4[86720];  // data: 0x87D0E4
extern unsigned char DataGlobal_87D0F8[86700];  // data: 0x87D0F8
extern unsigned char DataGlobal_87D3C0[85988];  // data: 0x87D3C0
extern unsigned char DataGlobal_87D3D8[85964];  // data: 0x87D3D8
extern unsigned char DataGlobal_87D3F0[85940];  // data: 0x87D3F0
extern unsigned char DataGlobal_87D400[85924];  // data: 0x87D400
extern unsigned char DataGlobal_87D404[85920];  // data: 0x87D404
extern unsigned char DataGlobal_87D408[85916];  // data: 0x87D408
extern unsigned char DataGlobal_87D40C[85912];  // data: 0x87D40C
extern unsigned char DataGlobal_87D424[85888];  // data: 0x87D424
extern unsigned char DataGlobal_87D43C[85864];  // data: 0x87D43C
extern unsigned char DataGlobal_87D550[85588];  // data: 0x87D550
extern unsigned char DataGlobal_87D558[85580];  // data: 0x87D558
extern unsigned char DataGlobal_87D560[85572];  // data: 0x87D560
extern unsigned char DataGlobal_87D570[85556];  // data: 0x87D570
extern unsigned char DataGlobal_87D57C[85544];  // data: 0x87D57C
extern unsigned char DataGlobal_87D580[85540];  // data: 0x87D580
extern unsigned char DataGlobal_87D5B0[85492];  // data: 0x87D5B0
extern unsigned char DataGlobal_87D5B4[85488];  // data: 0x87D5B4
extern unsigned char DataGlobal_87D5E8[85436];  // data: 0x87D5E8
extern unsigned char DataGlobal_87D5F0[85428];  // data: 0x87D5F0
extern unsigned char DataGlobal_87D5F4[85424];  // data: 0x87D5F4
extern unsigned char DataGlobal_87D5F8[85420];  // data: 0x87D5F8
extern unsigned char DataGlobal_87D620[85380];  // data: 0x87D620
extern unsigned char DataGlobal_87D628[85372];  // data: 0x87D628
extern unsigned char DataGlobal_87D62C[85368];  // data: 0x87D62C
extern unsigned char DataGlobal_87D700[85156];  // data: 0x87D700
extern unsigned char DataGlobal_87D720[85124];  // data: 0x87D720
extern unsigned char DataGlobal_87D880[84772];  // data: 0x87D880
extern unsigned char DataGlobal_87DA30[84340];  // data: 0x87DA30
extern unsigned char DataGlobal_87DAA8[84220];  // data: 0x87DAA8
extern unsigned char DataGlobal_87DD70[83508];  // data: 0x87DD70
extern unsigned char DataGlobal_87DE28[83324];  // data: 0x87DE28
extern unsigned char DataGlobal_87DE2C[83320];  // data: 0x87DE2C
extern unsigned char DataGlobal_87DE30[83316];  // data: 0x87DE30
extern unsigned char DataGlobal_87DE38[83308];  // data: 0x87DE38
extern unsigned char DataGlobal_87E190[82452];  // data: 0x87E190
extern unsigned char DataGlobal_87E198[82444];  // data: 0x87E198
extern unsigned char DataGlobal_87E19A[82442];  // data: 0x87E19A
extern unsigned char DataGlobal_87E1A0[82436];  // data: 0x87E1A0
extern unsigned char DataGlobal_87E1A8[82428];  // data: 0x87E1A8
extern unsigned char DataGlobal_87E1B0[82420];  // data: 0x87E1B0
extern unsigned char DataGlobal_87E1B8[82412];  // data: 0x87E1B8
extern unsigned char DataGlobal_87E238[82284];  // data: 0x87E238
extern unsigned char DataGlobal_87E23C[82280];  // data: 0x87E23C
extern unsigned char DataGlobal_87E240[82276];  // data: 0x87E240
extern unsigned char DataGlobal_87E248[82268];  // data: 0x87E248
extern unsigned char DataGlobal_87E250[82260];  // data: 0x87E250
extern unsigned char DataGlobal_87E260[82244];  // data: 0x87E260
extern unsigned char DataGlobal_87E268[82236];  // data: 0x87E268
extern unsigned char DataGlobal_87E270[82228];  // data: 0x87E270
extern unsigned char DataGlobal_87E274[82224];  // data: 0x87E274
extern unsigned char DataGlobal_87E278[82220];  // data: 0x87E278
extern unsigned char DataGlobal_87E27C[82216];  // data: 0x87E27C
extern unsigned char DataGlobal_87E280[82212];  // data: 0x87E280
extern unsigned char DataGlobal_87E288[82204];  // data: 0x87E288
extern unsigned char DataGlobal_87E28C[82200];  // data: 0x87E28C
extern unsigned char DataGlobal_87E290[82196];  // data: 0x87E290
extern unsigned char DataGlobal_87E294[82192];  // data: 0x87E294
extern unsigned char DataGlobal_87E298[82188];  // data: 0x87E298
extern unsigned char DataGlobal_87E29C[82184];  // data: 0x87E29C
extern unsigned char DataGlobal_87E2A4[82176];  // data: 0x87E2A4
extern unsigned char DataGlobal_87E2A8[82172];  // data: 0x87E2A8
extern unsigned char DataGlobal_87E2AC[82168];  // data: 0x87E2AC
extern unsigned char DataGlobal_87E2B0[82164];  // data: 0x87E2B0
extern unsigned char DataGlobal_87E2B4[82160];  // data: 0x87E2B4
extern unsigned char DataGlobal_87E2B8[82156];  // data: 0x87E2B8
extern unsigned char DataGlobal_87E440[81764];  // data: 0x87E440
extern unsigned char DataGlobal_87E442[81762];  // data: 0x87E442
extern unsigned char DataGlobal_87E448[81756];  // data: 0x87E448
extern unsigned char DataGlobal_87E4D0[81620];  // data: 0x87E4D0
extern unsigned char DataGlobal_87E4D8[81612];  // data: 0x87E4D8
extern unsigned char DataGlobal_87E560[81476];  // data: 0x87E560
extern unsigned char DataGlobal_87E564[81472];  // data: 0x87E564
extern unsigned char DataGlobal_87E568[81468];  // data: 0x87E568
extern unsigned char DataGlobal_87E570[81460];  // data: 0x87E570
extern unsigned char DataGlobal_87E678[81196];  // data: 0x87E678
extern unsigned char DataGlobal_87E680[81188];  // data: 0x87E680
extern unsigned char DataGlobal_87E688[81180];  // data: 0x87E688
extern unsigned char DataGlobal_87E68C[81176];  // data: 0x87E68C
extern unsigned char DataGlobal_87E690[81172];  // data: 0x87E690
extern unsigned char DataGlobal_87E694[81168];  // data: 0x87E694
extern unsigned char DataGlobal_87E698[81164];  // data: 0x87E698
extern unsigned char DataGlobal_87E720[81028];  // data: 0x87E720
extern unsigned char DataGlobal_87E728[81020];  // data: 0x87E728
extern unsigned char DataGlobal_87E730[81012];  // data: 0x87E730
extern unsigned char DataGlobal_87E75C[80968];  // data: 0x87E75C
extern unsigned char DataGlobal_87E760[80964];  // data: 0x87E760
extern unsigned char DataGlobal_87E770[80948];  // data: 0x87E770
extern unsigned char DataGlobal_87E774[80944];  // data: 0x87E774
extern unsigned char DataGlobal_87E778[80940];  // data: 0x87E778
extern unsigned char DataGlobal_87E780[80932];  // data: 0x87E780
extern unsigned char DataGlobal_87E788[80924];  // data: 0x87E788
extern unsigned char DataGlobal_87E790[80916];  // data: 0x87E790
extern unsigned char DataGlobal_87E810[80788];  // data: 0x87E810
extern unsigned char DataGlobal_87E81C[80776];  // data: 0x87E81C
extern unsigned char DataGlobal_87E820[80772];  // data: 0x87E820
extern unsigned char DataGlobal_87E828[80764];  // data: 0x87E828
extern unsigned char DataGlobal_87E848[80732];  // data: 0x87E848
extern unsigned char DataGlobal_87E84C[80728];  // data: 0x87E84C
extern unsigned char DataGlobal_87E850[80724];  // data: 0x87E850
extern unsigned char DataGlobal_87E854[80720];  // data: 0x87E854
extern unsigned char DataGlobal_87E858[80716];  // data: 0x87E858
extern unsigned char DataGlobal_87E860[80708];  // data: 0x87E860
extern unsigned char DataGlobal_87E864[80704];  // data: 0x87E864
extern unsigned char DataGlobal_87E868[80700];  // data: 0x87E868
extern unsigned char DataGlobal_87E86C[80696];  // data: 0x87E86C
extern unsigned char DataGlobal_87E870[80692];  // data: 0x87E870
extern unsigned char DataGlobal_87E874[80688];  // data: 0x87E874
extern unsigned char DataGlobal_87E878[80684];  // data: 0x87E878
extern unsigned char DataGlobal_87E880[80676];  // data: 0x87E880
extern unsigned char DataGlobal_87E898[80652];  // data: 0x87E898
extern unsigned char DataGlobal_87E89C[80648];  // data: 0x87E89C
extern unsigned char DataGlobal_87E8A0[80644];  // data: 0x87E8A0
extern unsigned char DataGlobal_87E8A8[80636];  // data: 0x87E8A8
extern unsigned char DataGlobal_87E8B0[80628];  // data: 0x87E8B0
extern unsigned char DataGlobal_87F538[77420];  // data: 0x87F538
extern unsigned char DataGlobal_87F53C[77416];  // data: 0x87F53C
extern unsigned char DataGlobal_87F540[77412];  // data: 0x87F540
extern unsigned char DataGlobal_87F544[77408];  // data: 0x87F544
extern unsigned char DataGlobal_87F548[77404];  // data: 0x87F548
extern unsigned char DataGlobal_87F54A[77402];  // data: 0x87F54A
extern unsigned char DataGlobal_87F550[77396];  // data: 0x87F550
extern unsigned char DataGlobal_87F558[77388];  // data: 0x87F558
extern unsigned char DataGlobal_87F560[77380];  // data: 0x87F560
extern unsigned char DataGlobal_87F568[77372];  // data: 0x87F568
extern unsigned char DataGlobal_87F56C[77368];  // data: 0x87F56C
extern unsigned char DataGlobal_87F570[77364];  // data: 0x87F570
extern unsigned char DataGlobal_87F578[77356];  // data: 0x87F578
extern unsigned char DataGlobal_87F580[77348];  // data: 0x87F580
extern unsigned char DataGlobal_87F588[77340];  // data: 0x87F588
extern unsigned char DataGlobal_87F590[77332];  // data: 0x87F590
extern unsigned char DataGlobal_87F594[77328];  // data: 0x87F594
extern unsigned char DataGlobal_87F598[77324];  // data: 0x87F598
extern unsigned char DataGlobal_87F59C[77320];  // data: 0x87F59C
extern unsigned char DataGlobal_87F5A0[77316];  // data: 0x87F5A0
extern unsigned char DataGlobal_87F5A8[77308];  // data: 0x87F5A8
extern unsigned char DataGlobal_87F5B0[77300];  // data: 0x87F5B0
extern unsigned char DataGlobal_87F5B8[77292];  // data: 0x87F5B8
extern unsigned char DataGlobal_87F5BA[77290];  // data: 0x87F5BA
extern unsigned char DataGlobal_87F5C0[77284];  // data: 0x87F5C0
extern unsigned char DataGlobal_87F5C8[77276];  // data: 0x87F5C8
extern unsigned char DataGlobal_87F5D0[77268];  // data: 0x87F5D0
extern unsigned char DataGlobal_87F5D8[77260];  // data: 0x87F5D8
extern unsigned char DataGlobal_87F5DC[77256];  // data: 0x87F5DC
extern unsigned char DataGlobal_87F5E0[77252];  // data: 0x87F5E0
extern unsigned char DataGlobal_87F5E4[77248];  // data: 0x87F5E4
extern unsigned char DataGlobal_87F5E5[77247];  // data: 0x87F5E5
extern unsigned char DataGlobal_87F5E8[77244];  // data: 0x87F5E8
extern unsigned char DataGlobal_87F5EC[77240];  // data: 0x87F5EC
extern unsigned char DataGlobal_87F5F0[77236];  // data: 0x87F5F0
extern unsigned char DataGlobal_87F5F4[77232];  // data: 0x87F5F4
extern unsigned char DataGlobal_87F5F8[77228];  // data: 0x87F5F8
extern unsigned char DataGlobal_87F5FD[77223];  // data: 0x87F5FD
extern unsigned char DataGlobal_87F600[77220];  // data: 0x87F600
extern unsigned char DataGlobal_87F604[77216];  // data: 0x87F604
extern unsigned char DataGlobal_87F608[77212];  // data: 0x87F608
extern unsigned char DataGlobal_87F610[77204];  // data: 0x87F610
extern unsigned char DataGlobal_87F614[77200];  // data: 0x87F614
extern unsigned char DataGlobal_87F618[77196];  // data: 0x87F618
extern unsigned char DataGlobal_87F620[77188];  // data: 0x87F620
extern unsigned char DataGlobal_87F628[77180];  // data: 0x87F628
extern unsigned char DataGlobal_87F630[77172];  // data: 0x87F630
extern unsigned char DataGlobal_87F638[77164];  // data: 0x87F638
extern unsigned char DataGlobal_87F63C[77160];  // data: 0x87F63C
extern unsigned char DataGlobal_87F640[77156];  // data: 0x87F640
extern unsigned char DataGlobal_87F644[77152];  // data: 0x87F644
extern unsigned char DataGlobal_87F648[77148];  // data: 0x87F648
extern unsigned char DataGlobal_87F650[77140];  // data: 0x87F650
extern unsigned char DataGlobal_87F664[77120];  // data: 0x87F664
extern unsigned char DataGlobal_87F670[77108];  // data: 0x87F670
extern unsigned char DataGlobal_87F674[77104];  // data: 0x87F674
extern unsigned char DataGlobal_87F678[77100];  // data: 0x87F678
extern unsigned char DataGlobal_87F67C[77096];  // data: 0x87F67C
extern unsigned char DataGlobal_87F688[77084];  // data: 0x87F688
extern unsigned char DataGlobal_87F698[77068];  // data: 0x87F698
extern unsigned char DataGlobal_87F69C[77064];  // data: 0x87F69C
extern unsigned char DataGlobal_87F6A0[77060];  // data: 0x87F6A0
extern unsigned char DataGlobal_87F6A4[77056];  // data: 0x87F6A4
extern unsigned char DataGlobal_87F6A5[77055];  // data: 0x87F6A5
extern unsigned char DataGlobal_87F6AC[77048];  // data: 0x87F6AC
extern unsigned char DataGlobal_87F6B0[77044];  // data: 0x87F6B0
extern unsigned char DataGlobal_87F6B4[77040];  // data: 0x87F6B4
extern unsigned char DataGlobal_87F6B8[77036];  // data: 0x87F6B8
extern unsigned char DataGlobal_87F6C0[77028];  // data: 0x87F6C0
extern unsigned char DataGlobal_87F6C8[77020];  // data: 0x87F6C8
extern unsigned char DataGlobal_87F6D0[77012];  // data: 0x87F6D0
extern unsigned char DataGlobal_87F6D8[77004];  // data: 0x87F6D8
extern unsigned char DataGlobal_87F6E0[76996];  // data: 0x87F6E0
extern unsigned char DataGlobal_87F6E4[76992];  // data: 0x87F6E4
extern unsigned char DataGlobal_87F6E8[76988];  // data: 0x87F6E8
extern unsigned char DataGlobal_87F6EC[76984];  // data: 0x87F6EC
extern unsigned char DataGlobal_87F6F0[76980];  // data: 0x87F6F0
extern unsigned char DataGlobal_87F6F2[76978];  // data: 0x87F6F2
extern unsigned char DataGlobal_87F6F8[76972];  // data: 0x87F6F8
extern unsigned char DataGlobal_87F700[76964];  // data: 0x87F700
extern unsigned char DataGlobal_87F708[76956];  // data: 0x87F708
extern unsigned char DataGlobal_87F710[76948];  // data: 0x87F710
extern unsigned char DataGlobal_87F714[76944];  // data: 0x87F714
extern unsigned char DataGlobal_87F718[76940];  // data: 0x87F718
extern unsigned char DataGlobal_87F720[76932];  // data: 0x87F720
extern unsigned char DataGlobal_87F728[76924];  // data: 0x87F728
extern unsigned char DataGlobal_87F730[76916];  // data: 0x87F730
extern unsigned char DataGlobal_87F738[76908];  // data: 0x87F738
extern unsigned char DataGlobal_87F73C[76904];  // data: 0x87F73C
extern unsigned char DataGlobal_87F740[76900];  // data: 0x87F740
extern unsigned char DataGlobal_87F744[76896];  // data: 0x87F744
extern unsigned char DataGlobal_87F748[76892];  // data: 0x87F748
extern unsigned char DataGlobal_87F750[76884];  // data: 0x87F750
extern unsigned char DataGlobal_87F754[76880];  // data: 0x87F754
extern unsigned char DataGlobal_87F758[76876];  // data: 0x87F758
extern unsigned char DataGlobal_87F75C[76872];  // data: 0x87F75C
extern unsigned char DataGlobal_87F75D[76871];  // data: 0x87F75D
extern unsigned char DataGlobal_87F760[76868];  // data: 0x87F760
extern unsigned char DataGlobal_87F764[76864];  // data: 0x87F764
extern unsigned char DataGlobal_87F768[76860];  // data: 0x87F768
extern unsigned char DataGlobal_87F77C[76840];  // data: 0x87F77C
extern unsigned char DataGlobal_87F780[76836];  // data: 0x87F780
extern unsigned char DataGlobal_87F784[76832];  // data: 0x87F784
extern unsigned char DataGlobal_87F785[76831];  // data: 0x87F785
extern unsigned char DataGlobal_87F788[76828];  // data: 0x87F788
extern unsigned char DataGlobal_87F78C[76824];  // data: 0x87F78C
extern unsigned char DataGlobal_87F790[76820];  // data: 0x87F790
extern unsigned char DataGlobal_87F798[76812];  // data: 0x87F798
extern unsigned char DataGlobal_87F79C[76808];  // data: 0x87F79C
extern unsigned char DataGlobal_87F7A0[76804];  // data: 0x87F7A0
extern unsigned char DataGlobal_87F7A4[76800];  // data: 0x87F7A4
extern unsigned char DataGlobal_87F7A8[76796];  // data: 0x87F7A8
extern unsigned char DataGlobal_87F7AA[76794];  // data: 0x87F7AA
extern unsigned char DataGlobal_87F7B0[76788];  // data: 0x87F7B0
extern unsigned char DataGlobal_87F7B8[76780];  // data: 0x87F7B8
extern unsigned char DataGlobal_87F7C0[76772];  // data: 0x87F7C0
extern unsigned char DataGlobal_87F7C8[76764];  // data: 0x87F7C8
extern unsigned char DataGlobal_87F7D0[76756];  // data: 0x87F7D0
extern unsigned char DataGlobal_87F7D4[76752];  // data: 0x87F7D4
extern unsigned char DataGlobal_87F7D8[76748];  // data: 0x87F7D8
extern unsigned char DataGlobal_87F7E0[76740];  // data: 0x87F7E0
extern unsigned char DataGlobal_87F7E8[76732];  // data: 0x87F7E8
extern unsigned char DataGlobal_87F7EC[76728];  // data: 0x87F7EC
extern unsigned char DataGlobal_87F7F0[76724];  // data: 0x87F7F0
extern unsigned char DataGlobal_87F7F4[76720];  // data: 0x87F7F4
extern unsigned char DataGlobal_87F800[76708];  // data: 0x87F800
extern unsigned char DataGlobal_87F810[76692];  // data: 0x87F810
extern unsigned char DataGlobal_87F83C[76648];  // data: 0x87F83C
extern unsigned char DataGlobal_87F840[76644];  // data: 0x87F840
extern unsigned char DataGlobal_87F845[76639];  // data: 0x87F845
extern unsigned char DataGlobal_87F848[76636];  // data: 0x87F848
extern unsigned char DataGlobal_87F850[76628];  // data: 0x87F850
extern unsigned char DataGlobal_87F858[76620];  // data: 0x87F858
extern unsigned char DataGlobal_87F878[76588];  // data: 0x87F878
extern unsigned char DataGlobal_87F8D4[76496];  // data: 0x87F8D4
extern unsigned char DataGlobal_87F8D8[76492];  // data: 0x87F8D8
extern unsigned char DataGlobal_87F8E4[76480];  // data: 0x87F8E4
extern unsigned char DataGlobal_87F8E8[76476];  // data: 0x87F8E8
extern unsigned char DataGlobal_87F8EC[76472];  // data: 0x87F8EC
extern unsigned char DataGlobal_87F8F0[76468];  // data: 0x87F8F0
extern unsigned char DataGlobal_87F8F4[76464];  // data: 0x87F8F4
extern unsigned char DataGlobal_87F8F8[76460];  // data: 0x87F8F8
extern unsigned char DataGlobal_87F8FC[76456];  // data: 0x87F8FC
extern unsigned char DataGlobal_87F900[76452];  // data: 0x87F900
extern unsigned char DataGlobal_87F90C[76440];  // data: 0x87F90C
extern unsigned char DataGlobal_87F910[76436];  // data: 0x87F910
extern unsigned char DataGlobal_87F928[76412];  // data: 0x87F928
extern unsigned char DataGlobal_880944[72288];  // data: 0x880944
extern unsigned char DataGlobal_880948[72284];  // data: 0x880948
extern unsigned char DataGlobal_88094C[72280];  // data: 0x88094C
extern unsigned char DataGlobal_880951[72275];  // data: 0x880951
extern unsigned char DataGlobal_880954[72272];  // data: 0x880954
extern unsigned char DataGlobal_880958[72268];  // data: 0x880958
extern unsigned char DataGlobal_88095C[72264];  // data: 0x88095C
extern unsigned char DataGlobal_880960[72260];  // data: 0x880960
extern unsigned char DataGlobal_880964[72256];  // data: 0x880964
extern unsigned char DataGlobal_88096A[72250];  // data: 0x88096A
extern unsigned char DataGlobal_88096E[72246];  // data: 0x88096E
extern unsigned char DataGlobal_880974[72240];  // data: 0x880974
extern unsigned char DataGlobal_88097C[72232];  // data: 0x88097C
extern unsigned char DataGlobal_880994[72208];  // data: 0x880994
extern unsigned char DataGlobal_88099A[72202];  // data: 0x88099A
extern unsigned char DataGlobal_88099B[72201];  // data: 0x88099B
extern unsigned char DataGlobal_88099C[72200];  // data: 0x88099C
extern unsigned char DataGlobal_8809D8[72140];  // data: 0x8809D8
extern unsigned char DataGlobal_8809DC[72136];  // data: 0x8809DC
extern unsigned char DataGlobal_8809F4[72112];  // data: 0x8809F4
extern unsigned char DataGlobal_8809F8[72108];  // data: 0x8809F8
extern unsigned char DataGlobal_8809FC[72104];  // data: 0x8809FC
extern unsigned char DataGlobal_880A00[72100];  // data: 0x880A00
extern unsigned char DataGlobal_880A04[72096];  // data: 0x880A04
extern unsigned char DataGlobal_880C84[71456];  // data: 0x880C84
extern unsigned char DataGlobal_880C88[71452];  // data: 0x880C88
extern unsigned char DataGlobal_880C94[71440];  // data: 0x880C94
extern unsigned char DataGlobal_880C98[71436];  // data: 0x880C98
extern unsigned char DataGlobal_880D4C[71256];  // data: 0x880D4C
extern unsigned char DataGlobal_880D50[71252];  // data: 0x880D50
extern unsigned char DataGlobal_884B84[55328];  // data: 0x884B84
extern unsigned char DataGlobal_884B8C[55320];  // data: 0x884B8C
extern unsigned char DataGlobal_884B8D[55319];  // data: 0x884B8D
extern unsigned char DataGlobal_884CF8[54956];  // data: 0x884CF8
extern unsigned char DataGlobal_884D00[54948];  // data: 0x884D00
extern unsigned char DataGlobal_884D34[54896];  // data: 0x884D34
extern unsigned char DataGlobal_884D44[54880];  // data: 0x884D44
extern unsigned char DataGlobal_884D58[54860];  // data: 0x884D58
extern unsigned char DataGlobal_884D60[54852];  // data: 0x884D60
extern unsigned char DataGlobal_884D68[54844];  // data: 0x884D68
extern unsigned char DataGlobal_884D6C[54840];  // data: 0x884D6C
extern unsigned char DataGlobal_884D70[54836];  // data: 0x884D70
extern unsigned char DataGlobal_884D74[54832];  // data: 0x884D74
extern unsigned char DataGlobal_884D78[54828];  // data: 0x884D78
extern unsigned char DataGlobal_884D80[54820];  // data: 0x884D80
extern unsigned char DataGlobal_884D88[54812];  // data: 0x884D88
extern unsigned char DataGlobal_884D9C[54792];  // data: 0x884D9C
extern unsigned char DataGlobal_884DAC[54776];  // data: 0x884DAC
extern unsigned char DataGlobal_884DB0[54772];  // data: 0x884DB0
extern unsigned char DataGlobal_884DB4[54768];  // data: 0x884DB4
extern unsigned char DataGlobal_884DB5[54767];  // data: 0x884DB5
extern unsigned char DataGlobal_884DB8[54764];  // data: 0x884DB8
extern unsigned char DataGlobal_884DBC[54760];  // data: 0x884DBC
extern unsigned char DataGlobal_884DC0[54756];  // data: 0x884DC0
extern unsigned char DataGlobal_884DC4[54752];  // data: 0x884DC4
extern unsigned char DataGlobal_884DC8[54748];  // data: 0x884DC8
extern unsigned char DataGlobal_884DCC[54744];  // data: 0x884DCC
extern unsigned char DataGlobal_884DCD[54743];  // data: 0x884DCD
extern unsigned char DataGlobal_884DD0[54740];  // data: 0x884DD0
extern unsigned char DataGlobal_884DD4[54736];  // data: 0x884DD4
extern unsigned char DataGlobal_884DE4[54720];  // data: 0x884DE4
extern unsigned char DataGlobal_884DE8[54716];  // data: 0x884DE8
extern unsigned char DataGlobal_884DEC[54712];  // data: 0x884DEC
extern unsigned char DataGlobal_884DED[54711];  // data: 0x884DED
extern unsigned char DataGlobal_884DF0[54708];  // data: 0x884DF0
extern unsigned char DataGlobal_884DF4[54704];  // data: 0x884DF4
extern unsigned char DataGlobal_884E00[54692];  // data: 0x884E00
extern unsigned char DataGlobal_884E04[54688];  // data: 0x884E04
extern unsigned char DataGlobal_884E08[54684];  // data: 0x884E08
extern unsigned char DataGlobal_884E0C[54680];  // data: 0x884E0C
extern unsigned char DataGlobal_884E10[54676];  // data: 0x884E10
extern unsigned char DataGlobal_884E1C[54664];  // data: 0x884E1C
extern unsigned char DataGlobal_884E20[54660];  // data: 0x884E20
extern unsigned char DataGlobal_884E30[54644];  // data: 0x884E30
extern unsigned char DataGlobal_884E34[54640];  // data: 0x884E34
extern unsigned char DataGlobal_884E58[54604];  // data: 0x884E58
extern unsigned char DataGlobal_884E5C[54600];  // data: 0x884E5C
extern unsigned char DataGlobal_884E68[54588];  // data: 0x884E68
extern unsigned char DataGlobal_884E6C[54584];  // data: 0x884E6C
extern unsigned char DataGlobal_884E70[54580];  // data: 0x884E70
extern unsigned char DataGlobal_884E74[54576];  // data: 0x884E74
extern unsigned char DataGlobal_884E78[54572];  // data: 0x884E78
extern unsigned char DataGlobal_884E80[54564];  // data: 0x884E80
extern unsigned char DataGlobal_885180[53796];  // data: 0x885180
extern unsigned char DataGlobal_885182[53794];  // data: 0x885182
extern unsigned char DataGlobal_885482[53026];  // data: 0x885482
extern unsigned char DataGlobal_885782[52258];  // data: 0x885782
extern unsigned char DataGlobal_885A80[51492];  // data: 0x885A80
extern unsigned char DataGlobal_885A82[51490];  // data: 0x885A82
extern unsigned char DataGlobal_885D80[50724];  // data: 0x885D80
extern unsigned char DataGlobal_886080[49956];  // data: 0x886080
extern unsigned char DataGlobal_886082[49954];  // data: 0x886082
extern unsigned char DataGlobal_886380[49188];  // data: 0x886380
extern unsigned char DataGlobal_886381[49187];  // data: 0x886381
extern unsigned char DataGlobal_886382[49186];  // data: 0x886382
extern unsigned char DataGlobal_886682[48418];  // data: 0x886682
extern unsigned char DataGlobal_886980[47652];  // data: 0x886980
extern unsigned char DataGlobal_886A80[47396];  // data: 0x886A80
extern unsigned char DataGlobal_886B80[47140];  // data: 0x886B80
extern unsigned char DataGlobal_886F80[46116];  // data: 0x886F80
extern unsigned char DataGlobal_886F84[46112];  // data: 0x886F84
extern unsigned char DataGlobal_886F88[46108];  // data: 0x886F88
extern unsigned char DataGlobal_886F8C[46104];  // data: 0x886F8C
extern unsigned char DataGlobal_886F98[46092];  // data: 0x886F98
extern unsigned char DataGlobal_886FB4[46064];  // data: 0x886FB4
extern unsigned char DataGlobal_886FC0[46052];  // data: 0x886FC0
extern unsigned char DataGlobal_886FC8[46044];  // data: 0x886FC8
extern unsigned char DataGlobal_886FCC[46040];  // data: 0x886FCC
extern unsigned char DataGlobal_886FD0[46036];  // data: 0x886FD0
extern unsigned char DataGlobal_886FD4[46032];  // data: 0x886FD4
extern unsigned char DataGlobal_886FD8[46028];  // data: 0x886FD8
extern unsigned char DataGlobal_886FDA[46026];  // data: 0x886FDA
extern unsigned char DataGlobal_886FE0[46020];  // data: 0x886FE0
extern unsigned char DataGlobal_886FE8[46012];  // data: 0x886FE8
extern unsigned char DataGlobal_886FF0[46004];  // data: 0x886FF0
extern unsigned char DataGlobal_886FF8[45996];  // data: 0x886FF8
extern unsigned char DataGlobal_886FFC[45992];  // data: 0x886FFC
extern unsigned char DataGlobal_887000[45988];  // data: 0x887000
extern unsigned char DataGlobal_887008[45980];  // data: 0x887008
extern unsigned char DataGlobal_887010[45972];  // data: 0x887010
extern unsigned char DataGlobal_887018[45964];  // data: 0x887018
extern unsigned char DataGlobal_887020[45956];  // data: 0x887020
extern unsigned char DataGlobal_887024[45952];  // data: 0x887024
extern unsigned char DataGlobal_887028[45948];  // data: 0x887028
extern unsigned char DataGlobal_88702C[45944];  // data: 0x88702C
extern unsigned char DataGlobal_887030[45940];  // data: 0x887030
extern unsigned char DataGlobal_887038[45932];  // data: 0x887038
extern unsigned char DataGlobal_887040[45924];  // data: 0x887040
extern unsigned char DataGlobal_887048[45916];  // data: 0x887048
extern unsigned char DataGlobal_88704C[45912];  // data: 0x88704C
extern unsigned char DataGlobal_88704E[45910];  // data: 0x88704E
extern unsigned char DataGlobal_887050[45908];  // data: 0x887050
extern unsigned char DataGlobal_887058[45900];  // data: 0x887058
extern unsigned char DataGlobal_88705C[45896];  // data: 0x88705C
extern unsigned char DataGlobal_887060[45892];  // data: 0x887060
extern unsigned char DataGlobal_887064[45888];  // data: 0x887064
extern unsigned char DataGlobal_887068[45884];  // data: 0x887068
extern unsigned char DataGlobal_88706C[45880];  // data: 0x88706C
extern unsigned char DataGlobal_887070[45876];  // data: 0x887070
extern unsigned char DataGlobal_887074[45872];  // data: 0x887074
extern unsigned char DataGlobal_887080[45860];  // data: 0x887080
extern unsigned char DataGlobal_887084[45856];  // data: 0x887084
extern unsigned char DataGlobal_887088[45852];  // data: 0x887088
extern unsigned char DataGlobal_88708C[45848];  // data: 0x88708C
extern unsigned char DataGlobal_887090[45844];  // data: 0x887090
extern unsigned char DataGlobal_887094[45840];  // data: 0x887094
extern unsigned char DataGlobal_887098[45836];  // data: 0x887098
extern unsigned char DataGlobal_8870B0[45812];  // data: 0x8870B0
extern unsigned char DataGlobal_8870B8[45804];  // data: 0x8870B8
extern unsigned char DataGlobal_8870C4[45792];  // data: 0x8870C4
extern unsigned char DataGlobal_8870C8[45788];  // data: 0x8870C8
extern unsigned char DataGlobal_8870CC[45784];  // data: 0x8870CC
extern unsigned char DataGlobal_8870D0[45780];  // data: 0x8870D0
extern unsigned char DataGlobal_8870D4[45776];  // data: 0x8870D4
extern unsigned char DataGlobal_8870D8[45772];  // data: 0x8870D8
extern unsigned char DataGlobal_8870DC[45768];  // data: 0x8870DC
extern unsigned char DataGlobal_8870E8[45756];  // data: 0x8870E8
extern unsigned char DataGlobal_8870EC[45752];  // data: 0x8870EC
extern unsigned char DataGlobal_8870F0[45748];  // data: 0x8870F0
extern unsigned char DataGlobal_8870F4[45744];  // data: 0x8870F4
extern unsigned char DataGlobal_8870F8[45740];  // data: 0x8870F8
extern unsigned char DataGlobal_8870FC[45736];  // data: 0x8870FC
extern unsigned char DataGlobal_887100[45732];  // data: 0x887100
extern unsigned char DataGlobal_887118[45708];  // data: 0x887118
extern unsigned char DataGlobal_88711C[45704];  // data: 0x88711C
extern unsigned char DataGlobal_887120[45700];  // data: 0x887120
extern unsigned char DataGlobal_88712C[45688];  // data: 0x88712C
extern unsigned char DataGlobal_887130[45684];  // data: 0x887130
extern unsigned char DataGlobal_887134[45680];  // data: 0x887134
extern unsigned char DataGlobal_887138[45676];  // data: 0x887138
extern unsigned char DataGlobal_88713C[45672];  // data: 0x88713C
extern unsigned char DataGlobal_887140[45668];  // data: 0x887140
extern unsigned char DataGlobal_887144[45664];  // data: 0x887144
extern unsigned char DataGlobal_887150[45652];  // data: 0x887150
extern unsigned char DataGlobal_887154[45648];  // data: 0x887154
extern unsigned char DataGlobal_887158[45644];  // data: 0x887158
extern unsigned char DataGlobal_88715C[45640];  // data: 0x88715C
extern unsigned char DataGlobal_887160[45636];  // data: 0x887160
extern unsigned char DataGlobal_887164[45632];  // data: 0x887164
extern unsigned char DataGlobal_887168[45628];  // data: 0x887168
extern unsigned char DataGlobal_887180[45604];  // data: 0x887180
extern unsigned char DataGlobal_887184[45600];  // data: 0x887184
extern unsigned char DataGlobal_887188[45596];  // data: 0x887188
extern unsigned char DataGlobal_88718C[45592];  // data: 0x88718C
extern unsigned char DataGlobal_887190[45588];  // data: 0x887190
extern unsigned char DataGlobal_887194[45584];  // data: 0x887194
extern unsigned char DataGlobal_887198[45580];  // data: 0x887198
extern unsigned char DataGlobal_88719C[45576];  // data: 0x88719C
extern unsigned char DataGlobal_8871A8[45564];  // data: 0x8871A8
extern unsigned char DataGlobal_8871AC[45560];  // data: 0x8871AC
extern unsigned char DataGlobal_8871B0[45556];  // data: 0x8871B0
extern unsigned char DataGlobal_8871B4[45552];  // data: 0x8871B4
extern unsigned char DataGlobal_8871B8[45548];  // data: 0x8871B8
extern unsigned char DataGlobal_8871BC[45544];  // data: 0x8871BC
extern unsigned char DataGlobal_8871C0[45540];  // data: 0x8871C0
extern unsigned char DataGlobal_8871D8[45516];  // data: 0x8871D8
extern unsigned char DataGlobal_8871E8[45500];  // data: 0x8871E8
extern unsigned char DataGlobal_8871F0[45492];  // data: 0x8871F0
extern unsigned char DataGlobal_8871F8[45484];  // data: 0x8871F8
extern unsigned char DataGlobal_8871FC[45480];  // data: 0x8871FC
extern unsigned char DataGlobal_887200[45476];  // data: 0x887200
extern unsigned char DataGlobal_88720C[45464];  // data: 0x88720C
extern unsigned char DataGlobal_887210[45460];  // data: 0x887210
extern unsigned char DataGlobal_887214[45456];  // data: 0x887214
extern unsigned char DataGlobal_887218[45452];  // data: 0x887218
extern unsigned char DataGlobal_88721C[45448];  // data: 0x88721C
extern unsigned char DataGlobal_887220[45444];  // data: 0x887220
extern unsigned char DataGlobal_887224[45440];  // data: 0x887224
extern unsigned char DataGlobal_887230[45428];  // data: 0x887230
extern unsigned char DataGlobal_887234[45424];  // data: 0x887234
extern unsigned char DataGlobal_887238[45420];  // data: 0x887238
extern unsigned char DataGlobal_88723C[45416];  // data: 0x88723C
extern unsigned char DataGlobal_887240[45412];  // data: 0x887240
extern unsigned char DataGlobal_887244[45408];  // data: 0x887244
extern unsigned char DataGlobal_887248[45404];  // data: 0x887248
extern unsigned char DataGlobal_887260[45380];  // data: 0x887260
extern unsigned char DataGlobal_887268[45372];  // data: 0x887268
extern unsigned char DataGlobal_887270[45364];  // data: 0x887270
extern unsigned char DataGlobal_887278[45356];  // data: 0x887278
extern unsigned char DataGlobal_887280[45348];  // data: 0x887280
extern unsigned char DataGlobal_887282[45346];  // data: 0x887282
extern unsigned char DataGlobal_887288[45340];  // data: 0x887288
extern unsigned char DataGlobal_887290[45332];  // data: 0x887290
extern unsigned char DataGlobal_887298[45324];  // data: 0x887298
extern unsigned char DataGlobal_8872A0[45316];  // data: 0x8872A0
extern unsigned char DataGlobal_8872A4[45312];  // data: 0x8872A4
extern unsigned char DataGlobal_8872A8[45308];  // data: 0x8872A8
extern unsigned char DataGlobal_8872B0[45300];  // data: 0x8872B0
extern unsigned char DataGlobal_8872B4[45296];  // data: 0x8872B4
extern unsigned char DataGlobal_8872B8[45292];  // data: 0x8872B8
extern unsigned char DataGlobal_8872BC[45288];  // data: 0x8872BC
extern unsigned char DataGlobal_8872BD[45287];  // data: 0x8872BD
extern unsigned char DataGlobal_8872C0[45284];  // data: 0x8872C0
extern unsigned char DataGlobal_8872C4[45280];  // data: 0x8872C4
extern unsigned char DataGlobal_8872C8[45276];  // data: 0x8872C8
extern unsigned char DataGlobal_8872D0[45268];  // data: 0x8872D0
extern unsigned char DataGlobal_8872D8[45260];  // data: 0x8872D8
extern unsigned char DataGlobal_8872E0[45252];  // data: 0x8872E0
extern unsigned char DataGlobal_8872E4[45248];  // data: 0x8872E4
extern unsigned char DataGlobal_8872E8[45244];  // data: 0x8872E8
extern unsigned char DataGlobal_8872EC[45240];  // data: 0x8872EC
extern unsigned char DataGlobal_8872F0[45236];  // data: 0x8872F0
extern unsigned char DataGlobal_8872F8[45228];  // data: 0x8872F8
extern unsigned char DataGlobal_887320[45188];  // data: 0x887320
extern unsigned char DataGlobal_887328[45180];  // data: 0x887328
extern unsigned char DataGlobal_88732C[45176];  // data: 0x88732C
extern unsigned char DataGlobal_887330[45172];  // data: 0x887330
extern unsigned char DataGlobal_88733C[45160];  // data: 0x88733C
extern unsigned char DataGlobal_887348[45148];  // data: 0x887348
extern unsigned char DataGlobal_887350[45140];  // data: 0x887350
extern unsigned char DataGlobal_887358[45132];  // data: 0x887358
extern unsigned char DataGlobal_88735C[45128];  // data: 0x88735C
extern unsigned char DataGlobal_887360[45124];  // data: 0x887360
extern unsigned char DataGlobal_887364[45120];  // data: 0x887364
extern unsigned char DataGlobal_887370[45108];  // data: 0x887370
extern unsigned char DataGlobal_887378[45100];  // data: 0x887378
extern unsigned char DataGlobal_88737C[45096];  // data: 0x88737C
extern unsigned char DataGlobal_887380[45092];  // data: 0x887380
extern unsigned char DataGlobal_887384[45088];  // data: 0x887384
extern unsigned char DataGlobal_88738C[45080];  // data: 0x88738C
extern unsigned char DataGlobal_887390[45076];  // data: 0x887390
extern unsigned char DataGlobal_887394[45072];  // data: 0x887394
extern unsigned char DataGlobal_887395[45071];  // data: 0x887395
extern unsigned char DataGlobal_887398[45068];  // data: 0x887398
extern unsigned char DataGlobal_88739C[45064];  // data: 0x88739C
extern unsigned char DataGlobal_8873A0[45060];  // data: 0x8873A0
extern unsigned char DataGlobal_8873A2[45058];  // data: 0x8873A2
extern unsigned char DataGlobal_8873A8[45052];  // data: 0x8873A8
extern unsigned char DataGlobal_8873B0[45044];  // data: 0x8873B0
extern unsigned char DataGlobal_8873B8[45036];  // data: 0x8873B8
extern unsigned char DataGlobal_8873C0[45028];  // data: 0x8873C0
extern unsigned char DataGlobal_8873C4[45024];  // data: 0x8873C4
extern unsigned char DataGlobal_8873C8[45020];  // data: 0x8873C8
extern unsigned char DataGlobal_8873D0[45012];  // data: 0x8873D0
extern unsigned char DataGlobal_8873D8[45004];  // data: 0x8873D8
extern unsigned char DataGlobal_8873E0[44996];  // data: 0x8873E0
extern unsigned char DataGlobal_8873E8[44988];  // data: 0x8873E8
extern unsigned char DataGlobal_8873EC[44984];  // data: 0x8873EC
extern unsigned char DataGlobal_8873F0[44980];  // data: 0x8873F0
extern unsigned char DataGlobal_8873F4[44976];  // data: 0x8873F4
extern unsigned char DataGlobal_8873F8[44972];  // data: 0x8873F8
extern unsigned char DataGlobal_887400[44964];  // data: 0x887400
extern unsigned char DataGlobal_887408[44956];  // data: 0x887408
extern unsigned char DataGlobal_88740C[44952];  // data: 0x88740C
extern unsigned char DataGlobal_887410[44948];  // data: 0x887410
extern unsigned char DataGlobal_887414[44944];  // data: 0x887414
extern unsigned char DataGlobal_887420[44932];  // data: 0x887420
extern unsigned char DataGlobal_887424[44928];  // data: 0x887424
extern unsigned char DataGlobal_887428[44924];  // data: 0x887428
extern unsigned char DataGlobal_887430[44916];  // data: 0x887430
extern unsigned char DataGlobal_887460[44868];  // data: 0x887460
extern unsigned char DataGlobal_88746C[44856];  // data: 0x88746C
extern unsigned char DataGlobal_887470[44852];  // data: 0x887470
extern unsigned char DataGlobal_887474[44848];  // data: 0x887474
extern unsigned char DataGlobal_887478[44844];  // data: 0x887478
extern unsigned char DataGlobal_887480[44836];  // data: 0x887480
extern unsigned char DataGlobal_887488[44828];  // data: 0x887488
extern unsigned char DataGlobal_88748A[44826];  // data: 0x88748A
extern unsigned char DataGlobal_887490[44820];  // data: 0x887490
extern unsigned char DataGlobal_887498[44812];  // data: 0x887498
extern unsigned char DataGlobal_8874A0[44804];  // data: 0x8874A0
extern unsigned char DataGlobal_8874A8[44796];  // data: 0x8874A8
extern unsigned char DataGlobal_8874AC[44792];  // data: 0x8874AC
extern unsigned char DataGlobal_8874B0[44788];  // data: 0x8874B0
extern unsigned char DataGlobal_8874B8[44780];  // data: 0x8874B8
extern unsigned char DataGlobal_8874C4[44768];  // data: 0x8874C4
extern unsigned char DataGlobal_8874C8[44764];  // data: 0x8874C8
extern unsigned char DataGlobal_8874CC[44760];  // data: 0x8874CC
extern unsigned char DataGlobal_8874CD[44759];  // data: 0x8874CD
extern unsigned char DataGlobal_8874D4[44752];  // data: 0x8874D4
extern unsigned char DataGlobal_8874D8[44748];  // data: 0x8874D8
extern unsigned char DataGlobal_8874E0[44740];  // data: 0x8874E0
extern unsigned char DataGlobal_8874E8[44732];  // data: 0x8874E8
extern unsigned char DataGlobal_8874EC[44728];  // data: 0x8874EC
extern unsigned char DataGlobal_8874F0[44724];  // data: 0x8874F0
extern unsigned char DataGlobal_8874F4[44720];  // data: 0x8874F4
extern unsigned char DataGlobal_8874F8[44716];  // data: 0x8874F8
extern unsigned char DataGlobal_887500[44708];  // data: 0x887500
extern unsigned char DataGlobal_887508[44700];  // data: 0x887508
extern unsigned char DataGlobal_887510[44692];  // data: 0x887510
extern unsigned char DataGlobal_887512[44690];  // data: 0x887512
extern unsigned char DataGlobal_887518[44684];  // data: 0x887518
extern unsigned char DataGlobal_887520[44676];  // data: 0x887520
extern unsigned char DataGlobal_887528[44668];  // data: 0x887528
extern unsigned char DataGlobal_887530[44660];  // data: 0x887530
extern unsigned char DataGlobal_887534[44656];  // data: 0x887534
extern unsigned char DataGlobal_887538[44652];  // data: 0x887538
extern unsigned char DataGlobal_887540[44644];  // data: 0x887540
extern unsigned char DataGlobal_887548[44636];  // data: 0x887548
extern unsigned char DataGlobal_887550[44628];  // data: 0x887550
extern unsigned char DataGlobal_887558[44620];  // data: 0x887558
extern unsigned char DataGlobal_88755C[44616];  // data: 0x88755C
extern unsigned char DataGlobal_887560[44612];  // data: 0x887560
extern unsigned char DataGlobal_887570[44596];  // data: 0x887570
extern unsigned char DataGlobal_887574[44592];  // data: 0x887574
extern unsigned char DataGlobal_887575[44591];  // data: 0x887575
extern unsigned char DataGlobal_88757C[44584];  // data: 0x88757C
extern unsigned char DataGlobal_887580[44580];  // data: 0x887580
extern unsigned char DataGlobal_887588[44572];  // data: 0x887588
extern unsigned char DataGlobal_887590[44564];  // data: 0x887590
extern unsigned char DataGlobal_887598[44556];  // data: 0x887598
extern unsigned char DataGlobal_887624[44416];  // data: 0x887624
extern unsigned char DataGlobal_887630[44404];  // data: 0x887630
extern unsigned char DataGlobal_887634[44400];  // data: 0x887634
extern unsigned char DataGlobal_887638[44396];  // data: 0x887638
extern unsigned char DataGlobal_88763C[44392];  // data: 0x88763C
extern unsigned char DataGlobal_887648[44380];  // data: 0x887648
extern unsigned char DataGlobal_887650[44372];  // data: 0x887650
extern unsigned char DataGlobal_887654[44368];  // data: 0x887654
extern unsigned char DataGlobal_887658[44364];  // data: 0x887658
extern unsigned char DataGlobal_88765C[44360];  // data: 0x88765C
extern unsigned char DataGlobal_887660[44356];  // data: 0x887660
extern unsigned char DataGlobal_887662[44354];  // data: 0x887662
extern unsigned char DataGlobal_887668[44348];  // data: 0x887668
extern unsigned char DataGlobal_887678[44332];  // data: 0x887678
extern unsigned char DataGlobal_887680[44324];  // data: 0x887680
extern unsigned char DataGlobal_887684[44320];  // data: 0x887684
extern unsigned char DataGlobal_887688[44316];  // data: 0x887688
extern unsigned char DataGlobal_887690[44308];  // data: 0x887690
extern unsigned char DataGlobal_887698[44300];  // data: 0x887698
extern unsigned char DataGlobal_8876A0[44292];  // data: 0x8876A0
extern unsigned char DataGlobal_8876A8[44284];  // data: 0x8876A8
extern unsigned char DataGlobal_8876AC[44280];  // data: 0x8876AC
extern unsigned char DataGlobal_8876B0[44276];  // data: 0x8876B0
extern unsigned char DataGlobal_8876B4[44272];  // data: 0x8876B4
extern unsigned char DataGlobal_8876B8[44268];  // data: 0x8876B8
extern unsigned char DataGlobal_8876C0[44260];  // data: 0x8876C0
extern unsigned char DataGlobal_8876C8[44252];  // data: 0x8876C8
extern unsigned char DataGlobal_8876D0[44244];  // data: 0x8876D0
extern unsigned char DataGlobal_8876D2[44242];  // data: 0x8876D2
extern unsigned char DataGlobal_8876D8[44236];  // data: 0x8876D8
extern unsigned char DataGlobal_8876E0[44228];  // data: 0x8876E0
extern unsigned char DataGlobal_8876E8[44220];  // data: 0x8876E8
extern unsigned char DataGlobal_8876F0[44212];  // data: 0x8876F0
extern unsigned char DataGlobal_8876F4[44208];  // data: 0x8876F4
extern unsigned char DataGlobal_8876F8[44204];  // data: 0x8876F8
extern unsigned char DataGlobal_887700[44196];  // data: 0x887700
extern unsigned char DataGlobal_887708[44188];  // data: 0x887708
extern unsigned char DataGlobal_887710[44180];  // data: 0x887710
extern unsigned char DataGlobal_887718[44172];  // data: 0x887718
extern unsigned char DataGlobal_88771C[44168];  // data: 0x88771C
extern unsigned char DataGlobal_887720[44164];  // data: 0x887720
extern unsigned char DataGlobal_887724[44160];  // data: 0x887724
extern unsigned char DataGlobal_887728[44156];  // data: 0x887728
extern unsigned char DataGlobal_887730[44148];  // data: 0x887730
extern unsigned char DataGlobal_887738[44140];  // data: 0x887738
extern unsigned char DataGlobal_88773C[44136];  // data: 0x88773C
extern unsigned char DataGlobal_887740[44132];  // data: 0x887740
extern unsigned char DataGlobal_887744[44128];  // data: 0x887744
extern unsigned char DataGlobal_887748[44124];  // data: 0x887748
extern unsigned char DataGlobal_88774C[44120];  // data: 0x88774C
extern unsigned char DataGlobal_887750[44116];  // data: 0x887750
extern unsigned char DataGlobal_887754[44112];  // data: 0x887754
extern unsigned char DataGlobal_88776C[44088];  // data: 0x88776C
extern unsigned char DataGlobal_887778[44076];  // data: 0x887778
extern unsigned char DataGlobal_887794[44048];  // data: 0x887794
extern unsigned char DataGlobal_8877A0[44036];  // data: 0x8877A0
extern unsigned char DataGlobal_887804[43936];  // data: 0x887804
extern unsigned char DataGlobal_887814[43920];  // data: 0x887814
extern unsigned char DataGlobal_887838[43884];  // data: 0x887838
extern unsigned char DataGlobal_887840[43876];  // data: 0x887840
extern unsigned char DataGlobal_887844[43872];  // data: 0x887844
extern unsigned char DataGlobal_887848[43868];  // data: 0x887848
extern unsigned char DataGlobal_88784C[43864];  // data: 0x88784C
extern unsigned char DataGlobal_887850[43860];  // data: 0x887850
extern unsigned char DataGlobal_887858[43852];  // data: 0x887858
extern unsigned char DataGlobal_887860[43844];  // data: 0x887860
extern unsigned char DataGlobal_887868[43836];  // data: 0x887868
extern unsigned char DataGlobal_887870[43828];  // data: 0x887870
extern unsigned char DataGlobal_887874[43824];  // data: 0x887874
extern unsigned char DataGlobal_887878[43820];  // data: 0x887878
extern unsigned char DataGlobal_887880[43812];  // data: 0x887880
extern unsigned char DataGlobal_889E08[34204];  // data: 0x889E08
extern unsigned char DataGlobal_889E0C[34200];  // data: 0x889E0C
extern unsigned char DataGlobal_889E10[34196];  // data: 0x889E10
extern unsigned char DataGlobal_889E14[34192];  // data: 0x889E14
extern unsigned char DataGlobal_889E15[34191];  // data: 0x889E15
extern unsigned char DataGlobal_889E18[34188];  // data: 0x889E18
extern unsigned char DataGlobal_889E1C[34184];  // data: 0x889E1C
extern unsigned char DataGlobal_889E20[34180];  // data: 0x889E20
extern unsigned char DataGlobal_889E28[34172];  // data: 0x889E28
extern unsigned char DataGlobal_889E30[34164];  // data: 0x889E30
extern unsigned char DataGlobal_889E34[34160];  // data: 0x889E34
extern unsigned char DataGlobal_889E38[34156];  // data: 0x889E38
extern unsigned char DataGlobal_889E3C[34152];  // data: 0x889E3C
extern unsigned char DataGlobal_889E40[34148];  // data: 0x889E40
extern unsigned char DataGlobal_889E48[34140];  // data: 0x889E48
extern unsigned char DataGlobal_889E50[34132];  // data: 0x889E50
extern unsigned char DataGlobal_889E58[34124];  // data: 0x889E58
extern unsigned char DataGlobal_889E5C[34120];  // data: 0x889E5C
extern unsigned char DataGlobal_889E60[34116];  // data: 0x889E60
extern unsigned char DataGlobal_889E64[34112];  // data: 0x889E64
extern unsigned char DataGlobal_889E70[34100];  // data: 0x889E70
extern unsigned char DataGlobal_889E78[34092];  // data: 0x889E78
extern unsigned char DataGlobal_889E80[34084];  // data: 0x889E80
extern unsigned char DataGlobal_889E88[34076];  // data: 0x889E88
extern unsigned char DataGlobal_889E8C[34072];  // data: 0x889E8C
extern unsigned char DataGlobal_889E90[34068];  // data: 0x889E90
extern unsigned char DataGlobal_889E98[34060];  // data: 0x889E98
extern unsigned char DataGlobal_889EA0[34052];  // data: 0x889EA0
extern unsigned char DataGlobal_889EA8[34044];  // data: 0x889EA8
extern unsigned char DataGlobal_889EB0[34036];  // data: 0x889EB0
extern unsigned char DataGlobal_889EB4[34032];  // data: 0x889EB4
extern unsigned char DataGlobal_889EB8[34028];  // data: 0x889EB8
extern unsigned char DataGlobal_889EBC[34024];  // data: 0x889EBC
extern unsigned char DataGlobal_889EC0[34020];  // data: 0x889EC0
extern unsigned char DataGlobal_889EC8[34012];  // data: 0x889EC8
extern unsigned char DataGlobal_889ECC[34008];  // data: 0x889ECC
extern unsigned char DataGlobal_889ECD[34007];  // data: 0x889ECD
extern unsigned char DataGlobal_889ED0[34004];  // data: 0x889ED0
extern unsigned char DataGlobal_889ED8[33996];  // data: 0x889ED8
extern unsigned char DataGlobal_889EDC[33992];  // data: 0x889EDC
extern unsigned char DataGlobal_889EE0[33988];  // data: 0x889EE0
extern unsigned char DataGlobal_889EE4[33984];  // data: 0x889EE4
extern unsigned char DataGlobal_889EE8[33980];  // data: 0x889EE8
extern unsigned char DataGlobal_889EEA[33978];  // data: 0x889EEA
extern unsigned char DataGlobal_889EF0[33972];  // data: 0x889EF0
extern unsigned char DataGlobal_889EF8[33964];  // data: 0x889EF8
extern unsigned char DataGlobal_889F00[33956];  // data: 0x889F00
extern unsigned char DataGlobal_889F08[33948];  // data: 0x889F08
extern unsigned char DataGlobal_889F0C[33944];  // data: 0x889F0C
extern unsigned char DataGlobal_889F10[33940];  // data: 0x889F10
extern unsigned char DataGlobal_889F18[33932];  // data: 0x889F18
extern unsigned char DataGlobal_889F20[33924];  // data: 0x889F20
extern unsigned char DataGlobal_889F24[33920];  // data: 0x889F24
extern unsigned char DataGlobal_889F28[33916];  // data: 0x889F28
extern unsigned char DataGlobal_889F30[33908];  // data: 0x889F30
extern unsigned char DataGlobal_889F38[33900];  // data: 0x889F38
extern unsigned char DataGlobal_889F40[33892];  // data: 0x889F40
extern unsigned char DataGlobal_889F44[33888];  // data: 0x889F44
extern unsigned char DataGlobal_889F48[33884];  // data: 0x889F48
extern unsigned char DataGlobal_889F4C[33880];  // data: 0x889F4C
extern unsigned char DataGlobal_889F50[33876];  // data: 0x889F50
extern unsigned char DataGlobal_889F58[33868];  // data: 0x889F58
extern unsigned char DataGlobal_889F5C[33864];  // data: 0x889F5C
extern unsigned char DataGlobal_889F60[33860];  // data: 0x889F60
extern unsigned char DataGlobal_889F88[33820];  // data: 0x889F88
extern unsigned char DataGlobal_889F90[33812];  // data: 0x889F90
extern unsigned char DataGlobal_889F98[33804];  // data: 0x889F98
extern unsigned char DataGlobal_889FA0[33796];  // data: 0x889FA0
extern unsigned char DataGlobal_889FA4[33792];  // data: 0x889FA4
extern unsigned char DataGlobal_889FA8[33788];  // data: 0x889FA8
extern unsigned char DataGlobal_889FB0[33780];  // data: 0x889FB0
extern unsigned char DataGlobal_889FB8[33772];  // data: 0x889FB8
extern unsigned char DataGlobal_889FBC[33768];  // data: 0x889FBC
extern unsigned char DataGlobal_889FC0[33764];  // data: 0x889FC0
extern unsigned char DataGlobal_889FC4[33760];  // data: 0x889FC4
extern unsigned char DataGlobal_889FC5[33759];  // data: 0x889FC5
extern unsigned char DataGlobal_889FC8[33756];  // data: 0x889FC8
extern unsigned char DataGlobal_889FCC[33752];  // data: 0x889FCC
extern unsigned char DataGlobal_889FD0[33748];  // data: 0x889FD0
extern unsigned char DataGlobal_889FD8[33740];  // data: 0x889FD8
extern unsigned char DataGlobal_889FE0[33732];  // data: 0x889FE0
extern unsigned char DataGlobal_889FE4[33728];  // data: 0x889FE4
extern unsigned char DataGlobal_889FE8[33724];  // data: 0x889FE8
extern unsigned char DataGlobal_889FEC[33720];  // data: 0x889FEC
extern unsigned char DataGlobal_889FF0[33716];  // data: 0x889FF0
extern unsigned char DataGlobal_889FF8[33708];  // data: 0x889FF8
extern unsigned char DataGlobal_88A000[33700];  // data: 0x88A000
extern unsigned char DataGlobal_88A008[33692];  // data: 0x88A008
extern unsigned char DataGlobal_88A00C[33688];  // data: 0x88A00C
extern unsigned char DataGlobal_88A010[33684];  // data: 0x88A010
extern unsigned char DataGlobal_88A014[33680];  // data: 0x88A014
extern unsigned char DataGlobal_88A018[33676];  // data: 0x88A018
extern unsigned char DataGlobal_88A01A[33674];  // data: 0x88A01A
extern unsigned char DataGlobal_88A020[33668];  // data: 0x88A020
extern unsigned char DataGlobal_88A028[33660];  // data: 0x88A028
extern unsigned char DataGlobal_88A030[33652];  // data: 0x88A030
extern unsigned char DataGlobal_88A038[33644];  // data: 0x88A038
extern unsigned char DataGlobal_88A03C[33640];  // data: 0x88A03C
extern unsigned char DataGlobal_88A040[33636];  // data: 0x88A040
extern unsigned char DataGlobal_88A048[33628];  // data: 0x88A048
extern unsigned char DataGlobal_88A050[33620];  // data: 0x88A050
extern unsigned char DataGlobal_88A058[33612];  // data: 0x88A058
extern unsigned char DataGlobal_88A060[33604];  // data: 0x88A060
extern unsigned char DataGlobal_88A064[33600];  // data: 0x88A064
extern unsigned char DataGlobal_88A068[33596];  // data: 0x88A068
extern unsigned char DataGlobal_88A06C[33592];  // data: 0x88A06C
extern unsigned char DataGlobal_88A070[33588];  // data: 0x88A070
extern unsigned char DataGlobal_88A078[33580];  // data: 0x88A078
extern unsigned char DataGlobal_88A080[33572];  // data: 0x88A080
extern unsigned char DataGlobal_88A084[33568];  // data: 0x88A084
extern unsigned char DataGlobal_88A088[33564];  // data: 0x88A088
extern unsigned char DataGlobal_88A08C[33560];  // data: 0x88A08C
extern unsigned char DataGlobal_88A08D[33559];  // data: 0x88A08D
extern unsigned char DataGlobal_88A090[33556];  // data: 0x88A090
extern unsigned char DataGlobal_88A094[33552];  // data: 0x88A094
extern unsigned char DataGlobal_88A098[33548];  // data: 0x88A098
extern unsigned char DataGlobal_88A0A0[33540];  // data: 0x88A0A0
extern unsigned char DataGlobal_88A0A8[33532];  // data: 0x88A0A8
extern unsigned char DataGlobal_88A0AC[33528];  // data: 0x88A0AC
extern unsigned char DataGlobal_88A0B0[33524];  // data: 0x88A0B0
extern unsigned char DataGlobal_88A0B4[33520];  // data: 0x88A0B4
extern unsigned char DataGlobal_88A0B8[33516];  // data: 0x88A0B8
extern unsigned char DataGlobal_88A0BA[33514];  // data: 0x88A0BA
extern unsigned char DataGlobal_88A0C0[33508];  // data: 0x88A0C0
extern unsigned char DataGlobal_88A0C8[33500];  // data: 0x88A0C8
extern unsigned char DataGlobal_88A0D0[33492];  // data: 0x88A0D0
extern unsigned char DataGlobal_88A0D8[33484];  // data: 0x88A0D8
extern unsigned char DataGlobal_88A0DC[33480];  // data: 0x88A0DC
extern unsigned char DataGlobal_88A0E0[33476];  // data: 0x88A0E0
extern unsigned char DataGlobal_88A0E8[33468];  // data: 0x88A0E8
extern unsigned char DataGlobal_88A0F0[33460];  // data: 0x88A0F0
extern unsigned char DataGlobal_88A0F4[33456];  // data: 0x88A0F4
extern unsigned char DataGlobal_88A0F8[33452];  // data: 0x88A0F8
extern unsigned char DataGlobal_88A0FC[33448];  // data: 0x88A0FC
extern unsigned char DataGlobal_88A0FD[33447];  // data: 0x88A0FD
extern unsigned char DataGlobal_88A104[33440];  // data: 0x88A104
extern unsigned char DataGlobal_88A108[33436];  // data: 0x88A108
extern unsigned char DataGlobal_88A110[33428];  // data: 0x88A110
extern unsigned char DataGlobal_88A118[33420];  // data: 0x88A118
extern unsigned char DataGlobal_89A118[4];  // data: 0x89A118
extern unsigned char DataGlobal_89A11C[4];  // data: 0x89A11C
extern unsigned char DataGlobal_89A120[4];  // data: 0x89A120
extern unsigned char DataGlobal_89A124[4];  // data: 0x89A124
extern unsigned char DataGlobal_89A128[4];  // data: 0x89A128
extern unsigned char DataGlobal_89A130[4];  // data: 0x89A130
extern unsigned char DataGlobal_89A134[4];  // data: 0x89A134
extern unsigned char DataGlobal_89A138[4];  // data: 0x89A138
extern unsigned char DataGlobal_89A140[4];  // data: 0x89A140
extern unsigned char DataGlobal_89A144[4];  // data: 0x89A144
extern unsigned char DataGlobal_89A148[4];  // data: 0x89A148
extern unsigned char DataGlobal_89A14C[4];  // data: 0x89A14C
extern unsigned char DataGlobal_89A158[4];  // data: 0x89A158
extern unsigned char DataGlobal_89A160[4];  // data: 0x89A160
extern unsigned char DataGlobal_89A168[4];  // data: 0x89A168
extern unsigned char DataGlobal_89A170[4];  // data: 0x89A170
extern unsigned char DataGlobal_89A188[4];  // data: 0x89A188
extern unsigned char DataGlobal_89A190[4];  // data: 0x89A190
extern unsigned char DataGlobal_89A198[4];  // data: 0x89A198
extern unsigned char DataGlobal_89A1A0[4];  // data: 0x89A1A0
extern unsigned char DataGlobal_89A1A8[4];  // data: 0x89A1A8
extern unsigned char DataGlobal_89A1AC[4];  // data: 0x89A1AC
extern unsigned char DataGlobal_89A1B0[4];  // data: 0x89A1B0
extern unsigned char DataGlobal_89A1B8[4];  // data: 0x89A1B8
extern unsigned char DataGlobal_89A1C8[4];  // data: 0x89A1C8
extern unsigned char DataGlobal_89A1CC[4];  // data: 0x89A1CC
extern unsigned char DataGlobal_89A1D0[4];  // data: 0x89A1D0
extern unsigned char DataGlobal_89A1D4[4];  // data: 0x89A1D4
extern unsigned char DataGlobal_89A1D8[4];  // data: 0x89A1D8
extern unsigned char DataGlobal_89A1E0[4];  // data: 0x89A1E0
extern unsigned char DataGlobal_89A1E4[4];  // data: 0x89A1E4
extern unsigned char DataGlobal_89A1E8[4];  // data: 0x89A1E8
extern unsigned char DataGlobal_89A1EC[4];  // data: 0x89A1EC
extern unsigned char DataGlobal_89A1F0[4];  // data: 0x89A1F0
extern unsigned char DataGlobal_89A1F2[4];  // data: 0x89A1F2
extern unsigned char DataGlobal_89A1F8[4];  // data: 0x89A1F8
extern unsigned char DataGlobal_89A200[4];  // data: 0x89A200
extern unsigned char DataGlobal_89A208[4];  // data: 0x89A208
extern unsigned char DataGlobal_89A210[4];  // data: 0x89A210
extern unsigned char DataGlobal_89A214[4];  // data: 0x89A214
extern unsigned char DataGlobal_89A218[4];  // data: 0x89A218
extern unsigned char DataGlobal_89A220[4];  // data: 0x89A220
extern unsigned char DataGlobal_89A228[4];  // data: 0x89A228
extern unsigned char DataGlobal_89A230[4];  // data: 0x89A230
extern unsigned char DataGlobal_89A238[4];  // data: 0x89A238
extern unsigned char DataGlobal_89A23C[4];  // data: 0x89A23C
extern unsigned char DataGlobal_89A240[4];  // data: 0x89A240
extern unsigned char DataGlobal_89A244[4];  // data: 0x89A244
extern unsigned char DataGlobal_89A248[4];  // data: 0x89A248
extern unsigned char DataGlobal_89A250[4];  // data: 0x89A250
extern unsigned char DataGlobal_89A258[4];  // data: 0x89A258
extern unsigned char DataGlobal_89A260[4];  // data: 0x89A260
extern unsigned char DataGlobal_89A264[4];  // data: 0x89A264
extern unsigned char DataGlobal_89A268[4];  // data: 0x89A268
extern unsigned char DataGlobal_89A26C[4];  // data: 0x89A26C
extern unsigned char DataGlobal_89A270[4];  // data: 0x89A270
extern unsigned char DataGlobal_89A272[4];  // data: 0x89A272
extern unsigned char DataGlobal_89A278[4];  // data: 0x89A278
extern unsigned char DataGlobal_89A280[4];  // data: 0x89A280
extern unsigned char DataGlobal_89A288[4];  // data: 0x89A288
extern unsigned char DataGlobal_89A290[4];  // data: 0x89A290
extern unsigned char DataGlobal_89A294[4];  // data: 0x89A294
extern unsigned char DataGlobal_89A298[4];  // data: 0x89A298
extern unsigned char DataGlobal_89A2A0[4];  // data: 0x89A2A0
extern unsigned char DataGlobal_89A2A8[4];  // data: 0x89A2A8
extern unsigned char DataGlobal_89A2B0[4];  // data: 0x89A2B0
extern unsigned char DataGlobal_89A2B8[4];  // data: 0x89A2B8
extern unsigned char DataGlobal_89A2BC[4];  // data: 0x89A2BC
extern unsigned char DataGlobal_89A2C0[4];  // data: 0x89A2C0
extern unsigned char DataGlobal_89A2C4[4];  // data: 0x89A2C4
extern unsigned char DataGlobal_89A2C8[4];  // data: 0x89A2C8
extern unsigned char DataGlobal_89A2D0[4];  // data: 0x89A2D0
extern unsigned char DataGlobal_89A2DC[4];  // data: 0x89A2DC
extern unsigned char DataGlobal_89A2E0[4];  // data: 0x89A2E0
extern unsigned char DataGlobal_89A2E4[4];  // data: 0x89A2E4
extern unsigned char DataGlobal_89A2E8[4];  // data: 0x89A2E8
extern unsigned char DataGlobal_89A2EC[4];  // data: 0x89A2EC
extern unsigned char DataGlobal_89A2F0[4];  // data: 0x89A2F0
extern unsigned char DataGlobal_89A2F2[4];  // data: 0x89A2F2
extern unsigned char DataGlobal_89A2F8[4];  // data: 0x89A2F8
extern unsigned char DataGlobal_89A300[4];  // data: 0x89A300
extern unsigned char DataGlobal_89A30C;  // data: 0x89A30C
extern unsigned char DataGlobal_89A314;  // data: 0x89A314
extern unsigned char DataGlobal_89A324[4];  // data: 0x89A324
extern unsigned char DataGlobal_89C268[4];  // data: 0x89C268
extern unsigned char DataGlobal_89C26C[4];  // data: 0x89C26C
extern unsigned char DataGlobal_89C270[4];  // data: 0x89C270
extern unsigned char DataGlobal_89C274[4];  // data: 0x89C274
extern unsigned char DataGlobal_89C280[4];  // data: 0x89C280
extern unsigned char DataGlobal_89C288[4];  // data: 0x89C288
extern unsigned char DataGlobal_89C290[4];  // data: 0x89C290
extern unsigned char DataGlobal_89C298[4];  // data: 0x89C298
extern unsigned char DataGlobal_89C29C[4];  // data: 0x89C29C
extern unsigned char DataGlobal_89C2A0[4];  // data: 0x89C2A0
extern unsigned char DataGlobal_89C2A8[4];  // data: 0x89C2A8
extern unsigned char DataGlobal_89C2B0[4];  // data: 0x89C2B0
extern unsigned char DataGlobal_89C2B8[4];  // data: 0x89C2B8
extern unsigned char DataGlobal_89C2C0[4];  // data: 0x89C2C0
extern unsigned char DataGlobal_89C2C4[4];  // data: 0x89C2C4
extern unsigned char DataGlobal_89C2C8[4];  // data: 0x89C2C8
extern unsigned char DataGlobal_89C2CC[4];  // data: 0x89C2CC
extern unsigned char DataGlobal_89C2D0[4];  // data: 0x89C2D0
extern unsigned char DataGlobal_89C2D8[4];  // data: 0x89C2D8
extern unsigned char DataGlobal_89C2E8[4];  // data: 0x89C2E8
extern unsigned char DataGlobal_89C2EC[4];  // data: 0x89C2EC
extern unsigned char DataGlobal_89C2F0[4];  // data: 0x89C2F0
extern unsigned char DataGlobal_89C2F4[4];  // data: 0x89C2F4
extern unsigned char DataGlobal_89C2F8[4];  // data: 0x89C2F8
extern unsigned char DataGlobal_89C300[4];  // data: 0x89C300
extern unsigned char DataGlobal_89C304[4];  // data: 0x89C304
extern unsigned char DataGlobal_89C308[4];  // data: 0x89C308
extern unsigned char DataGlobal_89C30C[4];  // data: 0x89C30C
extern unsigned char DataGlobal_89C310[4];  // data: 0x89C310
extern unsigned char DataGlobal_89C318[4];  // data: 0x89C318
extern unsigned char DataGlobal_89C320[4];  // data: 0x89C320
extern unsigned char DataGlobal_89C328[4];  // data: 0x89C328
extern unsigned char DataGlobal_89C330[4];  // data: 0x89C330
extern unsigned char DataGlobal_89C334[4];  // data: 0x89C334
extern unsigned char DataGlobal_89C338[4];  // data: 0x89C338
extern unsigned char DataGlobal_89C340[4];  // data: 0x89C340
extern unsigned char DataGlobal_89C348[4];  // data: 0x89C348
extern unsigned char DataGlobal_89C350[4];  // data: 0x89C350
extern unsigned char DataGlobal_89C358[4];  // data: 0x89C358
extern unsigned char DataGlobal_89C35C[4];  // data: 0x89C35C
extern unsigned char DataGlobal_89C360[4];  // data: 0x89C360
extern unsigned char DataGlobal_89C364[4];  // data: 0x89C364
extern unsigned char DataGlobal_89C368[4];  // data: 0x89C368
extern unsigned char DataGlobal_89C370[4];  // data: 0x89C370
extern unsigned char DataGlobal_89C374[4];  // data: 0x89C374
extern unsigned char DataGlobal_89C378[4];  // data: 0x89C378
extern unsigned char DataGlobal_89C380[4];  // data: 0x89C380
extern unsigned char DataGlobal_89C384[4];  // data: 0x89C384
extern unsigned char DataGlobal_89C388[4];  // data: 0x89C388
extern unsigned char DataGlobal_89C38C[4];  // data: 0x89C38C
extern unsigned char DataGlobal_89C390[4];  // data: 0x89C390
extern unsigned char DataGlobal_89C392[4];  // data: 0x89C392
extern unsigned char DataGlobal_89C398[4];  // data: 0x89C398
extern unsigned char DataGlobal_89C3A0[4];  // data: 0x89C3A0
extern unsigned char DataGlobal_89C3A8[4];  // data: 0x89C3A8
extern unsigned char DataGlobal_89C410[4];  // data: 0x89C410
extern unsigned char DataGlobal_89C42C[4];  // data: 0x89C42C
extern unsigned char DataGlobal_89C430[4];  // data: 0x89C430
extern unsigned char DataGlobal_89C434[4];  // data: 0x89C434
extern unsigned char DataGlobal_89C438[4];  // data: 0x89C438
extern unsigned char DataGlobal_89C440[4];  // data: 0x89C440
extern unsigned char DataGlobal_89C448[4];  // data: 0x89C448
extern unsigned char DataGlobal_89C450[4];  // data: 0x89C450
extern unsigned char DataGlobal_89C458[4];  // data: 0x89C458
extern unsigned char DataGlobal_89C45C[4];  // data: 0x89C45C
extern unsigned char DataGlobal_89C460[4];  // data: 0x89C460
extern unsigned char DataGlobal_89C464[4];  // data: 0x89C464
extern unsigned char DataGlobal_89C468[4];  // data: 0x89C468
extern unsigned char DataGlobal_89C470[4];  // data: 0x89C470
extern unsigned char DataGlobal_89C480[4];  // data: 0x89C480
extern unsigned char DataGlobal_89C484[4];  // data: 0x89C484
extern unsigned char DataGlobal_89C488[4];  // data: 0x89C488
extern unsigned char DataGlobal_89C48C[4];  // data: 0x89C48C
extern unsigned char DataGlobal_89C498[4];  // data: 0x89C498
extern unsigned char DataGlobal_89C49C[4];  // data: 0x89C49C
extern unsigned char DataGlobal_89C4A0[4];  // data: 0x89C4A0
extern unsigned char DataGlobal_89C4A4[4];  // data: 0x89C4A4
extern unsigned char DataGlobal_89C4A8[4];  // data: 0x89C4A8
extern unsigned char DataGlobal_89C4AC[4];  // data: 0x89C4AC
extern unsigned char DataGlobal_89C4B0[4];  // data: 0x89C4B0
extern unsigned char DataGlobal_89C4B4[4];  // data: 0x89C4B4
extern unsigned char DataGlobal_89C4B8[4];  // data: 0x89C4B8
extern unsigned char DataGlobal_89C4C0[4];  // data: 0x89C4C0
extern unsigned char DataGlobal_89C4C4[4];  // data: 0x89C4C4
extern unsigned char DataGlobal_89C4C8[4];  // data: 0x89C4C8
extern unsigned char DataGlobal_89C4CC[4];  // data: 0x89C4CC
extern unsigned char DataGlobal_89C4D8[4];  // data: 0x89C4D8
extern unsigned char DataGlobal_89C4E0[4];  // data: 0x89C4E0
extern unsigned char DataGlobal_89C4E4[4];  // data: 0x89C4E4
extern unsigned char DataGlobal_89C4E8[4];  // data: 0x89C4E8
extern unsigned char DataGlobal_89C4EC[4];  // data: 0x89C4EC
extern unsigned char DataGlobal_89C4F0[4];  // data: 0x89C4F0
extern unsigned char DataGlobal_89C4F8[4];  // data: 0x89C4F8
extern unsigned char DataGlobal_89C500[4];  // data: 0x89C500
extern unsigned char DataGlobal_89C508[4];  // data: 0x89C508
extern unsigned char DataGlobal_89C510[4];  // data: 0x89C510
extern unsigned char DataGlobal_89C514[4];  // data: 0x89C514
extern unsigned char DataGlobal_89C518[4];  // data: 0x89C518
extern unsigned char DataGlobal_89C520[4];  // data: 0x89C520
extern unsigned char DataGlobal_89C528[4];  // data: 0x89C528
extern unsigned char DataGlobal_89C530[4];  // data: 0x89C530
extern unsigned char DataGlobal_89C538[4];  // data: 0x89C538
extern unsigned char DataGlobal_89C53C[4];  // data: 0x89C53C
extern unsigned char DataGlobal_89C540[4];  // data: 0x89C540
extern unsigned char DataGlobal_89C544[4];  // data: 0x89C544
extern unsigned char DataGlobal_89C548[4];  // data: 0x89C548
extern unsigned char DataGlobal_89C550[4];  // data: 0x89C550
extern unsigned char DataGlobal_89C558[4];  // data: 0x89C558
extern unsigned char DataGlobal_89C55C[4];  // data: 0x89C55C
extern unsigned char DataGlobal_89C560[4];  // data: 0x89C560
extern unsigned char DataGlobal_89C564[4];  // data: 0x89C564
extern unsigned char DataGlobal_89C568[4];  // data: 0x89C568
extern unsigned char DataGlobal_89C66C[4];  // data: 0x89C66C
extern unsigned char DataGlobal_89C674[4];  // data: 0x89C674
extern unsigned char DataGlobal_89C675[4];  // data: 0x89C675
extern unsigned char DataGlobal_89C680[4];  // data: 0x89C680
extern unsigned char DataGlobal_89C688[4];  // data: 0x89C688
extern unsigned char DataGlobal_89C68C[4];  // data: 0x89C68C
extern unsigned char DataGlobal_89C690[4];  // data: 0x89C690
extern unsigned char DataGlobal_89C694[4];  // data: 0x89C694
extern unsigned char DataGlobal_89C698[4];  // data: 0x89C698
extern unsigned char DataGlobal_89C69A[4];  // data: 0x89C69A
extern unsigned char DataGlobal_89C6A0[4];  // data: 0x89C6A0
extern unsigned char DataGlobal_89C6A8[4];  // data: 0x89C6A8
extern unsigned char DataGlobal_89C6B0[4];  // data: 0x89C6B0
extern unsigned char DataGlobal_89C6B8[4];  // data: 0x89C6B8
extern unsigned char DataGlobal_89C6BC[4];  // data: 0x89C6BC
extern unsigned char DataGlobal_89C6C0[4];  // data: 0x89C6C0
extern unsigned char DataGlobal_89C6C8[4];  // data: 0x89C6C8
extern unsigned char DataGlobal_89C6D0[4];  // data: 0x89C6D0
extern unsigned char DataGlobal_89C6D8[4];  // data: 0x89C6D8
extern unsigned char DataGlobal_89C6E0[4];  // data: 0x89C6E0
extern unsigned char DataGlobal_89C6E4[4];  // data: 0x89C6E4
extern unsigned char DataGlobal_89C6E8[4];  // data: 0x89C6E8
extern unsigned char DataGlobal_89C6EC[4];  // data: 0x89C6EC
extern unsigned char DataGlobal_89C6F0[4];  // data: 0x89C6F0
extern unsigned char DataGlobal_89C6F8[4];  // data: 0x89C6F8
extern unsigned char DataGlobal_89C700[4];  // data: 0x89C700
extern unsigned char DataGlobal_89C708[4];  // data: 0x89C708
extern unsigned char DataGlobal_89C70C[4];  // data: 0x89C70C
extern unsigned char DataGlobal_89C710[4];  // data: 0x89C710
extern unsigned char DataGlobal_89C714[4];  // data: 0x89C714
extern unsigned char DataGlobal_89C718[4];  // data: 0x89C718
extern unsigned char DataGlobal_89C71A[4];  // data: 0x89C71A
extern unsigned char DataGlobal_89C720[4];  // data: 0x89C720
extern unsigned char DataGlobal_89C728[4];  // data: 0x89C728
extern unsigned char DataGlobal_89C730[4];  // data: 0x89C730
extern unsigned char DataGlobal_89C738[4];  // data: 0x89C738
extern unsigned char DataGlobal_89C73C[4];  // data: 0x89C73C
extern unsigned char DataGlobal_89C740[4];  // data: 0x89C740
extern unsigned char DataGlobal_89C748[4];  // data: 0x89C748
extern unsigned char DataGlobal_89C750[4];  // data: 0x89C750
extern unsigned char DataGlobal_89C758[4];  // data: 0x89C758
extern unsigned char DataGlobal_89C760[4];  // data: 0x89C760
extern unsigned char DataGlobal_89C764[4];  // data: 0x89C764
extern unsigned char DataGlobal_89C768[4];  // data: 0x89C768
extern unsigned char DataGlobal_89C76C[4];  // data: 0x89C76C
extern unsigned char DataGlobal_89C770[4];  // data: 0x89C770
extern unsigned char DataGlobal_89C778[4];  // data: 0x89C778
extern unsigned char DataGlobal_89C780[4];  // data: 0x89C780
extern unsigned char DataGlobal_89C788[4];  // data: 0x89C788
extern unsigned char DataGlobal_89C78A[4];  // data: 0x89C78A
extern unsigned char DataGlobal_89C790[4];  // data: 0x89C790
extern unsigned char DataGlobal_89C798[4];  // data: 0x89C798
extern unsigned char DataGlobal_89C7A0[4];  // data: 0x89C7A0
extern unsigned char DataGlobal_89C7A8[4];  // data: 0x89C7A8
extern unsigned char DataGlobal_89C7AC[4];  // data: 0x89C7AC
extern unsigned char DataGlobal_89C7B0[4];  // data: 0x89C7B0
extern unsigned char DataGlobal_89C7B8[4];  // data: 0x89C7B8
extern unsigned char DataGlobal_89C7C0[4];  // data: 0x89C7C0
extern unsigned char DataGlobal_89C7C8[4];  // data: 0x89C7C8
extern unsigned char DataGlobal_89C7D0[4];  // data: 0x89C7D0
extern unsigned char DataGlobal_89C7D4[4];  // data: 0x89C7D4
extern unsigned char DataGlobal_89C7D8[4];  // data: 0x89C7D8
extern unsigned char DataGlobal_89C7DC[4];  // data: 0x89C7DC
extern unsigned char DataGlobal_89C7E0[4];  // data: 0x89C7E0
extern unsigned char DataGlobal_89C7E8[4];  // data: 0x89C7E8
extern unsigned char DataGlobal_89C7F0[4];  // data: 0x89C7F0
extern unsigned char DataGlobal_89C7F8[4];  // data: 0x89C7F8
extern unsigned char DataGlobal_89C808[4];  // data: 0x89C808
extern unsigned char DataGlobal_89C80C[4];  // data: 0x89C80C
extern unsigned char DataGlobal_89C810[4];  // data: 0x89C810
extern unsigned char DataGlobal_89C814[4];  // data: 0x89C814
extern unsigned char DataGlobal_89C820[4];  // data: 0x89C820
extern unsigned char DataGlobal_89C828[4];  // data: 0x89C828
extern unsigned char DataGlobal_89C830[4];  // data: 0x89C830
extern unsigned char DataGlobal_89C840[4];  // data: 0x89C840
extern unsigned char DataGlobal_89C84C[4];  // data: 0x89C84C
extern unsigned char DataGlobal_89C850[4];  // data: 0x89C850
extern unsigned char DataGlobal_89C858[4];  // data: 0x89C858
extern unsigned char DataGlobal_89C860[4];  // data: 0x89C860
extern unsigned char DataGlobal_89C868[4];  // data: 0x89C868
extern unsigned char DataGlobal_89C870[4];  // data: 0x89C870
extern unsigned char DataGlobal_89C874[4];  // data: 0x89C874
extern unsigned char DataGlobal_89C878[4];  // data: 0x89C878
extern unsigned char DataGlobal_89C87C[4];  // data: 0x89C87C
extern unsigned char DataGlobal_89C880[4];  // data: 0x89C880
extern unsigned char DataGlobal_89C888[4];  // data: 0x89C888
extern unsigned char DataGlobal_89C890[4];  // data: 0x89C890
extern unsigned char DataGlobal_89C898[4];  // data: 0x89C898
extern unsigned char DataGlobal_89C8A0[4];  // data: 0x89C8A0
extern unsigned char DataGlobal_89C8A4[4];  // data: 0x89C8A4
extern unsigned char DataGlobal_89C8A8[4];  // data: 0x89C8A8
extern unsigned char DataGlobal_89C8AC[4];  // data: 0x89C8AC
extern unsigned char DataGlobal_89C8B0[4];  // data: 0x89C8B0
extern unsigned char DataGlobal_89C8B2[4];  // data: 0x89C8B2
extern unsigned char DataGlobal_89C8B8[4];  // data: 0x89C8B8
extern unsigned char DataGlobal_89C8C0[4];  // data: 0x89C8C0
extern unsigned char DataGlobal_89C8C8[4];  // data: 0x89C8C8
extern unsigned char DataGlobal_89C8D0[4];  // data: 0x89C8D0
extern unsigned char DataGlobal_89C8D4[4];  // data: 0x89C8D4
extern unsigned char DataGlobal_89C8D8[4];  // data: 0x89C8D8
extern unsigned char DataGlobal_89C8E0[4];  // data: 0x89C8E0
extern unsigned char DataGlobal_89C8E8[4];  // data: 0x89C8E8
extern unsigned char DataGlobal_89C8F0[4];  // data: 0x89C8F0
extern unsigned char DataGlobal_89C8F8[4];  // data: 0x89C8F8
extern unsigned char DataGlobal_89C900[4];  // data: 0x89C900
extern unsigned char DataGlobal_89D350[4];  // data: 0x89D350
extern unsigned char DataGlobal_89D354[4];  // data: 0x89D354
extern unsigned char DataGlobal_89D358[4];  // data: 0x89D358
extern unsigned char DataGlobal_89D35C[4];  // data: 0x89D35C
extern unsigned char DataGlobal_89D360[4];  // data: 0x89D360
extern unsigned char DataGlobal_89D368[4];  // data: 0x89D368
extern unsigned char DataGlobal_89D36C[4];  // data: 0x89D36C
extern unsigned char DataGlobal_89D370[4];  // data: 0x89D370
extern unsigned char DataGlobal_89D374[4];  // data: 0x89D374
extern unsigned char DataGlobal_89D378[4];  // data: 0x89D378
extern unsigned char DataGlobal_89D37C[4];  // data: 0x89D37C
extern unsigned char DataGlobal_89D380[4];  // data: 0x89D380
extern unsigned char DataGlobal_89D384[4];  // data: 0x89D384
extern unsigned char DataGlobal_89D388[4];  // data: 0x89D388
extern unsigned char DataGlobal_89D38C[4];  // data: 0x89D38C
extern unsigned char DataGlobal_89D3E0[4];  // data: 0x89D3E0
extern unsigned char DataGlobal_89D3E4[4];  // data: 0x89D3E4
extern unsigned char DataGlobal_89D3E8[4];  // data: 0x89D3E8
extern unsigned char DataGlobal_89D3EC[4];  // data: 0x89D3EC
extern unsigned char DataGlobal_89D3F0[4];  // data: 0x89D3F0
extern unsigned char DataGlobal_89D3F4[4];  // data: 0x89D3F4
extern unsigned char DataGlobal_89D3F8[4];  // data: 0x89D3F8
extern unsigned char DataGlobal_89D3FC[4];  // data: 0x89D3FC
extern unsigned char DataGlobal_89D400[4];  // data: 0x89D400
extern unsigned char DataGlobal_89D404[4];  // data: 0x89D404
extern unsigned char DataGlobal_89D408[4];  // data: 0x89D408
extern unsigned char DataGlobal_89D40C[4];  // data: 0x89D40C
extern unsigned char DataGlobal_89D458[4];  // data: 0x89D458
extern unsigned char DataGlobal_89D45C[4];  // data: 0x89D45C
extern unsigned char DataGlobal_89D460[4];  // data: 0x89D460
extern unsigned char DataGlobal_89D464[4];  // data: 0x89D464
extern unsigned char DataGlobal_89DDB8[4];  // data: 0x89DDB8
extern unsigned char DataGlobal_89DDBC[4];  // data: 0x89DDBC
extern unsigned char DataGlobal_89DDD0[4];  // data: 0x89DDD0
extern unsigned char DataGlobal_89DDD8[4];  // data: 0x89DDD8
extern unsigned char DataGlobal_89DDE0[4];  // data: 0x89DDE0
extern unsigned char DataGlobal_89DDE4[4];  // data: 0x89DDE4
extern unsigned char DataGlobal_89DDE8[4];  // data: 0x89DDE8
extern unsigned char DataGlobal_89DDEC[4];  // data: 0x89DDEC
extern unsigned char DataGlobal_89DDF4[4];  // data: 0x89DDF4
extern unsigned char DataGlobal_89DDF8[4];  // data: 0x89DDF8
extern unsigned char DataGlobal_89DE00[4];  // data: 0x89DE00
extern unsigned char DataGlobal_89DE08[4];  // data: 0x89DE08
extern unsigned char DataGlobal_89DE10[4];  // data: 0x89DE10
extern unsigned char DataGlobal_89DE18[4];  // data: 0x89DE18
extern unsigned char DataGlobal_89DE1C[4];  // data: 0x89DE1C
extern unsigned char DataGlobal_89DE20[4];  // data: 0x89DE20
extern unsigned char DataGlobal_89DE24[4];  // data: 0x89DE24
extern unsigned char DataGlobal_89DE25[4];  // data: 0x89DE25
extern unsigned char DataGlobal_89DE28[4];  // data: 0x89DE28
extern unsigned char DataGlobal_89DE2C[4];  // data: 0x89DE2C
extern unsigned char DataGlobal_89DE40[4];  // data: 0x89DE40
extern unsigned char DataGlobal_89DE48[4];  // data: 0x89DE48
extern unsigned char DataGlobal_89DE50[4];  // data: 0x89DE50
extern unsigned char DataGlobal_89DE58[4];  // data: 0x89DE58
extern unsigned char DataGlobal_89DE5C[4];  // data: 0x89DE5C
extern unsigned char DataGlobal_89DE60[4];  // data: 0x89DE60
extern unsigned char DataGlobal_89DE64[4];  // data: 0x89DE64
extern unsigned char DataGlobal_89DE68[4];  // data: 0x89DE68
extern unsigned char DataGlobal_89DE70[4];  // data: 0x89DE70
extern unsigned char DataGlobal_89DE78[4];  // data: 0x89DE78
extern unsigned char DataGlobal_89DE80[4];  // data: 0x89DE80
extern unsigned char DataGlobal_89DE84[4];  // data: 0x89DE84
extern unsigned char DataGlobal_89DE88[4];  // data: 0x89DE88
extern unsigned char DataGlobal_89DE8C[4];  // data: 0x89DE8C
extern unsigned char DataGlobal_89DE90[4];  // data: 0x89DE90
extern unsigned char DataGlobal_89DE92[4];  // data: 0x89DE92
extern unsigned char DataGlobal_89DE98[4];  // data: 0x89DE98
extern unsigned char DataGlobal_89DEA0[4];  // data: 0x89DEA0
extern unsigned char DataGlobal_89DEA8[4];  // data: 0x89DEA8
extern unsigned char DataGlobal_89DEB0[4];  // data: 0x89DEB0
extern unsigned char DataGlobal_89DEB4[4];  // data: 0x89DEB4
extern unsigned char DataGlobal_89DEB8[4];  // data: 0x89DEB8
extern unsigned char DataGlobal_89DEC0[4];  // data: 0x89DEC0
extern unsigned char DataGlobal_89DEC8[4];  // data: 0x89DEC8
extern unsigned char DataGlobal_89DED0[4];  // data: 0x89DED0
extern unsigned char DataGlobal_89DED8[4];  // data: 0x89DED8
extern unsigned char DataGlobal_89DEDC[4];  // data: 0x89DEDC
extern unsigned char DataGlobal_89DEE0[4];  // data: 0x89DEE0
extern unsigned char DataGlobal_89DEE4[4];  // data: 0x89DEE4
extern unsigned char DataGlobal_89DEE8[4];  // data: 0x89DEE8
extern unsigned char DataGlobal_89DEF0[4];  // data: 0x89DEF0
extern unsigned char DataGlobal_89DEF8[4];  // data: 0x89DEF8
extern unsigned char DataGlobal_89DF00[4];  // data: 0x89DF00
extern unsigned char DataGlobal_89DF02[4];  // data: 0x89DF02
extern unsigned char DataGlobal_89DF08[4];  // data: 0x89DF08
extern unsigned char DataGlobal_89DF10[4];  // data: 0x89DF10
extern unsigned char DataGlobal_89DF18[4];  // data: 0x89DF18
extern unsigned char DataGlobal_89DF20[4];  // data: 0x89DF20
extern unsigned char DataGlobal_89DF24[4];  // data: 0x89DF24
extern unsigned char DataGlobal_89DF28[4];  // data: 0x89DF28
extern unsigned char DataGlobal_89DF30[4];  // data: 0x89DF30
extern unsigned char DataGlobal_89DF38[4];  // data: 0x89DF38
extern unsigned char DataGlobal_89DF40[4];  // data: 0x89DF40
extern unsigned char DataGlobal_89DF48[4];  // data: 0x89DF48
extern unsigned char DataGlobal_89DF4C[4];  // data: 0x89DF4C
extern unsigned char DataGlobal_89DF50[4];  // data: 0x89DF50
extern unsigned char DataGlobal_89DF54[4];  // data: 0x89DF54
extern unsigned char DataGlobal_89DF58[4];  // data: 0x89DF58
extern unsigned char DataGlobal_89DF60[4];  // data: 0x89DF60
extern unsigned char DataGlobal_89DF68[4];  // data: 0x89DF68
extern unsigned char DataGlobal_89DF70[4];  // data: 0x89DF70
extern unsigned char DataGlobal_89DF74[4];  // data: 0x89DF74
extern unsigned char DataGlobal_89DF78[4];  // data: 0x89DF78
extern unsigned char DataGlobal_89DF7C[4];  // data: 0x89DF7C
extern unsigned char DataGlobal_89DFA0[4];  // data: 0x89DFA0
extern unsigned char DataGlobal_89DFA2[4];  // data: 0x89DFA2
extern unsigned char DataGlobal_89DFA8[4];  // data: 0x89DFA8
extern unsigned char DataGlobal_89DFB0[4];  // data: 0x89DFB0
extern unsigned char DataGlobal_89DFB8[4];  // data: 0x89DFB8
extern unsigned char DataGlobal_89DFC8[4];  // data: 0x89DFC8
extern unsigned char DataGlobal_89DFCC[4];  // data: 0x89DFCC
extern unsigned char DataGlobal_89DFD0[4];  // data: 0x89DFD0
extern unsigned char DataGlobal_89DFD4[4];  // data: 0x89DFD4
extern unsigned char DataGlobal_89DFD8[4];  // data: 0x89DFD8
extern unsigned char DataGlobal_89DFE0[36];  // data: 0x89DFE0
extern unsigned char DataGlobal_89E008[4];  // data: 0x89E008
extern unsigned char DataGlobal_89E010[4];  // data: 0x89E010
extern unsigned char DataGlobal_89E018[4];  // data: 0x89E018
extern unsigned char DataGlobal_89E020[4];  // data: 0x89E020
extern unsigned char DataGlobal_89E028[4];  // data: 0x89E028
extern unsigned char DataGlobal_89E02C[4];  // data: 0x89E02C
extern unsigned char DataGlobal_89E030[4];  // data: 0x89E030
extern unsigned char DataGlobal_89E034[4];  // data: 0x89E034
extern unsigned char DataGlobal_89E040[4];  // data: 0x89E040
extern unsigned char DataGlobal_89E048[4];  // data: 0x89E048
extern unsigned char DataGlobal_89E04C[4];  // data: 0x89E04C
extern unsigned char DataGlobal_89E050[4];  // data: 0x89E050
extern unsigned char DataGlobal_89E0A4[4];  // data: 0x89E0A4
extern unsigned char DataGlobal_89E0E8[4];  // data: 0x89E0E8
extern unsigned char DataGlobal_89E0F4[4];  // data: 0x89E0F4
extern unsigned char DataGlobal_89E0FC[4];  // data: 0x89E0FC
extern unsigned char DataGlobal_89E0FD[4];  // data: 0x89E0FD
extern unsigned char DataGlobal_89E108[4];  // data: 0x89E108
extern unsigned char DataGlobal_89E10C[4];  // data: 0x89E10C
extern unsigned char DataGlobal_89E110[4];  // data: 0x89E110
extern unsigned char DataGlobal_89E114[4];  // data: 0x89E114
extern unsigned char DataGlobal_89E118[4];  // data: 0x89E118
extern unsigned char DataGlobal_89E11A[4];  // data: 0x89E11A
extern unsigned char DataGlobal_89E120[4];  // data: 0x89E120
extern unsigned char DataGlobal_89E128[4];  // data: 0x89E128
extern unsigned char DataGlobal_89E130[4];  // data: 0x89E130
extern unsigned char DataGlobal_89E138[90160];  // data: 0x89E138
extern unsigned char DataGlobal_89E13C[90156];  // data: 0x89E13C
extern unsigned char DataGlobal_89E140[90152];  // data: 0x89E140
extern unsigned char DataGlobal_89E148[90144];  // data: 0x89E148
extern unsigned char DataGlobal_89E150[90136];  // data: 0x89E150
extern unsigned char DataGlobal_89E158[90128];  // data: 0x89E158
extern unsigned char DataGlobal_89E160[90120];  // data: 0x89E160
extern unsigned char DataGlobal_89E164[90116];  // data: 0x89E164
extern unsigned char DataGlobal_89E168[90112];  // data: 0x89E168
extern unsigned char DataGlobal_89E16C[90108];  // data: 0x89E16C
extern unsigned char DataGlobal_89E170[90104];  // data: 0x89E170
extern unsigned char DataGlobal_89E178[90096];  // data: 0x89E178
extern unsigned char DataGlobal_89E180[90088];  // data: 0x89E180
extern unsigned char DataGlobal_89E188[90080];  // data: 0x89E188
extern unsigned char DataGlobal_89E18C[90076];  // data: 0x89E18C
extern unsigned char DataGlobal_89E190[90072];  // data: 0x89E190
extern unsigned char DataGlobal_89E194[90068];  // data: 0x89E194
extern unsigned char DataGlobal_89E198[90064];  // data: 0x89E198
extern unsigned char DataGlobal_89E19A[90062];  // data: 0x89E19A
extern unsigned char DataGlobal_89E1A0[90056];  // data: 0x89E1A0
extern unsigned char DataGlobal_89E1A8[90048];  // data: 0x89E1A8
extern unsigned char DataGlobal_89E1B0[90040];  // data: 0x89E1B0
extern unsigned char DataGlobal_89E1B8[90032];  // data: 0x89E1B8
extern unsigned char DataGlobal_89E1BC[90028];  // data: 0x89E1BC
extern unsigned char DataGlobal_89E1C0[90024];  // data: 0x89E1C0
extern unsigned char DataGlobal_89E1C8[90016];  // data: 0x89E1C8
extern unsigned char DataGlobal_89E1D0[90008];  // data: 0x89E1D0
extern unsigned char DataGlobal_89E1D8[90000];  // data: 0x89E1D8
extern unsigned char DataGlobal_89E1E0[89992];  // data: 0x89E1E0
extern unsigned char DataGlobal_89E1E4[89988];  // data: 0x89E1E4
extern unsigned char DataGlobal_89E1E8[89984];  // data: 0x89E1E8
extern unsigned char DataGlobal_89E1EC[89980];  // data: 0x89E1EC
extern unsigned char DataGlobal_89E1F0[89976];  // data: 0x89E1F0
extern unsigned char DataGlobal_89E1F8[89968];  // data: 0x89E1F8
extern unsigned char DataGlobal_89E200[89960];  // data: 0x89E200
extern unsigned char DataGlobal_89E208[89952];  // data: 0x89E208
extern unsigned char DataGlobal_89E20C[89948];  // data: 0x89E20C
extern unsigned char DataGlobal_89E210[89944];  // data: 0x89E210
extern unsigned char DataGlobal_89E214[89940];  // data: 0x89E214
extern unsigned char DataGlobal_89E218[89936];  // data: 0x89E218
extern unsigned char DataGlobal_89E21A[89934];  // data: 0x89E21A
extern unsigned char DataGlobal_89E220[89928];  // data: 0x89E220
extern unsigned char DataGlobal_89E228[89920];  // data: 0x89E228
extern unsigned char DataGlobal_89E230[89912];  // data: 0x89E230
extern unsigned char DataGlobal_89E238[89904];  // data: 0x89E238
extern unsigned char DataGlobal_89E23C[89900];  // data: 0x89E23C
extern unsigned char DataGlobal_89E240[89896];  // data: 0x89E240
extern unsigned char DataGlobal_89E248[89888];  // data: 0x89E248
extern unsigned char DataGlobal_89E250[89880];  // data: 0x89E250
extern unsigned char DataGlobal_89E258[89872];  // data: 0x89E258
extern unsigned char DataGlobal_89E260[89864];  // data: 0x89E260
extern unsigned char DataGlobal_89E264[89860];  // data: 0x89E264
extern unsigned char DataGlobal_89E268[89856];  // data: 0x89E268
extern unsigned char DataGlobal_89E26C[89852];  // data: 0x89E26C
extern unsigned char DataGlobal_89E270[89848];  // data: 0x89E270
extern unsigned char DataGlobal_89E278[89840];  // data: 0x89E278
extern unsigned char DataGlobal_89E280[89832];  // data: 0x89E280
extern unsigned char DataGlobal_89E284[89828];  // data: 0x89E284
extern unsigned char DataGlobal_89E288[89824];  // data: 0x89E288
extern unsigned char DataGlobal_89E28C[89820];  // data: 0x89E28C
extern unsigned char DataGlobal_89E290[89816];  // data: 0x89E290
extern unsigned char DataGlobal_89E298[89808];  // data: 0x89E298
extern unsigned char DataGlobal_89E29C[89804];  // data: 0x89E29C
extern unsigned char DataGlobal_89E2A0[89800];  // data: 0x89E2A0
extern unsigned char DataGlobal_89E2A4[89796];  // data: 0x89E2A4
extern unsigned char DataGlobal_89E2A8[89792];  // data: 0x89E2A8
extern unsigned char DataGlobal_89E2AA[89790];  // data: 0x89E2AA
extern unsigned char DataGlobal_89E2B0[89784];  // data: 0x89E2B0
extern unsigned char DataGlobal_89E2B8[89776];  // data: 0x89E2B8
extern unsigned char DataGlobal_89E2C0[89768];  // data: 0x89E2C0
extern unsigned char DataGlobal_89E2C8[89760];  // data: 0x89E2C8
extern unsigned char DataGlobal_89E2CC[89756];  // data: 0x89E2CC
extern unsigned char DataGlobal_89E2D0[89752];  // data: 0x89E2D0
extern unsigned char DataGlobal_89E2D8[89744];  // data: 0x89E2D8
extern unsigned char DataGlobal_89E2E0[89736];  // data: 0x89E2E0
extern unsigned char DataGlobal_89E2E8[89728];  // data: 0x89E2E8
extern unsigned char DataGlobal_89E2F0[89720];  // data: 0x89E2F0
extern unsigned char DataGlobal_89E2F4[89716];  // data: 0x89E2F4
extern unsigned char DataGlobal_89E2F8[89712];  // data: 0x89E2F8
extern unsigned char DataGlobal_89E2FC[89708];  // data: 0x89E2FC
extern unsigned char DataGlobal_89E300[89704];  // data: 0x89E300
extern unsigned char DataGlobal_89E308[89696];  // data: 0x89E308
extern unsigned char DataGlobal_89E310[89688];  // data: 0x89E310
extern unsigned char DataGlobal_89E318[89680];  // data: 0x89E318
extern unsigned char DataGlobal_89E31C[89676];  // data: 0x89E31C
extern unsigned char DataGlobal_89E320[89672];  // data: 0x89E320
extern unsigned char DataGlobal_89E324[89668];  // data: 0x89E324
extern unsigned char DataGlobal_89E328[89664];  // data: 0x89E328
extern unsigned char DataGlobal_89E32A[89662];  // data: 0x89E32A
extern unsigned char DataGlobal_89E330[89656];  // data: 0x89E330
extern unsigned char DataGlobal_89E338[89648];  // data: 0x89E338
extern unsigned char DataGlobal_89E340[89640];  // data: 0x89E340
extern unsigned char DataGlobal_89E348[89632];  // data: 0x89E348
extern unsigned char DataGlobal_89E34C[89628];  // data: 0x89E34C
extern unsigned char DataGlobal_89E350[89624];  // data: 0x89E350
extern unsigned char DataGlobal_89E358[89616];  // data: 0x89E358
extern unsigned char DataGlobal_89E360[89608];  // data: 0x89E360
extern unsigned char DataGlobal_89E368[89600];  // data: 0x89E368
extern unsigned char DataGlobal_89E370[89592];  // data: 0x89E370
extern unsigned char DataGlobal_89E374[89588];  // data: 0x89E374
extern unsigned char DataGlobal_89E378[89584];  // data: 0x89E378
extern unsigned char DataGlobal_89E37C[89580];  // data: 0x89E37C
extern unsigned char DataGlobal_89E380[89576];  // data: 0x89E380
extern unsigned char DataGlobal_89E388[89568];  // data: 0x89E388
extern unsigned char DataGlobal_89E390[89560];  // data: 0x89E390
extern unsigned char DataGlobal_89E394[89556];  // data: 0x89E394
extern unsigned char DataGlobal_89E398[89552];  // data: 0x89E398
extern unsigned char DataGlobal_89E39C[89548];  // data: 0x89E39C
extern unsigned char DataGlobal_89E3A0[89544];  // data: 0x89E3A0
extern unsigned char DataGlobal_89E3A8[89536];  // data: 0x89E3A8
extern unsigned char DataGlobal_89E414[89428];  // data: 0x89E414
extern unsigned char DataGlobal_89E418[89424];  // data: 0x89E418
extern unsigned char DataGlobal_89E41C[89420];  // data: 0x89E41C
extern unsigned char DataGlobal_89E620[88904];  // data: 0x89E620
extern unsigned char DataGlobal_89E720[88648];  // data: 0x89E720
extern unsigned char DataGlobal_89E728[88640];  // data: 0x89E728
extern unsigned char DataGlobal_89E730[88632];  // data: 0x89E730
extern unsigned char DataGlobal_89E734[88628];  // data: 0x89E734
extern unsigned char DataGlobal_89E738[88624];  // data: 0x89E738
extern unsigned char DataGlobal_89E73C[88620];  // data: 0x89E73C
extern unsigned char DataGlobal_89E740[88616];  // data: 0x89E740
extern unsigned char DataGlobal_89E748[88608];  // data: 0x89E748
extern unsigned char DataGlobal_89E750[88600];  // data: 0x89E750
extern unsigned char DataGlobal_89E758[88592];  // data: 0x89E758
extern unsigned char DataGlobal_89E760[88584];  // data: 0x89E760
extern unsigned char DataGlobal_89E768[88576];  // data: 0x89E768
extern unsigned char DataGlobal_89E770[88568];  // data: 0x89E770
extern unsigned char DataGlobal_89E778[88560];  // data: 0x89E778
extern unsigned char DataGlobal_89E77C[88556];  // data: 0x89E77C
extern unsigned char DataGlobal_89E780[88552];  // data: 0x89E780
extern unsigned char DataGlobal_89E788[88544];  // data: 0x89E788
extern unsigned char DataGlobal_89E790[88536];  // data: 0x89E790
extern unsigned char DataGlobal_89E794[88532];  // data: 0x89E794
extern unsigned char DataGlobal_89E798[88528];  // data: 0x89E798
extern unsigned char DataGlobal_89E7A0[88520];  // data: 0x89E7A0
extern unsigned char DataGlobal_89E7A8[88512];  // data: 0x89E7A8
extern unsigned char DataGlobal_89E7AC[88508];  // data: 0x89E7AC
extern unsigned char DataGlobal_89E7B0[88504];  // data: 0x89E7B0
extern unsigned char DataGlobal_89E7B4[88500];  // data: 0x89E7B4
extern unsigned char DataGlobal_89E7B8[88496];  // data: 0x89E7B8
extern unsigned char DataGlobal_89E7C0[88488];  // data: 0x89E7C0
extern unsigned char DataGlobal_89E7C5[88483];  // data: 0x89E7C5
extern unsigned char DataGlobal_89E7C6[88482];  // data: 0x89E7C6
extern unsigned char DataGlobal_89E7C7[88481];  // data: 0x89E7C7
extern unsigned char DataGlobal_89E7C8[88480];  // data: 0x89E7C8
extern unsigned char DataGlobal_89E7CC[88476];  // data: 0x89E7CC
extern unsigned char DataGlobal_89E7D0[88472];  // data: 0x89E7D0
extern unsigned char DataGlobal_89E7D4[88468];  // data: 0x89E7D4
extern unsigned char DataGlobal_89E7D8[88464];  // data: 0x89E7D8
extern unsigned char DataGlobal_89E7DC[88460];  // data: 0x89E7DC
extern unsigned char DataGlobal_89E7E0[88456];  // data: 0x89E7E0
extern unsigned char DataGlobal_89E7E4[88452];  // data: 0x89E7E4
extern unsigned char DataGlobal_89E7E8[88448];  // data: 0x89E7E8
extern unsigned char DataGlobal_89E7EC[88444];  // data: 0x89E7EC
extern unsigned char DataGlobal_89E7F0[88440];  // data: 0x89E7F0
extern unsigned char DataGlobal_89E7F4[88436];  // data: 0x89E7F4
extern unsigned char DataGlobal_89E7F8[88432];  // data: 0x89E7F8
extern unsigned char DataGlobal_89E800[88424];  // data: 0x89E800
extern unsigned char DataGlobal_89E804[88420];  // data: 0x89E804
extern unsigned char DataGlobal_89E808[88416];  // data: 0x89E808
extern unsigned char DataGlobal_89E80C[88412];  // data: 0x89E80C
extern unsigned char DataGlobal_89E810[88408];  // data: 0x89E810
extern unsigned char DataGlobal_89E812[88406];  // data: 0x89E812
extern unsigned char DataGlobal_89E818[88400];  // data: 0x89E818
extern unsigned char DataGlobal_89E820[88392];  // data: 0x89E820
extern unsigned char DataGlobal_89E828[88384];  // data: 0x89E828
extern unsigned char DataGlobal_89E830[88376];  // data: 0x89E830
extern unsigned char DataGlobal_89E834[88372];  // data: 0x89E834
extern unsigned char DataGlobal_89E838[88368];  // data: 0x89E838
extern unsigned char DataGlobal_89E840[88360];  // data: 0x89E840
extern unsigned char DataGlobal_89E848[88352];  // data: 0x89E848
extern unsigned char DataGlobal_89E850[88344];  // data: 0x89E850
extern unsigned char DataGlobal_89E858[88336];  // data: 0x89E858
extern unsigned char DataGlobal_89E85C[88332];  // data: 0x89E85C
extern unsigned char DataGlobal_89E860[88328];  // data: 0x89E860
extern unsigned char DataGlobal_89E864[88324];  // data: 0x89E864
extern unsigned char DataGlobal_89E868[88320];  // data: 0x89E868
extern unsigned char DataGlobal_89E870[88312];  // data: 0x89E870
extern unsigned char DataGlobal_89E878[88304];  // data: 0x89E878
extern unsigned char DataGlobal_89E87C[88300];  // data: 0x89E87C
extern unsigned char DataGlobal_89E880[88296];  // data: 0x89E880
extern unsigned char DataGlobal_89E884[88292];  // data: 0x89E884
extern unsigned char DataGlobal_89E888[88288];  // data: 0x89E888
extern unsigned char DataGlobal_89E88C[88284];  // data: 0x89E88C
extern unsigned char DataGlobal_89E890[88280];  // data: 0x89E890
extern unsigned char DataGlobal_89E894[88276];  // data: 0x89E894
extern unsigned char DataGlobal_89E898[88272];  // data: 0x89E898
extern unsigned char DataGlobal_89E8A0[88264];  // data: 0x89E8A0
extern unsigned char DataGlobal_89E8A4[88260];  // data: 0x89E8A4
extern unsigned char DataGlobal_89E8A8[88256];  // data: 0x89E8A8
extern unsigned char DataGlobal_89E8AC[88252];  // data: 0x89E8AC
extern unsigned char DataGlobal_89E8B0[88248];  // data: 0x89E8B0
extern unsigned char DataGlobal_89E8B2[88246];  // data: 0x89E8B2
extern unsigned char DataGlobal_89E8B8[88240];  // data: 0x89E8B8
extern unsigned char DataGlobal_89E8C0[88232];  // data: 0x89E8C0
extern unsigned char DataGlobal_89E8C8[88224];  // data: 0x89E8C8
extern unsigned char DataGlobal_89E8D0[88216];  // data: 0x89E8D0
extern unsigned char DataGlobal_89E8D4[88212];  // data: 0x89E8D4
extern unsigned char DataGlobal_89E8D8[88208];  // data: 0x89E8D8
extern unsigned char DataGlobal_89E8E0[88200];  // data: 0x89E8E0
extern unsigned char DataGlobal_89E8E8[88192];  // data: 0x89E8E8
extern unsigned char DataGlobal_89E8F0[88184];  // data: 0x89E8F0
extern unsigned char DataGlobal_89E8F8[88176];  // data: 0x89E8F8
extern unsigned char DataGlobal_89E8FC[88172];  // data: 0x89E8FC
extern unsigned char DataGlobal_89E900[88168];  // data: 0x89E900
extern unsigned char DataGlobal_89E904[88164];  // data: 0x89E904
extern unsigned char DataGlobal_89E908[88160];  // data: 0x89E908
extern unsigned char DataGlobal_89E910[88152];  // data: 0x89E910
extern unsigned char DataGlobal_89E918[88144];  // data: 0x89E918
extern unsigned char DataGlobal_89E920[88136];  // data: 0x89E920
extern unsigned char DataGlobal_89E924[88132];  // data: 0x89E924
extern unsigned char DataGlobal_89E928[88128];  // data: 0x89E928
extern unsigned char DataGlobal_89E930[88120];  // data: 0x89E930
extern unsigned char DataGlobal_89E934[88116];  // data: 0x89E934
extern unsigned char DataGlobal_89E938[88112];  // data: 0x89E938
extern unsigned char DataGlobal_89E93C[88108];  // data: 0x89E93C
extern unsigned char DataGlobal_89E940[88104];  // data: 0x89E940
extern unsigned char DataGlobal_89E942[88102];  // data: 0x89E942
extern unsigned char DataGlobal_89E948[88096];  // data: 0x89E948
extern unsigned char DataGlobal_89E950[88088];  // data: 0x89E950
extern unsigned char DataGlobal_89E958[88080];  // data: 0x89E958
extern unsigned char DataGlobal_89E960[88072];  // data: 0x89E960
extern unsigned char DataGlobal_89E968[88064];  // data: 0x89E968
extern unsigned char DataGlobal_89E96C[88060];  // data: 0x89E96C
extern unsigned char DataGlobal_89E970[88056];  // data: 0x89E970
extern unsigned char DataGlobal_89E978[88048];  // data: 0x89E978
extern unsigned char DataGlobal_89E980[88040];  // data: 0x89E980
extern unsigned char DataGlobal_89E988[88032];  // data: 0x89E988
extern unsigned char DataGlobal_89E990[88024];  // data: 0x89E990
extern unsigned char DataGlobal_89E994[88020];  // data: 0x89E994
extern unsigned char DataGlobal_89E998[88016];  // data: 0x89E998
extern unsigned char DataGlobal_89E99C[88012];  // data: 0x89E99C
extern unsigned char DataGlobal_89E9A0[88008];  // data: 0x89E9A0
extern unsigned char DataGlobal_89E9A8[88000];  // data: 0x89E9A8
extern unsigned char DataGlobal_89E9B0[87992];  // data: 0x89E9B0
extern unsigned char DataGlobal_89E9B8[87984];  // data: 0x89E9B8
extern unsigned char DataGlobal_89E9C0[87976];  // data: 0x89E9C0
extern unsigned char DataGlobal_89E9C4[87972];  // data: 0x89E9C4
extern unsigned char DataGlobal_89E9C8[87968];  // data: 0x89E9C8
extern unsigned char DataGlobal_89E9CC[87964];  // data: 0x89E9CC
extern unsigned char DataGlobal_89E9D0[87960];  // data: 0x89E9D0
extern unsigned char DataGlobal_89E9D2[87958];  // data: 0x89E9D2
extern unsigned char DataGlobal_89E9D8[87952];  // data: 0x89E9D8
extern unsigned char DataGlobal_89E9E0[87944];  // data: 0x89E9E0
extern unsigned char DataGlobal_89E9E8[87936];  // data: 0x89E9E8
extern unsigned char DataGlobal_89E9F0[87928];  // data: 0x89E9F0
extern unsigned char DataGlobal_89E9F4[87924];  // data: 0x89E9F4
extern unsigned char DataGlobal_89E9F8[87920];  // data: 0x89E9F8
extern unsigned char DataGlobal_89E9FC[87916];  // data: 0x89E9FC
extern unsigned char DataGlobal_89EA00[87912];  // data: 0x89EA00
extern unsigned char DataGlobal_89EA04[87908];  // data: 0x89EA04
extern unsigned char DataGlobal_89EA08[87904];  // data: 0x89EA08
extern unsigned char DataGlobal_89EA0C[87900];  // data: 0x89EA0C
extern unsigned char DataGlobal_89EA10[87896];  // data: 0x89EA10
extern unsigned char DataGlobal_89EA14[87892];  // data: 0x89EA14
extern unsigned char DataGlobal_89EA18[87888];  // data: 0x89EA18
extern unsigned char DataGlobal_89EA1C[87884];  // data: 0x89EA1C
extern unsigned char DataGlobal_89EA20[87880];  // data: 0x89EA20
extern unsigned char DataGlobal_89EA24[87876];  // data: 0x89EA24
extern unsigned char DataGlobal_89EA28[87872];  // data: 0x89EA28
extern unsigned char DataGlobal_89EA30[87864];  // data: 0x89EA30
extern unsigned char DataGlobal_89EA34[87860];  // data: 0x89EA34
extern unsigned char DataGlobal_89EA38[87856];  // data: 0x89EA38
extern unsigned char DataGlobal_89EA40[87848];  // data: 0x89EA40
extern unsigned char DataGlobal_89EA44[87844];  // data: 0x89EA44
extern unsigned char DataGlobal_89EA60[87816];  // data: 0x89EA60
extern unsigned char DataGlobal_89EBF0[87416];  // data: 0x89EBF0
extern unsigned char DataGlobal_89EBF8[87408];  // data: 0x89EBF8
extern unsigned char DataGlobal_89EC00[87400];  // data: 0x89EC00
extern unsigned char DataGlobal_89EC08[87392];  // data: 0x89EC08
extern unsigned char DataGlobal_89EC0C[87388];  // data: 0x89EC0C
extern unsigned char DataGlobal_89EC10[87384];  // data: 0x89EC10
extern unsigned char DataGlobal_89EC14[87380];  // data: 0x89EC14
extern unsigned char DataGlobal_89EC18[87376];  // data: 0x89EC18
extern unsigned char DataGlobal_89EC20[87368];  // data: 0x89EC20
extern unsigned char DataGlobal_89EC28[87360];  // data: 0x89EC28
extern unsigned char DataGlobal_89ECC0[87208];  // data: 0x89ECC0
extern unsigned char DataGlobal_89ECD8[87184];  // data: 0x89ECD8
extern unsigned char DataGlobal_89ECDC[87180];  // data: 0x89ECDC
extern unsigned char DataGlobal_89ECE0[87176];  // data: 0x89ECE0
extern unsigned char DataGlobal_89ECE4[87172];  // data: 0x89ECE4
extern unsigned char DataGlobal_89ECE8[87168];  // data: 0x89ECE8
extern unsigned char DataGlobal_89ECEC[87164];  // data: 0x89ECEC
extern unsigned char DataGlobal_89ECF0[87160];  // data: 0x89ECF0
extern unsigned char DataGlobal_89ECF4[87156];  // data: 0x89ECF4
extern unsigned char DataGlobal_89ECF8[87152];  // data: 0x89ECF8
extern unsigned char DataGlobal_89ECFC[87148];  // data: 0x89ECFC
extern unsigned char DataGlobal_89ED00[87144];  // data: 0x89ED00
extern unsigned char DataGlobal_89ED04[87140];  // data: 0x89ED04
extern unsigned char DataGlobal_89ED05[87139];  // data: 0x89ED05
extern unsigned char DataGlobal_89ED08[87136];  // data: 0x89ED08
extern unsigned char DataGlobal_89ED0C[87132];  // data: 0x89ED0C
extern unsigned char DataGlobal_89ED10[87128];  // data: 0x89ED10
extern unsigned char DataGlobal_89F118[86096];  // data: 0x89F118
extern unsigned char DataGlobal_89F51C[85068];  // data: 0x89F51C
extern unsigned char DataGlobal_89F520[85064];  // data: 0x89F520
extern unsigned char DataGlobal_89F524[85060];  // data: 0x89F524
extern unsigned char DataGlobal_89F528[85056];  // data: 0x89F528
extern unsigned char DataGlobal_89F534[85044];  // data: 0x89F534
extern unsigned char DataGlobal_89F540[85032];  // data: 0x89F540
extern unsigned char DataGlobal_89F544[85028];  // data: 0x89F544
extern unsigned char DataGlobal_89F548[85024];  // data: 0x89F548
extern unsigned char DataGlobal_89F54C[85020];  // data: 0x89F54C
extern unsigned char DataGlobal_89F550[85016];  // data: 0x89F550
extern unsigned char DataGlobal_89F554[85012];  // data: 0x89F554
extern unsigned char DataGlobal_89F558[85008];  // data: 0x89F558
extern unsigned char DataGlobal_89F570[84984];  // data: 0x89F570
extern unsigned char DataGlobal_89F574[84980];  // data: 0x89F574
extern unsigned char DataGlobal_89F578[84976];  // data: 0x89F578
extern unsigned char DataGlobal_89F580[84968];  // data: 0x89F580
extern unsigned char DataGlobal_89F588[84960];  // data: 0x89F588
extern unsigned char DataGlobal_89F58C[84956];  // data: 0x89F58C
extern unsigned char DataGlobal_89F590[84952];  // data: 0x89F590
extern unsigned char DataGlobal_89F594[84948];  // data: 0x89F594
extern unsigned char DataGlobal_89F598[84944];  // data: 0x89F598
extern unsigned char DataGlobal_89F59A[84942];  // data: 0x89F59A
extern unsigned char DataGlobal_89F5A0[84936];  // data: 0x89F5A0
extern unsigned char DataGlobal_89F5A8[84928];  // data: 0x89F5A8
extern unsigned char DataGlobal_89F5B0[84920];  // data: 0x89F5B0
extern unsigned char DataGlobal_89F5B8[84912];  // data: 0x89F5B8
extern unsigned char DataGlobal_89F5BC[84908];  // data: 0x89F5BC
extern unsigned char DataGlobal_89F5C0[84904];  // data: 0x89F5C0
extern unsigned char DataGlobal_89F5C8[84896];  // data: 0x89F5C8
extern unsigned char DataGlobal_89F5D0[84888];  // data: 0x89F5D0
extern unsigned char DataGlobal_89F5D8[84880];  // data: 0x89F5D8
extern unsigned char DataGlobal_89F68A[84702];  // data: 0x89F68A
extern unsigned char DataGlobal_89F68C[84700];  // data: 0x89F68C
extern unsigned char DataGlobal_89F694[84692];  // data: 0x89F694
extern unsigned char DataGlobal_89F69C[84684];  // data: 0x89F69C
extern unsigned char DataGlobal_89F6A4[84676];  // data: 0x89F6A4
extern unsigned char DataGlobal_89F6A8[84672];  // data: 0x89F6A8
extern unsigned char DataGlobal_89F6AC[84668];  // data: 0x89F6AC
extern unsigned char DataGlobal_89F6B0[84664];  // data: 0x89F6B0
extern unsigned char DataGlobal_89F6B4[84660];  // data: 0x89F6B4
extern unsigned char DataGlobal_89F6B8[84656];  // data: 0x89F6B8
extern unsigned char DataGlobal_89F6BA[84654];  // data: 0x89F6BA
extern unsigned char DataGlobal_89F6C0[84648];  // data: 0x89F6C0
extern unsigned char DataGlobal_89F6C8[84640];  // data: 0x89F6C8
extern unsigned char DataGlobal_89F6D0[84632];  // data: 0x89F6D0
extern unsigned char DataGlobal_89F6D8[84624];  // data: 0x89F6D8
extern unsigned char DataGlobal_89F6DC[84620];  // data: 0x89F6DC
extern unsigned char DataGlobal_89F6E0[84616];  // data: 0x89F6E0
extern unsigned char DataGlobal_89F6E4[84612];  // data: 0x89F6E4
extern unsigned char DataGlobal_89F6E8[84608];  // data: 0x89F6E8
extern unsigned char DataGlobal_89F6EC[84604];  // data: 0x89F6EC
extern unsigned char DataGlobal_89F6F0[84600];  // data: 0x89F6F0
extern unsigned char DataGlobal_89F6F4[84596];  // data: 0x89F6F4
extern unsigned char DataGlobal_89F6F8[84592];  // data: 0x89F6F8
extern unsigned char DataGlobal_89F6FC[84588];  // data: 0x89F6FC
extern unsigned char DataGlobal_89F700[84584];  // data: 0x89F700
extern unsigned char DataGlobal_89F704[84580];  // data: 0x89F704
extern unsigned char DataGlobal_89F708[84576];  // data: 0x89F708
extern unsigned char DataGlobal_89F70C[84572];  // data: 0x89F70C
extern unsigned char DataGlobal_89F710[84568];  // data: 0x89F710
extern unsigned char DataGlobal_89F714[84564];  // data: 0x89F714
extern unsigned char DataGlobal_89F718[84560];  // data: 0x89F718
extern unsigned char DataGlobal_89F71C[84556];  // data: 0x89F71C
extern unsigned char DataGlobal_89F720[84552];  // data: 0x89F720
extern unsigned char DataGlobal_89F728[84544];  // data: 0x89F728
extern unsigned char DataGlobal_89F730[84536];  // data: 0x89F730
extern unsigned char DataGlobal_89F738[84528];  // data: 0x89F738
extern unsigned char DataGlobal_89F740[84520];  // data: 0x89F740
extern unsigned char DataGlobal_89F744[84516];  // data: 0x89F744
extern unsigned char DataGlobal_89F748[84512];  // data: 0x89F748
extern unsigned char DataGlobal_89F74C[84508];  // data: 0x89F74C
extern unsigned char DataGlobal_89F750[84504];  // data: 0x89F750
extern unsigned char DataGlobal_89F758[84496];  // data: 0x89F758
extern unsigned char DataGlobal_89F760[84488];  // data: 0x89F760
extern unsigned char DataGlobal_89F768[84480];  // data: 0x89F768
extern unsigned char DataGlobal_89F76C[84476];  // data: 0x89F76C
extern unsigned char DataGlobal_89F770[84472];  // data: 0x89F770
extern unsigned char DataGlobal_89F774[84468];  // data: 0x89F774
extern unsigned char DataGlobal_89F778[84464];  // data: 0x89F778
extern unsigned char DataGlobal_89F77A[84462];  // data: 0x89F77A
extern unsigned char DataGlobal_89F780[84456];  // data: 0x89F780
extern unsigned char DataGlobal_89F788[84448];  // data: 0x89F788
extern unsigned char DataGlobal_89F790[84440];  // data: 0x89F790
extern unsigned char DataGlobal_89F798[84432];  // data: 0x89F798
extern unsigned char DataGlobal_89F79C[84428];  // data: 0x89F79C
extern unsigned char DataGlobal_89F7A0[84424];  // data: 0x89F7A0
extern unsigned char DataGlobal_89F7A8[84416];  // data: 0x89F7A8
extern unsigned char DataGlobal_89F7B0[84408];  // data: 0x89F7B0
extern unsigned char DataGlobal_89F7B8[84400];  // data: 0x89F7B8
extern unsigned char DataGlobal_89F7C0[84392];  // data: 0x89F7C0
extern unsigned char DataGlobal_89F7C4[84388];  // data: 0x89F7C4
extern unsigned char DataGlobal_89F7C8[84384];  // data: 0x89F7C8
extern unsigned char DataGlobal_89F7CC[84380];  // data: 0x89F7CC
extern unsigned char DataGlobal_89F7D0[84376];  // data: 0x89F7D0
extern unsigned char DataGlobal_89F7D8[84368];  // data: 0x89F7D8
extern unsigned char DataGlobal_89F7E0[84360];  // data: 0x89F7E0
extern unsigned char DataGlobal_89F7E8[84352];  // data: 0x89F7E8
extern unsigned char DataGlobal_89F7EC[84348];  // data: 0x89F7EC
extern unsigned char DataGlobal_89F7F0[84344];  // data: 0x89F7F0
extern unsigned char DataGlobal_89F7F4[84340];  // data: 0x89F7F4
extern unsigned char DataGlobal_89F7F8[84336];  // data: 0x89F7F8
extern unsigned char DataGlobal_89F800[84328];  // data: 0x89F800
extern unsigned char DataGlobal_89F808[84320];  // data: 0x89F808
extern unsigned char DataGlobal_89F810[84312];  // data: 0x89F810
extern unsigned char DataGlobal_89F818[84304];  // data: 0x89F818
extern unsigned char DataGlobal_89F81C[84300];  // data: 0x89F81C
extern unsigned char DataGlobal_89F820[84296];  // data: 0x89F820
extern unsigned char DataGlobal_89F828[84288];  // data: 0x89F828
extern unsigned char DataGlobal_89F830[84280];  // data: 0x89F830
extern unsigned char DataGlobal_89F838[84272];  // data: 0x89F838
extern unsigned char DataGlobal_89F840[84264];  // data: 0x89F840
extern unsigned char DataGlobal_89F844[84260];  // data: 0x89F844
extern unsigned char DataGlobal_89F848[84256];  // data: 0x89F848
extern unsigned char DataGlobal_89F84C[84252];  // data: 0x89F84C
extern unsigned char DataGlobal_89F850[84248];  // data: 0x89F850
extern unsigned char DataGlobal_89F858[84240];  // data: 0x89F858
extern unsigned char DataGlobal_89F860[84232];  // data: 0x89F860
extern unsigned char DataGlobal_89F8E0[84104];  // data: 0x89F8E0
extern unsigned char DataGlobal_89F8E8[84096];  // data: 0x89F8E8
extern unsigned char DataGlobal_89F8EC[84092];  // data: 0x89F8EC
extern unsigned char DataGlobal_89F8F0[84088];  // data: 0x89F8F0
extern unsigned char DataGlobal_89F8F4[84084];  // data: 0x89F8F4
extern unsigned char DataGlobal_89F8F8[84080];  // data: 0x89F8F8
extern unsigned char DataGlobal_89F8FA[84078];  // data: 0x89F8FA
extern unsigned char DataGlobal_89F900[84072];  // data: 0x89F900
extern unsigned char DataGlobal_89F908[84064];  // data: 0x89F908
extern unsigned char DataGlobal_89F910[84056];  // data: 0x89F910
extern unsigned char DataGlobal_89F918[84048];  // data: 0x89F918
extern unsigned char DataGlobal_89F91C[84044];  // data: 0x89F91C
extern unsigned char DataGlobal_89F920[84040];  // data: 0x89F920
extern unsigned char DataGlobal_89F928[84032];  // data: 0x89F928
extern unsigned char DataGlobal_89F930[84024];  // data: 0x89F930
extern unsigned char DataGlobal_89F938[84016];  // data: 0x89F938
extern unsigned char DataGlobal_89F940[84008];  // data: 0x89F940
extern unsigned char DataGlobal_89F944[84004];  // data: 0x89F944
extern unsigned char DataGlobal_89F948[84000];  // data: 0x89F948
extern unsigned char DataGlobal_89F94C[83996];  // data: 0x89F94C
extern unsigned char DataGlobal_89F950[83992];  // data: 0x89F950
extern unsigned char DataGlobal_89F958[83984];  // data: 0x89F958
extern unsigned char DataGlobal_89F960[83976];  // data: 0x89F960
extern unsigned char DataGlobal_89F964[83972];  // data: 0x89F964
extern unsigned char DataGlobal_89F968[83968];  // data: 0x89F968
extern unsigned char DataGlobal_89F96C[83964];  // data: 0x89F96C
extern unsigned char DataGlobal_89F970[83960];  // data: 0x89F970
extern unsigned char DataGlobal_89F978[83952];  // data: 0x89F978
extern unsigned char DataGlobal_89F980[83944];  // data: 0x89F980
extern unsigned char DataGlobal_89F984[83940];  // data: 0x89F984
extern unsigned char DataGlobal_89F988[83936];  // data: 0x89F988
extern unsigned char DataGlobal_89F98C[83932];  // data: 0x89F98C
extern unsigned char DataGlobal_89F990[83928];  // data: 0x89F990
extern unsigned char DataGlobal_8A009C[82124];  // data: 0x8A009C
extern unsigned char DataGlobal_8A00A8[82112];  // data: 0x8A00A8
extern unsigned char DataGlobal_8A00AC[82108];  // data: 0x8A00AC
extern unsigned char DataGlobal_8A00B8[82096];  // data: 0x8A00B8
extern unsigned char DataGlobal_8A00C0[82088];  // data: 0x8A00C0
extern unsigned char DataGlobal_8A00C4[82084];  // data: 0x8A00C4
extern unsigned char DataGlobal_8A00C8[82080];  // data: 0x8A00C8
extern unsigned char DataGlobal_8A00CC[82076];  // data: 0x8A00CC
extern unsigned char DataGlobal_8A00D0[82072];  // data: 0x8A00D0
extern unsigned char DataGlobal_8A00D2[82070];  // data: 0x8A00D2
extern unsigned char DataGlobal_8A00D8[82064];  // data: 0x8A00D8
extern unsigned char DataGlobal_8A00E0[82056];  // data: 0x8A00E0
extern unsigned char DataGlobal_8A00E8[82048];  // data: 0x8A00E8
extern unsigned char DataGlobal_8A00F0[82040];  // data: 0x8A00F0
extern unsigned char DataGlobal_8A00F4[82036];  // data: 0x8A00F4
extern unsigned char DataGlobal_8A00F8[82032];  // data: 0x8A00F8
extern unsigned char DataGlobal_8A0100[82024];  // data: 0x8A0100
extern unsigned char DataGlobal_8A0108[82016];  // data: 0x8A0108
extern unsigned char DataGlobal_8A0110[82008];  // data: 0x8A0110
extern unsigned char DataGlobal_8A0118[82000];  // data: 0x8A0118
extern unsigned char DataGlobal_8A011C[81996];  // data: 0x8A011C
extern unsigned char DataGlobal_8A0120[81992];  // data: 0x8A0120
extern unsigned char DataGlobal_8A0124[81988];  // data: 0x8A0124
extern unsigned char DataGlobal_8A0128[81984];  // data: 0x8A0128
extern unsigned char DataGlobal_8A0130[81976];  // data: 0x8A0130
extern unsigned char DataGlobal_8A0138[81968];  // data: 0x8A0138
extern unsigned char DataGlobal_8A013C[81964];  // data: 0x8A013C
extern unsigned char DataGlobal_8A0140[81960];  // data: 0x8A0140
extern unsigned char DataGlobal_8A0144[81956];  // data: 0x8A0144
extern unsigned char DataGlobal_8A0150[81944];  // data: 0x8A0150
extern unsigned char DataGlobal_8A0154[81940];  // data: 0x8A0154
extern unsigned char DataGlobal_8A0158[81936];  // data: 0x8A0158
extern unsigned char DataGlobal_8A015C[81932];  // data: 0x8A015C
extern unsigned char DataGlobal_8A0160[81928];  // data: 0x8A0160
extern unsigned char DataGlobal_8A0164[81924];  // data: 0x8A0164
extern unsigned char DataGlobal_8A0168[81920];  // data: 0x8A0168
extern unsigned char DataGlobal_8A016C[81916];  // data: 0x8A016C
extern unsigned char DataGlobal_8A0170[81912];  // data: 0x8A0170
extern unsigned char DataGlobal_8A0174[81908];  // data: 0x8A0174
extern unsigned char DataGlobal_8A0178[81904];  // data: 0x8A0178
extern unsigned char DataGlobal_8A017C[81900];  // data: 0x8A017C
extern unsigned char DataGlobal_8A0180[81896];  // data: 0x8A0180
extern unsigned char DataGlobal_8A0184[81892];  // data: 0x8A0184
extern unsigned char DataGlobal_8A0188[81888];  // data: 0x8A0188
extern unsigned char DataGlobal_8A018C[81884];  // data: 0x8A018C
extern unsigned char DataGlobal_8A0190[81880];  // data: 0x8A0190
extern unsigned char DataGlobal_8A0194[81876];  // data: 0x8A0194
extern unsigned char DataGlobal_8A0198[81872];  // data: 0x8A0198
extern unsigned char DataGlobal_8A019C[81868];  // data: 0x8A019C
extern unsigned char DataGlobal_8A01A0[81864];  // data: 0x8A01A0
extern unsigned char DataGlobal_8A01A4[81860];  // data: 0x8A01A4
extern unsigned char DataGlobal_8A01A8[81856];  // data: 0x8A01A8
extern unsigned char DataGlobal_8A01AC[81852];  // data: 0x8A01AC
extern unsigned char DataGlobal_8A01B0[81848];  // data: 0x8A01B0
extern unsigned char DataGlobal_8A01B4[81844];  // data: 0x8A01B4
extern unsigned char DataGlobal_8A01B8[81840];  // data: 0x8A01B8
extern unsigned char DataGlobal_8A01BC[81836];  // data: 0x8A01BC
extern unsigned char DataGlobal_8A01C0[81832];  // data: 0x8A01C0
extern unsigned char DataGlobal_8A01C4[81828];  // data: 0x8A01C4
extern unsigned char DataGlobal_8A01C8[81824];  // data: 0x8A01C8
extern unsigned char DataGlobal_8A01CC[81820];  // data: 0x8A01CC
extern unsigned char DataGlobal_8A01D0[81816];  // data: 0x8A01D0
extern unsigned char DataGlobal_8A01D4[81812];  // data: 0x8A01D4
extern unsigned char DataGlobal_8A01D8[81808];  // data: 0x8A01D8
extern unsigned char DataGlobal_8A01DC[81804];  // data: 0x8A01DC
extern unsigned char DataGlobal_8A01E0[81800];  // data: 0x8A01E0
extern unsigned char DataGlobal_8A01E4[81796];  // data: 0x8A01E4
extern unsigned char DataGlobal_8A01E8[81792];  // data: 0x8A01E8
extern unsigned char DataGlobal_8A01EC[81788];  // data: 0x8A01EC
extern unsigned char DataGlobal_8A01F0[81784];  // data: 0x8A01F0
extern unsigned char DataGlobal_8A01F4[81780];  // data: 0x8A01F4
extern unsigned char DataGlobal_8A01F8[81776];  // data: 0x8A01F8
extern unsigned char DataGlobal_8A01FC[81772];  // data: 0x8A01FC
extern unsigned char DataGlobal_8A0200[81768];  // data: 0x8A0200
extern unsigned char DataGlobal_8A0208[81760];  // data: 0x8A0208
extern unsigned char DataGlobal_8A020C[81756];  // data: 0x8A020C
extern unsigned char DataGlobal_8A0210[81752];  // data: 0x8A0210
extern unsigned char DataGlobal_8A0214[81748];  // data: 0x8A0214
extern unsigned char DataGlobal_8A0215[81747];  // data: 0x8A0215
extern unsigned char DataGlobal_8A0218[81744];  // data: 0x8A0218
extern unsigned char DataGlobal_8A021C[81740];  // data: 0x8A021C
extern unsigned char DataGlobal_8A0220[81736];  // data: 0x8A0220
extern unsigned char DataGlobal_8A0224[81732];  // data: 0x8A0224
extern unsigned char DataGlobal_8A0228[81728];  // data: 0x8A0228
extern unsigned char DataGlobal_8A022C[81724];  // data: 0x8A022C
extern unsigned char DataGlobal_8A0230[81720];  // data: 0x8A0230
extern unsigned char DataGlobal_8A0232[81718];  // data: 0x8A0232
extern unsigned char DataGlobal_8A0238[81712];  // data: 0x8A0238
extern unsigned char DataGlobal_8A0240[81704];  // data: 0x8A0240
extern unsigned char DataGlobal_8A0248[81696];  // data: 0x8A0248
extern unsigned char DataGlobal_8A0250[81688];  // data: 0x8A0250
extern unsigned char DataGlobal_8A0254[81684];  // data: 0x8A0254
extern unsigned char DataGlobal_8A0258[81680];  // data: 0x8A0258
extern unsigned char DataGlobal_8A0260[81672];  // data: 0x8A0260
extern unsigned char DataGlobal_8A0268[81664];  // data: 0x8A0268
extern unsigned char DataGlobal_8A0270[81656];  // data: 0x8A0270
extern unsigned char DataGlobal_8A0278[81648];  // data: 0x8A0278
extern unsigned char DataGlobal_8A027C[81644];  // data: 0x8A027C
extern unsigned char DataGlobal_8A0280[81640];  // data: 0x8A0280
extern unsigned char DataGlobal_8A0284[81636];  // data: 0x8A0284
extern unsigned char DataGlobal_8A0288[81632];  // data: 0x8A0288
extern unsigned char DataGlobal_8A0290[81624];  // data: 0x8A0290
extern unsigned char DataGlobal_8A0360[81416];  // data: 0x8A0360
extern unsigned char DataGlobal_8A0364[81412];  // data: 0x8A0364
extern unsigned char DataGlobal_8A0368[81408];  // data: 0x8A0368
extern unsigned char DataGlobal_8A0370[81400];  // data: 0x8A0370
extern unsigned char DataGlobal_8A0394[81364];  // data: 0x8A0394
extern unsigned char DataGlobal_8A03A0[81352];  // data: 0x8A03A0
extern unsigned char DataGlobal_8A03D8[81296];  // data: 0x8A03D8
extern unsigned char DataGlobal_8A03E0[81288];  // data: 0x8A03E0
extern unsigned char DataGlobal_8A03E1[81287];  // data: 0x8A03E1
extern unsigned char DataGlobal_8A03E8[81280];  // data: 0x8A03E8
extern unsigned char DataGlobal_8A03EC[81276];  // data: 0x8A03EC
extern unsigned char DataGlobal_8A03F0[81272];  // data: 0x8A03F0
extern unsigned char DataGlobal_8A03F4[81268];  // data: 0x8A03F4
extern unsigned char DataGlobal_8A03F8[81264];  // data: 0x8A03F8
extern unsigned char DataGlobal_8A03FC[81260];  // data: 0x8A03FC
extern unsigned char DataGlobal_8A0400[81256];  // data: 0x8A0400
extern unsigned char DataGlobal_8A0408[81248];  // data: 0x8A0408
extern unsigned char DataGlobal_8A0410[81240];  // data: 0x8A0410
extern unsigned char DataGlobal_8A0418[81232];  // data: 0x8A0418
extern unsigned char DataGlobal_8A0600[80744];  // data: 0x8A0600
extern unsigned char DataGlobal_8A0604[80740];  // data: 0x8A0604
extern unsigned char DataGlobal_8A0608[80736];  // data: 0x8A0608
extern unsigned char DataGlobal_8A0610[80728];  // data: 0x8A0610
extern unsigned char DataGlobal_8A0620[80712];  // data: 0x8A0620
extern unsigned char DataGlobal_8A0628[80704];  // data: 0x8A0628
extern unsigned char DataGlobal_8A0630[80696];  // data: 0x8A0630
extern unsigned char DataGlobal_8A06F8[80496];  // data: 0x8A06F8
extern unsigned char DataGlobal_8A0720[80456];  // data: 0x8A0720
extern unsigned char DataGlobal_8A0724[80452];  // data: 0x8A0724
extern unsigned char DataGlobal_8A0728[80448];  // data: 0x8A0728
extern unsigned char DataGlobal_8A072C[80444];  // data: 0x8A072C
extern unsigned char DataGlobal_8A0730[80440];  // data: 0x8A0730
extern unsigned char DataGlobal_8A0738[80432];  // data: 0x8A0738
extern unsigned char DataGlobal_8A0740[80424];  // data: 0x8A0740
extern unsigned char DataGlobal_8A0748[80416];  // data: 0x8A0748
extern unsigned char DataGlobal_8A074C[80412];  // data: 0x8A074C
extern unsigned char DataGlobal_8A0750[80408];  // data: 0x8A0750
extern unsigned char DataGlobal_8A0754[80404];  // data: 0x8A0754
extern unsigned char DataGlobal_8A0758[80400];  // data: 0x8A0758
extern unsigned char DataGlobal_8A0760[80392];  // data: 0x8A0760
extern unsigned char DataGlobal_8A0764[80388];  // data: 0x8A0764
extern unsigned char DataGlobal_8A0768[80384];  // data: 0x8A0768
extern unsigned char DataGlobal_8A076C[80380];  // data: 0x8A076C
extern unsigned char DataGlobal_8A0770[80376];  // data: 0x8A0770
extern unsigned char DataGlobal_8A0772[80374];  // data: 0x8A0772
extern unsigned char DataGlobal_8A0778[80368];  // data: 0x8A0778
extern unsigned char DataGlobal_8A0780[80360];  // data: 0x8A0780
extern unsigned char DataGlobal_8A0788[80352];  // data: 0x8A0788
extern unsigned char DataGlobal_8A0794[80340];  // data: 0x8A0794
extern unsigned char DataGlobal_8A07A0[80328];  // data: 0x8A07A0
extern unsigned char DataGlobal_8A07A8[80320];  // data: 0x8A07A8
extern unsigned char DataGlobal_8A07B0[80312];  // data: 0x8A07B0
extern unsigned char DataGlobal_8A07B8[80304];  // data: 0x8A07B8
extern unsigned char DataGlobal_8A07BC[80300];  // data: 0x8A07BC
extern unsigned char DataGlobal_8A07C0[80296];  // data: 0x8A07C0
extern unsigned char DataGlobal_8A07C4[80292];  // data: 0x8A07C4
extern unsigned char DataGlobal_8A07C8[80288];  // data: 0x8A07C8
extern unsigned char DataGlobal_8A07D0[80280];  // data: 0x8A07D0
extern unsigned char DataGlobal_8A07D8[80272];  // data: 0x8A07D8
extern unsigned char DataGlobal_8A07DC[80268];  // data: 0x8A07DC
extern unsigned char DataGlobal_8A07E0[80264];  // data: 0x8A07E0
extern unsigned char DataGlobal_8A07E4[80260];  // data: 0x8A07E4
extern unsigned char DataGlobal_8A07E8[80256];  // data: 0x8A07E8
extern unsigned char DataGlobal_8A07F0[80248];  // data: 0x8A07F0
extern unsigned char DataGlobal_8A07F4[80244];  // data: 0x8A07F4
extern unsigned char DataGlobal_8A07F8[80240];  // data: 0x8A07F8
extern unsigned char DataGlobal_8A07FC[80236];  // data: 0x8A07FC
extern unsigned char DataGlobal_8A0800[80232];  // data: 0x8A0800
extern unsigned char DataGlobal_8A0802[80230];  // data: 0x8A0802
extern unsigned char DataGlobal_8A0808[80224];  // data: 0x8A0808
extern unsigned char DataGlobal_8A0810[80216];  // data: 0x8A0810
extern unsigned char DataGlobal_8A0818[80208];  // data: 0x8A0818
extern unsigned char DataGlobal_8A0820[80200];  // data: 0x8A0820
extern unsigned char DataGlobal_8A0824[80196];  // data: 0x8A0824
extern unsigned char DataGlobal_8A0828[80192];  // data: 0x8A0828
extern unsigned char DataGlobal_8A0830[80184];  // data: 0x8A0830
extern unsigned char DataGlobal_8A0838[80176];  // data: 0x8A0838
extern unsigned char DataGlobal_8A0840[80168];  // data: 0x8A0840
extern unsigned char DataGlobal_8A0848[80160];  // data: 0x8A0848
extern unsigned char DataGlobal_8A084C[80156];  // data: 0x8A084C
extern unsigned char DataGlobal_8A0850[80152];  // data: 0x8A0850
extern unsigned char DataGlobal_8A0854[80148];  // data: 0x8A0854
extern unsigned char DataGlobal_8A0858[80144];  // data: 0x8A0858
extern unsigned char DataGlobal_8A0860[80136];  // data: 0x8A0860
extern unsigned char DataGlobal_8A0868[80128];  // data: 0x8A0868
extern unsigned char DataGlobal_8A0890[80088];  // data: 0x8A0890
extern unsigned char DataGlobal_8A0894[80084];  // data: 0x8A0894
extern unsigned char DataGlobal_8A0898[80080];  // data: 0x8A0898
extern unsigned char DataGlobal_8A089C[80076];  // data: 0x8A089C
extern unsigned char DataGlobal_8A08A0[80072];  // data: 0x8A08A0
extern unsigned char DataGlobal_8A08A2[80070];  // data: 0x8A08A2
extern unsigned char DataGlobal_8A08A8[80064];  // data: 0x8A08A8
extern unsigned char DataGlobal_8A08B0[80056];  // data: 0x8A08B0
extern unsigned char DataGlobal_8A08B8[80048];  // data: 0x8A08B8
extern unsigned char DataGlobal_8A08E0[80008];  // data: 0x8A08E0
extern unsigned char DataGlobal_8A08E4[80004];  // data: 0x8A08E4
extern unsigned char DataGlobal_8A08E8[80000];  // data: 0x8A08E8
extern unsigned char DataGlobal_8A08F0[79992];  // data: 0x8A08F0
extern unsigned char DataGlobal_8A08F8[79984];  // data: 0x8A08F8
extern unsigned char DataGlobal_8A0900[79976];  // data: 0x8A0900
extern unsigned char DataGlobal_8A0908[79968];  // data: 0x8A0908
extern unsigned char DataGlobal_8A090C[79964];  // data: 0x8A090C
extern unsigned char DataGlobal_8A0910[79960];  // data: 0x8A0910
extern unsigned char DataGlobal_8A0914[79956];  // data: 0x8A0914
extern unsigned char DataGlobal_8A0918[79952];  // data: 0x8A0918
extern unsigned char DataGlobal_8A0920[79944];  // data: 0x8A0920
extern unsigned char DataGlobal_8A0928[79936];  // data: 0x8A0928
extern unsigned char DataGlobal_8A0930[79928];  // data: 0x8A0930
extern unsigned char DataGlobal_8A0934[79924];  // data: 0x8A0934
extern unsigned char DataGlobal_8A0938[79920];  // data: 0x8A0938
extern unsigned char DataGlobal_8A093C[79916];  // data: 0x8A093C
extern unsigned char DataGlobal_8A0940[79912];  // data: 0x8A0940
extern unsigned char DataGlobal_8A0942[79910];  // data: 0x8A0942
extern unsigned char DataGlobal_8A0958[79888];  // data: 0x8A0958
extern unsigned char DataGlobal_8A095C[79884];  // data: 0x8A095C
extern unsigned char DataGlobal_8A0960[79880];  // data: 0x8A0960
extern unsigned char DataGlobal_8A0968[79872];  // data: 0x8A0968
extern unsigned char DataGlobal_8A0970[79864];  // data: 0x8A0970
extern unsigned char DataGlobal_8A0978[79856];  // data: 0x8A0978
extern unsigned char DataGlobal_8A0D88[78816];  // data: 0x8A0D88
extern unsigned char DataGlobal_8A0D8C[78812];  // data: 0x8A0D8C
extern unsigned char DataGlobal_8A0D90[78808];  // data: 0x8A0D90
extern unsigned char DataGlobal_8A0D98[78800];  // data: 0x8A0D98
extern unsigned char DataGlobal_8A0DA0[78792];  // data: 0x8A0DA0
extern unsigned char DataGlobal_8A0DA8[78784];  // data: 0x8A0DA8
extern unsigned char DataGlobal_8A0DB0[78776];  // data: 0x8A0DB0
extern unsigned char DataGlobal_8A0DB4[78772];  // data: 0x8A0DB4
extern unsigned char DataGlobal_8A0DB8[78768];  // data: 0x8A0DB8
extern unsigned char DataGlobal_8A0DBC[78764];  // data: 0x8A0DBC
extern unsigned char DataGlobal_8A0DC0[78760];  // data: 0x8A0DC0
extern unsigned char DataGlobal_8A0DC8[78752];  // data: 0x8A0DC8
extern unsigned char DataGlobal_8A0DCC[78748];  // data: 0x8A0DCC
extern unsigned char DataGlobal_8A0DE8[78720];  // data: 0x8A0DE8
extern unsigned char DataGlobal_8A0DEC[78716];  // data: 0x8A0DEC
extern unsigned char DataGlobal_8A0DEE[78714];  // data: 0x8A0DEE
extern unsigned char DataGlobal_8A0DF0[78712];  // data: 0x8A0DF0
extern unsigned char DataGlobal_8A0DF4[78708];  // data: 0x8A0DF4
extern unsigned char DataGlobal_8A0DFC[78700];  // data: 0x8A0DFC
extern unsigned char DataGlobal_8A0E00[78696];  // data: 0x8A0E00
extern unsigned char DataGlobal_8A0E04[78692];  // data: 0x8A0E04
extern unsigned char DataGlobal_8A0E08[78688];  // data: 0x8A0E08
extern unsigned char DataGlobal_8A0E0C[78684];  // data: 0x8A0E0C
extern unsigned char DataGlobal_8A0E10[78680];  // data: 0x8A0E10
extern unsigned char DataGlobal_8A0E18[78672];  // data: 0x8A0E18
extern unsigned char DataGlobal_8A0E20[78664];  // data: 0x8A0E20
extern unsigned char DataGlobal_8A0E24[78660];  // data: 0x8A0E24
extern unsigned char DataGlobal_8A0E28[78656];  // data: 0x8A0E28
extern unsigned char DataGlobal_8A0E2C[78652];  // data: 0x8A0E2C
extern unsigned char DataGlobal_8A0E30[78648];  // data: 0x8A0E30
extern unsigned char DataGlobal_8A0E32[78646];  // data: 0x8A0E32
extern unsigned char DataGlobal_8A0E38[78640];  // data: 0x8A0E38
extern unsigned char DataGlobal_8A0E40[78632];  // data: 0x8A0E40
extern unsigned char DataGlobal_8A0E48[78624];  // data: 0x8A0E48
extern unsigned char DataGlobal_8A0E50[78616];  // data: 0x8A0E50
extern unsigned char DataGlobal_8A0E54[78612];  // data: 0x8A0E54
extern unsigned char DataGlobal_8A0E58[78608];  // data: 0x8A0E58
extern unsigned char DataGlobal_8A0E60[78600];  // data: 0x8A0E60
extern unsigned char DataGlobal_8A0E68[78592];  // data: 0x8A0E68
extern unsigned char DataGlobal_8A0E70[78584];  // data: 0x8A0E70
extern unsigned char DataGlobal_8A0E78[78576];  // data: 0x8A0E78
extern unsigned char DataGlobal_8A0E7C[78572];  // data: 0x8A0E7C
extern unsigned char DataGlobal_8A0E80[78568];  // data: 0x8A0E80
extern unsigned char DataGlobal_8A0E88[78560];  // data: 0x8A0E88
extern unsigned char DataGlobal_8A0E8C[78556];  // data: 0x8A0E8C
extern unsigned char DataGlobal_8A0E90[78552];  // data: 0x8A0E90
extern unsigned char DataGlobal_8A0E94[78548];  // data: 0x8A0E94
extern unsigned char DataGlobal_8A0E95[78547];  // data: 0x8A0E95
extern unsigned char DataGlobal_8A0E98[78544];  // data: 0x8A0E98
extern unsigned char DataGlobal_8A0E9C[78540];  // data: 0x8A0E9C
extern unsigned char DataGlobal_8A0EA0[78536];  // data: 0x8A0EA0
extern unsigned char DataGlobal_8A0EA8[78528];  // data: 0x8A0EA8
extern unsigned char DataGlobal_8A0EB0[78520];  // data: 0x8A0EB0
extern unsigned char DataGlobal_8A0EB8[78512];  // data: 0x8A0EB8
extern unsigned char DataGlobal_8A0EBC[78508];  // data: 0x8A0EBC
extern unsigned char DataGlobal_8A0EC0[78504];  // data: 0x8A0EC0
extern unsigned char DataGlobal_8A0EC4[78500];  // data: 0x8A0EC4
extern unsigned char DataGlobal_8A0EC8[78496];  // data: 0x8A0EC8
extern unsigned char DataGlobal_8A0ED0[78488];  // data: 0x8A0ED0
extern unsigned char DataGlobal_8A0ED4[78484];  // data: 0x8A0ED4
extern unsigned char DataGlobal_8A0ED8[78480];  // data: 0x8A0ED8
extern unsigned char DataGlobal_8A0EDC[78476];  // data: 0x8A0EDC
extern unsigned char DataGlobal_8A0EE0[78472];  // data: 0x8A0EE0
extern unsigned char DataGlobal_8A0EE2[78470];  // data: 0x8A0EE2
extern unsigned char DataGlobal_8A0EE8[78464];  // data: 0x8A0EE8
extern unsigned char DataGlobal_8A0EF0[78456];  // data: 0x8A0EF0
extern unsigned char DataGlobal_8A0EF8[78448];  // data: 0x8A0EF8
extern unsigned char DataGlobal_8A0F00[78440];  // data: 0x8A0F00
extern unsigned char DataGlobal_8A0F04[78436];  // data: 0x8A0F04
extern unsigned char DataGlobal_8A0F08[78432];  // data: 0x8A0F08
extern unsigned char DataGlobal_8A0F10[78424];  // data: 0x8A0F10
extern unsigned char DataGlobal_8A0F18[78416];  // data: 0x8A0F18
extern unsigned char DataGlobal_8A0F20[78408];  // data: 0x8A0F20
extern unsigned char DataGlobal_8A0F28[78400];  // data: 0x8A0F28
extern unsigned char DataGlobal_8A0F2C[78396];  // data: 0x8A0F2C
extern unsigned char DataGlobal_8A0F30[78392];  // data: 0x8A0F30
extern unsigned char DataGlobal_8A0F34[78388];  // data: 0x8A0F34
extern unsigned char DataGlobal_8A0F38[78384];  // data: 0x8A0F38
extern unsigned char DataGlobal_8A0F40[78376];  // data: 0x8A0F40
extern unsigned char DataGlobal_8A0F48[78368];  // data: 0x8A0F48
extern unsigned char DataGlobal_8A0F4C[78364];  // data: 0x8A0F4C
extern unsigned char DataGlobal_8A0F50[78360];  // data: 0x8A0F50
extern unsigned char DataGlobal_8A0F54[78356];  // data: 0x8A0F54
extern unsigned char DataGlobal_8A3760[68104];  // data: 0x8A3760
extern unsigned char DataGlobal_8A3764[68100];  // data: 0x8A3764
extern unsigned char DataGlobal_8A3768[68096];  // data: 0x8A3768
extern unsigned char DataGlobal_8A376C[68092];  // data: 0x8A376C
extern unsigned char DataGlobal_8A3770[68088];  // data: 0x8A3770
extern unsigned char DataGlobal_8A3774[68084];  // data: 0x8A3774
extern unsigned char DataGlobal_8A3778[68080];  // data: 0x8A3778
extern unsigned char DataGlobal_8A377C[68076];  // data: 0x8A377C
extern unsigned char DataGlobal_8A377D[68075];  // data: 0x8A377D
extern unsigned char DataGlobal_8A3780[68072];  // data: 0x8A3780
extern unsigned char DataGlobal_8A3784[68068];  // data: 0x8A3784
extern unsigned char DataGlobal_8A3788[68064];  // data: 0x8A3788
extern unsigned char DataGlobal_8A3790[68056];  // data: 0x8A3790
extern unsigned char DataGlobal_8A3792[68054];  // data: 0x8A3792
extern unsigned char DataGlobal_8A3798[68048];  // data: 0x8A3798
extern unsigned char DataGlobal_8A37C0[68008];  // data: 0x8A37C0
extern unsigned char DataGlobal_8A37C8[68000];  // data: 0x8A37C8
extern unsigned char DataGlobal_8A37D0[67992];  // data: 0x8A37D0
extern unsigned char DataGlobal_8A37D4[67988];  // data: 0x8A37D4
extern unsigned char DataGlobal_8A37D8[67984];  // data: 0x8A37D8
extern unsigned char DataGlobal_8A37E0[67976];  // data: 0x8A37E0
extern unsigned char DataGlobal_8A37E8[67968];  // data: 0x8A37E8
extern unsigned char DataGlobal_8A37F0[67960];  // data: 0x8A37F0
extern unsigned char DataGlobal_8A37F8[67952];  // data: 0x8A37F8
extern unsigned char DataGlobal_8A37FC[67948];  // data: 0x8A37FC
extern unsigned char DataGlobal_8A3800[67944];  // data: 0x8A3800
extern unsigned char DataGlobal_8A3804[67940];  // data: 0x8A3804
extern unsigned char DataGlobal_8A3808[67936];  // data: 0x8A3808
extern unsigned char DataGlobal_8A3810[67928];  // data: 0x8A3810
extern unsigned char DataGlobal_8A3818[67920];  // data: 0x8A3818
extern unsigned char DataGlobal_8A3820[67912];  // data: 0x8A3820
extern unsigned char DataGlobal_8A3828[67904];  // data: 0x8A3828
extern unsigned char DataGlobal_8A382C[67900];  // data: 0x8A382C
extern unsigned char DataGlobal_8A3830[67896];  // data: 0x8A3830
extern unsigned char DataGlobal_8A3834[67892];  // data: 0x8A3834
extern unsigned char DataGlobal_8A3838[67888];  // data: 0x8A3838
extern unsigned char DataGlobal_8A3840[67880];  // data: 0x8A3840
extern unsigned char DataGlobal_8A3848[67872];  // data: 0x8A3848
extern unsigned char DataGlobal_8A3850[67864];  // data: 0x8A3850
extern unsigned char DataGlobal_8A3858[67856];  // data: 0x8A3858
extern unsigned char DataGlobal_8A385C[67852];  // data: 0x8A385C
extern unsigned char DataGlobal_8A3860[67848];  // data: 0x8A3860
extern unsigned char DataGlobal_8A3868[67840];  // data: 0x8A3868
extern unsigned char DataGlobal_8A3870[67832];  // data: 0x8A3870
extern unsigned char DataGlobal_8A3874[67828];  // data: 0x8A3874
extern unsigned char DataGlobal_8A3878[67824];  // data: 0x8A3878
extern unsigned char DataGlobal_8A387C[67820];  // data: 0x8A387C
extern unsigned char DataGlobal_8A387D[67819];  // data: 0x8A387D
extern unsigned char DataGlobal_8A3880[67816];  // data: 0x8A3880
extern unsigned char DataGlobal_8A3884[67812];  // data: 0x8A3884
extern unsigned char DataGlobal_8A3888[67808];  // data: 0x8A3888
extern unsigned char DataGlobal_8A3890[67800];  // data: 0x8A3890
extern unsigned char DataGlobal_8A3898[67792];  // data: 0x8A3898
extern unsigned char DataGlobal_8A389C[67788];  // data: 0x8A389C
extern unsigned char DataGlobal_8A38A0[67784];  // data: 0x8A38A0
extern unsigned char DataGlobal_8A38A4[67780];  // data: 0x8A38A4
extern unsigned char DataGlobal_8A38A8[67776];  // data: 0x8A38A8
extern unsigned char DataGlobal_8A38B0[67768];  // data: 0x8A38B0
extern unsigned char DataGlobal_8A38B8[67760];  // data: 0x8A38B8
extern unsigned char DataGlobal_8A38C0[67752];  // data: 0x8A38C0
extern unsigned char DataGlobal_8A38C4[67748];  // data: 0x8A38C4
extern unsigned char DataGlobal_8A38C8[67744];  // data: 0x8A38C8
extern unsigned char DataGlobal_8A38CC[67740];  // data: 0x8A38CC
extern unsigned char DataGlobal_8A38D0[67736];  // data: 0x8A38D0
extern unsigned char DataGlobal_8A38D2[67734];  // data: 0x8A38D2
extern unsigned char DataGlobal_8A38D8[67728];  // data: 0x8A38D8
extern unsigned char DataGlobal_8A38E0[67720];  // data: 0x8A38E0
extern unsigned char DataGlobal_8A3910[67672];  // data: 0x8A3910
extern unsigned char DataGlobal_8A3914[67668];  // data: 0x8A3914
extern unsigned char DataGlobal_8A3918[67664];  // data: 0x8A3918
extern unsigned char DataGlobal_8A391C[67660];  // data: 0x8A391C
extern unsigned char DataGlobal_8A3920[67656];  // data: 0x8A3920
extern unsigned char DataGlobal_8A3928[67648];  // data: 0x8A3928
extern unsigned char DataGlobal_8A3930[67640];  // data: 0x8A3930
extern unsigned char DataGlobal_8A3938[67632];  // data: 0x8A3938
extern unsigned char DataGlobal_8A393C[67628];  // data: 0x8A393C
extern unsigned char DataGlobal_8A3940[67624];  // data: 0x8A3940
extern unsigned char DataGlobal_8A3948[67616];  // data: 0x8A3948
extern unsigned char DataGlobal_8A3950[67608];  // data: 0x8A3950
extern unsigned char DataGlobal_8A3958[67600];  // data: 0x8A3958
extern unsigned char DataGlobal_8A3960[67592];  // data: 0x8A3960
extern unsigned char DataGlobal_8A3964[67588];  // data: 0x8A3964
extern unsigned char DataGlobal_8A3968[67584];  // data: 0x8A3968
extern unsigned char DataGlobal_8A396C[67580];  // data: 0x8A396C
extern unsigned char DataGlobal_8A3970[67576];  // data: 0x8A3970
extern unsigned char DataGlobal_8A3978[67568];  // data: 0x8A3978
extern unsigned char DataGlobal_8A3980[67560];  // data: 0x8A3980
extern unsigned char DataGlobal_8A3988[67552];  // data: 0x8A3988
extern unsigned char DataGlobal_8A398C[67548];  // data: 0x8A398C
extern unsigned char DataGlobal_8A3990[67544];  // data: 0x8A3990
extern unsigned char DataGlobal_8A3994[67540];  // data: 0x8A3994
extern unsigned char DataGlobal_8A3998[67536];  // data: 0x8A3998
extern unsigned char DataGlobal_8A39A0[67528];  // data: 0x8A39A0
extern unsigned char DataGlobal_8A39A8[67520];  // data: 0x8A39A8
extern unsigned char DataGlobal_8A39B0[67512];  // data: 0x8A39B0
extern unsigned char DataGlobal_8A39B8[67504];  // data: 0x8A39B8
extern unsigned char DataGlobal_8A39BC[67500];  // data: 0x8A39BC
extern unsigned char DataGlobal_8A39C0[67496];  // data: 0x8A39C0
extern unsigned char DataGlobal_8A39C8[67488];  // data: 0x8A39C8
extern unsigned char DataGlobal_8A39D0[67480];  // data: 0x8A39D0
extern unsigned char DataGlobal_8A39D8[67472];  // data: 0x8A39D8
extern unsigned char DataGlobal_8A39E0[67464];  // data: 0x8A39E0
extern unsigned char DataGlobal_8A39E4[67460];  // data: 0x8A39E4
extern unsigned char DataGlobal_8A39E8[67456];  // data: 0x8A39E8
extern unsigned char DataGlobal_8A39EC[67452];  // data: 0x8A39EC
extern unsigned char DataGlobal_8A39F0[67448];  // data: 0x8A39F0
extern unsigned char DataGlobal_8A39F8[67440];  // data: 0x8A39F8
extern unsigned char DataGlobal_8A3A00[67432];  // data: 0x8A3A00
extern unsigned char DataGlobal_8B3AB0[1720];  // data: 0x8B3AB0
extern unsigned char DataGlobal_8B3AB8[1712];  // data: 0x8B3AB8
extern unsigned char DataGlobal_8B3ABC[1708];  // data: 0x8B3ABC
extern unsigned char DataGlobal_8B3AC0[1704];  // data: 0x8B3AC0
extern unsigned char DataGlobal_8B3AC4[1700];  // data: 0x8B3AC4
extern unsigned char DataGlobal_8B3AC8[1696];  // data: 0x8B3AC8
extern unsigned char DataGlobal_8B3ACA[1694];  // data: 0x8B3ACA
extern unsigned char DataGlobal_8B3AD0[1688];  // data: 0x8B3AD0
extern unsigned char DataGlobal_8B3AD8[1680];  // data: 0x8B3AD8
extern unsigned char DataGlobal_8B3AE0[1672];  // data: 0x8B3AE0
extern unsigned char DataGlobal_8B3AE8[1664];  // data: 0x8B3AE8
extern unsigned char DataGlobal_8B3AEC[1660];  // data: 0x8B3AEC
extern unsigned char DataGlobal_8B3AF0[1656];  // data: 0x8B3AF0
extern unsigned char DataGlobal_8B3AF8[1648];  // data: 0x8B3AF8
extern unsigned char DataGlobal_8B3B00[1640];  // data: 0x8B3B00
extern unsigned char DataGlobal_8B3B08[1632];  // data: 0x8B3B08
extern unsigned char DataGlobal_8B3B10[1624];  // data: 0x8B3B10
extern unsigned char DataGlobal_8B3B14[1620];  // data: 0x8B3B14
extern unsigned char DataGlobal_8B3B18[1616];  // data: 0x8B3B18
extern unsigned char DataGlobal_8B3B1C[1612];  // data: 0x8B3B1C
extern unsigned char DataGlobal_8B3B20[1608];  // data: 0x8B3B20
extern unsigned char DataGlobal_8B3B28[1600];  // data: 0x8B3B28
extern unsigned char DataGlobal_8B3B30[1592];  // data: 0x8B3B30
extern unsigned char DataGlobal_8B3B38[1584];  // data: 0x8B3B38
extern unsigned char DataGlobal_8B3B3C[1580];  // data: 0x8B3B3C
extern unsigned char DataGlobal_8B3B40[1576];  // data: 0x8B3B40
extern unsigned char DataGlobal_8B3B44[1572];  // data: 0x8B3B44
extern unsigned char DataGlobal_8B3B48[1568];  // data: 0x8B3B48
extern unsigned char DataGlobal_8B3B50[1560];  // data: 0x8B3B50
extern unsigned char DataGlobal_8B3B58[1552];  // data: 0x8B3B58
extern unsigned char DataGlobal_8B3B60[1544];  // data: 0x8B3B60
extern unsigned char DataGlobal_8B3B68[1536];  // data: 0x8B3B68
extern unsigned char DataGlobal_8B3B6C[1532];  // data: 0x8B3B6C
extern unsigned char DataGlobal_8B3B70[1528];  // data: 0x8B3B70
extern unsigned char DataGlobal_8B3B78[1520];  // data: 0x8B3B78
extern unsigned char DataGlobal_8B3B80[1512];  // data: 0x8B3B80
extern unsigned char DataGlobal_8B3B88[1504];  // data: 0x8B3B88
extern unsigned char DataGlobal_8B3B90[1496];  // data: 0x8B3B90
extern unsigned char DataGlobal_8B3B94[1492];  // data: 0x8B3B94
extern unsigned char DataGlobal_8B3B98[1488];  // data: 0x8B3B98
extern unsigned char DataGlobal_8B3B9C[1484];  // data: 0x8B3B9C
extern unsigned char DataGlobal_8B3BA0[1480];  // data: 0x8B3BA0
extern unsigned char DataGlobal_8B3BA8[1472];  // data: 0x8B3BA8
extern unsigned char DataGlobal_8B3BB0[1464];  // data: 0x8B3BB0
extern unsigned char DataGlobal_8B3BB8[1456];  // data: 0x8B3BB8
extern unsigned char DataGlobal_8B3BBC[1452];  // data: 0x8B3BBC
extern unsigned char DataGlobal_8B3BC0[1448];  // data: 0x8B3BC0
extern unsigned char DataGlobal_8B3BC4[1444];  // data: 0x8B3BC4
extern unsigned char DataGlobal_8B3BC8[1440];  // data: 0x8B3BC8
extern unsigned char DataGlobal_8B3BCA[1438];  // data: 0x8B3BCA
extern unsigned char DataGlobal_8B3BD0[1432];  // data: 0x8B3BD0
extern unsigned char DataGlobal_8B3BD8[1424];  // data: 0x8B3BD8
extern unsigned char DataGlobal_8B3BE0[1416];  // data: 0x8B3BE0
extern unsigned char DataGlobal_8B3BE8[1408];  // data: 0x8B3BE8
extern unsigned char DataGlobal_8B3BEC[1404];  // data: 0x8B3BEC
extern unsigned char DataGlobal_8B3BF0[1400];  // data: 0x8B3BF0
extern unsigned char DataGlobal_8B3BF8[1392];  // data: 0x8B3BF8
extern unsigned char DataGlobal_8B3C00[1384];  // data: 0x8B3C00
extern unsigned char DataGlobal_8B3C08[1376];  // data: 0x8B3C08
extern unsigned char DataGlobal_8B3C10[1368];  // data: 0x8B3C10
extern unsigned char DataGlobal_8B3C14[1364];  // data: 0x8B3C14
extern unsigned char DataGlobal_8B3C18[1360];  // data: 0x8B3C18
extern unsigned char DataGlobal_8B3C1C[1356];  // data: 0x8B3C1C
extern unsigned char DataGlobal_8B3C20[1352];  // data: 0x8B3C20
extern unsigned char DataGlobal_8B3C28[1344];  // data: 0x8B3C28
extern unsigned char DataGlobal_8B3C30[1336];  // data: 0x8B3C30
extern unsigned char DataGlobal_8B3C34[1332];  // data: 0x8B3C34
extern unsigned char DataGlobal_8B3C38[1328];  // data: 0x8B3C38
extern unsigned char DataGlobal_8B3C3C[1324];  // data: 0x8B3C3C
extern unsigned char DataGlobal_8B3C40[1320];  // data: 0x8B3C40
extern unsigned char DataGlobal_8B3C48[1312];  // data: 0x8B3C48
extern unsigned char DataGlobal_8B3C4C[1308];  // data: 0x8B3C4C
extern unsigned char DataGlobal_8B3C50[1304];  // data: 0x8B3C50
extern unsigned char DataGlobal_8B3C54[1300];  // data: 0x8B3C54
extern unsigned char DataGlobal_8B3C58[1296];  // data: 0x8B3C58
extern unsigned char DataGlobal_8B3C60[1288];  // data: 0x8B3C60
extern unsigned char DataGlobal_8B3C68[1280];  // data: 0x8B3C68
extern unsigned char DataGlobal_8B3C70[1272];  // data: 0x8B3C70
extern unsigned char DataGlobal_8B3C78[1264];  // data: 0x8B3C78
extern unsigned char DataGlobal_8B3C7C[1260];  // data: 0x8B3C7C
extern unsigned char DataGlobal_8B3C80[1256];  // data: 0x8B3C80
extern unsigned char DataGlobal_8B3C88[1248];  // data: 0x8B3C88
extern unsigned char DataGlobal_8B3C90[1240];  // data: 0x8B3C90
extern unsigned char DataGlobal_8B3C98[1232];  // data: 0x8B3C98
extern unsigned char DataGlobal_8B3CA0[1224];  // data: 0x8B3CA0
extern unsigned char DataGlobal_8B3CA4[1220];  // data: 0x8B3CA4
extern unsigned char DataGlobal_8B3CA8[1216];  // data: 0x8B3CA8
extern unsigned char DataGlobal_8B3CAC[1212];  // data: 0x8B3CAC
extern unsigned char DataGlobal_8B3CB0[1208];  // data: 0x8B3CB0
extern unsigned char DataGlobal_8B3CB8[1200];  // data: 0x8B3CB8
extern unsigned char DataGlobal_8B3CC8[1184];  // data: 0x8B3CC8
extern unsigned char DataGlobal_8B3CCC[1180];  // data: 0x8B3CCC
extern unsigned char DataGlobal_8B3CD0[1176];  // data: 0x8B3CD0
extern unsigned char DataGlobal_8B3CD4[1172];  // data: 0x8B3CD4
extern unsigned char DataGlobal_8B3CD5[1171];  // data: 0x8B3CD5
extern unsigned char DataGlobal_8B3CD8[1168];  // data: 0x8B3CD8
extern unsigned char DataGlobal_8B3CE0[1160];  // data: 0x8B3CE0
extern unsigned char DataGlobal_8B3CE4[1156];  // data: 0x8B3CE4
extern unsigned char DataGlobal_8B3CE8[1152];  // data: 0x8B3CE8
extern unsigned char DataGlobal_8B3CEC[1148];  // data: 0x8B3CEC
extern unsigned char DataGlobal_8B3CF0[1144];  // data: 0x8B3CF0
extern unsigned char DataGlobal_8B3CF2[1142];  // data: 0x8B3CF2
extern unsigned char DataGlobal_8B3CF8[1136];  // data: 0x8B3CF8
extern unsigned char DataGlobal_8B3D00[1128];  // data: 0x8B3D00
extern unsigned char DataGlobal_8B3D08[1120];  // data: 0x8B3D08
extern unsigned char DataGlobal_8B3D10[1112];  // data: 0x8B3D10
extern unsigned char DataGlobal_8B3D14[1108];  // data: 0x8B3D14
extern unsigned char DataGlobal_8B3D18[1104];  // data: 0x8B3D18
extern unsigned char DataGlobal_8B3D1C[1100];  // data: 0x8B3D1C
extern unsigned char DataGlobal_8B3D1D[1099];  // data: 0x8B3D1D
extern unsigned char DataGlobal_8B3D24[1092];  // data: 0x8B3D24
extern unsigned char DataGlobal_8B3D28[1088];  // data: 0x8B3D28
extern unsigned char DataGlobal_8B3D2C[1084];  // data: 0x8B3D2C
extern unsigned char DataGlobal_8B3D30[1080];  // data: 0x8B3D30
extern unsigned char DataGlobal_8B3D38[1072];  // data: 0x8B3D38
extern unsigned char DataGlobal_8B3D40[1064];  // data: 0x8B3D40
extern unsigned char DataGlobal_8B3D48[1056];  // data: 0x8B3D48
extern unsigned char DataGlobal_8B3D50[1048];  // data: 0x8B3D50
extern unsigned char DataGlobal_8B3D54[1044];  // data: 0x8B3D54
extern unsigned char DataGlobal_8B3D58[1040];  // data: 0x8B3D58
extern unsigned char DataGlobal_8B3D5C[1036];  // data: 0x8B3D5C
extern unsigned char DataGlobal_8B3D60[1032];  // data: 0x8B3D60
extern unsigned char DataGlobal_8B3D68[1024];  // data: 0x8B3D68
extern unsigned char DataGlobal_8B3D70[1016];  // data: 0x8B3D70
extern unsigned char DataGlobal_8B3D78[1008];  // data: 0x8B3D78
extern unsigned char DataGlobal_8B3D7C[1004];  // data: 0x8B3D7C
extern unsigned char DataGlobal_8B3D80[1000];  // data: 0x8B3D80
extern unsigned char DataGlobal_8B3D84[996];  // data: 0x8B3D84
extern unsigned char DataGlobal_8B3D90[984];  // data: 0x8B3D90
extern unsigned char DataGlobal_8B3D98[976];  // data: 0x8B3D98
extern unsigned char DataGlobal_8B3DA0[968];  // data: 0x8B3DA0
extern unsigned char DataGlobal_8B3DA8[960];  // data: 0x8B3DA8
extern unsigned char DataGlobal_8B3DAC[956];  // data: 0x8B3DAC
extern unsigned char DataGlobal_8B3DB0[952];  // data: 0x8B3DB0
extern unsigned char DataGlobal_8B3DB8[944];  // data: 0x8B3DB8
extern unsigned char DataGlobal_8B3DC4[932];  // data: 0x8B3DC4
extern unsigned char DataGlobal_8B3DC8[928];  // data: 0x8B3DC8
extern unsigned char DataGlobal_8B3DCC[924];  // data: 0x8B3DCC
extern unsigned char DataGlobal_8B3DCD[923];  // data: 0x8B3DCD
extern unsigned char DataGlobal_8B3DD0[920];  // data: 0x8B3DD0
extern unsigned char DataGlobal_8B3DD4[916];  // data: 0x8B3DD4
extern unsigned char DataGlobal_8B3DD8[912];  // data: 0x8B3DD8
extern unsigned char DataGlobal_8B3DE0[904];  // data: 0x8B3DE0
extern unsigned char DataGlobal_8B3DE8[896];  // data: 0x8B3DE8
extern unsigned char DataGlobal_8B3DEC[892];  // data: 0x8B3DEC
extern unsigned char DataGlobal_8B3DF0[888];  // data: 0x8B3DF0
extern unsigned char DataGlobal_8B3DF4[884];  // data: 0x8B3DF4
extern unsigned char DataGlobal_8B3DF8[880];  // data: 0x8B3DF8
extern unsigned char DataGlobal_8B3E00[872];  // data: 0x8B3E00
extern unsigned char DataGlobal_8B3E08[864];  // data: 0x8B3E08
extern unsigned char DataGlobal_8B3E10[856];  // data: 0x8B3E10
extern unsigned char DataGlobal_8B3E12[854];  // data: 0x8B3E12
extern unsigned char DataGlobal_8B3E18[848];  // data: 0x8B3E18
extern unsigned char DataGlobal_8B3E20[840];  // data: 0x8B3E20
extern unsigned char DataGlobal_8B3E28[832];  // data: 0x8B3E28
extern unsigned char DataGlobal_8B3E30[824];  // data: 0x8B3E30
extern unsigned char DataGlobal_8B3E34[820];  // data: 0x8B3E34
extern unsigned char DataGlobal_8B3E38[816];  // data: 0x8B3E38
extern unsigned char DataGlobal_8B3E40[808];  // data: 0x8B3E40
extern unsigned char DataGlobal_8B3E48[800];  // data: 0x8B3E48
extern unsigned char DataGlobal_8B3E50[792];  // data: 0x8B3E50
extern unsigned char DataGlobal_8B3E58[784];  // data: 0x8B3E58
extern unsigned char DataGlobal_8B3E5C[780];  // data: 0x8B3E5C
extern unsigned char DataGlobal_8B3E60[776];  // data: 0x8B3E60
extern unsigned char DataGlobal_8B3E64[772];  // data: 0x8B3E64
extern unsigned char DataGlobal_8B3E68[768];  // data: 0x8B3E68
extern unsigned char DataGlobal_8B3E70[760];  // data: 0x8B3E70
extern unsigned char DataGlobal_8B3E78[752];  // data: 0x8B3E78
extern unsigned char DataGlobal_8B3E7C[748];  // data: 0x8B3E7C
extern unsigned char DataGlobal_8B3E80[744];  // data: 0x8B3E80
extern unsigned char DataGlobal_8B3E84[740];  // data: 0x8B3E84
extern unsigned char DataGlobal_8B3E88[736];  // data: 0x8B3E88
extern unsigned char DataGlobal_8B3E8C[732];  // data: 0x8B3E8C
extern unsigned char DataGlobal_8B3E90[728];  // data: 0x8B3E90
extern unsigned char DataGlobal_8B3E98[720];  // data: 0x8B3E98
extern unsigned char DataGlobal_8B3EA0[712];  // data: 0x8B3EA0
extern unsigned char DataGlobal_8B3EA4[708];  // data: 0x8B3EA4
extern unsigned char DataGlobal_8B3EA8[704];  // data: 0x8B3EA8
extern unsigned char DataGlobal_8B3EAC[700];  // data: 0x8B3EAC
extern unsigned char DataGlobal_8B3EB0[696];  // data: 0x8B3EB0
extern unsigned char DataGlobal_8B3EB2[694];  // data: 0x8B3EB2
extern unsigned char DataGlobal_8B3EB8[688];  // data: 0x8B3EB8
extern unsigned char DataGlobal_8B3EC0[680];  // data: 0x8B3EC0
extern unsigned char DataGlobal_8B3EC8[672];  // data: 0x8B3EC8
extern unsigned char DataGlobal_8B3ED0[664];  // data: 0x8B3ED0
extern unsigned char DataGlobal_8B3ED4[660];  // data: 0x8B3ED4
extern unsigned char DataGlobal_8B3ED8[656];  // data: 0x8B3ED8
extern unsigned char DataGlobal_8B3EE0[648];  // data: 0x8B3EE0
extern unsigned char DataGlobal_8B3EE8[640];  // data: 0x8B3EE8
extern unsigned char DataGlobal_8B3EF0[632];  // data: 0x8B3EF0
extern unsigned char DataGlobal_8B3EF8[624];  // data: 0x8B3EF8
extern unsigned char DataGlobal_8B3EFC[620];  // data: 0x8B3EFC
extern unsigned char DataGlobal_8B3F00[616];  // data: 0x8B3F00
extern unsigned char DataGlobal_8B3F04[612];  // data: 0x8B3F04
extern unsigned char DataGlobal_8B3F08[608];  // data: 0x8B3F08
extern unsigned char DataGlobal_8B3F10[600];  // data: 0x8B3F10
extern unsigned char DataGlobal_8B3F14[596];  // data: 0x8B3F14
extern unsigned char DataGlobal_8B3F18[592];  // data: 0x8B3F18
extern unsigned char DataGlobal_8B3F1C[588];  // data: 0x8B3F1C
extern unsigned char DataGlobal_8B3F20[584];  // data: 0x8B3F20
extern unsigned char DataGlobal_8B3F24[580];  // data: 0x8B3F24
extern unsigned char DataGlobal_8B3F28[576];  // data: 0x8B3F28
extern unsigned char DataGlobal_8B3F38[560];  // data: 0x8B3F38
extern unsigned char DataGlobal_8B3F90[472];  // data: 0x8B3F90
extern unsigned char DataGlobal_8B3F94[468];  // data: 0x8B3F94
extern unsigned char DataGlobal_8B3F98[464];  // data: 0x8B3F98
extern unsigned char DataGlobal_8B3F9C[460];  // data: 0x8B3F9C
extern unsigned char DataGlobal_8B3FA0[456];  // data: 0x8B3FA0
extern unsigned char DataGlobal_8B3FA2[454];  // data: 0x8B3FA2
extern unsigned char DataGlobal_8B3FA4[452];  // data: 0x8B3FA4
extern unsigned char DataGlobal_8B3FA8[448];  // data: 0x8B3FA8
extern unsigned char DataGlobal_8B3FB0[440];  // data: 0x8B3FB0
extern unsigned char DataGlobal_8B3FB8[432];  // data: 0x8B3FB8
extern unsigned char DataGlobal_8B3FC0[424];  // data: 0x8B3FC0
extern unsigned char DataGlobal_8B3FF0[376];  // data: 0x8B3FF0
extern unsigned char DataGlobal_8B4020[328];  // data: 0x8B4020
extern unsigned char DataGlobal_8B4024[324];  // data: 0x8B4024
extern unsigned char DataGlobal_8B4028[320];  // data: 0x8B4028
extern unsigned char DataGlobal_8B4030[312];  // data: 0x8B4030
extern unsigned char DataGlobal_8B4038[304];  // data: 0x8B4038
extern unsigned char DataGlobal_8B4040[296];  // data: 0x8B4040
extern unsigned char DataGlobal_8B4044[292];  // data: 0x8B4044
extern unsigned char DataGlobal_8B4050[280];  // data: 0x8B4050
extern unsigned char DataGlobal_8B405C[268];  // data: 0x8B405C
extern unsigned char DataGlobal_8B4068[256];  // data: 0x8B4068
extern unsigned char DataGlobal_8B4074[244];  // data: 0x8B4074
extern unsigned char DataGlobal_8B4080[232];  // data: 0x8B4080
extern unsigned char DataGlobal_8B408C[220];  // data: 0x8B408C
extern unsigned char DataGlobal_8B4098[208];  // data: 0x8B4098
extern unsigned char DataGlobal_8B40A0[200];  // data: 0x8B40A0
extern unsigned char DataGlobal_8B40A8[192];  // data: 0x8B40A8
extern unsigned char DataGlobal_8B40AC[188];  // data: 0x8B40AC
extern unsigned char DataGlobal_8B40B0[184];  // data: 0x8B40B0
extern unsigned char DataGlobal_8B40B4[180];  // data: 0x8B40B4
extern unsigned char DataGlobal_8B40B8[176];  // data: 0x8B40B8
extern unsigned char DataGlobal_8B40C0[168];  // data: 0x8B40C0
extern unsigned char DataGlobal_8B40C8[160];  // data: 0x8B40C8
extern unsigned char DataGlobal_8B40CC[156];  // data: 0x8B40CC
extern unsigned char DataGlobal_8B40D0[152];  // data: 0x8B40D0
extern unsigned char DataGlobal_8B40D4[148];  // data: 0x8B40D4
extern unsigned char DataGlobal_8B40D5[147];  // data: 0x8B40D5
extern unsigned char DataGlobal_8B40DC[140];  // data: 0x8B40DC
extern unsigned char DataGlobal_8B40E0[136];  // data: 0x8B40E0
extern unsigned char DataGlobal_8B40E1[135];  // data: 0x8B40E1
extern unsigned char DataGlobal_8B40E2[134];  // data: 0x8B40E2
extern unsigned char DataGlobal_8B40F0[120];  // data: 0x8B40F0
extern unsigned char DataGlobal_8B40F4[116];  // data: 0x8B40F4
extern unsigned char DataGlobal_8B40F5[115];  // data: 0x8B40F5
extern unsigned char DataGlobal_8B40FC[108];  // data: 0x8B40FC
extern unsigned char DataGlobal_8B4110[88];  // data: 0x8B4110
extern unsigned char DataGlobal_8B4114[84];  // data: 0x8B4114
extern unsigned char DataGlobal_8B4115[83];  // data: 0x8B4115
extern unsigned char DataGlobal_8B411C[76];  // data: 0x8B411C
extern unsigned char DataGlobal_8B4120[72];  // data: 0x8B4120
extern unsigned char DataGlobal_8B4124[68];  // data: 0x8B4124
extern unsigned char DataGlobal_8B4128[64];  // data: 0x8B4128
extern unsigned char DataGlobal_8B412C[60];  // data: 0x8B412C
extern unsigned char DataGlobal_8B412D[59];  // data: 0x8B412D
extern unsigned char DataGlobal_8B4134[52];  // data: 0x8B4134
extern unsigned char DataGlobal_8B4138[48];  // data: 0x8B4138
extern unsigned char DataGlobal_8B4140[40];  // data: 0x8B4140
extern unsigned char DataGlobal_8B4144[36];  // data: 0x8B4144
extern unsigned char DataGlobal_8B4145[35];  // data: 0x8B4145
extern unsigned char DataGlobal_8B414C[28];  // data: 0x8B414C
extern unsigned char DataGlobal_8B4158[16];  // data: 0x8B4158
extern unsigned char DataGlobal_8B415C[12];  // data: 0x8B415C
extern unsigned char DataGlobal_8B415D[11];  // data: 0x8B415D
extern unsigned char DataGlobal_8B4160[8];  // data: 0x8B4160
extern unsigned char DataGlobal_8B4164[4];  // data: 0x8B4164
extern unsigned char DataGlobal_8B4168[4];  // data: 0x8B4168
extern unsigned char DataGlobal_8B417C[4];  // data: 0x8B417C
extern unsigned char DataGlobal_8B4184[4];  // data: 0x8B4184
extern unsigned char DataGlobal_8B4185[4];  // data: 0x8B4185
extern unsigned char DataGlobal_8B4194[4];  // data: 0x8B4194
extern unsigned char DataGlobal_8B419C[4];  // data: 0x8B419C
extern unsigned char DataGlobal_8B419D[4];  // data: 0x8B419D
extern unsigned char DataGlobal_8B41A8[4];  // data: 0x8B41A8
extern unsigned char DataGlobal_8B41AC[4];  // data: 0x8B41AC
extern unsigned char DataGlobal_8B41B0[4];  // data: 0x8B41B0
extern unsigned char DataGlobal_8B41B4[4];  // data: 0x8B41B4
extern unsigned char DataGlobal_8B41B5[4];  // data: 0x8B41B5
extern unsigned char DataGlobal_8B41BC[4];  // data: 0x8B41BC
extern unsigned char DataGlobal_8B41C0[4];  // data: 0x8B41C0
extern unsigned char DataGlobal_8B41D4[4];  // data: 0x8B41D4
extern unsigned char DataGlobal_8B41D5[4];  // data: 0x8B41D5
extern unsigned char DataGlobal_8B41E4[4];  // data: 0x8B41E4
extern unsigned char DataGlobal_8B41E8[4];  // data: 0x8B41E8
extern unsigned char DataGlobal_8B41EC[4];  // data: 0x8B41EC
extern unsigned char DataGlobal_8B41ED[4];  // data: 0x8B41ED
extern unsigned char DataGlobal_8B41F0[4];  // data: 0x8B41F0
extern unsigned char DataGlobal_8B41F4[4];  // data: 0x8B41F4
extern unsigned char DataGlobal_8B4205[4];  // data: 0x8B4205
extern unsigned char DataGlobal_8B4206[4];  // data: 0x8B4206
extern unsigned char DataGlobal_8B4207[4];  // data: 0x8B4207
extern unsigned char DataGlobal_8B420B[4];  // data: 0x8B420B
extern unsigned char DataGlobal_8B4211[281982];  // data: 0x8B4211
extern unsigned char DataGlobal_8F8F8F[4];  // data: 0x8F8F8F
extern unsigned char DataGlobal_929292[4];  // data: 0x929292
extern unsigned char DataGlobal_98967F[4];  // data: 0x98967F
extern unsigned char DataGlobal_A80214;  // data: 0xA80214
extern unsigned char DataGlobal_A80215;  // data: 0xA80215
extern unsigned char DataGlobal_A80220;  // data: 0xA80220
extern unsigned char DataGlobal_A80234;  // data: 0xA80234
extern unsigned char DataGlobal_A80235;  // data: 0xA80235
extern unsigned char DataGlobal_A802D5;  // data: 0xA802D5
extern unsigned char DataGlobal_A802D6;  // data: 0xA802D6
extern unsigned char DataGlobal_A802E6;  // data: 0xA802E6
extern unsigned char DataGlobal_A802E7[4];  // data: 0xA802E7
extern unsigned char DataGlobal_A802EB;  // data: 0xA802EB
extern unsigned char DataGlobal_A83C74;  // data: 0xA83C74
extern unsigned char DataGlobal_A83C75;  // data: 0xA83C75
extern unsigned char DataGlobal_A83C8C;  // data: 0xA83C8C
extern unsigned char DataGlobal_A83C8D;  // data: 0xA83C8D
extern unsigned char DataGlobal_A83CA4;  // data: 0xA83CA4
extern unsigned char DataGlobal_A83CA5;  // data: 0xA83CA5
extern unsigned char DataGlobal_A83CC4;  // data: 0xA83CC4
extern unsigned char DataGlobal_A83CC5;  // data: 0xA83CC5
extern unsigned char DataGlobal_A83CD4;  // data: 0xA83CD4
extern unsigned char DataGlobal_A83CD5;  // data: 0xA83CD5
extern unsigned char DataGlobal_A83CD6;  // data: 0xA83CD6
extern unsigned char DataGlobal_A83CD9;  // data: 0xA83CD9
extern unsigned char DataGlobal_A83CEC;  // data: 0xA83CEC
extern unsigned char DataGlobal_A83CED;  // data: 0xA83CED
extern unsigned char DataGlobal_A83D04;  // data: 0xA83D04
extern unsigned char DataGlobal_A83D05;  // data: 0xA83D05
extern unsigned char DataGlobal_A83D20;  // data: 0xA83D20
extern unsigned char DataGlobal_A83D21;  // data: 0xA83D21
extern unsigned char DataGlobal_A83D22;  // data: 0xA83D22
extern unsigned char DataGlobal_A83D31;  // data: 0xA83D31
extern unsigned char DataGlobal_A83D48;  // data: 0xA83D48
extern unsigned char DataGlobal_A83D49;  // data: 0xA83D49
extern unsigned char DataGlobal_A83D54[90120];  // data: 0xA83D54
extern unsigned char DataGlobal_A83D58[90116];  // data: 0xA83D58
extern unsigned char DataGlobal_A83D5C[90112];  // data: 0xA83D5C
extern unsigned char DataGlobal_A83D5D[90111];  // data: 0xA83D5D
extern unsigned char DataGlobal_A83D60[90108];  // data: 0xA83D60
extern unsigned char DataGlobal_A83D64[90104];  // data: 0xA83D64
extern unsigned char DataGlobal_A83D68[90100];  // data: 0xA83D68
extern unsigned char DataGlobal_A83D6C[90096];  // data: 0xA83D6C
extern unsigned char DataGlobal_A83D70[90092];  // data: 0xA83D70
extern unsigned char DataGlobal_A83D74[90088];  // data: 0xA83D74
extern unsigned char DataGlobal_A83D75[90087];  // data: 0xA83D75
extern unsigned char DataGlobal_A83D7C[90080];  // data: 0xA83D7C
extern unsigned char DataGlobal_A83D80[90076];  // data: 0xA83D80
extern unsigned char DataGlobal_A83D88[90068];  // data: 0xA83D88
extern unsigned char DataGlobal_A83D8C[90064];  // data: 0xA83D8C
extern unsigned char DataGlobal_A83D8D[90063];  // data: 0xA83D8D
extern unsigned char DataGlobal_A83D94[90056];  // data: 0xA83D94
extern unsigned char DataGlobal_A83D98[90052];  // data: 0xA83D98
extern unsigned char DataGlobal_A83DA0[90044];  // data: 0xA83DA0
extern unsigned char DataGlobal_A83DA4[90040];  // data: 0xA83DA4
extern unsigned char DataGlobal_A83DA5[90039];  // data: 0xA83DA5
extern unsigned char DataGlobal_A83DAC[90032];  // data: 0xA83DAC
extern unsigned char DataGlobal_A83DB0[90028];  // data: 0xA83DB0
extern unsigned char DataGlobal_A83DB8[90020];  // data: 0xA83DB8
extern unsigned char DataGlobal_A83DC0[90012];  // data: 0xA83DC0
extern unsigned char DataGlobal_A83DC1[90011];  // data: 0xA83DC1
extern unsigned char DataGlobal_A83DC2[90010];  // data: 0xA83DC2
extern unsigned char DataGlobal_A83DC8[90004];  // data: 0xA83DC8
extern unsigned char DataGlobal_A83DCC[90000];  // data: 0xA83DCC
extern unsigned char DataGlobal_A83DD0[89996];  // data: 0xA83DD0
extern unsigned char DataGlobal_A83DD4[89992];  // data: 0xA83DD4
extern unsigned char DataGlobal_A83DD5[89991];  // data: 0xA83DD5
extern unsigned char DataGlobal_A83DD8[89988];  // data: 0xA83DD8
extern unsigned char DataGlobal_A83DDC[89984];  // data: 0xA83DDC
extern unsigned char DataGlobal_A83DE0[89980];  // data: 0xA83DE0
extern unsigned char DataGlobal_A83DF0[89964];  // data: 0xA83DF0
extern unsigned char DataGlobal_A83DF4[89960];  // data: 0xA83DF4
extern unsigned char DataGlobal_A83DF5[89959];  // data: 0xA83DF5
extern unsigned char DataGlobal_A83DFC[89952];  // data: 0xA83DFC
extern unsigned char DataGlobal_A83E00[89948];  // data: 0xA83E00
extern unsigned char DataGlobal_A83E04[89944];  // data: 0xA83E04
extern unsigned char DataGlobal_A83E08[89940];  // data: 0xA83E08
extern unsigned char DataGlobal_A83E0C[89936];  // data: 0xA83E0C
extern unsigned char DataGlobal_A83E0D[89935];  // data: 0xA83E0D
extern unsigned char DataGlobal_A83E10[89932];  // data: 0xA83E10
extern unsigned char DataGlobal_A83E14[89928];  // data: 0xA83E14
extern unsigned char DataGlobal_A83E18[89924];  // data: 0xA83E18
extern unsigned char DataGlobal_A83E30[89900];  // data: 0xA83E30
extern unsigned char DataGlobal_A83E38[89892];  // data: 0xA83E38
extern unsigned char DataGlobal_A83E3C[89888];  // data: 0xA83E3C
extern unsigned char DataGlobal_A83E3D[89887];  // data: 0xA83E3D
extern unsigned char DataGlobal_A83E44[89880];  // data: 0xA83E44
extern unsigned char DataGlobal_A83E48[89876];  // data: 0xA83E48
extern unsigned char DataGlobal_A83EC8[89748];  // data: 0xA83EC8
extern unsigned char DataGlobal_A83EC9[89747];  // data: 0xA83EC9
extern unsigned char DataGlobal_A83ECA[89746];  // data: 0xA83ECA
extern unsigned char DataGlobal_A83ECC[89744];  // data: 0xA83ECC
extern unsigned char DataGlobal_A83ED0[89740];  // data: 0xA83ED0
extern unsigned char DataGlobal_A83ED4[89736];  // data: 0xA83ED4
extern unsigned char DataGlobal_A83ED8[89732];  // data: 0xA83ED8
extern unsigned char DataGlobal_A83EDC[89728];  // data: 0xA83EDC
extern unsigned char DataGlobal_A83EE3[89721];  // data: 0xA83EE3
extern unsigned char DataGlobal_A83EE7[89717];  // data: 0xA83EE7
extern unsigned char DataGlobal_A83EEF[89709];  // data: 0xA83EEF
extern unsigned char DataGlobal_A83EF3[89705];  // data: 0xA83EF3
extern unsigned char DataGlobal_A8B1E4[60280];  // data: 0xA8B1E4
extern unsigned char DataGlobal_A8B1E8[60276];  // data: 0xA8B1E8
extern unsigned char DataGlobal_A8B1EC[60272];  // data: 0xA8B1EC
extern unsigned char DataGlobal_A8B1ED[60271];  // data: 0xA8B1ED
extern unsigned char DataGlobal_A8B1F0[60268];  // data: 0xA8B1F0
extern unsigned char DataGlobal_A8B1F4[60264];  // data: 0xA8B1F4
extern unsigned char DataGlobal_A8B204[60248];  // data: 0xA8B204
extern unsigned char DataGlobal_A8B208[60244];  // data: 0xA8B208
extern unsigned char DataGlobal_A8B20C[60240];  // data: 0xA8B20C
extern unsigned char DataGlobal_A8B20D[60239];  // data: 0xA8B20D
extern unsigned char DataGlobal_A8B214[60232];  // data: 0xA8B214
extern unsigned char DataGlobal_A8B220[60220];  // data: 0xA8B220
extern unsigned char DataGlobal_A8B224[60216];  // data: 0xA8B224
extern unsigned char DataGlobal_A8B225[60215];  // data: 0xA8B225
extern unsigned char DataGlobal_A8B22C[60208];  // data: 0xA8B22C
extern unsigned char DataGlobal_A8B248[60180];  // data: 0xA8B248
extern unsigned char DataGlobal_A8B278[60132];  // data: 0xA8B278
extern unsigned char DataGlobal_A8B27C[60128];  // data: 0xA8B27C
extern unsigned char DataGlobal_A8B2A0[60092];  // data: 0xA8B2A0
extern unsigned char DataGlobal_A8B37C[59872];  // data: 0xA8B37C
extern unsigned char DataGlobal_A8B3B4[59816];  // data: 0xA8B3B4
extern unsigned char DataGlobal_A8B3B8[59812];  // data: 0xA8B3B8
extern unsigned char DataGlobal_A8B3BC[59808];  // data: 0xA8B3BC
extern unsigned char DataGlobal_A8B3C0[59804];  // data: 0xA8B3C0
extern unsigned char DataGlobal_A8B544[59416];  // data: 0xA8B544
extern unsigned char DataGlobal_A8B548[59412];  // data: 0xA8B548
extern unsigned char DataGlobal_A8B558[59396];  // data: 0xA8B558
extern unsigned char DataGlobal_A8B568[59380];  // data: 0xA8B568
extern unsigned char DataGlobal_A8B574[59368];  // data: 0xA8B574
extern unsigned char DataGlobal_A8B5C4[59288];  // data: 0xA8B5C4
extern unsigned char DataGlobal_A8B8B4[58536];  // data: 0xA8B8B4
extern unsigned char DataGlobal_A8B8B5[58535];  // data: 0xA8B8B5
extern unsigned char DataGlobal_A8B8B8[58532];  // data: 0xA8B8B8
extern unsigned char DataGlobal_A8B8C1[58523];  // data: 0xA8B8C1
extern unsigned char DataGlobal_A8B8C8[58516];  // data: 0xA8B8C8
extern unsigned char DataGlobal_A8B8D0[58508];  // data: 0xA8B8D0
extern unsigned char DataGlobal_A8B8D5[58503];  // data: 0xA8B8D5
extern unsigned char DataGlobal_A8B8DC[58496];  // data: 0xA8B8DC
extern unsigned char DataGlobal_A8B904[58456];  // data: 0xA8B904
extern unsigned char DataGlobal_A8BB0C[57936];  // data: 0xA8BB0C
extern unsigned char DataGlobal_A8BB10[57932];  // data: 0xA8BB10
extern unsigned char DataGlobal_A8BB14[57928];  // data: 0xA8BB14
extern unsigned char DataGlobal_A8BB18[57924];  // data: 0xA8BB18
extern unsigned char DataGlobal_A8BB20[57916];  // data: 0xA8BB20
extern unsigned char DataGlobal_A8BB24[57912];  // data: 0xA8BB24
extern unsigned char DataGlobal_A8BB28[57908];  // data: 0xA8BB28
extern unsigned char DataGlobal_A8BB2C[57904];  // data: 0xA8BB2C
extern unsigned char DataGlobal_A8BB30[57900];  // data: 0xA8BB30
extern unsigned char DataGlobal_A8BB35[57895];  // data: 0xA8BB35
extern unsigned char DataGlobal_A8BB38[57892];  // data: 0xA8BB38
extern unsigned char DataGlobal_A8BB3C[57888];  // data: 0xA8BB3C
extern unsigned char DataGlobal_A8BB40[57884];  // data: 0xA8BB40
extern unsigned char DataGlobal_A8BB60[57852];  // data: 0xA8BB60
extern unsigned char DataGlobal_A8D108[52308];  // data: 0xA8D108
extern unsigned char DataGlobal_A8D110[52300];  // data: 0xA8D110
extern unsigned char DataGlobal_A8D1FC[52064];  // data: 0xA8D1FC
extern unsigned char DataGlobal_A8D224[52024];  // data: 0xA8D224
extern unsigned char DataGlobal_A8D228[52020];  // data: 0xA8D228
extern unsigned char DataGlobal_A8D22C[52016];  // data: 0xA8D22C
extern unsigned char DataGlobal_A8D23C[52000];  // data: 0xA8D23C
extern unsigned char DataGlobal_A8D24C[51984];  // data: 0xA8D24C
extern unsigned char DataGlobal_A8D25C[51968];  // data: 0xA8D25C
extern unsigned char DataGlobal_A8D57C[51168];  // data: 0xA8D57C
extern unsigned char DataGlobal_A8D584[51160];  // data: 0xA8D584
extern unsigned char DataGlobal_A8D588[51156];  // data: 0xA8D588
extern unsigned char DataGlobal_A8D5FC[51040];  // data: 0xA8D5FC
extern unsigned char DataGlobal_A8D600[51036];  // data: 0xA8D600
extern unsigned char DataGlobal_A8D604[51032];  // data: 0xA8D604
extern unsigned char DataGlobal_A8D608[51028];  // data: 0xA8D608
extern unsigned char DataGlobal_A8D60C[51024];  // data: 0xA8D60C
extern unsigned char DataGlobal_A8D60D[51023];  // data: 0xA8D60D
extern unsigned char DataGlobal_A8D667[50933];  // data: 0xA8D667
extern unsigned char DataGlobal_A8D66F[50925];  // data: 0xA8D66F
extern unsigned char DataGlobal_A8D673[50921];  // data: 0xA8D673
extern unsigned char DataGlobal_A8D748[50708];  // data: 0xA8D748
extern unsigned char DataGlobal_A8D74C[50704];  // data: 0xA8D74C
extern unsigned char DataGlobal_A8D7FB[50529];  // data: 0xA8D7FB
extern unsigned char DataGlobal_A8D800[50524];  // data: 0xA8D800
extern unsigned char DataGlobal_A8D808[50516];  // data: 0xA8D808
extern unsigned char DataGlobal_A8D80C[50512];  // data: 0xA8D80C
extern unsigned char DataGlobal_A8D812[50506];  // data: 0xA8D812
extern unsigned char DataGlobal_A8DA40[49948];  // data: 0xA8DA40
extern unsigned char DataGlobal_A8DA44[49944];  // data: 0xA8DA44
extern unsigned char DataGlobal_A8DA5C[49920];  // data: 0xA8DA5C
extern unsigned char DataGlobal_A8DA7C[49888];  // data: 0xA8DA7C
extern unsigned char DataGlobal_A8DA81[49883];  // data: 0xA8DA81
extern unsigned char DataGlobal_A8DA88[49876];  // data: 0xA8DA88
extern unsigned char DataGlobal_A8DA94[49864];  // data: 0xA8DA94
extern unsigned char DataGlobal_A8DAC0[49820];  // data: 0xA8DAC0
extern unsigned char DataGlobal_A8DB41;  // data: 0xA8DB41
extern unsigned char DataGlobal_A8DB54;  // data: 0xA8DB54
extern unsigned char DataGlobal_A8DB59;  // data: 0xA8DB59
extern unsigned char DataGlobal_A8DB7C[49632];  // data: 0xA8DB7C
extern unsigned char DataGlobal_A8DBA4[49592];  // data: 0xA8DBA4
extern unsigned char DataGlobal_A8DBA8[49588];  // data: 0xA8DBA8
extern unsigned char DataGlobal_A8DBAC[49584];  // data: 0xA8DBAC
extern unsigned char DataGlobal_A8DBB0[49580];  // data: 0xA8DBB0
extern unsigned char DataGlobal_A8DBB4[49576];  // data: 0xA8DBB4
extern unsigned char DataGlobal_A8DBB8[49572];  // data: 0xA8DBB8
extern unsigned char DataGlobal_A8DBBC[49568];  // data: 0xA8DBBC
extern unsigned char DataGlobal_A8DBC0[49564];  // data: 0xA8DBC0
extern unsigned char DataGlobal_A8DBCC[49552];  // data: 0xA8DBCC
extern unsigned char DataGlobal_A8DC2C[49456];  // data: 0xA8DC2C
extern unsigned char DataGlobal_A8DC4C[49424];  // data: 0xA8DC4C
extern unsigned char DataGlobal_A8DE4C[48912];  // data: 0xA8DE4C
extern unsigned char DataGlobal_A8E04C[48400];  // data: 0xA8E04C
extern unsigned char DataGlobal_A8E050[48396];  // data: 0xA8E050
extern unsigned char DataGlobal_A8E054[48392];  // data: 0xA8E054
extern unsigned char DataGlobal_A8E058[48388];  // data: 0xA8E058
extern unsigned char DataGlobal_A8E05C[48384];  // data: 0xA8E05C
extern unsigned char DataGlobal_A8E180[48092];  // data: 0xA8E180
extern unsigned char DataGlobal_A8E184[48088];  // data: 0xA8E184
extern unsigned char DataGlobal_A8E1A4[48056];  // data: 0xA8E1A4
extern unsigned char DataGlobal_A8E1C4[48024];  // data: 0xA8E1C4
extern unsigned char DataGlobal_A8E224[47928];  // data: 0xA8E224
extern unsigned char DataGlobal_A8E228[47924];  // data: 0xA8E228
extern unsigned char DataGlobal_A8E22C[47920];  // data: 0xA8E22C
extern unsigned char DataGlobal_A8E230[47916];  // data: 0xA8E230
extern unsigned char DataGlobal_A8E250[47884];  // data: 0xA8E250
extern unsigned char DataGlobal_A8E254[47880];  // data: 0xA8E254
extern unsigned char DataGlobal_A8E258[47876];  // data: 0xA8E258
extern unsigned char DataGlobal_A8E280[47836];  // data: 0xA8E280
extern unsigned char DataGlobal_A8E2A4[47800];  // data: 0xA8E2A4
extern unsigned char DataGlobal_A8E2A6[47798];  // data: 0xA8E2A6
extern unsigned char DataGlobal_A8E2AC[47792];  // data: 0xA8E2AC
extern unsigned char DataGlobal_A8E2B0[47788];  // data: 0xA8E2B0
extern unsigned char DataGlobal_A8E2B6[47782];  // data: 0xA8E2B6
extern unsigned char DataGlobal_A8E2BA[47778];  // data: 0xA8E2BA
extern unsigned char DataGlobal_A8E2BE[47774];  // data: 0xA8E2BE
extern unsigned char DataGlobal_A8E2C4[47768];  // data: 0xA8E2C4
extern unsigned char DataGlobal_A8E2C8[47764];  // data: 0xA8E2C8
extern unsigned char DataGlobal_A8E2CC[47760];  // data: 0xA8E2CC
extern unsigned char DataGlobal_A8E2D4[47752];  // data: 0xA8E2D4
extern unsigned char DataGlobal_A8E2D8[47748];  // data: 0xA8E2D8
extern unsigned char DataGlobal_A8E2DC[47744];  // data: 0xA8E2DC
extern unsigned char DataGlobal_A8E2E0[47740];  // data: 0xA8E2E0
extern unsigned char DataGlobal_A8E30C[47696];  // data: 0xA8E30C
extern unsigned char DataGlobal_A8E314[47688];  // data: 0xA8E314
extern unsigned char DataGlobal_A8E318[47684];  // data: 0xA8E318
extern unsigned char DataGlobal_A8E31C[47680];  // data: 0xA8E31C
extern unsigned char DataGlobal_A8E320[47676];  // data: 0xA8E320
extern unsigned char DataGlobal_A8E324[47672];  // data: 0xA8E324
extern unsigned char DataGlobal_A8E325[47671];  // data: 0xA8E325
extern unsigned char DataGlobal_A8E32C[47664];  // data: 0xA8E32C
extern unsigned char DataGlobal_A8E330[47660];  // data: 0xA8E330
extern unsigned char DataGlobal_A8E338[47652];  // data: 0xA8E338
extern unsigned char DataGlobal_A8E33C[47648];  // data: 0xA8E33C
extern unsigned char DataGlobal_A8E33D[47647];  // data: 0xA8E33D
extern unsigned char DataGlobal_A8E344[47640];  // data: 0xA8E344
extern unsigned char DataGlobal_A8E350[47628];  // data: 0xA8E350
extern unsigned char DataGlobal_A8E354[47624];  // data: 0xA8E354
extern unsigned char DataGlobal_A8E355[47623];  // data: 0xA8E355
extern unsigned char DataGlobal_A8E35C[47616];  // data: 0xA8E35C
extern unsigned char DataGlobal_A8E360[47612];  // data: 0xA8E360
extern unsigned char DataGlobal_A8E364[47608];  // data: 0xA8E364
extern unsigned char DataGlobal_A8E368[47604];  // data: 0xA8E368
extern unsigned char DataGlobal_A8E36C[47600];  // data: 0xA8E36C
extern unsigned char DataGlobal_A8E36D[47599];  // data: 0xA8E36D
extern unsigned char DataGlobal_A8E370[47596];  // data: 0xA8E370
extern unsigned char DataGlobal_A8E374[47592];  // data: 0xA8E374
extern unsigned char DataGlobal_A8E378[47588];  // data: 0xA8E378
extern unsigned char DataGlobal_A8E380[47580];  // data: 0xA8E380
extern unsigned char DataGlobal_A8E384[47576];  // data: 0xA8E384
extern unsigned char DataGlobal_A8E388[47572];  // data: 0xA8E388
extern unsigned char DataGlobal_A8E394[47560];  // data: 0xA8E394
extern unsigned char DataGlobal_A8E398[47556];  // data: 0xA8E398
extern unsigned char DataGlobal_A8E39C[47552];  // data: 0xA8E39C
extern unsigned char DataGlobal_A8E39D[47551];  // data: 0xA8E39D
extern unsigned char DataGlobal_A8E3A4[47544];  // data: 0xA8E3A4
extern unsigned char DataGlobal_A8E3A8[47540];  // data: 0xA8E3A8
extern unsigned char DataGlobal_A8E3AE[47534];  // data: 0xA8E3AE
extern unsigned char DataGlobal_A8E7A8[46516];  // data: 0xA8E7A8
extern unsigned char DataGlobal_A8E8C4[46232];  // data: 0xA8E8C4
extern unsigned char DataGlobal_A8E8C5[46231];  // data: 0xA8E8C5
extern unsigned char DataGlobal_A8E8C6[46230];  // data: 0xA8E8C6
extern unsigned char DataGlobal_A8E8D0[46220];  // data: 0xA8E8D0
extern unsigned char DataGlobal_A8E8D8[46212];  // data: 0xA8E8D8
extern unsigned char DataGlobal_A8E8DC[46208];  // data: 0xA8E8DC
extern unsigned char DataGlobal_A8E8DD[46207];  // data: 0xA8E8DD
extern unsigned char DataGlobal_A8E8E4[46200];  // data: 0xA8E8E4
extern unsigned char DataGlobal_A8E8E8[46196];  // data: 0xA8E8E8
extern unsigned char DataGlobal_A8E958[46084];  // data: 0xA8E958
extern unsigned char DataGlobal_A8E968[46068];  // data: 0xA8E968
extern unsigned char DataGlobal_A8E96C[46064];  // data: 0xA8E96C
extern unsigned char DataGlobal_A8E970[46060];  // data: 0xA8E970
extern unsigned char DataGlobal_A8E974[46056];  // data: 0xA8E974
extern unsigned char DataGlobal_A8E975[46055];  // data: 0xA8E975
extern unsigned char DataGlobal_A8E97C[46048];  // data: 0xA8E97C
extern unsigned char DataGlobal_A8E980[46044];  // data: 0xA8E980
extern unsigned char DataGlobal_A8E981[46043];  // data: 0xA8E981
extern unsigned char DataGlobal_A8E982[46042];  // data: 0xA8E982
extern unsigned char DataGlobal_A8E988[46036];  // data: 0xA8E988
extern unsigned char DataGlobal_A8E98C[46032];  // data: 0xA8E98C
extern unsigned char DataGlobal_A8E990[46028];  // data: 0xA8E990
extern unsigned char DataGlobal_A8E994[46024];  // data: 0xA8E994
extern unsigned char DataGlobal_A8E995[46023];  // data: 0xA8E995
extern unsigned char DataGlobal_A8E998[46020];  // data: 0xA8E998
extern unsigned char DataGlobal_A8E99C[46016];  // data: 0xA8E99C
extern unsigned char DataGlobal_A8E9B0[45996];  // data: 0xA8E9B0
extern unsigned char DataGlobal_A8E9B4[45992];  // data: 0xA8E9B4
extern unsigned char DataGlobal_A8E9B5[45991];  // data: 0xA8E9B5
extern unsigned char DataGlobal_A8E9BC[45984];  // data: 0xA8E9BC
extern unsigned char DataGlobal_A8EA0C[45904];  // data: 0xA8EA0C
extern unsigned char DataGlobal_A8EA74[45800];  // data: 0xA8EA74
extern unsigned char DataGlobal_A8EA78[45796];  // data: 0xA8EA78
extern unsigned char DataGlobal_A8EA7C[45792];  // data: 0xA8EA7C
extern unsigned char DataGlobal_A8EA80[45788];  // data: 0xA8EA80
extern unsigned char DataGlobal_A8EA84[45784];  // data: 0xA8EA84
extern unsigned char DataGlobal_A8EAE4[45688];  // data: 0xA8EAE4
extern unsigned char DataGlobal_A8EAE5[45687];  // data: 0xA8EAE5
extern unsigned char DataGlobal_A8EAF0[45676];  // data: 0xA8EAF0
extern unsigned char DataGlobal_A8EAF4[45672];  // data: 0xA8EAF4
extern unsigned char DataGlobal_A8EAF5[45671];  // data: 0xA8EAF5
extern unsigned char DataGlobal_A8EAFC[45664];  // data: 0xA8EAFC
extern unsigned char DataGlobal_817318[256];  // X34-L4 817318 byte view (til-verified)
extern unsigned char DataGlobal_818E00[888];  // X34-L4 818E00 byte view (til-verified)
extern unsigned char DataGlobal_81AF8C[888];  // X34-L4 81AF8C byte view (til-verified)
extern unsigned char DataGlobal_82BA00[6040];  // X34-L4 82BA00 byte view (til-verified)
extern unsigned char DataGlobal_842DCC[6040];  // X34-L4 842DCC byte view (til-verified)
extern unsigned char DataGlobal_8B3DC0[1728];  // X34-L4 8B3DC0 byte view (til-verified)
extern unsigned char DataGlobal_B0E840[6040];  // X34-L4 B0E840 byte view (til-verified)
extern unsigned char DataGlobal_A8EB00[45660];  // data: 0xA8EB00
extern unsigned char DataGlobal_A8EB04[45656];  // data: 0xA8EB04
extern unsigned char DataGlobal_A8EB08[45652];  // data: 0xA8EB08
extern unsigned char DataGlobal_A8EB0C[45648];  // data: 0xA8EB0C
extern unsigned char DataGlobal_A8EB0D[45647];  // data: 0xA8EB0D
extern unsigned char DataGlobal_A8EB10[45644];  // data: 0xA8EB10
extern unsigned char DataGlobal_A8EB14[45640];  // data: 0xA8EB14
extern unsigned char DataGlobal_A8EB20[45628];  // data: 0xA8EB20
extern unsigned char DataGlobal_A8EB2C[45616];  // data: 0xA8EB2C
extern unsigned char DataGlobal_A8EB30[45612];  // data: 0xA8EB30
extern unsigned char DataGlobal_A8EB34[45608];  // data: 0xA8EB34
extern unsigned char DataGlobal_A8EB35[45607];  // data: 0xA8EB35
extern unsigned char DataGlobal_A8EB3C[45600];  // data: 0xA8EB3C
extern unsigned char DataGlobal_A8EB48[45588];  // data: 0xA8EB48
extern unsigned char DataGlobal_A8EB4C[45584];  // data: 0xA8EB4C
extern unsigned char DataGlobal_A8EB4D[45583];  // data: 0xA8EB4D
extern unsigned char DataGlobal_A8EB54[45576];  // data: 0xA8EB54
extern unsigned char DataGlobal_A8EB58[45572];  // data: 0xA8EB58
extern unsigned char DataGlobal_A8EB64[45560];  // data: 0xA8EB64
extern unsigned char DataGlobal_A8EB68[45556];  // data: 0xA8EB68
extern unsigned char DataGlobal_A8EB70[45548];  // data: 0xA8EB70
extern unsigned char DataGlobal_A8EB7C[45536];  // data: 0xA8EB7C
extern unsigned char DataGlobal_A8EB7E[45534];  // data: 0xA8EB7E
extern unsigned char DataGlobal_A8EB80[45532];  // data: 0xA8EB80
extern unsigned char DataGlobal_A8EB88[45524];  // data: 0xA8EB88
extern unsigned char DataGlobal_A8EB95[45511];  // data: 0xA8EB95
extern unsigned char DataGlobal_A8EB98[45508];  // data: 0xA8EB98
extern unsigned char DataGlobal_A8EB9C[45504];  // data: 0xA8EB9C
extern unsigned char DataGlobal_A8EBA0[45500];  // data: 0xA8EBA0
extern unsigned char DataGlobal_A8EBA4[45496];  // data: 0xA8EBA4
extern unsigned char DataGlobal_A8EBA5[45495];  // data: 0xA8EBA5
extern unsigned char DataGlobal_A8EBA6[45494];  // data: 0xA8EBA6
extern unsigned char DataGlobal_A8EBB4[45480];  // data: 0xA8EBB4
extern unsigned char DataGlobal_A8EC00[45404];  // data: 0xA8EC00
extern unsigned char DataGlobal_A8EC04[45400];  // data: 0xA8EC04
extern unsigned char DataGlobal_A8EC08[45396];  // data: 0xA8EC08
extern unsigned char DataGlobal_A8EC0C[45392];  // data: 0xA8EC0C
extern unsigned char DataGlobal_A8EC18[45380];  // data: 0xA8EC18
extern unsigned char DataGlobal_A8EC20[45372];  // data: 0xA8EC20
extern unsigned char DataGlobal_A8EC24[45368];  // data: 0xA8EC24
extern unsigned char DataGlobal_A8EC25[45367];  // data: 0xA8EC25
extern unsigned char DataGlobal_A8EC2C[45360];  // data: 0xA8EC2C
extern unsigned char DataGlobal_A8EC30[45356];  // data: 0xA8EC30
extern unsigned char DataGlobal_A8EC38[45348];  // data: 0xA8EC38
extern unsigned char DataGlobal_A8EC3C[45344];  // data: 0xA8EC3C
extern unsigned char DataGlobal_A8EC40[45340];  // data: 0xA8EC40
extern unsigned char DataGlobal_A8EC45[45335];  // data: 0xA8EC45
extern unsigned char DataGlobal_A8EC48[45332];  // data: 0xA8EC48
extern unsigned char DataGlobal_A8EC4C[45328];  // data: 0xA8EC4C
extern unsigned char DataGlobal_A8EC58[45316];  // data: 0xA8EC58
extern unsigned char DataGlobal_A8EC5C[45312];  // data: 0xA8EC5C
extern unsigned char DataGlobal_A8EC5D[45311];  // data: 0xA8EC5D
extern unsigned char DataGlobal_A8EC60[45308];  // data: 0xA8EC60
extern unsigned char DataGlobal_A8EC64[45304];  // data: 0xA8EC64
extern unsigned char DataGlobal_A8EC68[45300];  // data: 0xA8EC68
extern unsigned char DataGlobal_A8EC6C[45296];  // data: 0xA8EC6C
extern unsigned char DataGlobal_A8EC70[45292];  // data: 0xA8EC70
extern unsigned char DataGlobal_A8EC80[45276];  // data: 0xA8EC80
extern unsigned char DataGlobal_A8EC84[45272];  // data: 0xA8EC84
extern unsigned char DataGlobal_A8EC85[45271];  // data: 0xA8EC85
extern unsigned char DataGlobal_A8EC8C[45264];  // data: 0xA8EC8C
extern unsigned char DataGlobal_A8EC94[45256];  // data: 0xA8EC94
extern unsigned char DataGlobal_A8EC98[45252];  // data: 0xA8EC98
extern unsigned char DataGlobal_A8ECA8[45236];  // data: 0xA8ECA8
extern unsigned char DataGlobal_A8ECAC[45232];  // data: 0xA8ECAC
extern unsigned char DataGlobal_A8ECAD[45231];  // data: 0xA8ECAD
extern unsigned char DataGlobal_A8ECB4[45224];  // data: 0xA8ECB4
extern unsigned char DataGlobal_A8ECB8[45220];  // data: 0xA8ECB8
extern unsigned char DataGlobal_A8ECC0[45212];  // data: 0xA8ECC0
extern unsigned char DataGlobal_A8ECC4[45208];  // data: 0xA8ECC4
extern unsigned char DataGlobal_A8ECC5[45207];  // data: 0xA8ECC5
extern unsigned char DataGlobal_A8ECCC[45200];  // data: 0xA8ECCC
extern unsigned char DataGlobal_A8ECD0[45196];  // data: 0xA8ECD0
extern unsigned char DataGlobal_A8ECD8[45188];  // data: 0xA8ECD8
extern unsigned char DataGlobal_A8ECDC[45184];  // data: 0xA8ECDC
extern unsigned char DataGlobal_A8ECE8[45172];  // data: 0xA8ECE8
extern unsigned char DataGlobal_A8ED08[45140];  // data: 0xA8ED08
extern unsigned char DataGlobal_A8ED09[45139];  // data: 0xA8ED09
extern unsigned char DataGlobal_A8ED0A[45138];  // data: 0xA8ED0A
extern unsigned char DataGlobal_A8ED19[45123];  // data: 0xA8ED19
extern unsigned char DataGlobal_A8ED24[45112];  // data: 0xA8ED24
extern unsigned char DataGlobal_A8ED28[45108];  // data: 0xA8ED28
extern unsigned char DataGlobal_A8ED30[45100];  // data: 0xA8ED30
extern unsigned char DataGlobal_A8ED34[45096];  // data: 0xA8ED34
extern unsigned char DataGlobal_A8ED35[45095];  // data: 0xA8ED35
extern unsigned char DataGlobal_A8ED3C[45088];  // data: 0xA8ED3C
extern unsigned char DataGlobal_A8ED44[45080];  // data: 0xA8ED44
extern unsigned char DataGlobal_A8ED48[45076];  // data: 0xA8ED48
extern unsigned char DataGlobal_A8ED4C[45072];  // data: 0xA8ED4C
extern unsigned char DataGlobal_A8ED4D[45071];  // data: 0xA8ED4D
extern unsigned char DataGlobal_A8ED50[45068];  // data: 0xA8ED50
extern unsigned char DataGlobal_A8ED64[45048];  // data: 0xA8ED64
extern unsigned char DataGlobal_A8ED74[45032];  // data: 0xA8ED74
extern unsigned char DataGlobal_A8ED78[45028];  // data: 0xA8ED78
extern unsigned char DataGlobal_A8ED81[45019];  // data: 0xA8ED81
extern unsigned char DataGlobal_A8ED8C[45008];  // data: 0xA8ED8C
extern unsigned char DataGlobal_A8ED98[44996];  // data: 0xA8ED98
extern unsigned char DataGlobal_A8ED9D[44991];  // data: 0xA8ED9D
extern unsigned char DataGlobal_A8EDA0[44988];  // data: 0xA8EDA0
extern unsigned char DataGlobal_A8EDD8[44932];  // data: 0xA8EDD8
extern unsigned char DataGlobal_A8EDDC[44928];  // data: 0xA8EDDC
extern unsigned char DataGlobal_A8EDE0[44924];  // data: 0xA8EDE0
extern unsigned char DataGlobal_A8EDE8[44916];  // data: 0xA8EDE8
extern unsigned char DataGlobal_A8EDEC[44912];  // data: 0xA8EDEC
extern unsigned char DataGlobal_A8EDF0[44908];  // data: 0xA8EDF0
extern unsigned char DataGlobal_A8EDF4[44904];  // data: 0xA8EDF4
extern unsigned char DataGlobal_A8EDFC[44896];  // data: 0xA8EDFC
extern unsigned char DataGlobal_A8EDFE[44894];  // data: 0xA8EDFE
extern unsigned char DataGlobal_A8EE00[44892];  // data: 0xA8EE00
extern unsigned char DataGlobal_A8EE08[44884];  // data: 0xA8EE08
extern unsigned char DataGlobal_A8EE10[44876];  // data: 0xA8EE10
extern unsigned char DataGlobal_A8EE18[44868];  // data: 0xA8EE18
extern unsigned char DataGlobal_A8EE1C[44864];  // data: 0xA8EE1C
extern unsigned char DataGlobal_A8EE20[44860];  // data: 0xA8EE20
extern unsigned char DataGlobal_A8EE28[44852];  // data: 0xA8EE28
extern unsigned char DataGlobal_A8EE50[44812];  // data: 0xA8EE50
extern unsigned char DataGlobal_A8EE58[44804];  // data: 0xA8EE58
extern unsigned char DataGlobal_A8EE60[44796];  // data: 0xA8EE60
extern unsigned char DataGlobal_A8EE64[44792];  // data: 0xA8EE64
extern unsigned char DataGlobal_A8EE68[44788];  // data: 0xA8EE68
extern unsigned char DataGlobal_A8EE6C[44784];  // data: 0xA8EE6C
extern unsigned char DataGlobal_A8EE70[44780];  // data: 0xA8EE70
extern unsigned char DataGlobal_A8EE78[44772];  // data: 0xA8EE78
extern unsigned char DataGlobal_A8EE7C[44768];  // data: 0xA8EE7C
extern unsigned char DataGlobal_A8EE80[44764];  // data: 0xA8EE80
extern unsigned char DataGlobal_A8EE88[44756];  // data: 0xA8EE88
extern unsigned char DataGlobal_A8EE8C[44752];  // data: 0xA8EE8C
extern unsigned char DataGlobal_A8EE90[44748];  // data: 0xA8EE90
extern unsigned char DataGlobal_A8EE94[44744];  // data: 0xA8EE94
extern unsigned char DataGlobal_A8EE98[44740];  // data: 0xA8EE98
extern unsigned char DataGlobal_A8EE9C[44736];  // data: 0xA8EE9C
extern unsigned char DataGlobal_A8EEA0[44732];  // data: 0xA8EEA0
extern unsigned char DataGlobal_A8EEA4[44728];  // data: 0xA8EEA4
extern unsigned char DataGlobal_A8EEA8[44724];  // data: 0xA8EEA8
extern unsigned char DataGlobal_A8EEAC[44720];  // data: 0xA8EEAC
extern unsigned char DataGlobal_A8EEB0[44716];  // data: 0xA8EEB0
extern unsigned char DataGlobal_A8EEB4[44712];  // data: 0xA8EEB4
extern unsigned char DataGlobal_A8EEB8[44708];  // data: 0xA8EEB8
extern unsigned char DataGlobal_A8EEBC[44704];  // data: 0xA8EEBC
extern unsigned char DataGlobal_A8EEC0[44700];  // data: 0xA8EEC0
extern unsigned char DataGlobal_A8EEC4[44696];  // data: 0xA8EEC4
extern unsigned char DataGlobal_A8EEC8[44692];  // data: 0xA8EEC8
extern unsigned char DataGlobal_A8EECC[44688];  // data: 0xA8EECC
extern unsigned char DataGlobal_A8EED0[44684];  // data: 0xA8EED0
extern unsigned char DataGlobal_A8EED4[44680];  // data: 0xA8EED4
extern unsigned char DataGlobal_A8EED8[44676];  // data: 0xA8EED8
extern unsigned char DataGlobal_A8EEE0[44668];  // data: 0xA8EEE0
extern unsigned char DataGlobal_A8EEE4[44664];  // data: 0xA8EEE4
extern unsigned char DataGlobal_A8EEE8[44660];  // data: 0xA8EEE8
extern unsigned char DataGlobal_A8EEEC[44656];  // data: 0xA8EEEC
extern unsigned char DataGlobal_A8EEF0[44652];  // data: 0xA8EEF0
extern unsigned char DataGlobal_A8EEF2[44650];  // data: 0xA8EEF2
extern unsigned char DataGlobal_A8EEF8[44644];  // data: 0xA8EEF8
extern unsigned char DataGlobal_A8EF00[44636];  // data: 0xA8EF00
extern unsigned char DataGlobal_A8EF08[44628];  // data: 0xA8EF08
extern unsigned char DataGlobal_A8EF10[44620];  // data: 0xA8EF10
extern unsigned char DataGlobal_A8EF14[44616];  // data: 0xA8EF14
extern unsigned char DataGlobal_A8EF18[44612];  // data: 0xA8EF18
extern unsigned char DataGlobal_A8EF20[44604];  // data: 0xA8EF20
extern unsigned char DataGlobal_A8EF28[44596];  // data: 0xA8EF28
extern unsigned char DataGlobal_A8EF30[44588];  // data: 0xA8EF30
extern unsigned char DataGlobal_A8EF38[44580];  // data: 0xA8EF38
extern unsigned char DataGlobal_A8EF3C[44576];  // data: 0xA8EF3C
extern unsigned char DataGlobal_A8EF40[44572];  // data: 0xA8EF40
extern unsigned char DataGlobal_A8EF44[44568];  // data: 0xA8EF44
extern unsigned char DataGlobal_A8EF48[44564];  // data: 0xA8EF48
extern unsigned char DataGlobal_A8EF50[44556];  // data: 0xA8EF50
extern unsigned char DataGlobal_A8EF54[44552];  // data: 0xA8EF54
extern unsigned char DataGlobal_A8EF58[44548];  // data: 0xA8EF58
extern unsigned char DataGlobal_A8EF60[44540];  // data: 0xA8EF60
extern unsigned char DataGlobal_A8EF68[44532];  // data: 0xA8EF68
extern unsigned char DataGlobal_A8EF6C[44528];  // data: 0xA8EF6C
extern unsigned char DataGlobal_A8EF70[44524];  // data: 0xA8EF70
extern unsigned char DataGlobal_A8EF74[44520];  // data: 0xA8EF74
extern unsigned char DataGlobal_A8EFA0[44476];  // data: 0xA8EFA0
extern unsigned char DataGlobal_A8EFC8[44436];  // data: 0xA8EFC8
extern unsigned char DataGlobal_A8EFCC[44432];  // data: 0xA8EFCC
extern unsigned char DataGlobal_A8EFD0[44428];  // data: 0xA8EFD0
extern unsigned char DataGlobal_A8EFD4[44424];  // data: 0xA8EFD4
extern unsigned char DataGlobal_A8EFD5[44423];  // data: 0xA8EFD5
extern unsigned char DataGlobal_A8EFD8[44420];  // data: 0xA8EFD8
extern unsigned char DataGlobal_A8EFDC[44416];  // data: 0xA8EFDC
extern unsigned char DataGlobal_A8EFE0[44412];  // data: 0xA8EFE0
extern unsigned char DataGlobal_A8EFF0[44396];  // data: 0xA8EFF0
extern unsigned char DataGlobal_A8F008[44372];  // data: 0xA8F008
extern unsigned char DataGlobal_A8F010[44364];  // data: 0xA8F010
extern unsigned char DataGlobal_A8F018[44356];  // data: 0xA8F018
extern unsigned char DataGlobal_A8F020[44348];  // data: 0xA8F020
extern unsigned char DataGlobal_A8F024[44344];  // data: 0xA8F024
extern unsigned char DataGlobal_A8F028[44340];  // data: 0xA8F028
extern unsigned char DataGlobal_A8F02C[44336];  // data: 0xA8F02C
extern unsigned char DataGlobal_A8F030[44332];  // data: 0xA8F030
extern unsigned char DataGlobal_A8F038[44324];  // data: 0xA8F038
extern unsigned char DataGlobal_A8F048[44308];  // data: 0xA8F048
extern unsigned char DataGlobal_A8F050[44300];  // data: 0xA8F050
extern unsigned char DataGlobal_A8F054[44296];  // data: 0xA8F054
extern unsigned char DataGlobal_A8F058[44292];  // data: 0xA8F058
extern unsigned char DataGlobal_A8F05C[44288];  // data: 0xA8F05C
extern unsigned char DataGlobal_A8F060[44284];  // data: 0xA8F060
extern unsigned char DataGlobal_A8F062[44282];  // data: 0xA8F062
extern unsigned char DataGlobal_A8F068[44276];  // data: 0xA8F068
extern unsigned char DataGlobal_A8F070[44268];  // data: 0xA8F070
extern unsigned char DataGlobal_A8F078[44260];  // data: 0xA8F078
extern unsigned char DataGlobal_A8F080[44252];  // data: 0xA8F080
extern unsigned char DataGlobal_A8F084[44248];  // data: 0xA8F084
extern unsigned char DataGlobal_A8F088[44244];  // data: 0xA8F088
extern unsigned char DataGlobal_A8F090[44236];  // data: 0xA8F090
extern unsigned char DataGlobal_A8F098[44228];  // data: 0xA8F098
extern unsigned char DataGlobal_A8F0A0[44220];  // data: 0xA8F0A0
extern unsigned char DataGlobal_A8F0A8[44212];  // data: 0xA8F0A8
extern unsigned char DataGlobal_A8F0AC[44208];  // data: 0xA8F0AC
extern unsigned char DataGlobal_A8F0B0[44204];  // data: 0xA8F0B0
extern unsigned char DataGlobal_A8F0B4[44200];  // data: 0xA8F0B4
extern unsigned char DataGlobal_A8F0B8[44196];  // data: 0xA8F0B8
extern unsigned char DataGlobal_A8F0C0[44188];  // data: 0xA8F0C0
extern unsigned char DataGlobal_A8F0C8[44180];  // data: 0xA8F0C8
extern unsigned char DataGlobal_A8F0D0[44172];  // data: 0xA8F0D0
extern unsigned char DataGlobal_A8F0D4[44168];  // data: 0xA8F0D4
extern unsigned char DataGlobal_A8F0D8[44164];  // data: 0xA8F0D8
extern unsigned char DataGlobal_A8F0DC[44160];  // data: 0xA8F0DC
extern unsigned char DataGlobal_A8F0E0[44156];  // data: 0xA8F0E0
extern unsigned char DataGlobal_A8F0E2[44154];  // data: 0xA8F0E2
extern unsigned char DataGlobal_A8F0E8[44148];  // data: 0xA8F0E8
extern unsigned char DataGlobal_A8F0F0[44140];  // data: 0xA8F0F0
extern unsigned char DataGlobal_A8F0F8[44132];  // data: 0xA8F0F8
extern unsigned char DataGlobal_A8F100[44124];  // data: 0xA8F100
extern unsigned char DataGlobal_A8F104[44120];  // data: 0xA8F104
extern unsigned char DataGlobal_A8F108[44116];  // data: 0xA8F108
extern unsigned char DataGlobal_A8F110[44108];  // data: 0xA8F110
extern unsigned char DataGlobal_A8F118[44100];  // data: 0xA8F118
extern unsigned char DataGlobal_A8F120[44092];  // data: 0xA8F120
extern unsigned char DataGlobal_A8F128[44084];  // data: 0xA8F128
extern unsigned char DataGlobal_A8F12C[44080];  // data: 0xA8F12C
extern unsigned char DataGlobal_A8F130[44076];  // data: 0xA8F130
extern unsigned char DataGlobal_A8F134[44072];  // data: 0xA8F134
extern unsigned char DataGlobal_A8F138[44068];  // data: 0xA8F138
extern unsigned char DataGlobal_A8F140[44060];  // data: 0xA8F140
extern unsigned char DataGlobal_A8F148[44052];  // data: 0xA8F148
extern unsigned char DataGlobal_A8F150[44044];  // data: 0xA8F150
extern unsigned char DataGlobal_A8F154[44040];  // data: 0xA8F154
extern unsigned char DataGlobal_A8F158[44036];  // data: 0xA8F158
extern unsigned char DataGlobal_A8F15C[44032];  // data: 0xA8F15C
extern unsigned char DataGlobal_A8F160[44028];  // data: 0xA8F160
extern unsigned char DataGlobal_A8F168[44020];  // data: 0xA8F168
extern unsigned char DataGlobal_A8F170[44012];  // data: 0xA8F170
extern unsigned char DataGlobal_A8F178[44004];  // data: 0xA8F178
extern unsigned char DataGlobal_A8F190[43980];  // data: 0xA8F190
extern unsigned char DataGlobal_A8F198[43972];  // data: 0xA8F198
extern unsigned char DataGlobal_A8F1A0[43964];  // data: 0xA8F1A0
extern unsigned char DataGlobal_A8F1A8[43956];  // data: 0xA8F1A8
extern unsigned char DataGlobal_A8F1AC[43952];  // data: 0xA8F1AC
extern unsigned char DataGlobal_A8F1B0[43948];  // data: 0xA8F1B0
extern unsigned char DataGlobal_A8F1B4[43944];  // data: 0xA8F1B4
extern unsigned char DataGlobal_A8F1B8[43940];  // data: 0xA8F1B8
extern unsigned char DataGlobal_A8F1C0[43932];  // data: 0xA8F1C0
extern unsigned char DataGlobal_A8F1C4[43928];  // data: 0xA8F1C4
extern unsigned char DataGlobal_A8F1C5[43927];  // data: 0xA8F1C5
extern unsigned char DataGlobal_A8F1C6[43926];  // data: 0xA8F1C6
extern unsigned char DataGlobal_A8F1C8[43924];  // data: 0xA8F1C8
extern unsigned char DataGlobal_A8F1D0[43916];  // data: 0xA8F1D0
extern unsigned char DataGlobal_A8F1D4[43912];  // data: 0xA8F1D4
extern unsigned char DataGlobal_A8F1D8[43908];  // data: 0xA8F1D8
extern unsigned char DataGlobal_A8F1DC[43904];  // data: 0xA8F1DC
extern unsigned char DataGlobal_A8F1E0[43900];  // data: 0xA8F1E0
extern unsigned char DataGlobal_A8F1E8[43892];  // data: 0xA8F1E8
extern unsigned char DataGlobal_A8F1F0[43884];  // data: 0xA8F1F0
extern unsigned char DataGlobal_A8F1F8[43876];  // data: 0xA8F1F8
extern unsigned char DataGlobal_A8F200[43868];  // data: 0xA8F200
extern unsigned char DataGlobal_A8F204[43864];  // data: 0xA8F204
extern unsigned char DataGlobal_A8F208[43860];  // data: 0xA8F208
extern unsigned char DataGlobal_A8F210[43852];  // data: 0xA8F210
extern unsigned char DataGlobal_A8F218[43844];  // data: 0xA8F218
extern unsigned char DataGlobal_A8F220[43836];  // data: 0xA8F220
extern unsigned char DataGlobal_A8F228[43828];  // data: 0xA8F228
extern unsigned char DataGlobal_A8F22C[43824];  // data: 0xA8F22C
extern unsigned char DataGlobal_A8F230[43820];  // data: 0xA8F230
extern unsigned char DataGlobal_A8F234[43816];  // data: 0xA8F234
extern unsigned char DataGlobal_A8F238[43812];  // data: 0xA8F238
extern unsigned char DataGlobal_A8F240[43804];  // data: 0xA8F240
extern unsigned char DataGlobal_A8F248[43796];  // data: 0xA8F248
extern unsigned char DataGlobal_A8F250[43788];  // data: 0xA8F250
extern unsigned char DataGlobal_A8F254[43784];  // data: 0xA8F254
extern unsigned char DataGlobal_A8F258[43780];  // data: 0xA8F258
extern unsigned char DataGlobal_A8F25C[43776];  // data: 0xA8F25C
extern unsigned char DataGlobal_A8F260[43772];  // data: 0xA8F260
extern unsigned char DataGlobal_A8F262[43770];  // data: 0xA8F262
extern unsigned char DataGlobal_A8F268[43764];  // data: 0xA8F268
extern unsigned char DataGlobal_A8F270[43756];  // data: 0xA8F270
extern unsigned char DataGlobal_A8F278[43748];  // data: 0xA8F278
extern unsigned char DataGlobal_A8F280[43740];  // data: 0xA8F280
extern unsigned char DataGlobal_A8F284[43736];  // data: 0xA8F284
extern unsigned char DataGlobal_A8F288[43732];  // data: 0xA8F288
extern unsigned char DataGlobal_A8F28C[43728];  // data: 0xA8F28C
extern unsigned char DataGlobal_A8F290[43724];  // data: 0xA8F290
extern unsigned char DataGlobal_A8F298[43716];  // data: 0xA8F298
extern unsigned char DataGlobal_A8F2A0[43708];  // data: 0xA8F2A0
extern unsigned char DataGlobal_A8F2A8[43700];  // data: 0xA8F2A8
extern unsigned char DataGlobal_A8F2B0[43692];  // data: 0xA8F2B0
extern unsigned char DataGlobal_A8F2B4[43688];  // data: 0xA8F2B4
extern unsigned char DataGlobal_A8F2B8[43684];  // data: 0xA8F2B8
extern unsigned char DataGlobal_A8F2BC[43680];  // data: 0xA8F2BC
extern unsigned char DataGlobal_A8F2C0[43676];  // data: 0xA8F2C0
extern unsigned char DataGlobal_A8F2C8[43668];  // data: 0xA8F2C8
extern unsigned char DataGlobal_A8F2CC[43664];  // data: 0xA8F2CC
extern unsigned char DataGlobal_A8F2D0[43660];  // data: 0xA8F2D0
extern unsigned char DataGlobal_A8F2D4[43656];  // data: 0xA8F2D4
extern unsigned char DataGlobal_A8F2D8[43652];  // data: 0xA8F2D8
extern unsigned char DataGlobal_A8F2DC[43648];  // data: 0xA8F2DC
extern unsigned char DataGlobal_A8F2E0[43644];  // data: 0xA8F2E0
extern unsigned char DataGlobal_A8F2E8[43636];  // data: 0xA8F2E8
extern unsigned char DataGlobal_A8F2EC[43632];  // data: 0xA8F2EC
extern unsigned char DataGlobal_A8F2F0[43628];  // data: 0xA8F2F0
extern unsigned char DataGlobal_A8F2F4[43624];  // data: 0xA8F2F4
extern unsigned char DataGlobal_A8F2F8[43620];  // data: 0xA8F2F8
extern unsigned char DataGlobal_A8F2FA[43618];  // data: 0xA8F2FA
extern unsigned char DataGlobal_A8F314[43592];  // data: 0xA8F314
extern unsigned char DataGlobal_A8F394[43464];  // data: 0xA8F394
extern unsigned char DataGlobal_A8F418[43332];  // data: 0xA8F418
extern unsigned char DataGlobal_A8F420[43324];  // data: 0xA8F420
extern unsigned char DataGlobal_A8F4A0[43196];  // data: 0xA8F4A0
extern unsigned char DataGlobal_A8F520[43068];  // data: 0xA8F520
extern unsigned char DataGlobal_A8F5A0[42940];  // data: 0xA8F5A0
extern unsigned char DataGlobal_A8F5A8[42932];  // data: 0xA8F5A8
extern unsigned char DataGlobal_A8F638[42788];  // data: 0xA8F638
extern unsigned char DataGlobal_A8F63C[42784];  // data: 0xA8F63C
extern unsigned char DataGlobal_A8F640[42780];  // data: 0xA8F640
extern unsigned char DataGlobal_A8F648[42772];  // data: 0xA8F648
extern unsigned char DataGlobal_A8F758[42500];  // data: 0xA8F758
extern unsigned char DataGlobal_A8F760[42492];  // data: 0xA8F760
extern unsigned char DataGlobal_A8F768[42484];  // data: 0xA8F768
extern unsigned char DataGlobal_A8F76C[42480];  // data: 0xA8F76C
extern unsigned char DataGlobal_A8F770[42476];  // data: 0xA8F770
extern unsigned char DataGlobal_A8F774[42472];  // data: 0xA8F774
extern unsigned char DataGlobal_A8F778[42468];  // data: 0xA8F778
extern unsigned char DataGlobal_A8F780[42460];  // data: 0xA8F780
extern unsigned char DataGlobal_A8F784[42456];  // data: 0xA8F784
extern unsigned char DataGlobal_A8F790[42444];  // data: 0xA8F790
extern unsigned char DataGlobal_A8F794[42440];  // data: 0xA8F794
extern unsigned char DataGlobal_A8F798[42436];  // data: 0xA8F798
extern unsigned char DataGlobal_A8F7D8[42372];  // data: 0xA8F7D8
extern unsigned char DataGlobal_A8F7F8[42340];  // data: 0xA8F7F8
extern unsigned char DataGlobal_A8F8F8[42084];  // data: 0xA8F8F8
extern unsigned char DataGlobal_A8F8FC[42080];  // data: 0xA8F8FC
extern unsigned char DataGlobal_A8F8FD[42079];  // data: 0xA8F8FD
extern unsigned char DataGlobal_A8F900[42076];  // data: 0xA8F900
extern unsigned char DataGlobal_A8F908[42068];  // data: 0xA8F908
extern unsigned char DataGlobal_A8F90C[42064];  // data: 0xA8F90C
extern unsigned char DataGlobal_A8F910[42060];  // data: 0xA8F910
extern unsigned char DataGlobal_A8F914[42056];  // data: 0xA8F914
extern unsigned char DataGlobal_A8F918[42052];  // data: 0xA8F918
extern unsigned char DataGlobal_A8F91C[42048];  // data: 0xA8F91C
extern unsigned char DataGlobal_A9F91C[4];  // data: 0xA9F91C
extern unsigned char DataGlobal_A9F920[4];  // data: 0xA9F920
extern unsigned char DataGlobal_A9F928[4];  // data: 0xA9F928
extern unsigned char DataGlobal_A9F930[4];  // data: 0xA9F930
extern unsigned char DataGlobal_A9F934[4];  // data: 0xA9F934
extern unsigned char DataGlobal_A9F938[4];  // data: 0xA9F938
extern unsigned char DataGlobal_A9F93C[4];  // data: 0xA9F93C
extern unsigned char DataGlobal_A9F940[4];  // data: 0xA9F940
extern unsigned char DataGlobal_A9F942[4];  // data: 0xA9F942
extern unsigned char DataGlobal_A9F948[4];  // data: 0xA9F948
extern unsigned char DataGlobal_A9F950[4];  // data: 0xA9F950
extern unsigned char DataGlobal_A9F958[4];  // data: 0xA9F958
extern unsigned char DataGlobal_A9F960[4];  // data: 0xA9F960
extern unsigned char DataGlobal_A9F964[4];  // data: 0xA9F964
extern unsigned char DataGlobal_A9F968[4];  // data: 0xA9F968
extern unsigned char DataGlobal_A9F970[4];  // data: 0xA9F970
extern unsigned char DataGlobal_A9F978[4];  // data: 0xA9F978
extern unsigned char DataGlobal_A9F980[4];  // data: 0xA9F980
extern unsigned char DataGlobal_A9F988[4];  // data: 0xA9F988
extern unsigned char DataGlobal_A9F98C[4];  // data: 0xA9F98C
extern unsigned char DataGlobal_A9F990[4];  // data: 0xA9F990
extern unsigned char DataGlobal_A9F994[4];  // data: 0xA9F994
extern unsigned char DataGlobal_A9F998[4];  // data: 0xA9F998
extern unsigned char DataGlobal_A9F9A0[4];  // data: 0xA9F9A0
extern unsigned char DataGlobal_A9F9A8[4];  // data: 0xA9F9A8
extern unsigned char DataGlobal_A9F9A9[4];  // data: 0xA9F9A9
extern unsigned char DataGlobal_A9F9B0[4];  // data: 0xA9F9B0
extern unsigned char DataGlobal_A9F9B8[4];  // data: 0xA9F9B8
extern unsigned char DataGlobal_A9F9D4[4];  // data: 0xA9F9D4
extern unsigned char DataGlobal_A9F9DC[4];  // data: 0xA9F9DC
extern unsigned char DataGlobal_A9F9DD[4];  // data: 0xA9F9DD
extern unsigned char DataGlobal_A9F9E8[4];  // data: 0xA9F9E8
extern unsigned char DataGlobal_A9F9EC[4];  // data: 0xA9F9EC
extern unsigned char DataGlobal_A9F9F0[4];  // data: 0xA9F9F0
extern unsigned char DataGlobal_A9F9F4[4];  // data: 0xA9F9F4
extern unsigned char DataGlobal_A9F9F8[4];  // data: 0xA9F9F8
extern unsigned char DataGlobal_A9FA00[4];  // data: 0xA9FA00
extern unsigned char DataGlobal_A9FA08[4];  // data: 0xA9FA08
extern unsigned char DataGlobal_A9FA10[4];  // data: 0xA9FA10
extern unsigned char DataGlobal_A9FA1C[4];  // data: 0xA9FA1C
extern unsigned char DataGlobal_A9FA20[4];  // data: 0xA9FA20
extern unsigned char DataGlobal_A9FA24[4];  // data: 0xA9FA24
extern unsigned char DataGlobal_A9FA25[4];  // data: 0xA9FA25
extern unsigned char DataGlobal_A9FA28[4];  // data: 0xA9FA28
extern unsigned char DataGlobal_A9FA2C[4];  // data: 0xA9FA2C
extern unsigned char DataGlobal_A9FA30[4];  // data: 0xA9FA30
extern unsigned char DataGlobal_A9FA38[4];  // data: 0xA9FA38
extern unsigned char DataGlobal_A9FA40[4];  // data: 0xA9FA40
extern unsigned char DataGlobal_A9FA4A[4];  // data: 0xA9FA4A
extern unsigned char DataGlobal_A9FA50[4];  // data: 0xA9FA50
extern unsigned char DataGlobal_A9FA58[4];  // data: 0xA9FA58
extern unsigned char DataGlobal_A9FA64[4];  // data: 0xA9FA64
extern unsigned char DataGlobal_A9FA6C[4];  // data: 0xA9FA6C
extern unsigned char DataGlobal_A9FA6D[4];  // data: 0xA9FA6D
extern unsigned char DataGlobal_A9FA78[4];  // data: 0xA9FA78
extern unsigned char DataGlobal_A9FA7C[4];  // data: 0xA9FA7C
extern unsigned char DataGlobal_A9FA80[4];  // data: 0xA9FA80
extern unsigned char DataGlobal_A9FA84[4];  // data: 0xA9FA84
extern unsigned char DataGlobal_A9FA88[4];  // data: 0xA9FA88
extern unsigned char DataGlobal_A9FA90[4];  // data: 0xA9FA90
extern unsigned char DataGlobal_A9FA94[4];  // data: 0xA9FA94
extern unsigned char DataGlobal_A9FAA0[4];  // data: 0xA9FAA0
extern unsigned char DataGlobal_A9FAA4[4];  // data: 0xA9FAA4
extern unsigned char DataGlobal_A9FAA8[4];  // data: 0xA9FAA8
extern unsigned char DataGlobal_A9FAAC[4];  // data: 0xA9FAAC
extern unsigned char DataGlobal_A9FAD1[4];  // data: 0xA9FAD1
extern unsigned char DataGlobal_A9FAD8[4];  // data: 0xA9FAD8
extern unsigned char DataGlobal_A9FAE0[4];  // data: 0xA9FAE0
extern unsigned char DataGlobal_A9FAEC[4];  // data: 0xA9FAEC
extern unsigned char DataGlobal_A9FF6C[4];  // data: 0xA9FF6C
extern unsigned char DataGlobal_A9FF70[4];  // data: 0xA9FF70
extern unsigned char DataGlobal_A9FF74[4];  // data: 0xA9FF74
extern unsigned char DataGlobal_A9FF78[4];  // data: 0xA9FF78
extern unsigned char DataGlobal_A9FF7C[4];  // data: 0xA9FF7C
extern unsigned char DataGlobal_A9FF80[4];  // data: 0xA9FF80
extern unsigned char DataGlobal_A9FF88[4];  // data: 0xA9FF88
extern unsigned char DataGlobal_A9FF8A[4];  // data: 0xA9FF8A
extern unsigned char DataGlobal_A9FF90[4];  // data: 0xA9FF90
extern unsigned char DataGlobal_A9FF98[4];  // data: 0xA9FF98
extern unsigned char DataGlobal_A9FFA0[4];  // data: 0xA9FFA0
extern unsigned char DataGlobal_A9FFA8[4];  // data: 0xA9FFA8
extern unsigned char DataGlobal_A9FFB0[4];  // data: 0xA9FFB0
extern unsigned char DataGlobal_A9FFB4[4];  // data: 0xA9FFB4
extern unsigned char DataGlobal_A9FFB8[4];  // data: 0xA9FFB8
extern unsigned char DataGlobal_A9FFC0[4];  // data: 0xA9FFC0
extern unsigned char DataGlobal_AA0108[4];  // data: 0xAA0108
extern unsigned char DataGlobal_AA0110[4];  // data: 0xAA0110
extern unsigned char DataGlobal_AA011C[4];  // data: 0xAA011C
extern unsigned char DataGlobal_AA0120[4];  // data: 0xAA0120
extern unsigned char DataGlobal_AA0124[4];  // data: 0xAA0124
extern unsigned char DataGlobal_AA0125[4];  // data: 0xAA0125
extern unsigned char DataGlobal_AA0128[4];  // data: 0xAA0128
extern unsigned char DataGlobal_AA012C[4];  // data: 0xAA012C
extern unsigned char DataGlobal_AA0130[4];  // data: 0xAA0130
extern unsigned char DataGlobal_AA0134[4];  // data: 0xAA0134
extern unsigned char DataGlobal_AA0138[4];  // data: 0xAA0138
extern unsigned char DataGlobal_AA013C[4];  // data: 0xAA013C
extern unsigned char DataGlobal_AA0140[4];  // data: 0xAA0140
extern unsigned char DataGlobal_AA0148[4];  // data: 0xAA0148
extern unsigned char DataGlobal_AA014C[4];  // data: 0xAA014C
extern unsigned char DataGlobal_AA0150[4];  // data: 0xAA0150
extern unsigned char DataGlobal_AA0158[4];  // data: 0xAA0158
extern unsigned char DataGlobal_AA015C[4];  // data: 0xAA015C
extern unsigned char DataGlobal_AA0160[4];  // data: 0xAA0160
extern unsigned char DataGlobal_AA0164[4];  // data: 0xAA0164
extern unsigned char DataGlobal_AA0168[4];  // data: 0xAA0168
extern unsigned char DataGlobal_AA0368[4];  // data: 0xAA0368
extern unsigned char DataGlobal_AA036C[4];  // data: 0xAA036C
extern unsigned char DataGlobal_AA0370[4];  // data: 0xAA0370
extern unsigned char DataGlobal_AA0374[4];  // data: 0xAA0374
extern unsigned char DataGlobal_AA0378[4];  // data: 0xAA0378
extern unsigned char DataGlobal_AA037C[4];  // data: 0xAA037C
extern unsigned char DataGlobal_AA0380[4];  // data: 0xAA0380
extern unsigned char DataGlobal_AA0388[4];  // data: 0xAA0388
extern unsigned char DataGlobal_AA0390[4];  // data: 0xAA0390
extern unsigned char DataGlobal_AA0398[4];  // data: 0xAA0398
extern unsigned char DataGlobal_AA03FC[4];  // data: 0xAA03FC
extern unsigned char DataGlobal_AA0400[4];  // data: 0xAA0400
extern unsigned char DataGlobal_AA0418[4];  // data: 0xAA0418
extern unsigned char DataGlobal_AA0430[4];  // data: 0xAA0430
extern unsigned char DataGlobal_AA0434[4];  // data: 0xAA0434
extern unsigned char DataGlobal_AA043C[4];  // data: 0xAA043C
extern unsigned char DataGlobal_AA044C[4];  // data: 0xAA044C
extern unsigned char DataGlobal_AA0450[4];  // data: 0xAA0450
extern unsigned char DataGlobal_AA0454[4];  // data: 0xAA0454
extern unsigned char DataGlobal_AA0458[4];  // data: 0xAA0458
extern unsigned char DataGlobal_AA045C[4];  // data: 0xAA045C
extern unsigned char DataGlobal_AA0460[4];  // data: 0xAA0460
extern unsigned char DataGlobal_AA046C[4];  // data: 0xAA046C
extern unsigned char DataGlobal_AA0470[4];  // data: 0xAA0470
extern unsigned char DataGlobal_AA0474[4];  // data: 0xAA0474
extern unsigned char DataGlobal_AA0478[4];  // data: 0xAA0478
extern unsigned char DataGlobal_AA047C[4];  // data: 0xAA047C
extern unsigned char DataGlobal_AA0508[4];  // data: 0xAA0508
extern unsigned char DataGlobal_AA0510[4];  // data: 0xAA0510
extern unsigned char DataGlobal_AA0514[4];  // data: 0xAA0514
extern unsigned char DataGlobal_AA0518[4];  // data: 0xAA0518
extern unsigned char DataGlobal_AA051C[4];  // data: 0xAA051C
extern unsigned char DataGlobal_AA0520[4];  // data: 0xAA0520
extern unsigned char DataGlobal_AA0522[4];  // data: 0xAA0522
extern unsigned char DataGlobal_AA0528[4];  // data: 0xAA0528
extern unsigned char DataGlobal_AA0530[4];  // data: 0xAA0530
extern unsigned char DataGlobal_AA0538[4];  // data: 0xAA0538
extern unsigned char DataGlobal_AA0540[4];  // data: 0xAA0540
extern unsigned char DataGlobal_AA0548[4];  // data: 0xAA0548
extern unsigned char DataGlobal_AA0550[4];  // data: 0xAA0550
extern unsigned char DataGlobal_AA0554[4];  // data: 0xAA0554
extern unsigned char DataGlobal_AA0558[4];  // data: 0xAA0558
extern unsigned char DataGlobal_AA055C[4];  // data: 0xAA055C
extern unsigned char DataGlobal_AA0560[4];  // data: 0xAA0560
extern unsigned char DataGlobal_AA0568[4];  // data: 0xAA0568
extern unsigned char DataGlobal_AA056C[4];  // data: 0xAA056C
extern unsigned char DataGlobal_AA0570[4];  // data: 0xAA0570
extern unsigned char DataGlobal_AA0578[4];  // data: 0xAA0578
extern unsigned char DataGlobal_AA0580[4];  // data: 0xAA0580
extern unsigned char DataGlobal_AA0588[4];  // data: 0xAA0588
extern unsigned char DataGlobal_AA058C[4];  // data: 0xAA058C
extern unsigned char DataGlobal_AA0590[4];  // data: 0xAA0590
extern unsigned char DataGlobal_AA0594[4];  // data: 0xAA0594
extern unsigned char DataGlobal_AA0598[4];  // data: 0xAA0598
extern unsigned char DataGlobal_AA05A0[4];  // data: 0xAA05A0
extern unsigned char DataGlobal_AA05A4[4];  // data: 0xAA05A4
extern unsigned char DataGlobal_AA05A8[4];  // data: 0xAA05A8
extern unsigned char DataGlobal_AA05AC[4];  // data: 0xAA05AC
extern unsigned char DataGlobal_AA05B0[4];  // data: 0xAA05B0
extern unsigned char DataGlobal_AA05B8[4];  // data: 0xAA05B8
extern unsigned char DataGlobal_AA05BC[4];  // data: 0xAA05BC
extern unsigned char DataGlobal_AA05C0[4];  // data: 0xAA05C0
extern unsigned char DataGlobal_AA05C4[4];  // data: 0xAA05C4
extern unsigned char DataGlobal_AA05C8[4];  // data: 0xAA05C8
extern unsigned char DataGlobal_AA05CA[4];  // data: 0xAA05CA
extern unsigned char DataGlobal_AA05D0[4];  // data: 0xAA05D0
extern unsigned char DataGlobal_AA05D8[4];  // data: 0xAA05D8
extern unsigned char DataGlobal_AA05E0[4];  // data: 0xAA05E0
extern unsigned char DataGlobal_AA05E8[4];  // data: 0xAA05E8
extern unsigned char DataGlobal_AA05EC[4];  // data: 0xAA05EC
extern unsigned char DataGlobal_AA05F0[4];  // data: 0xAA05F0
extern unsigned char DataGlobal_AA05F8[4];  // data: 0xAA05F8
extern unsigned char DataGlobal_AA0600[4];  // data: 0xAA0600
extern unsigned char DataGlobal_AA0608[4];  // data: 0xAA0608
extern unsigned char DataGlobal_AA0610[4];  // data: 0xAA0610
extern unsigned char DataGlobal_AA0614[4];  // data: 0xAA0614
extern unsigned char DataGlobal_AA0618[4];  // data: 0xAA0618
extern unsigned char DataGlobal_AA061C[4];  // data: 0xAA061C
extern unsigned char DataGlobal_AA0620[4];  // data: 0xAA0620
extern unsigned char DataGlobal_AA0628[4];  // data: 0xAA0628
extern unsigned char DataGlobal_AA0630[4];  // data: 0xAA0630
extern unsigned char DataGlobal_AA0638[4];  // data: 0xAA0638
extern unsigned char DataGlobal_AA063C[4];  // data: 0xAA063C
extern unsigned char DataGlobal_AA0640[4];  // data: 0xAA0640
extern unsigned char DataGlobal_AA0644[4];  // data: 0xAA0644
extern unsigned char DataGlobal_AA0648[4];  // data: 0xAA0648
extern unsigned char DataGlobal_AA064A[4];  // data: 0xAA064A
extern unsigned char DataGlobal_AA0650[4];  // data: 0xAA0650
extern unsigned char DataGlobal_AA0658[4];  // data: 0xAA0658
extern unsigned char DataGlobal_AA0660[4];  // data: 0xAA0660
extern unsigned char DataGlobal_AA0668[4];  // data: 0xAA0668
extern unsigned char DataGlobal_AA066C[4];  // data: 0xAA066C
extern unsigned char DataGlobal_AA0670[4];  // data: 0xAA0670
extern unsigned char DataGlobal_AA0674[4];  // data: 0xAA0674
extern unsigned char DataGlobal_AA0678[4];  // data: 0xAA0678
extern unsigned char DataGlobal_AA0680[4];  // data: 0xAA0680
extern unsigned char DataGlobal_AA0688[4];  // data: 0xAA0688
extern unsigned char DataGlobal_AA0690[4];  // data: 0xAA0690
extern unsigned char DataGlobal_AA0694[4];  // data: 0xAA0694
extern unsigned char DataGlobal_AA0698[4];  // data: 0xAA0698
extern unsigned char DataGlobal_AA069C[4];  // data: 0xAA069C
extern unsigned char DataGlobal_AA06A0[4];  // data: 0xAA06A0
extern unsigned char DataGlobal_AA06A8[4];  // data: 0xAA06A8
extern unsigned char DataGlobal_AA06AC[4];  // data: 0xAA06AC
extern unsigned char DataGlobal_AA06B0[4];  // data: 0xAA06B0
extern unsigned char DataGlobal_AA06B8[4];  // data: 0xAA06B8
extern unsigned char DataGlobal_AA06C0[4];  // data: 0xAA06C0
extern unsigned char DataGlobal_AA06C4[4];  // data: 0xAA06C4
extern unsigned char DataGlobal_AA06C8[4];  // data: 0xAA06C8
extern unsigned char DataGlobal_AA06CC[4];  // data: 0xAA06CC
extern unsigned char DataGlobal_AA06D0[4];  // data: 0xAA06D0
extern unsigned char DataGlobal_AA06D2[4];  // data: 0xAA06D2
extern unsigned char DataGlobal_AA06D8[4];  // data: 0xAA06D8
extern unsigned char DataGlobal_AA06E0[4];  // data: 0xAA06E0
extern unsigned char DataGlobal_AA06E8[4];  // data: 0xAA06E8
extern unsigned char DataGlobal_AA06F0[4];  // data: 0xAA06F0
extern unsigned char DataGlobal_AA06F4[4];  // data: 0xAA06F4
extern unsigned char DataGlobal_AA06F8[4];  // data: 0xAA06F8
extern unsigned char DataGlobal_AA0700[4];  // data: 0xAA0700
extern unsigned char DataGlobal_AA0708[4];  // data: 0xAA0708
extern unsigned char DataGlobal_AA0710[4];  // data: 0xAA0710
extern unsigned char DataGlobal_AA0718[4];  // data: 0xAA0718
extern unsigned char DataGlobal_AA071C[4];  // data: 0xAA071C
extern unsigned char DataGlobal_AA0720[4];  // data: 0xAA0720
extern unsigned char DataGlobal_AA0724[4];  // data: 0xAA0724
extern unsigned char DataGlobal_AA0728[4];  // data: 0xAA0728
extern unsigned char DataGlobal_AA0730[4];  // data: 0xAA0730
extern unsigned char DataGlobal_AA073C[4];  // data: 0xAA073C
extern unsigned char DataGlobal_AA0740[4];  // data: 0xAA0740
extern unsigned char DataGlobal_AA0748[4];  // data: 0xAA0748
extern unsigned char DataGlobal_AA074C[4];  // data: 0xAA074C
extern unsigned char DataGlobal_AA0E18[4];  // data: 0xAA0E18
extern unsigned char DataGlobal_AA0E20[4];  // data: 0xAA0E20
extern unsigned char DataGlobal_AA0E24[4];  // data: 0xAA0E24
extern unsigned char DataGlobal_AA0E2C[4];  // data: 0xAA0E2C
extern unsigned char DataGlobal_AA0E30[4];  // data: 0xAA0E30
extern unsigned char DataGlobal_AA0E38[4];  // data: 0xAA0E38
extern unsigned char DataGlobal_AA102C[4];  // data: 0xAA102C
extern unsigned char DataGlobal_AA1040[4];  // data: 0xAA1040
extern unsigned char DataGlobal_AA1044[4];  // data: 0xAA1044
extern unsigned char DataGlobal_AA1048[4];  // data: 0xAA1048
extern unsigned char DataGlobal_AA104C[4];  // data: 0xAA104C
extern unsigned char DataGlobal_AA1050[4];  // data: 0xAA1050
extern unsigned char DataGlobal_AA1058[4];  // data: 0xAA1058
extern unsigned char DataGlobal_AA105C[4];  // data: 0xAA105C
extern unsigned char DataGlobal_AA1060[4];  // data: 0xAA1060
extern unsigned char DataGlobal_AA1064[4];  // data: 0xAA1064
extern unsigned char DataGlobal_AA1068[4];  // data: 0xAA1068
extern unsigned char DataGlobal_AA106C[4];  // data: 0xAA106C
extern unsigned char DataGlobal_AA1070[4];  // data: 0xAA1070
extern unsigned char DataGlobal_AA1078[4];  // data: 0xAA1078
extern unsigned char DataGlobal_AA107C[4];  // data: 0xAA107C
extern unsigned char DataGlobal_AA1080[4];  // data: 0xAA1080
extern unsigned char DataGlobal_AA1084[4];  // data: 0xAA1084
extern unsigned char DataGlobal_AA1085[4];  // data: 0xAA1085
extern unsigned char DataGlobal_AA1088[4];  // data: 0xAA1088
extern unsigned char DataGlobal_AA108C[4];  // data: 0xAA108C
extern unsigned char DataGlobal_AA10A0[4];  // data: 0xAA10A0
extern unsigned char DataGlobal_AA10A4[4];  // data: 0xAA10A4
extern unsigned char DataGlobal_AA10B0[4];  // data: 0xAA10B0
extern unsigned char DataGlobal_AA10C0[4];  // data: 0xAA10C0
extern unsigned char DataGlobal_AA10D0[4];  // data: 0xAA10D0
extern unsigned char DataGlobal_AA10D4[4];  // data: 0xAA10D4
extern unsigned char DataGlobal_AA10E0[4];  // data: 0xAA10E0
extern unsigned char DataGlobal_AA10E4[4];  // data: 0xAA10E4
extern unsigned char DataGlobal_AA10F0[4];  // data: 0xAA10F0
extern unsigned char DataGlobal_AA10F4[4];  // data: 0xAA10F4
extern unsigned char DataGlobal_AA10FC[4];  // data: 0xAA10FC
extern unsigned char DataGlobal_AA1100[4];  // data: 0xAA1100
extern unsigned char DataGlobal_AA1104[4];  // data: 0xAA1104
extern unsigned char DataGlobal_AA1108[4];  // data: 0xAA1108
extern unsigned char DataGlobal_AA110C[4];  // data: 0xAA110C
extern unsigned char DataGlobal_AA1110[4];  // data: 0xAA1110
extern unsigned char DataGlobal_AA1114[4];  // data: 0xAA1114
extern unsigned char DataGlobal_AA1118[4];  // data: 0xAA1118
extern unsigned char DataGlobal_AA111C[4];  // data: 0xAA111C
extern unsigned char DataGlobal_AA1120[4];  // data: 0xAA1120
extern unsigned char DataGlobal_AA1128[4];  // data: 0xAA1128
extern unsigned char DataGlobal_AA1130[4];  // data: 0xAA1130
extern unsigned char DataGlobal_AA1138[4];  // data: 0xAA1138
extern unsigned char DataGlobal_AA1540[4];  // data: 0xAA1540
extern unsigned char DataGlobal_AA1548[4];  // data: 0xAA1548
extern unsigned char DataGlobal_AA154C[4];  // data: 0xAA154C
extern unsigned char DataGlobal_ABA650[4];  // data: 0xABA650
extern unsigned char DataGlobal_ABB120[4];  // data: 0xABB120
extern unsigned char DataGlobal_ABBEB8;  // data: 0xABBEB8
extern unsigned char DataGlobal_ABBED0[36];  // data: 0xABBED0
extern unsigned char DataGlobal_ABBED2[34];  // data: 0xABBED2
extern unsigned char DataGlobal_ABC55C;  // data: 0xABC55C
extern unsigned char DataGlobal_ABC55D;  // data: 0xABC55D
extern unsigned char DataGlobal_ABC58A[4];  // data: 0xABC58A
extern unsigned char DataGlobal_ABC718;  // data: 0xABC718
extern unsigned char DataGlobal_ABC7C8;  // data: 0xABC7C8
extern unsigned char DataGlobal_ABC884;  // data: 0xABC884
extern unsigned char DataGlobal_ABC885;  // data: 0xABC885
extern unsigned char DataGlobal_ABC9C0;  // data: 0xABC9C0
extern unsigned char DataGlobal_ABCA1C;  // data: 0xABCA1C
extern unsigned char DataGlobal_ABCA1D;  // data: 0xABCA1D
extern unsigned char DataGlobal_ABCA4C;  // data: 0xABCA4C
extern unsigned char DataGlobal_ABCA4D;  // data: 0xABCA4D
extern unsigned char DataGlobal_ABCA84;  // data: 0xABCA84
extern unsigned char DataGlobal_ABCB84;  // data: 0xABCB84
extern unsigned char DataGlobal_ABCB85;  // data: 0xABCB85
extern unsigned char DataGlobal_ABCD58;  // data: 0xABCD58
extern unsigned char DataGlobal_ABCD94;  // data: 0xABCD94
extern unsigned char DataGlobal_ABCDFC[84];  // data: 0xABCDFC
extern unsigned char DataGlobal_ABCE08[72];  // data: 0xABCE08
extern unsigned char DataGlobal_ABCE20[48];  // data: 0xABCE20
extern unsigned char DataGlobal_ABCE28[40];  // data: 0xABCE28
extern unsigned char DataGlobal_ABCE2C[36];  // data: 0xABCE2C
extern unsigned char DataGlobal_ABCE30[32];  // data: 0xABCE30
extern unsigned char DataGlobal_ABCE34[28];  // data: 0xABCE34
extern unsigned char DataGlobal_ABCE38[24];  // data: 0xABCE38
extern unsigned char DataGlobal_ABCE3A[22];  // data: 0xABCE3A
extern unsigned char DataGlobal_ABCE40[16];  // data: 0xABCE40
extern unsigned char DataGlobal_ABCE48[8];  // data: 0xABCE48
extern unsigned char DataGlobal_ABCE9C[4];  // data: 0xABCE9C
extern unsigned char DataGlobal_ABCEA0[4];  // data: 0xABCEA0
extern unsigned char DataGlobal_ABCEA4[4];  // data: 0xABCEA4
extern unsigned char DataGlobal_ABCEA5[4];  // data: 0xABCEA5
extern unsigned char DataGlobal_ABCEA6[4];  // data: 0xABCEA6
extern unsigned char DataGlobal_ABCEA8[4];  // data: 0xABCEA8
extern unsigned char DataGlobal_ABCEAC[4];  // data: 0xABCEAC
extern unsigned char DataGlobal_ABCEB0[4];  // data: 0xABCEB0
extern unsigned char DataGlobal_ABCEB4[4];  // data: 0xABCEB4
extern unsigned char DataGlobal_ABCEB5[4];  // data: 0xABCEB5
extern unsigned char DataGlobal_ABCEB6[4];  // data: 0xABCEB6
extern unsigned char DataGlobal_ABCEB8[4];  // data: 0xABCEB8
extern unsigned char DataGlobal_ABCEBA[4];  // data: 0xABCEBA
extern unsigned char DataGlobal_ABCEBC[4];  // data: 0xABCEBC
extern unsigned char DataGlobal_ABCEC0[4];  // data: 0xABCEC0
extern unsigned char DataGlobal_ABCEC4[4];  // data: 0xABCEC4
extern unsigned char DataGlobal_ABCEC8[4];  // data: 0xABCEC8
extern unsigned char DataGlobal_ABCF08[4];  // data: 0xABCF08
extern unsigned char DataGlobal_ABCF0C[4];  // data: 0xABCF0C
extern unsigned char DataGlobal_ABCF10[4];  // data: 0xABCF10
extern unsigned char DataGlobal_ABCF14[4];  // data: 0xABCF14
extern unsigned char DataGlobal_ABCF18[4];  // data: 0xABCF18
extern unsigned char DataGlobal_ABCF1C[4];  // data: 0xABCF1C
extern unsigned char DataGlobal_ABCF20[4];  // data: 0xABCF20
extern unsigned char DataGlobal_ABCF24[4];  // data: 0xABCF24
extern unsigned char DataGlobal_ABCF54;  // data: 0xABCF54
extern unsigned char DataGlobal_ABDC28;  // data: 0xABDC28
extern unsigned char DataGlobal_ABDC88[92];  // data: 0xABDC88
extern unsigned char DataGlobal_ABDD6A[92];  // data: 0xABDD6A
extern unsigned char DataGlobal_ABDD6B[91];  // data: 0xABDD6B
extern unsigned char DataGlobal_ABDD98[46];  // data: 0xABDD98
extern unsigned char DataGlobal_ABDDA0[38];  // data: 0xABDDA0
extern unsigned char DataGlobal_ABDDA8[30];  // data: 0xABDDA8
extern unsigned char DataGlobal_ABDDAC[26];  // data: 0xABDDAC
extern unsigned char DataGlobal_ABDDB0[22];  // data: 0xABDDB0
extern unsigned char DataGlobal_ABDDB4[18];  // data: 0xABDDB4
extern unsigned char DataGlobal_ABDDB8[14];  // data: 0xABDDB8
extern unsigned char DataGlobal_ABDDBC[10];  // data: 0xABDDBC
extern unsigned char DataGlobal_ABDDC0[6];  // data: 0xABDDC0
extern unsigned char DataGlobal_ABDDC4[4];  // data: 0xABDDC4
extern unsigned char DataGlobal_ABDE48;  // data: 0xABDE48
extern unsigned char DataGlobal_ABDF9C;  // data: 0xABDF9C
extern unsigned char DataGlobal_ABDF9D;  // data: 0xABDF9D
extern unsigned char DataGlobal_ABDFB0;  // data: 0xABDFB0
extern unsigned char DataGlobal_ABE2D8;  // data: 0xABE2D8
extern unsigned char DataGlobal_ABEE14[90156];  // data: 0xABEE14
extern unsigned char DataGlobal_ABEE18[90152];  // data: 0xABEE18
extern unsigned char DataGlobal_ABEE20[90144];  // data: 0xABEE20
extern unsigned char DataGlobal_ABEE28[90136];  // data: 0xABEE28
extern unsigned char DataGlobal_ABEE30[90128];  // data: 0xABEE30
extern unsigned char DataGlobal_ABEE38[90120];  // data: 0xABEE38
extern unsigned char DataGlobal_ABEE3C[90116];  // data: 0xABEE3C
extern unsigned char DataGlobal_ABEE40[90112];  // data: 0xABEE40
extern unsigned char DataGlobal_ABEE44[90108];  // data: 0xABEE44
extern unsigned char DataGlobal_ABEE48[90104];  // data: 0xABEE48
extern unsigned char DataGlobal_ABEE50[90096];  // data: 0xABEE50
extern unsigned char DataGlobal_ABEE58[90088];  // data: 0xABEE58
extern unsigned char DataGlobal_ABEE60[90080];  // data: 0xABEE60
extern unsigned char DataGlobal_ABEE64[90076];  // data: 0xABEE64
extern unsigned char DataGlobal_ABEE68[90072];  // data: 0xABEE68
extern unsigned char DataGlobal_ABEE6C[90068];  // data: 0xABEE6C
extern unsigned char DataGlobal_ABEE70[90064];  // data: 0xABEE70
extern unsigned char DataGlobal_ABEE72[90062];  // data: 0xABEE72
extern unsigned char DataGlobal_ABEE78[90056];  // data: 0xABEE78
extern unsigned char DataGlobal_ABEE80[90048];  // data: 0xABEE80
extern unsigned char DataGlobal_ABEE88[90040];  // data: 0xABEE88
extern unsigned char DataGlobal_ABEE90[90032];  // data: 0xABEE90
extern unsigned char DataGlobal_ABEE94[90028];  // data: 0xABEE94
extern unsigned char DataGlobal_ABEE98[90024];  // data: 0xABEE98
extern unsigned char DataGlobal_ABEEA0[90016];  // data: 0xABEEA0
extern unsigned char DataGlobal_ABEEA8[90008];  // data: 0xABEEA8
extern unsigned char DataGlobal_ABEEB0[90000];  // data: 0xABEEB0
extern unsigned char DataGlobal_ABEEB8[89992];  // data: 0xABEEB8
extern unsigned char DataGlobal_ABEEBC[89988];  // data: 0xABEEBC
extern unsigned char DataGlobal_ABEEC0[89984];  // data: 0xABEEC0
extern unsigned char DataGlobal_ABEEC4[89980];  // data: 0xABEEC4
extern unsigned char DataGlobal_ABEEC8[89976];  // data: 0xABEEC8
extern unsigned char DataGlobal_ABEED0[89968];  // data: 0xABEED0
extern unsigned char DataGlobal_ABEED4[89964];  // data: 0xABEED4
extern unsigned char DataGlobal_ABEED8[89960];  // data: 0xABEED8
extern unsigned char DataGlobal_ABEEE0[89952];  // data: 0xABEEE0
extern unsigned char DataGlobal_ABEEE4[89948];  // data: 0xABEEE4
extern unsigned char DataGlobal_ABEEE8[89944];  // data: 0xABEEE8
extern unsigned char DataGlobal_ABEEEC[89940];  // data: 0xABEEEC
extern unsigned char DataGlobal_ABEEF0[89936];  // data: 0xABEEF0
extern unsigned char DataGlobal_ABEEF2[89934];  // data: 0xABEEF2
extern unsigned char DataGlobal_ABEEF8[89928];  // data: 0xABEEF8
extern unsigned char DataGlobal_ABEF00[89920];  // data: 0xABEF00
extern unsigned char DataGlobal_ABEF08[89912];  // data: 0xABEF08
extern unsigned char DataGlobal_ABEF10[89904];  // data: 0xABEF10
extern unsigned char DataGlobal_ABEF14[89900];  // data: 0xABEF14
extern unsigned char DataGlobal_ABEF18[89896];  // data: 0xABEF18
extern unsigned char DataGlobal_ABEF20[89888];  // data: 0xABEF20
extern unsigned char DataGlobal_ABEF28[89880];  // data: 0xABEF28
extern unsigned char DataGlobal_ABEF30[89872];  // data: 0xABEF30
extern unsigned char DataGlobal_ABEF38[89864];  // data: 0xABEF38
extern unsigned char DataGlobal_ABEF3C[89860];  // data: 0xABEF3C
extern unsigned char DataGlobal_ABEF40[89856];  // data: 0xABEF40
extern unsigned char DataGlobal_ABEF44[89852];  // data: 0xABEF44
extern unsigned char DataGlobal_ABEF48[89848];  // data: 0xABEF48
extern unsigned char DataGlobal_ABEF50[89840];  // data: 0xABEF50
extern unsigned char DataGlobal_ABEF58[89832];  // data: 0xABEF58
extern unsigned char DataGlobal_ABEF60[89824];  // data: 0xABEF60
extern unsigned char DataGlobal_ABEF64[89820];  // data: 0xABEF64
extern unsigned char DataGlobal_ABEF68[89816];  // data: 0xABEF68
extern unsigned char DataGlobal_ABEF6C[89812];  // data: 0xABEF6C
extern unsigned char DataGlobal_ABEF70[89808];  // data: 0xABEF70
extern unsigned char DataGlobal_ABEF72[89806];  // data: 0xABEF72
extern unsigned char DataGlobal_ABEF78[89800];  // data: 0xABEF78
extern unsigned char DataGlobal_ABEF80[89792];  // data: 0xABEF80
extern unsigned char DataGlobal_ABEF88[89784];  // data: 0xABEF88
extern unsigned char DataGlobal_ABEF90[89776];  // data: 0xABEF90
extern unsigned char DataGlobal_ABEF94[89772];  // data: 0xABEF94
extern unsigned char DataGlobal_ABEF98[89768];  // data: 0xABEF98
extern unsigned char DataGlobal_ABEFA0[89760];  // data: 0xABEFA0
extern unsigned char DataGlobal_ABEFA8[89752];  // data: 0xABEFA8
extern unsigned char DataGlobal_ABEFB0[89744];  // data: 0xABEFB0
extern unsigned char DataGlobal_ABEFB8[89736];  // data: 0xABEFB8
extern unsigned char DataGlobal_ABEFBC[89732];  // data: 0xABEFBC
extern unsigned char DataGlobal_ABEFC0[89728];  // data: 0xABEFC0
extern unsigned char DataGlobal_ABEFC4[89724];  // data: 0xABEFC4
extern unsigned char DataGlobal_ABEFC8[89720];  // data: 0xABEFC8
extern unsigned char DataGlobal_ABEFD0[89712];  // data: 0xABEFD0
extern unsigned char DataGlobal_ABEFD8[89704];  // data: 0xABEFD8
extern unsigned char DataGlobal_ABEFDC[89700];  // data: 0xABEFDC
extern unsigned char DataGlobal_ABEFE0[89696];  // data: 0xABEFE0
extern unsigned char DataGlobal_ABEFE4[89692];  // data: 0xABEFE4
extern unsigned char DataGlobal_ABEFE8[89688];  // data: 0xABEFE8
extern unsigned char DataGlobal_ABEFEC[89684];  // data: 0xABEFEC
extern unsigned char DataGlobal_ABEFF8[89672];  // data: 0xABEFF8
extern unsigned char DataGlobal_ABEFFC[89668];  // data: 0xABEFFC
extern unsigned char DataGlobal_ABF000[89664];  // data: 0xABF000
extern unsigned char DataGlobal_ABF004[89660];  // data: 0xABF004
extern unsigned char DataGlobal_ABF008[89656];  // data: 0xABF008
extern unsigned char DataGlobal_ABF010[89648];  // data: 0xABF010
extern unsigned char DataGlobal_ABF018[89640];  // data: 0xABF018
extern unsigned char DataGlobal_ABF01C[89636];  // data: 0xABF01C
extern unsigned char DataGlobal_ABF020[89632];  // data: 0xABF020
extern unsigned char DataGlobal_ABF024[89628];  // data: 0xABF024
extern unsigned char DataGlobal_ABF028[89624];  // data: 0xABF028
extern unsigned char DataGlobal_ABF02A[89622];  // data: 0xABF02A
extern unsigned char DataGlobal_ABF030[89616];  // data: 0xABF030
extern unsigned char DataGlobal_ABF038[89608];  // data: 0xABF038
extern unsigned char DataGlobal_ABF040[89600];  // data: 0xABF040
extern unsigned char DataGlobal_ABF048[89592];  // data: 0xABF048
extern unsigned char DataGlobal_ABF04C[89588];  // data: 0xABF04C
extern unsigned char DataGlobal_ABF050[89584];  // data: 0xABF050
extern unsigned char DataGlobal_ABF058[89576];  // data: 0xABF058
extern unsigned char DataGlobal_ABF060[89568];  // data: 0xABF060
extern unsigned char DataGlobal_ABF068[89560];  // data: 0xABF068
extern unsigned char DataGlobal_ABF070[89552];  // data: 0xABF070
extern unsigned char DataGlobal_ABF074[89548];  // data: 0xABF074
extern unsigned char DataGlobal_ABF078[89544];  // data: 0xABF078
extern unsigned char DataGlobal_ABF07C[89540];  // data: 0xABF07C
extern unsigned char DataGlobal_ABF080[89536];  // data: 0xABF080
extern unsigned char DataGlobal_ABF088[89528];  // data: 0xABF088
extern unsigned char DataGlobal_ABF090[89520];  // data: 0xABF090
extern unsigned char DataGlobal_ABF098[89512];  // data: 0xABF098
extern unsigned char DataGlobal_ABF09C[89508];  // data: 0xABF09C
extern unsigned char DataGlobal_ABF0A0[89504];  // data: 0xABF0A0
extern unsigned char DataGlobal_ABF0A4[89500];  // data: 0xABF0A4
extern unsigned char DataGlobal_ABF0A8[89496];  // data: 0xABF0A8
extern unsigned char DataGlobal_ABF0AA[89494];  // data: 0xABF0AA
extern unsigned char DataGlobal_ABF0B0[89488];  // data: 0xABF0B0
extern unsigned char DataGlobal_ABF0B8[89480];  // data: 0xABF0B8
extern unsigned char DataGlobal_ABF0C0[89472];  // data: 0xABF0C0
extern unsigned char DataGlobal_ABF0C8[89464];  // data: 0xABF0C8
extern unsigned char DataGlobal_ABF0CC[89460];  // data: 0xABF0CC
extern unsigned char DataGlobal_ABF0D0[89456];  // data: 0xABF0D0
extern unsigned char DataGlobal_ABF0D8[89448];  // data: 0xABF0D8
extern unsigned char DataGlobal_ABF0E0[89440];  // data: 0xABF0E0
extern unsigned char DataGlobal_ABF0E8[89432];  // data: 0xABF0E8
extern unsigned char DataGlobal_ABF0F0[89424];  // data: 0xABF0F0
extern unsigned char DataGlobal_ABF0F4[89420];  // data: 0xABF0F4
extern unsigned char DataGlobal_ABF0F8[89416];  // data: 0xABF0F8
extern unsigned char DataGlobal_ABF0FC[89412];  // data: 0xABF0FC
extern unsigned char DataGlobal_ABF100[89408];  // data: 0xABF100
extern unsigned char DataGlobal_ABF108[89400];  // data: 0xABF108
extern unsigned char DataGlobal_ABF110[89392];  // data: 0xABF110
extern unsigned char DataGlobal_ABF114[89388];  // data: 0xABF114
extern unsigned char DataGlobal_ABF128[89368];  // data: 0xABF128
extern unsigned char DataGlobal_ABF130[89360];  // data: 0xABF130
extern unsigned char DataGlobal_ABF138[89352];  // data: 0xABF138
extern unsigned char DataGlobal_ABF13C[89348];  // data: 0xABF13C
extern unsigned char DataGlobal_ABF140[89344];  // data: 0xABF140
extern unsigned char DataGlobal_ABF144[89340];  // data: 0xABF144
extern unsigned char DataGlobal_ABF148[89336];  // data: 0xABF148
extern unsigned char DataGlobal_ABF14A[89334];  // data: 0xABF14A
extern unsigned char DataGlobal_ABF150[89328];  // data: 0xABF150
extern unsigned char DataGlobal_ABF158[89320];  // data: 0xABF158
extern unsigned char DataGlobal_ABF160[89312];  // data: 0xABF160
extern unsigned char DataGlobal_ABF168[89304];  // data: 0xABF168
extern unsigned char DataGlobal_ABF17C[89284];  // data: 0xABF17C
extern unsigned char DataGlobal_ABF180[89280];  // data: 0xABF180
extern unsigned char DataGlobal_ABF184[89276];  // data: 0xABF184
extern unsigned char DataGlobal_ABF188[89272];  // data: 0xABF188
extern unsigned char DataGlobal_ABF18C[89268];  // data: 0xABF18C
extern unsigned char DataGlobal_ABF190[89264];  // data: 0xABF190
extern unsigned char DataGlobal_ABF198[89256];  // data: 0xABF198
extern unsigned char DataGlobal_ABF1B0[89232];  // data: 0xABF1B0
extern unsigned char DataGlobal_ABF1B8[89224];  // data: 0xABF1B8
extern unsigned char DataGlobal_ABF1C0[89216];  // data: 0xABF1C0
extern unsigned char DataGlobal_ABF1C8[89208];  // data: 0xABF1C8
extern unsigned char DataGlobal_ABF200[89152];  // data: 0xABF200
extern unsigned char DataGlobal_ABF204[89148];  // data: 0xABF204
extern unsigned char DataGlobal_ABF208[89144];  // data: 0xABF208
extern unsigned char DataGlobal_ABF20C[89140];  // data: 0xABF20C
extern unsigned char DataGlobal_ABF210[89136];  // data: 0xABF210
extern unsigned char DataGlobal_ABF218[89128];  // data: 0xABF218
extern unsigned char DataGlobal_ABF21C[89124];  // data: 0xABF21C
extern unsigned char DataGlobal_ABF220[89120];  // data: 0xABF220
extern unsigned char DataGlobal_ABF224[89116];  // data: 0xABF224
extern unsigned char DataGlobal_ABF228[89112];  // data: 0xABF228
extern unsigned char DataGlobal_ABF22C[89108];  // data: 0xABF22C
extern unsigned char DataGlobal_ABF230[89104];  // data: 0xABF230
extern unsigned char DataGlobal_ABF238[89096];  // data: 0xABF238
extern unsigned char DataGlobal_ABF239[89095];  // data: 0xABF239
extern unsigned char DataGlobal_ABF23C[89092];  // data: 0xABF23C
extern unsigned char DataGlobal_ABF240[89088];  // data: 0xABF240
extern unsigned char DataGlobal_ABF244[89084];  // data: 0xABF244
extern unsigned char DataGlobal_ABF248[89080];  // data: 0xABF248
extern unsigned char DataGlobal_ABF250[89072];  // data: 0xABF250
extern unsigned char DataGlobal_ABF258[89064];  // data: 0xABF258
extern unsigned char DataGlobal_ABF25C[89060];  // data: 0xABF25C
extern unsigned char DataGlobal_ABF260[89056];  // data: 0xABF260
extern unsigned char DataGlobal_ABF264[89052];  // data: 0xABF264
extern unsigned char DataGlobal_ABF268[89048];  // data: 0xABF268
extern unsigned char DataGlobal_ABF26A[89046];  // data: 0xABF26A
extern unsigned char DataGlobal_ABF270[89040];  // data: 0xABF270
extern unsigned char DataGlobal_ABF278[89032];  // data: 0xABF278
extern unsigned char DataGlobal_ABF280[89024];  // data: 0xABF280
extern unsigned char DataGlobal_ABF288[89016];  // data: 0xABF288
extern unsigned char DataGlobal_ABF28C[89012];  // data: 0xABF28C
extern unsigned char DataGlobal_ABF290[89008];  // data: 0xABF290
extern unsigned char DataGlobal_ABF294[89004];  // data: 0xABF294
extern unsigned char DataGlobal_ABF298[89000];  // data: 0xABF298
extern unsigned char DataGlobal_ABF2A0[88992];  // data: 0xABF2A0
extern unsigned char DataGlobal_ABF2A8[88984];  // data: 0xABF2A8
extern unsigned char DataGlobal_ABF2B0[88976];  // data: 0xABF2B0
extern unsigned char DataGlobal_ABF2B8[88968];  // data: 0xABF2B8
extern unsigned char DataGlobal_ABF2C0[88960];  // data: 0xABF2C0
extern unsigned char DataGlobal_ABF2C4[88956];  // data: 0xABF2C4
extern unsigned char DataGlobal_ABF2C8[88952];  // data: 0xABF2C8
extern unsigned char DataGlobal_ABF2CC[88948];  // data: 0xABF2CC
extern unsigned char DataGlobal_ABF2D0[88944];  // data: 0xABF2D0
extern unsigned char DataGlobal_ABF2D8[88936];  // data: 0xABF2D8
extern unsigned char DataGlobal_ABF2DC[88932];  // data: 0xABF2DC
extern unsigned char DataGlobal_ABF2E0[88928];  // data: 0xABF2E0
extern unsigned char DataGlobal_ABF2E8[88920];  // data: 0xABF2E8
extern unsigned char DataGlobal_ABF2EC[88916];  // data: 0xABF2EC
extern unsigned char DataGlobal_ABF2F0[88912];  // data: 0xABF2F0
extern unsigned char DataGlobal_ABF2F4[88908];  // data: 0xABF2F4
extern unsigned char DataGlobal_ABF2F8[88904];  // data: 0xABF2F8
extern unsigned char DataGlobal_ABF2FA[88902];  // data: 0xABF2FA
extern unsigned char DataGlobal_ABF300[88896];  // data: 0xABF300
extern unsigned char DataGlobal_ABF308[88888];  // data: 0xABF308
extern unsigned char DataGlobal_ABF310[88880];  // data: 0xABF310
extern unsigned char DataGlobal_ABF318[88872];  // data: 0xABF318
extern unsigned char DataGlobal_ABF31C[88868];  // data: 0xABF31C
extern unsigned char DataGlobal_ABF320[88864];  // data: 0xABF320
extern unsigned char DataGlobal_ABF328[88856];  // data: 0xABF328
extern unsigned char DataGlobal_ABF330[88848];  // data: 0xABF330
extern unsigned char DataGlobal_ABF338[88840];  // data: 0xABF338
extern unsigned char DataGlobal_ABF340[88832];  // data: 0xABF340
extern unsigned char DataGlobal_ABF344[88828];  // data: 0xABF344
extern unsigned char DataGlobal_ABF348[88824];  // data: 0xABF348
extern unsigned char DataGlobal_ABF34C[88820];  // data: 0xABF34C
extern unsigned char DataGlobal_ABF350[88816];  // data: 0xABF350
extern unsigned char DataGlobal_ABF358[88808];  // data: 0xABF358
extern unsigned char DataGlobal_ABF35C[88804];  // data: 0xABF35C
extern unsigned char DataGlobal_ABF360[88800];  // data: 0xABF360
extern unsigned char DataGlobal_ABF368[88792];  // data: 0xABF368
extern unsigned char DataGlobal_ABF36C[88788];  // data: 0xABF36C
extern unsigned char DataGlobal_ABF370[88784];  // data: 0xABF370
extern unsigned char DataGlobal_ABF374[88780];  // data: 0xABF374
extern unsigned char DataGlobal_ABF378[88776];  // data: 0xABF378
extern unsigned char DataGlobal_ABF37A[88774];  // data: 0xABF37A
extern unsigned char DataGlobal_ABF380[88768];  // data: 0xABF380
extern unsigned char DataGlobal_ABF388[88760];  // data: 0xABF388
extern unsigned char DataGlobal_ABF394[88748];  // data: 0xABF394
extern unsigned char DataGlobal_ABF398[88744];  // data: 0xABF398
extern unsigned char DataGlobal_ABF39C[88740];  // data: 0xABF39C
extern unsigned char DataGlobal_ABF39D[88739];  // data: 0xABF39D
extern unsigned char DataGlobal_ABF3A0[88736];  // data: 0xABF3A0
extern unsigned char DataGlobal_ABF3A4[88732];  // data: 0xABF3A4
extern unsigned char DataGlobal_ABF3A8[88728];  // data: 0xABF3A8
extern unsigned char DataGlobal_ABF3B0[88720];  // data: 0xABF3B0
extern unsigned char DataGlobal_ABF3B4[88716];  // data: 0xABF3B4
extern unsigned char DataGlobal_ABF3B8[88712];  // data: 0xABF3B8
extern unsigned char DataGlobal_ABF3C0[88704];  // data: 0xABF3C0
extern unsigned char DataGlobal_ABF3C8[88696];  // data: 0xABF3C8
extern unsigned char DataGlobal_ABF3D0[88688];  // data: 0xABF3D0
extern unsigned char DataGlobal_ABF3D8[88680];  // data: 0xABF3D8
extern unsigned char DataGlobal_ABF3DC[88676];  // data: 0xABF3DC
extern unsigned char DataGlobal_ABF3E0[88672];  // data: 0xABF3E0
extern unsigned char DataGlobal_ABF3E4[88668];  // data: 0xABF3E4
extern unsigned char DataGlobal_ABF3E8[88664];  // data: 0xABF3E8
extern unsigned char DataGlobal_ABF3F0[88656];  // data: 0xABF3F0
extern unsigned char DataGlobal_ABF3F8[88648];  // data: 0xABF3F8
extern unsigned char DataGlobal_ABF400[88640];  // data: 0xABF400
extern unsigned char DataGlobal_ABF408[88632];  // data: 0xABF408
extern unsigned char DataGlobal_ABF40C[88628];  // data: 0xABF40C
extern unsigned char DataGlobal_ABF410[88624];  // data: 0xABF410
extern unsigned char DataGlobal_ABF414[88620];  // data: 0xABF414
extern unsigned char DataGlobal_ABF418[88616];  // data: 0xABF418
extern unsigned char DataGlobal_ABF41A[88614];  // data: 0xABF41A
extern unsigned char DataGlobal_ABF420[88608];  // data: 0xABF420
extern unsigned char DataGlobal_ABF428[88600];  // data: 0xABF428
extern unsigned char DataGlobal_ABF430[88592];  // data: 0xABF430
extern unsigned char DataGlobal_ABF438[88584];  // data: 0xABF438
extern unsigned char DataGlobal_ABF43C[88580];  // data: 0xABF43C
extern unsigned char DataGlobal_ABF440[88576];  // data: 0xABF440
extern unsigned char DataGlobal_ABF448[88568];  // data: 0xABF448
extern unsigned char DataGlobal_ABF450[88560];  // data: 0xABF450
extern unsigned char DataGlobal_ABF458[88552];  // data: 0xABF458
extern unsigned char DataGlobal_ABF460[88544];  // data: 0xABF460
extern unsigned char DataGlobal_ABF480[88512];  // data: 0xABF480
extern unsigned char DataGlobal_ABF484[88508];  // data: 0xABF484
extern unsigned char DataGlobal_ABF488[88504];  // data: 0xABF488
extern unsigned char DataGlobal_ABF48C[88500];  // data: 0xABF48C
extern unsigned char DataGlobal_ABF490[88496];  // data: 0xABF490
extern unsigned char DataGlobal_ABF498[88488];  // data: 0xABF498
extern unsigned char DataGlobal_ABF4A0[88480];  // data: 0xABF4A0
extern unsigned char DataGlobal_ABF4A8[88472];  // data: 0xABF4A8
extern unsigned char DataGlobal_ABF4AC[88468];  // data: 0xABF4AC
extern unsigned char DataGlobal_ABF4B0[88464];  // data: 0xABF4B0
extern unsigned char DataGlobal_ABF4B4[88460];  // data: 0xABF4B4
extern unsigned char DataGlobal_ABF4B8[88456];  // data: 0xABF4B8
extern unsigned char DataGlobal_ABF4BA[88454];  // data: 0xABF4BA
extern unsigned char DataGlobal_ABF4C0[88448];  // data: 0xABF4C0
extern unsigned char DataGlobal_ABF4C8[88440];  // data: 0xABF4C8
extern unsigned char DataGlobal_ABF4D0[88432];  // data: 0xABF4D0
extern unsigned char DataGlobal_ABF4D8[88424];  // data: 0xABF4D8
extern unsigned char DataGlobal_ABF4DC[88420];  // data: 0xABF4DC
extern unsigned char DataGlobal_ABF4E0[88416];  // data: 0xABF4E0
extern unsigned char DataGlobal_ABF4E8[88408];  // data: 0xABF4E8
extern unsigned char DataGlobal_ABF4F0[88400];  // data: 0xABF4F0
extern unsigned char DataGlobal_ABF4F8[88392];  // data: 0xABF4F8
extern unsigned char DataGlobal_ABF500[88384];  // data: 0xABF500
extern unsigned char DataGlobal_ABF504[88380];  // data: 0xABF504
extern unsigned char DataGlobal_ABF508[88376];  // data: 0xABF508
extern unsigned char DataGlobal_ABF50C[88372];  // data: 0xABF50C
extern unsigned char DataGlobal_ABF510[88368];  // data: 0xABF510
extern unsigned char DataGlobal_ABF518[88360];  // data: 0xABF518
extern unsigned char DataGlobal_ABF520[88352];  // data: 0xABF520
extern unsigned char DataGlobal_ABF528[88344];  // data: 0xABF528
extern unsigned char DataGlobal_ABF52C[88340];  // data: 0xABF52C
extern unsigned char DataGlobal_ABF530[88336];  // data: 0xABF530
extern unsigned char DataGlobal_ABF534[88332];  // data: 0xABF534
extern unsigned char DataGlobal_ABF538[88328];  // data: 0xABF538
extern unsigned char DataGlobal_ABF53A[88326];  // data: 0xABF53A
extern unsigned char DataGlobal_ABF540[88320];  // data: 0xABF540
extern unsigned char DataGlobal_ABF548[88312];  // data: 0xABF548
extern unsigned char DataGlobal_ABF550[88304];  // data: 0xABF550
extern unsigned char DataGlobal_ABF558[88296];  // data: 0xABF558
extern unsigned char DataGlobal_ABF55C[88292];  // data: 0xABF55C
extern unsigned char DataGlobal_ABF560[88288];  // data: 0xABF560
extern unsigned char DataGlobal_ABF568[88280];  // data: 0xABF568
extern unsigned char DataGlobal_ABF570[88272];  // data: 0xABF570
extern unsigned char DataGlobal_ABF578[88264];  // data: 0xABF578
extern unsigned char DataGlobal_ABF580[88256];  // data: 0xABF580
extern unsigned char DataGlobal_ABF584[88252];  // data: 0xABF584
extern unsigned char DataGlobal_ABF588[88248];  // data: 0xABF588
extern unsigned char DataGlobal_ABF58C[88244];  // data: 0xABF58C
extern unsigned char DataGlobal_ABF590[88240];  // data: 0xABF590
extern unsigned char DataGlobal_ABF598[88232];  // data: 0xABF598
extern unsigned char DataGlobal_ABF59C[88228];  // data: 0xABF59C
extern unsigned char DataGlobal_ABF5A0[88224];  // data: 0xABF5A0
extern unsigned char DataGlobal_ABF5A4[88220];  // data: 0xABF5A4
extern unsigned char DataGlobal_ABF5A8[88216];  // data: 0xABF5A8
extern unsigned char DataGlobal_ABF5AC[88212];  // data: 0xABF5AC
extern unsigned char DataGlobal_ABF5B0[88208];  // data: 0xABF5B0
extern unsigned char DataGlobal_ABF5B4[88204];  // data: 0xABF5B4
extern unsigned char DataGlobal_ABF6B4[87948];  // data: 0xABF6B4
extern unsigned char DataGlobal_ABF6B8[87944];  // data: 0xABF6B8
extern unsigned char DataGlobal_ABF8C4[87420];  // data: 0xABF8C4
extern unsigned char DataGlobal_ABF8C8[87416];  // data: 0xABF8C8
extern unsigned char DataGlobal_ABF8CC[87412];  // data: 0xABF8CC
extern unsigned char DataGlobal_ABF8D8[87400];  // data: 0xABF8D8
extern unsigned char DataGlobal_ABF8E0[87392];  // data: 0xABF8E0
extern unsigned char DataGlobal_ABF8E4[87388];  // data: 0xABF8E4
extern unsigned char DataGlobal_ABF8E8[87384];  // data: 0xABF8E8
extern unsigned char DataGlobal_ABF8EC[87380];  // data: 0xABF8EC
extern unsigned char DataGlobal_ABF8F0[87376];  // data: 0xABF8F0
extern unsigned char DataGlobal_ABF8F2[87374];  // data: 0xABF8F2
extern unsigned char DataGlobal_ABF8F8[87368];  // data: 0xABF8F8
extern unsigned char DataGlobal_ABF900[87360];  // data: 0xABF900
extern unsigned char DataGlobal_ABF908[87352];  // data: 0xABF908
extern unsigned char DataGlobal_ABF910[87344];  // data: 0xABF910
extern unsigned char DataGlobal_ABF914[87340];  // data: 0xABF914
extern unsigned char DataGlobal_ABF918[87336];  // data: 0xABF918
extern unsigned char DataGlobal_ABF920[87328];  // data: 0xABF920
extern unsigned char DataGlobal_ABF928[87320];  // data: 0xABF928
extern unsigned char DataGlobal_ABF930[87312];  // data: 0xABF930
extern unsigned char DataGlobal_ABF938[87304];  // data: 0xABF938
extern unsigned char DataGlobal_ABF93C[87300];  // data: 0xABF93C
extern unsigned char DataGlobal_ABF940[87296];  // data: 0xABF940
extern unsigned char DataGlobal_ABF944[87292];  // data: 0xABF944
extern unsigned char DataGlobal_ABF948[87288];  // data: 0xABF948
extern unsigned char DataGlobal_ABF950[87280];  // data: 0xABF950
extern unsigned char DataGlobal_ABF958[87272];  // data: 0xABF958
extern unsigned char DataGlobal_ABF978[87240];  // data: 0xABF978
extern unsigned char DataGlobal_ABF980[87232];  // data: 0xABF980
extern unsigned char DataGlobal_ABF984[87228];  // data: 0xABF984
extern unsigned char DataGlobal_ABF988[87224];  // data: 0xABF988
extern unsigned char DataGlobal_ABF98C[87220];  // data: 0xABF98C
extern unsigned char DataGlobal_ABF990[87216];  // data: 0xABF990
extern unsigned char DataGlobal_ABF992[87214];  // data: 0xABF992
extern unsigned char DataGlobal_ABF998[87208];  // data: 0xABF998
extern unsigned char DataGlobal_ABF9A0[87200];  // data: 0xABF9A0
extern unsigned char DataGlobal_ABF9A8[87192];  // data: 0xABF9A8
extern unsigned char DataGlobal_ABF9B0[87184];  // data: 0xABF9B0
extern unsigned char DataGlobal_ABF9B4[87180];  // data: 0xABF9B4
extern unsigned char DataGlobal_ABF9B8[87176];  // data: 0xABF9B8
extern unsigned char DataGlobal_ABF9C0[87168];  // data: 0xABF9C0
extern unsigned char DataGlobal_ABF9C8[87160];  // data: 0xABF9C8
extern unsigned char DataGlobal_ABF9D0[87152];  // data: 0xABF9D0
extern unsigned char DataGlobal_ABF9D8[87144];  // data: 0xABF9D8
extern unsigned char DataGlobal_ABF9DC[87140];  // data: 0xABF9DC
extern unsigned char DataGlobal_ABF9E0[87136];  // data: 0xABF9E0
extern unsigned char DataGlobal_ABF9E4[87132];  // data: 0xABF9E4
extern unsigned char DataGlobal_ABF9E8[87128];  // data: 0xABF9E8
extern unsigned char DataGlobal_ABF9F0[87120];  // data: 0xABF9F0
extern unsigned char DataGlobal_ABF9F4[87116];  // data: 0xABF9F4
extern unsigned char DataGlobal_ABF9F8[87112];  // data: 0xABF9F8
extern unsigned char DataGlobal_ABFA00[87104];  // data: 0xABFA00
extern unsigned char DataGlobal_ABFA08[87096];  // data: 0xABFA08
extern unsigned char DataGlobal_ABFA0C[87092];  // data: 0xABFA0C
extern unsigned char DataGlobal_ABFA10[87088];  // data: 0xABFA10
extern unsigned char DataGlobal_ABFA14[87084];  // data: 0xABFA14
extern unsigned char DataGlobal_ABFA18[87080];  // data: 0xABFA18
extern unsigned char DataGlobal_ABFA1A[87078];  // data: 0xABFA1A
extern unsigned char DataGlobal_ABFA20[87072];  // data: 0xABFA20
extern unsigned char DataGlobal_ABFA28[87064];  // data: 0xABFA28
extern unsigned char DataGlobal_ABFA30[87056];  // data: 0xABFA30
extern unsigned char DataGlobal_ABFA38[87048];  // data: 0xABFA38
extern unsigned char DataGlobal_ABFA3C[87044];  // data: 0xABFA3C
extern unsigned char DataGlobal_ABFA40[87040];  // data: 0xABFA40
extern unsigned char DataGlobal_ABFA48[87032];  // data: 0xABFA48
extern unsigned char DataGlobal_ABFA50[87024];  // data: 0xABFA50
extern unsigned char DataGlobal_ABFA58[87016];  // data: 0xABFA58
extern unsigned char DataGlobal_ABFA60[87008];  // data: 0xABFA60
extern unsigned char DataGlobal_ABFA64[87004];  // data: 0xABFA64
extern unsigned char DataGlobal_ABFA68[87000];  // data: 0xABFA68
extern unsigned char DataGlobal_ABFA6C[86996];  // data: 0xABFA6C
extern unsigned char DataGlobal_ABFA70[86992];  // data: 0xABFA70
extern unsigned char DataGlobal_ABFA78[86984];  // data: 0xABFA78
extern unsigned char DataGlobal_ABFA80[86976];  // data: 0xABFA80
extern unsigned char DataGlobal_ABFA88[86968];  // data: 0xABFA88
extern unsigned char DataGlobal_ABFA8C[86964];  // data: 0xABFA8C
extern unsigned char DataGlobal_ABFA90[86960];  // data: 0xABFA90
extern unsigned char DataGlobal_ABFA94[86956];  // data: 0xABFA94
extern unsigned char DataGlobal_ABFA98[86952];  // data: 0xABFA98
extern unsigned char DataGlobal_ABFA9A[86950];  // data: 0xABFA9A
extern unsigned char DataGlobal_ABFAA0[86944];  // data: 0xABFAA0
extern unsigned char DataGlobal_ABFAA8[86936];  // data: 0xABFAA8
extern unsigned char DataGlobal_ABFAB0[86928];  // data: 0xABFAB0
extern unsigned char DataGlobal_ABFAB8[86920];  // data: 0xABFAB8
extern unsigned char DataGlobal_ABFABC[86916];  // data: 0xABFABC
extern unsigned char DataGlobal_ABFAC0[86912];  // data: 0xABFAC0
extern unsigned char DataGlobal_ABFAC8[86904];  // data: 0xABFAC8
extern unsigned char DataGlobal_ABFAD0[86896];  // data: 0xABFAD0
extern unsigned char DataGlobal_ABFAD8[86888];  // data: 0xABFAD8
extern unsigned char DataGlobal_ABFAE0[86880];  // data: 0xABFAE0
extern unsigned char DataGlobal_ABFAE4[86876];  // data: 0xABFAE4
extern unsigned char DataGlobal_ABFAE8[86872];  // data: 0xABFAE8
extern unsigned char DataGlobal_ABFAEC[86868];  // data: 0xABFAEC
extern unsigned char DataGlobal_ABFAF0[86864];  // data: 0xABFAF0
extern unsigned char DataGlobal_ABFAF8[86856];  // data: 0xABFAF8
extern unsigned char DataGlobal_ABFB08[86840];  // data: 0xABFB08
extern unsigned char DataGlobal_ABFB10[86832];  // data: 0xABFB10
extern unsigned char DataGlobal_ABFB14[86828];  // data: 0xABFB14
extern unsigned char DataGlobal_ABFB18[86824];  // data: 0xABFB18
extern unsigned char DataGlobal_ABFB1C[86820];  // data: 0xABFB1C
extern unsigned char DataGlobal_ABFB20[86816];  // data: 0xABFB20
extern unsigned char DataGlobal_ABFB22[86814];  // data: 0xABFB22
extern unsigned char DataGlobal_ABFB28[86808];  // data: 0xABFB28
extern unsigned char DataGlobal_ABFB30[86800];  // data: 0xABFB30
extern unsigned char DataGlobal_ABFB38[86792];  // data: 0xABFB38
extern unsigned char DataGlobal_ABFB40[86784];  // data: 0xABFB40
extern unsigned char DataGlobal_ABFB44[86780];  // data: 0xABFB44
extern unsigned char DataGlobal_ABFB48[86776];  // data: 0xABFB48
extern unsigned char DataGlobal_ABFB50[86768];  // data: 0xABFB50
extern unsigned char DataGlobal_ABFB58[86760];  // data: 0xABFB58
extern unsigned char DataGlobal_ABFB60[86752];  // data: 0xABFB60
extern unsigned char DataGlobal_ABFB68[86744];  // data: 0xABFB68
extern unsigned char DataGlobal_ABFB6C[86740];  // data: 0xABFB6C
extern unsigned char DataGlobal_ABFB70[86736];  // data: 0xABFB70
extern unsigned char DataGlobal_ABFB74[86732];  // data: 0xABFB74
extern unsigned char DataGlobal_ABFB78[86728];  // data: 0xABFB78
extern unsigned char DataGlobal_ABFB80[86720];  // data: 0xABFB80
extern unsigned char DataGlobal_ABFB88[86712];  // data: 0xABFB88
extern unsigned char DataGlobal_ABFB8C[86708];  // data: 0xABFB8C
extern unsigned char DataGlobal_ABFB90[86704];  // data: 0xABFB90
extern unsigned char DataGlobal_ABFB94[86700];  // data: 0xABFB94
extern unsigned char DataGlobal_ABFB98[86696];  // data: 0xABFB98
extern unsigned char DataGlobal_ABFBA0[86688];  // data: 0xABFBA0
extern unsigned char DataGlobal_ABFBA4[86684];  // data: 0xABFBA4
extern unsigned char DataGlobal_ABFBA8[86680];  // data: 0xABFBA8
extern unsigned char DataGlobal_ABFBAC[86676];  // data: 0xABFBAC
extern unsigned char DataGlobal_ABFBB0[86672];  // data: 0xABFBB0
extern unsigned char DataGlobal_ABFBB4[86668];  // data: 0xABFBB4
extern unsigned char DataGlobal_ABFBB8[86664];  // data: 0xABFBB8
extern unsigned char DataGlobal_ABFBBC[86660];  // data: 0xABFBBC
extern unsigned char DataGlobal_ABFBC0[86656];  // data: 0xABFBC0
extern unsigned char DataGlobal_ABFBC4[86652];  // data: 0xABFBC4
extern unsigned char DataGlobal_ABFBC8[86648];  // data: 0xABFBC8
extern unsigned char DataGlobal_ABFBCC[86644];  // data: 0xABFBCC
extern unsigned char DataGlobal_ABFBD0[86640];  // data: 0xABFBD0
extern unsigned char DataGlobal_ABFBD4[86636];  // data: 0xABFBD4
extern unsigned char DataGlobal_ABFBD8[86632];  // data: 0xABFBD8
extern unsigned char DataGlobal_ABFBDC[86628];  // data: 0xABFBDC
extern unsigned char DataGlobal_ABFBE0[86624];  // data: 0xABFBE0
extern unsigned char DataGlobal_ABFC00[86592];  // data: 0xABFC00
extern unsigned char DataGlobal_ABFC04[86588];  // data: 0xABFC04
extern unsigned char DataGlobal_ABFC08[86584];  // data: 0xABFC08
extern unsigned char DataGlobal_ABFC0C[86580];  // data: 0xABFC0C
extern unsigned char DataGlobal_ABFC10[86576];  // data: 0xABFC10
extern unsigned char DataGlobal_ABFC18[86568];  // data: 0xABFC18
extern unsigned char DataGlobal_ABFC1C[86564];  // data: 0xABFC1C
extern unsigned char DataGlobal_ABFC20[86560];  // data: 0xABFC20
extern unsigned char DataGlobal_ABFC24[86556];  // data: 0xABFC24
extern unsigned char DataGlobal_ABFC28[86552];  // data: 0xABFC28
extern unsigned char DataGlobal_ABFC2A[86550];  // data: 0xABFC2A
extern unsigned char DataGlobal_ABFC30[86544];  // data: 0xABFC30
extern unsigned char DataGlobal_ABFC38[86536];  // data: 0xABFC38
extern unsigned char DataGlobal_ABFC40[86528];  // data: 0xABFC40
extern unsigned char DataGlobal_ABFC48[86520];  // data: 0xABFC48
extern unsigned char DataGlobal_ABFC4C[86516];  // data: 0xABFC4C
extern unsigned char DataGlobal_ABFC50[86512];  // data: 0xABFC50
extern unsigned char DataGlobal_ABFC58[86504];  // data: 0xABFC58
extern unsigned char DataGlobal_ABFC60[86496];  // data: 0xABFC60
extern unsigned char DataGlobal_ABFC68[86488];  // data: 0xABFC68
extern unsigned char DataGlobal_ABFC70[86480];  // data: 0xABFC70
extern unsigned char DataGlobal_ABFC74[86476];  // data: 0xABFC74
extern unsigned char DataGlobal_ABFC78[86472];  // data: 0xABFC78
extern unsigned char DataGlobal_ABFC7C[86468];  // data: 0xABFC7C
extern unsigned char DataGlobal_ABFC80[86464];  // data: 0xABFC80
extern unsigned char DataGlobal_ABFC88[86456];  // data: 0xABFC88
extern unsigned char DataGlobal_ABFC90[86448];  // data: 0xABFC90
extern unsigned char DataGlobal_ABFC94[86444];  // data: 0xABFC94
extern unsigned char DataGlobal_ABFC98[86440];  // data: 0xABFC98
extern unsigned char DataGlobal_ABFC9C[86436];  // data: 0xABFC9C
extern unsigned char DataGlobal_ABFC9D[86435];  // data: 0xABFC9D
extern unsigned char DataGlobal_ABFCA0[86432];  // data: 0xABFCA0
extern unsigned char DataGlobal_ABFCA4[86428];  // data: 0xABFCA4
extern unsigned char DataGlobal_ABFCA8[86424];  // data: 0xABFCA8
extern unsigned char DataGlobal_ABFCAC[86420];  // data: 0xABFCAC
extern unsigned char DataGlobal_ABFCB0[86416];  // data: 0xABFCB0
extern unsigned char DataGlobal_ABFCB4[86412];  // data: 0xABFCB4
extern unsigned char DataGlobal_ABFCB8[86408];  // data: 0xABFCB8
extern unsigned char DataGlobal_ABFCBC[86404];  // data: 0xABFCBC
extern unsigned char DataGlobal_ABFCC0[86400];  // data: 0xABFCC0
extern unsigned char DataGlobal_ABFCC4[86396];  // data: 0xABFCC4
extern unsigned char DataGlobal_ABFCC5[86395];  // data: 0xABFCC5
extern unsigned char DataGlobal_ABFCC8[86392];  // data: 0xABFCC8
extern unsigned char DataGlobal_ABFCCC[86388];  // data: 0xABFCCC
extern unsigned char DataGlobal_ABFCD0[86384];  // data: 0xABFCD0
extern unsigned char DataGlobal_ABFD34[86284];  // data: 0xABFD34
extern unsigned char DataGlobal_ABFD38[86280];  // data: 0xABFD38
extern unsigned char DataGlobal_ABFD40[86272];  // data: 0xABFD40
extern unsigned char DataGlobal_ABFD44[86268];  // data: 0xABFD44
extern unsigned char DataGlobal_ABFD48[86264];  // data: 0xABFD48
extern unsigned char DataGlobal_ABFD4C[86260];  // data: 0xABFD4C
extern unsigned char DataGlobal_ABFD50[86256];  // data: 0xABFD50
extern unsigned char DataGlobal_ABFD52[86254];  // data: 0xABFD52
extern unsigned char DataGlobal_ABFD58[86248];  // data: 0xABFD58
extern unsigned char DataGlobal_ABFD60[86240];  // data: 0xABFD60
extern unsigned char DataGlobal_ABFD68[86232];  // data: 0xABFD68
extern unsigned char DataGlobal_ABFD78[86216];  // data: 0xABFD78
extern unsigned char DataGlobal_ABFD7C[86212];  // data: 0xABFD7C
extern unsigned char DataGlobal_ABFD80[86208];  // data: 0xABFD80
extern unsigned char DataGlobal_ABFD88[86200];  // data: 0xABFD88
extern unsigned char DataGlobal_ABFD90[86192];  // data: 0xABFD90
extern unsigned char DataGlobal_ABFD98[86184];  // data: 0xABFD98
extern unsigned char DataGlobal_ABFDA8[86168];  // data: 0xABFDA8
extern unsigned char DataGlobal_ABFDAC[86164];  // data: 0xABFDAC
extern unsigned char DataGlobal_ABFDAD[86163];  // data: 0xABFDAD
extern unsigned char DataGlobal_ABFDB4[86156];  // data: 0xABFDB4
extern unsigned char DataGlobal_ABFDB8[86152];  // data: 0xABFDB8
extern unsigned char DataGlobal_ABFDBC[86148];  // data: 0xABFDBC
extern unsigned char DataGlobal_ABFDC0[86144];  // data: 0xABFDC0
extern unsigned char DataGlobal_ABFDC4[86140];  // data: 0xABFDC4
extern unsigned char DataGlobal_ABFDC8[86136];  // data: 0xABFDC8
extern unsigned char DataGlobal_ABFDD0[86128];  // data: 0xABFDD0
extern unsigned char DataGlobal_ABFDD8[86120];  // data: 0xABFDD8
extern unsigned char DataGlobal_ABFDE0[86112];  // data: 0xABFDE0
extern unsigned char DataGlobal_ABFDE4[86108];  // data: 0xABFDE4
extern unsigned char DataGlobal_ABFDE8[86104];  // data: 0xABFDE8
extern unsigned char DataGlobal_ABFDEC[86100];  // data: 0xABFDEC
extern unsigned char DataGlobal_ABFDF0[86096];  // data: 0xABFDF0
extern unsigned char DataGlobal_ABFDF2[86094];  // data: 0xABFDF2
extern unsigned char DataGlobal_ABFDF8[86088];  // data: 0xABFDF8
extern unsigned char DataGlobal_ABFE00[86080];  // data: 0xABFE00
extern unsigned char DataGlobal_ABFE08[86072];  // data: 0xABFE08
extern unsigned char DataGlobal_ABFE10[86064];  // data: 0xABFE10
extern unsigned char DataGlobal_ABFE14[86060];  // data: 0xABFE14
extern unsigned char DataGlobal_ABFE18[86056];  // data: 0xABFE18
extern unsigned char DataGlobal_ABFE20[86048];  // data: 0xABFE20
extern unsigned char DataGlobal_ABFE28[86040];  // data: 0xABFE28
extern unsigned char DataGlobal_ABFE30[86032];  // data: 0xABFE30
extern unsigned char DataGlobal_ABFE38[86024];  // data: 0xABFE38
extern unsigned char DataGlobal_ABFE3C[86020];  // data: 0xABFE3C
extern unsigned char DataGlobal_ABFE40[86016];  // data: 0xABFE40
extern unsigned char DataGlobal_ABFE44[86012];  // data: 0xABFE44
extern unsigned char DataGlobal_ABFE48[86008];  // data: 0xABFE48
extern unsigned char DataGlobal_ABFE50[86000];  // data: 0xABFE50
extern unsigned char DataGlobal_ABFE58[85992];  // data: 0xABFE58
extern unsigned char DataGlobal_ABFE60[85984];  // data: 0xABFE60
extern unsigned char DataGlobal_ABFE64[85980];  // data: 0xABFE64
extern unsigned char DataGlobal_ABFE68[85976];  // data: 0xABFE68
extern unsigned char DataGlobal_ABFE6C[85972];  // data: 0xABFE6C
extern unsigned char DataGlobal_ABFE70[85968];  // data: 0xABFE70
extern unsigned char DataGlobal_ABFE72[85966];  // data: 0xABFE72
extern unsigned char DataGlobal_ABFE78[85960];  // data: 0xABFE78
extern unsigned char DataGlobal_ABFE80[85952];  // data: 0xABFE80
extern unsigned char DataGlobal_ABFE88[85944];  // data: 0xABFE88
extern unsigned char DataGlobal_ABFE90[85936];  // data: 0xABFE90
extern unsigned char DataGlobal_ABFE94[85932];  // data: 0xABFE94
extern unsigned char DataGlobal_ABFE98[85928];  // data: 0xABFE98
extern unsigned char DataGlobal_ABFEA0[85920];  // data: 0xABFEA0
extern unsigned char DataGlobal_ABFEA8[85912];  // data: 0xABFEA8
extern unsigned char DataGlobal_ABFEB0[85904];  // data: 0xABFEB0
extern unsigned char DataGlobal_ABFEB8[85896];  // data: 0xABFEB8
extern unsigned char DataGlobal_ABFEBC[85892];  // data: 0xABFEBC
extern unsigned char DataGlobal_ABFEC0[85888];  // data: 0xABFEC0
extern unsigned char DataGlobal_ABFEC8[85880];  // data: 0xABFEC8
extern unsigned char DataGlobal_ABFECC[85876];  // data: 0xABFECC
extern unsigned char DataGlobal_ABFED0[85872];  // data: 0xABFED0
extern unsigned char DataGlobal_ABFED4[85868];  // data: 0xABFED4
extern unsigned char DataGlobal_ABFED8[85864];  // data: 0xABFED8
extern unsigned char DataGlobal_ABFEDC[85860];  // data: 0xABFEDC
extern unsigned char DataGlobal_ABFEE0[85856];  // data: 0xABFEE0
extern unsigned char DataGlobal_ABFEE8[85848];  // data: 0xABFEE8
extern unsigned char DataGlobal_ABFEF0[85840];  // data: 0xABFEF0
extern unsigned char DataGlobal_ABFEF8[85832];  // data: 0xABFEF8
extern unsigned char DataGlobal_ABFEFC[85828];  // data: 0xABFEFC
extern unsigned char DataGlobal_ABFF00[85824];  // data: 0xABFF00
extern unsigned char DataGlobal_ABFF04[85820];  // data: 0xABFF04
extern unsigned char DataGlobal_ABFF08[85816];  // data: 0xABFF08
extern unsigned char DataGlobal_ABFF0A[85814];  // data: 0xABFF0A
extern unsigned char DataGlobal_ABFF10[85808];  // data: 0xABFF10
extern unsigned char DataGlobal_ABFF18[85800];  // data: 0xABFF18
extern unsigned char DataGlobal_ABFF20[85792];  // data: 0xABFF20
extern unsigned char DataGlobal_ABFF28[85784];  // data: 0xABFF28
extern unsigned char DataGlobal_ABFF2C[85780];  // data: 0xABFF2C
extern unsigned char DataGlobal_ABFF30[85776];  // data: 0xABFF30
extern unsigned char DataGlobal_ABFF38[85768];  // data: 0xABFF38
extern unsigned char DataGlobal_ABFF40[85760];  // data: 0xABFF40
extern unsigned char DataGlobal_ABFF48[85752];  // data: 0xABFF48
extern unsigned char DataGlobal_ABFF50[85744];  // data: 0xABFF50
extern unsigned char DataGlobal_ABFF54[85740];  // data: 0xABFF54
extern unsigned char DataGlobal_ABFF58[85736];  // data: 0xABFF58
extern unsigned char DataGlobal_ABFF5C[85732];  // data: 0xABFF5C
extern unsigned char DataGlobal_ABFF60[85728];  // data: 0xABFF60
extern unsigned char DataGlobal_ABFF68[85720];  // data: 0xABFF68
extern unsigned char DataGlobal_ABFF70[85712];  // data: 0xABFF70
extern unsigned char DataGlobal_ABFF74[85708];  // data: 0xABFF74
extern unsigned char DataGlobal_ABFF78[85704];  // data: 0xABFF78
extern unsigned char DataGlobal_ABFF7C[85700];  // data: 0xABFF7C
extern unsigned char DataGlobal_AC0198[85160];  // data: 0xAC0198
extern unsigned char DataGlobal_AC01A8[85144];  // data: 0xAC01A8
extern unsigned char DataGlobal_AC01AC[85140];  // data: 0xAC01AC
extern unsigned char DataGlobal_AC01B0[85136];  // data: 0xAC01B0
extern unsigned char DataGlobal_AC01B4[85132];  // data: 0xAC01B4
extern unsigned char DataGlobal_AC01B8[85128];  // data: 0xAC01B8
extern unsigned char DataGlobal_AC01BA[85126];  // data: 0xAC01BA
extern unsigned char DataGlobal_AC01BC[85124];  // data: 0xAC01BC
extern unsigned char DataGlobal_AC01C0[85120];  // data: 0xAC01C0
extern unsigned char DataGlobal_AC01C8[85112];  // data: 0xAC01C8
extern unsigned char DataGlobal_AC01D8[85096];  // data: 0xAC01D8
extern unsigned char DataGlobal_AC01E8[85080];  // data: 0xAC01E8
extern unsigned char DataGlobal_AC01EC[85076];  // data: 0xAC01EC
extern unsigned char DataGlobal_AC01F0[85072];  // data: 0xAC01F0
extern unsigned char DataGlobal_AC01F8[85064];  // data: 0xAC01F8
extern unsigned char DataGlobal_AC0200[85056];  // data: 0xAC0200
extern unsigned char DataGlobal_AC0204[85052];  // data: 0xAC0204
extern unsigned char DataGlobal_AC0208[85048];  // data: 0xAC0208
extern unsigned char DataGlobal_AC0210[85040];  // data: 0xAC0210
extern unsigned char DataGlobal_AC0218[85032];  // data: 0xAC0218
extern unsigned char DataGlobal_AC0220[85024];  // data: 0xAC0220
extern unsigned char DataGlobal_AC0224[85020];  // data: 0xAC0224
extern unsigned char DataGlobal_AC0228[85016];  // data: 0xAC0228
extern unsigned char DataGlobal_AC0230[85008];  // data: 0xAC0230
extern unsigned char DataGlobal_AC0234[85004];  // data: 0xAC0234
extern unsigned char DataGlobal_AC0238[85000];  // data: 0xAC0238
extern unsigned char DataGlobal_AC0240[84992];  // data: 0xAC0240
extern unsigned char DataGlobal_AC0244[84988];  // data: 0xAC0244
extern unsigned char DataGlobal_AC0248[84984];  // data: 0xAC0248
extern unsigned char DataGlobal_AC024C[84980];  // data: 0xAC024C
extern unsigned char DataGlobal_AC0250[84976];  // data: 0xAC0250
extern unsigned char DataGlobal_AC0258[84968];  // data: 0xAC0258
extern unsigned char DataGlobal_AC026C[84948];  // data: 0xAC026C
extern unsigned char DataGlobal_AC0270[84944];  // data: 0xAC0270
extern unsigned char DataGlobal_AC0274[84940];  // data: 0xAC0274
extern unsigned char DataGlobal_AC0278[84936];  // data: 0xAC0278
extern unsigned char DataGlobal_AC0A9C[82852];  // data: 0xAC0A9C
extern unsigned char DataGlobal_AC0AC0[82816];  // data: 0xAC0AC0
extern unsigned char DataGlobal_AC0AC8[82808];  // data: 0xAC0AC8
extern unsigned char DataGlobal_AC0AEC[82772];  // data: 0xAC0AEC
extern unsigned char DataGlobal_AC0B10[82736];  // data: 0xAC0B10
extern unsigned char DataGlobal_AC0B38[82696];  // data: 0xAC0B38
extern unsigned char DataGlobal_AC0B3C[82692];  // data: 0xAC0B3C
extern unsigned char DataGlobal_AC0B40[82688];  // data: 0xAC0B40
extern unsigned char DataGlobal_AC0B44[82684];  // data: 0xAC0B44
extern unsigned char DataGlobal_AC0B48[82680];  // data: 0xAC0B48
extern unsigned char DataGlobal_AC0B6C[82644];  // data: 0xAC0B6C
extern unsigned char DataGlobal_AC0B90[82608];  // data: 0xAC0B90
extern unsigned char DataGlobal_AC0B94[82604];  // data: 0xAC0B94
extern unsigned char DataGlobal_AC0CE8[82264];  // data: 0xAC0CE8
extern unsigned char DataGlobal_AC0CF0[82256];  // data: 0xAC0CF0
extern unsigned char DataGlobal_AC0CFD[82243];  // data: 0xAC0CFD
extern unsigned char DataGlobal_AC0D00[82240];  // data: 0xAC0D00
extern unsigned char DataGlobal_AC0D20[82208];  // data: 0xAC0D20
extern unsigned char DataGlobal_AC0D28[82200];  // data: 0xAC0D28
extern unsigned char DataGlobal_AC0D38[82184];  // data: 0xAC0D38
extern unsigned char DataGlobal_AC0D44[82172];  // data: 0xAC0D44
extern unsigned char DataGlobal_AC0E98[81832];  // data: 0xAC0E98
extern unsigned char DataGlobal_AC0E9C[81828];  // data: 0xAC0E9C
extern unsigned char DataGlobal_AC0EA0[81824];  // data: 0xAC0EA0
extern unsigned char DataGlobal_AC0EA4[81820];  // data: 0xAC0EA4
extern unsigned char DataGlobal_AC10D0[81264];  // data: 0xAC10D0
extern unsigned char DataGlobal_AC10D8[81256];  // data: 0xAC10D8
extern unsigned char DataGlobal_AC10E8[81240];  // data: 0xAC10E8
extern unsigned char DataGlobal_AC10F0[81232];  // data: 0xAC10F0
extern unsigned char DataGlobal_AC1146[81146];  // data: 0xAC1146
extern unsigned char DataGlobal_AC1148[81144];  // data: 0xAC1148
extern unsigned char DataGlobal_AC114C[81140];  // data: 0xAC114C
extern unsigned char DataGlobal_AC1150[81136];  // data: 0xAC1150
extern unsigned char DataGlobal_AC1158[81128];  // data: 0xAC1158
extern unsigned char DataGlobal_AC1160[81120];  // data: 0xAC1160
extern unsigned char DataGlobal_AC1168[81112];  // data: 0xAC1168
extern unsigned char DataGlobal_AC1174[81100];  // data: 0xAC1174
extern unsigned char DataGlobal_AC117C[81092];  // data: 0xAC117C
extern unsigned char DataGlobal_AC1180[81088];  // data: 0xAC1180
extern unsigned char DataGlobal_AC1184[81084];  // data: 0xAC1184
extern unsigned char DataGlobal_AC1188[81080];  // data: 0xAC1188
extern unsigned char DataGlobal_AC118C[81076];  // data: 0xAC118C
extern unsigned char DataGlobal_AC1190[81072];  // data: 0xAC1190
extern unsigned char DataGlobal_AC1194[81068];  // data: 0xAC1194
extern unsigned char DataGlobal_AC11B8[81032];  // data: 0xAC11B8
extern unsigned char DataGlobal_AC11BC[81028];  // data: 0xAC11BC
extern unsigned char DataGlobal_AC11BD[81027];  // data: 0xAC11BD
extern unsigned char DataGlobal_AC11BE[81026];  // data: 0xAC11BE
extern unsigned char DataGlobal_AC11BF[81025];  // data: 0xAC11BF
extern unsigned char DataGlobal_AC11C0[81024];  // data: 0xAC11C0
extern unsigned char DataGlobal_AC11C1[81023];  // data: 0xAC11C1
extern unsigned char DataGlobal_AC11D0[81008];  // data: 0xAC11D0
extern unsigned char DataGlobal_AC11D8[81000];  // data: 0xAC11D8
extern unsigned char DataGlobal_AC11DC[80996];  // data: 0xAC11DC
extern unsigned char DataGlobal_AC11E0[80992];  // data: 0xAC11E0
extern unsigned char DataGlobal_AC11E4[80988];  // data: 0xAC11E4
extern unsigned char DataGlobal_AC120C[80948];  // data: 0xAC120C
extern unsigned char DataGlobal_AC120E[80946];  // data: 0xAC120E
extern unsigned char DataGlobal_AC1210[80944];  // data: 0xAC1210
extern unsigned char DataGlobal_AC1218[80936];  // data: 0xAC1218
extern unsigned char DataGlobal_AC1220[80928];  // data: 0xAC1220
extern unsigned char DataGlobal_AC1228[80920];  // data: 0xAC1228
extern unsigned char DataGlobal_AC122C[80916];  // data: 0xAC122C
extern unsigned char DataGlobal_AC1230[80912];  // data: 0xAC1230
extern unsigned char DataGlobal_AC1234[80908];  // data: 0xAC1234
extern unsigned char DataGlobal_AC1238[80904];  // data: 0xAC1238
extern unsigned char DataGlobal_AC1240[80896];  // data: 0xAC1240
extern unsigned char DataGlobal_AC1248[80888];  // data: 0xAC1248
extern unsigned char DataGlobal_AC1250[80880];  // data: 0xAC1250
extern unsigned char DataGlobal_AC1254[80876];  // data: 0xAC1254
extern unsigned char DataGlobal_AC1258[80872];  // data: 0xAC1258
extern unsigned char DataGlobal_AC125C[80868];  // data: 0xAC125C
extern unsigned char DataGlobal_AC1260[80864];  // data: 0xAC1260
extern unsigned char DataGlobal_AC1268[80856];  // data: 0xAC1268
extern unsigned char DataGlobal_AC1270[80848];  // data: 0xAC1270
extern unsigned char DataGlobal_AC1278[80840];  // data: 0xAC1278
extern unsigned char DataGlobal_AC127C[80836];  // data: 0xAC127C
extern unsigned char DataGlobal_AC1280[80832];  // data: 0xAC1280
extern unsigned char DataGlobal_AC1284[80828];  // data: 0xAC1284
extern unsigned char DataGlobal_AC12D8[80744];  // data: 0xAC12D8
extern unsigned char DataGlobal_AC12DA[80742];  // data: 0xAC12DA
extern unsigned char DataGlobal_AC12E0[80736];  // data: 0xAC12E0
extern unsigned char DataGlobal_AC12F0[80720];  // data: 0xAC12F0
extern unsigned char DataGlobal_AC12F8[80712];  // data: 0xAC12F8
extern unsigned char DataGlobal_AC1300[80704];  // data: 0xAC1300
extern unsigned char DataGlobal_AC1304[80700];  // data: 0xAC1304
extern unsigned char DataGlobal_AC1308[80696];  // data: 0xAC1308
extern unsigned char DataGlobal_AC1310[80688];  // data: 0xAC1310
extern unsigned char DataGlobal_AC1318[80680];  // data: 0xAC1318
extern unsigned char DataGlobal_AC1320[80672];  // data: 0xAC1320
extern unsigned char DataGlobal_AC1328[80664];  // data: 0xAC1328
extern unsigned char DataGlobal_AC132C[80660];  // data: 0xAC132C
extern unsigned char DataGlobal_AC1330[80656];  // data: 0xAC1330
extern unsigned char DataGlobal_AC1334[80652];  // data: 0xAC1334
extern unsigned char DataGlobal_AC1338[80648];  // data: 0xAC1338
extern unsigned char DataGlobal_AC1340[80640];  // data: 0xAC1340
extern unsigned char DataGlobal_AC1348[80632];  // data: 0xAC1348
extern unsigned char DataGlobal_AC1350[80624];  // data: 0xAC1350
extern unsigned char DataGlobal_AC1354[80620];  // data: 0xAC1354
extern unsigned char DataGlobal_AC1358[80616];  // data: 0xAC1358
extern unsigned char DataGlobal_AC135C[80612];  // data: 0xAC135C
extern unsigned char DataGlobal_AC1360[80608];  // data: 0xAC1360
extern unsigned char DataGlobal_AC1368[80600];  // data: 0xAC1368
extern unsigned char DataGlobal_AC1370[80592];  // data: 0xAC1370
extern unsigned char DataGlobal_AC1378[80584];  // data: 0xAC1378
extern unsigned char DataGlobal_AC1380[80576];  // data: 0xAC1380
extern unsigned char DataGlobal_AC1384[80572];  // data: 0xAC1384
extern unsigned char DataGlobal_AC1388[80568];  // data: 0xAC1388
extern unsigned char DataGlobal_AC1390[80560];  // data: 0xAC1390
extern unsigned char DataGlobal_AC1398[80552];  // data: 0xAC1398
extern unsigned char DataGlobal_AC139C[80548];  // data: 0xAC139C
extern unsigned char DataGlobal_AC13A0[80544];  // data: 0xAC13A0
extern unsigned char DataGlobal_AC13A8[80536];  // data: 0xAC13A8
extern unsigned char DataGlobal_AC13B0[80528];  // data: 0xAC13B0
extern unsigned char DataGlobal_AC13B4[80524];  // data: 0xAC13B4
extern unsigned char DataGlobal_AC13B8[80520];  // data: 0xAC13B8
extern unsigned char DataGlobal_AC13BC[80516];  // data: 0xAC13BC
extern unsigned char DataGlobal_AC13C0[80512];  // data: 0xAC13C0
extern unsigned char DataGlobal_AC13C8[80504];  // data: 0xAC13C8
extern unsigned char DataGlobal_AC13D0[80496];  // data: 0xAC13D0
extern unsigned char DataGlobal_AC13D8[80488];  // data: 0xAC13D8
extern unsigned char DataGlobal_AC13DC[80484];  // data: 0xAC13DC
extern unsigned char DataGlobal_AC13E0[80480];  // data: 0xAC13E0
extern unsigned char DataGlobal_AC13E4[80476];  // data: 0xAC13E4
extern unsigned char DataGlobal_AC13E8[80472];  // data: 0xAC13E8
extern unsigned char DataGlobal_AC13EA[80470];  // data: 0xAC13EA
extern unsigned char DataGlobal_AC13F0[80464];  // data: 0xAC13F0
extern unsigned char DataGlobal_AC13F8[80456];  // data: 0xAC13F8
extern unsigned char DataGlobal_AC1400[80448];  // data: 0xAC1400
extern unsigned char DataGlobal_AC1408[80440];  // data: 0xAC1408
extern unsigned char DataGlobal_AC140C[80436];  // data: 0xAC140C
extern unsigned char DataGlobal_AC1410[80432];  // data: 0xAC1410
extern unsigned char DataGlobal_AC1418[80424];  // data: 0xAC1418
extern unsigned char DataGlobal_AC141C[80420];  // data: 0xAC141C
extern unsigned char DataGlobal_AC1420[80416];  // data: 0xAC1420
extern unsigned char DataGlobal_AC1424[80412];  // data: 0xAC1424
extern unsigned char DataGlobal_AC1425[80411];  // data: 0xAC1425
extern unsigned char DataGlobal_AC1428[80408];  // data: 0xAC1428
extern unsigned char DataGlobal_AC142C[80404];  // data: 0xAC142C
extern unsigned char DataGlobal_AC1430[80400];  // data: 0xAC1430
extern unsigned char DataGlobal_AC1440[80384];  // data: 0xAC1440
extern unsigned char DataGlobal_AC1448[80376];  // data: 0xAC1448
extern unsigned char DataGlobal_AC1450[80368];  // data: 0xAC1450
extern unsigned char DataGlobal_AC1454[80364];  // data: 0xAC1454
extern unsigned char DataGlobal_AC1458[80360];  // data: 0xAC1458
extern unsigned char DataGlobal_AC1460[80352];  // data: 0xAC1460
extern unsigned char DataGlobal_AC1468[80344];  // data: 0xAC1468
extern unsigned char DataGlobal_AC1470[80336];  // data: 0xAC1470
extern unsigned char DataGlobal_AC1474[80332];  // data: 0xAC1474
extern unsigned char DataGlobal_AC1488[80312];  // data: 0xAC1488
extern unsigned char DataGlobal_AC1489[80311];  // data: 0xAC1489
extern unsigned char DataGlobal_AC148A[80310];  // data: 0xAC148A
extern unsigned char DataGlobal_AC148B[80309];  // data: 0xAC148B
extern unsigned char DataGlobal_AC1490[80304];  // data: 0xAC1490
extern unsigned char DataGlobal_AC1498[80296];  // data: 0xAC1498
extern unsigned char DataGlobal_AC149C[80292];  // data: 0xAC149C
extern unsigned char DataGlobal_AC14A0[80288];  // data: 0xAC14A0
extern unsigned char DataGlobal_AC14A4[80284];  // data: 0xAC14A4
extern unsigned char DataGlobal_AC14A8[80280];  // data: 0xAC14A8
extern unsigned char DataGlobal_AC14AA[80278];  // data: 0xAC14AA
extern unsigned char DataGlobal_AC14B0[80272];  // data: 0xAC14B0
extern unsigned char DataGlobal_AC14B8[80264];  // data: 0xAC14B8
extern unsigned char DataGlobal_AC14C0[80256];  // data: 0xAC14C0
extern unsigned char DataGlobal_AC14C8[80248];  // data: 0xAC14C8
extern unsigned char DataGlobal_AC14CC[80244];  // data: 0xAC14CC
extern unsigned char DataGlobal_AC14D0[80240];  // data: 0xAC14D0
extern unsigned char DataGlobal_AC14D8[80232];  // data: 0xAC14D8
extern unsigned char DataGlobal_AC14E0[80224];  // data: 0xAC14E0
extern unsigned char DataGlobal_AC14E8[80216];  // data: 0xAC14E8
extern unsigned char DataGlobal_AC14F0[80208];  // data: 0xAC14F0
extern unsigned char DataGlobal_AC14F4[80204];  // data: 0xAC14F4
extern unsigned char DataGlobal_AC14F8[80200];  // data: 0xAC14F8
extern unsigned char DataGlobal_AC14FC[80196];  // data: 0xAC14FC
extern unsigned char DataGlobal_AC1500[80192];  // data: 0xAC1500
extern unsigned char DataGlobal_AC1508[80184];  // data: 0xAC1508
extern unsigned char DataGlobal_AC1510[80176];  // data: 0xAC1510
extern unsigned char DataGlobal_AC1518[80168];  // data: 0xAC1518
extern unsigned char DataGlobal_AC151C[80164];  // data: 0xAC151C
extern unsigned char DataGlobal_AC1520[80160];  // data: 0xAC1520
extern unsigned char DataGlobal_AC1524[80156];  // data: 0xAC1524
extern unsigned char DataGlobal_AC1528[80152];  // data: 0xAC1528
extern unsigned char DataGlobal_AC152A[80150];  // data: 0xAC152A
extern unsigned char DataGlobal_AC1530[80144];  // data: 0xAC1530
extern unsigned char DataGlobal_AC1538[80136];  // data: 0xAC1538
extern unsigned char DataGlobal_AC1540[80128];  // data: 0xAC1540
extern unsigned char DataGlobal_AC1570[80080];  // data: 0xAC1570
extern unsigned char DataGlobal_AC1574[80076];  // data: 0xAC1574
extern unsigned char DataGlobal_AC1578[80072];  // data: 0xAC1578
extern unsigned char DataGlobal_AC1580[80064];  // data: 0xAC1580
extern unsigned char DataGlobal_AC15B8[80008];  // data: 0xAC15B8
extern unsigned char DataGlobal_AC15C0[80000];  // data: 0xAC15C0
extern unsigned char DataGlobal_AC15C8[79992];  // data: 0xAC15C8
extern unsigned char DataGlobal_AC15CC[79988];  // data: 0xAC15CC
extern unsigned char DataGlobal_AC15D0[79984];  // data: 0xAC15D0
extern unsigned char DataGlobal_AC15D4[79980];  // data: 0xAC15D4
extern unsigned char DataGlobal_AC15D8[79976];  // data: 0xAC15D8
extern unsigned char DataGlobal_AC15E0[79968];  // data: 0xAC15E0
extern unsigned char DataGlobal_AC15E8[79960];  // data: 0xAC15E8
extern unsigned char DataGlobal_AC15F0[79952];  // data: 0xAC15F0
extern unsigned char DataGlobal_AC15F8[79944];  // data: 0xAC15F8
extern unsigned char DataGlobal_AC15FC[79940];  // data: 0xAC15FC
extern unsigned char DataGlobal_AC1600[79936];  // data: 0xAC1600
extern unsigned char DataGlobal_AC1604[79932];  // data: 0xAC1604
extern unsigned char DataGlobal_AC1608[79928];  // data: 0xAC1608
extern unsigned char DataGlobal_AC160A[79926];  // data: 0xAC160A
extern unsigned char DataGlobal_AC1610[79920];  // data: 0xAC1610
extern unsigned char DataGlobal_AC1618[79912];  // data: 0xAC1618
extern unsigned char DataGlobal_AC1620[79904];  // data: 0xAC1620
extern unsigned char DataGlobal_AC1628[79896];  // data: 0xAC1628
extern unsigned char DataGlobal_AC162C[79892];  // data: 0xAC162C
extern unsigned char DataGlobal_AC1630[79888];  // data: 0xAC1630
extern unsigned char DataGlobal_AC1638[79880];  // data: 0xAC1638
extern unsigned char DataGlobal_AC1640[79872];  // data: 0xAC1640
extern unsigned char DataGlobal_AC1644[79868];  // data: 0xAC1644
extern unsigned char DataGlobal_AC1648[79864];  // data: 0xAC1648
extern unsigned char DataGlobal_AC1650[79856];  // data: 0xAC1650
extern unsigned char DataGlobal_AC1658[79848];  // data: 0xAC1658
extern unsigned char DataGlobal_AC165C[79844];  // data: 0xAC165C
extern unsigned char DataGlobal_AC1660[79840];  // data: 0xAC1660
extern unsigned char DataGlobal_AC1664[79836];  // data: 0xAC1664
extern unsigned char DataGlobal_AC1668[79832];  // data: 0xAC1668
extern unsigned char DataGlobal_AC1670[79824];  // data: 0xAC1670
extern unsigned char DataGlobal_AC1678[79816];  // data: 0xAC1678
extern unsigned char DataGlobal_AC167C[79812];  // data: 0xAC167C
extern unsigned char DataGlobal_AC1680[79808];  // data: 0xAC1680
extern unsigned char DataGlobal_AC1684[79804];  // data: 0xAC1684
extern unsigned char DataGlobal_AC1685[79803];  // data: 0xAC1685
extern unsigned char DataGlobal_AC1688[79800];  // data: 0xAC1688
extern unsigned char DataGlobal_AC168C[79796];  // data: 0xAC168C
extern unsigned char DataGlobal_AC1690[79792];  // data: 0xAC1690
extern unsigned char DataGlobal_AC1698[79784];  // data: 0xAC1698
extern unsigned char DataGlobal_AC1798[79528];  // data: 0xAC1798
extern unsigned char DataGlobal_AC17C0[79488];  // data: 0xAC17C0
extern unsigned char DataGlobal_AC17C4[79484];  // data: 0xAC17C4
extern unsigned char DataGlobal_AC17C8[79480];  // data: 0xAC17C8
extern unsigned char DataGlobal_AC17CC[79476];  // data: 0xAC17CC
extern unsigned char DataGlobal_AC17D0[79472];  // data: 0xAC17D0
extern unsigned char DataGlobal_AC17D2[79470];  // data: 0xAC17D2
extern unsigned char DataGlobal_AC17D8[79464];  // data: 0xAC17D8
extern unsigned char DataGlobal_AC17E0[79456];  // data: 0xAC17E0
extern unsigned char DataGlobal_AC17E8[79448];  // data: 0xAC17E8
extern unsigned char DataGlobal_AC17F0[79440];  // data: 0xAC17F0
extern unsigned char DataGlobal_AC17F4[79436];  // data: 0xAC17F4
extern unsigned char DataGlobal_AC17F8[79432];  // data: 0xAC17F8
extern unsigned char DataGlobal_AC1800[79424];  // data: 0xAC1800
extern unsigned char DataGlobal_AC1808[79416];  // data: 0xAC1808
extern unsigned char DataGlobal_AC1810[79408];  // data: 0xAC1810
extern unsigned char DataGlobal_AC1818[79400];  // data: 0xAC1818
extern unsigned char DataGlobal_AC181C[79396];  // data: 0xAC181C
extern unsigned char DataGlobal_AC1820[79392];  // data: 0xAC1820
extern unsigned char DataGlobal_AC1824[79388];  // data: 0xAC1824
extern unsigned char DataGlobal_AC1828[79384];  // data: 0xAC1828
extern unsigned char DataGlobal_AC1830[79376];  // data: 0xAC1830
extern unsigned char DataGlobal_AC1834[79372];  // data: 0xAC1834
extern unsigned char DataGlobal_AC1838[79368];  // data: 0xAC1838
extern unsigned char DataGlobal_AC184C[79348];  // data: 0xAC184C
extern unsigned char DataGlobal_AC1858[79336];  // data: 0xAC1858
extern unsigned char DataGlobal_AC185C[79332];  // data: 0xAC185C
extern unsigned char DataGlobal_AC1860[79328];  // data: 0xAC1860
extern unsigned char DataGlobal_AC1864[79324];  // data: 0xAC1864
extern unsigned char DataGlobal_AC186C[79316];  // data: 0xAC186C
extern unsigned char DataGlobal_AC1870[79312];  // data: 0xAC1870
extern unsigned char DataGlobal_AC1888[79288];  // data: 0xAC1888
extern unsigned char DataGlobal_AC1890[79280];  // data: 0xAC1890
extern unsigned char DataGlobal_AC1898[79272];  // data: 0xAC1898
extern unsigned char DataGlobal_AC18B0[79248];  // data: 0xAC18B0
extern unsigned char DataGlobal_AC18B4[79244];  // data: 0xAC18B4
extern unsigned char DataGlobal_AC18B8[79240];  // data: 0xAC18B8
extern unsigned char DataGlobal_AC18BC[79236];  // data: 0xAC18BC
extern unsigned char DataGlobal_AC18CC[79220];  // data: 0xAC18CC
extern unsigned char DataGlobal_AC18D0[79216];  // data: 0xAC18D0
extern unsigned char DataGlobal_AC18D4[79212];  // data: 0xAC18D4
extern unsigned char DataGlobal_AC18D8[79208];  // data: 0xAC18D8
extern unsigned char DataGlobal_AC18E0[79200];  // data: 0xAC18E0
extern unsigned char DataGlobal_AC18E8[79192];  // data: 0xAC18E8
extern unsigned char DataGlobal_AC18F0[79184];  // data: 0xAC18F0
extern unsigned char DataGlobal_AC1AF8[78664];  // data: 0xAC1AF8
extern unsigned char DataGlobal_AC1B08[78648];  // data: 0xAC1B08
extern unsigned char DataGlobal_AC1B10[78640];  // data: 0xAC1B10
extern unsigned char DataGlobal_AC1B14[78636];  // data: 0xAC1B14
extern unsigned char DataGlobal_AC1B20[78624];  // data: 0xAC1B20
extern unsigned char DataGlobal_AC1B28[78616];  // data: 0xAC1B28
extern unsigned char DataGlobal_AC1B30[78608];  // data: 0xAC1B30
extern unsigned char DataGlobal_AC1B38[78600];  // data: 0xAC1B38
extern unsigned char DataGlobal_AC1B3A[78598];  // data: 0xAC1B3A
extern unsigned char DataGlobal_AC1B40[78592];  // data: 0xAC1B40
extern unsigned char DataGlobal_AC1B50[78576];  // data: 0xAC1B50
extern unsigned char DataGlobal_AC1B58[78568];  // data: 0xAC1B58
extern unsigned char DataGlobal_AC1B5C[78564];  // data: 0xAC1B5C
extern unsigned char DataGlobal_AC1B68[78552];  // data: 0xAC1B68
extern unsigned char DataGlobal_AC1B70[78544];  // data: 0xAC1B70
extern unsigned char DataGlobal_AC1B78[78536];  // data: 0xAC1B78
extern unsigned char DataGlobal_AC1B88[78520];  // data: 0xAC1B88
extern unsigned char DataGlobal_AC1B90[78512];  // data: 0xAC1B90
extern unsigned char DataGlobal_AC1B94[78508];  // data: 0xAC1B94
extern unsigned char DataGlobal_AC1B98[78504];  // data: 0xAC1B98
extern unsigned char DataGlobal_AC1CA0[78240];  // data: 0xAC1CA0
extern unsigned char DataGlobal_AC1CA8[78232];  // data: 0xAC1CA8
extern unsigned char DataGlobal_AC1CAC[78228];  // data: 0xAC1CAC
extern unsigned char DataGlobal_AC1CB0[78224];  // data: 0xAC1CB0
extern unsigned char DataGlobal_AC1CB4[78220];  // data: 0xAC1CB4
extern unsigned char DataGlobal_AC1CB8[78216];  // data: 0xAC1CB8
extern unsigned char DataGlobal_AC1CC8[78200];  // data: 0xAC1CC8
extern unsigned char DataGlobal_AC1CCC[78196];  // data: 0xAC1CCC
extern unsigned char DataGlobal_AC1DCC[77940];  // data: 0xAC1DCC
extern unsigned char DataGlobal_AC1DD0[77936];  // data: 0xAC1DD0
extern unsigned char DataGlobal_AC1DD4[77932];  // data: 0xAC1DD4
extern unsigned char DataGlobal_AC1DD8[77928];  // data: 0xAC1DD8
extern unsigned char DataGlobal_AC1DE8[77912];  // data: 0xAC1DE8
extern unsigned char DataGlobal_AC1DF0[77904];  // data: 0xAC1DF0
extern unsigned char DataGlobal_AC1DF8[77896];  // data: 0xAC1DF8
extern unsigned char DataGlobal_AC1DFC[77892];  // data: 0xAC1DFC
extern unsigned char DataGlobal_AC1E00[77888];  // data: 0xAC1E00
extern unsigned char DataGlobal_AC1E04[77884];  // data: 0xAC1E04
extern unsigned char DataGlobal_AC4604[67644];  // data: 0xAC4604
extern unsigned char DataGlobal_AC4608[67640];  // data: 0xAC4608
extern unsigned char DataGlobal_AC4610[67632];  // data: 0xAC4610
extern unsigned char DataGlobal_AC4618[67624];  // data: 0xAC4618
extern unsigned char DataGlobal_AC4620[67616];  // data: 0xAC4620
extern unsigned char DataGlobal_AC4624[67612];  // data: 0xAC4624
extern unsigned char DataGlobal_AC4628[67608];  // data: 0xAC4628
extern unsigned char DataGlobal_AC4830[67088];  // data: 0xAC4830
extern unsigned char DataGlobal_AC4838[67080];  // data: 0xAC4838
extern unsigned char DataGlobal_AC4880[67008];  // data: 0xAC4880
extern unsigned char DataGlobal_AC4888[67000];  // data: 0xAC4888
extern unsigned char DataGlobal_AC488C[66996];  // data: 0xAC488C
extern unsigned char DataGlobal_AC4890[66992];  // data: 0xAC4890
extern unsigned char DataGlobal_AC4894[66988];  // data: 0xAC4894
extern unsigned char DataGlobal_AC4898[66984];  // data: 0xAC4898
extern unsigned char DataGlobal_AC489C[66980];  // data: 0xAC489C
extern unsigned char DataGlobal_AC48A0[66976];  // data: 0xAC48A0
extern unsigned char DataGlobal_AC48A8[66968];  // data: 0xAC48A8
extern unsigned char DataGlobal_AC48AC[66964];  // data: 0xAC48AC
extern unsigned char DataGlobal_AC48B0[66960];  // data: 0xAC48B0
extern unsigned char DataGlobal_AC48CC[66932];  // data: 0xAC48CC
extern unsigned char DataGlobal_AC48D4[66924];  // data: 0xAC48D4
extern unsigned char DataGlobal_AC48EC[66900];  // data: 0xAC48EC
extern unsigned char DataGlobal_AC48F8[66888];  // data: 0xAC48F8
extern unsigned char DataGlobal_AC4900[66880];  // data: 0xAC4900
extern unsigned char DataGlobal_AC4904[66876];  // data: 0xAC4904
extern unsigned char DataGlobal_AC4908[66872];  // data: 0xAC4908
extern unsigned char DataGlobal_AC490C[66868];  // data: 0xAC490C
extern unsigned char DataGlobal_AC4910[66864];  // data: 0xAC4910
extern unsigned char DataGlobal_AC4914[66860];  // data: 0xAC4914
extern unsigned char DataGlobal_AC4918[66856];  // data: 0xAC4918
extern unsigned char DataGlobal_AC491C[66852];  // data: 0xAC491C
extern unsigned char DataGlobal_AC491D[66851];  // data: 0xAC491D
extern unsigned char DataGlobal_AC4920[66848];  // data: 0xAC4920
extern unsigned char DataGlobal_AC4924[66844];  // data: 0xAC4924
extern unsigned char DataGlobal_AC4928[66840];  // data: 0xAC4928
extern unsigned char DataGlobal_AC4930[66832];  // data: 0xAC4930
extern unsigned char DataGlobal_AC4938[66824];  // data: 0xAC4938
extern unsigned char DataGlobal_AC4940[66816];  // data: 0xAC4940
extern unsigned char DataGlobal_AC4948[66808];  // data: 0xAC4948
extern unsigned char DataGlobal_AC494C[66804];  // data: 0xAC494C
extern unsigned char DataGlobal_AC4950[66800];  // data: 0xAC4950
extern unsigned char DataGlobal_AC4958[66792];  // data: 0xAC4958
extern unsigned char DataGlobal_AC4960[66784];  // data: 0xAC4960
extern unsigned char DataGlobal_AC4968[66776];  // data: 0xAC4968
extern unsigned char DataGlobal_AC4970[66768];  // data: 0xAC4970
extern unsigned char DataGlobal_AC4974[66764];  // data: 0xAC4974
extern unsigned char DataGlobal_AC4978[66760];  // data: 0xAC4978
extern unsigned char DataGlobal_AC497C[66756];  // data: 0xAC497C
extern unsigned char DataGlobal_AC4980[66752];  // data: 0xAC4980
extern unsigned char DataGlobal_AC4988[66744];  // data: 0xAC4988
extern unsigned char DataGlobal_AC4990[66736];  // data: 0xAC4990
extern unsigned char DataGlobal_AC4998[66728];  // data: 0xAC4998
extern unsigned char DataGlobal_AC49A0[66720];  // data: 0xAC49A0
extern unsigned char DataGlobal_AC49A4[66716];  // data: 0xAC49A4
extern unsigned char DataGlobal_AC49A8[66712];  // data: 0xAC49A8
extern unsigned char DataGlobal_AC49AC[66708];  // data: 0xAC49AC
extern unsigned char DataGlobal_AC49B0[66704];  // data: 0xAC49B0
extern unsigned char DataGlobal_AC49B2[66702];  // data: 0xAC49B2
extern unsigned char DataGlobal_AC49B8[66696];  // data: 0xAC49B8
extern unsigned char DataGlobal_AC49C0[66688];  // data: 0xAC49C0
extern unsigned char DataGlobal_AC49C8[66680];  // data: 0xAC49C8
extern unsigned char DataGlobal_AC49D0[66672];  // data: 0xAC49D0
extern unsigned char DataGlobal_AC49D8[66664];  // data: 0xAC49D8
extern unsigned char DataGlobal_AC49DC[66660];  // data: 0xAC49DC
extern unsigned char DataGlobal_AC49E0[66656];  // data: 0xAC49E0
extern unsigned char DataGlobal_AC49E8[66648];  // data: 0xAC49E8
extern unsigned char DataGlobal_AC49F0[66640];  // data: 0xAC49F0
extern unsigned char DataGlobal_AC49F8[66632];  // data: 0xAC49F8
extern unsigned char DataGlobal_AC4A00[66624];  // data: 0xAC4A00
extern unsigned char DataGlobal_AC4A04[66620];  // data: 0xAC4A04
extern unsigned char DataGlobal_AC4A08[66616];  // data: 0xAC4A08
extern unsigned char DataGlobal_AC4A0C[66612];  // data: 0xAC4A0C
extern unsigned char DataGlobal_AC4A10[66608];  // data: 0xAC4A10
extern unsigned char DataGlobal_AC4A18[66600];  // data: 0xAC4A18
extern unsigned char DataGlobal_AC4A20[66592];  // data: 0xAC4A20
extern unsigned char DataGlobal_AC4A28[66584];  // data: 0xAC4A28
extern unsigned char DataGlobal_AC4A2C[66580];  // data: 0xAC4A2C
extern unsigned char DataGlobal_AC4A30[66576];  // data: 0xAC4A30
extern unsigned char DataGlobal_AC4A34[66572];  // data: 0xAC4A34
extern unsigned char DataGlobal_AC4A38[66568];  // data: 0xAC4A38
extern unsigned char DataGlobal_AC4A3A[66566];  // data: 0xAC4A3A
extern unsigned char DataGlobal_AC4A40[66560];  // data: 0xAC4A40
extern unsigned char DataGlobal_AC4A48[66552];  // data: 0xAC4A48
extern unsigned char DataGlobal_AC4A50[66544];  // data: 0xAC4A50
extern unsigned char DataGlobal_AC4A58[66536];  // data: 0xAC4A58
extern unsigned char DataGlobal_AC4A5C[66532];  // data: 0xAC4A5C
extern unsigned char DataGlobal_AC4A60[66528];  // data: 0xAC4A60
extern unsigned char DataGlobal_AC4A68[66520];  // data: 0xAC4A68
extern unsigned char DataGlobal_AC4A70[66512];  // data: 0xAC4A70
extern unsigned char DataGlobal_AC4A78[66504];  // data: 0xAC4A78
extern unsigned char DataGlobal_AC4A80[66496];  // data: 0xAC4A80
extern unsigned char DataGlobal_AC4A84[66492];  // data: 0xAC4A84
extern unsigned char DataGlobal_AC4A88[66488];  // data: 0xAC4A88
extern unsigned char DataGlobal_AC4A8C[66484];  // data: 0xAC4A8C
extern unsigned char DataGlobal_AC4A90[66480];  // data: 0xAC4A90
extern unsigned char DataGlobal_AC4A98[66472];  // data: 0xAC4A98
extern unsigned char DataGlobal_AC4AA0[66464];  // data: 0xAC4AA0
extern unsigned char DataGlobal_AC4AA4[66460];  // data: 0xAC4AA4
extern unsigned char DataGlobal_AC4AA8[66456];  // data: 0xAC4AA8
extern unsigned char DataGlobal_AC4AAC[66452];  // data: 0xAC4AAC
extern unsigned char DataGlobal_AC4AB0[66448];  // data: 0xAC4AB0
extern unsigned char DataGlobal_AC4AB8[66440];  // data: 0xAC4AB8
extern unsigned char DataGlobal_AC4ABC[66436];  // data: 0xAC4ABC
extern unsigned char DataGlobal_AC4AC0[66432];  // data: 0xAC4AC0
extern unsigned char DataGlobal_AC4AC4[66428];  // data: 0xAC4AC4
extern unsigned char DataGlobal_AC4AC8[66424];  // data: 0xAC4AC8
extern unsigned char DataGlobal_AC4ACA[66422];  // data: 0xAC4ACA
extern unsigned char DataGlobal_AC4AD0[66416];  // data: 0xAC4AD0
extern unsigned char DataGlobal_AC4AD8[66408];  // data: 0xAC4AD8
extern unsigned char DataGlobal_AC4AE0[66400];  // data: 0xAC4AE0
extern unsigned char DataGlobal_AC4AE8[66392];  // data: 0xAC4AE8
extern unsigned char DataGlobal_AC4AEC[66388];  // data: 0xAC4AEC
extern unsigned char DataGlobal_AC4AF0[66384];  // data: 0xAC4AF0
extern unsigned char DataGlobal_AC4AF8[66376];  // data: 0xAC4AF8
extern unsigned char DataGlobal_AC4B00[66368];  // data: 0xAC4B00
extern unsigned char DataGlobal_AC4B08[66360];  // data: 0xAC4B08
extern unsigned char DataGlobal_AC4B10[66352];  // data: 0xAC4B10
extern unsigned char DataGlobal_AC4B14[66348];  // data: 0xAC4B14
extern unsigned char DataGlobal_AC4B18[66344];  // data: 0xAC4B18
extern unsigned char DataGlobal_AC4B1C[66340];  // data: 0xAC4B1C
extern unsigned char DataGlobal_AC4B20[66336];  // data: 0xAC4B20
extern unsigned char DataGlobal_AC4B28[66328];  // data: 0xAC4B28
extern unsigned char DataGlobal_AC4B30[66320];  // data: 0xAC4B30
extern unsigned char DataGlobal_AC4B34[66316];  // data: 0xAC4B34
extern unsigned char DataGlobal_AC4B38[66312];  // data: 0xAC4B38
extern unsigned char DataGlobal_AC4B3C[66308];  // data: 0xAC4B3C
extern unsigned char DataGlobal_AC4B3D[66307];  // data: 0xAC4B3D
extern unsigned char DataGlobal_AC4B40[66304];  // data: 0xAC4B40
extern unsigned char DataGlobal_AC4B44[66300];  // data: 0xAC4B44
extern unsigned char DataGlobal_AC4B48[66296];  // data: 0xAC4B48
extern unsigned char DataGlobal_AC4B4C[66292];  // data: 0xAC4B4C
extern unsigned char DataGlobal_AC4B50[66288];  // data: 0xAC4B50
extern unsigned char DataGlobal_AC4B54[66284];  // data: 0xAC4B54
extern unsigned char DataGlobal_AC4B55[66283];  // data: 0xAC4B55
extern unsigned char DataGlobal_AC4B58[66280];  // data: 0xAC4B58
extern unsigned char DataGlobal_AC4B5C[66276];  // data: 0xAC4B5C
extern unsigned char DataGlobal_AC4B60[66272];  // data: 0xAC4B60
extern unsigned char DataGlobal_AC4B61[66271];  // data: 0xAC4B61
extern unsigned char DataGlobal_AC4B62[66270];  // data: 0xAC4B62
extern unsigned char DataGlobal_AC4B63[66269];  // data: 0xAC4B63
extern unsigned char DataGlobal_AC4B68[66264];  // data: 0xAC4B68
extern unsigned char DataGlobal_AC4B70[66256];  // data: 0xAC4B70
extern unsigned char DataGlobal_AC4B74[66252];  // data: 0xAC4B74
extern unsigned char DataGlobal_AC4B78[66248];  // data: 0xAC4B78
extern unsigned char DataGlobal_AC4B7C[66244];  // data: 0xAC4B7C
extern unsigned char DataGlobal_AC4B80[66240];  // data: 0xAC4B80
extern unsigned char DataGlobal_AC4B84[66236];  // data: 0xAC4B84
extern unsigned char DataGlobal_AC4BE4[66140];  // data: 0xAC4BE4
extern unsigned char DataGlobal_AC4BE6[66138];  // data: 0xAC4BE6
extern unsigned char DataGlobal_AC4BE8[66136];  // data: 0xAC4BE8
extern unsigned char DataGlobal_AC4BF4[66124];  // data: 0xAC4BF4
extern unsigned char DataGlobal_AC4C00[66112];  // data: 0xAC4C00
extern unsigned char DataGlobal_AC4C10[66096];  // data: 0xAC4C10
extern unsigned char DataGlobal_AC4C18[66088];  // data: 0xAC4C18
extern unsigned char DataGlobal_AC4C1C[66084];  // data: 0xAC4C1C
extern unsigned char DataGlobal_AC4C20[66080];  // data: 0xAC4C20
extern unsigned char DataGlobal_AC4C24[66076];  // data: 0xAC4C24
extern unsigned char DataGlobal_AC4C25[66075];  // data: 0xAC4C25
extern unsigned char DataGlobal_AC4C28[66072];  // data: 0xAC4C28
extern unsigned char DataGlobal_AC4C2C[66068];  // data: 0xAC4C2C
extern unsigned char DataGlobal_AC4C30[66064];  // data: 0xAC4C30
extern unsigned char DataGlobal_AC4C3C[66052];  // data: 0xAC4C3C
extern unsigned char DataGlobal_AC4C40[66048];  // data: 0xAC4C40
extern unsigned char DataGlobal_AC4C44[66044];  // data: 0xAC4C44
extern unsigned char DataGlobal_AC4C48[66040];  // data: 0xAC4C48
extern unsigned char DataGlobal_AC4C4C[66036];  // data: 0xAC4C4C
extern unsigned char DataGlobal_AC4C4D[66035];  // data: 0xAC4C4D
extern unsigned char DataGlobal_AC4C50[66032];  // data: 0xAC4C50
extern unsigned char DataGlobal_AC4C54[66028];  // data: 0xAC4C54
extern unsigned char DataGlobal_AC4C58[66024];  // data: 0xAC4C58
extern unsigned char DataGlobal_AC4C5C[66020];  // data: 0xAC4C5C
extern unsigned char DataGlobal_AC4C60[66016];  // data: 0xAC4C60
extern unsigned char DataGlobal_AC4C68[66008];  // data: 0xAC4C68
extern unsigned char DataGlobal_AC4C6C[66004];  // data: 0xAC4C6C
extern unsigned char DataGlobal_AC4C70[66000];  // data: 0xAC4C70
extern unsigned char DataGlobal_AC4C78[65992];  // data: 0xAC4C78
extern unsigned char DataGlobal_AC4C7C[65988];  // data: 0xAC4C7C
extern unsigned char DataGlobal_AC4C80[65984];  // data: 0xAC4C80
extern unsigned char DataGlobal_AC4C84[65980];  // data: 0xAC4C84
extern unsigned char DataGlobal_AC4C85[65979];  // data: 0xAC4C85
extern unsigned char DataGlobal_AC4C88[65976];  // data: 0xAC4C88
extern unsigned char DataGlobal_AC4C8C[65972];  // data: 0xAC4C8C
extern unsigned char DataGlobal_AC4C90[65968];  // data: 0xAC4C90
extern unsigned char DataGlobal_AC4C9C[65956];  // data: 0xAC4C9C
extern unsigned char DataGlobal_AC4CA0[65952];  // data: 0xAC4CA0
extern unsigned char DataGlobal_AC4CA4[65948];  // data: 0xAC4CA4
extern unsigned char DataGlobal_AC4CA5[65947];  // data: 0xAC4CA5
extern unsigned char DataGlobal_AC4CA8[65944];  // data: 0xAC4CA8
extern unsigned char DataGlobal_AC4CAC[65940];  // data: 0xAC4CAC
extern unsigned char DataGlobal_AC4CB0[65936];  // data: 0xAC4CB0
extern unsigned char DataGlobal_AC4CB8[65928];  // data: 0xAC4CB8
extern unsigned char DataGlobal_AC4CC0[65920];  // data: 0xAC4CC0
extern unsigned char DataGlobal_AC4CC8[65912];  // data: 0xAC4CC8
extern unsigned char DataGlobal_AC4CD0[65904];  // data: 0xAC4CD0
extern unsigned char DataGlobal_AC4CD8[65896];  // data: 0xAC4CD8
extern unsigned char DataGlobal_AC4CDC[65892];  // data: 0xAC4CDC
extern unsigned char DataGlobal_AC4CE0[65888];  // data: 0xAC4CE0
extern unsigned char DataGlobal_AC4CE4[65884];  // data: 0xAC4CE4
extern unsigned char DataGlobal_AC4CE8[65880];  // data: 0xAC4CE8
extern unsigned char DataGlobal_AC4CF0[65872];  // data: 0xAC4CF0
extern unsigned char DataGlobal_AC4CF4[65868];  // data: 0xAC4CF4
extern unsigned char DataGlobal_AC4CF5[65867];  // data: 0xAC4CF5
extern unsigned char DataGlobal_AC4CF8[65864];  // data: 0xAC4CF8
extern unsigned char DataGlobal_AC4D00[65856];  // data: 0xAC4D00
extern unsigned char DataGlobal_AC4D04[65852];  // data: 0xAC4D04
extern unsigned char DataGlobal_AC4D08[65848];  // data: 0xAC4D08
extern unsigned char DataGlobal_AC4D0C[65844];  // data: 0xAC4D0C
extern unsigned char DataGlobal_AC4D10[65840];  // data: 0xAC4D10
extern unsigned char DataGlobal_AC4D12[65838];  // data: 0xAC4D12
extern unsigned char DataGlobal_AC4D18[65832];  // data: 0xAC4D18
extern unsigned char DataGlobal_AC4D20[65824];  // data: 0xAC4D20
extern unsigned char DataGlobal_AC4D28[65816];  // data: 0xAC4D28
extern unsigned char DataGlobal_AC4E30[65552];  // data: 0xAC4E30
extern unsigned char DataGlobal_AC4E34[65548];  // data: 0xAC4E34
extern unsigned char DataGlobal_AC4E38[65544];  // data: 0xAC4E38
extern unsigned char DataGlobal_AC4E40[65536];  // data: 0xAC4E40
extern unsigned char DataGlobal_AC4E48[65528];  // data: 0xAC4E48
extern unsigned char DataGlobal_AC4E50[65520];  // data: 0xAC4E50
extern unsigned char DataGlobal_AC4E58[65512];  // data: 0xAC4E58
extern unsigned char DataGlobal_AC4E5C[65508];  // data: 0xAC4E5C
extern unsigned char DataGlobal_AC4E60[65504];  // data: 0xAC4E60
extern unsigned char DataGlobal_AC4E64[65500];  // data: 0xAC4E64
extern unsigned char DataGlobal_AC4E68[65496];  // data: 0xAC4E68
extern unsigned char DataGlobal_AC4E70[65488];  // data: 0xAC4E70
extern unsigned char DataGlobal_AC4E74[65484];  // data: 0xAC4E74
extern unsigned char DataGlobal_AC4E78[65480];  // data: 0xAC4E78
extern unsigned char DataGlobal_AC4E88[65464];  // data: 0xAC4E88
extern unsigned char DataGlobal_AC4E98[65448];  // data: 0xAC4E98
extern unsigned char DataGlobal_AC4E9C[65444];  // data: 0xAC4E9C
extern unsigned char DataGlobal_AC4EA0[65440];  // data: 0xAC4EA0
extern unsigned char DataGlobal_AC4EA4[65436];  // data: 0xAC4EA4
extern unsigned char DataGlobal_AC4EA8[65432];  // data: 0xAC4EA8
extern unsigned char DataGlobal_AC4EAA[65430];  // data: 0xAC4EAA
extern unsigned char DataGlobal_AC4EB0[65424];  // data: 0xAC4EB0
extern unsigned char DataGlobal_AC4EB8[65416];  // data: 0xAC4EB8
extern unsigned char DataGlobal_AC4EC0[65408];  // data: 0xAC4EC0
extern unsigned char DataGlobal_AC4EC8[65400];  // data: 0xAC4EC8
extern unsigned char DataGlobal_AC4ECC[65396];  // data: 0xAC4ECC
extern unsigned char DataGlobal_AC4ED0[65392];  // data: 0xAC4ED0
extern unsigned char DataGlobal_AC4ED8[65384];  // data: 0xAC4ED8
extern unsigned char DataGlobal_AC4EE0[65376];  // data: 0xAC4EE0
extern unsigned char DataGlobal_AC4EE8[65368];  // data: 0xAC4EE8
extern unsigned char DataGlobal_AC4EF0[65360];  // data: 0xAC4EF0
extern unsigned char DataGlobal_AC4EF4[65356];  // data: 0xAC4EF4
extern unsigned char DataGlobal_AC4EF8[65352];  // data: 0xAC4EF8
extern unsigned char DataGlobal_AC4EFC[65348];  // data: 0xAC4EFC
extern unsigned char DataGlobal_AC4F00[65344];  // data: 0xAC4F00
extern unsigned char DataGlobal_AC4F08[65336];  // data: 0xAC4F08
extern unsigned char DataGlobal_AC4F10[65328];  // data: 0xAC4F10
extern unsigned char DataGlobal_AC4F18[65320];  // data: 0xAC4F18
extern unsigned char DataGlobal_AC4F1C[65316];  // data: 0xAC4F1C
extern unsigned char DataGlobal_AC4F20[65312];  // data: 0xAC4F20
extern unsigned char DataGlobal_AC4F24[65308];  // data: 0xAC4F24
extern unsigned char DataGlobal_AC4F28[65304];  // data: 0xAC4F28
extern unsigned char DataGlobal_AC4F2A[65302];  // data: 0xAC4F2A
extern unsigned char DataGlobal_AC4F30[65296];  // data: 0xAC4F30
extern unsigned char DataGlobal_AC4F38[65288];  // data: 0xAC4F38
extern unsigned char DataGlobal_AC4F40[65280];  // data: 0xAC4F40
extern unsigned char DataGlobal_AC4F48[65272];  // data: 0xAC4F48
extern unsigned char DataGlobal_AC4F4C[65268];  // data: 0xAC4F4C
extern unsigned char DataGlobal_AC4F50[65264];  // data: 0xAC4F50
extern unsigned char DataGlobal_AC4FAC[65172];  // data: 0xAC4FAC
extern unsigned char DataGlobal_AC4FB0[65168];  // data: 0xAC4FB0
extern unsigned char DataGlobal_AC4FE0[65120];  // data: 0xAC4FE0
extern unsigned char DataGlobal_AC4FE8[65112];  // data: 0xAC4FE8
extern unsigned char DataGlobal_AC4FF0[65104];  // data: 0xAC4FF0
extern unsigned char DataGlobal_AC4FF8[65096];  // data: 0xAC4FF8
extern unsigned char DataGlobal_AC4FFC[65092];  // data: 0xAC4FFC
extern unsigned char DataGlobal_AC5000[65088];  // data: 0xAC5000
extern unsigned char DataGlobal_AC5004[65084];  // data: 0xAC5004
extern unsigned char DataGlobal_AC5008[65080];  // data: 0xAC5008
extern unsigned char DataGlobal_AC5010[65072];  // data: 0xAC5010
extern unsigned char DataGlobal_AC5018[65064];  // data: 0xAC5018
extern unsigned char DataGlobal_AC5020[65056];  // data: 0xAC5020
extern unsigned char DataGlobal_AC5022[65054];  // data: 0xAC5022
extern unsigned char DataGlobal_AC5028[65048];  // data: 0xAC5028
extern unsigned char DataGlobal_AC5030[65040];  // data: 0xAC5030
extern unsigned char DataGlobal_AC5038[65032];  // data: 0xAC5038
extern unsigned char DataGlobal_AC5040[65024];  // data: 0xAC5040
extern unsigned char DataGlobal_AC5044[65020];  // data: 0xAC5044
extern unsigned char DataGlobal_AC5048[65016];  // data: 0xAC5048
extern unsigned char DataGlobal_AC5050[65008];  // data: 0xAC5050
extern unsigned char DataGlobal_AC5058[65000];  // data: 0xAC5058
extern unsigned char DataGlobal_AC5060[64992];  // data: 0xAC5060
extern unsigned char DataGlobal_AC5068[64984];  // data: 0xAC5068
extern unsigned char DataGlobal_AC506C[64980];  // data: 0xAC506C
extern unsigned char DataGlobal_AC5070[64976];  // data: 0xAC5070
extern unsigned char DataGlobal_AC5074[64972];  // data: 0xAC5074
extern unsigned char DataGlobal_AC5078[64968];  // data: 0xAC5078
extern unsigned char DataGlobal_AC5080[64960];  // data: 0xAC5080
extern unsigned char DataGlobal_AC5088[64952];  // data: 0xAC5088
extern unsigned char DataGlobal_AC5090[64944];  // data: 0xAC5090
extern unsigned char DataGlobal_AC5092[64942];  // data: 0xAC5092
extern unsigned char DataGlobal_AC5098[64936];  // data: 0xAC5098
extern unsigned char DataGlobal_AC50A0[64928];  // data: 0xAC50A0
extern unsigned char DataGlobal_AC50A8[64920];  // data: 0xAC50A8
extern unsigned char DataGlobal_AC50B0[64912];  // data: 0xAC50B0
extern unsigned char DataGlobal_AC50B4[64908];  // data: 0xAC50B4
extern unsigned char DataGlobal_AC50B8[64904];  // data: 0xAC50B8
extern unsigned char DataGlobal_AC50C0[64896];  // data: 0xAC50C0
extern unsigned char DataGlobal_AC50C8[64888];  // data: 0xAC50C8
extern unsigned char DataGlobal_AC50D0[64880];  // data: 0xAC50D0
extern unsigned char DataGlobal_AC50D8[64872];  // data: 0xAC50D8
extern unsigned char DataGlobal_AC50DC[64868];  // data: 0xAC50DC
extern unsigned char DataGlobal_AC50E0[64864];  // data: 0xAC50E0
extern unsigned char DataGlobal_AC50E4[64860];  // data: 0xAC50E4
extern unsigned char DataGlobal_AC50E8[64856];  // data: 0xAC50E8
extern unsigned char DataGlobal_AC50F0[64848];  // data: 0xAC50F0
extern unsigned char DataGlobal_AC50F8[64840];  // data: 0xAC50F8
extern unsigned char DataGlobal_AC50FC[64836];  // data: 0xAC50FC
extern unsigned char DataGlobal_AC5200[64576];  // data: 0xAC5200
extern unsigned char DataGlobal_AC5208[64568];  // data: 0xAC5208
extern unsigned char DataGlobal_AC5210[64560];  // data: 0xAC5210
extern unsigned char DataGlobal_AC5230[64528];  // data: 0xAC5230
extern unsigned char DataGlobal_AC5235[64523];  // data: 0xAC5235
extern unsigned char DataGlobal_AC6630[59408];  // data: 0xAC6630
extern unsigned char DataGlobal_AC6634[59404];  // data: 0xAC6634
extern unsigned char DataGlobal_AC6638[59400];  // data: 0xAC6638
extern unsigned char DataGlobal_AC663C[59396];  // data: 0xAC663C
extern unsigned char DataGlobal_AC6640[59392];  // data: 0xAC6640
extern unsigned char DataGlobal_AC6648[59384];  // data: 0xAC6648
extern unsigned char DataGlobal_AC6650[59376];  // data: 0xAC6650
extern unsigned char DataGlobal_AFA280[4];  // data: 0xAFA280
extern unsigned char DataGlobal_AFA360[4];  // data: 0xAFA360
extern unsigned char DataGlobal_AFA468[4];  // data: 0xAFA468
extern unsigned char DataGlobal_AFA46D[4];  // data: 0xAFA46D
extern unsigned char DataGlobal_B04878;  // data: 0xB04878
extern unsigned char DataGlobal_B04880;  // data: 0xB04880
extern unsigned char DataGlobal_B0488C;  // data: 0xB0488C
extern unsigned char DataGlobal_B0488D;  // data: 0xB0488D
extern unsigned char DataGlobal_B048A8;  // data: 0xB048A8
extern unsigned char DataGlobal_B048F8[380];  // data: 0xB048F8
extern unsigned char DataGlobal_B048F9[379];  // data: 0xB048F9
extern unsigned char DataGlobal_B04900[372];  // data: 0xB04900
extern unsigned char DataGlobal_B04904[368];  // data: 0xB04904
extern unsigned char DataGlobal_B04908[364];  // data: 0xB04908
extern unsigned char DataGlobal_B04910[356];  // data: 0xB04910
extern unsigned char DataGlobal_B04930[324];  // data: 0xB04930
extern unsigned char DataGlobal_B04934[320];  // data: 0xB04934
extern unsigned char DataGlobal_B0493D[311];  // data: 0xB0493D
extern unsigned char DataGlobal_B04940[308];  // data: 0xB04940
extern unsigned char DataGlobal_B0495C[280];  // data: 0xB0495C
extern unsigned char DataGlobal_B04960[276];  // data: 0xB04960
extern unsigned char DataGlobal_B04970[260];  // data: 0xB04970
extern unsigned char DataGlobal_B04978[252];  // data: 0xB04978
extern unsigned char DataGlobal_B04998[220];  // data: 0xB04998
extern unsigned char DataGlobal_B0499C[216];  // data: 0xB0499C
extern unsigned char DataGlobal_B049A5[207];  // data: 0xB049A5
extern unsigned char DataGlobal_B049A8[204];  // data: 0xB049A8
extern unsigned char DataGlobal_B049C4[176];  // data: 0xB049C4
extern unsigned char DataGlobal_B049C8[172];  // data: 0xB049C8
extern unsigned char DataGlobal_B049D8[156];  // data: 0xB049D8
extern unsigned char DataGlobal_B049E0[148];  // data: 0xB049E0
extern unsigned char DataGlobal_B049E8[140];  // data: 0xB049E8
extern unsigned char DataGlobal_B049EC[136];  // data: 0xB049EC
extern unsigned char DataGlobal_B049F0[132];  // data: 0xB049F0
extern unsigned char DataGlobal_B049F4[128];  // data: 0xB049F4
extern unsigned char DataGlobal_B049F8[124];  // data: 0xB049F8
extern unsigned char DataGlobal_B04A00[116];  // data: 0xB04A00
extern unsigned char DataGlobal_B04A04[112];  // data: 0xB04A04
extern unsigned char DataGlobal_B04A08[108];  // data: 0xB04A08
extern unsigned char DataGlobal_B04A0C[104];  // data: 0xB04A0C
extern unsigned char DataGlobal_B04A10[100];  // data: 0xB04A10
extern unsigned char DataGlobal_B04A1C[88];  // data: 0xB04A1C
extern unsigned char DataGlobal_B04A20[84];  // data: 0xB04A20
extern unsigned char DataGlobal_B04A24[80];  // data: 0xB04A24
extern unsigned char DataGlobal_B04A28[76];  // data: 0xB04A28
extern unsigned char DataGlobal_B04A30[68];  // data: 0xB04A30
extern unsigned char DataGlobal_B04A34[64];  // data: 0xB04A34
extern unsigned char DataGlobal_B04A38[60];  // data: 0xB04A38
extern unsigned char DataGlobal_B04A40[52];  // data: 0xB04A40
extern unsigned char DataGlobal_B04A48[44];  // data: 0xB04A48
extern unsigned char DataGlobal_B04A4C[40];  // data: 0xB04A4C
extern unsigned char DataGlobal_B04A50[36];  // data: 0xB04A50
extern unsigned char DataGlobal_B04A54[32];  // data: 0xB04A54
extern unsigned char DataGlobal_B04A58[28];  // data: 0xB04A58
extern unsigned char DataGlobal_B04A5A[26];  // data: 0xB04A5A
extern unsigned char DataGlobal_B04A64[16];  // data: 0xB04A64
extern unsigned char DataGlobal_B04A68[12];  // data: 0xB04A68
extern unsigned char DataGlobal_B04A6C[8];  // data: 0xB04A6C
extern unsigned char DataGlobal_B04A6D[7];  // data: 0xB04A6D
extern unsigned char DataGlobal_B04A70[4];  // data: 0xB04A70
extern unsigned char DataGlobal_B04A74[4];  // data: 0xB04A74
extern unsigned char DataGlobal_B04BDC;  // data: 0xB04BDC
extern unsigned char DataGlobal_B04BDD;  // data: 0xB04BDD
extern unsigned char DataGlobal_B04BEC;  // data: 0xB04BEC
extern unsigned char DataGlobal_B04D28;  // data: 0xB04D28
extern unsigned char DataGlobal_B04DB4;  // data: 0xB04DB4
extern unsigned char DataGlobal_B04DB5;  // data: 0xB04DB5
extern unsigned char DataGlobal_B052A8;  // data: 0xB052A8
extern unsigned char DataGlobal_B052C0[16];  // data: 0xB052C0
extern unsigned char DataGlobal_B052DC;  // data: 0xB052DC
extern unsigned char DataGlobal_B052DD;  // data: 0xB052DD
extern unsigned char DataGlobal_B052E8;  // data: 0xB052E8
extern unsigned char DataGlobal_B053B8;  // data: 0xB053B8
extern unsigned char DataGlobal_B05488[90160];  // data: 0xB05488
extern unsigned char DataGlobal_B0548C[90156];  // data: 0xB0548C
extern unsigned char DataGlobal_B05490[90152];  // data: 0xB05490
extern unsigned char DataGlobal_B05498[90144];  // data: 0xB05498
extern unsigned char DataGlobal_B054A0[90136];  // data: 0xB054A0
extern unsigned char DataGlobal_B054A8[90128];  // data: 0xB054A8
extern unsigned char DataGlobal_B054B0[90120];  // data: 0xB054B0
extern unsigned char DataGlobal_B054B4[90116];  // data: 0xB054B4
extern unsigned char DataGlobal_B054B8[90112];  // data: 0xB054B8
extern unsigned char DataGlobal_B054BC[90108];  // data: 0xB054BC
extern unsigned char DataGlobal_B054C0[90104];  // data: 0xB054C0
extern unsigned char DataGlobal_B054C8[90096];  // data: 0xB054C8
extern unsigned char DataGlobal_B054CC[90092];  // data: 0xB054CC
extern unsigned char DataGlobal_B054D8[90080];  // data: 0xB054D8
extern unsigned char DataGlobal_B054DC[90076];  // data: 0xB054DC
extern unsigned char DataGlobal_B054DD[90075];  // data: 0xB054DD
extern unsigned char DataGlobal_B054E4[90068];  // data: 0xB054E4
extern unsigned char DataGlobal_B054E8[90064];  // data: 0xB054E8
extern unsigned char DataGlobal_B054F8[90048];  // data: 0xB054F8
extern unsigned char DataGlobal_B054FC[90044];  // data: 0xB054FC
extern unsigned char DataGlobal_B05500[90040];  // data: 0xB05500
extern unsigned char DataGlobal_B05504[90036];  // data: 0xB05504
extern unsigned char DataGlobal_B05508[90032];  // data: 0xB05508
extern unsigned char DataGlobal_B0550A[90030];  // data: 0xB0550A
extern unsigned char DataGlobal_B05510[90024];  // data: 0xB05510
extern unsigned char DataGlobal_B05518[90016];  // data: 0xB05518
extern unsigned char DataGlobal_B05520[90008];  // data: 0xB05520
extern unsigned char DataGlobal_B05538[89984];  // data: 0xB05538
extern unsigned char DataGlobal_B0553C[89980];  // data: 0xB0553C
extern unsigned char DataGlobal_B05540[89976];  // data: 0xB05540
extern unsigned char DataGlobal_B05548[89968];  // data: 0xB05548
extern unsigned char DataGlobal_B05550[89960];  // data: 0xB05550
extern unsigned char DataGlobal_B05558[89952];  // data: 0xB05558
extern unsigned char DataGlobal_B05568[89936];  // data: 0xB05568
extern unsigned char DataGlobal_B0556C[89932];  // data: 0xB0556C
extern unsigned char DataGlobal_B05570[89928];  // data: 0xB05570
extern unsigned char DataGlobal_B05574[89924];  // data: 0xB05574
extern unsigned char DataGlobal_B05578[89920];  // data: 0xB05578
extern unsigned char DataGlobal_B05580[89912];  // data: 0xB05580
extern unsigned char DataGlobal_B05584[89908];  // data: 0xB05584
extern unsigned char DataGlobal_B0558C[89900];  // data: 0xB0558C
extern unsigned char DataGlobal_B05594[89892];  // data: 0xB05594
extern unsigned char DataGlobal_B055A8[89872];  // data: 0xB055A8
extern unsigned char DataGlobal_B055B0[89864];  // data: 0xB055B0
extern unsigned char DataGlobal_B055B4[89860];  // data: 0xB055B4
extern unsigned char DataGlobal_B055B8[89856];  // data: 0xB055B8
extern unsigned char DataGlobal_B055BC[89852];  // data: 0xB055BC
extern unsigned char DataGlobal_B055C0[89848];  // data: 0xB055C0
extern unsigned char DataGlobal_B055C2[89846];  // data: 0xB055C2
extern unsigned char DataGlobal_B055C8[89840];  // data: 0xB055C8
extern unsigned char DataGlobal_B055D0[89832];  // data: 0xB055D0
extern unsigned char DataGlobal_B055D8[89824];  // data: 0xB055D8
extern unsigned char DataGlobal_B055E0[89816];  // data: 0xB055E0
extern unsigned char DataGlobal_B055E4[89812];  // data: 0xB055E4
extern unsigned char DataGlobal_B055E8[89808];  // data: 0xB055E8
extern unsigned char DataGlobal_B055F0[89800];  // data: 0xB055F0
extern unsigned char DataGlobal_B055F8[89792];  // data: 0xB055F8
extern unsigned char DataGlobal_B05600[89784];  // data: 0xB05600
extern unsigned char DataGlobal_B05608[89776];  // data: 0xB05608
extern unsigned char DataGlobal_B0560C[89772];  // data: 0xB0560C
extern unsigned char DataGlobal_B05610[89768];  // data: 0xB05610
extern unsigned char DataGlobal_B05614[89764];  // data: 0xB05614
extern unsigned char DataGlobal_B05618[89760];  // data: 0xB05618
extern unsigned char DataGlobal_B05620[89752];  // data: 0xB05620
extern unsigned char DataGlobal_B05629[89743];  // data: 0xB05629
extern unsigned char DataGlobal_B05630[89736];  // data: 0xB05630
extern unsigned char DataGlobal_B05638[89728];  // data: 0xB05638
extern unsigned char DataGlobal_B05640[89720];  // data: 0xB05640
extern unsigned char DataGlobal_B05648[89712];  // data: 0xB05648
extern unsigned char DataGlobal_B0564C[89708];  // data: 0xB0564C
extern unsigned char DataGlobal_B05650[89704];  // data: 0xB05650
extern unsigned char DataGlobal_B05654[89700];  // data: 0xB05654
extern unsigned char DataGlobal_B05658[89696];  // data: 0xB05658
extern unsigned char DataGlobal_B05660[89688];  // data: 0xB05660
extern unsigned char DataGlobal_B05668[89680];  // data: 0xB05668
extern unsigned char DataGlobal_B05670[89672];  // data: 0xB05670
extern unsigned char DataGlobal_B05678[89664];  // data: 0xB05678
extern unsigned char DataGlobal_B0567C[89660];  // data: 0xB0567C
extern unsigned char DataGlobal_B05680[89656];  // data: 0xB05680
extern unsigned char DataGlobal_B05688[89648];  // data: 0xB05688
extern unsigned char DataGlobal_B05698[89632];  // data: 0xB05698
extern unsigned char DataGlobal_B056A0[89624];  // data: 0xB056A0
extern unsigned char DataGlobal_B056A8[89616];  // data: 0xB056A8
extern unsigned char DataGlobal_B056AC[89612];  // data: 0xB056AC
extern unsigned char DataGlobal_B056B0[89608];  // data: 0xB056B0
extern unsigned char DataGlobal_B056B4[89604];  // data: 0xB056B4
extern unsigned char DataGlobal_B056B8[89600];  // data: 0xB056B8
extern unsigned char DataGlobal_B056C0[89592];  // data: 0xB056C0
extern unsigned char DataGlobal_B056C8[89584];  // data: 0xB056C8
extern unsigned char DataGlobal_B056D0[89576];  // data: 0xB056D0
extern unsigned char DataGlobal_B056D4[89572];  // data: 0xB056D4
extern unsigned char DataGlobal_B056D8[89568];  // data: 0xB056D8
extern unsigned char DataGlobal_B056DC[89564];  // data: 0xB056DC
extern unsigned char DataGlobal_B056E0[89560];  // data: 0xB056E0
extern unsigned char DataGlobal_B056E2[89558];  // data: 0xB056E2
extern unsigned char DataGlobal_B056E8[89552];  // data: 0xB056E8
extern unsigned char DataGlobal_B056F0[89544];  // data: 0xB056F0
extern unsigned char DataGlobal_B056F8[89536];  // data: 0xB056F8
extern unsigned char DataGlobal_B05700[89528];  // data: 0xB05700
extern unsigned char DataGlobal_B05704[89524];  // data: 0xB05704
extern unsigned char DataGlobal_B05708[89520];  // data: 0xB05708
extern unsigned char DataGlobal_B05710[89512];  // data: 0xB05710
extern unsigned char DataGlobal_B05718[89504];  // data: 0xB05718
extern unsigned char DataGlobal_B05720[89496];  // data: 0xB05720
extern unsigned char DataGlobal_B05728[89488];  // data: 0xB05728
extern unsigned char DataGlobal_B0572C[89484];  // data: 0xB0572C
extern unsigned char DataGlobal_B05730[89480];  // data: 0xB05730
extern unsigned char DataGlobal_B05734[89476];  // data: 0xB05734
extern unsigned char DataGlobal_B05738[89472];  // data: 0xB05738
extern unsigned char DataGlobal_B05740[89464];  // data: 0xB05740
extern unsigned char DataGlobal_B05748[89456];  // data: 0xB05748
extern unsigned char DataGlobal_B05750[89448];  // data: 0xB05750
extern unsigned char DataGlobal_B05754[89444];  // data: 0xB05754
extern unsigned char DataGlobal_B05758[89440];  // data: 0xB05758
extern unsigned char DataGlobal_B0575C[89436];  // data: 0xB0575C
extern unsigned char DataGlobal_B05760[89432];  // data: 0xB05760
extern unsigned char DataGlobal_B05762[89430];  // data: 0xB05762
extern unsigned char DataGlobal_B05768[89424];  // data: 0xB05768
extern unsigned char DataGlobal_B05770[89416];  // data: 0xB05770
extern unsigned char DataGlobal_B05778[89408];  // data: 0xB05778
extern unsigned char DataGlobal_B05780[89400];  // data: 0xB05780
extern unsigned char DataGlobal_B05784[89396];  // data: 0xB05784
extern unsigned char DataGlobal_B05788[89392];  // data: 0xB05788
extern unsigned char DataGlobal_B05790[89384];  // data: 0xB05790
extern unsigned char DataGlobal_B05798[89376];  // data: 0xB05798
extern unsigned char DataGlobal_B057A0[89368];  // data: 0xB057A0
extern unsigned char DataGlobal_B057A8[89360];  // data: 0xB057A8
extern unsigned char DataGlobal_B057AC[89356];  // data: 0xB057AC
extern unsigned char DataGlobal_B057B0[89352];  // data: 0xB057B0
extern unsigned char DataGlobal_B057B4[89348];  // data: 0xB057B4
extern unsigned char DataGlobal_B057B8[89344];  // data: 0xB057B8
extern unsigned char DataGlobal_B057C0[89336];  // data: 0xB057C0
extern unsigned char DataGlobal_B057C8[89328];  // data: 0xB057C8
extern unsigned char DataGlobal_B057D0[89320];  // data: 0xB057D0
extern unsigned char DataGlobal_B057D4[89316];  // data: 0xB057D4
extern unsigned char DataGlobal_B057D8[89312];  // data: 0xB057D8
extern unsigned char DataGlobal_B057DC[89308];  // data: 0xB057DC
extern unsigned char DataGlobal_B057E0[89304];  // data: 0xB057E0
extern unsigned char DataGlobal_B057E2[89302];  // data: 0xB057E2
extern unsigned char DataGlobal_B057E8[89296];  // data: 0xB057E8
extern unsigned char DataGlobal_B057F0[89288];  // data: 0xB057F0
extern unsigned char DataGlobal_B057F8[89280];  // data: 0xB057F8
extern unsigned char DataGlobal_B07740[81272];  // data: 0xB07740
extern unsigned char DataGlobal_B07744[81268];  // data: 0xB07744
extern unsigned char DataGlobal_B07748[81264];  // data: 0xB07748
extern unsigned char DataGlobal_B07750[81256];  // data: 0xB07750
extern unsigned char DataGlobal_B07758[81248];  // data: 0xB07758
extern unsigned char DataGlobal_B07760[81240];  // data: 0xB07760
extern unsigned char DataGlobal_B07768[81232];  // data: 0xB07768
extern unsigned char DataGlobal_B0776C[81228];  // data: 0xB0776C
extern unsigned char DataGlobal_B07770[81224];  // data: 0xB07770
extern unsigned char DataGlobal_B07774[81220];  // data: 0xB07774
extern unsigned char DataGlobal_B07778[81216];  // data: 0xB07778
extern unsigned char DataGlobal_B07780[81208];  // data: 0xB07780
extern unsigned char DataGlobal_B07784[81204];  // data: 0xB07784
extern unsigned char DataGlobal_B07790[81192];  // data: 0xB07790
extern unsigned char DataGlobal_B07794[81188];  // data: 0xB07794
extern unsigned char DataGlobal_B07798[81184];  // data: 0xB07798
extern unsigned char DataGlobal_B0779C[81180];  // data: 0xB0779C
extern unsigned char DataGlobal_B077A0[81176];  // data: 0xB077A0
extern unsigned char DataGlobal_B077A4[81172];  // data: 0xB077A4
extern unsigned char DataGlobal_B077A8[81168];  // data: 0xB077A8
extern unsigned char DataGlobal_B077AC[81164];  // data: 0xB077AC
extern unsigned char DataGlobal_B077B0[81160];  // data: 0xB077B0
extern unsigned char DataGlobal_B077B4[81156];  // data: 0xB077B4
extern unsigned char DataGlobal_B077B8[81152];  // data: 0xB077B8
extern unsigned char DataGlobal_B077BC[81148];  // data: 0xB077BC
extern unsigned char DataGlobal_B077C0[81144];  // data: 0xB077C0
extern unsigned char DataGlobal_B077C8[81136];  // data: 0xB077C8
extern unsigned char DataGlobal_B077CC[81132];  // data: 0xB077CC
extern unsigned char DataGlobal_B077D0[81128];  // data: 0xB077D0
extern unsigned char DataGlobal_B077D4[81124];  // data: 0xB077D4
extern unsigned char DataGlobal_B077D8[81120];  // data: 0xB077D8
extern unsigned char DataGlobal_B077DA[81118];  // data: 0xB077DA
extern unsigned char DataGlobal_B077E0[81112];  // data: 0xB077E0
extern unsigned char DataGlobal_B077E8[81104];  // data: 0xB077E8
extern unsigned char DataGlobal_B077F0[81096];  // data: 0xB077F0
extern unsigned char DataGlobal_B077FC[81084];  // data: 0xB077FC
extern unsigned char DataGlobal_B07808[81072];  // data: 0xB07808
extern unsigned char DataGlobal_B07810[81064];  // data: 0xB07810
extern unsigned char DataGlobal_B07818[81056];  // data: 0xB07818
extern unsigned char DataGlobal_B07820[81048];  // data: 0xB07820
extern unsigned char DataGlobal_B07824[81044];  // data: 0xB07824
extern unsigned char DataGlobal_B07828[81040];  // data: 0xB07828
extern unsigned char DataGlobal_B0782C[81036];  // data: 0xB0782C
extern unsigned char DataGlobal_B07830[81032];  // data: 0xB07830
extern unsigned char DataGlobal_B07838[81024];  // data: 0xB07838
extern unsigned char DataGlobal_B07840[81016];  // data: 0xB07840
extern unsigned char DataGlobal_B07848[81008];  // data: 0xB07848
extern unsigned char DataGlobal_B0784A[81006];  // data: 0xB0784A
extern unsigned char DataGlobal_B07850[81000];  // data: 0xB07850
extern unsigned char DataGlobal_B07858[80992];  // data: 0xB07858
extern unsigned char DataGlobal_B07860[80984];  // data: 0xB07860
extern unsigned char DataGlobal_B07868[80976];  // data: 0xB07868
extern unsigned char DataGlobal_B0786C[80972];  // data: 0xB0786C
extern unsigned char DataGlobal_B07870[80968];  // data: 0xB07870
extern unsigned char DataGlobal_B07878[80960];  // data: 0xB07878
extern unsigned char DataGlobal_B07880[80952];  // data: 0xB07880
extern unsigned char DataGlobal_B07888[80944];  // data: 0xB07888
extern unsigned char DataGlobal_B07890[80936];  // data: 0xB07890
extern unsigned char DataGlobal_B07894[80932];  // data: 0xB07894
extern unsigned char DataGlobal_B07898[80928];  // data: 0xB07898
extern unsigned char DataGlobal_B0789C[80924];  // data: 0xB0789C
extern unsigned char DataGlobal_B078A0[80920];  // data: 0xB078A0
extern unsigned char DataGlobal_B078A8[80912];  // data: 0xB078A8
extern unsigned char DataGlobal_B07BB0[80136];  // data: 0xB07BB0
extern unsigned char DataGlobal_B07BB1[80135];  // data: 0xB07BB1
extern unsigned char DataGlobal_B07BB8[80128];  // data: 0xB07BB8
extern unsigned char DataGlobal_B07BC0[80120];  // data: 0xB07BC0
extern unsigned char DataGlobal_B07C48[79984];  // data: 0xB07C48
extern unsigned char DataGlobal_B07C58[79968];  // data: 0xB07C58
extern unsigned char DataGlobal_B07C9C[79900];  // data: 0xB07C9C
extern unsigned char DataGlobal_B07DC8[79600];  // data: 0xB07DC8
extern unsigned char DataGlobal_B07DCC[79596];  // data: 0xB07DCC
extern unsigned char DataGlobal_B07DD0[79592];  // data: 0xB07DD0
extern unsigned char DataGlobal_B07DD4[79588];  // data: 0xB07DD4
extern unsigned char DataGlobal_B07DD8[79584];  // data: 0xB07DD8
extern unsigned char DataGlobal_B07DDA[79582];  // data: 0xB07DDA
extern unsigned char DataGlobal_B07DE0[79576];  // data: 0xB07DE0
extern unsigned char DataGlobal_B07DE8[79568];  // data: 0xB07DE8
extern unsigned char DataGlobal_B07DF0[79560];  // data: 0xB07DF0
extern unsigned char DataGlobal_B07DF8[79552];  // data: 0xB07DF8
extern unsigned char DataGlobal_B07E04[79540];  // data: 0xB07E04
extern unsigned char DataGlobal_B07E08[79536];  // data: 0xB07E08
extern unsigned char DataGlobal_B07E0C[79532];  // data: 0xB07E0C
extern unsigned char DataGlobal_B07E10[79528];  // data: 0xB07E10
extern unsigned char DataGlobal_B07E1C[79516];  // data: 0xB07E1C
extern unsigned char DataGlobal_B07E3C[79484];  // data: 0xB07E3C
extern unsigned char DataGlobal_B07E48[79472];  // data: 0xB07E48
extern unsigned char DataGlobal_B07E4C[79468];  // data: 0xB07E4C
extern unsigned char DataGlobal_B07E58[79456];  // data: 0xB07E58
extern unsigned char DataGlobal_B07E80[79416];  // data: 0xB07E80
extern unsigned char DataGlobal_B07E90[79400];  // data: 0xB07E90
extern unsigned char DataGlobal_B0B300[65976];  // data: 0xB0B300
extern unsigned char DataGlobal_B0B304[65972];  // data: 0xB0B304
extern unsigned char DataGlobal_B0B308[65968];  // data: 0xB0B308
extern unsigned char DataGlobal_B0B310[65960];  // data: 0xB0B310
extern unsigned char DataGlobal_B0B318[65952];  // data: 0xB0B318
extern unsigned char DataGlobal_B0B320[65944];  // data: 0xB0B320
extern unsigned char DataGlobal_B0B328[65936];  // data: 0xB0B328
extern unsigned char DataGlobal_B0B334[65924];  // data: 0xB0B334
extern unsigned char DataGlobal_B0B338[65920];  // data: 0xB0B338
extern unsigned char DataGlobal_B0B33C[65916];  // data: 0xB0B33C
extern unsigned char DataGlobal_B0B340[65912];  // data: 0xB0B340
extern unsigned char DataGlobal_B0B36C[65868];  // data: 0xB0B36C
extern unsigned char DataGlobal_B0B378[65856];  // data: 0xB0B378
extern unsigned char DataGlobal_B0B37C[65852];  // data: 0xB0B37C
extern unsigned char DataGlobal_B0B388[65840];  // data: 0xB0B388
extern unsigned char DataGlobal_B0B38C[65836];  // data: 0xB0B38C
extern unsigned char DataGlobal_B0B390[65832];  // data: 0xB0B390
extern unsigned char DataGlobal_B0B394[65828];  // data: 0xB0B394
extern unsigned char DataGlobal_B0B398[65824];  // data: 0xB0B398
extern unsigned char DataGlobal_B0B3A0[65816];  // data: 0xB0B3A0
extern unsigned char DataGlobal_B0B3AC[65804];  // data: 0xB0B3AC
extern unsigned char DataGlobal_B0B3B0[65800];  // data: 0xB0B3B0
extern unsigned char DataGlobal_B0B3B4[65796];  // data: 0xB0B3B4
extern unsigned char DataGlobal_B0B3B8[65792];  // data: 0xB0B3B8
extern unsigned char DataGlobal_B0B3E4[65748];  // data: 0xB0B3E4
extern unsigned char DataGlobal_B0B3F0[65736];  // data: 0xB0B3F0
extern unsigned char DataGlobal_B0B3F4[65732];  // data: 0xB0B3F4
extern unsigned char DataGlobal_B0B400[65720];  // data: 0xB0B400
extern unsigned char DataGlobal_B0B414[65700];  // data: 0xB0B414
extern unsigned char DataGlobal_B0B418[65696];  // data: 0xB0B418
extern unsigned char DataGlobal_B0B41C[65692];  // data: 0xB0B41C
extern unsigned char DataGlobal_B0B420[65688];  // data: 0xB0B420
extern unsigned char DataGlobal_B0B44C[65644];  // data: 0xB0B44C
extern unsigned char DataGlobal_B0B458[65632];  // data: 0xB0B458
extern unsigned char DataGlobal_B0B45C[65628];  // data: 0xB0B45C
extern unsigned char DataGlobal_B0B468[65616];  // data: 0xB0B468
extern unsigned char DataGlobal_B0B46C[65612];  // data: 0xB0B46C
extern unsigned char DataGlobal_B0B470[65608];  // data: 0xB0B470
extern unsigned char DataGlobal_B0B474[65604];  // data: 0xB0B474
extern unsigned char DataGlobal_B0B478[65600];  // data: 0xB0B478
extern unsigned char DataGlobal_B0B47C[65596];  // data: 0xB0B47C
extern unsigned char DataGlobal_B0B480[65592];  // data: 0xB0B480
extern unsigned char DataGlobal_B0B484[65588];  // data: 0xB0B484
extern unsigned char DataGlobal_B0B488[65584];  // data: 0xB0B488
extern unsigned char DataGlobal_B0B489[65583];  // data: 0xB0B489
extern unsigned char DataGlobal_B0B48A[65582];  // data: 0xB0B48A
extern unsigned char DataGlobal_B0B48B[65581];  // data: 0xB0B48B
extern unsigned char DataGlobal_B0B48C[65580];  // data: 0xB0B48C
extern unsigned char DataGlobal_B0B48D[65579];  // data: 0xB0B48D
extern unsigned char DataGlobal_B0B48E[65578];  // data: 0xB0B48E
extern unsigned char DataGlobal_B0B48F[65577];  // data: 0xB0B48F
extern unsigned char DataGlobal_B0B490[65576];  // data: 0xB0B490
extern unsigned char DataGlobal_B0B494[65572];  // data: 0xB0B494
extern unsigned char DataGlobal_B0B498[65568];  // data: 0xB0B498
extern unsigned char DataGlobal_B0B49C[65564];  // data: 0xB0B49C
extern unsigned char DataGlobal_B0B4A0[65560];  // data: 0xB0B4A0
extern unsigned char DataGlobal_B0B4A4[65556];  // data: 0xB0B4A4
extern unsigned char DataGlobal_B0B4A8[65552];  // data: 0xB0B4A8
extern unsigned char DataGlobal_B0B4AC[65548];  // data: 0xB0B4AC
extern unsigned char DataGlobal_B0B4B0[65544];  // data: 0xB0B4B0
extern unsigned char DataGlobal_B0B4B4[65540];  // data: 0xB0B4B4
extern unsigned char DataGlobal_B0B4B8[65536];  // data: 0xB0B4B8
extern unsigned char DataGlobal_B0B4BC[65532];  // data: 0xB0B4BC
extern unsigned char DataGlobal_B0B4C0[65528];  // data: 0xB0B4C0
extern unsigned char DataGlobal_B0B4C4[65524];  // data: 0xB0B4C4
extern unsigned char DataGlobal_B0B4C8[65520];  // data: 0xB0B4C8
extern unsigned char DataGlobal_B0B4CC[65516];  // data: 0xB0B4CC
extern unsigned char DataGlobal_B0B4CD[65515];  // data: 0xB0B4CD
extern unsigned char DataGlobal_B0B4CE[65514];  // data: 0xB0B4CE
extern unsigned char DataGlobal_B0B4CF[65513];  // data: 0xB0B4CF
extern unsigned char DataGlobal_B0B4D0[65512];  // data: 0xB0B4D0
extern unsigned char DataGlobal_B0B4D1[65511];  // data: 0xB0B4D1
extern unsigned char DataGlobal_B0B4D2[65510];  // data: 0xB0B4D2
extern unsigned char DataGlobal_B0B4D3[65509];  // data: 0xB0B4D3
extern unsigned char DataGlobal_B0B4D4[65508];  // data: 0xB0B4D4
extern unsigned char DataGlobal_B0B4D5[65507];  // data: 0xB0B4D5
extern unsigned char DataGlobal_B0B4D6[65506];  // data: 0xB0B4D6
extern unsigned char DataGlobal_B0B4D7[65505];  // data: 0xB0B4D7
extern unsigned char DataGlobal_B0B4D8[65504];  // data: 0xB0B4D8
extern unsigned char DataGlobal_B0B4D9[65503];  // data: 0xB0B4D9
extern unsigned char DataGlobal_B0B4DA[65502];  // data: 0xB0B4DA
extern unsigned char DataGlobal_B0B4DC[65500];  // data: 0xB0B4DC
extern unsigned char DataGlobal_B0B4E0[65496];  // data: 0xB0B4E0
extern unsigned char DataGlobal_B0B4E4[65492];  // data: 0xB0B4E4
extern unsigned char DataGlobal_B0B4E8[65488];  // data: 0xB0B4E8
extern unsigned char DataGlobal_B0B4EC[65484];  // data: 0xB0B4EC
extern unsigned char DataGlobal_B0B4F0[65480];  // data: 0xB0B4F0
extern unsigned char DataGlobal_B0B4F4[65476];  // data: 0xB0B4F4
extern unsigned char DataGlobal_B0B4FC[65468];  // data: 0xB0B4FC
extern unsigned char DataGlobal_B0B500[65464];  // data: 0xB0B500
extern unsigned char DataGlobal_B0B504[65460];  // data: 0xB0B504
extern unsigned char DataGlobal_B0B508[65456];  // data: 0xB0B508
extern unsigned char DataGlobal_B0B50C[65452];  // data: 0xB0B50C
extern unsigned char DataGlobal_B0B510[65448];  // data: 0xB0B510
extern unsigned char DataGlobal_B0B514[65444];  // data: 0xB0B514
extern unsigned char DataGlobal_B0B519[65439];  // data: 0xB0B519
extern unsigned char DataGlobal_B0B520[65432];  // data: 0xB0B520
extern unsigned char DataGlobal_B0B528[65424];  // data: 0xB0B528
extern unsigned char DataGlobal_B0B52C[65420];  // data: 0xB0B52C
extern unsigned char DataGlobal_B0B530[65416];  // data: 0xB0B530
extern unsigned char DataGlobal_B0B534[65412];  // data: 0xB0B534
extern unsigned char DataGlobal_B0B538[65408];  // data: 0xB0B538
extern unsigned char DataGlobal_B0B53A[65406];  // data: 0xB0B53A
extern unsigned char DataGlobal_B0B540[65400];  // data: 0xB0B540
extern unsigned char DataGlobal_B0B548[65392];  // data: 0xB0B548
extern unsigned char DataGlobal_B0B550[65384];  // data: 0xB0B550
extern unsigned char DataGlobal_B0B558[65376];  // data: 0xB0B558
extern unsigned char DataGlobal_B0B55C[65372];  // data: 0xB0B55C
extern unsigned char DataGlobal_B0B560[65368];  // data: 0xB0B560
extern unsigned char DataGlobal_B0B568[65360];  // data: 0xB0B568
extern unsigned char DataGlobal_B0B570[65352];  // data: 0xB0B570
extern unsigned char DataGlobal_B0B578[65344];  // data: 0xB0B578
extern unsigned char DataGlobal_B0B580[65336];  // data: 0xB0B580
extern unsigned char DataGlobal_B0B584[65332];  // data: 0xB0B584
extern unsigned char DataGlobal_B0B588[65328];  // data: 0xB0B588
extern unsigned char DataGlobal_B0B58C[65324];  // data: 0xB0B58C
extern unsigned char DataGlobal_B0B590[65320];  // data: 0xB0B590
extern unsigned char DataGlobal_B0B598[65312];  // data: 0xB0B598
extern unsigned char DataGlobal_B0B59C[65308];  // data: 0xB0B59C
extern unsigned char DataGlobal_B0B5A0[65304];  // data: 0xB0B5A0
extern unsigned char DataGlobal_B0B5A8[65296];  // data: 0xB0B5A8
extern unsigned char DataGlobal_B0B5AC[65292];  // data: 0xB0B5AC
extern unsigned char DataGlobal_B0B5B0[65288];  // data: 0xB0B5B0
extern unsigned char DataGlobal_B0B5B4[65284];  // data: 0xB0B5B4
extern unsigned char DataGlobal_B0B5B8[65280];  // data: 0xB0B5B8
extern unsigned char DataGlobal_B0B5C0[65272];  // data: 0xB0B5C0
extern unsigned char DataGlobal_B0B5C8[65264];  // data: 0xB0B5C8
extern unsigned char DataGlobal_B0B5D0[65256];  // data: 0xB0B5D0
extern unsigned char DataGlobal_B0B5D8[65248];  // data: 0xB0B5D8
extern unsigned char DataGlobal_B0B5DC[65244];  // data: 0xB0B5DC
extern unsigned char DataGlobal_B0B5E0[65240];  // data: 0xB0B5E0
extern unsigned char DataGlobal_B0B5E8[65232];  // data: 0xB0B5E8
extern unsigned char DataGlobal_B0B5F4[65220];  // data: 0xB0B5F4
extern unsigned char DataGlobal_B0B5F8[65216];  // data: 0xB0B5F8
extern unsigned char DataGlobal_B0B5FC[65212];  // data: 0xB0B5FC
extern unsigned char DataGlobal_B0B5FD[65211];  // data: 0xB0B5FD
extern unsigned char DataGlobal_B0B600[65208];  // data: 0xB0B600
extern unsigned char DataGlobal_B0B604[65204];  // data: 0xB0B604
extern unsigned char DataGlobal_B0B608[65200];  // data: 0xB0B608
extern unsigned char DataGlobal_B0B610[65192];  // data: 0xB0B610
extern unsigned char DataGlobal_B0B618[65184];  // data: 0xB0B618
extern unsigned char DataGlobal_B0B61C[65180];  // data: 0xB0B61C
extern unsigned char DataGlobal_B0B620[65176];  // data: 0xB0B620
extern unsigned char DataGlobal_B0B624[65172];  // data: 0xB0B624
extern unsigned char DataGlobal_B0B628[65168];  // data: 0xB0B628
extern unsigned char DataGlobal_B0B630[65160];  // data: 0xB0B630
extern unsigned char DataGlobal_B0B638[65152];  // data: 0xB0B638
extern unsigned char DataGlobal_B0B63C[65148];  // data: 0xB0B63C
extern unsigned char DataGlobal_B0B640[65144];  // data: 0xB0B640
extern unsigned char DataGlobal_B0B644[65140];  // data: 0xB0B644
extern unsigned char DataGlobal_B0B648[65136];  // data: 0xB0B648
extern unsigned char DataGlobal_B0B650[65128];  // data: 0xB0B650
extern unsigned char DataGlobal_B0B654[65124];  // data: 0xB0B654
extern unsigned char DataGlobal_B0B658[65120];  // data: 0xB0B658
extern unsigned char DataGlobal_B0B65C[65116];  // data: 0xB0B65C
extern unsigned char DataGlobal_B0B65D[65115];  // data: 0xB0B65D
extern unsigned char DataGlobal_B0B664[65108];  // data: 0xB0B664
extern unsigned char DataGlobal_B0B668[65104];  // data: 0xB0B668
extern unsigned char DataGlobal_B0B66C[65100];  // data: 0xB0B66C
extern unsigned char DataGlobal_B0B670[65096];  // data: 0xB0B670
extern unsigned char DataGlobal_B0B674[65092];  // data: 0xB0B674
extern unsigned char DataGlobal_B0B678[65088];  // data: 0xB0B678
extern unsigned char DataGlobal_B0B67A[65086];  // data: 0xB0B67A
extern unsigned char DataGlobal_B0B680[65080];  // data: 0xB0B680
extern unsigned char DataGlobal_B0B688[65072];  // data: 0xB0B688
extern unsigned char DataGlobal_B0B690[65064];  // data: 0xB0B690
extern unsigned char DataGlobal_B0B698[65056];  // data: 0xB0B698
extern unsigned char DataGlobal_B0B69C[65052];  // data: 0xB0B69C
extern unsigned char DataGlobal_B0B6A0[65048];  // data: 0xB0B6A0
extern unsigned char DataGlobal_B0B6A8[65040];  // data: 0xB0B6A8
extern unsigned char DataGlobal_B0B6B0[65032];  // data: 0xB0B6B0
extern unsigned char DataGlobal_B0B6B8[65024];  // data: 0xB0B6B8
extern unsigned char DataGlobal_B0B6C0[65016];  // data: 0xB0B6C0
extern unsigned char DataGlobal_B0B6C4[65012];  // data: 0xB0B6C4
extern unsigned char DataGlobal_B0B6C8[65008];  // data: 0xB0B6C8
extern unsigned char DataGlobal_B0B6CC[65004];  // data: 0xB0B6CC
extern unsigned char DataGlobal_B0B6D0[65000];  // data: 0xB0B6D0
extern unsigned char DataGlobal_B0B6D8[64992];  // data: 0xB0B6D8
extern unsigned char DataGlobal_B0B6F0[64968];  // data: 0xB0B6F0
extern unsigned char DataGlobal_B0B6F8[64960];  // data: 0xB0B6F8
extern unsigned char DataGlobal_B0B6FC[64956];  // data: 0xB0B6FC
extern unsigned char DataGlobal_B0B700[64952];  // data: 0xB0B700
extern unsigned char DataGlobal_B0B704[64948];  // data: 0xB0B704
extern unsigned char DataGlobal_B0B708[64944];  // data: 0xB0B708
extern unsigned char DataGlobal_B0B70A[64942];  // data: 0xB0B70A
extern unsigned char DataGlobal_B0B710[64936];  // data: 0xB0B710
extern unsigned char DataGlobal_B0B718[64928];  // data: 0xB0B718
extern unsigned char DataGlobal_B0B720[64920];  // data: 0xB0B720
extern unsigned char DataGlobal_B0B728[64912];  // data: 0xB0B728
extern unsigned char DataGlobal_B0B72C[64908];  // data: 0xB0B72C
extern unsigned char DataGlobal_B0B730[64904];  // data: 0xB0B730
extern unsigned char DataGlobal_B0B738[64896];  // data: 0xB0B738
extern unsigned char DataGlobal_B0B740[64888];  // data: 0xB0B740
extern unsigned char DataGlobal_B0B748[64880];  // data: 0xB0B748
extern unsigned char DataGlobal_B0B750[64872];  // data: 0xB0B750
extern unsigned char DataGlobal_B0B754[64868];  // data: 0xB0B754
extern unsigned char DataGlobal_B0B758[64864];  // data: 0xB0B758
extern unsigned char DataGlobal_B0B75C[64860];  // data: 0xB0B75C
extern unsigned char DataGlobal_B0B760[64856];  // data: 0xB0B760
extern unsigned char DataGlobal_B0B768[64848];  // data: 0xB0B768
extern unsigned char DataGlobal_B0B770[64840];  // data: 0xB0B770
extern unsigned char DataGlobal_B0B778[64832];  // data: 0xB0B778
extern unsigned char DataGlobal_B0B77C[64828];  // data: 0xB0B77C
extern unsigned char DataGlobal_B0B780[64824];  // data: 0xB0B780
extern unsigned char DataGlobal_B0B784[64820];  // data: 0xB0B784
extern unsigned char DataGlobal_B0B790[64808];  // data: 0xB0B790
extern unsigned char DataGlobal_B0B798[64800];  // data: 0xB0B798
extern unsigned char DataGlobal_B0B7A0[64792];  // data: 0xB0B7A0
extern unsigned char DataGlobal_B0B7A8[64784];  // data: 0xB0B7A8
extern unsigned char DataGlobal_B0B7AC[64780];  // data: 0xB0B7AC
extern unsigned char DataGlobal_B0B7B0[64776];  // data: 0xB0B7B0
extern unsigned char DataGlobal_B0B7B8[64768];  // data: 0xB0B7B8
extern unsigned char DataGlobal_B0B7C0[64760];  // data: 0xB0B7C0
extern unsigned char DataGlobal_B0B7C8[64752];  // data: 0xB0B7C8
extern unsigned char DataGlobal_B0B7DC[64732];  // data: 0xB0B7DC
extern unsigned char DataGlobal_B0B7E0[64728];  // data: 0xB0B7E0
extern unsigned char DataGlobal_B0B7E8[64720];  // data: 0xB0B7E8
extern unsigned char DataGlobal_B0B7F0[64712];  // data: 0xB0B7F0
extern unsigned char DataGlobal_B0B7F4[64708];  // data: 0xB0B7F4
extern unsigned char DataGlobal_B0B7F8[64704];  // data: 0xB0B7F8
extern unsigned char DataGlobal_B0B7FC[64700];  // data: 0xB0B7FC
extern unsigned char DataGlobal_B0B800[64696];  // data: 0xB0B800
extern unsigned char DataGlobal_B0B808[64688];  // data: 0xB0B808
extern unsigned char DataGlobal_B0B810[64680];  // data: 0xB0B810
extern unsigned char DataGlobal_B0B814[64676];  // data: 0xB0B814
extern unsigned char DataGlobal_B0B818[64672];  // data: 0xB0B818
extern unsigned char DataGlobal_B0B81C[64668];  // data: 0xB0B81C
extern unsigned char DataGlobal_B0B820[64664];  // data: 0xB0B820
extern unsigned char DataGlobal_B0B822[64662];  // data: 0xB0B822
extern unsigned char DataGlobal_B0B828[64656];  // data: 0xB0B828
extern unsigned char DataGlobal_B0B830[64648];  // data: 0xB0B830
extern unsigned char DataGlobal_B0B838[64640];  // data: 0xB0B838
extern unsigned char DataGlobal_B0B840[64632];  // data: 0xB0B840
extern unsigned char DataGlobal_B0B844[64628];  // data: 0xB0B844
extern unsigned char DataGlobal_B0B848[64624];  // data: 0xB0B848
extern unsigned char DataGlobal_B0B850[64616];  // data: 0xB0B850
extern unsigned char DataGlobal_B0B858[64608];  // data: 0xB0B858
extern unsigned char DataGlobal_B0B860[64600];  // data: 0xB0B860
extern unsigned char DataGlobal_B0B868[64592];  // data: 0xB0B868
extern unsigned char DataGlobal_B0B86C[64588];  // data: 0xB0B86C
extern unsigned char DataGlobal_B0B870[64584];  // data: 0xB0B870
extern unsigned char DataGlobal_B0B874[64580];  // data: 0xB0B874
extern unsigned char DataGlobal_B0B878[64576];  // data: 0xB0B878
extern unsigned char DataGlobal_B0B884[64564];  // data: 0xB0B884
extern unsigned char DataGlobal_B0B888[64560];  // data: 0xB0B888
extern unsigned char DataGlobal_B0B88C[64556];  // data: 0xB0B88C
extern unsigned char DataGlobal_B0B88D[64555];  // data: 0xB0B88D
extern unsigned char DataGlobal_B0B890[64552];  // data: 0xB0B890
extern unsigned char DataGlobal_B0B894[64548];  // data: 0xB0B894
extern unsigned char DataGlobal_B0B898[64544];  // data: 0xB0B898
extern unsigned char DataGlobal_B0B8A0[64536];  // data: 0xB0B8A0
extern unsigned char DataGlobal_B0B8A8[64528];  // data: 0xB0B8A8
extern unsigned char DataGlobal_B0B8AC[64524];  // data: 0xB0B8AC
extern unsigned char DataGlobal_B0B8B0[64520];  // data: 0xB0B8B0
extern unsigned char DataGlobal_B0B8B4[64516];  // data: 0xB0B8B4
extern unsigned char DataGlobal_B0B8B8[64512];  // data: 0xB0B8B8
extern unsigned char DataGlobal_B0B8BA[64510];  // data: 0xB0B8BA
extern unsigned char DataGlobal_B0B8C0[64504];  // data: 0xB0B8C0
extern unsigned char DataGlobal_B0B8C8[64496];  // data: 0xB0B8C8
extern unsigned char DataGlobal_B0B8D0[64488];  // data: 0xB0B8D0
extern unsigned char DataGlobal_B0B8D8[64480];  // data: 0xB0B8D8
extern unsigned char DataGlobal_B0B8DC[64476];  // data: 0xB0B8DC
extern unsigned char DataGlobal_B0B8E0[64472];  // data: 0xB0B8E0
extern unsigned char DataGlobal_B0B8E8[64464];  // data: 0xB0B8E8
extern unsigned char DataGlobal_B0B8F0[64456];  // data: 0xB0B8F0
extern unsigned char DataGlobal_B0B8F8[64448];  // data: 0xB0B8F8
extern unsigned char DataGlobal_B0B900[64440];  // data: 0xB0B900
extern unsigned char DataGlobal_B0B904[64436];  // data: 0xB0B904
extern unsigned char DataGlobal_B0B908[64432];  // data: 0xB0B908
extern unsigned char DataGlobal_B0B90C[64428];  // data: 0xB0B90C
extern unsigned char DataGlobal_B0B910[64424];  // data: 0xB0B910
extern unsigned char DataGlobal_B0B918[64416];  // data: 0xB0B918
extern unsigned char DataGlobal_B0B920[64408];  // data: 0xB0B920
extern unsigned char DataGlobal_B0B924[64404];  // data: 0xB0B924
extern unsigned char DataGlobal_B0B928[64400];  // data: 0xB0B928
extern unsigned char DataGlobal_B0B92C[64396];  // data: 0xB0B92C
extern unsigned char DataGlobal_B0B938[64384];  // data: 0xB0B938
extern unsigned char DataGlobal_B0B93C[64380];  // data: 0xB0B93C
extern unsigned char DataGlobal_B0B940[64376];  // data: 0xB0B940
extern unsigned char DataGlobal_B0B944[64372];  // data: 0xB0B944
extern unsigned char DataGlobal_B0BC50[63592];  // data: 0xB0BC50
extern unsigned char DataGlobal_B0BC58[63584];  // data: 0xB0BC58
extern unsigned char DataGlobal_B0BC5C[63580];  // data: 0xB0BC5C
extern unsigned char DataGlobal_B0BC60[63576];  // data: 0xB0BC60
extern unsigned char DataGlobal_B0BC64[63572];  // data: 0xB0BC64
extern unsigned char DataGlobal_B0BC68[63568];  // data: 0xB0BC68
extern unsigned char DataGlobal_B0BC6A[63566];  // data: 0xB0BC6A
extern unsigned char DataGlobal_B0BC70[63560];  // data: 0xB0BC70
extern unsigned char DataGlobal_B0BC78[63552];  // data: 0xB0BC78
extern unsigned char DataGlobal_B0BC80[63544];  // data: 0xB0BC80
extern unsigned char DataGlobal_B0BC8C[63532];  // data: 0xB0BC8C
extern unsigned char DataGlobal_B0BC94[63524];  // data: 0xB0BC94
extern unsigned char DataGlobal_B0BC95[63523];  // data: 0xB0BC95
extern unsigned char DataGlobal_B0BC98[63520];  // data: 0xB0BC98
extern unsigned char DataGlobal_B0BC9C[63516];  // data: 0xB0BC9C
extern unsigned char DataGlobal_B0BCA0[63512];  // data: 0xB0BCA0
extern unsigned char DataGlobal_B0BCA4[63508];  // data: 0xB0BCA4
extern unsigned char DataGlobal_B0BCA8[63504];  // data: 0xB0BCA8
extern unsigned char DataGlobal_B0BCB0[63496];  // data: 0xB0BCB0
extern unsigned char DataGlobal_B0BCB8[63488];  // data: 0xB0BCB8
extern unsigned char DataGlobal_B0BCC0[63480];  // data: 0xB0BCC0
extern unsigned char DataGlobal_B0BCC8[63472];  // data: 0xB0BCC8
extern unsigned char DataGlobal_B0BCCC[63468];  // data: 0xB0BCCC
extern unsigned char DataGlobal_B0BCD0[63464];  // data: 0xB0BCD0
extern unsigned char DataGlobal_B0BCD4[63460];  // data: 0xB0BCD4
extern unsigned char DataGlobal_B0BCD8[63456];  // data: 0xB0BCD8
extern unsigned char DataGlobal_B0BCE0[63448];  // data: 0xB0BCE0
extern unsigned char DataGlobal_B0BCE4[63444];  // data: 0xB0BCE4
extern unsigned char DataGlobal_B0BCE8[63440];  // data: 0xB0BCE8
extern unsigned char DataGlobal_B0BCF0[63432];  // data: 0xB0BCF0
extern unsigned char DataGlobal_B0BCF4[63428];  // data: 0xB0BCF4
extern unsigned char DataGlobal_B0BCF5[63427];  // data: 0xB0BCF5
extern unsigned char DataGlobal_B0BCF8[63424];  // data: 0xB0BCF8
extern unsigned char DataGlobal_B0BCFC[63420];  // data: 0xB0BCFC
extern unsigned char DataGlobal_B0BD00[63416];  // data: 0xB0BD00
extern unsigned char DataGlobal_B0BD04[63412];  // data: 0xB0BD04
extern unsigned char DataGlobal_B0BD08[63408];  // data: 0xB0BD08
extern unsigned char DataGlobal_B0BD10[63400];  // data: 0xB0BD10
extern unsigned char DataGlobal_B0BD14[63396];  // data: 0xB0BD14
extern unsigned char DataGlobal_B0BD18[63392];  // data: 0xB0BD18
extern unsigned char DataGlobal_B0BD1C[63388];  // data: 0xB0BD1C
extern unsigned char DataGlobal_B0BD20[63384];  // data: 0xB0BD20
extern unsigned char DataGlobal_B0BD22[63382];  // data: 0xB0BD22
extern unsigned char DataGlobal_B0BD28[63376];  // data: 0xB0BD28
extern unsigned char DataGlobal_B0BD2C[63372];  // data: 0xB0BD2C
extern unsigned char DataGlobal_B0BD30[63368];  // data: 0xB0BD30
extern unsigned char DataGlobal_B0BD38[63360];  // data: 0xB0BD38
extern unsigned char DataGlobal_B0BD40[63352];  // data: 0xB0BD40
extern unsigned char DataGlobal_B0BD48[63344];  // data: 0xB0BD48
extern unsigned char DataGlobal_B0BD54[63332];  // data: 0xB0BD54
extern unsigned char DataGlobal_B0BD60[63320];  // data: 0xB0BD60
extern unsigned char DataGlobal_B0BD64[63316];  // data: 0xB0BD64
extern unsigned char DataGlobal_B0BD68[63312];  // data: 0xB0BD68
extern unsigned char DataGlobal_B0BD70[63304];  // data: 0xB0BD70
extern unsigned char DataGlobal_B0BD78[63296];  // data: 0xB0BD78
extern unsigned char DataGlobal_B0BD80[63288];  // data: 0xB0BD80
extern unsigned char DataGlobal_B0BD88[63280];  // data: 0xB0BD88
extern unsigned char DataGlobal_B0BD98[63264];  // data: 0xB0BD98
extern unsigned char DataGlobal_B0BD9C[63260];  // data: 0xB0BD9C
extern unsigned char DataGlobal_B0BDA0[63256];  // data: 0xB0BDA0
extern unsigned char DataGlobal_B0BDA4[63252];  // data: 0xB0BDA4
extern unsigned char DataGlobal_B0BDA8[63248];  // data: 0xB0BDA8
extern unsigned char DataGlobal_B0BDB0[63240];  // data: 0xB0BDB0
extern unsigned char DataGlobal_B0BDB4[63236];  // data: 0xB0BDB4
extern unsigned char DataGlobal_B0BDC0[63224];  // data: 0xB0BDC0
extern unsigned char DataGlobal_B0BDC4[63220];  // data: 0xB0BDC4
extern unsigned char DataGlobal_B0BDC8[63216];  // data: 0xB0BDC8
extern unsigned char DataGlobal_B0BDCC[63212];  // data: 0xB0BDCC
extern unsigned char DataGlobal_B0BDD0[63208];  // data: 0xB0BDD0
extern unsigned char DataGlobal_B0BED0[62952];  // data: 0xB0BED0
extern unsigned char DataGlobal_B0BED8[62944];  // data: 0xB0BED8
extern unsigned char DataGlobal_B0BEDC[62940];  // data: 0xB0BEDC
extern unsigned char DataGlobal_B0BEE0[62936];  // data: 0xB0BEE0
extern unsigned char DataGlobal_B0BEE4[62932];  // data: 0xB0BEE4
extern unsigned char DataGlobal_B0BEE8[62928];  // data: 0xB0BEE8
extern unsigned char DataGlobal_B0BEEA[62926];  // data: 0xB0BEEA
extern unsigned char DataGlobal_B0BEF0[62920];  // data: 0xB0BEF0
extern unsigned char DataGlobal_B0BEF8[62912];  // data: 0xB0BEF8
extern unsigned char DataGlobal_B0BF00[62904];  // data: 0xB0BF00
extern unsigned char DataGlobal_B0BF08[62896];  // data: 0xB0BF08
extern unsigned char DataGlobal_B0BF0C[62892];  // data: 0xB0BF0C
extern unsigned char DataGlobal_B0BF10[62888];  // data: 0xB0BF10
extern unsigned char DataGlobal_B0BF18[62880];  // data: 0xB0BF18
extern unsigned char DataGlobal_B0BF20[62872];  // data: 0xB0BF20
extern unsigned char DataGlobal_B0BF40[62840];  // data: 0xB0BF40
extern unsigned char DataGlobal_B0BF48[62832];  // data: 0xB0BF48
extern unsigned char DataGlobal_B0BF4C[62828];  // data: 0xB0BF4C
extern unsigned char DataGlobal_B0BF50[62824];  // data: 0xB0BF50
extern unsigned char DataGlobal_B0BF54[62820];  // data: 0xB0BF54
extern unsigned char DataGlobal_B0BF58[62816];  // data: 0xB0BF58
extern unsigned char DataGlobal_B0BF60[62808];  // data: 0xB0BF60
extern unsigned char DataGlobal_B0BF68[62800];  // data: 0xB0BF68
extern unsigned char DataGlobal_B0BF70[62792];  // data: 0xB0BF70
extern unsigned char DataGlobal_B0BF72[62790];  // data: 0xB0BF72
extern unsigned char DataGlobal_B0BF78[62784];  // data: 0xB0BF78
extern unsigned char DataGlobal_B0BF80[62776];  // data: 0xB0BF80
extern unsigned char DataGlobal_B0BF88[62768];  // data: 0xB0BF88
extern unsigned char DataGlobal_B0BF90[62760];  // data: 0xB0BF90
extern unsigned char DataGlobal_B0BF94[62756];  // data: 0xB0BF94
extern unsigned char DataGlobal_B0BF98[62752];  // data: 0xB0BF98
extern unsigned char DataGlobal_B0BFA0[62744];  // data: 0xB0BFA0
extern unsigned char DataGlobal_B0BFA8[62736];  // data: 0xB0BFA8
extern unsigned char DataGlobal_B0BFB0[62728];  // data: 0xB0BFB0
extern unsigned char DataGlobal_B0BFB8[62720];  // data: 0xB0BFB8
extern unsigned char DataGlobal_B0BFBC[62716];  // data: 0xB0BFBC
extern unsigned char DataGlobal_B0BFC0[62712];  // data: 0xB0BFC0
extern unsigned char DataGlobal_B0BFC4[62708];  // data: 0xB0BFC4
extern unsigned char DataGlobal_B0BFC8[62704];  // data: 0xB0BFC8
extern unsigned char DataGlobal_B0BFD0[62696];  // data: 0xB0BFD0
extern unsigned char DataGlobal_B0BFD8[62688];  // data: 0xB0BFD8
extern unsigned char DataGlobal_B0BFDC[62684];  // data: 0xB0BFDC
extern unsigned char DataGlobal_B0BFE0[62680];  // data: 0xB0BFE0
extern unsigned char DataGlobal_B0BFE4[62676];  // data: 0xB0BFE4
extern unsigned char DataGlobal_B0BFE8[62672];  // data: 0xB0BFE8
extern unsigned char DataGlobal_B0BFF0[62664];  // data: 0xB0BFF0
extern unsigned char DataGlobal_B0BFF4[62660];  // data: 0xB0BFF4
extern unsigned char DataGlobal_B0BFF8[62656];  // data: 0xB0BFF8
extern unsigned char DataGlobal_B0BFFC[62652];  // data: 0xB0BFFC
extern unsigned char DataGlobal_B0C000[62648];  // data: 0xB0C000
extern unsigned char DataGlobal_B0C008[62640];  // data: 0xB0C008
extern unsigned char DataGlobal_B0C010[62632];  // data: 0xB0C010
extern unsigned char DataGlobal_B0C018[62624];  // data: 0xB0C018
extern unsigned char DataGlobal_B0C020[62616];  // data: 0xB0C020
extern unsigned char DataGlobal_B0C024[62612];  // data: 0xB0C024
extern unsigned char DataGlobal_B0C028[62608];  // data: 0xB0C028
extern unsigned char DataGlobal_B0C030[62600];  // data: 0xB0C030
extern unsigned char DataGlobal_B0C038[62592];  // data: 0xB0C038
extern unsigned char DataGlobal_B0C03C[62588];  // data: 0xB0C03C
extern unsigned char DataGlobal_B0C040[62584];  // data: 0xB0C040
extern unsigned char DataGlobal_B0C044[62580];  // data: 0xB0C044
extern unsigned char DataGlobal_B0C048[62576];  // data: 0xB0C048
extern unsigned char DataGlobal_B0C04C[62572];  // data: 0xB0C04C
extern unsigned char DataGlobal_B0C050[62568];  // data: 0xB0C050
extern unsigned char DataGlobal_B0C054[62564];  // data: 0xB0C054
extern unsigned char DataGlobal_B0C058[62560];  // data: 0xB0C058
extern unsigned char DataGlobal_B0C060[62552];  // data: 0xB0C060
extern unsigned char DataGlobal_B0C068[62544];  // data: 0xB0C068
extern unsigned char DataGlobal_B0C070[62536];  // data: 0xB0C070
extern unsigned char DataGlobal_B0C074[62532];  // data: 0xB0C074
extern unsigned char DataGlobal_B0C078[62528];  // data: 0xB0C078
extern unsigned char DataGlobal_B0C07C[62524];  // data: 0xB0C07C
extern unsigned char DataGlobal_B0C080[62520];  // data: 0xB0C080
extern unsigned char DataGlobal_B0C088[62512];  // data: 0xB0C088
extern unsigned char DataGlobal_B0C090[62504];  // data: 0xB0C090
extern unsigned char DataGlobal_B0C098[62496];  // data: 0xB0C098
extern unsigned char DataGlobal_B0C09C[62492];  // data: 0xB0C09C
extern unsigned char DataGlobal_B0C0A0[62488];  // data: 0xB0C0A0
extern unsigned char DataGlobal_B0C0A4[62484];  // data: 0xB0C0A4
extern unsigned char DataGlobal_B0C0A8[62480];  // data: 0xB0C0A8
extern unsigned char DataGlobal_B0C0AA[62478];  // data: 0xB0C0AA
extern unsigned char DataGlobal_B0C0B0[62472];  // data: 0xB0C0B0
extern unsigned char DataGlobal_B0C0B8[62464];  // data: 0xB0C0B8
extern unsigned char DataGlobal_B0C0C0[62456];  // data: 0xB0C0C0
extern unsigned char DataGlobal_B0C0C8[62448];  // data: 0xB0C0C8
extern unsigned char DataGlobal_B0C0CC[62444];  // data: 0xB0C0CC
extern unsigned char DataGlobal_B0C0D0[62440];  // data: 0xB0C0D0
extern unsigned char DataGlobal_B0C0D8[62432];  // data: 0xB0C0D8
extern unsigned char DataGlobal_B0C0E0[62424];  // data: 0xB0C0E0
extern unsigned char DataGlobal_B0C0E8[62416];  // data: 0xB0C0E8
extern unsigned char DataGlobal_B0C0F0[62408];  // data: 0xB0C0F0
extern unsigned char DataGlobal_B0C0F4[62404];  // data: 0xB0C0F4
extern unsigned char DataGlobal_B0C0F8[62400];  // data: 0xB0C0F8
extern unsigned char DataGlobal_B0C0FC[62396];  // data: 0xB0C0FC
extern unsigned char DataGlobal_B0C100[62392];  // data: 0xB0C100
extern unsigned char DataGlobal_B0C108[62384];  // data: 0xB0C108
extern unsigned char DataGlobal_B0C114[62372];  // data: 0xB0C114
extern unsigned char DataGlobal_B0C124[62356];  // data: 0xB0C124
extern unsigned char DataGlobal_B0C128[62352];  // data: 0xB0C128
extern unsigned char DataGlobal_B0C12C[62348];  // data: 0xB0C12C
extern unsigned char DataGlobal_B0C13C[62332];  // data: 0xB0C13C
extern unsigned char DataGlobal_B0C140[62328];  // data: 0xB0C140
extern unsigned char DataGlobal_B0C148[62320];  // data: 0xB0C148
extern unsigned char DataGlobal_B0C1AC[62220];  // data: 0xB0C1AC
extern unsigned char DataGlobal_B0C1B0[62216];  // data: 0xB0C1B0
extern unsigned char DataGlobal_B0C1B8[62208];  // data: 0xB0C1B8
extern unsigned char DataGlobal_B0C1C0[62200];  // data: 0xB0C1C0
extern unsigned char DataGlobal_B0CB20[59800];  // data: 0xB0CB20
extern unsigned char DataGlobal_B0CB28[59792];  // data: 0xB0CB28
extern unsigned char DataGlobal_B0CB2C[59788];  // data: 0xB0CB2C
extern unsigned char DataGlobal_B0CB30[59784];  // data: 0xB0CB30
extern unsigned char DataGlobal_B0CB34[59780];  // data: 0xB0CB34
extern unsigned char DataGlobal_B0CB38[59776];  // data: 0xB0CB38
extern unsigned char DataGlobal_B0CB3C[59772];  // data: 0xB0CB3C
extern unsigned char DataGlobal_B0CB40[59768];  // data: 0xB0CB40
extern unsigned char DataGlobal_B0CB42[59766];  // data: 0xB0CB42
extern unsigned char DataGlobal_B0CB48[59760];  // data: 0xB0CB48
extern unsigned char DataGlobal_B0CB50[59752];  // data: 0xB0CB50
extern unsigned char DataGlobal_B0CB54[59748];  // data: 0xB0CB54
extern unsigned char DataGlobal_B0CB58[59744];  // data: 0xB0CB58
extern unsigned char DataGlobal_B0CB60[59736];  // data: 0xB0CB60
extern unsigned char DataGlobal_B0CB68[59728];  // data: 0xB0CB68
extern unsigned char DataGlobal_B0CB6C[59724];  // data: 0xB0CB6C
extern unsigned char DataGlobal_B0CB70[59720];  // data: 0xB0CB70
extern unsigned char DataGlobal_B0CBDC[59612];  // data: 0xB0CBDC
extern unsigned char DataGlobal_B0CBF8[59584];  // data: 0xB0CBF8
extern unsigned char DataGlobal_B0CBFC[59580];  // data: 0xB0CBFC
extern unsigned char DataGlobal_B0CC00[59576];  // data: 0xB0CC00
extern unsigned char DataGlobal_B0CC10[59560];  // data: 0xB0CC10
extern unsigned char DataGlobal_B0CC14[59556];  // data: 0xB0CC14
extern unsigned char DataGlobal_B0CC18[59552];  // data: 0xB0CC18
extern unsigned char DataGlobal_B0CC1C[59548];  // data: 0xB0CC1C
extern unsigned char DataGlobal_B0CC20[59544];  // data: 0xB0CC20
extern unsigned char DataGlobal_B0CC24[59540];  // data: 0xB0CC24
extern unsigned char DataGlobal_B0CC28[59536];  // data: 0xB0CC28
extern unsigned char DataGlobal_B0CC2C[59532];  // data: 0xB0CC2C
extern unsigned char DataGlobal_B0CC30[59528];  // data: 0xB0CC30
extern unsigned char DataGlobal_B0CC38[59520];  // data: 0xB0CC38
extern unsigned char DataGlobal_B0CC40[59512];  // data: 0xB0CC40
extern unsigned char DataGlobal_B0CC4C[59500];  // data: 0xB0CC4C
extern unsigned char DataGlobal_B0CC50[59496];  // data: 0xB0CC50
extern unsigned char DataGlobal_B0CC54[59492];  // data: 0xB0CC54
extern unsigned char DataGlobal_B0CC58[59488];  // data: 0xB0CC58
extern unsigned char DataGlobal_B0CC60[59480];  // data: 0xB0CC60
extern unsigned char DataGlobal_B0CC64[59476];  // data: 0xB0CC64
extern unsigned char DataGlobal_B0CC6D[59467];  // data: 0xB0CC6D
extern unsigned char DataGlobal_B0CC70[59464];  // data: 0xB0CC70
extern unsigned char DataGlobal_B0CC90[59432];  // data: 0xB0CC90
extern unsigned char DataGlobal_B0CCA0[59416];  // data: 0xB0CCA0
extern unsigned char DataGlobal_B0CCA8[59408];  // data: 0xB0CCA8
extern unsigned char DataGlobal_B0CCB0[59400];  // data: 0xB0CCB0
extern unsigned char DataGlobal_B0CCD0[59368];  // data: 0xB0CCD0
extern unsigned char DataGlobal_B0CCD4[59364];  // data: 0xB0CCD4
extern unsigned char DataGlobal_B0CCDD[59355];  // data: 0xB0CCDD
extern unsigned char DataGlobal_B0CCE0[59352];  // data: 0xB0CCE0
extern unsigned char DataGlobal_B0CD00[59320];  // data: 0xB0CD00
extern unsigned char DataGlobal_B0CD10[59304];  // data: 0xB0CD10
extern unsigned char DataGlobal_B0CD18[59296];  // data: 0xB0CD18
extern unsigned char DataGlobal_B0CD1C[59292];  // data: 0xB0CD1C
extern unsigned char DataGlobal_B0CD20[59288];  // data: 0xB0CD20
extern unsigned char DataGlobal_B0CD24[59284];  // data: 0xB0CD24
extern unsigned char DataGlobal_B0CD28[59280];  // data: 0xB0CD28
extern unsigned char DataGlobal_B0CD2C[59276];  // data: 0xB0CD2C
extern unsigned char DataGlobal_B0CD30[59272];  // data: 0xB0CD30
extern unsigned char DataGlobal_B0CD38[59264];  // data: 0xB0CD38
extern unsigned char DataGlobal_B0CD3C[59260];  // data: 0xB0CD3C
extern unsigned char DataGlobal_B0CD40[59256];  // data: 0xB0CD40
extern unsigned char DataGlobal_B0CD44[59252];  // data: 0xB0CD44
extern unsigned char DataGlobal_B0CD48[59248];  // data: 0xB0CD48
extern unsigned char DataGlobal_B0CD50[59240];  // data: 0xB0CD50
extern unsigned char DataGlobal_B0CD58[59232];  // data: 0xB0CD58
extern unsigned char DataGlobal_B0CD59[59231];  // data: 0xB0CD59
extern unsigned char DataGlobal_B0CD60[59224];  // data: 0xB0CD60
extern unsigned char DataGlobal_B0CD64[59220];  // data: 0xB0CD64
extern unsigned char DataGlobal_B0CD68[59216];  // data: 0xB0CD68
extern unsigned char DataGlobal_B0CD6C[59212];  // data: 0xB0CD6C
extern unsigned char DataGlobal_B0CD70[59208];  // data: 0xB0CD70
extern unsigned char DataGlobal_B0CD71[59207];  // data: 0xB0CD71
extern unsigned char DataGlobal_B0CD72[59206];  // data: 0xB0CD72
extern unsigned char DataGlobal_B0CD74[59204];  // data: 0xB0CD74
extern unsigned char DataGlobal_B0CD76[59202];  // data: 0xB0CD76
extern unsigned char DataGlobal_B0CD78[59200];  // data: 0xB0CD78
extern unsigned char DataGlobal_B0CD88[59184];  // data: 0xB0CD88
extern unsigned char DataGlobal_B0CD90[59176];  // data: 0xB0CD90
extern unsigned char DataGlobal_B0CDE8[59088];  // data: 0xB0CDE8
extern unsigned char DataGlobal_B0CDEC[59084];  // data: 0xB0CDEC
extern unsigned char DataGlobal_B0CDF0[59080];  // data: 0xB0CDF0
extern unsigned char DataGlobal_B0CDF4[59076];  // data: 0xB0CDF4
extern unsigned char DataGlobal_B0CDF5[59075];  // data: 0xB0CDF5
extern unsigned char DataGlobal_B0CDF8[59072];  // data: 0xB0CDF8
extern unsigned char DataGlobal_B0CDFC[59068];  // data: 0xB0CDFC
extern unsigned char DataGlobal_B0CE08[59056];  // data: 0xB0CE08
extern unsigned char DataGlobal_B0CE0C[59052];  // data: 0xB0CE0C
extern unsigned char DataGlobal_B0CE10[59048];  // data: 0xB0CE10
extern unsigned char DataGlobal_B0CE14[59044];  // data: 0xB0CE14
extern unsigned char DataGlobal_B0CE15[59043];  // data: 0xB0CE15
extern unsigned char DataGlobal_B0CE16[59042];  // data: 0xB0CE16
extern unsigned char DataGlobal_B0CE18[59040];  // data: 0xB0CE18
extern unsigned char DataGlobal_B0CE20[59032];  // data: 0xB0CE20
extern unsigned char DataGlobal_B0CE28[59024];  // data: 0xB0CE28
extern unsigned char DataGlobal_B0CE2C[59020];  // data: 0xB0CE2C
extern unsigned char DataGlobal_B0CE30[59016];  // data: 0xB0CE30
extern unsigned char DataGlobal_B0CE34[59012];  // data: 0xB0CE34
extern unsigned char DataGlobal_B0CE78[58944];  // data: 0xB0CE78
extern unsigned char DataGlobal_B0CE80[58936];  // data: 0xB0CE80
extern unsigned char DataGlobal_B0CE84[58932];  // data: 0xB0CE84
extern unsigned char DataGlobal_B0CE85[58931];  // data: 0xB0CE85
extern unsigned char DataGlobal_B0CE8C[58924];  // data: 0xB0CE8C
extern unsigned char DataGlobal_B0CE90[58920];  // data: 0xB0CE90
extern unsigned char DataGlobal_B0CE98[58912];  // data: 0xB0CE98
extern unsigned char DataGlobal_B0CEA0[58904];  // data: 0xB0CEA0
extern unsigned char DataGlobal_B0CEA8[58896];  // data: 0xB0CEA8
extern unsigned char DataGlobal_B0CEAC[58892];  // data: 0xB0CEAC
extern unsigned char DataGlobal_B0CEB0[58888];  // data: 0xB0CEB0
extern unsigned char DataGlobal_B0CEB4[58884];  // data: 0xB0CEB4
extern unsigned char DataGlobal_B0CEB8[58880];  // data: 0xB0CEB8
extern unsigned char DataGlobal_B0CEC0[58872];  // data: 0xB0CEC0
extern unsigned char DataGlobal_B0CEC8[58864];  // data: 0xB0CEC8
extern unsigned char DataGlobal_B0CECC[58860];  // data: 0xB0CECC
extern unsigned char DataGlobal_B0CED0[58856];  // data: 0xB0CED0
extern unsigned char DataGlobal_B0E648[52848];  // data: 0xB0E648
extern unsigned char DataGlobal_B0E64C[52844];  // data: 0xB0E64C
extern unsigned char DataGlobal_B0E650[52840];  // data: 0xB0E650
extern unsigned char DataGlobal_B0E658[52832];  // data: 0xB0E658
extern unsigned char DataGlobal_B0E65C[52828];  // data: 0xB0E65C
extern unsigned char DataGlobal_B0E660[52824];  // data: 0xB0E660
extern unsigned char DataGlobal_B0E664[52820];  // data: 0xB0E664
extern unsigned char DataGlobal_B0E665[52819];  // data: 0xB0E665
extern unsigned char DataGlobal_B0E668[52816];  // data: 0xB0E668
extern unsigned char DataGlobal_B0E66C[52812];  // data: 0xB0E66C
extern unsigned char DataGlobal_B0E670[52808];  // data: 0xB0E670
extern unsigned char DataGlobal_B0E674[52804];  // data: 0xB0E674
extern unsigned char DataGlobal_B0E678[52800];  // data: 0xB0E678
extern unsigned char DataGlobal_B0E67C[52796];  // data: 0xB0E67C
extern unsigned char DataGlobal_B0E680[52792];  // data: 0xB0E680
extern unsigned char DataGlobal_B0E688[52784];  // data: 0xB0E688
extern unsigned char DataGlobal_B0E690[52776];  // data: 0xB0E690
extern unsigned char DataGlobal_B0E698[52768];  // data: 0xB0E698
extern unsigned char DataGlobal_B0E6A0[52760];  // data: 0xB0E6A0
extern unsigned char DataGlobal_B0E6A4[52756];  // data: 0xB0E6A4
extern unsigned char DataGlobal_B0E6A8[52752];  // data: 0xB0E6A8
extern unsigned char DataGlobal_B0E6B0[52744];  // data: 0xB0E6B0
extern unsigned char DataGlobal_B0E6B8[52736];  // data: 0xB0E6B8
extern unsigned char DataGlobal_B0E6C0[52728];  // data: 0xB0E6C0
extern unsigned char DataGlobal_B0E6C8[52720];  // data: 0xB0E6C8
extern unsigned char DataGlobal_B0E6CC[52716];  // data: 0xB0E6CC
extern unsigned char DataGlobal_B0E6D0[52712];  // data: 0xB0E6D0
extern unsigned char DataGlobal_B0E6D4[52708];  // data: 0xB0E6D4
extern unsigned char DataGlobal_B0E6D8[52704];  // data: 0xB0E6D8
extern unsigned char DataGlobal_B0E6E0[52696];  // data: 0xB0E6E0
extern unsigned char DataGlobal_B0E6E8[52688];  // data: 0xB0E6E8
extern unsigned char DataGlobal_B0E6F0[52680];  // data: 0xB0E6F0
extern unsigned char DataGlobal_B0E6F4[52676];  // data: 0xB0E6F4
extern unsigned char DataGlobal_B0E6F8[52672];  // data: 0xB0E6F8
extern unsigned char DataGlobal_B0E6FC[52668];  // data: 0xB0E6FC
extern unsigned char DataGlobal_B0E700[52664];  // data: 0xB0E700
extern unsigned char DataGlobal_B0E708[52656];  // data: 0xB0E708
extern unsigned char DataGlobal_B0E710[52648];  // data: 0xB0E710
extern unsigned char DataGlobal_B0E718[52640];  // data: 0xB0E718
extern unsigned char DataGlobal_B0E728[52624];  // data: 0xB0E728
extern unsigned char DataGlobal_B0E72C[52620];  // data: 0xB0E72C
extern unsigned char DataGlobal_B0E72D[52619];  // data: 0xB0E72D
extern unsigned char DataGlobal_B0E734[52612];  // data: 0xB0E734
extern unsigned char DataGlobal_B0E738[52608];  // data: 0xB0E738
extern unsigned char DataGlobal_B0E73C[52604];  // data: 0xB0E73C
extern unsigned char DataGlobal_B0E740[52600];  // data: 0xB0E740
extern unsigned char DataGlobal_B0E748[52592];  // data: 0xB0E748
extern unsigned char DataGlobal_B0E750[52584];  // data: 0xB0E750
extern unsigned char DataGlobal_B0E758[52576];  // data: 0xB0E758
extern unsigned char DataGlobal_B0E760[52568];  // data: 0xB0E760
extern unsigned char DataGlobal_B0E764[52564];  // data: 0xB0E764
extern unsigned char DataGlobal_B0E768[52560];  // data: 0xB0E768
extern unsigned char DataGlobal_B0E76C[52556];  // data: 0xB0E76C
extern unsigned char DataGlobal_B0E770[52552];  // data: 0xB0E770
extern unsigned char DataGlobal_B0E778[52544];  // data: 0xB0E778
extern unsigned char DataGlobal_B0E780[52536];  // data: 0xB0E780
extern unsigned char DataGlobal_B0E784[52532];  // data: 0xB0E784
extern unsigned char DataGlobal_B0E788[52528];  // data: 0xB0E788
extern unsigned char DataGlobal_B0E78C[52524];  // data: 0xB0E78C
extern unsigned char DataGlobal_B0E78D[52523];  // data: 0xB0E78D
extern unsigned char DataGlobal_B0E794[52516];  // data: 0xB0E794
extern unsigned char DataGlobal_B0E798[52512];  // data: 0xB0E798
extern unsigned char DataGlobal_B0E7A0[52504];  // data: 0xB0E7A0
extern unsigned char DataGlobal_B0E7A4[52500];  // data: 0xB0E7A4
extern unsigned char DataGlobal_B0E7A8[52496];  // data: 0xB0E7A8
extern unsigned char DataGlobal_B0E7AC[52492];  // data: 0xB0E7AC
extern unsigned char DataGlobal_B0E7B0[52488];  // data: 0xB0E7B0
extern unsigned char DataGlobal_B0E7B2[52486];  // data: 0xB0E7B2
extern unsigned char DataGlobal_B0E7B8[52480];  // data: 0xB0E7B8
extern unsigned char DataGlobal_B0E7C0[52472];  // data: 0xB0E7C0
extern unsigned char DataGlobal_B0E7C8[52464];  // data: 0xB0E7C8
extern unsigned char DataGlobal_B0E7D0[52456];  // data: 0xB0E7D0
extern unsigned char DataGlobal_B0E7D4[52452];  // data: 0xB0E7D4
extern unsigned char DataGlobal_B0E7D8[52448];  // data: 0xB0E7D8
extern unsigned char DataGlobal_B0E7E0[52440];  // data: 0xB0E7E0
extern unsigned char DataGlobal_B0E7E8[52432];  // data: 0xB0E7E8
extern unsigned char DataGlobal_B0E7F0[52424];  // data: 0xB0E7F0
extern unsigned char DataGlobal_B0E7F8[52416];  // data: 0xB0E7F8
extern unsigned char DataGlobal_B0E7FC[52412];  // data: 0xB0E7FC
extern unsigned char DataGlobal_B0E800[52408];  // data: 0xB0E800
extern unsigned char DataGlobal_B0E804[52404];  // data: 0xB0E804
extern unsigned char DataGlobal_B0E808[52400];  // data: 0xB0E808
extern unsigned char DataGlobal_B0E810[52392];  // data: 0xB0E810
extern unsigned char DataGlobal_B0E818[52384];  // data: 0xB0E818
extern unsigned char DataGlobal_B0E820[52376];  // data: 0xB0E820
extern unsigned char DataGlobal_B0E824[52372];  // data: 0xB0E824
extern unsigned char DataGlobal_B0E828[52368];  // data: 0xB0E828
extern unsigned char DataGlobal_B0E82C[52364];  // data: 0xB0E82C
extern unsigned char DataGlobal_B0E830[52360];  // data: 0xB0E830
extern unsigned char DataGlobal_B0E832[52358];  // data: 0xB0E832
extern unsigned char DataGlobal_B0E838[52352];  // data: 0xB0E838
extern unsigned char DataGlobal_B0E858[52320];  // data: 0xB0E858
extern unsigned char DataGlobal_B0E860[52312];  // data: 0xB0E860
extern unsigned char DataGlobal_B0E868[52304];  // data: 0xB0E868
extern unsigned char DataGlobal_B0E86C[52300];  // data: 0xB0E86C
extern unsigned char DataGlobal_B0E870[52296];  // data: 0xB0E870
extern unsigned char DataGlobal_B0E878[52288];  // data: 0xB0E878
extern unsigned char DataGlobal_B0E880[52280];  // data: 0xB0E880
extern unsigned char DataGlobal_B0E888[52272];  // data: 0xB0E888
extern unsigned char DataGlobal_B0E890[52264];  // data: 0xB0E890
extern unsigned char DataGlobal_B0E894[52260];  // data: 0xB0E894
extern unsigned char DataGlobal_B0E898[52256];  // data: 0xB0E898
extern unsigned char DataGlobal_B0E89C[52252];  // data: 0xB0E89C
extern unsigned char DataGlobal_B0E8A0[52248];  // data: 0xB0E8A0
extern unsigned char DataGlobal_B0E8A8[52240];  // data: 0xB0E8A8
extern unsigned char DataGlobal_B0E8B0[52232];  // data: 0xB0E8B0
extern unsigned char DataGlobal_B0E8B8[52224];  // data: 0xB0E8B8
extern unsigned char DataGlobal_B0E8BC[52220];  // data: 0xB0E8BC
extern unsigned char DataGlobal_B0E8C0[52216];  // data: 0xB0E8C0
extern unsigned char DataGlobal_B0E8C4[52212];  // data: 0xB0E8C4
extern unsigned char DataGlobal_B0E8C8[52208];  // data: 0xB0E8C8
extern unsigned char DataGlobal_B0E8CA[52206];  // data: 0xB0E8CA
extern unsigned char DataGlobal_B0E8D0[52200];  // data: 0xB0E8D0
extern unsigned char DataGlobal_B0E8D8[52192];  // data: 0xB0E8D8
extern unsigned char DataGlobal_B0E8E0[52184];  // data: 0xB0E8E0
extern unsigned char DataGlobal_B0E8E8[52176];  // data: 0xB0E8E8
extern unsigned char DataGlobal_B0E8EC[52172];  // data: 0xB0E8EC
extern unsigned char DataGlobal_B0E8F0[52168];  // data: 0xB0E8F0
extern unsigned char DataGlobal_B0E8F8[52160];  // data: 0xB0E8F8
extern unsigned char DataGlobal_B0E900[52152];  // data: 0xB0E900
extern unsigned char DataGlobal_B0E908[52144];  // data: 0xB0E908
extern unsigned char DataGlobal_B0E910[52136];  // data: 0xB0E910
extern unsigned char DataGlobal_B0E914[52132];  // data: 0xB0E914
extern unsigned char DataGlobal_B0E918[52128];  // data: 0xB0E918
extern unsigned char DataGlobal_B0E91C[52124];  // data: 0xB0E91C
extern unsigned char DataGlobal_B0E920[52120];  // data: 0xB0E920
extern unsigned char DataGlobal_B0E928[52112];  // data: 0xB0E928
extern unsigned char DataGlobal_B0E930[52104];  // data: 0xB0E930
extern unsigned char DataGlobal_B0E938[52096];  // data: 0xB0E938
extern unsigned char DataGlobal_B0E93C[52092];  // data: 0xB0E93C
extern unsigned char DataGlobal_B0E940[52088];  // data: 0xB0E940
extern unsigned char DataGlobal_B0E944[52084];  // data: 0xB0E944
extern unsigned char DataGlobal_B0E948[52080];  // data: 0xB0E948
extern unsigned char DataGlobal_B0E950[52072];  // data: 0xB0E950
extern unsigned char DataGlobal_B0E958[52064];  // data: 0xB0E958
extern unsigned char DataGlobal_B0E960[52056];  // data: 0xB0E960
extern unsigned char DataGlobal_B0E968[52048];  // data: 0xB0E968
extern unsigned char DataGlobal_B0E96C[52044];  // data: 0xB0E96C
extern unsigned char DataGlobal_B0E970[52040];  // data: 0xB0E970
extern unsigned char DataGlobal_B0E978[52032];  // data: 0xB0E978
extern unsigned char DataGlobal_B0E980[52024];  // data: 0xB0E980
extern unsigned char DataGlobal_B0E988[52016];  // data: 0xB0E988
extern unsigned char DataGlobal_B0E990[52008];  // data: 0xB0E990
extern unsigned char DataGlobal_B0E994[52004];  // data: 0xB0E994
extern unsigned char DataGlobal_B0E998[52000];  // data: 0xB0E998
extern unsigned char DataGlobal_B0E99C[51996];  // data: 0xB0E99C
extern unsigned char DataGlobal_B0E9A0[51992];  // data: 0xB0E9A0
extern unsigned char DataGlobal_B0E9A8[51984];  // data: 0xB0E9A8
extern unsigned char DataGlobal_B0E9B0[51976];  // data: 0xB0E9B0
extern unsigned char DataGlobal_B0E9B8[51968];  // data: 0xB0E9B8
extern unsigned char DataGlobal_B0E9BC[51964];  // data: 0xB0E9BC
extern unsigned char DataGlobal_B0E9C0[51960];  // data: 0xB0E9C0
extern unsigned char DataGlobal_B0E9C4[51956];  // data: 0xB0E9C4
extern unsigned char DataGlobal_B0E9C8[51952];  // data: 0xB0E9C8
extern unsigned char DataGlobal_B0E9D0[51944];  // data: 0xB0E9D0
extern unsigned char DataGlobal_B0E9D8[51936];  // data: 0xB0E9D8
extern unsigned char DataGlobal_B0E9E0[51928];  // data: 0xB0E9E0
extern unsigned char DataGlobal_B0E9E8[51920];  // data: 0xB0E9E8
extern unsigned char DataGlobal_B0E9EC[51916];  // data: 0xB0E9EC
extern unsigned char DataGlobal_B0E9F0[51912];  // data: 0xB0E9F0
extern unsigned char DataGlobal_B0E9F8[51904];  // data: 0xB0E9F8
extern unsigned char DataGlobal_B0EA00[51896];  // data: 0xB0EA00
extern unsigned char DataGlobal_B0EA08[51888];  // data: 0xB0EA08
extern unsigned char DataGlobal_B0EA10[51880];  // data: 0xB0EA10
extern unsigned char DataGlobal_B0EA14[51876];  // data: 0xB0EA14
extern unsigned char DataGlobal_B0EA18[51872];  // data: 0xB0EA18
extern unsigned char DataGlobal_B0EA1C[51868];  // data: 0xB0EA1C
extern unsigned char DataGlobal_B0EA20[51864];  // data: 0xB0EA20
extern unsigned char DataGlobal_B0EA28[51856];  // data: 0xB0EA28
extern unsigned char DataGlobal_B0EA30[51848];  // data: 0xB0EA30
extern unsigned char DataGlobal_B0EA38[51840];  // data: 0xB0EA38
extern unsigned char DataGlobal_B0EA40[51832];  // data: 0xB0EA40
extern unsigned char DataGlobal_B0EA44[51828];  // data: 0xB0EA44
extern unsigned char DataGlobal_B0EA48[51824];  // data: 0xB0EA48
extern unsigned char DataGlobal_B0EA4C[51820];  // data: 0xB0EA4C
extern unsigned char DataGlobal_B0EA58[51808];  // data: 0xB0EA58
extern unsigned char DataGlobal_B0EA60[51800];  // data: 0xB0EA60
extern unsigned char DataGlobal_B0EA68[51792];  // data: 0xB0EA68
extern unsigned char DataGlobal_B0EA70[51784];  // data: 0xB0EA70
extern unsigned char DataGlobal_B0EA74[51780];  // data: 0xB0EA74
extern unsigned char DataGlobal_B0EA78[51776];  // data: 0xB0EA78
extern unsigned char DataGlobal_B0EA80[51768];  // data: 0xB0EA80
extern unsigned char DataGlobal_B0EA88[51760];  // data: 0xB0EA88
extern unsigned char DataGlobal_B0EA94[51748];  // data: 0xB0EA94
extern unsigned char DataGlobal_B0EA98[51744];  // data: 0xB0EA98
extern unsigned char DataGlobal_B0EAA0[51736];  // data: 0xB0EAA0
extern unsigned char DataGlobal_B0EB08[51632];  // data: 0xB0EB08
extern unsigned char DataGlobal_B0EB10[51624];  // data: 0xB0EB10
extern unsigned char DataGlobal_B0EB18[51616];  // data: 0xB0EB18
extern unsigned char DataGlobal_B0EB1C[51612];  // data: 0xB0EB1C
extern unsigned char DataGlobal_B0EB20[51608];  // data: 0xB0EB20
extern unsigned char DataGlobal_B0EB24[51604];  // data: 0xB0EB24
extern unsigned char DataGlobal_B0EB28[51600];  // data: 0xB0EB28
extern unsigned char DataGlobal_B0EB34[51588];  // data: 0xB0EB34
extern unsigned char DataGlobal_B0EB38[51584];  // data: 0xB0EB38
extern unsigned char DataGlobal_B0EB3C[51580];  // data: 0xB0EB3C
extern unsigned char DataGlobal_B0EB40[51576];  // data: 0xB0EB40
extern unsigned char DataGlobal_B0EB48[51568];  // data: 0xB0EB48
extern unsigned char DataGlobal_B0EB4C[51564];  // data: 0xB0EB4C
extern unsigned char DataGlobal_B0EB50[51560];  // data: 0xB0EB50
extern unsigned char DataGlobal_B0EB54[51556];  // data: 0xB0EB54
extern unsigned char DataGlobal_B0EB58[51552];  // data: 0xB0EB58
extern unsigned char DataGlobal_B0EB5A[51550];  // data: 0xB0EB5A
extern unsigned char DataGlobal_B0EB60[51544];  // data: 0xB0EB60
extern unsigned char DataGlobal_B0EB68[51536];  // data: 0xB0EB68
extern unsigned char DataGlobal_B0EB70[51528];  // data: 0xB0EB70
extern unsigned char DataGlobal_B0EB78[51520];  // data: 0xB0EB78
extern unsigned char DataGlobal_B0EB7C[51516];  // data: 0xB0EB7C
extern unsigned char DataGlobal_B0EB80[51512];  // data: 0xB0EB80
extern unsigned char DataGlobal_B0EB88[51504];  // data: 0xB0EB88
extern unsigned char DataGlobal_B0EB90[51496];  // data: 0xB0EB90
extern unsigned char DataGlobal_B0EB98[51488];  // data: 0xB0EB98
extern unsigned char DataGlobal_B0EBA0[51480];  // data: 0xB0EBA0
extern unsigned char DataGlobal_B0EBA4[51476];  // data: 0xB0EBA4
extern unsigned char DataGlobal_B0EBA8[51472];  // data: 0xB0EBA8
extern unsigned char DataGlobal_B0EBAC[51468];  // data: 0xB0EBAC
extern unsigned char DataGlobal_B0EBB0[51464];  // data: 0xB0EBB0
extern unsigned char DataGlobal_B0EBB8[51456];  // data: 0xB0EBB8
extern unsigned char DataGlobal_B0EBC0[51448];  // data: 0xB0EBC0
extern unsigned char DataGlobal_B0EBC8[51440];  // data: 0xB0EBC8
extern unsigned char DataGlobal_B0EBCC[51436];  // data: 0xB0EBCC
extern unsigned char DataGlobal_B0EBD0[51432];  // data: 0xB0EBD0
extern unsigned char DataGlobal_B0EBD4[51428];  // data: 0xB0EBD4
extern unsigned char DataGlobal_B0EBD8[51424];  // data: 0xB0EBD8
extern unsigned char DataGlobal_B0EBE0[51416];  // data: 0xB0EBE0
extern unsigned char DataGlobal_B0EBE8[51408];  // data: 0xB0EBE8
extern unsigned char DataGlobal_B0EBF0[51400];  // data: 0xB0EBF0
extern unsigned char DataGlobal_B0EBF8[51392];  // data: 0xB0EBF8
extern unsigned char DataGlobal_B0EBFC[51388];  // data: 0xB0EBFC
extern unsigned char DataGlobal_B0EC00[51384];  // data: 0xB0EC00
extern unsigned char DataGlobal_B0EC08[51376];  // data: 0xB0EC08
extern unsigned char DataGlobal_B0EC10[51368];  // data: 0xB0EC10
extern unsigned char DataGlobal_B0EC18[51360];  // data: 0xB0EC18
extern unsigned char DataGlobal_B0EC20[51352];  // data: 0xB0EC20
extern unsigned char DataGlobal_B0EC24[51348];  // data: 0xB0EC24
extern unsigned char DataGlobal_B0EC28[51344];  // data: 0xB0EC28
extern unsigned char DataGlobal_B0EC2C[51340];  // data: 0xB0EC2C
extern unsigned char DataGlobal_B0EC30[51336];  // data: 0xB0EC30
extern unsigned char DataGlobal_B0EC38[51328];  // data: 0xB0EC38
extern unsigned char DataGlobal_B0EC40[51320];  // data: 0xB0EC40
extern unsigned char DataGlobal_B0EC48[51312];  // data: 0xB0EC48
extern unsigned char DataGlobal_B0EC4C[51308];  // data: 0xB0EC4C
extern unsigned char DataGlobal_B0EC50[51304];  // data: 0xB0EC50
extern unsigned char DataGlobal_B0EC54[51300];  // data: 0xB0EC54
extern unsigned char DataGlobal_B0EC58[51296];  // data: 0xB0EC58
extern unsigned char DataGlobal_B0EC5A[51294];  // data: 0xB0EC5A
extern unsigned char DataGlobal_B0EC60[51288];  // data: 0xB0EC60
extern unsigned char DataGlobal_B0EC64[51284];  // data: 0xB0EC64
extern unsigned char DataGlobal_B0EC68[51280];  // data: 0xB0EC68
extern unsigned char DataGlobal_B0EC6C[51276];  // data: 0xB0EC6C
extern unsigned char DataGlobal_B0EC6D[51275];  // data: 0xB0EC6D
extern unsigned char DataGlobal_B0EC70[51272];  // data: 0xB0EC70
extern unsigned char DataGlobal_B0EC74[51268];  // data: 0xB0EC74
extern unsigned char DataGlobal_B0EC78[51264];  // data: 0xB0EC78
extern unsigned char DataGlobal_B0EC80[51256];  // data: 0xB0EC80
extern unsigned char DataGlobal_B0EC88[51248];  // data: 0xB0EC88
extern unsigned char DataGlobal_B0EC90[51240];  // data: 0xB0EC90
extern unsigned char DataGlobal_B0EC94[51236];  // data: 0xB0EC94
extern unsigned char DataGlobal_B0EC98[51232];  // data: 0xB0EC98
extern unsigned char DataGlobal_B0ECA0[51224];  // data: 0xB0ECA0
extern unsigned char DataGlobal_B0ECA8[51216];  // data: 0xB0ECA8
extern unsigned char DataGlobal_B0ECB0[51208];  // data: 0xB0ECB0
extern unsigned char DataGlobal_B0ECB8[51200];  // data: 0xB0ECB8
extern unsigned char DataGlobal_B0ECBC[51196];  // data: 0xB0ECBC
extern unsigned char DataGlobal_B0ECC0[51192];  // data: 0xB0ECC0
extern unsigned char DataGlobal_B0ECC4[51188];  // data: 0xB0ECC4
extern unsigned char DataGlobal_B0ECC8[51184];  // data: 0xB0ECC8
extern unsigned char DataGlobal_B0ECD0[51176];  // data: 0xB0ECD0
extern unsigned char DataGlobal_B0ECD8[51168];  // data: 0xB0ECD8
extern unsigned char DataGlobal_B0ECE0[51160];  // data: 0xB0ECE0
extern unsigned char DataGlobal_B0ECE4[51156];  // data: 0xB0ECE4
extern unsigned char DataGlobal_B0ECE8[51152];  // data: 0xB0ECE8
extern unsigned char DataGlobal_B0ECEC[51148];  // data: 0xB0ECEC
extern unsigned char DataGlobal_B0ECF0[51144];  // data: 0xB0ECF0
extern unsigned char DataGlobal_B0ECF2[51142];  // data: 0xB0ECF2
extern unsigned char DataGlobal_B0ECF8[51136];  // data: 0xB0ECF8
extern unsigned char DataGlobal_B0ED00[51128];  // data: 0xB0ED00
extern unsigned char DataGlobal_B0ED08[51120];  // data: 0xB0ED08
extern unsigned char DataGlobal_B0ED10[51112];  // data: 0xB0ED10
extern unsigned char DataGlobal_B0ED14[51108];  // data: 0xB0ED14
extern unsigned char DataGlobal_B0ED18[51104];  // data: 0xB0ED18
extern unsigned char DataGlobal_B0ED20[51096];  // data: 0xB0ED20
extern unsigned char DataGlobal_B0ED28[51088];  // data: 0xB0ED28
extern unsigned char DataGlobal_B0ED30[51080];  // data: 0xB0ED30
extern unsigned char DataGlobal_B0ED38[51072];  // data: 0xB0ED38
extern unsigned char DataGlobal_B0ED3C[51068];  // data: 0xB0ED3C
extern unsigned char DataGlobal_B0ED40[51064];  // data: 0xB0ED40
extern unsigned char DataGlobal_B0ED44[51060];  // data: 0xB0ED44
extern unsigned char DataGlobal_B0ED48[51056];  // data: 0xB0ED48
extern unsigned char DataGlobal_B0ED50[51048];  // data: 0xB0ED50
extern unsigned char DataGlobal_B0ED58[51040];  // data: 0xB0ED58
extern unsigned char DataGlobal_B0ED68[51024];  // data: 0xB0ED68
extern unsigned char DataGlobal_B0ED6C[51020];  // data: 0xB0ED6C
extern unsigned char DataGlobal_B0ED70[51016];  // data: 0xB0ED70
extern unsigned char DataGlobal_B0ED74[51012];  // data: 0xB0ED74
extern unsigned char DataGlobal_B0ED7C[51004];  // data: 0xB0ED7C
extern unsigned char DataGlobal_B0ED7E[51002];  // data: 0xB0ED7E
extern unsigned char DataGlobal_B0ED80[51000];  // data: 0xB0ED80
extern unsigned char DataGlobal_B0ED88[50992];  // data: 0xB0ED88
extern unsigned char DataGlobal_B0ED90[50984];  // data: 0xB0ED90
extern unsigned char DataGlobal_B0ED98[50976];  // data: 0xB0ED98
extern unsigned char DataGlobal_B0ED9C[50972];  // data: 0xB0ED9C
extern unsigned char DataGlobal_B0EDA0[50968];  // data: 0xB0EDA0
extern unsigned char DataGlobal_B0EDA8[50960];  // data: 0xB0EDA8
extern unsigned char DataGlobal_B0EDB0[50952];  // data: 0xB0EDB0
extern unsigned char DataGlobal_B0EDB8[50944];  // data: 0xB0EDB8
extern unsigned char DataGlobal_B0EDC0[50936];  // data: 0xB0EDC0
extern unsigned char DataGlobal_B0EDC4[50932];  // data: 0xB0EDC4
extern unsigned char DataGlobal_B0EDC8[50928];  // data: 0xB0EDC8
extern unsigned char DataGlobal_B0EDE8[50896];  // data: 0xB0EDE8
extern unsigned char DataGlobal_B0EDEC[50892];  // data: 0xB0EDEC
extern unsigned char DataGlobal_B0EDF0[50888];  // data: 0xB0EDF0
extern unsigned char DataGlobal_B0EDF4[50884];  // data: 0xB0EDF4
extern unsigned char DataGlobal_B0EE10[50856];  // data: 0xB0EE10
extern unsigned char DataGlobal_B0EE14[50852];  // data: 0xB0EE14
extern unsigned char DataGlobal_B0EE18[50848];  // data: 0xB0EE18
extern unsigned char DataGlobal_B0EE1C[50844];  // data: 0xB0EE1C
extern unsigned char DataGlobal_B0EE38[50816];  // data: 0xB0EE38
extern unsigned char DataGlobal_B0EE3C[50812];  // data: 0xB0EE3C
extern unsigned char DataGlobal_B0EE40[50808];  // data: 0xB0EE40
extern unsigned char DataGlobal_B0EE44[50804];  // data: 0xB0EE44
extern unsigned char DataGlobal_B0EE48[50800];  // data: 0xB0EE48
extern unsigned char DataGlobal_B0EE4C[50796];  // data: 0xB0EE4C
extern unsigned char DataGlobal_B0EE50[50792];  // data: 0xB0EE50
extern unsigned char DataGlobal_B0EE54[50788];  // data: 0xB0EE54
extern unsigned char DataGlobal_B0EE58[50784];  // data: 0xB0EE58
extern unsigned char DataGlobal_B0EE5C[50780];  // data: 0xB0EE5C
extern unsigned char DataGlobal_B0EE60[50776];  // data: 0xB0EE60
extern unsigned char DataGlobal_B0EE64[50772];  // data: 0xB0EE64
extern unsigned char DataGlobal_B0EE68[50768];  // data: 0xB0EE68
extern unsigned char DataGlobal_B0EE6C[50764];  // data: 0xB0EE6C
extern unsigned char DataGlobal_B0EE70[50760];  // data: 0xB0EE70
extern unsigned char DataGlobal_B0EE74[50756];  // data: 0xB0EE74
extern unsigned char DataGlobal_B0EE78[50752];  // data: 0xB0EE78
extern unsigned char DataGlobal_B0EE7C[50748];  // data: 0xB0EE7C
extern unsigned char DataGlobal_B0EE80[50744];  // data: 0xB0EE80
extern unsigned char DataGlobal_B0EE84[50740];  // data: 0xB0EE84
extern unsigned char DataGlobal_B0EE88[50736];  // data: 0xB0EE88
extern unsigned char DataGlobal_B0EE8C[50732];  // data: 0xB0EE8C
extern unsigned char DataGlobal_B0EE90[50728];  // data: 0xB0EE90
extern unsigned char DataGlobal_B0EE94[50724];  // data: 0xB0EE94
extern unsigned char DataGlobal_B0EE98[50720];  // data: 0xB0EE98
extern unsigned char DataGlobal_B0EE9C[50716];  // data: 0xB0EE9C
extern unsigned char DataGlobal_B0EEA0[50712];  // data: 0xB0EEA0
extern unsigned char DataGlobal_B0EEA4[50708];  // data: 0xB0EEA4
extern unsigned char DataGlobal_B0EEA8[50704];  // data: 0xB0EEA8
extern unsigned char DataGlobal_B0EEAC[50700];  // data: 0xB0EEAC
extern unsigned char DataGlobal_B0EEB0[50696];  // data: 0xB0EEB0
extern unsigned char DataGlobal_B0EEB4[50692];  // data: 0xB0EEB4
extern unsigned char DataGlobal_B0EEB8[50688];  // data: 0xB0EEB8
extern unsigned char DataGlobal_B0EEBC[50684];  // data: 0xB0EEBC
extern unsigned char DataGlobal_B0EEC0[50680];  // data: 0xB0EEC0
extern unsigned char DataGlobal_B0EEC4[50676];  // data: 0xB0EEC4
extern unsigned char DataGlobal_B0EEC8[50672];  // data: 0xB0EEC8
extern unsigned char DataGlobal_B0EECC[50668];  // data: 0xB0EECC
extern unsigned char DataGlobal_B0EED0[50664];  // data: 0xB0EED0
extern unsigned char DataGlobal_B0EED4[50660];  // data: 0xB0EED4
extern unsigned char DataGlobal_B0EED8[50656];  // data: 0xB0EED8
extern unsigned char DataGlobal_B0EEDC[50652];  // data: 0xB0EEDC
extern unsigned char DataGlobal_B0EEE0[50648];  // data: 0xB0EEE0
extern unsigned char DataGlobal_B0EEE4[50644];  // data: 0xB0EEE4
extern unsigned char DataGlobal_B0EEE8[50640];  // data: 0xB0EEE8
extern unsigned char DataGlobal_B0EEEC[50636];  // data: 0xB0EEEC
extern unsigned char DataGlobal_B0EEF0[50632];  // data: 0xB0EEF0
extern unsigned char DataGlobal_B0EEF4[50628];  // data: 0xB0EEF4
extern unsigned char DataGlobal_B0EEF8[50624];  // data: 0xB0EEF8
extern unsigned char DataGlobal_B0EEFC[50620];  // data: 0xB0EEFC
extern unsigned char DataGlobal_B0EF00[50616];  // data: 0xB0EF00
extern unsigned char DataGlobal_B0F130[50056];  // data: 0xB0F130
extern unsigned char DataGlobal_B0F134[50052];  // data: 0xB0F134
extern unsigned char DataGlobal_B0F138[50048];  // data: 0xB0F138
extern unsigned char DataGlobal_B0F13C[50044];  // data: 0xB0F13C
extern unsigned char DataGlobal_B0F140[50040];  // data: 0xB0F140
extern unsigned char DataGlobal_B0F148[50032];  // data: 0xB0F148
extern unsigned char DataGlobal_B0F150[50024];  // data: 0xB0F150
extern unsigned char DataGlobal_B0F158[50016];  // data: 0xB0F158
extern unsigned char DataGlobal_B0F15C[50012];  // data: 0xB0F15C
extern unsigned char DataGlobal_B0F160[50008];  // data: 0xB0F160
extern unsigned char DataGlobal_B0F164[50004];  // data: 0xB0F164
extern unsigned char DataGlobal_B0F168[50000];  // data: 0xB0F168
extern unsigned char DataGlobal_B0F16A[49998];  // data: 0xB0F16A
extern unsigned char DataGlobal_B0F170[49992];  // data: 0xB0F170
extern unsigned char DataGlobal_B0F178[49984];  // data: 0xB0F178
extern unsigned char DataGlobal_B0F180[49976];  // data: 0xB0F180
extern unsigned char DataGlobal_B0F188[49968];  // data: 0xB0F188
extern unsigned char DataGlobal_B0F18C[49964];  // data: 0xB0F18C
extern unsigned char DataGlobal_B0F190[49960];  // data: 0xB0F190
extern unsigned char DataGlobal_B0F198[49952];  // data: 0xB0F198
extern unsigned char DataGlobal_B0F1A0[49944];  // data: 0xB0F1A0
extern unsigned char DataGlobal_B0F1A4[49940];  // data: 0xB0F1A4
extern unsigned char DataGlobal_B0F1A8[49936];  // data: 0xB0F1A8
extern unsigned char DataGlobal_B0F1AC[49932];  // data: 0xB0F1AC
extern unsigned char DataGlobal_B0F1AD[49931];  // data: 0xB0F1AD
extern unsigned char DataGlobal_B0F1B0[49928];  // data: 0xB0F1B0
extern unsigned char DataGlobal_B0F1B4[49924];  // data: 0xB0F1B4
extern unsigned char DataGlobal_B0F1B8[49920];  // data: 0xB0F1B8
extern unsigned char DataGlobal_B0F1C0[49912];  // data: 0xB0F1C0
extern unsigned char DataGlobal_B0F1C8[49904];  // data: 0xB0F1C8
extern unsigned char DataGlobal_B0F1CC[49900];  // data: 0xB0F1CC
extern unsigned char DataGlobal_B0F1D0[49896];  // data: 0xB0F1D0
extern unsigned char DataGlobal_B0F1D4[49892];  // data: 0xB0F1D4
extern unsigned char DataGlobal_B0F1D8[49888];  // data: 0xB0F1D8
extern unsigned char DataGlobal_B0F1E0[49880];  // data: 0xB0F1E0
extern unsigned char DataGlobal_B0F1E8[49872];  // data: 0xB0F1E8
extern unsigned char DataGlobal_B0F1EC[49868];  // data: 0xB0F1EC
extern unsigned char DataGlobal_B0F1F0[49864];  // data: 0xB0F1F0
extern unsigned char DataGlobal_B0F1F4[49860];  // data: 0xB0F1F4
extern unsigned char DataGlobal_B0F1F8[49856];  // data: 0xB0F1F8
extern unsigned char DataGlobal_B0F4E8[49104];  // data: 0xB0F4E8
extern unsigned char DataGlobal_B0F4F0[49096];  // data: 0xB0F4F0
extern unsigned char DataGlobal_B0F4F4[49092];  // data: 0xB0F4F4
extern unsigned char DataGlobal_B0F4F5[49091];  // data: 0xB0F4F5
extern unsigned char DataGlobal_B0F4FC[49084];  // data: 0xB0F4FC
extern unsigned char DataGlobal_B0F500[49080];  // data: 0xB0F500
extern unsigned char DataGlobal_B0F508[49072];  // data: 0xB0F508
extern unsigned char DataGlobal_B0F510[49064];  // data: 0xB0F510
extern unsigned char DataGlobal_B0F518[49056];  // data: 0xB0F518
extern unsigned char DataGlobal_B0F520[49048];  // data: 0xB0F520
extern unsigned char DataGlobal_B0F524[49044];  // data: 0xB0F524
extern unsigned char DataGlobal_B0F528[49040];  // data: 0xB0F528
extern unsigned char DataGlobal_B0F52C[49036];  // data: 0xB0F52C
extern unsigned char DataGlobal_B0F530[49032];  // data: 0xB0F530
extern unsigned char DataGlobal_B0F532[49030];  // data: 0xB0F532
extern unsigned char DataGlobal_B0F538[49024];  // data: 0xB0F538
extern unsigned char DataGlobal_B0F548[49008];  // data: 0xB0F548
extern unsigned char DataGlobal_B0F550[49000];  // data: 0xB0F550
extern unsigned char DataGlobal_B0F554[48996];  // data: 0xB0F554
extern unsigned char DataGlobal_B0F558[48992];  // data: 0xB0F558
extern unsigned char DataGlobal_B0F560[48984];  // data: 0xB0F560
extern unsigned char DataGlobal_B0F568[48976];  // data: 0xB0F568
extern unsigned char DataGlobal_B0F570[48968];  // data: 0xB0F570
extern unsigned char DataGlobal_B0F578[48960];  // data: 0xB0F578
extern unsigned char DataGlobal_B0F57C[48956];  // data: 0xB0F57C
extern unsigned char DataGlobal_B0F580[48952];  // data: 0xB0F580
extern unsigned char DataGlobal_B0F584[48948];  // data: 0xB0F584
extern unsigned char DataGlobal_B0F588[48944];  // data: 0xB0F588
extern unsigned char DataGlobal_B0F590[48936];  // data: 0xB0F590
extern unsigned char DataGlobal_B0F598[48928];  // data: 0xB0F598
extern unsigned char DataGlobal_B0F59C[48924];  // data: 0xB0F59C
extern unsigned char DataGlobal_B0F5A0[48920];  // data: 0xB0F5A0
extern unsigned char DataGlobal_B0F5A4[48916];  // data: 0xB0F5A4
extern unsigned char DataGlobal_B0F5A8[48912];  // data: 0xB0F5A8
extern unsigned char DataGlobal_B0F5AC[48908];  // data: 0xB0F5AC
extern unsigned char DataGlobal_B0F5B0[48904];  // data: 0xB0F5B0
extern unsigned char DataGlobal_B0F5B4[48900];  // data: 0xB0F5B4
extern unsigned char DataGlobal_B0F5C0[48888];  // data: 0xB0F5C0
extern unsigned char DataGlobal_B0F5C4[48884];  // data: 0xB0F5C4
extern unsigned char DataGlobal_B0F5C5[48883];  // data: 0xB0F5C5
extern unsigned char DataGlobal_B0F5CC[48876];  // data: 0xB0F5CC
extern unsigned char DataGlobal_B0F5D0[48872];  // data: 0xB0F5D0
extern unsigned char DataGlobal_B0F5D8[48864];  // data: 0xB0F5D8
extern unsigned char DataGlobal_B0F5DC[48860];  // data: 0xB0F5DC
extern unsigned char DataGlobal_B0F5E0[48856];  // data: 0xB0F5E0
extern unsigned char DataGlobal_B0F5E4[48852];  // data: 0xB0F5E4
extern unsigned char DataGlobal_B0F5E5[48851];  // data: 0xB0F5E5
extern unsigned char DataGlobal_B0F5E8[48848];  // data: 0xB0F5E8
extern unsigned char DataGlobal_B0F5EC[48844];  // data: 0xB0F5EC
extern unsigned char DataGlobal_B0F5F0[48840];  // data: 0xB0F5F0
extern unsigned char DataGlobal_B0F5F4[48836];  // data: 0xB0F5F4
extern unsigned char DataGlobal_B0F5F8[48832];  // data: 0xB0F5F8
extern unsigned char DataGlobal_B0F5FC[48828];  // data: 0xB0F5FC
extern unsigned char DataGlobal_B0F5FD[48827];  // data: 0xB0F5FD
extern unsigned char DataGlobal_B0F600[48824];  // data: 0xB0F600
extern unsigned char DataGlobal_B0F604[48820];  // data: 0xB0F604
extern unsigned char DataGlobal_B0F608[48816];  // data: 0xB0F608
extern unsigned char DataGlobal_B0F60C[48812];  // data: 0xB0F60C
extern unsigned char DataGlobal_B0F610[48808];  // data: 0xB0F610
extern unsigned char DataGlobal_B0F614[48804];  // data: 0xB0F614
extern unsigned char DataGlobal_B0F618[48800];  // data: 0xB0F618
extern unsigned char DataGlobal_B0F61C[48796];  // data: 0xB0F61C
extern unsigned char DataGlobal_B0F620[48792];  // data: 0xB0F620
extern unsigned char DataGlobal_B0F624[48788];  // data: 0xB0F624
extern unsigned char DataGlobal_B0F625[48787];  // data: 0xB0F625
extern unsigned char DataGlobal_B0F628[48784];  // data: 0xB0F628
extern unsigned char DataGlobal_B0F62C[48780];  // data: 0xB0F62C
extern unsigned char DataGlobal_B0F630[48776];  // data: 0xB0F630
extern unsigned char DataGlobal_B0F632[48774];  // data: 0xB0F632
extern unsigned char DataGlobal_B0F638[48768];  // data: 0xB0F638
extern unsigned char DataGlobal_B0F640[48760];  // data: 0xB0F640
extern unsigned char DataGlobal_B0F644[48756];  // data: 0xB0F644
extern unsigned char DataGlobal_B0F648[48752];  // data: 0xB0F648
extern unsigned char DataGlobal_B0F64C[48748];  // data: 0xB0F64C
extern unsigned char DataGlobal_B0F64D[48747];  // data: 0xB0F64D
extern unsigned char DataGlobal_B0F650[48744];  // data: 0xB0F650
extern unsigned char DataGlobal_B0F654[48740];  // data: 0xB0F654
extern unsigned char DataGlobal_B0F65C[48732];  // data: 0xB0F65C
extern unsigned char DataGlobal_B0F660[48728];  // data: 0xB0F660
extern unsigned char DataGlobal_B0F664[48724];  // data: 0xB0F664
extern unsigned char DataGlobal_B0F665[48723];  // data: 0xB0F665
extern unsigned char DataGlobal_B0F66C[48716];  // data: 0xB0F66C
extern unsigned char DataGlobal_B0F67C[48700];  // data: 0xB0F67C
extern unsigned char DataGlobal_B0F690[48680];  // data: 0xB0F690
extern unsigned char DataGlobal_B0F698[48672];  // data: 0xB0F698
extern unsigned char DataGlobal_B0F69C[48668];  // data: 0xB0F69C
extern unsigned char DataGlobal_B0F6A0[48664];  // data: 0xB0F6A0
extern unsigned char DataGlobal_B0F6A4[48660];  // data: 0xB0F6A4
extern unsigned char DataGlobal_B0F6A5[48659];  // data: 0xB0F6A5
extern unsigned char DataGlobal_B0F6A8[48656];  // data: 0xB0F6A8
extern unsigned char DataGlobal_B0F6AC[48652];  // data: 0xB0F6AC
extern unsigned char DataGlobal_B0F6B0[48648];  // data: 0xB0F6B0
extern unsigned char DataGlobal_B0F6B4[48644];  // data: 0xB0F6B4
extern unsigned char DataGlobal_B0F6B8[48640];  // data: 0xB0F6B8
extern unsigned char DataGlobal_B0F6C0[48632];  // data: 0xB0F6C0
extern unsigned char DataGlobal_B0F6C8[48624];  // data: 0xB0F6C8
extern unsigned char DataGlobal_B0F6CC[48620];  // data: 0xB0F6CC
extern unsigned char DataGlobal_B0F6D0[48616];  // data: 0xB0F6D0
extern unsigned char DataGlobal_B0F6D4[48612];  // data: 0xB0F6D4
extern unsigned char DataGlobal_B0F6D5[48611];  // data: 0xB0F6D5
extern unsigned char DataGlobal_B0F6D8[48608];  // data: 0xB0F6D8
extern unsigned char DataGlobal_B0F6DC[48604];  // data: 0xB0F6DC
extern unsigned char DataGlobal_B0F6E0[48600];  // data: 0xB0F6E0
extern unsigned char DataGlobal_B0F6E8[48592];  // data: 0xB0F6E8
extern unsigned char DataGlobal_B0F6F0[48584];  // data: 0xB0F6F0
extern unsigned char DataGlobal_B0F6F4[48580];  // data: 0xB0F6F4
extern unsigned char DataGlobal_B0F6F8[48576];  // data: 0xB0F6F8
extern unsigned char DataGlobal_B0F6FC[48572];  // data: 0xB0F6FC
extern unsigned char DataGlobal_B0F6FD[48571];  // data: 0xB0F6FD
extern unsigned char DataGlobal_B0F700[48568];  // data: 0xB0F700
extern unsigned char DataGlobal_B0F704[48564];  // data: 0xB0F704
extern unsigned char DataGlobal_B0F708[48560];  // data: 0xB0F708
extern unsigned char DataGlobal_B0F70C[48556];  // data: 0xB0F70C
extern unsigned char DataGlobal_B0F710[48552];  // data: 0xB0F710
extern unsigned char DataGlobal_B0F714[48548];  // data: 0xB0F714
extern unsigned char DataGlobal_B0F715[48547];  // data: 0xB0F715
extern unsigned char DataGlobal_B0F718[48544];  // data: 0xB0F718
extern unsigned char DataGlobal_B0F71C[48540];  // data: 0xB0F71C
extern unsigned char DataGlobal_B0F724[48532];  // data: 0xB0F724
extern unsigned char DataGlobal_B0F728[48528];  // data: 0xB0F728
extern unsigned char DataGlobal_B0F72C[48524];  // data: 0xB0F72C
extern unsigned char DataGlobal_B0F72D[48523];  // data: 0xB0F72D
extern unsigned char DataGlobal_B0F734[48516];  // data: 0xB0F734
extern unsigned char DataGlobal_B0F738[48512];  // data: 0xB0F738
extern unsigned char DataGlobal_B0F73C[48508];  // data: 0xB0F73C
extern unsigned char DataGlobal_B0F740[48504];  // data: 0xB0F740
extern unsigned char DataGlobal_B0F744[48500];  // data: 0xB0F744
extern unsigned char DataGlobal_B0F748[48496];  // data: 0xB0F748
extern unsigned char DataGlobal_B0F750[48488];  // data: 0xB0F750
extern unsigned char DataGlobal_B0F758[48480];  // data: 0xB0F758
extern unsigned char DataGlobal_B0F760[48472];  // data: 0xB0F760
extern unsigned char DataGlobal_B0F764[48468];  // data: 0xB0F764
extern unsigned char DataGlobal_B0F768[48464];  // data: 0xB0F768
extern unsigned char DataGlobal_B0F76C[48460];  // data: 0xB0F76C
extern unsigned char DataGlobal_B0F770[48456];  // data: 0xB0F770
extern unsigned char DataGlobal_B0F772[48454];  // data: 0xB0F772
extern unsigned char DataGlobal_B0F778[48448];  // data: 0xB0F778
extern unsigned char DataGlobal_B0F780[48440];  // data: 0xB0F780
extern unsigned char DataGlobal_B0F788[48432];  // data: 0xB0F788
extern unsigned char DataGlobal_B0F790[48424];  // data: 0xB0F790
extern unsigned char DataGlobal_B0F794[48420];  // data: 0xB0F794
extern unsigned char DataGlobal_B0F798[48416];  // data: 0xB0F798
extern unsigned char DataGlobal_B0F7A0[48408];  // data: 0xB0F7A0
extern unsigned char DataGlobal_B0F7A8[48400];  // data: 0xB0F7A8
extern unsigned char DataGlobal_B0F7B0[48392];  // data: 0xB0F7B0
extern unsigned char DataGlobal_B0F7B8[48384];  // data: 0xB0F7B8
extern unsigned char DataGlobal_B0F7BC[48380];  // data: 0xB0F7BC
extern unsigned char DataGlobal_B0F7C0[48376];  // data: 0xB0F7C0
extern unsigned char DataGlobal_B0F7C4[48372];  // data: 0xB0F7C4
extern unsigned char DataGlobal_B0F7C8[48368];  // data: 0xB0F7C8
extern unsigned char DataGlobal_B0F7D0[48360];  // data: 0xB0F7D0
extern unsigned char DataGlobal_B0F7D8[48352];  // data: 0xB0F7D8
extern unsigned char DataGlobal_B0F7E0[48344];  // data: 0xB0F7E0
extern unsigned char DataGlobal_B0F7E4[48340];  // data: 0xB0F7E4
extern unsigned char DataGlobal_B0F7E8[48336];  // data: 0xB0F7E8
extern unsigned char DataGlobal_B0F7EC[48332];  // data: 0xB0F7EC
extern unsigned char DataGlobal_B0F7F0[48328];  // data: 0xB0F7F0
extern unsigned char DataGlobal_B0F7F2[48326];  // data: 0xB0F7F2
extern unsigned char DataGlobal_B0F7F8[48320];  // data: 0xB0F7F8
extern unsigned char DataGlobal_B0F800[48312];  // data: 0xB0F800
extern unsigned char DataGlobal_B0F808[48304];  // data: 0xB0F808
extern unsigned char DataGlobal_B0F810[48296];  // data: 0xB0F810
extern unsigned char DataGlobal_B0F814[48292];  // data: 0xB0F814
extern unsigned char DataGlobal_B0F818[48288];  // data: 0xB0F818
extern unsigned char DataGlobal_B0F820[48280];  // data: 0xB0F820
extern unsigned char DataGlobal_B0F828[48272];  // data: 0xB0F828
extern unsigned char DataGlobal_B0F830[48264];  // data: 0xB0F830
extern unsigned char DataGlobal_B0F838[48256];  // data: 0xB0F838
extern unsigned char DataGlobal_B0F83C[48252];  // data: 0xB0F83C
extern unsigned char DataGlobal_B0F840[48248];  // data: 0xB0F840
extern unsigned char DataGlobal_B0F844[48244];  // data: 0xB0F844
extern unsigned char DataGlobal_B0F848[48240];  // data: 0xB0F848
extern unsigned char DataGlobal_B0F850[48232];  // data: 0xB0F850
extern unsigned char DataGlobal_B0F858[48224];  // data: 0xB0F858
extern unsigned char DataGlobal_B0F860[48216];  // data: 0xB0F860
extern unsigned char DataGlobal_B0F864[48212];  // data: 0xB0F864
extern unsigned char DataGlobal_B0F868[48208];  // data: 0xB0F868
extern unsigned char DataGlobal_B0F86C[48204];  // data: 0xB0F86C
extern unsigned char DataGlobal_B0F870[48200];  // data: 0xB0F870
extern unsigned char DataGlobal_B0F872[48198];  // data: 0xB0F872
extern unsigned char DataGlobal_B0F878[48192];  // data: 0xB0F878
extern unsigned char DataGlobal_B0F880[48184];  // data: 0xB0F880
extern unsigned char DataGlobal_B0F888[48176];  // data: 0xB0F888
extern unsigned char DataGlobal_B0F890[48168];  // data: 0xB0F890
extern unsigned char DataGlobal_B0F894[48164];  // data: 0xB0F894
extern unsigned char DataGlobal_B0F898[48160];  // data: 0xB0F898
extern unsigned char DataGlobal_B0F8A0[48152];  // data: 0xB0F8A0
extern unsigned char DataGlobal_B0F8A8[48144];  // data: 0xB0F8A8
extern unsigned char DataGlobal_B0F8B0[48136];  // data: 0xB0F8B0
extern unsigned char DataGlobal_B0F8B8[48128];  // data: 0xB0F8B8
extern unsigned char DataGlobal_B0F8BC[48124];  // data: 0xB0F8BC
extern unsigned char DataGlobal_B0F8C0[48120];  // data: 0xB0F8C0
extern unsigned char DataGlobal_B0F8C4[48116];  // data: 0xB0F8C4
extern unsigned char DataGlobal_B0F8C8[48112];  // data: 0xB0F8C8
extern unsigned char DataGlobal_B0F8D0[48104];  // data: 0xB0F8D0
extern unsigned char DataGlobal_B0F8D8[48096];  // data: 0xB0F8D8
extern unsigned char DataGlobal_B0F8E0[48088];  // data: 0xB0F8E0
extern unsigned char DataGlobal_B0F8E4[48084];  // data: 0xB0F8E4
extern unsigned char DataGlobal_B0F8E8[48080];  // data: 0xB0F8E8
extern unsigned char DataGlobal_B0F8EC[48076];  // data: 0xB0F8EC
extern unsigned char DataGlobal_B0F8F0[48072];  // data: 0xB0F8F0
extern unsigned char DataGlobal_B0F8F8[48064];  // data: 0xB0F8F8
extern unsigned char DataGlobal_B0F900[48056];  // data: 0xB0F900
extern unsigned char DataGlobal_B0F908[48048];  // data: 0xB0F908
extern unsigned char DataGlobal_B0F910[48040];  // data: 0xB0F910
extern unsigned char DataGlobal_B0F914[48036];  // data: 0xB0F914
extern unsigned char DataGlobal_B0F918[48032];  // data: 0xB0F918
extern unsigned char DataGlobal_B0F920[48024];  // data: 0xB0F920
extern unsigned char DataGlobal_B0F928[48016];  // data: 0xB0F928
extern unsigned char DataGlobal_B0F930[48008];  // data: 0xB0F930
extern unsigned char DataGlobal_B0F938[48000];  // data: 0xB0F938
extern unsigned char DataGlobal_B0F93C[47996];  // data: 0xB0F93C
extern unsigned char DataGlobal_B0F940[47992];  // data: 0xB0F940
extern unsigned char DataGlobal_B0F944[47988];  // data: 0xB0F944
extern unsigned char DataGlobal_B0F948[47984];  // data: 0xB0F948
extern unsigned char DataGlobal_B0F950[47976];  // data: 0xB0F950
extern unsigned char DataGlobal_B0F958[47968];  // data: 0xB0F958
extern unsigned char DataGlobal_B0F960[47960];  // data: 0xB0F960
extern unsigned char DataGlobal_B0F964[47956];  // data: 0xB0F964
extern unsigned char DataGlobal_B0F968[47952];  // data: 0xB0F968
extern unsigned char DataGlobal_B0F96C[47948];  // data: 0xB0F96C
extern unsigned char DataGlobal_B0F970[47944];  // data: 0xB0F970
extern unsigned char DataGlobal_B0F972[47942];  // data: 0xB0F972
extern unsigned char DataGlobal_B0F978[47936];  // data: 0xB0F978
extern unsigned char DataGlobal_B0F980[47928];  // data: 0xB0F980
extern unsigned char DataGlobal_B0F988[47920];  // data: 0xB0F988
extern unsigned char DataGlobal_B0F990[47912];  // data: 0xB0F990
extern unsigned char DataGlobal_B0F994[47908];  // data: 0xB0F994
extern unsigned char DataGlobal_B0F998[47904];  // data: 0xB0F998
extern unsigned char DataGlobal_B0F9A0[47896];  // data: 0xB0F9A0
extern unsigned char DataGlobal_B0F9A8[47888];  // data: 0xB0F9A8
extern unsigned char DataGlobal_B0F9B0[47880];  // data: 0xB0F9B0
extern unsigned char DataGlobal_B0F9B8[47872];  // data: 0xB0F9B8
extern unsigned char DataGlobal_B0F9BC[47868];  // data: 0xB0F9BC
extern unsigned char DataGlobal_B0F9C0[47864];  // data: 0xB0F9C0
extern unsigned char DataGlobal_B0F9C4[47860];  // data: 0xB0F9C4
extern unsigned char DataGlobal_B0F9C8[47856];  // data: 0xB0F9C8
extern unsigned char DataGlobal_B0F9D0[47848];  // data: 0xB0F9D0
extern unsigned char DataGlobal_B0F9D8[47840];  // data: 0xB0F9D8
extern unsigned char DataGlobal_B0F9DA[47838];  // data: 0xB0F9DA
extern unsigned char DataGlobal_B0F9DC[47836];  // data: 0xB0F9DC
extern unsigned char DataGlobal_B0F9E0[47832];  // data: 0xB0F9E0
extern unsigned char DataGlobal_B0F9E4[47828];  // data: 0xB0F9E4
extern unsigned char DataGlobal_B0F9E8[47824];  // data: 0xB0F9E8
extern unsigned char DataGlobal_B0F9EC[47820];  // data: 0xB0F9EC
extern unsigned char DataGlobal_B0F9F0[47816];  // data: 0xB0F9F0
extern unsigned char DataGlobal_B0F9F8[47808];  // data: 0xB0F9F8
extern unsigned char DataGlobal_B0F9FC[47804];  // data: 0xB0F9FC
extern unsigned char DataGlobal_B0F9FD[47803];  // data: 0xB0F9FD
extern unsigned char DataGlobal_B0FA00[47800];  // data: 0xB0FA00
extern unsigned char DataGlobal_B0FA04[47796];  // data: 0xB0FA04
extern unsigned char DataGlobal_B0FA08[47792];  // data: 0xB0FA08
extern unsigned char DataGlobal_B0FA0C[47788];  // data: 0xB0FA0C
extern unsigned char DataGlobal_B0FA10[47784];  // data: 0xB0FA10
extern unsigned char DataGlobal_B0FA14[47780];  // data: 0xB0FA14
extern unsigned char DataGlobal_B0FA18[47776];  // data: 0xB0FA18
extern unsigned char DataGlobal_B0FA1C[47772];  // data: 0xB0FA1C
extern unsigned char DataGlobal_B0FA20[47768];  // data: 0xB0FA20
extern unsigned char DataGlobal_B0FA24[47764];  // data: 0xB0FA24
extern unsigned char DataGlobal_B0FA26[47762];  // data: 0xB0FA26
extern unsigned char DataGlobal_B0FA28[47760];  // data: 0xB0FA28
extern unsigned char DataGlobal_B0FA30[47752];  // data: 0xB0FA30
extern unsigned char DataGlobal_B0FA38[47744];  // data: 0xB0FA38
extern unsigned char DataGlobal_B0FA3C[47740];  // data: 0xB0FA3C
extern unsigned char DataGlobal_B0FA40[47736];  // data: 0xB0FA40
extern unsigned char DataGlobal_B0FA48[47728];  // data: 0xB0FA48
extern unsigned char DataGlobal_B0FA4C[47724];  // data: 0xB0FA4C
extern unsigned char DataGlobal_B0FA50[47720];  // data: 0xB0FA50
extern unsigned char DataGlobal_B0FA54[47716];  // data: 0xB0FA54
extern unsigned char DataGlobal_B0FA58[47712];  // data: 0xB0FA58
extern unsigned char DataGlobal_B0FA60[47704];  // data: 0xB0FA60
extern unsigned char DataGlobal_B0FA64[47700];  // data: 0xB0FA64
extern unsigned char DataGlobal_B0FA68[47696];  // data: 0xB0FA68
extern unsigned char DataGlobal_B0FA6C[47692];  // data: 0xB0FA6C
extern unsigned char DataGlobal_B0FA70[47688];  // data: 0xB0FA70
extern unsigned char DataGlobal_B0FA74[47684];  // data: 0xB0FA74
extern unsigned char DataGlobal_B0FA78[47680];  // data: 0xB0FA78
extern unsigned char DataGlobal_B0FA80[47672];  // data: 0xB0FA80
extern unsigned char DataGlobal_B0FA84[47668];  // data: 0xB0FA84
extern unsigned char DataGlobal_B0FA88[47664];  // data: 0xB0FA88
extern unsigned char DataGlobal_B0FA8C[47660];  // data: 0xB0FA8C
extern unsigned char DataGlobal_B0FA90[47656];  // data: 0xB0FA90
extern unsigned char DataGlobal_B0FA94[47652];  // data: 0xB0FA94
extern unsigned char DataGlobal_B0FA95[47651];  // data: 0xB0FA95
extern unsigned char DataGlobal_B0FA98[47648];  // data: 0xB0FA98
extern unsigned char DataGlobal_B0FA9C[47644];  // data: 0xB0FA9C
extern unsigned char DataGlobal_B0FAA0[47640];  // data: 0xB0FAA0
extern unsigned char DataGlobal_B0FAA2[47638];  // data: 0xB0FAA2
extern unsigned char DataGlobal_B0FAA4[47636];  // data: 0xB0FAA4
extern unsigned char DataGlobal_B0FAA8[47632];  // data: 0xB0FAA8
extern unsigned char DataGlobal_B0FAAC[47628];  // data: 0xB0FAAC
extern unsigned char DataGlobal_B0FAB0[47624];  // data: 0xB0FAB0
extern unsigned char DataGlobal_B0FAB8[47616];  // data: 0xB0FAB8
extern unsigned char DataGlobal_B0FABC[47612];  // data: 0xB0FABC
extern unsigned char DataGlobal_B0FAC0[47608];  // data: 0xB0FAC0
extern unsigned char DataGlobal_B0FAC4[47604];  // data: 0xB0FAC4
extern unsigned char DataGlobal_B0FAC8[47600];  // data: 0xB0FAC8
extern unsigned char DataGlobal_B0FACC[47596];  // data: 0xB0FACC
extern unsigned char DataGlobal_B0FAD0[47592];  // data: 0xB0FAD0
extern unsigned char DataGlobal_B0FAD4[47588];  // data: 0xB0FAD4
extern unsigned char DataGlobal_B0FAD8[47584];  // data: 0xB0FAD8
extern unsigned char DataGlobal_B0FADC[47580];  // data: 0xB0FADC
extern unsigned char DataGlobal_B0FAE0[47576];  // data: 0xB0FAE0
extern unsigned char DataGlobal_B0FAE8[47568];  // data: 0xB0FAE8
extern unsigned char DataGlobal_B0FAF0[47560];  // data: 0xB0FAF0
extern unsigned char DataGlobal_B0FAF8[47552];  // data: 0xB0FAF8
extern unsigned char DataGlobal_B0FAFC[47548];  // data: 0xB0FAFC
extern unsigned char DataGlobal_B0FB00[47544];  // data: 0xB0FB00
extern unsigned char DataGlobal_B0FB04[47540];  // data: 0xB0FB04
extern unsigned char DataGlobal_B0FB06[47538];  // data: 0xB0FB06
extern unsigned char DataGlobal_B0FB08[47536];  // data: 0xB0FB08
extern unsigned char DataGlobal_B0FB0C[47532];  // data: 0xB0FB0C
extern unsigned char DataGlobal_B0FB10[47528];  // data: 0xB0FB10
extern unsigned char DataGlobal_B0FB14[47524];  // data: 0xB0FB14
extern unsigned char DataGlobal_B0FB15[47523];  // data: 0xB0FB15
extern unsigned char DataGlobal_B0FB19[47519];  // data: 0xB0FB19
extern unsigned char DataGlobal_B0FB1A[47518];  // data: 0xB0FB1A
extern unsigned char DataGlobal_B0FB1C[47516];  // data: 0xB0FB1C
extern unsigned char DataGlobal_B0FB20[47512];  // data: 0xB0FB20
extern unsigned char DataGlobal_B0FB24[47508];  // data: 0xB0FB24
extern unsigned char DataGlobal_B0FB28[47504];  // data: 0xB0FB28
extern unsigned char DataGlobal_B0FB2C[47500];  // data: 0xB0FB2C
extern unsigned char DataGlobal_B0FB30[47496];  // data: 0xB0FB30
extern unsigned char DataGlobal_B0FB34[47492];  // data: 0xB0FB34
extern unsigned char DataGlobal_B0FB38[47488];  // data: 0xB0FB38
extern unsigned char DataGlobal_B0FB40[47480];  // data: 0xB0FB40
extern unsigned char DataGlobal_B0FB48[47472];  // data: 0xB0FB48
extern unsigned char DataGlobal_B0FB4C[47468];  // data: 0xB0FB4C
extern unsigned char DataGlobal_B0FB4D[47467];  // data: 0xB0FB4D
extern unsigned char DataGlobal_B0FB4E[47466];  // data: 0xB0FB4E
extern unsigned char DataGlobal_B0FB54[47460];  // data: 0xB0FB54
extern unsigned char DataGlobal_B0FB58[47456];  // data: 0xB0FB58
extern unsigned char DataGlobal_B0FB5C[47452];  // data: 0xB0FB5C
extern unsigned char DataGlobal_B0FB60[47448];  // data: 0xB0FB60
extern unsigned char DataGlobal_B0FB64[47444];  // data: 0xB0FB64
extern unsigned char DataGlobal_B0FB68[47440];  // data: 0xB0FB68
extern unsigned char DataGlobal_B0FB6C[47436];  // data: 0xB0FB6C
extern unsigned char DataGlobal_B0FB70[47432];  // data: 0xB0FB70
extern unsigned char DataGlobal_B0FB74[47428];  // data: 0xB0FB74
extern unsigned char DataGlobal_B0FB78[47424];  // data: 0xB0FB78
extern unsigned char DataGlobal_B0FB7C[47420];  // data: 0xB0FB7C
extern unsigned char DataGlobal_B0FB80[47416];  // data: 0xB0FB80
extern unsigned char DataGlobal_B0FB84[47412];  // data: 0xB0FB84
extern unsigned char DataGlobal_B0FB88[47408];  // data: 0xB0FB88
extern unsigned char DataGlobal_B0FB8C[47404];  // data: 0xB0FB8C
extern unsigned char DataGlobal_B0FB90[47400];  // data: 0xB0FB90
extern unsigned char DataGlobal_B0FB94[47396];  // data: 0xB0FB94
extern unsigned char DataGlobal_B0FB9C[47388];  // data: 0xB0FB9C
extern unsigned char DataGlobal_B0FBA0[47384];  // data: 0xB0FBA0
extern unsigned char DataGlobal_B0FBA4[47380];  // data: 0xB0FBA4
extern unsigned char DataGlobal_B0FBA8[47376];  // data: 0xB0FBA8
extern unsigned char DataGlobal_B0FBAC[47372];  // data: 0xB0FBAC
extern unsigned char DataGlobal_B0FBB0[47368];  // data: 0xB0FBB0
extern unsigned char DataGlobal_B0FBB4[47364];  // data: 0xB0FBB4
extern unsigned char DataGlobal_B0FBB8[47360];  // data: 0xB0FBB8
extern unsigned char DataGlobal_B0FBBC[47356];  // data: 0xB0FBBC
extern unsigned char DataGlobal_B0FBC0[47352];  // data: 0xB0FBC0
extern unsigned char DataGlobal_B0FBC8[47344];  // data: 0xB0FBC8
extern unsigned char DataGlobal_B0FBCC[47340];  // data: 0xB0FBCC
extern unsigned char DataGlobal_B0FBD0[47336];  // data: 0xB0FBD0
extern unsigned char DataGlobal_B0FBD4[47332];  // data: 0xB0FBD4
extern unsigned char DataGlobal_B0FBD8[47328];  // data: 0xB0FBD8
extern unsigned char DataGlobal_B0FBDC[47324];  // data: 0xB0FBDC
extern unsigned char DataGlobal_B0FBE0[47320];  // data: 0xB0FBE0
extern unsigned char DataGlobal_B0FBE4[47316];  // data: 0xB0FBE4
extern unsigned char DataGlobal_B0FBE8[47312];  // data: 0xB0FBE8
extern unsigned char DataGlobal_B0FBEC[47308];  // data: 0xB0FBEC
extern unsigned char DataGlobal_B0FBF0[47304];  // data: 0xB0FBF0
extern unsigned char DataGlobal_B0FBF4[47300];  // data: 0xB0FBF4
extern unsigned char DataGlobal_B0FBF8[47296];  // data: 0xB0FBF8
extern unsigned char DataGlobal_B0FBFC[47292];  // data: 0xB0FBFC
extern unsigned char DataGlobal_B0FC00[47288];  // data: 0xB0FC00
extern unsigned char DataGlobal_B0FC04[47284];  // data: 0xB0FC04
extern unsigned char DataGlobal_B0FC08[47280];  // data: 0xB0FC08
extern unsigned char DataGlobal_B0FC0C[47276];  // data: 0xB0FC0C
extern unsigned char DataGlobal_B0FC10[47272];  // data: 0xB0FC10
extern unsigned char DataGlobal_B0FC14[47268];  // data: 0xB0FC14
extern unsigned char DataGlobal_B0FC18[47264];  // data: 0xB0FC18
extern unsigned char DataGlobal_B0FC20[47256];  // data: 0xB0FC20
extern unsigned char DataGlobal_B0FC24[47252];  // data: 0xB0FC24
extern unsigned char DataGlobal_B0FC28[47248];  // data: 0xB0FC28
extern unsigned char DataGlobal_B0FC2C[47244];  // data: 0xB0FC2C
extern unsigned char DataGlobal_B0FC30[47240];  // data: 0xB0FC30
extern unsigned char DataGlobal_B0FC34[47236];  // data: 0xB0FC34
extern unsigned char DataGlobal_B0FC38[47232];  // data: 0xB0FC38
extern unsigned char DataGlobal_B0FC3C[47228];  // data: 0xB0FC3C
extern unsigned char DataGlobal_B0FC40[47224];  // data: 0xB0FC40
extern unsigned char DataGlobal_B0FC44[47220];  // data: 0xB0FC44
extern unsigned char DataGlobal_B0FC48[47216];  // data: 0xB0FC48
extern unsigned char DataGlobal_B0FC4C[47212];  // data: 0xB0FC4C
extern unsigned char DataGlobal_B0FC50[47208];  // data: 0xB0FC50
extern unsigned char DataGlobal_B0FC54[47204];  // data: 0xB0FC54
extern unsigned char DataGlobal_B0FC58[47200];  // data: 0xB0FC58
extern unsigned char DataGlobal_B0FC5C[47196];  // data: 0xB0FC5C
extern unsigned char DataGlobal_B0FC60[47192];  // data: 0xB0FC60
extern unsigned char DataGlobal_B0FC64[47188];  // data: 0xB0FC64
extern unsigned char DataGlobal_B0FC68[47184];  // data: 0xB0FC68
extern unsigned char DataGlobal_B0FC6C[47180];  // data: 0xB0FC6C
extern unsigned char DataGlobal_B0FC70[47176];  // data: 0xB0FC70
extern unsigned char DataGlobal_B0FC71[47175];  // data: 0xB0FC71
extern unsigned char DataGlobal_B0FC72[47174];  // data: 0xB0FC72
extern unsigned char DataGlobal_B0FC73[47173];  // data: 0xB0FC73
extern unsigned char DataGlobal_B0FC74[47172];  // data: 0xB0FC74
extern unsigned char DataGlobal_B0FC78[47168];  // data: 0xB0FC78
extern unsigned char DataGlobal_B0FC7C[47164];  // data: 0xB0FC7C
extern unsigned char DataGlobal_B0FC7D[47163];  // data: 0xB0FC7D
extern unsigned char DataGlobal_B0FC80[47160];  // data: 0xB0FC80
extern unsigned char DataGlobal_B0FC84[47156];  // data: 0xB0FC84
extern unsigned char DataGlobal_B0FC88[47152];  // data: 0xB0FC88
extern unsigned char DataGlobal_B0FC8C[47148];  // data: 0xB0FC8C
extern unsigned char DataGlobal_B0FC90[47144];  // data: 0xB0FC90
extern unsigned char DataGlobal_B0FC91[47143];  // data: 0xB0FC91
extern unsigned char DataGlobal_B0FC92[47142];  // data: 0xB0FC92
extern unsigned char DataGlobal_B0FC93[47141];  // data: 0xB0FC93
extern unsigned char DataGlobal_B0FC94[47140];  // data: 0xB0FC94
extern unsigned char DataGlobal_B0FC95[47139];  // data: 0xB0FC95
extern unsigned char DataGlobal_B0FC96[47138];  // data: 0xB0FC96
extern unsigned char DataGlobal_B0FC97[47137];  // data: 0xB0FC97
extern unsigned char DataGlobal_B0FC98[47136];  // data: 0xB0FC98
extern unsigned char DataGlobal_B0FC99[47135];  // data: 0xB0FC99
extern unsigned char DataGlobal_B0FC9A[47134];  // data: 0xB0FC9A
extern unsigned char DataGlobal_B0FC9B[47133];  // data: 0xB0FC9B
extern unsigned char DataGlobal_B0FC9C[47132];  // data: 0xB0FC9C
extern unsigned char DataGlobal_B0FC9D[47131];  // data: 0xB0FC9D
extern unsigned char DataGlobal_B0FC9E[47130];  // data: 0xB0FC9E
extern unsigned char DataGlobal_B0FC9F[47129];  // data: 0xB0FC9F
extern unsigned char DataGlobal_B0FCA0[47128];  // data: 0xB0FCA0
extern unsigned char DataGlobal_B0FCA1[47127];  // data: 0xB0FCA1
extern unsigned char DataGlobal_B0FCA2[47126];  // data: 0xB0FCA2
extern unsigned char DataGlobal_B0FCA3[47125];  // data: 0xB0FCA3
extern unsigned char DataGlobal_B0FCA4[47124];  // data: 0xB0FCA4
extern unsigned char DataGlobal_B0FCA5[47123];  // data: 0xB0FCA5
extern unsigned char DataGlobal_B0FCA6[47122];  // data: 0xB0FCA6
extern unsigned char DataGlobal_B0FCA7[47121];  // data: 0xB0FCA7
extern unsigned char DataGlobal_B0FCA8[47120];  // data: 0xB0FCA8
extern unsigned char DataGlobal_B0FCA9[47119];  // data: 0xB0FCA9
extern unsigned char DataGlobal_B0FCAA[47118];  // data: 0xB0FCAA
extern unsigned char DataGlobal_B0FCAB[47117];  // data: 0xB0FCAB
extern unsigned char DataGlobal_B0FCAC[47116];  // data: 0xB0FCAC
extern unsigned char DataGlobal_B0FCAD[47115];  // data: 0xB0FCAD
extern unsigned char DataGlobal_B0FCAE[47114];  // data: 0xB0FCAE
extern unsigned char DataGlobal_B0FCB0[47112];  // data: 0xB0FCB0
extern unsigned char DataGlobal_B0FCB4[47108];  // data: 0xB0FCB4
extern unsigned char DataGlobal_B0FCB8[47104];  // data: 0xB0FCB8
extern unsigned char DataGlobal_B0FCBC[47100];  // data: 0xB0FCBC
extern unsigned char DataGlobal_B0FCC0[47096];  // data: 0xB0FCC0
extern unsigned char DataGlobal_B0FCC4[47092];  // data: 0xB0FCC4
extern unsigned char DataGlobal_B0FCC8[47088];  // data: 0xB0FCC8
extern unsigned char DataGlobal_B0FCCA[47086];  // data: 0xB0FCCA
extern unsigned char DataGlobal_B0FCCB[47085];  // data: 0xB0FCCB
extern unsigned char DataGlobal_B0FCCC[47084];  // data: 0xB0FCCC
extern unsigned char DataGlobal_B0FCCD[47083];  // data: 0xB0FCCD
extern unsigned char DataGlobal_B0FCCE[47082];  // data: 0xB0FCCE
extern unsigned char DataGlobal_B0FCD0[47080];  // data: 0xB0FCD0
extern unsigned char DataGlobal_B0FCD4[47076];  // data: 0xB0FCD4
extern unsigned char DataGlobal_B0FCD8[47072];  // data: 0xB0FCD8
extern unsigned char DataGlobal_B0FCD9[47071];  // data: 0xB0FCD9
extern unsigned char DataGlobal_B0FCDC[47068];  // data: 0xB0FCDC
extern unsigned char DataGlobal_B0FCE0[47064];  // data: 0xB0FCE0
extern unsigned char DataGlobal_B0FCE4[47060];  // data: 0xB0FCE4
extern unsigned char DataGlobal_B0FCE5[47059];  // data: 0xB0FCE5
extern unsigned char DataGlobal_B0FCE8[47056];  // data: 0xB0FCE8
extern unsigned char DataGlobal_B0FCEC[47052];  // data: 0xB0FCEC
extern unsigned char DataGlobal_B0FCF0[47048];  // data: 0xB0FCF0
extern unsigned char DataGlobal_B0FCF1[47047];  // data: 0xB0FCF1
extern unsigned char DataGlobal_B0FCF4[47044];  // data: 0xB0FCF4
extern unsigned char DataGlobal_B0FCF8[47040];  // data: 0xB0FCF8
extern unsigned char DataGlobal_B0FCFC[47036];  // data: 0xB0FCFC
extern unsigned char DataGlobal_B0FCFD[47035];  // data: 0xB0FCFD
extern unsigned char DataGlobal_B0FD00[47032];  // data: 0xB0FD00
extern unsigned char DataGlobal_B0FD04[47028];  // data: 0xB0FD04
extern unsigned char DataGlobal_B0FD08[47024];  // data: 0xB0FD08
extern unsigned char DataGlobal_B0FD09[47023];  // data: 0xB0FD09
extern unsigned char DataGlobal_B0FD0C[47020];  // data: 0xB0FD0C
extern unsigned char DataGlobal_B0FD10[47016];  // data: 0xB0FD10
extern unsigned char DataGlobal_B0FD14[47012];  // data: 0xB0FD14
extern unsigned char DataGlobal_B0FD15[47011];  // data: 0xB0FD15
extern unsigned char DataGlobal_B0FD18[47008];  // data: 0xB0FD18
extern unsigned char DataGlobal_B0FD1C[47004];  // data: 0xB0FD1C
extern unsigned char DataGlobal_B0FD20[47000];  // data: 0xB0FD20
extern unsigned char DataGlobal_B0FD21[46999];  // data: 0xB0FD21
extern unsigned char DataGlobal_B0FD24[46996];  // data: 0xB0FD24
extern unsigned char DataGlobal_B0FD28[46992];  // data: 0xB0FD28
extern unsigned char DataGlobal_B0FD2C[46988];  // data: 0xB0FD2C
extern unsigned char DataGlobal_B0FD2D[46987];  // data: 0xB0FD2D
extern unsigned char DataGlobal_B0FD30[46984];  // data: 0xB0FD30
extern unsigned char DataGlobal_B0FD34[46980];  // data: 0xB0FD34
extern unsigned char DataGlobal_B0FD38[46976];  // data: 0xB0FD38
extern unsigned char DataGlobal_B0FD39[46975];  // data: 0xB0FD39
extern unsigned char DataGlobal_B0FD3C[46972];  // data: 0xB0FD3C
extern unsigned char DataGlobal_B0FD40[46968];  // data: 0xB0FD40
extern unsigned char DataGlobal_B0FD44[46964];  // data: 0xB0FD44
extern unsigned char DataGlobal_B0FD45[46963];  // data: 0xB0FD45
extern unsigned char DataGlobal_B0FD48[46960];  // data: 0xB0FD48
extern unsigned char DataGlobal_B0FD4C[46956];  // data: 0xB0FD4C
extern unsigned char DataGlobal_B0FD50[46952];  // data: 0xB0FD50
extern unsigned char DataGlobal_B0FD51[46951];  // data: 0xB0FD51
extern unsigned char DataGlobal_B0FD54[46948];  // data: 0xB0FD54
extern unsigned char DataGlobal_B0FD58[46944];  // data: 0xB0FD58
extern unsigned char DataGlobal_B0FD5C[46940];  // data: 0xB0FD5C
extern unsigned char DataGlobal_B0FD5D[46939];  // data: 0xB0FD5D
extern unsigned char DataGlobal_B0FD60[46936];  // data: 0xB0FD60
extern unsigned char DataGlobal_B0FD64[46932];  // data: 0xB0FD64
extern unsigned char DataGlobal_B0FD70[46920];  // data: 0xB0FD70
extern unsigned char DataGlobal_B0FDD8[46816];  // data: 0xB0FDD8
extern unsigned char DataGlobal_B0FDE0[46808];  // data: 0xB0FDE0
extern unsigned char DataGlobal_B0FDE4[46804];  // data: 0xB0FDE4
extern unsigned char DataGlobal_B0FDE8[46800];  // data: 0xB0FDE8
extern unsigned char DataGlobal_B0FDEC[46796];  // data: 0xB0FDEC
extern unsigned char DataGlobal_B0FDF0[46792];  // data: 0xB0FDF0
extern unsigned char DataGlobal_B0FDF2[46790];  // data: 0xB0FDF2
extern unsigned char DataGlobal_B0FDF8[46784];  // data: 0xB0FDF8
extern unsigned char DataGlobal_B0FE00[46776];  // data: 0xB0FE00
extern unsigned char DataGlobal_B0FE08[46768];  // data: 0xB0FE08
extern unsigned char DataGlobal_B0FE10[46760];  // data: 0xB0FE10
extern unsigned char DataGlobal_B0FE14[46756];  // data: 0xB0FE14
extern unsigned char DataGlobal_B0FE18[46752];  // data: 0xB0FE18
extern unsigned char DataGlobal_B0FE20[46744];  // data: 0xB0FE20
extern unsigned char DataGlobal_B0FE28[46736];  // data: 0xB0FE28
extern unsigned char DataGlobal_B0FE30[46728];  // data: 0xB0FE30
extern unsigned char DataGlobal_B0FE38[46720];  // data: 0xB0FE38
extern unsigned char DataGlobal_B0FE3C[46716];  // data: 0xB0FE3C
extern unsigned char DataGlobal_B0FE40[46712];  // data: 0xB0FE40
extern unsigned char DataGlobal_B0FE44[46708];  // data: 0xB0FE44
extern unsigned char DataGlobal_B0FE48[46704];  // data: 0xB0FE48
extern unsigned char DataGlobal_B0FE50[46696];  // data: 0xB0FE50
extern unsigned char DataGlobal_B0FE54[46692];  // data: 0xB0FE54
extern unsigned char DataGlobal_B0FE58[46688];  // data: 0xB0FE58
extern unsigned char DataGlobal_B0FE5C[46684];  // data: 0xB0FE5C
extern unsigned char DataGlobal_B0FE60[46680];  // data: 0xB0FE60
extern unsigned char DataGlobal_B0FE64[46676];  // data: 0xB0FE64
extern unsigned char DataGlobal_B0FE65[46675];  // data: 0xB0FE65
extern unsigned char DataGlobal_B0FE68[46672];  // data: 0xB0FE68
extern unsigned char DataGlobal_B0FE70[46664];  // data: 0xB0FE70
extern unsigned char DataGlobal_B0FE78[46656];  // data: 0xB0FE78
extern unsigned char DataGlobal_B0FE80[46648];  // data: 0xB0FE80
extern unsigned char DataGlobal_B0FE84[46644];  // data: 0xB0FE84
extern unsigned char DataGlobal_B0FE88[46640];  // data: 0xB0FE88
extern unsigned char DataGlobal_B0FE8C[46636];  // data: 0xB0FE8C
extern unsigned char DataGlobal_B0FE90[46632];  // data: 0xB0FE90
extern unsigned char DataGlobal_B0FE92[46630];  // data: 0xB0FE92
extern unsigned char DataGlobal_B11E98[38432];  // data: 0xB11E98
extern unsigned char DataGlobal_B12EA0[34328];  // data: 0xB12EA0
extern unsigned char DataGlobal_B13EA8[30224];  // data: 0xB13EA8
extern unsigned char DataGlobal_B13EB0[30216];  // data: 0xB13EB0
extern unsigned char DataGlobal_B13F24[30100];  // data: 0xB13F24
extern unsigned char DataGlobal_B17F24[13716];  // data: 0xB17F24
extern unsigned char DataGlobal_B1BF28[4];  // data: 0xB1BF28
extern unsigned char DataGlobal_B1BF30[4];  // data: 0xB1BF30
extern unsigned char DataGlobal_B1BF38[4];  // data: 0xB1BF38
extern unsigned char DataGlobal_B1CF38[4];  // data: 0xB1CF38
extern unsigned char DataGlobal_B1CF40[4];  // data: 0xB1CF40
extern unsigned char DataGlobal_B1CF44[4];  // data: 0xB1CF44
extern unsigned char DataGlobal_B1CF48[4];  // data: 0xB1CF48
extern unsigned char DataGlobal_B1CF4C[4];  // data: 0xB1CF4C
extern unsigned char DataGlobal_B1CF50[4];  // data: 0xB1CF50
extern unsigned char DataGlobal_B1CF58[4];  // data: 0xB1CF58
extern unsigned char DataGlobal_B1CF5C[4];  // data: 0xB1CF5C
extern unsigned char DataGlobal_B1CF60[4];  // data: 0xB1CF60
extern unsigned char DataGlobal_B1CF68[4];  // data: 0xB1CF68
extern unsigned char DataGlobal_B1CF6C[4];  // data: 0xB1CF6C
extern unsigned char DataGlobal_B1CF70[4];  // data: 0xB1CF70
extern unsigned char DataGlobal_B1CF78[4];  // data: 0xB1CF78
extern unsigned char DataGlobal_B1CF7C[4];  // data: 0xB1CF7C
extern unsigned char DataGlobal_B1CF80[4];  // data: 0xB1CF80
extern unsigned char DataGlobal_B1CF84[4];  // data: 0xB1CF84
extern unsigned char DataGlobal_B1CF88[4];  // data: 0xB1CF88
extern unsigned char DataGlobal_B1CF8C[4];  // data: 0xB1CF8C
extern unsigned char DataGlobal_B1CF94[4];  // data: 0xB1CF94
extern unsigned char DataGlobal_B1CFA0[4];  // data: 0xB1CFA0
extern unsigned char DataGlobal_B1CFA8[16];  // data: 0xB1CFA8
extern unsigned char DataGlobal_B1CFAC[12];  // data: 0xB1CFAC
extern unsigned char DataGlobal_B1CFB0[8];  // data: 0xB1CFB0
extern unsigned char DataGlobal_B1CFB4[4];  // data: 0xB1CFB4
extern unsigned char DataGlobal_B1CFC4[12];  // data: 0xB1CFC4
extern unsigned char DataGlobal_B1CFC8[8];  // data: 0xB1CFC8
extern unsigned char DataGlobal_B1CFCC[4];  // data: 0xB1CFCC
extern unsigned char DataGlobal_B1CFD0[4];  // data: 0xB1CFD0
extern unsigned char DataGlobal_B1CFD8[4];  // data: 0xB1CFD8
extern unsigned char DataGlobal_B1CFE0[4];  // data: 0xB1CFE0
extern unsigned char DataGlobal_B1CFE8[4];  // data: 0xB1CFE8
extern unsigned char DataGlobal_B1CFEC[4];  // data: 0xB1CFEC
extern unsigned char DataGlobal_B1CFF0[4];  // data: 0xB1CFF0
extern unsigned char DataGlobal_B1CFF8[4];  // data: 0xB1CFF8
extern unsigned char DataGlobal_B1D000[4];  // data: 0xB1D000
extern unsigned char DataGlobal_B1D008[4];  // data: 0xB1D008
extern unsigned int DataGlobal_B1D010;  // data: 0xB1D010
extern unsigned int DataGlobal_B1D014;  // data: 0xB1D014
extern unsigned int DataGlobal_B1D018;  // data: 0xB1D018
extern unsigned int DataGlobal_B1D01C;  // data: 0xB1D01C
extern unsigned int DataGlobal_B1D020;  // data: 0xB1D020
extern unsigned int DataGlobal_B1D024;  // data: 0xB1D024
extern unsigned int DataGlobal_B1D028;  // data: 0xB1D028
extern unsigned int DataGlobal_B1D02C;  // data: 0xB1D02C
extern unsigned int DataGlobal_B1D030;  // data: 0xB1D030
extern unsigned int DataGlobal_B1D034;  // data: 0xB1D034
extern unsigned int DataGlobal_B1D038;  // data: 0xB1D038
extern unsigned int DataGlobal_B1D03C;  // data: 0xB1D03C
extern unsigned int DataGlobal_B1D040;  // data: 0xB1D040
extern unsigned int DataGlobal_B1D044;  // data: 0xB1D044
extern unsigned int DataGlobal_B1D048;  // data: 0xB1D048
extern unsigned int DataGlobal_B1D04C;  // data: 0xB1D04C
extern unsigned int DataGlobal_B1D050;  // data: 0xB1D050
extern unsigned int DataGlobal_B1D054;  // data: 0xB1D054
extern unsigned int DataGlobal_B1D058;  // data: 0xB1D058
extern unsigned int DataGlobal_B1D05C;  // data: 0xB1D05C
extern unsigned int DataGlobal_B1D060;  // data: 0xB1D060
extern unsigned int DataGlobal_B1D064;  // data: 0xB1D064
extern unsigned int DataGlobal_B1D068;  // data: 0xB1D068
extern unsigned int DataGlobal_B1D06C;  // data: 0xB1D06C
extern unsigned int DataGlobal_B1D070;  // data: 0xB1D070
extern unsigned int DataGlobal_B1D074;  // data: 0xB1D074
extern unsigned int DataGlobal_B1D078;  // data: 0xB1D078
extern unsigned int DataGlobal_B1D07C;  // data: 0xB1D07C
extern unsigned int DataGlobal_B1D080;  // data: 0xB1D080
extern unsigned int DataGlobal_B1D084;  // data: 0xB1D084
extern unsigned int DataGlobal_B1D088;  // data: 0xB1D088
extern unsigned int DataGlobal_B1D08C;  // data: 0xB1D08C
extern unsigned int DataGlobal_B1D090;  // data: 0xB1D090
extern unsigned int DataGlobal_B1D094;  // data: 0xB1D094
extern unsigned int DataGlobal_B1D098;  // data: 0xB1D098
extern unsigned int DataGlobal_B1D09C;  // data: 0xB1D09C
extern unsigned char DataGlobal_B1D0A0[4];  // data: 0xB1D0A0
extern unsigned char DataGlobal_B1D0A4[4];  // data: 0xB1D0A4
extern unsigned char DataGlobal_B1D0A8[4];  // data: 0xB1D0A8
extern unsigned char DataGlobal_B1D0AC[4];  // data: 0xB1D0AC
extern unsigned char DataGlobal_B1D0B0[4];  // data: 0xB1D0B0
extern unsigned char DataGlobal_B1D0B8[4];  // data: 0xB1D0B8
extern unsigned char DataGlobal_B1D0C0[4];  // data: 0xB1D0C0
extern unsigned char DataGlobal_B1D0C8[4];  // data: 0xB1D0C8
extern unsigned char DataGlobal_B1D0CC[4];  // data: 0xB1D0CC
extern unsigned char DataGlobal_B1D0D0[4];  // data: 0xB1D0D0
extern unsigned char DataGlobal_B1D0D4[4];  // data: 0xB1D0D4
extern unsigned char DataGlobal_B1D0D8[4];  // data: 0xB1D0D8
extern unsigned char DataGlobal_B1D0DA[4];  // data: 0xB1D0DA
extern unsigned char DataGlobal_B1D0E0[4];  // data: 0xB1D0E0
extern unsigned char DataGlobal_B1D0E8[4];  // data: 0xB1D0E8
extern unsigned char DataGlobal_B1D0F0[4];  // data: 0xB1D0F0
extern unsigned char DataGlobal_B1D0F8[4];  // data: 0xB1D0F8
extern unsigned char DataGlobal_B1D0FC[4];  // data: 0xB1D0FC
extern unsigned char DataGlobal_B1D100[4];  // data: 0xB1D100
extern unsigned char DataGlobal_B1D108[4];  // data: 0xB1D108
extern unsigned char DataGlobal_B1D110[4];  // data: 0xB1D110
extern unsigned char DataGlobal_B1D118[4];  // data: 0xB1D118
extern unsigned char DataGlobal_B1D120[4];  // data: 0xB1D120
extern unsigned char DataGlobal_B1D124[4];  // data: 0xB1D124
extern unsigned char DataGlobal_B1D128[4];  // data: 0xB1D128
extern unsigned char DataGlobal_B1D12C[4];  // data: 0xB1D12C
extern unsigned char DataGlobal_B1D130[4];  // data: 0xB1D130
extern unsigned char DataGlobal_B1D138[4];  // data: 0xB1D138
extern unsigned char DataGlobal_B1D140[4];  // data: 0xB1D140
extern unsigned char DataGlobal_B1D144[4];  // data: 0xB1D144
extern unsigned char DataGlobal_B1D148[4];  // data: 0xB1D148
extern unsigned char DataGlobal_B1D14C[4];  // data: 0xB1D14C
extern unsigned char DataGlobal_B1D150[4];  // data: 0xB1D150
extern unsigned char DataGlobal_B1D158[4];  // data: 0xB1D158
extern unsigned char DataGlobal_B1D15C[4];  // data: 0xB1D15C
extern unsigned char DataGlobal_B1D160[4];  // data: 0xB1D160
extern unsigned char DataGlobal_B1D164[4];  // data: 0xB1D164
extern unsigned char DataGlobal_B1D168[4];  // data: 0xB1D168
extern unsigned char DataGlobal_B1D16A[4];  // data: 0xB1D16A
extern unsigned char DataGlobal_B1D170[4];  // data: 0xB1D170
extern unsigned char DataGlobal_B1D178[4];  // data: 0xB1D178
extern unsigned char DataGlobal_B1D188[90160];  // data: 0xB1D188
extern unsigned char DataGlobal_B1D18C[90156];  // data: 0xB1D18C
extern unsigned char DataGlobal_B1D190[90152];  // data: 0xB1D190
extern unsigned char DataGlobal_B1D198[90144];  // data: 0xB1D198
extern unsigned char DataGlobal_B1D1A0[90136];  // data: 0xB1D1A0
extern unsigned char DataGlobal_B1D1A8[90128];  // data: 0xB1D1A8
extern unsigned char DataGlobal_B1D1B0[90120];  // data: 0xB1D1B0
extern unsigned char DataGlobal_B1D1B4[90116];  // data: 0xB1D1B4
extern unsigned char DataGlobal_B1D1B8[90112];  // data: 0xB1D1B8
extern unsigned char DataGlobal_B1D1BC[90108];  // data: 0xB1D1BC
extern unsigned char DataGlobal_B1D1C0[90104];  // data: 0xB1D1C0
extern unsigned char DataGlobal_B1D1C8[90096];  // data: 0xB1D1C8
extern unsigned char DataGlobal_B1D1D0[90088];  // data: 0xB1D1D0
extern unsigned char DataGlobal_B1D1D8[90080];  // data: 0xB1D1D8
extern unsigned char DataGlobal_B1D1DC[90076];  // data: 0xB1D1DC
extern unsigned char DataGlobal_B1D1E0[90072];  // data: 0xB1D1E0
extern unsigned char DataGlobal_B1D1E4[90068];  // data: 0xB1D1E4
extern unsigned char DataGlobal_B1D1E8[90064];  // data: 0xB1D1E8
extern unsigned char DataGlobal_B1D1EA[90062];  // data: 0xB1D1EA
extern unsigned char DataGlobal_B1D1F0[90056];  // data: 0xB1D1F0
extern unsigned char DataGlobal_B1D1F8[90048];  // data: 0xB1D1F8
extern unsigned char DataGlobal_B1D200[90040];  // data: 0xB1D200
extern unsigned char DataGlobal_B1D208[90032];  // data: 0xB1D208
extern unsigned char DataGlobal_B1D20C[90028];  // data: 0xB1D20C
extern unsigned char DataGlobal_B1D210[90024];  // data: 0xB1D210
extern unsigned char DataGlobal_B1D218[90016];  // data: 0xB1D218
extern unsigned char DataGlobal_B1D220[90008];  // data: 0xB1D220
extern unsigned char DataGlobal_B1D228[90000];  // data: 0xB1D228
extern unsigned char DataGlobal_B1D230[89992];  // data: 0xB1D230
extern unsigned char DataGlobal_B1D234[89988];  // data: 0xB1D234
extern unsigned char DataGlobal_B1D238[89984];  // data: 0xB1D238
extern unsigned char DataGlobal_B1D23C[89980];  // data: 0xB1D23C
extern unsigned char DataGlobal_B1D240[89976];  // data: 0xB1D240
extern unsigned char DataGlobal_B1D248[89968];  // data: 0xB1D248
extern unsigned char DataGlobal_B1D250[89960];  // data: 0xB1D250
extern unsigned char DataGlobal_B1D258[89952];  // data: 0xB1D258
extern unsigned char DataGlobal_B1D260[89944];  // data: 0xB1D260
extern unsigned char DataGlobal_B1D264[89940];  // data: 0xB1D264
extern unsigned char DataGlobal_B1D268[89936];  // data: 0xB1D268
extern unsigned char DataGlobal_B1D26C[89932];  // data: 0xB1D26C
extern unsigned char DataGlobal_B1D270[89928];  // data: 0xB1D270
extern unsigned char DataGlobal_B1D272[89926];  // data: 0xB1D272
extern unsigned char DataGlobal_B1D278[89920];  // data: 0xB1D278
extern unsigned char DataGlobal_B1D280[89912];  // data: 0xB1D280
extern unsigned char DataGlobal_B1D288[89904];  // data: 0xB1D288
extern unsigned char DataGlobal_B1D290[89896];  // data: 0xB1D290
extern unsigned char DataGlobal_B1D298[89888];  // data: 0xB1D298
extern unsigned char DataGlobal_B1D29C[89884];  // data: 0xB1D29C
extern unsigned char DataGlobal_B1D29D[89883];  // data: 0xB1D29D
extern unsigned char DataGlobal_B1D2A4[89876];  // data: 0xB1D2A4
extern unsigned char DataGlobal_B1D2A8[89872];  // data: 0xB1D2A8
extern unsigned char DataGlobal_B1D2AC[89868];  // data: 0xB1D2AC
extern unsigned char DataGlobal_B1D2B0[89864];  // data: 0xB1D2B0
extern unsigned char DataGlobal_B1D2B8[89856];  // data: 0xB1D2B8
extern unsigned char DataGlobal_B1D2C0[89848];  // data: 0xB1D2C0
extern unsigned char DataGlobal_B1D2C8[89840];  // data: 0xB1D2C8
extern unsigned char DataGlobal_B1D2D0[89832];  // data: 0xB1D2D0
extern unsigned char DataGlobal_B1D2D4[89828];  // data: 0xB1D2D4
extern unsigned char DataGlobal_B1D2D8[89824];  // data: 0xB1D2D8
extern unsigned char DataGlobal_B1D2DC[89820];  // data: 0xB1D2DC
extern unsigned char DataGlobal_B1D2E0[89816];  // data: 0xB1D2E0
extern unsigned char DataGlobal_B1D2E8[89808];  // data: 0xB1D2E8
extern unsigned char DataGlobal_B1D2EC[89804];  // data: 0xB1D2EC
extern unsigned char DataGlobal_B1D2F8[89792];  // data: 0xB1D2F8
extern unsigned char DataGlobal_B1D300[89784];  // data: 0xB1D300
extern unsigned char DataGlobal_B1D304[89780];  // data: 0xB1D304
extern unsigned char DataGlobal_B1D308[89776];  // data: 0xB1D308
extern unsigned char DataGlobal_B1D30C[89772];  // data: 0xB1D30C
extern unsigned char DataGlobal_B1D310[89768];  // data: 0xB1D310
extern unsigned char DataGlobal_B1D312[89766];  // data: 0xB1D312
extern unsigned char DataGlobal_B1D318[89760];  // data: 0xB1D318
extern unsigned char DataGlobal_B1D320[89752];  // data: 0xB1D320
extern unsigned char DataGlobal_B1D330[89736];  // data: 0xB1D330
extern unsigned char DataGlobal_B1D338[89728];  // data: 0xB1D338
extern unsigned char DataGlobal_B1D340[89720];  // data: 0xB1D340
extern unsigned char DataGlobal_B1D344[89716];  // data: 0xB1D344
extern unsigned char DataGlobal_B1D348[89712];  // data: 0xB1D348
extern unsigned char DataGlobal_B1D350[89704];  // data: 0xB1D350
extern unsigned char DataGlobal_B1D358[89696];  // data: 0xB1D358
extern unsigned char DataGlobal_B1D360[89688];  // data: 0xB1D360
extern unsigned char DataGlobal_B1D368[89680];  // data: 0xB1D368
extern unsigned char DataGlobal_B1D36C[89676];  // data: 0xB1D36C
extern unsigned char DataGlobal_B1D370[89672];  // data: 0xB1D370
extern unsigned char DataGlobal_B1D378[89664];  // data: 0xB1D378
extern unsigned char DataGlobal_B1D380[89656];  // data: 0xB1D380
extern unsigned char DataGlobal_B1D384[89652];  // data: 0xB1D384
extern unsigned char DataGlobal_B1D385[89651];  // data: 0xB1D385
extern unsigned char DataGlobal_B1D38C[89644];  // data: 0xB1D38C
extern unsigned char DataGlobal_B1D390[89640];  // data: 0xB1D390
extern unsigned char DataGlobal_B1D398[89632];  // data: 0xB1D398
extern unsigned char DataGlobal_B1D3A0[89624];  // data: 0xB1D3A0
extern unsigned char DataGlobal_B1D3A4[89620];  // data: 0xB1D3A4
extern unsigned char DataGlobal_B1D3A8[89616];  // data: 0xB1D3A8
extern unsigned char DataGlobal_B1D3AC[89612];  // data: 0xB1D3AC
extern unsigned char DataGlobal_B1D3B0[89608];  // data: 0xB1D3B0
extern unsigned char DataGlobal_B1D3B8[89600];  // data: 0xB1D3B8
extern unsigned char DataGlobal_B1D3C0[89592];  // data: 0xB1D3C0
extern unsigned char DataGlobal_B1D3C8[89584];  // data: 0xB1D3C8
extern unsigned char DataGlobal_B1D3CC[89580];  // data: 0xB1D3CC
extern unsigned char DataGlobal_B1D3D4[89572];  // data: 0xB1D3D4
extern unsigned char DataGlobal_B1D3D6[89570];  // data: 0xB1D3D6
extern unsigned char DataGlobal_B1D3D8[89568];  // data: 0xB1D3D8
extern unsigned char DataGlobal_B1D3E0[89560];  // data: 0xB1D3E0
extern unsigned char DataGlobal_B1D3E8[89552];  // data: 0xB1D3E8
extern unsigned char DataGlobal_B1D3F0[89544];  // data: 0xB1D3F0
extern unsigned char DataGlobal_B1D3F4[89540];  // data: 0xB1D3F4
extern unsigned char DataGlobal_B1D400[89528];  // data: 0xB1D400
extern unsigned char DataGlobal_B1D408[89520];  // data: 0xB1D408
extern unsigned char DataGlobal_B1D410[89512];  // data: 0xB1D410
extern unsigned char DataGlobal_B1D414[89508];  // data: 0xB1D414
extern unsigned char DataGlobal_B1D418[89504];  // data: 0xB1D418
extern unsigned char DataGlobal_B1D420[89496];  // data: 0xB1D420
extern unsigned char DataGlobal_B1D428[89488];  // data: 0xB1D428
extern unsigned char DataGlobal_B1D430[89480];  // data: 0xB1D430
extern unsigned char DataGlobal_B1D438[89472];  // data: 0xB1D438
extern unsigned char DataGlobal_B1D440[89464];  // data: 0xB1D440
extern unsigned char DataGlobal_B1D444[89460];  // data: 0xB1D444
extern unsigned char DataGlobal_B1D448[89456];  // data: 0xB1D448
extern unsigned char DataGlobal_B1D450[89448];  // data: 0xB1D450
extern unsigned char DataGlobal_B1D474[89412];  // data: 0xB1D474
extern unsigned char DataGlobal_B1D480[89400];  // data: 0xB1D480
extern unsigned char DataGlobal_B1D488[89392];  // data: 0xB1D488
extern unsigned char DataGlobal_B1D490[89384];  // data: 0xB1D490
extern unsigned char DataGlobal_B1D498[89376];  // data: 0xB1D498
extern unsigned char DataGlobal_B1D4A0[89368];  // data: 0xB1D4A0
extern unsigned char DataGlobal_B1D4A8[89360];  // data: 0xB1D4A8
extern unsigned char DataGlobal_B1D4AC[89356];  // data: 0xB1D4AC
extern unsigned char DataGlobal_B1D4AD[89355];  // data: 0xB1D4AD
extern unsigned char DataGlobal_B1D4B4[89348];  // data: 0xB1D4B4
extern unsigned char DataGlobal_B1D4B8[89344];  // data: 0xB1D4B8
extern unsigned char DataGlobal_B1D4BC[89340];  // data: 0xB1D4BC
extern unsigned char DataGlobal_B1D4C0[89336];  // data: 0xB1D4C0
extern unsigned char DataGlobal_B1D4C4[89332];  // data: 0xB1D4C4
extern unsigned char DataGlobal_B1D4C8[89328];  // data: 0xB1D4C8
extern unsigned char DataGlobal_B1D4D0[89320];  // data: 0xB1D4D0
extern unsigned char DataGlobal_B1D4D8[89312];  // data: 0xB1D4D8
extern unsigned char DataGlobal_B1D5E0[89048];  // data: 0xB1D5E0
extern unsigned char DataGlobal_B1D5E1[89047];  // data: 0xB1D5E1
extern unsigned char DataGlobal_B2D5E0[23512];  // data: 0xB2D5E0
extern unsigned char DataGlobal_B2D5E4[23508];  // data: 0xB2D5E4
extern unsigned char DataGlobal_B2D5E8[23504];  // data: 0xB2D5E8
extern unsigned char DataGlobal_B2D5EC[23500];  // data: 0xB2D5EC
extern unsigned char DataGlobal_B2D7F0[22984];  // data: 0xB2D7F0
extern unsigned char DataGlobal_B2D7F4[22980];  // data: 0xB2D7F4
extern unsigned char DataGlobal_B2D7F8[22976];  // data: 0xB2D7F8
extern unsigned char DataGlobal_B2D7FC[22972];  // data: 0xB2D7FC
extern unsigned char DataGlobal_B2D800[22968];  // data: 0xB2D800
extern unsigned char DataGlobal_B2D804[22964];  // data: 0xB2D804
extern unsigned char DataGlobal_B2D810[22952];  // data: 0xB2D810
extern unsigned char DataGlobal_B2D814[22948];  // data: 0xB2D814
extern unsigned char DataGlobal_B2D818[22944];  // data: 0xB2D818
extern unsigned char DataGlobal_B2D81C[22940];  // data: 0xB2D81C
extern unsigned char DataGlobal_B2D820[22936];  // data: 0xB2D820
extern unsigned char DataGlobal_B2D824[22932];  // data: 0xB2D824
extern unsigned char DataGlobal_B2D928[22672];  // data: 0xB2D928
extern unsigned char DataGlobal_B2D92C[22668];  // data: 0xB2D92C
extern unsigned char DataGlobal_B2D930[22664];  // data: 0xB2D930
extern unsigned char DataGlobal_B2D934[22660];  // data: 0xB2D934
extern unsigned char DataGlobal_B2D938[22656];  // data: 0xB2D938
extern unsigned char DataGlobal_B2D93C[22652];  // data: 0xB2D93C
extern unsigned char DataGlobal_B2D948[22640];  // data: 0xB2D948
extern unsigned char DataGlobal_B2D94C[22636];  // data: 0xB2D94C
extern unsigned char DataGlobal_B2D950[22632];  // data: 0xB2D950
extern unsigned char DataGlobal_B2D958[22624];  // data: 0xB2D958
extern unsigned char DataGlobal_B2D980[22584];  // data: 0xB2D980
extern unsigned char DataGlobal_B2FB58[13920];  // data: 0xB2FB58
extern unsigned char DataGlobal_B2FB60[13912];  // data: 0xB2FB60
extern unsigned char DataGlobal_B2FB64[13908];  // data: 0xB2FB64
extern unsigned char DataGlobal_B2FB68[13904];  // data: 0xB2FB68
extern unsigned char DataGlobal_B2FB6C[13900];  // data: 0xB2FB6C
extern unsigned char DataGlobal_B2FB70[13896];  // data: 0xB2FB70
extern unsigned char DataGlobal_B2FB74[13892];  // data: 0xB2FB74
extern unsigned char DataGlobal_B2FB78[13888];  // data: 0xB2FB78
extern unsigned char DataGlobal_B2FB79[13887];  // data: 0xB2FB79
extern unsigned char DataGlobal_B2FE79[13119];  // data: 0xB2FE79
extern unsigned char DataGlobal_B3FF78[4];  // data: 0xB3FF78
extern unsigned char DataGlobal_B3FF84[36];  // data: 0xB3FF84
extern unsigned char DataGlobal_B43F10[4];  // data: 0xB43F10
extern unsigned char DataGlobal_B43F40[4];  // data: 0xB43F40
extern unsigned char DataGlobal_B43F70[4];  // data: 0xB43F70
extern unsigned char DataGlobal_B43FA0[4];  // data: 0xB43FA0
extern unsigned char DataGlobal_B43FD0[4];  // data: 0xB43FD0
extern unsigned char DataGlobal_B44000[4];  // data: 0xB44000
extern unsigned char DataGlobal_B44030[4];  // data: 0xB44030
extern unsigned char DataGlobal_B44060[4];  // data: 0xB44060
extern unsigned char DataGlobal_B44090[4];  // data: 0xB44090
extern unsigned char DataGlobal_B440C0[4];  // data: 0xB440C0
extern unsigned char DataGlobal_B440F0[4];  // data: 0xB440F0
extern unsigned char DataGlobal_B44120[4];  // data: 0xB44120
extern unsigned char DataGlobal_B44150[4];  // data: 0xB44150
extern unsigned char DataGlobal_B44180[4];  // data: 0xB44180
extern unsigned char DataGlobal_B441B0[4];  // data: 0xB441B0
extern unsigned char DataGlobal_B441E0[4];  // data: 0xB441E0
extern unsigned char DataGlobal_B44210[4];  // data: 0xB44210
extern unsigned char DataGlobal_B44240[4];  // data: 0xB44240
extern unsigned char DataGlobal_B44270[4];  // data: 0xB44270
extern unsigned char DataGlobal_B442A0[4];  // data: 0xB442A0
extern unsigned char DataGlobal_B442D0[4];  // data: 0xB442D0
extern unsigned char DataGlobal_B450B8[4];  // data: 0xB450B8
extern unsigned char DataGlobal_B45188[4];  // data: 0xB45188
extern unsigned char DataGlobal_B451B8[4];  // data: 0xB451B8
extern unsigned char DataGlobal_B451E8[4];  // data: 0xB451E8
extern unsigned char DataGlobal_B45218[4];  // data: 0xB45218
extern unsigned char DataGlobal_B45248[4];  // data: 0xB45248
extern unsigned char DataGlobal_B45278[4];  // data: 0xB45278
extern unsigned char DataGlobal_B452A8[4];  // data: 0xB452A8
extern unsigned char DataGlobal_B452D8[4];  // data: 0xB452D8
extern unsigned char DataGlobal_B45308[4];  // data: 0xB45308
extern unsigned char DataGlobal_B45338[4];  // data: 0xB45338
extern unsigned char DataGlobal_B45368[4];  // data: 0xB45368
extern unsigned char DataGlobal_B45398[4];  // data: 0xB45398
extern unsigned char DataGlobal_B453C8[4];  // data: 0xB453C8
extern unsigned char DataGlobal_B453F8[4];  // data: 0xB453F8
extern unsigned char DataGlobal_B45428[4];  // data: 0xB45428
extern unsigned char DataGlobal_B45458[4];  // data: 0xB45458
extern unsigned char DataGlobal_B45488[4];  // data: 0xB45488
extern unsigned char DataGlobal_B454B8[4];  // data: 0xB454B8
extern unsigned char DataGlobal_B454E8[4];  // data: 0xB454E8
extern unsigned char DataGlobal_B45518[4];  // data: 0xB45518
extern unsigned char DataGlobal_B45548[4];  // data: 0xB45548
extern unsigned char DataGlobal_B45A8D;  // data: 0xB45A8D
extern unsigned char DataGlobal_B45A8E;  // data: 0xB45A8E
extern unsigned char DataGlobal_B45A8F;  // data: 0xB45A8F
extern unsigned char DataGlobal_B45A90[4];  // data: 0xB45A90
extern unsigned char DataGlobal_B45B64;  // data: 0xB45B64
extern unsigned char DataGlobal_B45B65;  // data: 0xB45B65
extern unsigned char DataGlobal_B45BA8;  // data: 0xB45BA8
extern unsigned char DataGlobal_B45BF8[90144];  // data: 0xB45BF8
extern unsigned char DataGlobal_B45C00[90136];  // data: 0xB45C00
extern unsigned char DataGlobal_B45C08[90128];  // data: 0xB45C08
extern unsigned char DataGlobal_B45C10[90120];  // data: 0xB45C10
extern unsigned char DataGlobal_B45C14[90116];  // data: 0xB45C14
extern unsigned char DataGlobal_B45C18[90112];  // data: 0xB45C18
extern unsigned char DataGlobal_B45C1C[90108];  // data: 0xB45C1C
extern unsigned char DataGlobal_B45C20[90104];  // data: 0xB45C20
extern unsigned char DataGlobal_B45C28[90096];  // data: 0xB45C28
extern unsigned char DataGlobal_B45C30[90088];  // data: 0xB45C30
extern unsigned char DataGlobal_B45C38[90080];  // data: 0xB45C38
extern unsigned char DataGlobal_B45C3A[90078];  // data: 0xB45C3A
extern unsigned char DataGlobal_B45C40[90072];  // data: 0xB45C40
extern unsigned char DataGlobal_B45C48[90064];  // data: 0xB45C48
extern unsigned char DataGlobal_B45C50[90056];  // data: 0xB45C50
extern unsigned char DataGlobal_B45C58[90048];  // data: 0xB45C58
extern unsigned char DataGlobal_B45C5C[90044];  // data: 0xB45C5C
extern unsigned char DataGlobal_B45C60[90040];  // data: 0xB45C60
extern unsigned char DataGlobal_B45C68[90032];  // data: 0xB45C68
extern unsigned char DataGlobal_B45C70[90024];  // data: 0xB45C70
extern unsigned char DataGlobal_B45C78[90016];  // data: 0xB45C78
extern unsigned char DataGlobal_B45C80[90008];  // data: 0xB45C80
extern unsigned char DataGlobal_B45C84[90004];  // data: 0xB45C84
extern unsigned char DataGlobal_B45C88[90000];  // data: 0xB45C88
extern unsigned char DataGlobal_B45C8C[89996];  // data: 0xB45C8C
extern unsigned char DataGlobal_B45C90[89992];  // data: 0xB45C90
extern unsigned char DataGlobal_B45C98[89984];  // data: 0xB45C98
extern unsigned char DataGlobal_B45D60[89784];  // data: 0xB45D60
extern unsigned char DataGlobal_B45D68[89776];  // data: 0xB45D68
extern unsigned char DataGlobal_B45D6C[89772];  // data: 0xB45D6C
extern unsigned char DataGlobal_B45D70[89768];  // data: 0xB45D70
extern unsigned char DataGlobal_B45D74[89764];  // data: 0xB45D74
extern unsigned char DataGlobal_B45D78[89760];  // data: 0xB45D78
extern unsigned char DataGlobal_B45D7A[89758];  // data: 0xB45D7A
extern unsigned char DataGlobal_B45D80[89752];  // data: 0xB45D80
extern unsigned char DataGlobal_B45D90[89736];  // data: 0xB45D90
extern unsigned char DataGlobal_B45D98[89728];  // data: 0xB45D98
extern unsigned char DataGlobal_B45DA0[89720];  // data: 0xB45DA0
extern unsigned char DataGlobal_B45DA8[89712];  // data: 0xB45DA8
extern unsigned char DataGlobal_B45DAC[89708];  // data: 0xB45DAC
extern unsigned char DataGlobal_B45DB0[89704];  // data: 0xB45DB0
extern unsigned char DataGlobal_B45DB4[89700];  // data: 0xB45DB4
extern unsigned char DataGlobal_B45DB8[89696];  // data: 0xB45DB8
extern unsigned char DataGlobal_B45DBC[89692];  // data: 0xB45DBC
extern unsigned char DataGlobal_B45DC0[89688];  // data: 0xB45DC0
extern unsigned char DataGlobal_B45DC4[89684];  // data: 0xB45DC4
extern unsigned char DataGlobal_B45DC8[89680];  // data: 0xB45DC8
extern unsigned char DataGlobal_B45DCC[89676];  // data: 0xB45DCC
extern unsigned char DataGlobal_B45DD0[89672];  // data: 0xB45DD0
extern unsigned char DataGlobal_B45DD4[89668];  // data: 0xB45DD4
extern unsigned char DataGlobal_B45DD8[89664];  // data: 0xB45DD8
extern unsigned char DataGlobal_B45DDC[89660];  // data: 0xB45DDC
extern unsigned char DataGlobal_B45DE0[89656];  // data: 0xB45DE0
extern unsigned char DataGlobal_B45DE4[89652];  // data: 0xB45DE4
extern unsigned char DataGlobal_B45DE8[89648];  // data: 0xB45DE8
extern unsigned char DataGlobal_B45DEC[89644];  // data: 0xB45DEC
extern unsigned char DataGlobal_B45DF0[89640];  // data: 0xB45DF0
extern unsigned char DataGlobal_B45DF4[89636];  // data: 0xB45DF4
extern unsigned char DataGlobal_B45DF8[89632];  // data: 0xB45DF8
extern unsigned char DataGlobal_B45DFC[89628];  // data: 0xB45DFC
extern unsigned char DataGlobal_B45E00[89624];  // data: 0xB45E00
extern unsigned char DataGlobal_B45E04[89620];  // data: 0xB45E04
extern unsigned char DataGlobal_B45E08[89616];  // data: 0xB45E08
extern unsigned char DataGlobal_B45E0C[89612];  // data: 0xB45E0C
extern unsigned char DataGlobal_B45E10[89608];  // data: 0xB45E10
extern unsigned char DataGlobal_B45E14[89604];  // data: 0xB45E14
extern unsigned char DataGlobal_B45E18[89600];  // data: 0xB45E18
extern unsigned char DataGlobal_B45E1C[89596];  // data: 0xB45E1C
extern unsigned char DataGlobal_B45E20[89592];  // data: 0xB45E20
extern unsigned char DataGlobal_B45E24[89588];  // data: 0xB45E24
extern unsigned char DataGlobal_B45E28[89584];  // data: 0xB45E28
extern unsigned char DataGlobal_B45E2C[89580];  // data: 0xB45E2C
extern unsigned char DataGlobal_B45E30[89576];  // data: 0xB45E30
extern unsigned char DataGlobal_B45E34[89572];  // data: 0xB45E34
extern unsigned char DataGlobal_B45E38[89568];  // data: 0xB45E38
extern unsigned char DataGlobal_B45E3C[89564];  // data: 0xB45E3C
extern unsigned char DataGlobal_B45E40[89560];  // data: 0xB45E40
extern unsigned char DataGlobal_B45E44[89556];  // data: 0xB45E44
extern unsigned char DataGlobal_B45E48[89552];  // data: 0xB45E48
extern unsigned char DataGlobal_B45E4C[89548];  // data: 0xB45E4C
extern unsigned char DataGlobal_B45E50[89544];  // data: 0xB45E50
extern unsigned char DataGlobal_B45E54[89540];  // data: 0xB45E54
extern unsigned char DataGlobal_B45E58[89536];  // data: 0xB45E58
extern unsigned char DataGlobal_B45E5C[89532];  // data: 0xB45E5C
extern unsigned char DataGlobal_B45E60[89528];  // data: 0xB45E60
extern unsigned char DataGlobal_B45E64[89524];  // data: 0xB45E64
extern unsigned char DataGlobal_B45E68[89520];  // data: 0xB45E68
extern unsigned char DataGlobal_B46248[88528];  // data: 0xB46248
extern unsigned char DataGlobal_B4624C[88524];  // data: 0xB4624C
extern unsigned char DataGlobal_B46250[88520];  // data: 0xB46250
extern unsigned char DataGlobal_B46254[88516];  // data: 0xB46254
extern unsigned char DataGlobal_B4663C[87516];  // data: 0xB4663C
extern unsigned char DataGlobal_B46640[87512];  // data: 0xB46640
extern unsigned char DataGlobal_B46648[87504];  // data: 0xB46648
extern unsigned char DataGlobal_B46680[87448];  // data: 0xB46680
extern unsigned char DataGlobal_B46688[87440];  // data: 0xB46688
extern unsigned char DataGlobal_B46690[87432];  // data: 0xB46690
extern unsigned char DataGlobal_B46694[87428];  // data: 0xB46694
extern unsigned char DataGlobal_B46698[87424];  // data: 0xB46698
extern unsigned char DataGlobal_B4669C[87420];  // data: 0xB4669C
extern unsigned char DataGlobal_B725CC;  // data: 0xB725CC
extern unsigned char DataGlobal_B72614;  // data: 0xB72614
extern unsigned char DataGlobal_B72615;  // data: 0xB72615
extern unsigned char DataGlobal_B72654;  // data: 0xB72654
extern unsigned char DataGlobal_B7276C;  // data: 0xB7276C
extern unsigned char DataGlobal_B7276D;  // data: 0xB7276D
extern unsigned char DataGlobal_B7309C;  // data: 0xB7309C
extern unsigned char DataGlobal_B73560;  // data: 0xB73560
extern unsigned char DataGlobal_B73561;  // data: 0xB73561
extern unsigned char DataGlobal_B73590[172];  // data: 0xB73590
extern unsigned char DataGlobal_B73594[168];  // data: 0xB73594
extern unsigned char DataGlobal_B73596[166];  // data: 0xB73596
extern unsigned char DataGlobal_B73598[164];  // data: 0xB73598
extern unsigned char DataGlobal_B735A0[156];  // data: 0xB735A0
extern unsigned char DataGlobal_B735A8[148];  // data: 0xB735A8
extern unsigned char DataGlobal_B735B0[140];  // data: 0xB735B0
extern unsigned char DataGlobal_B735B4[136];  // data: 0xB735B4
extern unsigned char DataGlobal_B735B8[132];  // data: 0xB735B8
extern unsigned char DataGlobal_B735C0[124];  // data: 0xB735C0
extern unsigned char DataGlobal_B735C8[116];  // data: 0xB735C8
extern unsigned char DataGlobal_B735D0[108];  // data: 0xB735D0
extern unsigned char DataGlobal_B735D8[100];  // data: 0xB735D8
extern unsigned char DataGlobal_B735DC[96];  // data: 0xB735DC
extern unsigned char DataGlobal_B735E0[92];  // data: 0xB735E0
extern unsigned char DataGlobal_B735E4[88];  // data: 0xB735E4
extern unsigned char DataGlobal_B735E8[84];  // data: 0xB735E8
extern unsigned char DataGlobal_B735F0[76];  // data: 0xB735F0
extern unsigned char DataGlobal_B735F8[68];  // data: 0xB735F8
extern unsigned char DataGlobal_B73600[60];  // data: 0xB73600
extern unsigned char DataGlobal_B73604[56];  // data: 0xB73604
extern unsigned char DataGlobal_B73608[52];  // data: 0xB73608
extern unsigned char DataGlobal_B7360C[48];  // data: 0xB7360C
extern unsigned char DataGlobal_B73610[44];  // data: 0xB73610
extern unsigned char DataGlobal_B73612[42];  // data: 0xB73612
extern unsigned char DataGlobal_B73618[36];  // data: 0xB73618
extern unsigned char DataGlobal_B73620[28];  // data: 0xB73620
extern unsigned char DataGlobal_B73628[20];  // data: 0xB73628
extern unsigned char DataGlobal_B73630[12];  // data: 0xB73630
extern unsigned char DataGlobal_B73634[8];  // data: 0xB73634
extern unsigned char DataGlobal_B73638[4];  // data: 0xB73638
extern unsigned char DataGlobal_B73AD0[168];  // data: 0xB73AD0
extern unsigned char DataGlobal_B73AE0[152];  // data: 0xB73AE0
extern unsigned char DataGlobal_B73AE8[144];  // data: 0xB73AE8
extern unsigned char DataGlobal_B73AEC[140];  // data: 0xB73AEC
extern unsigned char DataGlobal_B73AF0[136];  // data: 0xB73AF0
extern unsigned char DataGlobal_B73AF8[128];  // data: 0xB73AF8
extern unsigned char DataGlobal_B73AFC[124];  // data: 0xB73AFC
extern unsigned char DataGlobal_B73B00[120];  // data: 0xB73B00
extern unsigned char DataGlobal_B73B04[116];  // data: 0xB73B04
extern unsigned char DataGlobal_B73B08[112];  // data: 0xB73B08
extern unsigned char DataGlobal_B73B0C[108];  // data: 0xB73B0C
extern unsigned char DataGlobal_B73B10[104];  // data: 0xB73B10
extern unsigned char DataGlobal_B73B18[96];  // data: 0xB73B18
extern unsigned char DataGlobal_B73B1C[92];  // data: 0xB73B1C
extern unsigned char DataGlobal_B73B20[88];  // data: 0xB73B20
extern unsigned char DataGlobal_B73B28[80];  // data: 0xB73B28
extern unsigned char DataGlobal_B73B30[72];  // data: 0xB73B30
extern unsigned char DataGlobal_B73B34[68];  // data: 0xB73B34
extern unsigned char DataGlobal_B73C1C;  // data: 0xB73C1C
extern unsigned char DataGlobal_B73E44[168];  // data: 0xB73E44
extern unsigned char DataGlobal_B757EB;  // data: 0xB757EB
extern unsigned char DataGlobal_B75E48[4];  // data: 0xB75E48
extern unsigned char DataGlobal_B75E58[4];  // data: 0xB75E58
extern unsigned char DataGlobal_B76544;  // data: 0xB76544
extern unsigned char DataGlobal_B76568;  // data: 0xB76568
extern unsigned char DataGlobal_B7661C;  // data: 0xB7661C
extern unsigned char DataGlobal_B76654;  // data: 0xB76654
extern unsigned char DataGlobal_B76694;  // data: 0xB76694
extern unsigned char DataGlobal_B768D4;  // data: 0xB768D4
extern unsigned char DataGlobal_B76954;  // data: 0xB76954
extern unsigned char DataGlobal_B769A4;  // data: 0xB769A4
extern unsigned char DataGlobal_B769C8[4];  // data: 0xB769C8
extern unsigned char DataGlobal_B76A2C[148];  // data: 0xB76A2C
extern unsigned char DataGlobal_B76AF0;  // data: 0xB76AF0
extern unsigned char DataGlobal_B76C20[4];  // data: 0xB76C20
extern unsigned char DataGlobal_B76C22;  // data: 0xB76C22
extern unsigned char DataGlobal_B76C24[512];  // data: 0xB76C24
extern unsigned char DataGlobal_B76E34[156];  // data: 0xB76E34
extern unsigned char DataGlobal_B76E38[152];  // data: 0xB76E38
extern unsigned char DataGlobal_B76E40[144];  // data: 0xB76E40
extern unsigned char DataGlobal_B76E54[124];  // data: 0xB76E54
extern unsigned char DataGlobal_B76E58[120];  // data: 0xB76E58
extern unsigned char DataGlobal_B76E5C[116];  // data: 0xB76E5C
extern unsigned char DataGlobal_B76E60[112];  // data: 0xB76E60
extern unsigned char DataGlobal_B777D4[76];  // data: 0xB777D4
extern unsigned char DataGlobal_B77830[16];  // data: 0xB77830
extern unsigned char DataGlobal_B77930[128];  // data: 0xB77930
extern unsigned char DataGlobal_B779E0[16];  // data: 0xB779E0
extern unsigned char DataGlobal_B77A04;  // data: 0xB77A04
extern unsigned char DataGlobal_B77A94[40];  // data: 0xB77A94
extern unsigned char DataGlobal_B77ABC[4];  // data: 0xB77ABC
extern unsigned char DataGlobal_B77D94;  // data: 0xB77D94
extern unsigned char DataGlobal_B77DC0;  // data: 0xB77DC0
extern unsigned char DataGlobal_B77DC2;  // data: 0xB77DC2
extern unsigned char DataGlobal_B77DEC;  // data: 0xB77DEC
extern unsigned char DataGlobal_B77E10;  // data: 0xB77E10
extern unsigned char DataGlobal_B77E26;  // data: 0xB77E26
extern unsigned char DataGlobal_B77E27;  // data: 0xB77E27
extern unsigned char DataGlobal_B77E2C;  // data: 0xB77E2C
extern unsigned char DataGlobal_B77E30[16];  // data: 0xB77E30
extern unsigned char DataGlobal_B77E40;  // data: 0xB77E40
extern unsigned char DataGlobal_B77E68;  // data: 0xB77E68
extern unsigned char DataGlobal_B77E74;  // data: 0xB77E74
extern unsigned char DataGlobal_B77E75;  // data: 0xB77E75
extern unsigned char DataGlobal_B77EB0[4];  // data: 0xB77EB0
extern unsigned char DataGlobal_B77EC4;  // data: 0xB77EC4
extern unsigned char DataGlobal_B77EC8[4];  // data: 0xB77EC8
extern unsigned char DataGlobal_B77EF0[4];  // data: 0xB77EF0
extern unsigned char DataGlobal_B77F20[4];  // data: 0xB77F20
extern unsigned char DataGlobal_B77F30[4];  // data: 0xB77F30
extern unsigned char DataGlobal_B77F58[4];  // data: 0xB77F58
extern unsigned char DataGlobal_B77F68[4];  // data: 0xB77F68
extern unsigned char DataGlobal_B77F70[4];  // data: 0xB77F70
extern unsigned char DataGlobal_B77F78[4];  // data: 0xB77F78
extern unsigned char DataGlobal_B7801C;  // data: 0xB7801C
extern unsigned char DataGlobal_B7809C;  // data: 0xB7809C
extern unsigned char DataGlobal_B78124;  // data: 0xB78124
extern unsigned char DataGlobal_B783B0[4];  // data: 0xB783B0
extern unsigned char DataGlobal_B783DC[4];  // data: 0xB783DC
extern unsigned char DataGlobal_B78564[4];  // data: 0xB78564
extern unsigned char DataGlobal_B78568[4];  // data: 0xB78568
extern unsigned char DataGlobal_B78570[4];  // data: 0xB78570
extern unsigned char DataGlobal_B78574[4];  // data: 0xB78574
extern unsigned char DataGlobal_B785A0[4];  // data: 0xB785A0
extern unsigned char DataGlobal_B785C0[64];  // data: 0xB785C0
extern unsigned char DataGlobal_B78600;  // data: 0xB78600
extern unsigned char DataGlobal_B78820[4];  // data: 0xB78820
extern unsigned char DataGlobal_B7882C[4];  // data: 0xB7882C
extern unsigned char DataGlobal_B78830[4];  // data: 0xB78830
extern unsigned char DataGlobal_B7883C[4];  // data: 0xB7883C
extern unsigned char DataGlobal_B78850[4];  // data: 0xB78850
extern unsigned char DataGlobal_B78854[4];  // data: 0xB78854
extern unsigned char DataGlobal_B78858[4];  // data: 0xB78858
extern unsigned char DataGlobal_B78960[4];  // data: 0xB78960
extern unsigned char DataGlobal_B78A60[4];  // data: 0xB78A60
extern unsigned char DataGlobal_B78A84[4];  // data: 0xB78A84
extern unsigned char DSurface_Vtable[4];  // data: 0x7E85D4
extern unsigned char g_BuildingTypeClass_Count[4];  // data: 0xA83D10
extern unsigned char g_CLSID_DriveLocomotion2[4];  // data: 0x7E9AB0
extern unsigned char g_CLSID_DriveLocomotion[4];  // data: 0x7E9A70
extern unsigned char g_CLSID_FlyLocomotion[4];  // data: 0x7E9A80
extern unsigned char g_CLSID_HoverLocomotion[4];  // data: 0x7E9A90
extern unsigned char g_CLSID_JumpjetLocomotion[4];  // data: 0x7E9AC0
extern unsigned char g_CLSID_ShipLocomotion[4];  // data: 0x7E9AD0
extern unsigned char g_CLSID_TunnelLocomotion[4];  // data: 0x7E9AA0
extern unsigned char g_CLSID_WalkLocomotion[4];  // data: 0x7E9A60
extern unsigned char g_GameLoopActive[4];  // data: 0x822CFC
extern unsigned char g_hCursor[4];  // data: 0xB73548
extern unsigned char g_hIcon[4];  // data: 0xB7354C
extern unsigned char g_MenuReturnState[4];  // data: 0x81D4E0
extern unsigned char g_ScreenWidth[4];  // data: 0xB73544
extern unsigned char iidInterface[4];  // data: 0x7E9AF0
extern unsigned char rclsid[4];  // data: 0x7E96E0
extern unsigned char rguid[4];  // data: 0x7E9520
extern unsigned char SrcStr[4];  // data: 0x7F98E8
extern unsigned char Surface_Vtable[4];  // data: 0x7E2198
extern unsigned char Theater_Array[4];  // data: 0x7E1B78
extern unsigned char VarName[4];  // data: 0x7F9988
extern unsigned char vt_AbstractClass[4];  // data: 0x7E1F24
extern unsigned char vt_AbstractTypeClass[4];  // data: 0x7E1FD4
extern unsigned char vt_AddTeamCommandClass[4];  // data: 0x7EBE8C
extern unsigned char vt_AircraftClass[4];  // data: 0x7E2250
extern unsigned char vt_AircraftTypeClass[4];  // data: 0x7E283C
extern unsigned char vt_AirstrikeClass[4];  // data: 0x7E297C
extern unsigned char vt_AITriggerTypeClass[4];  // data: 0x7E2A24
extern unsigned char vt_AlphaShapeClass[4];  // data: 0x7E3278
extern unsigned char vt_Animate[4];  // data: 0x7E35A8
extern unsigned char vt_AnimClass[4];  // data: 0x7E3330
extern unsigned char vt_AnimFile[4];  // data: 0x7E3584
extern unsigned char vt_AnimTypeClass[4];  // data: 0x7E35DC
extern unsigned char vt_ATL_CComObject_CChatEventSink[4];  // data: 0x7F76B4
extern unsigned char vt_ATL_CComObject_CDownloadEventSink[4];  // data: 0x7F78E4
extern unsigned char vt_bad_typeid[4];  // data: 0x7F95DC
extern unsigned char vt_BaseClass[4];  // data: 0x7E3880
extern unsigned char vt_BinkMovieHandle[4];  // data: 0x7EE154
extern unsigned char vt_BitFont[4];  // data: 0x7E3A78
extern unsigned char vt_BitText[4];  // data: 0x7E3A80
extern unsigned char vt_BlitPlain_unsigned_char[4];  // data: 0x7F7BDC
extern unsigned char vt_BlitPlain_unsigned_short[4];  // data: 0x7F7BC4
extern unsigned char vt_Blitter[4];  // data: 0x7E5B88
extern unsigned char vt_BlitTrans_unsigned_char[4];  // data: 0x7F7C0C
extern unsigned char vt_BlitTrans_unsigned_short[4];  // data: 0x7F7BF4
extern unsigned char vt_BlitTransLucent25Alpha_unsigned_short[4];  // data: 0x7E5780
extern unsigned char vt_BlitTransLucent25AlphaZReadWrite_unsigned_short[4];  // data: 0x7E55D0
extern unsigned char vt_BlitTransXlatAlpha_unsigned_short[4];  // data: 0x7E57E0
extern unsigned char vt_BlitTransXlatAlphaZRead_unsigned_short[4];  // data: 0x7E56F0
extern unsigned char vt_BlowPipe[4];  // data: 0x7EFDC8
extern unsigned char vt_BlowStraw[4];  // data: 0x7EDF40
extern unsigned char vt_BombClass[4];  // data: 0x7E3CE4
extern unsigned char vt_BrainClass[4];  // data: 0x7E3E74
extern unsigned char vt_BufferPipe[4];  // data: 0x7E6200
extern unsigned char vt_BufferStraw[4];  // data: 0x7E61E0
extern unsigned char vt_BuildingLightClass[4];  // data: 0x7E3AA4
extern unsigned char vt_BuildingTypeClass[4];  // data: 0x7E4544
extern unsigned char vt_BulletClass[4];  // data: 0x7E46B8
extern unsigned char vt_BulletTypeClass[4];  // data: 0x7E491C
extern unsigned char vt_CampaignClass[4];  // data: 0x7E49FC
extern unsigned char vt_CampaignEndScoreClass[4];  // data: 0x7E4AB8
extern unsigned char vt_CampaignScoreClass[4];  // data: 0x7E4AAC
extern unsigned char vt_CaptureManagerClass[4];  // data: 0x7E4B14
extern unsigned char vt_CarryoverClass[4];  // data: 0x7E4C04
extern unsigned char vt_CCFileClass[4];  // data: 0x7E16B0
extern unsigned char vt_CCToolTip[4];  // data: 0x7F74C4
extern unsigned char vt_CenterTeamCommandClass[4];  // data: 0x7EBEB4
extern unsigned char vt_CheckListClass[4];  // data: 0x7E4F84
extern unsigned char vt_ColorListClass[4];  // data: 0x7E5054
extern unsigned char vt_CommandClass[4];  // data: 0x7EBE3C
extern unsigned char vt_CommBufferClass[4];  // data: 0x7E519C
extern unsigned char vt_ConnectionClass[4];  // data: 0x7E51B4
extern unsigned char vt_ConnectionPointClass[4];  // data: 0x7E5CE4
extern unsigned char vt_ConnManClass[4];  // data: 0x7EC1D4
extern unsigned char vt_ConvertClass[4];  // data: 0x7E5358
extern unsigned char vt_CreateGameDialogControl[4];  // data: 0x7F788C
extern unsigned char vt_CreateTeamCommandClass[4];  // data: 0x7EB84C
extern unsigned char vt_CStreamClass[4];  // data: 0x7E5D94
extern unsigned char vt_CursorPositionCommandClass[4];  // data: 0x7EBF54
extern unsigned char vt_DeleteCommandClass[4];  // data: 0x7EBF7C
extern unsigned char vt_DiskLaserClass[4];  // data: 0x7E5F8C
extern unsigned char vt_DisplayClass_TacticalClass[4];  // data: 0x7E608C
extern unsigned char vt_DriveLocomotionClass[4];  // data: 0x7E7EB0
extern unsigned char vt_DropListClass[4];  // data: 0x7E7FCC
extern unsigned char vt_DropPodLocomotionClass[4];  // data: 0x7E8254
extern unsigned char vt_DynamicVectorClass_AbstractClass[4];  // data: 0x7E91EC
extern unsigned char vt_DynamicVectorClass_AbstractTypeClass[4];  // data: 0x7EA524
extern unsigned char vt_DynamicVectorClass_AcceleratorTracker[4];  // data: 0x7EECCC
extern unsigned char vt_DynamicVectorClass_AircraftClass[4];  // data: 0x7E9E64
extern unsigned char vt_DynamicVectorClass_AircraftTypeClass[4];  // data: 0x7EA264
extern unsigned char vt_DynamicVectorClass_AircraftTypeClass_const[4];  // data: 0x7EACC8
extern unsigned char vt_DynamicVectorClass_AirstrikeClass[4];  // data: 0x7E293C
extern unsigned char vt_DynamicVectorClass_AITriggerTypeClass[4];  // data: 0x7E9B64
extern unsigned char vt_DynamicVectorClass_AlphaLightingRemapClass[4];  // data: 0x7E2AD0
extern unsigned char vt_DynamicVectorClass_AnimClass[4];  // data: 0x7E9F24
extern unsigned char vt_DynamicVectorClass_AnimClass_const[4];  // data: 0x7EBFCC
extern unsigned char vt_DynamicVectorClass_AnimTypeClass[4];  // data: 0x7EA2E4
extern unsigned char vt_DynamicVectorClass_AnimTypeClass_const[4];  // data: 0x7EB714
extern unsigned char vt_DynamicVectorClass_BaseNodeClass[4];  // data: 0x7E38B0
extern unsigned char vt_DynamicVectorClass_BombClass[4];  // data: 0x7E17CC
extern unsigned char vt_DynamicVectorClass_bool[4];  // data: 0x7EAA7C
extern unsigned char vt_DynamicVectorClass_BuildingClass[4];  // data: 0x7E9E24
extern unsigned char vt_DynamicVectorClass_BuildingLightClass[4];  // data: 0x7E9C24
extern unsigned char vt_DynamicVectorClass_BuildingTypeClass[4];  // data: 0x7EA224
extern unsigned char vt_DynamicVectorClass_BuildingTypeClass_const[4];  // data: 0x7EAA28
extern unsigned char vt_DynamicVectorClass_BulletTypeClass[4];  // data: 0x7EA364
extern unsigned char vt_DynamicVectorClass_CampaignClass[4];  // data: 0x7E9FE4
extern unsigned char vt_DynamicVectorClass_CaptureManagerClass[4];  // data: 0x7E4AD4
extern unsigned char vt_DynamicVectorClass_CCINIClass[4];  // data: 0x7EB82C
extern unsigned char vt_DynamicVectorClass_Cell[4];  // data: 0x7E3890
extern unsigned char vt_DynamicVectorClass_CellClass[4];  // data: 0x7ED9BC
extern unsigned char vt_DynamicVectorClass_char[4];  // data: 0x7E5BC4
extern unsigned char vt_DynamicVectorClass_char_const[4];  // data: 0x7EE0B4
extern unsigned char vt_DynamicVectorClass_ColorScheme[4];  // data: 0x7EF790
extern unsigned char vt_DynamicVectorClass_CommandClass_const[4];  // data: 0x7E182C
extern unsigned char vt_DynamicVectorClass_ControlNode[4];  // data: 0x7E4BA4
extern unsigned char vt_DynamicVectorClass_ConvertClass[4];  // data: 0x7E5318
extern unsigned char vt_DynamicVectorClass_CoopCampaignClass[4];  // data: 0x7EE350
extern unsigned char vt_DynamicVectorClass_DDSURFACEDESC[4];  // data: 0x7E5E0C
extern unsigned char vt_DynamicVectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass[4];  // data: 0x7F4860
extern unsigned char vt_DynamicVectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass[4];  // data: 0x7E928C
extern unsigned char vt_DynamicVectorClass_DiskLaserClass[4];  // data: 0x7E5EDC
extern unsigned char vt_DynamicVectorClass_double[4];  // data: 0x7EDA6C
extern unsigned char vt_DynamicVectorClass_EBolt[4];  // data: 0x7E868C
extern unsigned char vt_DynamicVectorClass_EgoClass[4];  // data: 0x7E86DC
extern unsigned char vt_DynamicVectorClass_EMPulseClass[4];  // data: 0x7E873C
extern unsigned char vt_DynamicVectorClass_enum_PassabilityType[4];  // data: 0x7ED580
extern unsigned char vt_DynamicVectorClass_EventClass[4];  // data: 0x7EFE04
extern unsigned char vt_DynamicVectorClass_FactoryClass[4];  // data: 0x7E9FA4
extern unsigned char vt_DynamicVectorClass_FoggedObjectClass[4];  // data: 0x7E44F4
extern unsigned char vt_DynamicVectorClass_FoggedObjectClass_DrawRecord[4];  // data: 0x7E8BA0
extern unsigned char vt_DynamicVectorClass_GlobalPacketType[4];  // data: 0x7F11D4
extern unsigned char vt_DynamicVectorClass_GraphicMenuItem[4];  // data: 0x7EA604
extern unsigned char vt_DynamicVectorClass_HashObject_HashString_SchemeNode[4];  // data: 0x7EF770
extern unsigned char vt_DynamicVectorClass_HashObject_RadarTrackingStruct_TechnoClass[4];  // data: 0x7F042C
extern unsigned char vt_DynamicVectorClass_HashObject_unsigned_int_SubzoneConnectionStruct[4];  // data: 0x7ED520
extern unsigned char vt_DynamicVectorClass_HashObject_unsigned_int_unsigned_int[4];  // data: 0x7ED540
extern unsigned char vt_DynamicVectorClass_HouseClass[4];  // data: 0x7E9EE4
extern unsigned char vt_DynamicVectorClass_HouseTypeClass[4];  // data: 0x7EA064
extern unsigned char vt_DynamicVectorClass_HSVClass[4];  // data: 0x7EF750
extern unsigned char vt_DynamicVectorClass_HWND[4];  // data: 0x7EEC8C
extern unsigned char vt_DynamicVectorClass_IConnectionPoint[4];  // data: 0x7E5D48
extern unsigned char vt_DynamicVectorClass_InfantryClass[4];  // data: 0x7E43C8
extern unsigned char vt_DynamicVectorClass_InfantryTypeClass[4];  // data: 0x7EA324
extern unsigned char vt_DynamicVectorClass_InfantryTypeClass_const[4];  // data: 0x7EAC88
extern unsigned char vt_DynamicVectorClass_int[4];  // data: 0x7E4E78
extern unsigned char vt_DynamicVectorClass_IonBlastClass[4];  // data: 0x7EC05C
extern unsigned char vt_DynamicVectorClass_IsometricTileClass[4];  // data: 0x7E18BC
extern unsigned char vt_DynamicVectorClass_IsometricTileTypeClass[4];  // data: 0x7EA3E4
extern unsigned char vt_DynamicVectorClass_IsometricTileTypeClass_TileInsertType[4];  // data: 0x7ECBDC
extern unsigned char vt_DynamicVectorClass_KamikazeControl[4];  // data: 0x7ECE7C
extern unsigned char vt_DynamicVectorClass_LaserDrawClass[4];  // data: 0x7ECEDC
extern unsigned char vt_DynamicVectorClass_LightConvertClass[4];  // data: 0x7E186C
extern unsigned char vt_DynamicVectorClass_LightSourceClass[4];  // data: 0x7ECF7C
extern unsigned char vt_DynamicVectorClass_LightSourceClass_PendingCellClass[4];  // data: 0x7ECFBC
extern unsigned char vt_DynamicVectorClass_LineTrail[4];  // data: 0x7ED0CC
extern unsigned char vt_DynamicVectorClass_MixFileClass[4];  // data: 0x7E1A44
extern unsigned char vt_DynamicVectorClass_MovieHandle[4];  // data: 0x7F6984
extern unsigned char vt_DynamicVectorClass_MPlayerScoreType[4];  // data: 0x7EE3F0
extern unsigned char vt_DynamicVectorClass_MSAnim[4];  // data: 0x7EEC04
extern unsigned char vt_DynamicVectorClass_MSSfx[4];  // data: 0x7EEBE4
extern unsigned char vt_DynamicVectorClass_MultiMission[4];  // data: 0x7F11F4
extern unsigned char vt_DynamicVectorClass_MultiMission_const[4];  // data: 0x7EEF70
extern unsigned char vt_DynamicVectorClass_MultiplayerGameMode[4];  // data: 0x7EED20
extern unsigned char vt_DynamicVectorClass_NodeNameType[4];  // data: 0x7EE370
extern unsigned char vt_DynamicVectorClass_ObjectClass[4];  // data: 0x7E4F64
extern unsigned char vt_DynamicVectorClass_ObjectTypeClass[4];  // data: 0x7EF26C
extern unsigned char vt_DynamicVectorClass_OverlayClass[4];  // data: 0x7E9D24
extern unsigned char vt_DynamicVectorClass_OverlayTypeClass[4];  // data: 0x7EA164
extern unsigned char vt_DynamicVectorClass_OwnerTalkClass_ConnectionListStruct[4];  // data: 0x7F0C2C
extern unsigned char vt_DynamicVectorClass_ParasiteClass[4];  // data: 0x7EF824
extern unsigned char vt_DynamicVectorClass_ParticleClass[4];  // data: 0x7E9D64
extern unsigned char vt_DynamicVectorClass_ParticleSystemClass[4];  // data: 0x7E9C64
extern unsigned char vt_DynamicVectorClass_ParticleSystemTypeClass[4];  // data: 0x7EA464
extern unsigned char vt_DynamicVectorClass_ParticleSystemTypeClass_const[4];  // data: 0x7E4444
extern unsigned char vt_DynamicVectorClass_ParticleTypeClass[4];  // data: 0x7EA424
extern unsigned char vt_DynamicVectorClass_PlanningNodeClass[4];  // data: 0x7EFE44
extern unsigned char vt_DynamicVectorClass_PlanningTokenClass[4];  // data: 0x7EFE84
extern unsigned char vt_DynamicVectorClass_RadBeam[4];  // data: 0x7F0484
extern unsigned char vt_DynamicVectorClass_RadSiteClass[4];  // data: 0x7F07A4
extern unsigned char vt_DynamicVectorClass_rc_ptr_WDTTerritory[4];  // data: 0x7F7260
extern unsigned char vt_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict[4];  // data: 0x7F6F4C
extern unsigned char vt_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption[4];  // data: 0x7F6FD4
extern unsigned char vt_DynamicVectorClass_RGBClass[4];  // data: 0x7F022C
extern unsigned char vt_DynamicVectorClass_ScriptClass[4];  // data: 0x7E1B24
extern unsigned char vt_DynamicVectorClass_ScriptTypeClass[4];  // data: 0x7EA124
extern unsigned char vt_DynamicVectorClass_ShadowControlClass[4];  // data: 0x7F42DC
extern unsigned char vt_DynamicVectorClass_SideClass[4];  // data: 0x7EA024
extern unsigned char vt_DynamicVectorClass_SlaveManagerClass[4];  // data: 0x7F315C
extern unsigned char vt_DynamicVectorClass_SlaveManagerClass_SlaveControl[4];  // data: 0x7F322C
extern unsigned char vt_DynamicVectorClass_SmudgeClass[4];  // data: 0x7E9DA4
extern unsigned char vt_DynamicVectorClass_SmudgeTypeClass[4];  // data: 0x7EA1A4
extern unsigned char vt_DynamicVectorClass_SmudgeTypeClass_const[4];  // data: 0x7F0DEC
extern unsigned char vt_DynamicVectorClass_SpawnManagerClass[4];  // data: 0x7F35E4
extern unsigned char vt_DynamicVectorClass_SpawnManagerClass_SpawnControl[4];  // data: 0x7F36B4
extern unsigned char vt_DynamicVectorClass_SpotLightClass[4];  // data: 0x7EF6BC
extern unsigned char vt_DynamicVectorClass_SubzoneConnectionStruct[4];  // data: 0x7ED5A0
extern unsigned char vt_DynamicVectorClass_SuperClass[4];  // data: 0x7EA4E4
extern unsigned char vt_DynamicVectorClass_SuperWeaponTypeClass[4];  // data: 0x7EA4A4
extern unsigned char vt_DynamicVectorClass_SwizzlePointerClass[4];  // data: 0x7F4134
extern unsigned char vt_DynamicVectorClass_TagClass[4];  // data: 0x7EA5A4
extern unsigned char vt_DynamicVectorClass_tagCONNECTDATA[4];  // data: 0x7E5CC4
extern unsigned char vt_DynamicVectorClass_TagTypeClass[4];  // data: 0x7F4558
extern unsigned char vt_DynamicVectorClass_TaskForceClass[4];  // data: 0x7EA0A4
extern unsigned char vt_DynamicVectorClass_TeamClass[4];  // data: 0x7E9F64
extern unsigned char vt_DynamicVectorClass_TeamTypeClass[4];  // data: 0x7EA0E4
extern unsigned char vt_DynamicVectorClass_TechnoClass[4];  // data: 0x7E17AC
extern unsigned char vt_DynamicVectorClass_TechnoTypeClass[4];  // data: 0x7E858C
extern unsigned char vt_DynamicVectorClass_TechnoTypeClass_const[4];  // data: 0x7E8934
extern unsigned char vt_DynamicVectorClass_TemporalClass[4];  // data: 0x7F5114
extern unsigned char vt_DynamicVectorClass_TerrainClass[4];  // data: 0x7E9DE4
extern unsigned char vt_DynamicVectorClass_TerrainTypeClass[4];  // data: 0x7EA1E4
extern unsigned char vt_DynamicVectorClass_TEventClass[4];  // data: 0x7F550C
extern unsigned char vt_DynamicVectorClass_ThemeControl[4];  // data: 0x7F568C
extern unsigned char vt_DynamicVectorClass_TiberiumClass[4];  // data: 0x7F56BC
extern unsigned char vt_DynamicVectorClass_ToolTip_const[4];  // data: 0x7F57C8
extern unsigned char vt_DynamicVectorClass_TRect_int[4];  // data: 0x7ED99C
extern unsigned char vt_DynamicVectorClass_TriggerClass[4];  // data: 0x7E9BE4
extern unsigned char vt_DynamicVectorClass_TriggerTypeClass[4];  // data: 0x7E9BA4
extern unsigned char vt_DynamicVectorClass_TubeClass[4];  // data: 0x7E9CA4
extern unsigned char vt_DynamicVectorClass_UndoInfoStruct[4];  // data: 0x7F327C
extern unsigned char vt_DynamicVectorClass_UnitClass[4];  // data: 0x7E9EA4
extern unsigned char vt_DynamicVectorClass_UnitTypeClass[4];  // data: 0x7EA2A4
extern unsigned char vt_DynamicVectorClass_unsigned_char[4];  // data: 0x7F7AEC
extern unsigned char vt_DynamicVectorClass_unsigned_int[4];  // data: 0x7E37CC
extern unsigned char vt_DynamicVectorClass_unsigned_long[4];  // data: 0x7F3728
extern unsigned char vt_DynamicVectorClass_unsigned_short[4];  // data: 0x7ECCEC
extern unsigned char vt_DynamicVectorClass_unsigned_short_7E3844[4];  // data: 0x7E3844
extern unsigned char vt_DynamicVectorClass_unsigned_short_const[4];  // data: 0x7ED1DC
extern unsigned char vt_DynamicVectorClass_VocClass[4];  // data: 0x7F68AC
extern unsigned char vt_DynamicVectorClass_VoxClass[4];  // data: 0x7F6904
extern unsigned char vt_DynamicVectorClass_VoxelAnimClass[4];  // data: 0x7E1E2C
extern unsigned char vt_DynamicVectorClass_VoxelAnimTypeClass[4];  // data: 0x7EA3A4
extern unsigned char vt_DynamicVectorClass_VoxelAnimTypeClass_const[4];  // data: 0x7F0DCC
extern unsigned char vt_DynamicVectorClass_WarheadTypeClass[4];  // data: 0x7E1E84
extern unsigned char vt_DynamicVectorClass_WaveClass[4];  // data: 0x7E9CE4
extern unsigned char vt_DynamicVectorClass_WaypointClass[4];  // data: 0x7F6ED4
extern unsigned char vt_DynamicVectorClass_WaypointPathClass[4];  // data: 0x7F6E04
extern unsigned char vt_DynamicVectorClass_WeaponTypeClass[4];  // data: 0x7E1ED4
extern unsigned char vt_DynamicVectorClass_WIN32_FIND_DATAA[4];  // data: 0x7ED94C
extern unsigned char vt_DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType[4];  // data: 0x7F7A1C
extern unsigned char vt_DynamicVectorClass_Wstring[4];  // data: 0x7F12B4
extern unsigned char vt_EditClass[4];  // data: 0x7E81A4
extern unsigned char vt_EMPulseClass[4];  // data: 0x7E877C
extern unsigned char vt_EnumConnectionPointsClass[4];  // data: 0x7E5D28
extern unsigned char vt_EnumConnectionsClass[4];  // data: 0x7E5CA4
extern unsigned char vt_exception[4];  // data: 0x7F990C
extern unsigned char vt_FactoryClass[4];  // data: 0x7E88A4
extern unsigned char vt_FileClass[4];  // data: 0x7F08BC
extern unsigned char vt_FileStraw[4];  // data: 0x7E4D90
extern unsigned char vt_FlyLocomotionClass[4];  // data: 0x7E89F4
extern unsigned char vt_FoggedObjectClass[4];  // data: 0x7E8B0C
extern unsigned char vt_FootClass[4];  // data: 0x7E8C68
extern unsigned char vt_FreeForAll[4];  // data: 0x7EE424
extern unsigned char vt_GadgetClass[4];  // data: 0x7E92BC
extern unsigned char vt_GaugeClass[4];  // data: 0x7E9384
extern unsigned char vt_GenericList[4];  // data: 0x7E1B04
extern unsigned char vt_GenericNode[4];  // data: 0x7E1B0C
extern unsigned char vt_GraphicMenu[4];  // data: 0x7EA5FC
extern unsigned char vt_GraphicMenuAnimItem[4];  // data: 0x7EA658
extern unsigned char vt_GraphicMenuImageItem[4];  // data: 0x7EA674
extern unsigned char vt_GraphicMenuItem[4];  // data: 0x7EA690
extern unsigned char vt_GraphicMenuShortcutItem[4];  // data: 0x7EA6AC
extern unsigned char vt_HouseTypeClass[4];  // data: 0x7EAB2C
extern unsigned char vt_HoverLocomotionClass[4];  // data: 0x7EACFC
extern unsigned char vt_InfantryClass[4];  // data: 0x7EB034
extern unsigned char vt_InfantryTypeClass[4];  // data: 0x7EB5E4
extern unsigned char vt_INIClass[4];  // data: 0x7EA5F4
extern unsigned char vt_INIClass_INIEntry[4];  // data: 0x7EB734
extern unsigned char vt_INIClass_INISection[4];  // data: 0x7EB73C
extern unsigned char vt_INoticeSink[4];  // data: 0x7E1FBC
extern unsigned char vt_INoticeSource[4];  // data: 0x7E1FB4
extern unsigned char vt_IPXConnClass[4];  // data: 0x7EC0CC
extern unsigned char vt_IPXGlobalConnClass[4];  // data: 0x7EC10C
extern unsigned char vt_IPXInterfaceClass[4];  // data: 0x7F794C
extern unsigned char vt_IPXManagerClass[4];  // data: 0x7EC16C
extern unsigned char vt_IsometricTileClass[4];  // data: 0x7EC22C
extern unsigned char vt_IsometricTileTypeClass[4];  // data: 0x7ECC1C
extern unsigned char vt_JumpjetLocomotionClass[4];  // data: 0x7ECD44
extern unsigned char vt_LCWPipe[4];  // data: 0x7ECF2C
extern unsigned char vt_LCWStraw[4];  // data: 0x7ECF44
extern unsigned char vt_LightConvertClass[4];  // data: 0x7ED0A4
extern unsigned char vt_LightSourceClass[4];  // data: 0x7ECFFC
extern unsigned char vt_LinkClass[4];  // data: 0x7E9344
extern unsigned char vt_List_INIClass_INISection[4];  // data: 0x7E1AFC
extern unsigned char vt_List_MixFileClass[4];  // data: 0x7EDF38
extern unsigned char vt_ListClass[4];  // data: 0x7ED10C
extern unsigned char vt_LoadOptionsClass[4];  // data: 0x7ED2E4
extern unsigned char vt_LocomotionClass[4];  // data: 0x7EADF4
extern unsigned char vt_LogicClass[4];  // data: 0x7E18FC
extern unsigned char vt_MapClass[4];  // data: 0x7ED404
extern unsigned char vt_MapSelect[4];  // data: 0x7EDB4C
extern unsigned char vt_MechLocomotionClass[4];  // data: 0x7EDB6C
extern unsigned char vt_Megawealth[4];  // data: 0x7EE5F4
extern unsigned char vt_MissionClass[4];  // data: 0x7EDC94
extern unsigned char vt_MixFileClass[4];  // data: 0x7EDF50
extern unsigned char vt_Mouse[4];  // data: 0x7F7B78
extern unsigned char vt_MouseClass[4];  // data: 0x7E195C
extern unsigned char vt_MovieHandle[4];  // data: 0x7EE124
extern unsigned char vt_MPCooperative[4];  // data: 0x7EE27C
extern unsigned char vt_MSAnim[4];  // data: 0x7EE8E8
extern unsigned char vt_MSBitPrintAnim[4];  // data: 0x7EE9D8
extern unsigned char vt_MSEngine[4];  // data: 0x7EEBD4
extern unsigned char vt_MSFadeAnim[4];  // data: 0x7EE938
extern unsigned char vt_MSFrameAnim[4];  // data: 0x7F7104
extern unsigned char vt_MSPCXAnim[4];  // data: 0x7EEA2C
extern unsigned char vt_MSPrintAnim[4];  // data: 0x7EEA00
extern unsigned char vt_MSShapeAnim[4];  // data: 0x7EE910
extern unsigned char vt_MSVQAnim[4];  // data: 0x7EE9B0
extern unsigned char vt_MultiplayerBattle[4];  // data: 0x7EE184
extern unsigned char vt_MultiplayerGameMode[4];  // data: 0x7EED60
extern unsigned char vt_MultiplayerGameMode_Initializer_FreeForAll[4];  // data: 0x7EEE8C
extern unsigned char vt_MultiplayerGameMode_Initializer_MPCooperative[4];  // data: 0x7EEE80
extern unsigned char vt_MultiplayerGameMode_Initializer_MultiplayerBattle[4];  // data: 0x7EEEBC
extern unsigned char vt_MultiplayerGameMode_Initializer_MultiplayerManBattle[4];  // data: 0x7EEEB0
extern unsigned char vt_MultiplayerGameMode_Initializer_MultiplayerSiege[4];  // data: 0x7EEEA4
extern unsigned char vt_MultiplayerGameMode_Initializer_UnholyAlliance[4];  // data: 0x7EEE98
extern unsigned char vt_MultiplayerGameMode_InitializerBase[4];  // data: 0x7EEE74
extern unsigned char vt_MultiplayerManBattle[4];  // data: 0x7EE50C
extern unsigned char vt_MultiplayerSiege[4];  // data: 0x7EE6FC
extern unsigned char vt_MultiplayerSiegeAttackerTeam[4];  // data: 0x7EE7F4
extern unsigned char vt_MultiplayerSiegeDefenderTeam[4];  // data: 0x7EE7E4
extern unsigned char vt_NeuronClass[4];  // data: 0x7E3DC4
extern unsigned char vt_non_rtti_object[4];  // data: 0x7F95D0
extern unsigned char vt_NullModemClass[4];  // data: 0x7EEFDC
extern unsigned char vt_NullModemConnClass[4];  // data: 0x7EEF90
extern unsigned char vt_ObjectClass[4];  // data: 0x7EF034
extern unsigned char vt_ObjectTypeClass[4];  // data: 0x7EF2AC
extern unsigned char vt_OverlayClass[4];  // data: 0x7EF3A8
extern unsigned char vt_OverlayTypeClass[4];  // data: 0x7EF5D4
extern unsigned char vt_OwnerDraw_DialogControl[4];  // data: 0x7EF720
extern unsigned char vt_PageUserCommandClass[4];  // data: 0x7EBF2C
extern unsigned char vt_ParasiteClass[4];  // data: 0x7EF864
extern unsigned char vt_ParticleClass[4];  // data: 0x7EF928
extern unsigned char vt_ParticleSystemClass[4];  // data: 0x7EFB78
extern unsigned char vt_ParticleSystemTypeClass[4];  // data: 0x7F007C
extern unsigned char vt_ParticleTypeClass[4];  // data: 0x7F015C
extern unsigned char vt_Pipe[4];  // data: 0x7E6218
extern unsigned char vt_PixelFXClass[4];  // data: 0x7EFDA4
extern unsigned char vt_ProgressScreenClass[4];  // data: 0x7F0064
extern unsigned char vt_RadarClass[4];  // data: 0x7F0344
extern unsigned char vt_RadarClass_RTacticalClass[4];  // data: 0x7F02BC
extern unsigned char vt_RadioClass[4];  // data: 0x7F04DC
extern unsigned char vt_RadSiteClass[4];  // data: 0x7F07E4
extern unsigned char vt_RAMFileClass[4];  // data: 0x7F0874
extern unsigned char vt_RandomStraw[4];  // data: 0x7F0AFC
extern unsigned char vt_RawFileClass[4];  // data: 0x7F0904
extern unsigned char vt_rc_ptr_PlayerProfile[4];  // data: 0x7F3F44
extern unsigned char vt_rc_ptr_WDTState[4];  // data: 0x7F70EC
extern unsigned char vt_rc_ptr_WDTTerritory[4];  // data: 0x7EBFA4
extern unsigned char vt_rc_ptr_WorldDominationTour_Campaign[4];  // data: 0x7F6F24
extern unsigned char vt_rc_ptr_WorldDominationTour_CampaignProperties[4];  // data: 0x7F6F6C
extern unsigned char vt_rc_ptr_WorldDominationTour_Conflict[4];  // data: 0x7F6F34
extern unsigned char vt_rc_ptr_WorldDominationTour_FlagGameOption[4];  // data: 0x7F7014
extern unsigned char vt_rc_ptr_WorldDominationTour_GameOption[4];  // data: 0x7F7024
extern unsigned char vt_rc_ptr_WorldDominationTour_History[4];  // data: 0x7F6F74
extern unsigned char vt_rc_ptr_WorldDominationTour_Map[4];  // data: 0x7F712C
extern unsigned char vt_rc_ptr_WorldDominationTour_MapSizeGameOption[4];  // data: 0x7F7040
extern unsigned char vt_rc_ptr_WorldDominationTour_State[4];  // data: 0x7F6F2C
extern unsigned char vt_rc_ptr_WorldDominationTour_Territory[4];  // data: 0x7F71C4
extern unsigned char vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char[4];  // data: 0x7F701C
extern unsigned char vt_ReferenceCounted[4];  // data: 0x7F0954
extern unsigned char vt_RLEBlitter[4];  // data: 0x7E5BA0
extern unsigned char vt_RLEBlitTransZRemapXlatAlpha_unsigned_short[4];  // data: 0x7E5460
extern unsigned char vt_RocketLocomotionClass[4];  // data: 0x7F0B1C
extern unsigned char vt_ScoreAnimClass[4];  // data: 0x7F0EDC
extern unsigned char vt_ScoreBigFontClass[4];  // data: 0x7F0F20
extern unsigned char vt_ScoreFontClass[4];  // data: 0x7F0EF0
extern unsigned char vt_ScoreFullFontClass[4];  // data: 0x7F0F08
extern unsigned char vt_ScorePrintClass[4];  // data: 0x7F0EB4
extern unsigned char vt_ScreenCaptureCommandClass[4];  // data: 0x7EBF04
extern unsigned char vt_ScriptClass[4];  // data: 0x7F0F4C
extern unsigned char vt_ScriptTypeClass[4];  // data: 0x7F0FDC
extern unsigned char vt_SelectTeamCommandClass[4];  // data: 0x7EBE64
extern unsigned char vt_ShapeButtonClass[4];  // data: 0x7E8088
extern unsigned char vt_SHAPipe[4];  // data: 0x7E4D78
extern unsigned char vt_ShipLocomotionClass[4];  // data: 0x7F2D8C
extern unsigned char vt_SidebarClass_SBGadgetClass[4];  // data: 0x7F2F44
extern unsigned char vt_SidebarClass_StripClass_SelectClass[4];  // data: 0x7F2FCC
extern unsigned char vt_SideClass[4];  // data: 0x7F2E94
extern unsigned char vt_SlaveManagerClass[4];  // data: 0x7F319C
extern unsigned char vt_SliderClass[4];  // data: 0x7ED21C
extern unsigned char vt_SmudgeTypeClass[4];  // data: 0x7F34FC
extern unsigned char vt_SpawnManagerClass[4];  // data: 0x7F3624
extern unsigned char vt_StaticButtonClass[4];  // data: 0x7F3EA0
extern unsigned char vt_Straw[4];  // data: 0x7E61F0
extern unsigned char vt_SuperClass[4];  // data: 0x7F3FBC
extern unsigned char vt_SuperWeaponTypeClass[4];  // data: 0x7F4064
extern unsigned char vt_SwizzleManagerClass[4];  // data: 0x7F4108
extern unsigned char vt_Tactical[4];  // data: 0x7F431C
extern unsigned char vt_TActionClass[4];  // data: 0x7F4410
extern unsigned char vt_TagClass[4];  // data: 0x7F44B4
extern unsigned char vt_TagTypeClass[4];  // data: 0x7F4598
extern unsigned char vt_TaskForceClass[4];  // data: 0x7F4654
extern unsigned char vt_TauntCommandClass[4];  // data: 0x7EBEDC
extern unsigned char vt_TeamClass[4];  // data: 0x7F4704
extern unsigned char vt_TeamTypeClass[4];  // data: 0x7F47A4
extern unsigned char vt_TechnoClass[4];  // data: 0x7F493C
extern unsigned char vt_TechnoTypeClass[4];  // data: 0x7F4EAC
extern unsigned char vt_TeleportLocomotionClass[4];  // data: 0x7F4FDC
extern unsigned char vt_TemporalClass[4];  // data: 0x7F5154
extern unsigned char vt_TerrainClass[4];  // data: 0x7F521C
extern unsigned char vt_TerrainTypeClass[4];  // data: 0x7F542C
extern unsigned char vt_TEventClass[4];  // data: 0x7F554C
extern unsigned char vt_TextButtonClass[4];  // data: 0x7F55DC
extern unsigned char vt_TiberianSunClassFactory[4];  // data: 0x7EA564
extern unsigned char vt_TiberiumClass[4];  // data: 0x7F56FC
extern unsigned char vt_ToggleClass[4];  // data: 0x7E8118
extern unsigned char vt_ToolTipManager[4];  // data: 0x7F57AC
extern unsigned char vt_TriColorGaugeClass[4];  // data: 0x7E9430
extern unsigned char vt_TriggerClass[4];  // data: 0x7F582C
extern unsigned char vt_TriggerTypeClass[4];  // data: 0x7F58D8
extern unsigned char vt_TubeClass[4];  // data: 0x7F5984
extern unsigned char vt_TunnelLocomotionClass[4];  // data: 0x7F5A24
extern unsigned char vt_TypeList_AircraftTypeClass_const[4];  // data: 0x7EABC8
extern unsigned char vt_TypeList_AnimTypeClass_const[4];  // data: 0x7EB6D4
extern unsigned char vt_TypeList_BuildingTypeClass_const[4];  // data: 0x7ED90C
extern unsigned char vt_TypeList_enum_DiskID[4];  // data: 0x7F12D4
extern unsigned char vt_TypeList_InfantryTypeClass_const[4];  // data: 0x7EAC08
extern unsigned char vt_TypeList_int[4];  // data: 0x7E4DD8
extern unsigned char vt_TypeList_ParticleSystemTypeClass_const[4];  // data: 0x7F4F9C
extern unsigned char vt_TypeList_RGBClass[4];  // data: 0x7E4E58
extern unsigned char vt_TypeList_SmudgeTypeClass_const[4];  // data: 0x7F0D1C
extern unsigned char vt_TypeList_TeamTypeClass_const[4];  // data: 0x7EA9C4
extern unsigned char vt_TypeList_TechnoTypeClass[4];  // data: 0x7E4E18
extern unsigned char vt_TypeList_TerrainTypeClass_const[4];  // data: 0x7F0CFC
extern unsigned char vt_TypeList_UnitTypeClass_const[4];  // data: 0x7EABE8
extern unsigned char vt_TypeList_VoxelAnimTypeClass_const[4];  // data: 0x7F0D3C
extern unsigned char vt_UDPInterfaceClass[4];  // data: 0x7F7A6C
extern unsigned char vt_UnholyAlliance[4];  // data: 0x7EE814
extern unsigned char vt_UnitTypeClass[4];  // data: 0x7F61EC
extern unsigned char vt_VectorClass_AbstractClass[4];  // data: 0x7E920C
extern unsigned char vt_VectorClass_AbstractTypeClass[4];  // data: 0x7EA544
extern unsigned char vt_VectorClass_AcceleratorTracker[4];  // data: 0x7EECEC
extern unsigned char vt_VectorClass_AircraftClass[4];  // data: 0x7E9E84
extern unsigned char vt_VectorClass_AircraftTypeClass[4];  // data: 0x7EA284
extern unsigned char vt_VectorClass_AircraftTypeClass_const[4];  // data: 0x7EAC68
extern unsigned char vt_VectorClass_AirstrikeClass[4];  // data: 0x7E295C
extern unsigned char vt_VectorClass_AITriggerTypeClass[4];  // data: 0x7E9B84
extern unsigned char vt_VectorClass_AlphaLightingRemapClass[4];  // data: 0x7E2AF0
extern unsigned char vt_VectorClass_AlphaShapeClass[4];  // data: 0x7E3258
extern unsigned char vt_VectorClass_AngerStruct[4];  // data: 0x7EA984
extern unsigned char vt_VectorClass_AnimClass[4];  // data: 0x7E9F44
extern unsigned char vt_VectorClass_AnimClass_const[4];  // data: 0x7EBFEC
extern unsigned char vt_VectorClass_AnimTypeClass[4];  // data: 0x7EA304
extern unsigned char vt_VectorClass_AnimTypeClass_const[4];  // data: 0x7EB6F4
extern unsigned char vt_VectorClass_BombClass[4];  // data: 0x7E17EC
extern unsigned char vt_VectorClass_bool[4];  // data: 0x7EAA5C
extern unsigned char vt_VectorClass_BuildingClass[4];  // data: 0x7E9E44
extern unsigned char vt_VectorClass_BuildingLightClass[4];  // data: 0x7E9C44
extern unsigned char vt_VectorClass_BuildingTypeClass[4];  // data: 0x7EA244
extern unsigned char vt_VectorClass_BuildingTypeClass_const[4];  // data: 0x7EAA08
extern unsigned char vt_VectorClass_BulletClass[4];  // data: 0x7E4698
extern unsigned char vt_VectorClass_BulletTypeClass[4];  // data: 0x7EA384
extern unsigned char vt_VectorClass_CampaignClass[4];  // data: 0x7EA004
extern unsigned char vt_VectorClass_CaptureManagerClass[4];  // data: 0x7E4AF4
extern unsigned char vt_VectorClass_CCINIClass[4];  // data: 0x7EB80C
extern unsigned char vt_VectorClass_Cell[4];  // data: 0x7E38D0
extern unsigned char vt_VectorClass_CellClass[4];  // data: 0x7ED480
extern unsigned char vt_VectorClass_char[4];  // data: 0x7E5C24
extern unsigned char vt_VectorClass_char_const[4];  // data: 0x7EE0D4
extern unsigned char vt_VectorClass_ColorScheme[4];  // data: 0x7EF7B0
extern unsigned char vt_VectorClass_CommandClass_const[4];  // data: 0x7E184C
extern unsigned char vt_VectorClass_ControlNode[4];  // data: 0x7E4BC4
extern unsigned char vt_VectorClass_ConvertClass[4];  // data: 0x7E5338
extern unsigned char vt_VectorClass_CoopCampaignClass[4];  // data: 0x7EE3B0
extern unsigned char vt_VectorClass_CrossDissolveEffect[4];  // data: 0x7E8520
extern unsigned char vt_VectorClass_DamageGroup[4];  // data: 0x7E5144
extern unsigned char vt_VectorClass_DDSURFACEDESC[4];  // data: 0x7E5DEC
extern unsigned char vt_VectorClass_DirtyAreaStruct[4];  // data: 0x7F42BC
extern unsigned char vt_VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass[4];  // data: 0x7F4840
extern unsigned char vt_VectorClass_DiscreteDistributionClass_CellClass_DistributionObject_CellClass[4];  // data: 0x7E9264
extern unsigned char vt_VectorClass_DiskLaserClass[4];  // data: 0x7E5EFC
extern unsigned char vt_VectorClass_double[4];  // data: 0x7EDA4C
extern unsigned char vt_VectorClass_DynamicVectorClass_char[4];  // data: 0x7E5C04
extern unsigned char vt_VectorClass_EBolt[4];  // data: 0x7E86AC
extern unsigned char vt_VectorClass_EgoClass[4];  // data: 0x7E86FC
extern unsigned char vt_VectorClass_EMPulseClass[4];  // data: 0x7E875C
extern unsigned char vt_VectorClass_enum_DiskID[4];  // data: 0x7F1274
extern unsigned char vt_VectorClass_enum_PassabilityType[4];  // data: 0x7ED560
extern unsigned char vt_VectorClass_EventClass[4];  // data: 0x7EFE24
extern unsigned char vt_VectorClass_FactoryClass[4];  // data: 0x7E9FC4
extern unsigned char vt_VectorClass_FileEntryClass[4];  // data: 0x7ED32C
extern unsigned char vt_VectorClass_FoggedObjectClass[4];  // data: 0x7E4514
extern unsigned char vt_VectorClass_FoggedObjectClass_DrawRecord[4];  // data: 0x7E8BC0
extern unsigned char vt_VectorClass_FootClass[4];  // data: 0x7E8C48
extern unsigned char vt_VectorClass_GlobalPacketType[4];  // data: 0x7F1234
extern unsigned char vt_VectorClass_GraphicMenuItem[4];  // data: 0x7EA624
extern unsigned char vt_VectorClass_HashObject_HashString_SchemeNode[4];  // data: 0x7EF7D0
extern unsigned char vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass[4];  // data: 0x7F044C
extern unsigned char vt_VectorClass_HouseClass[4];  // data: 0x7E9F04
extern unsigned char vt_VectorClass_HouseClass_BuildChoiceClass[4];  // data: 0x7EA7D4
extern unsigned char vt_VectorClass_HouseClass_StartingTechnoStruct[4];  // data: 0x7EA964
extern unsigned char vt_VectorClass_HouseTypeClass[4];  // data: 0x7EA084
extern unsigned char vt_VectorClass_HSVClass[4];  // data: 0x7EF7F0
extern unsigned char vt_VectorClass_HWND[4];  // data: 0x7EECAC
extern unsigned char vt_VectorClass_IConnectionPoint[4];  // data: 0x7E5D08
extern unsigned char vt_VectorClass_InfantryClass[4];  // data: 0x7E43E8
extern unsigned char vt_VectorClass_InfantryTypeClass[4];  // data: 0x7EA344
extern unsigned char vt_VectorClass_InfantryTypeClass_const[4];  // data: 0x7EAC28
extern unsigned char vt_VectorClass_int[4];  // data: 0x7E4DB8
extern unsigned char vt_VectorClass_IonBlastClass[4];  // data: 0x7EC07C
extern unsigned char vt_VectorClass_IsometricTileClass[4];  // data: 0x7E18DC
extern unsigned char vt_VectorClass_IsometricTileTypeClass[4];  // data: 0x7EA404
extern unsigned char vt_VectorClass_IsometricTileTypeClass_TileInsertType[4];  // data: 0x7ECBFC
extern unsigned char vt_VectorClass_KamikazeControl[4];  // data: 0x7ECE9C
extern unsigned char vt_VectorClass_LaserDrawClass[4];  // data: 0x7ECEFC
extern unsigned char vt_VectorClass_LightConvertClass[4];  // data: 0x7E188C
extern unsigned char vt_VectorClass_LightSourceClass[4];  // data: 0x7ECF9C
extern unsigned char vt_VectorClass_LightSourceClass_PendingCellClass[4];  // data: 0x7ECFDC
extern unsigned char vt_VectorClass_LineTrail[4];  // data: 0x7ED0EC
extern unsigned char vt_VectorClass_MapRegionClass[4];  // data: 0x7ED878
extern unsigned char vt_VectorClass_MapSelection[4];  // data: 0x7EEBB4
extern unsigned char vt_VectorClass_MapStage[4];  // data: 0x7EEAB4
extern unsigned char vt_VectorClass_MixFileClass[4];  // data: 0x7E1A64
extern unsigned char vt_VectorClass_MovieHandle[4];  // data: 0x7F69A4
extern unsigned char vt_VectorClass_MPlayerScoreType[4];  // data: 0x7EE3D0
extern unsigned char vt_VectorClass_MSAnim[4];  // data: 0x7EEC24
extern unsigned char vt_VectorClass_MSAnimEntry[4];  // data: 0x7EEAD4
extern unsigned char vt_VectorClass_MSSfx[4];  // data: 0x7EEC44
extern unsigned char vt_VectorClass_MSSfxEntry[4];  // data: 0x7EEAF4
extern unsigned char vt_VectorClass_MSTextEntry[4];  // data: 0x7EEB94
extern unsigned char vt_VectorClass_MultiMission[4];  // data: 0x7F1214
extern unsigned char vt_VectorClass_MultiMission_const[4];  // data: 0x7EEF50
extern unsigned char vt_VectorClass_MultiplayerGameMode[4];  // data: 0x7EED40
extern unsigned char vt_VectorClass_MultiplayerTeam[4];  // data: 0x7EEE54
extern unsigned char vt_VectorClass_NeuronClass[4];  // data: 0x7E3E54
extern unsigned char vt_VectorClass_NodeNameType[4];  // data: 0x7EE390
extern unsigned char vt_VectorClass_ObjectClass[4];  // data: 0x7E192C
extern unsigned char vt_VectorClass_ObjectTypeClass[4];  // data: 0x7EF28C
extern unsigned char vt_VectorClass_OverlayClass[4];  // data: 0x7E9D44
extern unsigned char vt_VectorClass_OverlayTypeClass[4];  // data: 0x7EA184
extern unsigned char vt_VectorClass_OwnerTalkClass_ConnectionListStruct[4];  // data: 0x7F0C4C
extern unsigned char vt_VectorClass_ParasiteClass[4];  // data: 0x7EF844
extern unsigned char vt_VectorClass_ParticleClass[4];  // data: 0x7E9D84
extern unsigned char vt_VectorClass_ParticleSystemClass[4];  // data: 0x7E9C84
extern unsigned char vt_VectorClass_ParticleSystemTypeClass[4];  // data: 0x7EA484
extern unsigned char vt_VectorClass_ParticleSystemTypeClass_const[4];  // data: 0x7E4424
extern unsigned char vt_VectorClass_ParticleTypeClass[4];  // data: 0x7EA444
extern unsigned char vt_VectorClass_PlanningBranchClass[4];  // data: 0x7EFF24
extern unsigned char vt_VectorClass_PlanningMemberClass[4];  // data: 0x7EFF04
extern unsigned char vt_VectorClass_PlanningNodeClass[4];  // data: 0x7EFE64
extern unsigned char vt_VectorClass_PlanningTokenClass[4];  // data: 0x7EFEA4
extern unsigned char vt_VectorClass_Point2D[4];  // data: 0x7EEB74
extern unsigned char vt_VectorClass_RadarEventClass[4];  // data: 0x7F0ACC
extern unsigned char vt_VectorClass_RadBeam[4];  // data: 0x7F04A4
extern unsigned char vt_VectorClass_RadSiteClass[4];  // data: 0x7F07C4
extern unsigned char vt_VectorClass_rc_ptr_WDTTerritory[4];  // data: 0x7F7230
extern unsigned char vt_VectorClass_rc_ptr_WorldDominationTour_Conflict[4];  // data: 0x7F6F7C
extern unsigned char vt_VectorClass_rc_ptr_WorldDominationTour_GameOption[4];  // data: 0x7F6FF4
extern unsigned char vt_VectorClass_rc_ptr_WorldDominationTour_Territory[4];  // data: 0x7F7184
extern unsigned char vt_VectorClass_Reestablish[4];  // data: 0x7E4468
extern unsigned char vt_VectorClass_RGBClass[4];  // data: 0x7E4E38
extern unsigned char vt_VectorClass_ScoutStruct[4];  // data: 0x7EA9A4
extern unsigned char vt_VectorClass_ScriptClass[4];  // data: 0x7E1B44
extern unsigned char vt_VectorClass_ScriptTypeClass[4];  // data: 0x7EA144
extern unsigned char vt_VectorClass_ShadowControlClass[4];  // data: 0x7F42FC
extern unsigned char vt_VectorClass_SideClass[4];  // data: 0x7EA044
extern unsigned char vt_VectorClass_SlaveManagerClass[4];  // data: 0x7F317C
extern unsigned char vt_VectorClass_SlaveManagerClass_SlaveControl[4];  // data: 0x7F324C
extern unsigned char vt_VectorClass_SmudgeClass[4];  // data: 0x7E9DC4
extern unsigned char vt_VectorClass_SmudgeTypeClass[4];  // data: 0x7EA1C4
extern unsigned char vt_VectorClass_SmudgeTypeClass_const[4];  // data: 0x7F0D7C
extern unsigned char vt_VectorClass_SpawnManagerClass[4];  // data: 0x7F3604
extern unsigned char vt_VectorClass_SpawnManagerClass_SpawnControl[4];  // data: 0x7F36D4
extern unsigned char vt_VectorClass_SpotLightClass[4];  // data: 0x7EF6DC
extern unsigned char vt_VectorClass_SubTitle[4];  // data: 0x7F3F8C
extern unsigned char vt_VectorClass_SubzoneConnectionStruct[4];  // data: 0x7E177C
extern unsigned char vt_VectorClass_SubzoneTrackingStruct[4];  // data: 0x7ED500
extern unsigned char vt_VectorClass_SuperClass[4];  // data: 0x7EA504
extern unsigned char vt_VectorClass_SuperWeaponTypeClass[4];  // data: 0x7EA4C4
extern unsigned char vt_VectorClass_SwizzlePointerClass[4];  // data: 0x7F4154
extern unsigned char vt_VectorClass_TActionClass[4];  // data: 0x7F43F0
extern unsigned char vt_VectorClass_TagClass[4];  // data: 0x7EA5C4
extern unsigned char vt_VectorClass_tagCONNECTDATA[4];  // data: 0x7E5C84
extern unsigned char vt_VectorClass_TagTypeClass[4];  // data: 0x7F4578
extern unsigned char vt_VectorClass_TaskForceClass[4];  // data: 0x7EA0C4
extern unsigned char vt_VectorClass_tConnInfoStruct[4];  // data: 0x7F78A4
extern unsigned char vt_VectorClass_TeamClass[4];  // data: 0x7E9F84
extern unsigned char vt_VectorClass_TeamTypeClass[4];  // data: 0x7EA104
extern unsigned char vt_VectorClass_TeamTypeClass_const[4];  // data: 0x7EA9E4
extern unsigned char vt_VectorClass_TechnoClass[4];  // data: 0x7E180C
extern unsigned char vt_VectorClass_TechnoTypeClass[4];  // data: 0x7E4DF8
extern unsigned char vt_VectorClass_TechnoTypeClass_const[4];  // data: 0x7E8954
extern unsigned char vt_VectorClass_TemporalClass[4];  // data: 0x7F5134
extern unsigned char vt_VectorClass_TerrainClass[4];  // data: 0x7E9E04
extern unsigned char vt_VectorClass_TerrainTypeClass[4];  // data: 0x7EA204
extern unsigned char vt_VectorClass_TerrainTypeClass_const[4];  // data: 0x7F0D9C
extern unsigned char vt_VectorClass_TEventClass[4];  // data: 0x7F552C
extern unsigned char vt_VectorClass_ThemeControl[4];  // data: 0x7EA584
extern unsigned char vt_VectorClass_TiberiumClass[4];  // data: 0x7F56DC
extern unsigned char vt_VectorClass_ToolTip_const[4];  // data: 0x7F57E8
extern unsigned char vt_VectorClass_TPoint3D_int[4];  // data: 0x7E4638
extern unsigned char vt_VectorClass_TRect_int[4];  // data: 0x7ED970
extern unsigned char vt_VectorClass_TriggerClass[4];  // data: 0x7E9C04
extern unsigned char vt_VectorClass_TriggerTypeClass[4];  // data: 0x7E9BC4
extern unsigned char vt_VectorClass_TubeClass[4];  // data: 0x7E9CC4
extern unsigned char vt_VectorClass_UndoInfoStruct[4];  // data: 0x7F329C
extern unsigned char vt_VectorClass_UnitClass[4];  // data: 0x7E9EC4
extern unsigned char vt_VectorClass_UnitTypeClass[4];  // data: 0x7EA2C4
extern unsigned char vt_VectorClass_UnitTypeClass_const[4];  // data: 0x7EAC48
extern unsigned char vt_VectorClass_unsigned_char[4];  // data: 0x7F7B0C
extern unsigned char vt_VectorClass_unsigned_char_7F65F4[4];  // data: 0x7F65F4
extern unsigned char vt_VectorClass_unsigned_int[4];  // data: 0x7E37EC
extern unsigned char vt_VectorClass_unsigned_long[4];  // data: 0x7F3748
extern unsigned char vt_VectorClass_unsigned_short[4];  // data: 0x7ECD0C
extern unsigned char vt_VectorClass_unsigned_short_7E3824[4];  // data: 0x7E3824
extern unsigned char vt_VectorClass_unsigned_short_const[4];  // data: 0x7ED1FC
extern unsigned char vt_VectorClass_VeinholeMonsterClass[4];  // data: 0x7F665C
extern unsigned char vt_VectorClass_VocClass[4];  // data: 0x7F68CC
extern unsigned char vt_VectorClass_VoxClass[4];  // data: 0x7F6924
extern unsigned char vt_VectorClass_VoxelAnimClass[4];  // data: 0x7E1E4C
extern unsigned char vt_VectorClass_VoxelAnimTypeClass[4];  // data: 0x7EA3C4
extern unsigned char vt_VectorClass_VoxelAnimTypeClass_const[4];  // data: 0x7F0D5C
extern unsigned char vt_VectorClass_WarheadTypeClass[4];  // data: 0x7E1EA4
extern unsigned char vt_VectorClass_WaveClass[4];  // data: 0x7E9D04
extern unsigned char vt_VectorClass_WaypointClass[4];  // data: 0x7F6EF4
extern unsigned char vt_VectorClass_WaypointPathClass[4];  // data: 0x7F6E24
extern unsigned char vt_VectorClass_WeaponTypeClass[4];  // data: 0x7E1EF4
extern unsigned char vt_VectorClass_WIN32_FIND_DATAA[4];  // data: 0x7ED92C
extern unsigned char vt_VectorClass_WinsockInterfaceClass_WinsockBufferType[4];  // data: 0x7F7A3C
extern unsigned char vt_VectorClass_WorldDominationTour_Centroid[4];  // data: 0x7F71E0
extern unsigned char vt_VectorClass_WorldDominationTour_Map_AnimationPalette[4];  // data: 0x7F71A4
extern unsigned char vt_VectorClass_Wstring[4];  // data: 0x7F1294
extern unsigned char vt_VectorClass_ZoneConnectionClass[4];  // data: 0x7ED4E0
extern unsigned char vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem[4];  // data: 0x7EA644
extern unsigned char vt_VectorCursor_MSAnim_DynamicVectorClass_MSAnim[4];  // data: 0x7F72EC
extern unsigned char vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry[4];  // data: 0x7F72C4
extern unsigned char vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict[4];  // data: 0x7F6F9C
extern unsigned char vt_VectorCursor_rc_ptr_WorldDominationTour_GameOption_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption[4];  // data: 0x7F702C
extern unsigned char vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory[4];  // data: 0x7F72D8
extern unsigned char vt_VectorCursor_TRect_int_VectorClass_TRect_int[4];  // data: 0x7F71CC
extern unsigned char vt_VectorCursor_unsigned_int_DynamicVectorClass_unsigned_int[4];  // data: 0x7EA6C8
extern unsigned char vt_VersionClass[4];  // data: 0x7EA57C
extern unsigned char vt_VoxelAnimClass[4];  // data: 0x7F62EC
extern unsigned char vt_VoxelAnimTypeClass[4];  // data: 0x7F651C
extern unsigned char vt_VQMovieHandle[4];  // data: 0x7EE0F4
extern unsigned char vt_WalkLocomotionClass[4];  // data: 0x7F69D4
extern unsigned char vt_WarheadTypeClass[4];  // data: 0x7F6B04
extern unsigned char vt_WaveClass[4];  // data: 0x7F6BD0
extern unsigned char vt_WaypointPathClass[4];  // data: 0x7F6E44
extern unsigned char vt_WDTState[4];  // data: 0x7F7250
extern unsigned char vt_WeaponTypeClass[4];  // data: 0x7F738C
extern unsigned char vt_WebBrowser[4];  // data: 0x7F743C
extern unsigned char vt_WinModemClass[4];  // data: 0x7F7488
extern unsigned char vt_WinsockInterfaceClass[4];  // data: 0x7F79BC
extern unsigned char vt_WonlineStringDialogControl[4];  // data: 0x7F7874
extern unsigned char vt_WorldDominationTour_Campaign[4];  // data: 0x7F6F3C
extern unsigned char vt_WorldDominationTour_Conflict[4];  // data: 0x7F6FC4
extern unsigned char vt_WorldDominationTour_FactionSelectDialogControl[4];  // data: 0x7F791C
extern unsigned char vt_WorldDominationTour_History[4];  // data: 0x7F70DC
extern unsigned char vt_WorldDominationTour_MapSizeGameOption[4];  // data: 0x7F70B4
extern unsigned char vt_WorldDominationTour_State[4];  // data: 0x7F7314
extern unsigned char vt_WorldDominationTour_Territory[4];  // data: 0x7F7334
extern unsigned char vt_WorldDominationTour_Voices_Anim[4];  // data: 0x7F7354
extern unsigned char XSurface_Vtable[4];  // data: 0x7E2104
extern unsigned int DataGlobal_7E1B74;  // data: 0x7E1B74
extern unsigned int DataGlobal_7E1BD0;  // data: 0x7E1BD0
extern unsigned int DataGlobal_7E2248;  // data: 0x7E2248
extern unsigned int DataGlobal_7E3710;  // data: 0x7E3710
extern unsigned int DataGlobal_7E3730;  // data: 0x7E3730
extern unsigned int DataGlobal_7E3760;  // data: 0x7E3760
extern unsigned int DataGlobal_7E7A28;  // data: 0x7E7A28
extern unsigned int DataGlobal_7E7A2C;  // data: 0x7E7A2C
extern unsigned int DataGlobal_7E7A30;  // data: 0x7E7A30
extern unsigned int DataGlobal_7E7A34;  // data: 0x7E7A34
extern unsigned int DataGlobal_7E7B30;  // data: 0x7E7B30
extern unsigned int DataGlobal_7E9550;  // data: 0x7E9550
extern unsigned int DataGlobal_7EA790;  // data: 0x7EA790
extern unsigned int DataGlobal_7EA7A0;  // data: 0x7EA7A0
extern unsigned int DataGlobal_7EAEFC;  // data: 0x7EAEFC
extern unsigned int DataGlobal_7ED3C4;  // data: 0x7ED3C4
extern unsigned int DataGlobal_7ED3D0;  // data: 0x7ED3D0
extern unsigned int DataGlobal_7ED3D4;  // data: 0x7ED3D4
extern unsigned int DataGlobal_7ED3FC;  // data: 0x7ED3FC
extern unsigned int DataGlobal_7ED7D8;  // data: 0x7ED7D8
extern unsigned int DataGlobal_7ED7DC;  // data: 0x7ED7DC
extern unsigned int DataGlobal_7ED7E8;  // data: 0x7ED7E8
extern unsigned int DataGlobal_7ED7EC;  // data: 0x7ED7EC
extern unsigned int DataGlobal_7EEF28;  // data: 0x7EEF28
extern unsigned int DataGlobal_7F0998;  // data: 0x7F0998
extern unsigned int DataGlobal_7F099C;  // data: 0x7F099C
extern unsigned int DataGlobal_7F09A0;  // data: 0x7F09A0
extern unsigned int DataGlobal_7F2960;  // data: 0x7F2960
extern unsigned int DataGlobal_7F2964;  // data: 0x7F2964
extern unsigned int DataGlobal_7F2968;  // data: 0x7F2968
extern unsigned int DataGlobal_7F296C;  // data: 0x7F296C
extern unsigned int DataGlobal_7F2A48;  // data: 0x7F2A48
extern unsigned int DataGlobal_7F4890;  // data: 0x7F4890
extern unsigned int DataGlobal_7F5BE4;  // data: 0x7F5BE4
extern unsigned int DataGlobal_7F5BF0;  // data: 0x7F5BF0
extern unsigned int DataGlobal_7F5BF8;  // data: 0x7F5BF8
extern unsigned int DataGlobal_7F5BFC;  // data: 0x7F5BFC
extern unsigned int DataGlobal_7F763C;  // data: 0x7F763C
extern unsigned int DataGlobal_7F7654;  // data: 0x7F7654
extern unsigned int DataGlobal_7F769C;  // data: 0x7F769C
extern unsigned int DataGlobal_812000;  // data: 0x812000
extern unsigned int DataGlobal_815DA4;  // data: 0x815DA4
extern unsigned int DataGlobal_815DC0;  // data: 0x815DC0
extern unsigned int DataGlobal_815DD0;  // data: 0x815DD0
extern unsigned int DataGlobal_815DD4;  // data: 0x815DD4
extern unsigned int DataGlobal_815DDC;  // data: 0x815DDC
extern unsigned int DataGlobal_816018;  // data: 0x816018
extern unsigned int DataGlobal_816048;  // data: 0x816048
extern unsigned int DataGlobal_816108;  // data: 0x816108
extern unsigned int DataGlobal_816380;  // data: 0x816380
extern unsigned int DataGlobal_816510;  // data: 0x816510
extern unsigned int DataGlobal_816518;  // data: 0x816518
extern unsigned int DataGlobal_816558;  // data: 0x816558
extern unsigned int DataGlobal_816EE4;  // data: 0x816EE4
extern unsigned int DataGlobal_817130;  // data: 0x817130
extern unsigned int DataGlobal_817A58;  // data: 0x817A58
extern unsigned int DataGlobal_817A78;  // data: 0x817A78
extern unsigned int DataGlobal_818760;  // data: 0x818760
extern unsigned int DataGlobal_818CB0;  // data: 0x818CB0
extern unsigned int DataGlobal_818CC8;  // data: 0x818CC8
extern unsigned int DataGlobal_81928C;  // data: 0x81928C
extern unsigned int DataGlobal_8192B8;  // data: 0x8192B8
extern unsigned int DataGlobal_8192BC;  // data: 0x8192BC
extern unsigned int DataGlobal_819310;  // data: 0x819310
extern unsigned int DataGlobal_81AF00;  // data: 0x81AF00
extern unsigned int DataGlobal_81B9B4;  // data: 0x81B9B4
extern unsigned int DataGlobal_81C1D0;  // data: 0x81C1D0
extern unsigned int DataGlobal_81C9A8;  // data: 0x81C9A8
extern unsigned int DataGlobal_81C9AC;  // data: 0x81C9AC
extern unsigned int DataGlobal_81C9C0;  // data: 0x81C9C0
extern unsigned int DataGlobal_81C9C4;  // data: 0x81C9C4
extern unsigned int DataGlobal_81C9C8;  // data: 0x81C9C8
extern unsigned int DataGlobal_81C9CC;  // data: 0x81C9CC
extern unsigned int DataGlobal_81C9D0;  // data: 0x81C9D0
extern unsigned int DataGlobal_81C9D4;  // data: 0x81C9D4
extern unsigned int DataGlobal_81C9D8;  // data: 0x81C9D8
extern unsigned int DataGlobal_81C9DC;  // data: 0x81C9DC
extern unsigned int DataGlobal_81C9E8;  // data: 0x81C9E8
extern unsigned int DataGlobal_81C9EC;  // data: 0x81C9EC
extern unsigned int DataGlobal_81C9F0;  // data: 0x81C9F0
extern unsigned int DataGlobal_81C9F4;  // data: 0x81C9F4
extern unsigned int DataGlobal_81C9F8;  // data: 0x81C9F8
extern unsigned int DataGlobal_81C9FC;  // data: 0x81C9FC
extern unsigned int DataGlobal_81CA10;  // data: 0x81CA10
extern unsigned int DataGlobal_81CA14;  // data: 0x81CA14
extern unsigned int DataGlobal_81CA18;  // data: 0x81CA18
extern unsigned int DataGlobal_81CA1C;  // data: 0x81CA1C
extern unsigned int DataGlobal_81CA20;  // data: 0x81CA20
extern unsigned int DataGlobal_81CA24;  // data: 0x81CA24
extern unsigned int DataGlobal_81CA28;  // data: 0x81CA28
extern unsigned int DataGlobal_81CA2C;  // data: 0x81CA2C
extern unsigned int DataGlobal_81CA38;  // data: 0x81CA38
extern unsigned int DataGlobal_81CA3C;  // data: 0x81CA3C
extern unsigned int DataGlobal_81CA40;  // data: 0x81CA40
extern unsigned int DataGlobal_81CA44;  // data: 0x81CA44
extern unsigned int DataGlobal_81CA48;  // data: 0x81CA48
extern unsigned int DataGlobal_81CA4C;  // data: 0x81CA4C
extern unsigned int DataGlobal_81CA50;  // data: 0x81CA50
extern unsigned int DataGlobal_81CA54;  // data: 0x81CA54
extern unsigned int DataGlobal_81CA60;  // data: 0x81CA60
extern unsigned int DataGlobal_81CA64;  // data: 0x81CA64
extern unsigned int DataGlobal_81CA68;  // data: 0x81CA68
extern unsigned int DataGlobal_81CA6C;  // data: 0x81CA6C
extern unsigned int DataGlobal_81CA70;  // data: 0x81CA70
extern unsigned int DataGlobal_81CA74;  // data: 0x81CA74
extern unsigned int DataGlobal_81CA88;  // data: 0x81CA88
extern unsigned int DataGlobal_81CA8C;  // data: 0x81CA8C
extern unsigned int DataGlobal_81CA90;  // data: 0x81CA90
extern unsigned int DataGlobal_81CA94;  // data: 0x81CA94
extern unsigned int DataGlobal_81CA98;  // data: 0x81CA98
extern unsigned int DataGlobal_81CA9C;  // data: 0x81CA9C
extern unsigned int DataGlobal_81CAB0;  // data: 0x81CAB0
extern unsigned int DataGlobal_81CAB4;  // data: 0x81CAB4
extern unsigned int DataGlobal_81CAB8;  // data: 0x81CAB8
extern unsigned int DataGlobal_81CABC;  // data: 0x81CABC
extern unsigned int DataGlobal_81CAC0;  // data: 0x81CAC0
extern unsigned int DataGlobal_81CAC4;  // data: 0x81CAC4
extern unsigned int DataGlobal_81CAD8;  // data: 0x81CAD8
extern unsigned int DataGlobal_81CADC;  // data: 0x81CADC
extern unsigned int DataGlobal_81CAE0;  // data: 0x81CAE0
extern unsigned int DataGlobal_81CAE4;  // data: 0x81CAE4
extern unsigned int DataGlobal_81CAE8;  // data: 0x81CAE8
extern unsigned int DataGlobal_81CAEC;  // data: 0x81CAEC
extern unsigned int DataGlobal_81CAF0;  // data: 0x81CAF0
extern unsigned int DataGlobal_81CAF4;  // data: 0x81CAF4
extern unsigned int DataGlobal_81CB00;  // data: 0x81CB00
extern unsigned int DataGlobal_81CB04;  // data: 0x81CB04
extern unsigned int DataGlobal_81CB08;  // data: 0x81CB08
extern unsigned int DataGlobal_81CB0C;  // data: 0x81CB0C
extern unsigned int DataGlobal_81CB10;  // data: 0x81CB10
extern unsigned int DataGlobal_81CB14;  // data: 0x81CB14
extern unsigned int DataGlobal_81CB28;  // data: 0x81CB28
extern unsigned int DataGlobal_81CB2C;  // data: 0x81CB2C
extern unsigned int DataGlobal_81CB30;  // data: 0x81CB30
extern unsigned int DataGlobal_81CB34;  // data: 0x81CB34
extern unsigned int DataGlobal_81CB38;  // data: 0x81CB38
extern unsigned int DataGlobal_81CB3C;  // data: 0x81CB3C
extern unsigned int DataGlobal_81CB50;  // data: 0x81CB50
extern unsigned int DataGlobal_81CB54;  // data: 0x81CB54
extern unsigned int DataGlobal_81CB58;  // data: 0x81CB58
extern unsigned int DataGlobal_81CB5C;  // data: 0x81CB5C
extern unsigned int DataGlobal_81CB60;  // data: 0x81CB60
extern unsigned int DataGlobal_81CB64;  // data: 0x81CB64
extern unsigned int DataGlobal_81CB78;  // data: 0x81CB78
extern unsigned int DataGlobal_81CB7C;  // data: 0x81CB7C
extern unsigned int DataGlobal_81CB80;  // data: 0x81CB80
extern unsigned int DataGlobal_81CB84;  // data: 0x81CB84
extern unsigned int DataGlobal_81CB88;  // data: 0x81CB88
extern unsigned int DataGlobal_81CB8C;  // data: 0x81CB8C
extern unsigned int DataGlobal_81CB90;  // data: 0x81CB90
extern unsigned int DataGlobal_81CB94;  // data: 0x81CB94
extern unsigned int DataGlobal_81CBA8;  // data: 0x81CBA8
extern unsigned int DataGlobal_81CBAC;  // data: 0x81CBAC
extern unsigned int DataGlobal_81CBB0;  // data: 0x81CBB0
extern unsigned int DataGlobal_81CBB4;  // data: 0x81CBB4
extern unsigned int DataGlobal_81CBD0;  // data: 0x81CBD0
extern unsigned int DataGlobal_81CBD4;  // data: 0x81CBD4
extern unsigned int DataGlobal_81CBD8;  // data: 0x81CBD8
extern unsigned int DataGlobal_81CBDC;  // data: 0x81CBDC
extern unsigned int DataGlobal_81CBE0;  // data: 0x81CBE0
extern unsigned int DataGlobal_81CBE4;  // data: 0x81CBE4
extern unsigned int DataGlobal_81CBF8;  // data: 0x81CBF8
extern unsigned int DataGlobal_81CBFC;  // data: 0x81CBFC
extern unsigned int DataGlobal_81CC00;  // data: 0x81CC00
extern unsigned int DataGlobal_81CC04;  // data: 0x81CC04
extern unsigned int DataGlobal_81CC20;  // data: 0x81CC20
extern unsigned int DataGlobal_81CCA8;  // data: 0x81CCA8
extern unsigned int DataGlobal_81CD5C;  // data: 0x81CD5C
extern unsigned int DataGlobal_81D4E4;  // data: 0x81D4E4
extern unsigned int DataGlobal_81DA8C;  // data: 0x81DA8C
extern unsigned int DataGlobal_81DAD8;  // data: 0x81DAD8
extern unsigned int DataGlobal_81FC60;  // data: 0x81FC60
extern unsigned int DataGlobal_820E5C;  // data: 0x820E5C
extern unsigned int DataGlobal_822540;  // data: 0x822540
extern unsigned int DataGlobal_822CF8;  // data: 0x822CF8
extern unsigned int DataGlobal_822D1C;  // data: 0x822D1C
extern unsigned int DataGlobal_822D80;  // data: 0x822D80
extern unsigned int DataGlobal_828140;  // data: 0x828140
extern unsigned int DataGlobal_8288E4;  // data: 0x8288E4
extern unsigned int DataGlobal_829AE8;  // data: 0x829AE8
extern unsigned int DataGlobal_829FF4;  // data: 0x829FF4
extern unsigned int DataGlobal_829FF8;  // data: 0x829FF8
extern unsigned int DataGlobal_82A27C;  // data: 0x82A27C
extern unsigned int DataGlobal_82A284;  // data: 0x82A284
extern unsigned int DataGlobal_82A288;  // data: 0x82A288
extern unsigned int DataGlobal_82A594;  // data: 0x82A594
extern unsigned int DataGlobal_82A734;  // data: 0x82A734
extern unsigned int DataGlobal_82A774;  // data: 0x82A774
extern unsigned int DataGlobal_82A7B4;  // data: 0x82A7B4
extern unsigned int DataGlobal_82A7F4;  // data: 0x82A7F4
extern unsigned int DataGlobal_82A89C;  // data: 0x82A89C
extern unsigned int DataGlobal_82A944;  // data: 0x82A944
extern unsigned int DataGlobal_82A984;  // data: 0x82A984
extern unsigned int DataGlobal_82A988;  // data: 0x82A988
extern unsigned int DataGlobal_82A9C4;  // data: 0x82A9C4
extern unsigned int DataGlobal_82A9C8;  // data: 0x82A9C8
extern unsigned int DataGlobal_82AA44;  // data: 0x82AA44
extern unsigned int DataGlobal_82AF18;  // data: 0x82AF18
extern unsigned int DataGlobal_82B080;  // data: 0x82B080
extern unsigned int DataGlobal_82B094;  // data: 0x82B094
extern unsigned int DataGlobal_82B0A8;  // data: 0x82B0A8
extern unsigned int DataGlobal_82B0BC;  // data: 0x82B0BC
extern unsigned int DataGlobal_82B0D0;  // data: 0x82B0D0
extern unsigned int DataGlobal_82B0F8;  // data: 0x82B0F8
extern unsigned int DataGlobal_82B10C;  // data: 0x82B10C
extern unsigned int DataGlobal_82B120;  // data: 0x82B120
extern unsigned int DataGlobal_82B530;  // data: 0x82B530
extern unsigned int DataGlobal_82C24C;  // data: 0x82C24C
extern unsigned int DataGlobal_82FCE0;  // data: 0x82FCE0
extern unsigned int DataGlobal_830078;  // data: 0x830078
extern unsigned int DataGlobal_830084;  // data: 0x830084
extern unsigned int DataGlobal_8468C0;  // data: 0x8468C0
extern unsigned int DataGlobal_8468C4;  // data: 0x8468C4
extern unsigned int DataGlobal_8468CC;  // data: 0x8468CC
extern unsigned int DataGlobal_8468D0;  // data: 0x8468D0
extern unsigned int DataGlobal_8468D4;  // data: 0x8468D4
extern unsigned int DataGlobal_8468D8;  // data: 0x8468D8
extern unsigned int DataGlobal_8468DC;  // data: 0x8468DC
extern unsigned int DataGlobal_8468E0;  // data: 0x8468E0
extern unsigned int DataGlobal_8469E0;  // data: 0x8469E0
extern unsigned int DataGlobal_8469F4;  // data: 0x8469F4
extern unsigned int DataGlobal_849DE0;  // data: 0x849DE0
extern unsigned int DataGlobal_849DE4;  // data: 0x849DE4
extern unsigned int DataGlobal_84A1BC;  // data: 0x84A1BC
extern unsigned int DataGlobal_84A1C0;  // data: 0x84A1C0
extern unsigned int DataGlobal_84A1C4;  // data: 0x84A1C4
extern unsigned int DataGlobal_84A1C8;  // data: 0x84A1C8
extern unsigned int DataGlobal_84A1CC;  // data: 0x84A1CC
extern unsigned int DataGlobal_84A1D0;  // data: 0x84A1D0
extern unsigned int DataGlobal_84A1D4;  // data: 0x84A1D4
extern unsigned int DataGlobal_84A1D8;  // data: 0x84A1D8
extern unsigned int DataGlobal_84A1E0;  // data: 0x84A1E0
extern unsigned int DataGlobal_84A1E4;  // data: 0x84A1E4
extern unsigned int DataGlobal_84A1F0;  // data: 0x84A1F0
extern unsigned int DataGlobal_84A238;  // data: 0x84A238
extern unsigned int DataGlobal_8650BC;  // data: 0x8650BC
extern unsigned int DataGlobal_8759A0;  // data: 0x8759A0
extern unsigned int DataGlobal_8759A4;  // data: 0x8759A4
extern unsigned int DataGlobal_8759A8;  // data: 0x8759A8
extern unsigned int DataGlobal_8759AC;  // data: 0x8759AC
extern unsigned int DataGlobal_877D20;  // data: 0x877D20
extern unsigned int DataGlobal_87BFC0;  // data: 0x87BFC0
extern unsigned int DataGlobal_87C2A4;  // data: 0x87C2A4
extern unsigned int DataGlobal_87C2A8;  // data: 0x87C2A8
extern unsigned int DataGlobal_87C368;  // data: 0x87C368
extern unsigned int DataGlobal_89A150;  // data: 0x89A150
extern unsigned int DataGlobal_89A2D8;  // data: 0x89A2D8
extern unsigned int DataGlobal_89C474;  // data: 0x89C474
extern unsigned int DataGlobal_89C478;  // data: 0x89C478
extern unsigned int DataGlobal_89C668;  // data: 0x89C668
extern unsigned int DataGlobal_89C670;  // data: 0x89C670
extern unsigned int DataGlobal_89C678;  // data: 0x89C678
extern unsigned int DataGlobal_89C67C;  // data: 0x89C67C
extern unsigned int DataGlobal_89DDC0;  // data: 0x89DDC0
extern unsigned int DataGlobal_89DDF0;  // data: 0x89DDF0
extern unsigned int DataGlobal_89DE30;  // data: 0x89DE30
extern unsigned int DataGlobal_89E0F0;  // data: 0x89E0F0
extern unsigned int DataGlobal_89E0F8;  // data: 0x89E0F8
extern unsigned int DataGlobal_89E100;  // data: 0x89E100
extern unsigned int DataGlobal_89E104;  // data: 0x89E104
extern unsigned int DataGlobal_8B4178;  // data: 0x8B4178
extern unsigned int DataGlobal_8B418C;  // data: 0x8B418C
extern unsigned int DataGlobal_8B4190;  // data: 0x8B4190
extern unsigned int DataGlobal_8B4198;  // data: 0x8B4198
extern unsigned int DataGlobal_8B41A0;  // data: 0x8B41A0
extern unsigned int DataGlobal_8B41A4;  // data: 0x8B41A4
extern unsigned int DataGlobal_8B41B8;  // data: 0x8B41B8
extern unsigned int DataGlobal_8B41C8;  // data: 0x8B41C8
extern unsigned int DataGlobal_8B41D0;  // data: 0x8B41D0
extern unsigned int DataGlobal_8B41DC;  // data: 0x8B41DC
extern unsigned int DataGlobal_8B41E0;  // data: 0x8B41E0
extern unsigned int DataGlobal_A70204;  // data: 0xA70204
extern unsigned int DataGlobal_A80208;  // data: 0xA80208
extern unsigned int DataGlobal_A8020C;  // data: 0xA8020C
extern unsigned int DataGlobal_A80210;  // data: 0xA80210
extern unsigned int DataGlobal_A8021C;  // data: 0xA8021C
extern unsigned int DataGlobal_A80230;  // data: 0xA80230
extern unsigned int DataGlobal_A8023C;  // data: 0xA8023C
extern unsigned int DataGlobal_A802D7;  // data: 0xA802D7
extern unsigned int DataGlobal_A802DB;  // data: 0xA802DB
extern unsigned int DataGlobal_A802DF;  // data: 0xA802DF
extern unsigned int DataGlobal_A83C58;  // data: 0xA83C58
extern unsigned int DataGlobal_A83C5C;  // data: 0xA83C5C
extern unsigned int DataGlobal_A83C60;  // data: 0xA83C60
extern unsigned int DataGlobal_A83C64;  // data: 0xA83C64
extern unsigned int DataGlobal_A83C68;  // data: 0xA83C68
extern unsigned int DataGlobal_A83C70;  // data: 0xA83C70
extern unsigned int DataGlobal_A83C7C;  // data: 0xA83C7C
extern unsigned int DataGlobal_A83C84;  // data: 0xA83C84
extern unsigned int DataGlobal_A83C88;  // data: 0xA83C88
extern unsigned int DataGlobal_A83C94;  // data: 0xA83C94
extern unsigned int DataGlobal_A83C98;  // data: 0xA83C98
extern unsigned int DataGlobal_A83CA0;  // data: 0xA83CA0
extern unsigned int DataGlobal_A83CAC;  // data: 0xA83CAC
extern unsigned int DataGlobal_A83CB8;  // data: 0xA83CB8
extern unsigned int DataGlobal_A83CBC;  // data: 0xA83CBC
extern unsigned int DataGlobal_A83CC0;  // data: 0xA83CC0
extern unsigned int DataGlobal_A83CC8;  // data: 0xA83CC8
extern unsigned int DataGlobal_A83CCC;  // data: 0xA83CCC
extern unsigned int DataGlobal_A83CDC;  // data: 0xA83CDC
extern unsigned int DataGlobal_A83CE8;  // data: 0xA83CE8
extern unsigned int DataGlobal_A83CF4;  // data: 0xA83CF4
extern unsigned int DataGlobal_A83CF8;  // data: 0xA83CF8
extern unsigned int DataGlobal_A83D00;  // data: 0xA83D00
extern unsigned int DataGlobal_A83D0C;  // data: 0xA83D0C
extern unsigned int DataGlobal_A83D14;  // data: 0xA83D14
extern unsigned int DataGlobal_A83D18;  // data: 0xA83D18
extern unsigned int DataGlobal_A83D24;  // data: 0xA83D24
extern unsigned int DataGlobal_A83D28;  // data: 0xA83D28
extern unsigned int DataGlobal_A83D2C;  // data: 0xA83D2C
extern unsigned int DataGlobal_A83D34;  // data: 0xA83D34
extern unsigned int DataGlobal_A83D3C;  // data: 0xA83D3C
extern unsigned int DataGlobal_A9F9D8;  // data: 0xA9F9D8
extern unsigned int DataGlobal_A9F9E0;  // data: 0xA9F9E0
extern unsigned int DataGlobal_A9F9E4;  // data: 0xA9F9E4
extern unsigned int DataGlobal_A9FA68;  // data: 0xA9FA68
extern unsigned int DataGlobal_A9FA70;  // data: 0xA9FA70
extern unsigned int DataGlobal_A9FA74;  // data: 0xA9FA74
extern unsigned int DataGlobal_A9FAE8;  // data: 0xA9FAE8
extern unsigned int DataGlobal_A9FFC8;  // data: 0xA9FFC8
extern unsigned int DataGlobal_AA0118;  // data: 0xAA0118
extern unsigned int DataGlobal_ABAD20;  // data: 0xABAD20
extern unsigned int DataGlobal_ABAD28;  // data: 0xABAD28
extern unsigned int DataGlobal_ABAD2C;  // data: 0xABAD2C
extern unsigned int DataGlobal_ABAD34;  // data: 0xABAD34
extern unsigned int DataGlobal_ABAD38;  // data: 0xABAD38
extern unsigned int DataGlobal_ABAD3C;  // data: 0xABAD3C
extern unsigned int DataGlobal_ABAD40;  // data: 0xABAD40
extern unsigned int DataGlobal_ABAD44;  // data: 0xABAD44
extern unsigned int DataGlobal_ABAD48;  // data: 0xABAD48
extern unsigned int DataGlobal_ABAD4C;  // data: 0xABAD4C
extern unsigned int DataGlobal_ABAD50;  // data: 0xABAD50
extern unsigned int DataGlobal_ABAD54;  // data: 0xABAD54
extern unsigned int DataGlobal_ABAD58;  // data: 0xABAD58
extern unsigned int DataGlobal_ABAD5C;  // data: 0xABAD5C
extern unsigned int DataGlobal_ABAD60;  // data: 0xABAD60
extern unsigned int DataGlobal_ABAD64;  // data: 0xABAD64
extern unsigned int DataGlobal_ABAD68;  // data: 0xABAD68
extern unsigned int DataGlobal_ABAD6C;  // data: 0xABAD6C
extern unsigned int DataGlobal_ABAD70;  // data: 0xABAD70
extern unsigned int DataGlobal_ABAD74;  // data: 0xABAD74
extern unsigned int DataGlobal_ABAD78;  // data: 0xABAD78
extern unsigned int DataGlobal_ABAD7C;  // data: 0xABAD7C
extern unsigned int DataGlobal_ABAD80;  // data: 0xABAD80
extern unsigned int DataGlobal_ABAD84;  // data: 0xABAD84
extern unsigned int DataGlobal_ABAD88;  // data: 0xABAD88
extern unsigned int DataGlobal_ABAD8C;  // data: 0xABAD8C
extern unsigned int DataGlobal_ABAD90;  // data: 0xABAD90
extern unsigned int DataGlobal_ABAD94;  // data: 0xABAD94
extern unsigned int DataGlobal_ABAD98;  // data: 0xABAD98
extern unsigned int DataGlobal_ABAD9C;  // data: 0xABAD9C
extern unsigned int DataGlobal_ABADA0;  // data: 0xABADA0
extern unsigned int DataGlobal_ABADA4;  // data: 0xABADA4
extern unsigned int DataGlobal_ABADA8;  // data: 0xABADA8
extern unsigned int DataGlobal_ABADAC;  // data: 0xABADAC
extern unsigned int DataGlobal_ABADB0;  // data: 0xABADB0
extern unsigned int DataGlobal_ABADB4;  // data: 0xABADB4
extern unsigned int DataGlobal_ABADB8;  // data: 0xABADB8
extern unsigned int DataGlobal_ABADBC;  // data: 0xABADBC
extern unsigned int DataGlobal_ABADC0;  // data: 0xABADC0
extern unsigned int DataGlobal_ABADC4;  // data: 0xABADC4
extern unsigned int DataGlobal_ABADC8;  // data: 0xABADC8
extern unsigned int DataGlobal_ABADCC;  // data: 0xABADCC
extern unsigned int DataGlobal_ABADD0;  // data: 0xABADD0
extern unsigned int DataGlobal_ABADD4;  // data: 0xABADD4
extern unsigned int DataGlobal_ABADD8;  // data: 0xABADD8
extern unsigned int DataGlobal_ABADDC;  // data: 0xABADDC
extern unsigned int DataGlobal_ABADE0;  // data: 0xABADE0
extern unsigned int DataGlobal_ABADE4;  // data: 0xABADE4
extern unsigned int DataGlobal_ABADE8;  // data: 0xABADE8
extern unsigned int DataGlobal_ABADEC;  // data: 0xABADEC
extern unsigned int DataGlobal_ABADF0;  // data: 0xABADF0
extern unsigned int DataGlobal_ABADF4;  // data: 0xABADF4
extern unsigned int DataGlobal_ABADF8;  // data: 0xABADF8
extern unsigned int DataGlobal_ABADFC;  // data: 0xABADFC
extern unsigned int DataGlobal_ABAE00;  // data: 0xABAE00
extern unsigned int DataGlobal_ABAE04;  // data: 0xABAE04
extern unsigned int DataGlobal_ABAE08;  // data: 0xABAE08
extern unsigned int DataGlobal_ABAE0C;  // data: 0xABAE0C
extern unsigned int DataGlobal_ABAE10;  // data: 0xABAE10
extern unsigned int DataGlobal_ABAE14;  // data: 0xABAE14
extern unsigned int DataGlobal_ABAE18;  // data: 0xABAE18
extern unsigned int DataGlobal_ABAE1C;  // data: 0xABAE1C
extern unsigned int DataGlobal_ABAE20;  // data: 0xABAE20
extern unsigned int DataGlobal_ABAE24;  // data: 0xABAE24
extern unsigned int DataGlobal_ABAE28;  // data: 0xABAE28
extern unsigned int DataGlobal_ABAE2C;  // data: 0xABAE2C
extern unsigned int DataGlobal_ABAE30;  // data: 0xABAE30
extern unsigned int DataGlobal_ABAE34;  // data: 0xABAE34
extern unsigned int DataGlobal_ABAE38;  // data: 0xABAE38
extern unsigned int DataGlobal_ABAE3C;  // data: 0xABAE3C
extern unsigned int DataGlobal_ABAE40;  // data: 0xABAE40
extern unsigned int DataGlobal_ABAE44;  // data: 0xABAE44
extern unsigned int DataGlobal_ABAE48;  // data: 0xABAE48
extern unsigned int DataGlobal_ABAE4C;  // data: 0xABAE4C
extern unsigned int DataGlobal_ABAE50;  // data: 0xABAE50
extern unsigned int DataGlobal_ABAE54;  // data: 0xABAE54
extern unsigned int DataGlobal_ABAE58;  // data: 0xABAE58
extern unsigned int DataGlobal_ABAE5C;  // data: 0xABAE5C
extern unsigned int DataGlobal_ABAE60;  // data: 0xABAE60
extern unsigned int DataGlobal_ABAE64;  // data: 0xABAE64
extern unsigned int DataGlobal_ABAE68;  // data: 0xABAE68
extern unsigned int DataGlobal_ABAE6C;  // data: 0xABAE6C
extern unsigned int DataGlobal_ABAE70;  // data: 0xABAE70
extern unsigned int DataGlobal_ABAE74;  // data: 0xABAE74
extern unsigned int DataGlobal_ABAE78;  // data: 0xABAE78
extern unsigned int DataGlobal_ABAE7C;  // data: 0xABAE7C
extern unsigned int DataGlobal_ABAE80;  // data: 0xABAE80
extern unsigned int DataGlobal_ABAE84;  // data: 0xABAE84
extern unsigned int DataGlobal_ABAE88;  // data: 0xABAE88
extern unsigned int DataGlobal_ABAE8C;  // data: 0xABAE8C
extern unsigned int DataGlobal_ABAE90;  // data: 0xABAE90
extern unsigned int DataGlobal_ABAE94;  // data: 0xABAE94
extern unsigned int DataGlobal_ABAE98;  // data: 0xABAE98
extern unsigned int DataGlobal_ABAE9C;  // data: 0xABAE9C
extern unsigned int DataGlobal_ABAEA0;  // data: 0xABAEA0
extern unsigned int DataGlobal_ABAEA4;  // data: 0xABAEA4
extern unsigned int DataGlobal_ABAEA8;  // data: 0xABAEA8
extern unsigned int DataGlobal_ABAEAC;  // data: 0xABAEAC
extern unsigned int DataGlobal_ABAEB0;  // data: 0xABAEB0
extern unsigned int DataGlobal_ABAEB4;  // data: 0xABAEB4
extern unsigned int DataGlobal_ABAEB8;  // data: 0xABAEB8
extern unsigned int DataGlobal_ABAEBC;  // data: 0xABAEBC
extern unsigned int DataGlobal_ABAEC0;  // data: 0xABAEC0
extern unsigned int DataGlobal_ABAEC4;  // data: 0xABAEC4
extern unsigned int DataGlobal_ABAEC8;  // data: 0xABAEC8
extern unsigned int DataGlobal_ABAECC;  // data: 0xABAECC
extern unsigned int DataGlobal_ABAED0;  // data: 0xABAED0
extern unsigned int DataGlobal_ABAED4;  // data: 0xABAED4
extern unsigned int DataGlobal_ABAED8;  // data: 0xABAED8
extern unsigned int DataGlobal_ABAEDC;  // data: 0xABAEDC
extern unsigned int DataGlobal_ABAEE0;  // data: 0xABAEE0
extern unsigned int DataGlobal_ABAEE4;  // data: 0xABAEE4
extern unsigned int DataGlobal_ABAEE8;  // data: 0xABAEE8
extern unsigned int DataGlobal_ABAEEC;  // data: 0xABAEEC
extern unsigned int DataGlobal_ABAEF0;  // data: 0xABAEF0
extern unsigned int DataGlobal_ABAEF4;  // data: 0xABAEF4
extern unsigned int DataGlobal_ABAEF8;  // data: 0xABAEF8
extern unsigned int DataGlobal_ABAEFC;  // data: 0xABAEFC
extern unsigned int DataGlobal_ABAF00;  // data: 0xABAF00
extern unsigned int DataGlobal_ABAF04;  // data: 0xABAF04
extern unsigned int DataGlobal_ABAF08;  // data: 0xABAF08
extern unsigned int DataGlobal_ABAF0C;  // data: 0xABAF0C
extern unsigned int DataGlobal_ABAF10;  // data: 0xABAF10
extern unsigned int DataGlobal_ABAF14;  // data: 0xABAF14
extern unsigned int DataGlobal_ABAF18;  // data: 0xABAF18
extern unsigned int DataGlobal_ABAF1C;  // data: 0xABAF1C
extern unsigned int DataGlobal_ABAF20;  // data: 0xABAF20
extern unsigned int DataGlobal_ABAF24;  // data: 0xABAF24
extern unsigned int DataGlobal_ABAF28;  // data: 0xABAF28
extern unsigned int DataGlobal_ABAF2C;  // data: 0xABAF2C
extern unsigned int DataGlobal_ABAF30;  // data: 0xABAF30
extern unsigned int DataGlobal_ABAF34;  // data: 0xABAF34
extern unsigned int DataGlobal_ABAF38;  // data: 0xABAF38
extern unsigned int DataGlobal_ABAF3C;  // data: 0xABAF3C
extern unsigned int DataGlobal_ABAF40;  // data: 0xABAF40
extern unsigned int DataGlobal_ABAF44;  // data: 0xABAF44
extern unsigned int DataGlobal_ABAF48;  // data: 0xABAF48
extern unsigned int DataGlobal_ABAF4C;  // data: 0xABAF4C
extern unsigned int DataGlobal_ABAF50;  // data: 0xABAF50
extern unsigned int DataGlobal_ABAF54;  // data: 0xABAF54
extern unsigned int DataGlobal_ABAF58;  // data: 0xABAF58
extern unsigned int DataGlobal_ABAF5C;  // data: 0xABAF5C
extern unsigned int DataGlobal_ABAF60;  // data: 0xABAF60
extern unsigned int DataGlobal_ABAF64;  // data: 0xABAF64
extern unsigned int DataGlobal_ABAF68;  // data: 0xABAF68
extern unsigned int DataGlobal_ABAF6C;  // data: 0xABAF6C
extern unsigned int DataGlobal_ABAF70;  // data: 0xABAF70
extern unsigned int DataGlobal_ABAF74;  // data: 0xABAF74
extern unsigned int DataGlobal_ABAF78;  // data: 0xABAF78
extern unsigned int DataGlobal_ABAF7C;  // data: 0xABAF7C
extern unsigned int DataGlobal_ABAF80;  // data: 0xABAF80
extern unsigned int DataGlobal_ABAF84;  // data: 0xABAF84
extern unsigned int DataGlobal_ABAF88;  // data: 0xABAF88
extern unsigned int DataGlobal_ABAF8C;  // data: 0xABAF8C
extern unsigned int DataGlobal_ABAF90;  // data: 0xABAF90
extern unsigned int DataGlobal_ABAF94;  // data: 0xABAF94
extern unsigned int DataGlobal_ABAF98;  // data: 0xABAF98
extern unsigned int DataGlobal_ABAF9C;  // data: 0xABAF9C
extern unsigned int DataGlobal_ABAFA0;  // data: 0xABAFA0
extern unsigned int DataGlobal_ABAFA4;  // data: 0xABAFA4
extern unsigned int DataGlobal_ABAFA8;  // data: 0xABAFA8
extern unsigned int DataGlobal_ABAFAC;  // data: 0xABAFAC
extern unsigned int DataGlobal_ABAFB0;  // data: 0xABAFB0
extern unsigned int DataGlobal_ABAFB4;  // data: 0xABAFB4
extern unsigned int DataGlobal_ABAFB8;  // data: 0xABAFB8
extern unsigned int DataGlobal_ABAFBC;  // data: 0xABAFBC
extern unsigned int DataGlobal_ABAFC0;  // data: 0xABAFC0
extern unsigned int DataGlobal_ABAFC4;  // data: 0xABAFC4
extern unsigned int DataGlobal_ABAFC8;  // data: 0xABAFC8
extern unsigned int DataGlobal_ABAFCC;  // data: 0xABAFCC
extern unsigned int DataGlobal_ABAFD0;  // data: 0xABAFD0
extern unsigned int DataGlobal_ABAFD4;  // data: 0xABAFD4
extern unsigned int DataGlobal_ABAFD8;  // data: 0xABAFD8
extern unsigned int DataGlobal_ABAFDC;  // data: 0xABAFDC
extern unsigned int DataGlobal_ABAFE0;  // data: 0xABAFE0
extern unsigned int DataGlobal_ABAFE4;  // data: 0xABAFE4
extern unsigned int DataGlobal_ABAFE8;  // data: 0xABAFE8
extern unsigned int DataGlobal_ABAFEC;  // data: 0xABAFEC
extern unsigned int DataGlobal_ABAFF0;  // data: 0xABAFF0
extern unsigned int DataGlobal_ABAFF4;  // data: 0xABAFF4
extern unsigned int DataGlobal_ABAFF8;  // data: 0xABAFF8
extern unsigned int DataGlobal_ABAFFC;  // data: 0xABAFFC
extern unsigned int DataGlobal_ABB000;  // data: 0xABB000
extern unsigned int DataGlobal_ABB004;  // data: 0xABB004
extern unsigned int DataGlobal_ABB008;  // data: 0xABB008
extern unsigned int DataGlobal_ABB00C;  // data: 0xABB00C
extern unsigned int DataGlobal_ABB010;  // data: 0xABB010
extern unsigned int DataGlobal_ABB014;  // data: 0xABB014
extern unsigned int DataGlobal_ABB018;  // data: 0xABB018
extern unsigned int DataGlobal_ABB01C;  // data: 0xABB01C
extern unsigned int DataGlobal_ABB020;  // data: 0xABB020
extern unsigned int DataGlobal_ABB024;  // data: 0xABB024
extern unsigned int DataGlobal_ABB028;  // data: 0xABB028
extern unsigned int DataGlobal_ABB02C;  // data: 0xABB02C
extern unsigned int DataGlobal_ABB030;  // data: 0xABB030
extern unsigned int DataGlobal_ABB034;  // data: 0xABB034
extern unsigned int DataGlobal_ABB038;  // data: 0xABB038
extern unsigned int DataGlobal_ABB03C;  // data: 0xABB03C
extern unsigned int DataGlobal_ABB040;  // data: 0xABB040
extern unsigned int DataGlobal_ABB044;  // data: 0xABB044
extern unsigned int DataGlobal_ABB048;  // data: 0xABB048
extern unsigned int DataGlobal_ABB04C;  // data: 0xABB04C
extern unsigned int DataGlobal_ABB050;  // data: 0xABB050
extern unsigned int DataGlobal_ABB054;  // data: 0xABB054
extern unsigned int DataGlobal_ABB058;  // data: 0xABB058
extern unsigned int DataGlobal_ABB05C;  // data: 0xABB05C
extern unsigned int DataGlobal_ABB060;  // data: 0xABB060
extern unsigned int DataGlobal_ABB064;  // data: 0xABB064
extern unsigned int DataGlobal_ABB068;  // data: 0xABB068
extern unsigned int DataGlobal_ABB06C;  // data: 0xABB06C
extern unsigned int DataGlobal_ABB070;  // data: 0xABB070
extern unsigned int DataGlobal_ABB074;  // data: 0xABB074
extern unsigned int DataGlobal_ABB078;  // data: 0xABB078
extern unsigned int DataGlobal_ABB07C;  // data: 0xABB07C
extern unsigned int DataGlobal_ABB080;  // data: 0xABB080
extern unsigned int DataGlobal_ABB084;  // data: 0xABB084
extern unsigned int DataGlobal_ABB088;  // data: 0xABB088
extern unsigned int DataGlobal_ABB08C;  // data: 0xABB08C
extern unsigned int DataGlobal_ABB090;  // data: 0xABB090
extern unsigned int DataGlobal_ABB094;  // data: 0xABB094
extern unsigned int DataGlobal_ABB098;  // data: 0xABB098
extern unsigned int DataGlobal_ABB09C;  // data: 0xABB09C
extern unsigned int DataGlobal_ABB0A0;  // data: 0xABB0A0
extern unsigned int DataGlobal_ABB0A4;  // data: 0xABB0A4
extern unsigned int DataGlobal_ABB0A8;  // data: 0xABB0A8
extern unsigned int DataGlobal_ABB0AC;  // data: 0xABB0AC
extern unsigned int DataGlobal_ABB0B0;  // data: 0xABB0B0
extern unsigned int DataGlobal_ABB0B4;  // data: 0xABB0B4
extern unsigned int DataGlobal_ABB0B8;  // data: 0xABB0B8
extern unsigned int DataGlobal_ABB0BC;  // data: 0xABB0BC
extern unsigned int DataGlobal_ABB0C0;  // data: 0xABB0C0
extern unsigned int DataGlobal_ABB0C4;  // data: 0xABB0C4
extern unsigned int DataGlobal_ABB0C8;  // data: 0xABB0C8
extern unsigned int DataGlobal_ABB0CC;  // data: 0xABB0CC
extern unsigned int DataGlobal_ABB0D0;  // data: 0xABB0D0
extern unsigned int DataGlobal_ABB0D4;  // data: 0xABB0D4
extern unsigned int DataGlobal_ABB0D8;  // data: 0xABB0D8
extern unsigned int DataGlobal_ABB0DC;  // data: 0xABB0DC
extern unsigned int DataGlobal_ABB0E0;  // data: 0xABB0E0
extern unsigned int DataGlobal_ABB0E4;  // data: 0xABB0E4
extern unsigned int DataGlobal_ABB0E8;  // data: 0xABB0E8
extern unsigned int DataGlobal_ABB0EC;  // data: 0xABB0EC
extern unsigned int DataGlobal_ABB0F0;  // data: 0xABB0F0
extern unsigned int DataGlobal_ABB0F8;  // data: 0xABB0F8
extern unsigned int DataGlobal_ABB0FC;  // data: 0xABB0FC
extern unsigned int DataGlobal_ABB100;  // data: 0xABB100
extern unsigned int DataGlobal_ABB104;  // data: 0xABB104
extern unsigned int DataGlobal_ABB108;  // data: 0xABB108
extern unsigned int DataGlobal_ABB110;  // data: 0xABB110
extern unsigned int DataGlobal_ABBEBC;  // data: 0xABBEBC
extern unsigned int DataGlobal_ABBEC0;  // data: 0xABBEC0
extern unsigned int DataGlobal_ABBEC4;  // data: 0xABBEC4
extern unsigned int DataGlobal_ABC1D0;  // data: 0xABC1D0
extern unsigned int DataGlobal_ABC1D4;  // data: 0xABC1D4
extern unsigned int DataGlobal_ABC1E8;  // data: 0xABC1E8
extern unsigned int DataGlobal_ABC200;  // data: 0xABC200
extern unsigned int DataGlobal_ABC204;  // data: 0xABC204
extern unsigned int DataGlobal_ABC208;  // data: 0xABC208
extern unsigned int DataGlobal_ABC210;  // data: 0xABC210
extern unsigned int DataGlobal_ABC214;  // data: 0xABC214
extern unsigned int DataGlobal_ABC218;  // data: 0xABC218
extern unsigned int DataGlobal_ABC21C;  // data: 0xABC21C
extern unsigned int DataGlobal_ABC220;  // data: 0xABC220
extern unsigned int DataGlobal_ABC224;  // data: 0xABC224
extern unsigned int DataGlobal_ABC228;  // data: 0xABC228
extern unsigned int DataGlobal_ABC22C;  // data: 0xABC22C
extern unsigned int DataGlobal_ABC230;  // data: 0xABC230
extern unsigned int DataGlobal_ABC234;  // data: 0xABC234
extern unsigned int DataGlobal_ABC238;  // data: 0xABC238
extern unsigned int DataGlobal_ABC23C;  // data: 0xABC23C
extern unsigned int DataGlobal_ABC240;  // data: 0xABC240
extern unsigned int DataGlobal_ABC244;  // data: 0xABC244
extern unsigned int DataGlobal_ABC248;  // data: 0xABC248
extern unsigned int DataGlobal_ABC24C;  // data: 0xABC24C
extern unsigned int DataGlobal_ABC250;  // data: 0xABC250
extern unsigned int DataGlobal_ABC254;  // data: 0xABC254
extern unsigned int DataGlobal_ABC258;  // data: 0xABC258
extern unsigned int DataGlobal_ABC25C;  // data: 0xABC25C
extern unsigned int DataGlobal_ABC260;  // data: 0xABC260
extern unsigned int DataGlobal_ABC264;  // data: 0xABC264
extern unsigned int DataGlobal_ABC268;  // data: 0xABC268
extern unsigned int DataGlobal_ABC26C;  // data: 0xABC26C
extern unsigned int DataGlobal_ABC270;  // data: 0xABC270
extern unsigned int DataGlobal_ABC274;  // data: 0xABC274
extern unsigned int DataGlobal_ABC278;  // data: 0xABC278
extern unsigned int DataGlobal_ABC27C;  // data: 0xABC27C
extern unsigned int DataGlobal_ABC280;  // data: 0xABC280
extern unsigned int DataGlobal_ABC284;  // data: 0xABC284
extern unsigned int DataGlobal_ABC288;  // data: 0xABC288
extern unsigned int DataGlobal_ABC28C;  // data: 0xABC28C
extern unsigned int DataGlobal_ABC290;  // data: 0xABC290
extern unsigned int DataGlobal_ABC294;  // data: 0xABC294
extern unsigned int DataGlobal_ABC298;  // data: 0xABC298
extern unsigned int DataGlobal_ABC29C;  // data: 0xABC29C
extern unsigned int DataGlobal_ABC2A0;  // data: 0xABC2A0
extern unsigned int DataGlobal_ABC2A4;  // data: 0xABC2A4
extern unsigned int DataGlobal_ABC2A8;  // data: 0xABC2A8
extern unsigned int DataGlobal_ABC2AC;  // data: 0xABC2AC
extern unsigned int DataGlobal_ABC2B0;  // data: 0xABC2B0
extern unsigned int DataGlobal_ABC2B4;  // data: 0xABC2B4
extern unsigned int DataGlobal_ABC2B8;  // data: 0xABC2B8
extern unsigned int DataGlobal_ABC2BC;  // data: 0xABC2BC
extern unsigned int DataGlobal_ABC2C8;  // data: 0xABC2C8
extern unsigned int DataGlobal_ABC2D0;  // data: 0xABC2D0
extern unsigned int DataGlobal_ABC2D4;  // data: 0xABC2D4
extern unsigned int DataGlobal_ABC2D8;  // data: 0xABC2D8
extern unsigned int DataGlobal_ABC2DC;  // data: 0xABC2DC
extern unsigned int DataGlobal_ABC550;  // data: 0xABC550
extern unsigned int DataGlobal_ABC560;  // data: 0xABC560
extern unsigned int DataGlobal_ABC564;  // data: 0xABC564
extern unsigned int DataGlobal_ABC568;  // data: 0xABC568
extern unsigned int DataGlobal_ABC56C;  // data: 0xABC56C
extern unsigned int DataGlobal_ABC578;  // data: 0xABC578
extern unsigned int DataGlobal_ABC57C;  // data: 0xABC57C
extern unsigned int DataGlobal_ABC580;  // data: 0xABC580
extern unsigned int DataGlobal_ABC584;  // data: 0xABC584
extern unsigned int DataGlobal_ABC588;  // data: 0xABC588
extern unsigned int DataGlobal_ABC5A8;  // data: 0xABC5A8
extern unsigned int DataGlobal_ABC5AC;  // data: 0xABC5AC
extern unsigned int DataGlobal_ABC5B0;  // data: 0xABC5B0
extern unsigned int DataGlobal_ABC5D0;  // data: 0xABC5D0
extern unsigned int DataGlobal_ABC5D4;  // data: 0xABC5D4
extern unsigned int DataGlobal_ABC5D8;  // data: 0xABC5D8
extern unsigned int DataGlobal_ABC5DC;  // data: 0xABC5DC
extern unsigned int DataGlobal_ABC5E8;  // data: 0xABC5E8
extern unsigned int DataGlobal_ABC604;  // data: 0xABC604
extern unsigned int DataGlobal_ABC614;  // data: 0xABC614
extern unsigned int DataGlobal_ABC618;  // data: 0xABC618
extern unsigned int DataGlobal_ABC620;  // data: 0xABC620
extern unsigned int DataGlobal_ABC624;  // data: 0xABC624
extern unsigned int DataGlobal_ABC628;  // data: 0xABC628
extern unsigned int DataGlobal_ABC62C;  // data: 0xABC62C
extern unsigned int DataGlobal_ABC650;  // data: 0xABC650
extern unsigned int DataGlobal_ABC654;  // data: 0xABC654
extern unsigned int DataGlobal_ABC658;  // data: 0xABC658
extern unsigned int DataGlobal_ABC678;  // data: 0xABC678
extern unsigned int DataGlobal_ABC67C;  // data: 0xABC67C
extern unsigned int DataGlobal_ABC680;  // data: 0xABC680
extern unsigned int DataGlobal_ABC684;  // data: 0xABC684
extern unsigned int DataGlobal_ABC690;  // data: 0xABC690
extern unsigned int DataGlobal_ABC6A0;  // data: 0xABC6A0
extern unsigned int DataGlobal_ABC6A4;  // data: 0xABC6A4
extern unsigned int DataGlobal_ABC6A8;  // data: 0xABC6A8
extern unsigned int DataGlobal_ABC6AC;  // data: 0xABC6AC
extern unsigned int DataGlobal_ABC6D0;  // data: 0xABC6D0
extern unsigned int DataGlobal_ABC6D4;  // data: 0xABC6D4
extern unsigned int DataGlobal_ABC6D8;  // data: 0xABC6D8
extern unsigned int DataGlobal_ABC6F8;  // data: 0xABC6F8
extern unsigned int DataGlobal_ABC6FC;  // data: 0xABC6FC
extern unsigned int DataGlobal_ABC700;  // data: 0xABC700
extern unsigned int DataGlobal_ABC704;  // data: 0xABC704
extern unsigned int DataGlobal_ABC710;  // data: 0xABC710
extern unsigned int DataGlobal_ABC728;  // data: 0xABC728
extern unsigned int DataGlobal_ABC72C;  // data: 0xABC72C
extern unsigned int DataGlobal_ABC730;  // data: 0xABC730
extern unsigned int DataGlobal_ABC734;  // data: 0xABC734
extern unsigned int DataGlobal_ABC7E0;  // data: 0xABC7E0
extern unsigned int DataGlobal_ABC7E4;  // data: 0xABC7E4
extern unsigned int DataGlobal_ABC7E8;  // data: 0xABC7E8
extern unsigned int DataGlobal_ABC7F8;  // data: 0xABC7F8
extern unsigned int DataGlobal_ABC7FC;  // data: 0xABC7FC
extern unsigned int DataGlobal_ABC800;  // data: 0xABC800
extern unsigned int DataGlobal_ABC804;  // data: 0xABC804
extern unsigned int DataGlobal_ABC808;  // data: 0xABC808
extern unsigned int DataGlobal_ABC80C;  // data: 0xABC80C
extern unsigned int DataGlobal_ABC810;  // data: 0xABC810
extern unsigned int DataGlobal_ABC814;  // data: 0xABC814
extern unsigned int DataGlobal_ABC818;  // data: 0xABC818
extern unsigned int DataGlobal_ABC81C;  // data: 0xABC81C
extern unsigned int DataGlobal_ABC820;  // data: 0xABC820
extern unsigned int DataGlobal_ABC824;  // data: 0xABC824
extern unsigned int DataGlobal_ABC828;  // data: 0xABC828
extern unsigned int DataGlobal_ABC82C;  // data: 0xABC82C
extern unsigned int DataGlobal_ABC830;  // data: 0xABC830
extern unsigned int DataGlobal_ABC834;  // data: 0xABC834
extern unsigned int DataGlobal_ABC838;  // data: 0xABC838
extern unsigned int DataGlobal_ABC83C;  // data: 0xABC83C
extern unsigned int DataGlobal_ABC840;  // data: 0xABC840
extern unsigned int DataGlobal_ABC844;  // data: 0xABC844
extern unsigned int DataGlobal_ABC848;  // data: 0xABC848
extern unsigned int DataGlobal_ABC84C;  // data: 0xABC84C
extern unsigned int DataGlobal_ABC850;  // data: 0xABC850
extern unsigned int DataGlobal_ABC854;  // data: 0xABC854
extern unsigned int DataGlobal_ABC858;  // data: 0xABC858
extern unsigned int DataGlobal_ABC85C;  // data: 0xABC85C
extern unsigned int DataGlobal_ABC860;  // data: 0xABC860
extern unsigned int DataGlobal_ABC864;  // data: 0xABC864
extern unsigned int DataGlobal_ABC868;  // data: 0xABC868
extern unsigned int DataGlobal_ABC86C;  // data: 0xABC86C
extern unsigned int DataGlobal_ABC870;  // data: 0xABC870
extern unsigned int DataGlobal_ABC874;  // data: 0xABC874
extern unsigned int DataGlobal_ABC878;  // data: 0xABC878
extern unsigned int DataGlobal_ABC87C;  // data: 0xABC87C
extern unsigned int DataGlobal_ABC880;  // data: 0xABC880
extern unsigned int DataGlobal_ABC88C;  // data: 0xABC88C
extern unsigned int DataGlobal_ABC8A0;  // data: 0xABC8A0
extern unsigned int DataGlobal_ABC8A4;  // data: 0xABC8A4
extern unsigned int DataGlobal_ABC8A8;  // data: 0xABC8A8
extern unsigned int DataGlobal_ABC8AC;  // data: 0xABC8AC
extern unsigned int DataGlobal_ABC8BC;  // data: 0xABC8BC
extern unsigned int DataGlobal_ABC8C8;  // data: 0xABC8C8
extern unsigned int DataGlobal_ABC8CC;  // data: 0xABC8CC
extern unsigned int DataGlobal_ABC8D0;  // data: 0xABC8D0
extern unsigned int DataGlobal_ABC8D4;  // data: 0xABC8D4
extern unsigned int DataGlobal_ABC8F8;  // data: 0xABC8F8
extern unsigned int DataGlobal_ABC8FC;  // data: 0xABC8FC
extern unsigned int DataGlobal_ABC900;  // data: 0xABC900
extern unsigned int DataGlobal_ABC920;  // data: 0xABC920
extern unsigned int DataGlobal_ABC924;  // data: 0xABC924
extern unsigned int DataGlobal_ABC928;  // data: 0xABC928
extern unsigned int DataGlobal_ABC92C;  // data: 0xABC92C
extern unsigned int DataGlobal_ABC938;  // data: 0xABC938
extern unsigned int DataGlobal_ABC948;  // data: 0xABC948
extern unsigned int DataGlobal_ABC94C;  // data: 0xABC94C
extern unsigned int DataGlobal_ABC950;  // data: 0xABC950
extern unsigned int DataGlobal_ABC954;  // data: 0xABC954
extern unsigned int DataGlobal_ABC978;  // data: 0xABC978
extern unsigned int DataGlobal_ABC97C;  // data: 0xABC97C
extern unsigned int DataGlobal_ABC980;  // data: 0xABC980
extern unsigned int DataGlobal_ABC9A0;  // data: 0xABC9A0
extern unsigned int DataGlobal_ABC9A4;  // data: 0xABC9A4
extern unsigned int DataGlobal_ABC9A8;  // data: 0xABC9A8
extern unsigned int DataGlobal_ABC9AC;  // data: 0xABC9AC
extern unsigned int DataGlobal_ABC9B8;  // data: 0xABC9B8
extern unsigned int DataGlobal_ABC9D0;  // data: 0xABC9D0
extern unsigned int DataGlobal_ABC9D4;  // data: 0xABC9D4
extern unsigned int DataGlobal_ABC9D8;  // data: 0xABC9D8
extern unsigned int DataGlobal_ABC9DC;  // data: 0xABC9DC
extern unsigned int DataGlobal_ABCA00;  // data: 0xABCA00
extern unsigned int DataGlobal_ABCA04;  // data: 0xABCA04
extern unsigned int DataGlobal_ABCA08;  // data: 0xABCA08
extern unsigned int DataGlobal_ABCA10;  // data: 0xABCA10
extern unsigned int DataGlobal_ABCA14;  // data: 0xABCA14
extern unsigned int DataGlobal_ABCA18;  // data: 0xABCA18
extern unsigned int DataGlobal_ABCA24;  // data: 0xABCA24
extern unsigned int DataGlobal_ABCA40;  // data: 0xABCA40
extern unsigned int DataGlobal_ABCA44;  // data: 0xABCA44
extern unsigned int DataGlobal_ABCA48;  // data: 0xABCA48
extern unsigned int DataGlobal_ABCA50;  // data: 0xABCA50
extern unsigned int DataGlobal_ABCA54;  // data: 0xABCA54
extern unsigned int DataGlobal_ABCA58;  // data: 0xABCA58
extern unsigned int DataGlobal_ABCA5C;  // data: 0xABCA5C
extern unsigned int DataGlobal_ABCA60;  // data: 0xABCA60
extern unsigned int DataGlobal_ABCA64;  // data: 0xABCA64
extern unsigned int DataGlobal_ABCA70;  // data: 0xABCA70
extern unsigned int DataGlobal_ABCA74;  // data: 0xABCA74
extern unsigned int DataGlobal_ABCA78;  // data: 0xABCA78
extern unsigned int DataGlobal_ABCA7C;  // data: 0xABCA7C
extern unsigned int DataGlobal_ABCA80;  // data: 0xABCA80
extern unsigned int DataGlobal_ABCA88;  // data: 0xABCA88
extern unsigned int DataGlobal_ABCA8C;  // data: 0xABCA8C
extern unsigned int DataGlobal_ABCA90;  // data: 0xABCA90
extern unsigned int DataGlobal_ABCA94;  // data: 0xABCA94
extern unsigned int DataGlobal_ABCAA0;  // data: 0xABCAA0
extern unsigned int DataGlobal_ABCAA4;  // data: 0xABCAA4
extern unsigned int DataGlobal_ABCAA8;  // data: 0xABCAA8
extern unsigned int DataGlobal_ABCAAC;  // data: 0xABCAAC
extern unsigned int DataGlobal_ABCAD0;  // data: 0xABCAD0
extern unsigned int DataGlobal_ABCAD4;  // data: 0xABCAD4
extern unsigned int DataGlobal_ABCAD8;  // data: 0xABCAD8
extern unsigned int DataGlobal_ABCAF8;  // data: 0xABCAF8
extern unsigned int DataGlobal_ABCAFC;  // data: 0xABCAFC
extern unsigned int DataGlobal_ABCB00;  // data: 0xABCB00
extern unsigned int DataGlobal_ABCB04;  // data: 0xABCB04
extern unsigned int DataGlobal_ABCB10;  // data: 0xABCB10
extern unsigned int DataGlobal_ABCB20;  // data: 0xABCB20
extern unsigned int DataGlobal_ABCB24;  // data: 0xABCB24
extern unsigned int DataGlobal_ABCB28;  // data: 0xABCB28
extern unsigned int DataGlobal_ABCB2C;  // data: 0xABCB2C
extern unsigned int DataGlobal_ABCB50;  // data: 0xABCB50
extern unsigned int DataGlobal_ABCB54;  // data: 0xABCB54
extern unsigned int DataGlobal_ABCB58;  // data: 0xABCB58
extern unsigned int DataGlobal_ABCB78;  // data: 0xABCB78
extern unsigned int DataGlobal_ABCB7C;  // data: 0xABCB7C
extern unsigned int DataGlobal_ABCB80;  // data: 0xABCB80
extern unsigned int DataGlobal_ABCB88;  // data: 0xABCB88
extern unsigned int DataGlobal_ABCB8C;  // data: 0xABCB8C
extern unsigned int DataGlobal_ABCB90;  // data: 0xABCB90
extern unsigned int DataGlobal_ABCB94;  // data: 0xABCB94
extern unsigned int DataGlobal_ABCB98;  // data: 0xABCB98
extern unsigned int DataGlobal_ABCB9C;  // data: 0xABCB9C
extern unsigned int DataGlobal_ABCBA8;  // data: 0xABCBA8
extern unsigned int DataGlobal_ABCBB0;  // data: 0xABCBB0
extern unsigned int DataGlobal_ABCBB4;  // data: 0xABCBB4
extern unsigned int DataGlobal_ABCBB8;  // data: 0xABCBB8
extern unsigned int DataGlobal_ABCBBC;  // data: 0xABCBBC
extern unsigned int DataGlobal_ABCBC8;  // data: 0xABCBC8
extern unsigned int DataGlobal_ABCBCC;  // data: 0xABCBCC
extern unsigned int DataGlobal_ABCBD0;  // data: 0xABCBD0
extern unsigned int DataGlobal_ABCBD4;  // data: 0xABCBD4
extern unsigned int DataGlobal_ABCBF8;  // data: 0xABCBF8
extern unsigned int DataGlobal_ABCBFC;  // data: 0xABCBFC
extern unsigned int DataGlobal_ABCC00;  // data: 0xABCC00
extern unsigned int DataGlobal_ABCC20;  // data: 0xABCC20
extern unsigned int DataGlobal_ABCC24;  // data: 0xABCC24
extern unsigned int DataGlobal_ABCC28;  // data: 0xABCC28
extern unsigned int DataGlobal_ABCC2C;  // data: 0xABCC2C
extern unsigned int DataGlobal_ABCC38;  // data: 0xABCC38
extern unsigned int DataGlobal_ABCC48;  // data: 0xABCC48
extern unsigned int DataGlobal_ABCC4C;  // data: 0xABCC4C
extern unsigned int DataGlobal_ABCC50;  // data: 0xABCC50
extern unsigned int DataGlobal_ABCC54;  // data: 0xABCC54
extern unsigned int DataGlobal_ABCC78;  // data: 0xABCC78
extern unsigned int DataGlobal_ABCC7C;  // data: 0xABCC7C
extern unsigned int DataGlobal_ABCC80;  // data: 0xABCC80
extern unsigned int DataGlobal_ABCCA0;  // data: 0xABCCA0
extern unsigned int DataGlobal_ABCCA4;  // data: 0xABCCA4
extern unsigned int DataGlobal_ABCCA8;  // data: 0xABCCA8
extern unsigned int DataGlobal_ABCCAC;  // data: 0xABCCAC
extern unsigned int DataGlobal_ABCCB8;  // data: 0xABCCB8
extern unsigned int DataGlobal_ABCCC8;  // data: 0xABCCC8
extern unsigned int DataGlobal_ABCCCC;  // data: 0xABCCCC
extern unsigned int DataGlobal_ABCCD0;  // data: 0xABCCD0
extern unsigned int DataGlobal_ABCCD4;  // data: 0xABCCD4
extern unsigned int DataGlobal_ABCCD8;  // data: 0xABCCD8
extern unsigned int DataGlobal_ABCCF8;  // data: 0xABCCF8
extern unsigned int DataGlobal_ABCCFC;  // data: 0xABCCFC
extern unsigned int DataGlobal_ABCD00;  // data: 0xABCD00
extern unsigned int DataGlobal_ABCD20;  // data: 0xABCD20
extern unsigned int DataGlobal_ABCD24;  // data: 0xABCD24
extern unsigned int DataGlobal_ABCD28;  // data: 0xABCD28
extern unsigned int DataGlobal_ABCD2C;  // data: 0xABCD2C
extern unsigned int DataGlobal_ABCD38;  // data: 0xABCD38
extern unsigned int DataGlobal_ABCD40;  // data: 0xABCD40
extern unsigned int DataGlobal_ABCD44;  // data: 0xABCD44
extern unsigned int DataGlobal_ABCD68;  // data: 0xABCD68
extern unsigned int DataGlobal_ABCD6C;  // data: 0xABCD6C
extern unsigned int DataGlobal_ABCD70;  // data: 0xABCD70
extern unsigned int DataGlobal_ABCD74;  // data: 0xABCD74
extern unsigned int DataGlobal_ABCD88;  // data: 0xABCD88
extern unsigned int DataGlobal_ABCD8C;  // data: 0xABCD8C
extern unsigned int DataGlobal_ABCD90;  // data: 0xABCD90
extern unsigned int DataGlobal_ABCDB0;  // data: 0xABCDB0
extern unsigned int DataGlobal_ABCDB4;  // data: 0xABCDB4
extern unsigned int DataGlobal_ABCDB8;  // data: 0xABCDB8
extern unsigned int DataGlobal_ABCDE0;  // data: 0xABCDE0
extern unsigned int DataGlobal_ABCDE4;  // data: 0xABCDE4
extern unsigned int DataGlobal_ABCDE8;  // data: 0xABCDE8
extern unsigned int DataGlobal_ABCDEC;  // data: 0xABCDEC
extern unsigned int DataGlobal_ABCDF8;  // data: 0xABCDF8
extern unsigned int DataGlobal_ABCE58;  // data: 0xABCE58
extern unsigned int DataGlobal_ABCE5C;  // data: 0xABCE5C
extern unsigned int DataGlobal_ABCE60;  // data: 0xABCE60
extern unsigned int DataGlobal_ABCE70;  // data: 0xABCE70
extern unsigned int DataGlobal_ABCE94;  // data: 0xABCE94
extern unsigned int DataGlobal_ABCE98;  // data: 0xABCE98
extern unsigned int DataGlobal_ABCF38;  // data: 0xABCF38
extern unsigned int DataGlobal_ABCF3C;  // data: 0xABCF3C
extern unsigned int DataGlobal_ABCF40;  // data: 0xABCF40
extern unsigned int DataGlobal_ABCF44;  // data: 0xABCF44
extern unsigned int DataGlobal_ABCF50;  // data: 0xABCF50
extern unsigned int DataGlobal_ABCF58;  // data: 0xABCF58
extern unsigned int DataGlobal_ABCF5C;  // data: 0xABCF5C
extern unsigned int DataGlobal_ABCF60;  // data: 0xABCF60
extern unsigned int DataGlobal_ABD434;  // data: 0xABD434
extern unsigned int DataGlobal_ABD438;  // data: 0xABD438
extern unsigned int DataGlobal_ABD43C;  // data: 0xABD43C
extern unsigned int DataGlobal_ABD440;  // data: 0xABD440
extern unsigned int DataGlobal_ABD444;  // data: 0xABD444
extern unsigned int DataGlobal_ABD448;  // data: 0xABD448
extern unsigned int DataGlobal_ABD44C;  // data: 0xABD44C
extern unsigned int DataGlobal_ABD450;  // data: 0xABD450
extern unsigned int DataGlobal_ABD454;  // data: 0xABD454
extern unsigned int DataGlobal_ABD460;  // data: 0xABD460
extern unsigned int DataGlobal_ABD464;  // data: 0xABD464
extern unsigned int DataGlobal_ABD468;  // data: 0xABD468
extern unsigned int DataGlobal_ABD46C;  // data: 0xABD46C
extern unsigned int DataGlobal_ABD470;  // data: 0xABD470
extern unsigned int DataGlobal_ABD474;  // data: 0xABD474
extern unsigned int DataGlobal_ABD478;  // data: 0xABD478
extern unsigned int DataGlobal_ABD47C;  // data: 0xABD47C
extern unsigned int DataGlobal_ABD490;  // data: 0xABD490
extern unsigned int DataGlobal_ABDA08;  // data: 0xABDA08
extern unsigned int DataGlobal_ABDA68;  // data: 0xABDA68
extern unsigned int DataGlobal_ABDB68;  // data: 0xABDB68
extern unsigned int DataGlobal_ABDB6C;  // data: 0xABDB6C
extern unsigned int DataGlobal_ABDB70;  // data: 0xABDB70
extern unsigned int DataGlobal_ABDB74;  // data: 0xABDB74
extern unsigned int DataGlobal_ABDB78;  // data: 0xABDB78
extern unsigned int DataGlobal_ABDB7C;  // data: 0xABDB7C
extern unsigned int DataGlobal_ABDB80;  // data: 0xABDB80
extern unsigned int DataGlobal_ABDB84;  // data: 0xABDB84
extern unsigned int DataGlobal_ABDB88;  // data: 0xABDB88
extern unsigned int DataGlobal_ABDB8C;  // data: 0xABDB8C
extern unsigned int DataGlobal_ABDB90;  // data: 0xABDB90
extern unsigned int DataGlobal_ABDB94;  // data: 0xABDB94
extern unsigned int DataGlobal_ABDB98;  // data: 0xABDB98
extern unsigned int DataGlobal_ABDB9C;  // data: 0xABDB9C
extern unsigned int DataGlobal_ABDBA0;  // data: 0xABDBA0
extern unsigned int DataGlobal_ABDBA4;  // data: 0xABDBA4
extern unsigned int DataGlobal_ABDBA8;  // data: 0xABDBA8
extern unsigned int DataGlobal_ABDBAC;  // data: 0xABDBAC
extern unsigned int DataGlobal_ABDBB0;  // data: 0xABDBB0
extern unsigned int DataGlobal_ABDBB4;  // data: 0xABDBB4
extern unsigned int DataGlobal_ABDBB8;  // data: 0xABDBB8
extern unsigned int DataGlobal_ABDBBC;  // data: 0xABDBBC
extern unsigned int DataGlobal_ABDBC0;  // data: 0xABDBC0
extern unsigned int DataGlobal_ABDBC4;  // data: 0xABDBC4
extern unsigned int DataGlobal_ABDBC8;  // data: 0xABDBC8
extern unsigned int DataGlobal_ABDBCC;  // data: 0xABDBCC
extern unsigned int DataGlobal_ABDBD0;  // data: 0xABDBD0
extern unsigned int DataGlobal_ABDBD4;  // data: 0xABDBD4
extern unsigned int DataGlobal_ABDBD8;  // data: 0xABDBD8
extern unsigned int DataGlobal_ABDBDC;  // data: 0xABDBDC
extern unsigned int DataGlobal_ABDBE0;  // data: 0xABDBE0
extern unsigned int DataGlobal_ABDBE4;  // data: 0xABDBE4
extern unsigned int DataGlobal_ABDBE8;  // data: 0xABDBE8
extern unsigned int DataGlobal_ABDBEC;  // data: 0xABDBEC
extern unsigned int DataGlobal_ABDBF0;  // data: 0xABDBF0
extern unsigned int DataGlobal_ABDBF4;  // data: 0xABDBF4
extern unsigned int DataGlobal_ABDBF8;  // data: 0xABDBF8
extern unsigned int DataGlobal_ABDBFC;  // data: 0xABDBFC
extern unsigned int DataGlobal_ABDC00;  // data: 0xABDC00
extern unsigned int DataGlobal_ABDC04;  // data: 0xABDC04
extern unsigned int DataGlobal_ABDC08;  // data: 0xABDC08
extern unsigned int DataGlobal_ABDC0C;  // data: 0xABDC0C
extern unsigned int DataGlobal_ABDC10;  // data: 0xABDC10
extern unsigned int DataGlobal_ABDC14;  // data: 0xABDC14
extern unsigned int DataGlobal_ABDC18;  // data: 0xABDC18
extern unsigned int DataGlobal_ABDC40;  // data: 0xABDC40
extern unsigned int DataGlobal_ABDC44;  // data: 0xABDC44
extern unsigned int DataGlobal_ABDC48;  // data: 0xABDC48
extern unsigned int DataGlobal_ABDC84;  // data: 0xABDC84
extern unsigned int DataGlobal_ABDDC8;  // data: 0xABDDC8
extern unsigned int DataGlobal_ABDDCC;  // data: 0xABDDCC
extern unsigned int DataGlobal_ABDDD0;  // data: 0xABDDD0
extern unsigned int DataGlobal_ABDDD4;  // data: 0xABDDD4
extern unsigned int DataGlobal_ABDDD8;  // data: 0xABDDD8
extern unsigned int DataGlobal_ABDDDC;  // data: 0xABDDDC
extern unsigned int DataGlobal_ABDDE0;  // data: 0xABDDE0
extern unsigned int DataGlobal_ABDDE4;  // data: 0xABDDE4
extern unsigned int DataGlobal_ABDDE8;  // data: 0xABDDE8
extern unsigned int DataGlobal_ABDDEC;  // data: 0xABDDEC
extern unsigned int DataGlobal_ABDDF0;  // data: 0xABDDF0
extern unsigned int DataGlobal_ABDDF4;  // data: 0xABDDF4
extern unsigned int DataGlobal_ABDDF8;  // data: 0xABDDF8
extern unsigned int DataGlobal_ABDDFC;  // data: 0xABDDFC
extern unsigned int DataGlobal_ABDE00;  // data: 0xABDE00
extern unsigned int DataGlobal_ABDE04;  // data: 0xABDE04
extern unsigned int DataGlobal_ABDE08;  // data: 0xABDE08
extern unsigned int DataGlobal_ABDE0C;  // data: 0xABDE0C
extern unsigned int DataGlobal_ABDE10;  // data: 0xABDE10
extern unsigned int DataGlobal_ABDE14;  // data: 0xABDE14
extern unsigned int DataGlobal_ABDE18;  // data: 0xABDE18
extern unsigned int DataGlobal_ABDE1C;  // data: 0xABDE1C
extern unsigned int DataGlobal_ABDE20;  // data: 0xABDE20
extern unsigned int DataGlobal_ABDE24;  // data: 0xABDE24
extern unsigned int DataGlobal_ABDE28;  // data: 0xABDE28
extern unsigned int DataGlobal_ABDE2C;  // data: 0xABDE2C
extern unsigned int DataGlobal_ABDE30;  // data: 0xABDE30
extern unsigned int DataGlobal_ABDE34;  // data: 0xABDE34
extern unsigned int DataGlobal_ABDE38;  // data: 0xABDE38
extern unsigned int DataGlobal_ABDE3C;  // data: 0xABDE3C
extern unsigned int DataGlobal_ABDE40;  // data: 0xABDE40
extern unsigned int DataGlobal_ABDE44;  // data: 0xABDE44
extern unsigned int DataGlobal_ABDE8C;  // data: 0xABDE8C
extern unsigned int DataGlobal_ABDE98;  // data: 0xABDE98
extern unsigned int DataGlobal_ABDE9C;  // data: 0xABDE9C
extern unsigned int DataGlobal_ABDEA0;  // data: 0xABDEA0
extern unsigned int DataGlobal_ABDEA4;  // data: 0xABDEA4
extern unsigned int DataGlobal_ABDEC8;  // data: 0xABDEC8
extern unsigned int DataGlobal_ABDECC;  // data: 0xABDECC
extern unsigned int DataGlobal_ABDED0;  // data: 0xABDED0
extern unsigned int DataGlobal_ABDEF0;  // data: 0xABDEF0
extern unsigned int DataGlobal_ABDEF4;  // data: 0xABDEF4
extern unsigned int DataGlobal_ABDEF8;  // data: 0xABDEF8
extern unsigned int DataGlobal_ABDEFC;  // data: 0xABDEFC
extern unsigned int DataGlobal_ABDF08;  // data: 0xABDF08
extern unsigned int DataGlobal_ABDF18;  // data: 0xABDF18
extern unsigned int DataGlobal_ABDF1C;  // data: 0xABDF1C
extern unsigned int DataGlobal_ABDF20;  // data: 0xABDF20
extern unsigned int DataGlobal_ABDF24;  // data: 0xABDF24
extern unsigned int DataGlobal_ABDF48;  // data: 0xABDF48
extern unsigned int DataGlobal_ABDF4C;  // data: 0xABDF4C
extern unsigned int DataGlobal_ABDF50;  // data: 0xABDF50
extern unsigned int DataGlobal_ABDF70;  // data: 0xABDF70
extern unsigned int DataGlobal_ABDF74;  // data: 0xABDF74
extern unsigned int DataGlobal_ABDF78;  // data: 0xABDF78
extern unsigned int DataGlobal_ABDF7C;  // data: 0xABDF7C
extern unsigned int DataGlobal_ABDF88;  // data: 0xABDF88
extern unsigned int DataGlobal_ABDF98;  // data: 0xABDF98
extern unsigned int DataGlobal_ABDFA4;  // data: 0xABDFA4
extern unsigned int DataGlobal_ABDFC0;  // data: 0xABDFC0
extern unsigned int DataGlobal_ABDFC4;  // data: 0xABDFC4
extern unsigned int DataGlobal_ABDFC8;  // data: 0xABDFC8
extern unsigned int DataGlobal_ABDFD0;  // data: 0xABDFD0
extern unsigned int DataGlobal_ABDFD4;  // data: 0xABDFD4
extern unsigned int DataGlobal_ABDFD8;  // data: 0xABDFD8
extern unsigned int DataGlobal_ABDFEC;  // data: 0xABDFEC
extern unsigned int DataGlobal_ABE010;  // data: 0xABE010
extern unsigned int DataGlobal_ABE014;  // data: 0xABE014
extern unsigned int DataGlobal_ABE028;  // data: 0xABE028
extern unsigned int DataGlobal_ABE030;  // data: 0xABE030
extern unsigned int DataGlobal_ABE044;  // data: 0xABE044
extern unsigned int DataGlobal_ABE048;  // data: 0xABE048
extern unsigned int DataGlobal_ABE04C;  // data: 0xABE04C
extern unsigned int DataGlobal_ABE150;  // data: 0xABE150
extern unsigned int DataGlobal_ABE158;  // data: 0xABE158
extern unsigned int DataGlobal_ABE15C;  // data: 0xABE15C
extern unsigned int DataGlobal_ABE260;  // data: 0xABE260
extern unsigned int DataGlobal_ABE27C;  // data: 0xABE27C
extern unsigned int DataGlobal_ABE2E4;  // data: 0xABE2E4
extern unsigned int DataGlobal_ABE2F0;  // data: 0xABE2F0
extern unsigned int DataGlobal_ABE2F4;  // data: 0xABE2F4
extern unsigned int DataGlobal_ABE2F8;  // data: 0xABE2F8
extern unsigned int DataGlobal_ABE2FC;  // data: 0xABE2FC
extern unsigned int DataGlobal_ABE300;  // data: 0xABE300
extern unsigned int DataGlobal_ABE304;  // data: 0xABE304
extern unsigned int DataGlobal_ABE328;  // data: 0xABE328
extern unsigned int DataGlobal_ABE32C;  // data: 0xABE32C
extern unsigned int DataGlobal_ABE370;  // data: 0xABE370
extern unsigned int DataGlobal_ABE374;  // data: 0xABE374
extern unsigned int DataGlobal_ABE378;  // data: 0xABE378
extern unsigned int DataGlobal_ABE834;  // data: 0xABE834
extern unsigned int DataGlobal_ABE894;  // data: 0xABE894
extern unsigned int DataGlobal_ABEC90;  // data: 0xABEC90
extern unsigned int DataGlobal_ABECD0;  // data: 0xABECD0
extern unsigned int DataGlobal_ABECE8;  // data: 0xABECE8
extern unsigned int DataGlobal_ABECEC;  // data: 0xABECEC
extern unsigned int DataGlobal_ABECF0;  // data: 0xABECF0
extern unsigned int DataGlobal_ABECF4;  // data: 0xABECF4
extern unsigned int DataGlobal_ABED00;  // data: 0xABED00
extern unsigned int DataGlobal_ABED0C;  // data: 0xABED0C
extern unsigned int DataGlobal_ABED18;  // data: 0xABED18
extern unsigned int DataGlobal_ABED40;  // data: 0xABED40
extern unsigned int DataGlobal_ABED60;  // data: 0xABED60
extern unsigned int DataGlobal_ABED64;  // data: 0xABED64
extern unsigned int DataGlobal_ABED68;  // data: 0xABED68
extern unsigned int DataGlobal_ABED6C;  // data: 0xABED6C
extern unsigned int DataGlobal_ABED90;  // data: 0xABED90
extern unsigned int DataGlobal_ABED94;  // data: 0xABED94
extern unsigned int DataGlobal_ABED98;  // data: 0xABED98
extern unsigned int DataGlobal_ABEDB8;  // data: 0xABEDB8
extern unsigned int DataGlobal_ABEDBC;  // data: 0xABEDBC
extern unsigned int DataGlobal_ABEDC0;  // data: 0xABEDC0
extern unsigned int DataGlobal_ABEDC4;  // data: 0xABEDC4
extern unsigned int DataGlobal_ABEDD0;  // data: 0xABEDD0
extern unsigned int DataGlobal_ABEDE0;  // data: 0xABEDE0
extern unsigned int DataGlobal_ABEDE4;  // data: 0xABEDE4
extern unsigned int DataGlobal_ABEDE8;  // data: 0xABEDE8
extern unsigned int DataGlobal_ABEDEC;  // data: 0xABEDEC
extern unsigned int DataGlobal_AFA320;  // data: 0xAFA320
extern unsigned int DataGlobal_AFA324;  // data: 0xAFA324
extern unsigned int DataGlobal_AFA328;  // data: 0xAFA328
extern unsigned int DataGlobal_AFA338;  // data: 0xAFA338
extern unsigned int DataGlobal_AFA358;  // data: 0xAFA358
extern unsigned int DataGlobal_AFA36C;  // data: 0xAFA36C
extern unsigned int DataGlobal_AFA400;  // data: 0xAFA400
extern unsigned int DataGlobal_AFA420;  // data: 0xAFA420
extern unsigned int DataGlobal_AFA424;  // data: 0xAFA424
extern unsigned int DataGlobal_AFA428;  // data: 0xAFA428
extern unsigned int DataGlobal_AFA42C;  // data: 0xAFA42C
extern unsigned int DataGlobal_AFA44C;  // data: 0xAFA44C
extern unsigned int DataGlobal_AFA45C;  // data: 0xAFA45C
extern unsigned int DataGlobal_B0446C;  // data: 0xB0446C
extern unsigned int DataGlobal_B04474;  // data: 0xB04474
extern unsigned int DataGlobal_B04874;  // data: 0xB04874
extern unsigned int DataGlobal_B0487C;  // data: 0xB0487C
extern unsigned int DataGlobal_B04884;  // data: 0xB04884
extern unsigned int DataGlobal_B04888;  // data: 0xB04888
extern unsigned int DataGlobal_B0489C;  // data: 0xB0489C
extern unsigned int DataGlobal_B048AC;  // data: 0xB048AC
extern unsigned int DataGlobal_B048B0;  // data: 0xB048B0
extern unsigned int DataGlobal_B048B4;  // data: 0xB048B4
extern unsigned int DataGlobal_B048B8;  // data: 0xB048B8
extern unsigned int DataGlobal_B048BC;  // data: 0xB048BC
extern unsigned int DataGlobal_B048C0;  // data: 0xB048C0
extern unsigned int DataGlobal_B048C8;  // data: 0xB048C8
extern unsigned int DataGlobal_B048CC;  // data: 0xB048CC
extern unsigned int DataGlobal_B048E0;  // data: 0xB048E0
extern unsigned int DataGlobal_B04A90;  // data: 0xB04A90
extern unsigned int DataGlobal_B04A94;  // data: 0xB04A94
extern unsigned int DataGlobal_B04A98;  // data: 0xB04A98
extern unsigned int DataGlobal_B04AB8;  // data: 0xB04AB8
extern unsigned int DataGlobal_B04ABC;  // data: 0xB04ABC
extern unsigned int DataGlobal_B04AC0;  // data: 0xB04AC0
extern unsigned int DataGlobal_B04AC4;  // data: 0xB04AC4
extern unsigned int DataGlobal_B04AD0;  // data: 0xB04AD0
extern unsigned int DataGlobal_B04AE0;  // data: 0xB04AE0
extern unsigned int DataGlobal_B04AE4;  // data: 0xB04AE4
extern unsigned int DataGlobal_B04AE8;  // data: 0xB04AE8
extern unsigned int DataGlobal_B04AEC;  // data: 0xB04AEC
extern unsigned int DataGlobal_B04B10;  // data: 0xB04B10
extern unsigned int DataGlobal_B04B14;  // data: 0xB04B14
extern unsigned int DataGlobal_B04B18;  // data: 0xB04B18
extern unsigned int DataGlobal_B04B38;  // data: 0xB04B38
extern unsigned int DataGlobal_B04B3C;  // data: 0xB04B3C
extern unsigned int DataGlobal_B04B40;  // data: 0xB04B40
extern unsigned int DataGlobal_B04B44;  // data: 0xB04B44
extern unsigned int DataGlobal_B04B50;  // data: 0xB04B50
extern unsigned int DataGlobal_B04B60;  // data: 0xB04B60
extern unsigned int DataGlobal_B04B64;  // data: 0xB04B64
extern unsigned int DataGlobal_B04B68;  // data: 0xB04B68
extern unsigned int DataGlobal_B04B6C;  // data: 0xB04B6C
extern unsigned int DataGlobal_B04B90;  // data: 0xB04B90
extern unsigned int DataGlobal_B04B94;  // data: 0xB04B94
extern unsigned int DataGlobal_B04B98;  // data: 0xB04B98
extern unsigned int DataGlobal_B04BB8;  // data: 0xB04BB8
extern unsigned int DataGlobal_B04BBC;  // data: 0xB04BBC
extern unsigned int DataGlobal_B04BC0;  // data: 0xB04BC0
extern unsigned int DataGlobal_B04BC4;  // data: 0xB04BC4
extern unsigned int DataGlobal_B04BD4;  // data: 0xB04BD4
extern unsigned int DataGlobal_B04BD8;  // data: 0xB04BD8
extern unsigned int DataGlobal_B04BE0;  // data: 0xB04BE0
extern unsigned int DataGlobal_B04BE4;  // data: 0xB04BE4
extern unsigned int DataGlobal_B04BE8;  // data: 0xB04BE8
extern unsigned int DataGlobal_B04C28;  // data: 0xB04C28
extern unsigned int DataGlobal_B04C2C;  // data: 0xB04C2C
extern unsigned int DataGlobal_B04C30;  // data: 0xB04C30
extern unsigned int DataGlobal_B04C34;  // data: 0xB04C34
extern unsigned int DataGlobal_B04C38;  // data: 0xB04C38
extern unsigned int DataGlobal_B04C58;  // data: 0xB04C58
extern unsigned int DataGlobal_B04C5C;  // data: 0xB04C5C
extern unsigned int DataGlobal_B04C60;  // data: 0xB04C60
extern unsigned int DataGlobal_B04C80;  // data: 0xB04C80
extern unsigned int DataGlobal_B04C84;  // data: 0xB04C84
extern unsigned int DataGlobal_B04C88;  // data: 0xB04C88
extern unsigned int DataGlobal_B04C8C;  // data: 0xB04C8C
extern unsigned int DataGlobal_B04C98;  // data: 0xB04C98
extern unsigned int DataGlobal_B04CA0;  // data: 0xB04CA0
extern unsigned int DataGlobal_B04CB0;  // data: 0xB04CB0
extern unsigned int DataGlobal_B04CB4;  // data: 0xB04CB4
extern unsigned int DataGlobal_B04CB8;  // data: 0xB04CB8
extern unsigned int DataGlobal_B04CBC;  // data: 0xB04CBC
extern unsigned int DataGlobal_B04CE0;  // data: 0xB04CE0
extern unsigned int DataGlobal_B04CE4;  // data: 0xB04CE4
extern unsigned int DataGlobal_B04CE8;  // data: 0xB04CE8
extern unsigned int DataGlobal_B04D08;  // data: 0xB04D08
extern unsigned int DataGlobal_B04D0C;  // data: 0xB04D0C
extern unsigned int DataGlobal_B04D10;  // data: 0xB04D10
extern unsigned int DataGlobal_B04D14;  // data: 0xB04D14
extern unsigned int DataGlobal_B04D20;  // data: 0xB04D20
extern unsigned int DataGlobal_B04D38;  // data: 0xB04D38
extern unsigned int DataGlobal_B04D3C;  // data: 0xB04D3C
extern unsigned int DataGlobal_B04D40;  // data: 0xB04D40
extern unsigned int DataGlobal_B04D44;  // data: 0xB04D44
extern unsigned int DataGlobal_B04D48;  // data: 0xB04D48
extern unsigned int DataGlobal_B04D68;  // data: 0xB04D68
extern unsigned int DataGlobal_B04D88;  // data: 0xB04D88
extern unsigned int DataGlobal_B04D98;  // data: 0xB04D98
extern unsigned int DataGlobal_B04D9C;  // data: 0xB04D9C
extern unsigned int DataGlobal_B04DA0;  // data: 0xB04DA0
extern unsigned int DataGlobal_B04DA8;  // data: 0xB04DA8
extern unsigned int DataGlobal_B04DB0;  // data: 0xB04DB0
extern unsigned int DataGlobal_B04DBC;  // data: 0xB04DBC
extern unsigned int DataGlobal_B04DD8;  // data: 0xB04DD8
extern unsigned int DataGlobal_B04DE0;  // data: 0xB04DE0
extern unsigned int DataGlobal_B04DE4;  // data: 0xB04DE4
extern unsigned int DataGlobal_B04DE8;  // data: 0xB04DE8
extern unsigned int DataGlobal_B04DEC;  // data: 0xB04DEC
extern unsigned int DataGlobal_B04DF8;  // data: 0xB04DF8
extern unsigned int DataGlobal_B04E08;  // data: 0xB04E08
extern unsigned int DataGlobal_B04E0C;  // data: 0xB04E0C
extern unsigned int DataGlobal_B04E10;  // data: 0xB04E10
extern unsigned int DataGlobal_B04E14;  // data: 0xB04E14
extern unsigned int DataGlobal_B04E38;  // data: 0xB04E38
extern unsigned int DataGlobal_B04E3C;  // data: 0xB04E3C
extern unsigned int DataGlobal_B04E40;  // data: 0xB04E40
extern unsigned int DataGlobal_B04E60;  // data: 0xB04E60
extern unsigned int DataGlobal_B04E64;  // data: 0xB04E64
extern unsigned int DataGlobal_B04E68;  // data: 0xB04E68
extern unsigned int DataGlobal_B04E6C;  // data: 0xB04E6C
extern unsigned int DataGlobal_B04E78;  // data: 0xB04E78
extern unsigned int DataGlobal_B04E88;  // data: 0xB04E88
extern unsigned int DataGlobal_B04E8C;  // data: 0xB04E8C
extern unsigned int DataGlobal_B04E90;  // data: 0xB04E90
extern unsigned int DataGlobal_B04E94;  // data: 0xB04E94
extern unsigned int DataGlobal_B04E9C;  // data: 0xB04E9C
extern unsigned int DataGlobal_B052D4;  // data: 0xB052D4
extern unsigned int DataGlobal_B052D8;  // data: 0xB052D8
extern unsigned int DataGlobal_B052E0;  // data: 0xB052E0
extern unsigned int DataGlobal_B052E4;  // data: 0xB052E4
extern unsigned int DataGlobal_B052EC;  // data: 0xB052EC
extern unsigned int DataGlobal_B052F0;  // data: 0xB052F0
extern unsigned int DataGlobal_B052F4;  // data: 0xB052F4
extern unsigned int DataGlobal_B052F8;  // data: 0xB052F8
extern unsigned int DataGlobal_B05318;  // data: 0xB05318
extern unsigned int DataGlobal_B0531C;  // data: 0xB0531C
extern unsigned int DataGlobal_B05320;  // data: 0xB05320
extern unsigned int DataGlobal_B05324;  // data: 0xB05324
extern unsigned int DataGlobal_B05330;  // data: 0xB05330
extern unsigned int DataGlobal_B05340;  // data: 0xB05340
extern unsigned int DataGlobal_B05344;  // data: 0xB05344
extern unsigned int DataGlobal_B05348;  // data: 0xB05348
extern unsigned int DataGlobal_B0534C;  // data: 0xB0534C
extern unsigned int DataGlobal_B05370;  // data: 0xB05370
extern unsigned int DataGlobal_B05374;  // data: 0xB05374
extern unsigned int DataGlobal_B05378;  // data: 0xB05378
extern unsigned int DataGlobal_B05398;  // data: 0xB05398
extern unsigned int DataGlobal_B0539C;  // data: 0xB0539C
extern unsigned int DataGlobal_B053A0;  // data: 0xB053A0
extern unsigned int DataGlobal_B053A4;  // data: 0xB053A4
extern unsigned int DataGlobal_B053B0;  // data: 0xB053B0
extern unsigned int DataGlobal_B053B4;  // data: 0xB053B4
extern unsigned int DataGlobal_B053C8;  // data: 0xB053C8
extern unsigned int DataGlobal_B053CC;  // data: 0xB053CC
extern unsigned int DataGlobal_B053D0;  // data: 0xB053D0
extern unsigned int DataGlobal_B053D4;  // data: 0xB053D4
extern unsigned int DataGlobal_B053F8;  // data: 0xB053F8
extern unsigned int DataGlobal_B053FC;  // data: 0xB053FC
extern unsigned int DataGlobal_B05400;  // data: 0xB05400
extern unsigned int DataGlobal_B05420;  // data: 0xB05420
extern unsigned int DataGlobal_B05424;  // data: 0xB05424
extern unsigned int DataGlobal_B05428;  // data: 0xB05428
extern unsigned int DataGlobal_B0542C;  // data: 0xB0542C
extern unsigned int DataGlobal_B05438;  // data: 0xB05438
extern unsigned int DataGlobal_B05448;  // data: 0xB05448
extern unsigned int DataGlobal_B0544C;  // data: 0xB0544C
extern unsigned int DataGlobal_B05450;  // data: 0xB05450
extern unsigned int DataGlobal_B05454;  // data: 0xB05454
extern unsigned int DataGlobal_B05458;  // data: 0xB05458
extern unsigned int DataGlobal_B05478;  // data: 0xB05478
extern unsigned int DataGlobal_B05480;  // data: 0xB05480
extern unsigned int DataGlobal_B1CF74;  // data: 0xB1CF74
extern unsigned int DataGlobal_B1CF90;  // data: 0xB1CF90
extern unsigned int DataGlobal_B1D13C;  // data: 0xB1D13C
extern unsigned int DataGlobal_B43178;  // data: 0xB43178
extern unsigned int DataGlobal_B4317C;  // data: 0xB4317C
extern unsigned int DataGlobal_B43180;  // data: 0xB43180
extern unsigned int DataGlobal_B43184;  // data: 0xB43184
extern unsigned int DataGlobal_B43188;  // data: 0xB43188
extern unsigned int DataGlobal_B43EE0;  // data: 0xB43EE0
extern unsigned int DataGlobal_B43EE4;  // data: 0xB43EE4
extern unsigned int DataGlobal_B43EE8;  // data: 0xB43EE8
extern unsigned int DataGlobal_B43EEC;  // data: 0xB43EEC
extern unsigned int DataGlobal_B44300;  // data: 0xB44300
extern unsigned int DataGlobal_B44304;  // data: 0xB44304
extern unsigned int DataGlobal_B44308;  // data: 0xB44308
extern unsigned int DataGlobal_B450A8;  // data: 0xB450A8
extern unsigned int DataGlobal_B450AC;  // data: 0xB450AC
extern unsigned int DataGlobal_B450B0;  // data: 0xB450B0
extern unsigned int DataGlobal_B450CC;  // data: 0xB450CC
extern unsigned int DataGlobal_B450E8;  // data: 0xB450E8
extern unsigned int DataGlobal_B450EC;  // data: 0xB450EC
extern unsigned int DataGlobal_B450F8;  // data: 0xB450F8
extern unsigned int DataGlobal_B450FC;  // data: 0xB450FC
extern unsigned int DataGlobal_B45118;  // data: 0xB45118
extern unsigned int DataGlobal_B45148;  // data: 0xB45148
extern unsigned int DataGlobal_B4514C;  // data: 0xB4514C
extern unsigned int DataGlobal_B45158;  // data: 0xB45158
extern unsigned int DataGlobal_B4515C;  // data: 0xB4515C
extern unsigned int DataGlobal_B45178;  // data: 0xB45178
extern unsigned int DataGlobal_B45578;  // data: 0xB45578
extern unsigned int DataGlobal_B45580;  // data: 0xB45580
extern unsigned int DataGlobal_B45584;  // data: 0xB45584
extern unsigned int DataGlobal_B45588;  // data: 0xB45588
extern unsigned int DataGlobal_B4558C;  // data: 0xB4558C
extern unsigned int DataGlobal_B45B18;  // data: 0xB45B18
extern unsigned int DataGlobal_B45B1C;  // data: 0xB45B1C
extern unsigned int DataGlobal_B45B20;  // data: 0xB45B20
extern unsigned int DataGlobal_B45B24;  // data: 0xB45B24
extern unsigned int DataGlobal_B45B48;  // data: 0xB45B48
extern unsigned int DataGlobal_B45B4C;  // data: 0xB45B4C
extern unsigned int DataGlobal_B45B50;  // data: 0xB45B50
extern unsigned int DataGlobal_B45B58;  // data: 0xB45B58
extern unsigned int DataGlobal_B45B60;  // data: 0xB45B60
extern unsigned int DataGlobal_B45B6C;  // data: 0xB45B6C
extern unsigned int DataGlobal_B45B88;  // data: 0xB45B88
extern unsigned int DataGlobal_B45B8C;  // data: 0xB45B8C
extern unsigned int DataGlobal_B45B90;  // data: 0xB45B90
extern unsigned int DataGlobal_B45B94;  // data: 0xB45B94
extern unsigned int DataGlobal_B45BA0;  // data: 0xB45BA0
extern unsigned int DataGlobal_B45BB8;  // data: 0xB45BB8
extern unsigned int DataGlobal_B45BBC;  // data: 0xB45BBC
extern unsigned int DataGlobal_B45BC0;  // data: 0xB45BC0
extern unsigned int DataGlobal_B45BC4;  // data: 0xB45BC4
extern unsigned int DataGlobal_B725BC;  // data: 0xB725BC
extern unsigned int DataGlobal_B725C8;  // data: 0xB725C8
extern unsigned int DataGlobal_B725D8;  // data: 0xB725D8
extern unsigned int DataGlobal_B725DC;  // data: 0xB725DC
extern unsigned int DataGlobal_B725E0;  // data: 0xB725E0
extern unsigned int DataGlobal_B725E4;  // data: 0xB725E4
extern unsigned int DataGlobal_B72608;  // data: 0xB72608
extern unsigned int DataGlobal_B7260C;  // data: 0xB7260C
extern unsigned int DataGlobal_B72610;  // data: 0xB72610
extern unsigned int DataGlobal_B72618;  // data: 0xB72618
extern unsigned int DataGlobal_B7261C;  // data: 0xB7261C
extern unsigned int DataGlobal_B72620;  // data: 0xB72620
extern unsigned int DataGlobal_B72624;  // data: 0xB72624
extern unsigned int DataGlobal_B72628;  // data: 0xB72628
extern unsigned int DataGlobal_B72648;  // data: 0xB72648
extern unsigned int DataGlobal_B7264C;  // data: 0xB7264C
extern unsigned int DataGlobal_B72650;  // data: 0xB72650
extern unsigned int DataGlobal_B72658;  // data: 0xB72658
extern unsigned int DataGlobal_B72668;  // data: 0xB72668
extern unsigned int DataGlobal_B72678;  // data: 0xB72678
extern unsigned int DataGlobal_B7267C;  // data: 0xB7267C
extern unsigned int DataGlobal_B72680;  // data: 0xB72680
extern unsigned int DataGlobal_B72684;  // data: 0xB72684
extern unsigned int DataGlobal_B726A8;  // data: 0xB726A8
extern unsigned int DataGlobal_B726AC;  // data: 0xB726AC
extern unsigned int DataGlobal_B726B0;  // data: 0xB726B0
extern unsigned int DataGlobal_B726D0;  // data: 0xB726D0
extern unsigned int DataGlobal_B726D4;  // data: 0xB726D4
extern unsigned int DataGlobal_B726D8;  // data: 0xB726D8
extern unsigned int DataGlobal_B726DC;  // data: 0xB726DC
extern unsigned int DataGlobal_B726E8;  // data: 0xB726E8
extern unsigned int DataGlobal_B726F8;  // data: 0xB726F8
extern unsigned int DataGlobal_B726FC;  // data: 0xB726FC
extern unsigned int DataGlobal_B72700;  // data: 0xB72700
extern unsigned int DataGlobal_B72704;  // data: 0xB72704
extern unsigned int DataGlobal_B72728;  // data: 0xB72728
extern unsigned int DataGlobal_B7272C;  // data: 0xB7272C
extern unsigned int DataGlobal_B72730;  // data: 0xB72730
extern unsigned int DataGlobal_B72750;  // data: 0xB72750
extern unsigned int DataGlobal_B72754;  // data: 0xB72754
extern unsigned int DataGlobal_B72758;  // data: 0xB72758
extern unsigned int DataGlobal_B72760;  // data: 0xB72760
extern unsigned int DataGlobal_B72764;  // data: 0xB72764
extern unsigned int DataGlobal_B72768;  // data: 0xB72768
extern unsigned int DataGlobal_B72770;  // data: 0xB72770
extern unsigned int DataGlobal_B72774;  // data: 0xB72774
extern unsigned int DataGlobal_B72778;  // data: 0xB72778
extern unsigned int DataGlobal_B72788;  // data: 0xB72788
extern unsigned int DataGlobal_B72798;  // data: 0xB72798
extern unsigned int DataGlobal_B7279C;  // data: 0xB7279C
extern unsigned int DataGlobal_B727A0;  // data: 0xB727A0
extern unsigned int DataGlobal_B727A4;  // data: 0xB727A4
extern unsigned int DataGlobal_B727C8;  // data: 0xB727C8
extern unsigned int DataGlobal_B727CC;  // data: 0xB727CC
extern unsigned int DataGlobal_B727D0;  // data: 0xB727D0
extern unsigned int DataGlobal_B727F0;  // data: 0xB727F0
extern unsigned int DataGlobal_B727F4;  // data: 0xB727F4
extern unsigned int DataGlobal_B727F8;  // data: 0xB727F8
extern unsigned int DataGlobal_B727FC;  // data: 0xB727FC
extern unsigned int DataGlobal_B72808;  // data: 0xB72808
extern unsigned int DataGlobal_B72818;  // data: 0xB72818
extern unsigned int DataGlobal_B7281C;  // data: 0xB7281C
extern unsigned int DataGlobal_B72820;  // data: 0xB72820
extern unsigned int DataGlobal_B72824;  // data: 0xB72824
extern unsigned int DataGlobal_B72848;  // data: 0xB72848
extern unsigned int DataGlobal_B7284C;  // data: 0xB7284C
extern unsigned int DataGlobal_B72850;  // data: 0xB72850
extern unsigned int DataGlobal_B72870;  // data: 0xB72870
extern unsigned int DataGlobal_B72874;  // data: 0xB72874
extern unsigned int DataGlobal_B72878;  // data: 0xB72878
extern unsigned int DataGlobal_B7287C;  // data: 0xB7287C
extern unsigned int DataGlobal_B72888;  // data: 0xB72888
extern unsigned int DataGlobal_B72898;  // data: 0xB72898
extern unsigned int DataGlobal_B7289C;  // data: 0xB7289C
extern unsigned int DataGlobal_B728A0;  // data: 0xB728A0
extern unsigned int DataGlobal_B728A4;  // data: 0xB728A4
extern unsigned int DataGlobal_B728C8;  // data: 0xB728C8
extern unsigned int DataGlobal_B728CC;  // data: 0xB728CC
extern unsigned int DataGlobal_B728D0;  // data: 0xB728D0
extern unsigned int DataGlobal_B728F0;  // data: 0xB728F0
extern unsigned int DataGlobal_B728F4;  // data: 0xB728F4
extern unsigned int DataGlobal_B728F8;  // data: 0xB728F8
extern unsigned int DataGlobal_B728FC;  // data: 0xB728FC
extern unsigned int DataGlobal_B72908;  // data: 0xB72908
extern unsigned int DataGlobal_B72918;  // data: 0xB72918
extern unsigned int DataGlobal_B7291C;  // data: 0xB7291C
extern unsigned int DataGlobal_B72920;  // data: 0xB72920
extern unsigned int DataGlobal_B72924;  // data: 0xB72924
extern unsigned int DataGlobal_B72948;  // data: 0xB72948
extern unsigned int DataGlobal_B7294C;  // data: 0xB7294C
extern unsigned int DataGlobal_B72950;  // data: 0xB72950
extern unsigned int DataGlobal_B72970;  // data: 0xB72970
extern unsigned int DataGlobal_B72974;  // data: 0xB72974
extern unsigned int DataGlobal_B72978;  // data: 0xB72978
extern unsigned int DataGlobal_B7297C;  // data: 0xB7297C
extern unsigned int DataGlobal_B72988;  // data: 0xB72988
extern unsigned int DataGlobal_B72998;  // data: 0xB72998
extern unsigned int DataGlobal_B7299C;  // data: 0xB7299C
extern unsigned int DataGlobal_B729A0;  // data: 0xB729A0
extern unsigned int DataGlobal_B729A4;  // data: 0xB729A4
extern unsigned int DataGlobal_B729C8;  // data: 0xB729C8
extern unsigned int DataGlobal_B729CC;  // data: 0xB729CC
extern unsigned int DataGlobal_B729D0;  // data: 0xB729D0
extern unsigned int DataGlobal_B729F0;  // data: 0xB729F0
extern unsigned int DataGlobal_B729F4;  // data: 0xB729F4
extern unsigned int DataGlobal_B729F8;  // data: 0xB729F8
extern unsigned int DataGlobal_B729FC;  // data: 0xB729FC
extern unsigned int DataGlobal_B72A08;  // data: 0xB72A08
extern unsigned int DataGlobal_B72A18;  // data: 0xB72A18
extern unsigned int DataGlobal_B72A1C;  // data: 0xB72A1C
extern unsigned int DataGlobal_B72A20;  // data: 0xB72A20
extern unsigned int DataGlobal_B72A24;  // data: 0xB72A24
extern unsigned int DataGlobal_B72A48;  // data: 0xB72A48
extern unsigned int DataGlobal_B72A4C;  // data: 0xB72A4C
extern unsigned int DataGlobal_B72A50;  // data: 0xB72A50
extern unsigned int DataGlobal_B72A70;  // data: 0xB72A70
extern unsigned int DataGlobal_B72A74;  // data: 0xB72A74
extern unsigned int DataGlobal_B72A78;  // data: 0xB72A78
extern unsigned int DataGlobal_B72A7C;  // data: 0xB72A7C
extern unsigned int DataGlobal_B72A88;  // data: 0xB72A88
extern unsigned int DataGlobal_B72A98;  // data: 0xB72A98
extern unsigned int DataGlobal_B72A9C;  // data: 0xB72A9C
extern unsigned int DataGlobal_B72AA0;  // data: 0xB72AA0
extern unsigned int DataGlobal_B72AA4;  // data: 0xB72AA4
extern unsigned int DataGlobal_B72AC8;  // data: 0xB72AC8
extern unsigned int DataGlobal_B72ACC;  // data: 0xB72ACC
extern unsigned int DataGlobal_B72AD0;  // data: 0xB72AD0
extern unsigned int DataGlobal_B72AF0;  // data: 0xB72AF0
extern unsigned int DataGlobal_B72AF4;  // data: 0xB72AF4
extern unsigned int DataGlobal_B72AF8;  // data: 0xB72AF8
extern unsigned int DataGlobal_B72AFC;  // data: 0xB72AFC
extern unsigned int DataGlobal_B72B08;  // data: 0xB72B08
extern unsigned int DataGlobal_B72B18;  // data: 0xB72B18
extern unsigned int DataGlobal_B72B1C;  // data: 0xB72B1C
extern unsigned int DataGlobal_B72B20;  // data: 0xB72B20
extern unsigned int DataGlobal_B72B24;  // data: 0xB72B24
extern unsigned int DataGlobal_B72B48;  // data: 0xB72B48
extern unsigned int DataGlobal_B72B4C;  // data: 0xB72B4C
extern unsigned int DataGlobal_B72B50;  // data: 0xB72B50
extern unsigned int DataGlobal_B72B70;  // data: 0xB72B70
extern unsigned int DataGlobal_B72B74;  // data: 0xB72B74
extern unsigned int DataGlobal_B72B78;  // data: 0xB72B78
extern unsigned int DataGlobal_B72B7C;  // data: 0xB72B7C
extern unsigned int DataGlobal_B72B88;  // data: 0xB72B88
extern unsigned int DataGlobal_B72B98;  // data: 0xB72B98
extern unsigned int DataGlobal_B72B9C;  // data: 0xB72B9C
extern unsigned int DataGlobal_B72BA0;  // data: 0xB72BA0
extern unsigned int DataGlobal_B72BA4;  // data: 0xB72BA4
extern unsigned int DataGlobal_B72BC8;  // data: 0xB72BC8
extern unsigned int DataGlobal_B72BCC;  // data: 0xB72BCC
extern unsigned int DataGlobal_B72BD0;  // data: 0xB72BD0
extern unsigned int DataGlobal_B72BF0;  // data: 0xB72BF0
extern unsigned int DataGlobal_B72BF4;  // data: 0xB72BF4
extern unsigned int DataGlobal_B72BF8;  // data: 0xB72BF8
extern unsigned int DataGlobal_B72BFC;  // data: 0xB72BFC
extern unsigned int DataGlobal_B72C08;  // data: 0xB72C08
extern unsigned int DataGlobal_B72C18;  // data: 0xB72C18
extern unsigned int DataGlobal_B72C1C;  // data: 0xB72C1C
extern unsigned int DataGlobal_B72C20;  // data: 0xB72C20
extern unsigned int DataGlobal_B72C24;  // data: 0xB72C24
extern unsigned int DataGlobal_B72C48;  // data: 0xB72C48
extern unsigned int DataGlobal_B72C4C;  // data: 0xB72C4C
extern unsigned int DataGlobal_B72C50;  // data: 0xB72C50
extern unsigned int DataGlobal_B72C70;  // data: 0xB72C70
extern unsigned int DataGlobal_B72C74;  // data: 0xB72C74
extern unsigned int DataGlobal_B72C78;  // data: 0xB72C78
extern unsigned int DataGlobal_B72C7C;  // data: 0xB72C7C
extern unsigned int DataGlobal_B72C88;  // data: 0xB72C88
extern unsigned int DataGlobal_B72C98;  // data: 0xB72C98
extern unsigned int DataGlobal_B72C9C;  // data: 0xB72C9C
extern unsigned int DataGlobal_B72CA0;  // data: 0xB72CA0
extern unsigned int DataGlobal_B72CA4;  // data: 0xB72CA4
extern unsigned int DataGlobal_B72CC8;  // data: 0xB72CC8
extern unsigned int DataGlobal_B72CCC;  // data: 0xB72CCC
extern unsigned int DataGlobal_B72CD0;  // data: 0xB72CD0
extern unsigned int DataGlobal_B72CF0;  // data: 0xB72CF0
extern unsigned int DataGlobal_B72CF4;  // data: 0xB72CF4
extern unsigned int DataGlobal_B72CF8;  // data: 0xB72CF8
extern unsigned int DataGlobal_B72CFC;  // data: 0xB72CFC
extern unsigned int DataGlobal_B72D08;  // data: 0xB72D08
extern unsigned int DataGlobal_B72D0C;  // data: 0xB72D0C
extern unsigned int DataGlobal_B72D10;  // data: 0xB72D10
extern unsigned int DataGlobal_B72D14;  // data: 0xB72D14
extern unsigned int DataGlobal_B72D18;  // data: 0xB72D18
extern unsigned int DataGlobal_B72D1C;  // data: 0xB72D1C
extern unsigned int DataGlobal_B72D24;  // data: 0xB72D24
extern unsigned int DataGlobal_B72D2C;  // data: 0xB72D2C
extern unsigned int DataGlobal_B72F28;  // data: 0xB72F28
extern unsigned int DataGlobal_B72F2C;  // data: 0xB72F2C
extern unsigned int DataGlobal_B72F30;  // data: 0xB72F30
extern unsigned int DataGlobal_B72F34;  // data: 0xB72F34
extern unsigned int DataGlobal_B72F38;  // data: 0xB72F38
extern unsigned int DataGlobal_B72F3C;  // data: 0xB72F3C
extern unsigned int DataGlobal_B72F40;  // data: 0xB72F40
extern unsigned int DataGlobal_B72F44;  // data: 0xB72F44
extern unsigned int DataGlobal_B72F48;  // data: 0xB72F48
extern unsigned int DataGlobal_B72F4C;  // data: 0xB72F4C
extern unsigned int DataGlobal_B72F58;  // data: 0xB72F58
extern unsigned int DataGlobal_B73080;  // data: 0xB73080
extern unsigned int DataGlobal_B73088;  // data: 0xB73088
extern unsigned int DataGlobal_B7308C;  // data: 0xB7308C
extern unsigned int DataGlobal_B73090;  // data: 0xB73090
extern unsigned int DataGlobal_B73094;  // data: 0xB73094
extern unsigned int DataGlobal_B73098;  // data: 0xB73098
extern unsigned int DataGlobal_B730B8;  // data: 0xB730B8
extern unsigned int DataGlobal_B730BC;  // data: 0xB730BC
extern unsigned int DataGlobal_B730C0;  // data: 0xB730C0
extern unsigned int DataGlobal_B730C4;  // data: 0xB730C4
extern unsigned int DataGlobal_B732F8;  // data: 0xB732F8
extern unsigned int DataGlobal_B732FC;  // data: 0xB732FC
extern unsigned int DataGlobal_B73300;  // data: 0xB73300
extern unsigned int DataGlobal_B73528;  // data: 0xB73528
extern unsigned int DataGlobal_B7352C;  // data: 0xB7352C
extern unsigned int DataGlobal_B73530;  // data: 0xB73530
extern unsigned int DataGlobal_B73534;  // data: 0xB73534
extern unsigned int DataGlobal_B73540;  // data: 0xB73540
extern unsigned int DataGlobal_B7355C;  // data: 0xB7355C
extern unsigned int DataGlobal_B73564;  // data: 0xB73564
extern unsigned int DataGlobal_B7356C;  // data: 0xB7356C
extern unsigned int DataGlobal_B73570;  // data: 0xB73570
extern unsigned int DataGlobal_B73580;  // data: 0xB73580
extern unsigned int DataGlobal_B73584;  // data: 0xB73584
extern unsigned int DataGlobal_B73588;  // data: 0xB73588
extern unsigned int DataGlobal_B7358C;  // data: 0xB7358C
extern unsigned int DataGlobal_B73658;  // data: 0xB73658
extern unsigned int DataGlobal_B7365C;  // data: 0xB7365C
extern unsigned int DataGlobal_B73660;  // data: 0xB73660
extern unsigned int DataGlobal_B73664;  // data: 0xB73664
extern unsigned int DataGlobal_B73670;  // data: 0xB73670
extern unsigned int DataGlobal_B73678;  // data: 0xB73678
extern unsigned int DataGlobal_B73680;  // data: 0xB73680
extern unsigned int DataGlobal_B7368C;  // data: 0xB7368C
extern unsigned int DataGlobal_B73690;  // data: 0xB73690
extern unsigned int DataGlobal_B7369C;  // data: 0xB7369C
extern unsigned int DataGlobal_B736A0;  // data: 0xB736A0
extern unsigned int DataGlobal_B736A4;  // data: 0xB736A4
extern unsigned int DataGlobal_B736A8;  // data: 0xB736A8
extern unsigned int DataGlobal_B736BC;  // data: 0xB736BC
extern unsigned int DataGlobal_B736F0;  // data: 0xB736F0
extern unsigned int DataGlobal_B736F4;  // data: 0xB736F4
extern unsigned int DataGlobal_B736F8;  // data: 0xB736F8
extern unsigned int DataGlobal_B736FC;  // data: 0xB736FC
extern unsigned int DataGlobal_B73700;  // data: 0xB73700
extern unsigned int DataGlobal_B73708;  // data: 0xB73708
extern unsigned int DataGlobal_B7370C;  // data: 0xB7370C
extern unsigned int DataGlobal_B73710;  // data: 0xB73710
extern unsigned int DataGlobal_B73814;  // data: 0xB73814
extern unsigned int DataGlobal_B73A1C;  // data: 0xB73A1C
extern unsigned int DataGlobal_B73AAC;  // data: 0xB73AAC
extern unsigned int DataGlobal_B73AB8;  // data: 0xB73AB8
extern unsigned int DataGlobal_B73BB4;  // data: 0xB73BB4
extern unsigned int DataGlobal_B73BB8;  // data: 0xB73BB8
extern unsigned int DataGlobal_B73BD8;  // data: 0xB73BD8
extern unsigned int DataGlobal_B73BDC;  // data: 0xB73BDC
extern unsigned int DataGlobal_B73BE0;  // data: 0xB73BE0
extern unsigned int DataGlobal_B73BE8;  // data: 0xB73BE8
extern unsigned int DataGlobal_B73DF8;  // data: 0xB73DF8
extern unsigned int DataGlobal_B73DFC;  // data: 0xB73DFC
extern unsigned int DataGlobal_B73E00;  // data: 0xB73E00
extern unsigned int DataGlobal_B73E04;  // data: 0xB73E04
extern unsigned int DataGlobal_B73E14;  // data: 0xB73E14
extern unsigned int DataGlobal_B73E18;  // data: 0xB73E18
extern unsigned int DataGlobal_B73E1C;  // data: 0xB73E1C
extern unsigned int DataGlobal_B73E20;  // data: 0xB73E20
extern unsigned int DataGlobal_B73E24;  // data: 0xB73E24
extern unsigned int DataGlobal_B73E28;  // data: 0xB73E28
extern unsigned int DataGlobal_B73E2C;  // data: 0xB73E2C
extern unsigned int DataGlobal_B73E30;  // data: 0xB73E30
extern unsigned int DataGlobal_B73E34;  // data: 0xB73E34
extern unsigned int DataGlobal_B73E38;  // data: 0xB73E38
extern unsigned int DataGlobal_B73E3C;  // data: 0xB73E3C
extern unsigned int DataGlobal_B75E4C;  // data: 0xB75E4C
extern unsigned int DataGlobal_B75E50;  // data: 0xB75E50
extern unsigned int DataGlobal_B75F54;  // data: 0xB75F54
extern unsigned int DataGlobal_B75F58;  // data: 0xB75F58
extern unsigned int DataGlobal_B7617C;  // data: 0xB7617C
extern unsigned int DataGlobal_B76180;  // data: 0xB76180
extern unsigned int DataGlobal_B76184;  // data: 0xB76184
extern unsigned int DataGlobal_B76188;  // data: 0xB76188
extern unsigned int DataGlobal_B7618C;  // data: 0xB7618C
extern unsigned int DataGlobal_B76190;  // data: 0xB76190
extern unsigned int DataGlobal_B76228;  // data: 0xB76228
extern unsigned int DataGlobal_B7622C;  // data: 0xB7622C
extern unsigned int DataGlobal_B76230;  // data: 0xB76230
extern unsigned int DataGlobal_B76234;  // data: 0xB76234
extern unsigned int DataGlobal_B76338;  // data: 0xB76338
extern unsigned int DataGlobal_B7643C;  // data: 0xB7643C
extern unsigned int DataGlobal_B76440;  // data: 0xB76440
extern unsigned int DataGlobal_B76468;  // data: 0xB76468
extern unsigned int DataGlobal_B7646C;  // data: 0xB7646C
extern unsigned int DataGlobal_B76474;  // data: 0xB76474
extern unsigned int DataGlobal_B76478;  // data: 0xB76478
extern unsigned int DataGlobal_B7647C;  // data: 0xB7647C
extern unsigned int DataGlobal_B76480;  // data: 0xB76480
extern unsigned int DataGlobal_B76488;  // data: 0xB76488
extern unsigned int DataGlobal_B76510;  // data: 0xB76510
extern unsigned int DataGlobal_B76514;  // data: 0xB76514
extern unsigned int DataGlobal_B76518;  // data: 0xB76518
extern unsigned int DataGlobal_B76534;  // data: 0xB76534
extern unsigned int DataGlobal_B76538;  // data: 0xB76538
extern unsigned int DataGlobal_B7653C;  // data: 0xB7653C
extern unsigned int DataGlobal_B76540;  // data: 0xB76540
extern unsigned int DataGlobal_B76548;  // data: 0xB76548
extern unsigned int DataGlobal_B76560;  // data: 0xB76560
extern unsigned int DataGlobal_B765EC;  // data: 0xB765EC
extern unsigned int DataGlobal_B765F0;  // data: 0xB765F0
extern unsigned int DataGlobal_B765FC;  // data: 0xB765FC
extern unsigned int DataGlobal_B76600;  // data: 0xB76600
extern unsigned int DataGlobal_B7660C;  // data: 0xB7660C
extern unsigned int DataGlobal_B76614;  // data: 0xB76614
extern unsigned int DataGlobal_B76618;  // data: 0xB76618
extern unsigned int DataGlobal_B76620;  // data: 0xB76620
extern unsigned int DataGlobal_B76638;  // data: 0xB76638
extern unsigned int DataGlobal_B76640;  // data: 0xB76640
extern unsigned int DataGlobal_B76644;  // data: 0xB76644
extern unsigned int DataGlobal_B76648;  // data: 0xB76648
extern unsigned int DataGlobal_B7664C;  // data: 0xB7664C
extern unsigned int DataGlobal_B76650;  // data: 0xB76650
extern unsigned int DataGlobal_B76658;  // data: 0xB76658
extern unsigned int DataGlobal_B76670;  // data: 0xB76670
extern unsigned int DataGlobal_B7668C;  // data: 0xB7668C
extern unsigned int DataGlobal_B76690;  // data: 0xB76690
extern unsigned int DataGlobal_B76698;  // data: 0xB76698
extern unsigned int DataGlobal_B766B0;  // data: 0xB766B0
extern unsigned int DataGlobal_B766B8;  // data: 0xB766B8
extern unsigned int DataGlobal_B768C4;  // data: 0xB768C4
extern unsigned int DataGlobal_B768C8;  // data: 0xB768C8
extern unsigned int DataGlobal_B768CC;  // data: 0xB768CC
extern unsigned int DataGlobal_B768D0;  // data: 0xB768D0
extern unsigned int DataGlobal_B768D8;  // data: 0xB768D8
extern unsigned int DataGlobal_B768E0;  // data: 0xB768E0
extern unsigned int DataGlobal_B768E4;  // data: 0xB768E4
extern unsigned int DataGlobal_B768F0;  // data: 0xB768F0
extern unsigned int DataGlobal_B768F8;  // data: 0xB768F8
extern unsigned int DataGlobal_B76900;  // data: 0xB76900
extern unsigned int DataGlobal_B76908;  // data: 0xB76908
extern unsigned int DataGlobal_B7690C;  // data: 0xB7690C
extern unsigned int DataGlobal_B76910;  // data: 0xB76910
extern unsigned int DataGlobal_B76914;  // data: 0xB76914
extern unsigned int DataGlobal_B76918;  // data: 0xB76918
extern unsigned int DataGlobal_B7691C;  // data: 0xB7691C
extern unsigned int DataGlobal_B76920;  // data: 0xB76920
extern unsigned int DataGlobal_B76924;  // data: 0xB76924
extern unsigned int DataGlobal_B76928;  // data: 0xB76928
extern unsigned int DataGlobal_B7692C;  // data: 0xB7692C
extern unsigned int DataGlobal_B76930;  // data: 0xB76930
extern unsigned int DataGlobal_B76934;  // data: 0xB76934
extern unsigned int DataGlobal_B76938;  // data: 0xB76938
extern unsigned int DataGlobal_B7693C;  // data: 0xB7693C
extern unsigned int DataGlobal_B76940;  // data: 0xB76940
extern unsigned int DataGlobal_B76944;  // data: 0xB76944
extern unsigned int DataGlobal_B76948;  // data: 0xB76948
extern unsigned int DataGlobal_B7694C;  // data: 0xB7694C
extern unsigned int DataGlobal_B76950;  // data: 0xB76950
extern unsigned int DataGlobal_B76958;  // data: 0xB76958
extern unsigned int DataGlobal_B76960;  // data: 0xB76960
extern unsigned int DataGlobal_B76964;  // data: 0xB76964
extern unsigned int DataGlobal_B76968;  // data: 0xB76968
extern unsigned int DataGlobal_B76974;  // data: 0xB76974
extern unsigned int DataGlobal_B76978;  // data: 0xB76978
extern unsigned int DataGlobal_B76984;  // data: 0xB76984
extern unsigned int DataGlobal_B76994;  // data: 0xB76994
extern unsigned int DataGlobal_B76998;  // data: 0xB76998
extern unsigned int DataGlobal_B7699C;  // data: 0xB7699C
extern unsigned int DataGlobal_B769A0;  // data: 0xB769A0
extern unsigned int DataGlobal_B769A8;  // data: 0xB769A8
extern unsigned int DataGlobal_B769C0;  // data: 0xB769C0
extern unsigned int DataGlobal_B76AC0;  // data: 0xB76AC0
extern unsigned int DataGlobal_B76AC4;  // data: 0xB76AC4
extern unsigned int DataGlobal_B76AD4;  // data: 0xB76AD4
extern unsigned int DataGlobal_B76AE4;  // data: 0xB76AE4
extern unsigned int DataGlobal_B76AF4;  // data: 0xB76AF4
extern unsigned int DataGlobal_B76B00;  // data: 0xB76B00
extern unsigned int DataGlobal_B76B04;  // data: 0xB76B04
extern unsigned int DataGlobal_B76B08;  // data: 0xB76B08
extern unsigned int DataGlobal_B76B0C;  // data: 0xB76B0C
extern unsigned int DataGlobal_B76B1C;  // data: 0xB76B1C
extern unsigned int DataGlobal_B76B24;  // data: 0xB76B24
extern unsigned int DataGlobal_B76B30;  // data: 0xB76B30
extern unsigned int DataGlobal_B76C1C;  // data: 0xB76C1C
extern unsigned int DataGlobal_B77780;  // data: 0xB77780
extern unsigned int DataGlobal_B77784;  // data: 0xB77784
extern unsigned int DataGlobal_B77788;  // data: 0xB77788
extern unsigned int DataGlobal_B77790;  // data: 0xB77790
extern unsigned int DataGlobal_B77794;  // data: 0xB77794
extern unsigned int DataGlobal_B77798;  // data: 0xB77798
extern unsigned int DataGlobal_B777A4;  // data: 0xB777A4
extern unsigned int DataGlobal_B777A8;  // data: 0xB777A8
extern unsigned int DataGlobal_B77820;  // data: 0xB77820
extern unsigned int DataGlobal_B77824;  // data: 0xB77824
extern unsigned int DataGlobal_B77828;  // data: 0xB77828
extern unsigned int DataGlobal_B7782C;  // data: 0xB7782C
extern unsigned int DataGlobal_B778C8;  // data: 0xB778C8
extern unsigned int DataGlobal_B778CC;  // data: 0xB778CC
extern unsigned int DataGlobal_B778D0;  // data: 0xB778D0
extern unsigned int DataGlobal_B778DC;  // data: 0xB778DC
extern unsigned int DataGlobal_B778E0;  // data: 0xB778E0
extern unsigned int DataGlobal_B778F4;  // data: 0xB778F4
extern unsigned int DataGlobal_B778FC;  // data: 0xB778FC
extern unsigned int DataGlobal_B7790C;  // data: 0xB7790C
extern unsigned int DataGlobal_B7792C;  // data: 0xB7792C
extern unsigned int DataGlobal_B779B4;  // data: 0xB779B4
extern unsigned int DataGlobal_B779BC;  // data: 0xB779BC
extern unsigned int DataGlobal_B779C0;  // data: 0xB779C0
extern unsigned int DataGlobal_B779C4;  // data: 0xB779C4
extern unsigned int DataGlobal_B779C8;  // data: 0xB779C8
extern unsigned int DataGlobal_B779CC;  // data: 0xB779CC
extern unsigned int DataGlobal_B779D4;  // data: 0xB779D4
extern unsigned int DataGlobal_B779DC;  // data: 0xB779DC
extern unsigned int DataGlobal_B779F0;  // data: 0xB779F0
extern unsigned int DataGlobal_B779F8;  // data: 0xB779F8
extern unsigned int DataGlobal_B779FC;  // data: 0xB779FC
extern unsigned int DataGlobal_B77A00;  // data: 0xB77A00
extern unsigned int DataGlobal_B77A8C;  // data: 0xB77A8C
extern unsigned int DataGlobal_B77CD0;  // data: 0xB77CD0
extern unsigned int DataGlobal_B77CE0;  // data: 0xB77CE0
extern unsigned int DataGlobal_B77D6C;  // data: 0xB77D6C
extern unsigned int DataGlobal_B77D74;  // data: 0xB77D74
extern unsigned int DataGlobal_B77D80;  // data: 0xB77D80
extern unsigned int DataGlobal_B77D84;  // data: 0xB77D84
extern unsigned int DataGlobal_B77D88;  // data: 0xB77D88
extern unsigned int DataGlobal_B77D8C;  // data: 0xB77D8C
extern unsigned int DataGlobal_B77D90;  // data: 0xB77D90
extern unsigned int DataGlobal_B77D98;  // data: 0xB77D98
extern unsigned int DataGlobal_B77DA0;  // data: 0xB77DA0
extern unsigned int DataGlobal_B77DA4;  // data: 0xB77DA4
extern unsigned int DataGlobal_B77DB0;  // data: 0xB77DB0
extern unsigned int DataGlobal_B77DB8;  // data: 0xB77DB8
extern unsigned int DataGlobal_B77DBC;  // data: 0xB77DBC
extern unsigned int DataGlobal_B77DC4;  // data: 0xB77DC4
extern unsigned int DataGlobal_B77DCC;  // data: 0xB77DCC
extern unsigned int DataGlobal_B77DD4;  // data: 0xB77DD4
extern unsigned int DataGlobal_B77DDC;  // data: 0xB77DDC
extern unsigned int DataGlobal_B77DE0;  // data: 0xB77DE0
extern unsigned int DataGlobal_B77DE4;  // data: 0xB77DE4
extern unsigned int DataGlobal_B77DE8;  // data: 0xB77DE8
extern unsigned int DataGlobal_B77DF0;  // data: 0xB77DF0
extern unsigned int DataGlobal_B77DF4;  // data: 0xB77DF4
extern unsigned int DataGlobal_B77DF8;  // data: 0xB77DF8
extern unsigned int DataGlobal_B77E18;  // data: 0xB77E18
extern unsigned int DataGlobal_B77E1C;  // data: 0xB77E1C
extern unsigned int DataGlobal_B77E20;  // data: 0xB77E20
extern unsigned int DataGlobal_B77E48;  // data: 0xB77E48
extern unsigned int DataGlobal_B77E4C;  // data: 0xB77E4C
extern unsigned int DataGlobal_B77E50;  // data: 0xB77E50
extern unsigned int DataGlobal_B77E54;  // data: 0xB77E54
extern unsigned int DataGlobal_B77E58;  // data: 0xB77E58
extern unsigned int DataGlobal_B77E5C;  // data: 0xB77E5C
extern unsigned int DataGlobal_B77E60;  // data: 0xB77E60
extern unsigned int DataGlobal_B77E64;  // data: 0xB77E64
extern unsigned int DataGlobal_B77E6C;  // data: 0xB77E6C
extern unsigned int DataGlobal_B77E70;  // data: 0xB77E70
extern unsigned int DataGlobal_B77E8C;  // data: 0xB77E8C
extern unsigned int DataGlobal_B77E90;  // data: 0xB77E90
extern unsigned int DataGlobal_B77E98;  // data: 0xB77E98
extern unsigned int DataGlobal_B77EA4;  // data: 0xB77EA4
extern unsigned int DataGlobal_B77EA8;  // data: 0xB77EA8
extern unsigned int DataGlobal_B77EC0;  // data: 0xB77EC0
extern unsigned int DataGlobal_B77ED0;  // data: 0xB77ED0
extern unsigned int DataGlobal_B77ED4;  // data: 0xB77ED4
extern unsigned int DataGlobal_B77ED8;  // data: 0xB77ED8
extern unsigned int DataGlobal_B77EDC;  // data: 0xB77EDC
extern unsigned int DataGlobal_B77F08;  // data: 0xB77F08
extern unsigned int DataGlobal_B77F10;  // data: 0xB77F10
extern unsigned int DataGlobal_B77F14;  // data: 0xB77F14
extern unsigned int DataGlobal_B77F18;  // data: 0xB77F18
extern unsigned int DataGlobal_B77F1C;  // data: 0xB77F1C
extern unsigned int DataGlobal_B77F48;  // data: 0xB77F48
extern unsigned int DataGlobal_B77F4C;  // data: 0xB77F4C
extern unsigned int DataGlobal_B77F50;  // data: 0xB77F50
extern unsigned int DataGlobal_B77F54;  // data: 0xB77F54
extern unsigned int DataGlobal_B77F60;  // data: 0xB77F60
extern unsigned int DataGlobal_B77F6C;  // data: 0xB77F6C
extern unsigned int DataGlobal_B77F7C;  // data: 0xB77F7C
extern unsigned int DataGlobal_B77F80;  // data: 0xB77F80
extern unsigned int DataGlobal_B77F90;  // data: 0xB77F90
extern unsigned int DataGlobal_B77F94;  // data: 0xB77F94
extern unsigned int DataGlobal_B77F98;  // data: 0xB77F98
extern unsigned int DataGlobal_B77FA0;  // data: 0xB77FA0
extern unsigned int DataGlobal_B77FA4;  // data: 0xB77FA4
extern unsigned int DataGlobal_B77FA8;  // data: 0xB77FA8
extern unsigned int DataGlobal_B77FAC;  // data: 0xB77FAC
extern unsigned int DataGlobal_B77FD8;  // data: 0xB77FD8
extern unsigned int DataGlobal_B77FDC;  // data: 0xB77FDC
extern unsigned int DataGlobal_B77FE0;  // data: 0xB77FE0
extern unsigned int DataGlobal_B78000;  // data: 0xB78000
extern unsigned int DataGlobal_B78004;  // data: 0xB78004
extern unsigned int DataGlobal_B78008;  // data: 0xB78008
extern unsigned int DataGlobal_B7800C;  // data: 0xB7800C
extern unsigned int DataGlobal_B78018;  // data: 0xB78018
extern unsigned int DataGlobal_B78028;  // data: 0xB78028
extern unsigned int DataGlobal_B7802C;  // data: 0xB7802C
extern unsigned int DataGlobal_B78030;  // data: 0xB78030
extern unsigned int DataGlobal_B78034;  // data: 0xB78034
extern unsigned int DataGlobal_B78058;  // data: 0xB78058
extern unsigned int DataGlobal_B7805C;  // data: 0xB7805C
extern unsigned int DataGlobal_B78060;  // data: 0xB78060
extern unsigned int DataGlobal_B78080;  // data: 0xB78080
extern unsigned int DataGlobal_B78084;  // data: 0xB78084
extern unsigned int DataGlobal_B78088;  // data: 0xB78088
extern unsigned int DataGlobal_B7808C;  // data: 0xB7808C
extern unsigned int DataGlobal_B78098;  // data: 0xB78098
extern unsigned int DataGlobal_B780A0;  // data: 0xB780A0
extern unsigned int DataGlobal_B780B0;  // data: 0xB780B0
extern unsigned int DataGlobal_B780B4;  // data: 0xB780B4
extern unsigned int DataGlobal_B780B8;  // data: 0xB780B8
extern unsigned int DataGlobal_B780BC;  // data: 0xB780BC
extern unsigned int DataGlobal_B780E0;  // data: 0xB780E0
extern unsigned int DataGlobal_B780E4;  // data: 0xB780E4
extern unsigned int DataGlobal_B780E8;  // data: 0xB780E8
extern unsigned int DataGlobal_B78108;  // data: 0xB78108
extern unsigned int DataGlobal_B7810C;  // data: 0xB7810C
extern unsigned int DataGlobal_B78110;  // data: 0xB78110
extern unsigned int DataGlobal_B78114;  // data: 0xB78114
extern unsigned int DataGlobal_B78120;  // data: 0xB78120
extern unsigned int DataGlobal_B78128;  // data: 0xB78128
extern unsigned int DataGlobal_B7812C;  // data: 0xB7812C
extern unsigned int DataGlobal_B78130;  // data: 0xB78130
extern unsigned int DataGlobal_B78134;  // data: 0xB78134
extern unsigned int DataGlobal_B78138;  // data: 0xB78138
extern unsigned int DataGlobal_B7813C;  // data: 0xB7813C
extern unsigned int DataGlobal_B78140;  // data: 0xB78140
extern unsigned int DataGlobal_B78148;  // data: 0xB78148
extern unsigned int DataGlobal_B7814C;  // data: 0xB7814C
extern unsigned int DataGlobal_B78150;  // data: 0xB78150
extern unsigned int DataGlobal_B78154;  // data: 0xB78154
extern unsigned int DataGlobal_B78158;  // data: 0xB78158
extern unsigned int DataGlobal_B78164;  // data: 0xB78164
extern unsigned int DataGlobal_B7816C;  // data: 0xB7816C
extern unsigned int DataGlobal_B78178;  // data: 0xB78178
extern unsigned int DataGlobal_B7817C;  // data: 0xB7817C
extern unsigned int DataGlobal_B78180;  // data: 0xB78180
extern unsigned int DataGlobal_B78184;  // data: 0xB78184
extern unsigned int DataGlobal_B78188;  // data: 0xB78188
extern unsigned int DataGlobal_B7818C;  // data: 0xB7818C
extern unsigned int DataGlobal_B78190;  // data: 0xB78190
extern unsigned int DataGlobal_B78194;  // data: 0xB78194
extern unsigned int DataGlobal_B781A0;  // data: 0xB781A0
extern unsigned int DataGlobal_B78608;  // data: 0xB78608
extern unsigned int DataGlobal_B7860C;  // data: 0xB7860C
extern unsigned long long DataGlobal_816320;  // data: 0x816320
extern unsigned long long DataGlobal_81C9B8;  // data: 0x81C9B8
extern unsigned long long DataGlobal_81C9E0;  // data: 0x81C9E0
extern unsigned long long DataGlobal_81CA00;  // data: 0x81CA00
extern unsigned long long DataGlobal_81CA08;  // data: 0x81CA08
extern unsigned long long DataGlobal_81CA30;  // data: 0x81CA30
extern unsigned long long DataGlobal_81CA58;  // data: 0x81CA58
extern unsigned long long DataGlobal_81CA78;  // data: 0x81CA78
extern unsigned long long DataGlobal_81CA80;  // data: 0x81CA80
extern unsigned long long DataGlobal_81CAA8;  // data: 0x81CAA8
extern unsigned long long DataGlobal_81CAC8;  // data: 0x81CAC8
extern unsigned long long DataGlobal_81CAD0;  // data: 0x81CAD0
extern unsigned long long DataGlobal_81CB18;  // data: 0x81CB18
extern unsigned long long DataGlobal_81CB68;  // data: 0x81CB68
extern unsigned long long DataGlobal_81CBB8;  // data: 0x81CBB8
extern unsigned long long DataGlobal_81CC08;  // data: 0x81CC08
extern unsigned long long DataGlobal_81CC18;  // data: 0x81CC18
extern unsigned long long DataGlobal_89DE34;  // data: 0x89DE34
extern unsigned long long DataGlobal_A9FA34;  // data: 0xA9FA34
extern unsigned long long DataGlobal_B730A0;  // data: 0xB730A0
extern unsigned short DataGlobal_82AA04;  // data: 0x82AA04
extern unsigned short DataGlobal_82AA24;  // data: 0x82AA24
extern unsigned short DataGlobal_82E178;  // data: 0x82E178
extern unsigned short DataGlobal_89C278;  // data: 0x89C278
extern unsigned short DataGlobal_A80221;  // data: 0xA80221
extern unsigned short DataGlobal_A83CD0;  // data: 0xA83CD0
extern unsigned short DataGlobal_A83CD2;  // data: 0xA83CD2
extern unsigned short DataGlobal_A83CDA;  // data: 0xA83CDA
extern unsigned short DataGlobal_ABC630;  // data: 0xABC630
extern unsigned short DataGlobal_ABC632;  // data: 0xABC632
extern unsigned short DataGlobal_ABC6B0;  // data: 0xABC6B0
extern unsigned short DataGlobal_ABC6B2;  // data: 0xABC6B2
extern unsigned short DataGlobal_ABC7B8;  // data: 0xABC7B8
extern unsigned short DataGlobal_ABC7BA;  // data: 0xABC7BA
extern unsigned short DataGlobal_ABC8D8;  // data: 0xABC8D8
extern unsigned short DataGlobal_ABC8DA;  // data: 0xABC8DA
extern unsigned short DataGlobal_ABC958;  // data: 0xABC958
extern unsigned short DataGlobal_ABC95A;  // data: 0xABC95A
extern unsigned short DataGlobal_ABC9E0;  // data: 0xABC9E0
extern unsigned short DataGlobal_ABC9E2;  // data: 0xABC9E2
extern unsigned short DataGlobal_ABCAB0;  // data: 0xABCAB0
extern unsigned short DataGlobal_ABCAB2;  // data: 0xABCAB2
extern unsigned short DataGlobal_ABCB30;  // data: 0xABCB30
extern unsigned short DataGlobal_ABCB32;  // data: 0xABCB32
extern unsigned short DataGlobal_ABCBD8;  // data: 0xABCBD8
extern unsigned short DataGlobal_ABCBDA;  // data: 0xABCBDA
extern unsigned short DataGlobal_ABCC58;  // data: 0xABCC58
extern unsigned short DataGlobal_ABCC5A;  // data: 0xABCC5A
extern unsigned short DataGlobal_ABCD78;  // data: 0xABCD78
extern unsigned short DataGlobal_ABCD7A;  // data: 0xABCD7A
extern unsigned short DataGlobal_ABDB64;  // data: 0xABDB64
extern unsigned short DataGlobal_ABDB66;  // data: 0xABDB66
extern unsigned short DataGlobal_ABDEA8;  // data: 0xABDEA8
extern unsigned short DataGlobal_ABDEAA;  // data: 0xABDEAA
extern unsigned short DataGlobal_ABDF28;  // data: 0xABDF28
extern unsigned short DataGlobal_ABDF2A;  // data: 0xABDF2A
extern unsigned short DataGlobal_ABE050;  // data: 0xABE050
extern unsigned short DataGlobal_ABED70;  // data: 0xABED70
extern unsigned short DataGlobal_ABED72;  // data: 0xABED72
extern unsigned short DataGlobal_ABEDF0;  // data: 0xABEDF0
extern unsigned short DataGlobal_ABEDF2;  // data: 0xABEDF2
extern unsigned short DataGlobal_B04AF0;  // data: 0xB04AF0
extern unsigned short DataGlobal_B04AF2;  // data: 0xB04AF2
extern unsigned short DataGlobal_B04B70;  // data: 0xB04B70
extern unsigned short DataGlobal_B04B72;  // data: 0xB04B72
extern unsigned short DataGlobal_B04CC0;  // data: 0xB04CC0
extern unsigned short DataGlobal_B04CC2;  // data: 0xB04CC2
extern unsigned short DataGlobal_B04D78;  // data: 0xB04D78
extern unsigned short DataGlobal_B04D7A;  // data: 0xB04D7A
extern unsigned short DataGlobal_B04E18;  // data: 0xB04E18
extern unsigned short DataGlobal_B04E1A;  // data: 0xB04E1A
extern unsigned short DataGlobal_B04E98;  // data: 0xB04E98
extern unsigned short DataGlobal_B04E9A;  // data: 0xB04E9A
extern unsigned short DataGlobal_B05350;  // data: 0xB05350
extern unsigned short DataGlobal_B05352;  // data: 0xB05352
extern unsigned short DataGlobal_B053D8;  // data: 0xB053D8
extern unsigned short DataGlobal_B053DA;  // data: 0xB053DA
extern unsigned short DataGlobal_B43EF0;  // data: 0xB43EF0
extern unsigned short DataGlobal_B43EF2;  // data: 0xB43EF2
extern unsigned short DataGlobal_B45B28;  // data: 0xB45B28
extern unsigned short DataGlobal_B45B2A;  // data: 0xB45B2A
extern unsigned short DataGlobal_B45BC8;  // data: 0xB45BC8
extern unsigned short DataGlobal_B45BCA;  // data: 0xB45BCA
extern unsigned short DataGlobal_B725E8;  // data: 0xB725E8
extern unsigned short DataGlobal_B725EA;  // data: 0xB725EA
extern unsigned short DataGlobal_B72688;  // data: 0xB72688
extern unsigned short DataGlobal_B7268A;  // data: 0xB7268A
extern unsigned short DataGlobal_B72708;  // data: 0xB72708
extern unsigned short DataGlobal_B7270A;  // data: 0xB7270A
extern unsigned short DataGlobal_B727A8;  // data: 0xB727A8
extern unsigned short DataGlobal_B727AA;  // data: 0xB727AA
extern unsigned short DataGlobal_B72828;  // data: 0xB72828
extern unsigned short DataGlobal_B7282A;  // data: 0xB7282A
extern unsigned short DataGlobal_B728A8;  // data: 0xB728A8
extern unsigned short DataGlobal_B728AA;  // data: 0xB728AA
extern unsigned short DataGlobal_B72928;  // data: 0xB72928
extern unsigned short DataGlobal_B7292A;  // data: 0xB7292A
extern unsigned short DataGlobal_B729A8;  // data: 0xB729A8
extern unsigned short DataGlobal_B729AA;  // data: 0xB729AA
extern unsigned short DataGlobal_B72A28;  // data: 0xB72A28
extern unsigned short DataGlobal_B72A2A;  // data: 0xB72A2A
extern unsigned short DataGlobal_B72AA8;  // data: 0xB72AA8
extern unsigned short DataGlobal_B72AAA;  // data: 0xB72AAA
extern unsigned short DataGlobal_B72B28;  // data: 0xB72B28
extern unsigned short DataGlobal_B72B2A;  // data: 0xB72B2A
extern unsigned short DataGlobal_B72BA8;  // data: 0xB72BA8
extern unsigned short DataGlobal_B72BAA;  // data: 0xB72BAA
extern unsigned short DataGlobal_B72C28;  // data: 0xB72C28
extern unsigned short DataGlobal_B72C2A;  // data: 0xB72C2A
extern unsigned short DataGlobal_B72CA8;  // data: 0xB72CA8
extern unsigned short DataGlobal_B72CAA;  // data: 0xB72CAA
extern unsigned short DataGlobal_B730C8;  // data: 0xB730C8
extern unsigned short DataGlobal_B730CA;  // data: 0xB730CA
extern unsigned short DataGlobal_B730EC;  // data: 0xB730EC
extern unsigned short DataGlobal_B730EE;  // data: 0xB730EE
extern unsigned short DataGlobal_B73518;  // data: 0xB73518
extern unsigned short DataGlobal_B75F50;  // data: 0xB75F50
extern unsigned short DataGlobal_B75F52;  // data: 0xB75F52
extern unsigned short DataGlobal_B77AD0;  // data: 0xB77AD0
extern unsigned short DataGlobal_B77EE0;  // data: 0xB77EE0
extern unsigned short DataGlobal_B77EE2;  // data: 0xB77EE2
extern unsigned short DataGlobal_B77FB8;  // data: 0xB77FB8
extern unsigned short DataGlobal_B77FBA;  // data: 0xB77FBA
extern unsigned short DataGlobal_B78038;  // data: 0xB78038
extern unsigned short DataGlobal_B7803A;  // data: 0xB7803A
extern unsigned short DataGlobal_B780C0;  // data: 0xB780C0
extern unsigned short DataGlobal_B780C2;  // data: 0xB780C2
extern void* DataGlobal_7E1668;  // data: 0x7E1668
extern void* DataGlobal_7E1B60;  // data: 0x7E1B60
extern void* DataGlobal_7E1BC6;  // data: 0x7E1BC6
extern void* DataGlobal_7E2A18;  // data: 0x7E2A18
extern void* DataGlobal_7E3238;  // data: 0x7E3238
extern void* DataGlobal_7E3328;  // data: 0x7E3328
extern void* DataGlobal_7E36D4;  // data: 0x7E36D4
extern void* DataGlobal_7E3A30;  // data: 0x7E3A30
extern void* DataGlobal_7E4678;  // data: 0x7E4678
extern void* DataGlobal_7E4C50;  // data: 0x7E4C50
extern void* DataGlobal_7E4D74;  // data: 0x7E4D74
extern void* DataGlobal_7E5210;  // data: 0x7E5210
extern void* DataGlobal_7E523C;  // data: 0x7E523C
extern void* DataGlobal_7E5288;  // data: 0x7E5288
extern void* DataGlobal_7E6060;  // data: 0x7E6060
extern void* DataGlobal_7E7E8C;  // data: 0x7E7E8C
extern void* DataGlobal_7E8500;  // data: 0x7E8500
extern void* DataGlobal_7E8C28;  // data: 0x7E8C28
extern void* DataGlobal_7EA6FC;  // data: 0x7EA6FC
extern void* DataGlobal_7EA7B4;  // data: 0x7EA7B4
extern void* DataGlobal_7EAEF8;  // data: 0x7EAEF8
extern void* DataGlobal_7EB02C;  // data: 0x7EB02C
extern void* DataGlobal_7ED858;  // data: 0x7ED858
extern void* DataGlobal_7EEF44;  // data: 0x7EEF44
extern void* DataGlobal_7EFB70;  // data: 0x7EFB70
extern void* DataGlobal_7F0048;  // data: 0x7F0048
extern void* DataGlobal_7F004C;  // data: 0x7F004C
extern void* DataGlobal_7F0248;  // data: 0x7F0248
extern void* DataGlobal_7F0AAC;  // data: 0x7F0AAC
extern void* DataGlobal_7F0C80;  // data: 0x7F0C80
extern void* DataGlobal_7F0C88;  // data: 0x7F0C88
extern void* DataGlobal_7F0C98;  // data: 0x7F0C98
extern void* DataGlobal_7F0C9C;  // data: 0x7F0C9C
extern void* DataGlobal_7F0CA4;  // data: 0x7F0CA4
extern void* DataGlobal_7F0CAC;  // data: 0x7F0CAC
extern void* DataGlobal_7F0CB0;  // data: 0x7F0CB0
extern void* DataGlobal_7F0CBC;  // data: 0x7F0CBC
extern void* DataGlobal_7F0CC0;  // data: 0x7F0CC0
extern void* DataGlobal_7F0CC4;  // data: 0x7F0CC4
extern void* DataGlobal_7F0CC8;  // data: 0x7F0CC8
extern void* DataGlobal_7F0CCC;  // data: 0x7F0CCC
extern void* DataGlobal_7F0CD0;  // data: 0x7F0CD0
extern void* DataGlobal_7F0CD4;  // data: 0x7F0CD4
extern void* DataGlobal_7F0CDC;  // data: 0x7F0CDC
extern void* DataGlobal_7F11B4;  // data: 0x7F11B4
extern void* DataGlobal_7F2D68;  // data: 0x7F2D68
extern void* DataGlobal_7F429C;  // data: 0x7F429C
extern void* DataGlobal_7F43D0;  // data: 0x7F43D0
extern void* DataGlobal_7F4550;  // data: 0x7F4550
extern void* DataGlobal_7F4934;  // data: 0x7F4934
extern void* DataGlobal_7F5200;  // data: 0x7F5200
extern void* DataGlobal_7F58C8;  // data: 0x7F58C8
extern void* DataGlobal_7F58CC;  // data: 0x7F58CC
extern void* DataGlobal_7F58D0;  // data: 0x7F58D0
extern void* DataGlobal_7F5C38;  // data: 0x7F5C38
extern void* DataGlobal_7F663C;  // data: 0x7F663C
extern void* DataGlobal_7F6BC8;  // data: 0x7F6BC8
extern void* DataGlobal_7F6FA0;  // data: 0x7F6FA0
extern void* DataGlobal_7F7220;  // data: 0x7F7220
extern void* DataGlobal_7F72C8;  // data: 0x7F72C8
extern void* DataGlobal_7F7624;  // data: 0x7F7624
extern void* DataGlobal_7F7638;  // data: 0x7F7638
extern void* DataGlobal_7F7650;  // data: 0x7F7650
extern void* DataGlobal_7F766C;  // data: 0x7F766C
extern void* DataGlobal_7F7698;  // data: 0x7F7698
extern void* DataGlobal_7F9594;  // data: 0x7F9594
extern void* DataGlobal_7F978C;  // data: 0x7F978C
extern void* DataGlobal_7FA498;  // data: 0x7FA498
extern void* DataGlobal_815E98;  // data: 0x815E98
extern void* DataGlobal_815E9C;  // data: 0x815E9C
extern void* DataGlobal_8160C0;  // data: 0x8160C0
extern void* DataGlobal_816514;  // data: 0x816514
extern void* DataGlobal_816CAC;  // data: 0x816CAC
extern void* DataGlobal_816EE0;  // data: 0x816EE0
extern void* DataGlobal_817134;  // data: 0x817134
extern void* DataGlobal_817F98;  // data: 0x817F98
extern void* DataGlobal_818114;  // data: 0x818114
extern void* DataGlobal_818118;  // data: 0x818118
extern void* DataGlobal_819288;  // data: 0x819288
extern void* DataGlobal_8194A8;  // data: 0x8194A8
extern void* DataGlobal_81B7C8;  // data: 0x81B7C8
extern void* DataGlobal_81B7CC;  // data: 0x81B7CC
extern void* DataGlobal_81B9B0;  // data: 0x81B9B0
extern void* DataGlobal_81B9D8;  // data: 0x81B9D8
extern void* DataGlobal_81BA88;  // data: 0x81BA88
extern void* DataGlobal_81BAA0;  // data: 0x81BAA0
extern void* DataGlobal_81BAAC;  // data: 0x81BAAC
extern void* DataGlobal_81BABC;  // data: 0x81BABC
extern void* DataGlobal_81DA78;  // data: 0x81DA78
extern void* DataGlobal_81FBB4;  // data: 0x81FBB4
extern void* DataGlobal_820558;  // data: 0x820558
extern void* DataGlobal_820578;  // data: 0x820578
extern void* DataGlobal_820594;  // data: 0x820594
extern void* DataGlobal_8205A8;  // data: 0x8205A8
extern void* DataGlobal_8205BC;  // data: 0x8205BC
extern void* DataGlobal_82091C;  // data: 0x82091C
extern void* DataGlobal_822724;  // data: 0x822724
extern void* DataGlobal_82274C;  // data: 0x82274C
extern void* DataGlobal_822768;  // data: 0x822768
extern void* DataGlobal_822774;  // data: 0x822774
extern void* DataGlobal_823FD4;  // data: 0x823FD4
extern void* DataGlobal_8240B4;  // data: 0x8240B4
extern void* DataGlobal_825C6C;  // data: 0x825C6C
extern void* DataGlobal_8278C0;  // data: 0x8278C0
extern void* DataGlobal_8278F0;  // data: 0x8278F0
extern void* DataGlobal_827970;  // data: 0x827970
extern void* DataGlobal_828708;  // data: 0x828708
extern void* DataGlobal_828788;  // data: 0x828788
extern void* DataGlobal_82A18C;  // data: 0x82A18C
extern void* DataGlobal_82A1A0;  // data: 0x82A1A0
extern void* DataGlobal_82A1B4;  // data: 0x82A1B4
extern void* DataGlobal_82A1D0;  // data: 0x82A1D0
extern void* DataGlobal_82A1F4;  // data: 0x82A1F4
extern void* DataGlobal_82A210;  // data: 0x82A210
extern void* DataGlobal_82A224;  // data: 0x82A224
extern void* DataGlobal_82A248;  // data: 0x82A248
extern void* DataGlobal_82A254;  // data: 0x82A254
extern void* DataGlobal_82A260;  // data: 0x82A260
extern void* DataGlobal_82AF14;  // data: 0x82AF14
extern void* DataGlobal_82B034;  // data: 0x82B034
extern void* DataGlobal_82B038;  // data: 0x82B038
extern void* DataGlobal_82B048;  // data: 0x82B048
extern void* DataGlobal_82B058;  // data: 0x82B058
extern void* DataGlobal_82B060;  // data: 0x82B060
extern void* DataGlobal_82B070;  // data: 0x82B070
extern void* DataGlobal_82B134;  // data: 0x82B134
extern void* DataGlobal_82B138;  // data: 0x82B138
extern void* DataGlobal_82B180;  // data: 0x82B180
extern void* DataGlobal_82B1B0;  // data: 0x82B1B0
extern void* DataGlobal_82B240;  // data: 0x82B240
extern void* DataGlobal_82B5B0;  // data: 0x82B5B0
extern void* DataGlobal_84A940;  // data: 0x84A940
extern void* DataGlobal_87BEB8;  // data: 0x87BEB8
extern void* DataGlobal_87BED8;  // data: 0x87BED8
extern void* DataGlobal_87BF50;  // data: 0x87BF50
extern void* DataGlobal_87C1E0;  // data: 0x87C1E0
extern void* DataGlobal_87C1E8;  // data: 0x87C1E8
extern void* DataGlobal_87C2A0;  // data: 0x87C2A0
extern void* DataGlobal_87C2AC;  // data: 0x87C2AC
extern void* DataGlobal_87C2CC;  // data: 0x87C2CC
extern void* DataGlobal_87C2DC;  // data: 0x87C2DC
extern void* DataGlobal_A8DB34;  // data: 0xA8DB34
extern void* DataGlobal_A8DB4C;  // data: 0xA8DB4C
extern void* DataGlobal_B78828;  // data: 0xB78828
extern void* vt__com_error;  // data: 0x7FA498
extern void* vt_AbstractClass_2;  // data: 0x7E1F2C
extern void* vt_AbstractClass_3;  // data: 0x7E1F34
extern void* vt_AbstractClass_4;  // data: 0x7E1F50
extern void* vt_AbstractTypeClass_2;  // data: 0x7E1FDC
extern void* vt_AbstractTypeClass_3;  // data: 0x7E1FE4
extern void* vt_AbstractTypeClass_4;  // data: 0x7E2000
extern void* vt_AircraftClass_2;  // data: 0x7E2278
extern void* vt_AircraftClass_3;  // data: 0x7E2280
extern void* vt_AircraftClass_4;  // data: 0x7E2288
extern void* vt_AircraftClass_5;  // data: 0x7E22A4
extern void* vt_AircraftTypeClass_2;  // data: 0x7E2844
extern void* vt_AircraftTypeClass_3;  // data: 0x7E284C
extern void* vt_AircraftTypeClass_4;  // data: 0x7E2868
extern void* vt_AirstrikeClass_2;  // data: 0x7E2984
extern void* vt_AirstrikeClass_3;  // data: 0x7E298C
extern void* vt_AirstrikeClass_4;  // data: 0x7E29A8
extern void* vt_AITriggerTypeClass_2;  // data: 0x7E2A2C
extern void* vt_AITriggerTypeClass_3;  // data: 0x7E2A34
extern void* vt_AITriggerTypeClass_4;  // data: 0x7E2A50
extern void* vt_AlphaShapeClass_2;  // data: 0x7E3280
extern void* vt_AlphaShapeClass_3;  // data: 0x7E3288
extern void* vt_AlphaShapeClass_4;  // data: 0x7E32A4
extern void* vt_AnimClass_2;  // data: 0x7E3328
extern void* vt_AnimClass_3;  // data: 0x7E3338
extern void* vt_AnimClass_4;  // data: 0x7E3354
extern void* vt_AnimTypeClass_2;  // data: 0x7E35E4
extern void* vt_AnimTypeClass_3;  // data: 0x7E35EC
extern void* vt_AnimTypeClass_4;  // data: 0x7E3608
extern void* vt_ApplicationClass;  // data: 0x7E36D4
extern void* vt_bad_cast;  // data: 0x7F9660
extern void* vt_Base64Pipe;  // data: 0x7EB774
extern void* vt_Base64Straw;  // data: 0x7EB764
extern void* vt_BlitPlainXlat_unsigned_char;  // data: 0x7e5b70
extern void* vt_BlitPlainXlat_unsigned_short;  // data: 0x7e5a38
extern void* vt_BlitPlainXlatAlpha_unsigned_short;  // data: 0x7e57f8
extern void* vt_BlitPlainXlatZRead_unsigned_short;  // data: 0x7e5990
extern void* vt_BlitPlainXlatZReadWrite_unsigned_short;  // data: 0x7e58a0
extern void* vt_BlitTransDarken_unsigned_short;  // data: 0x7e59f0
extern void* vt_BlitTransDarkenZRead_unsigned_short;  // data: 0x7e5948
extern void* vt_BlitTransDarkenZReadWrite_unsigned_short;  // data: 0x7e5858
extern void* vt_BlitTransLucent25_unsigned_short;  // data: 0x7e59a8
extern void* vt_BlitTransLucent25AlphaZRead_unsigned_short;  // data: 0x7e5690
extern void* vt_BlitTransLucent25AlphaZReadWarp_unsigned_short;  // data: 0x7e5648
extern void* vt_BlitTransLucent25ZRead_unsigned_short;  // data: 0x7e5900
extern void* vt_BlitTransLucent25ZReadWarp_unsigned_short;  // data: 0x7e58b8
extern void* vt_BlitTransLucent25ZReadWrite_unsigned_short;  // data: 0x7e5810
extern void* vt_BlitTransLucent50_unsigned_short;  // data: 0x7e59c0
extern void* vt_BlitTransLucent50Alpha_unsigned_short;  // data: 0x7e5798
extern void* vt_BlitTransLucent50AlphaZRead_unsigned_short;  // data: 0x7e56a8
extern void* vt_BlitTransLucent50AlphaZReadWarp_unsigned_short;  // data: 0x7e5660
extern void* vt_BlitTransLucent50AlphaZReadWrite_unsigned_short;  // data: 0x7e55e8
extern void* vt_BlitTranslucent50NonzeroAlpha_unsigned_short;  // data: 0x7e5720
extern void* vt_BlitTranslucent50ZeroAlpha_unsigned_short;  // data: 0x7e5708
extern void* vt_BlitTransLucent50ZRead_unsigned_short;  // data: 0x7e5918
extern void* vt_BlitTransLucent50ZReadWarp_unsigned_short;  // data: 0x7e58d0
extern void* vt_BlitTransLucent50ZReadWrite_unsigned_short;  // data: 0x7e5828
extern void* vt_BlitTransLucent75_unsigned_short;  // data: 0x7e59d8
extern void* vt_BlitTransLucent75Alpha_unsigned_short;  // data: 0x7e57b0
extern void* vt_BlitTransLucent75AlphaZRead_unsigned_short;  // data: 0x7e56c0
extern void* vt_BlitTransLucent75AlphaZReadWarp_unsigned_short;  // data: 0x7e5678
extern void* vt_BlitTransLucent75AlphaZReadWrite_unsigned_short;  // data: 0x7e5600
extern void* vt_BlitTransLucent75ZRead_unsigned_short;  // data: 0x7e5930
extern void* vt_BlitTransLucent75ZReadWarp_unsigned_short;  // data: 0x7e58e8
extern void* vt_BlitTransLucent75ZReadWrite_unsigned_short;  // data: 0x7e5840
extern void* vt_BlitTranslucentWriteAlpha_unsigned_short;  // data: 0x7e5738
extern void* vt_BlitTransRemapDest_unsigned_char;  // data: 0x7e5b28
extern void* vt_BlitTransRemapXlat_unsigned_char;  // data: 0x7e5b10
extern void* vt_BlitTransXlat_unsigned_char;  // data: 0x7e5b58
extern void* vt_BlitTransXlat_unsigned_short;  // data: 0x7e5a20
extern void* vt_BlitTransXlatAlphaZReadWrite_unsigned_short;  // data: 0x7e5630
extern void* vt_BlitTransXlatMultWriteAlpha_unsigned_short;  // data: 0x7e5750
extern void* vt_BlitTransXlatWriteAlpha_unsigned_short;  // data: 0x7e5768
extern void* vt_BlitTransXlatZRead_unsigned_short;  // data: 0x7e5978
extern void* vt_BlitTransXlatZReadWrite_unsigned_short;  // data: 0x7e5888
extern void* vt_BlitTransZRemapXlat_unsigned_char;  // data: 0x7e5b40
extern void* vt_BlitTransZRemapXlat_unsigned_short;  // data: 0x7e5a08
extern void* vt_BlitTransZRemapXlatAlpha_unsigned_short;  // data: 0x7e57c8
extern void* vt_BlitTransZRemapXlatAlphaZRead_unsigned_short;  // data: 0x7e56d8
extern void* vt_BlitTransZRemapXlatAlphaZReadWrite_unsigned_short;  // data: 0x7e5618
extern void* vt_BlitTransZRemapXlatZRead_unsigned_short;  // data: 0x7e5960
extern void* vt_BlitTransZRemapXlatZReadWrite_unsigned_short;  // data: 0x7e5870
extern void* vt_BombClass_2;  // data: 0x7E3CEC
extern void* vt_BombClass_3;  // data: 0x7E3CF4
extern void* vt_BombClass_4;  // data: 0x7E3D10
extern void* vt_BSurface;  // data: 0x7E2070
extern void* vt_BufferIOFileClass;  // data: 0x7E3A2C
extern void* vt_BuildingClass;  // data: 0x7E3E90
extern void* vt_BuildingClass_2;  // data: 0x7E3E98
extern void* vt_BuildingClass_3;  // data: 0x7E3EA0
extern void* vt_BuildingClass_4;  // data: 0x7E3EBC
extern void* vt_BuildingLightClass_2;  // data: 0x7E3AAC
extern void* vt_BuildingLightClass_3;  // data: 0x7E3AB4
extern void* vt_BuildingLightClass_4;  // data: 0x7E3AD0
extern void* vt_BuildingTypeClass_2;  // data: 0x7E454C
extern void* vt_BuildingTypeClass_3;  // data: 0x7E4554
extern void* vt_BuildingTypeClass_4;  // data: 0x7E4570
extern void* vt_BulletClass_2;  // data: 0x7E46C0
extern void* vt_BulletClass_3;  // data: 0x7E46C8
extern void* vt_BulletClass_4;  // data: 0x7E46E4
extern void* vt_BulletTypeClass_2;  // data: 0x7E4924
extern void* vt_BulletTypeClass_3;  // data: 0x7E492C
extern void* vt_BulletTypeClass_4;  // data: 0x7E4948
extern void* vt_CacheStraw;  // data: 0x7EB754
extern void* vt_CampaignClass_2;  // data: 0x7E4A04
extern void* vt_CampaignClass_3;  // data: 0x7E4A0C
extern void* vt_CampaignClass_4;  // data: 0x7E4A28
extern void* vt_CaptureManagerClass_2;  // data: 0x7E4B1C
extern void* vt_CaptureManagerClass_3;  // data: 0x7E4B24
extern void* vt_CaptureManagerClass_4;  // data: 0x7E4B40
extern void* vt_CChatEventSink;  // data: 0x7F77A4
extern void* vt_CCINIClass;  // data: 0x7E1AF4
extern void* vt_CComObject;  // data: 0x7F766C
extern void* vt_CD;  // data: 0x7E4C30
extern void* vt_CDFileClass;  // data: 0x7E1668
extern void* vt_CellClass;  // data: 0x7E4EEC
extern void* vt_CellClass_2;  // data: 0x7E4EC0
extern void* vt_CellClass_3;  // data: 0x7E4EC8
extern void* vt_CellClass_4;  // data: 0x7E4ED0
extern void* vt_CNetUtilEventSink;  // data: 0x7F7778
extern void* vt_ControlClass;  // data: 0x7E528C
extern void* vt_CounterClass;  // data: 0x7E5C54
extern void* vt_CStreamClass_2;  // data: 0x7E5DAC
extern void* vt_Dial8Class;  // data: 0x7E5E3C
extern void* vt_DiskLaserClass_2;  // data: 0x7E5F94
extern void* vt_DiskLaserClass_3;  // data: 0x7E5F9C
extern void* vt_DiskLaserClass_4;  // data: 0x7E5FB8
extern void* vt_DisplayClass;  // data: 0x7E6114
extern void* vt_DriveLocomotionClass_2;  // data: 0x7E7E8C
extern void* vt_DriveLocomotionClass_3;  // data: 0x7E7F7C
extern void* vt_DropPodLocomotionClass_2;  // data: 0x7E8278
extern void* vt_DropPodLocomotionClass_3;  // data: 0x7E8344
extern void* vt_DSurface;  // data: 0x7E85D4
extern void* vt_DynamicVectorClass;  // data: 0x7E3238
extern void* vt_DynamicVectorClass_10;  // data: 0x7EACA8
extern void* vt_DynamicVectorClass_11;  // data: 0x7ED30C
extern void* vt_DynamicVectorClass_12;  // data: 0x7ED858
extern void* vt_DynamicVectorClass_13;  // data: 0x7EEB14
extern void* vt_DynamicVectorClass_14;  // data: 0x7EEB34
extern void* vt_DynamicVectorClass_15;  // data: 0x7EEE34
extern void* vt_DynamicVectorClass_16;  // data: 0x7F0AAC
extern void* vt_DynamicVectorClass_17;  // data: 0x7F0E0C
extern void* vt_DynamicVectorClass_18;  // data: 0x7F11B4
extern void* vt_DynamicVectorClass_19;  // data: 0x7F429C
extern void* vt_DynamicVectorClass_20;  // data: 0x7F43D0
extern void* vt_DynamicVectorClass_21;  // data: 0x7F663C
extern void* vt_DynamicVectorClass_2;  // data: 0x7E4488
extern void* vt_DynamicVectorClass_3;  // data: 0x7E4678
extern void* vt_DynamicVectorClass_4;  // data: 0x7E5170
extern void* vt_DynamicVectorClass_5;  // data: 0x7E854C
extern void* vt_DynamicVectorClass_6;  // data: 0x7E856C
extern void* vt_DynamicVectorClass_7;  // data: 0x7E8C28
extern void* vt_DynamicVectorClass_8;  // data: 0x7EA7B4
extern void* vt_DynamicVectorClass_9;  // data: 0x7EAAC4
extern void* vt_DynamicVectorClass_AngerStruct;  // data: 0x7ea924
extern void* vt_DynamicVectorClass_DynamicVectorClass_char;  // data: 0x7e5be4
extern void* vt_DynamicVectorClass_HouseClass_StartingTechnoStruct;  // data: 0x7ea944
extern void* vt_DynamicVectorClass_MapStage;  // data: 0x7eea94
extern void* vt_DynamicVectorClass_MSAnimEntry;  // data: 0x7eea74
extern void* vt_DynamicVectorClass_MSSfxEntry;  // data: 0x7eea54
extern void* vt_DynamicVectorClass_PlanningBranchClass;  // data: 0x7efec4
extern void* vt_DynamicVectorClass_PlanningMemberClass;  // data: 0x7efee4
extern void* vt_DynamicVectorClass_Point2D;  // data: 0x7eeb54
extern void* vt_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory;  // data: 0x7f7164
extern void* vt_DynamicVectorClass_ScoutStruct;  // data: 0x7ea904
extern void* vt_DynamicVectorClass_SubTitle;  // data: 0x7f3f6c
extern void* vt_DynamicVectorClass_SubzoneTrackingStruct;  // data: 0x7ed4a0
extern void* vt_DynamicVectorClass_tConnInfoStruct;  // data: 0x7f78c4
extern void* vt_DynamicVectorClass_TeamTypeClass_const;  // data: 0x7eaae8
extern void* vt_DynamicVectorClass_WorldDominationTour_Map_AnimationPalette;  // data: 0x7f7144
extern void* vt_DynamicVectorClass_ZoneConnectionClass;  // data: 0x7ed4c0
extern void* vt_EMPulseClass_2;  // data: 0x7E8784
extern void* vt_EMPulseClass_3;  // data: 0x7E878C
extern void* vt_EMPulseClass_4;  // data: 0x7E87A8
extern void* vt_FactoryClass_2;  // data: 0x7E88AC
extern void* vt_FactoryClass_3;  // data: 0x7E88B4
extern void* vt_FactoryClass_4;  // data: 0x7E88D0
extern void* vt_FilePipe;  // data: 0x7E4DA0
extern void* vt_FlyLocomotionClass_2;  // data: 0x7E8AC0
extern void* vt_FoggedObjectClass_2;  // data: 0x7E8B14
extern void* vt_FoggedObjectClass_3;  // data: 0x7E8B1C
extern void* vt_FoggedObjectClass_4;  // data: 0x7E8B38
extern void* vt_FootClass_2;  // data: 0x7E8C70
extern void* vt_FootClass_3;  // data: 0x7E8C78
extern void* vt_FootClass_4;  // data: 0x7E8C94
extern void* vt_GScreenClass;  // data: 0x7EA6FC
extern void* vt_HouseClass;  // data: 0x7EA8A0
extern void* vt_HouseClass_2;  // data: 0x7EA7F4
extern void* vt_HouseClass_3;  // data: 0x7EA80C
extern void* vt_HouseClass_4;  // data: 0x7EA834
extern void* vt_HouseClass_5;  // data: 0x7EA874
extern void* vt_HouseClass_6;  // data: 0x7EA87C
extern void* vt_HouseClass_7;  // data: 0x7EA884
extern void* vt_HouseTypeClass_2;  // data: 0x7EAB34
extern void* vt_HouseTypeClass_3;  // data: 0x7EAB3C
extern void* vt_HouseTypeClass_4;  // data: 0x7EAB58
extern void* vt_HoverLocomotionClass_2;  // data: 0x7EADC8
extern void* vt_InfantryClass_2;  // data: 0x7EB02C
extern void* vt_InfantryClass_3;  // data: 0x7EB03C
extern void* vt_InfantryClass_4;  // data: 0x7EB058
extern void* vt_InfantryTypeClass_2;  // data: 0x7EB5EC
extern void* vt_InfantryTypeClass_3;  // data: 0x7EB5F4
extern void* vt_InfantryTypeClass_4;  // data: 0x7EB610
extern void* vt_IsometricTileClass_2;  // data: 0x7EC234
extern void* vt_IsometricTileClass_3;  // data: 0x7EC23C
extern void* vt_IsometricTileClass_4;  // data: 0x7EC258
extern void* vt_IsometricTileTypeClass_2;  // data: 0x7ECC24
extern void* vt_IsometricTileTypeClass_3;  // data: 0x7ECC2C
extern void* vt_IsometricTileTypeClass_4;  // data: 0x7ECC48
extern void* vt_JumpjetLocomotionClass_2;  // data: 0x7ECD68
extern void* vt_JumpjetLocomotionClass_3;  // data: 0x7ECE34
extern void* vt_LayerClass;  // data: 0x7E6060
extern void* vt_LightSourceClass_2;  // data: 0x7ED004
extern void* vt_LightSourceClass_3;  // data: 0x7ED00C
extern void* vt_LightSourceClass_4;  // data: 0x7ED028
extern void* vt_List_INIClass_INIEntry;  // data: 0x7eb744
extern void* vt_LoadProgressMgr;  // data: 0x7ECF64
extern void* vt_LocomotionClass_2;  // data: 0x7EAEC0
extern void* vt_LZOPipe;  // data: 0x7ED37C
extern void* vt_LZOStraw;  // data: 0x7ED394
extern void* vt_MapSeedClass;  // data: 0x7ED8E4
extern void* vt_MechLocomotionClass_2;  // data: 0x7EDC38
extern void* vt_MissionClass_2;  // data: 0x7EDC9C
extern void* vt_MissionClass_3;  // data: 0x7EDCA4
extern void* vt_MissionClass_4;  // data: 0x7EDCC0
extern void* vt_MouseClass_2;  // data: 0x7E1964
extern void* vt_MSBinkAnim;  // data: 0x7EE988
extern void* vt_MSFont;  // data: 0x7EEC64
extern void* vt_MSOverlayAnim;  // data: 0x7EE960
extern void* vt_MultiplayerBattleTeam;  // data: 0x7EE258
extern void* vt_MultiplayerObserverTeam;  // data: 0x7EE6C8
extern void* vt_MultiplayerTeam;  // data: 0x7EEEDC
extern void* vt_NeuronClass_2;  // data: 0x7E3DCC
extern void* vt_NeuronClass_3;  // data: 0x7E3DD4
extern void* vt_NeuronClass_4;  // data: 0x7E3DF0
extern void* vt_Node_INIClass_INISection;  // data: 0x7eb74c
extern void* vt_ObjectClass_2;  // data: 0x7EF03C
extern void* vt_ObjectClass_3;  // data: 0x7EF044
extern void* vt_ObjectClass_4;  // data: 0x7EF060
extern void* vt_ObjectTypeClass_2;  // data: 0x7EF2B4
extern void* vt_ObjectTypeClass_3;  // data: 0x7EF2BC
extern void* vt_ObjectTypeClass_4;  // data: 0x7EF2D8
extern void* vt_OverlayClass_2;  // data: 0x7EF3B0
extern void* vt_OverlayClass_3;  // data: 0x7EF3CC
extern void* vt_OverlayClass_4;  // data: 0x7EF3D4
extern void* vt_OverlayTypeClass_2;  // data: 0x7EF5DC
extern void* vt_OverlayTypeClass_3;  // data: 0x7EF5E4
extern void* vt_OverlayTypeClass_4;  // data: 0x7EF600
extern void* vt_ParasiteClass_2;  // data: 0x7EF86C
extern void* vt_ParasiteClass_3;  // data: 0x7EF874
extern void* vt_ParasiteClass_4;  // data: 0x7EF890
extern void* vt_ParticleClass_2;  // data: 0x7EF930
extern void* vt_ParticleClass_3;  // data: 0x7EF938
extern void* vt_ParticleClass_4;  // data: 0x7EF954
extern void* vt_ParticleSystemClass_2;  // data: 0x7EFB70
extern void* vt_ParticleSystemClass_3;  // data: 0x7EFB80
extern void* vt_ParticleSystemClass_4;  // data: 0x7EFB9C
extern void* vt_ParticleSystemTypeClass_2;  // data: 0x7F0084
extern void* vt_ParticleSystemTypeClass_3;  // data: 0x7F008C
extern void* vt_ParticleSystemTypeClass_4;  // data: 0x7F00A8
extern void* vt_ParticleTypeClass_2;  // data: 0x7F0164
extern void* vt_ParticleTypeClass_3;  // data: 0x7F016C
extern void* vt_ParticleTypeClass_4;  // data: 0x7F0188
extern void* vt_PKPipe;  // data: 0x7EFDAC
extern void* vt_PKStraw;  // data: 0x7EFDE0
extern void* vt_PlayerProfile;  // data: 0x7F74F4
extern void* vt_PowerClass;  // data: 0x7EFF54
extern void* vt_RadioClass_2;  // data: 0x7F04E4
extern void* vt_RadioClass_3;  // data: 0x7F04EC
extern void* vt_RadioClass_4;  // data: 0x7F0508
extern void* vt_RadSiteClass_2;  // data: 0x7F07EC
extern void* vt_RadSiteClass_3;  // data: 0x7F07F4
extern void* vt_RadSiteClass_4;  // data: 0x7F0810
extern void* vt_rc_ptr_base;  // data: 0x7F094C
extern void* vt_RLEBlitTransDarken_unsigned_short;  // data: 0x7e55a0
extern void* vt_RLEBlitTransDarkenZRead_unsigned_short;  // data: 0x7e5540
extern void* vt_RLEBlitTransDarkenZReadWrite_unsigned_short;  // data: 0x7e54b0
extern void* vt_RLEBlitTransLucent25_unsigned_short;  // data: 0x7e5570
extern void* vt_RLEBlitTransLucent25Alpha_unsigned_short;  // data: 0x7e5430
extern void* vt_RLEBlitTransLucent25AlphaZRead_unsigned_short;  // data: 0x7e53e0
extern void* vt_RLEBlitTransLucent25AlphaZReadWarp_unsigned_short;  // data: 0x7e53b0
extern void* vt_RLEBlitTransLucent25AlphaZReadWrite_unsigned_short;  // data: 0x7e5360
extern void* vt_RLEBlitTransLucent25ZRead_unsigned_short;  // data: 0x7e5510
extern void* vt_RLEBlitTransLucent25ZReadWarp_unsigned_short;  // data: 0x7e54e0
extern void* vt_RLEBlitTransLucent25ZReadWrite_unsigned_short;  // data: 0x7e5480
extern void* vt_RLEBlitTransLucent50_unsigned_short;  // data: 0x7e5580
extern void* vt_RLEBlitTransLucent50Alpha_unsigned_short;  // data: 0x7e5440
extern void* vt_RLEBlitTransLucent50AlphaZRead_unsigned_short;  // data: 0x7e53f0
extern void* vt_RLEBlitTransLucent50AlphaZReadWarp_unsigned_short;  // data: 0x7e53c0
extern void* vt_RLEBlitTransLucent50AlphaZReadWrite_unsigned_short;  // data: 0x7e5370
extern void* vt_RLEBlitTransLucent50ZRead_unsigned_short;  // data: 0x7e5520
extern void* vt_RLEBlitTransLucent50ZReadWarp_unsigned_short;  // data: 0x7e54f0
extern void* vt_RLEBlitTransLucent50ZReadWrite_unsigned_short;  // data: 0x7e5490
extern void* vt_RLEBlitTransLucent75_unsigned_short;  // data: 0x7e5590
extern void* vt_RLEBlitTransLucent75Alpha_unsigned_short;  // data: 0x7e5450
extern void* vt_RLEBlitTransLucent75AlphaZRead_unsigned_short;  // data: 0x7e5400
extern void* vt_RLEBlitTransLucent75AlphaZReadWarp_unsigned_short;  // data: 0x7e53d0
extern void* vt_RLEBlitTransLucent75AlphaZReadWrite_unsigned_short;  // data: 0x7e5380
extern void* vt_RLEBlitTransLucent75ZRead_unsigned_short;  // data: 0x7e5530
extern void* vt_RLEBlitTransLucent75ZReadWarp_unsigned_short;  // data: 0x7e5500
extern void* vt_RLEBlitTransLucent75ZReadWrite_unsigned_short;  // data: 0x7e54a0
extern void* vt_RLEBlitTransRemapDest_unsigned_char;  // data: 0x7e5ae0
extern void* vt_RLEBlitTransRemapDestZRead_unsigned_char;  // data: 0x7e5aa0
extern void* vt_RLEBlitTransRemapDestZReadWrite_unsigned_char;  // data: 0x7e5a60
extern void* vt_RLEBlitTransRemapXlat_unsigned_char;  // data: 0x7e5ad0
extern void* vt_RLEBlitTransRemapXlatZRead_unsigned_char;  // data: 0x7e5a90
extern void* vt_RLEBlitTransRemapXlatZReadWrite_unsigned_char;  // data: 0x7e5a50
extern void* vt_RLEBlitTransXlat_unsigned_char;  // data: 0x7e5b00
extern void* vt_RLEBlitTransXlat_unsigned_short;  // data: 0x7e55c0
extern void* vt_RLEBlitTransXlatAlpha_unsigned_short;  // data: 0x7e5470
extern void* vt_RLEBlitTransXlatAlphaZRead_unsigned_short;  // data: 0x7e5420
extern void* vt_RLEBlitTransXlatAlphaZReadWrite_unsigned_short;  // data: 0x7e53a0
extern void* vt_RLEBlitTransXlatZRead_unsigned_char;  // data: 0x7e5ac0
extern void* vt_RLEBlitTransXlatZRead_unsigned_short;  // data: 0x7e5560
extern void* vt_RLEBlitTransXlatZReadWrite_unsigned_char;  // data: 0x7e5a80
extern void* vt_RLEBlitTransXlatZReadWrite_unsigned_short;  // data: 0x7e54d0
extern void* vt_RLEBlitTransZRemapXlat_unsigned_char;  // data: 0x7e5af0
extern void* vt_RLEBlitTransZRemapXlat_unsigned_short;  // data: 0x7e55b0
extern void* vt_RLEBlitTransZRemapXlatAlphaZRead_unsigned_short;  // data: 0x7e5410
extern void* vt_RLEBlitTransZRemapXlatAlphaZReadWrite_unsigned_short;  // data: 0x7e5390
extern void* vt_RLEBlitTransZRemapXlatZRead_unsigned_char;  // data: 0x7e5ab0
extern void* vt_RLEBlitTransZRemapXlatZRead_unsigned_short;  // data: 0x7e5550
extern void* vt_RLEBlitTransZRemapXlatZReadWrite_unsigned_char;  // data: 0x7e5a70
extern void* vt_RLEBlitTransZRemapXlatZReadWrite_unsigned_short;  // data: 0x7e54c0
extern void* vt_RocketLocomotionClass_2;  // data: 0x7F0BE8
extern void* vt_ScoreTimeClass;  // data: 0x7F0EC8
extern void* vt_ScriptClass_2;  // data: 0x7F0F54
extern void* vt_ScriptClass_3;  // data: 0x7F0F5C
extern void* vt_ScriptClass_4;  // data: 0x7F0F78
extern void* vt_ScriptTypeClass_2;  // data: 0x7F0FE4
extern void* vt_ScriptTypeClass_3;  // data: 0x7F0FEC
extern void* vt_ScriptTypeClass_4;  // data: 0x7F1008
extern void* vt_ScrollClass;  // data: 0x7F1094
extern void* vt_ScrollClass_2;  // data: 0x7F108C
extern void* vt_ShipLocomotionClass_2;  // data: 0x7F2D68
extern void* vt_ShipLocomotionClass_3;  // data: 0x7F2E58
extern void* vt_SidebarClass;  // data: 0x7F3058
extern void* vt_SideClass_2;  // data: 0x7F2E9C
extern void* vt_SideClass_3;  // data: 0x7F2EA4
extern void* vt_SideClass_4;  // data: 0x7F2EC0
extern void* vt_SimpleDialogControl_OwnerDraw;  // data: 0x7EF738
extern void* vt_SimpleWonlineDialogControl;  // data: 0x7F7624
extern void* vt_SlaveManagerClass_2;  // data: 0x7F31A4
extern void* vt_SlaveManagerClass_3;  // data: 0x7F31AC
extern void* vt_SlaveManagerClass_4;  // data: 0x7F31C8
extern void* vt_SmudgeClass;  // data: 0x7F32FC
extern void* vt_SmudgeClass_2;  // data: 0x7F32D0
extern void* vt_SmudgeClass_3;  // data: 0x7F32D8
extern void* vt_SmudgeClass_4;  // data: 0x7F32F4
extern void* vt_SmudgeTypeClass_2;  // data: 0x7F3504
extern void* vt_SmudgeTypeClass_3;  // data: 0x7F350C
extern void* vt_SmudgeTypeClass_4;  // data: 0x7F3528
extern void* vt_SpawnManagerClass_2;  // data: 0x7F362C
extern void* vt_SpawnManagerClass_3;  // data: 0x7F3634
extern void* vt_SpawnManagerClass_4;  // data: 0x7F3650
extern void* vt_SuperClass_2;  // data: 0x7F3FC4
extern void* vt_SuperClass_3;  // data: 0x7F3FCC
extern void* vt_SuperClass_4;  // data: 0x7F3FE8
extern void* vt_SuperWeaponTypeClass_2;  // data: 0x7F406C
extern void* vt_SuperWeaponTypeClass_3;  // data: 0x7F4074
extern void* vt_SuperWeaponTypeClass_4;  // data: 0x7F4090
extern void* vt_Surface;  // data: 0x7E2198
extern void* vt_TabClass;  // data: 0x7EDFB4
extern void* vt_TabClass_2;  // data: 0x7EDFAC
extern void* vt_Tactical_2;  // data: 0x7F4324
extern void* vt_Tactical_3;  // data: 0x7F432C
extern void* vt_Tactical_4;  // data: 0x7F4348
extern void* vt_TActionClass_2;  // data: 0x7F4418
extern void* vt_TActionClass_3;  // data: 0x7F4420
extern void* vt_TActionClass_4;  // data: 0x7F443C
extern void* vt_TagClass_2;  // data: 0x7F44BC
extern void* vt_TagClass_3;  // data: 0x7F44C4
extern void* vt_TagClass_4;  // data: 0x7F44E0
extern void* vt_TagTypeClass_2;  // data: 0x7F45A0
extern void* vt_TagTypeClass_3;  // data: 0x7F45A8
extern void* vt_TagTypeClass_4;  // data: 0x7F45C4
extern void* vt_TaskForceClass_2;  // data: 0x7F465C
extern void* vt_TaskForceClass_3;  // data: 0x7F4664
extern void* vt_TaskForceClass_4;  // data: 0x7F4680
extern void* vt_TClassFactory;  // data: 0x7F3768
extern void* vt_TClassFactory_10;  // data: 0x7F3840
extern void* vt_TClassFactory_11;  // data: 0x7F3930
extern void* vt_TClassFactory_2;  // data: 0x7F3780
extern void* vt_TClassFactory_3;  // data: 0x7F3798
extern void* vt_TClassFactory_4;  // data: 0x7F37B0
extern void* vt_TClassFactory_5;  // data: 0x7F37C8
extern void* vt_TClassFactory_6;  // data: 0x7F37E0
extern void* vt_TClassFactory_7;  // data: 0x7F37F8
extern void* vt_TClassFactory_8;  // data: 0x7F3810
extern void* vt_TClassFactory_9;  // data: 0x7F3828
extern void* vt_TClassFactory_AircraftClass;  // data: 0x7f3be8
extern void* vt_TClassFactory_AircraftTypeClass;  // data: 0x7f3b28
extern void* vt_TClassFactory_AirstrikeClass;  // data: 0x7f3900
extern void* vt_TClassFactory_AITriggerTypeClass;  // data: 0x7f3e40
extern void* vt_TClassFactory_AlphaShapeClass;  // data: 0x7f3e88
extern void* vt_TClassFactory_AnimClass;  // data: 0x7f3c18
extern void* vt_TClassFactory_AnimTypeClass;  // data: 0x7f3c30
extern void* vt_TClassFactory_BombClass;  // data: 0x7f3990
extern void* vt_TClassFactory_BuildingClass;  // data: 0x7f3bd0
extern void* vt_TClassFactory_BuildingLightClass;  // data: 0x7f38b8
extern void* vt_TClassFactory_BuildingTypeClass;  // data: 0x7f3b10
extern void* vt_TClassFactory_BulletClass;  // data: 0x7f3d80
extern void* vt_TClassFactory_BulletTypeClass;  // data: 0x7f3b58
extern void* vt_TClassFactory_CampaignClass;  // data: 0x7f38a0
extern void* vt_TClassFactory_CaptureManagerClass;  // data: 0x7f3948
extern void* vt_TClassFactory_DiskLaserClass;  // data: 0x7f3960
extern void* vt_TClassFactory_DriveLocomotionClass;  // data: 0x7f3c78
extern void* vt_TClassFactory_DropPodLocomotionClass;  // data: 0x7f3d08
extern void* vt_TClassFactory_FactoryClass;  // data: 0x7f3d98
extern void* vt_TClassFactory_FlyLocomotionClass;  // data: 0x7f3d20
extern void* vt_TClassFactory_FoggedObjectClass;  // data: 0x7f3e70
extern void* vt_TClassFactory_HouseClass;  // data: 0x7f3c60
extern void* vt_TClassFactory_HouseTypeClass;  // data: 0x7f3c48
extern void* vt_TClassFactory_HoverLocomotionClass;  // data: 0x7f3ca8
extern void* vt_TClassFactory_InfantryClass;  // data: 0x7f3c00
extern void* vt_TClassFactory_InfantryTypeClass;  // data: 0x7f3b40
extern void* vt_TClassFactory_IsometricTileTypeClass;  // data: 0x7f3b70
extern void* vt_TClassFactory_JumpjetLocomotionClass;  // data: 0x7f3c90
extern void* vt_TClassFactory_MechLocomotionClass;  // data: 0x7f3d50
extern void* vt_TClassFactory_NeuronClass;  // data: 0x7f3e58
extern void* vt_TClassFactory_OverlayTypeClass;  // data: 0x7f3b88
extern void* vt_TClassFactory_ParasiteClass;  // data: 0x7f3978
extern void* vt_TClassFactory_ParticleClass;  // data: 0x7f3de0
extern void* vt_TClassFactory_ParticleSystemClass;  // data: 0x7f3e10
extern void* vt_TClassFactory_ParticleSystemTypeClass;  // data: 0x7f3e28
extern void* vt_TClassFactory_ParticleTypeClass;  // data: 0x7f3df8
extern void* vt_TClassFactory_RadSiteClass;  // data: 0x7f39a8
extern void* vt_TClassFactory_RocketLocomotionClass;  // data: 0x7f3cc0
extern void* vt_TClassFactory_ScriptClass;  // data: 0x7f3a50
extern void* vt_TClassFactory_ScriptTypeClass;  // data: 0x7f3a68
extern void* vt_TClassFactory_ShipLocomotionClass;  // data: 0x7f3d68
extern void* vt_TClassFactory_SideClass;  // data: 0x7f3858
extern void* vt_TClassFactory_SmudgeTypeClass;  // data: 0x7f3ba0
extern void* vt_TClassFactory_SpawnManagerClass;  // data: 0x7f3918
extern void* vt_TClassFactory_TActionClass;  // data: 0x7f3a08
extern void* vt_TClassFactory_TagClass;  // data: 0x7f3a80
extern void* vt_TClassFactory_TagTypeClass;  // data: 0x7f3a98
extern void* vt_TClassFactory_TaskForceClass;  // data: 0x7f3ae0
extern void* vt_TClassFactory_TeamClass;  // data: 0x7f3ab0
extern void* vt_TClassFactory_TeamTypeClass;  // data: 0x7f3ac8
extern void* vt_TClassFactory_TeleportLocomotionClass;  // data: 0x7f3d38
extern void* vt_TClassFactory_TemporalClass;  // data: 0x7f38e8
extern void* vt_TClassFactory_TEventClass;  // data: 0x7f39c0
extern void* vt_TClassFactory_TiberiumClass;  // data: 0x7f3870
extern void* vt_TClassFactory_TriggerClass;  // data: 0x7f3a20
extern void* vt_TClassFactory_TriggerTypeClass;  // data: 0x7f3a38
extern void* vt_TClassFactory_TubeClass;  // data: 0x7f3888
extern void* vt_TClassFactory_TunnelLocomotionClass;  // data: 0x7f3cd8
extern void* vt_TClassFactory_UnitClass;  // data: 0x7f3bb8
extern void* vt_TClassFactory_UnitTypeClass;  // data: 0x7f3af8
extern void* vt_TClassFactory_VoxelAnimClass;  // data: 0x7f39f0
extern void* vt_TClassFactory_VoxelAnimTypeClass;  // data: 0x7f39d8
extern void* vt_TClassFactory_WalkLocomotionClass;  // data: 0x7f3cf0
extern void* vt_TClassFactory_WarheadTypeClass;  // data: 0x7f3db0
extern void* vt_TClassFactory_WaypointPathClass;  // data: 0x7f38d0
extern void* vt_TClassFactory_WeaponTypeClass;  // data: 0x7f3dc8
extern void* vt_TeamClass_2;  // data: 0x7F470C
extern void* vt_TeamClass_3;  // data: 0x7F4714
extern void* vt_TeamClass_4;  // data: 0x7F4730
extern void* vt_TeamTypeClass_2;  // data: 0x7F47AC
extern void* vt_TeamTypeClass_3;  // data: 0x7F47B4
extern void* vt_TeamTypeClass_4;  // data: 0x7F47D0
extern void* vt_TechnoClass_2;  // data: 0x7F4934
extern void* vt_TechnoClass_3;  // data: 0x7F4944
extern void* vt_TechnoClass_4;  // data: 0x7F4960
extern void* vt_TechnoTypeClass_2;  // data: 0x7F4EB4
extern void* vt_TechnoTypeClass_3;  // data: 0x7F4EBC
extern void* vt_TechnoTypeClass_4;  // data: 0x7F4ED8
extern void* vt_TeleportLocomotionClass_2;  // data: 0x7F5000
extern void* vt_TeleportLocomotionClass_3;  // data: 0x7F50CC
extern void* vt_TemporalClass_2;  // data: 0x7F515C
extern void* vt_TemporalClass_3;  // data: 0x7F5164
extern void* vt_TemporalClass_4;  // data: 0x7F5180
extern void* vt_TerrainClass_2;  // data: 0x7F5200
extern void* vt_TerrainClass_3;  // data: 0x7F5224
extern void* vt_TerrainClass_4;  // data: 0x7F522C
extern void* vt_TerrainTypeClass_2;  // data: 0x7F5434
extern void* vt_TerrainTypeClass_3;  // data: 0x7F543C
extern void* vt_TerrainTypeClass_4;  // data: 0x7F5458
extern void* vt_TEventClass_2;  // data: 0x7F5554
extern void* vt_TEventClass_3;  // data: 0x7F555C
extern void* vt_TEventClass_4;  // data: 0x7F5578
extern void* vt_TextLabelClass;  // data: 0x7F5B44
extern void* vt_TiberiumClass_2;  // data: 0x7F5704
extern void* vt_TiberiumClass_3;  // data: 0x7F570C
extern void* vt_TiberiumClass_4;  // data: 0x7F5728
extern void* vt_TriggerClass_2;  // data: 0x7F5834
extern void* vt_TriggerClass_3;  // data: 0x7F583C
extern void* vt_TriggerClass_4;  // data: 0x7F5858
extern void* vt_TriggerTypeClass_2;  // data: 0x7F58E0
extern void* vt_TriggerTypeClass_3;  // data: 0x7F58E8
extern void* vt_TriggerTypeClass_4;  // data: 0x7F5904
extern void* vt_TubeClass_2;  // data: 0x7F598C
extern void* vt_TubeClass_3;  // data: 0x7F5994
extern void* vt_TubeClass_4;  // data: 0x7F59B0
extern void* vt_TunnelLocomotionClass_2;  // data: 0x7F5AF0
extern void* vt_type_info;  // data: 0x7F9594
extern void* vt_UnitClass;  // data: 0x7F5C70
extern void* vt_UnitClass_2;  // data: 0x7F5C44
extern void* vt_UnitClass_3;  // data: 0x7F5C4C
extern void* vt_UnitClass_4;  // data: 0x7F5C54
extern void* vt_UnitTypeClass_2;  // data: 0x7F61F4
extern void* vt_UnitTypeClass_3;  // data: 0x7F61FC
extern void* vt_UnitTypeClass_4;  // data: 0x7F6218
extern void* vt_ValueGameOption_unsigned_char;  // data: 0x7f7048
extern void* vt_VectorClass;  // data: 0x7E8500
extern void* vt_VectorClass_BaseNodeClass;  // data: 0x7e38f0
extern void* vt_VectorClass_DiscreteDistributionClass_BuildingTypeClass_DistributionObject_BuildingTypeClass;  // data: 0x7EAAA4
extern void* vt_VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct;  // data: 0x7ED5E0
extern void* vt_VectorClass_HashObject_unsigned_int_unsigned_int;  // data: 0x7ED5C0
extern void* vt_VectorClass_PhoneEntryClass;  // data: 0x7F1254
extern void* vt_VeinholeMonsterClass;  // data: 0x7F667C
extern void* vt_VeinholeMonsterClass_2;  // data: 0x7F6684
extern void* vt_VeinholeMonsterClass_3;  // data: 0x7F668C
extern void* vt_VeinholeMonsterClass_4;  // data: 0x7F66A8
extern void* vt_VoxelAnimClass_2;  // data: 0x7F62F4
extern void* vt_VoxelAnimClass_3;  // data: 0x7F62FC
extern void* vt_VoxelAnimClass_4;  // data: 0x7F6318
extern void* vt_VoxelAnimTypeClass_2;  // data: 0x7F6524
extern void* vt_VoxelAnimTypeClass_3;  // data: 0x7F652C
extern void* vt_VoxelAnimTypeClass_4;  // data: 0x7F6548
extern void* vt_WalkLocomotionClass_2;  // data: 0x7F69F8
extern void* vt_WalkLocomotionClass_3;  // data: 0x7F6AC4
extern void* vt_WarheadTypeClass_2;  // data: 0x7F6B0C
extern void* vt_WarheadTypeClass_3;  // data: 0x7F6B14
extern void* vt_WarheadTypeClass_4;  // data: 0x7F6B30
extern void* vt_WaveClass_2;  // data: 0x7F6BC8
extern void* vt_WaveClass_3;  // data: 0x7F6BD8
extern void* vt_WaveClass_4;  // data: 0x7F6BF4
extern void* vt_WaypointPathClass_2;  // data: 0x7F6E4C
extern void* vt_WaypointPathClass_3;  // data: 0x7F6E54
extern void* vt_WaypointPathClass_4;  // data: 0x7F6E70
extern void* vt_WDTTerritory;  // data: 0x7F7220
extern void* vt_WeaponTypeClass_2;  // data: 0x7F7394
extern void* vt_WeaponTypeClass_3;  // data: 0x7F739C
extern void* vt_WeaponTypeClass_4;  // data: 0x7F73B8
extern void* vt_WorldDominationTour_CampaignProperties;  // data: 0x7f7294
extern void* vt_WorldDominationTour_FlagGameOption;  // data: 0x7f709c
extern void* vt_WorldDominationTour_GameOption;  // data: 0x7f7060
extern void* vt_WorldDominationTour_Map;  // data: 0x7f7134
extern void* vt_WorldDominationTour_Selection;  // data: 0x7f72b4
extern void* vt_WWMouseClass;  // data: 0x7F7B2C
extern void* vt_XSurface;  // data: 0x7E2104
extern wchar_t DataGlobal_AC4D30[32904];  // data: 0xAC4D30


struct CellAttachedStub { void* vfptr; void Delete(int); };  // 0x47BB60/0x47BB8C receiver stub (G22 CellClass::DTOR)

struct MapSizeOptStub;  // 0x767800 arg chain stub (G22)

// G23 W0b global completion (auto-generated)
extern int DataGlobal_AFA284;  // data: 0xafa284
extern int DataGlobal_AFA28C;  // data: 0xafa28c
extern int DataGlobal_AFA418;  // data: 0xafa418

// G23 W0b global completion (auto-generated)
extern int DataGlobal_83F068;  // data: 0x83f068
extern int DataGlobal_83F078;  // data: 0x83f078
extern int DataGlobal_83F08C;  // data: 0x83f08c
extern int DataGlobal_83F09C;  // data: 0x83f09c
extern int DataGlobal_83F0A8;  // data: 0x83f0a8
extern int DataGlobal_83F0B8;  // data: 0x83f0b8
extern int DataGlobal_83F0C4;  // data: 0x83f0c4
extern int DataGlobal_83F0CC;  // data: 0x83f0cc
extern int DataGlobal_83F0D0;  // data: 0x83f0d0
extern int DataGlobal_83F0E8;  // data: 0x83f0e8
extern int DataGlobal_83F0F4;  // data: 0x83f0f4
extern int DataGlobal_83F100;  // data: 0x83f100
extern int DataGlobal_83F384;  // data: 0x83f384

// G23 W0b global completion (auto-generated)
extern int DataGlobal_A8ED7C;  // data: 0xa8ed7c

// G23 W0b global completion (auto-generated)
extern int DataGlobal_818A30;  // data: 0x818a30
extern int DataGlobal_87F8BC;  // data: 0x87f8bc
extern int DataGlobal_87F8C0;  // data: 0x87f8c0
extern int DataGlobal_87F8C4;  // data: 0x87f8c4
extern int DataGlobal_87F8C9;  // data: 0x87f8c9
extern int DataGlobal_87F8CC;  // data: 0x87f8cc
extern int DataGlobal_87F8D0;  // data: 0x87f8d0

// G23 W0b global completion (auto-generated)
extern int DataGlobal_844A2C;  // data: 0x844a2c
extern int DataGlobal_844A34;  // data: 0x844a34
extern int DataGlobal_844A3C;  // data: 0x844a3c
extern int DataGlobal_844A48;  // data: 0x844a48

// G23 W0b global completion (auto-generated)
extern int DataGlobal_82076C;  // data: 0x82076c
extern int DataGlobal_B78170;  // data: 0xb78170

// G23 W0b global completion (auto-generated)
extern int DataGlobal_839DA4;  // data: 0x839da4
extern int DataGlobal_839E80;  // data: 0x839e80
extern int DataGlobal_839EB4;  // data: 0x839eb4
extern int DataGlobal_83A0DC;  // data: 0x83a0dc
extern int DataGlobal_83A0F0;  // data: 0x83a0f0
extern int DataGlobal_83A100;  // data: 0x83a100
extern int DataGlobal_83A118;  // data: 0x83a118
extern int DataGlobal_83A128;  // data: 0x83a128
extern int DataGlobal_83A134;  // data: 0x83a134
extern int DataGlobal_83A144;  // data: 0x83a144
extern int DataGlobal_83B2A4;  // data: 0x83b2a4
extern int DataGlobal_83B2B4;  // data: 0x83b2b4
extern int DataGlobal_83B2C0;  // data: 0x83b2c0
extern int DataGlobal_83B2D0;  // data: 0x83b2d0
extern int DataGlobal_83B2E0;  // data: 0x83b2e0
extern int DataGlobal_83B2F0;  // data: 0x83b2f0
extern int DataGlobal_83B300;  // data: 0x83b300
extern int DataGlobal_83B310;  // data: 0x83b310
extern int DataGlobal_83B31C;  // data: 0x83b31c
extern int DataGlobal_83B330;  // data: 0x83b330
extern int DataGlobal_83D110;  // data: 0x83d110
extern int DataGlobal_83D12C;  // data: 0x83d12c
extern int DataGlobal_83D144;  // data: 0x83d144
extern int DataGlobal_83D160;  // data: 0x83d160
extern int DataGlobal_83D17C;  // data: 0x83d17c
extern int DataGlobal_83D198;  // data: 0x83d198
extern int DataGlobal_83D1A8;  // data: 0x83d1a8
extern int DataGlobal_83D1B8;  // data: 0x83d1b8
extern int DataGlobal_83D1C8;  // data: 0x83d1c8
extern int DataGlobal_83D1D4;  // data: 0x83d1d4
extern int DataGlobal_83D1E4;  // data: 0x83d1e4
extern int DataGlobal_83D1F4;  // data: 0x83d1f4
extern int DataGlobal_83D204;  // data: 0x83d204
extern int DataGlobal_83D214;  // data: 0x83d214
extern int DataGlobal_83D224;  // data: 0x83d224
extern int DataGlobal_83D230;  // data: 0x83d230
extern int DataGlobal_83D23C;  // data: 0x83d23c
extern int DataGlobal_83D244;  // data: 0x83d244
extern int DataGlobal_83D24C;  // data: 0x83d24c
extern int DataGlobal_83D25C;  // data: 0x83d25c
extern int DataGlobal_83D26C;  // data: 0x83d26c
extern int DataGlobal_83D278;  // data: 0x83d278
extern int DataGlobal_83D284;  // data: 0x83d284
extern int DataGlobal_83D294;  // data: 0x83d294
extern int DataGlobal_83D2A4;  // data: 0x83d2a4
extern int DataGlobal_83D2B4;  // data: 0x83d2b4
extern int DataGlobal_83D2C4;  // data: 0x83d2c4
extern int DataGlobal_83D2D0;  // data: 0x83d2d0
extern int DataGlobal_83D2E0;  // data: 0x83d2e0
extern int DataGlobal_83D2F4;  // data: 0x83d2f4
extern int DataGlobal_83D304;  // data: 0x83d304
extern int DataGlobal_83D314;  // data: 0x83d314
extern int DataGlobal_83D328;  // data: 0x83d328
extern int DataGlobal_83D334;  // data: 0x83d334
extern int DataGlobal_83D344;  // data: 0x83d344
extern int DataGlobal_83D350;  // data: 0x83d350
extern int DataGlobal_83D35C;  // data: 0x83d35c
extern int DataGlobal_83D36C;  // data: 0x83d36c
extern int DataGlobal_83D384;  // data: 0x83d384
extern int DataGlobal_83D390;  // data: 0x83d390
extern int DataGlobal_83D3A0;  // data: 0x83d3a0
extern int DataGlobal_83D3A8;  // data: 0x83d3a8
extern int DataGlobal_83D3B0;  // data: 0x83d3b0
extern int DataGlobal_83D3C0;  // data: 0x83d3c0
extern int DataGlobal_83D3CC;  // data: 0x83d3cc
extern int DataGlobal_83D3DC;  // data: 0x83d3dc
extern int DataGlobal_83D3E4;  // data: 0x83d3e4
extern int DataGlobal_83D3F4;  // data: 0x83d3f4
extern int DataGlobal_83D404;  // data: 0x83d404
extern int DataGlobal_83D41C;  // data: 0x83d41c
extern int DataGlobal_83D430;  // data: 0x83d430
extern int DataGlobal_83D444;  // data: 0x83d444
extern int DataGlobal_83D458;  // data: 0x83d458
extern int DataGlobal_83D468;  // data: 0x83d468
extern int DataGlobal_83D474;  // data: 0x83d474
extern int DataGlobal_83D484;  // data: 0x83d484
extern int DataGlobal_83D494;  // data: 0x83d494
extern int DataGlobal_83D4A0;  // data: 0x83d4a0
extern int DataGlobal_83D4B4;  // data: 0x83d4b4

// G23 W0b global completion (auto-generated)
extern int DataGlobal_833014;  // data: 0x833014
extern int DataGlobal_833050;  // data: 0x833050
extern int DataGlobal_833068;  // data: 0x833068
extern int DataGlobal_833070;  // data: 0x833070
extern int DataGlobal_83307C;  // data: 0x83307c
extern int DataGlobal_83308C;  // data: 0x83308c
extern int DataGlobal_83309C;  // data: 0x83309c
extern int DataGlobal_8330A8;  // data: 0x8330a8
extern int DataGlobal_8330BC;  // data: 0x8330bc
extern int DataGlobal_833128;  // data: 0x833128
extern int DataGlobal_833188;  // data: 0x833188
extern int DataGlobal_8393A0;  // data: 0x8393a0
extern int DataGlobal_8393B4;  // data: 0x8393b4
extern int DataGlobal_8393C8;  // data: 0x8393c8
extern int DataGlobal_A8D10C;  // data: 0xa8d10c
extern int DataGlobal_B0491C;  // data: 0xb0491c
extern int DataGlobal_B04920;  // data: 0xb04920
extern int DataGlobal_B04924;  // data: 0xb04924
extern int DataGlobal_B04928;  // data: 0xb04928
extern int DataGlobal_B04954;  // data: 0xb04954
extern int DataGlobal_B04984;  // data: 0xb04984
extern int DataGlobal_B04988;  // data: 0xb04988
extern int DataGlobal_B0498C;  // data: 0xb0498c
extern int DataGlobal_B04990;  // data: 0xb04990
extern int DataGlobal_B049BC;  // data: 0xb049bc

// G41.46 C2065 data supply: vtable/raw-data globals the
// cache-typed bodies reference but the globals generator missed.
extern unsigned char vt_TypeList[4];
extern unsigned char vt_rc_ptr[4];
extern unsigned int stru_A8EB00;  // data: 0xA8EB00
extern unsigned char vt_VectorCursorrc_ptrDynamicVectorClassrc_ptr[4];
extern unsigned char vt_InitializerBase[4];
extern unsigned char vt_VectorClassrc_ptr[4];
extern unsigned char vt_VectorClassTRect[4];
extern unsigned char vt_VectorClassHashObject[4];
extern unsigned char vt_VectorCursorMSAnimDynamicVectorClass[4];
extern unsigned char vt_BlitTrans[4];
extern unsigned char vt_BlitPlain[4];
extern unsigned char vt_VectorClassTPoint3D[4];
extern unsigned char vt_List[4];
extern unsigned int stru_887598;  // data: 0x887598
extern int g_DDraw_AllowStretchBlits;
extern int g_DDraw_Initialized;
extern unsigned char vt_BlitTransLucent25Alpha[4];
extern unsigned char vt_BlitTransLucent25AlphaZReadWrite[4];
extern unsigned char vt_BlitTransXlatAlphaZRead[4];
extern unsigned char vt_BlitTransXlatAlpha[4];
extern unsigned int stru_A8D600;  // data: 0xA8D600
extern unsigned char vt_GameOption[4];
extern unsigned char vt_FlagGameOption[4];
extern unsigned int unk_7E989C;  // data: 0x7E989C
extern unsigned int unk_7E9A7C;  // data: 0x7E9A7C
extern unsigned char vt_DynamicVectorClassrc_ptr[4];
extern unsigned char vt_VectorCursorunsignedintDynamicVectorClass[4];
extern unsigned int off_826960;  // data: 0x826960
extern unsigned int off_81DA28;  // data: 0x81DA28
extern unsigned int off_81DA58;  // data: 0x81DA58
extern unsigned int stru_87F5F0;  // data: 0x87F5F0
extern unsigned char vt_RLEBlitTransZRemapXlatAlpha[4];
extern unsigned char vt_DynamicVectorClassHashObject[4];
extern unsigned int unk_7E9ADC;  // data: 0x7E9ADC
extern unsigned int stru_82BA00;  // data: 0x82BA00
extern unsigned int off_7E1BC6;  // data: 0x7E1BC6
extern unsigned char vt_VectorCursorMSSfxEntryDynamicVectorClass[4];
extern unsigned int stru_A8B250;  // data: 0xA8B250
extern unsigned char vt_INISection[4];
extern unsigned char vt_ATLCComObject[4];
extern unsigned char vt_VectorClassDiscreteDistributionClassDistributionObject[4];
extern unsigned char vt_DynamicVectorClassDiscreteDistributionClassDistributionObject[4];

// G41.47 data supply (g126 fresh names)
extern unsigned int asc_815E74;  // data: 0x815E74
extern unsigned int asc_818D7C;  // data: 0x818D7C
extern unsigned int asc_81C8FC;  // data: 0x81C8FC
extern unsigned int asc_82083C;  // data: 0x82083C
extern unsigned int asc_8304FC;  // data: 0x8304FC
extern unsigned int asc_831774;  // data: 0x831774
extern unsigned int asc_8318B8;  // data: 0x8318B8
extern unsigned int asc_84968C;  // data: 0x84968C
extern unsigned int asc_84A480;  // data: 0x84A480
extern unsigned int asc_84BA18;  // data: 0x84BA18
extern unsigned int asc_87C918;  // data: 0x87C918
extern unsigned int dbl_ABFA80;  // data: 0xABFA80
extern unsigned int dbl_ABFAA0;  // data: 0xABFAA0
extern unsigned int dbl_ABFAA8;  // data: 0xABFAA8
extern unsigned int dbl_ABFAB0;  // data: 0xABFAB0
extern unsigned int dbl_ABFAC8;  // data: 0xABFAC8
extern unsigned int dbl_ABFB08;  // data: 0xABFB08
extern unsigned int dbl_ABFB28;  // data: 0xABFB28
extern unsigned int dbl_ABFB30;  // data: 0xABFB30
extern unsigned int dbl_ABFB58;  // data: 0xABFB58
extern unsigned int dbl_ABFB60;  // data: 0xABFB60
extern unsigned int dbl_ABFB78;  // data: 0xABFB78
extern unsigned char vt_VectorClassDynamicVectorClass[4];

// G41.48 string-label globals (IDA aXxx names, compile supply)
extern const char abstractFlags[];
extern const char ambientSoundController[];
extern const char audioController3[];
extern const char audioController4[];
extern const char audioController5[];
extern const char audioController6[];

// G41.48 string-label globals (camelCase aXxx)
extern const char aA0[];
extern const char aAddonShp[];
extern const char aAdr[];
extern const char aAidefendagains[];
extern const char aAirportbound[];
extern const char aAirspeed[];
extern const char aAlphaimage[];
extern const char aAlternatearcti[];
extern const char aAmbientsound[];
extern const char aArbiShp[];
extern const char aAta[];
extern const char aAttachedsystem[];
extern const char aAutoscroll[];
extern const char aBarracks[];
extern const char aBibshape[];
extern const char aBigfontShp[];
extern const char aBombable[];
extern const char aBounceanim[];
extern const char aBuildtime[];
extern const char aBuilt1[];
extern const char aBuilt2[];
extern const char aBurn[];
extern const char aBusy[];
extern const char aCacheMix_0[];
extern const char aCachemdMix[];
extern const char aCampaigntype[];
extern const char aCampdifficulty[];
extern const char aCanbeach[];
extern const char aCarriescrate[];
extern const char aCarryall[];
extern const char aCheckingHardwa[];
extern const char aCheckingOverla[];
extern const char aCol[];
extern const char aColor1[];
extern const char aColor2[];
extern const char aConnect[];
extern const char aConnected[];
extern const char aCou[];
extern const char aCrategoodie[];
extern const char aCrater[];
extern const char aCratesappear[];
extern const char aCrushable[];
extern const char aCrushsound[];
extern const char aCustomrotor[];
extern const char aDRa2mdpostAbst[];
extern const char aDRa2mdpostSend[];
extern const char aDamageradius[];
extern const char aDeadbodies[];
extern const char aDeathanims[];
extern const char aDeathframerate[];
extern const char aDeathframes[];
extern const char aDebris[];
extern const char aDeploytofire[];
extern const char aDifficulty[];
extern const char aDisableablefro[];
extern const char aDjbiShp[];
extern const char aDooranim[];
extern const char aDuration[];
extern const char aEcacheMix[];
extern const char aElevationbonus[];
extern const char aElevationincre[];
extern const char aElevationincre_0[];
extern const char aElevationmodel[];
extern const char aEliteoccupywea[];
extern const char aElocalMix[];
extern const char aErro[];
extern const char aEvacuate[];
extern const char aExpireanim[];
extern const char aFacings[];
extern const char aFailed_1[];
extern const char aFailed_2[];
extern const char aFighter[];
extern const char aFiringframes[];
extern const char aFlashsidebarta[];
extern const char aFlyback[];
extern const char aFlyby[];
extern const char aFr[];
extern const char aFraiShp[];
extern const char aGame[];
extern const char aGbriShp[];
extern const char aGclock2Shp[];
extern const char aGeriShp[];
extern const char aGettingFileFro[];
extern const char aGroundspeed[];
extern const char aGrowth[];
extern const char aGrowthpercenta[];
extern const char aGuiHostmaptran[];
extern const char aGuiMaptransfer[];
extern const char aGuiNone[];
extern const char aGuiTooltip[];
extern const char aGuiTrademarkbo[];
extern const char aGuiTrademarkto[];
extern const char aGuiVersion[];
extern const char aGuiWaiting[];
extern const char aHalfdamagesmok_1[];
extern const char aHarvester[];
extern const char aHasradialindic[];
extern const char aHistory[];
extern const char aHoldswhat[];
extern const char aHostRespondedW[];
extern const char aHouse1[];
extern const char aHouse2[];
extern const char aHtml[];
extern const char aHttpApiregiste_4[];
extern const char aIgnoresfiresto[];
extern const char aImmune[];
extern const char aInsignificant[];
extern const char aIsmeteor[];
extern const char aIspowered[];
extern const char aIssimpledeploy[];
extern const char aIstiberium[];
extern const char aIstilter[];
extern const char aIsveinhole[];
extern const char aJapiShp[];
extern const char aKeyboardmdIni[];
extern const char aKills1[];
extern const char aKills2[];
extern const char aLandable[];
extern const char aLargevisceroid[];
extern const char aLatiShp[];
extern const char aLegaltarget[];
extern const char aLinetrailcolor[];
extern const char aLinetrailcolor_0[];
extern const char aLoadMix[];
extern const char aLoadmdMix[];
extern const char aLoadmdMix_0[];
extern const char aLoc[];
extern const char aLocalMix[];
extern const char aLocalmdMix[];
extern const char aLost1[];
extern const char aLost2[];
extern const char aMain[];
extern const char aMainMix[];
extern const char aMatch[];
extern const char aMatchwdt[];
extern const char aMaxangularvelo[];
extern const char aMaxxyvel[];
extern const char aMaxzvel[];
extern const char aMbr[];
extern const char aMcvrepacks[];
extern const char aMinangularvelo[];
extern const char aMinzvel[];
extern const char aMovementrestri[];
extern const char aMpmodesmdIni[];
extern const char aMpr[];
extern const char aMsgAttackmoveu[];
extern const char aMsgPlanningmod_12[];
extern const char aMsgPlanningmod_7[];
extern const char aMsgPlanningmod_8[];
extern const char aMultiMix[];
extern const char aMultiplay[];
extern const char aMultiplayer[];
extern const char aMultiplaypassi[];
extern const char aNat[];
extern const char aNetstatus[];
extern const char aNeutral[];
extern const char aNewtheater[];
extern const char aNoC[];
extern const char aNoD[];
extern const char aNodecount[];
extern const char aNonvehicle[];
extern const char aNospawnalt[];
extern const char aObsalliShp[];
extern const char aObservermode[];
extern const char aObsiShp[];
extern const char aObssoviShp[];
extern const char aObsyuriShp[];
extern const char aOccupypip[];
extern const char aOccupyweapon[];
extern const char aOk_1[];
extern const char aOldcycle[];
extern const char aPageuser[];
extern const char aParentcountry[];
extern const char aParticlecap[];
extern const char aPassive[];
extern const char aPath[];
extern const char aPbeaconShp[];
extern const char aPercentbuilt[];
extern const char aPipbrdShp[];
extern const char aPips2Shp[];
extern const char aPipsShp[];
extern const char aPlayerE[];
extern const char aPlayerF[];
extern const char aPlayerG[];
extern const char aPostclick[];
extern const char aPower_0[];
extern const char aPreclick[];
extern const char aPrefix[];
extern const char aPrt[];
extern const char aRDnShp[];
extern const char aRUpShp[];
extern const char aRa2Mix[];
extern const char aRa2mdIni[];
extern const char aRa2mdMix[];
extern const char aRadar[];
extern const char aRadarinvisible[];
extern const char aRadialcolor[];
extern const char aRaniShp[];
extern const char aRat[];
extern const char aRdrbeacnShp[];
extern const char aRepairShp[];
extern const char aRequestingFile[];
extern const char aRes[];
extern const char aRing[];
extern const char aRotors[];
extern const char aRubble[];
extern const char aRusiShp[];
extern const char aScenindex[];
extern const char aScore1[];
extern const char aScore2[];
extern const char aScrollmethod[];
extern const char aScrollrate[];
extern const char aSelectable[];
extern const char aSellShp[];
extern const char aSendingFileInf[];
extern const char aShadow[];
extern const char aSharebarreldat[];
extern const char aSharebodydata[];
extern const char aSharesource[];
extern const char aShareturretdat[];
extern const char aShowhidden[];
extern const char aShowtimer[];
extern const char aSide1Shp[];
extern const char aSide2Shp[];
extern const char aSide3Shp[];
extern const char aSidebarcameote[];
extern const char aSmallvisceroid[];
extern const char aSmartai[];
extern const char aSpawncount[];
extern const char aSpawndelay[];
extern const char aSpawnframes[];
extern const char aSpawnradius[];
extern const char aSpecialsound[];
extern const char aSpecialzoverla[];
extern const char aSpread[];
extern const char aSpreadpercenta[];
extern const char aStandingframes[];
extern const char aStartbutShp[];
extern const char aStartstandfram[];
extern const char aStartwalkframe[];
extern const char aStatus[];
extern const char aStrength[];
extern const char aStretchmovies[];
extern const char aSttLobbylistus[];
extern const char aSttPlayernone[];
extern const char aSuffix[];
extern const char aSunExe[];
extern const char aTalkbublShp[];
extern const char aTerritory[];
extern const char aTimeoutWaiting[];
extern const char aTimeoutWaiting_0[];
extern const char aTimeoutWaiting_1[];
extern const char aTipAttackmove[];
extern const char aTipBeacon[];
extern const char aTipCheer[];
extern const char aTipDeploy[];
extern const char aTipGuard[];
extern const char aTipPlanningmod[];
extern const char aTipStop[];
extern const char aTipTeam01[];
extern const char aTipTeam02[];
extern const char aTipTeam03[];
extern const char aTipThumbopen[];
extern const char aTipTypeselect[];
extern const char aTitlePcx[];
extern const char aTitleViewhtmlT[];
extern const char aToobigtofitund[];
extern const char aTooltips[];
extern const char aTrailer[];
extern const char aTraileranim[];
extern const char aTranslucent[];
extern const char aTxtAddSelectTe[];
extern const char aTxtAnswering[];
extern const char aTxtBanned[];
extern const char aTxtBytesWoTime[];
extern const char aTxtCenterTeam[];
extern const char aTxtConnectionL[];
extern const char aTxtDialing[];
extern const char aTxtDisabled[];
extern const char aTxtErrorError[];
extern const char aTxtFailedToTal[];
extern const char aTxtJustYouAndM[];
extern const char aTxtLeftGame[];
extern const char aTxtLobby[];
extern const char aTxtModemConner[];
extern const char aTxtModemConner_0[];
extern const char aTxtNullConnerr[];
extern const char aTxtPageuser[];
extern const char aTxtPageuserDes[];
extern const char aTxtRandomMapDe[];
extern const char aTxtSelectTeam[];
extern const char aTxtSerialdup[];
extern const char aTxtSerialunkno[];
extern const char aTxtSkuserialmi[];
extern const char aTxtSystemNotRe[];
extern const char aTxtTalkHostAbo[];
extern const char aTxtTaunt[];
extern const char aTxtTauntNumber[];
extern const char aTxtThatguysGam[];
extern const char aTxtThatguysGam_0[];
extern const char aTxtWaitingForC_0[];
extern const char aUnderdooranim[];
extern const char aUnderroofdoora[];
extern const char aUnitactionline[];
extern const char aUsaiShp[];
extern const char aUselinetrail[];
extern const char aUseturretshado[];
extern const char aValue[];
extern const char aVoicecomment[];
extern const char aVoxel[];
extern const char aVoxelindex[];
extern const char aWaitcyloPal[];
extern const char aWaitcyloShp[];
extern const char aWalkframes[];
extern const char aWallowner[];
extern const char aWarningPacketL[];
extern const char aWds0[];
extern const char aWds1[];
extern const char aWdt[];
extern const char aWeapontype[];
extern const char aWeeder[];
extern const char aWolRequestingm[];
extern const char aYriiShp[];
extern const char aYrm[];

// G42.16: orphan global-func supply wiring (C3861 bare names)
#include "_generated/global_funcs_decls.hpp"


// G42.31 C2065 data supply (per-name guarded, idempotent):
extern int byte_A8ED64;  // data: 0xA8ED64
extern int byte_AC4E78;  // data: 0xAC4E78
extern int byte_B05584;  // data: 0xB05584
extern int dword_A8ECE0;  // data: 0xA8ECE0
extern int dword_AC1474;  // data: 0xAC1474
extern int dword_AC4E74;  // data: 0xAC4E74
extern int dword_B0FB9C;  // data: 0xB0FB9C
extern int dword_B0FBA0;  // data: 0xB0FBA0
extern int g_DDraw_PrimarySurface;
extern int word_AA06D0;  // data: 0xAA06D0
extern int word_AA06D2;  // data: 0xAA06D2

// G42.32 M C2065 data supply: CRT statics (per-name guarded, idempotent):
extern double _RT1;   // G42.32: x87 st0 result placeholder (asm-debt vocab, no addr)
extern double _ET1;   // G42.32: x87 st1 result placeholder
extern double _ST6;   // G42.32: x87 st(6) pseudo-register (CIpow body read/write)
extern void* __0Iostream_init_QAE_XZ_2;  // CRT static, fn-ptr cast use
extern void* __0Iostream_init_QAE_XZ_6;  // CRT static, fn-ptr cast use
extern void* __0Iostream_init_QAE_XZ_8;  // CRT static, fn-ptr cast use
extern void* __strgtold12;  // CRT static
extern void __3_YAXPAX_Z(void *);  // CRT operator delete (mangled ??3@YAXPAX@Z)

// G42.32 M C2065 data supply: DataGlobal raw globals, bare/addr use-forms only
// (member-form DataGlobal_008291B8 excluded -- needs typed struct, adjudication)
extern unsigned int DataGlobal_00829174;  // data: 0x00829174
extern unsigned int DataGlobal_00829184;  // data: 0x00829184
extern unsigned int DataGlobal_00829194;  // data: 0x00829194
extern unsigned int DataGlobal_008291A4;  // data: 0x008291A4
extern unsigned int DataGlobal_008291B0;  // data: 0x008291B0
extern unsigned int DataGlobal_008291B8;  // data: 0x008291B8
extern unsigned int DataGlobal_008292B4;  // data: 0x008292B4
extern unsigned int DataGlobal_008292C4;  // data: 0x008292C4
extern unsigned int DataGlobal_008292D4;  // data: 0x008292D4
extern unsigned int DataGlobal_008292E8;  // data: 0x008292E8
extern unsigned int DataGlobal_008292FC;  // data: 0x008292FC
extern unsigned int DataGlobal_0082930C;  // data: 0x0082930C
extern unsigned int DataGlobal_0082931C;  // data: 0x0082931C
extern unsigned int DataGlobal_00829330;  // data: 0x00829330
extern unsigned int DataGlobal_00829344;  // data: 0x00829344
extern unsigned int DataGlobal_008295F4;  // data: 0x008295F4
extern unsigned int DataGlobal_00829600;  // data: 0x00829600
extern unsigned int DataGlobal_0082960C;  // data: 0x0082960C
extern unsigned int DataGlobal_008358FC;  // data: 0x008358FC
extern unsigned int DataGlobal_00835908;  // data: 0x00835908
extern unsigned int DataGlobal_00835920;  // data: 0x00835920
extern unsigned int DataGlobal_008359AC;  // data: 0x008359AC
extern unsigned int DataGlobal_008359B8;  // data: 0x008359B8
extern unsigned int DataGlobal_008359C8;  // data: 0x008359C8
extern unsigned int DataGlobal_008359D4;  // data: 0x008359D4
extern unsigned int DataGlobal_008359E4;  // data: 0x008359E4
extern unsigned int DataGlobal_008359F0;  // data: 0x008359F0
extern unsigned int DataGlobal_00835A00;  // data: 0x00835A00
extern unsigned int DataGlobal_008360F8;  // data: 0x008360F8
extern unsigned int DataGlobal_00836104;  // data: 0x00836104
extern unsigned int DataGlobal_00836110;  // data: 0x00836110
extern unsigned int DataGlobal_0083611C;  // data: 0x0083611C
extern unsigned int DataGlobal_00836128;  // data: 0x00836128
extern unsigned int DataGlobal_00836164;  // data: 0x00836164
extern unsigned int DataGlobal_00836174;  // data: 0x00836174
extern unsigned int DataGlobal_00836184;  // data: 0x00836184
extern unsigned int DataGlobal_00836190;  // data: 0x00836190
extern unsigned int DataGlobal_0083619C;  // data: 0x0083619C
extern unsigned int DataGlobal_008361A8;  // data: 0x008361A8
extern unsigned int DataGlobal_008361B4;  // data: 0x008361B4
extern unsigned int DataGlobal_008361C0;  // data: 0x008361C0
extern unsigned int DataGlobal_008361CC;  // data: 0x008361CC
extern unsigned int DataGlobal_008361D8;  // data: 0x008361D8
extern unsigned int DataGlobal_008361E4;  // data: 0x008361E4
extern unsigned int DataGlobal_008361F0;  // data: 0x008361F0
extern unsigned int DataGlobal_008361FC;  // data: 0x008361FC
extern unsigned int DataGlobal_00836208;  // data: 0x00836208
extern unsigned int DataGlobal_00836214;  // data: 0x00836214
extern unsigned int DataGlobal_00836220;  // data: 0x00836220
extern unsigned int DataGlobal_0083622C;  // data: 0x0083622C
extern unsigned int DataGlobal_0083623C;  // data: 0x0083623C
extern unsigned int DataGlobal_0083624C;  // data: 0x0083624C
extern unsigned int DataGlobal_0083625C;  // data: 0x0083625C
extern unsigned int DataGlobal_0083626C;  // data: 0x0083626C
extern unsigned int DataGlobal_00836278;  // data: 0x00836278
extern unsigned int DataGlobal_00836284;  // data: 0x00836284
extern unsigned int DataGlobal_00836290;  // data: 0x00836290
extern unsigned int DataGlobal_0083629C;  // data: 0x0083629C
extern unsigned int DataGlobal_008362A8;  // data: 0x008362A8
extern unsigned int DataGlobal_008362B4;  // data: 0x008362B4
extern unsigned int DataGlobal_008362C0;  // data: 0x008362C0
extern unsigned int DataGlobal_008362CC;  // data: 0x008362CC
extern unsigned int DataGlobal_008362DC;  // data: 0x008362DC
extern unsigned int DataGlobal_008362E8;  // data: 0x008362E8
extern unsigned int DataGlobal_008362F8;  // data: 0x008362F8
extern unsigned int DataGlobal_00836308;  // data: 0x00836308
extern unsigned int DataGlobal_00836318;  // data: 0x00836318
extern unsigned int DataGlobal_00836328;  // data: 0x00836328
extern unsigned int DataGlobal_00836334;  // data: 0x00836334
extern unsigned int DataGlobal_008363AC;  // data: 0x008363AC
extern unsigned int DataGlobal_008363B8;  // data: 0x008363B8
extern unsigned int DataGlobal_008363C4;  // data: 0x008363C4
extern unsigned int DataGlobal_0089DC50;  // data: 0x0089DC50
extern unsigned int DataGlobal_0089DC54;  // data: 0x0089DC54
extern unsigned int DataGlobal_00A8B8C2;  // data: 0x00A8B8C2

// G42.32 S R6: DataGlobal bare-form supply (form-checked, idempotent per-name)
extern unsigned int DataGlobal_00829160;  // data: 0x00829160
extern unsigned int DataGlobal_008358E4;  // data: 0x008358E4
extern unsigned int DataGlobal_008358F0;  // data: 0x008358F0
extern unsigned int DataGlobal_00835914;  // data: 0x00835914
extern unsigned int DataGlobal_0083592C;  // data: 0x0083592C
extern unsigned int DataGlobal_00835938;  // data: 0x00835938
extern unsigned int DataGlobal_008360B4;  // data: 0x008360B4
extern unsigned int DataGlobal_008360C4;  // data: 0x008360C4
extern unsigned int DataGlobal_008360DC;  // data: 0x008360DC
extern unsigned int DataGlobal_008360EC;  // data: 0x008360EC

// G42.33 batch-2 supply: WOL palette-name string globals (addr61_e4.cpp C2065);
// IDA-verified pcx filename blobs 0x835974..0x83607C (bare-form, cast at use)
extern unsigned int DataGlobal_00835974;  // data: 0x00835974
extern unsigned int DataGlobal_00835980;  // data: 0x00835980
extern unsigned int DataGlobal_0083598C;  // data: 0x0083598C
extern unsigned int DataGlobal_00835998;  // data: 0x00835998
extern unsigned int DataGlobal_00835A10;  // data: 0x00835A10
extern unsigned int DataGlobal_00835A1C;  // data: 0x00835A1C
extern unsigned int DataGlobal_00835A28;  // data: 0x00835A28
extern unsigned int DataGlobal_00835A38;  // data: 0x00835A38
extern unsigned int DataGlobal_00835A4C;  // data: 0x00835A4C
extern unsigned int DataGlobal_00835A60;  // data: 0x00835A60
extern unsigned int DataGlobal_00835A74;  // data: 0x00835A74
extern unsigned int DataGlobal_00835A88;  // data: 0x00835A88
extern unsigned int DataGlobal_00835A9C;  // data: 0x00835A9C
extern unsigned int DataGlobal_00835AB0;  // data: 0x00835AB0
extern unsigned int DataGlobal_00835AC4;  // data: 0x00835AC4
extern unsigned int DataGlobal_00835AD8;  // data: 0x00835AD8
extern unsigned int DataGlobal_00835AEC;  // data: 0x00835AEC
extern unsigned int DataGlobal_00835B00;  // data: 0x00835B00
extern unsigned int DataGlobal_00835B14;  // data: 0x00835B14
extern unsigned int DataGlobal_00835B28;  // data: 0x00835B28
extern unsigned int DataGlobal_00835B3C;  // data: 0x00835B3C
extern unsigned int DataGlobal_00835B50;  // data: 0x00835B50
extern unsigned int DataGlobal_00835B64;  // data: 0x00835B64
extern unsigned int DataGlobal_00835B78;  // data: 0x00835B78
extern unsigned int DataGlobal_00835B8C;  // data: 0x00835B8C
extern unsigned int DataGlobal_00835BA0;  // data: 0x00835BA0
extern unsigned int DataGlobal_00835BB4;  // data: 0x00835BB4
extern unsigned int DataGlobal_00835BC8;  // data: 0x00835BC8
extern unsigned int DataGlobal_00835BDC;  // data: 0x00835BDC
extern unsigned int DataGlobal_00835BF0;  // data: 0x00835BF0
extern unsigned int DataGlobal_00835C04;  // data: 0x00835C04
extern unsigned int DataGlobal_00835C18;  // data: 0x00835C18
extern unsigned int DataGlobal_00835C2C;  // data: 0x00835C2C
extern unsigned int DataGlobal_00835C40;  // data: 0x00835C40
extern unsigned int DataGlobal_00835C54;  // data: 0x00835C54
extern unsigned int DataGlobal_00835C68;  // data: 0x00835C68
extern unsigned int DataGlobal_00835C7C;  // data: 0x00835C7C
extern unsigned int DataGlobal_00835CB4;  // data: 0x00835CB4
extern unsigned int DataGlobal_00835CC4;  // data: 0x00835CC4
extern unsigned int DataGlobal_00835CD4;  // data: 0x00835CD4
extern unsigned int DataGlobal_00835CE4;  // data: 0x00835CE4
extern unsigned int DataGlobal_00835CF4;  // data: 0x00835CF4
extern unsigned int DataGlobal_00835D04;  // data: 0x00835D04
extern unsigned int DataGlobal_00835D24;  // data: 0x00835D24
extern unsigned int DataGlobal_00835D34;  // data: 0x00835D34
extern unsigned int DataGlobal_00835D44;  // data: 0x00835D44
extern unsigned int DataGlobal_00835D54;  // data: 0x00835D54
extern unsigned int DataGlobal_00835D64;  // data: 0x00835D64
extern unsigned int DataGlobal_00835D74;  // data: 0x00835D74
extern unsigned int DataGlobal_00835D84;  // data: 0x00835D84
extern unsigned int DataGlobal_00835D94;  // data: 0x00835D94
extern unsigned int DataGlobal_00835DA4;  // data: 0x00835DA4
extern unsigned int DataGlobal_00835DB4;  // data: 0x00835DB4
extern unsigned int DataGlobal_00835DC4;  // data: 0x00835DC4
extern unsigned int DataGlobal_00835DD4;  // data: 0x00835DD4
extern unsigned int DataGlobal_00835DE4;  // data: 0x00835DE4
extern unsigned int DataGlobal_00835DF4;  // data: 0x00835DF4
extern unsigned int DataGlobal_00835E04;  // data: 0x00835E04
extern unsigned int DataGlobal_00835E14;  // data: 0x00835E14
extern unsigned int DataGlobal_00835E24;  // data: 0x00835E24
extern unsigned int DataGlobal_00835E34;  // data: 0x00835E34
extern unsigned int DataGlobal_00835E44;  // data: 0x00835E44
extern unsigned int DataGlobal_00835E50;  // data: 0x00835E50
extern unsigned int DataGlobal_00835E5C;  // data: 0x00835E5C
extern unsigned int DataGlobal_00835E6C;  // data: 0x00835E6C
extern unsigned int DataGlobal_00835E7C;  // data: 0x00835E7C
extern unsigned int DataGlobal_00835E8C;  // data: 0x00835E8C
extern unsigned int DataGlobal_00835E9C;  // data: 0x00835E9C
extern unsigned int DataGlobal_00835EAC;  // data: 0x00835EAC
extern unsigned int DataGlobal_00835EBC;  // data: 0x00835EBC
extern unsigned int DataGlobal_00835ECC;  // data: 0x00835ECC
extern unsigned int DataGlobal_00835EDC;  // data: 0x00835EDC
extern unsigned int DataGlobal_00835EEC;  // data: 0x00835EEC
extern unsigned int DataGlobal_00835EFC;  // data: 0x00835EFC
extern unsigned int DataGlobal_00835F0C;  // data: 0x00835F0C
extern unsigned int DataGlobal_00835F1C;  // data: 0x00835F1C
extern unsigned int DataGlobal_00835F2C;  // data: 0x00835F2C
extern unsigned int DataGlobal_00835F3C;  // data: 0x00835F3C
extern unsigned int DataGlobal_00835F4C;  // data: 0x00835F4C
extern unsigned int DataGlobal_00835F5C;  // data: 0x00835F5C
extern unsigned int DataGlobal_00835F68;  // data: 0x00835F68
extern unsigned int DataGlobal_00835F74;  // data: 0x00835F74
extern unsigned int DataGlobal_00835F80;  // data: 0x00835F80
extern unsigned int DataGlobal_00835F8C;  // data: 0x00835F8C
extern unsigned int DataGlobal_00835F98;  // data: 0x00835F98
extern unsigned int DataGlobal_00835FA4;  // data: 0x00835FA4
extern unsigned int DataGlobal_00835FB0;  // data: 0x00835FB0
extern unsigned int DataGlobal_00835FF4;  // data: 0x00835FF4
extern unsigned int DataGlobal_00836000;  // data: 0x00836000
extern unsigned int DataGlobal_00836010;  // data: 0x00836010
extern unsigned int DataGlobal_0083601C;  // data: 0x0083601C
extern unsigned int DataGlobal_00836028;  // data: 0x00836028
extern unsigned int DataGlobal_00836034;  // data: 0x00836034
extern unsigned int DataGlobal_00836044;  // data: 0x00836044
extern unsigned int DataGlobal_00836054;  // data: 0x00836054
extern unsigned int DataGlobal_00836064;  // data: 0x00836064
extern unsigned int DataGlobal_0083607C;  // data: 0x0083607C
extern char aSttLobbylistga[41];  // data: 0x84A590 G42.33 supply (csf key STT_LOBBYLISTGAME, addr78 use)
extern char aMsgPinginfo[10];  // data: 0x84A578 G42.33 supply (csf key MSG_PINGINFO, addr78 use)
extern wchar_t asc_84A69C[];  // data: 0x84A69C G42.33 supply (L": " wide literal, addr78 use)
extern char aWolGameping[1];  // data: 0x84A5B8 G42.33 b2 supply (csf key WOL_GAMEPING, addr78 use)

// G42.33 b2 supply: WOL palette-name string globals (addr61_e4.cpp C2065);
// IDA-verified pcx filename blobs 0x835974..0x83607C (bare-form, cast at use)
extern unsigned int DataGlobal_00835974;  // data: 0x00835974
extern unsigned int DataGlobal_00835980;  // data: 0x00835980
extern unsigned int DataGlobal_0083598C;  // data: 0x0083598C
extern unsigned int DataGlobal_00835998;  // data: 0x00835998
extern unsigned int DataGlobal_00835A10;  // data: 0x00835A10
extern unsigned int DataGlobal_00835A1C;  // data: 0x00835A1C
extern unsigned int DataGlobal_00835A28;  // data: 0x00835A28
extern unsigned int DataGlobal_00835A38;  // data: 0x00835A38
extern unsigned int DataGlobal_00835A4C;  // data: 0x00835A4C
extern unsigned int DataGlobal_00835A60;  // data: 0x00835A60
extern unsigned int DataGlobal_00835A74;  // data: 0x00835A74
extern unsigned int DataGlobal_00835A88;  // data: 0x00835A88
extern unsigned int DataGlobal_00835A9C;  // data: 0x00835A9C
extern unsigned int DataGlobal_00835AB0;  // data: 0x00835AB0
extern unsigned int DataGlobal_00835AC4;  // data: 0x00835AC4
extern unsigned int DataGlobal_00835AD8;  // data: 0x00835AD8
extern unsigned int DataGlobal_00835AEC;  // data: 0x00835AEC
extern unsigned int DataGlobal_00835B00;  // data: 0x00835B00
extern unsigned int DataGlobal_00835B14;  // data: 0x00835B14
extern unsigned int DataGlobal_00835B28;  // data: 0x00835B28
extern unsigned int DataGlobal_00835B3C;  // data: 0x00835B3C
extern unsigned int DataGlobal_00835B50;  // data: 0x00835B50
extern unsigned int DataGlobal_00835B64;  // data: 0x00835B64
extern unsigned int DataGlobal_00835B78;  // data: 0x00835B78
extern unsigned int DataGlobal_00835B8C;  // data: 0x00835B8C
extern unsigned int DataGlobal_00835BA0;  // data: 0x00835BA0
extern unsigned int DataGlobal_00835BB4;  // data: 0x00835BB4
extern unsigned int DataGlobal_00835BC8;  // data: 0x00835BC8
extern unsigned int DataGlobal_00835BDC;  // data: 0x00835BDC
extern unsigned int DataGlobal_00835BF0;  // data: 0x00835BF0
extern unsigned int DataGlobal_00835C04;  // data: 0x00835C04
extern unsigned int DataGlobal_00835C18;  // data: 0x00835C18
extern unsigned int DataGlobal_00835C2C;  // data: 0x00835C2C
extern unsigned int DataGlobal_00835C40;  // data: 0x00835C40
extern unsigned int DataGlobal_00835C54;  // data: 0x00835C54
extern unsigned int DataGlobal_00835C68;  // data: 0x00835C68
extern unsigned int DataGlobal_00835C7C;  // data: 0x00835C7C
extern unsigned int DataGlobal_00835CB4;  // data: 0x00835CB4
extern unsigned int DataGlobal_00835CC4;  // data: 0x00835CC4
extern unsigned int DataGlobal_00835CD4;  // data: 0x00835CD4
extern unsigned int DataGlobal_00835CE4;  // data: 0x00835CE4
extern unsigned int DataGlobal_00835CF4;  // data: 0x00835CF4
extern unsigned int DataGlobal_00835D04;  // data: 0x00835D04
extern unsigned int DataGlobal_00835D24;  // data: 0x00835D24
extern unsigned int DataGlobal_00835D34;  // data: 0x00835D34
extern unsigned int DataGlobal_00835D44;  // data: 0x00835D44
extern unsigned int DataGlobal_00835D54;  // data: 0x00835D54
extern unsigned int DataGlobal_00835D64;  // data: 0x00835D64
extern unsigned int DataGlobal_00835D74;  // data: 0x00835D74
extern unsigned int DataGlobal_00835D84;  // data: 0x00835D84
extern unsigned int DataGlobal_00835D94;  // data: 0x00835D94
extern unsigned int DataGlobal_00835DA4;  // data: 0x00835DA4
extern unsigned int DataGlobal_00835DB4;  // data: 0x00835DB4
extern unsigned int DataGlobal_00835DC4;  // data: 0x00835DC4
extern unsigned int DataGlobal_00835DD4;  // data: 0x00835DD4
extern unsigned int DataGlobal_00835DE4;  // data: 0x00835DE4
extern unsigned int DataGlobal_00835DF4;  // data: 0x00835DF4
extern unsigned int DataGlobal_00835E04;  // data: 0x00835E04
extern unsigned int DataGlobal_00835E14;  // data: 0x00835E14
extern unsigned int DataGlobal_00835E24;  // data: 0x00835E24
extern unsigned int DataGlobal_00835E34;  // data: 0x00835E34
extern unsigned int DataGlobal_00835E44;  // data: 0x00835E44
extern unsigned int DataGlobal_00835E50;  // data: 0x00835E50
extern unsigned int DataGlobal_00835E5C;  // data: 0x00835E5C
extern unsigned int DataGlobal_00835E6C;  // data: 0x00835E6C
extern unsigned int DataGlobal_00835E7C;  // data: 0x00835E7C
extern unsigned int DataGlobal_00835E8C;  // data: 0x00835E8C
extern unsigned int DataGlobal_00835E9C;  // data: 0x00835E9C
extern unsigned int DataGlobal_00835EAC;  // data: 0x00835EAC
extern unsigned int DataGlobal_00835EBC;  // data: 0x00835EBC
extern unsigned int DataGlobal_00835ECC;  // data: 0x00835ECC
extern unsigned int DataGlobal_00835EDC;  // data: 0x00835EDC
extern unsigned int DataGlobal_00835EEC;  // data: 0x00835EEC
extern unsigned int DataGlobal_00835EFC;  // data: 0x00835EFC
extern unsigned int DataGlobal_00835F0C;  // data: 0x00835F0C
extern unsigned int DataGlobal_00835F1C;  // data: 0x00835F1C
extern unsigned int DataGlobal_00835F2C;  // data: 0x00835F2C
extern unsigned int DataGlobal_00835F3C;  // data: 0x00835F3C
extern unsigned int DataGlobal_00835F4C;  // data: 0x00835F4C
extern unsigned int DataGlobal_00835F5C;  // data: 0x00835F5C
extern unsigned int DataGlobal_00835F68;  // data: 0x00835F68
extern unsigned int DataGlobal_00835F74;  // data: 0x00835F74
extern unsigned int DataGlobal_00835F80;  // data: 0x00835F80
extern unsigned int DataGlobal_00835F8C;  // data: 0x00835F8C
extern unsigned int DataGlobal_00835F98;  // data: 0x00835F98
extern unsigned int DataGlobal_00835FA4;  // data: 0x00835FA4
extern unsigned int DataGlobal_00835FB0;  // data: 0x00835FB0
extern unsigned int DataGlobal_00835FF4;  // data: 0x00835FF4
extern unsigned int DataGlobal_00836000;  // data: 0x00836000
extern unsigned int DataGlobal_00836010;  // data: 0x00836010
extern unsigned int DataGlobal_0083601C;  // data: 0x0083601C
extern unsigned int DataGlobal_00836028;  // data: 0x00836028
extern unsigned int DataGlobal_00836034;  // data: 0x00836034
extern unsigned int DataGlobal_00836044;  // data: 0x00836044
extern unsigned int DataGlobal_00836054;  // data: 0x00836054
extern unsigned int DataGlobal_00836064;  // data: 0x00836064
extern unsigned int DataGlobal_0083607C;  // data: 0x0083607C
extern char aSttLobbylistga[41];  // data: 0x84A590 G42.33 b2 supply (csf key, addr78 use)
extern char aMsgPinginfo[10];  // data: 0x84A578 G42.33 b2 supply (csf key, addr78 use)
extern wchar_t asc_84A69C[];  // data: 0x84A69C G42.33 b2 supply (L": " wide literal, addr78 use)
extern char aWolGameping[1];  // data: 0x84A5B8 G42.33 b2 supply (csf key WOL_GAMEPING, addr78 use)

// G42.33 b4 supply: WOL locale strings + dialog state word (addr78 C2065)
extern char aATerritory[12];  // data: 0x84B608
extern char aEurope[7];  // data: 0x84B614
extern char aNorthamerica[13];  // data: 0x84B61C
extern unsigned short word_B77AD0;  // data: 0xB77AD0

// G42.33 b6 supply: WOL tail string globals (addr78 C2065)
extern char aWolRequestingn[23];  // data: 0x84B794
extern char aTxtConsentRequ[21];  // data: 0x84B77C
extern char aTibsun[7];  // data: 0x84B7AC
extern char aTibpass99[10];  // data: 0x84B7B4
extern char aWolNewaccountf[20];  // data: 0x84B7D8

// G42.33 b8 supply: tail WOL strings + IDA reg artifact
extern char aTxtNosquad[12];  // data: 0x84B940
// G42.33 b10 supply: tail WOL strings
extern char aWolLocale[11];  // data: 0x84A684
extern DWORD (__stdcall * __imp_GetFileSize)(HANDLE hFile, LPDWORD lpFileSizeHigh);  // data: 0x7c8512 IAT slot fn-ptr truth (G42.33 b3)

extern int MCVRedeploy;  // data: 0xA8B320
extern int HouseClass_Count;  // data: 0xA80238

// G42.33 b8 supply: score-screen strings (addr6C C2065)
extern wchar_t a02d02d02d_0[];  // data: 0x842158 (wide "%02d:%02d:%02d")
extern char aDRa2mdpostStls[26];  // data: 0x842178 (csf key)

// G42.33 b4 supply: rule/state globals (addr6C C2065; same addrs as globals_core.hpp)
extern int MCVRedeploy;  // data: 0xA8B320
extern int HouseClass_Count;  // data: 0xA80238

extern char * aDarkenShp;  // G42.41l supply (processDamage 0x6A5012)
extern int dword_B07BC0;  // G42.41l supply (0xB07BC0)
extern unsigned int stru_B1D290;  // G42.41l supply (processDeath 0x74CD60; til '?'-member blob)
extern int dword_886980;  // G42.42a supply (WOL_FindLobbyID FromFile arg2)
extern int dword_A8B240;  // G42.42a supply (territory idx)
extern int dword_B73E10;  // G42.42a supply (lobby count)
extern int dword_B73E18;  // G42.42a supply (lobby record base)
extern int dword_B73E1C;  // G42.42a supply (lobby name array)
extern int dword_B75E50;  // G42.42a supply (territory wide name)
extern int dword_B77DC8;  // G42.42a supply
extern int dword_B77DD0;  // G42.42a supply
extern int dword_B77DD4;  // G42.42a supply (lobby id)
extern unsigned int dword_A8ED84;  // G42.42f supply (MoveTo animation seed frame)
extern unsigned int dword_81B1E8;  // G42.57 W20M2 supply (CampaignScore init tail 0x46D343 mov dword_81B1E8,0FFFFFFFFh, live disasm)
extern unsigned int dword_B0EBF8;  // G57w18j4 supply (TeleportLocomotionClass ctor 0x718011, live disasm)
extern unsigned int dword_B0EBFC;  // G57w18j4 supply (TeleportLocomotionClass ctor 0x71801a)
extern unsigned int dword_B0EC00;  // G57w18j4 supply (TeleportLocomotionClass ctor 0x718026)
extern unsigned char byte_A8E9A0;  // G42.42k supply (Destruct init-phase guard)
extern unsigned int dword_A8E390;  // G42.42k supply (aircraft index container)
extern unsigned int dword_A8E394;  // G42.42k supply (item array)
extern unsigned int dword_A8E3A0;  // G42.42k supply (count)
extern unsigned int vt_AircraftClass_0;  // 0x7E22A4 G42.42k supply
extern unsigned int vt_AircraftClass_1;  // 0x7E2280 G42.42k supply
extern void * vt_AircraftClass_6;  // 0x7E2250 G42.42k supply (Destruct [this+0x6C0])

// G57w19k3 dot-q 清偿供给（逐站 live disasm 取证；地址=IDA 标签真值）
extern void* off_82AF14;   // data: 0x82AF14 Event::Dispatch_Return0 槽 (RandomMap [31] 族)
extern unsigned int dword_82AF18; // data: 0x82AF18 RandomMap flag 表基 (0x5910BD)
extern unsigned char unk_82AFF0;  // data: 0x82AFF0 RandomMap 地形字节表 (0x5928C6)
extern unsigned int off_82B038;   // data: 0x82B038 TXT 表基 (0x597003)
extern unsigned char unk_82B004;  // data: 0x82B004 RandomMap 循环上界 (0x592993 cmp esi,offset unk_82B004)
extern void* off_82B034;   // data: 0x82B034 CSF TXT 表基 (0x59704F mov ecx,off_82B034[ecx*4])
extern unsigned char unk_82AF78;  // data: 0x82AF78 (0x591B56 mov esi,offset unk_82AF78)
extern unsigned char unk_82AF8C;  // data: 0x82AF8C (0x591C1D cmp esi,offset unk_82AF8C)
extern unsigned int dword_8B410C; // data: 0x8B410C FootClass Array Items (0x599DD2/0x7354A5)
extern unsigned int dword_8B4124; // data: 0x8B4124 FootClass Array Items#2 (0x5120F9/0x6A46DF)
extern unsigned int dword_8B4130; // data: 0x8B4130 FootClass Array Count (0x6A46F8)
extern unsigned int dword_8B417C; // data: 0x8B417C FootClass Array Items#3 (0x6DD67A)
extern unsigned int dword_A8022C; // data: 0xA8022C HouseClass Array Items (0x47C8A2/0x48189C/0x566DD2/0x4FBD14/0x430EAD)
extern unsigned int dword_A80238; // data: 0xA80238 HouseClass Array Count (0x48188B/0x566DC5/0x4FBD00/0x59A167)
extern unsigned int dword_A8ED2C; // data: 0xA8ED2C RandomMap 对象计数 (0x599C82)
extern unsigned int dword_B76E40; // data: 0xB76E40 WOL LoginObject 缓冲 @g_WOL_LoginObject+0x1C (0x7A576A)
extern unsigned int unk_B76230;   // data: 0xB76230 (0x7A94FB)
extern unsigned int dword_8367C8; // data: 0x8367C8 BuildingDebris 记录表基 (0x631D4C)
extern unsigned int dword_820334; // data: 0x820334 剧场文件名指针表 (0x4B6C78)
extern unsigned int dword_820324; // data: 0x820324 剧场文件名指针表 (0x4B6D3D)
// ---- G29.5 generated declarations for residual MEMORY sites ----

