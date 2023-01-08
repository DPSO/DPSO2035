/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\z\dpso\addons\glasses\functions\fn_initialize.sqf
 *	by Ojemineh
 *
 *	initialize glasses addon
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	nothing
 *
 *	Example:
 *	[] call DPSO_glasses_fnc_initialize;
 *
 */

// -------------------------------------------------------------------------------------------------

private _version = ["DPSO_glasses"] call DPSO_fnc_getAddonVersion;
[4, "Addon (v%1) loaded...", [_version], "glasses"] call DPSO_fnc_log;

// -------------------------------------------------------------------------------------------------
