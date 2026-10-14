// G42.57 W14-E4: no-carrier canon extraction (mechanical; DO NOT hand-edit).
// Source: src/csp_canon/classes.hpp members + src/raw_decomp sig truth.
// Regenerate: python .omo/g57w14e4_carrier.py --apply
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

// === AircraftTrackerClass  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class AircraftTrackerClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int FillCurrentVector(int aP1, int a2, int a3);  // raw 0x412b40
};

// === AnimSequence  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class AnimSequence {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static uint8_t ** Parse(void *aP1);  // raw 0x523d00
};

// === ArmorType  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class ArmorType {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was ArmorType_field_0x04)
    int  FindIndex(uint8_t * a2, uint8_t * a3, int a4);  // 0x4753F0
    void LookupByName();  // 0x772A50 sig=csp
};

#ifndef GAMEMD_G2_AudioOptionsClass_DEF  // G42.57w14 carrier twin-guard (first-include wins)
#define GAMEMD_G2_AudioOptionsClass_DEF 1
// === AudioOptionsClass  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class AudioOptionsClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    AbstractClass * ApplySettings();  // 0x5FB160 sig=csp
};
#endif  // GAMEMD_G2_AudioOptionsClass_DEF

#ifndef GAMEMD_G2_BaseNodeClass_DEF  // G42.57w14 carrier twin-guard (first-include wins)
#define GAMEMD_G2_BaseNodeClass_DEF 1
// === BaseNodeClass  size=16  extracted from csp_canon/classes.hpp (W14-E4) ===
class BaseNodeClass {
public:
    char buildingTypeIndex[4];  /* int32_t */  // 0x0
    char mapCoords[4];  /* CellStruct */  // 0x4
    char placed[1];  /* bool */  // 0x8
    char __pad_009[3];  /* unsigned char */  // 0x9
    char attempts[4];  /* int32_t */  // 0xC
    BaseClass * Vector_Constructor(int a1, int a2);  // 0x42FC40
};
#endif  // GAMEMD_G2_BaseNodeClass_DEF

// === BinkMovieClass  size=20  extracted from csp_canon/classes.hpp (W14-E4) ===
class BinkMovieClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was BinkMovieClass_field_0x04)
    char q008[4];  /* unsigned char */  // 0x8 (was BinkMovieClass_field_0x08)
    char q00C[4];  /* unsigned char */  // 0xC (was BinkMovieClass_field_0x0C)
    char q010[4];  /* unsigned char */  // 0x10 (was BinkMovieClass_field_0x10)
    static unsigned int * SetPosition(void *aP1, int a2, int a3, int a4);  // raw 0x433180
    static unsigned int RenderFrameToSurface(void *aP1);  // raw 0x4333f0
    static unsigned int ReleaseRenderSurface(void *aP1, uint8_t *a1, unsigned char *a2, int a3);  // raw 0x4336c0
};

// === ButtonOwnerDraw  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class ButtonOwnerDraw {
public:
    char q000[4];  /* unsigned char */  // 0x0
};

// === CDTimerClass  size=12  extracted from csp_canon/classes.hpp (W14-E4) ===
// W15F4: +TimeRemaining — signals.json 权威 0x426630=CDTimerClass::TimeRemaining
// (int, thiscall, 无参); 体形态 = StartTime@0/TimeLeft@8 对全局帧的剩余算法
// (IDA live 2026-10-07; live 标签 Locomotor::GetSpeed 为命名事故, signals 无此名);
// gap2 先例 src/misc/locomotion.hpp:32. static 不改 sizeof.
class CDTimerClass {
public:
    char StartTime[4];  /* int32_t */  // 0x0
    char pad_04[4];  /* int32_t */  // 0x4
    char TimeLeft[4];  /* int32_t */  // 0x8
    static int TimeRemaining(unsigned int aP1);  // raw 0x426630
};

// === CampaignCoop  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class CampaignCoop {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int Setup(void *aP1, HWND hDlg, char a3);  // raw 0x5c21d0
};

// === CarryoverClass  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class CarryoverClass {
public:
    void* vtable1;  // 0x0
    void  method(unsigned int * a2);  // 0x473750
    void  QueryInterface(char a2);  // 0x473920
};

