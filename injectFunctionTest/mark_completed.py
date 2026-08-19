#!/usr/bin/env python3
"""Mark completed RE functions in functions.json.
Run after ida_extract.py to patch completion status.
"""
import json
import os

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
JSON_PATH = os.path.join(SCRIPT_DIR, "functions.json")

# Functions with real C++ implementations (IDA-annotated, non-trivial bodies)
COMPLETED = {
    # Entry / App layer
    "0x6bb9a0": "app/main.cpp",          # WinMain
    "0x52f620": "app/cmdline.cpp",       # ParseCommandLine
    "0x4a42f0": "app/ddraw_init.cpp",    # DDrawInitialize
    "0x4ba770": "app/ddraw_init.cpp",    # DSurface::DetectPixelFormat

    # Init pipeline
    "0x52ba60": "src/core/init_game.cpp",       # InitGame
    "0x54f000": "src/core/init_game.cpp",       # EventQueueProcess
    "0x48d080": "src/core/init_game.cpp",       # EventDispatchEx
    "0x4355b0": "src/core/init_game.cpp",       # Palette6BitTo16Bit
    "0x6c8c40": "src/core/init_game.cpp",       # TimerGetTicks
    "0x52fc20": "src/core/init_game.cpp",       # InitRandomSeed
    "0x4a38d0": "src/core/init_game.cpp",       # LoadFileSHP
    "0x5b40b0": "src/core/init_game.cpp",       # SearchMIXFile
    "0x530460": "src/core/init_game.cpp",       # MixFileLoadAll
    "0x5bed40": "src/core/init_game.cpp",       # MoviePlay
    "0x5312a0": "src/core/init_game.cpp",       # ShowLoadingScreen
    "0x52cb90": "src/core/init_game.cpp",       # CreditsScreen
    "0x5fa620": "src/core/init_game.cpp",       # GameSettingsRead
    "0x75a790": "src/core/init_game.cpp",       # AnimSystemInit
    "0x75a7d0": "src/core/init_game.cpp",       # ResetAnimSystem
    "0x52cb50": "src/core/init_game.cpp",       # PlayIntroSequence
    "0x6d1c20": "src/core/init_game.cpp",       # TacticalMapConstruct
    "0x532150": "src/core/init_game.cpp",       # InitCommands

    # Menu system
    "0x52d9a0": "src/core/menu_select.cpp",     # MenuSelect
    "0x48ccc0": "src/core/menu_select.cpp",     # MainGame
    "0x531cc0": "src/core/menu_select.cpp",     # MainMenuScreen
    "0x531f60": "src/core/menu_select.cpp",     # MainMenuDlgProc
    "0x60d380": "src/core/menu_select.cpp",     # CampaignScreen
    "0x55fc80": "src/core/menu_select.cpp",     # OptionsScreenDialog
    "0x6ae2c0": "src/core/menu_select.cpp",     # SkirmishSetupScreen
    "0x55d360": "src/core/menu_select.cpp",     # GameFrameLoop
    "0x55cfd0": "src/core/menu_select.cpp",     # GameFrameCheck
    "0x48c8b0": "src/core/menu_select.cpp",     # MainGameFrame

    # COM + CopyProtection
    "0x6bb390": "src/core/com_register.cpp",   # RegisterAllClasses
    "0x49f5c0": "src/core/copy_protection.cpp", # CopyProtectionCheckLauncher
    "0x49f620": "src/core/copy_protection.cpp", # CopyProtectionNotifyLauncher
    "0x49f7a0": "src/core/copy_protection.cpp", # CopyProtectionCheckProtectedData

    # MIX / IO
    "0x5301a0": "src/system/mix_file.cpp",     # MixFileClass::Bootstrap

    # CCFileClass
    "0x4739f0": "src/system/cc_file.cpp",      # CCFileClass Construct
    "0x473c50": "src/system/cc_file.cpp",      # CCFileClass::Open
    "0x473ce0": "src/system/cc_file.cpp",      # CCFileClass::Reset
    "0x4a3890": "src/system/cc_file.cpp",      # CCFileClass::ReadEntireFile

    # INIClass
    "0x535aa0": "src/system/ini_class.cpp",    # INIClass::INIClass
    "0x535b30": "src/system/ini_class.cpp",    # CCINIClass::CCINIClass
    "0x4741f0": "src/system/ini_class.cpp",    # CCINIClass::Load

    # Coordinates
    "0x565b40": "src/core/coordinate.cpp",     # Direction8
    "0x4a0820": "src/core/coordinate.cpp",     # IsCloseEnough

    # Object hierarchy
    "0x410170": "src/object/abstract.cpp",     # AbstractClass::AbstractClass
    "0x410260": "src/object/abstract.cpp",     # AbstractClass::QueryInterface
    "0x410300": "src/object/abstract.cpp",     # AbstractClass::AddRef
    "0x410310": "src/object/abstract.cpp",     # AbstractClass::Release
    "0x410230": "src/object/abstract.cpp",     # AbstractClass::CreateID

    # ObjectClass
    "0x5f44a0": "src/object/object.cpp",        # ObjectClass::Remove

    # Misc / Rules
    "0x52cd70": "src/misc/rules.cpp",           # InitRules
    "0x530000": "src/misc/rules.cpp",           # LoadExpansionMixFiles
    "0x531680": "src/misc/rules.cpp",           # InitBulkData
    "0x5d7ce0": "src/misc/rules.cpp",           # CompleteGameInit

    # Blowfish
    "0x4b9de0": "src/system/mix_blowfish.cpp",  # BlowfishEngine::SetKey
    "0x4b9f00": "src/system/mix_blowfish.cpp",  # BlowfishEngine::Encipher
    "0x4b9fe0": "src/system/mix_blowfish.cpp",  # BlowfishEngine::Decipher
    "0x4ba0c0": "src/system/mix_blowfish.cpp",  # ComputeBlowfishKey
}

def main():
    if not os.path.exists(JSON_PATH):
        print(f"ERROR: {JSON_PATH} not found")
        return

    with open(JSON_PATH, 'r') as f:
        data = json.load(f)

    updated = 0
    for fn in data['functions']:
        addr = fn['address'].lower()
        if addr in COMPLETED:
            fn['hook']['completed'] = True
            fn['hook']['re_file'] = COMPLETED[addr]
            updated += 1

    with open(JSON_PATH, 'w') as f:
        json.dump(data, f, indent=2)

    print(f"Marked {updated} functions as completed in {JSON_PATH}")
    print(f"Total: {data['metadata']['total_functions']}, "
          f"Completed: {updated}")

if __name__ == '__main__':
    main()
