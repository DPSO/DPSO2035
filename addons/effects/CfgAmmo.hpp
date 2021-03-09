#define FLARECFG \
    intensity = 500000; \
    size = 0.1; \
    timeToLive = 50; \
    coefGravity = 0.4;

class CfgAmmo {
    class FlareCore;
    class FlareBase;
    class Flare_82mm_AMOS_White : FlareCore {
        FLARECFG
    };
    class F_40mm_White : FlareBase {
        FLARECFG
    };
    class F_20mm_White : FlareBase {
        FLARECFG
    };
    class F_Signal_Green : FlareBase {
        FLARECFG
    };
    class F_40mm_Cir : F_40mm_White {
        nvgOnly = 1;
        useFlare = 0;
        irLock = 1;
    };
    // class rhs_rpg26_rocket;
    // class rhs_rpg7v2_pg7vl : rhs_rpg26_rocket {
    //     aiAmmoUsageFlags = "64 + 128 + 256 + 512";
    //     airLock = 1; 
    //     allowAgainstInfantry = 1; 
    //     cost = 40;
    // };
};
