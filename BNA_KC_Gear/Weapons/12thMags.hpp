
// ┌──────────────────┐
// │      Common      │
// └──────────────────┘
// Primary
class JLTS_DC15A_mag;
class 12thFleet_Mag_DC15A: JLTS_DC15A_mag
{
    displayName = "[12th Fleet] DC-15A Energy Cell (60 Rnd)";
    ammo = "12thFleet_Ammo_Rifle_Blue";
};

class JLTS_DC15S_mag;
class 12thFleet_Mag_DC15S: JLTS_DC15S_mag
{
    displayName = "[12th Fleet] DC-15S Energy Cell (80 Rnd)";
    ammo = "12thFleet_Ammo_Rifle_Blue";
};

// Seconaary
class JLTS_DC17SA_mag;
class 12thFleet_Mag_DC17: JLTS_DC17SA_mag
{
    displayName = "[12th Fleet] DC-17 Energy Cell (20 Rnd)";
    ammo = "12thFleet_Ammo_Rifle_Blue";
};


// ┌───────────────────┐
// │    Specialized    │
// └───────────────────┘
class 3AS_60Rnd_EC50_Mag;
class 12thFleet_Mag_WestarM5: 3AS_60Rnd_EC50_Mag
{
    displayName = "[12th Fleet] Westar-M5 Energy Cell (60 Rnd)";
    ammo = "12thFleet_Ammo_Westar_Blue";
};

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