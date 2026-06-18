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

               int  EndFrameAudioMixer();                  // IDA: 0x4010c0
              int*  LoadSampleAudioMixer();                  // IDA: 0x401c00
               int  SetupSampleAudioMixer();                  // IDA: 0x407100
               int  EndBufferMixer();                  // IDA: 0x407150
               int  RequestBufferMixer();                  // IDA: 0x407170
               int  SetRateMixerSample();                  // IDA: 0x4071a0
               int  ThreadAudioMixerMain();                  // IDA: 0x407b60
               int  LoadFileClassToBuffer();                  // IDA: 0x4a3970
              void  LoadTheaterClassMIX();                  // IDA: 0x5349c0
               int  AccumulateMIXFileIndex();                  // IDA: 0x544e30
              int*  InsertIntoHashTree();                  // IDA: 0x5b3ff0
              void  RehashGenericHashMap();                  // IDA: 0x5e5f10
               int  ComputeHashModPrime();                  // IDA: 0x620cd0
               int  HashStringMod31();                  // IDA: 0x626660
            float*  ConvertMatrixToQuaternion();                  // IDA: 0x646730
               int  ComputeNetworkFrameCRC();                  // IDA: 0x64dab0
               int  ComputeHash();                  // IDA: 0x64de80
          wchar_t*  GetStringCSF();                  // IDA: 0x734e60
              void  ConvertDateMonthNames();                  // IDA: 0x779230
               int  DSP_AudioMixBuffers();                  // IDA: 0x7bf740
               int  ___crtGetStringTypeA();                  // IDA: 0x7d9729
               int  ___crtGetStringTypeW();                  // IDA: 0x7da0f1
      unsigned int  ConvertRGB24to556();                  // IDA: 0x7de200
      unsigned int  ConvertRGB24toRGB565();                  // IDA: 0x7de53a
      unsigned int  ConvertRGB24to655();                  // IDA: 0x7de87a
      unsigned int  ConvertRGB24to565();                  // IDA: 0x7debba

// ── AlphaShapeClass ────────────────────────────────────────

               int  AlphaShapeClass_SD_vt03();                  // IDA: 0x420d40
               int  AlphaShapeClass_SD_vt05();                  // IDA: 0x420de0
               int  AlphaShapeClass_SD_vt06();                  // IDA: 0x420e40

// ── AudioMixer ─────────────────────────────────────────────

               int  AudioMixer_PlayBuffer();                  // IDA: 0x4061d0
               int  AudioMixer_Pump();                  // IDA: 0x753620
               int  AudioMixer_RequestOrEndBuffer();                  // IDA: 0x406270
               int  AudioMixer_Shutdown();                  // IDA: 0x406e80

// ── COMObject ──────────────────────────────────────────────

               int  COMObject_GetStringValue();                  // IDA: 0x55ab40

// ── CRC32 ──────────────────────────────────────────────────

               int  CRC32_Compute();                  // IDA: 0x4a1fb0

// ── Cell ───────────────────────────────────────────────────

              char  Cell_CanPlaceBuilding();                  // IDA: 0x43b4c0
              char  Cell_CreateCrater();                  // IDA: 0x6d2790
               int  Cell_GetAdjacencyFlags();                  // IDA: 0x579b70
               int  Cell_GetAdjacentPassableMask();                  // IDA: 0x6d8700
               int  Cell_GetGroundHeight();                  // IDA: 0x578080
              bool  Cell_IsPassable();                  // IDA: 0x586360
              char  Cell_IsPassableAllied();                  // IDA: 0x578ad0
               int  Cell_PosToLinearIndex();                  // IDA: 0x56bc50
              char  Cell_SetTileType();                  // IDA: 0x56eb80
              char  Cell_UpdateTileType();                  // IDA: 0x56e990

