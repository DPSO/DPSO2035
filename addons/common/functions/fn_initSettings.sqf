/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\common\functions\fn_initSettings.sqf
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
 *	[] call DPSO_common_fnc_initSettings;
 *
 */

// -------------------------------------------------------------------------------------------------

// COMMON SETTINGS

[
	"DPSO_debug_enabled",
	"CHECKBOX",
	[
		localize "STR_DPSO_Common_CBA_Debug_Enabled_Title",
		localize "STR_DPSO_Common_CBA_Debug_Enabled_Tip"
	],
	[
		localize "STR_DPSO_Common_CBA_Category",
		localize "STR_DPSO_Common_CBA_Category_Common"
	],
	false,
	0,
	{}
] call CBA_Settings_fnc_init;

[
	"DPSO_showNewsOnMainMenu",
	"CHECKBOX",
	[
		localize "STR_DPSO_Common_CBA_Show_News_Title",
		localize "STR_DPSO_Common_CBA_Show_News_Tip"
	],
	[
		localize "STR_DPSO_Common_CBA_Category",
		localize "STR_DPSO_Common_CBA_Category_Common"
	],
	true,
	0,
	{
		params ["_value"];
		if (_value) then {
			profileNamespace setVariable ["DPSO_showNewsOnMainMenu", true];
		} else {
			profileNamespace setVariable ["DPSO_showNewsOnMainMenu", false];
		};
		saveProfileNamespace;
		[(uiNamespace getVariable "RscDisplayMain")] call compile preprocessfilelinenumbers 'z\dpso\addons\mainmenu\scripts\versionInfo.sqf';
	}
] call CBA_Settings_fnc_init;

// -------------------------------------------------------------------------------------------------

[
	"DPSO_tactical_view_enabled",
	"CHECKBOX",
	[
		localize "STR_DPSO_Common_CBA_Tactical_View_Title",
		localize "STR_DPSO_Common_CBA_Tactical_View_Tip"
	],
	[
		localize "STR_DPSO_Common_CBA_Category",
		localize "STR_DPSO_Common_CBA_Category_Options"
	],
	false,
	1,
	{}
] call CBA_Settings_fnc_init;

// -------------------------------------------------------------------------------------------------
