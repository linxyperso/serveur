/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
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
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        mags[] = {};
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_Katiba_F", "", 200000, -1 },
			{ "arifle_MXM_Black_F", "", 80000, -1 },
			{ "LMG_Zafir_F", "", 130000, -1 },
			{ "srifle_GM6_F", "", 1000000, -1 },
			{ "arifle_TRG21_F", "", 30000, -1 },
            { "arifle_SDAR_F", "", 17000, -1 },
			{ "MMG_01_tan_F", "", 500000, -1 },
			{ "srifle_DMR_05_blk_F", "", 65000, -1 },
            { "smg_SA_9a91", "", 165000, -1 },
            { "smg_SA_9a91_tac", "", 165000, -1 },
            { "smg_SA_m1a1_F", "", 165000, -1 },
            { "prifle_SA_MP153", "", 165000, -1 },
            { "prifle_SA_MP153_Tactical", "", 165000, -1 },
            { "prifle_SA_Mosin", "", 165000, -1 },
            { "hgun_SA_makarov_pm_F", "", 40000, -1 },
            { "hgun_SA_nambu_type14_F", "", 40000, -1 },
            { "Skyline_Galil_IMI_01_F", "", 200000, -1 },
            { "Skyline_Galil_IMI_Silencieux_01_F", "", 2000, -1 },
			{ "muzzle_snds_H", "", 100, -1 },
			{ "muzzle_snds_H_MG", "", 100, -1 },
			{ "muzzle_snds_B", "", 100, -1 },
            { "Rangefinder", "", 2000, -1 },
            { "optic_DMS", "", 2000, -1 },
			{ "optic_ACO_grn", "", 800, -1 },
			{ "optic_Holosight", "", 1500, -1 },
			{ "optic_Arco", "", 2500, -1 },
			{ "optic_NVS", "", 50000, -1 },
			{ "optic_Hamr", "", 30000, -1 },
			{ "optic_MRCO", "", 3500, -1 },
			{ "optic_SOS", "", 80000, -1 },
			{ "ItemGPS", "", 100, -1 },
			{ "SmokeShell", "", 3000, -1 },
			{ "optic_KHS_blk", "", 1500, -1 },
			{ "ToolKit", "", 250, -1 },
			{ "FirstAidKit", "", 150, -1 },
			{ "ItemMap", "", 100, -1 },
			{ "NVGoggles", "", 2000, -1 },
            { "hgun_flashlight_Sam_F", "", 2000, -1 }
			//{ "tf_anprc148jem_1", "Radio 5km", 2000 },
			//{ "tf_anprc155_coyote", "Radio Longue portee ", 2000 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_green", "", 125 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 125 },
            { "30Rnd_65x39_caseless_mag", "", 125 },
            { "150Rnd_762x54_Box", "", 125 },
            { "5Rnd_127x108_Mag", "", 125 },
            { "30Rnd_556x45_Stanag", "", 125 },
            { "20Rnd_556x45_UW_mag", "", 125 },
            { "150Rnd_93x64_Mag", "", 125 },
            { "10Rnd_93x64_DMR_05_Mag", "", 125 },
            { "20Rnd_SA_9x39", "", 125 },
            { "20Rnd_SA_45ACP", "", 125 },
            { "8Rnd_SA_12Gauge_Pellets", "", 125 },
            { "5Rnd_SA_762x54_Bullets", "", 125 },
            { "8Rnd_9x18_Mag", "", 125 },
            { "8Rnd_8x22_Mag", "", 125 },
            { "30Rnd_762x54_Mag", "", 125 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
			//{ "tf_anprc148jem_1", "Radio 5km", 2000 },
			//{ "tf_anprc155_coyote", "Radio Longue portee ", 2000 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_gav {
        name = "Armurerie GAV";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Vous n'êtes pas GAV!" };
        items[] = {
			{ "hgun_P07_snds_F", "", 2000 },
            { "muzzle_snds_L", "", 500 },
            { "arifle_SDAR_F", "", 5000 },
            { "optic_Hamr", "", 500 },
            { "Binocular", "", 50 },
            { "ItemGPS", "", 50 },
            { "ToolKit", "", 150 },
            { "FirstAidKit", "", 50 },
            { "ItemMap", "", 50 },
            { "ItemCompass", "", 500},
            { "ItemWatch", "", 50 },
            { "Chemlight_red", "", 100 },
            { "Chemlight_yellow", "", 100 },
            { "Chemlight_green", "", 100 },
            { "Chemlight_blue", "", 100 },
            { "NVGoggles_OPFOR", "", 500 },
            { "SMG_02_F", "", 5000 },
            { "optic_Arco", "", 4000 }
			//{ "tf_anprc152_1", "Radio 5km", 2000 },
			//{ "tf_rt1523g_big_rhs", "Radio Longue portee ", 2000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_9x21_Mag", "", 400 },
            { "30Rnd_65x39_caseless_mag", "", 400 },
            { "20Rnd_762x51_Mag", "", 400 },
            { "200Rnd_65x39_cased_Box", "", 400 },
            { "7Rnd_408_Mag", "", 400 }
        };
    };
    
    class cop_brigadier {
        name = "Armurerie Brigadier";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous n'êtes pas Brigadier!" };
        items[] = {
            { "hgun_P07_snds_F", "", 2000 },
            { "muzzle_snds_L", "", 500 },
            { "arifle_SDAR_F", "", 5000 },
            { "optic_Hamr", "", 500 },
            { "Binocular", "", 50 },
            { "ItemGPS", "", 50 },
            { "ToolKit", "", 150 },
            { "FirstAidKit", "", 50 },
            { "ItemMap", "", 50 },
            { "ItemCompass", "", 500},
            { "ItemWatch", "", 50 },
            { "Chemlight_red", "", 100 },
            { "Chemlight_yellow", "", 100 },
            { "Chemlight_green", "", 100 },
            { "Chemlight_blue", "", 100 },
            { "NVGoggles_OPFOR", "", 500 },
            { "SMG_02_F", "", 5000 },
            { "optic_Arco", "", 4000 },        
            { "arifle_MX_F", "", 10000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_9x21_Mag", "", 400 },
            { "30Rnd_65x39_caseless_mag", "", 400 },
            { "20Rnd_762x51_Mag", "", 400 },
            { "200Rnd_65x39_cased_Box", "", 400 },
            { "7Rnd_408_Mag", "", 400 }
        };
    };
    
    class cop_adjudant {
        name = "Armurerie Adjudant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Vous n'êtes pas Ajudant!" };
        items[] = {
            { "hgun_P07_snds_F", "", 2000 },
            { "muzzle_snds_L", "", 500 },
            { "arifle_SDAR_F", "", 5000 },
            { "optic_Hamr", "", 500 },
            { "Binocular", "", 50 },
            { "ItemGPS", "", 50 },
            { "ToolKit", "", 150 },
            { "FirstAidKit", "", 50 },
            { "ItemMap", "", 50 },
            { "ItemCompass", "", 500},
            { "ItemWatch", "", 50 },
            { "Chemlight_red", "", 100 },
            { "Chemlight_yellow", "", 100 },
            { "Chemlight_green", "", 100 },
            { "Chemlight_blue", "", 100 },
            { "NVGoggles_OPFOR", "", 500 },
            { "SMG_02_F", "", 5000 },
            { "optic_Arco", "", 4000 },        
            { "arifle_MX_F", "", 10000 },
            { "arifle_MXM_F", "", 15000 },
            { "arifle_SA_m4a1_sopmod", "", 25000 },
            { "optic_DMS", "", 4000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_9x21_Mag", "", 400 },
            { "30Rnd_65x39_caseless_mag", "", 400 },
            { "20Rnd_762x51_Mag", "", 400 },
            { "200Rnd_65x39_cased_Box", "", 400 },
            { "7Rnd_408_Mag", "", 400 },
            { "SA_30Rnd_556x45_M855A1_Stanag", "", 400 },
            { "SA_30Rnd_556x45_Mk262_Stanag", "", 400 }
        };
    };
    
    class cop_major {
        name = "Armurerie Major";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Vous n'êtes pas Major!" };
        items[] = {
            { "hgun_P07_snds_F", "", 2000 },
            { "muzzle_snds_L", "", 500 },
            { "arifle_SDAR_F", "", 5000 },
            { "optic_Hamr", "", 500 },
            { "Binocular", "", 50 },
            { "ItemGPS", "", 50 },
            { "ToolKit", "", 150 },
            { "FirstAidKit", "", 50 },
            { "ItemMap", "", 50 },
            { "ItemCompass", "", 500},
            { "ItemWatch", "", 50 },
            { "Chemlight_red", "", 100 },
            { "Chemlight_yellow", "", 100 },
            { "Chemlight_green", "", 100 },
            { "Chemlight_blue", "", 100 },
            { "NVGoggles_OPFOR", "", 500 },
            { "SMG_02_F", "", 5000 },
            { "optic_Arco", "", 4000 },        
            { "arifle_MX_F", "", 10000 },
            { "arifle_MXM_F", "", 15000 },
            { "arifle_SA_m4a1_sopmod", "", 25000 },
            { "optic_DMS", "", 4000 },
            { "arifle_Mk20_plain_F", "", 20000 },
            { "bg21_famas_FS_blk", "", 20000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_9x21_Mag", "", 400 },
            { "30Rnd_65x39_caseless_mag", "", 400 },
            { "20Rnd_762x51_Mag", "", 400 },
            { "200Rnd_65x39_cased_Box", "", 400 },
            { "7Rnd_408_Mag", "", 400 },
            { "SA_30Rnd_556x45_M855A1_Stanag", "", 400 },
            { "SA_30Rnd_556x45_Mk262_Stanag", "", 400 },
            { "25Rnd_556x45_famas", "", 400 }
        };
    };
    
    class cop_lieutenant {
        name = "Armurerie Lieutenant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Vous n'êtes pas Lieutenant!" };
        items[] = {
            { "hgun_P07_snds_F", "", 2000 },
            { "muzzle_snds_L", "", 500 },
            { "arifle_SDAR_F", "", 5000 },
            { "optic_Hamr", "", 500 },
            { "Binocular", "", 50 },
            { "ItemGPS", "", 50 },
            { "ToolKit", "", 150 },
            { "FirstAidKit", "", 50 },
            { "ItemMap", "", 50 },
            { "ItemCompass", "", 500},
            { "ItemWatch", "", 50 },
            { "Chemlight_red", "", 100 },
            { "Chemlight_yellow", "", 100 },
            { "Chemlight_green", "", 100 },
            { "Chemlight_blue", "", 100 },
            { "NVGoggles_OPFOR", "", 500 },
            { "SMG_02_F", "", 5000 },
            { "optic_Arco", "", 4000 },        
            { "arifle_MX_F", "", 10000 },
            { "arifle_MXM_F", "", 15000 },
            { "arifle_SA_m4a1_sopmod", "", 25000 },
            { "optic_DMS", "", 4000 },
            { "arifle_Mk20_plain_F", "", 20000 },
            { "bg21_famas_FS_blk", "", 20000 },
            { "srifle_EBR_F", "", 25000 },
            { "Skyline_Aug_A1_01_F", "", 25000 },
            { "optic_SOS", "", 4000 },
            { "Rangefinder", "", 4000 },
            { "SmokeShell", "", 4000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_9x21_Mag", "", 400 },
            { "30Rnd_65x39_caseless_mag", "", 400 },
            { "20Rnd_762x51_Mag", "", 400 },
            { "200Rnd_65x39_cased_Box", "", 400 },
            { "7Rnd_408_Mag", "", 400 },
            { "SA_30Rnd_556x45_M855A1_Stanag", "", 400 },
            { "SA_30Rnd_556x45_Mk262_Stanag", "", 400 },
            { "25Rnd_556x45_famas", "", 400 }
        };
    };
    
    class cop_capitaine {
        name = "Armurerie Capitaine";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Vous n'êtes pas Capitaine!" };
        items[] = {
            { "hgun_P07_snds_F", "", 2000 },
            { "muzzle_snds_L", "", 500 },
            { "arifle_SDAR_F", "", 5000 },
            { "optic_Hamr", "", 500 },
            { "Binocular", "", 50 },
            { "ItemGPS", "", 50 },
            { "ToolKit", "", 150 },
            { "FirstAidKit", "", 50 },
            { "ItemMap", "", 50 },
            { "ItemCompass", "", 500},
            { "ItemWatch", "", 50 },
            { "Chemlight_red", "", 100 },
            { "Chemlight_yellow", "", 100 },
            { "Chemlight_green", "", 100 },
            { "Chemlight_blue", "", 100 },
            { "NVGoggles_OPFOR", "", 500 },
            { "SMG_02_F", "", 5000 },
            { "optic_Arco", "", 4000 },        
            { "arifle_MX_F", "", 10000 },
            { "arifle_MXM_F", "", 15000 },
            { "arifle_SA_m4a1_sopmod", "", 25000 },
            { "optic_DMS", "", 4000 },
            { "arifle_Mk20_plain_F", "", 20000 },
            { "bg21_famas_FS_blk", "", 20000 },
            { "srifle_EBR_F", "", 25000 },
            { "Skyline_Aug_A1_01_F", "", 25000 },
            { "optic_SOS", "", 4000 },
            { "Rangefinder", "", 4000 },
            { "SmokeShell", "", 4000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_9x21_Mag", "", 400 },
            { "30Rnd_65x39_caseless_mag", "", 400 },
            { "20Rnd_762x51_Mag", "", 400 },
            { "200Rnd_65x39_cased_Box", "", 400 },
            { "7Rnd_408_Mag", "", 400 },
            { "SA_30Rnd_556x45_M855A1_Stanag", "", 400 },
            { "SA_30Rnd_556x45_Mk262_Stanag", "", 400 },
            { "25Rnd_556x45_famas", "", 400 }
        };
    };
    
    class cop_commandant {
        name = "Armurerie Commandant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Vous n'êtes pas Commandant!" };
        items[] = {
            { "hgun_P07_snds_F", "", 2000 },
            { "muzzle_snds_L", "", 500 },
            { "arifle_SDAR_F", "", 5000 },
            { "optic_Hamr", "", 500 },
            { "Binocular", "", 50 },
            { "ItemGPS", "", 50 },
            { "ToolKit", "", 150 },
            { "FirstAidKit", "", 50 },
            { "ItemMap", "", 50 },
            { "ItemCompass", "", 500},
            { "ItemWatch", "", 50 },
            { "Chemlight_red", "", 100 },
            { "Chemlight_yellow", "", 100 },
            { "Chemlight_green", "", 100 },
            { "Chemlight_blue", "", 100 },
            { "NVGoggles_OPFOR", "", 500 },
            { "SMG_02_F", "", 5000 },
            { "optic_Arco", "", 4000 },        
            { "arifle_MX_F", "", 10000 },
            { "arifle_MXM_F", "", 15000 },
            { "arifle_SA_m4a1_sopmod", "", 25000 },
            { "optic_DMS", "", 4000 },
            { "arifle_Mk20_plain_F", "", 20000 },
            { "bg21_famas_FS_blk", "", 20000 },
            { "srifle_EBR_F", "", 25000 },
            { "Skyline_Aug_A1_01_F", "", 25000 },
            { "optic_SOS", "", 4000 },
            { "Rangefinder", "", 4000 },
            { "SmokeShell", "", 4000 },
            { "LMG_Mk200_F", "", 30000 },
            { "HandGrenade_Stone", "Grenade Flash", 1000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_9x21_Mag", "", 400 },
            { "30Rnd_65x39_caseless_mag", "", 400 },
            { "20Rnd_762x51_Mag", "", 400 },
            { "200Rnd_65x39_cased_Box", "", 400 },
            { "7Rnd_408_Mag", "", 400 },
            { "SA_30Rnd_556x45_M855A1_Stanag", "", 400 },
            { "SA_30Rnd_556x45_Mk262_Stanag", "", 400 },
            { "25Rnd_556x45_famas", "", 400 }
        };
    };
    
    class cop_colonel {
        name = "Armurerie Colonel";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Vous n'êtes pas Colonel!" };
        items[] = {
            { "hgun_P07_snds_F", "", 2000 },
            { "muzzle_snds_L", "", 500 },
            { "arifle_SDAR_F", "", 5000 },
            { "optic_Hamr", "", 500 },
            { "Binocular", "", 50 },
            { "ItemGPS", "", 50 },
            { "ToolKit", "", 150 },
            { "FirstAidKit", "", 50 },
            { "ItemMap", "", 50 },
            { "ItemCompass", "", 500},
            { "ItemWatch", "", 50 },
            { "Chemlight_red", "", 100 },
            { "Chemlight_yellow", "", 100 },
            { "Chemlight_green", "", 100 },
            { "Chemlight_blue", "", 100 },
            { "NVGoggles_OPFOR", "", 500 },
            { "SMG_02_F", "", 5000 },
            { "optic_Arco", "", 4000 },        
            { "arifle_MX_F", "", 10000 },
            { "arifle_MXM_F", "", 15000 },
            { "arifle_SA_m4a1_sopmod", "", 25000 },
            { "optic_DMS", "", 4000 },
            { "arifle_Mk20_plain_F", "", 20000 },
            { "bg21_famas_FS_blk", "", 20000 },
            { "srifle_EBR_F", "", 25000 },
            { "Skyline_Aug_A1_01_F", "", 25000 },
            { "optic_SOS", "", 4000 },
            { "Rangefinder", "", 4000 },
            { "SmokeShell", "", 4000 },
            { "LMG_Mk200_F", "", 30000 },
            { "HandGrenade_Stone", "Grenade Flash", 1000 },
            { "srifle_LRR_F", "", 40000 },
            { "optic_LRPS", "", 4000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_9x21_Mag", "", 400 },
            { "30Rnd_65x39_caseless_mag", "", 400 },
            { "20Rnd_762x51_Mag", "", 400 },
            { "200Rnd_65x39_cased_Box", "", 400 },
            { "7Rnd_408_Mag", "", 400 },
            { "SA_30Rnd_556x45_M855A1_Stanag", "", 400 },
            { "SA_30Rnd_556x45_Mk262_Stanag", "", 400 },
            { "25Rnd_556x45_famas", "", 400 }
        };
    };
    
    class cop_general {
        name = "Armurerie Général";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "Vous n'êtes pas Général!" };
        items[] = {
            { "hgun_P07_snds_F", "", 2000 },
            { "muzzle_snds_L", "", 500 },
            { "arifle_SDAR_F", "", 5000 },
            { "optic_Hamr", "", 500 },
            { "Binocular", "", 50 },
            { "ItemGPS", "", 50 },
            { "ToolKit", "", 150 },
            { "FirstAidKit", "", 50 },
            { "ItemMap", "", 50 },
            { "ItemCompass", "", 500},
            { "ItemWatch", "", 50 },
            { "Chemlight_red", "", 100 },
            { "Chemlight_yellow", "", 100 },
            { "Chemlight_green", "", 100 },
            { "Chemlight_blue", "", 100 },
            { "NVGoggles_OPFOR", "", 500 },
            { "SMG_02_F", "", 5000 },
            { "optic_Arco", "", 4000 },        
            { "arifle_MX_F", "", 10000 },
            { "arifle_MXM_F", "", 15000 },
            { "arifle_SA_m4a1_sopmod", "", 25000 },
            { "optic_DMS", "", 4000 },
            { "arifle_Mk20_plain_F", "", 20000 },
            { "bg21_famas_FS_blk", "", 20000 },
            { "srifle_EBR_F", "", 25000 },
            { "Skyline_Aug_A1_01_F", "", 25000 },
            { "optic_SOS", "", 4000 },
            { "Rangefinder", "", 4000 },
            { "SmokeShell", "", 4000 },
            { "LMG_Mk200_F", "", 30000 },
            { "HandGrenade_Stone", "Grenade Flash", 1000 },
            { "srifle_LRR_F", "", 40000 },
            { "optic_LRPS", "", 4000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50 },
            { "30Rnd_556x45_Stanag", "", 50 },
            { "30Rnd_9x21_Mag", "", 400 },
            { "30Rnd_65x39_caseless_mag", "", 400 },
            { "20Rnd_762x51_Mag", "", 400 },
            { "200Rnd_65x39_cased_Box", "", 400 },
            { "7Rnd_408_Mag", "", 400 },
            { "SA_30Rnd_556x45_M855A1_Stanag", "", 400 },
            { "SA_30Rnd_556x45_Mk262_Stanag", "", 400 },
            { "25Rnd_556x45_famas", "", 400 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
			//{ "tf_anprc152_1", "Radio 5km", 2000 },
			//{ "tf_rt1523g_big_rhs", "Radio Longue portee ", 2000 }
        };
        mags[] = {};
    };
};
