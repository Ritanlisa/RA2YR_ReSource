import os

BASE = r"D:\RA2YR_ReSource\src"

# Files still in include/gamemd/ (unconverted) — need gamemd/ prefix
UNCONVERTED = {
    "misc/audio.hpp", "misc/rules.hpp", "misc/locomotion.hpp",
    "type/abstract_type.hpp",
    "render/surface.hpp", "render/display.hpp", "render/shp_render.hpp",
    "render/palette.hpp", "render/blitter.hpp", "render/shp_blitter.hpp",
    "render/text_render.hpp", "render/font_render.hpp", "render/voxel.hpp",
    "render/vxl_format.hpp", "render/shp_struct.hpp",
    "system/cc_file.hpp", "system/mix_file.hpp", "system/file_class.hpp",
    "system/cd_file.hpp", "system/cd_drive.hpp", "system/buffer_io_file.hpp",
    "system/file_system.hpp", "system/convert_class.hpp", "system/mix_blowfish.hpp",
    "system/xcc_names.hpp",
    "entity/voxel.hpp",
    "ui/sidebar.hpp", "ui/menu_screen.hpp", "ui/message_list.hpp",
    "ui/g_screen.hpp", "ui/command_class.hpp", "ui/dialog.hpp",
    "ui/power.hpp", "ui/tab.hpp",
    "network/connection.hpp", "network/multiplayer.hpp", "network/session.hpp",
    "core/com_defs.hpp", "core/coordinate.hpp", "core/ddraw_init.hpp",
    "core/enums.hpp", "core/game_loop.hpp", "core/init_stubs.hpp",
    "core/interfaces.hpp", "core/logging.hpp", "core/math.hpp",
    "core/memory.hpp", "core/reverse_marker.hpp", "core/spawn_config.hpp",
    "core/target.hpp", "core/vector.hpp",
    "fundamentals.hpp",
}

changed = 0
for root, dirs, files in os.walk(BASE):
    for fn in files:
        if not fn.endswith(".hpp") and not fn.endswith(".cpp"):
            continue
        fp = os.path.join(root, fn)
        with open(fp, "r", encoding="utf-8") as f:
            txt = f.read()
        orig = txt

        for uc in UNCONVERTED:
            # Replace "path/file.hpp" → "gamemd/path/file.hpp"
            # But only if it's an include directive
            old_inc = f'"{uc}"'
            new_inc = f'"gamemd/{uc}"'
            txt = txt.replace(old_inc, new_inc)

        if txt != orig:
            with open(fp, "w", encoding="utf-8", newline="\n") as f:
                f.write(txt)
            changed += 1

print(f"Fixed {changed} files")
