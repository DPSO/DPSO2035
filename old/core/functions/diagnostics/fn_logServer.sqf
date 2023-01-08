/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\z\dpso\addons\core\functions\diagnostics\fn_logServer.sqf
 *	by Ojemineh
 *	
 *	add a rpt-log
 *	
 *	Arguments:
 *	0: type			- <NUMBER>
 *	1: message		- <STRING>
 *	2: params		- <ARRAY>
 *	3: extension	- <STRING>
 *	4: modification - <STRING>
 *	
 *	Return:
 *	nothing
 *	
 *	Example:
 *	[4, "Player: '%1', Time: '%2'", [player, time], "core"] call DPSO_fnc_logServer;
 *	
 */

// -------------------------------------------------------------------------------------------------

private ["_level", "_message", "_params", "_extension", "_modification"];

_level			= [_this, 0, 0, [0]] call BIS_fnc_param;
_message		= [_this, 1, "", [""]] call BIS_fnc_param;
_params			= [_this, 2, [], [[]]] call BIS_fnc_param;
_extension		= [_this, 3, "", [""]] call BIS_fnc_param;
_modification	= [_this, 4, "DPSO", [""]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

["dpso_core_log", [_level, _message, _params, _extension, _modification]] call CBA_fnc_serverEvent;