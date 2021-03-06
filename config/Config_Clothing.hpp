/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" }, //Apex DLC
			{ "A3L_Priest_Uniform", "Priest Uniform", 1500, "" },
			{ "A3L_Suit_Uniform", "Suit", 1500, "" },
			{ "A3L_Dude_Outfit", "Dude outfit", 1500, "" },
			{ "A3L_Farmer_Outfit", "Farmer Outfit", 1500, "" },
			{ "A3L_Worker_Outfit", "Worker Outfit", 1500, "" },
			{ "A3LShirt", "Arma 3 Life Shirt", 1500, "" },
			{ "A3L_Poop2day", "I pooped today Shirt", 1500, "" },
			{ "A3L_A3LogoPants", "A3L Logo Pants", 1500, "" },
			{ "pervt_uni", "Pervert Shirt", 1500, "" },
			{ "BluePlaid_uni", "", 1500, "" },
			{ "OrangePlaid_uni", "", 1500, "" },
			{ "PinkPlaid_uni", "", 1500, "" },
			{ "RedPlaid_uni", "", 1500, "" },
			{ "YellowPlaid_uni", "", 1500, "" },
			{ "checkered_uni", "", 1500, "" },
			{ "GbGyBr_uni", "", 1500, "" },
			{ "GnBlBr_uni", "", 1500, "" },
			{ "GnGyBr_uni", "", 1500, "" },
			{ "GyBlBr_uni", "", 1500, "" },
			{ "kingfish_uni", "", 1500, "" },
			{ "mothertrucker_uni", "", 1500, "" },
			{ "OrBlBr_uni", "", 1500, "" },
			{ "OrGnGy_uni", "", 1500, "" },
			{ "OrGyBr_uni", "", 1500, "" },
			{ "PkGnGy_uni", "", 1500, "" },
			{ "PkGyBr_uni", "", 1500, "" },
			{ "RdBlBr_uni", "", 1500, "" },
			{ "RdGnGy_uni", "", 1500, "" },
			{ "RdGyBr_uni", "", 1500, "" },
			{ "sohoku_uni", "", 1500, "" },
			{ "WhBlBr_uni", "", 1500, "" },
			{ "WhGyBr_uni", "", 1500, "" },
			{ "YlBlBr_uni", "", 1500, "" },
			{ "YlGnGy_unI", "", 1500, "" },
			{ "YlGyBr_uni", "", 1500, "" },
			{ "racer_uni", "", 1500, "" },
			{ "taxi_uni", "", 1500, "" },
			{ "arma3", "", 1500, "" },
			{ "arma3black", "", 1500, "" },
			{ "ATI", "", 1500, "" },
			{ "tacobell", "", 1500, "" },
			{ "dutch", "", 1500, "" },
			{ "hanacd", "", 1500, "" },
			{ "nvidia", "", 1500, "" },
			{ "walkingdead", "", 1500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" },
			{ "A3L_Legoman", "", 1500, "" },
			{ "A3L_soa_helmet", "", 1500, "" },
			{ "A3L_gangster_hat", "", 1500, "" },
			{ "A3L_Mask", "", 1500, "" },
			{ "A3L_longhairblack", "", 1500, "" },
			{ "A3L_longhairblond", "", 1500, "" },
			{ "A3L_longhairbrown", "", 1500, "" },
			{ "A3L_Crown", "", 1500, "" },
			{ "cowboyhat", "", 1500, "" },
			{ "A3L_mexicanhat", "", 1500, "" },
			{ "santahat", "", 1500, "" },
			{ "A3L_Sombrero", "", 1500, "" },
			{ "turban", "", 1500, "" },
			{ "jokermask", "", 1500, "" },
			{ "A3L_Halloween_PredatorMask", "", 1500, "" },
			{ "A3L_russianhat", "", 1500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_Marshal", "Cadet Uni", 10, "call life_coplevel >= 1" },
			{ "A3L_PDOFC", "OFC PD", 10, "call life_coplevel >= 2" },
			{ "A3L_COFC", "OFC DOC", 10, "call life_coplevel >= 2" },
			{ "A3L_HPOFC", "OFC ST", 10, "call life_coplevel >= 2" },
			{ "A3L_PDCPL", "CPL PD", 10, "call life_coplevel >= 3" },
			{ "A3L_CCPL", "CPL DOC", 10, "call life_coplevel >= 3" },
			{ "A3L_HPCPL", "CPL ST", 10, "call life_coplevel >= 3" },
			{ "A3L_PDSGT", "SGT PD", 10, "call life_coplevel >= 3" },
			{ "A3L_CSGT", "SGT DOC", 10, "call life_coplevel >= 3" },
			{ "A3L_HPSGT", "SGT ST", 10, "call life_coplevel >= 3" },
			{ "A3L_PDLT", "LT PD", 10, "call life_coplevel >= 6" },
			{ "A3L_CLT", "LT DOC", 10, "call life_coplevel >= 6" },
			{ "A3L_HPLT", "LT ST", 10, "call life_coplevel >= 6" },
			{ "A3L_PDCPT", "CPT PD", 10, "call life_coplevel >= 6" },
			{ "A3L_CCPT", "CPT DOC", 10, "call life_coplevel >= 6" },
			{ "A3L_HPCPT", "CPT ST", 10, "call life_coplevel >= 6" },
			{ "TRYK_U_B_Woodland", "", 10, "call life_coplevel >= 2" },
			{ "U_PMC_CombatUniformRS_BSSPSB", "Swat Patrol", 10, "call life_coplevel >= 5" },
			{ "swat_uni1", "Swat Op", 10, "call life_coplevel >= 2" },
			{ "A3L_PDASSTCHIEF", "Asst Chief", 10, "call life_coplevel >= 7" },
			{ "A3L_PDCHIEF", "Chief", 10, "call life_coplevel >= 7" },
			{ "KAEL_SUITS_BR_F12", "Suit Formal", 10, "call life_coplevel >= 3" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "jamie_pcapblack", "PD/SWAT Cap", 10, "" },
            { "Campaign_Hat_Dark", "ST Hat", 10, "call life_coplevel >= 2" },
			{ "Campaign_Hat_Light", "DOC Hat", 10, "call life_coplevel >= 1" },
			{ "TRYK_H_Helmet_WOOD", "", 10, "call life_coplevel >= 2" },
			{ "TCG_swathelmet", "SWAT P{", 10, "call life_coplevel >= 2" },
			{ "H_Beret_blk", "Beret", 10, "call life_coplevel >= 3" }

        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
			{ "G_mas_wpn_wrap_mask_g", "", 10, "call life_coplevel >= 2" },
			{ "Mask_M50", "Gas Mask", 10, "call life_coplevel >= 1" },
			{ "G_mas_wpn_wrap_mask_b", "SWAT OP", 10, "call life_coplevel >= 5" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "jamie_reflective", "Cadet Vest", 10, "call life_coplevel >= 1" },
			{ "jamie_corrections_vest", "DOC", 10, "call life_coplevel >= 2" },
			{ "jamie_black2", "MP Code Red", 10, "call life_coplevel >= 1" },
            { "CRT_VEST_BLACK", "DOC Code Red", 10, "call life_coplevel >= 1" },
			{ "kaelvest_tr1", "ST Vest", 10, "call life_coplevel >= 2" },
			{ "jamie_reflective", "Traffic Vest", 10, "call life_coplevel >= 2" },
			{ "TRYK_V_PlateCarrier_POLICE", "ST Code Red", 10, "call life_coplevel >= 2" },
            { "jamie_black", "Main Patrol", 10, "call life_coplevel >= 1" }, 
			{ "TCG_swatvest1", "SWAT Vest", 10, "call life_coplevel >= 5" },
			{ "TCG_swatvest2", "SWAT CPL", 10, "call life_coplevel >= 5" },
			{ "TCG_swatvest3", "SWAT SGT", 10, "call life_coplevel >= 5" },
			{ "TRYK_V_tacv1LP_BK", "SWAT CMD", 10, "call life_coplevel >= 2" },
			{ "SWATvest1", "SWAT Op", 10, "call life_coplevel >= 2" },
			{ "", "", 10, "call life_coplevel >= 2" },
            { "jamie_black2", "SC Vest", 10, "call life_coplevel >= 6" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "cl3_police_tacticalbelt", "Radio", 0, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
