#include <cstdio>
#include <cstring>
#include <windows.h>

#include "core/logging.hpp"
#include "core/spawn_config.hpp"

namespace gamemd {

bool SpawnModeEnter()
{
    auto cfg = SpawnConfig_LoadFromINI("spawn.ini");

    LOG_INFO("SpawnMode: spawn.ini loaded");
    LOG_INFO("  GameMode=%d Scenario=%s Seed=%d", cfg.game_mode, cfg.scenario, cfg.seed);
    LOG_INFO("  Bases=%d Credits=%d GameSpeed=%d AIPlayers=%d", cfg.bases, cfg.credits, cfg.game_speed, cfg.ai_players);
    LOG_INFO("  IsCampaign=%d LoadSaveGame=%d Protocol=%d", cfg.is_campaign, cfg.load_save_game, cfg.protocol);
    LOG_INFO("  Tournament=%d QuickMatch=%d Ra2Mode=%d", cfg.tournament, cfg.quick_match, cfg.ra2_mode);

    for (int i = 0; i < 8; ++i) {
        if (cfg.players[i].enabled) {
            LOG_INFO("  Player[%d]: Side=%d Color=%d Ip=%s Port=%d Observer=%d",
                i, cfg.players[i].side, cfg.players[i].color,
                cfg.players[i].ip, cfg.players[i].port, cfg.players[i].is_observer);
        }
    }

    if (cfg.tunnel_ip[0] && cfg.tunnel_port > 0) {
        LOG_INFO("  Tunnel: %s:%d Id=%d", cfg.tunnel_ip, cfg.tunnel_port, cfg.tunnel_id);
    }

    LOG_INFO("SpawnMode: entering game loop...");
    return true;
}

} // namespace gamemd
