#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // "dpso_TFAR_anarc210_ilbe",
            // "dpso_ilbe_marpatwd_west",
            // "dpso_ilbe_marpatd_west",
            // "dpso_ilbe_coyote_west",
            // "dpso_ilbe_khaki_west",
            // "dpso_TFAR_mr6000l_ilbe",
            // "dpso_ilbe_marpatwd_east",
            // "dpso_ilbe_marpatd_east",
            // "dpso_ilbe_coyote_east",
            // "dpso_ilbe_khaki_east",
            // "dpso_TFAR_anarc164_ilbe",
            // "dpso_ilbe_marpatwd_independent",
            // "dpso_ilbe_marpatd_independent",
            // "dpso_ilbe_coyote_independent",
            // "dpso_ilbe_khaki_independent",
            "talon_kitbag_coyote",
            "talon_kitbag_winter",
            "talon_kitbag_khaki",
            "dpso_TFAR_rt1523g_kitbag",
            "dpso_kitbag_khaki_west",
            "dpso_kitbag_coyote_west",
            "dpso_kitbag_winter_west",
            "dpso_kitbag_black_west",
            "dpso_TFAR_mr3000_kitbag",
            "dpso_kitbag_khaki_east",
            "dpso_kitbag_coyote_east",
            "dpso_kitbag_winter_east",
            "dpso_kitbag_black_east",
            "dpso_TFAR_anprc155_kitbag",
            "dpso_kitbag_khaki_independent",
            "dpso_kitbag_coyote_independent",
            "dpso_kitbag_winter_independent",
            "dpso_kitbag_black_independent"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "DPSO_main",
            "A3_Modules_F",
            "A3_UI_F",
            "A3_Structures_F_Items_Electronics",
            "A3_Weapons_F_ItemHolders",
            "tfar_backpacks"
        };
        author = "NemesisRE";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
