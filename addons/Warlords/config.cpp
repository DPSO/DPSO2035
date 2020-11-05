#include "script_component.hpp"

class CfgPatches
{
	class DPSO_Warlords
	{
		author = AUTHOR;
		 name = COMPONENT_NAME;
		url = URL;
		units[] = {};
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
		version = DPSO_VERSION;
		authors[] = {"MitchJC"};
		weapons[] = {};
	};
};

class CfgWLRequisitionPresets
{
	#include "Presets\RHS_Presets.hpp"
	#include "Presets\RHS_Pacific_Presets.hpp"
};

#include "CfgRespawnTemplates.hpp"

class Params {
	#include "Params.hpp"
};

class CfgFunctions {

    #include "cfgFunctions.hpp"
};
