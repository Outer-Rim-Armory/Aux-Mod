class CfgMagazines {
    class CLASS(Mag_Grenade_Base);
    class CLASS(Grenade_EMP): CLASS(Mag_Grenade_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Droid Popper";
        displayNameShort = "Droid Popper";
        descriptionShort = "Type: EMP Grenade<br />Radius: 10 m<br />Can be used to disable Battle droids, vehicles, and weapons.";
        picture = QPATHTOF(grenades\data\ui\Mag_GrenadeEMP_ca.paa);

        ammo = QCLASS(Grenade_EMP_Ammo);
    };

    class CLASS(Grenade_Bacta): CLASS(Mag_Grenade_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Pressurized Bacta Grenade";
        displayNameShort = "Bacta Bomb";
        descriptionShort = "Type: Bacta Grenade<br />Duration: 20 sec<br />Used in: Hand<br />Nicknamed the 'Bacta Bomb'.";
        picture = QPATHTOF(data\ui\Mag_GrenadeBacta_ca.paa);

        ammo = QCLASS(Grenade_Bacta_Ammo);
    };
};