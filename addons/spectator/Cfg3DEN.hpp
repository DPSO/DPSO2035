class Cfg3DEN
{
    class Mission
    {
        class DPSO_Spectator_Settings
        {
            displayName = "DPSO Spectator Settings";
            class AttributeCategories
            {
                class Common
                {
                    displayName = "Common Settings";
                    collapsed = 0;
                    class Attributes
                    {
                        class DPSO_Spectator_AllSides
                        {
                            property = "DPSO_Spectator_AllSides";
                            displayName = "Spectators see all sides";
                            tooltip = "Allow users to spectate everyones side, disable to allow them only spectate thier own.";
                            control = "Checkbox";
                            expression = "true";
                            defaultValue = "true";
                            condition = "1";
                        };
                        class DPSO_Spectator_AllowFollowCam
                        {
                            property = "DPSO_Spectator_AllowFollowCam";
                            displayName = "Enable follow camera";
                            tooltip = "Allows users to use the follow camera.";
                            control = "Checkbox";
                            expression = "true";
                            defaultValue = "true";
                            condition = "1";
                        };
                        class DPSO_Spectator_AllowFreeCam
                        {
                            property = "DPSO_Spectator_AllowFreeCam";
                            displayName = "Enable free camera";
                            tooltip = "Allows users to use the freecamera.";
                            control = "Checkbox";
                            expression = "true";
                            defaultValue = "true";
                            condition = "1";
                        };
                        class DPSO_Spectator_AllowFPCam
                        {
                            property = "DPSO_Spectator_AllowFPCam";
                            displayName = "Enable first-person camera";
                            tooltip = "Allows users to use the first-person camera.";
                            control = "Checkbox";
                            expression = "true";
                            defaultValue = "true";
                            condition = "1";
                        };
                    };
                };
            };
        };
    };
};