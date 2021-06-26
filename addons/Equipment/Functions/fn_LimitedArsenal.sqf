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
	["_Type", "DPSO"],
	["_Duration", 0]
];

call {
	if (_Type isEqualto 0) exitwith {_Type = "DPSO"};
	if (_Type isEqualto 1) exitwith {_Type = "Winter"};
	if (_Type isEqualto 2) exitwith {_Type = "UnderCover"};
    if (_Type isEqualto 3) exitwith {_Type = "RHS"};
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
	if (_Type isEqualTo "DPSO") exitwith {
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
        _AvailableItems = [
            "kat_X_AED",
            "ItemcTab",
            "ItemAndroid",
            "ItemcTabHCam",
            "ItemMicroDAGR",
            "DPSO_mopp",
            "ALIVE_Tablet",
            "kat_aatKit",
            "kat_accuvac",
            "ACE_adenosine",
            "kat_AED",
            "ACE_fieldDressing",
            "ACE_elasticBandage",
            "ACE_packingBandage",
            "ACE_quikclot",
            "kat_crossPanel",
            "kat_bloodIV_O",
            "kat_bloodIV_A",
            "kat_bloodIV_AB",
            "kat_bloodIV_B",
            "kat_bloodIV_A_250",
            "kat_bloodIV_O_250",
            "kat_bloodIV_AB_250",
            "kat_bloodIV_B_250",
            "kat_bloodIV_O_500",
            "kat_bloodIV_A_500",
            "kat_bloodIV_AB_500",
            "kat_bloodIV_B_500",
            "ACE_bodyBag",
            "DPSO_FirstAid",
            "kat_chestSeal",
            "DPSO_MedicArea",
            "ACE_epinephrine",
            "DPSO_MedicKit",
            "ACE_morphine",
            "kat_Pulseoximeter",
            "ACE_plasmaIV",
            "ACE_plasmaIV_250",
            "ACE_plasmaIV_500",
            "ACE_personalAidKit",
            "ACE_salineIV",
            "ACE_salineIV_250",
            "ACE_salineIV_500",
            "DPSO_Stethoscope",
            "ACE_surgicalKit",
            "ACE_tourniquet",
            "ACE_splint",
            "DPSO_optic_Nightstalker",
            "kat_Painkiller",
            "kat_larynx",
            "kat_guedel",
            "Laserbatteries",
            "ACE_UAVBattery",
            "ACE_Flashlight_XL50",
            "ItemMap",
            "ItemCompass",
            "ACE_Altimeter",
            "ChemicalDetector_01_watch_F",
            "ItemWatch",
            "B_UavTerminal",
            "C_UavTerminal",
            "ACE_RangeTable_82mm",
            "ACE_artilleryTable",
            "ACE_ATragMX",
            "ACE_CableTie",
            "ACE_DefusalKit",
            "AMP_Door_Wedge",
            "ACE_EarPlugs",
            "ACE_EntrenchingTool",
            "ACE_DAGR",
            "ACE_Flashlight_MX991",
            "ACE_HuntIR_monitor",
            "ACE_IR_Strobe_Item",
            "ACE_Kestrel4500",
            "ACE_Flashlight_KSF1",
            "ACE_M26_Clacker",
            "ACE_Clacker",
            "ACE_MapTools",
            "ACE_microDAGR",
            "MineDetector",
            "ACE_RangeCard",
            "ACE_Sandbag_empty",
            "ToolKit",
            "ACE_SpottingScope",
            "ACE_SpraypaintBlack",
            "ACE_SpraypaintBlue",
            "ACE_SpraypaintGreen",
            "ACE_SpraypaintRed",
            "ACE_wirecutter",
            "ACE_Tripod",
            "ACE_Chemlight_Shield",
            "TFAR_anprc152",
            "TFAR_rf7800str"
        ];
        _AvailableHeadgear = [];
        _AvailableGoggles = [];
        _AvailableUniforms = [];
        _AvailableVests = [];
        _AvailableBackpacks = [];
        _AvailableAttachments = [];
        _AvailableMagazines = [
            "200Rnd_556x45_Box_F",
            "200Rnd_556x45_Box_Red_F",
            "200Rnd_556x45_Box_Tracer_F",
            "200Rnd_556x45_Box_Tracer_Red_F",
            "rhsusf_200Rnd_556x45_box",
            "rhsusf_200rnd_556x45_mixed_box",
            "rhsusf_200rnd_556x45_M855_box",
            "rhsusf_200rnd_556x45_M855_mixed_box",
            "rhsusf_200Rnd_556x45_soft_pouch",
            "rhsusf_200Rnd_556x45_mixed_soft_pouch",
            "rhsusf_200Rnd_556x45_soft_pouch_ucp",
            "rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp",
            "rhsusf_200Rnd_556x45_soft_pouch_coyote",
            "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",
            "rhsusf_200Rnd_556x45_M855_soft_pouch",
            "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",
            "rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",
            "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",
            "rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",
            "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",
            "rhsusf_100Rnd_556x45_soft_pouch",
            "rhsusf_100Rnd_556x45_mixed_soft_pouch",
            "rhsusf_100Rnd_556x45_soft_pouch_ucp",
            "rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp",
            "rhsusf_100Rnd_556x45_soft_pouch_coyote",
            "rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote",
            "rhsusf_100Rnd_556x45_M855_soft_pouch",
            "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch",
            "rhsusf_100Rnd_556x45_M855_soft_pouch_ucp",
            "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp",
            "rhsusf_100Rnd_556x45_M855_soft_pouch_coyote",
            "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote",
            "rhsusf_100Rnd_556x45_M995_soft_pouch",
            "rhsusf_100Rnd_556x45_M995_soft_pouch_ucp",
            "rhsusf_100Rnd_556x45_M995_soft_pouch_coyote",
            "rhsusf_100Rnd_556x45_M200_soft_pouch",
            "rhsusf_100Rnd_556x45_M200_soft_pouch_ucp",
            "rhsusf_100Rnd_556x45_M200_soft_pouch_coyote",
            "ACE_200Rnd_556x45_Box_green",
            "ACE_200Rnd_556x45_Box_tracer_green",
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "30Rnd_556x45_Stanag_red",
            "30Rnd_556x45_Stanag_green",
            "30Rnd_556x45_Stanag_Sand",
            "30Rnd_556x45_Stanag_Sand_green",
            "30Rnd_556x45_Stanag_Sand_red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "rhs_mag_20Rnd_556x45_M193_Stanag",
            "rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",
            "rhs_mag_20Rnd_556x45_M200_Stanag",
            "rhs_mag_20Rnd_556x45_M855_Stanag",
            "rhs_mag_20Rnd_556x45_M855A1_Stanag",
            "rhs_mag_20Rnd_556x45_Mk262_Stanag",
            "rhs_mag_20Rnd_556x45_M193_2MAG_Stanag",
            "rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_Stanag",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Pull",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Ranger",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_Mk318_Stanag",
            "rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull",
            "rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",
            "rhs_mag_30Rnd_556x45_Mk262_Stanag",
            "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull",
            "rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",
            "rhs_mag_30Rnd_556x45_M193_Stanag",
            "rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M200_Stanag",
            "rhs_mag_30Rnd_556x45_M855A1_EPM",
            "rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",
            "rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger",
            "rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red",
            "rhs_mag_30Rnd_556x45_Mk318_SCAR",
            "rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull",
            "rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_PMAG",
            "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",
            "rhs_mag_30Rnd_556x45_Mk318_PMAG",
            "rhs_mag_30Rnd_556x45_Mk262_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_PMAG_Tan",
            "rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red",
            "rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",
            "rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan",
            "ACE_30Rnd_556x45_Stanag_M995_AP_mag",
            "ACE_30Rnd_556x45_Stanag_Mk262_mag",
            "ACE_30Rnd_556x45_Stanag_Mk318_mag",
            "ACE_30Rnd_556x45_Stanag_Tracer_Dim",
            "rhs_mag_100Rnd_556x45_M855A1_cmag",
            "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",
            "rhs_mag_100Rnd_556x45_M855_cmag",
            "rhs_mag_100Rnd_556x45_M855_cmag_mixed",
            "rhs_mag_100Rnd_556x45_Mk318_cmag",
            "rhs_mag_100Rnd_556x45_Mk262_cmag",
            "1Rnd_HE_Grenade_shell",
            "UGL_FlareWhite_F",
            "UGL_FlareGreen_F",
            "UGL_FlareRed_F",
            "UGL_FlareYellow_F",
            "UGL_FlareCIR_F",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeRed_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeYellow_Grenade_shell",
            "1Rnd_SmokePurple_Grenade_shell",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell",
            "ACE_HuntIR_M203",
            "rhs_mag_M441_HE",
            "rhs_mag_M433_HEDP",
            "rhs_mag_M781_Practice",
            "rhs_mag_M397_HET",
            "rhs_mag_m4009",
            "rhs_mag_m576",
            "rhs_mag_M585_white",
            "rhs_mag_m661_green",
            "rhs_mag_m662_red",
            "rhs_mag_m713_Red",
            "rhs_mag_m714_White",
            "rhs_mag_m715_Green",
            "rhs_mag_m716_yellow",
            "ACE_40mm_Flare_white",
            "ACE_40mm_Flare_red",
            "ACE_40mm_Flare_green",
            "ACE_40mm_Flare_ir",
            "150Rnd_93x64_Mag",
            "ACE_150Rnd_93x64_Mag_red",
            "ACE_150Rnd_93x64_Mag_yellow",
            "150Rnd_556x45_Drum_Mag_F",
            "150Rnd_556x45_Drum_Mag_Tracer_F",
            "150Rnd_556x45_Drum_Sand_Mag_F",
            "150Rnd_556x45_Drum_Sand_Mag_Tracer_F",
            "150Rnd_556x45_Drum_Green_Mag_F",
            "150Rnd_556x45_Drum_Green_Mag_Tracer_F",
            "ACE_150Rnd_556x45_Drum_green",
            "ACE_150Rnd_556x45_Drum_yellow",
            "ACE_150Rnd_556x45_Drum_tracer_green",
            "ACE_150Rnd_556x45_Drum_tracer_yellow",
            "20Rnd_762x51_Mag",
            "ACE_20Rnd_762x51_Mag_Tracer",
            "ACE_20Rnd_762x51_Mag_Tracer_Dim",
            "ACE_20Rnd_762x51_Mag_SD",
            "ACE_10Rnd_762x51_M118LR_Mag",
            "ACE_10Rnd_762x51_Mk316_Mod_0_Mag",
            "ACE_10Rnd_762x51_Mk319_Mod_0_Mag",
            "ACE_10Rnd_762x51_M993_AP_Mag",
            "ACE_20Rnd_762x51_M118LR_Mag",
            "ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
            "ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
            "ACE_20Rnd_762x51_M993_AP_Mag",
            "ACE_20Rnd_762x51_Mag_tracer_green",
            "ACE_20Rnd_762x51_Mag_tracer_yellow",
            "100Rnd_65x39_caseless_khaki_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_khaki_mag",
            "30Rnd_65x39_caseless_black_mag",
            "30Rnd_65x39_caseless_mag_Tracer",
            "30Rnd_65x39_caseless_khaki_mag_Tracer",
            "30Rnd_65x39_caseless_black_mag_Tracer",
            "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
            "ACE_30Rnd_65x47_Scenar_mag",
            "ACE_30Rnd_65_Creedmor_mag",
            "ACE_30Rnd_65x39_mx_green",
            "ACE_30Rnd_65x39_mx_yellow",
            "ACE_30Rnd_65x39_mx_tracer_green",
            "ACE_30Rnd_65x39_mx_tracer_yellow",
            "100Rnd_65x39_caseless_mag",
            "100Rnd_65x39_caseless_black_mag",
            "100Rnd_65x39_caseless_mag_Tracer",
            "100Rnd_65x39_caseless_khaki_mag_tracer",
            "100Rnd_65x39_caseless_black_mag_tracer",
            "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim",
            "dpso_30Rnd_65x39_caseless_BlackCamo_mag",
            "ACE_100Rnd_65x39_mx_green",
            "ACE_100Rnd_65x39_mx_yellow",
            "ACE_100Rnd_65x39_mx_tracer_green",
            "ACE_100Rnd_65x39_mx_tracer_yellow",
            "130Rnd_338_Mag",
            "ACE_130Rnd_338_Mag_green",
            "ACE_130Rnd_338_Mag_yellow",
            "10Rnd_Mk14_762x51_Mag",
            "rhsusf_20Rnd_762x51_m118_special_Mag",
            "rhsusf_20Rnd_762x51_m993_Mag",
            "rhsusf_20Rnd_762x51_m80_Mag",
            "rhsusf_20Rnd_762x51_m62_Mag",
            "7Rnd_408_Mag",
            "ACE_7Rnd_408_305gr_Mag",
            "30Rnd_9x21_Mag_SMG_02",
            "30Rnd_9x21_Mag_SMG_02_Tracer_Red",
            "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
            "30Rnd_9x21_Mag_SMG_02_Tracer_Green",
            "30Rnd_65x39_caseless_msbs_mag",
            "30Rnd_65x39_caseless_msbs_mag_Tracer",
            "6Rnd_12Gauge_Pellets",
            "6Rnd_12Gauge_Slug",
            "ACE_6Rnd_12Gauge_Pellets_No0_Buck",
            "ACE_6Rnd_12Gauge_Pellets_No1_Buck",
            "ACE_6Rnd_12Gauge_Pellets_No2_Buck",
            "ACE_6Rnd_12Gauge_Pellets_No3_Buck",
            "ACE_6Rnd_12Gauge_Pellets_No4_Buck",
            "ACE_6Rnd_12Gauge_Pellets_No4_Bird",
            "10Rnd_338_Mag",
            "ACE_10Rnd_338_300gr_HPBT_Mag",
            "ACE_10Rnd_338_API526_Mag",
            "ACE_20Rnd_762x67_Mk248_Mod_0_Mag",
            "ACE_20Rnd_762x67_Mk248_Mod_1_Mag",
            "ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag",
            "50Rnd_570x28_SMG_03",
            "200Rnd_65x39_cased_Box",
            "200Rnd_65x39_cased_Box_Tracer",
            "200Rnd_65x39_cased_Box_Red",
            "200Rnd_65x39_cased_Box_Tracer_Red",
            "ACE_200Rnd_65x39_cased_Box_green",
            "ACE_200Rnd_65x39_cased_Box_red",
            "ACE_200Rnd_65x39_cased_Box_tracer_green",
            "ACE_200Rnd_65x39_cased_Box_tracer_red",
            "ACE_200Rnd_65x39_cased_Box_Tracer_Dim",
            "30Rnd_45ACP_Mag_SMG_01",
            "30Rnd_45ACP_Mag_SMG_01_Tracer_Green",
            "30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
            "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
            "150Rnd_762x54_Box",
            "150Rnd_762x54_Box_Tracer",
            "ACE_150Rnd_762x54_Box_red",
            "ACE_150Rnd_762x54_Box_yellow",
            "ACE_150Rnd_762x54_Box_tracer_red",
            "ACE_150Rnd_762x54_Box_tracer_yellow",
            "Titan_AA",
            "Titan_AT",
            "Titan_AP",
            "11Rnd_45ACP_Mag",
            "FakeMagazine",
            "ESD_01_DummyMagazine_1",
            "ESD_01_DummyMagazine_2",
            "ESD_01_DummyMagazine_3",
            "ESD_01_DummyMagazine_4",
            "ESD_01_DummyMagazine_5",
            "ESD_01_DummyMagazine_6",
            "ESD_01_DummyMagazine_7",
            "ESD_01_DummyMagazine_8",
            "ESD_01_DummyMagazine_9",
            "ESD_01_DummyMagazine_10",
            "9Rnd_45ACP_Mag",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_red_Mag",
            "16Rnd_9x21_green_Mag",
            "16Rnd_9x21_yellow_Mag",
            "30Rnd_9x21_Mag",
            "30Rnd_9x21_Red_Mag",
            "30Rnd_9x21_Yellow_Mag",
            "30Rnd_9x21_Green_Mag",
            "MRAWS_HEAT_F",
            "MRAWS_HE_F",
            "MRAWS_HEAT55_F",
            "rhs_mag_maaws_HEAT",
            "rhs_mag_maaws_HEDP",
            "rhs_mag_maaws_HE",
            "CBA_FakeLauncherMagazine",
            "rhsusf_mag_10Rnd_STD_50BMG_M33",
            "rhsusf_mag_10Rnd_STD_50BMG_mk211",
            "ACE_5Rnd_127x99_Mag",
            "ACE_5Rnd_127x99_API_Mag",
            "ACE_5Rnd_127x99_AMAX_Mag",
            "rhsusf_5Rnd_300winmag_xm2010",
            "rhsusf_5Rnd_762x51_m118_special_Mag",
            "rhsusf_5Rnd_762x51_m993_Mag",
            "rhsusf_5Rnd_762x51_m62_Mag",
            "rhsusf_100Rnd_762x51",
            "rhsusf_100Rnd_762x51_m61_ap",
            "rhsusf_100Rnd_762x51_m62_tracer",
            "rhsusf_100Rnd_762x51_m80a1epr",
            "rhsusf_100Rnd_762x51_m82_blank",
            "rhsusf_50Rnd_762x51",
            "rhsusf_50Rnd_762x51_m61_ap",
            "rhsusf_50Rnd_762x51_m62_tracer",
            "rhsusf_50Rnd_762x51_m80a1epr",
            "rhsusf_50Rnd_762x51_m82_blank",
            "rhsusf_50Rnd_762x51_m993",
            "rhsusf_100Rnd_762x51_m993",
            "150Rnd_762x51_Box",
            "150Rnd_762x51_Box_Tracer",
            "rhsusf_mag_6Rnd_M441_HE",
            "rhsusf_mag_6Rnd_M433_HEDP",
            "rhsusf_mag_6Rnd_M397_HET",
            "rhsusf_mag_6Rnd_M576_Buckshot",
            "rhsusf_mag_6Rnd_M781_Practice",
            "rhsusf_mag_6Rnd_m4009",
            "rhsusf_mag_6Rnd_M585_white",
            "rhsusf_mag_6Rnd_m661_green",
            "rhsusf_mag_6Rnd_m662_red",
            "rhsusf_mag_6Rnd_M713_red",
            "rhsusf_mag_6Rnd_M714_white",
            "rhsusf_mag_6Rnd_M715_green",
            "rhsusf_mag_6Rnd_M716_yellow",
            "rhsusf_5Rnd_762x51_AICS_m118_special_Mag",
            "rhsusf_5Rnd_762x51_AICS_m993_Mag",
            "rhsusf_5Rnd_762x51_AICS_m62_Mag",
            "rhsusf_10Rnd_762x51_m118_special_Mag",
            "rhsusf_10Rnd_762x51_m993_Mag",
            "rhsusf_10Rnd_762x51_m62_Mag",
            "rhsusf_20Rnd_762x51_SR25_m118_special_Mag",
            "rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",
            "rhsusf_20Rnd_762x51_SR25_m993_Mag",
            "rhsusf_20Rnd_762x51_SR25_m62_Mag",
            "rhs_mag_20Rnd_SCAR_762x51_m80_ball",
            "rhs_mag_20Rnd_SCAR_762x51_m61_ap",
            "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
            "rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",
            "rhs_mag_20Rnd_SCAR_762x51_m118_special",
            "rhs_mag_20Rnd_SCAR_762x51_mk316_special",
            "rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m118_special_bk",
            "rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk",
            "rhs_mag_fold_stock",
            "rhsusf_mag_40Rnd_46x30_FMJ",
            "rhsusf_mag_40Rnd_46x30_JHP",
            "rhsusf_mag_40Rnd_46x30_AP",
            "rhsusf_8Rnd_00Buck",
            "rhsusf_8Rnd_doomsday_Buck",
            "rhsusf_8Rnd_Slug",
            "rhsusf_8Rnd_HE",
            "rhsusf_8Rnd_FRAG",
            "rhsgref_1Rnd_00Buck",
            "rhsgref_1Rnd_Slug",
            "ACE_2Rnd_12Gauge_Pellets_No0_Buck",
            "ACE_2Rnd_12Gauge_Pellets_No1_Buck",
            "ACE_2Rnd_12Gauge_Pellets_No2_Buck",
            "ACE_2Rnd_12Gauge_Pellets_No3_Buck",
            "ACE_2Rnd_12Gauge_Pellets_No4_Buck",
            "ACE_2Rnd_12Gauge_Pellets_No4_Bird",
            "rhsusf_5Rnd_00Buck",
            "rhsusf_5Rnd_Slug",
            "rhsusf_5Rnd_HE",
            "rhsusf_5Rnd_FRAG",
            "rhsusf_5Rnd_doomsday_Buck",
            "rhs_mag_fakeMuzzle1",
            "rhs_m136_hp_mag",
            "rhs_m72a7_mag",
            "rhs_m136_hedp_mag",
            "rhs_m136_mag",
            "rhs_fim92_mag",
            "rhs_fgm148_magazine_AT",
            "3Rnd_HE_Grenade_shell",
            "3Rnd_UGL_FlareWhite_F",
            "3Rnd_UGL_FlareGreen_F",
            "3Rnd_UGL_FlareRed_F",
            "3Rnd_UGL_FlareYellow_F",
            "3Rnd_UGL_FlareCIR_F",
            "3Rnd_Smoke_Grenade_shell",
            "3Rnd_SmokeRed_Grenade_shell",
            "3Rnd_SmokeGreen_Grenade_shell",
            "3Rnd_SmokeYellow_Grenade_shell",
            "3Rnd_SmokePurple_Grenade_shell",
            "3Rnd_SmokeBlue_Grenade_shell",
            "3Rnd_SmokeOrange_Grenade_shell",
            "rhs_mag_smaw_HEAA",
            "rhs_mag_smaw_HEDP",
            "rhs_mag_smaw_SR",
            "rhsusf_mag_15Rnd_9x19_JHP",
            "rhsusf_mag_15Rnd_9x19_FMJ",
            "rhsusf_mag_17Rnd_9x19_JHP",
            "rhsusf_mag_17Rnd_9x19_FMJ",
            "rhsusf_mag_7x45acp_MHP",
            "30Rnd_mas_usl_556x45_Stanag",
            "30Rnd_mas_usl_556x45sd_Stanag",
            "30Rnd_mas_usl_556x45UW_Stanag",
            "20Rnd_556x45_UW_mag",
            "rhssaf_30rnd_556x45_EPR_G36",
            "rhssaf_30rnd_556x45_SOST_G36",
            "rhssaf_100rnd_556x45_EPR_G36",
            "rhssaf_30rnd_556x45_SPR_G36",
            "rhssaf_30rnd_556x45_Tracers_G36",
            "rhssaf_30rnd_556x45_MDIM_G36",
            "rhssaf_30rnd_556x45_TDIM_G36",
            "rhsgref_30rnd_556x45_vhs2",
            "rhsgref_30rnd_556x45_vhs2_t",
            "40Rnd_46x30SD_mas_usl_mag",
            "7Rnd_mas_usl_408_Mag",
            "7Rnd_mas_usl_408_APDS_Mag",
            "20Rnd_mas_usl_762x51_Mag",
            "20Rnd_mas_usl_762x51sd_Mag",
            "150Rnd_mas_usl_762x51_Mag",
            "200Rnd_mas_usl_556x45_Drum_Mag_F",
            "200Rnd_mas_usl_556x45SD_Drum_Mag_F",
            "150Rnd_mas_usl_556x45_Drum_Mag_F",
            "150Rnd_mas_usl_556x45SD_Drum_Mag_F",
            "8Rnd_mas_usl_12Gauge_Pellets",
            "8Rnd_mas_usl_12Gauge_Slug",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Slug",
            "jav_AT_mas_usl",
            "jav_AP_mas_usl",
            "Stinger_mas_usl",
            "ACE_20Rnd_65_Creedmor_mag",
            "ACE_20Rnd_65x47_Scenar_mag",
            "ACE_16Rnd_9x19_mag",
            "ACE_SpareBarrel",
            "kat_Painkiller",
            "NLAW_F",
            "ace_compat_rhs_usf3_48Rnd_40mm_MK19_M430I",
            "ace_compat_rhs_usf3_48Rnd_40mm_MK19_M430A1",
            "ace_compat_rhs_usf3_48Rnd_40mm_MK19",
            "ace_compat_rhs_usf3_48Rnd_40mm_MK19_M1001",
            "rhs_LaserMag_ai",
            "rhs_LaserMag",
            "rhs_LaserFCSMag",
            "Laserbatteries",
            "ace_csw_20Rnd_20mm_G_belt",
            "ace_csw_100Rnd_127x99_mag_yellow",
            "ace_csw_100Rnd_127x99_mag_red",
            "ace_csw_100Rnd_127x99_mag_green",
            "ace_csw_100Rnd_127x99_mag",
            "ace_csw_50Rnd_127x108_mag",
            "ACE_1Rnd_82mm_Mo_HE_Guided",
            "ACE_1Rnd_82mm_Mo_HE",
            "ACE_1Rnd_82mm_Mo_Illum",
            "ACE_1Rnd_82mm_Mo_HE_LaserGuided",
            "ACE_1Rnd_82mm_Mo_Smoke",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
            "rhsusf_50Rnd_762x51_m993",
            "rhsusf_100Rnd_762x51_m993",
            "rhs_mag_fold_stock",
            "rhsusf_8Rnd_doomsday_Buck",
            "rhsusf_5Rnd_doomsday_Buck",
            "rhs_mag_fakeMuzzle1",
            "rhs_m136_hp_mag",
            "rhs_m72a7_mag",
            "rhs_m136_hedp_mag",
            "rhs_m136_mag",
            "ACE_SpareBarrel",
            "kat_Painkiller",
            "rhs_ec75_mag",
            "rhs_ec75_sand_mag",
            "rhs_ec200_mag",
            "rhs_ec200_sand_mag",
            "rhs_ec400_mag",
            "rhs_ec400_sand_mag",
            "rhs_fgm148_magazine_AT",
            "rhs_mag_M397_HET",
            "Laserbatteries",
            "rhs_LaserMag",
            "rhs_LaserMag_ai",
            "ACE_1Rnd_82mm_Mo_Smoke",
            "ACE_1Rnd_82mm_Mo_HE_LaserGuided",
            "ACE_1Rnd_82mm_Mo_Illum",
            "ACE_1Rnd_82mm_Mo_HE_Guided",
            "ACE_1Rnd_82mm_Mo_HE"
        ];
        _AvailableWeapons = [
            "rhs_mag_an_m8hc",
            "Chemlight_blue",
            "Chemlight_green",
            "ACE_Chemlight_HiBlue",
            "ACE_Chemlight_HiGreen",
            "ACE_Chemlight_HiRed",
            "ACE_Chemlight_HiWhite",
            "ACE_Chemlight_HiYellow",
            "ACE_Chemlight_IR",
            "ACE_Chemlight_Orange",
            "Chemlight_red",
            "ACE_Chemlight_UltraHiOrange",
            "ACE_Chemlight_White",
            "Chemlight_yellow",
            "ACE_CTS9",
            "B_IR_Grenade",
            "ACE_HandFlare_Green",
            "ACE_HandFlare_Red",
            "ACE_HandFlare_White",
            "ACE_HandFlare_Yellow",
            "rhs_mag_m18_green",
            "rhs_mag_m18_purple",
            "rhs_mag_m18_red",
            "rhs_mag_m18_yellow",
            "rhs_mag_m67",
            "rhs_mag_m7a3_cs",
            "rhs_mag_mk84",
            "rhs_mag_mk3a2",
            "rhs_mag_an_m14_th3",
            "rhsusf_m112_mag",
            "rhsusf_m112x4_mag",
            "rhsusf_mine_m14_mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "rhs_mine_M19_mag",
            "rhsusf_mine_m49a1_10m_mag",
            "rhsusf_mine_m49a1_3m_mag",
            "rhsusf_mine_m49a1_6m_mag",
            "SLAMDirectionalMine_Wire_Mag",
            "AMP_Breaching_Charge_Mag"
        ];
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


