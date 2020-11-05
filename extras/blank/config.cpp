#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = DPSO_REQUIRED_VERSION;
        requiredAddons[] = {"dpso_main"};
        author = "";
        authors[] = {""};
        DPSO_VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
