class CfgVehicles {
    // Box
    class NATO_Box_Base {
        class EventHandlers;
    };
    class CLASS(DPSO_resupply): NATO_Box_Base {
        scope = 2;
        author = AUTHOR;
        mapSize=1.53;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.79000002;
			verticalOffsetWorld=0;
			init="[this,10,true,true] call DPSO_fnc_AmmoCrate;";
		};
        displayName = "DPSO Resupply";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
		icon="iconCrateVeh";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
        class EventHandlers: EventHandlers
        {
		init = "[this,10,true,true] call DPSO_fnc_AmmoCrate;";
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
		_generalMacro="Box_NATO_AmmoVeh_F";
		hiddenSelectionsTextures[]=
		{
			"z\dpso\addons\Equipment\data\dpsobox_signs_ca.paa",
            "z\dpso\addons\Equipment\data\ammodpso_co.paa",
		};
        class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		transportAmmo=30000;
		supplyRadius=10;
    };
	class CLASS(DPSO_arsenal): NATO_Box_Base {
        scope = 2;
        author = AUTHOR;
        mapSize=1.53;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.79000002;
			verticalOffsetWorld=0;
		};
        displayName = "DPSO Arsenal";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
		icon="iconCrateVeh";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
        class EventHandlers: EventHandlers
        {
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
		_generalMacro="Box_NATO_AmmoVeh_F";
		hiddenSelectionsTextures[]=
		{
            "z\dpso\addons\Equipment\data\dpsobox_signs_ca.paa",
			"z\dpso\addons\Equipment\data\ammodpsoA_co.paa"
		};
        class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		transportAmmo=30000;
		supplyRadius=10;
    };
	class CLASS(DPSO_Carsenal): NATO_Box_Base {
        scope = 2;
        author = AUTHOR;
        mapSize=1.53;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.79000002;
			verticalOffsetWorld=0;
		};
        displayName = "DPSO Casual Arsenal";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
		icon="iconCrateVeh";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
        class EventHandlers: EventHandlers
        {
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
		_generalMacro="Box_NATO_AmmoVeh_F";
		hiddenSelectionsTextures[]=
		{
            "z\dpso\addons\Equipment\data\dpsobox_signs_ca.paa",
			"z\dpso\addons\Equipment\data\ammodpsoCA_co.paa"
		};
        class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		transportAmmo=30000;
		supplyRadius=10;
    };
	class CLASS(DPSO_Iarsenal): NATO_Box_Base {
        scope = 2;
        author = AUTHOR;
        mapSize=1.53;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.79000002;
			verticalOffsetWorld=0;
			init="[this,10,true,true] call DPSO_fnc_AmmoCrate;";
		};
        displayName = "DPSO Incognito Arsenal";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
		icon="iconCrateVeh";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
        class EventHandlers: EventHandlers
        {
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
		_generalMacro="Box_NATO_AmmoVeh_F";
		hiddenSelectionsTextures[]=
		{
            "z\dpso\addons\Equipment\data\dpsobox_signs_ca.paa",
			"z\dpso\addons\Equipment\data\ammodpsoIA_co.paa"
		};
        class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		transportAmmo=30000;
		supplyRadius=10;
    };
	class ACE_Item_Vector;

    class DPSO_Item_Vector_Designator: ACE_Item_Vector {
        author = "NemessisRE";
        displayName = "[dpso] ACE Vector Designator (NVG/TI)";
        class TransportItems {
            class DPSO_Vector_Designator {
                name="DPSO_Vector_Designator";
                count=1;
            };
        };
    };

    class DPSO_Item_Vector_Designator_NVG: DPSO_Item_Vector_Designator {
        displayName = "[dpso] ACE Vector Designator (NVG)";
        class TransportItems {
            class DPSO_Vector_Designator {
                name="DPSO_Vector_Designator_NVG";
                count=1;
            };
        };
    };

    class Item_optic_Nightstalker;
    class DPSO_Item_optic_Nightstalker: Item_optic_Nightstalker {
        displayName="[dpso] Nightstalker";
        author="NemesisRE";
        vehicleClass="WeaponAccessories";
        class TransportItems {
            class DPSO_optic_Nightstalker {
                name="DPSO_optic_Nightstalker";
                count=1;
            };
        };
    };

    class Item_optic_AMS;
    class DPSO_Item_optic_AMS: Item_optic_AMS {
        displayName="[dpso] AMS (Black)";
        author="NemesisRE";
        class TransportItems {
            class DPSO_optic_AMS {
                name="DPSO_optic_AMS";
                count=1;
            };
        };
    };
    class DPSO_Item_optic_AMS_khk: DPSO_Item_optic_AMS {
        displayName="[dpso] AMS (Khaki)";
        class TransportItems {
            class DPSO_optic_AMS_khk {
                name="DPSO_optic_AMS_khk";
                count=1;
            };
        };
    };
    class DPSO_Item_optic_AMS_snd: DPSO_Item_optic_AMS {
        displayName="[dpso] AMS (Sand)";
        class TransportItems {
            class DPSO_optic_AMS_snd {
                name="DPSO_optic_AMS_snd";
                count=1;
            };
        };
    };
    class DPSO_Item_optic_AMSTI: Item_optic_AMS {
        displayName="[dpso] AMS-TI (Black)";
        author="NemesisRE";
        class TransportItems {
            class DPSO_optic_AMS {
                name="DPSO_optic_AMSTI";
                count=1;
            };
        };
    };
    class DPSO_Item_optic_AMSTI_khk: DPSO_Item_optic_AMSTI {
        displayName="[dpso] AMS-TI (Khaki)";
        class TransportItems {
            class DPSO_optic_AMS_khk {
                name="DPSO_optic_AMSTI_khk";
                count=1;
            };
        };
    };
    class DPSO_Item_optic_AMSTI_snd: DPSO_Item_optic_AMSTI {
        displayName="[dpso] AMS-TI (Sand)";
        class TransportItems {
            class DPSO_optic_AMS_snd {
                name="DPSO_optic_AMSTI_snd";
                count=1;
            };
        };
    };

    class Box_NATO_Support_F;
    class ACE_Box_Misc: Box_NATO_Support_F {
        class TransportItems {
            class DPSO_Vector_Designator {
                name="DPSO_Vector_Designator_NVG";
                count=3;
            };
        };
    };
};

