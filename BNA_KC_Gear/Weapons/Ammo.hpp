class CfgMagazines
{
    class M2_Fuel_Tank;

    class BNA_KC_Mag_300Rnd_Flamer: M2_Fuel_Tank
    {
        displayName = "[KC] BT X-42 Fuel Tank";
        // 3AS Ammo Picture
        picture = "3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
        UiPicture = "3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
        mass = 50;
    };

    class BNA_KC_Mag_150Rnd_Flamer: BNA_KC_Mag_300Rnd_Flamer
    {
        displayName = "[KC] BT X-42 Fuel Tank";
        count = 150;
        mass = 150;
    };
};