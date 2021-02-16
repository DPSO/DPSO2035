////////////////////////////////////////////////////////////////////
//DeRap: dpso_mission_autotest\config.bin
//Produced from mikero's Dos Tools Dll version 7.95
//https://mikero.bytex.digital/Downloads
//'now' is Sat Feb 13 00:47:40 2021 : 'file' last modified on Sun Jan 31 08:08:57 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class dpso_mission_autotest
	{
		name = "DPSO - Mission Autotest";
		units[] = {};
		weapons[] = {};
		requiredVersion = "REQUIRED_VERSION";
		requiredAddons[] = {"dpso_MAIN"};
		author = "$STR_dpso_main_Author";
		authors[] = {"TMF Team","Jonpas"};
		url = "$STR_dpso_main_https:";
		version = 0;
		versionStr = "0";
		versionAr[] = {0};
	};
};
class Extended_PreStart_EventHandlers
{
	class dpso_mission_autotest
	{
		init = "call compile preprocessFileLineNumbers '\z\dpso\addons\mission_autotest\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class dpso_mission_autotest
	{
		init = "call compile preprocessFileLineNumbers '\z\dpso\addons\mission_autotest\XEH_preInit.sqf'";
	};
};
class ctrlDefault;
class ctrlDefaultText;
class ctrlStatic;
class ctrlListNBox;
class ctrlTree;
class ctrlEdit;
class RscButtonMenu;
class RscText;
class RscPicture;
class Cfg3DEN
{
	class Mission
	{
		class dpso_mission_autotest
		{
			displayName = "$STR_dpso_mission_autotest_DPSO_Autotest";
			class AttributeCategories
			{
				class dpso
				{
					displayName = "$STR_dpso_mission_autotest_Autotest";
					class Attributes
					{
						class name
						{
							property = "missionName";
							displayName = "$STR_dpso_mission_autotest_Name";
							tooltip = "$STR_dpso_mission_autotest_NameDesc";
							control = "dpso_mission_autotest_name";
							defaultValue = "true";
						};
						class description
						{
							property = "missionDescription";
							displayName = "$STR_dpso_mission_autotest_Description";
							tooltip = "$STR_dpso_mission_autotest_DescriptionDesc";
							control = "dpso_mission_autotest_description";
							defaultValue = "true";
						};
						class gameType
						{
							property = "gameType";
							displayName = "$STR_dpso_mission_autotest_GameType";
							tooltip = "$STR_dpso_mission_autotest_GameTypeDesc";
							control = "dpso_mission_autotest_gameType";
							defaultValue = "true";
						};
						class author
						{
							property = "author";
							displayName = "$STR_dpso_mission_autotest_Author";
							tooltip = "$STR_dpso_mission_autotest_AuthorDesc";
							control = "dpso_mission_autotest_author";
							defaultValue = "true";
						};
						class minPlayers
						{
							property = "minPlayers";
							displayName = "$STR_dpso_mission_autotest_MinPlayers";
							tooltip = "$STR_dpso_mission_autotest_MinPlayersDesc";
							control = "dpso_mission_autotest_minPlayers";
							defaultValue = "true";
						};
						class maxPlayers
						{
							property = "maxPlayers";
							displayName = "$STR_dpso_mission_autotest_MaxPlayers";
							tooltip = "$STR_dpso_mission_autotest_MaxPlayersDesc";
							control = "dpso_mission_autotest_maxPlayers";
							defaultValue = "true";
						};
						class hcAmount
						{
							property = "hcAmount";
							displayName = "$STR_dpso_mission_autotest_HCAmount";
							tooltip = "$STR_dpso_mission_autotest_HCAmountDesc";
							control = "dpso_mission_autotest_hcAmount";
							defaultValue = "true";
						};
						class aiAmount
						{
							property = "aiAmount";
							displayName = "$STR_dpso_mission_autotest_AIAmount";
							tooltip = "$STR_dpso_mission_autotest_AIAmountDesc";
							control = "dpso_mission_autotest_aiAmount";
							defaultValue = "true";
						};
						class respawnMode
						{
							property = "respawnMode";
							displayName = "$STR_dpso_mission_autotest_RespawnMode";
							tooltip = "$STR_dpso_mission_autotest_RespawnModeDesc";
							control = "dpso_mission_autotest_respawnMode";
							defaultValue = "true";
						};
						class respawnButton
						{
							property = "respawnButton";
							displayName = "$STR_dpso_mission_autotest_RespawnButton";
							tooltip = "$STR_dpso_mission_autotest_RespawnButtonDesc";
							control = "dpso_mission_autotest_respawnButton";
							defaultValue = "true";
						};
						class respawnDelay
						{
							property = "respawnDelay";
							displayName = "$STR_dpso_mission_autotest_RespawnDelay";
							tooltip = "$STR_dpso_mission_autotest_RespawnDelayDesc";
							control = "dpso_mission_autotest_respawnDelay";
							defaultValue = "true";
						};
						class respawnDialog
						{
							property = "respawnDialog";
							displayName = "$STR_dpso_mission_autotest_RespawnDialog";
							tooltip = "$STR_dpso_mission_autotest_RespawnDialogDesc";
							control = "dpso_mission_autotest_respawnDialog";
							defaultValue = "true";
						};
						class aiPosession
						{
							property = "aiPosession";
							displayName = "$STR_dpso_mission_autotest_AIPosession";
							tooltip = "$STR_dpso_mission_autotest_AIPosessionDesc";
							control = "dpso_mission_autotest_aiPosession";
							defaultValue = "true";
						};
						class debugConsole
						{
							property = "debugConsole";
							displayName = "$STR_dpso_mission_autotest_DebugConsole";
							tooltip = "$STR_dpso_mission_autotest_DebugConsoleDesc";
							control = "dpso_mission_autotest_debugConsole";
							defaultValue = "true";
						};
						class targetDebug
						{
							property = "targetDebug";
							displayName = "$STR_dpso_mission_autotest_TargetDebug";
							tooltip = "$STR_dpso_mission_autotest_TargetDebugDesc";
							control = "dpso_mission_autotest_targetDebug";
							defaultValue = "true";
						};
						class findings
						{
							property = "findings";
							displayName = "";
							control = "dpso_mission_autotest_findings";
							defaultValue = "true";
						};
					};
				};
			};
		};
	};
	class Attributes
	{
		class Default;
		class Title: Default
		{
			class Controls
			{
				class Title;
			};
		};
		class dpso_mission_autotest_name: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testName";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_description: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testDescription";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_gameType: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testGameType";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_author: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testAuthor";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_minPlayers: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testMinPlayers";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_maxPlayers: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testMaxPlayers";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_hcAmount: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testHCAmount";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_aiAmount: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testAIAmount";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_respawnMode: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testRespawnMode";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_respawnButton: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testRespawnButton";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_respawnDelay: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testRespawnDelay";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_respawnDialog: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testRespawnDialog";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_aiPosession: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testAIPosession";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_debugConsole: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testDebugConsole";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class dpso_mission_autotest_targetDebug: Title
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_testTargetDebug";
			attributeSave = "true";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					type = 2;
					colorBackground[] = {0,0,0,0.5};
					text = "";
					colorText[] = {1,1,1,1};
					colorDisabled[] = {1,1,1,0.25};
					colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])",1};
					canModify = 0;
					autocomplete = "";
					x = "48 * (pixelW * pixelGrid * 0.50)";
					y = "0 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "(82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
				class Picture: RscPicture
				{
					text = "\z\dpso\addons\mission_autotest\UI\pass.paa";
					idc = 101;
					x = "(48 + 82 - (1.5 * 5)) * (pixelW * pixelGrid * 0.50)";
					y = 0;
					w = "5 * (pixelW * pixelGrid * 0.50)";
					h = "5 * (pixelH * pixelGrid * 0.50)";
				};
			};
		};
		class Toolbox;
		class dpso_mission_autotest_findings: Toolbox
		{
			attributeLoad = "_this call dpso_mission_autotest_fnc_autotest";
			attributeSave = "true";
			w = "(48 + 82) * (pixelW * pixelGrid * 0.50)";
			h = "24 * 5 * (pixelH * pixelGrid * 0.50)";
			class Controls
			{
				class ActionTitle: ctrlStatic
				{
					text = "$STR_dpso_mission_autotest_Findings";
					tooltip = "";
					x = "5 * (pixelH * pixelGrid * 0.50)";
					y = 0;
					w = "48 * (pixelW * pixelGrid * 0.50)";
					h = "1 * 5 * (pixelH * pixelGrid * 0.50)";
					colorBackground[] = {0,0,0,0};
				};
				class ActionListBackground: ctrlStatic
				{
					idc = -1;
					x = "5 * (pixelH * pixelGrid * 0.50)";
					y = "1 * 5 * (pixelH * pixelGrid * 0.50)";
					h = "23 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "((48 + 82) - (2 * 5)) * (pixelW * pixelGrid * 0.50)";
					colorBackground[] = {0.33,0.33,0.33,1};
				};
				class ActionList: ctrlListNBox
				{
					idc = 101;
					x = "5 * (pixelH * pixelGrid * 0.50)";
					y = "1 * 5 * (pixelH * pixelGrid * 0.50)";
					h = "23 * 5 * (pixelH * pixelGrid * 0.50)";
					w = "((48 + 82) - (2 * 5) ) * (pixelW * pixelGrid * 0.50)";
					drawSideArrows = 0;
					idcLeft = -1;
					idcRight = -1;
					columns[] = {0,0.05};
					disableOverflow = 1;
				};
			};
		};
	};
};
class ctrlMenuStrip;
class display3DEN
{
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				class dpso
				{
					items[] += {"dpso_mission_autotest"};
				};
				class dpso_mission_autotest
				{
					text = "$STR_dpso_mission_autotest_Autotest";
					action = "edit3DENMissionAttributes 'dpso_mission_autotest'";
				};
			};
		};
	};
};
