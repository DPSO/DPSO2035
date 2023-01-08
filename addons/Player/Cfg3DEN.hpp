class ctrlToolbox;

class Cfg3den {
    class Attributes {
        class Default;
        class Title: Default {
            class Controls {
                class Title;
            };
        };
        // class GroupSelect: Title {
        //     attributeLoad = "(_this controlsGroupCtrl 100) lbSetCurSel (((_value + 1) min 8) max 0);";
        //     attributeSave = "(lbCurSel (_this controlsGroupCtrl 100)) - 1";
        //     class Controls: Controls {
        //         class Title: Title {};
        //         class Value: ctrlToolbox {
        //             idc = 100;
        //             style = "0x02";
        //             x = "48 * (pixelW * pixelGrid * 0.50)";
        //             w = "75 * (pixelW * pixelGrid * 0.50)";
        //             h = "5 * (pixelH * pixelGrid * 0.50)";
        //             rows = 1;
        //             columns = 6;
        //             strings[] = {"NotSet","HQ", "USASOC", "CANSOFCOM", "JSOW", "TRAIN"};
        //         };
        //     };
        // };
    };
    class Object {
        class AttributeCategories {
            class PREFIX {
                collapsed = 1;
                class Attributes {
                    // class DPSOGroup_Preset {
                    //     property = QUOTE(DPSO_Group_Preset);
                    //     control = "GroupSelect";
                    //     displayName = "DPSO Preset Group:";
                    //     tooltip = "Default Preset for Patches & TFAR Radio Frequencies.";
                    //     expression = "[_this, _value] call DPSO_Player_fnc_ConfigPlayer;";
                    //     typeName = "STRING";
                    //     condition = "objectBrain";
                    //     defaultValue = "-1";
                    // };
                    class DPSOPilot {
                        property = QUOTE(DPSOPilot);
                        control = "Checkbox";
                        displayName = "Pilot";
                        tooltip = "Set the player to Pilot to allow them in the Pilot seat of aircraft.";
                        expression = "_this setUnitTrait ['Pilot', _value, true];";
                        typeName = "BOOL";
                        condition = "objectBrain";
                        defaultValue = "(false)";
                    };
                    class DPSOMission_Maker {
                        property = QUOTE(DPSOMission_Maker);
                        control = "Checkbox";
                        displayName = "Mission Maker";
                        tooltip = "Define this player as Mission Maker to allow access to further mission controls.";
                        expression = "_this setUnitTrait ['Mission Maker', _value, true];";
                        typeName = "BOOL";
                        condition = "objectBrain";
                        defaultValue = "(false)";
                    };
                    class DPSOInstructor {
                        property = QUOTE(DPSOInstructor);
                        control = "Checkbox";
                        displayName = "Instructor";
                        tooltip = "Define this player as Instructor to allow access to any valid Instructor Controls - Only used with Training Functions.";
                        expression = "_this setUnitTrait ['Instructor', _value, true];";
                        typeName = "BOOL";
                        condition = "objectBrain";
                        defaultValue = "(false)";
                    };
                };
            };
        };
    };
};
