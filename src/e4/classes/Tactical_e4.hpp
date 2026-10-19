// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct InfantryClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct FacingStruct;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct ScenarioClass;  // fix_fwd_type_supply
struct MouseClass;  // fix_fwd_type_supply
struct Tactical {
    char ptr_0[2];  // 0x0
    unsigned char Tactical_field_0x2[4];  // 0x2
    char __pad_6[2];  // 0x6
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    char __pad_10[32];  // 0x10
    int Tactical_field_0x30;  // 0x30
    unsigned int q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    char __pad_40[12];  // 0x40
    unsigned int q04C;  // 0x4C
    char __pad_50[20];  // 0x50
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    char __pad_6C[4];  // 0x6C
    unsigned char q070;  // 0x70
    char __pad_71[1];  // 0x71
    unsigned char u32_72;  // 0x72
    char __pad_73[1];  // 0x73
    bool q074;  // 0x74
    char __pad_75[47];  // 0x75
    unsigned int q0A4;  // 0xA4
    int Tactical_field_0xA8;  // 0xA8
    char __pad_AC[4];  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    char __pad_B8[4];  // 0xB8
    unsigned int u32_BC;  // 0xBC
    char __pad_C0[32];  // 0xC0
    unsigned int u32_E0;  // 0xE0
    char __pad_E4[16];  // 0xE4
    int q0F4;  // 0xF4
    int q0F8;  // 0xF8
    char __pad_FC[9];  // 0xFC
    bool q105;  // 0x105
    char __pad_106[21];  // 0x106
    char Tactical_field_0x11B[4];  // 0x11B
    char __pad_11F[39];  // 0x11F
    unsigned char u32_146;  // 0x146
    char __pad_147[3126];  // 0x147
    unsigned char u32_D7D;  // 0xD7D
    char __pad_D7E[38];  // 0xD7E
    int Tactical_field_0xDA4;  // 0xDA4
    char __pad_DA8[12];  // 0xDA8
    int Tactical_field_0xDB4;  // 0xDB4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void * ConstructTacticalSurface();  // 0x42A6D0
    int CreateTacticalLightSurface(Tactical *aP1, int *a2, unsigned int *a3, unsigned int *a4, int *a5, int a6, int a7);  // G57w10-S raw 0x00484050 IUnknown 占位清除
ScenarioClass * * CalculateTacticalLighting(int * a1, IUnknown * aP2, int * a3, int * a4, IUnknown * aP5, int * a6, long long a8, void *a8_2);
    unsigned int * MouseMove(unsigned int *aP1, unsigned int *aP2, void *a3 = 0);  // 0x4A91B0
    int IsCellVisible(IUnknown * aP1);  // G57w10-S raw 0x00568350 IUnknown 占位清除
    void * GetCellData(void *a1 = 0);  // 0x58C2A0
    int MouseOver(MouseClass * aP0, MouseClass * aP1, MouseClass * aP2, MouseClass * aP3, MouseClass * aP4, MouseClass * aP5);  // 0x692300
    MouseClass * * HandleTacticalMouseInput(int _28, unsigned int * a2, int a4, MouseClass * aP4, void *a5_1);  // 0x6930A0
    int UpdateUIVisibility();  // 0x6A6610
    void DisplayTacticalOverlayText(wchar_t * String);  // 0x6D4E20
    unsigned int SetTacticalPosition(int *aP1, void *a2 = 0);  // 0x6D6070
    unsigned int * PixelToCell(unsigned int *aP1, int *aP2);  // 0x6D6590
    int AddCellToDrawList(int aP1, void *a2 = 0);  // 0x6DA7D0
    void* DrawTacticalConnectorLines();  // 0x6DB210
    int DrawOverlay(int * a1, BuildingTypeClass * aP2, int a4, int a5);  // 0x6DBB60
    Tactical *  UpdateView(char a2);  // 0x6DC470
    char * SetCellTransform(int a2, int aP2, int a4, int aP4, int a6, int a7, void *a7_1 = 0);  // 0x4A35F0
    int  Init(unsigned int * a2, void *a1 = 0);  // 0x6E4970
    char  SelectObject(int a2, void *a2_2 = 0);  // 0x4F4450
    int *  ScrollMap(int a2);  // 0x6DA560
    int  InitMap(int a2, int a2_x = 0);  // 0x6DBD20
    int  UpdateMapView(int * a2, int a3);  // 0x6DBE00
    int  ddtor(unsigned int * a2);  // 0x6DBCE0
    int StubReturn56();  // 0x6DC450
    int StubReturn3608();  // 0x6DC460
    int UpdateUIVisibility(void *a1_1);
    int Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1);
};
} // namespace gamemd
