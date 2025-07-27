class CfgVehicles {
    class 3as_V19_base;
    class CLASS(V19): 3as_V19_base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);

        displayName = "V-19 Torrent";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {
            "3as_V19_Medium_Cannon",
            "3as_ARC_Missile_AA",
            "weapon_AMRAAMLauncher",
            "CMFlareLauncher"
            };
        magazines[] = {
            "3as_PylonMissile_ARC_2Rnd_Missile_AA",
            "3as_PylonMissile_ARC_2Rnd_Missile_AA",
            "3as_PylonMissile_ARC_2Rnd_Missile_AA",
            "3as_PylonMissile_ARC_2Rnd_Missile_AA",
            "PylonRack_Missile_AMRAAM_C_x2",
            "PylonRack_Missile_AMRAAM_C_x2",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "3as_V19_800Rnd_Medium_shells",
            "3as_V19_800Rnd_Medium_shells",
            "3as_V19_800Rnd_Medium_shells"
        };

        hiddenselections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = {
            "3as\3as_v19\textures\wings_co.paa",
            "3as\3as_v19\textures\wing plates_co.paa",
            "3as\3as_v19\textures\hull_co.paa",
            "3as\3as_v19\textures\gun gear_co.paa",
            "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
            "3as\3as_v19\textures\pizzlepit_co.paa"
            };

        cabinOpenSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 1.77828 , 1, 40};
        cabinOpenSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 10, 1, 40};
        cabinCloseSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 1.77828, 1, 40};
        cabinCloseSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 10, 1, 40};
    };
};
