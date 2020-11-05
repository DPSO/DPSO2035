class CfgPatches {
    class dpso_effects {
    units[] = {};
    weapons[] = {};
    requiredVersion = DPSO_REQUIRED_VERSION;
    requiredAddons[] = {
        "A3_Characters_F",
        "A3_Sounds_F",
        "A3_Data_F_ParticleEffects",
        "CBA_Extended_EventHandlers"
    };
    version = DPSO_VERSION;
    versionStr = DPSO_VERSION_STR;
    author = "nopryl.no";
    url = URL;
    };
};
#include "cfgSounds.hpp"
#include "cfgFunctions.hpp"
#include "cfgCloudlets.hpp"
#include "cfgLights.hpp"
#include "cfgImpacts.hpp"

class Extended_Killed_Eventhandlers {
    class CAManBase {
        class LAMBS_CAManBase_Killed {
            killed = "_this spawn dpso_effects_fnc_killed";
        };
    };
};

class Extended_PreInit_EventHandlers {
    dpso_PreInit = "call compile preprocessFileLineNumbers 'z\dpso\Addons\effects\init.sqf'";
};

