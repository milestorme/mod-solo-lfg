/*
** Made by Traesh https://github.com/Traesh
** AzerothCore 2019 http://www.azerothcore.org/
** Made into a module by Micrah https://github.com/milestorme/
*/

#include "ScriptMgr.h"
#include "Player.h"
#include "Configuration/Config.h"
#include "World.h"
#include "LFGMgr.h"
#include "Chat.h"

class lfg_solo : public PlayerScript
{
public:
    lfg_solo() : PlayerScript("lfg_solo") { }

    void OnLogin(Player* player, bool /*loginFirst*/)
    {
        if (sConfigMgr->GetBoolDefault("LFG.SoloMode", true))
        {
            if (!sLFGMgr->IsTesting())
            {
                sLFGMgr->ToggleTesting();
            }
        }
    }
};

void AddScLfg_SoloScripts()
{
    new lfg_solo();
}
