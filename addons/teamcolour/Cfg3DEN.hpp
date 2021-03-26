#include "\a3\3DEN\UI\macros.inc"

class ctrlToolbox;

class Cfg3DEN
{
    class Object
    {
        class AttributeCategories
        {
            class State
            {
                class Attributes
                {
                    class DPSO_teamColour_colour
                    {
                        property = "DPSO_teamColour_colour";
                        displayName = "DPSO Team Color";
                        tooltip = "Choose a team.";
                        condition = "objectControllable";
                        control = "DPSO_teamColour";
                        expression = "_this setVariable ['DPSO_teamColour_colour',_value,true];";
                        defaultValue = "0";
                        wikiType = "[[Number]]";
                    };
                };
            };
        };
    };
    class Attributes
    {
        class Default;
        class Title : Default
        {
            class Controls
            {
                class Title;
            };
        };
        class DPSO_teamColour : Title
        {
            attributeLoad = "\
                _ctrlTeamColour = _this controlsGroupCtrl 100;\
                if (_value isEqualType true) then {_value = [0,1] select _value;};\
                _value = _value max 0 min 4;\
                _ctrlTeamColour lbSetCurSel _value;\
            ";
            attributeSave = "uiNamespace getVariable ['dpso_teamColour',0]";
            class Controls : Controls
            {
                class Title : Title {};
                class Value : ctrlToolbox
                {
                    idc = 100;
                    onLoad = "uiNamespace setVariable ['AttributeDPSO_teamColour',_this select 0];";
                    style = "0x02";
                    x = "48 * (pixelW * pixelGrid *     0.50)";
                    w = "100 * (pixelW * 1.25 * 4) * 4 / 5";
                    h = "5 * (pixelH * pixelGrid *     0.5)";
                    rows = 1;
                    columns = 5;
                    strings[] = {"White","Red","Green","Blue","Yellow"};
                    values[] = {0,1,2,3,4};
                    onToolboxSelChanged = "uiNamespace setVariable ['dpso_teamColour',_this select 1];";
                };
            };
        };
    };
};