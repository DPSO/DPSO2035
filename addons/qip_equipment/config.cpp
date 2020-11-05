#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "qipTPL_Item_Vector_Designator",
            "qipTPL_Item_optic_Nightstalker"
        };
        weapons[] = {
            "qipTPL_Vector_Designator",
            "qipTPL_optic_Nightstalker"
        };
        requiredVersion = DPSO_REQUIRED_VERSION;
        requiredAddons[] = {
            "dpso_MAIN",
            "ace_vector",
            "A3_Weapons_F",
            "cba_jr"
        };
        author = AUTHOR;
        authors[] = {"YonV"};
        DPSO_VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "jr_classes.hpp"
#include "RscInGameUI.hpp"
