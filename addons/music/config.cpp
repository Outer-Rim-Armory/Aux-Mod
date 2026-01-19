#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core)
        };
        units[] = {
            "bna_kc_ambient_restaurant",
            "bna_kc_ambient_incoming",
            "bna_kc_ambient_disturbance",
            "bna_kc_ambient_jediwarning",
            "bna_kc_ambient_atte_alarm",
            "bna_kc_ambient_dk_radio",
            "bna_kc_ambient_carnageroar",
            "bna_kc_ambient_carnageroar2",
            "bna_kc_ambient_carnageroar3",
            "bna_kc_ambient_carnageroar4",
            "bna_kc_ambient_cod_hammerdowncountersign",
            "bna_kc_ambient_cod_hammerdownprotocol",
            "bna_kc_ambient_lettherebecarnage",
            "bna_kc_ambient_epf_radio",
            "bna_kc_ambient_epf_radio2",
            "bna_kc_ambient_epf_radio3",
            "bna_kc_ambient_epf_presidentespeech",
            "bna_kc_ambient_tdi_theme",
            "bna_kc_ambient_pokevillage",
            "bna_kc_ambient_droid_marching",
            "bna_kc_ambient_godzilla_roar",
            "bna_kc_ambient_order_66",
            "bna_kc_ambient_liberty",
            "bna_kc_ambient_liberty_anthem",
            "bna_kc_ambient_rural_music",
            "bna_kc_ambient_crowd_cheering",
            "bna_kc_ambient_idleawards",
            "bna_kc_ambient_huntrix_golden",
            "bna_kc_ambient_huntrix_howitsdone",
            "bna_kc_ambient_huntrix_takedown",
            "bna_kc_ambient_huntrix_whatitsoundslike",
            "bna_kc_ambient_kda_drum",
            "bna_kc_ambient_kda_more",
            "bna_kc_ambient_kda_popstar",
            "bna_kc_ambient_kda_baddest",
            "bna_kc_ambient_kda_villain"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgSounds.hpp"
#include "CfgSFX.hpp"
#include "CfgMusicClasses.hpp"
#include "CfgMusic.hpp"
#include "CfgVehicles.hpp"
