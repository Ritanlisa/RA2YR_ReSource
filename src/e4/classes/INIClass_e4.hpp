// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include <windows.h>  // G42.37 Win32-type supply (LPARAM/HWND in decls)



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VoxelStruct;  // fix_fwd_type_supply

#ifndef GAMEMD_E4_INIClass  // G42.57w14 twin-guard (shared w/ system/ini_class.hpp; first-include wins)
#define GAMEMD_E4_INIClass 1
struct INIClass {
    static char SetIntFormat(char *a1, char **a2, char **a3, int a4, int a5);  // [w14e3] raw 0x527640
    static int ParseValue_Wide(void *aP1, void *a2, void *a3, void *a4, void *a5, unsigned int a6);  // 0x528F00 raw: int ParseValue_Wide(INIClass*, unsigned __int8*, unsigned __int8*, wchar_t*, wchar_t*, size_t)

// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char __tail_0[2];  // 0x0
    char headNode[12];  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned int q00D;  // 0xD
    char sectionHead[12];  // 0x10
    unsigned int q014;  // 0x14
    unsigned int q018;  // 0x18
    char sectionCount[4];  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int q024;  // 0x24
    VoxelStruct * q028;  // 0x28
    char INIClass_field_2C[4];  // 0x2C
    char unknown30[4];  // 0x30
    unsigned int INIClass_field_3C;  // 0x3C
    unsigned int Capacity;
    unsigned int IsAllocated;
    unsigned int IsInitialized;
    unsigned int Items;
    unsigned int *__pad_0;
    unsigned int *__pad_20;
    unsigned int q0146;
    unsigned int vtable0;

    unsigned int unknown38;
    unsigned int INISection;
    unsigned int Debug;
    unsigned int Event;



