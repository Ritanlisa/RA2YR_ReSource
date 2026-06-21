#pragma once

// Forward declarations — system types
namespace gamemd {

class AlphaShapeClass;
class AudioMixer;
class COMObject;
class CRC32;
class Cell;
class CellClass;
class Coord;
class CoordList;
class CoordinateTables;
class Factory;
class FactoryClass;
class FileFind;
class FileSystem;
class FileTree;
class GameConfig;
class INIClass;
class LinkedList;
class Map;
class MapClass;
class MapCoords;
class MapData;
class MapSeedClass;
class MapSizeGameOption_WorldDominationTour;
class MixFile;
class MixFileClass;
class Mixer;
class Radar;
class RadarClass;
class Scenario;
class ScenarioClass;
class Sides;
class Tactical;
class TacticalClass;
class Winsock;
struct CellStruct;
struct CoordStruct;
struct Point2D;
struct RectangleStruct;

// ======== Global Functions ========

               int  EndFrameAudioMixer();                  // 0x4010C0
              int*  LoadSampleAudioMixer();                  // 0x401C00
               int  SetupSampleAudioMixer();                  // 0x407100
               int  EndBufferMixer();                  // 0x407150
               int  RequestBufferMixer();                  // 0x407170
               int  SetRateMixerSample();                  // 0x4071A0
               int  ThreadAudioMixerMain();                  // 0x407B60
               int  LoadFileClassToBuffer();                  // 0x4A3970
              void  LoadTheaterClassMIX();                  // 0x5349C0
               int  AccumulateMIXFileIndex();                  // 0x544E30
              int*  InsertIntoHashTree();                  // 0x5B3FF0
              void  RehashGenericHashMap();                  // 0x5E5F10
               int  ComputeHashModPrime();                  // 0x620CD0
               int  HashStringMod31();                  // 0x626660
            float*  ConvertMatrixToQuaternion();                  // 0x646730
               int  ComputeNetworkFrameCRC();                  // 0x64DAB0
               int  ComputeHash();                  // 0x64DE80
          wchar_t*  GetStringCSF();                  // 0x734E60
              void  ConvertDateMonthNames();                  // 0x779230
               int  DSP_AudioMixBuffers();                  // 0x7BF740
               int  ___crtGetStringTypeA();                  // 0x7D9729
               int  ___crtGetStringTypeW();                  // 0x7DA0F1
      unsigned int  ConvertRGB24to556();                  // 0x7DE200
      unsigned int  ConvertRGB24toRGB565();                  // 0x7DE53A
      unsigned int  ConvertRGB24to655();                  // 0x7DE87A
      unsigned int  ConvertRGB24to565();                  // 0x7DEBBA

// ── AlphaShapeClass ────────────────────────────────────────

               int  AlphaShapeClass::SD_vt03();                  // 0x420D40
               int  AlphaShapeClass::SD_vt05();                  // 0x420DE0
               int  AlphaShapeClass::SD_vt06();                  // 0x420E40

// ── AudioMixer ─────────────────────────────────────────────

               int  AudioMixer_PlayBuffer();                  // 0x4061D0
               int  AudioMixer::Pump();                  // 0x753620
               int  AudioMixer_RequestOrEndBuffer();                  // 0x406270
               int  AudioMixer::Shutdown();                  // 0x406E80

// ── COMObject ──────────────────────────────────────────────

               int  COMObject::GetStringValue();                  // 0x55AB40

// ── CRC32 ──────────────────────────────────────────────────

               int  CRC32_Compute();                  // 0x4A1FB0

// ── Cell ───────────────────────────────────────────────────

              char  Cell::CanPlaceBuilding();                  // 0x43B4C0
              char  Cell::CreateCrater();                  // 0x6D2790
               int  Cell::GetAdjacencyFlags();                  // 0x579B70
               int  Cell::GetAdjacentPassableMask();                  // 0x6D8700
               int  Cell::GetGroundHeight();                  // 0x578080
              bool  Cell::IsPassable();                  // 0x586360
              char  Cell::IsPassableAllied();                  // 0x578AD0
               int  Cell::PosToLinearIndex();                  // 0x56BC50
              char  Cell::SetTileType();                  // 0x56EB80
              char  Cell::UpdateTileType();                  // 0x56E990

// ── CellClass ──────────────────────────────────────────────

