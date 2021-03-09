#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = DPSO_REQUIRED_VERSION;
        requiredAddons[] = {
            "dpso_main",
            "dpso_common"
        };
        author = "NemesisRE";
        authors[] = {"baermitumlaut", "commy2"};
        DPSO_VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMarkers.hpp"
#include "CfgMarkerColors.hpp"
