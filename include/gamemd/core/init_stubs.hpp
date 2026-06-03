// InitGame pipeline stubs — functions called by InitGame (IDA 0x52BA60)
// Each function annotated with its IDA address. All are stubs pending full translation.
#pragma once
#include <windows.h>
#include <cstdint>

namespace gamemd {

// --- Forward-declare classes needed by InitGame ---
class CCFileClass;      // include/gamemd/system/cc_file.hpp
class CCINIClass;       // include/gamemd/misc/rules.hpp (fwd)
class INIClass;
class ConvertClass;     // include/gamemd/system/convert_class.hpp
class WWMouseClass;     // include/gamemd/ui/mouse.hpp

// ============================================================
// InitGame pipeline functions (all IDA-annotated stubs)
// ============================================================

// IDA 0x4A3C30 — FadePalette
void FadePalette(int mode);

// IDA 0x4790B0 — SetSoundWarning
void SetSoundWarning(int level);

// IDA 0x54F000 — EventQueue::Process (per-frame event pump)
void EventQueueProcess(void* bink_player);

// IDA 0x5BC450 — GetTextBufferEntry
int GetTextBufferEntry(int index);

// IDA 0x5BCC90 — TextBuffer::Init
void TextBufferInit(int buffer);

// IDA 0x434AD0 — BitTextClass::LoadFont
void* BitTextClassLoadFont(void* mem);

// IDA 0x60D430 — Init::StubPlaceholder
void InitStubPlaceholder();

// IDA 0x72AA40 — LoadMouseClassResources
void LoadMouseClassResources();

// IDA 0x406B10 — InitializeAudioSubsystem
int InitializeAudioSubsystem(void* hwnd_or_flag);

// IDA 0x54F720 — Timer::PumpMessages
void TimerPumpMessages(void* bink_player);

// IDA 0x4355B0 — Palette::6BitTo16Bit (6-bit RGB → 16-bit packed color)
int Palette6BitTo16Bit(int r, int g, int b);

// IDA 0x4B9BD0 — Struct::Zero3 (zero-fill 3 bytes)
void StructZero3(void* ptr, int count);

// IDA 0x753B70 — VoxelPaletteClass::LoadFromFile
void VoxelPaletteLoadFromFile(const char* path);

// IDA 0x5AE860 — Matrix3x4::Identity
void Matrix3x4Identity(float* m);

// IDA 0x754C00 — Voxel::SetProjectionAngle
void VoxelSetProjectionAngle(float angle);

// IDA 0x754CB0 — Voxel::ProjectionSetup
void VoxelProjectionSetup();

// IDA 0x4068F0 — Array::ForEach (zero-fill 3-byte strides)
void ArrayForEach3ByteZero(void* buf, int stride, int count);

// IDA 0x530000 — LoadExpansionMixFiles
bool LoadExpansionMixFiles();

// IDA 0x4A38D0 — LoadFileSHP
int LoadFileSHP(const char* filename);

// IDA 0x5BDA80 — Mission::SetAndCall
void MissionSetAndCall(int a, int b);

// IDA 0x48D080 — Event::Dispatch
void EventDispatchEx();

// IDA 0x47AB10 — Game::FindGameDirectoryCD
int FindGameDirectoryCD(const char* drives);

// IDA 0x5D3490 — Dialog::ShowMessageBox (returns 1=OK, 0=Cancel)
int DialogShowMessageBox(const wchar_t* msg, const wchar_t* ok, const wchar_t* cancel, int a4, int a5);

// IDA 0x530460 — MixFile::LoadAll (secondary MIX loading)
bool MixFileLoadAll();

// IDA 0x5BED40 — Movie::Play
void MoviePlay(int a1, int a2, int a3, int a4);

// IDA 0x5312A0 — ShowLoadingScreen
void ShowLoadingScreen();

// IDA 0x52CB90 — Credits::Screen
void CreditsScreen();

// IDA 0x5FA620 — GameSettings::Read
void GameSettingsRead(int mode);

// IDA 0x75A790 — AnimSystem::Init
void AnimSystemInit();

// IDA 0x75A7D0 — ResetAnimSystem
void ResetAnimSystem(int mode);

// IDA 0x6D1C20 — TacticalMap::Construct
void* TacticalMapConstruct(void* mem);

// IDA 0x535AA0 — INIClass::Constructor
void INIClassConstruct(void* buf);

// IDA 0x4741F0 — CCINIClass::Load
bool CCINIClassLoad(void* ini, void* file, int a2, int a3);

// IDA 0x5256F0 — HashTable::DestroyHashTableINIClass
void DestroyHashTableINIClass(void* ini);

// IDA 0x7513F0 — Audio::LoadSoundINI
void AudioLoadSoundINI();

// IDA 0x7510D0 — Audio::InitFromINI
void AudioInitFromINI(void* ini);

// IDA 0x7531A0 — LoadINIEVA
void LoadINIEVA();

// IDA 0x753000 — InitFromINIEVA
void InitFromINIEVA(void* ini);

// IDA 0x720770 — ThemeManager::Cleanup
void ThemeManagerCleanup();

// IDA 0x720590 — ThemeClass::InitializeThemes
void ThemeClassInitializeThemes(void* ini);

// IDA 0x7207F0 — Audio::LoadWAVFiles
void AudioLoadWAVFiles();

// IDA 0x531680 — InitBulkData
bool InitBulkData();

// IDA 0x52CD70 — InitRules
bool InitRules();

// IDA 0x4093B0 — Audio::Callback
int AudioCallback();

// IDA 0x52CB50 — PlayIntroSequence
void PlayIntroSequence();

// IDA 0x52FC20 — InitRandomSeed
void InitRandomSeed();

// IDA 0x532150 — InitCommands
void InitCommands();

// IDA 0x5D7CE0 — CompleteGameInit
void CompleteGameInit();

// IDA 0x5B40B0 — SearchMIXFile
const void* SearchMIXFile(const char* name);

// IDA 0x6260D0 — Block::Copy
void BlockCopy(const void* src);

// IDA 0x4739F0 — CCFileClass::Construct
void* CCFileClassConstruct(void* buf, const char* filename);

// IDA 0x473C50 — CCFileClass::Open
bool CCFileClassOpen(void* file, int mode);

// IDA 0x4A3890 — CCFileClass::ReadEntireFile
void* CCFileClassReadEntireFile(void* file);

// IDA 0x473CE0 — CCFileClass::Reset
void CCFileClassReset(void* file);

// IDA 0x535A70 — CCFileClass::Destruct (BufferIOFileClass::Destruct)
void CCFileClassDestruct(void* file);

// IDA 0x43AE50 — Vector::Clear
void VectorClear(void* vec);

// IDA 0x535B30 — CCINIClass::Constructor
void CCINIClassConstruct(void* buf);

// IDA 0x6728B0 — RulesClass::LoadAnimTypes
void LoadAnimTypes(void* rules_ini);

// IDA 0x672660 — RulesClass::LoadBuildingTypes
void LoadBuildingTypes(void* rules_ini);

// IDA 0x48E740 — ConvertClass::Construct
void* ConvertClassConstruct(void* palette, void* temperat_pal, void* surface, int count, int flags);

} // namespace gamemd