              char  CellClass::CheckTilePassable();                  // 0x57CCF0
              char  CellClass::CheckTilePassable2();                  // 0x57BAA0
               int  CellClass::GetByte284();                  // 0x6D6AD0
               int  CellClass::GetTileData();                  // 0x56BCD0
              char  CellClass::SetTileType13();                  // 0x572B80
              char  CellClass::SetTileType14();                  // 0x572C90
               int  CellClass_SetWallOwner();                  // 0x47D210
               int  CellClass::SpiralFindClosest();                  // 0x5865F0
              char  CellClass::UpdateTerrain();                  // 0x56F8B0
              char  CellClass::UpdateTileVariant2();                  // 0x56FC80
              char  CellClass::UpdateVariant3();                  // 0x56EF50
              char  CellClass::UpdateVariant4();                  // 0x56F2F0
              char  CellClass::UpdateVariant5();                  // 0x572DA0
              char  CellClass::UpdateVariant6();                  // 0x573170
              char  CellClass::UpdateVariant7();                  // 0x572440
              char  CellClass::UpdateVariant8();                  // 0x5727E0

// ── Coord ──────────────────────────────────────────────────

              int*  Coord::To_ScreenRaw();                  // 0x6D1F10

// ── CoordList ──────────────────────────────────────────────

              int*  CoordList::GetBounds();                  // 0x4A94F0

// ── CoordinateTables ───────────────────────────────────────

              int*  CoordinateTables::Init();                  // 0x561910

// ── Factory ────────────────────────────────────────────────

              char  Factory::CalculateExitCell();                  // 0x718B70
               int  Factory::IdleHandler();                  // 0x731CD0

// ── FactoryClass ───────────────────────────────────────────

               int  FactoryClass_LoadFromStream();                  // 0x4CA270
               int  FactoryClass_Seek();                  // 0x4CA3C0
               int  FactoryClass::ddtor();                  // 0x4CA230

// ── FileFind ───────────────────────────────────────────────

            HANDLE  FileFind::CloseHandle();                  // 0x47B130

// ── FileSystem ─────────────────────────────────────────────

              void  FileSystem::CleanupTrees();                  // 0x72D350
              void  FileSystem::InitPipShapes();                  // 0x5F76B0
               int  FileSystem::ProcessNextFileExtension();                  // 0x626DA0

// ── FileTree ───────────────────────────────────────────────

              void  FileTree::CleanupAll();                  // 0x730100

// ── GameConfig ─────────────────────────────────────────────

             char*  GameConfig::ComputeCRC();                  // 0x5E84D0
               int  GameConfig::ComputeHash();                  // 0x679D90

// ── INIClass ───────────────────────────────────────────────

               int  INIClass::ReadCoord();                  // 0x474620
               int  INIClass::ReadInt();                  // 0x5278F0

// ── LinkedList ─────────────────────────────────────────────

              char  LinkedList::LoadScenarioMixFiles();                  // 0x4791F0

// ── Map ────────────────────────────────────────────────────

      unsigned int  Map::IsCellFlag();                  // 0x535BE0

// ── MapClass ───────────────────────────────────────────────

               int  MapClass::CalcVisibleCellRange();                  // 0x506D50
              char  MapClass::CheckCellsBuildable();                  // 0x56E7C0
               int  MapClass::Cleanup();                  // 0x594700
              int*  MapClass_FindFirstFirestorm();                  // 0x5880A0
               int  MapClass::FindPassableNeighbor();                  // 0x5A17F0
               int  MapClass::GetTileDataField14();                  // 0x5A00C0
              char  MapClass::InitTileData();                  // 0x57A0C0
               int  MapClass::IsCellPassable();                  // 0x5656D0
               int  MapClass::SetObstruction();                  // 0x5A0090
               int  MapClass::TransitionCliff();                  // 0x574780
               int  MapClass::TriggerEVA();                  // 0x57B790
               int  MapClass::UnselectAll_ClearLimboLaunchers();                  // 0x48DC90
               int  MapClass::UpdateLightingPostProcess();                  // 0x4AE4C0

// ── MapCoords ──────────────────────────────────────────────

               int  MapCoords::Init();                  // 0x6B5240

// ── MapData ────────────────────────────────────────────────

