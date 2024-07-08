/*
 *    This file is part of RCBot.
 *
 *    RCBot by Paul Murphy adapted from botman's template 3.
 *
 *    RCBot is free software; you can redistribute it and/or modify it
 *    under the terms of the GNU General Public License as published by the
 *    Free Software Foundation; either version 2 of the License, or (at
 *    your option) any later version.
 *
 *    RCBot is distributed in the hope that it will be useful, but
 *    WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with RCBot; if not, write to the Free Software Foundation,
 *    Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *    In addition, as a special exception, the author gives permission to
 *    link the code of this program with the Half-Life Game Engine ("HL
 *    Engine") and Modified Game Libraries ("MODs") developed by Valve,
 *    L.L.C ("Valve").  You must obey the GNU General Public License in all
 *    respects for all of the code used other than the HL Engine and MODs
 *    from Valve.  If you modify this file, you may extend this exception
 *    to your version of the file, but you are not obligated to do so.  If
 *    you do not wish to do so, delete this exception statement from your
 *    version.
 *
 */
 //////////////////////////////////////////////////
 // RCBOT : Paul Murphy @ {cheeseh@rcbot.net}
 //
 // (http://www.rcbot.net)
 //
 // Based on botman's High Ping Bastard bot
 //
 // (http://planethalflife.com/botman/)
 //
 // dll.cpp
 //
 //////////////////////////////////////////////////
 //
 // functions for entities
 //

 /// Only for NON-METAMOD build only...
#ifndef RCBOT_META_BUILD

#include "extdll.h"
#include "util.h"
#include "cbase.h"

#include "bot.h"

#ifdef __BORLANDC__
extern HINSTANCE _h_Library;
#elif defined(_WIN32) && !defined(__CYGWIN__)
extern HINSTANCE h_Library;
#else
extern void* h_Library;
#endif

#ifdef __BORLANDC__

