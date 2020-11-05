#include "script_component.hpp"



class CfgPatches
{
	class ADDON
	{
		author = AUTHOR;
		name = COMPONENT_NAME;
		url = URL;
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {
			"dpso_MAIN"
		};
		units[] = {};
		weapons[] = {};
		authors[] = {
			"YonV"
		};
		version = DPSO_VERSION;
	};
};
class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class B_Heli_Transport_03_unarmed_F;
	class CLASS(B_Heli_Medevac_031_F): B_Heli_Transport_03_unarmed_F
	{
		author = AUTHOR;
		_generalMacro="Heli_Transport_03_base_F";
		displayName="Huron MedEvac (Unarmed)"; /// how is the heli displayed in editor
		vehicleClass = "Air";
		faction="BLU_CTRG_F" ;
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		attendant=1;
		armor = 500;
		crewCrashProtection = 0.03;
		pilotLight = false;
		icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";	/// icon in map/editor
		picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";	/// small picture in command menu
		threat[]={.2,.2,.2};
		soundEngine[] = {"",.7,.7};
		irTarget = false;
		class EventHandlers
		{
			init = "this setVariable ['ace_medical_medicClass',1];";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\Heli_Transport_03_ext01_md.paa),
			QPATHTOF(data\Heli_Transport_03_ext02_md.paa)
		};
		textureList[]=
		{
			"med1",
			1
		};
	};


	class CLASS(B_Heli_Medevac_03daz_F): B_Heli_Transport_03_unarmed_F
		{
			author = AUTHOR;
			_generalMacro="Heli_Transport_03_base_F";
			displayName="Huron MedEvac (Sand Unarmed)"; /// how is the heli displayed in editor
			vehicleClass = "Air";
			faction="BLU_CTRG_F" ;
			crew="B_Helipilot_F";
			typicalCargo[]=
			{
				"B_Soldier_F"
			};
			side=1;
			scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			attendant=1;
			armor = 500;
			crewCrashProtection = 0.03;
			pilotLight = false;
			icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";	/// icon in map/editor
			picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";	/// small picture in command menu
			threat[]={.2,.2,.2};
		soundEngine[] = {"",.7,.7};
			irTarget = false;
			class EventHandlers
			{
				init = "this setVariable ['ace_medical_medicClass',1];";
				class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			};
			hiddenSelectionsTextures[]=
			{
				QPATHTOF(data\Heli_Transport_03_ext01_daz_med.paa),
				QPATHTOF(data\Heli_Transport_03_ext02_daz_med.paa)
			};
			textureList[]=
			{
				"med1",
				1
			};
		};


	class CLASS(B_Heli_Medevac_03dazt_F): B_Heli_Transport_03_unarmed_F
		{
			author = AUTHOR;
			_generalMacro="Heli_Transport_03_base_F";
			displayName="Huron MedEvac (Tropic Unarmed)"; /// how is the heli displayed in editor
			vehicleClass = "Air";
			faction="BLU_CTRG_F" ;
			crew="B_Helipilot_F";
			typicalCargo[]=
			{
				"B_Soldier_F"
			};
			side=1;
			scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			attendant=1;
			armor = 500;
			crewCrashProtection = 0.03;
			pilotLight = false;
			icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";	/// icon in map/editor
			picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";	/// small picture in command menu
			threat[]={.2,.2,.2};
		soundEngine[] = {"",.7,.7};
			irTarget = false;
			class EventHandlers
			{
				init = "this setVariable ['ace_medical_medicClass',1];";
				class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			};
			hiddenSelectionsTextures[]=
			{
				QPATHTOF(data\Heli_Transport_03_ext01_dazt_med.paa),
				QPATHTOF(data\Heli_Transport_03_ext02_dazt_med.paa)
			};
			textureList[]=
			{
				"med1",
				1
			};
		};

		////////////////////////////////////////////////////////
	class B_Heli_Transport_03_F;
	class CLASS(B_Heli__03daz_F): B_Heli_Transport_03_F
		{
			author = AUTHOR;
			_generalMacro="Heli_Transport_03_base_F";
			displayName="Huron (Sand)"; /// how is the heli displayed in editor
			vehicleClass = "Air";
			faction="BLU_CTRG_F" ;
			crew="B_Helipilot_F";
			typicalCargo[]=
			{
				"B_Soldier_F"
			};
			side=1;
			scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			attendant=1;
			armor = 500;
			crewCrashProtection = 0.03;
			pilotLight = false;
			icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";	/// icon in map/editor
			picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";	/// small picture in command menu
			threat[]={.2,.2,.2};
		soundEngine[] = {"",.7,.7};
			irTarget = false;
			class EventHandlers
			{
				class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			};
			hiddenSelectionsTextures[]=
			{
				QPATHTOF(data\cow\Heli_Transport_03_ext01_md_dpso_cow.paa),
				QPATHTOF(data\cow\Heli_Transport_03_ext02_md_dpso_cow.paa)
			};
			textureList[]=
			{
				"med1",
				1
			};
		};
	class CLASS(B_Heli__03dazt_F): B_Heli_Transport_03_F
		{
			author = AUTHOR;
			_generalMacro="Heli_Transport_03_base_F";
			displayName="Huron (Tropic)"; /// how is the heli displayed in editor
			vehicleClass = "Air";
			faction="BLU_CTRG_F" ;
			crew="B_Helipilot_F";
			typicalCargo[]=
			{
				"B_Soldier_F"
			};
			side=1;
			scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			attendant=1;
			armor = 500;
			crewCrashProtection = 0.03;
			pilotLight = false;
			icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";	/// icon in map/editor
			picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";	/// small picture in command menu
			threat[]={.2,.2,.2};
		soundEngine[] = {"",.7,.7};
			irTarget = false;
			class EventHandlers
			{
				class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			};
			hiddenSelectionsTextures[]=
			{
				QPATHTOF(data\cow\Heli_Transport_03_ext01_md_t_dpso_cow.paa),
				QPATHTOF(data\cow\Heli_Transport_03_ext02_md_t_dpso_cow.paa)
			};
			textureList[]=
			{
				"med1",
				1
			};
		};


		///////////////////////////////////////////////////////////////////

	class B_Heli_Transport_01_F;
	class CLASS(B_Heli_Transport_01_F_Sand): B_Heli_Transport_01_F
		{
			author = AUTHOR;
			_generalMacro="B_Heli_Transport_01_F";
			displayName="GhostHawk(Sand)"; /// how is the heli displayed in editor
			vehicleClass = "Air";
			faction="BLU_CTRG_F" ;
			crew="B_Helipilot_F";
			typicalCargo[]=
			{
				"B_Soldier_F"
			};
			side=1;
			scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			attendant=1;
			armor = 250;
			audible = 30;
			radarTargetSize = 0.55;
			maxSpeed = 360;
			crewCrashProtection = 0.03;
			pilotLight = false;
			threat[]={.2,.2,.2};
		soundEngine[] = {"",.7,.7};
			irTarget = false;
			class EventHandlers
			{
				class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			};
			hiddenSelectionsTextures[]=
			{
				QPATHTOF(data\cow\heli_transport_01_ext01_sand_co_dpso_cow.paa),
				QPATHTOF(data\cow\heli_transport_01_ext02_sand_co_dpso_cow.paa)
			};
			textureList[]=
			{
				"sand1",
				1
			};
		};
	class CLASS(B_Heli_Transport_01_F_Tropic): B_Heli_Transport_01_F
	{
		author = AUTHOR;
		_generalMacro="B_Heli_Transport_01_F";
		displayName="GhostHawk(Tropic)"; /// how is the heli displayed in editor
		vehicleClass = "Air";
		faction="BLU_CTRG_F" ;
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		attendant=1;
		armor = 250;
		audible = 30;
		radarTargetSize = 0.55;
		maxSpeed = 360;
		crewCrashProtection = 0.03;
		pilotLight = false;
		threat[]={.2,.2,.2};
		soundEngine[] = {"",.7,.7};
		irTarget = false;
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\cow\heli_transport_01_ext01_tropic_co_dpso_cow.paa),
			QPATHTOF(data\cow\heli_transport_01_ext02_tropic_co_dpso_cow.paa)
		};
		textureList[]=
		{
			"sand1",
			1
		};
	};
	///////////////////////
	class CLASS(B_Heli_Transport_01_F_medic): B_Heli_Transport_01_F
	{
		author = AUTHOR;
		_generalMacro="B_Heli_Transport_01_F";
		displayName="GhostHawk(MedEvac)"; /// how is the heli displayed in editor
		vehicleClass = "Air";
		faction="BLU_CTRG_F" ;
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		scope = 2;         // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;  // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		attendant=1;
		armor = 250;
		audible = 30;
		radarTargetSize = 0.55;
		maxSpeed = 360;
		crewCrashProtection = 0.03;
		pilotLight = false;
		threat[]={.2,.2,.2};
		soundEngine[] = {"",.7,.7};
		irTarget = false;
		class EventHandlers
			{
				init = "this setVariable ['ace_medical_medicClass',1];";
				class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
			};

		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\heli_medevac_01b_ext_co.paa),
			QPATHTOF(data\heli_medevac_01_ext02_co.paa)
		};
		textureList[]=
		{
			"sand1",
			1
		};
	};


};
