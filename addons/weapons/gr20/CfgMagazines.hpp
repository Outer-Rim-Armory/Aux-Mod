class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_1rnd_WeaponName): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] WeaponName Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 1<br/>Used In: WeaponName";

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = QPATHTOF(data\ui\Mag_MedicAmmo_ca.paa);

        ammo = QCLASS(Bullet_PlasmaRifle_Blue);
        count = 1;
    };
};