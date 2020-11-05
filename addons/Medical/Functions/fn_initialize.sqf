/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\z\dpso\addons\medical\functions\fn_initialize.sqf
 *	by Ojemineh
 *
 *	initialize medical addon
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	nothing
 *
 *	Example:
 *	[] call DPSO_medical_fnc_initialize;
 *
 */

// -------------------------------------------------------------------------------------------------

private _version = ["DPSO_medical"] call DPSO_fnc_getAddonVersion;
[4, "Addon (v%1) loaded...", [_version], "medical"] call DPSO_fnc_log;

// -------------------------------------------------------------------------------------------------

if !(hasInterface) exitWith {};

// -------------------------------------------------------------------------------------------------

[] spawn {

	waitUntil {if (!isNull player) exitWith {true}; false};

	if !(player getVariable ["ace_medical_addedToUnitLoop", false]) then {
		[player] call ACE_medical_fnc_addVitalLoop;
	};

};

// -------------------------------------------------------------------------------------------------
