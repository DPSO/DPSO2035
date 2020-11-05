#include "script_component.hpp"

class CfgPatches
{
	class dpso_rankrole
	{
		name = COMPONENT_NAME;
		requiredAddons[] = {
			"ace_medical_engine"
		};
		units[] = {};
		weapons[] = {};
		author = AUTHOR;
		authors[] = {
			"YonV"
		};
		url = URL;
	};
};

class CfgFunctions {
	class dpso_rankrole {

		tag = "dpso_rankrole";
		class RankRole {

			file = "z\dpso\addons\rankrole\Functions";
			class rankrole {postInit = 1;};
		};
	};
	class dpso_drongo {

		tag = "dpso_drongo";
		class RankRole {

			file = "z\dpso\addons\rankrole\Functions";
			class drongo;
		};
	};
};

class Extended_PreInit_EventHandlers {
	dpsorankrole = "call compile preprocessFileLineNumbers 'z\dpso\addons\rankrole\XEH_preInit.sqf'";
};
class Extended_PostInit_EventHandlers {
	dpsorankrole = "call dpso_rankrole_fnc_rankrole";
};
