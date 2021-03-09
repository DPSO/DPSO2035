#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = DPSO_REQUIRED_VERSION;
        requiredAddons[] = {"dpso_MAIN"};
        author = AUTHOR;
        authors[] = {"DaC", "Jonpas"};
        url = URL;
        DPSO_VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"

#include "markerMenu.hpp"
