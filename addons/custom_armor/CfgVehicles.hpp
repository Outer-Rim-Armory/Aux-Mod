class CfgVehicles {
    #include "configs\Units.hpp"

    class CLASS(cloneBackpack_standard);
    class CLASS(cloneBackpack_standard_Keeli): CLASS(cloneBackpack_standard) {
        displayName = "[KC] Clone Trooper Backpack ('Keeli')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Keeli_camo1_co.paa),
            QPATHTOF(data\backpacks\Keeli_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(Backpack_heavy_Base);
    class CLASS(cloneBackpack_heavy_Dexus): CLASS(Backpack_heavy_Base) {
        displayName = "[KC] INF Heavy Backpack ('Dexus')";

        model = "\ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavy_backpack.p3d";
        hiddenselections[] = {"backpack", "cover", "pouches", "tube"};
        hiddenselectionstextures[] = {
            QPATHTOF(data\backpacks\Dexus\backpack_co.paa),
            QPATHTOF(data\backpacks\Dexus\cover_co.paa),
            QPATHTOF(data\backpacks\Dexus\pouches_co.paa),
            QPATHTOF(data\backpacks\Dexus\tube_co.paa),
        };

        GVAR(isCustom) = TRUE;
    };

    #include "configs\GroundHolders.hpp"
};