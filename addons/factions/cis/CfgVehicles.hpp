class CfgVehicles
{
    class CLASS(OPFOR_Unit_Base);
    class CLASS(CIS_Unit_Base): CLASS(OPFOR_Unit_Base)
    {
        faction = QCLASS(Faction_CIS);
    };
    class CLASS(CIS_Unit_DroidBase): CLASS(CIS_Unit_Base)
    {
        armor = 2;
        armorStructural = 3;
        explosionShielding = 0.3;
        impactDamageMultiplier = 0.5;
        minTotalDamageThreshold = 0.001;

        identityTypes[] = {"", "Head_NATO"};

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";
    };
    class CLASS(CIS_Unit_Droid_BX): CLASS(CIS_Unit_DroidBase)
    {
        SCOPE_PUBLIC;

        editorSubcategory = QCLASS(EdSubCat_SpecialForces);
        editorPreview = QPATHTOF(cis\data\previews\CLASS(CIS_Unit_Droid_BX).jpg);

        displayName = "BX Commando Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_BX);

        weapons[] =
        {
            QCLASS(E5),
            "",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            QCLASS(E5),
            "",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            ITEM_11(QCLASS(Mag_100rnd_E5)),
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("3AS_SmokeWhite")
        };
        respawnMagazines[] =
        {
            ITEM_11(QCLASS(Mag_100rnd_E5)),
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("3AS_SmokeWhite")
        };
        items[] =
        {
            // Other
            ITEM_5("ACE_CableTie")
        };
        respawnItems[] =
        {
            // Other
            ITEM_5("ACE_CableTie")
        };

        linkedItems[] =
        {
            QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", "SWLB_comlink_droid", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", "SWLB_comlink_droid", LINKED_ITEMS
        };
    };
};