// === ChatDialog  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class ChatDialog {
public:
    char q000[4];  /* unsigned char */  // 0x0
};

// === Checkbox  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class Checkbox {
public:
    char q000[4];  /* unsigned char */  // 0x0
};

// === ChronoScreen  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class ChronoScreen {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int IsActive();  // raw 0x53bad0
};

// === ComboBoxDropDown  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class ComboBoxDropDown {
public:
    char q000[4];  /* unsigned char */  // 0x0
};

// === ComboBoxOwnerDraw  size=28  extracted from csp_canon/classes.hpp (W14-E4) ===
class ComboBoxOwnerDraw {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was ComboBoxOwnerDraw_field_0x04)
    char q008[4];  /* unsigned char */  // 0x8 (was ComboBoxOwnerDraw_field_0x08)
    char q00C[4];  /* unsigned char */  // 0xC (was ComboBoxOwnerDraw_field_0x0C)
    char q010[4];  /* unsigned char */  // 0x10 (was ComboBoxOwnerDraw_field_0x10)
    char q014[4];  /* unsigned char */  // 0x14 (was ComboBoxOwnerDraw_field_0x14)
    char q018[4];  /* unsigned char */  // 0x18 (was ComboBoxOwnerDraw_field_0x18)
    void GetWidthHeight();  // 0x600670 sig=csp
    void  MatchDimensions(unsigned int * a2);  // 0x600680
    AbstractClass * SortItems();  // 0x6252F0 sig=csp
    void  ComputeMask(int a2);  // 0x625390
    void SetCapacity();  // 0x6258E0 sig=csp
    void GrowBuffer();  // 0x625990 sig=csp
};

// === Compression  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
// W15F4: +Read (raw 0x55C350 int __thiscall(int *this, int Src, signed int Size),
// IDA live 2026-10-07; e4 使用点 static 3-实参形态). static 不改 sizeof.
class Compression {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int Read(void *aP1, int Src, int Size);  // raw 0x55C350
};

// === CoordinateTables  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class CoordinateTables {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int * Init_f(void *aP1);
};

// === CreditsPower  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class CreditsPower {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was CreditsPower_field_0x04)
    static char DrawCreditsTextLine(void *aP1, char a2);  // raw 0x4c3d00
    static AbstractClass * Display_f(void *aP1);
};

// === DamageAnimClass  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class DamageAnimClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static void * Constructor(void *aP1, int a2, int *a3, int a4);  // raw 0x7493b0
};

// === DynamicStringArray  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class DynamicStringArray {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int Get(void *aP1, char **a2, int a3);  // raw 0x7ace30
};

// === EditClass  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class EditClass {
public:
    void  method_4B53E0(int a2);  // 0x4B53E0
    COM Stub();  // 0x4B55A0 vt+140 sig=csp
    void  method_4C2FC0(int a2, void * String, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  // 0x4C2FC0
    void  SelectItem(void * String, int a3);  // 0x4C30E0
    void  GetItem(int a2);  // 0x4C3110
    void  GetCount(unsigned int a2, int * a3, int a4);  // 0x4C3190
    void GetSelected();  // 0x4C32A0 vt+144 sig=csp
    AbstractClass *  GetItemText(void * String);  // 0x4C32E0
    ControlClass *  SetItemText(int C);  // 0x4C3420
    void Close_f();  // 0x4C3570 vt+80 sig=csp
};

// === EditControl  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class EditControl {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was EditControl_field_0x04)
};

// === FileStraw_Destru  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class FileStraw_Destru {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was FileStraw_Destru_field_0x04)
    static void * QueryInterface(void *aP1, char a2);  // raw 0x477770
    static int Release(void *aP1, int a2, int a3);  // raw 0x7ba530
};

// === GameInit  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class GameInit {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static unsigned int * InitMultiplayerModes(void *aP1, int a2, int a3);  // raw 0x5d86d0
};

// === GameLobby  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class GameLobby {
public:
    char q000[4];  /* unsigned char */  // 0x0
    ReferenceCounted * DlgProc(int a1, int a2, int a3);  // 0x5E1CA0 sig=csp
};

