class CfgMagazines
{
    class JLTS_RPS6_mag;
    class Aux12thFleet_Mag_RPS7_AT: JLTS_RPS6_mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] RPS-7 AT Missile";
        displayNameShort = "AT";
        descriptionShort = "Anti-Tank Missile<br/>Rounds: 1<br/>Used In: RPS-7";
        ammo = "Aux12thFleet_Ammo_RPS7_AT";

        JLTS_hasEMPProtection = 1;

        allowedSlots[] = {VEST_SLOT, BACKPACK_SLOT};
        mass = 100;
    };

    class Aux12thFleet_Mag_RPS7_HE: Aux12thFleet_Mag_RPS7_AT
    {
        displayName = "[12th Fleet] RPS-7 HE Missile";
        displayNameShort = "HE";
        descriptionShort = "High Explosive Missile<br/>Rounds: 1<br/>Used In: RPS-7";
        // ammo = "Aux12thFleet_Ammo_RPS7_HE";

        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
    };
};