// InitGame pipeline stubs -- functions called by InitGame (IDA 0x52BA60)
// Each function annotated with its IDA address. All are stubs pending full translation.
#pragma once
#include <windows.h>
#include <cstdint>

namespace gamemd {

// --- Forward-declare classes needed by InitGame ---
class CCFileClass;      // src/system/cc_file.hpp
class CCINIClass;       // src/misc/rules.hpp (fwd)
class INIClass;
class ConvertClass;     // src/system/convert_class.hpp
class WWMouseClass;     // src/ui/mouse.hpp

// ============================================================
// InitGame pipeline functions (all IDA-annotated stubs)
// ============================================================

// IDA 0x4A3C30 -- FadePalette
void FadePalette(int mode);  // 0x4A3C30

// IDA 0x4790B0 -- SetSoundWarning
void SetSoundWarning(int level);  // 0x4790B0

// IDA 0x54F000 -- EventQueue::Process (per-frame event pump)
void EventQueueProcess(void* bink_player);  // 0x54F000

// IDA 0x5BC450 -- GetTextBufferEntry
int GetTextBufferEntry(int index);  // 0x5BC450

// IDA 0x5BCC90 -- TextBuffer::Init
void TextBufferInit(int buffer);  // 0x5BCC90

// IDA 0x434AD0 -- BitTextClass::LoadFont
void* BitTextClassLoadFont(void* mem);  // 0x434AD0

// IDA 0x60D430 -- Init::StubPlaceholder
void InitStubPlaceholder();  // 0x60D430

// IDA 0x72AA40 -- LoadMouseClassResources
void LoadMouseClassResources();  // 0x72AA40

// IDA 0x406B10 -- InitializeAudioSubsystem
int InitializeAudioSubsystem(void* hwnd_or_flag);  // 0x406B10

// IDA 0x6C8C40 -- Timer::GetTicks (returns timeGetTime() >> 4)
int TimerGetTicks();  // 0x6C8C40

// IDA 0x54F720 -- Timer::PumpMessages
void TimerPumpMessages(void* bink_player);  // 0x54F720

// IDA 0x4355B0 -- Palette::6BitTo16Bit (6-bit RGB -> 16-bit packed color)
int Palette6BitTo16Bit(int r, int g, int b);

// IDA 0x4B9BD0 -- Struct::Zero3 (zero-fill 3 bytes)
void StructZero3(void* ptr, int count);  // 0x4B9BD0

// IDA 0x753B70 -- VoxelPaletteClass::LoadFromFile
void VoxelPaletteLoadFromFile(const char* path);  // 0x753B70

// IDA 0x5AE860 -- Matrix3x4::Identity
void Matrix3x4Identity(float* m);

// IDA 0x754C00 -- Voxel::SetProjectionAngle
void VoxelSetProjectionAngle(float angle);  // 0x754C00

void VoxelProjectionSetup();

// IDA 0x4068F0 -- Array::ForEach (zero-fill 3-byte strides)
void ArrayForEach3ByteZero(void* buf, int stride, int count);

// IDA 0x530000 -- LoadExpansionMixFiles
bool LoadExpansionMixFiles();  // 0x530000

// IDA 0x4A38D0 -- LoadFileSHP
int LoadFileSHP(const char* filename);  // 0x4A38D0

// IDA 0x5BDA80 -- Mission::SetAndCall
void MissionSetAndCall(int a, int b);  // 0x5BDA80

// IDA 0x48D080 -- Event::Dispatch
void EventDispatchEx();

// IDA 0x47AB10 -- Game::FindGameDirectoryCD
int FindGameDirectoryCD(const char* drives);  // 0x47AB10

// IDA 0x5D3490 -- Dialog::ShowMessageBox (returns 1=OK, 0=Cancel)
int DialogShowMessageBox(const wchar_t* msg, const wchar_t* ok, const wchar_t* cancel, int a4, int a5);  // 0x5D3490

// IDA 0x530460 -- MixFile::LoadAll (secondary MIX loading)
bool MixFileLoadAll();  // 0x530460

// IDA 0x5BED40 -- Movie::Play
void MoviePlay(int a1, int a2, int a3, int a4);  // 0x5BED40

// IDA 0x5312A0 -- ShowLoadingScreen
void ShowLoadingScreen();  // 0x5312A0

// IDA 0x52CB90 -- Credits::Screen
void CreditsScreen();  // 0x52CB90

// IDA 0x5FA620 -- GameSettings::Read
void GameSettingsRead(int mode);  // 0x5FA620

// IDA 0x75A790 -- AnimSystem::Init
void AnimSystemInit();  // 0x75A790

// IDA 0x75A7D0 -- ResetAnimSystem
void ResetAnimSystem(int mode);  // 0x75A7D0

// IDA 0x6D1C20 -- TacticalMap::Construct
void* TacticalMapConstruct(void* mem);  // 0x6D1C20

// IDA 0x535AA0 -- INIClass::Constructor
void INIClassConstruct(void* buf);

// IDA 0x4741F0 -- CCINIClass::Load
bool CCINIClassLoad(void* ini, void* file, int a2, int a3);  // 0x4741F0

// IDA 0x5256F0 -- HashTable::DestroyHashTableINIClass
void DestroyHashTableINIClass(void* ini);  // 0x5256F0

// IDA 0x7513F0 -- Audio::LoadSoundINI
void AudioLoadSoundINI();  // 0x7513F0

// IDA 0x7510D0 -- Audio::InitFromINI
void AudioInitFromINI(void* ini);  // 0x7510D0

// IDA 0x7531A0 -- LoadINIEVA
void LoadINIEVA();  // 0x7531A0

// IDA 0x753000 -- InitFromINIEVA
void InitFromINIEVA(void* ini);  // 0x753000

// IDA 0x720770 -- ThemeManager::Cleanup
void ThemeManagerCleanup();  // 0x720770

// IDA 0x720590 -- ThemeClass::InitializeThemes
void ThemeClassInitializeThemes(void* ini);  // 0x720590

// IDA 0x7207F0 -- Audio::LoadWAVFiles
void AudioLoadWAVFiles();  // 0x7207F0

// IDA 0x531680 -- InitBulkData
bool InitBulkData();  // 0x531680

// IDA 0x52CD70 -- InitRules
bool InitRules();  // 0x52CD70

// IDA 0x4093B0 -- Audio::Callback
int AudioCallback();  // 0x4093B0

// IDA 0x52CB50 -- PlayIntroSequence
void PlayIntroSequence();  // 0x52CB50

// IDA 0x52FC20 -- InitRandomSeed
void InitRandomSeed();  // 0x52FC20

// IDA 0x532150 -- InitCommands
void InitCommands();  // 0x532150

// IDA 0x5D7CE0 -- CompleteGameInit
void CompleteGameInit();  // 0x5D7CE0

// IDA 0x6BB390 -- RegisterClassesCOM (single class registry writer)
void RegisterAllClasses();

// IDA 0x49F5C0 -- CopyProtection::CheckLauncher (always TRUE -- bypassed)
bool CopyProtectionCheckLauncher();  // 0x49F5C0

// IDA 0x49F620 -- CopyProtection::NotifyLauncher (always TRUE -- bypassed)
bool CopyProtectionNotifyLauncher();  // 0x49F620

// IDA 0x49F7A0 -- CopyProtection::CheckProtectedData (always TRUE -- bypassed)
bool CopyProtectionCheckProtectedData();  // 0x49F7A0

} // namespace gamemd
