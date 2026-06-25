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

// All relocatable declarations were moved to class bodies / src/_generated/global_funcs.hpp by tools/move_funcs_decls.py.
// Residual declarations below could not be relocated (invalid name / no class / collision):

               // int  AlphaShapeClass::SD_vt03();                  // 0x420D40
               // int  AlphaShapeClass::SD_vt05();                  // 0x420DE0
               // int  AlphaShapeClass::SD_vt06();                  // 0x420E40
              // char  Cell::CanPlaceBuilding();                  // 0x43B4C0
              // char  Cell::CreateCrater();                  // 0x6D2790
               // int  Cell::GetAdjacencyFlags();                  // 0x579B70
               // int  Cell::GetAdjacentPassableMask();                  // 0x6D8700
               // int  Cell::GetGroundHeight();                  // 0x578080
              // bool  Cell::IsPassable();                  // 0x586360
              // char  Cell::IsPassableAllied();                  // 0x578AD0
               // int  Cell::PosToLinearIndex();                  // 0x56BC50
              // char  Cell::SetTileType();                  // 0x56EB80
              // char  Cell::UpdateTileType();                  // 0x56E990
              // int*  Coord::To_ScreenRaw();                  // 0x6D1F10
              // int*  CoordinateTables::Init();                  // 0x561910
              // char  Factory::CalculateExitCell();                  // 0x718B70
               // int  Factory::IdleHandler();                  // 0x731CD0
               // int  FactoryClass::ddtor();                  // 0x4CA230
              // char  LinkedList::LoadScenarioMixFiles();                  // 0x4791F0
               // int  MapCoords::Init();                  // 0x6B5240
               // int  Radar::ScanWaypoints();                  // 0x692610
              // void  Radar::UpdateReveal();                  // 0x4ADCD0
              // void  RadarClass::Destru_vt50();                  // 0x652D90
              // HWND  Scenario::ClearScreen();                  // 0x684240
              // char  Scenario::EndGame();                  // 0x685DC0
             // short  Scenario::EndGameFlow();                  // 0x685670
               // int  Scenario::PreGameInit();                  // 0x5E7460
              // char  ScenarioClass::Construct();                  // 0x686730
               // int  Tactical::InitMap();                  // 0x6DBD20
              // char  Tactical::MouseOver();                  // 0x692300
              // int*  Tactical::ScrollMap();                  // 0x6DA560
               // int  Tactical::UpdateMapView();                  // 0x6DBE00
               // int  Tactical::ddtor();                  // 0x6DBCE0
              // char  Winsock::VerifyCRC();                  // 0x7B2050


} // namespace gamemd
