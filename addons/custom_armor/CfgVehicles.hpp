class CfgVehicles {
    #include "configs\Units.hpp"

    class CLASS(Backpack_heavy_Base);
    class CLASS(cloneBackpack_heavy_Dexus): CLASS(Backpack_heavy_Base) {
        displayName = "[KC] INF Heavy Backpack ('Dexus')";

        model = "\ls\core\addons\characters_clone_legacy\backpacks\heavy\ls_gar_heavy_backpack.p3d";
        hiddenselections[] = {"backpack", "cover", "pouches", "tube"};
        hiddenselectionstextures[] = {
            QPATHTOF(data\backpacks\Dexus\Backpack_co.paa),
            QPATHTOF(data\backpacks\Dexus\Cover_co.paa),
            QPATHTOF(data\backpacks\Dexus\Pouches_co.paa),
            QPATHTOF(data\backpacks\Dexus\Tube_co.paa)
        };
    };

    class CLASS(cloneBackpack_heavy_Rev): CLASS(Backpack_heavy_Base) {
        displayName = "[KC] INF Heavy Backpack ('Rev')";

        model = "\ls\core\addons\characters_clone_legacy\backpacks\heavy\ls_gar_heavy_backpack.p3d";
        hiddenselections[] = {"backpack", "cover", "pouches", "tube"};
        hiddenselectionstextures[] = {
            QPATHTOF(data\backpacks\Rev\Backpack_co.paa),
            QPATHTOF(data\backpacks\Rev\Cover_co.paa),
            QPATHTOF(data\backpacks\Rev\Pouches_co.paa),
            QPATHTOF(data\backpacks\Rev\Tube_co.paa)
        };
    };

    class CLASS(Backpack_Radio_Base);
    class CLASS(cloneBackpack_radioHeavy_Jaws): CLASS(Backpack_Radio_Base) {
        displayName = "[KC] INF Radio Backpack ('Jaws')";

        model = "\ls\core\addons\characters_clone_legacy\backpacks\medium\ls_gar_mediumRadio_backpack.p3d";
        hiddenselections[] = {"backpack", "radio", "screen", "pouches"};
        hiddenselectionstextures[] = {
            QPATHTOF(data\backpacks\Jaws\Backpack_co.paa),
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\radio_co.paa",
            QPATHTOF(data\backpacks\Jaws\Screen_co.paa),
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\pouches_co.paa"
        };
    };

    class CLASS(Backpack_Medic_Radio_Base);
    class CLASS(cloneBackpack_medicRadio_Hazard): CLASS(Backpack_Medic_Radio_Base) {
        displayName = "[KC] INF Medic Radio Backpack ('Hazard')";

        model = "\ls\core\addons\characters_clone_legacy\backpacks\heavy\ls_gar_heavy_backpack.p3d";
        hiddenselections[] = {"backpack", "cover", "pouches", "tube"};
        hiddenselectionstextures[] = {
            QPATHTOF(data\backpacks\Hazard\Backpack_co.paa),
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\cover_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\pouches_co.paa",
            QPATHTOF(data\backpacks\Hazard\Tube_co.paa)
        };
    };

    class CLASS(Jetpack_JT12_LR);
    class CLASS(Leon_JT12): CLASS(Jetpack_JT12_LR) {
        displayName = "[KC] JT-12 Jetpack ('Leon')";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Leon\Leon_JT12_co.paa),
            QPATHTOF(data\backpacks\jetpacks\KC_JT12_net_co.paa)
        };
    };

    class CLASS(cloneBackpack_commando);
    class CLASS(cloneBackpack_commando_EOD);
    class CLASS(cloneBackpack_commando_Tech);
    class CLASS(Spectre_Backpack): CLASS(cloneBackpack_commando) {
        displayName = "Spectre's Commando Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Spectre\Spectre_Backpack_co.paa),
            QPATHTOF(data\backpacks\Spectre\Spectre_Backpack_co.paa)
        };
    };

    class CLASS(Tugz_Backpack): CLASS(cloneBackpack_commando) {
        displayName = "[KC] Tugz Commando Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Tugz\Tugz_Backpack_co.paa),
            QPATHTOF(data\backpacks\Tugz\Tugz_Backpack_co.paa)
        };
    };
    class CLASS(Jaws_Backpack): CLASS(cloneBackpack_commando_EOD) {
        displayName = "[KC] Jaws Commando Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Jaws\Jaws_Backpack_co.paa),
            QPATHTOF(data\backpacks\Jaws\Jaws_Backpack_co.paa)
        };
    };
    class CLASS(Jaws_Worn_Backpack): CLASS(cloneBackpack_commando_EOD) {
        displayName = "[KC] Jaws Commando Backpack ('Worn')";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Jaws\Jaws_Worn_Backpack_co.paa),
            QPATHTOF(data\backpacks\Jaws\Jaws_Worn_Backpack_co.paa)
        };
    };
    class CLASS(Cutthroat_Backpack): CLASS(cloneBackpack_commando_Tech) {
        displayName = "[KC] Cutthroat Commando Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Cutthroat\Cutthroat_Backpack_co.paa),
            QPATHTOF(data\backpacks\Cutthroat\Cutthroat_Backpack_co.paa),
            QPATHTOF(data\backpacks\Cutthroat\Cutthroat_Tech_Backpack_co.paa)
        };
    };

    #include "configs\GroundHolders.hpp"
};
