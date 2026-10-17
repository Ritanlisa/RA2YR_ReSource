// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include <windows.h>  // G42.37 Win32-type supply (LPARAM/HWND in decls)



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VoxelStruct;  // fix_fwd_type_supply

#ifndef GAMEMD_E4_INIClass  // G42.57w14 twin-guard (shared w/ system/ini_class.hpp; first-include wins)
#define GAMEMD_E4_INIClass 1
struct INIClass {
    INILinkNode* __pad_0;  // 0x0
    char headNode[12];  // 0x4
    char sectionHead[12];  // 0x10
    int sectionCount;  // 0x1C
    char q020[12];  // 0x20
    int INIClass_field_2C;  // 0x2C
    int unknown30;  // 0x30
    bool needsSave_flag;  // 0x34
    char __pad_035[3];  // 0x35
    SortedArray* unknown38;  // 0x38
    void* INIClass_field_3C;  // 0x3C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char SetIntFormat(char *a1, char **a2, char **a3, int a4, int a5);  // [w14e3] raw 0x527640
    static int ParseValue_Wide(void *aP1, void *a2, void *a3, void *a4, void *a5, unsigned int a6);
    static unsigned int LookupEnum(uint8_t* p0, uint8_t* p1, int p2);  // x4:signals@0x474da0
    static int ReadInt(String *a2, String *a3, int a4);
    int ReadCoord(double *a1, double a2, uint8_t *a3, uint8_t *a4, int a5, int aP2, int aP1, int aP3);
    static ObjectClass * * BinarySearchSection(INIClass * aP1, void *a2);
    int GetKeyCount(INIClass * aP1, void *a2);
    char GetInt(char ** a2, char ** a3, unsigned int * a4);
    int GetBool(uint8_t *aP1, uint8_t *a2, int a4);
    int GetStringByIndex(CCINIClass * aP1, CCINIClass * aP2, void *a3);
    int ReadInt(void *a2, void *a3, int a4);
    int WOLobby_Play(const char *a1, const char *a2, int a3);
    int sub_44FE60();
    INIClass();
    static void * Constructor(void *aP1);
    static unsigned int GetString(unsigned __int8 *a2, unsigned __int8 *a3, char *Source, char *Destination, int Count);
    void SetGameOptionsPing(void *a1 = 0);
    static int ClearSection(INIClass * aP1, int a2, uint8_t *a3);
    static int GetBase64Data(INIClass * aP1, char *a2, int a3, size_t Size);
    static int GetPipIdx(INIClass * aP1, uint8_t *a2, uint8_t *a3, int a4);
    static int GetStringEx(INIClass * aP1, uint8_t *a2, uint8_t *a3, wchar_t *String, size_t Count);
    static int LoadFile(INIClass * aP1, int a2, char a3);
    static char ReadBase64Data(INIClass * aP1, uint8_t *Block, int a3, signed int Size);
    static int ReadBool_Overwrite(void * aP1, uint8_t *a2, uint8_t *a3, char a4);
    static int ReadDouble_Overwrite(INIClass * aP1, uint8_t *a2, uint8_t *a3, double a4);
    static int ReadRGBColorList(INIClass * aP1, int a2, uint8_t *a3, uint8_t *a4, void **a5, void *a6, int a7, int16_t a8, int a9, int a10, int a11);
    static int ResetSection(INIClass * aP1);
    static char SetBool(INIClass * aP1, uint8_t *Block, char *a3, char a4);
    static char SetRect(INIClass * aP1, uint8_t *Block, char *a3, unsigned int *a4);
    static int WriteDigest(INIClass * aP1, int a2, char a3);
    static int GetCoord(INIClass * aP1, int a2, uint8_t *a3, uint8_t *a4, uint8_t *a5);
    static int * ReadPoint3D_Overwrite(INIClass * aP1, int *a2, uint8_t *a3, int a4, unsigned int *a5);
    static int SetHouseName(INIClass * aP1, uint8_t *Block, char *a3, void *a4);
    static int * GetCoord2(INIClass * aP1, int *a2, uint8_t *a3, uint8_t *a4, int *a5);
    static char SetIntFormat(INIClass * aP1, char **a2, char **a3, int a4, int a5);
    static void ReadTokenizedPair(INIClass * aP1, unsigned int *a2, char **a3, void *a4, int a5, char **a6);
    static int SaveToPipe(INIClass * aP1, int a2);
static int WriteToString(INIClass * aP1, int a2);
    char **  GetStringByIndexEx(char ** a2, char ** a3, int a4);  // 0x526d90
    static int SetInt(INIClass * aP1, uint8_t *Block, char *a3, int a4, int a5);
    int ReadString(char **a1, char **a2, char **a3, int a4);  // 0x528c00
    static int ReadInt_Overwrite(void * aP1, uint8_t *a2, uint8_t *a3, int a4);
    unsigned int *  GetCoordPair(unsigned int * a2, char * Source, char ** a4, unsigned int * a5);  // 0x529a30
    int ReadDifficultyModifiers(void *a1 = 0);
    int FindKey(char **a2);
    unsigned int * GetRect(unsigned int *a2, char **a3, char **a4, int *a5);
    int SetDouble(uint8_t *Block, char *a3, double a4);
    char SetString(uint8_t *Block, char *a3, char *Source, void *a1 = 0);
    void MapDialogResource(void *a1 = 0);
    int InitializeGameSettings();
    int RunModemDialing(int a2, int a3, char a4);
    AbstractClass * * MapControlToAction(HWND hWnd, LPARAM);
    int StopBink();
    int HandleTabKey(HWND hWnd, LPARAM);
    AbstractClass * * DispatchEvent(HWND hWnd, LPARAM);
    AbstractClass * * InitWindow(int a1, int a2);
    AbstractClass * * InitializeControls(HWND hWnd, LPARAM);
    AbstractClass * * DestroyDialogSystem();
    AbstractClass * * Resize(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    AbstractClass * * DrawBackground(HWND hWnd);
    int Destroy(void *a1 = 0);
    CampaignClass * * CleanupTree();
    int UpdateControlState(unsigned int * a2, unsigned int * a3);
    AbstractClass * * GrowBuffer();
    AbstractClass * * BindGadgetData(int *a2, char *Block, void *a1 = 0);
    INIClass * * ReadMultiplayerDialogSettings();
    int FindByHandle();
    int GetCurrent();
    int SideIDToIndex(void *a1 = 0);
    int OptionIDToIndex();
    int FindGameUI();
    HWND ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2);
    int MapPlayerIDToIndex(void *a1 = 0);
    unsigned int CheckButtonState();
    BOOL EnumAndCleanup(void *a1 = 0);
    BOOL SubclassEditControl(HWND hWnd, LPARAM);
    HWND Show();
    char PumpMessages(void *a1 = 0);
    int FindByPtr(void *a1 = 0);
    BOOL GetField(void *a1 = 0, void *a2 = 0);
    HWND RestoreParent();
    char UpdateGameUI();
    HWND CloseAll();
    unsigned int GetString(uint8_t *a2, uint8_t *a3, char *Source, char *Destination, int Count, int aP4, int aP1, int aP3, int a1, int a4, int a5, int aP2);
    int ReadInt(String *a2, String *a3, int a4, int aP2, int aP1, int a1, int aP3);
    static int ParseValue(unsigned int* p0, uint8_t* p1, uint8_t* p2, unsigned int* p3);  // x4:signals@0x527cc0
};
#endif  // GAMEMD_E4_INIClass

} // namespace gamemd
