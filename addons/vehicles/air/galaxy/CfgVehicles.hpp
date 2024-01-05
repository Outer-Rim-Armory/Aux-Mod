class CfgVehicles
{
    class VTOL_Base_F;
    class VTOL_01_base_F: VTOL_Base_F
    {
        class Turrets;
    };
    class VTOL_01_armed_base_F: VTOL_01_base_F
    {
        class Turrets: Turrets
        {
            class CopilotTurret;
            class GunnerTurret_01;
            class GunnerTurret_02;
        };
    };
    class B_T_VTOL_01_armed_F: VTOL_01_armed_base_F
    {
        class ACE_SelfActions;
    };
    class CLASS(Galaxy_Gunship): B_T_VTOL_01_armed_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Planes);

        displayName = "Galaxy HAG";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {"ls_weapon_CMFlareLauncher"};
        magazines[] = {"ls_mag_240rnd_CMFlareChaff_blue"};

        class ACE_SelfActions: ACE_SelfActions
        {
            SELFINTERACTION_HUD_CHANGER;
        };

        class Turrets: Turrets
        {
            class CopilotTurret: CopilotTurret {};
            class GunnerTurret_01: GunnerTurret_01
            {
                weapons[] =
                {
                    QCLASS(Cannon_105mm),
                    QCLASS(Gatling_20mm)
                };
                magazines[] =
                {
                    QCLASS(Mag_100rnd_105mm),
                    QCLASS(4000rnd_20mm)
                };
            };
            class GunnerTurret_02: GunnerTurret_02
            {
                weapons[] = {QCLASS(40mm_VTOL)};
                magazines[] =
                {
                    QCLASS(40mm_GPR_240rnd),
                    QCLASS(40mm_APFSDS_160rnd)
                };
            };
        };

        INVENTORY_VEHICLE_BASE(4);
    };
    class CLASS(HAG_Base): CLASS(Galaxy_Gunship)
    {
        SCOPE_HIDDEN;
    };

    class VTOL_01_vehicle_base_F;
    class B_T_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F
    {
        class ACE_SelfActions;
    };
    class CLASS(Galaxy_Transport_Vehicle): B_T_VTOL_01_vehicle_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Planes);

        displayName = "Galaxy HVT";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {"ls_weapon_CMFlareLauncher"};
        magazines[] = {"ls_mag_240rnd_CMFlareChaff_blue"};

        class ACE_SelfActions: ACE_SelfActions
        {
            SELFINTERACTION_HUD_CHANGER;
        };

        INVENTORY_VEHICLE_BASE(4);
    };
    class CLASS(HVT_Base): CLASS(Galaxy_Transport_Vehicle)
    {
        SCOPE_HIDDEN;
    };

    class VTOL_01_infantry_base_F;
    class B_T_VTOL_01_infantry_F: VTOL_01_infantry_base_F
    {
        class ACE_SelfActions;
    };
    class CLASS(Galaxy_Transport_Infantry): B_T_VTOL_01_infantry_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Planes);

        displayName = "Galaxy HIT";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {"ls_weapon_CMFlareLauncher"};
        magazines[] = {"ls_mag_240rnd_CMFlareChaff_blue"};

        class ACE_SelfActions: ACE_SelfActions
        {
            SELFINTERACTION_HUD_CHANGER;
        };

        INVENTORY_VEHICLE_BASE(4);
    };
    class CLASS(HIT_Base): CLASS(Galaxy_Transport_Infantry)
    {
        SCOPE_HIDDEN;
    };
};