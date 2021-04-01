#include "..\ui\defines.inc"
// event handler

params ["_ctrlButtonLoad"];

private _display = ctrlParent _ctrlButtonLoad;
private _ctrlSavesList = _display displayCtrl IDC_SAVESLIST;

private _selID = lnbCurSelRow _ctrlSavesList;
if (_selID < 0) exitWith {};

private _dataID = _ctrlSavesList lnbValue [_selID,0];
private _saveMarkersData = profileNamespace getVariable "DPSO_MI_saveData";

(_saveMarkersData select _dataID) params ["_saveName","_mapName",["_markersData",[]]];

[_saveName,_mapName,_markersData] call DPSO_MI_fnc_loadMarkers;

(format ["dpso-saveMarkers: %1 just loaded his marker set %2.",profileName,_saveName]) remoteExec ["systemChat",0,false];

_ctrlSavesList lnbSetCurSelRow -1;
