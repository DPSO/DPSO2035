#include "..\script_component.hpp"

class CfgPatches {
	
	class DPSO_Medical_Crates {
		name = "$STR_DPSO_Medical_Crates_Title";
		addonRootClass = "DPSO_Medical";
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {
			"DPSO_medical"
		};
		units[] = {
			"DPSO_Crate_Medical_Default",
			"DPSO_Crate_Medical_Equipment",
			"DPSO_Crate_Medical_Dressing",
			"DPSO_Crate_Medical_Medicine",
			"DPSO_Crate_Medical_Transfusion",
			"DPSO_Crate_Medical_TransfusionEx",
			"DPSO_Crate_Medical_Ordnance",
			"DPSO_Crate_Medical_Supplies"
		};
		weapons[] = {};
		author = "$STR_DPSO_Medical_Crates_Author";
		authors[] = {
			"O. Jemineh"
		};
		url = URL;
		VERSION_CONFIG;
	};
	
};

#include "CfgVehicleIcons.hpp"
#include "CfgVehicles.hpp"
