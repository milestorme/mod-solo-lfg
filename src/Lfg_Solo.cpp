/*
** Made by Traesh https://github.com/Traesh
** AzerothCore 2019 http://www.azerothcore.org/
** Conan513 https://github.com/conan513
** Made into a module by Micrah https://github.com/milestorme/
** Updated to work with AzerothCore Docker Installations by Artanisx https://github.com/Artanisx/
*/

#include "ScriptMgr.h"
#include "Player.h"
#include "Configuration/Config.h"
#include "World.h"
#include "LFGMgr.h"
#include "Chat.h"
#include "Opcodes.h"

class lfg_solo : public PlayerScript
{
public:
    lfg_solo() : PlayerScript("lfg_solo") { }

   // Docker Installation prevents warnings. In order to avoid the issue, we need to add __attribute__ ((unused)) 
   // to the player variable to tell the compiler it is fine not to use it.
   void OnLogin(Player* __attribute__ ((unused))player)
   {
	   if (sConfigMgr->GetIntDefault("LFG.SoloMode", true))
        {
            if (!sLFGMgr->IsSoloLFG())
            {
            sLFGMgr->ToggleSoloLFG();
            }
        }
   }
};

void AddLfgSoloScripts()
{
    new lfg_solo();
}

