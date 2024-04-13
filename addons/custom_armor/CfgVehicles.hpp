class CfgVehicles {
    #include "configs\Units.hpp"

    class CLASS(Backpack_Base);
    class CLASS(Backpack_Keeli): CLASS(Backpack_Base) {
        displayName = "[KC] Clone Trooper Backpack ('Keeli')";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\Keeli_camo1_co.paa),
            QPATHTOF(data\backpacks\Keeli_camo1_co.paa),
            "",
            "",
            ""
        };

        GVAR(isCustom) = TRUE;
    };

    #include "configs\GroundHolders.hpp"
};