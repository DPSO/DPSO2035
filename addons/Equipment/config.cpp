#include "script_component.hpp"

class CfgPatches
{
	class DPSO_Equipment
	{
		author = AUTHOR;
        name = COMPONENT_NAME;
		url = URL;
		units[] = {
            "DPSO_Item_Vector_Designator",
            "DPSO_Item_optic_Nightstalker",
            "DPSO_Item_optic_AMS",
            "DPSO_Item_optic_AMS_khk",
            "DPSO_Item_optic_AMS_snd",
            "DPSO_Item_optic_AMSTI",
            "DPSO_Item_optic_AMSTI_khk",
            "DPSO_Item_optic_AMSTI_snd"
        };
        weapons[] = {
            "DPSO_Vector_Designator",
            "DPSO_optic_Nightstalker",
            "DPSO_optic_AMS_base",
            "DPSO_optic_AMS",
            "DPSO_optic_AMS_khk",
            "DPSO_optic_AMS_snd",
            "DPSO_optic_AMSTI_base",
            "DPSO_optic_AMSTI",
            "DPSO_optic_AMSTI_khk",
            "DPSO_optic_AMSTI_snd"
        };
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
            "A3_UI_F",
            "cba_main",
            "cba_xeh",
            "ace_vector",
            "A3_Weapons_F",
            "cba_jr"
        };
		version = VERSION;
		authors[] = {"MitchJC"};
	};
};

class CfgFunctions {

    #include "cfgFunctions.hpp"
};

#include "cfg3Den.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "jr_classes.hpp"
#include "RscInGameUI.hpp"
#include "CfgEventHandlers.hpp"


class Extended_InitPost_EventHandlers {
    class ReammoBox_F {
        class Storage_MedicalSupplies {
            init = "[_this select 0] call DPSO_fnc_MedicalSupplies";
        };
        class Storage_Ammobox {
            init = "[_this select 0] call DPSO_fnc_Ammobox";
        };
    };
    class Car {
        class Car_MedicalSupplies {
            init = "[_this select 0] call DPSO_fnc_MedicalSupplies";
        };
        class Car_Ammobox {
            init = "[_this select 0] call DPSO_fnc_Ammobox";
        };
    };
    class Tank {
        class Tank_MedicalSupplies {
            init = "[_this select 0] call DPSO_fnc_MedicalSupplies";
        };
        class Tank_Ammobox {
            init = "[_this select 0] call DPSO_fnc_Ammobox";
        };
    };
    class Motorcycle {
        class Motorcycle_MedicalSupplies {
            init = "[_this select 0] call DPSO_fnc_MedicalSupplies";
        };
        class Motorcycle_Ammobox {
            init = "[_this select 0] call DPSO_fnc_Ammobox";
        };
    };
    class Helicopter {
        class Helicopter_MedicalSupplies {
            init = "[_this select 0] call DPSO_fnc_MedicalSupplies";
        };
        class Helicopter_Ammobox {
            init = "[_this select 0] call DPSO_fnc_Ammobox";
        };
    };
    class Plane {
        class Plane_MedicalSupplies {
            init = "[_this select 0] call DPSO_fnc_MedicalSupplies";
        };
        class Plane_Ammobox {
            init = "[_this select 0] call DPSO_fnc_Ammobox";
        };
    };
    class Ship_F {
        class Ship_MedicalSupplies {
            init = "[_this select 0] call DPSO_fnc_MedicalSupplies";
        };
        class Ship_Ammobox {
            init = "[_this select 0] call DPSO_fnc_Ammobox";
        };
    };
};