#define LINK_ENTITY_TO_FUNC(mapClassName) \
 extern "C" EXPORT void mapClassName( entvars_t *pev ); \
 void mapClassName( entvars_t *pev ) { \
	  static LINK_ENTITY_FUNC otherClassName = NULL; \
	  static int skip_this = 0; \
	  if (skip_this) return; \
	  if (otherClassName == NULL) \
		 otherClassName = (LINK_ENTITY_FUNC)GetProcAddress(_h_Library, #mapClassName); \
	  if (otherClassName == NULL) { \
		 skip_this = 1; return; \
	  } \
	  (*otherClassName)(pev); }

#else

#define LINK_ENTITY_TO_FUNC(mapClassName) \
 extern "C" EXPORT void mapClassName( entvars_t *pev ); \
 void mapClassName( entvars_t *pev ) { \
	  static LINK_ENTITY_FUNC otherClassName = NULL; \
	  static int skip_this = 0; \
	  if (skip_this) return; \
	  if (otherClassName == NULL) \
		 otherClassName = (LINK_ENTITY_FUNC)GetProcAddress(h_Library, #mapClassName); \
	  if (otherClassName == NULL) { \
		 skip_this = 1; return; \
	  } \
	  (*otherClassName)(pev); }

#endif

////////////////////////////////
// LINKFUNCS GENERATED BY
// EXPORTS by Botman Edited by Me :D

LINK_ENTITY_TO_FUNC(weapon_rallyhp);
LINK_ENTITY_TO_FUNC(info_waypoint);
LINK_ENTITY_TO_FUNC(info_vgui_start);
LINK_ENTITY_TO_FUNC(info_player_start_reverse);
LINK_ENTITY_TO_FUNC(info_player_respawn);
LINK_ENTITY_TO_FUNC(info_player_deathmatch_reverse);
LINK_ENTITY_TO_FUNC(info_checkpoint);
LINK_ENTITY_TO_FUNC(info_camera);
LINK_ENTITY_TO_FUNC(bot);
LINK_ENTITY_TO_FUNC(weapon_grenade);
LINK_ENTITY_TO_FUNC(weapon_bite2gun);
LINK_ENTITY_TO_FUNC(item_catalyst);
LINK_ENTITY_TO_FUNC(item_ammopack);
LINK_ENTITY_TO_FUNC(weapon_uziakimbo);
LINK_ENTITY_TO_FUNC(weapon_uzi);
LINK_ENTITY_TO_FUNC(weapon_sniperrifle);
LINK_ENTITY_TO_FUNC(weapon_pipewrench);
LINK_ENTITY_TO_FUNC(weapon_minigun);
LINK_ENTITY_TO_FUNC(weapon_medkit);
LINK_ENTITY_TO_FUNC(weapon_grapple);
LINK_ENTITY_TO_FUNC(weapon_crowbar_electric);
LINK_ENTITY_TO_FUNC(voltigoreshock);
LINK_ENTITY_TO_FUNC(trigger_setorigin);
LINK_ENTITY_TO_FUNC(trigger_respawn);
LINK_ENTITY_TO_FUNC(trigger_random_unique);
LINK_ENTITY_TO_FUNC(trigger_random_time);
LINK_ENTITY_TO_FUNC(squadmaker);
LINK_ENTITY_TO_FUNC(sporegrenade);
LINK_ENTITY_TO_FUNC(shock_beam);
LINK_ENTITY_TO_FUNC(playerhornet);
LINK_ENTITY_TO_FUNC(player_respawn_zone);
LINK_ENTITY_TO_FUNC(pitdronespike);
LINK_ENTITY_TO_FUNC(path_monster);
LINK_ENTITY_TO_FUNC(monster_zombie_soldier);
LINK_ENTITY_TO_FUNC(monster_zombie_barney);
LINK_ENTITY_TO_FUNC(monster_torch_ally_repel);
LINK_ENTITY_TO_FUNC(monster_shocktrooper);
LINK_ENTITY_TO_FUNC(monster_shockroach);
LINK_ENTITY_TO_FUNC(monster_robogrunt_repel);
LINK_ENTITY_TO_FUNC(monster_robogrunt_dead);
LINK_ENTITY_TO_FUNC(monster_robogrunt);
LINK_ENTITY_TO_FUNC(monster_pitdrone);
LINK_ENTITY_TO_FUNC(monster_otis_dead);
LINK_ENTITY_TO_FUNC(monster_otis);
LINK_ENTITY_TO_FUNC(monster_medic_ally_repel);
LINK_ENTITY_TO_FUNC(monster_male_assassin);
LINK_ENTITY_TO_FUNC(monster_hwgrunt_repel);
LINK_ENTITY_TO_FUNC(monster_hwgrunt);
LINK_ENTITY_TO_FUNC(monster_human_torch_ally_dead);
LINK_ENTITY_TO_FUNC(monster_human_torch_ally);
LINK_ENTITY_TO_FUNC(monster_human_medic_ally_dead);
LINK_ENTITY_TO_FUNC(monster_human_medic_ally);
LINK_ENTITY_TO_FUNC(monster_human_grunt_ally_dead);
LINK_ENTITY_TO_FUNC(monster_human_grunt_ally);
LINK_ENTITY_TO_FUNC(monster_grunt_ally_torch_dead);
LINK_ENTITY_TO_FUNC(monster_grunt_ally_repel);
LINK_ENTITY_TO_FUNC(monster_grunt_ally_medic_dead);
LINK_ENTITY_TO_FUNC(monster_grunt_ally_dead);
LINK_ENTITY_TO_FUNC(monster_gonome);
LINK_ENTITY_TO_FUNC(monster_cleansuit_scientist);
LINK_ENTITY_TO_FUNC(monster_chumtoad);
LINK_ENTITY_TO_FUNC(monster_blkop_osprey);
LINK_ENTITY_TO_FUNC(monster_blkop_apache);
LINK_ENTITY_TO_FUNC(monster_babygarg);
LINK_ENTITY_TO_FUNC(monster_assassin_repel);
LINK_ENTITY_TO_FUNC(monster_alien_voltigore);
LINK_ENTITY_TO_FUNC(monster_alien_babyvoltigore);
LINK_ENTITY_TO_FUNC(item_pack);
LINK_ENTITY_TO_FUNC(item_generic);
LINK_ENTITY_TO_FUNC(info_player_dm2);
LINK_ENTITY_TO_FUNC(grappletongue);
LINK_ENTITY_TO_FUNC(gonomespit);
LINK_ENTITY_TO_FUNC(env_xenmaker);
LINK_ENTITY_TO_FUNC(env_spritetrain);
LINK_ENTITY_TO_FUNC(env_sentence);
LINK_ENTITY_TO_FUNC(custom_precache);
LINK_ENTITY_TO_FUNC(ammo_762);
LINK_ENTITY_TO_FUNC(ammo_556);
LINK_ENTITY_TO_FUNC(_squadfix);
LINK_ENTITY_TO_FUNC(weapon_quake);
LINK_ENTITY_TO_FUNC(weapon_drunk);
LINK_ENTITY_TO_FUNC(weapon_teleport);
LINK_ENTITY_TO_FUNC(weapon_bomb);
LINK_ENTITY_TO_FUNC(trigger_crash);
LINK_ENTITY_TO_FUNC(item_powerup);
LINK_ENTITY_TO_FUNC(grunt_spawn);
LINK_ENTITY_TO_FUNC(grunt_node);
LINK_ENTITY_TO_FUNC(bumper_car_start);
LINK_ENTITY_TO_FUNC(weapon_supershotgun);
LINK_ENTITY_TO_FUNC(weapon_supernailgun);
LINK_ENTITY_TO_FUNC(weapon_rocketlauncher);
LINK_ENTITY_TO_FUNC(weapon_quakegun);
LINK_ENTITY_TO_FUNC(weapon_nailgun);
LINK_ENTITY_TO_FUNC(weapon_lightning);
LINK_ENTITY_TO_FUNC(weapon_grenadelauncher);
LINK_ENTITY_TO_FUNC(trigger_env_hurt);
LINK_ENTITY_TO_FUNC(quake_rocket);
LINK_ENTITY_TO_FUNC(quake_nail);
LINK_ENTITY_TO_FUNC(item_weapon);
LINK_ENTITY_TO_FUNC(item_backpack);
LINK_ENTITY_TO_FUNC(item_armorInv);
LINK_ENTITY_TO_FUNC(crossbow_bolt);
LINK_ENTITY_TO_FUNC(telebecon);
LINK_ENTITY_TO_FUNC(slowrefirecurse);
LINK_ENTITY_TO_FUNC(slowcurse);
LINK_ENTITY_TO_FUNC(sdcurse);
LINK_ENTITY_TO_FUNC(scientistbomb);
LINK_ENTITY_TO_FUNC(sci_spawner);
LINK_ENTITY_TO_FUNC(reversecurse);
LINK_ENTITY_TO_FUNC(promagcurse);
LINK_ENTITY_TO_FUNC(player_corpse);
LINK_ENTITY_TO_FUNC(pipebomb);
LINK_ENTITY_TO_FUNC(pickup_drive_turret);
LINK_ENTITY_TO_FUNC(pickup_drive_slave);
LINK_ENTITY_TO_FUNC(pickup_drive_panth);
LINK_ENTITY_TO_FUNC(pickup_drive_icky);
LINK_ENTITY_TO_FUNC(pickup_drive_houndeye);
LINK_ENTITY_TO_FUNC(pickup_drive_garg);
LINK_ENTITY_TO_FUNC(pickup_drive_controller);
LINK_ENTITY_TO_FUNC(pickup_drive_bullsquid);
LINK_ENTITY_TO_FUNC(pickup_drive_bm);
LINK_ENTITY_TO_FUNC(pickup_drive_assassin);
LINK_ENTITY_TO_FUNC(pickup_drive_apache);
LINK_ENTITY_TO_FUNC(pickup_drive_agrunt);
LINK_ENTITY_TO_FUNC(nuke_rocket);
LINK_ENTITY_TO_FUNC(monster_killerbabycrab);
LINK_ENTITY_TO_FUNC(lc_spawner);
LINK_ENTITY_TO_FUNC(lc_respawner);
LINK_ENTITY_TO_FUNC(lc_init_ent);
LINK_ENTITY_TO_FUNC(killerrat);
LINK_ENTITY_TO_FUNC(info_teamspawn);
LINK_ENTITY_TO_FUNC(info_semi_null);
LINK_ENTITY_TO_FUNC(info_flagspawn);
LINK_ENTITY_TO_FUNC(info_drive_turret_spawn);
LINK_ENTITY_TO_FUNC(info_drive_slave_spawn);
LINK_ENTITY_TO_FUNC(info_drive_panth_spawn);
LINK_ENTITY_TO_FUNC(info_drive_icky_spawn);
LINK_ENTITY_TO_FUNC(info_drive_houndeye_spawn);
LINK_ENTITY_TO_FUNC(info_drive_garg_spawn);
LINK_ENTITY_TO_FUNC(info_drive_controller_spawn);
LINK_ENTITY_TO_FUNC(info_drive_bullsquid_spawn);
LINK_ENTITY_TO_FUNC(info_drive_bm_spawn);
LINK_ENTITY_TO_FUNC(info_drive_assassin_spawn);
LINK_ENTITY_TO_FUNC(info_drive_apache_spawn);
LINK_ENTITY_TO_FUNC(info_drive_agrunt_spawn);
LINK_ENTITY_TO_FUNC(info_deathball_spawn);
LINK_ENTITY_TO_FUNC(impgren);
LINK_ENTITY_TO_FUNC(impail_arrow);
LINK_ENTITY_TO_FUNC(headcrab_teather);
LINK_ENTITY_TO_FUNC(he_eye_flare);
LINK_ENTITY_TO_FUNC(he_charge_flare);
LINK_ENTITY_TO_FUNC(gonarch_headcrabifier);
LINK_ENTITY_TO_FUNC(func_tankgib_gib);
LINK_ENTITY_TO_FUNC(func_tankgib);
LINK_ENTITY_TO_FUNC(friction_timer);
LINK_ENTITY_TO_FUNC(flag);
LINK_ENTITY_TO_FUNC(fading_corpse);
LINK_ENTITY_TO_FUNC(env_fadeone);
LINK_ENTITY_TO_FUNC(egon_mirv);
LINK_ENTITY_TO_FUNC(drv_hvr_rocket);
LINK_ENTITY_TO_FUNC(drunkcurse);
LINK_ENTITY_TO_FUNC(drive_turret_spawner);
LINK_ENTITY_TO_FUNC(drive_turret);
LINK_ENTITY_TO_FUNC(drive_slave_spawner);
LINK_ENTITY_TO_FUNC(drive_panth_spawner);
LINK_ENTITY_TO_FUNC(drive_panth);
LINK_ENTITY_TO_FUNC(drive_icky_spawner);
LINK_ENTITY_TO_FUNC(drive_icky);
LINK_ENTITY_TO_FUNC(drive_houndeye_spawner);
LINK_ENTITY_TO_FUNC(drive_houndeye);
LINK_ENTITY_TO_FUNC(drive_headcrab);
LINK_ENTITY_TO_FUNC(drive_garg_spawner);
LINK_ENTITY_TO_FUNC(drive_garg);
LINK_ENTITY_TO_FUNC(drive_controller_spawner);
LINK_ENTITY_TO_FUNC(drive_controller);
LINK_ENTITY_TO_FUNC(drive_chumtoad);
LINK_ENTITY_TO_FUNC(drive_bullsquid_spawner);
LINK_ENTITY_TO_FUNC(drive_bullsquid);
LINK_ENTITY_TO_FUNC(drive_bm_spawner);
LINK_ENTITY_TO_FUNC(drive_bm);
LINK_ENTITY_TO_FUNC(drive_assassin_spawner);
LINK_ENTITY_TO_FUNC(drive_assassin);
LINK_ENTITY_TO_FUNC(drive_asl);
LINK_ENTITY_TO_FUNC(drive_apache_spawner);
LINK_ENTITY_TO_FUNC(drive_apache);
LINK_ENTITY_TO_FUNC(drive_agrunt_spawner);
LINK_ENTITY_TO_FUNC(drive_agrunt);
LINK_ENTITY_TO_FUNC(dmgscalecurse);
LINK_ENTITY_TO_FUNC(dmgmirrorcurse);
LINK_ENTITY_TO_FUNC(dg_streak_spiral);
LINK_ENTITY_TO_FUNC(deathball);
LINK_ENTITY_TO_FUNC(db_spawner);
LINK_ENTITY_TO_FUNC(curse_spawner);
LINK_ENTITY_TO_FUNC(controller_throw_ball);
LINK_ENTITY_TO_FUNC(controller_health_ball);
LINK_ENTITY_TO_FUNC(controller_charged_ball);
LINK_ENTITY_TO_FUNC(controller_charge_ball);
LINK_ENTITY_TO_FUNC(bubgren);
LINK_ENTITY_TO_FUNC(basecurse);
LINK_ENTITY_TO_FUNC(base_drive_ent);
LINK_ENTITY_TO_FUNC(barneymine);
LINK_ENTITY_TO_FUNC(asl_charge_flare);
LINK_ENTITY_TO_FUNC(alien_slave_sapper);
LINK_ENTITY_TO_FUNC(alien_slave_energy_ball);
LINK_ENTITY_TO_FUNC(acidgib);
LINK_ENTITY_TO_FUNC(PythRound);
LINK_ENTITY_TO_FUNC(PREFS_LookUpKey);
LINK_ENTITY_TO_FUNC(IsoBomb);
LINK_ENTITY_TO_FUNC(xbow_teather);
LINK_ENTITY_TO_FUNC(weapon_tripmine);
LINK_ENTITY_TO_FUNC(weapon_rpg);
LINK_ENTITY_TO_FUNC(weapon_python);
LINK_ENTITY_TO_FUNC(weapon_mp5);
LINK_ENTITY_TO_FUNC(weapon_hornetgun);
LINK_ENTITY_TO_FUNC(weapon_glock);
LINK_ENTITY_TO_FUNC(weapon_crossbow);
LINK_ENTITY_TO_FUNC(weapon_9mmhandgun);
LINK_ENTITY_TO_FUNC(weapon_9mmAR);
LINK_ENTITY_TO_FUNC(weapon_357);
LINK_ENTITY_TO_FUNC(virtual_hull);
LINK_ENTITY_TO_FUNC(ultima_grenade);
LINK_ENTITY_TO_FUNC(transphasic_gib);
LINK_ENTITY_TO_FUNC(timedevent);
LINK_ENTITY_TO_FUNC(tcontroller_tball);
LINK_ENTITY_TO_FUNC(tcontroller_cball);
LINK_ENTITY_TO_FUNC(target_tripmine);
LINK_ENTITY_TO_FUNC(suck_mine);
LINK_ENTITY_TO_FUNC(suck_grenade);
LINK_ENTITY_TO_FUNC(streak_spiral);
LINK_ENTITY_TO_FUNC(squidspit);
LINK_ENTITY_TO_FUNC(sphere_mine);
LINK_ENTITY_TO_FUNC(snark_project);
LINK_ENTITY_TO_FUNC(snark_cam);
LINK_ENTITY_TO_FUNC(sm_project);
LINK_ENTITY_TO_FUNC(shrinker_project);
LINK_ENTITY_TO_FUNC(shrink_timer);
LINK_ENTITY_TO_FUNC(shotgun_sci);
LINK_ENTITY_TO_FUNC(shotgun_hev);
LINK_ENTITY_TO_FUNC(shotgun_forklift);
LINK_ENTITY_TO_FUNC(shotgun_crate);
LINK_ENTITY_TO_FUNC(scientist_mine);
LINK_ENTITY_TO_FUNC(rpg_rocket);
LINK_ENTITY_TO_FUNC(rocket_mine);
LINK_ENTITY_TO_FUNC(roach_charge);
LINK_ENTITY_TO_FUNC(rm_rocket);
LINK_ENTITY_TO_FUNC(race_path);
LINK_ENTITY_TO_FUNC(race_controller);
LINK_ENTITY_TO_FUNC(punch_tripmine);
LINK_ENTITY_TO_FUNC(phase_pulse);
LINK_ENTITY_TO_FUNC(nuclear_missile);
LINK_ENTITY_TO_FUNC(nihilanth_energy_ball);
LINK_ENTITY_TO_FUNC(monstermaker);
LINK_ENTITY_TO_FUNC(monster_zombie);
LINK_ENTITY_TO_FUNC(monster_vortigaunt);
LINK_ENTITY_TO_FUNC(monster_tripmine);
LINK_ENTITY_TO_FUNC(monster_tentaclemaw);
LINK_ENTITY_TO_FUNC(monster_tentacle);
LINK_ENTITY_TO_FUNC(monster_sitting_scientist);
LINK_ENTITY_TO_FUNC(monster_scientist_dead);
LINK_ENTITY_TO_FUNC(monster_rat);
LINK_ENTITY_TO_FUNC(monster_osprey);
LINK_ENTITY_TO_FUNC(monster_nihilanth);
LINK_ENTITY_TO_FUNC(monster_leech);
LINK_ENTITY_TO_FUNC(monster_ichthyosaur);
LINK_ENTITY_TO_FUNC(monster_human_grunt);
LINK_ENTITY_TO_FUNC(monster_human_assassin);
LINK_ENTITY_TO_FUNC(monster_houndeye);
LINK_ENTITY_TO_FUNC(monster_hgrunt_dead);
LINK_ENTITY_TO_FUNC(monster_headcrab);
LINK_ENTITY_TO_FUNC(monster_grunt_repel);
LINK_ENTITY_TO_FUNC(monster_gman);
LINK_ENTITY_TO_FUNC(monster_gargantua);
LINK_ENTITY_TO_FUNC(monster_flyer_flock);
LINK_ENTITY_TO_FUNC(monster_flyer);
LINK_ENTITY_TO_FUNC(monster_cockroach);
LINK_ENTITY_TO_FUNC(monster_bullchicken);
LINK_ENTITY_TO_FUNC(monster_bloater);
LINK_ENTITY_TO_FUNC(monster_bigmomma);
LINK_ENTITY_TO_FUNC(monster_barney_dead);
LINK_ENTITY_TO_FUNC(monster_barney);
LINK_ENTITY_TO_FUNC(monster_barnacle);
LINK_ENTITY_TO_FUNC(monster_babycrab);
LINK_ENTITY_TO_FUNC(monster_apache);
LINK_ENTITY_TO_FUNC(monster_alien_slave);
LINK_ENTITY_TO_FUNC(monster_alien_grunt);
LINK_ENTITY_TO_FUNC(monster_alien_controller);
LINK_ENTITY_TO_FUNC(mini_grunt);
LINK_ENTITY_TO_FUNC(maintainer_ent);
LINK_ENTITY_TO_FUNC(lcs_spawner);
LINK_ENTITY_TO_FUNC(info_player_coop);
LINK_ENTITY_TO_FUNC(info_bigmomma);
LINK_ENTITY_TO_FUNC(implode_timer);
LINK_ENTITY_TO_FUNC(impailer);
LINK_ENTITY_TO_FUNC(hvr_rocket);
LINK_ENTITY_TO_FUNC(hornet);
LINK_ENTITY_TO_FUNC(gravity_grenade);
LINK_ENTITY_TO_FUNC(glock_stickygib);
LINK_ENTITY_TO_FUNC(glock_gib);
LINK_ENTITY_TO_FUNC(gauss_becon);
LINK_ENTITY_TO_FUNC(garg_stomp);
LINK_ENTITY_TO_FUNC(freeze_timer);
LINK_ENTITY_TO_FUNC(freeze_grenade);
LINK_ENTITY_TO_FUNC(explode_bolt);
LINK_ENTITY_TO_FUNC(env_smoker);
LINK_ENTITY_TO_FUNC(crowbarang);
LINK_ENTITY_TO_FUNC(crowbar_rocket);
LINK_ENTITY_TO_FUNC(controller_head_ball);
LINK_ENTITY_TO_FUNC(controller_energy_ball);
LINK_ENTITY_TO_FUNC(control_forklift);
LINK_ENTITY_TO_FUNC(conc_charge);
LINK_ENTITY_TO_FUNC(chain_hurter);
LINK_ENTITY_TO_FUNC(bouncy_tripmine);
LINK_ENTITY_TO_FUNC(bouncy_bolt);
LINK_ENTITY_TO_FUNC(bmortar);
LINK_ENTITY_TO_FUNC(blaster_bolt);
LINK_ENTITY_TO_FUNC(ball_lightning);
LINK_ENTITY_TO_FUNC(antifriction_grenade);
LINK_ENTITY_TO_FUNC(antifric_timer);
LINK_ENTITY_TO_FUNC(ammo_rpgclip);
LINK_ENTITY_TO_FUNC(ammo_mp5grenades);
LINK_ENTITY_TO_FUNC(ammo_mp5clip);
LINK_ENTITY_TO_FUNC(ammo_glockclip);
LINK_ENTITY_TO_FUNC(ammo_crossbow);
LINK_ENTITY_TO_FUNC(ammo_ARgrenades);
LINK_ENTITY_TO_FUNC(ammo_9mmclip);
LINK_ENTITY_TO_FUNC(ammo_9mmbox);
LINK_ENTITY_TO_FUNC(ammo_9mmAR);
LINK_ENTITY_TO_FUNC(ammo_357);
LINK_ENTITY_TO_FUNC(weapon_tsgun);
LINK_ENTITY_TO_FUNC(ts_wingiver);
LINK_ENTITY_TO_FUNC(ts_trigger);
LINK_ENTITY_TO_FUNC(ts_teamescape);
LINK_ENTITY_TO_FUNC(ts_slowmotionpoint);
LINK_ENTITY_TO_FUNC(ts_slowmotion);
LINK_ENTITY_TO_FUNC(ts_powerup);
LINK_ENTITY_TO_FUNC(ts_objective_ptr);
LINK_ENTITY_TO_FUNC(ts_objective_manager);
LINK_ENTITY_TO_FUNC(ts_model);
LINK_ENTITY_TO_FUNC(ts_mapglobals);
LINK_ENTITY_TO_FUNC(ts_hack);
LINK_ENTITY_TO_FUNC(ts_groundweapon);
LINK_ENTITY_TO_FUNC(ts_dmhill);
LINK_ENTITY_TO_FUNC(ts_bomb);
LINK_ENTITY_TO_FUNC(shrapnel);
LINK_ENTITY_TO_FUNC(m61_grenade);
LINK_ENTITY_TO_FUNC(knife);
LINK_ENTITY_TO_FUNC(deadcorpse);
LINK_ENTITY_TO_FUNC(TSWorldGun);
LINK_ENTITY_TO_FUNC(TSAmmoPack);
LINK_ENTITY_TO_FUNC(weapon_Sabre);
LINK_ENTITY_TO_FUNC(weapon_Revolutionnaire);
LINK_ENTITY_TO_FUNC(weapon_PistolB);
LINK_ENTITY_TO_FUNC(weapon_PistolA);
LINK_ENTITY_TO_FUNC(weapon_Pennsylvania);
LINK_ENTITY_TO_FUNC(weapon_Knife);
LINK_ENTITY_TO_FUNC(weapon_Charleville);
LINK_ENTITY_TO_FUNC(weapon_BrownBess);
LINK_ENTITY_TO_FUNC(info_spawn_container);
LINK_ENTITY_TO_FUNC(info_reset);
LINK_ENTITY_TO_FUNC(info_player_spectator);
LINK_ENTITY_TO_FUNC(info_player_british);
LINK_ENTITY_TO_FUNC(info_player_american);
LINK_ENTITY_TO_FUNC(info_british_line);
LINK_ENTITY_TO_FUNC(info_bg_detect);
LINK_ENTITY_TO_FUNC(info_american_line);
LINK_ENTITY_TO_FUNC(game_team_score);
LINK_ENTITY_TO_FUNC(func_possesion);
LINK_ENTITY_TO_FUNC(func_point);
LINK_ENTITY_TO_FUNC(func_ctb);
LINK_ENTITY_TO_FUNC(func_capturepoint);
LINK_ENTITY_TO_FUNC(func_ammostripper);
LINK_ENTITY_TO_FUNC(func_ammoprovider);
LINK_ENTITY_TO_FUNC(env_model);
LINK_ENTITY_TO_FUNC(env_footsteps);
LINK_ENTITY_TO_FUNC(env_flag);
LINK_ENTITY_TO_FUNC(StartFrame);
LINK_ENTITY_TO_FUNC(PlayerPreThink);
LINK_ENTITY_TO_FUNC(PlayerPostThink);
LINK_ENTITY_TO_FUNC(ClientKill);
LINK_ENTITY_TO_FUNC(ClientDisconnect);
LINK_ENTITY_TO_FUNC(ClientConnect);
LINK_ENTITY_TO_FUNC(weapon_xm1014);
LINK_ENTITY_TO_FUNC(weapon_usp);
LINK_ENTITY_TO_FUNC(weapon_ump45);
LINK_ENTITY_TO_FUNC(weapon_tmp);
LINK_ENTITY_TO_FUNC(weapon_smokegrenade);
LINK_ENTITY_TO_FUNC(weapon_shield);
LINK_ENTITY_TO_FUNC(weapon_sg552);
LINK_ENTITY_TO_FUNC(weapon_sg550);
LINK_ENTITY_TO_FUNC(weapon_scout);
LINK_ENTITY_TO_FUNC(weapon_p90);
LINK_ENTITY_TO_FUNC(weapon_p228);
LINK_ENTITY_TO_FUNC(weapon_mp5navy);
LINK_ENTITY_TO_FUNC(weapon_mac10);
LINK_ENTITY_TO_FUNC(weapon_m4a1);
LINK_ENTITY_TO_FUNC(weapon_m3);
LINK_ENTITY_TO_FUNC(weapon_m249);
LINK_ENTITY_TO_FUNC(weapon_hegrenade);
LINK_ENTITY_TO_FUNC(weapon_glock18);
LINK_ENTITY_TO_FUNC(weapon_galil);
LINK_ENTITY_TO_FUNC(weapon_g3sg1);
LINK_ENTITY_TO_FUNC(weapon_flashbang);
LINK_ENTITY_TO_FUNC(weapon_fiveseven);
LINK_ENTITY_TO_FUNC(weapon_famas);
LINK_ENTITY_TO_FUNC(weapon_elite);
LINK_ENTITY_TO_FUNC(weapon_deagle);
LINK_ENTITY_TO_FUNC(weapon_c4);
LINK_ENTITY_TO_FUNC(weapon_awp);
LINK_ENTITY_TO_FUNC(weapon_aug);
LINK_ENTITY_TO_FUNC(weapon_ak47);
LINK_ENTITY_TO_FUNC(monster_scientist);
LINK_ENTITY_TO_FUNC(item_thighpack);
LINK_ENTITY_TO_FUNC(item_kevlar);
LINK_ENTITY_TO_FUNC(item_assaultsuit);
LINK_ENTITY_TO_FUNC(info_vip_start);
LINK_ENTITY_TO_FUNC(info_map_parameters);
LINK_ENTITY_TO_FUNC(info_hostage_rescue);
LINK_ENTITY_TO_FUNC(info_bomb_target);
LINK_ENTITY_TO_FUNC(hostage_entity);
LINK_ENTITY_TO_FUNC(g_flTimeLimit);
LINK_ENTITY_TO_FUNC(func_weaponcheck);
LINK_ENTITY_TO_FUNC(func_vip_safetyzone);
LINK_ENTITY_TO_FUNC(func_vehiclecontrols);
LINK_ENTITY_TO_FUNC(func_vehicle);
LINK_ENTITY_TO_FUNC(func_snow);
LINK_ENTITY_TO_FUNC(func_rain);
LINK_ENTITY_TO_FUNC(func_hostage_rescue);
LINK_ENTITY_TO_FUNC(func_grencatch);
LINK_ENTITY_TO_FUNC(func_escapezone);
LINK_ENTITY_TO_FUNC(func_buyzone);
LINK_ENTITY_TO_FUNC(func_bomb_target);
LINK_ENTITY_TO_FUNC(env_snow);
LINK_ENTITY_TO_FUNC(env_rain);
LINK_ENTITY_TO_FUNC(env_bombglow);
LINK_ENTITY_TO_FUNC(armoury_entity);
LINK_ENTITY_TO_FUNC(ammo_9mm);
LINK_ENTITY_TO_FUNC(ammo_762nato);
LINK_ENTITY_TO_FUNC(ammo_57mm);
LINK_ENTITY_TO_FUNC(ammo_556natobox);
LINK_ENTITY_TO_FUNC(ammo_556nato);
LINK_ENTITY_TO_FUNC(ammo_50ae);
LINK_ENTITY_TO_FUNC(ammo_45acp);
LINK_ENTITY_TO_FUNC(ammo_357sig);
LINK_ENTITY_TO_FUNC(ammo_338magnum);
LINK_ENTITY_TO_FUNC(Server_GetBlendingInterface);
LINK_ENTITY_TO_FUNC(CountTeams);
LINK_ENTITY_TO_FUNC(CountTeamPlayers);
LINK_ENTITY_TO_FUNC(webgunprojectile);
LINK_ENTITY_TO_FUNC(weapon_welder);
LINK_ENTITY_TO_FUNC(weapon_webspinner);
LINK_ENTITY_TO_FUNC(weapon_umbra);
LINK_ENTITY_TO_FUNC(weapon_swipe);
LINK_ENTITY_TO_FUNC(weapon_stomp);
LINK_ENTITY_TO_FUNC(weapon_spore);
LINK_ENTITY_TO_FUNC(weapon_spit);
LINK_ENTITY_TO_FUNC(weapon_spikegun);
LINK_ENTITY_TO_FUNC(weapon_snark);
LINK_ENTITY_TO_FUNC(weapon_shotgun);
LINK_ENTITY_TO_FUNC(weapon_satchel);
LINK_ENTITY_TO_FUNC(weapon_primalscream);
LINK_ENTITY_TO_FUNC(weapon_pistol);
LINK_ENTITY_TO_FUNC(weapon_parasite);
LINK_ENTITY_TO_FUNC(weapon_mine);
LINK_ENTITY_TO_FUNC(weapon_metabolize);
LINK_ENTITY_TO_FUNC(weapon_machinegun);
LINK_ENTITY_TO_FUNC(weapon_leap);
LINK_ENTITY_TO_FUNC(weapon_knife);
LINK_ENTITY_TO_FUNC(weapon_heavymachinegun);
LINK_ENTITY_TO_FUNC(weapon_healingspray);
LINK_ENTITY_TO_FUNC(weapon_grenadegun);
LINK_ENTITY_TO_FUNC(weapon_gauss);
LINK_ENTITY_TO_FUNC(weapon_egon);
LINK_ENTITY_TO_FUNC(weapon_divinewind);
LINK_ENTITY_TO_FUNC(weapon_devour);
LINK_ENTITY_TO_FUNC(weapon_claws);
LINK_ENTITY_TO_FUNC(weapon_charge);
LINK_ENTITY_TO_FUNC(weapon_blink);
LINK_ENTITY_TO_FUNC(weapon_bitegun);
LINK_ENTITY_TO_FUNC(weapon_bite2gun);
LINK_ENTITY_TO_FUNC(weapon_bilebombgun);
LINK_ENTITY_TO_FUNC(weapon_bilebomb);
LINK_ENTITY_TO_FUNC(weapon_hivegun);
LINK_ENTITY_TO_FUNC(weapon_acidrocketgun);
LINK_ENTITY_TO_FUNC(umbraprojectile);
LINK_ENTITY_TO_FUNC(umbracloud);
LINK_ENTITY_TO_FUNC(turret);
LINK_ENTITY_TO_FUNC(trigger_script);
LINK_ENTITY_TO_FUNC(trigger_random);
LINK_ENTITY_TO_FUNC(trigger_presence);
LINK_ENTITY_TO_FUNC(team_webstrand);
LINK_ENTITY_TO_FUNC(team_turretfactory);
LINK_ENTITY_TO_FUNC(team_prototypelab);
LINK_ENTITY_TO_FUNC(team_observatory);
LINK_ENTITY_TO_FUNC(team_infportal);
LINK_ENTITY_TO_FUNC(team_hive);
LINK_ENTITY_TO_FUNC(team_command);
LINK_ENTITY_TO_FUNC(team_armslab);
LINK_ENTITY_TO_FUNC(team_armory);
LINK_ENTITY_TO_FUNC(team_advarmory);
LINK_ENTITY_TO_FUNC(target_mp3audio);
LINK_ENTITY_TO_FUNC(stompprojectile);
LINK_ENTITY_TO_FUNC(sporegunprojectile);
LINK_ENTITY_TO_FUNC(spitgunprojectile);
LINK_ENTITY_TO_FUNC(siegeturret);
LINK_ENTITY_TO_FUNC(sensorychamber);
LINK_ENTITY_TO_FUNC(scan);
LINK_ENTITY_TO_FUNC(resourcetower);
LINK_ENTITY_TO_FUNC(phasegate);
LINK_ENTITY_TO_FUNC(offensechamber);
LINK_ENTITY_TO_FUNC(nuke);
LINK_ENTITY_TO_FUNC(movementchamber);
LINK_ENTITY_TO_FUNC(monster_snark);
LINK_ENTITY_TO_FUNC(monster_satchel);
LINK_ENTITY_TO_FUNC(kwSpikeProjectile);
LINK_ENTITY_TO_FUNC(item_mine);
LINK_ENTITY_TO_FUNC(item_jetpack);
LINK_ENTITY_TO_FUNC(item_heavyarmor);
LINK_ENTITY_TO_FUNC(item_genericammo);
LINK_ENTITY_TO_FUNC(info_team_start);
LINK_ENTITY_TO_FUNC(info_spectate);
LINK_ENTITY_TO_FUNC(info_mapinfo);
LINK_ENTITY_TO_FUNC(info_location);
LINK_ENTITY_TO_FUNC(info_join_team);
LINK_ENTITY_TO_FUNC(info_join_autoassign);
LINK_ENTITY_TO_FUNC(info_gameplay);
LINK_ENTITY_TO_FUNC(game_zone_player);
LINK_ENTITY_TO_FUNC(game_text);
LINK_ENTITY_TO_FUNC(game_team_set);
LINK_ENTITY_TO_FUNC(game_team_master);
LINK_ENTITY_TO_FUNC(game_score);
LINK_ENTITY_TO_FUNC(game_player_team);
LINK_ENTITY_TO_FUNC(game_player_hurt);
LINK_ENTITY_TO_FUNC(game_player_equip);
LINK_ENTITY_TO_FUNC(game_end);
LINK_ENTITY_TO_FUNC(game_counter_set);
LINK_ENTITY_TO_FUNC(game_counter);
LINK_ENTITY_TO_FUNC(func_weldable);
LINK_ENTITY_TO_FUNC(func_seethroughdoor);
LINK_ENTITY_TO_FUNC(func_seethrough);
LINK_ENTITY_TO_FUNC(func_resource);
LINK_ENTITY_TO_FUNC(env_particles_custom);
LINK_ENTITY_TO_FUNC(env_particles);
LINK_ENTITY_TO_FUNC(env_gamma);
LINK_ENTITY_TO_FUNC(env_fog);
LINK_ENTITY_TO_FUNC(defensechamber);
LINK_ENTITY_TO_FUNC(ammo_gaussclip);
LINK_ENTITY_TO_FUNC(ammo_egonclip);
LINK_ENTITY_TO_FUNC(ammo_buckshot);
LINK_ENTITY_TO_FUNC(ammo_spore);
LINK_ENTITY_TO_FUNC(alienresourcetower);
LINK_ENTITY_TO_FUNC(xen_ttrigger);
LINK_ENTITY_TO_FUNC(xen_tree);
LINK_ENTITY_TO_FUNC(xen_spore_small);
LINK_ENTITY_TO_FUNC(xen_spore_medium);
LINK_ENTITY_TO_FUNC(xen_spore_large);
LINK_ENTITY_TO_FUNC(xen_plantlight);
LINK_ENTITY_TO_FUNC(xen_hull);
LINK_ENTITY_TO_FUNC(xen_hair);
LINK_ENTITY_TO_FUNC(worldspawn);
LINK_ENTITY_TO_FUNC(world_items);
LINK_ENTITY_TO_FUNC(weaponbox);
LINK_ENTITY_TO_FUNC(weapon_handgrenade);
LINK_ENTITY_TO_FUNC(weapon_crowbar);
LINK_ENTITY_TO_FUNC(trigger_transition);
LINK_ENTITY_TO_FUNC(trigger_teleport);
LINK_ENTITY_TO_FUNC(trigger_relay);
LINK_ENTITY_TO_FUNC(trigger_push);
LINK_ENTITY_TO_FUNC(trigger_once);
LINK_ENTITY_TO_FUNC(trigger_multiple);
LINK_ENTITY_TO_FUNC(trigger_monsterjump);
LINK_ENTITY_TO_FUNC(trigger_hurt);
LINK_ENTITY_TO_FUNC(trigger_gravity);
LINK_ENTITY_TO_FUNC(trigger_endsection);
LINK_ENTITY_TO_FUNC(trigger_counter);
LINK_ENTITY_TO_FUNC(trigger_changetarget);
LINK_ENTITY_TO_FUNC(trigger_changelevel);
LINK_ENTITY_TO_FUNC(trigger_cdaudio);
LINK_ENTITY_TO_FUNC(trigger_camera);
LINK_ENTITY_TO_FUNC(trigger_autosave);
LINK_ENTITY_TO_FUNC(trigger_auto);
LINK_ENTITY_TO_FUNC(trigger);
LINK_ENTITY_TO_FUNC(timer);
/*LINK_ENTITY_TO_FUNC(tf_weapon_tranq);
LINK_ENTITY_TO_FUNC(tf_weapon_supershotgun);
LINK_ENTITY_TO_FUNC(tf_weapon_superng);
LINK_ENTITY_TO_FUNC(tf_weapon_spanner);
LINK_ENTITY_TO_FUNC(tf_weapon_sniperrifle);
LINK_ENTITY_TO_FUNC(tf_weapon_shotgun);
LINK_ENTITY_TO_FUNC(tf_weapon_rpg);
LINK_ENTITY_TO_FUNC(tf_weapon_railgun);
LINK_ENTITY_TO_FUNC(tf_weapon_pl);
LINK_ENTITY_TO_FUNC(tf_weapon_normalgrenade);
LINK_ENTITY_TO_FUNC(tf_weapon_ng);
LINK_ENTITY_TO_FUNC(tf_weapon_napalmgrenade);
LINK_ENTITY_TO_FUNC(tf_weapon_nailgrenade);
LINK_ENTITY_TO_FUNC(tf_weapon_mirvgrenade);
LINK_ENTITY_TO_FUNC(tf_weapon_mirvbomblet);
LINK_ENTITY_TO_FUNC(tf_weapon_medikit);
LINK_ENTITY_TO_FUNC(tf_weapon_knife);
LINK_ENTITY_TO_FUNC(tf_weapon_ic);
LINK_ENTITY_TO_FUNC(tf_weapon_gl);
LINK_ENTITY_TO_FUNC(tf_weapon_genericprimedgrenade);
LINK_ENTITY_TO_FUNC(tf_weapon_gasgrenade);
LINK_ENTITY_TO_FUNC(tf_weapon_flamethrower);
LINK_ENTITY_TO_FUNC(tf_weapon_empgrenade);
LINK_ENTITY_TO_FUNC(tf_weapon_concussiongrenade);
LINK_ENTITY_TO_FUNC(tf_weapon_caltropgrenade);
LINK_ENTITY_TO_FUNC(tf_weapon_caltrop);
LINK_ENTITY_TO_FUNC(tf_weapon_axe);
LINK_ENTITY_TO_FUNC(tf_weapon_autorifle);
LINK_ENTITY_TO_FUNC(tf_weapon_ac);
LINK_ENTITY_TO_FUNC(tf_rpg_rocket);
LINK_ENTITY_TO_FUNC(tf_nailgun_nail);
LINK_ENTITY_TO_FUNC(tf_ic_rocket);
LINK_ENTITY_TO_FUNC(tf_gl_grenade);
LINK_ENTITY_TO_FUNC(tf_flamethrower_burst);
LINK_ENTITY_TO_FUNC(tf_flame);
LINK_ENTITY_TO_FUNC(tf_ammo_rpgclip);*/
LINK_ENTITY_TO_FUNC(testhull);
LINK_ENTITY_TO_FUNC(test_effect);
LINK_ENTITY_TO_FUNC(teledeath);
LINK_ENTITY_TO_FUNC(target_cdaudio);
LINK_ENTITY_TO_FUNC(speaker);
LINK_ENTITY_TO_FUNC(spark_shower);
LINK_ENTITY_TO_FUNC(soundent);
LINK_ENTITY_TO_FUNC(scripted_sequence);
LINK_ENTITY_TO_FUNC(scripted_sentence);
LINK_ENTITY_TO_FUNC(player_weaponstrip);
LINK_ENTITY_TO_FUNC(player_loadsaved);
LINK_ENTITY_TO_FUNC(player);
LINK_ENTITY_TO_FUNC(path_track);
LINK_ENTITY_TO_FUNC(path_corner);
LINK_ENTITY_TO_FUNC(node_viewer_large);
LINK_ENTITY_TO_FUNC(node_viewer_human);
LINK_ENTITY_TO_FUNC(node_viewer_fly);
LINK_ENTITY_TO_FUNC(node_viewer);
LINK_ENTITY_TO_FUNC(multisource);
LINK_ENTITY_TO_FUNC(multi_manager);
LINK_ENTITY_TO_FUNC(monster_turret);
LINK_ENTITY_TO_FUNC(monster_sentry);
LINK_ENTITY_TO_FUNC(monster_mortar);
LINK_ENTITY_TO_FUNC(monster_miniturret);
LINK_ENTITY_TO_FUNC(monster_hevsuit_dead);
LINK_ENTITY_TO_FUNC(monster_generic);
LINK_ENTITY_TO_FUNC(monster_furniture);
LINK_ENTITY_TO_FUNC(monster_cine_scientist);
LINK_ENTITY_TO_FUNC(monster_cine_panther);
LINK_ENTITY_TO_FUNC(monster_cine_barney);
LINK_ENTITY_TO_FUNC(monster_cine3_scientist);
LINK_ENTITY_TO_FUNC(monster_cine3_barney);
LINK_ENTITY_TO_FUNC(monster_cine2_slave);
LINK_ENTITY_TO_FUNC(monster_cine2_scientist);
LINK_ENTITY_TO_FUNC(monster_cine2_hvyweapons);
LINK_ENTITY_TO_FUNC(momentary_rot_button);
LINK_ENTITY_TO_FUNC(momentary_door);
LINK_ENTITY_TO_FUNC(light_spot);
LINK_ENTITY_TO_FUNC(light_environment);
LINK_ENTITY_TO_FUNC(light);
LINK_ENTITY_TO_FUNC(laser_spot);
LINK_ENTITY_TO_FUNC(item_tfgoal);
LINK_ENTITY_TO_FUNC(item_suit);
LINK_ENTITY_TO_FUNC(item_spikes);
LINK_ENTITY_TO_FUNC(item_sodacan);
LINK_ENTITY_TO_FUNC(item_shells);
LINK_ENTITY_TO_FUNC(item_security);
LINK_ENTITY_TO_FUNC(item_rockets);
LINK_ENTITY_TO_FUNC(item_longjump);
LINK_ENTITY_TO_FUNC(item_healthkit);
LINK_ENTITY_TO_FUNC(item_health);
LINK_ENTITY_TO_FUNC(item_cells);
LINK_ENTITY_TO_FUNC(item_battery);
LINK_ENTITY_TO_FUNC(item_artifact_super_damage);
LINK_ENTITY_TO_FUNC(item_artifact_invulnerability);
LINK_ENTITY_TO_FUNC(item_artifact_invisibility);
LINK_ENTITY_TO_FUNC(item_artifact_envirosuit);
LINK_ENTITY_TO_FUNC(item_armor3);
LINK_ENTITY_TO_FUNC(item_armor2);
LINK_ENTITY_TO_FUNC(item_armor1);
LINK_ENTITY_TO_FUNC(item_antidote);
LINK_ENTITY_TO_FUNC(item_airtank);
LINK_ENTITY_TO_FUNC(infodecal);
LINK_ENTITY_TO_FUNC(info_tfgoal_timer);
LINK_ENTITY_TO_FUNC(info_tfgoal);
LINK_ENTITY_TO_FUNC(info_tfdetect);
LINK_ENTITY_TO_FUNC(info_tf_teamset);
LINK_ENTITY_TO_FUNC(info_tf_teamcheck);
LINK_ENTITY_TO_FUNC(info_teleport_destination);
LINK_ENTITY_TO_FUNC(info_target);
LINK_ENTITY_TO_FUNC(info_player_teamspawn);
LINK_ENTITY_TO_FUNC(info_player_start);
LINK_ENTITY_TO_FUNC(info_player_deathmatch);
LINK_ENTITY_TO_FUNC(info_null);
LINK_ENTITY_TO_FUNC(info_node_air);
LINK_ENTITY_TO_FUNC(info_node);
LINK_ENTITY_TO_FUNC(info_landmark);
LINK_ENTITY_TO_FUNC(info_intermission);
LINK_ENTITY_TO_FUNC(info_areadef);
LINK_ENTITY_TO_FUNC(i_t_t);
LINK_ENTITY_TO_FUNC(i_t_g);
LINK_ENTITY_TO_FUNC(i_p_t);
LINK_ENTITY_TO_FUNC(grenade);
LINK_ENTITY_TO_FUNC(gibshooter);
LINK_ENTITY_TO_FUNC(ghost);
LINK_ENTITY_TO_FUNC(func_water);
LINK_ENTITY_TO_FUNC(func_wall_toggle);
LINK_ENTITY_TO_FUNC(func_wall);
LINK_ENTITY_TO_FUNC(func_traincontrols);
LINK_ENTITY_TO_FUNC(func_train);
LINK_ENTITY_TO_FUNC(func_tracktrain);
LINK_ENTITY_TO_FUNC(func_trackchange);
LINK_ENTITY_TO_FUNC(func_trackautochange);
LINK_ENTITY_TO_FUNC(func_tankrocket);
LINK_ENTITY_TO_FUNC(func_tankmortar);
LINK_ENTITY_TO_FUNC(func_tanklaser);
LINK_ENTITY_TO_FUNC(func_tankcontrols);
LINK_ENTITY_TO_FUNC(func_tank);
LINK_ENTITY_TO_FUNC(func_rotating);
LINK_ENTITY_TO_FUNC(func_rot_button);
LINK_ENTITY_TO_FUNC(func_recharge);
LINK_ENTITY_TO_FUNC(func_pushable);
LINK_ENTITY_TO_FUNC(func_platrot);
LINK_ENTITY_TO_FUNC(func_plat);
LINK_ENTITY_TO_FUNC(func_pendulum);
LINK_ENTITY_TO_FUNC(func_lava);
LINK_ENTITY_TO_FUNC(func_nogrenades);
LINK_ENTITY_TO_FUNC(func_nobuild);
LINK_ENTITY_TO_FUNC(func_mortar_field);
LINK_ENTITY_TO_FUNC(func_monsterclip);
LINK_ENTITY_TO_FUNC(func_ladder);
LINK_ENTITY_TO_FUNC(func_illusionary);
LINK_ENTITY_TO_FUNC(func_healthcharger);
LINK_ENTITY_TO_FUNC(func_guntarget);
LINK_ENTITY_TO_FUNC(func_friction);
LINK_ENTITY_TO_FUNC(func_door_rotating);
LINK_ENTITY_TO_FUNC(func_door);
LINK_ENTITY_TO_FUNC(func_conveyor);
LINK_ENTITY_TO_FUNC(func_button);
LINK_ENTITY_TO_FUNC(func_breakable);
LINK_ENTITY_TO_FUNC(fireanddie);
LINK_ENTITY_TO_FUNC(env_sprite);
LINK_ENTITY_TO_FUNC(env_spark);
LINK_ENTITY_TO_FUNC(env_sound);
LINK_ENTITY_TO_FUNC(env_shooter);
LINK_ENTITY_TO_FUNC(env_shake);
LINK_ENTITY_TO_FUNC(env_render);
LINK_ENTITY_TO_FUNC(env_message);
LINK_ENTITY_TO_FUNC(env_lightning);
LINK_ENTITY_TO_FUNC(env_laser);
LINK_ENTITY_TO_FUNC(env_glow);
LINK_ENTITY_TO_FUNC(env_global);
LINK_ENTITY_TO_FUNC(env_funnel);
LINK_ENTITY_TO_FUNC(env_fade);
LINK_ENTITY_TO_FUNC(env_explosion);
LINK_ENTITY_TO_FUNC(env_debris);
LINK_ENTITY_TO_FUNC(env_bubbles);
LINK_ENTITY_TO_FUNC(env_blood);
LINK_ENTITY_TO_FUNC(env_beverage);
LINK_ENTITY_TO_FUNC(env_beam);
LINK_ENTITY_TO_FUNC(dispenser_refill_timer);
LINK_ENTITY_TO_FUNC(detpack);
LINK_ENTITY_TO_FUNC(cycler_wreckage);
LINK_ENTITY_TO_FUNC(cycler_weapon);
LINK_ENTITY_TO_FUNC(cycler_sprite);
LINK_ENTITY_TO_FUNC(cycler_prdroid);
LINK_ENTITY_TO_FUNC(cycler);
LINK_ENTITY_TO_FUNC(cine_blood);
LINK_ENTITY_TO_FUNC(button_target);
LINK_ENTITY_TO_FUNC(building_teleporter);
LINK_ENTITY_TO_FUNC(building_sentrygun_base);
LINK_ENTITY_TO_FUNC(building_sentrygun);
LINK_ENTITY_TO_FUNC(building_dispenser);
LINK_ENTITY_TO_FUNC(bodyque);
LINK_ENTITY_TO_FUNC(beam);
LINK_ENTITY_TO_FUNC(ambient_generic);
LINK_ENTITY_TO_FUNC(aiscripted_sequence);
LINK_ENTITY_TO_FUNC(DelayedUse);
LINK_ENTITY_TO_FUNC(CreateInterface);

#endif