// === GameOptionsClass  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class GameOptionsClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was GameOptionsClass_field_0x04)
    static char * UnlockMovieIfNeeded_MoviesList(void *aP1, void *a2);  // raw 0x5fbf80
    static char * PopulateMovieList(void *aP1, HWND hWnd);  // raw 0x5fc000
    char __pad_0[4];  // 0x0 (G57W14E1 til supply)
};

// === GameScreen  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class GameScreen {
public:
    CampaignClass* q000;  // 0x0
};

// === GetCurrentProcessId  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class GetCurrentProcessId {
public:
    char q000[4];  /* unsigned char */  // 0x0
    unsigned long N0();  // 0x7DCF22 sig=ida-proto
};

// === GetCurrentThread  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class GetCurrentThread {
public:
    char q000[4];  /* unsigned char */  // 0x0
};

// === GetCurrentThreadId  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class GetCurrentThreadId {
public:
    char q000[4];  /* unsigned char */  // 0x0
};

// === GroupLabel  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class GroupLabel {
public:
    char q000[4];  /* unsigned char */  // 0x0
    AbstractClass *  WndProc(HWND hWnd, UINT Msg, int wParam, int lParam);  // 0x61E700
};

// === InputManager  size=20  extracted from csp_canon/classes.hpp (W14-E4) ===
class InputManager {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was InputManager_field_0x04)
    char q008[4];  /* unsigned char */  // 0x8 (was InputManager_field_0x08)
    char q00C[4];  /* unsigned char */  // 0xC (was InputManager_field_0x0C)
    char q010[4];  /* unsigned char */  // 0x10 (was InputManager_field_0x10)
    GadgetClass *  FindBestHitElement(int a2, int a3);  // 0x4E15A0
    void  EnqueueInputEvent(uint16_t a2, int16_t a3, int16_t a4, char a5);  // 0x54F2F0
    void  PushInputEvent(int16_t a2);  // 0x54F670
};

// === IntDynamicVector  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class IntDynamicVector {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was IntDynamicVector_field_0x04)
    static unsigned int * Construct(void *aP1, int a2);  // raw 0x717bd0
    static unsigned int * QueryInterface(void *aP1, char a2);  // raw 0x477b10
};

// === IntVector  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class IntVector {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was IntVector_field_0x04)
    static unsigned int * Copy(void *aP1, unsigned int *a2);  // raw 0x477b60
    static void Destructor(void *aP1);  // raw 0x49f9d0
};

// === KeyValuePair  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class KeyValuePair {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static unsigned int * Init_f(void *aP1, int a2);  // raw 0x52aec0
    static unsigned int * Init(void *aP1, int a2);  // raw 0x52aec0
};

#ifndef GAMEMD_G2_MPGameModeClass_DEF  // G42.57w14 carrier twin-guard (first-include wins)
#define GAMEMD_G2_MPGameModeClass_DEF 1
// === MPGameModeClass  size=44  extracted from csp_canon/classes.hpp (W14-E4) ===
class MPGameModeClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char MPGameModeClass_field_4[1];  /* bool */  // 0x4
    char __pad_005[3];  /* unsigned char */  // 0x5
    char MPTeams[4];  /* unsigned int */  // 0x8
    wchar_t* CSFTitle;  // 0xC
    wchar_t* CSFTooltip;  // 0x10
    char MPModeIndex[4];  /* int32_t */  // 0x14
    char* INIFilename;  // 0x18
    char* MapFilter;  // 0x1C
    char AIAllowed[1];  /* bool */  // 0x20
    char q021[3];  /* unsigned char */  // 0x21 (was __pad_021)
    CCINIClass* INI;  // 0x24
    char AlliesAllowed[1];  /* bool */  // 0x28
    char WOLTourney[1];  /* bool */  // 0x29
    char WOLClanTourney[1];  /* bool */  // 0x2A
    char MustAlly[1];  /* bool */  // 0x2B
};
#endif  // GAMEMD_G2_MPGameModeClass_DEF

// === MapData  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class MapData {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int InitHeights(void *aP1);
};

// === MovieHandle  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class MovieHandle {
public:
    void method_5C0630();  // 0x5C0630 sig=csp
};

#ifndef GAMEMD_G2_MultiplayerLobby_DEF  // G42.57w14 carrier twin-guard (first-include wins)
#define GAMEMD_G2_MultiplayerLobby_DEF 1
// === MultiplayerLobby  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class MultiplayerLobby {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static char FillSlots(void *aP1);  // raw 0x5ec030
};
#endif  // GAMEMD_G2_MultiplayerLobby_DEF

