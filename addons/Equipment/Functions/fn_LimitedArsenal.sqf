/*
Function: DPSO_fnc_LimitedArsenal

Description:
	Fills an Ammobox with predefined equipment dependent on _Type. Each Ammobox can be a
	different type and have a different duration.  This function is almost identical to
	DPSO_fnc_Arsenal, only the items in the container change.

Arguments:
	_object - Object the Ammobox is applied to.  <OBJECT>
	_type- Type of Ammobox, can be "VANILLA", "RHS" or "Aegis". <STRING>
	_Duration- How long in minutes until the Ammobox is removed. 0 makes it permanent. <SCALAR>

Examples:
	(begin example)
		[this] call DPSO_fnc_LimitedArsenal;
		[this, "Aegis", 50] call DPSO_fnc_LimitedArsenal;
		[this, "VANILLA"] call DPSO_fnc_LimitedArsenal;
		[MyAmmoCrate, "RHS", 0] call DPSO_fnc_LimitedArsenal;
	(end)

Author:
	MitchJC
*/

if (!isServer) exitwith {};

params [
	"_object",
	["_Type", "Vanilla"],
	["_Duration", 0]
];

call {
	if (_Type isEqualto 0) exitwith {_Type = "Vanilla"};
	if (_Type isEqualto 1) exitwith {_Type = "Aegis"};
	if (_Type isEqualto 2) exitwith {_Type = "RHS"};
};

if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
	[_object, false] call ace_arsenal_fnc_initBox;
} else {
	["AmmoboxInit", [_object, false]] call BIS_fnc_arsenal;
};

private [
	"_AvailableItems", "_AvailableHeadgear", "_AvailableGoggles",
	"_AvailableUniforms", "_AvailableVests", "_AvailableBackpacks",
	"_AvailableAttachments", "_AvailableMagazines", "_AvailableWeapons"
];

