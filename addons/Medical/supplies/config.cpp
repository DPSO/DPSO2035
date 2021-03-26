#include "..\script_component.hpp"

class CfgPatches {

	class DPSO_Medical_Supplies {
		name = COMPONENT_NAME;
		addonRootClass = "DPSO_Medical";
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"a3_props_f_orange",
			"DPSO_medical"
		};
		units[] = {
			"DPSO_Item_FirstAid",
            "DPSO_Item_mopp",
			"DPSO_Item_MedicKit"
		};
		weapons[] = {
			"DPSO_FirstAid",
            "DPSO_mopp",
			"DPSO_MedicKit"
		};
		author = AUTHOR;
		authors[] = {
			"O. Jemineh"
		};
		url = URL;
		VERSION_CONFIG;
	};

};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