    void* LookupEnum;  // 0x0 (no offset truth)

// --- flat members (END) ---
    int ReadCoord(double *a1, double a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5, int aP2, int aP1, int aP3);
    static ObjectClass * * BinarySearchSection(INIClass * aP1, void *a2);  // G57w11: +static raw 0x00526810 __thiscall receiver-first (sibling G57w10-S form)
    VoxelStruct * * GetKeyCount(INIClass * aP1, void *a2);
    char GetInt(char ** a2, char ** a3, unsigned int * a4);
    int GetBool(uint8_t *aP1, uint8_t *a2, int a4);
    int GetStringByIndex(CCINIClass * aP1, CCINIClass * aP2, void *a3);
    int ReadInt(String *a2, String *a3, int a4);
    int WOLobby_Play(const char *a1, const char *a2, int a3);
    int sub_44FE60();
    INIClass();
    static unsigned int GetString(unsigned __int8 *a2, unsigned __int8 *a3, char *Source, char *Destination, int Count);
    void SetGameOptionsPing();
    static int ClearSection(INIClass * aP1, int a2, unsigned __int8 *a3);  // G57w10-S raw 0x005257C0 (was C2597 interim stub)
    static int GetBase64Data(INIClass * aP1, char *a2, int a3, size_t Size);  // G57w10-S raw 0x00526FB0 (was C2597 interim stub)
    static int GetPipIdx(INIClass * aP1, unsigned __int8 *a2, unsigned __int8 *a3, int a4);  // G57w10-S raw 0x004748A0 (was C2597 interim stub)
    static int GetStringEx(INIClass * aP1, unsigned __int8 *a2, unsigned __int8 *a3, wchar_t *String, size_t Count);  // G57w10-S raw 0x00529160 (was C2597 interim stub)
    static int LoadFile(INIClass * aP1, int a2, char a3);  // G57w10-S raw 0x00525A60 (was C2597 interim stub)
    static char ReadBase64Data(INIClass * aP1, unsigned __int8 *Block, int a3, signed int Size);  // G57w10-S raw 0x00526E80 (was C2597 interim stub)
    static int ReadBool_Overwrite(INIClass * aP1, unsigned __int8 *a2, unsigned __int8 *a3, char a4);  // G57w10-S raw 0x005295F0 (was C2597 interim stub)
    static int ReadDouble_Overwrite(INIClass * aP1, unsigned __int8 *a2, unsigned __int8 *a3, double a4);  // G57w10-S raw 0x005283D0 (was C2597 interim stub)
    static int ReadRGBColorList(INIClass * aP1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, void **a5, void *a6, int a7, __int16 a8, int a9, int a10, int a11);  // G57w10-S raw 0x00476B20 (was C2597 interim stub)
    static int ResetSection(INIClass * aP1);  // G57w10-S raw 0x00526B00 (was C2597 interim stub)
    static char SetBool(INIClass * aP1, unsigned __int8 *Block, char *a3, char a4);  // G57w10-S raw 0x00529560 (was C2597 interim stub)
    static char SetRect(INIClass * aP1, unsigned __int8 *Block, char *a3, unsigned int *a4);  // G57w10-S raw 0x00527C10 (was C2597 interim stub)
    static int WriteDigest(INIClass * aP1, int a2, char a3);  // G57w10-S raw 0x00474430 (was C2597 interim stub)
    static int GetCoord(INIClass * aP1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, unsigned __int8 *a5);  // G57w10-S raw 0x00474B50 (was C2597 interim stub)
    static int * ReadPoint3D_Overwrite(INIClass * aP1, int *a2, unsigned __int8 *a3, int a4, unsigned int *a5);  // G57w10-S raw 0x00529CA0 (was C2597 interim stub)
    static int SetHouseName(INIClass * aP1, unsigned __int8 *Block, char *a3, void *a4);  // G57w10-S raw 0x00475610 (was C2597 interim stub)
    static int * GetCoord2(INIClass * aP1, int *a2, unsigned __int8 *a3, unsigned __int8 *a4, int *a5);  // G57w10-S raw 0x00476420 (was C2597 interim stub)
    static char SetIntFormat(INIClass * aP1, char **a2, char **a3, int a4, int a5);  // G57w10-S raw 0x00527640 (was C2597 interim stub)
    static void ReadTokenizedPair(INIClass * aP1, unsigned int *a2, char **a3, void *a4, int a5, char **a6);  // G57w10-S raw 0x007710B0 (was C2597 interim stub)
    static int SaveToPipe(INIClass * aP1, int a2);  // G57w10-S raw 0x00526420 (was C2597 interim stub)
static int WriteToString(INIClass * aP1, int a2);  // G57w10-S raw 0x00526470 (was C2597 interim stub)
    char ** GetStringByIndexEx(char **a2, char **a3, int a4);  // 0x526d90
    static int SetInt(INIClass * aP1, unsigned __int8 *Block, char *a3, int a4, int a5);  // G57w10-S raw 0x005275C0 (was C2597 interim stub)
    int ReadString(char **aP1, char **aP2, char **aP3, int a5);  // 0x528c00
    static int ReadInt_Overwrite(INIClass * aP1, unsigned __int8 *a2, unsigned __int8 *a3, int a4);  // G57w10-S raw 0x005276D0 (was C2597 interim stub)
    unsigned int * GetCoordPair(unsigned int *a2, char *Source, char **a4, unsigned int *a5);  // 0x529a30
    int ReadDifficultyModifiers(); // N_fix R5 supply (cache truth)
    int FindKey(char **a2); // N_fix R5 supply (cache truth)
    unsigned int * GetRect(_DWORD *a2, char **a3, char **a4, int *a5); // N_fix R5 supply (cache truth)
    int SetDouble(unsigned __int8 *Block, char *a3, double a4); // N_fix R5 supply (cache truth)
    char SetString(unsigned __int8 *Block, char *a3, char *Source); // N_fix R5 supply (cache truth)
    void MapDialogResource();
    int InitializeGameSettings();
    int RunModemDialing(int a2, int a3, char a4);
    AbstractClass * * MapControlToAction(HWND hWnd, LPARAM);
    int StopBink();
    int HandleTabKey(HWND hWnd, LPARAM);
    AbstractClass * * DispatchEvent(HWND hWnd, LPARAM);
    AbstractClass * * InitWindow(int a1, int a2);
    AbstractClass * * InitializeControls(HWND hWnd, LPARAM);
    AbstractClass * * DestroyDialogSystem();
    AbstractClass * * Resize();
    AbstractClass * * DrawBackground(HWND hWnd);
    int Destroy();
    CampaignClass * * CleanupTree();
    int UpdateControlState(unsigned int * a2, unsigned int * a3);
    AbstractClass * * GrowBuffer();
    AbstractClass * * BindGadgetData(int *a2, char *Block);
    INIClass * * ReadMultiplayerDialogSettings();
    int FindByHandle();
    int GetCurrent();
    int SideIDToIndex();
    int OptionIDToIndex();
    int FindGameUI();
    HWND ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2);
    int MapPlayerIDToIndex();
    unsigned int CheckButtonState();
    BOOL EnumAndCleanup();
    BOOL SubclassEditControl(HWND hWnd, LPARAM);
    HWND Show();
    char PumpMessages();
    int FindByPtr();
    BOOL GetField();
    HWND RestoreParent();
    char UpdateGameUI();
    HWND CloseAll();
    unsigned int GetString(unsigned __int8 *a2, unsigned __int8 *a3, char *Source, char *Destination, int Count, int aP4, int aP1, int aP3, int a1, int a4, int a5, int aP2);
    int ReadInt(String *a2, String *a3, int a4, int aP2, int aP1, int a1, int aP3);
};
#endif  // GAMEMD_E4_INIClass

} // namespace gamemd
