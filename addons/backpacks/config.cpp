#include "script_component.hpp"


class CfgPatches {

	class ADDON {
		name = COMPONENT_NAME;
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredaddons[] = {
			"a3_weapons_f",
			"dpso_MAIN",
            "A3_Supplies_F_Enoch_Bags"
		};
		units[] = {};
		weapons[] = {};
		author = "$STR_DPSO_Backpacks_Author";
		authors[] = {
			"O. Jemineh"
		};
		url = URL;

	};

};