// ── CellClass ──────────────────────────────────────────────

              char  CellClass_CheckTilePassable();                  // IDA: 0x57ccf0
              char  CellClass_CheckTilePassable2();                  // IDA: 0x57baa0
               int  CellClass_GetByte284();                  // IDA: 0x6d6ad0
               int  CellClass_GetTileData();                  // IDA: 0x56bcd0
              char  CellClass_SetTileType13();                  // IDA: 0x572b80
              char  CellClass_SetTileType14();                  // IDA: 0x572c90
               int  CellClass_SetWallOwner();                  // IDA: 0x47d210
               int  CellClass_SpiralFindClosest();                  // IDA: 0x5865f0
              char  CellClass_UpdateTerrain();                  // IDA: 0x56f8b0
              char  CellClass_UpdateTileVariant2();                  // IDA: 0x56fc80
              char  CellClass_UpdateVariant3();                  // IDA: 0x56ef50
              char  CellClass_UpdateVariant4();                  // IDA: 0x56f2f0
              char  CellClass_UpdateVariant5();                  // IDA: 0x572da0
              char  CellClass_UpdateVariant6();                  // IDA: 0x573170
              char  CellClass_UpdateVariant7();                  // IDA: 0x572440
              char  CellClass_UpdateVariant8();                  // IDA: 0x5727e0

// ── Coord ──────────────────────────────────────────────────

              int*  Coord_To_ScreenRaw();                  // IDA: 0x6d1f10

// ── CoordList ──────────────────────────────────────────────

              int*  CoordList_GetBounds();                  // IDA: 0x4a94f0

// ── CoordinateTables ───────────────────────────────────────

              int*  CoordinateTables_Init();                  // IDA: 0x561910

// ── Factory ────────────────────────────────────────────────

              char  Factory_CalculateExitCell();                  // IDA: 0x718b70
               int  Factory_IdleHandler();                  // IDA: 0x731cd0

// ── FactoryClass ───────────────────────────────────────────

               int  FactoryClass_LoadFromStream();                  // IDA: 0x4ca270
               int  FactoryClass_Seek();                  // IDA: 0x4ca3c0
               int  FactoryClass_ddtor();                  // IDA: 0x4ca230

// ── FileFind ───────────────────────────────────────────────

            HANDLE  FileFind_CloseHandle();                  // IDA: 0x47b130

// ── FileSystem ─────────────────────────────────────────────

              void  FileSystem_CleanupTrees();                  // IDA: 0x72d350
              void  FileSystem_InitPipShapes();                  // IDA: 0x5f76b0
               int  FileSystem_ProcessNextFileExtension();                  // IDA: 0x626da0

// ── FileTree ───────────────────────────────────────────────

              void  FileTree_CleanupAll();                  // IDA: 0x730100

// ── GameConfig ─────────────────────────────────────────────

             char*  GameConfig_ComputeCRC();                  // IDA: 0x5e84d0
               int  GameConfig_ComputeHash();                  // IDA: 0x679d90

// ── INIClass ───────────────────────────────────────────────

               int  INIClass_ReadCoord();                  // IDA: 0x474620
               int  INIClass_ReadInt();                  // IDA: 0x5278f0

// ── LinkedList ─────────────────────────────────────────────

              char  LinkedList_LoadScenarioMixFiles();                  // IDA: 0x4791f0

// ── Map ────────────────────────────────────────────────────

      unsigned int  Map_IsCellFlag();                  // IDA: 0x535be0

// ── MapClass ───────────────────────────────────────────────

               int  MapClass_CalcVisibleCellRange();                  // IDA: 0x506d50
              char  MapClass_CheckCellsBuildable();                  // IDA: 0x56e7c0
               int  MapClass_Cleanup();                  // IDA: 0x594700
              int*  MapClass_FindFirstFirestorm();                  // IDA: 0x5880a0
               int  MapClass_FindPassableNeighbor();                  // IDA: 0x5a17f0
               int  MapClass_GetTileDataField14();                  // IDA: 0x5a00c0
              char  MapClass_InitTileData();                  // IDA: 0x57a0c0
               int  MapClass_IsCellPassable();                  // IDA: 0x5656d0
               int  MapClass_SetObstruction();                  // IDA: 0x5a0090
               int  MapClass_TransitionCliff();                  // IDA: 0x574780
               int  MapClass_TriggerEVA();                  // IDA: 0x57b790
               int  MapClass_UnselectAll_ClearLimboLaunchers();                  // IDA: 0x48dc90
               int  MapClass_UpdateLightingPostProcess();                  // IDA: 0x4ae4c0

// ── MapCoords ──────────────────────────────────────────────

               int  MapCoords_Init();                  // IDA: 0x6b5240

// ── MapData ────────────────────────────────────────────────

               int  MapData_InitHeights();                  // IDA: 0x45b1c0

