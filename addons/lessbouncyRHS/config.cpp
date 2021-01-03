class CfgPatches
{
  class dpso_bouncy
  {
    units[] = {};
    weapons[] = {};
    requiredVersion = DPSO_REQUIRED_VERSION;
    requiredAddons[] = {
        "A3_Weapons_F",
        "rhs_c_weapons",
        "rhsusf_c_weapons"
    };  
    version = DPSO_VERSION;
    versionStr = DPSO_VERSION_STR;
    author = "nkenny";
    url = URL;
  };
};

class CfgAmmo {
    class SmokeShell;
    class rhs_40mm_smoke_white: SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };

    class SmokeShellRed;
    class rhs_40mm_smoke_red: SmokeShellRed {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };

    class SmokeShellGreen;
    class rhs_40mm_smoke_green: SmokeShellGreen {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };

    class SmokeShellYellow;
    class rhs_40mm_smoke_yellow: SmokeShellYellow {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };

    class rhs_g_vog25;
    class rhs_g_vg40md_white: rhs_g_vog25 {
        simulation = "shotSmoke";
        deflecting = 30;
        deflectionSlowDown = 0.3;
    };
};