call {
	if (_Type isEqualTo "Vanilla") exitwith {
		_AvailableItems = [
			"ItemWatch",
			"ItemCompass",
            "ACRE_PRC148",
			"ItemGPS",
			"ItemRadio",
			"ItemMap",
			"NVGoggles",
			"FirstAidKit",
			"Medikit",
			"ToolKit",
			"MineDetector",
			"B_UavTerminal"

		];

		_AvailableMagazines = [
			"Laserbatteries",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_556x45_Stanag_red",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"20Rnd_650x39_Cased_Mag_F",
			"30Rnd_65x39_caseless_mag_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"10Rnd_762x54_Mag",
			"20Rnd_762x51_Mag",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"150Rnd_762x51_Box",
			"130Rnd_338_Mag",
			"10Rnd_338_Mag",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"10Rnd_93x64_DMR_05_Mag",
			"5Rnd_127x108_Mag",
			"7Rnd_408_Mag",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"DemoCharge_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"RPG32_HE_F",
			"Titan_AT",
			"Titan_AA"
		];

		_AvailableHeadGear = [];
		_AvailableGoggles = [];
		_AvailableUniforms = [];
		_AvailableVests = [];
		_AvailableAttachments = [];
		_AvailableWeapons = [];
		_AvailableBackpacks = [];
	};

if (_Type isEqualTo "ACETFAR") exitwith {
		_AvailableItems = [
			"ItemWatch",
            "ACRE_PRC148",
			"ItemCompass",
			"ItemGPS",
			"ItemRadio",
			"ItemMap",
			"NVGoggles",
			"FirstAidKit",
			"Medikit",
			"ToolKit",
			"MineDetector",
			"B_UavTerminal",
			"ACE_elasticBandage",
            "ACE_packingBandage",
            "ACE_quikclot",
            "ACE_bloodIV_500",
            "ACE_epinephrine",
            "ACE_morphine",
            "ACE_tourniquet",
            "ACE_CableTie",
            "ACE_IR_Strobe_Item",
            "optic_NVS"
		];

		_AvailableMagazines = [
			"Laserbatteries",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_556x45_Stanag_red",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"20Rnd_650x39_Cased_Mag_F",
			"30Rnd_65x39_caseless_mag_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"10Rnd_762x54_Mag",
			"20Rnd_762x51_Mag",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"150Rnd_762x51_Box",
			"130Rnd_338_Mag",
			"10Rnd_338_Mag",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"10Rnd_93x64_DMR_05_Mag",
			"5Rnd_127x108_Mag",
			"7Rnd_408_Mag",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"DemoCharge_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"RPG32_HE_F",
			"Titan_AT",
			"Titan_AA"
		];

		_AvailableHeadGear = [];
		_AvailableGoggles = [];
		_AvailableUniforms = [];
		_AvailableVests = [];
		_AvailableAttachments = [];
		_AvailableWeapons = [
			"ACE_VMH3",
			"ACE_VMM3"
		];
		_AvailableBackpacks = [];
	};

if (_type isEqualTo "Aegis") exitwith {
	    _AvailableItems = [
            "ACE_elasticBandage",
            "ACE_packingBandage",
            "ACRE_PRC148",
            "ACE_quikclot",
            "ACE_bloodIV_500",
            "ACE_epinephrine",
            "ACE_morphine",
            "ACE_tourniquet",
            "ACE_CableTie",
            "ACE_IR_Strobe_Item",
            "optic_NVS"
        ];

		_AvailableMagazines = [
            "UKAegis_BAF_SmokeShell",
            "HandGrenade",
            "DemoCharge_Remote_Mag",
            "UKAegis_BAF_556_30Rnd_T",
            "UKAegis_BAF_556_200Rnd_T",
            "UKAegis_BAF_762_L42A1_20Rnd_T",
            "UKAegis_BAF_1Rnd_HEDP_Grenade_Shell",
            "UKAegis_BAF_1Rnd_60mm_Mo_Shells",
			"UKAegis_BAF_9_13Rnd",
			"UKAegis_BAF_9_15Rnd",
			"UKAegis_BAF_9_17Rnd",
            "Laserbatteries",
			"ACE_Chemlight_HiOrange",
			"ACE_Chemlight_HiRed",
			"ACE_Chemlight_HiWhite",
			"ACE_Chemlight_HiYellow",
			"ACE_Chemlight_IR",
			"ACE_Chemlight_Orange",
			"Chemlight_red",
			"ACE_Chemlight_White",
			"Chemlight_yellow"
		];

		_AvailableWeapons = [
			"ACE_VMH3",
			"ACE_VMM3",
            "UKAegis_BAF_M6",
            "UKAegis_BAF_Javelin_Slung_Tube",
            "UKAegis_BAF_NLAW_Launcher",
            "UKAegis_BAF_AT4_CS_AT_Launcher",
            "UKAegis_BAF_Javelin_CLU"
		];

		_AvailableHeadGear = [];
		_AvailableGoggles = [];
		_AvailableUniforms = [];
		_AvailableVests = [];
		_AvailableAttachments = [];
		_AvailableBackpacks = [];
	};

if (_type isEqualTo "RHS") exitwith {
	    _AvailableItems = [];


		_AvailableMagazines = [
			"sps_aimpoint_T1_Black",
            "SPS_HKG3PMAG_30Rnd_556x45_B",
            "16Rnd_9x21_Mag",
            "ACRE_PRC148",
            "acc_flashlight",
            "hgun_P07_F",
            "acc_pointer_IR",
            "ACE_acc_pointer_green",
            "SPS_hk416_14_5_afg_black_f",
            "H_HelmetB_light_black",
            "dpso_U_CombatUniformB",
            "dpso_Item_Vest_PlateCarrier3_brn",
            "DPSO_Kitbag_01_BLACK",
            "G_Shades_Black",
            "NVGogglesB_blk_F",
            "Binocular",
            "ItemMap",
            "ItemCompass",
            "TFAR_rf7800str",
            "ItemWatch",
            "ACE_Chemlight_UltraHiOrange",
            "B_IR_Grenade",
            "ACE_Chemlight_IR",
            "MS_Strobe_Mag_1",
            "kat_Painkiller",
            "ACE_SpraypaintBlack",
            "ACE_fieldDressing",
            "ACE_CableTie",
            "AMP_Door_Wedge",
            "ACE_EarPlugs",
            "DPSO_FirstAid",
            "ACE_Flashlight_MX991",
            "ACE_MapTools",
            "KNB_Notebook",
            "ACE_tourniquet",
            "DPSO_WeaponCard",
            "DPSO_ClothingCard",
            "dpso_U_CombatUniformB",
            "dpso_Item_Vest_PlateCarrierFull_Black",
            "dpso_Kitbag_01_BLACK",
            "rhs_ess_black",
            "rhs_googles_black",
            "rhs_mag_m69",
            "rhs_mag_m67",
            "rhs_mag_m18_yellow",
            "rhs_mag_m18_red",
            "rhs_mag_m18_purple",
            "rhs_mag_m18_green",
            "ACE_SpraypaintBlue",
            "ACE_SpraypaintGreen",
            "ACE_SpraypaintRed"
		];

		_AvailableWeapons = [
		];

		_AvailableHeadGear = [];
		_AvailableGoggles = [];
		_AvailableUniforms = [];
		_AvailableVests = [];
		_AvailableAttachments = [];
		_AvailableWeapons = [];
		_AvailableBackpacks = [];
	};
};


if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {
	[_object, _AvailableHeadGear, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableGoggles, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableUniforms, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableVests, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableItems, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableAttachments, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableWeapons, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableBackpacks, true] call ace_arsenal_fnc_addVirtualItems;
	[_object, _AvailableMagazines, true] call ace_arsenal_fnc_addVirtualItems;
} else {
	[_object, _AvailableHeadGear, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableGoggles, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableUniforms, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableVests, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableItems, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableAttachments, true] call BIS_fnc_addVirtualItemCargo;
	[_object, _AvailableWeapons, true] call BIS_fnc_addVirtualWeaponCargo;
	[_object, _AvailableBackpacks, true] call BIS_fnc_addVirtualBackpackCargo;
	[_object, _AvailableMagazines, true] call BIS_fnc_addVirtualMagazineCargo;
};

{
	_x addCuratorEditableObjects [[_object], false];
} forEach allCurators;



_handle = [
	{
		(_this select 0) params ["_object", "_duration"];

		if (_duration == 0) exitwith {
			[_handle] call CBA_fnc_removePerFrameHandler;
		};

		if (time > (_duration * 60)) exitwith {
			deletevehicle _object;
			[_handle] call CBA_fnc_removePerFrameHandler;
		};

	}, 60, [_object, _duration]
] call CBA_fnc_addPerFrameHandler;


