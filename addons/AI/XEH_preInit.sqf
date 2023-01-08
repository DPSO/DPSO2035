#include "script_component.hpp"
// Reporting AI
[
    "dpso_AI_Reporting",
    "CHECKBOX",
    ["Spawn Reporting", "Receive a systemchat message for any groups or vehicles that fail to spawn."],
    COMPONENT_NAME,
    false,
    true, {

    }
] call CBA_fnc_addSetting;

// Initial AI
[
    "dpso_AI_InitialAI",
    "CHECKBOX",
    ["Include Initial AI", "This will automatically apply to AI Spawns and Zeus placed AI. If enabled it will also apply to any Editor placed AI at mission start."],
    COMPONENT_NAME,
    true,
    true, {
        if (_this && { isserver }) then  { call dpso_fnc_SetInitialAI};
    }
] call CBA_fnc_addSetting;

// AI Aiming Accuracy
[
    "dpso_AI_AimingAccuracy",
    "SLIDER",
    ["Min Aiming Accuracy", "Higher value means the AI will be more likely to hit the target."],
    COMPONENT_NAME,
    [0, 1, 0.10, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// AI Aiming Shake
[
    "dpso_AI_AimingShake",
    "SLIDER",
    ["Min Aiming Shake", "Higher value means the AI will be more precise."],
    COMPONENT_NAME,
    [0, 1, 0.45, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// AI Aiming Speed
[
    "dpso_AI_AimingSpeed",
    "SLIDER",
    ["Min Aiming Speed", "Higher value means the AI can rotate and stabilize its aim faster."],
    COMPONENT_NAME,
    [0, 1, 0.30, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// AI Commanding
[
    "dpso_AI_Commanding",
    "SLIDER",
    ["Commanding", "Higher value means the AI can report targets faster."],
    COMPONENT_NAME,
    [0, 1, 1.00, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// AI Courage
[
    "dpso_AI_Courage",
    "SLIDER",
    ["Courage", "Higher value means the AI can report targets faster."],
    COMPONENT_NAME,
    [0, 1, 1.00, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// AI General
[
    "dpso_AI_General",
    "SLIDER",
    ["General", "Higher value improves the AI's decision making."],
    COMPONENT_NAME,
    [0, 1, 1.00, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// AI Min Reload Speed
[
    "dpso_AI_ReloadSpeed",
    "SLIDER",
    ["Min Reload Speed", "Higher value means the AI can switch or reload weapons faster."],
    COMPONENT_NAME,
    [0, 1, 0.50, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// AI Min Spot Distance
[
    "dpso_AI_SpotDistance",
    "SLIDER",
    ["Min Spot Distance", "Higher value means the AI is better at spotting targets."],
    COMPONENT_NAME,
    [0, 1, 0.40, 2],
    true, {

    }
] call CBA_fnc_addSetting;

// AI Min Spot Time
[
    "dpso_AI_SpotTime",
    "SLIDER",
    ["Min Spot Time", "Higher value means the AI will react faster to death, damage or enemies."],
    COMPONENT_NAME,
    [0, 1, 0.20, 2],
    true, {

    }
] call CBA_fnc_addSetting;
