class BNA_KC_OPFOR_Backpack_Base;
class BNA_KC_EPF_Backpack: BNA_KC_OPFOR_Backpack_Base
{
    // Scope
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    displayName = "[EPF] Backpack";

    model = "\sc_equipment\data\marine\mr_backpack.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\sc_equipment\data\marine\textures\backpack_green_co.paa"};
};
class BNA_KC_EPF_Backpack_Predef_Rifleman: BNA_KC_EPF_Backpack
{
    // Scope
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;

    class TransportMagazines
    {
        TRANSMAG_XX(Aux12thFleet_Mag_E5, 10)
        TRANSMAG_XX(SC_IG3, 2)
        TRANSMAG_XX(SmokeShell, 2)
        TRANSMAG_XX(ShieldGrenade_Mag, 2)
        TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
        TRANSMAG_XX(OPTRE_FC_PlasmaGrenade, 5)
    };
};

class BNA_KC_EPF_Backpack_Heavy: BNA_KC_EPF_Backpack
{
    displayName = "[EPF] Heavy Backpack";
    maximumLoad = 450;
    mass = 35;

    model = "\sc_equipment\data\wasp\wp_backpack.p3d";
    hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_green_co.paa"};
};
class BNA_KC_EPF_Backpack_Heavy_Predef_AT: BNA_KC_EPF_Backpack_Heavy
{
    // Scope
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;

    class TransportMagazines
    {
        TRANSMAG_XX(Aux12thFleet_Mag_E5, 10)
        TRANSMAG_XX(Aux12thFleet_Mag_E60R_HE, 3)
        TRANSMAG_XX(Aux12thFleet_Mag_E60R_AT, 3)
        TRANSMAG_XX(SC_IG3, 2)
        TRANSMAG_XX(SmokeShell, 2)
        TRANSMAG_XX(ShieldGrenade_Mag, 2)
        TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
        TRANSMAG_XX(OPTRE_FC_PlasmaGrenade, 5)
    };
};
class BNA_KC_EPF_Backpack_Heavy_Predef_AA: BNA_KC_EPF_Backpack_Heavy
{
    // Scope
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;

    class TransportMagazines
    {
        TRANSMAG_XX(Aux12thFleet_Mag_E5, 10)
        TRANSMAG_XX(Aux12thFleet_Mag_E60R_AA, 6)
        TRANSMAG_XX(SC_IG3, 2)
        TRANSMAG_XX(SmokeShell, 2)
        TRANSMAG_XX(ShieldGrenade_Mag, 2)
        TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
        TRANSMAG_XX(OPTRE_FC_PlasmaGrenade, 5)
    };
};

class BNA_KC_EPF_Backpack_Assault: BNA_KC_EPF_Backpack
{
    displayName = "[EPF] Assault Backpack";
    maximumLoad = 300;
    mass = 35;

    model = "\sc_equipment\data\wasp\wp_backpack_sl.p3d";
    hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_green_co.paa"};
};
class BNA_KC_EPF_Backpack_Assault_Predef_Heavy: BNA_KC_EPF_Backpack_Assault
{
    // Scope
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;

    class TransportMagazines
    {
        TRANSMAG_XX(Aux12thFleet_Mag_E5C, 10)
        TRANSMAG_XX(SC_IG3, 2)
        TRANSMAG_XX(SmokeShell, 2)
        TRANSMAG_XX(ShieldGrenade_Mag, 2)
        TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
        TRANSMAG_XX(OPTRE_FC_PlasmaGrenade, 5)
    };
};
class BNA_KC_EPF_Backpack_Assault_Predef_Medium: BNA_KC_EPF_Backpack_Assault_Predef_Heavy
{
    class TransportMagazines
    {
        TRANSMAG_XX(Aux12thFleet_Mag_E5C, 10)
        TRANSMAG_XX(SC_IG3, 2)
        TRANSMAG_XX(SmokeShell, 2)
        TRANSMAG_XX(ShieldGrenade_Mag, 2)
        TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
        TRANSMAG_XX(OPTRE_FC_PlasmaGrenade, 5)
    };
};

class BNA_KC_EPF_Backpack_RTO: BNA_KC_EPF_Backpack
{
    displayName = "[EPF] Radio Backpack";
    mass = 35;

    model = "\sc_equipment\data\watchdog\wd_backpack_sl.p3d";
    hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\backpack_co.paa"};

    // TFAR Long Range
    tf_hasLRradio = 1;
    tf_range = 25000;

    tf_dialog = "mr3000_radio_dialog";
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    tf_encryptionCode = "tf_east_radio_code";
    tf_subtype = "digital_lr";
};
class BNA_KC_EPF_Backpack_RTO_Predef_SL: BNA_KC_EPF_Backpack_RTO
{
    // Scope
    scope = 1;
    scopeArsenal = 0;
    scopeCurator = 0;

    class TransportMagazines
    {
        TRANSMAG_XX(Aux12thFleet_Mag_E5, 10)
        TRANSMAG_XX(SC_IG3, 2)
        TRANSMAG_XX(SmokeShell, 2)
        TRANSMAG_XX(ShieldGrenade_Mag, 2)
        TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 5)
        TRANSMAG_XX(OPTRE_FC_PlasmaGrenade, 5)
    };
};