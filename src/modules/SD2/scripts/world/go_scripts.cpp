/**
 * ScriptDev2 is an extension for mangos providing enhanced features for
 * area triggers, creatures, game objects, instances, items, and spells beyond
 * the default database scripting in mangos.
 *
 * Copyright (C) 2006-2013  ScriptDev2 <http://www.scriptdev2.com/>
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

/**
 * ScriptData
 * SDName:      GO_Scripts
 * SD%Complete: 100
 * SDComment:   Quest support: 5097, 5098, Barov_journal->Teaches spell 26089
 * SDCategory:  Game Objects
 * EndScriptData
 */

/**
 * ContentData
 * go_barov_journal
 * go_ethereum_prison
 * go_ethereum_stasis
 * go_andorhal_tower
 * EndContentData
 */

#include "precompiled.h"

/*######
## go_barov_journal
######*/

enum
{
    SPELL_TAILOR_FELCLOTH_BAG = 26086,
    SPELL_LEARN_FELCLOTH_BAG  = 26095
};

struct go_barov_journal : public GameObjectScript
{
    go_barov_journal() : GameObjectScript("go_barov_journal") {}

    bool OnUse(Player* pPlayer, GameObject* /*pGo*/) override
    {
        if (pPlayer->HasSkill(SKILL_TAILORING) && pPlayer->GetBaseSkillValue(SKILL_TAILORING) >= 280 && !pPlayer->HasSpell(SPELL_TAILOR_FELCLOTH_BAG))
        {
            pPlayer->CastSpell(pPlayer, SPELL_LEARN_FELCLOTH_BAG, false);
        }
        return true;
    }
};

/*######
## go_ethereum_prison
######*/

enum
{
    FACTION_LC     = 1011,
    FACTION_SHAT   = 935,
    FACTION_CE     = 942,
    FACTION_CON    = 933,
    FACTION_KT     = 989,
    FACTION_SPOR   = 970,

    SPELL_REP_LC   = 39456,
    SPELL_REP_SHAT = 39457,
    SPELL_REP_CE   = 39460,
    SPELL_REP_CON  = 39474,
    SPELL_REP_KT   = 39475,
    SPELL_REP_SPOR = 39476
};

const uint32 uiNpcPrisonEntry[] =
{
    22810, 22811, 22812, 22813, 22814, 22815,               // good guys
    20783, 20784, 20785, 20786, 20788, 20789, 20790         // bad guys
};

struct go_ethereum_prison : public GameObjectScript
{
    go_ethereum_prison() : GameObjectScript("go_ethereum_prison") {}

    bool OnUse(Player* pPlayer, GameObject* pGo) override
    {
        uint8 uiRandom = urand(0, countof(uiNpcPrisonEntry) - 1);

        if (Creature* pCreature = pPlayer->SummonCreature(uiNpcPrisonEntry[uiRandom],
            pGo->GetPositionX(), pGo->GetPositionY(), pGo->GetPositionZ(), pGo->GetAngle(pPlayer),
            TEMPSUMMON_TIMED_OOC_DESPAWN, 30000))
        {
            if (!pCreature->IsHostileTo(pPlayer))
            {
                uint32 uiSpell = 0;

                if (FactionTemplateEntry const* pFaction = pCreature->getFactionTemplateEntry())
                {
                    switch (pFaction->faction)
                    {
                    case FACTION_LC:   uiSpell = SPELL_REP_LC;   break;
                    case FACTION_SHAT: uiSpell = SPELL_REP_SHAT; break;
                    case FACTION_CE:   uiSpell = SPELL_REP_CE;   break;
                    case FACTION_CON:  uiSpell = SPELL_REP_CON;  break;
                    case FACTION_KT:   uiSpell = SPELL_REP_KT;   break;
                    case FACTION_SPOR: uiSpell = SPELL_REP_SPOR; break;
                    }

                    if (uiSpell)
                    {
                        pCreature->CastSpell(pPlayer, uiSpell, false);
                    }
                    else
                    {
                        script_error_log("go_ethereum_prison summoned creature (entry %u) but faction (%u) are not expected by script.", pCreature->GetEntry(), pCreature->getFaction());
                    }
                }
            }
        }

        return false;
    }
};

/*######
## go_ethereum_stasis
######*/

const uint32 uiNpcStasisEntry[] =
{
    22825, 20888, 22827, 22826, 22828
};

struct go_ethereum_stasis : public GameObjectScript
{
    go_ethereum_stasis() : GameObjectScript("go_ethereum_stasis") {}

    bool OnUse(Player* pPlayer, GameObject* pGo) override
    {
        uint8 uiRandom = urand(0, countof(uiNpcStasisEntry) - 1);

        pPlayer->SummonCreature(uiNpcStasisEntry[uiRandom],
            pGo->GetPositionX(), pGo->GetPositionY(), pGo->GetPositionZ(), pGo->GetAngle(pPlayer),
            TEMPSUMMON_TIMED_OOC_DESPAWN, 30000);

        return false;
    }
};

/*######
## go_jump_a_tron
######*/

enum
{
    SPELL_JUMP_A_TRON = 33382,
    NPC_JUMP_A_TRON   = 19041
};

