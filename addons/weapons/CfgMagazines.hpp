class CfgMagazines
{
    class JLTS_stun_mag_short;
    class Aux12thFleet_Mag_StunShort: JLTS_stun_mag_short
    {
        author = "DartRuffian and Dexus";
        displayName = "[12th Fleet] Stun Energy Cell (Short)";
        displayNameShort = "Stun (Short)";
        descriptionShort = "Stun Energy Cell<br/>Rounds: 10<br/>Duration: 5 Seconds<br/>Used in: DC-15S, DC-15A, DC-17, DC-17M";

        JLTS_hasEMPProtection = 1;
        JLTS_stunDuration = 5;

        ammo = "Aux12thFleet_Ammo_Stun";
        count = 10;
    };

    class Aux12thFleet_Mag_StunLong: Aux12thFleet_Mag_StunShort
    {
        displayName = "[12th Fleet] Stun Energy Cell (Long)";
        displayNameShort = "Stun (Long)";
        descriptionShort = "Stun Energy Cell<br/>Rounds: 5<br/>Duration: 15 Seconds<br/>Used in: DC-15S, DC-15A, DC-17, DC-17M";

        JLTS_stunDuration = 15;
        count = 5;
    };

    class UGL_FlareWhite_F;
    class CLASS(Mag_UGL_FlareBlue): UGL_FlareWhite_F
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[KC] Flare Round (Blue)";
        displayNameShort = "Blue Flare";
        descriptionShort = "Type: Flare - Blue <br />Rounds: 1 <br />Used in: EGLM, 3GL";
        picture = QPATHTOF(data\ui\Mag_FlareBlue_ca.paa);

        ammo = QCLASS(Flare_Blue);
        count = 1;

        JLTS_hasEMPProtection = 1;
    };

    class CLASS(Mag_3Rnd_UGL_FlareBlue): CLASS(Mag_UGL_FlareBlue)
    {
        displayName = "[KC] 3Rnd 3GL Flares (Blue)";
        displayNameShort = "3Rnd Blue Flare";
        descriptionShort = "Type: Flare Rounds - Blue <br />Rounds: 3 <br />Used in: EGLM, 3GL";
        mass = 12;
        count = 3;
    };
};