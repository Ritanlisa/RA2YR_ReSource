"""Check which menu HIGH functions appear only in menu_globals_gen.cpp"""
import os

menu_high = [
    'MapSkirmishDialogPlayerToControl', 'SetupLobbyPlayerSlotDialog', 'ShowGameDialog',
    'IsMessageDialog', 'ShowSaveLoadDialog', 'ShowConfirmDialog', 'SetDialogPlayerName',
    'CleanupCampaignResources', 'ShowHotkeyOptionsDialog', 'NavigateDialogTab',
    'CacheDialogInvalidate', 'GetSkirmishMenuOwnerName', 'SetDialogActiveFlag',
    'ResizeDialogAndEnum', 'DestroyDialog', 'CreateDialog', 'GetDialogText', 'RunDialog',
    'ShowDiplomacyDialog', 'ShowAudioSettingsDialog', 'InitSkirmishSettings',
    'ScreenDialogToClient', 'ShowWOLLobbyDialog'
]

# Check non-generated cpp files for function definitions
check_files = [
    'src/core/menu_select.cpp', 'src/core/globals.cpp', 'src/core/init_game.cpp',
    'src/core/load_options.cpp', 'src/core/spawn_mode.cpp', 'src/core/spawn_config.cpp'
]

for func in menu_high:
    definitions = []
    for file_path in check_files:
        if not os.path.exists(file_path):
            continue
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
            if func not in content:
                continue
            # Check if defined (not just referenced)
            import re
            pattern = rf'(?:static\s+)?(?:void|int|bool|LONG|HWND|HRESULT|LRESULT|DWORD|UINT|BYTE|WORD|char|float|double)\s+{func}\s*\('
            match = re.search(pattern, content)
            if match:
                is_static = 'static' in match.group()
                kind = "static_stub" if is_static else "global_def"
                definitions.append(f"{file_path}:{kind}")
            else:
                definitions.append(f"{file_path}:referenced_only")
    
    if definitions:
        has_global = any('global_def' in d for d in definitions)
        print(f"{func}: {definitions} {'<-- DUPLICATE with gen!' if has_global else '(static only, OK)'}")
    else:
        print(f"{func}: ONLY in menu_globals_gen.cpp")
