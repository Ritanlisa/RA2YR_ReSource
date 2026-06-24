#pragma once

// Auto-generated from tools/functions_by_module.json (render+ui module)
// 329 functions total: 155 member (80 classes) + 174 global

namespace gamemd {

class AircraftClass;
class BinkMovie;
class BinkMovieClass;
class BlitTransLucent25Alpha_ushort;
class BlitTransXlatAlphaZRead_ushort;
class ButtonOwnerDraw;
class CCToolTip;
class CDROM;
class CStreamClass;
class Campaign;
class CampaignClass;
class CampaignMenu;
class CampaignScore;
class CampaignScreen;
class CampaignSelect;
class CaptureManagerClass;
class ChatDialog;
class ComboBoxOwnerDraw;
class Commands;
class Credits;
class CreditsPower;
class CreditsScreen;
class DDraw;
class DSurface;
class Dialog;
class DialogClass;
class Display;
class DisplayClass;
class FontRenderer;
class GadgetClass;
class Game;
class GameSetup;
class InfantryClass;
class JumpjetLocomotionClass;
class LoadScreen;
class MSFrameAnim;
class MainMenu;
class Mouse;
class MouseClass;
class MultiplayerBattleTeam;
class MultiplayerConfig;
class MultiplayerGameMode;
class MultiplayerObserverTeam;
class MultiplayerSiege;
class MultiplayerSiegeDefenderTeam;
class Network;
class ObjectClass;
class Options;
class Palette;
class ParticleClass;
class Power;
class PowerBar;
class PowerClass;
class RadarClass;
class Render;
class ScoreScreen;
class Screen;
class ScreenCapture;
class ScreenCaptureCommandClass;
class ScreenEffect;
class Sidebar;
class SidebarClass;
class Skirmish;
class SkirmishDialog;
class SkirmishMapGen;
class SkirmishSetup;
class Surface;
class TabClass;
class TabControl;
class Tactical;
class TacticalClass;
class TechnoClass;
class TextRenderer;
class ToolTipManager;
class Voxel;
class VoxelClass;
class VoxelModel;
class VoxelRenderer;
class WonlineStringDialogControl_28;
class XSurface;

// ============================================================
// Member functions
// ============================================================

// --- AircraftClass ---
// AircraftClass::Draw;  // 0x4144B0

// --- BinkMovie ---
// BinkMovie::HandleKeyboard;  // 0x6033F0
// BinkMovie::WndProc;  // 0x6153E0

// --- BinkMovieClass ---
// BinkMovieClass::AllocateRenderSurface;  // 0x4335E0
// BinkMovieClass::ReleaseRenderSurface;  // 0x4336C0
// BinkMovieClass::OpenFile;  // 0x433770

// --- BlitTransLucent25Alpha_ushort ---
// BlitTransLucent25Alpha_ushort::sub_494490;  // 0x494490

// --- BlitTransXlatAlphaZRead_ushort ---
// BlitTransXlatAlphaZRead_ushort::sub_494590;  // 0x494590

// --- ButtonOwnerDraw ---
// ButtonOwnerDraw::DlgProc;  // 0x616980

// --- CCToolTip ---
// CCToolTip::Draw2;  // 0x478E30

// --- CDROM ---
// CDROM::LockVolume;  // 0x47A6F0

// --- CStreamClass ---
// CStreamClass::LockRegion;  // 0x4A2F80
// CStreamClass::UnlockRegion;  // 0x4A2FC0

// --- Campaign ---
// Campaign::Screen;  // 0x60D380

// --- CampaignClass ---
// CampaignClass::ddtor;  // 0x46CF80
// CampaignClass::Write;  // 0x46D000
// CampaignClass::Seek;  // 0x46D050

// --- CampaignMenu ---
// CampaignMenu::DlgProc;  // 0x52D640

// --- CampaignScore ---
// CampaignScore::DialogProc;  // 0x46DFD0
// CampaignScore::ProcessScreen;  // 0x46FC00
// CampaignScore::sub_471420;  // 0x471420

// --- CampaignScreen ---
// CampaignScreen::Init;  // 0x470D30

// --- CampaignSelect ---
// CampaignSelect::DlgProc;  // 0x52EC00

// --- CaptureManagerClass ---
// CaptureManagerClass::DrawLinks;  // 0x472160

// --- ChatDialog ---
// ChatDialog::DlgProc;  // 0x79DB50

// --- ComboBoxOwnerDraw ---
// ComboBoxOwnerDraw::DlgProc;  // 0x610CA0

// --- Commands ---
// Commands::Execute;  // 0x537A90

// --- Credits ---
// Credits::Screen;  // 0x52CB90

// --- CreditsPower ---
// CreditsPower::Display;  // 0x4C3E30

// --- CreditsScreen ---
// CreditsScreen::DlgProc;  // 0x531A00

// --- DDraw ---
// DDraw::LogError;  // 0x4A3DD0
// DDraw::CapabilityCheck;  // 0x4A3E40
// DDraw::CheckCapabilities;  // 0x4A4620
// DDraw::WaitForIdle;  // 0x4A4830
// DDraw::CleanupSurfaces;  // 0x4C19B0

// --- DSurface ---
// DSurface::ConstructFromHandle;  // 0x4BA480
// DSurface::BlitStretch;  // 0x4BBB00
// DSurface::DrawLineModulated;  // 0x4BBCA0
// DSurface::DrawLineZBuf;  // 0x4BFD30
// DSurface::Flip2;  // 0x5D1E50
// DSurface::FillRectWithColor;  // 0x621B80

// --- Dialog ---
// Dialog::ShowMessageBox;  // 0x5D3490
// Dialog::MessageLoop;  // 0x5D4D50
// Dialog::FindGameUI;  // 0x5E26C0
// Dialog::ShowMessage;  // 0x5E2700
// Dialog::ShowStatusText;  // 0x5E2790
// Dialog::CheckButtonState;  // 0x5F3450
// Dialog::MapControlToAction;  // 0x606800
// Dialog::HandleTabKey;  // 0x60A330
// Dialog::DispatchEvent;  // 0x60A5B0
// Dialog::SubclassEditControl;  // 0x60F320
// Dialog::InitWindow;  // 0x60F760
// Dialog::InitializeControls;  // 0x60F9A0
// Dialog::TabControlPaint;  // 0x6137D0
// Dialog::PumpMessages;  // 0x623120
// Dialog::UpdateGameUI;  // 0x77D820
// Dialog::CloseAll;  // 0x799D10

// --- DialogClass ---
// DialogClass::RegisterWinClasses;  // 0x60D450
// DialogClass::Reposition;  // 0x775BC0

// --- Display ---
// Display::CalculateDefaultSize;  // 0x5D5A20

// --- DisplayClass ---
// DisplayClass::SetCoordVisible;  // 0x4A9840
// DisplayClass::Render;  // 0x4AE6B0
// DisplayClass::SetSurface;  // 0x4AE6F0
// DisplayClass::GetSurface;  // 0x4AE720

// --- FontRenderer ---
// FontRenderer::DrawText;  // 0x434B90

// --- GadgetClass ---
// GadgetClass::FindByWindow;  // 0x60AAB0

// --- Game ---
// Game::SendCampaignOptions;  // 0x46D4A0

// --- GameSetup ---
// GameSetup::DisplayPlayers;  // 0x5DAFE0

// --- InfantryClass ---
// InfantryClass::Draw;  // 0x518F90

// --- JumpjetLocomotionClass ---
// JumpjetLocomotionClass::IsBridgeBlocking;  // 0x516CA0

// --- LoadScreen ---
// LoadScreen::RenderLoop;  // 0x4B6C30
// LoadScreen::Render;  // 0x643AE0

// --- MSFrameAnim ---
// MSFrameAnim::Draw;  // 0x767EF0

// --- MainMenu ---
// MainMenu::Screen;  // 0x531CC0
// MainMenu::DlgProc;  // 0x531F60

// --- Mouse ---
// Mouse::IsButtonDown;  // 0x54F5C0
// Mouse::HideWindow;  // 0x5BC400

// --- MouseClass ---
// MouseClass::ToggleContextGadget;  // 0x6D1770
// MouseClass::LoadCursors;  // 0x72DDB0

// --- MultiplayerBattleTeam ---
// MultiplayerBattleTeam::AddRef;  // 0x5C1090

// --- MultiplayerConfig ---
// MultiplayerConfig::Cleanup;  // 0x5D5B20

// --- MultiplayerGameMode ---
// MultiplayerGameMode::GetFirst;  // 0x5D5E10
// MultiplayerGameMode::ListGet;  // 0x5D5ED0

// --- MultiplayerObserverTeam ---
// MultiplayerObserverTeam::AddRef;  // 0x5C94C0

// --- MultiplayerSiege ---
// MultiplayerSiege::Read;  // 0x5CA680
// MultiplayerSiege::Write;  // 0x5CA6D0
// MultiplayerSiege::CheckStatus;  // 0x5CA9B0
// MultiplayerSiege::GetResult;  // 0x5CAAC0

// --- MultiplayerSiegeDefenderTeam ---
// MultiplayerSiegeDefenderTeam::AddRef;  // 0x5CAE70

// --- Network ---
// Network::ModemConnectionDialog;  // 0x5EF4E0
// Network::IsMultiplayerActive;

// --- ObjectClass ---
// ObjectClass::ToggleSidebarDisplay;  // 0x6A7D70

// --- Options ---
// Options::Screen_Dialog;  // 0x55FC80
// Options::DialogProc;  // 0x618D40

// --- Palette ---
// Palette::Preview_Generate;  // 0x642130

// --- ParticleClass ---
// ParticleClass::CheckDrawFlags;  // 0x62D710

// --- Power ---
// Power::TimerProcess;  // 0x4A1D50

// --- PowerBar ---
// PowerBar::CalcFill;  // 0x63F850
// PowerBar::ComputeFill;  // 0x63F960

// --- PowerClass ---
// PowerClass::CheckLow;  // 0x63F7E0

// --- RadarClass ---
// RadarClass::RecreateSurface;  // 0x654650

// --- Render ---
// Render::DrawLine;  // 0x705270
// Render::DrawTileBitmap;  // 0x7C7371

// --- ScoreScreen ---
// ScoreScreen::DrawSHPBackground;  // 0x778210

// --- Screen ---
// Screen::Capture;  // 0x52FEC0

// --- ScreenCapture ---
// ScreenCapture::Frame;  // 0x55CC20

// --- ScreenCaptureCommandClass ---
// ScreenCaptureCommandClass::ddtor;  // 0x537B60
// ScreenCaptureCommandClass::Release;  // 0x537B80
// ScreenCaptureCommandClass::Execute;  // 0x537BA0

// --- ScreenEffect ---
// ScreenEffect::UpdateBob;  // 0x7772A0

// --- Sidebar ---
// Sidebar::UpdateProductionDisplay;  // 0x6A9540

// --- SidebarClass ---
// SidebarClass::CreateScrollButtons;  // 0x653010
// SidebarClass::InitPositions;  // 0x6A5090
// SidebarClass::CalcBounds;  // 0x6A5130
// SidebarClass::LoadAssets;  // 0x6A5840
// SidebarClass::LoadResources;  // 0x6ABD30

// --- Skirmish ---
// Skirmish::Setup_DlgProc;  // 0x6AE3F0

// --- SkirmishDialog ---
// SkirmishDialog::Show;  // 0x5E68A0

// --- SkirmishMapGen ---
// SkirmishMapGen::DlgProc;  // 0x596300

// --- SkirmishSetup ---
// SkirmishSetup::DlgProc;  // 0x5E6920

// --- Surface ---
// Surface::TileBlit;  // 0x6BA3E0
// Surface::BlitTransparent;  // 0x6BA580
// Surface::AlphaBlend;  // 0x6BA690

// --- TabClass ---
// TabClass::DrawPower;  // 0x658330

// --- TabControl ---
// TabControl::WndProc;  // 0x612B70
// TabControl::DlgProc;  // 0x61D950

// --- Tactical ---
// Tactical::Radar_Render;  // 0x640A40

// --- TacticalClass ---
// TacticalClass::RenderFrame;  // 0x4F45B0
// TacticalClass::PixelToCellCheck;  // 0x653760
// TacticalClass::DrawPlacementCircles;  // 0x6DBE20

// --- TechnoClass ---
// TechnoClass::DrawAirstrikeFlare_SetContext;  // 0x705860
// TechnoClass::RenderTechnoSHP;  // 0x73B140
// TechnoClass::DrawVoxel;  // 0x73B470

// --- TextRenderer ---
// TextRenderer::Printf;  // 0x4A60E0
// TextRenderer::DrawText;
// TextRenderer::RenderCentered;  // 0x4B96A0
// TextRenderer::MeasureBuilding2;  // 0x642EF0

// --- ToolTipManager ---
// ToolTipManager::Read;  // 0x724BB0

// --- Voxel ---
// Voxel::FacePixelBuffer;  // 0x7DF9C0
// Voxel::FacePixelBufferEx;  // 0x7DFAE0
// Voxel::FacePixelBuffer3;  // 0x7DFC00

// --- VoxelClass ---
// VoxelClass::RenderObject;  // 0x73C5F0

// --- VoxelModel ---
// VoxelModel::BuildDrawList;  // 0x755B30

// --- VoxelRenderer ---
// VoxelRenderer::DrawSection;  // 0x7575A0
// VoxelRenderer::DrawSectionLines;  // 0x757790
// VoxelRenderer::ProcessVoxelData;  // 0x757E70
// VoxelRenderer::RenderFrame;  // 0x758030
// VoxelRenderer::ClearDepth;  // 0x758880

// --- WonlineStringDialogControl[28] ---
// WonlineStringDialogControl[28]::Draw;  // 0x7AD580
// WonlineStringDialogControl[28]::ddtor;  // 0x7AD440
// WonlineStringDialogControl[28]::Read;  // 0x7AD460
// WonlineStringDialogControl[28]::Write;  // 0x7AD480
// WonlineStringDialogControl[28]::AddRef;  // 0x7AD620
// WonlineStringDialogControl[28]::Release;  // 0x7AD640

// --- XSurface ---
// XSurface::vt_entry_40;  // 0x410600

// ============================================================
// Global / free functions
// ============================================================

// AllocateSurfaceScreenSurfaces();  // 0x533FD0
// BaseDialogProc();  // 0x622B50
// BlendMinimapPixel();  // 0x4BF650
// BlitterCopySHP();  // 0x4373B0
// BlitterCopySimpleSHP();  // 0x437350
// BlitterDrawSHP();  // 0x4AF2A0
// BlitterRLEBlitSHP();  // 0x437A10
// CacheDialogInvalidate();  // 0x603D30
// CacheRenderedText();  // 0x775DB0
// CalcSurfaceBlitRects();  // 0x7BC040
// CleanupCampaignResources();  // 0x5F0070
// CloseDialog();  // 0x7757E0
// ControlDialogHandler();  // 0x608500
// CopySHPFrameToSurface();  // 0x7483B0
// CreateDialog();  // 0x622650
// CreateDialogIndirect();  // 0x775700
// CreateSurfaceClassPrimary();  // 0x544E70
// CtlDialogColorHandler();  // 0x6015E0
// DecodeBitmapRGB();  // 0x42FE50
// DecodeBlockLCW();  // 0x55C0E0
// DestroyDialogChildWindow();  // 0x610570
// DialogFunc();  // 0x4C83E0
// DialogSkirmishFunc_UpdateMultiEngineer();  // 0x6ACEE0
// DisableCampaignSlots();  // 0x5EBC00
// DispatchDialogControlAction();  // 0x6035F0
// DisplayBuildingInfoPanel();  // 0x4B9890
// DisplayRankingsThunkWOL();  // 0x785360
// DlgSkirmishMenuProc();  // 0x6040B0
// DrawAffineTexture();  // 0x6B8F00
// DrawBuildingTilesSHP();  // 0x4A5A50
// DrawDialogGradient();  // 0x6208F0
// DrawDialogText();  // 0x5E2820
// DrawHUD();  // 0x55F1E0
// DrawIsoTile();  // 0x5A7FA0
// DrawPowerBarForPlayers();  // 0x658640
// DrawScoreScreenStats();  // 0x72E2D0
// DrawScrollArrowUI();  // 0x620720
// DrawSidebarCreditsTimer();  // 0x4A2370
// DrawSurfaceLineAlpha();  // 0x620050
// DrawTacticalFillScanline();  // 0x63D910
// DrawTacticalLaserLine();  // 0x704E40
// DrawTacticalLine2D();  // 0x63D810
// DrawTacticalLine3D();  // 0x6F5EF0
// DrawTacticalMapLine();  // 0x7049C0
// DrawTacticalWaypoint();  // 0x63D630
// DrawTechnoDeployCircle();  // 0x456980
// DrawTextRendererMultiline();  // 0x623880
// DrawTextRendererTextAligned();  // 0x6211D0
// DrawTile4x4Block();  // 0x7C4730
// DrawTileBlock16BPP();  // 0x7C4B80
// DrawTileBlock2();  // 0x7C53A0
// DrawTileBlock2Sub();  // 0x7C57D0
// DrawTileBlock8BPP();  // 0x7C4F90
// DrawToSurfaceSHP();  // 0x4AED70
// DrawUnitExperiencePopup();  // 0x7336C0
// EncodeBitmapRGB();  // 0x42FD30
// ExchangeMultiplayerGameInfo();  // 0x5E7920
// FadePalette();  // 0x4A3C30
// FillRectangle();  // 0x4A6500
// FilterDialogButtonAction();  // 0x609E20
// FormatHotkeyDisplayString();  // 0x61EF70
// FormatWOLPlayerInfoForDisplay();  // 0x780E30
// GameListRenderWOL();  // 0x781480
// GameModeDlgProcMultiplayer();  // 0x7988C0
// GameOptionsScreenWOL();  // 0x79F140
// GameSetupDialogProc();  // 0x5B4B10
// GetComboBoxSelectedRaw();  // 0x4E4E20
// GetComboBoxSelectedRaw2();  // 0x4E6030
// GetDialogControlSHP();  // 0x603870
// GetDialogDefaultButton();  // 0x609730
// GetDialogText();  // 0x623E40
// GetSkirmishMenuOwnerName();  // 0x604060
// HideSkirmishSpawnLocations();  // 0x6AE080
// HitDialogTest();  // 0x776490
// InitDialogCountryIcons();  // 0x61F210
// InitSkirmishDialogControls();  // 0x5E3010
// InitSkirmishSettings();  // 0x6C87F0
// InitializeDialogControls();  // 0x60F4B0
// IntersectSurfaceRects();  // 0x7BBE20
// IsDialogControlHidden();  // 0x602DD0
// IsDialogControlVisible();  // 0x608CD0
// IsDialogWindowClass();  // 0x603AA0
// IsMessageDialog();  // 0x53E730
// IsValidActionDialog();  // 0x602490
// LoadCampaignMissionData();  // 0x603040
// LoadFromINIGraphicMenu();  // 0x4F1CA0
// LoadMultiplayerModesList();  // 0x5D7590
// LoadPaletteFromFile();  // 0x6B9D00
// LoadPaletteSimple();  // 0x72ADE0
// MapSkirmishDialogPlayerToControl();  // 0x4E48E0
// MessageDialogLoopAlt();  // 0x7759E0
// NavigateDialogTab();  // 0x600C70
// ObfuscateDataBlock();  // 0x7E0170
// ParseINIAnimGadgetDefinition();  // 0x4F2C70
// ParseINIGadgetDefinition();  // 0x4F3140
// PhoneEditorDialogProc();  // 0x630C10
// PlayerSkirmishSlotHandler();  // 0x5EC9F0
// RenderAudioVideoFrame();  // 0x7C2590
// RenderBuilding();  // 0x63B150
// RenderChronosphereScreenEffect();  // 0x53BBA0
// RenderCreditsScreen();  // 0x72F540
// RenderDialogSurface();  // 0x61ECA0
// RenderFogOfWar();  // 0x47EFE0
// RenderFogOfWarOverlay();  // 0x47F250
// RenderGadgetClassAnimation();  // 0x6071E0
// RenderMovieFrame();  // 0x5BFF60
// RenderScoreScreen();  // 0x72E450
// RenderScoreboardSidebar();  // 0x653FA0
// RenderScriptActionHighlight();  // 0x63B2F0
// RenderTechnoClassVoxel();  // 0x706ED0
// RenderTextLabel();  // 0x4A5EB0
// RenderTextLabelWordWrap();  // 0x4A6360
// RenderVoxels();  // 0x757120
// RepositionDialogControls();  // 0x60C0C0
// ResizeDialogAndEnum();  // 0x60C4A0
// RunDialog();  // 0x6241F0
// SaveMultiplayerLobbySettings();  // 0x5ED400
// ScreenDialogToClient();  // 0x775690
// ScreenDlgProcOptions();  // 0x55FDB0
// SendMultiplayerStartSignal();  // 0x5E3AB0
// SetDialogActiveFlag();  // 0x606740
// SetDialogParent();  // 0x777080
// SetDialogPlayerName();  // 0x5E2EF0
// Setup2DlgProcMultiplayer();  // 0x7983E0
// SetupDialog();  // 0x622820
// SetupDialogRenderBuffer();  // 0x6214B0
// SetupLobbyPlayerSlotDialog();  // 0x4E5E20
// SetupMultiplayerLobbyPlayers();  // 0x5ED5A0
// SetupMultiplayerLobbyScreen();  // 0x5EC3A0
// SetupNetworkLobbyDialog();  // 0x5E3D10
// SetupSkirmishDialogPlayerSlot();  // 0x4E3CE0
// SetupSkirmishPlayerSlots();  // 0x5E9E70
// SetupSkirmishSpawnLocationEntry();  // 0x6ADC20
// SetupSkirmishSpawnLocations();  // 0x4E49A0
// ShowAudioSettingsDialog();  // 0x6B6230
// ShowConfirmDialog();  // 0x5C60D0
// ShowDialogConfirm();  // 0x5E2CD0
// ShowDiplomacyDialog();  // 0x6586D0
// ShowGameDialog();  // 0x4F1840
// ShowHotkeyOptionsDialog();  // 0x5FBEF0
// ShowSkirmishSetupScreen();  // 0x6AE2C0
// ShowWOLLobbyDialog();  // 0x77D840
// SkirmishDialogProc();  // 0x5DF180
// StartWDTCampaign();  // 0x7AFB90
// SynchronizeMultiplayerGameStart();  // 0x5DD8A0
// ToCoordPixel();  // 0x6339E0
// ToggleDisplayMode();  // 0x6842F0
// UpdateDeferredLightSurfaces();  // 0x554D50
// UpdateMultiplayerLobbySlots();  // 0x5EB7B0
// UpdateMultiplayerPlayerOptions();  // 0x5DBF50
// UpdateSurfaceAnimations();  // 0x53AD00
// ValidateDialogControl();  // 0x601D20
// ValidateDialogEvent();  // 0x600CA0
// VideoSettingsDialogProc();  // 0x561400
// VoxelDrawScanline();  // 0x757BF0
// WOLLoginDialogProc();  // 0x79D720
// WaitForMultiplayerLoadSync();  // 0x684370
// WriteCompressionBlock();  // 0x55BB90
// ___sbh_alloc_block();  // 0x7CFB13
// ___sbh_find_block();  // 0x7CF7BD
// ___sbh_free_block();  // 0x7CF7E8
// ___sbh_resize_block();  // 0x7CFFC8
// __lock();  // 0x7CD9F5
// __lock_fhandle();  // 0x7D96A8
// __lock_file();  // 0x7CB3F9
// __lock_file2();  // 0x7CB428
// __lockexit();  // 0x7CBEC1
// __mtdeletelocks();  // 0x7CD989
// __mtinitlocks();  // 0x7CD960
// __unlock();  // 0x7CDA56
// __unlock_fhandle();  // 0x7D9707
// __unlock_file();  // 0x7CB44B
// __unlock_file2();  // 0x7CB47A
// __unlockexit();  // 0x7CBECA

} // namespace gamemd