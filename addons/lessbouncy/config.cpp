class CfgPatches
{
  class dpso_bouncy
  {
    units[] = {};
    weapons[] = {};
    requiredVersion = DPSO_REQUIRED_VERSION;
    requiredAddons[] = {
        "A3_Weapons_F"
    };  
    version = DPSO_VERSION;
    versionStr = DPSO_VERSION_STR;
    author = "nkenny";
    url = URL;
  };
};

class CfgAmmo {
    class SmokeShell;
    class G_40mm_Smoke: SmokeShell
    {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
};