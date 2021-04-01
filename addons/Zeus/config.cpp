#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        author = "Snippers";
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "cba_xeh",
            "ace_common",
            "ace_medical",
            "zen_main",
            "zen_modules",
            "DPSO_common"
        };
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "RscDisplayCurator.hpp"

#include "cfgVehicles.hpp"

class Extended_PreInit_EventHandlers {
    class DPSO_Zeus_Event {
        init = "call compile preprocessFileLineNumbers 'z\dpso\Addons\Zeus\XEH_preInit.sqf'";
    };
};

#include "ZenActions.hpp"