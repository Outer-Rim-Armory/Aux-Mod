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