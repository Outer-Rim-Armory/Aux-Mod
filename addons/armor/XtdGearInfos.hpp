// Done externally since these are sometimes inherited from
// TODO: Only declare base classes externally
class XtdGearInfos {
    class CfgWeapons {
        #include "XtdGear\Helmets_P1.hpp"
        #include "XtdGear\Helmets_P1_Geonosis.hpp"
        #include "XtdGear\Helmets_P1_Pilot.hpp"
        #include "XtdGear\Helmets_P1_Tanker.hpp"

        #include "XtdGear\Helmets_P2.hpp"
        #include "XtdGear\Helmets_P2_Insulated.hpp"
        #include "XtdGear\Helmets_P2_Pilot.hpp"
        #include "XtdGear\Helmets_P2_Tanker.hpp"

        #include "XtdGear\Helmets_Airborne.hpp"
        #include "XtdGear\Helmets_Engineer.hpp"

        #include "XtdGear\Helmets_ARC.hpp"
        #include "XtdGear\Helmets_ARF.hpp"
        #include "XtdGear\Helmets_BARC.hpp"

        #include "XtdGear\Uniforms_Ranks_Infantry.hpp"
        #include "XtdGear\Uniforms_Ranks_Geonosis.hpp"
        #include "XtdGear\Uniforms_P2_Insulated.hpp"
        #include "XtdGear\Uniforms_Pilot.hpp"
        #include "XtdGear\Uniforms_Tanker.hpp"
        #include "XtdGear\Uniforms_ARC.hpp"
        #include "XtdGear\Uniforms_ARF.hpp"

        #include "XtdGear\Vests_Infantry.hpp"
        #include "XtdGear\Vests_Airborne.hpp"
        #include "XtdGear\Vests_Engineer.hpp"
        #include "XtdGear\Vests_ARC.hpp"
        #include "XtdGear\Vests_Commando.hpp"
    };

    class CfgVehicles {
        #include "XtdGear\Backpacks.hpp"
        #include "XtdGear\Backpacks_Medic.hpp"
        #include "XtdGear\cloneBackpacks_commando.hpp"
    };
};