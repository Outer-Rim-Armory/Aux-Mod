class BNA_KC_Vest_Assault: BNA_KC_Vest_Basic
{
    displayName = "[KC] INF Vest 01+ Assault";

    model = "\SWLB_clones\SWLB_clone_assault_armor.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] =
    {
        "\SWLB_clones\data\light_accessories_co.paa",
        "\SWLB_clones\data\heavy_accessories_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "camo2"};
        uniformModel = "\SWLB_clones\SWLB_clone_assault_armor.p3d";
    };
};

class BNA_KC_Vest_Grenadier: BNA_KC_Vest_Assault
{
    displayName = "[KC] INF Vest 01+ Grenadier";

    model = "\SWLB_clones\SWLB_clone_grenadier_armor.p3d";

    class ItemInfo: ItemInfo
    {
        uniformModel = "\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
    };
};

class BNA_KC_Vest_Specialist: BNA_KC_Vest_Assault
{
    displayName = "[KC] INF Vest 01+ Specialist";
    model = "\SWLB_clones\SWLB_clone_specialist_armor.p3d";

    class ItemInfo: ItemInfo
    {
        uniformModel = "\SWLB_clones\SWLB_clone_specialist_armor.p3d";
    };
};

class BNA_KC_Vest_Recon: BNA_KC_Vest_Basic
{
    displayName = "[KC] INF Vest XX Recon";

    model = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
    hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
    hiddenSelectionsTextures[] =
    {
        "\SWLB_clones\data\heavy_accessories_co.paa",
        "",
        "\SWLB_clones\data\heavy_accessories_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_armor_ca.paa";

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
        uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
    };
};

class BNA_KC_Vest_LCPL: BNA_KC_Vest_Basic
{
    displayName = "[KC] INF Vest 04 (LCPL)";

    model = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
    hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
    hiddenSelectionsTextures[] =
    {
        "\SWLB_clones\data\heavy_accessories_co.paa",     // Heavy Strap
        "",                                               // Nothing
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_LCPL.paa", // Holster
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_LCPL.paa"  // Pauldron
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
        uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
    };
};

class BNA_KC_Vest_CPL: BNA_KC_Vest_LCPL
{
    displayName = "[KC] INF Vest 05 (CPL)";
    hiddenSelectionsTextures[] =
    {
        "\SWLB_clones\data\heavy_accessories_co.paa",
        "",
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_CPL.paa",
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_CPL.paa"
    };
};

class BNA_KC_Vest_CS: BNA_KC_Vest_LCPL
{
    displayName = "[KC] INF Vest 06 (CS)";
    model = "\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_CS.paa",
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Officer.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "camo2"};
        uniformModel = "\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
    };
};

class BNA_KC_Vest_CSS: BNA_KC_Vest_CS
{
    displayName = "[KC] INF Vest 07 (CSS)";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_CSS.paa",
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Officer.paa"
    };
};

class BNA_KC_Vest_CSFC: BNA_KC_Vest_CS
{
    displayName = "[KC] INF Vest 08 (CSFC)";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_CSFC.paa",
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Officer.paa"
    };
};

class BNA_KC_Vest_CMS: BNA_KC_Vest_CS
{
    displayName = "[KC] INF Vest 09 (CMS)";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_CMS.paa",
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Officer.paa"
    };
};

class BNA_KC_Vest_CSM: BNA_KC_Vest_CS
{
    displayName = "[KC] INF Vest 10 (CSM)";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_CSM.paa",
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Officer.paa"
    };
};

class BNA_KC_Vest_Medic: BNA_KC_Vest_Basic
{
    displayName = "[KC] INF Medic Vest 01 (Medic)";

    model = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
    hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic.paa", // Heavy Bag / Strap
        "",                                                // Kama
        "",                                                // Airborne / Ammo thing
        ""                                                 // Pauldron
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
        uniformModel = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
        containerClass = "Supply250";
    };
};
class BNA_KC_Vest_Medic_Senior: BNA_KC_Vest_Medic
{
    displayName = "[KC] INF Medic Vest 02 (Senior)";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic.paa", // Heavy Bag / Strap
        "",                                                // Kama
        "",                                                // Airborne thing
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic.paa"  // Pauldron
    };
};

class BNA_KC_Vest_Medic_v2: BNA_KC_Vest_Medic
{
    displayName = "[KC] INF Medic Vest 01 (Medic, v2)";

    model = "\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic_v2.paa", // Tablet
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic_v2.paa", // Chest Strap
        "",                                                   // Airborne / Ammo thing
        ""                                                    // Pauldron
    };
    class ItemInfo: ItemInfo
    {
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
    };
};
class BNA_KC_Vest_Medic_Senior_v2: BNA_KC_Vest_Medic_v2
{
    displayName = "[KC] INF Medic Vest 02 (Senior, v2)";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic_v2.paa", // Tablet
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic_v2.paa", // Chest Strap
        "",                                                   // Airborne thing
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic_v2.paa"  // Pauldron
    };
};

class BNA_KC_Vest_Medic_Platoon: BNA_KC_Vest_Medic
{
    displayName = "[KC] INF Medic Vest 06+ (Platoon)";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic.paa",         // Heavy Bag / Strap
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic_Platoon.paa", // Kama
        "",                                                        // Airborne / Ammo thing
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Medic.paa"          // Pauldron
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_nco_armor_ca.paa";
};

class BNA_KC_Vest_Officer: BNA_KC_Vest_Basic
{
    displayName = "[KC] INF Vest 12+ (Officer)";

    model = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Officer.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"Camo1"};
        uniformModel = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
        containerClass = "Supply200";

        class HitpointsProtectionInfo
        {
            class Arms
            {
                hitpointName = "HitArms";
                armor = 10;
                passThrough = 0.20000001;
            };
            class Chest
            {
                HitpointName = "HitChest";
                armor = 20;
                PassThrough = 0.10000001;
            };
            class Legs
            {
                hitpointName = "HitLegs";
                armor = 20;
                passThrough = 0.10000001;
            };
        };
    };
};

class BNA_KC_Vest_Commander: BNA_KC_Vest_Officer
{
    displayName = "[KC] INF Vest 18+ Commander";
    model = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
    hiddenSelections[] = {"camo1", "rank"};
    hiddenSelectionsTextures[] = {"\SWLB_clones\data\officer_accessories_co.paa", ""};
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_commander_armor_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformModel = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
    };
};

class BNA_KC_Vest_Commander_Rank: BNA_KC_Vest_Commander
{
    displayName = "[KC] INF Vest 18+ Commander (Rank)";
    hiddenSelectionsTextures[] = {"\SWLB_clones\data\officer_accessories_co.paa", "\SWLB_clones\data\rank_co.paa"};
};

class BNA_KC_Vest_Pauldron: BNA_KC_Vest_Officer
{
    displayName = "[KC] INF Vest XX Pauldron";
    model = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
    hiddenSelectionsTextures[] = {"\SWLB_clones\data\officer_accessories_co.paa"};

    class ItemInfo: ItemInfo
    {
        uniformModel = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
    };
};

class BNA_KC_Vest_Kama: BNA_KC_Vest_Officer
{
    displayName = "[KC] INF Vest XX Kama";
    model = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
    hiddenSelections[] = {"camo1", "rank"};
    hiddenSelectionsTextures[] = {"\SWLB_clones\data\officer_accessories_co.paa", ""};
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_kama_armor_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformModel = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
    };
};