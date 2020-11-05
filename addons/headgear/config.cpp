#include "script_component.hpp"
class CfgPatches
{
  class ADDON
  {
    units[] = {};
    weapons[] = {
        QCLASS(H_MilCap_m98),
        QCLASS(H_MilCap_snow),
        QCLASS(H_Booniehat_m98),
        QCLASS(H_HelmetIA),
        QCLASS(H_HelmetIA_snow),
        QCLASS(H_HelmetB),
        QCLASS(H_HelmetB_snow),
        QCLASS(H_HelmetB_camo),
        QCLASS(H_HelmetB_light),
        QCLASS(H_HelmetB_light_brn),
        QCLASS(H_HelmetB_light_snow),
        QCLASS(H_HelmetSpecB),
        QCLASS(H_HelmetSpecB_brn),
        QCLASS(H_HelmetSpecB_gry),
        QCLASS(H_HelmetSpecB_snow),
        QCLASS(H_Booniehat_trop),
        QCLASS(H_Booniehat_med),
        QCLASS(H_Booniehat_multi),
        QCLASS(H_MilCap_med),
        QCLASS(H_MilCap_trop),
        QCLASS(H_HelmetB_med),
        QCLASS(H_HelmetB_trop)

    };
    requiredVersion = DPSO_REQUIRED_VERSION;
    requiredAddons[] = {
        "A3_Characters_F_EPB"
    };
    version = DPSO_VERSION;
    author = AUTHOR;

  };
};

class cfgWeapons {
    class H_MilCap_ocamo;
    class H_Booniehat_khk;
    class H_HelmetB;
    class H_HelmetB_camo;
    class H_HelmetB_light;
    class H_HelmetSpecB;
    class H_HelmetIA;

    // Soft
    class CLASS(H_MilCap_m98): H_MilCap_ocamo {
        author = AUTHOR;
        displayName = "Military Cap (M98)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\MilCap_m98.paa)};
    };
    class CLASS(H_MilCap_snow): H_MilCap_ocamo {
        author = AUTHOR;
        displayName = "Military Cap (Snow)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\MilCap_snow.paa)};
    };
    class CLASS(H_Booniehat_m98): H_Booniehat_khk {
        author = AUTHOR;
        displayName = "Booniehat (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\BoonieHat_m98.paa)};
    };

    class CLASS(H_Booniehat_med): H_Booniehat_khk {
        author = AUTHOR;
        displayName = "Booniehat (CTRG MED)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\dpso_booniehat.paa)};
    };
    class CLASS(H_Booniehat_trop): H_Booniehat_khk {
        author = AUTHOR;
        displayName = "Booniehat (CTRG Tropical)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\dpso_trop_booniehat.paa)};
    };
    class CLASS(H_Booniehat_multi): H_Booniehat_khk {
        author = AUTHOR;
        displayName = "Booniehat (Multicam)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\dpso_multi_booniehat.paa)};
    };
    class CLASS(H_MilCap_med): H_MilCap_ocamo {
        author = AUTHOR;
        displayName = "Military Cap (CTRG MED)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\dpso_cappatrol.paa)};
    };
    class CLASS(H_MilCap_trop): H_MilCap_ocamo {
        author = AUTHOR;
        displayName = "Military Cap (CTRG Tropical)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\dpso_trop_cappatrol.paa)};
    };
    // old helmet
    class CLASS(H_HelmetIA): H_HelmetIA {
        author = AUTHOR;
        displayName = "Modular Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_old.paa)};
    };
    class CLASS(H_HelmetIA_snow): H_HelmetIA {
        author = AUTHOR;
        displayName = "Modular Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_old_snow.paa)};
    };

    // regular helmet
    class CLASS(H_HelmetB): H_HelmetB {
        author = AUTHOR;
        displayName = "Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_m98.paa)};
    };
    class CLASS(H_HelmetB_snow): H_HelmetB {
        author = AUTHOR;
        displayName = "Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_snow.paa)};
    };
    class CLASS(H_HelmetB_med): H_HelmetB {
        author = AUTHOR;
        displayName = "Combat Helmet (CTRG MED)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\dpso_equip1_co.paa)};
    };
    class CLASS(H_HelmetB_trop): H_HelmetB {
        author = AUTHOR;
        displayName = "Combat Helmet (CTRG Tropical)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\dpso_trop_equip1_co.paa)};
    };

    // camo
    class CLASS(H_HelmetB_camo): H_HelmetB_camo {
        author = AUTHOR;
        displayName = "Combat Helmet (M98 Camo)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_m98.paa),"\A3\characters_f\common\data\ghillie2_co.paa"};
    };

    // light
    class CLASS(H_HelmetB_light): H_HelmetB_light {
        author = AUTHOR;
        displayName = "Light Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_m98.paa)};
    };
    class CLASS(H_HelmetB_light_brn): H_HelmetB_light {
        author = AUTHOR;
        displayName = "Light Combat Helmet (Brown)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_base.paa)};
    };
    class CLASS(H_HelmetB_light_snow): H_HelmetB_light {
        author = AUTHOR;
        displayName = "Light Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_snow.paa)};
    };

    // spec ops
    class CLASS(H_HelmetSpecB): H_HelmetSpecB {
        author = AUTHOR;
        displayName = "Enhanced Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_M98.paa)};
    };
    class CLASS(H_HelmetSpecB_brn): H_HelmetSpecB {
        author = AUTHOR;
        displayName = "Enhanced Combat Helmet (Brown)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_base.paa)};
    };
    class CLASS(H_HelmetSpecB_gry): H_HelmetSpecB {
        author = AUTHOR;
        displayName = "Enhanced Combat Helmet (Grey)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_grey.paa)};
    };
    class CLASS(H_HelmetSpecB_snow): H_HelmetSpecB {
        author = AUTHOR;
        displayName = "Enhanced Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\texture\Helmet_snow.paa)};
    };

};