               int  MapData::InitHeights();                  // 0x45B1C0

// ── MapSeedClass ───────────────────────────────────────────

          wchar_t*  MapSeedClass::Generate();                  // 0x597F80
          wchar_t*  MapSeedClass::GetCell();                  // 0x597FA0
          wchar_t*  MapSeedClass::SetCell();                  // 0x597FC0
          wchar_t*  MapSeedClass::Validate();                  // 0x597FE0
              bool  MapSeedClass::ddtor();                  // 0x597D50

// ── MapSizeGameOption_WorldDominationTour ──────────────────

         wchar_t**  MapSizeGameOption_WorldDominationTour::Read();                  // 0x767740
               int  MapSizeGameOption_WorldDominationTour::ddtor();                  // 0x767800

// ── MixFile ────────────────────────────────────────────────

              bool  MixFile_LoadAll();                  // 0x530460

// ── MixFileClass ───────────────────────────────────────────

              void  MixFileClass::CleanupCache();                  // 0x69E210
              void  MixFileClass::DestroyCache();                  // 0x69E180

// ── Mixer ──────────────────────────────────────────────────

               int  Mixer_RequestAllBuffers();                  // 0x4083D0

// ── Radar ──────────────────────────────────────────────────

               int  Radar::ScanWaypoints();                  // 0x692610
              void  Radar::UpdateReveal();                  // 0x4ADCD0

// ── RadarClass ─────────────────────────────────────────────

              void  RadarClass::Destru_vt50();                  // 0x652D90
              bool  RadarClass::GetBlip();                  // 0x6A8420

// ── Scenario ───────────────────────────────────────────────

              HWND  Scenario::ClearScreen();                  // 0x684240
              char  Scenario::EndGame();                  // 0x685DC0
             short  Scenario::EndGameFlow();                  // 0x685670
               int  Scenario::PreGameInit();                  // 0x5E7460

// ── ScenarioClass ──────────────────────────────────────────

              bool  ScenarioClass::AnimateConstructionStage();                  // 0x5CC330
              char  ScenarioClass_AssignStartPositions();                  // 0x5D6BE0
               int  ScenarioClass::CleanupTemporary();                  // 0x683EB0
              char  ScenarioClass::ClearFlag();                  // 0x5D6790
              char  ScenarioClass::Construct();                  // 0x686730
             void*  ScenarioClass::CopyStartPositions();                  // 0x58BB30
              char  ScenarioClass::LoadMap();                  // 0x686B20
              char  ScenarioClass::LoadScenarioAndStart();                  // 0x683AB0
    unsigned char*  ScenarioClass::ProcessIntroTimer();                  // 0x684180
              char  ScenarioClass::ReadMapINI();                  // 0x689E90
               int  ScenarioClass_UpdateLighting();                  // 0x53C280
               int  ScenarioClass_sub_5D6430();                  // 0x5D6430

// ── Sides ──────────────────────────────────────────────────

               int  Sides::MixFileYuriFiles3();                  // 0x72FBC0

// ── Tactical ───────────────────────────────────────────────

               int  Tactical::InitMap();                  // 0x6DBD20
              char  Tactical::MouseOver();                  // 0x692300
              int*  Tactical::ScrollMap();                  // 0x6DA560
               int  Tactical::UpdateMapView();                  // 0x6DBE00
               int  Tactical::ddtor();                  // 0x6DBCE0

// ── TacticalClass ──────────────────────────────────────────

              char  TacticalClass::BuildCommandBar();                  // 0x6D04F0
              void  TacticalClass::CleanupResources();                  // 0x6D0270
              int*  TacticalClass::CollectSelectedIDs();                  // 0x732D10
               int  TacticalClass::FindBuilding();                  // 0x6D9920
               int  TacticalClass::FindOverlay();                  // 0x6D97D0
              int*  TacticalClass_InitView();                  // 0x537620
              void  TacticalClass_InterpolateView();                  // 0x4AE290
               int  TacticalClass::SetPositionThunk();                  // 0x653F70
              void  TacticalClass_SetViewDimensions();                  // 0x4A8960

// ── Winsock ────────────────────────────────────────────────

              char  Winsock::VerifyCRC();                  // 0x7B2050

} // namespace gamemd