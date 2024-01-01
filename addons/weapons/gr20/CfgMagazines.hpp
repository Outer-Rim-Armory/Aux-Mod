class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_1rnd_GR20): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] Pressurized Bacta Canister";
        displayNameShort = "Bacta Bomb";
        descriptionShort = "Pressurized Bacta Gas<br/>Rounds: 1<br/>Used In: GR-20<br/>Nicknamed the 'Bacta Bomb'.";

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = QPATHTOF(data\ui\Mag_GrenadeBacta_ca.paa);

        ammo = QCLASS(Grenade_Bacta_Ammo);
        count = 1;
        mass = 4;
        initSpeed = 80;

        GVAR(bactaDuration) = BACTA_DURATION_DEFAULT;
        EGVAR(medical,areaHealRadius) = MEDICAL_HEAL_RADIUS_DEFAULT;
        EGVAR(medical,areaHealRate) = MEDICAL_HEAL_RATE_DEFAULT;
        EGVAR(medical,areaHealMaxPatients) = MEDICAL_HEAL_MAXPATIENTS_DEFAULT;
    };

    class CLASS(Mag_GR20): CLASS(Mag_1rnd_GR20)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Pressurized Bacta Gas<br/>Rounds: 1<br/>Used In: GR-20<br/>Nicknamed the 'Bacta Bomb' by Republic Medics<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};