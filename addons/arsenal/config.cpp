#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "dpso_main"
        };
        author = "ArmaForces";
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

#include "ui\gui.hpp"
#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
