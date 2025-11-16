class CLASS(Vest_Engineer_CT): CLASS(Vest_Basic) {
    displayName = "[KC] ENG Vest 01 (Trooper)";

    model = "\ls\core\addons\characters_clone_legacy\vests\engineer\ls_gar_engineer_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa", // Suspenders
        "\ls\core\addons\characters_clone_legacy\vests\engineer\data\heavy_accessories_engineer_co.paa"  // Holster
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\engineer\ls_gar_engineer_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class CLASS(Vest_Engineer_CS): CLASS(Vest_CS) {
    displayName = "[KC] ENG Vest 06 (NCO)";

    model = "\ls\core\addons\characters_clone_legacy\vests\engineer\ls_gar_engineerNCO_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6", "ammo"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa",  // Suspender
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),   // Chest Ammo Pack
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        "\ls\core\addons\characters_clone_legacy\vests\common\heavy\heavy_accessories_co.paa",  // Tablet
        "\ls\core\addons\characters_clone_legacy\vests\arc\data\arc_accessories_co.paa",        // Leg Guards
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Arm Ammo
    };

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\engineer\ls_gar_engineerNCO_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6", "ammo"};
    };
};

class CLASS(Vest_Engineer_Officer): CLASS(Vest_Officer) {
    displayName = "[KC] ENG Vest 12 (Officer)";

    model = "\ls\core\addons\characters_clone_legacy\vests\engineer\ls_gar_engineerOfficer_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\vests\engineer\data\heavy_accessories_engineer_co.paa",  // Holster
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)  // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_officer_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\engineer\ls_gar_engineerOfficer_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };
};
