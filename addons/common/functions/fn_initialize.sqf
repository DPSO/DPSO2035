#include "\a3\ui_f\hpp\definedikcodes.inc"
/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\common\functions\fn_initialize.sqf
 *	by Ojemineh
 *
 *	initialize common addon
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	nothing
 *
 *	Example:
 *	[] call DPSO_common_fnc_initialize;
 *
 */

// -------------------------------------------------------------------------------------------------

private _version = ["DPSO_common"] call DPSO_fnc_getAddonVersion;
[4, "Addon (v%1) loaded...", [_version], "common"] call DPSO_fnc_log;

// -------------------------------------------------------------------------------------------------

DPSO_COMMON_HELPER_OBJECT = "Sign_Sphere10cm_Geometry_F";

// -------------------------------------------------------------------------------------------------

[
	"DPSO_common_log",
	{
		_this call DPSO_fnc_log;
	}
] call CBA_fnc_addEventHandler;

[
	"DPSO_common_diagLog",
	{
		if (missionNamespace getVariable ["DPSO_debug_enabled", false]) then {
			_this call DPSO_fnc_log;
		};
	}
] call CBA_fnc_addEventHandler;

// -------------------------------------------------------------------------------------------------

if !(hasInterface) exitWith {};

// -------------------------------------------------------------------------------------------------
// KEY: SCREENSHOT

[
	"STR_DPSO_Common_CBA_Category",
	"DPSO_Common_KEY_Screenshot",
	["STR_DPSO_Common_KEY_Screenshot_Title", "STR_DPSO_Common_KEY_Screenshot_Tip"],
	{
		[] call DPSO_fnc_screenshot;
	},
	{},
	[DIK_F12, [false, true, false]]
] call CBA_fnc_addKeybind;

// -------------------------------------------------------------------------------------------------
// TACTICAL VIEW

[{

	params ["_params", "_pfhHandler"];

	if (cameraView isEqualTo "GROUP") then {
		if !(missionNamespace getVariable ["DPSO_tactical_view_enabled", false]) then {
			player switchCamera "INTERNAL";
		};
	};

}, 0, []] call CBA_fnc_addPerFrameHandler;

// -------------------------------------------------------------------------------------------------
