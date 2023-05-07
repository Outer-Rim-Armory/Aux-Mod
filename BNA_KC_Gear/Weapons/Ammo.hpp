class CfgMagazines
{
    class M2_Fuel_Tank;

    class 300Rnd_Flamer_Mag: M2_Fuel_Tank
    {
        displayName = "BT X-42 Fuel Tank";
        // 3AS Ammo Picture
        picture = "3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
        UiPicture = "3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
        mass = 50;
    };

    class 150Rnd_Flamer_Mag: 300Rnd_Flamer_Mag
    {
        displayName = "BT X-42 Fuel Tank";
        count = 150;
        mass = 150;
    };
};