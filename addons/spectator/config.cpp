#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = "DPSO: Spectator";
        author = "Head";
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"DPSO_common"};
        VERSION_CONFIG;
    };
};

class CfgRespawnTemplates
{
    class DPSO_Spectator
    {
        displayName = "DPSO Spectator";
        onPlayerRespawn  = QFUNC(init);
        onPlayerKilled = "";
    };
};
#include "autotest.hpp"
#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "display3DEN.hpp"
#include "dialog.hpp"
#include "CfgVehicles.hpp"
#include "tags.hpp"
