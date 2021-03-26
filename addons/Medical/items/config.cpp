#include "..\script_component.hpp"

class CfgPatches {
	
	class DPSO_Medical_Items {
		name = COMPONENT_NAME;
		addonRootClass = "DPSO_Medical";
		requiredVersion = REQUIRED_VERSION;
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
		author = AUTHOR;
		authors[] = {
			"O. Jemineh"
		};
		url = URL;
		VERSION_CONFIG;
	};
	
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
