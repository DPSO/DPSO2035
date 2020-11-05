#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        magazines[] = {
            QCLASS(30Rnd_65x39_caseless_BlackCamo_mag)
        };
        units[] = {
            QCLASS(Item_EBR_Black_F),
            QCLASS(Item_Mk20_Black_F),
            QCLASS(Item_MRAWS_Black_F),
            QCLASS(Item_MRAWS_Black_Rail_F),
            QCLASS(Item_MX_BlackCamo),
            QCLASS(Item_MX_GL_BlackCamo),
            QCLASS(Item_Walther_P99),
            QCLASS(Box_Weapons)
        };
        weapons[] = {
            QCLASS(EBR_Black_F),
            QCLASS(Mk20_Black_F),
            QCLASS(MRAWS_Black_F),
            QCLASS(MRAWS_Black_Rail_F),
            QCLASS(MX_BlackCamo),
            QCLASS(MX_GL_BlackCamo),
            QCLASS(Walther_P99),
            QCLASS(Walther_P99_Tan),
            "LAMBS_LMG_03_brn_F",
            "LAMBS_hgun_P07_blk_F"
        };
        requiredVersion = DPSO_REQUIRED_VERSION;
        requiredaddons[] = {
			"a3_weapons_f",
			"dpso_MAIN"
		};
        author = AUTHOR;
        authors[] = {"Jonpas", "Pomigit", "BadHabitz", "JoramD", "Tyrone"};
        url = URL;
        DPSO_VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
