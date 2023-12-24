class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_1rnd_DC17): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 1<br/>Used In: DC-17";

        // model = "";
        // picture = "";

        ammo = QCLASS(Bullet_PlasmaRifle_Blue);
        count = 1;
    };
};