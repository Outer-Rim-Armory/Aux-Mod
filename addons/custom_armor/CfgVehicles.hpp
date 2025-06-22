class CfgVehicles {
    #include "configs\Units.hpp"

    class CLASS(cloneBackpack_standard);
    class CLASS(cloneBackpack_standard_Keeli): CLASS(cloneBackpack_standard) {
        displayName = "[KC] Clone Trooper Backpack ('Keeli')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Keeli\Backpack_co.paa),
            QPATHTOF(data\backpacks\Keeli\Backpack_co.paa)
        };
    };

    class CLASS(Backpack_heavy_Base);
    class CLASS(cloneBackpack_heavy_Dexus): CLASS(Backpack_heavy_Base) {
        displayName = "[KC] INF Heavy Backpack ('Dexus')";

        model = "\ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavy_backpack.p3d";
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

        model = "\ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavy_backpack.p3d";
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

        model = "\ls_equipment_bluefor\backpack\gar\mediumBackpack\ls_gar_mediumRadio_backpack.p3d";
        hiddenselections[] = {"backpack", "radio", "screen", "pouches"};
        hiddenselectionstextures[] = {
            QPATHTOF(data\backpacks\Jaws\Backpack_co.paa),
            "\ls_equipment_bluefor\backpack\gar\backpack\data\radio_co.paa",
            QPATHTOF(data\backpacks\Jaws\Screen_co.paa),
            "\ls_equipment_bluefor\backpack\gar\backpack\data\pouches_co.paa"
        };
    };

    class CLASS(Backpack_Medic_Radio_Base);
    class CLASS(cloneBackpack_medicRadio_Hazard): CLASS(Backpack_Medic_Radio_Base) {
        displayName = "[KC] INF Medic Radio Backpack ('Hazard')";

        model = "\ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavy_backpack.p3d";
        hiddenselections[] = {"backpack", "cover", "pouches", "tube"};
        hiddenselectionstextures[] = {
            QPATHTOF(data\backpacks\Hazard\Backpack_co.paa),
            "\ls_equipment_bluefor\backpack\gar\backpack\data\cover_co.paa",
            "\ls_equipment_bluefor\backpack\gar\backpack\data\pouches_co.paa",
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
    class CLASS(Spectre_Backpack): CLASS(cloneBackpack_commando) {
        displayName = "Spectre's Commando Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Spectre\Spectre_Backpack_co.paa),
            QPATHTOF(data\backpacks\Spectre\Spectre_Backpack_co.paa)
        };
    };

    #include "configs\GroundHolders.hpp"
};