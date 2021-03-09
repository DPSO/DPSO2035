#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            //DPSO
            QCLASS(operator_990),
            QCLASS(operator_991),
            QCLASS(operator_992),
            QCLASS(operator_993),
            QCLASS(flight_crew_999),
            // Ground items
            QCLASS(Item_Suit_VIP),
            QCLASS(Item_Uniform_Combat_LS_DPSO_ATX),
            QCLASS(Item_Uniform_Combat_LS_DPSO_AUX),
            QCLASS(Item_Uniform_Combat_LS_DPSO_IX),
            QCLASS(Item_Uniform_Combat_LS_DPSO_LEX),
            QCLASS(Item_Uniform_Combat_LS_BS_BP_BB),
            QCLASS(Item_Uniform_Combat_LS_BS_DGP_BB),
            QCLASS(Item_Uniform_Combat_LS_BS_GP_BB),
            QCLASS(Item_Uniform_Combat_LS_BS_GP_TB),
            QCLASS(Item_Uniform_Combat_LS_BS_TP_BB),
            QCLASS(Item_Uniform_Combat_LS_BS_TP_TB),
            QCLASS(Item_Uniform_Combat_LS_CBPS_BP_BB),
            QCLASS(Item_Uniform_Combat_LS_CDBS_GP_TB),
            QCLASS(Item_Uniform_Combat_LS_CDES_TP_TB),
            QCLASS(Item_Uniform_Combat_LS_CDFS_GP_TB),
            QCLASS(Item_Uniform_Combat_LS_CLBS_GP_BB),
            QCLASS(Item_Uniform_Combat_LS_CLES_TP_BB),
            QCLASS(Item_Uniform_Combat_LS_CLFS_GP_BB),
            QCLASS(Item_Uniform_Combat_LS_CLRS_TP_BB),
            QCLASS(Item_Uniform_Combat_LS_CPS_BP_BB),
            QCLASS(Item_Uniform_Combat_LS_GS_BP_BB),
            QCLASS(Item_Uniform_Combat_LS_GS_GP_BB),
            QCLASS(Item_Uniform_Combat_LS_GS_TP_BB),
            QCLASS(Item_Uniform_Combat_LS_TS_BP_BB),
            QCLASS(Item_Uniform_Combat_LS_TS_GP_BB),
            QCLASS(Item_Uniform_Combat_LS_TS_GP_TB),
            QCLASS(Item_Uniform_Combat_LS_TS_TP_TB),
            QCLASS(Item_Uniform_Combat_LS_WS_WP_WB),
            QCLASS(Item_Uniform_Combat_RS_DPSO_ATX),
            QCLASS(Item_Uniform_Combat_RS_DPSO_AUX),
            QCLASS(Item_Uniform_Combat_RS_DPSO_IX),
            QCLASS(Item_Uniform_Combat_RS_DPSO_LEX),
            QCLASS(Item_Uniform_Combat_RS_BS_BP_BB),
            QCLASS(Item_Uniform_Combat_RS_BS_DGP_BB),
            QCLASS(Item_Uniform_Combat_RS_BS_GP_BB),
            QCLASS(Item_Uniform_Combat_RS_BS_GP_TB),
            QCLASS(Item_Uniform_Combat_RS_BS_TP_BB),
            QCLASS(Item_Uniform_Combat_RS_BS_TP_TB),
            QCLASS(Item_Uniform_Combat_RS_CBPS_BP_BB),
            QCLASS(Item_Uniform_Combat_RS_CDBS_GP_TB),
            QCLASS(Item_Uniform_Combat_RS_CDES_TP_TB),
            QCLASS(Item_Uniform_Combat_RS_CDFS_GP_TB),
            QCLASS(Item_Uniform_Combat_RS_CLBS_GP_BB),
            QCLASS(Item_Uniform_Combat_RS_CLES_TP_BB),
            QCLASS(Item_Uniform_Combat_RS_CLFS_GP_BB),
            QCLASS(Item_Uniform_Combat_RS_CLRS_TP_BB),
            QCLASS(Item_Uniform_Combat_RS_CPS_BP_BB),
            QCLASS(Item_Uniform_Combat_RS_GS_BP_BB),
            QCLASS(Item_Uniform_Combat_RS_GS_GP_BB),
            QCLASS(Item_Uniform_Combat_RS_GS_TP_BB),
            QCLASS(Item_Uniform_Combat_RS_TS_BP_BB),
            QCLASS(Item_Uniform_Combat_RS_TS_GP_BB),
            QCLASS(Item_Uniform_Combat_RS_TS_GP_TB),
            QCLASS(Item_Uniform_Combat_RS_TS_TP_TB),
            QCLASS(Item_Uniform_Floral_JP_BS_LP_BB),
            QCLASS(Item_Uniform_Floral_JP_BYS_LP_BB),
            QCLASS(Item_Uniform_Floral_JP_GS_LP_BB),
            QCLASS(Item_Uniform_Floral_JP_RS_LP_BB),
            QCLASS(Item_Uniform_Floral_JP_WS_LP_BB),
            QCLASS(Item_Uniform_Floral_SP_BS_LP_BB),
            QCLASS(Item_Uniform_Floral_SP_BYS_LP_BB),
            QCLASS(Item_Uniform_Floral_SP_GS_LP_BB),
            QCLASS(Item_Uniform_Floral_SP_RS_LP_BB),
            QCLASS(Item_Uniform_Floral_SP_WS_LP_BB),
            QCLASS(Item_Uniform_Garment_LS_BS_BP_BB),
            QCLASS(Item_Uniform_Garment_LS_BS_GP_BB),
            QCLASS(Item_Uniform_Garment_LS_ES_BP_BB),
            QCLASS(Item_Uniform_Garment_LS_ES_EP_TB),
            QCLASS(Item_Uniform_Garment_LS_ES_GP_BB),
            QCLASS(Item_Uniform_Garment_LS_GS_BP_BB),
            QCLASS(Item_Uniform_Garment_LS_GS_EP_TB),
            QCLASS(Item_Uniform_Garment_LS_GS_GP_BB),
            QCLASS(Item_Uniform_Garment_LS_GS_TP_TB),
            QCLASS(Item_Uniform_Garment_LS_OS_EP_TB),
            QCLASS(Item_Uniform_Garment_LS_OS_TP_TB),
            QCLASS(Item_Uniform_Garment_LS_TS_BP_BB),
            QCLASS(Item_Uniform_Garment_LS_TS_GP_BB),
            QCLASS(Item_Uniform_Garment_LS_TS_TP_TB),
            QCLASS(Item_Uniform_Garment_RS_BS_BP_BB),
            QCLASS(Item_Uniform_Garment_RS_BS_GP_BB),
            QCLASS(Item_Uniform_Garment_RS_ES_BP_BB),
            QCLASS(Item_Uniform_Garment_RS_ES_EP_TB),
            QCLASS(Item_Uniform_Garment_RS_ES_GP_BB),
            QCLASS(Item_Uniform_Garment_RS_GS_BP_BB),
            QCLASS(Item_Uniform_Garment_RS_GS_EP_TB),
            QCLASS(Item_Uniform_Garment_RS_GS_GP_BB),
            QCLASS(Item_Uniform_Garment_RS_GS_TP_TB),
            QCLASS(Item_Uniform_Garment_RS_OS_EP_TB),
            QCLASS(Item_Uniform_Garment_RS_OS_TP_TB),
            QCLASS(Item_Uniform_Garment_RS_TS_BP_BB),
            QCLASS(Item_Uniform_Garment_RS_TS_GP_BB),
            QCLASS(Item_Uniform_Garment_RS_TS_TP_TB),
            QCLASS(Item_Uniform_Plaid_BP_LP_BP_BB),
            QCLASS(Item_Uniform_Plaid_BP_LY_BP_BB),
            QCLASS(Item_Uniform_Plaid_JP_CB_BP_BB),
            QCLASS(Item_Uniform_Plaid_JP_GY_BP_BB),
            QCLASS(Item_Uniform_Plaid_JP_LP_BP_BB),
            QCLASS(Item_Uniform_Plaid_JP_RO_BP_BB),
            QCLASS(Item_Uniform_Plaid_JP_RT_BP_BB),
            QCLASS(Item_Uniform_Plaid_SP_CB_BP_BB),
            QCLASS(Item_Uniform_Plaid_SP_GY_BP_BB),
            QCLASS(Item_Uniform_Plaid_SP_LPP_BP_BB),
            QCLASS(Item_Uniform_Plaid_SP_LP_BP_BB),
            QCLASS(Item_Uniform_Plaid_SP_LY_BP_BB),
            QCLASS(Item_Uniform_Plaid_SP_RO_BP_BB),
            QCLASS(Item_Uniform_Plaid_SP_RT_BP_BB),
            QCLASS(Item_Uniform_Polo_CP_BS_TP_BB),
            QCLASS(Item_Uniform_Polo_CP_BS_TP_BB_NoLogo),
            QCLASS(Item_Uniform_Polo_CP_LS_TP_OB),
            QCLASS(Item_Uniform_Polo_CP_RS_LP_BB),
            QCLASS(Item_Uniform_Polo_TP_BS_LP_BB),
            QCLASS(Item_Uniform_Polo_TP_BS_LP_BB_NoLogo),
            QCLASS(Item_Uniform_Polo_TP_BS_TP_TB),
            QCLASS(Item_Uniform_Polo_TP_BS_TP_TB_NoLogo),
            QCLASS(Item_Uniform_Polo_TP_GS_TP_TB),
            QCLASS(Item_Uniform_Polo_TP_GS_TP_TB_NoLogo),
            QCLASS(Item_Uniform_Polo_TP_LS_GP_BB),
            QCLASS(Item_Uniform_Polo_TP_LS_GP_BB_NoLogo),
            QCLASS(Item_Uniform_Polo_TP_LS_TP_TB),
            QCLASS(Item_Uniform_Polo_TP_LS_TP_TB_NoLogo),
            QCLASS(Item_Uniform_Polo_TP_OS_LP_BB),
            QCLASS(Item_Uniform_Polo_TP_OS_LP_BB_NoLogo),
            QCLASS(Item_Uniform_Polo_TP_OS_TP_BB),
            QCLASS(Item_Uniform_Polo_TP_OS_TP_BB_NoLogo),
            QCLASS(Item_Uniform_Polo_TP_TS_GP_BB),
            QCLASS(Item_Uniform_Polo_TP_TS_GP_BB_NoLogo),
            QCLASS(Item_Uniform_Polo_TP_WS_GP_BB),
            QCLASS(Item_Uniform_Polo_TP_WS_GP_BB_NoLogo),
            QCLASS(Item_Uniform_Polo_TP_WS_LP_BB),
            QCLASS(Item_Uniform_Polo_TP_WS_LP_BB_NoLogo),
            QCLASS(Item_Uniform_Polo_TP_WS_TP_TB),
            QCLASS(Item_Uniform_Polo_TP_WS_TP_TB_NoLogo),
            QCLASS(Item_Uniform_TShirt_JP_BS_LP_BB),
            QCLASS(Item_Uniform_TShirt_JP_BS_TP_BB),
            QCLASS(Item_Uniform_TShirt_JP_GS_LP_BB),
            QCLASS(Item_Uniform_TShirt_JP_GS_TP_BB),
            QCLASS(Item_Uniform_TShirt_JP_LS_LP_BB),
            QCLASS(Item_Uniform_TShirt_JP_WS_LP_BB),
            // Box
            QCLASS(Box_Uniforms),
            // Units
            QCLASS(Unit_I_Bodyguard),
            QCLASS(Unit_B_Bodyguard),
            QCLASS(Unit_I_Contractor),
            QCLASS(Unit_B_Contractor),
            QCLASS(Unit_I_Contractor_GL),
            QCLASS(Unit_B_Contractor_GL),
            QCLASS(Unit_I_Engineer),
            QCLASS(Unit_B_Engineer),
            QCLASS(Unit_I_Medic),
            QCLASS(Unit_B_Medic),
            QCLASS(Unit_I_Marksman),
            QCLASS(Unit_B_Marksman),
            QCLASS(Unit_I_Specialist),
            QCLASS(Unit_B_Specialist),
            QCLASS(Unit_I_TeamLeader),
            QCLASS(Unit_B_TeamLeader),
            QCLASS(Unit_I_Sniper),
            QCLASS(Unit_B_Sniper),
            QCLASS(Unit_I_PilotHeli),
            QCLASS(Unit_B_PilotHeli),
            QCLASS(Unit_I_VIP),
            QCLASS(Unit_B_VIP)
        };
        weapons[] = {
            QCLASS(Suit_VIP),
            QCLASS(Uniform_Combat_LS_DPSO_ATX),
            QCLASS(Uniform_Combat_LS_DPSO_AUX),
            QCLASS(Uniform_Combat_LS_DPSO_IX),
            QCLASS(Uniform_Combat_LS_DPSO_LEX),
            QCLASS(Uniform_Combat_LS_BS_BP_BB),
            QCLASS(Uniform_Combat_LS_BS_DGP_BB),
            QCLASS(Uniform_Combat_LS_BS_GP_BB),
            QCLASS(Uniform_Combat_LS_BS_GP_TB),
            QCLASS(Uniform_Combat_LS_BS_TP_BB),
            QCLASS(Uniform_Combat_LS_BS_TP_TB),
            QCLASS(Uniform_Combat_LS_CDBS_GP_TB),
            QCLASS(Uniform_Combat_LS_CLBS_GP_BB),
            QCLASS(Uniform_Combat_LS_CLRS_TP_BB),
            QCLASS(Uniform_Combat_LS_CPS_BP_BB),
            QCLASS(Uniform_Combat_LS_GS_BP_BB),
            QCLASS(Uniform_Combat_LS_GS_GP_BB),
            QCLASS(Uniform_Combat_LS_GS_TP_BB),
            QCLASS(Uniform_Combat_LS_TS_BP_BB),
            QCLASS(Uniform_Combat_LS_TS_GP_BB),
            QCLASS(Uniform_Combat_LS_TS_GP_TB),
            QCLASS(Uniform_Combat_LS_TS_TP_TB),
            QCLASS(Uniform_Combat_LS_WS_WP_WB),
            QCLASS(Uniform_Combat_RS_DPSO_ATX),
            QCLASS(Uniform_Combat_RS_DPSO_AUX),
            QCLASS(Uniform_Combat_RS_DPSO_IX),
            QCLASS(Uniform_Combat_RS_DPSO_LEX),
            QCLASS(Uniform_Combat_RS_BS_BP_BB),
            QCLASS(Uniform_Combat_RS_BS_DGP_BB),
            QCLASS(Uniform_Combat_RS_BS_GP_BB),
            QCLASS(Uniform_Combat_RS_BS_GP_TB),
            QCLASS(Uniform_Combat_RS_BS_TP_BB),
            QCLASS(Uniform_Combat_RS_BS_TP_TB),
            QCLASS(Uniform_Combat_RS_CDBS_GP_TB),
            QCLASS(Uniform_Combat_RS_CLBS_GP_BB),
            QCLASS(Uniform_Combat_RS_CLRS_TP_BB),
            QCLASS(Uniform_Combat_RS_CPS_BP_BB),
            QCLASS(Uniform_Combat_RS_GS_BP_BB),
            QCLASS(Uniform_Combat_RS_GS_GP_BB),
            QCLASS(Uniform_Combat_RS_GS_TP_BB),
            QCLASS(Uniform_Combat_RS_TS_BP_BB),
            QCLASS(Uniform_Combat_RS_TS_GP_BB),
            QCLASS(Uniform_Combat_RS_TS_GP_TB),
            QCLASS(Uniform_Combat_RS_TS_TP_TB),
            QCLASS(Uniform_Floral_JP_BS_LP_BB),
            QCLASS(Uniform_Floral_JP_BYS_LP_BB),
            QCLASS(Uniform_Floral_JP_GS_LP_BB),
            QCLASS(Uniform_Floral_JP_RS_LP_BB),
            QCLASS(Uniform_Floral_JP_WS_LP_BB),
            QCLASS(Uniform_Floral_SP_BS_LP_BB),
            QCLASS(Uniform_Floral_SP_BYS_LP_BB),
            QCLASS(Uniform_Floral_SP_GS_LP_BB),
            QCLASS(Uniform_Floral_SP_RS_LP_BB),
            QCLASS(Uniform_Floral_SP_WS_LP_BB),
            QCLASS(Uniform_Garment_LS_BS_BP_BB),
            QCLASS(Uniform_Garment_LS_BS_GP_BB),
            QCLASS(Uniform_Garment_LS_ES_BP_BB),
            QCLASS(Uniform_Garment_LS_ES_EP_TB),
            QCLASS(Uniform_Garment_LS_ES_GP_BB),
            QCLASS(Uniform_Garment_LS_GS_BP_BB),
            QCLASS(Uniform_Garment_LS_GS_EP_TB),
            QCLASS(Uniform_Garment_LS_GS_GP_BB),
            QCLASS(Uniform_Garment_LS_GS_TP_TB),
            QCLASS(Uniform_Garment_LS_OS_EP_TB),
            QCLASS(Uniform_Garment_LS_OS_TP_TB),
            QCLASS(Uniform_Garment_LS_TS_BP_BB),
            QCLASS(Uniform_Garment_LS_TS_GP_BB),
            QCLASS(Uniform_Garment_LS_TS_TP_TB),
            QCLASS(Uniform_Garment_RS_BS_BP_BB),
            QCLASS(Uniform_Garment_RS_BS_GP_BB),
            QCLASS(Uniform_Garment_RS_ES_BP_BB),
            QCLASS(Uniform_Garment_RS_ES_EP_TB),
            QCLASS(Uniform_Garment_RS_ES_GP_BB),
            QCLASS(Uniform_Garment_RS_GS_BP_BB),
            QCLASS(Uniform_Garment_RS_GS_EP_TB),
            QCLASS(Uniform_Garment_RS_GS_GP_BB),
            QCLASS(Uniform_Garment_RS_GS_TP_TB),
            QCLASS(Uniform_Garment_RS_OS_EP_TB),
            QCLASS(Uniform_Garment_RS_OS_TP_TB),
            QCLASS(Uniform_Garment_RS_TS_BP_BB),
            QCLASS(Uniform_Garment_RS_TS_GP_BB),
            QCLASS(Uniform_Garment_RS_TS_TP_TB),
            QCLASS(Uniform_Plaid_BP_LPP_BP_BB),
            QCLASS(Uniform_Plaid_BP_LY_BP_BB),
            QCLASS(Uniform_Plaid_JP_CB_BP_BB),
            QCLASS(Uniform_Plaid_JP_GY_BP_BB),
            QCLASS(Uniform_Plaid_JP_LP_BP_BB),
            QCLASS(Uniform_Plaid_JP_RO_BP_BB),
            QCLASS(Uniform_Plaid_JP_RT_BP_BB),
            QCLASS(Uniform_Plaid_SP_CB_BP_BB),
            QCLASS(Uniform_Plaid_SP_GY_BP_BB),
            QCLASS(Uniform_Plaid_SP_LPP_BP_BB),
            QCLASS(Uniform_Plaid_SP_LP_BP_BB),
            QCLASS(Uniform_Plaid_SP_LY_BP_BB),
            QCLASS(Uniform_Plaid_SP_RO_BP_BB),
            QCLASS(Uniform_Plaid_SP_RT_BP_BB),
            QCLASS(Uniform_Polo_CP_BS_TP_BB),
            QCLASS(Uniform_Polo_CP_BS_TP_BB_NoLogo),
            QCLASS(Uniform_Polo_CP_LS_TP_OB),
            QCLASS(Uniform_Polo_CP_RS_LP_BB),
            QCLASS(Uniform_Polo_TP_BS_LP_BB),
            QCLASS(Uniform_Polo_TP_BS_LP_BB_NoLogo),
            QCLASS(Uniform_Polo_TP_BS_TP_TB),
            QCLASS(Uniform_Polo_TP_BS_TP_TB_NoLogo),
            QCLASS(Uniform_Polo_TP_GS_TP_TB),
            QCLASS(Uniform_Polo_TP_GS_TP_TB_NoLogo),
            QCLASS(Uniform_Polo_TP_LS_GP_BB),
            QCLASS(Uniform_Polo_TP_LS_GP_BB_NoLogo),
            QCLASS(Uniform_Polo_TP_LS_TP_TB),
            QCLASS(Uniform_Polo_TP_LS_TP_TB_NoLogo),
            QCLASS(Uniform_Polo_TP_OS_LP_BB),
            QCLASS(Uniform_Polo_TP_OS_LP_BB_NoLogo),
            QCLASS(Uniform_Polo_TP_OS_TP_BB),
            QCLASS(Uniform_Polo_TP_OS_TP_BB_NoLogo),
            QCLASS(Uniform_Polo_TP_TS_GP_BB),
            QCLASS(Uniform_Polo_TP_TS_GP_BB_NoLogo),
            QCLASS(Uniform_Polo_TP_WS_GP_BB),
            QCLASS(Uniform_Polo_TP_WS_GP_BB_NoLogo),
            QCLASS(Uniform_Polo_TP_WS_LP_BB),
            QCLASS(Uniform_Polo_TP_WS_LP_BB_NoLogo),
            QCLASS(Uniform_Polo_TP_WS_TP_TB),
            QCLASS(Uniform_Polo_TP_WS_TP_TB_NoLogo),
            QCLASS(Uniform_TShirt_JP_BS_LP_BB),
            QCLASS(Uniform_TShirt_JP_BS_TP_BB),
            QCLASS(Uniform_TShirt_JP_GS_LP_BB),
            QCLASS(Uniform_TShirt_JP_GS_TP_BB),
            QCLASS(Uniform_TShirt_JP_LS_LP_BB),
            QCLASS(Uniform_TShirt_JP_WS_LP_BB)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"DPSO_backpacks", "DPSO_headgear", "DPSO_vests", "DPSO_weapons"};
        author = ECSTRING(main,Author);
        authors[] = {"Pomigit", "BadHabitz", "Jonpas", "Rory", "Kresky", "Tibernius", "Tyrone"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgWorlds.hpp"
#include "CfgGroups.hpp"