#ifndef GAMEMD_G2_NetworkBuffer_DEF  // G42.57w14 carrier twin-guard (first-include wins)
#define GAMEMD_G2_NetworkBuffer_DEF 1
// === NetworkBuffer  size=16  extracted from csp_canon/classes.hpp (W14-E4) ===
class NetworkBuffer {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was NetworkBuffer_field_0x04)
    char q008[4];  /* unsigned char */  // 0x8 (was NetworkBuffer_field_0x08)
    char q00C[4];  /* unsigned char */  // 0xC (was NetworkBuffer_field_0x0C)
    static int GetField(void *aP1);  // raw 0x74fd50
    static int UpdateWindow(void *aP1, unsigned int a2, unsigned int a3);  // raw 0x74fd60
    static int GetField2();  // raw 0x74fda0
    static int GetField3();  // raw 0x74fdb0
};
#endif  // GAMEMD_G2_NetworkBuffer_DEF

#ifndef GAMEMD_G2_NetworkScore_DEF  // G42.57w14 carrier twin-guard (first-include wins)
#define GAMEMD_G2_NetworkScore_DEF 1
// === NetworkScore  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class NetworkScore {
public:
    char q000[4];  /* unsigned char */  // 0x0
};
#endif  // GAMEMD_G2_NetworkScore_DEF

#ifndef GAMEMD_G2_NetworkSession_DEF  // G42.57w14 carrier twin-guard (first-include wins)
#define GAMEMD_G2_NetworkSession_DEF 1
// === NetworkSession  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class NetworkSession {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was NetworkSession_field_0x04)
    static unsigned int * ResetState(void *aP1);  // raw 0x54ee60
    static char IsPlayerInGame(void *aP1, int a2);  // raw 0x69b600
};
#endif  // GAMEMD_G2_NetworkSession_DEF

#ifndef GAMEMD_G2_NetworkShare_DEF  // G42.57w14 carrier twin-guard (first-include wins)
#define GAMEMD_G2_NetworkShare_DEF 1
// === NetworkShare  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class NetworkShare {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int GetField(void *aP1, int a1);  // raw 0x5e8da0
};
#endif  // GAMEMD_G2_NetworkShare_DEF

// === ObjectManager  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class ObjectManager {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was ObjectManager_field_0x04)
    static int InitMessageList(void *aP1);  // raw 0x5d3a40
    static void CleanupArrays(void *aP1);  // raw 0x697840
};

// === OleUninitialize  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class OleUninitialize {
public:
    char q000[4];  /* unsigned char */  // 0x0
};

// === Performance  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class Performance {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was Performance_field_0x04)
    AbstractClass * Profile();  // 0x5355D0 sig=csp
    void MeasureTicks();  // 0x5CAFC0 sig=csp
};

// === PhoneEditor  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class PhoneEditor {
public:
    char q000[4];  /* unsigned char */  // 0x0
    ObjectClass * PopulateList();  // 0x631060 sig=csp
};

// === PlanningNodeClass  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class PlanningNodeClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was PlanningNodeClass_field_0x04)
    static void * CleanupAll(void *aP1);
    static char RemoveFromArray(void *aP1, int a2);  // raw 0x63ebd0
};

// === ProductionClass  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class ProductionClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int StartTimer(int aP1, char a2);  // raw 0x4c9ea0
};

// === SHPClass  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class SHPClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    int  Load(char * Source, char * a3, int a4);  // 0x642C20
};

// === SHPStruct  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class SHPStruct {
public:
    char unused[4];  /* int */  // 0x0
};

// === ScalarDtor  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class ScalarDtor {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static void ** DeleteAndZero_f(void *aP1, char a2);  // raw 0x7ad310
    static void ** DeleteAndZero(void *aP1, char a2);  // raw 0x7ad310
};

// === ScreenSaver  size=?  extracted from csp_canon/classes.hpp (W14-E4) ===
class ScreenSaver {
public:
    static TechnoTypeClass Process_f(void *aP1, void* a1, void* a2, void* a3);
    // --- W16G3 supply (BEGIN) ---
    static int Process(void *aP1);
    static int Process(void *aP1, void *a2);
    // --- W16G3 supply (END) ---

};

