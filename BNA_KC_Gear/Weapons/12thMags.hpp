
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

class JLTS_DC15X_mag;
class 12thFleet_Mag_DC15X: JLTS_DC15X_mag
{
    displayName = "[12th Fleet] DC-15X Energy Cell (15 Rnd)";
    ammo = "12thFleet_Ammo_Sniper_Blue";
};

// Secondaary
class JLTS_DC17SA_mag;
class 12thFleet_Mag_DC17: JLTS_DC17SA_mag
{
    displayName = "[12th Fleet] DC-17 Energy Cell (20 Rnd)";
    ammo = "12thFleet_Ammo_Pistol_Blue";
};

// Stun
class JLTS_stun_mag_long;
class 12thFleet_Mag_StunLong: JLTS_stun_mag_long
{
    displayName = "[12th Fleet] Stun Energy Cell (Long)";
    displayNameShort = "Stun Rounds";
    descriptionShort = "Stun Energy Cell <br />Rounds: 5 <br />Duration: 15 Seconds <br />Used in: DC-15S, DC-15A, DC-17";

    ammo = "12thFleet_Ammo_Stun";
};

class JLTS_stun_mag_short;
class 12thFleet_Mag_StunShort: JLTS_stun_mag_short
{
    displayName = "[12th Fleet] Stun Energy Cell (Short)";
    displayNameShort = "Stun Rounds";
    descriptionShort = "Stun Energy Cell <br />Rounds: 10 <br />Duration: 5 Seconds <br />Used in: DC-15S, DC-15A, DC-17";

    ammo = "12thFleet_Ammo_Stun";
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
    picture = "\3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
    UiPicture = "\3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
    mass = 50;
};

class BNA_KC_Mag_150Rnd_Flamer: BNA_KC_Mag_300Rnd_Flamer
{
    displayName = "[KC] BT X-42 Fuel Tank";
    count = 150;
    mass = 150;
};