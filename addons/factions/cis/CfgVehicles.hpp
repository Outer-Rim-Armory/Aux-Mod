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
        explosionShielding = 0.3
        impactDamageMultiplier = 0.5;
        minTotalDamageThreshold = 0.001;

        identityTypes[] = {"", "Head_NATO"};

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";
    };
};