// === ScriptActionQueue  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class ScriptActionQueue {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int PushNext(void *aP1);  // raw 0x660b80
    char __tail_0[4];  // 0x0 (G57W14E1 til supply)
};

// === ScriptActionVector  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class ScriptActionVector {
public:
    char q000[4];  /* unsigned char */  // 0x0
    int  PushBack(unsigned int * a2);  // 0x63EB80
};

// === Scrollbar  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class Scrollbar {
public:
    char q000[4];  /* unsigned char */  // 0x0
};

// === SequenceStruct  size=1512  extracted from csp_canon/classes.hpp (W14-E4) ===
class SequenceStruct {
public:
    char Sequences[1512];  // 0x0
};

// === Sides  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class Sides {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int MixFileYuriFiles3();  // raw 0x72fbc0
};

// === SimpleDialogControl  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class SimpleDialogControl {
public:
    char q000[4];  /* unsigned char */  // 0x0
    int Constructor(void* a1);  // 0x624110 sig=csp
};

// === SkirmishMapGen  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class SkirmishMapGen {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was SkirmishMapGen_field_0x04)
    static char LookupDialogHash(void *aP1);  // raw 0x6067a0
};

// === SquadClass  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class SquadClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was SquadClass_field_0x04)
    static int SelectAllMembers(void *aP1);  // raw 0x7314c0
    static const void * ProcessMove(void *aP1);  // raw 0x731840
};

// === StartingTechnoVector  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class StartingTechnoVector {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static unsigned int * Construct(void *aP1, int a2, int a3);  // raw 0x510690
};

// === StringList  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class StringList {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int Find(void *aP1, const char *a2);  // raw 0x721210
};

// === SubzoneConnectionVector  size=12  extracted from csp_canon/classes.hpp (W14-E4) ===
class SubzoneConnectionVector {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was SubzoneConnectionVector_field_0x04)
    char q008[4];  /* unsigned char */  // 0x8 (was SubzoneConnectionVector_field_0x08)
    static char * Destruct(void *aP1, char a2);  // raw 0x40b070
    static void ClearAndFree(void *aP1);  // raw 0x588d60
    static int FindByCoord(void *aP1, int a2);  // raw 0x589c10
};

// === TabCameoListClass  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class TabCameoListClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    void AddCameo_ReplaceItAll(int a2, int a3);  // 0x6A8710
};

// === TabControl  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class TabControl {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was TabControl_field_0x04)
};

// === TacticalMapClass  size=8  extracted from csp_canon/classes.hpp (W14-E4) ===
class TacticalMapClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was TacticalMapClass_field_0x04)
    static unsigned int SetCameraPosition(void *aP1, int *a2);  // raw 0x6d6000
    static int ProcessCell(void *aP1, int16_t *a2, int a3);  // raw 0x6d7f20
};

// === TagClassVector  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class TagClassVector {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static unsigned int * Construct(void *aP1, int a2, int a3);  // raw 0x510640
};

// === TaskManager  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class TaskManager {
public:
    char q000[4];  /* unsigned char */  // 0x0
    int Update();  // 0x6B7100 sig=csp
};

// === TeknoClass  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class TeknoClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
};

// === TheatreClass  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class TheatreClass {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static void InitView(void *aP1);
};

// === World  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class World {
public:
    char q000[4];  /* unsigned char */  // 0x0
    static int ToScreen(void *aP1, void* a1, void* a2, void* a3, void* a4);
};

// === ZBuffer  size=4  extracted from csp_canon/classes.hpp (W14-E4) ===
class ZBuffer {
public:
    char q000[4];  /* unsigned char */  // 0x0
    void RenderSprite();  // 0x53D580 sig=csp
};

// === j_Options  size=1  extracted from csp_canon/classes.hpp (W14-E4) ===