struct go_jump_a_tron : public GameObjectScript
{
    go_jump_a_tron() : GameObjectScript("go_jump_a_tron") {}

    bool OnUse(Player* pPlayer, GameObject* pGo) override
    {
        if (Creature* pCreature = GetClosestCreatureWithEntry(pGo, NPC_JUMP_A_TRON, INTERACTION_DISTANCE))
        {
            pCreature->CastSpell(pPlayer, SPELL_JUMP_A_TRON, false);
        }

        return false;
    }
};

/*######
## go_andorhal_tower
######*/

enum
{
    QUEST_ALL_ALONG_THE_WATCHTOWERS_ALLIANCE = 5097,
    QUEST_ALL_ALONG_THE_WATCHTOWERS_HORDE    = 5098,
    NPC_ANDORHAL_TOWER_1                     = 10902,
    NPC_ANDORHAL_TOWER_2                     = 10903,
    NPC_ANDORHAL_TOWER_3                     = 10904,
    NPC_ANDORHAL_TOWER_4                     = 10905,
    GO_ANDORHAL_TOWER_1                      = 176094,
    GO_ANDORHAL_TOWER_2                      = 176095,
    GO_ANDORHAL_TOWER_3                      = 176096,
    GO_ANDORHAL_TOWER_4                      = 176097
};

struct go_andorhal_tower : public GameObjectScript
{
    go_andorhal_tower() : GameObjectScript("go_andorhal_tower") {}

    bool OnUse(Player* pPlayer, GameObject* pGo) override
    {
        if (pPlayer->GetQuestStatus(QUEST_ALL_ALONG_THE_WATCHTOWERS_ALLIANCE) == QUEST_STATUS_INCOMPLETE || pPlayer->GetQuestStatus(QUEST_ALL_ALONG_THE_WATCHTOWERS_HORDE) == QUEST_STATUS_INCOMPLETE)
        {
            uint32 uiKillCredit = 0;
            switch (pGo->GetEntry())
            {
            case GO_ANDORHAL_TOWER_1:
                uiKillCredit = NPC_ANDORHAL_TOWER_1;
                break;
            case GO_ANDORHAL_TOWER_2:
                uiKillCredit = NPC_ANDORHAL_TOWER_2;
                break;
            case GO_ANDORHAL_TOWER_3:
                uiKillCredit = NPC_ANDORHAL_TOWER_3;
                break;
            case GO_ANDORHAL_TOWER_4:
                uiKillCredit = NPC_ANDORHAL_TOWER_4;
                break;
            }
            if (uiKillCredit)
            {
                pPlayer->KilledMonsterCredit(uiKillCredit);
            }
        }
        return true;
    }
};

enum 
{
    GOSSIP_TABLE_THEKA = 1653,
    QUEST_SPIDER_GOD = 2936
};

struct go_table_theka : public GameObjectScript
{
    go_table_theka() : GameObjectScript("go_table_theka") {}

    bool OnGossipHello(Player* pPlayer, GameObject* pGo) override
    {
        if (pPlayer->GetQuestStatus(QUEST_SPIDER_GOD) == QUEST_STATUS_INCOMPLETE)
            pPlayer->AreaExploredOrEventHappens(QUEST_SPIDER_GOD);

        pPlayer->SEND_GOSSIP_MENU(GOSSIP_TABLE_THEKA, pGo->GetObjectGuid());

        return true;
    }
};

void AddSC_go_scripts()
{
    Script* s;
    s = new go_barov_journal();
    s->RegisterSelf();
    s = new go_andorhal_tower();
    s->RegisterSelf();
    s = new go_table_theka();
    s->RegisterSelf();

    s = new go_ethereum_prison();
    s->RegisterSelf();
    s = new go_ethereum_stasis();
    s->RegisterSelf();
    s = new go_jump_a_tron();
    s->RegisterSelf();

    //pNewScript = new Script;
    //pNewScript->Name = "go_barov_journal";
    //pNewScript->pGOUse =          &GOUse_go_barov_journal;
    //pNewScript->RegisterSelf();

    //pNewScript = new Script;
    //pNewScript->Name = "go_ethereum_prison";
    //pNewScript->pGOUse =          &GOUse_go_ethereum_prison;
    //pNewScript->RegisterSelf();

    //pNewScript = new Script;
    //pNewScript->Name = "go_ethereum_stasis";
    //pNewScript->pGOUse =          &GOUse_go_ethereum_stasis;
    //pNewScript->RegisterSelf();

    //pNewScript = new Script;
    //pNewScript->Name = "go_jump_a_tron";
    //pNewScript->pGOUse =          &GOUse_go_jump_a_tron;

    //pNewScript = new Script;
    //pNewScript->Name = "go_andorhal_tower";
    //pNewScript->pGOUse =          &GOUse_go_andorhal_tower;
    //pNewScript->RegisterSelf();

    //pNewScript = new Script;
    //pNewScript->Name = "go_table_theka";
    //pNewScript->pGossipHelloGO =  &GossipHelloGO_table_theka;
    //pNewScript->RegisterSelf();
}
