#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "Freddo";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"dpso_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