// === rc_ptr_base  size=?  extracted from csp_canon/classes.hpp (W14-E4) ===
class rc_ptr_base {
public:
    char __pad_0[4];
    unsigned int u32_4;  /* unsigned int */  // 0x4
    char __pad_8[4];
    char u16_C[2];  /* unsigned int */  // 0xC
    char u8_E[1];  /* unsigned char */  // 0xE
    char u8_F[1];  /* unsigned char */  // 0xF
    AbstractClass * ptr_10;  // 0x10
    char u8_14[1];  /* unsigned char */  // 0x14
    char __pad_15[3];
    char u32_18[4];  /* unsigned int */  // 0x18
    char u8_1C[1];  /* unsigned char */  // 0x1C
    char __pad_1D[1];
    char u8_1E[1];  /* unsigned char */  // 0x1E
    char u8_1F[1];  /* unsigned char */  // 0x1F
    char u8_20[1];  /* unsigned char */  // 0x20
    char __pad_21[1];
    char u8_22[1];  /* unsigned char */  // 0x22
    char ptr_23[4];  /* unsigned char */  // 0x23
    char ptr_27[4];  /* unsigned char */  // 0x27
    char u8_2B[1];  /* unsigned char */  // 0x2B
    char u8_2C[1];  /* unsigned char */  // 0x2C
    char u8_2D[1];  /* unsigned char */  // 0x2D
    char u8_2E[1];  /* unsigned char */  // 0x2E
    char u8_2F[1];  /* unsigned char */  // 0x2F
    AbstractClass * q030;  // 0x30
    AbstractClass * q034;  // 0x34
    char q038[4];  /* unsigned int */  // 0x38
    char __pad_3C[4];
    char q040[4];  /* unsigned char */  // 0x40
    char q044[4];  /* unsigned char */  // 0x44
    AbstractClass * ptr_30;  // 0x48
    char __pad_4C[4];
    char q050[4];  /* unsigned char */  // 0x50
    char __pad_54[12];
    char q060[4];  /* unsigned int */  // 0x60
    char q064[4];  /* unsigned char */  // 0x64
    char q068[4];  /* unsigned char */  // 0x68
    char __pad_6C[4];
    char q070[4];  /* unsigned char */  // 0x70
    char __pad_74[12];
    char q080[4];  /* unsigned char */  // 0x80
    char q084[4];  /* unsigned char */  // 0x84
    char __pad_88[120];
    char q100[4];  /* unsigned char */  // 0x100
    char q104[4];  /* unsigned char */  // 0x104
    char __pad_108[12];
    AbstractClass * q114;  // 0x114
    char __pad_118[16];
    char q128[4];  /* unsigned char */  // 0x128
    char __pad_12C[4];
    AbstractClass * q130;  // 0x130
    char q134[4];  /* unsigned int */  // 0x134
    char __pad_138[24];
    char q150[4];  /* unsigned int */  // 0x150
    char __pad_154[192];
    char u32_214[4];  /* unsigned int */  // 0x214
    char __pad_218[64];
    char q258[4];  /* unsigned char */  // 0x258
    char __pad_25C[4];
    char q260[4];  /* unsigned char */  // 0x260
    char __pad_264[16];
    char q274[4];  /* unsigned char */  // 0x274
    char __pad_278[140];
    AbstractClass * q304;  // 0x304
    char q308[4];  /* unsigned int */  // 0x308
    // --- W16G3 supply (BEGIN) ---
    void* vfptr;  // 0x0 (W16G3: addr5A v7->vfptr/v7[1].vfptr raw usages)
    // --- W16G3 supply (END) ---

};

// G57W14E1 til mirror: _TypeList_W4DiskID (rawcache this=TypeList; WDT disk list)


// === CDROM  size=8  extracted from csp_canon/classes.hpp (W15F4) ===
// W15F4: E3 挂账补全 — 方法真值 = IDA live 2026-10-07 (两枚均为 __stdcall 自由形,
// IDA 归名 CDROM::; static 成员不改 sizeof). 使用点: addr47_e4 0x47a0ba/0x47a0e5 等.
class CDROM {
public:
    char q000[4];  /* unsigned char */  // 0x0
    char q004[4];  /* unsigned char */  // 0x4 (was CDROM_field_0x04)
    static int LockVolume(int a1, HANDLE hDevice, unsigned char a3,
                          unsigned long BytesReturned, short a5);  // raw 0x47A6F0
    static bool DeviceIoControl(HANDLE hDevice, int a2);  // raw 0x47A3F0
};

} // namespace gamemd
