class CfgVehicles {
    #include "configs\Units.hpp"

    class CLASS(cloneBackpack_standard);
    class CLASS(cloneBackpack_Keeli): CLASS(cloneBackpack_standard) {
        displayName = "[KC] Clone Trooper Backpack ('Keeli')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Keeli_camo1_co.paa),
            QPATHTOF(data\backpacks\Keeli_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };

    #include "configs\GroundHolders.hpp"
};