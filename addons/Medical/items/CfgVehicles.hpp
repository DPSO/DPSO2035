class CBA_Extended_EventHandlers;
class CfgVehicles {

	class Item_Base_F;

	// MEDICAL ITEMS

	class DPSO_Item_Stethoscope: Item_Base_F {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = AUTHOR;
		displayName = "$STR_DPSO_Item_Medical_Stethoscope_DisplayName";
		editorPreview = "\z\dpso\addons\medical\items\data\previews\stethoscope.jpg";
		vehicleClass = "Items";
		class TransportItems {
			MACRO_ADDITEM(DPSO_Stethoscope,1);
		};
	};

};
