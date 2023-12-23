class CfgWeapons
{
    #include "configs\Helmets_P1.hpp"
    #include "configs\Helmets_P1_Pilot.hpp"
    #include "configs\Helmets_P1_SpecOp.hpp"
    #include "configs\Helmets_P2.hpp"
    #include "configs\Helmets_P2_Pilot.hpp"
    #include "configs\Helmets_P2_SpecOp.hpp"
    #include "configs\Helmets_Insulated.hpp"
    #include "configs\Helmets_ARC.hpp"
    #include "configs\Helmets_ARF.hpp"
    #include "configs\Helmets_BARC.hpp"

    #include "configs\Uniforms.hpp"

    class CLASS(Vest_Commander);
    class CLASS(Vest_Commander_Keeli): CLASS(Vest_Commander)
    {
        displayName = "[KC] INF Vest 18 ('Keeli')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\officer\Keeli_camo1_co.paa),
            ""
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(Vest_Officer);
    class CLASS(Vest_Officer_Ponds): CLASS(Vest_Officer);
    {
        displayName = "[KC] INF Vest 12+ ('Ponds')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\officer\Ponds_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;

        class ItemInfo: ItemInfo
        {
            containerClass = "Supply250"; // To match medic vests
        };
    };
    class CLASS(Vest_Officer_Rat): CLASS(Vest_Officer);
    {
        displayName = "[KC] INF Vest 12+ ('Rat')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\officer\Rat_camo1_co.paa)
        };

        GVAR(isCustom) = TRUE;
    };

    class CLASS(NVG_Officer);
    class CLASS(NVG_Officer_Keeli): CLASS(NVG_Officer)
    {
        displayName = "[KC] Clone P2 Officer Visor ('Keeli')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\nvgs\Officer_Keeli_camo1_co.paa)
        };
    };
};