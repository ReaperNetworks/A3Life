/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, 500, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
			{ "tf_anprc152", "Radio", 200, 100, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 10, 0, "" },
			{ "Rangefinder", "", 10, 0, "" },
            { "ItemGPS", "", 10, 0, "" },
            { "FirstAidKit", "", 10, 0, "" },
            { "NVGoggles", "", 10, 0, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 10, 0, "" },
            { "Taser_26", "", 125, 0, "" },
			{ "hgun_mas_acp_F", "", 125, 0, "call life_coplevel >= 1" },
			{ "RH_m9", "", 125, 0, "" },
			{ "RH_deagle", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_cz75", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_usp", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_m1911", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_uspm", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_m9", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_g17", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_m4", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_m4a1_ris", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_m16a1", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_m16a3", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_m16a4", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_hk416", "", 125, 0, "call life_coplevel >= 2" },
			{ "hlc_rifle_Bushmaster300", "", 125, 0, "call life_coplevel >= 2" },
			{ "arifle_mas_bizon", "", 125, 0, "call life_coplevel >= 2" },
			{ "hlc_rifle_awcovert_BL", "", 125, 0, "call life_coplevel >= 2" },
			{ "RH_ar10", "", 125, 0, "call life_coplevel >= 2" },
			{ "arifle_mas_g36c", "", 125, 0, "call life_coplevel >= 2" },
			{ "hlc_smg_mp5a4", "", 125, 0, "call life_coplevel >= 2" },
			{ "srifle_mas_m24", "", 125, 0, "call life_coplevel >= 2" },
			{ "prpl_benelli", "", 125, 0, "call life_coplevel >= 2" }
        };
        mags[] = {
            { "26_cartridge", "", 20, 0, "call life_coplevel >= 1" },
			{ "hlc_5rnd_300WM_FMJ_AWM", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_20Rnd_762x51_AR10", "", 20, 0, "call life_coplevel >= 1" },
			{ "12Rnd_mas_45acp_Mag", "", 20, 0, "call life_coplevel >= 1" },
			{ "64Rnd_mas_9x18_mag", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_7Rnd_50_AE", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_16Rnd_9x19_cz", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_12Rnd_45cal_usp", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_7Rnd_45cal_m1911", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_16Rnd_40cal_usp", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_15Rnd_9x19_M9", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_17Rnd_9x19_g17", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_30Rnd_556x45_M855A1", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_30Rnd_556x45_Mk262", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_30Rnd_556x45_Mk318", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_20Rnd_556x45_M855A1", "", 20, 0, "call life_coplevel >= 1" },
			{ "30Rnd_556x45_Stanag", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_30Rnd_762x35_FMJ", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_20Rnd_762x51_M80A1", "", 20, 0, "call life_coplevel >= 1" },
			{ "RH_32Rnd_9mm_M822", "", 20, 0, "call life_coplevel >= 1" },
			{ "30Rnd_mas_556x45_Stanag", "", 20, 0, "call life_coplevel >= 1" },
			{ "hlc_30Rnd_9x19_B_MP5", "", 20, 0, "call life_coplevel >= 1" },
			{ "5Rnd_mas_762x51_Stanag", "", 20, 0, "call life_coplevel >= 1" },
			{ "prpl_8Rnd_12Gauge_Pellets", "", 20, 0, "call life_coplevel >= 1" }
			
        };
        accs[] = {
            { "FHQ_optic_LeupoldERT", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_eotech553", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_eotech553mag", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_eotexps3", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_eothhs1", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_compm4s", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_compm2", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_compm2l", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_reflex", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_shortdot", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_t1", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_m3lr", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_ta01nsn", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_ta31rco", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_ta31rmr", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_ta648", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_accupoint", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_m145", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_c79", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_cmore", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_LTdocter", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_LTdocterl", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_zpoint", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_anpvs4", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_anpvs10", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_pas13cl", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_pas13cm", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_pas13cmg", "", 10, 0, "call life_coplevel >= 2" },
			{ "RH_pas13ch", "", 10, 0, "call life_coplevel >= 2" },
			{ "optic_LRPS", "", 20, 0, "call life_coplevel >= 2" }
			
			
        };
    };
	

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