// ── MapSeedClass ───────────────────────────────────────────

          wchar_t*  MapSeedClass_Generate();                  // IDA: 0x597f80
          wchar_t*  MapSeedClass_GetCell();                  // IDA: 0x597fa0
          wchar_t*  MapSeedClass_SetCell();                  // IDA: 0x597fc0
          wchar_t*  MapSeedClass_Validate();                  // IDA: 0x597fe0
              bool  MapSeedClass_ddtor();                  // IDA: 0x597d50

// ── MapSizeGameOption_WorldDominationTour ──────────────────

         wchar_t**  MapSizeGameOption_WorldDominationTour_Read();                  // IDA: 0x767740
               int  MapSizeGameOption_WorldDominationTour_ddtor();                  // IDA: 0x767800

// ── MixFile ────────────────────────────────────────────────

              bool  MixFile_LoadAll();                  // IDA: 0x530460

// ── MixFileClass ───────────────────────────────────────────

              void  MixFileClass_CleanupCache();                  // IDA: 0x69e210
              void  MixFileClass_DestroyCache();                  // IDA: 0x69e180

// ── Mixer ──────────────────────────────────────────────────

               int  Mixer_RequestAllBuffers();                  // IDA: 0x4083d0

// ── Radar ──────────────────────────────────────────────────

               int  Radar_ScanWaypoints();                  // IDA: 0x692610
              void  Radar_UpdateReveal();                  // IDA: 0x4adcd0

// ── RadarClass ─────────────────────────────────────────────

              void  RadarClass_Destru_vt50();                  // IDA: 0x652d90
              bool  RadarClass_GetBlip();                  // IDA: 0x6a8420

// ── Scenario ───────────────────────────────────────────────

              HWND  Scenario_ClearScreen();                  // IDA: 0x684240
              char  Scenario_EndGame();                  // IDA: 0x685dc0
             short  Scenario_EndGameFlow();                  // IDA: 0x685670
               int  Scenario_PreGameInit();                  // IDA: 0x5e7460

// ── ScenarioClass ──────────────────────────────────────────

              bool  ScenarioClass_AnimateConstructionStage();                  // IDA: 0x5cc330
              char  ScenarioClass_AssignStartPositions();                  // IDA: 0x5d6be0
               int  ScenarioClass_CleanupTemporary();                  // IDA: 0x683eb0
              char  ScenarioClass_ClearFlag();                  // IDA: 0x5d6790
              char  ScenarioClass_Construct();                  // IDA: 0x686730
             void*  ScenarioClass_CopyStartPositions();                  // IDA: 0x58bb30
              char  ScenarioClass_LoadMap();                  // IDA: 0x686b20
              char  ScenarioClass_LoadScenarioAndStart();                  // IDA: 0x683ab0
    unsigned char*  ScenarioClass_ProcessIntroTimer();                  // IDA: 0x684180
              char  ScenarioClass_ReadMapINI();                  // IDA: 0x689e90
               int  ScenarioClass_UpdateLighting();                  // IDA: 0x53c280
               int  ScenarioClass_sub_5D6430();                  // IDA: 0x5d6430

// ── Sides ──────────────────────────────────────────────────

               int  Sides_MixFileYuriFiles3();                  // IDA: 0x72fbc0

// ── Tactical ───────────────────────────────────────────────

               int  Tactical_InitMap();                  // IDA: 0x6dbd20
              char  Tactical_MouseOver();                  // IDA: 0x692300
              int*  Tactical_ScrollMap();                  // IDA: 0x6da560
               int  Tactical_UpdateMapView();                  // IDA: 0x6dbe00
               int  Tactical_ddtor();                  // IDA: 0x6dbce0

// ── TacticalClass ──────────────────────────────────────────

              char  TacticalClass_BuildCommandBar();                  // IDA: 0x6d04f0
              void  TacticalClass_CleanupResources();                  // IDA: 0x6d0270
              int*  TacticalClass_CollectSelectedIDs();                  // IDA: 0x732d10
               int  TacticalClass_FindBuilding();                  // IDA: 0x6d9920
               int  TacticalClass_FindOverlay();                  // IDA: 0x6d97d0
              int*  TacticalClass_InitView();                  // IDA: 0x537620
              void  TacticalClass_InterpolateView();                  // IDA: 0x4ae290
               int  TacticalClass_SetPositionThunk();                  // IDA: 0x653f70
              void  TacticalClass_SetViewDimensions();                  // IDA: 0x4a8960

// ── Winsock ────────────────────────────────────────────────

              char  Winsock_VerifyCRC();                  // IDA: 0x7b2050

} // namespace gamemd