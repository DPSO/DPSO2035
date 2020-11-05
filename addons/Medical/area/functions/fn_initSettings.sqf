/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\z\dpso\addons\medical\area\functions\fn_initSettings.sqf
 *	by Ojemineh
 *
 *	register cba settings
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	nothing
 *
 *	Example:
 *	[] call DPSO_medical_area_fnc_initSettings;
 *
 */

// -------------------------------------------------------------------------------------------------

// MEDICAL AREA

[
	"DPSO_medical_area_constuct_time",
	"SLIDER",
	[
		localize "STR_DPSO_Medical_Area_CBA_Construct_Time_Title",
		localize "STR_DPSO_Medical_Area_CBA_Construct_Time_Tip"
	],
	[
		localize "STR_DPSO_Medical_Area_CBA_Category",
		localize "STR_DPSO_Medical_Area_CBA_Category_Common"
	],
	[3,90,30,0],
	1,
	{}
] call CBA_Settings_fnc_init;

[
	"DPSO_medical_area_dismantle_time",
	"SLIDER",
	[
		localize "STR_DPSO_Medical_Area_CBA_Dismantle_Time_Title",
		localize "STR_DPSO_Medical_Area_CBA_Dismantle_Time_Tip"
	],
	[
		localize "STR_DPSO_Medical_Area_CBA_Category",
		localize "STR_DPSO_Medical_Area_CBA_Category_Common"
	],
	[3,90,30,0],
	1,
	{}
] call CBA_Settings_fnc_init;

// -------------------------------------------------------------------------------------------------

if (["adv_aceCPR"] call DPSO_fnc_isAddon) then {
[
	"DPSO_medical_area_enable_defibrillator",
	"CHECKBOX",
	[
		localize "STR_DPSO_Medical_Area_CBA_Enable_Defibrillator_Title",
		localize "STR_DPSO_Medical_Area_CBA_Enable_Defibrillator_Tip"
	],
	[
		localize "STR_DPSO_Medical_Area_CBA_Category",
		localize "STR_DPSO_Medical_Area_CBA_Category_Common"
	],
	false,
	1,
	{}
] call CBA_Settings_fnc_init;
};

// -------------------------------------------------------------------------------------------------
