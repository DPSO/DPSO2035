class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class ACE_SelfActions {};
    };
    class Tank_F: Tank {
        class ACE_SelfActions: ACE_SelfActions {};
    };
    class APC_Tracked_01_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                condition = "true";
                displayName = "Intercom Channel";
                icon = "";
                statement = "";

                class TFAR_IntercomChannel_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
                    displayName = "Cargo";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
                };
                class TFAR_IntercomChannel_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    displayName = "Crew";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
                };
                class TFAR_IntercomChannel_disabled {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    displayName = "Disabled";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
                };
                class TFAR_IntercomChannel_Misc_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
                    displayName = "Misc channel 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
                };
                class TFAR_IntercomChannel_Misc_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
                    displayName = "Misc channel 2";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                class TFAR_IntercomChannel_Misc_3 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
                    displayName = "Misc channel 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            };
        };
    };

    class APC_Tracked_02_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                condition = "true";
                displayName = "Intercom Channel";
                icon = "";
                statement = "";

                class TFAR_IntercomChannel_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
                    displayName = "Cargo";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
                };
                class TFAR_IntercomChannel_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    displayName = "Crew";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
                };
                class TFAR_IntercomChannel_disabled {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    displayName = "Disabled";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
                };
                class TFAR_IntercomChannel_Misc_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
                    displayName = "Misc channel 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
                };
                class TFAR_IntercomChannel_Misc_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
                    displayName = "Misc channel 2";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                class TFAR_IntercomChannel_Misc_3 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
                    displayName = "Misc channel 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            };
        };
    };

    class APC_Tracked_03_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                condition = "true";
                displayName = "Intercom Channel";
                icon = "";
                statement = "";

                class TFAR_IntercomChannel_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
                    displayName = "Cargo";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
                };
                class TFAR_IntercomChannel_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    displayName = "Crew";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
                };
                class TFAR_IntercomChannel_disabled {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    displayName = "Disabled";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
                };
                class TFAR_IntercomChannel_Misc_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
                    displayName = "Misc channel 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
                };
                class TFAR_IntercomChannel_Misc_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
                    displayName = "Misc channel 2";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                class TFAR_IntercomChannel_Misc_3 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
                    displayName = "Misc channel 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            };
        };
    };

    class MBT_01_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {};
    };
    class B_MBT_01_base_F: MBT_01_base_F {
        class ACE_SelfActions: ACE_SelfActions {};
    };
    class B_MBT_01_cannon_F: B_MBT_01_base_F {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                condition = "true";
                displayName = "Intercom Channel";
                icon = "";
                statement = "";

                class TFAR_IntercomChannel_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
                    displayName = "Cargo";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
                };
                class TFAR_IntercomChannel_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    displayName = "Crew";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
                };
                class TFAR_IntercomChannel_disabled {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    displayName = "Disabled";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
                };
                class TFAR_IntercomChannel_Misc_1 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
                    displayName = "Misc channel 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
                };
                class TFAR_IntercomChannel_Misc_2 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
                    displayName = "Misc channel 2";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                class TFAR_IntercomChannel_Misc_3 {
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
                    displayName = "Misc channel 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            };
        };
    };
    class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;
		};

		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	#include "ServicingModule.hpp"

	class Rubber_duck_base_F;
    class B_Boat_Transport_01_F : Rubber_duck_base_F {
        class EventHandlers;
    };
    class dpso_mtc_portable_boat_boat : B_Boat_Transport_01_F {
        scope = 2;
        displayName = "Portable Boat";
        class assembleInfo {
            primary = 1;
            base = "";
            assembleTo = "";
            displayName = "";
            dissasembleTo[] = {"dpso_portable_boat_backpack"};
        };
        class EventHandlers : EventHandlers {
            class dpso_mtc_portable_boat {
                init = "(_this select 0) setDir (getDir (_this select 0) + 270)";
            };
        };
    };

    class Weapon_Bag_Base;
    class dpso_portable_boat_backpack : Weapon_Bag_Base {
        scope = 2;
        displayName = "Portable Boat Bag";
        picture = "\A3\Drones_F\Weapons_F_Gamma\ammoboxes\bags\data\ui\icon_B_C_UAV_rgr_ca";
        model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
        hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
        maximumLoad = 0;
        mass = 300; 
        mapSize = 0.6;
        class assembleInfo {
            primary = 1;
            base = "";
            assembleTo = "dpso_mtc_portable_boat_boat";
            displayName = "Portable Boat";
            dissasembleTo[] = {};
        };
    };

    class B_Heli_Light_01_F;
    class CLASS(Heli_I_MH6_Blue): B_Heli_Light_01_F {
        MACRO_AIRVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Pomigit, Jonpas";
        displayName = CSTRING(Heli_MH6_Blue);
        editorPreview = QPATHTOF(UI\Heli_MH6_Blue.jpg);
        crew = QCLASS(Unit_I_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\heli_mh6_blue_ext_co.paa)};
    };
    class CLASS(Heli_B_MH6_Blue): CLASS(Heli_I_MH6_Blue) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_PilotHeli);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class Offroad_01_base_F;
    class Offroad_01_unarmed_base_F: Offroad_01_base_F {
        class EventHandlers;
    };
    class CLASS(Offroad_I_Black): Offroad_01_unarmed_base_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "BadHabitz, Jonpas";
        displayName = CSTRING(Offroad_Black);
        editorPreview = QPATHTOF(UI\Offroad_Black.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\offroad_black_ext_co.paa),
            QPATHTOF(data\offroad_black_ext_co.paa)
        };
        transportMaxBackpacks = 6;

        animationList[] = {
            "HideBackpacks", 0.5,
            "HideBumper2", 0.5,
            "HideConstruction", 0.5,
            "HideDoor3", 0.5
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
        };
    };
    class CLASS(Offroad_B_Black): CLASS(Offroad_I_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class Offroad_01_military_base_F;
    class Offroad_01_armed_base_F: Offroad_01_military_base_F {
        class EventHandlers;
    };
    class CLASS(Offroad_I_Armed_Black): Offroad_01_armed_base_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "BadHabitz, Jonpas";
        displayName = CSTRING(Offroad_Armed_Black);
        editorPreview = QPATHTOF(UI\Offroad_Armed_Black.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\offroad_black_ext_co.paa),
            QPATHTOF(data\offroad_black_ext_co.paa)
        };
        transportMaxBackpacks = 6;

        animationList[] = {
            "HideBackpacks", 0.5,
            "HideBumper2", 0.5,
            "HideConstruction", 0.5,
            "HideDoor3", 0.5
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
        };
    };
    class CLASS(Offroad_B_Armed_Black): CLASS(Offroad_I_Armed_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class LSV_01_base_F;
    class LSV_01_unarmed_base_F: LSV_01_base_F {
        class EventHandlers;
    };
    class CLASS(Polaris_I_Black): LSV_01_unarmed_base_F {
        MACRO_LANDVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Kresky";
        displayName = CSTRING(Polaris_Black);
        editorPreview = QPATHTOF(UI\Polaris_Black.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_black_ext01_co.paa),
            QPATHTOF(data\polaris_black_ext02_co.paa),
            QPATHTOF(data\polaris_black_ext03_co.paa),
            QPATHTOF(data\polaris_black_adds_co.paa)
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
        };
    };
    class CLASS(Polaris_B_Black): CLASS(Polaris_I_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(Polaris_I_Tan): CLASS(Polaris_I_Black) {
        scope = 2;
        displayName = CSTRING(Polaris_Tan);
        editorPreview = QPATHTOF(UI\Polaris_Tan.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_tan_ext01_co.paa),
            QPATHTOF(data\polaris_tan_ext02_co.paa),
            QPATHTOF(data\polaris_tan_ext03_co.paa),
            QPATHTOF(data\polaris_tan_adds_co.paa)
        };
    };
    class CLASS(Polaris_B_Tan): CLASS(Polaris_I_Tan) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class B_T_LSV_01_unarmed_F;
    class CLASS(Polaris_I_Green): B_T_LSV_01_unarmed_F {
        MACRO_LANDVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Kresky";
        displayName = CSTRING(Polaris_Green);
        editorPreview = QPATHTOF(UI\Polaris_Green.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    };
    class CLASS(Polaris_B_Green): CLASS(Polaris_I_Green) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class LSV_01_armed_base_F: LSV_01_base_F {
        class EventHandlers;
    };
    class CLASS(Polaris_I_Armed_Black): LSV_01_armed_base_F {
        MACRO_LANDVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Kresky";
        displayName = CSTRING(Polaris_Armed_Black);
        editorPreview = QPATHTOF(UI\Polaris_Armed_Black.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_black_ext01_co.paa),
            QPATHTOF(data\polaris_black_ext02_co.paa),
            QPATHTOF(data\polaris_black_ext03_co.paa),
            QPATHTOF(data\polaris_black_adds_co.paa)
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
        };
    };
    class CLASS(Polaris_B_Armed_Black): CLASS(Polaris_I_Armed_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(Polaris_I_Armed_Tan): CLASS(Polaris_I_Armed_Black) {
        scope = 2;
        displayName = CSTRING(Polaris_Armed_Tan);
        editorPreview = QPATHTOF(UI\Polaris_Armed_Tan.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_tan_ext01_co.paa),
            QPATHTOF(data\polaris_tan_ext02_co.paa),
            QPATHTOF(data\polaris_tan_ext03_co.paa),
            QPATHTOF(data\polaris_tan_adds_co.paa)
        };
    };
    class CLASS(Polaris_B_Armed_Tan): CLASS(Polaris_I_Armed_Tan) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class B_T_LSV_01_armed_F;
    class CLASS(Polaris_I_Armed_Green): B_T_LSV_01_armed_F {
        MACRO_LANDVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Kresky";
        displayName = CSTRING(Polaris_Armed_Green);
        editorPreview = QPATHTOF(UI\Polaris_Armed_Green.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    };
    class CLASS(Polaris_B_Armed_Green): CLASS(Polaris_I_Armed_Green) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class LSV_01_AT_base_F: LSV_01_base_F {
        class EventHandlers;
    };
    class CLASS(Polaris_I_AT_Black): LSV_01_AT_base_F {
        MACRO_LANDVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Kresky";
        displayName = CSTRING(Polaris_AT_Black);
        editorPreview = QPATHTOF(UI\Polaris_AT_Black.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_black_ext01_co.paa),
            QPATHTOF(data\polaris_black_ext02_co.paa),
            QPATHTOF(data\polaris_black_ext03_co.paa),
            QPATHTOF(data\polaris_black_adds_co.paa),
            QPATHTOF(data\polaris_black_atlauncher_co.paa),
            QPATHTOF(data\polaris_black_attube_co.paa)
        };

        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
        };
    };
    class CLASS(Polaris_B_AT_Black): CLASS(Polaris_I_AT_Black) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class CLASS(Polaris_I_AT_Tan): CLASS(Polaris_I_AT_Black) {
        scope = 2;
        displayName = CSTRING(Polaris_AT_Tan);
        editorPreview = QPATHTOF(UI\Polaris_AT_Tan.jpg);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\polaris_tan_ext01_co.paa),
            QPATHTOF(data\polaris_tan_ext02_co.paa),
            QPATHTOF(data\polaris_tan_ext03_co.paa),
            QPATHTOF(data\polaris_tan_adds_co.paa),
            QPATHTOF(data\polaris_tan_atlauncher_co.paa),
            QPATHTOF(data\polaris_tan_attube_co.paa)
        };
    };
    class CLASS(Polaris_B_AT_Tan): CLASS(Polaris_I_AT_Tan) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };

    class B_T_LSV_01_AT_F;
    class CLASS(Polaris_I_AT_Green): B_T_LSV_01_AT_F {
        MACRO_LANDVEHICLE_CARGO
        dlc = QUOTE(PREFIX);
        scope = 2;
        forceInGarage = 1;
        side = 2;
        faction = QCLASS(IND);
        author = "Kresky";
        displayName = CSTRING(Polaris_AT_Green);
        editorPreview = QPATHTOF(UI\Polaris_AT_Green.jpg);
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Engineer)};
    };
    class CLASS(Polaris_B_AT_Green): CLASS(Polaris_I_AT_Green) {
        scope = 2;
        forceInGarage = 0;
        side = 1;
        faction = "DPSO_Faction";
        crew = QCLASS(Unit_B_Contractor);
        typicalCargo[] = {QCLASS(Unit_B_Engineer)};
    };
};
