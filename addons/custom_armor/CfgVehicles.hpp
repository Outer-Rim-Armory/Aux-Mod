class CfgVehicles {
    #include "configs\Units.hpp"

    class CLASS(cloneBackpack_standard);
    class CLASS(cloneBackpack_standard_Keeli): CLASS(cloneBackpack_standard) {
        displayName = "[KC] Clone Trooper Backpack ('Keeli')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Keeli\Backpack_co.paa),
            QPATHTOF(data\backpacks\Keeli\Backpack_co.paa)
        };

        GVAR(isCustom) = TRUE;
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
            QPATHTOF(data\backpacks\Dexus\Tube_co.paa),
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(Backpack_Medic_Radio_Base);
    class CLASS(cloneBackpack_medicRadio_Hazard): CLASS(Backpack_heavy_Base) {
        displayName = "[KC] INF Medic Radio Backpack ('Hazard')";

        model = "\ls_equipment_bluefor\backpack\gar\backpack\ls_gar_radio_backpack.p3d";
        hiddenselections[] = {"backpack", "radio", "screen"};
        hiddenselectionstextures[] = {
            QPATHTOF(data\backpacks\Hazard\Backpack_co.paa),
            "\ls_equipment_bluefor\backpack\gar\backpack\data\radio_co.paa",
            QPATHTOF(data\backpacks\Hazard\Screen_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };

    #include "configs\GroundHolders.hpp"
};