/**
 * MaNGOS is a full featured server for World of Warcraft, supporting
 * the following clients: 1.12.x, 2.4.3, 3.3.5a, 4.3.4a and 5.4.8
 *
 * Copyright (C) 2005-2025 MaNGOS <https://www.getmangos.eu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#ifndef MANGOS_H_MANGOS_LANGUAGE
#define MANGOS_H_MANGOS_LANGUAGE

enum MangosStrings
{
    LANG_SELECT_CHAR_OR_CREATURE                              = 1,    /* You should select a character or a creature. */
    LANG_SELECT_CREATURE                                      = 2,    /* You should select a creature. */
    LANG_SYSTEMMESSAGE                                        = 3,    /* |cffff0000[System Message]: %s|r */
    LANG_EVENTMESSAGE                                         = 4,    /* |cffff0000[Event Message]: %s|r */
    LANG_NO_HELP_CMD                                          = 5,    /* There is no help for that command */
    LANG_NO_CMD                                               = 6,    /* There is no such command */
    LANG_NO_SUBCMD                                            = 7,    /* There is no such subcommand */
    LANG_SUBCMDS_LIST                                         = 8,    /* Command %s have subcommands: */
    LANG_AVIABLE_CMD                                          = 9,    /* Commands available to you: */
    LANG_CMD_SYNTAX                                           = 10,    /* Incorrect syntax. */
    LANG_ACCOUNT_LEVEL                                        = 11,    /* Your account level is: %i */
    LANG_CONNECTED_USERS                                      = 12,    /* Online players: %u (max: %u) Queued players: %u (max: %u) */
    LANG_UPTIME                                               = 13,    /* Server uptime: %s */
    LANG_PLAYER_SAVED                                         = 14,    /* Player saved. */
    LANG_PLAYERS_SAVED                                        = 15,    /* All players saved. */
    LANG_GMS_ON_SRV                                           = 16,    /* There are the following active GMs on this server: */
    LANG_GMS_NOT_LOGGED                                       = 17,    /* There are no GMs currently logged in on this server. */
    LANG_YOU_IN_FLIGHT                                        = 18,    /* Cannot do that while flying. */
    // LANG_YOU_IN_BATTLEGROUND            = 19, not used
    // LANG_TARGET_IN_FLIGHT               = 20, not used
    LANG_CHAR_IN_FLIGHT                                       = 21,    /* %s is flying command failed. */
    LANG_CHAR_NON_MOUNTED                                     = 22,    /* You are not mounted so you can't dismount. */
    LANG_YOU_IN_COMBAT                                        = 23,    /* Cannot do that while fighting. */
    LANG_YOU_USED_IT_RECENTLY                                 = 24,    /* You used it recently. */
    LANG_COMMAND_NOTCHANGEPASSWORD                            = 25,    /* Password not changed (unknown error)! */
    LANG_COMMAND_PASSWORD                                     = 26,    /* The password was changed */
    LANG_COMMAND_WRONGOLDPASSWORD                             = 27,    /* The old password is wrong */
    LANG_COMMAND_ACCLOCKLOCKED                                = 28,    /* Your account is now locked. */
    LANG_COMMAND_ACCLOCKUNLOCKED                              = 29,    /* Your account is now unlocked. */
    LANG_SPELL_RANK                                           = 30,    /* , rank  */
    LANG_KNOWN                                                = 31,    /*  [known] */
    LANG_LEARN                                                = 32,    /*  [learn] */
    LANG_PASSIVE                                              = 33,    /*  [passive] */
    LANG_TALENT                                               = 34,    /*  [talent] */
    LANG_ACTIVE                                               = 35,    /*  [active] */
    LANG_COMPLETE                                             = 36,    /*  [complete] */
    LANG_OFFLINE                                              = 37,    /*  (offline) */
    LANG_ON                                                   = 38,    /* on */
    LANG_OFF                                                  = 39,    /* off */
    LANG_YOU_ARE                                              = 40,    /* You are: %s */
    LANG_VISIBLE                                              = 41,    /* visible */
    LANG_INVISIBLE                                            = 42,    /* invisible */
    LANG_DONE                                                 = 43,    /* done */
    LANG_YOU                                                  = 44,    /* You */
    LANG_UNKNOWN                                              = 45,    /*  <unknown>  */
    LANG_ERROR                                                = 46,    /* <error> */
    LANG_NON_EXIST_CHARACTER                                  = 47,    /* <non-existing character> */
    LANG_FRIEND_IGNORE_UNKNOWN                                = 48,    /* UNKNOWN */
    LANG_LEVEL_MINREQUIRED                                    = 49,    /* You must be at least level %u to enter. */
    LANG_LEVEL_MINREQUIRED_AND_ITEM                           = 50,    /* You must have item %s to enter. */
    LANG_NPC_TAINER_HELLO                                     = 51,    /* Hello! Ready for some training? */
    LANG_COMMAND_INVALID_ITEM_COUNT                           = 52,    /* Invaid item count (%u) for item %u */
    LANG_COMMAND_MAIL_ITEMS_LIMIT                             = 53,    /* Mail can't have more %u item stacks */
    LANG_NEW_PASSWORDS_NOT_MATCH                              = 54,    /* The new passwords do not match */
    LANG_PASSWORD_TOO_LONG                                    = 55,    /* Your password can't be longer than 16 characters (client limit), password not changed! */
    LANG_MOTD_CURRENT                                         = 56,    /* Current Message of the day: %s */
    LANG_USING_WORLD_DB                                       = 57,    /* Using World DB: %s */
    LANG_USING_SCRIPT_LIB                                     = 58,    /* Using script library */
    LANG_USING_EVENT_AI                                       = 59,    /* Using creature EventAI: %s */
    // LANG_RA_BUSY                      = 60, not used
    LANG_RA_USER                                              = 61,    /* Username:  */
    LANG_RA_PASS                                              = 62,    /* Password:  */
    LANG_GM_ACCEPTS_WHISPER                                   = 63,    /* Accepts whispers */
    LANG_GM_NO_WHISPER                                        = 64,    /* Doesn't accept whispers */
    LANG_USING_SCRIPT_LIB_UNKNOWN                             = 65,    /* Using script library: <Unknown Script Library> */
    LANG_USING_SCRIPT_LIB_NONE                                = 66,    /* Using script library: <No Script Library Loaded> */
    // Room for more level 0              67-99 not used

    LANG_GLOBAL_NOTIFY                                        = 100,    /* Global notify:  */
    LANG_MAP_POSITION                                         = 101,    /* Map: %u (%s) Zone: %u (%s) Area: %u (%s)X: %f Y: %f Z: %f Orientation: %fgrid[%u,%u]cell[%u,%u] InstanceID: %u ZoneX: %f ZoneY: %fGroundZ: %f FloorZ: %f Have height data (Map: %u VMap: %u) */
    LANG_IS_TELEPORTED                                        = 102,    /* %s is already being teleported. */
    LANG_CANNOT_SUMMON_TO_INST                                = 103,    /* You can summon a player to your instance only if he is in your party with you as leader. */
    LANG_CANNOT_GO_TO_INST_PARTY                              = 104,    /* You cannot go to the player's instance because you are in a party now. */
    LANG_CANNOT_GO_TO_INST_GM                                 = 105,    /* You can go to the player's instance while not being in his party only if your GM mode is on. */
    LANG_CANNOT_GO_INST_INST                                  = 106,    /* You can not go to player %s from instance to instance. */
    LANG_CANNOT_SUMMON_INST_INST                              = 107,    /* You can not summon player %s from instance to instance. */
    LANG_SUMMONING                                            = 108,    /* You are summoning %s%s. */
    LANG_SUMMONED_BY                                          = 109,    /* You are being summoned by %s. */
    LANG_TELEPORTING_TO                                       = 110,    /* You are teleporting %s%s to %s. */
    LANG_TELEPORTED_TO_BY                                     = 111,    /* You are being teleported by %s. */
    LANG_NO_PLAYER                                            = 112,    /* Player (%s) does not exist. */
    LANG_APPEARING_AT                                         = 113,    /* Appearing at %s's location. */
    LANG_APPEARING_TO                                         = 114,    /* %s is appearing to your location. */
    LANG_BAD_VALUE                                            = 115,    /* Incorrect values. */
    LANG_NO_CHAR_SELECTED                                     = 116,    /* No character selected. */
    LANG_NOT_IN_GROUP                                         = 117,    /* %s is not in a group. */
    LANG_YOU_CHANGE_HP                                        = 118,    /* You changed HP of %s to %i/%i. */
    LANG_YOURS_HP_CHANGED                                     = 119,    /* %s changed your HP to %i/%i. */
    LANG_YOU_CHANGE_MANA                                      = 120,    /* You changed MANA of %s to %i/%i. */
    LANG_YOURS_MANA_CHANGED                                   = 121,    /* %s changed your MANA to %i/%i. */
    LANG_YOU_CHANGE_ENERGY                                    = 122,    /* You changed ENERGY of %s to %i/%i. */
    LANG_YOURS_ENERGY_CHANGED                                 = 123,    /* %s changed your ENERGY to %i/%i. */
    LANG_CURRENT_ENERGY                                       = 124,    /* Current energy: %u */
    LANG_YOU_CHANGE_RAGE                                      = 125,    /* You changed rage of %s to %i/%i. */
    LANG_YOURS_RAGE_CHANGED                                   = 126,    /* %s changed your rage to %i/%i. */
    LANG_YOU_CHANGE_LVL                                       = 127,    /* You changed level of %s to %i. */
    LANG_CURRENT_FACTION                                      = 128,    /* GUID %i, faction is %i, flags is %i, npcflag is %i, DY flag is %i */
    LANG_WRONG_FACTION                                        = 129,    /* Wrong faction: %u (not found in factiontemplate.dbc). */
    LANG_YOU_CHANGE_FACTION                                   = 130,    /* You changed GUID=%i 's Faction to %i, flags to %i, npcflag to %i, dyflag to %i. */
    LANG_YOU_CHANGE_SPELLMODS                                 = 131,    /* You changed the %s spellmod %u to value %i for spell with family bit %u for %s. */
    LANG_YOURS_SPELLMODS_CHANGED                              = 132,    /* %s changed your spellmod %u to value %i for spell with family bit %u. */
    LANG_YOU_GIVE_TAXIS                                       = 133,    /* %s has access to all taxi nodes now (until logout). */
    LANG_YOU_REMOVE_TAXIS                                     = 134,    /* %s has no more access to all taxi nodes now (only visited accessible). */
    LANG_YOURS_TAXIS_ADDED                                    = 135,    /* %s has given you access to all taxi nodes (until logout). */
    LANG_YOURS_TAXIS_REMOVED                                  = 136,    /* %s has removed access to all taxi nodes (only visited still accessible). */
    LANG_YOU_CHANGE_ASPEED                                    = 137,    /* You set all speeds to %2.2f from normal of %s. */
    LANG_YOURS_ASPEED_CHANGED                                 = 138,    /* %s set all your speeds to %2.2f from normal. */
    LANG_YOU_CHANGE_SPEED                                     = 139,    /* You set the speed to %2.2f from normal of %s. */
    LANG_YOURS_SPEED_CHANGED                                  = 140,    /* %s set your speed to %2.2f from normal. */
    LANG_YOU_CHANGE_SWIM_SPEED                                = 141,    /* You set the swim speed to %2.2f from normal of %s. */
    LANG_YOURS_SWIM_SPEED_CHANGED                             = 142,    /* %s set your swim speed to %2.2f from normal. */
    LANG_YOU_CHANGE_BACK_SPEED                                = 143,    /* You set the backwards run speed to %2.2f from normal of %s. */
    LANG_YOURS_BACK_SPEED_CHANGED                             = 144,    /* %s set your backwards run speed to %2.2f from normal. */
    LANG_YOU_CHANGE_FLY_SPEED                                 = 145,
    LANG_YOURS_FLY_SPEED_CHANGED                              = 146,

    LANG_YOU_CHANGE_SIZE                                      = 147,    /* You set the size %2.2f of %s. */
    LANG_YOURS_SIZE_CHANGED                                   = 148,    /* %s set your size to %2.2f. */
    LANG_NO_MOUNT                                             = 149,    /* There is no such mount. */
    LANG_YOU_GIVE_MOUNT                                       = 150,    /* You give a mount to %s. */
    LANG_MOUNT_GIVED                                          = 151,    /* %s gave you a mount. */
    LANG_CURRENT_MONEY                                        = 152,    /* USER1: %i, ADD: %i, DIF: %i */
    LANG_YOU_TAKE_ALL_MONEY                                   = 153,    /* You take all copper of %s. */
    LANG_YOURS_ALL_MONEY_GONE                                 = 154,    /* %s took you all of your copper. */
    LANG_YOU_TAKE_MONEY                                       = 155,    /* You take %i copper from %s. */
    LANG_YOURS_MONEY_TAKEN                                    = 156,    /* %s took %i copper from you. */
    LANG_YOU_GIVE_MONEY                                       = 157,    /* You give %i copper to %s. */
    LANG_YOURS_MONEY_GIVEN                                    = 158,    /* %s gave you %i copper. */
    LANG_YOU_HEAR_SOUND                                       = 159,    /* You hear sound %u. */
    LANG_NEW_MONEY                                            = 160,    /* USER2: %i, ADD: %i, RESULT: %i */
    LANG_REMOVE_BIT                                           = 161,    /* Removed bit %i in field %i. */
    LANG_SET_BIT                                              = 162,    /* Set bit %i in field %i. */
    LANG_COMMAND_TELE_TABLEEMPTY                              = 163,    /* Teleport location table is empty! */
    LANG_COMMAND_TELE_NOTFOUND                                = 164,    /* Teleport location not found! */
    LANG_COMMAND_TELE_PARAMETER                               = 165,    /* Requires search parameter. */
    LANG_COMMAND_TELE_NOLOCATION                              = 166,    /* There are no teleport locations matching your request. */
    //                                    167               // not used
    LANG_COMMAND_TELE_LOCATION                                = 168,    /* Locations found are: %s */
    LANG_MAIL_SENT                                            = 169,    /* Mail sent to %s */
    LANG_SOUND_NOT_EXIST                                      = 170,    /* You try to hear sound %u but it doesn't exist. */
    LANG_CANT_TELEPORT_SELF                                   = 171,    /* You can't teleport self to self! */
    LANG_CONSOLE_COMMAND                                      = 172,    /* server console command */
    //                                    173 used in master branch
    //                                    174 used in master branch
    LANG_LIQUID_STATUS                                        = 175,    /* Liquid level: %f, ground: %f, type flags %u, status: %d. */
    // Room for more level 1              176-199 not used
    LANG_NO_SELECTION                                         = 200,    /* No selection. */
    LANG_OBJECT_GUID                                          = 201,    /* Object GUID is: %s */
    LANG_TOO_LONG_NAME                                        = 202,    /* The name was too long by %i characters. */
    LANG_CHARS_ONLY                                           = 203,    /* Error, name can only contain characters A-Z and a-z. */
    LANG_TOO_LONG_SUBNAME                                     = 204,    /* The subname was too long by %i characters. */
    LANG_NOT_IMPLEMENTED                                      = 205,    /* Not yet implemented */
    LANG_ITEM_ADDED_TO_LIST                                   = 206,    /* Item '%i' '%s' added to list with maxcount '%i' and incrtime '%i' */
    LANG_ITEM_NOT_FOUND                                       = 207,    /* Item '%i' not found in database. */
    LANG_ITEM_DELETED_FROM_LIST                               = 208,    /* Item '%i' '%s' deleted from vendor list */
    LANG_ITEM_NOT_IN_LIST                                     = 209,    /* Item '%i' not found in vendor list. */
    LANG_ITEM_ALREADY_IN_LIST                                 = 210,    /* Item '%i' already in vendor list. */
    LANG_RESET_SPELLS_ONLINE                                  = 211,    /* Spells of %s reset. */
    LANG_RESET_SPELLS_OFFLINE                                 = 212,    /* Spells of %s will reset at next login. */
    LANG_RESET_TALENTS_ONLINE                                 = 213,    /* Talents of %s reset. */
    LANG_RESET_TALENTS_OFFLINE                                = 214,    /* Talents of %s will reset at next login. */
    LANG_RESET_SPELLS                                         = 215,    /* Your spells have been reset. */
    LANG_RESET_TALENTS                                        = 216,    /* Your talents have been reset. */
    LANG_RESETALL_UNKNOWN_CASE                                = 217,    /* Unknown case '%s' for .resetall command. Type full correct case name. */
    LANG_RESETALL_SPELLS                                      = 218,    /* Spells will reset for all players at login. Strongly recommend re-login! */
    LANG_RESETALL_TALENTS                                     = 219,    /* Talents will reset for all players at login. Strongly recommend re-login! */
    LANG_WAYPOINT_NOTFOUND                                    = 220,    /* Cannot find waypoint id %u for %s (in path %i, loaded from %s) */
    LANG_WAYPOINT_NOTFOUNDLAST                                = 221,    /* Last Waypoint not found for %s */
    LANG_WAYPOINT_NOTFOUNDPATH                                = 222,    /* %s has no path or path empty, path-id %i (loaded from %s) */
    LANG_WAYPOINT_NOTFOUNDDBPROBLEM                           = 223,    /* Creature (GUID: %u) No waypoints found - This is a MaNGOS db problem (single float). */
    LANG_WAYPOINT_NOTFOUND_NPC                                = 224,    /* Cannot access %s on map, maybe you are too far away from its spawn location */
    LANG_WAYPOINT_CREATNOTFOUND                               = 225,    /* Creature (GUID: %u) not found */
    LANG_WAYPOINT_VP_SELECT                                   = 226,    /* You must select a visual waypoint. */
    LANG_WAYPOINT_VP_NOTFOUND                                 = 227,    /* No visual waypoints found */
    LANG_WAYPOINT_VP_NOTCREATED                               = 228,    /* Could not create visual waypoint with creatureID: %d */
    LANG_WAYPOINT_VP_ALLREMOVED                               = 229,    /* All visual waypoints removed */
    LANG_WAYPOINT_NOTCREATED                                  = 230,    /* Could not add waypoint %u to %s (pathId %i stored by %s) */
    LANG_WAYPOINT_NOGUID                                      = 231,    /* No GUID provided. */
    LANG_WAYPOINT_NOWAYPOINTGIVEN                             = 232,    /* No waypoint number provided. */
    LANG_WAYPOINT_ARGUMENTREQ                                 = 233,    /* Argument required for '%s'. */
    LANG_WAYPOINT_ADDED                                       = 234,    /* Added Waypoint %u to %s (PathId %i, path stored by %s) */
    LANG_WAYPOINT_ADDED_NO                                    = 235,    /* UNUSED */
    LANG_WAYPOINT_CHANGED                                     = 236,    /* Waypoint changed. */
    LANG_WAYPOINT_CHANGED_NO                                  = 237,    /* Waypoint %s modified. */
    LANG_WAYPOINT_EXPORTED                                    = 238,    /* WP export successfull. */
    LANG_WAYPOINT_NOTHINGTOEXPORT                             = 239,    /* No waypoints found inside the database. */
    LANG_WAYPOINT_IMPORTED                                    = 240,    /* File imported. */
    LANG_WAYPOINT_REMOVED                                     = 241,    /* Waypoint removed. */
    LANG_WAYPOINT_NOTREMOVED                                  = 242,    /* UNUSED */
    LANG_WAYPOINT_TOOFAR1                                     = 243,    /* UNUSED */
    LANG_WAYPOINT_TOOFAR2                                     = 244,    /* UNUSED */
    LANG_WAYPOINT_TOOFAR3                                     = 245,    /* UNUSED */
    LANG_WAYPOINT_INFO_TITLE                                  = 246,    /* Waypoint %u for %s (from pathId %i, stored by %s) */
    LANG_WAYPOINT_INFO_WAITTIME                               = 247,    /*  Waittime: %d */
    LANG_WAYPOINT_INFO_ORI                                    = 248,    /*  Orientation: %f */
    LANG_WAYPOINT_INFO_SCRIPTID                               = 249,    /*  ScriptId: %u */
    LANG_WAYPOINT_INFO_UNK_SCRIPTID                           = 250,    /* ScriptID set to non-existing id %u, add it to DBScriptsEngine and reload the table. */
    LANG_WAYPOINT_INFO_TEXT                                   = 251,    /* UNUSED */
    LANG_WAYPOINT_INFO_AISCRIPT                               = 252,    /* AIScriptName: %s */
    LANG_RENAME_PLAYER                                        = 253,    /* Forced rename for player %s will be requested at next login. */
    LANG_RENAME_PLAYER_GUID                                   = 254,    /* Forced rename for player %s (GUID #%u) will be requested at next login. */
    LANG_WAYPOINT_WPCREATNOTFOUND                             = 255,    /* Waypoint-Creature (GUID: %u) Not found */
    LANG_WAYPOINT_NPCNOTFOUND                                 = 256,    /* Could not find NPC... */
    LANG_MOVE_TYPE_SET                                        = 257,    /* Creature movement type set to '%s', waypoints removed (if any). */
    LANG_MOVE_TYPE_SET_NODEL                                  = 258,    /* Creature movement type set to '%s', waypoints were not removed. */
    LANG_USE_BOL                                              = 259,    /* Incorrect value, use on or off */
    LANG_VALUE_SAVED                                          = 260,    /* Value saved. */
    LANG_VALUE_SAVED_REJOIN                                   = 261,    /* Value saved, you may need to rejoin or clean your client cache. */
    LANG_COMMAND_GOAREATRNOTFOUND                             = 262,    /* Areatrigger ID %u not found! */
    LANG_INVALID_TARGET_COORD                                 = 263,    /* Target map or coordinates is invalid (X: %f Y: %f MapId: %u) */
    LANG_INVALID_ZONE_COORD                                   = 264,    /* Zone coordinates is invalid (X: %f Y: %f AreaId: %u) */
    LANG_INVALID_ZONE_MAP                                     = 265,    /* Zone %u (%s) is part of instanceable map %u (%s) */
    LANG_COMMAND_TARGETOBJNOTFOUND                            = 266,    /* Nothing found! */
    LANG_COMMAND_GOOBJNOTFOUND                                = 267,    /* Object not found! */
    LANG_COMMAND_GOCREATNOTFOUND                              = 268,    /* Creature not found! */
    //                                    269, not used
    LANG_COMMAND_DELCREATMESSAGE                              = 270,    /* Creature Removed */
    LANG_COMMAND_CREATUREMOVED                                = 271,    /* Creature moved. */
    LANG_COMMAND_CREATUREATSAMEMAP                            = 272,    /* Creature (GUID:%u) must be on the same map as player! */
    LANG_COMMAND_OBJNOTFOUND                                  = 273,    /* Game Object (GUID: %u) not found */
    LANG_COMMAND_DELOBJREFERCREATURE                          = 274,    /* Game Object (GUID: %u) has references in not found owner %s GO list, can't be deleted. */
    LANG_COMMAND_DELOBJMESSAGE                                = 275,    /* Game Object (GUID: %u) removed */
    LANG_COMMAND_TURNOBJMESSAGE                               = 276,    /* Game Object |cffffffff|Hgameobject:%d|h[%s]|h|r (GUID: %u) turned */
    LANG_COMMAND_MOVEOBJMESSAGE                               = 277,    /* Game Object |cffffffff|Hgameobject:%d|h[%s]|h|r (GUID: %u) moved */
    LANG_COMMAND_VENDORSELECTION                              = 278,    /* You must select a vendor */
    LANG_COMMAND_NEEDITEMSEND                                 = 279,    /* You must send id for item */
    LANG_COMMAND_ADDVENDORITEMITEMS                           = 280,    /* Vendor has too many items (max 128) */
    LANG_COMMAND_KICKSELF                                     = 281,    /* You can't kick self, logout instead */
    LANG_COMMAND_KICKMESSAGE                                  = 282,    /* Player %s kicked. */
    //                                    283, not used
    LANG_COMMAND_WHISPERACCEPTING                             = 284,    /* Accepting Whisper: %s */
    LANG_COMMAND_WHISPERON                                    = 285,    /* Accepting Whisper: ON */
    LANG_COMMAND_WHISPEROFF                                   = 286,    /* Accepting Whisper: OFF */
    LANG_COMMAND_CREATGUIDNOTFOUND                            = 287,    /* Creature (GUID: %u) not found */
    LANG_COMMAND_TICKETCOUNT                                  = 288,    /* Tickets count: %i show new tickets: %s */
    LANG_COMMAND_TICKETNEW                                    = 289,    /* New ticket from %s (ID %u) */
    LANG_COMMAND_TICKETVIEW                                   = 290,    /* Ticket of %s (Last updated: %s): %s */
    LANG_COMMAND_TICKETON                                     = 291,    /* New ticket show: ON */
    LANG_COMMAND_TICKETOFF                                    = 292,    /* New ticket show: OFF */
    LANG_COMMAND_TICKETNOTEXIST                               = 293,    /* Ticket %i doesn't exist */
    LANG_COMMAND_ALLTICKETDELETED                             = 294,    /* All tickets deleted. */
    LANG_COMMAND_TICKETPLAYERDEL                              = 295,    /* Character %s ticket deleted. */
    LANG_COMMAND_TICKETDEL                                    = 296,    /* Ticket deleted. */
    LANG_COMMAND_SPAWNDIST                                    = 297,    /* Spawn distance changed to: %f */
    LANG_COMMAND_SPAWNTIME                                    = 298,    /* Spawn time changed to: %i */
    LANG_COMMAND_MODIFY_HONOR                                 = 299,    /* The %s field of %s was set to %u */
    LANG_YOUR_CHAT_DISABLED                                   = 300,    /* Your chat has been disabled for %u minutes. */
    LANG_YOU_DISABLE_CHAT                                     = 301,    /* You have disabled %s's chat for %u minutes. */
    LANG_CHAT_ALREADY_ENABLED                                 = 302,    /* Player's chat is already enabled. */
    LANG_YOUR_CHAT_ENABLED                                    = 303,    /* Your chat has been enabled. */
    LANG_YOU_ENABLE_CHAT                                      = 304,    /* You have enabled %s's chat. */
    LANG_COMMAND_MODIFY_REP                                   = 305,    /* Faction %s (%u) reputation of %s was set to %5d! */
    LANG_COMMAND_MODIFY_ARENA                                 = 306,
    LANG_COMMAND_FACTION_NOTFOUND                             = 307,    /* No faction found! */
    LANG_COMMAND_FACTION_UNKNOWN                              = 308,    /* Faction %i unknown! */
    LANG_COMMAND_FACTION_INVPARAM                             = 309,    /* Invalid parameter %s */
    LANG_COMMAND_FACTION_DELTA                                = 310,    /* delta must be between 0 and %d (inclusive) */
    LANG_FACTION_LIST                                         = 311,    /* %d - |cffffffff|Hfaction:%d|h[%s]|h|r */
    LANG_FACTION_VISIBLE                                      = 312,    /*  [visible] */
    LANG_FACTION_ATWAR                                        = 313,    /*  [at war] */
    LANG_FACTION_PEACE_FORCED                                 = 314,    /*  [peace forced] */
    LANG_FACTION_HIDDEN                                       = 315,    /*  [hidden] */
    LANG_FACTION_INVISIBLE_FORCED                             = 316,    /*  [invisible forced] */
    LANG_FACTION_INACTIVE                                     = 317,    /*  [inactive] */
    LANG_REP_HATED                                            = 318,    /* Hated */
    LANG_REP_HOSTILE                                          = 319,    /* Hostile */
    LANG_REP_UNFRIENDLY                                       = 320,    /* Unfriendly */
    LANG_REP_NEUTRAL                                          = 321,    /* Neutral */
    LANG_REP_FRIENDLY                                         = 322,    /* Friendly */
    LANG_REP_HONORED                                          = 323,    /* Honored */
    LANG_REP_REVERED                                          = 324,    /* Revered */
    LANG_REP_EXALTED                                          = 325,    /* Exalted */
    LANG_COMMAND_FACTION_NOREP_ERROR                          = 326,    /* Faction %s (%u) can'not have reputation. */
    LANG_FACTION_NOREPUTATION                                 = 327,    /*  [no reputation] */
    LANG_LOOKUP_PLAYER_ACCOUNT                                = 328,    /* Characters at account %s (Id: %u) */
    LANG_LOOKUP_PLAYER_CHARACTER                              = 329,    /*   %s (GUID %u) */
    LANG_NO_PLAYERS_FOUND                                     = 330,    /* No players found! */
    LANG_EXTENDED_COST_NOT_EXIST                              = 331,    /* Extended item cost %u not exist */
    LANG_GM_ON                                                = 332,    /* GM mode is ON */
    LANG_GM_OFF                                               = 333,    /* GM mode is OFF */
    LANG_GM_CHAT_ON                                           = 334,    /* GM Chat Badge is ON */
    LANG_GM_CHAT_OFF                                          = 335,    /* GM Chat Badge is OFF */
    LANG_YOU_REPAIR_ITEMS                                     = 336,    /* You repair all %s's items. */
    LANG_YOUR_ITEMS_REPAIRED                                  = 337,    /* All your items repaired by %s. */
    LANG_YOU_SET_WATERWALK                                    = 338,    /* You set waterwalk mode %s for %s. */
    LANG_YOUR_WATERWALK_SET                                   = 339,    /* Your waterwalk mode %s by %s. */
    LANG_CREATURE_FOLLOW_YOU_NOW                              = 340,    /* %s is now following you. */
    LANG_CREATURE_NOT_FOLLOW_YOU                              = 341,    /* %s is not following you. */
    LANG_CREATURE_NOT_FOLLOW_YOU_NOW                          = 342,    /* %s is now not following you. */
    LANG_CREATURE_NON_TAMEABLE                                = 343,    /* Creature (Entry: %u) cannot be tamed. */
    LANG_YOU_ALREADY_HAVE_PET                                 = 344,    /* You already have pet. */
    //                                    345 used in master branch
    //                                    346 used in master branch
    LANG_COMMAND_GOTAXINODENOTFOUND                           = 347,    /* TaxiNode ID %u not found! */
    LANG_GAMEOBJECT_HAVE_INVALID_DATA                         = 348,    /* Game Object (Entry: %u) have invalid data and can't be spawned */
    LANG_TITLE_LIST_CHAT                                      = 349,
    LANG_TITLE_LIST_CONSOLE                                   = 350,
    LANG_COMMAND_NOTITLEFOUND                                 = 351,
    LANG_INVALID_TITLE_ID                                     = 352,
    LANG_TITLE_ADD_RES                                        = 353,
    LANG_TITLE_REMOVE_RES                                     = 354,
    LANG_TITLE_CURRENT_RES                                    = 355,
    LANG_CURRENT_TITLE_RESET                                  = 356,
    LANG_AREATRIGER_NOT_HAS_TARGET                            = 357,    /* Areatrigger %u not has target coordinates */
    LANG_COMMAND_NOTRIGGERFOUND                               = 358,    /* No areatriggers found! */
    LANG_TRIGGER_TARGET_LIST_CHAT                             = 359,    /* %s|cffffffff|Hareatrigger_target:%u|h[Trigger target %u]|h|r Map %u X:%f Y:%f Z:%f%s */
    LANG_TRIGGER_TARGET_LIST_CONSOLE                          = 360,    /* %s[Trigger target %u] Map %u X:%f Y:%f Z:%f */
    LANG_TRIGGER_LIST_CHAT                                    = 361,    /* |cffffffff|Hareatrigger:%u|h[Trigger %u]|h|r Map %u X:%f Y:%f Z:%f%s%s%s */
    LANG_TRIGGER_LIST_CONSOLE                                 = 362,    /* [Trigger %u] Map %u X:%f Y:%f Z:%f%s%s */
    LANG_TRIGGER_DIST                                         = 363,    /*  (Dist %f) */
    LANG_TRIGGER_TAVERN                                       = 364,    /*  [Tavern] */
    LANG_TRIGGER_QUEST                                        = 365,    /*  [Quest] */
    LANG_TRIGGER_EXPLORE_QUEST                                = 366,    /* Explore quest: */
    LANG_TRIGGER_REQ_LEVEL                                    = 367,
    LANG_TRIGGER_REQ_ITEMS                                    = 368,
    LANG_TRIGGER_REQ_QUEST                                    = 369,
    LANG_TRIGGER_REQ_KEYS_HEROIC                              = 370,
    //                                                          371 used in master branch
    //                                                          372 used in master branch
    LANG_COMMAND_TICKETRESPONSE                               = 373,    /* Response: %s */
    LANG_COMMAND_TICKETCOUNT_CONSOLE                          = 374,    /* Tickets count: %i
 */
    LANG_COMMAND_TICKETNOTEXIST_NAME                          = 375,    /* Player %s not have tickets. */
    LANG_POOL_ENTRY_LIST_CHAT                                 = 376,    /* %u - |cffffffff|Hpool:%u|h[%s]|h|r AutoSpawn: %u MaxLimit: %u Creatures: %u GameObjecs: %u Pools %u */
    LANG_NO_POOL_FOR_MAP                                      = 377,    /* No pools found for map '%s' (Id:%u) */
    LANG_POOL_LIST_NON_INSTANCE                               = 378,    /* You can't use this command at non-instanceable map '%s' (Id:%u). Use .lookup pool command instead. */
    LANG_POOL_SPAWNS_NON_INSTANCE                             = 379,    /* You can't use this command without args at non-instanceable map '%s' (Id:%u). */
    LANG_POOL_CHANCE_CREATURE_LIST_CHAT                       = 380,    /* %d%s - |cffffffff|Hcreature:%d|h[%s X:%f Y:%f Z:%f MapId:%d]|h|r Chance:%f %s */
    LANG_POOL_CHANCE_CREATURE_LIST_CONSOLE                    = 381,    /* %d%s - [%s] X:%f Y:%f Z:%f MapId:%d Chance:%f %s */
    LANG_POOL_CREATURE_LIST_CHAT                              = 382,    /* %d%s - |cffffffff|Hcreature:%d|h[%s X:%f Y:%f Z:%f MapId:%d]|h|r %s */
    LANG_POOL_CREATURE_LIST_CONSOLE                           = 383,    /* %d%s - [%s] X:%f Y:%f Z:%f MapId:%d %s */
    LANG_POOL_CHANCE_GO_LIST_CHAT                             = 384,    /* %d%s - |cffffffff|Hgameobject:%d|h[%s X:%f Y:%f Z:%f MapId:%d]|h|r Chance:%f %s */
    LANG_POOL_CHANCE_GO_LIST_CONSOLE                          = 385,    /* %d%s - [%s] X:%f Y:%f Z:%f MapId:%d Chance:%f %s */
    LANG_POOL_GO_LIST_CHAT                                    = 386,    /* %d%s - |cffffffff|Hgameobject:%d|h[%s X:%f Y:%f Z:%f MapId:%d]|h|r %s */
    LANG_POOL_GO_LIST_CONSOLE                                 = 387,    /* %d%s - [%s] X:%f Y:%f Z:%f MapId:%d %s */
    LANG_POOL_CHANCE_CREATURE_LIST_HEADER                     = 388,    /* Creatures with explicitly chance: */
    LANG_POOL_CREATURE_LIST_HEADER                            = 389,    /* Creatures with equal chance: */
    LANG_POOL_CHANCE_GO_LIST_HEADER                           = 390,    /* Gameobjects with explicitly chance: */
    LANG_POOL_GO_LIST_HEADER                                  = 391,    /* Gameobjects with equal chance: */
    LANG_POOL_INFO_HEADER_CHAT                                = 392,    /* Pool %u - Mother pool: %u |cffffffff|Hpool:%u|h[%s]|h|r AutoSpawn: %u MaxLimit: %u */
    LANG_POOL_INFO_HEADER_CONSOLE                             = 393,    /* Pool %u - Mother pool: %u [%s] AutoSpawn: %u MaxLimit: %u */
    LANG_POOL_INFO_HEADER                                     = 394,    /* Pool %u - Mother pool: none AutoSpawn: %u MaxLimit: %u */
    LANG_NO_POOL                                              = 395,    /* No pools found */
    LANG_POOL_ENTRY_LIST_CONSOLE                              = 396,    /* %u - [%s] AutoSpawn: %u MaxLimit: %u Creatures: %u GameObjecs: %u Pools %u */
    LANG_POOL_CHANCE_POOL_LIST_HEADER                         = 397,    /* Pools with explicitly chance: */
    LANG_POOL_POOL_LIST_HEADER                                = 398,    /* Pools with equal chance: */
    LANG_POOL_CHANCE_POOL_LIST_CHAT                           = 399,    /* %u - |cffffffff|Hpool:%u|h[%s]|h|r AutoSpawn: %u MaxLimit: %u Creatures: %u GameObjecs: %u Pools %u Chance: %f %s */
    LANG_SCRIPTS_RELOADED_ANNOUNCE                            = 400,    /* |cffff0000[System Message]:|rScripts reloaded */
    LANG_YOU_CHANGE_SECURITY                                  = 401,    /* You change security level of account %s to %i. */
    LANG_YOURS_SECURITY_CHANGED                               = 402,    /* %s changed your security level to %i. */
    LANG_YOURS_SECURITY_IS_LOW                                = 403,    /* You have low security level for this. */
    LANG_CREATURE_MOVE_DISABLED                               = 404,    /* Creature movement disabled. */
    LANG_CREATURE_MOVE_ENABLED                                = 405,    /* Creature movement enabled. */
    LANG_NO_WEATHER                                           = 406,    /* Weather can't be changed for this zone. */
    LANG_WEATHER_DISABLED                                     = 407,    /* Weather system disabled at server. */
    LANG_BAN_YOUBANNED                                        = 408,    /* %s is banned for %s. Reason: %s. */
    LANG_BAN_YOUPERMBANNED                                    = 409,    /* %s is banned permanently for %s. */
    LANG_BAN_NOTFOUND                                         = 410,    /* %s %s not found */
    LANG_UNBAN_UNBANNED                                       = 411,    /* %s unbanned. */
    LANG_UNBAN_ERROR                                          = 412,    /* There was an error removing the ban on %s. */
    LANG_ACCOUNT_NOT_EXIST                                    = 413,    /* Account not exist: %s */
    LANG_BANINFO_NOCHARACTER                                  = 414,    /* There is no such character. */
    LANG_BANINFO_NOIP                                         = 415,    /* There is no such IP in banlist. */
    LANG_BANINFO_NOACCOUNTBAN                                 = 416,    /* Account %s has never been banned */
    LANG_BANINFO_BANHISTORY                                   = 417,    /* Ban history for account %s: */
    LANG_BANINFO_HISTORYENTRY                                 = 418,    /* Ban Date: %s Bantime: %s Still active: %s  Reason: %s Set by: %s */
    LANG_BANINFO_INFINITE                                     = 419,    /* Inf. */
    LANG_BANINFO_NEVER                                        = 420,    /* Never */
    LANG_BANINFO_YES                                          = 421,    /* Yes */
    LANG_BANINFO_NO                                           = 422,    /* No */
    LANG_BANINFO_IPENTRY                                      = 423,    /* IP: %sBan Date: %sUnban Date: %sRemaining: %sReason: %sSet by: %s */
    LANG_BANLIST_NOIP                                         = 424,    /* There is no matching IPban. */
    LANG_BANLIST_NOACCOUNT                                    = 425,    /* There is no matching account. */
    LANG_BANLIST_NOCHARACTER                                  = 426,    /* There is no banned account owning a character matching this part. */
    LANG_BANLIST_MATCHINGIP                                   = 427,    /* The following IPs match your pattern: */
    LANG_BANLIST_MATCHINGACCOUNT                              = 428,    /* The following accounts match your query: */
    LANG_COMMAND_LEARN_MANY_SPELLS                            = 429,    /* You learned many spells/skills. */
    LANG_COMMAND_LEARN_CLASS_SPELLS                           = 430,    /* You learned all spells for class. */
    LANG_COMMAND_LEARN_CLASS_TALENTS                          = 431,    /* You learned all talents for class. */
    LANG_COMMAND_LEARN_ALL_LANG                               = 432,    /* You learned all languages. */
    LANG_COMMAND_LEARN_ALL_CRAFT                              = 433,    /* You learned all craft skills and recipes. */
    LANG_COMMAND_COULDNOTFIND                                 = 434,    /* Could not find '%s' */
    LANG_COMMAND_ITEMIDINVALID                                = 435,    /* Invalid item id: %u */
    LANG_COMMAND_NOITEMFOUND                                  = 436,    /* No items found! */
    LANG_COMMAND_LISTOBJINVALIDID                             = 437,    /* Invalid gameobject id: %u */
    LANG_COMMAND_LISTITEMMESSAGE                              = 438,    /* Found items %u: %u ( inventory %u mail %u auction %u guild %u) */
    LANG_COMMAND_LISTOBJMESSAGE                               = 439,    /* Found gameobjects %u: %u  */
    LANG_COMMAND_INVALIDCREATUREID                            = 440,    /* Invalid creature id: %u */
    LANG_COMMAND_LISTCREATUREMESSAGE                          = 441,    /* Found creatures %u: %u  */
    LANG_COMMAND_NOAREAFOUND                                  = 442,    /* No area found! */
    LANG_COMMAND_NOITEMSETFOUND                               = 443,    /* No item sets found! */
    LANG_COMMAND_NOSKILLFOUND                                 = 444,    /* No skills found! */
    LANG_COMMAND_NOSPELLFOUND                                 = 445,    /* No spells found! */
    LANG_COMMAND_NOQUESTFOUND                                 = 446,    /* No quests found! */
    LANG_COMMAND_NOCREATUREFOUND                              = 447,    /* No creatures found! */
    LANG_COMMAND_NOGAMEOBJECTFOUND                            = 448,    /* No gameobjects found! */
    LANG_COMMAND_GRAVEYARDNOEXIST                             = 449,    /* Graveyard #%u doesn't exist. */
    LANG_COMMAND_GRAVEYARDALRLINKED                           = 450,    /* Graveyard #%u already linked to zone #%u (current). */
    LANG_COMMAND_GRAVEYARDLINKED                              = 451,    /* Graveyard #%u linked to zone #%u (current). */
    LANG_COMMAND_GRAVEYARDWRONGZONE                           = 452,    /* Graveyard #%u can't be linked to subzone or not existed zone #%u (internal error). */
    //                                  = 453,
    LANG_COMMAND_GRAVEYARDERROR                               = 454,    /* No faction in Graveyard with id= #%u , fix your DB */
    LANG_COMMAND_GRAVEYARD_NOTEAM                             = 455,    /* invalid team, please fix database */
    LANG_COMMAND_GRAVEYARD_ANY                                = 456,    /* any */
    LANG_COMMAND_GRAVEYARD_ALLIANCE                           = 457,    /* alliance */
    LANG_COMMAND_GRAVEYARD_HORDE                              = 458,    /* horde */
    LANG_COMMAND_GRAVEYARDNEAREST                             = 459,    /* Graveyard #%u (faction: %s) is nearest from linked to zone #%u. */
    LANG_COMMAND_ZONENOGRAVEYARDS                             = 460,    /* Zone #%u doesn't have linked graveyards. */
    LANG_COMMAND_ZONENOGRAFACTION                             = 461,    /* Zone #%u doesn't have linked graveyards for faction: %s. */
    LANG_COMMAND_TP_ALREADYEXIST                              = 462,    /* Teleport location already exists! */
    LANG_COMMAND_TP_ADDED                                     = 463,    /* Teleport location added. */
    LANG_COMMAND_TP_ADDEDERR                                  = 464,    /* Teleport location NOT added: database error. */
    LANG_COMMAND_TP_DELETED                                   = 465,    /* Teleport location deleted. */
    LANG_COMMAND_NOTAXINODEFOUND                              = 466,    /* No taxinodes found! */
    LANG_COMMAND_TARGET_LISTAURAS                             = 467,    /* Target unit has %d auras: */
    LANG_COMMAND_TARGET_AURADETAIL                            = 468,    /* id: %d eff: %d type: %d duration: %d maxduration: %d name: %s%s%s caster: %s (stacks: %d) */
    LANG_COMMAND_TARGET_LISTAURATYPE                          = 469,    /* Target unit has %d auras of type %d: */
    LANG_COMMAND_TARGET_AURASIMPLE                            = 470,    /* id: %d eff: %d name: %s%s%s caster: %s */
    LANG_COMMAND_QUEST_NOTFOUND                               = 471,    /* Quest %u not found. */
    LANG_COMMAND_QUEST_STARTFROMITEM                          = 472,    /* Quest %u started from item. For correct work, please, add item to inventory and start quest in normal way: .additem %u */
    LANG_COMMAND_QUEST_REMOVED                                = 473,    /* Quest removed. */
    LANG_COMMAND_QUEST_REWARDED                               = 474,    /*  [rewarded] */
    LANG_COMMAND_QUEST_COMPLETE                               = 475,    /*  [complete] */
    LANG_COMMAND_QUEST_ACTIVE                                 = 476,    /*  [active] */
    LANG_COMMAND_FLYMODE_STATUS                               = 477,    /* %s's Fly Mode %s */
    LANG_COMMAND_OPCODESENT                                   = 478,    /* Opcode %u sent to %s */
    LANG_COMMAND_IMPORT_SUCCESS                               = 479,    /* Character loaded successfully! */
    LANG_COMMAND_IMPORT_FAILED                                = 480,    /* Failed to load the character! */
    LANG_COMMAND_EXPORT_SUCCESS                               = 481,    /* Character dumped successfully! */
    LANG_COMMAND_EXPORT_FAILED                                = 482,    /* Character dump failed! */
    LANG_COMMAND_SPELL_BROKEN                                 = 483,    /* Spell %u broken and not allowed to cast or learn! */
    LANG_SET_SKILL                                            = 484,    /* Skill %u (%s) for player %s set to %u and current maximum set to %u (without permanent (talent) bonuses). */
    LANG_SET_SKILL_ERROR                                      = 485,    /* Player %s must have skill %u (%s) before using this command. */
    LANG_INVALID_SKILL_ID                                     = 486,    /* Invalid skill id (%u) */
    LANG_LEARNING_GM_SKILLS                                   = 487,    /* You learned default GM spells/skills. */
    LANG_YOU_KNOWN_SPELL                                      = 488,    /* You already know that spell. */
    LANG_TARGET_KNOWN_SPELL                                   = 489,    /* Target(%s) already know that spell. */
    LANG_UNKNOWN_SPELL                                        = 490,    /* %s doesn't know that spell. */
    LANG_FORGET_SPELL                                         = 491,    /* You already forgot that spell. */
    LANG_REMOVEALL_COOLDOWN                                   = 492,    /* All spell cooldowns removed for %s. */
    LANG_REMOVE_COOLDOWN                                      = 493,    /* Spell %u cooldown removed for %s. */
    LANG_ADDITEM                                              = 494,    /* Command : Additem, itemId = %i, amount = %i */
    LANG_ADDITEMSET                                           = 495,    /* Command : Additemset, itemsetId = %i */
    LANG_REMOVEITEM                                           = 496,    /* Removed itemID = %i, amount = %i from %s */
    LANG_ITEM_CANNOT_CREATE                                   = 497,    /* Cannot create item '%i' (amount: %i) */
    LANG_INSERT_GUILD_NAME                                    = 498,    /* You need to provide a guild name! */
    LANG_PLAYER_NOT_FOUND                                     = 499,    /* Player not found! */
    LANG_PLAYER_IN_GUILD                                      = 500,    /* Player already has a guild! */
    LANG_GUILD_NOT_CREATED                                    = 501,    /* Guild not created! (already exists?) */
    LANG_NO_ITEMS_FROM_ITEMSET_FOUND                          = 502,    /* No items from itemset '%u' found. */
    LANG_DISTANCE                                             = 503,    /* The distance is: (3D) %f (2D) %f - (3D, point-to-point) %f yards. */
    LANG_ITEM_SLOT                                            = 504,    /* Item '%i' '%s' Item Slot %i */
    LANG_ITEM_SLOT_NOT_EXIST                                  = 505,    /* Item '%i' doesn't exist. */
    LANG_ITEM_ADDED_TO_SLOT                                   = 506,    /* Item '%i' '%s' Added to Slot %i */
    LANG_ITEM_SAVE_FAILED                                     = 507,    /* Item save failed! */
    LANG_ITEMLIST_SLOT                                        = 508,    /* %d - owner: %s (guid: %u account: %u ) %s */
    LANG_ITEMLIST_MAIL                                        = 509,    /* %d - sender: %s (guid: %u account: %u ) receiver: %s (guid: %u account: %u ) %s */
    LANG_ITEMLIST_AUCTION                                     = 510,    /* %d - owner: %s (guid: %u account: %u ) %s */
    LANG_WRONG_LINK_TYPE                                      = 511,    /* Wrong link type! */
    LANG_ITEM_LIST_CHAT                                       = 512,    /* %d - |cffffffff|Hitem:%d:0:0:0:0:0:0:0|h[%s]|h|r %s */
    LANG_QUEST_LIST_CHAT                                      = 513,    /* %d - |cffffffff|Hquest:%d:%d|h[%s]|h|r %s */
    LANG_CREATURE_ENTRY_LIST_CHAT                             = 514,    /* %d - |cffffffff|Hcreature_entry:%d|h[%s]|h|r  */
    LANG_CREATURE_LIST_CHAT                                   = 515,    /* %d%s - |cffffffff|Hcreature:%d|h[%s X:%f Y:%f Z:%f MapId:%d]|h|r  */
    LANG_GO_ENTRY_LIST_CHAT                                   = 516,    /* %d - |cffffffff|Hgameobject_entry:%d|h[%s]|h|r  */
    LANG_GO_MIXED_LIST_CHAT                                   = 517,    /* %d%s, Entry %d - |cffffffff|Hgameobject:%d|h[%s X:%f Y:%f Z:%f MapId:%d]|h|r */
    LANG_ITEMSET_LIST_CHAT                                    = 518,    /* %d - |cffffffff|Hitemset:%d|h[%s %s]|h|r  */
    LANG_TELE_LIST                                            = 519,    /* |cffffffff|Htele:%s|h[%s]|h|r  */
    LANG_SPELL_LIST                                           = 520,    /* %d - |cffffffff|Hspell:%d|h[%s]|h|r  */
    LANG_SKILL_LIST_CHAT                                      = 521,    /* %d - |cffffffff|Hskill:%d|h[%s %s]|h|r %s %s */
    LANG_GAMEOBJECT_NOT_EXIST                                 = 522,    /* Game Object (Entry: %u) not found */
    LANG_GAMEOBJECT_CURRENT                                   = 523,    /* >> Game Object %s (GUID: %u) at %f %f %f. Orientation %f. */
    LANG_GAMEOBJECT_DETAIL                                    = 524,    /* Selected object:|cffffffff|Hgameobject:%d|h[%s]|h|r GUID: %u ID: %uX: %f Y: %f Z: %f MapId: %uOrientation: %f */
    LANG_GAMEOBJECT_ADD                                       = 525,    /* >> Add Game Object '%i' (%s) (GUID: %i) added at '%f %f %f'. */
    LANG_MOVEGENS_LIST                                        = 526,    /* %s (lowguid: %u) movement generators stack: */
    LANG_MOVEGENS_IDLE                                        = 527,    /*    Idle */
    LANG_MOVEGENS_RANDOM                                      = 528,    /*    Random */
    LANG_MOVEGENS_WAYPOINT                                    = 529,    /*    Waypoint */
    LANG_MOVEGENS_ANIMAL_RANDOM                               = 530,    /*    Animal random */
    LANG_MOVEGENS_CONFUSED                                    = 531,    /*    Confused */
    LANG_MOVEGENS_CHASE_PLAYER                                = 532,    /*    Targeted to player %s (lowguid %u) */
    LANG_MOVEGENS_CHASE_CREATURE                              = 533,    /*    Targeted to creature %s (lowguid %u) */
    LANG_MOVEGENS_CHASE_NULL                                  = 534,    /*    Targeted to <NULL> */
    LANG_MOVEGENS_HOME_CREATURE                               = 535,    /*    Home movement to (X:%f Y:%f Z:%f) */
    LANG_MOVEGENS_HOME_PLAYER                                 = 536,    /*    Home movement used for player?!? */
    LANG_MOVEGENS_FLIGHT                                      = 537,    /*    Taxi flight */
    LANG_MOVEGENS_UNKNOWN                                     = 538,    /*    Unknown movement generator (%u) */
    LANG_NPCINFO_CHAR                                         = 539,    /* Player selected: %s.
Faction: %u.
npcFlags: %u.
Entry: %u.
DisplayID: %u (Native: %u). */
    LANG_NPCINFO_LEVEL                                        = 540,    /* Level: %u. */
    LANG_NPCINFO_HEALTH                                       = 541,    /* Health (base): %u. (max): %u. (current): %u. */
    LANG_NPCINFO_FLAGS                                        = 542,    /* Unit Flags: %u.
Dynamic Flags: %u.
Faction Template: %u. */
    LANG_NPCINFO_LOOT                                         = 543,    /* Loot: %u Pickpocket: %u Skinning: %u */
    LANG_NPCINFO_POSITION                                     = 544,    /* Position: %f %f %f. */
    LANG_NPCINFO_VENDOR                                       = 545,    /* *** Is a vendor! */
    LANG_NPCINFO_TRAINER                                      = 546,    /* *** Is a trainer! */
    LANG_NPCINFO_DUNGEON_ID                                   = 547,    /* InstanceID: %u */
    LANG_PINFO_ACCOUNT                                        = 548,    /* Player%s %s (guid: %u) Account: %s (id: %u) GMLevel: %u E-mail: %s Last IP: %s Last login: %s Latency: %ums */
    LANG_PINFO_LEVEL                                          = 549,    /* Played time: %s Level: %u Money: %ug%us%uc */
    LANG_PINFO_NO_REP                                         = 550,    /* Command .pinfo doesn't support 'rep' option for offline players. */
    LANG_YOU_SET_EXPLORE_ALL                                  = 551,    /* %s has explored all zones now. */
    LANG_YOU_SET_EXPLORE_NOTHING                              = 552,    /* %s has no more explored zones. */
    LANG_YOURS_EXPLORE_SET_ALL                                = 553,    /* %s has explored all zones for you. */
    LANG_YOURS_EXPLORE_SET_NOTHING                            = 554,    /* %s has hidden all zones from you. */
    LANG_COMMAND_OPCODEGOT                                    = 555,    /* Opcode %u with target %s was received from you. */
    LANG_YOURS_LEVEL_UP                                       = 557,    /* %s level up you to (%i) */
    LANG_YOURS_LEVEL_DOWN                                     = 558,    /* %s level down you to (%i) */
    LANG_YOURS_LEVEL_PROGRESS_RESET                           = 559,    /* %s reset your level progress. */
    LANG_EXPLORE_AREA                                         = 560,    /* The area has been set as explored. */
    LANG_UNEXPLORE_AREA                                       = 561,    /* The area has been set as not explored. */
    LANG_TOO_BIG_INDEX                                        = 564,    /* The value index %u is too big to %s (count: %u). */
    LANG_SET_UINT                                             = 565,    /* Set for %s field:%u to uint32 value:%u */
    LANG_SET_UINT_FIELD                                       = 566,    /* You set for %s field:%u to uint32 value: %u */
    LANG_SET_FLOAT                                            = 567,    /* Set for %s field:%u to to float value:%f */
    LANG_SET_FLOAT_FIELD                                      = 568,    /* You set for %s field:%u to float value: %f */
    LANG_GET_UINT                                             = 569,    /* Get %s uint32 value:[FIELD]:%u [VALUE]:%u */
    LANG_GET_UINT_FIELD                                       = 570,    /* %s has uint32 value:[FIELD]:%u [VALUE]:%u */
    LANG_GET_FLOAT                                            = 571,    /* Get %s float value:[FIELD]:%u [VALUE]:%f */
    LANG_GET_FLOAT_FIELD                                      = 572,    /* %s has float value:[FIELD]:%u [VALUE]:%f */
    LANG_GET_GAMEOBJECT_LOOTSTATE                             = 573,    /* The lootstate of GO lowGuid %u is %u. */
    LANG_GET_GAMEOBJECT_STATE                                 = 574,    /* The GO state of GO lowGuid %u is %u. */
    LANG_CHANGE_INT32                                         = 575,    /* Modify %s uint32 field:%u to sum with:%i = %u (%i) */
    LANG_CHANGE_INT32_FIELD                                   = 576,    /* You modify for %s uint32 field:%u to sum with:%i = %u (%i) */
    LANG_INVISIBLE_INVISIBLE                                  = 577,    /* You are now invisible. */
    LANG_INVISIBLE_VISIBLE                                    = 578,    /* You are now visible. */
    LANG_SELECTED_TARGET_NOT_HAVE_VICTIM                      = 579,    /* Selected player or creature not have victim. */
    LANG_COMMAND_LEARN_ALL_DEFAULT_AND_QUEST                  = 580,    /* You learned all default spells for race/class and completed quests rewarded spells. */
    LANG_COMMAND_NEAROBJMESSAGE                               = 581,    /* Found near gameobjects (distance %f): %u  */
    LANG_COMMAND_RAWPAWNTIMES                                 = 582,    /* SpawnTime: Full:%s Remain:%s */
    LANG_EVENT_ENTRY_LIST_CHAT                                = 583,    /* %d - |cffffffff|Hgameevent:%d|h[%s]|h|r%s */
    LANG_NOEVENTFOUND                                         = 584,    /* No event found! */
    LANG_EVENT_NOT_EXIST                                      = 585,    /* Event not exist! */
    LANG_EVENT_INFO                                           = 586,    /* Event %u: %s%sStart: %s End: %s Occurence: %s Length: %sNext state change: %s */
    LANG_EVENT_ALREADY_ACTIVE                                 = 587,    /* Event %u already active! */
    LANG_EVENT_NOT_ACTIVE                                     = 588,    /* Event %u not active! */
    LANG_MOVEGENS_POINT                                       = 589,    /*    Point movement to (X:%f Y:%f Z:%f) */
    LANG_MOVEGENS_FEAR                                        = 590,    /*    Fear movement */
    LANG_MOVEGENS_DISTRACT                                    = 591,    /*    Distract movement */
    LANG_COMMAND_LEARN_ALL_RECIPES                            = 592,    /* You have learned all spells in craft: %s */
    LANG_BANLIST_ACCOUNTS                                     = 593,    /* Currently Banned Accounts: */
    LANG_BANLIST_ACCOUNTS_HEADER                              = 594,    /* |    Account    |   BanDate    |   UnbanDate  |  Banned By    |   Ban Reason  | */
    LANG_BANLIST_IPS                                          = 595,    /* Currently Banned IPs: */
    LANG_BANLIST_IPS_HEADER                                   = 596,    /* |      IP       |   BanDate    |   UnbanDate  |  Banned By    |   Ban Reason  | */
    LANG_GMLIST                                               = 597,    /* Current gamemasters: */
    LANG_GMLIST_HEADER                                        = 598,    /* |    Account    |  GM  | */
    LANG_GMLIST_EMPTY                                         = 599,    /* No gamemasters. */
    LANG_BG_A_WINS                                            = 600,    /* The Alliance wins! */
    LANG_BG_H_WINS                                            = 601,    /* The Horde wins! */
    LANG_BG_WS_START_ONE_MINUTE                               = 602,    /* The battle for Warsong Gulch begins in 1 minute. */
    LANG_BG_WS_START_HALF_MINUTE                              = 603,    /* The battle for Warsong Gulch begins in 30 seconds. Prepare yourselves! */
    LANG_BG_WS_HAS_BEGUN                                      = 604,    /* Let the battle for Warsong Gulch begin! */
    LANG_BG_WS_CAPTURED_HF                                    = 605,    /* $n captured the Horde flag! */
    LANG_BG_WS_CAPTURED_AF                                    = 606,    /* $n captured the Alliance flag! */
    LANG_BG_WS_DROPPED_HF                                     = 607,    /* The Horde flag was dropped by $n! */
    LANG_BG_WS_DROPPED_AF                                     = 608,    /* The Alliance Flag was dropped by $n! */
    LANG_BG_WS_RETURNED_AF                                    = 609,    /* The Alliance Flag was returned to its base by $n! */
    LANG_BG_WS_RETURNED_HF                                    = 610,    /* The Horde flag was returned to its base by $n! */
    LANG_BG_WS_PICKEDUP_HF                                    = 611,    /* The Horde flag was picked up by $n! */
    LANG_BG_WS_PICKEDUP_AF                                    = 612,    /* The Alliance Flag was picked up by $n! */
    LANG_BG_WS_F_PLACED                                       = 613,    /* The flags are now placed at their bases. */
    LANG_BG_WS_ALLIANCE_FLAG_RESPAWNED                        = 614,    /* The Alliance flag is now placed at its base. */
    LANG_BG_WS_HORDE_FLAG_RESPAWNED                           = 615,    /* The Horde flag is now placed at its base. */
    // 616 - 635 not used
    LANG_BG_EY_START_ONE_MINUTE                               = 636,
    LANG_BG_EY_START_HALF_MINUTE                              = 637,
    LANG_BG_EY_HAS_BEGUN                                      = 638,
    // 639 - 649 not used
    LANG_BG_ALLY                                              = 650,    /* Alliance */
    LANG_BG_HORDE                                             = 651,    /* Horde */
    LANG_BG_AB_NODE_STABLES                                   = 652,    /* stables */
    LANG_BG_AB_NODE_BLACKSMITH                                = 653,    /* blacksmith */
    LANG_BG_AB_NODE_FARM                                      = 654,    /* farm */
    LANG_BG_AB_NODE_LUMBER_MILL                               = 655,    /* lumber mill */
    LANG_BG_AB_NODE_GOLD_MINE                                 = 656,    /* mine */
    LANG_BG_AB_NODE_TAKEN                                     = 657,    /* The %s has taken the %s */
    LANG_BG_AB_NODE_DEFENDED                                  = 658,    /* $n has defended the %s */
    LANG_BG_AB_NODE_ASSAULTED                                 = 659,    /* $n has assaulted the %s */
    LANG_BG_AB_NODE_CLAIMED                                   = 660,    /* $n claims the %s! If left unchallenged, the %s will control it in 1 minute! */
    LANG_BG_AB_START_ONE_MINUTE                               = 661,    /* The Battle for Arathi Basin begins in 1 minute. */
    LANG_BG_AB_START_HALF_MINUTE                              = 662,    /* The Battle for Arathi Basin begins in 30 seconds. Prepare yourselves! */
    LANG_BG_AB_HAS_BEGUN                                      = 663,    /* The Battle for Arathi Basin has begun! */
    LANG_BG_AB_A_NEAR_VICTORY                                 = 664,    /* The Alliance has gathered $1776W resources, and is near victory! */
    LANG_BG_AB_H_NEAR_VICTORY                                 = 665,    /* The Horde has gathered $1777W resources, and is near victory! */
    LANG_BG_MARK_BY_MAIL                                      = 666,    /* After your recent battle in %s our best attempts to award you a Mark of Honor failed. Enclosed you will find the Mark of Honor we were not able to deliver to you at the time. Thanks for fighting in %s! */

    LANG_BG_EY_HAS_TAKEN_A_M_TOWER                            = 667,
    LANG_BG_EY_HAS_TAKEN_H_M_TOWER                            = 668,
    LANG_BG_EY_HAS_TAKEN_A_D_RUINS                            = 669,
    LANG_BG_EY_HAS_TAKEN_H_D_RUINS                            = 670,
    LANG_BG_EY_HAS_TAKEN_A_B_TOWER                            = 671,
    LANG_BG_EY_HAS_TAKEN_H_B_TOWER                            = 672,
    LANG_BG_EY_HAS_TAKEN_A_F_RUINS                            = 673,
    LANG_BG_EY_HAS_TAKEN_H_F_RUINS                            = 674,
    LANG_BG_EY_HAS_LOST_A_M_TOWER                             = 675,
    LANG_BG_EY_HAS_LOST_H_M_TOWER                             = 676,
    LANG_BG_EY_HAS_LOST_A_D_RUINS                             = 677,
    LANG_BG_EY_HAS_LOST_H_D_RUINS                             = 678,
    LANG_BG_EY_HAS_LOST_A_B_TOWER                             = 679,
    LANG_BG_EY_HAS_LOST_H_B_TOWER                             = 680,
    LANG_BG_EY_HAS_LOST_A_F_RUINS                             = 681,
    LANG_BG_EY_HAS_LOST_H_F_RUINS                             = 682,
    LANG_BG_EY_HAS_TAKEN_FLAG                                 = 683,
    LANG_BG_EY_CAPTURED_FLAG_A                                = 684,
    LANG_BG_EY_CAPTURED_FLAG_H                                = 685,
    LANG_BG_EY_DROPPED_FLAG                                   = 686,
    LANG_BG_EY_RESETED_FLAG                                   = 687,
    // 688 - 699 not used
    LANG_ARENA_ONE_TOOLOW                                     = 700,
    LANG_ARENA_ONE_MINUTE                                     = 701,
    LANG_ARENA_THIRTY_SECONDS                                 = 702,
    LANG_ARENA_FIFTEEN_SECONDS                                = 703,
    LANG_ARENA_HAS_BEGUN                                      = 704,

    LANG_WAIT_BEFORE_SPEAKING                                 = 705,    /* You must wait %s before speaking again. */
    LANG_NOT_EQUIPPED_ITEM                                    = 706,    /* This item(s) has problems with equipping/storing to inventory. */
    LANG_PLAYER_DND                                           = 707,    /* %s does not wish to be disturbed: %s */
    LANG_PLAYER_AFK                                           = 708,    /* %s is Away from Keyboard: %s */
    LANG_PLAYER_DND_DEFAULT                                   = 709,    /* Do not Disturb */
    LANG_PLAYER_AFK_DEFAULT                                   = 710,    /* Away from Keyboard */
    LANG_BG_QUEUE_ANNOUNCE_SELF                               = 711,    /* Queue status for %s (Lvl: %u to %u)Queued alliances: %u (Need at least %u more)Queued hordes: %u (Need at least %u more) */
    LANG_BG_QUEUE_ANNOUNCE_WORLD                              = 712,    /* |cffff0000[BG Queue Announcer]:|r %s -- [%u-%u] A: %u/%u, H: %u/%u|r */
    LANG_YOUR_ARENA_LEVEL_REQ_ERROR                           = 713,
    LANG_BG_IS_DISABLED                                       = 714,    /* This Battleground is disabled by the server administration. */
    LANG_YOUR_BG_LEVEL_REQ_ERROR                              = 715,    /* You don't meet Battleground level requirements */
    //                                  = 716, not used
    LANG_BG_STARTED_ANNOUNCE_WORLD                            = 717,    /* |cffff0000[BG Queue Announcer]:|r %s -- [%u-%u] Started!|r */
    LANG_ARENA_QUEUE_ANNOUNCE_WORLD_JOIN                      = 718,
    LANG_ARENA_QUEUE_ANNOUNCE_WORLD_EXIT                      = 719,

    LANG_BG_GROUP_TOO_LARGE                                   = 720,    /* Your group is too large for this battleground. Please regroup to join. */
    LANG_ARENA_GROUP_TOO_LARGE                                = 721,    /* "Your group is too large for this arena. Please regroup to join." */
    LANG_ARENA_YOUR_TEAM_ONLY                                 = 722,    /* "Your group has members not in your arena team. Please regroup to join." */
    LANG_ARENA_NOT_ENOUGH_PLAYERS                             = 723,    /* "Your group does not have enough players to join this match." */
    LANG_ARENA_GOLD_WINS                                      = 724,    /* "The Gold Team wins!" */
    LANG_ARENA_GREEN_WINS                                     = 725,    /* "The Green Team wins!" */
    //                                  = 726, not used
    LANG_BG_GROUP_OFFLINE_MEMBER                              = 727,    /* Your group has an offline member. Please remove him before joining. */
    LANG_BG_GROUP_MIXED_FACTION                               = 728,    /* Your group has players from the opposing faction. You can't join the battleground as a group. */
    LANG_BG_GROUP_MIXED_LEVELS                                = 729,    /* Your group has players from different battleground brakets. You can't join as group. */
    LANG_BG_GROUP_MEMBER_ALREADY_IN_QUEUE                     = 730,    /* Someone in your party is already in this battleground queue. (S)he must leave it before joining as group. */
    LANG_BG_GROUP_MEMBER_DESERTER                             = 731,    /* Someone in your party is Deserter. You can't join as group. */
    LANG_BG_GROUP_MEMBER_NO_FREE_QUEUE_SLOTS                  = 732,    /* Someone in your party is already in three battleground queues. You cannot join as group. */
    LANG_CANNOT_TELE_TO_BG                                    = 733,    /* You cannot teleport to a battleground map. */
    LANG_CANNOT_SUMMON_TO_BG                                  = 734,    /* You cannot summon players to a battleground or arena map. */
    LANG_CANNOT_GO_TO_BG_GM                                   = 735,    /* You must be in GM mode to teleport to a player in a battleground. */
    LANG_CANNOT_GO_TO_BG_FROM_BG                              = 736,    /* You cannot teleport to a battleground from another battleground. Please leave the current battleground first. */
    LANG_DEBUG_ARENA_ON                                       = 737,
    LANG_DEBUG_ARENA_OFF                                      = 738,
    LANG_DEBUG_BG_ON                                          = 739,    /* Battlegrounds are set to 1v0 for debugging. */
    LANG_DEBUG_BG_OFF                                         = 740,    /* Battlegrounds are set to normal playercount. */
    LANG_DIST_ARENA_POINTS_START                              = 741,
    LANG_DIST_ARENA_POINTS_ONLINE_START                       = 742,
    LANG_DIST_ARENA_POINTS_ONLINE_END                         = 743,
    LANG_DIST_ARENA_POINTS_TEAM_START                         = 744,
    LANG_DIST_ARENA_POINTS_TEAM_END                           = 745,
    LANG_DIST_ARENA_POINTS_END                                = 746,
    LANG_MAP_IS_DISABLED                                      = 747,    /* This Instance is disabled by the server administration. */
    LANG_BATTLEGROUND_PREMATURE_FINISH_WARNING                = 750,    /* Not enough players. This game will close in %u mins. */
    LANG_BATTLEGROUND_PREMATURE_FINISH_WARNING_SECS           = 751,    /* Not enough players. This game will close in %u seconds. */
    LANG_BATTLEGROUND_ONLY_ALLIANCE_USE                       = 752,    /* Only the Alliance can use that portal */
    LANG_BATTLEGROUND_ONLY_HORDE_USE                          = 753,    /* Only the Horde can use that portal */
    LANG_BG_AV_TOWER_TAKEN                                    = 759,    /* %s was destroyed by the %s! */
    LANG_BG_AV_TOWER_ASSAULTED                                = 760,    /* The %s is under attack! If left unchecked, the %s will destroy it! */
    LANG_BG_AV_TOWER_DEFENDED                                 = 761,    /* The %s was taken by the %s! */
    LANG_BG_AV_GRAVE_TAKEN                                    = 762,    /* The %s was taken by the %s! */
    LANG_BG_AV_GRAVE_DEFENDED                                 = 763,    /* The %s was taken by the %s! */
    LANG_BG_AV_GRAVE_ASSAULTED                                = 764,    /* The %s is under attack! If left unchecked, the %s will capture it! */
    LANG_BG_AV_MINE_TAKEN                                     = 765,    /* The %s has taken the %s! Its supplies will now be used for reinforcements! */
    LANG_BG_AV_MINE_NORTH                                     = 766,    /* Irondeep Mine */
    LANG_BG_AV_MINE_SOUTH                                     = 767,    /* Coldtooth Mine */
    LANG_BG_AV_NODE_GRAVE_STORM_AID                           = 768,    /* Stormpike Aid Station */
    LANG_BG_AV_NODE_TOWER_DUN_S                               = 769,    /* Dun Baldar South Bunker */
    LANG_BG_AV_NODE_TOWER_DUN_N                               = 770,    /* Dun Baldar North Bunker */
    LANG_BG_AV_NODE_GRAVE_STORMPIKE                           = 771,    /* Stormpike Graveyard */
    LANG_BG_AV_NODE_TOWER_ICEWING                             = 772,    /* Icewing Bunker */
    LANG_BG_AV_NODE_GRAVE_STONE                               = 773,    /* Stonehearth Graveyard */
    LANG_BG_AV_NODE_TOWER_STONE                               = 774,    /* Stonehearth Bunker */
    LANG_BG_AV_NODE_GRAVE_SNOW                                = 775,    /* Snowfall Graveyard */
    LANG_BG_AV_NODE_TOWER_ICE                                 = 776,    /* Iceblood Tower */
    LANG_BG_AV_NODE_GRAVE_ICE                                 = 777,    /* Iceblood Graveyard */
    LANG_BG_AV_NODE_TOWER_POINT                               = 778,    /* Tower Point */
    LANG_BG_AV_NODE_GRAVE_FROST                               = 779,    /* Frostwolf Graveyard */
    LANG_BG_AV_NODE_TOWER_FROST_E                             = 780,    /* East Frostwolf Tower */
    LANG_BG_AV_NODE_TOWER_FROST_W                             = 781,    /* West Frostwolf Tower */
    LANG_BG_AV_NODE_GRAVE_FROST_HUT                           = 782,    /* Frostwolf Relief Hut */
    LANG_BG_AV_START_ONE_MINUTE                               = 784,    /* 1 minute until the battle for Alterac Valley begins. */
    LANG_BG_AV_START_HALF_MINUTE                              = 785,    /* 30 seconds until the battle for Alterac Valley begins. Prepare yourselves! */
    LANG_BG_AV_HAS_BEGUN                                      = 786,    /* The battle for Alterac Valley has begun! */
    LANG_BG_AV_A_NEAR_LOSE                                    = 787,    /* The Alliance Team is running out of reinforcements! */
    LANG_BG_AV_H_NEAR_LOSE                                    = 788,    /* The Horde Team is running out of reinforcements! */
    LANG_BG_AV_H_GENERAL_DEAD                                 = 789,    /* The Frostwolf General is Dead! */
    LANG_BG_AV_A_GENERAL_DEAD                                 = 790,    /* The Stormpike General is Dead! */
    LANG_NOT_ENOUGH_GOLD                                      = 801,    /* You do not have enough gold */
    LANG_NOT_FREE_TRADE_SLOTS                                 = 802,    /* You do not have enough free slots */
    LANG_NOT_PARTNER_FREE_TRADE_SLOTS                         = 803,    /* Your partner does not have enough free bag slots */
    LANG_YOU_NOT_HAVE_PERMISSION                              = 804,    /* You do not have permission to perform that function */
    LANG_UNKNOWN_LANGUAGE                                     = 805,    /* Unknown language */
    LANG_NOT_LEARNED_LANGUAGE                                 = 806,    /* You don't know that language */
    LANG_NEED_CHARACTER_NAME                                  = 807,    /* Please provide character name */
    LANG_PLAYER_NOT_EXIST_OR_OFFLINE                          = 808,    /* Player %s not found or offline */
    LANG_ACCOUNT_FOR_PLAYER_NOT_FOUND                         = 809,    /* Account for character %s not found */
    LANG_GUILD_MASTER                                         = 811,    /* Guild Master */
    LANG_GUILD_OFFICER                                        = 812,    /* Officer */
    LANG_GUILD_VETERAN                                        = 813,    /* Veteran */
    LANG_GUILD_MEMBER                                         = 814,    /* Member */
    LANG_GUILD_INITIATE                                       = 815,    /* Initiate */
    LANG_FAIL_ENTER_SPECTRAL_REALM                            = 816,
    //                                    817 used in master branch
    LANG_TELEREQ_QUEST_BLACK_MORASS                           = 818,
    // Room for in-game strings           819-999 not used

    LANG_COMMAND_EXIT                                         = 1000,    /* Exiting daemon... */
    LANG_ACCOUNT_DELETED                                      = 1001,    /* Account deleted: %s */
    LANG_ACCOUNT_NOT_DELETED_SQL_ERROR                        = 1002,    /* Account %s NOT deleted (probably sql file format was updated) */
    LANG_ACCOUNT_NOT_DELETED                                  = 1003,    /* Account %s NOT deleted (unknown error) */
    LANG_ACCOUNT_CREATED                                      = 1004,    /* Account created: %s */
    LANG_ACCOUNT_TOO_LONG                                     = 1005,    /* Account name cannot be longer than 16 characters (client limit), account not created! */
    LANG_ACCOUNT_ALREADY_EXIST                                = 1006,    /* Account with this name already exist! */
    LANG_ACCOUNT_NOT_CREATED_SQL_ERROR                        = 1007,    /* Account %s NOT created (probably sql file format was updated) */
    LANG_ACCOUNT_NOT_CREATED                                  = 1008,    /* Account %s NOT created (unknown error) */
    LANG_CHARACTER_DELETED                                    = 1009,    /* Player %s (Guid: %u) Account %s (Id: %u) deleted. */
    LANG_ACCOUNT_LIST_HEADER                                  = 1010,    /* | ID         |    Account    |       Character      |       IP        | GM | Expansion | */
    LANG_ACCOUNT_LIST_BAR                                     = 1012,    /* ======================================================================================== */
    LANG_ACCOUNT_LIST_LINE_CONSOLE                            = 1013,    /* | %10u |%15s| %20s | %15s |%4d| %9d | */
    LANG_ACCOUNT_LIST_EMPTY                                   = 1014,    /* No online players. */
    LANG_QUIT_WRONG_USE_ERROR                                 = 1015,    /* Can only quit from a Remote Admin console or the quit command was not entered in full (quit). */
    LANG_CHARACTER_DELETED_LIST_HEADER                        = 1016,    /* | GUID       | Name                 | Account                      | Delete Date         | */
    LANG_CHARACTER_DELETED_LIST_LINE_CONSOLE                  = 1017,    /* | %10u | %20s | %15s (%10u) | %19s | */
    LANG_CHARACTER_DELETED_LIST_BAR                           = 1018,    /* ========================================================================================== */
    LANG_CHARACTER_DELETED_LIST_EMPTY                         = 1019,    /* No characters found. */
    LANG_CHARACTER_DELETED_RESTORE                            = 1020,    /* Restoring the following characters: */
    LANG_CHARACTER_DELETED_DELETE                             = 1021,    /* Deleting the following characters: */
    LANG_CHARACTER_DELETED_ERR_RENAME                         = 1022,    /* ERROR: You can only assign a new name for a single selected character! */
    LANG_CHARACTER_DELETED_SKIP_ACCOUNT                       = 1023,    /* Character '%s' (GUID: %u Account %u) can't be restored: account doesn't exist! */
    LANG_CHARACTER_DELETED_SKIP_FULL                          = 1024,    /* Character '%s' (GUID: %u Account %u) can't be restored: account character list full! */
    LANG_CHARACTER_DELETED_SKIP_NAME                          = 1025,    /* Character '%s' (GUID: %u Account %u) can't be restored: name already in use! */
    LANG_CHARACTER_DELETED_LIST_LINE_CHAT                     = 1026,    /* GUID: %u Name: %s Account: %s (%u) Date: %s */
    LANG_LOG_FILTERS_STATE_HEADER                             = 1027,    /* Log filters state: */
    LANG_ALL_LOG_FILTERS_SET_TO_S                             = 1028,    /* All log filters set to: %s */
    LANG_RA_ONLY_COMMAND                                      = 1029,    /* Command can only be called from a Remote Admin console. */
    LANG_ACCOUNT_SETADDON                                     = 1100,    /* Account %s (Id: %u) has been granted %u expansion rights. */
    LANG_MOTD_NEW                                             = 1101,    /* Message of the day changed to:%s */
    LANG_SENDMESSAGE                                          = 1102,    /* Message sent to %s: %s */
    LANG_EVENT_ENTRY_LIST_CONSOLE                             = 1103,    /* %d - %s %s */
    LANG_CREATURE_ENTRY_LIST_CONSOLE                          = 1104,    /* %d - %s */
    LANG_ITEM_LIST_CONSOLE                                    = 1105,    /* %d - %s %s */
    LANG_ITEMSET_LIST_CONSOLE                                 = 1106,    /* %d - %s %s */
    LANG_GO_ENTRY_LIST_CONSOLE                                = 1107,    /* %d - %s */
    LANG_QUEST_LIST_CONSOLE                                   = 1108,    /* %d - %s %s */
    LANG_SKILL_LIST_CONSOLE                                   = 1109,    /* %d - %s %s %s %s */
    LANG_CREATURE_LIST_CONSOLE                                = 1110,    /* %d%s - %s X:%f Y:%f Z:%f MapId:%d */
    LANG_GO_LIST_CONSOLE                                      = 1111,    /* %d%s - %s X:%f Y:%f Z:%f MapId:%d */
    LANG_FILE_OPEN_FAIL                                       = 1112,    /* Failed to open file: %s */
    LANG_ACCOUNT_CHARACTER_LIST_FULL                          = 1113,    /* Account %s (%u) have max amount allowed characters (client limit) */
    LANG_DUMP_BROKEN                                          = 1114,    /* Dump file have broken data! */
    LANG_INVALID_CHARACTER_NAME                               = 1115,    /* Invalid character name! */
    LANG_INVALID_CHARACTER_GUID                               = 1116,    /* Invalid character guid! */
    LANG_CHARACTER_GUID_IN_USE                                = 1117,    /* Character guid %u in use! */
    LANG_ITEMLIST_GUILD                                       = 1118,    /* %d - guild: %s (guid: %u) %s */
    LANG_MUST_MALE_OR_FEMALE                                  = 1119,    /* You must use male or female as gender. */
    LANG_YOU_CHANGE_GENDER                                    = 1120,    /* You change gender of %s to %s. */
    LANG_YOUR_GENDER_CHANGED                                  = 1121,    /* Your gender changed to %s by %s. */
    LANG_SKILL_VALUES                                         = 1122,    /* (%u/%u +perm %u +temp %u) */
    LANG_TAXINODE_ENTRY_LIST_CHAT                             = 1128,    /* %d - |cffffffff|Htaxinode:%u|h[%s %s]|h|r (Map:%u X:%f Y:%f Z:%f) */
    LANG_TAXINODE_ENTRY_LIST_CONSOLE                          = 1129,    /* %d - %s %s (Map:%u X:%f Y:%f Z:%f) */
    LANG_EVENT_STARTED                                        = 1130,    /* event started %u "%s" */
    LANG_EVENT_STOPPED                                        = 1131,    /* event stopped %u "%s" */
    LANG_MOVEGENS_FOLLOW_PLAYER                               = 1132,    /*    Follow player %s (lowguid %u) */
    LANG_MOVEGENS_FOLLOW_CREATURE                             = 1133,    /*    Follow creature %s (lowguid %u) */
    LANG_MOVEGENS_FOLLOW_NULL                                 = 1134,    /*    Follow <NULL> */
    LANG_LIST_TALENTS_TITLE                                   = 1135,    /* List known talents: */
    LANG_LIST_TALENTS_COUNT                                   = 1136,    /*    (Found talents: %u used talent points: %u) */
    LANG_GO_LIST_CHAT                                         = 1137,    /* %d%s - |cffffffff|Hgameobject:%d|h[%s X:%f Y:%f Z:%f MapId:%d]|h|r  */
    LANG_CHARACTERS_LIST_BAR                                  = 1138,    /* ================================================================================= */
    LANG_CHARACTERS_LIST_HEADER                               = 1139,    /* | GUID       | Name                 | Race            | Class           | Level | */
    LANG_CHARACTERS_LIST_LINE_CONSOLE                         = 1140,    /* | %10u | %20s | %15s | %15s | %5u | */
    LANG_CHARACTERS_LIST_LINE_CHAT                            = 1141,    /* %u - |cffffffff|Hplayer:%s|h[%s]|h|r %s %s %u */
    LANG_ACCOUNT_LIST_LINE_CHAT                               = 1142,    /* %u - %s (Online:%s IP:%s GM:%u Expansion:%u) */
    LANG_NPC_GO_INFO_GAME_EVENT_S                             = 1143,    /* Spawned by event %u (%s) */
    LANG_NPC_GO_INFO_GAME_EVENT_D                             = 1144,    /* Despawned by event %u (%s) */
    LANG_NPC_GO_INFO_POOL                                     = 1145,    /* Part of pool %u */
    LANG_NPC_GO_INFO_TOP_POOL                                 = 1146,    /* Part of pool %u, top pool %u */
    LANG_NPC_GO_INFO_POOL_GAME_EVENT_S                        = 1147,    /* The (top)pool %u is spawned by event %u (%s) */
    LANG_NPC_GO_INFO_POOL_GAME_EVENT_D                        = 1148,    /* The (top)pool %u is despawned by event %u (%s) */
    LANG_NPC_GO_INFO_POOL_STRING                              = 1149,    /*  (Pool %u) */
    LANG_NPC_GO_INFO_EVENT_STRING                             = 1150,    /*  (Event %i) */
    LANG_NPC_GO_INFO_POOL_EVENT_STRING                        = 1151,    /*  (Pool %u Event %i) */
    LANG_COMMAND_ITEM_USABLE                                  = 1152,    /* [usable] */
    LANG_GET_BITSTR                                           = 1153,    /* Get %s bitstr value:[FIELD]:%u [VALUE]:%s */
    LANG_GET_BITSTR_FIELD                                     = 1154,    /* %s has bitstr value:[FIELD]:%u [VALUE]:%s */
    LANG_GET_HEX                                              = 1155,    /* Get %s hex value:[FIELD]:%u [VALUE]:%x */
    LANG_GET_HEX_FIELD                                        = 1156,    /* %s has hex value:[FIELD]:%u [VALUE]:%x */
    LANG_CHANGE_HEX                                           = 1157,    /* Modify %s hex field:%u %s %x = %x (hex) */
    LANG_CHANGE_HEX_FIELD                                     = 1158,    /* You modify for %s hex field:%u %s %x = %x (hex) */
    LANG_CHANGE_FLOAT                                         = 1159,    /* Modify %s float field:%u to sum with:%f = %f */
    LANG_CHANGE_FLOAT_FIELD                                   = 1160,    /* You modify for %s float field:%u to sum with:%f = %f */
    LANG_SPELL_NO_HAVE_AURAS                                  = 1165,    /* Spell %u not have auras. */
    LANG_SCRIPTS_NOT_FOUND                                    = 1166,    /* Scripting library not found or not accessible. */
    LANG_SCRIPTS_WRONG_API                                    = 1167,    /* Scripting library has wrong list functions (outdated?). */
    LANG_SCRIPTS_RELOADED_OK                                  = 1168,    /* Scripting library reloaded. */
    LANG_SCRIPTS_OUTDATED                                     = 1169,    /* Scripting library build for different mangosd revision. */
    LANG_NPCINFO_CHAR_DIFFICULTY                              = 1170,
    LANG_AHBOT_RELOAD_OK                                      = 1171,    /* All config are reloaded from ahbot configuration file. */
    LANG_AHBOT_RELOAD_FAIL                                    = 1172,    /* Error while trying to reload ahbot config. */
    LANG_AHBOT_STATUS_BAR_CONSOLE                             = 1173,    /* ========================================================== */
    LANG_AHBOT_STATUS_MIDBAR_CONSOLE                          = 1174,    /* |--------------------------------------------------------| */
    LANG_AHBOT_STATUS_TITLE1_CONSOLE                          = 1175,    /* |            | Alliance |  Horde   | Neutral  |  Total   | */
    LANG_AHBOT_STATUS_TITLE1_CHAT                             = 1176,    /*           Alliance/Horde/Neutral/Total */
    LANG_AHBOT_STATUS_FORMAT_CONSOLE                          = 1177,    /* | %-10s | %8u | %8u | %8u | %8u | */
    LANG_AHBOT_STATUS_FORMAT_CHAT                             = 1178,    /* %-10s = %6u / %6u / %6u / %6u */
    LANG_AHBOT_STATUS_ITEM_COUNT                              = 1179,    /* Count */
    LANG_AHBOT_STATUS_ITEM_RATIO                              = 1180,    /* Item Ratio */
    LANG_AHBOT_STATUS_TITLE2_CONSOLE                          = 1181,    /* |            | Alliance |   Horde  | Neutral  |  Amount  | */
    LANG_AHBOT_STATUS_TITLE2_CHAT                             = 1182,    /*           Alliance/Horde/Neutral/Amount */
    LANG_AHBOT_QUALITY_GREY                                   = 1183,    /* Grey */
    LANG_AHBOT_QUALITY_WHITE                                  = 1184,    /* White */
    LANG_AHBOT_QUALITY_GREEN                                  = 1185,    /* Green */
    LANG_AHBOT_QUALITY_BLUE                                   = 1186,    /* Blue */
    LANG_AHBOT_QUALITY_PURPLE                                 = 1187,    /* Purple */
    LANG_AHBOT_QUALITY_ORANGE                                 = 1188,    /* Orange */
    LANG_AHBOT_QUALITY_YELLOW                                 = 1189,    /* Yellow */
    LANG_AHBOT_ITEMS_AMOUNT                                   = 1190,    /* Amount of %s items is set to %u. */
    LANG_AHBOT_ITEMS_RATIO                                    = 1191,    /* Items ratio for %s is set to %u. */
    LANG_MOVEGENS_EFFECT                                      = 1192,    /* Effect movement */
    LANG_COMMAND_GO_STATUS                                    = 1194,    /* Current State Information: GOState %u, LootState %u. Collision %s */
    LANG_COMMAND_GO_STATUS_DOOR                               = 1195,    /* Current State Information: GOState %u, LootState %u. Collision %s, (door %s by default) */
    LANG_CINEMATIC_NOT_EXIST                                  = 1200,    /* You try to view cinematic %u but it doesn't exist. */
    LANG_SPELLCOEFS                                           = 1202,    /* Spell %u %s = %f (*1.88 = %f) DB = %f AP = %f */
    LANG_DIRECT_HEAL                                          = 1203,    /* direct heal */
    LANG_DIRECT_DAMAGE                                        = 1204,    /* direct damage */
    LANG_DOT_HEAL                                             = 1205,    /* dot heal */
    LANG_DOT_DAMAGE                                           = 1206,    /* dot damage */
    // Room for more debug                1207-1299 not used

    // Reserved for old client release branches specific strings
    // Room for old clients 2.x           1300-1399 not used
    // Room for old clients 1.x           1400-1439 not used
    LANG_COMMAND_TICKETUPDATED                                = 1440,    /* Player %s has updated his ticket (ID %u). */
    LANG_POOL_CHANCE_POOL_LIST_CONSOLE                        = 1500,    /* %u - [%s] AutoSpawn: %u MaxLimit: %u Creatures: %u GameObjecs: %u Pools %u Chance: %f %s */
    LANG_POOL_POOL_LIST_CHAT                                  = 1501,    /* %u - |cffffffff|Hpool:%u|h[%s]|h|r AutoSpawn: %u MaxLimit: %u Creatures: %u GameObjecs: %u Pools %u %s */
    LANG_POOL_POOL_LIST_CONSOLE                               = 1502,    /* %u - [%s] AutoSpawn: %u MaxLimit: %u Creatures: %u GameObjecs: %u Pools %u %s */
    LANG_NO_FREE_STATIC_GUID_FOR_SPAWN                        = 1503,    /* Cannot add spawn because no free guids for static spawn in reserved guids range. Server restart is required before command can be used. Also look GuidReserveSize.* config options. */
    LANG_NPC_AI_HEADER                                        = 1504,    /* AI-Information for Npc Entry %u */
    LANG_NPC_AI_NAMES                                         = 1505,    /* AIName: %s (%s) ScriptName: %s */
    LANG_NPC_EVENTAI_PHASE                                    = 1506,    /* Current phase = %u */
    LANG_NPC_EVENTAI_MOVE                                     = 1507,    /* Combat-Movement is %s */
    LANG_NPC_EVENTAI_COMBAT                                   = 1508,    /* Melee attacking is %s */
    LANG_POOL_ENTRY_LOWER_MAX_POOL                            = 1509,    /* Pool %u not found (Maximal pool entry is %u) */
    LANG_COMMAND_TICKETCLOSED_NAME                            = 1510,    /* Ticket %u from %s has been closed by <GM>%s */
    LANG_COMMAND_TICKETS_SYSTEM_ON                            = 1511,    /* Ticket system is globally on, accepting all tickets */
    LANG_COMMAND_TICKETS_SYSTEM_OFF                           = 1512,    /* Ticket system is globally off, not accepting tickets at all */
    LANG_COMMAND_TICKET_CANT_CLOSE                            = 1513,    /* You cant close a ticket for offline players */
    LANG_COMMAND_TICKET_BRIEF_INFO                            = 1514,    /* ID %u from %s (%s), changed %s */
    LANG_COMMAND_TICKET_COUNT_ONLINE                          = 1515,    /* = Shown %u tickets out of total %u from online players. */
    LANG_COMMAND_TICKET_OFFLINE_INFO                          = 1516,    /* ID %u from GUID %u (%s), changed %s */
    LANG_COMMAND_TICKET_COUNT_ALL                             = 1517,    /* = Shown %u tickets of total %u. */
    LANG_COMMAND_TICKET_ACCEPT_STATE                          = 1518,    /* Informing you about arriving tickets is %s. */
    LANG_COMMAND_TICKET_RESPOND_MAIL_SUBJECT                  = 1519,    /* Response to your ticket */
    LANG_COMMAND_TICKET_RESPOND_MAIL_SIGNATURE                = 1520,    /* $B$BBest regards, $B$B<GM>%s */
    LANG_COMMAND_TICKETCLOSED_PLAYER_NOTIF                    = 1521,    /* Your ticket has been closed.@@It has been serviced by <GM>%s, please check your ingame mailbox to see the answer. */
    // Room for more Level 2              1522-1599 not used

    // Outdoor PvP
    LANG_OPVP_EP_CAPTURE_NPT_H                                = 1600,    /* |cffffff00Northpass Tower has been taken by the Horde!|r */
    LANG_OPVP_EP_CAPTURE_NPT_A                                = 1601,    /* |cffffff00Northpass Tower has been taken by the Alliance!|r */
    LANG_OPVP_EP_CAPTURE_CGT_H                                = 1602,    /* |cffffff00Crown Guard Tower has been taken by the Horde!|r */
    LANG_OPVP_EP_CAPTURE_CGT_A                                = 1603,    /* |cffffff00Crown Guard Tower has been taken by the Alliance!|r */
    LANG_OPVP_EP_CAPTURE_EWT_H                                = 1604,    /* |cffffff00Eastwall Tower has been taken by the Horde!|r */
    LANG_OPVP_EP_CAPTURE_EWT_A                                = 1605,    /* |cffffff00Eastwall Tower has been taken by the Alliance!|r */
    LANG_OPVP_EP_CAPTURE_PWT_H                                = 1606,    /* |cffffff00The Plaguewood Tower has been taken by the Horde!|r */
    LANG_OPVP_EP_CAPTURE_PWT_A                                = 1607,    /* |cffffff00The Plaguewood Tower has been taken by the Alliance!|r */

    LANG_OPVP_HP_CAPTURE_OVERLOOK_H                           = 1608,
    LANG_OPVP_HP_CAPTURE_OVERLOOK_A                           = 1609,
    LANG_OPVP_HP_CAPTURE_STADIUM_H                            = 1610,
    LANG_OPVP_HP_CAPTURE_STADIUM_A                            = 1611,
    LANG_OPVP_HP_CAPTURE_BROKENHILL_H                         = 1612,
    LANG_OPVP_HP_CAPTURE_BROKENHILL_A                         = 1613,

    LANG_OPVP_ZM_CAPTURE_EAST_BEACON_H                        = 1614,
    LANG_OPVP_ZM_CAPTURE_EAST_BEACON_A                        = 1615,
    LANG_OPVP_ZM_CAPTURE_WEST_BEACON_H                        = 1616,
    LANG_OPVP_ZM_CAPTURE_WEST_BEACON_A                        = 1617,
    LANG_OPVP_ZM_CAPTURE_BOTH_BEACONS_H                       = 1618,
    LANG_OPVP_ZM_CAPTURE_BOTH_BEACONS_A                       = 1619,
    LANG_OPVP_ZM_SPAWN_FIELD_SCOUT_H                          = 1620,
    LANG_OPVP_ZM_SPAWN_FIELD_SCOUT_A                          = 1621,
    LANG_OPVP_ZM_CAPTURE_GRAVEYARD_H                          = 1622,
    LANG_OPVP_ZM_CAPTURE_GRAVEYARD_A                          = 1623,

    LANG_OPVP_TF_CAPTURE_TOWER_H                              = 1624,
    LANG_OPVP_TF_CAPTURE_TOWER_A                              = 1625,
    LANG_OPVP_TF_LOSE_TOWER_H                                 = 1626,
    LANG_OPVP_TF_LOSE_TOWER_A                                 = 1627,
    LANG_OPVP_TF_CAPTURE_ALL_TOWERS_H                         = 1628,
    LANG_OPVP_TF_CAPTURE_ALL_TOWERS_A                         = 1629,

    LANG_OPVP_NA_PROGRESS_H                                   = 1630,
    LANG_OPVP_NA_PROGRESS_A                                   = 1631,
    LANG_OPVP_NA_CAPTURE_H                                    = 1632,
    LANG_OPVP_NA_CAPTURE_A                                    = 1633,
    LANG_OPVP_NA_DEFENSELESS                                  = 1634,

    LANG_OPVP_SI_CAPTURE_H                                    = 1635,    /* |cffffff00The Horde has collected 200 silithyst!|r */
    LANG_OPVP_SI_CAPTURE_A                                    = 1636,    /* |cffffff00The Alliance has collected 200 silithyst!|r */

    LANG_AUTOBROADCAST                                        = 1700,    /* |cffff0000[Server Announce]:|r%s */
    LANG_COMMAND_AURAGROUP_CANNOT_APPLY_AURA_PLAYER_IS_DEAD   = 1701,    /* %s is Dead - cannot apply aura. */
    LANG_COMMAND_AURAGROUP_AURA_APPLIED                       = 1702,    /* Aura from spell %u has been applied to %s. */
    LANG_COMMAND_AURAGROUP_CANNOT_UNAURA_DEAD_PLAYER          = 1703,    /* Cannot remove aura(s) from %s because the player is dead. */
    LANG_COMMAND_AURAGROUP_ALL_AURA_REMOVED                   = 1704,    /* All auras have been removed from %s. */
    LANG_COMMAND_AURAGROUP_AURA_REMOVED_FOR_SPELL             = 1705,    /* Aura from spell %u has been removedfrom %s */
    LANG_COMMAND_EXECUTE_GOCRE_ANOTHER_TIME                   = 1706,    /* You will have to execute your command another time to get to the real moving npc position (.go creature %u) */
    LANG_COMMAND_FREEZE_PLAYER                                = 1707,    /* %s has been freezed ! Be careful : Effect will persist after logout or ban if not manually removed ! (use ".unfreezeplayer" command to allow the player to move again) */
    LANG_COMMAND_UNFREEZE_PLAYER                              = 1708,    /* %s has been unfreezed. */
    LANG_COMMAND_FREEZE_PLAYER_CANNOT_FREEZE_HIGHER_SECLEVEL  = 1709,    /* You cannot freeze %s since his security level is higher than yours. */
    LANG_COMMAND_FREEZE_PLAYER_CANNOT_FREEZE_YOURSELF         = 1710,    /* You cannot freeze yourself ! (What a strange idea by the way...) */
    LANG_COMMAND_FREEZE_PLAYER_YOU_HAVE_BEEN_FROZEN           = 1711,    /* A GM has frozen your character. From now, you cannot move, use spells or logout. */
    LANG_COMMAND_FREEZE_PLAYER_YOU_HAVE_BEEN_UNFROZEN         = 1712,    /* You have been unfrozen. You can now move freely, use spells or even logout. */
    LANG_COMMAND_FREEZE_PLAYER_PLAYER_NOT_FOUND               = 1713,    /* You can only freeze online characters. */
    LANG_COMMAND_UNFREEZE_PLAYER_PLAYER_NOT_FOUND             = 1714,    /* You can only unfreeze online characters. */

    // Use for not-in-official-sources patches
    //                                    10000-10999

    // Use for custom patches             11000-11999

    // NOT RESERVED IDS                   12000-1999999999
    // `db_script_string` table index     2000000000-2000999999 (MIN_DB_SCRIPT_STRING_ID-MAX_DB_SCRIPT_STRING_ID)
    // For other tables maybe             2001000000-2147483647 (max index)
};
#endif
