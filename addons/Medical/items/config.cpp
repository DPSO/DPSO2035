#include "..\script_component.hpp"

class CfgPatches {
	
	class DPSO_Medical_Items {
		name = "$STR_DPSO_Medical_Items_Title";
		addonRootClass = "DPSO_Medical";
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {
			"a3_props_f_orange",
			"DPSO_medical"
		};
		units[] = {
			"DPSO_Item_Stethoscope"
		};
		weapons[] = {
			"DPSO_Stethoscope"
		};
		author = "$STR_DPSO_Medical_Items_Author";
		authors[] = {
			"O. Jemineh"
		};
		url = URL;
		VERSION_CONFIG;
	};
	
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
