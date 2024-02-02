class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class ace_csw_deploy
            {
                modifierFunction = QUOTE(call FUNC(cswDeployModifier));
            };
        };

        class UserActions
        {
            class GVAR(CSW_Deploy)
            {
                displayName = "Deploy Tripod";
                displayNameDefault = "";

                position = "camera";
                radius = 30;
                onlyForPlayer = FALSE;

                hideOnUse = TRUE;
                priority = 5;

                condition = QUOTE(ace_player isEqualTo this and GVAR(showCSWUserAction) and ace_player call ace_csw_fnc_assemble_canDeployTripod);
                statement = QUOTE(ace_player call ace_csw_fnc_assemble_deployTripod);
            };
        };
    };

    class StaticWeapon;
    class StaticMortar: StaticWeapon
    {
        class Turrets;
    };
    class Mortar_01_base_F: StaticMortar
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class B_Mortar_01_F: Mortar_01_base_F
    {
        class HitPoints
        {
            class HitBody;
        };
        class UserActions;
        class assembleInfo;
        class ace_csw;
    };
    class CLASS(Mortar_Base): B_Mortar_01_F
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";

        editorSubcategory = QCLASS(EdSubCat_Turrets);

        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};

        armor = 40;
        armorStructural = 0.5;

        ace_cargo_noRename = TRUE;
        ace_dragging_canDrag = TRUE;
        ace_dragging_dragPosition[] = {0, 1.2, 0};
        ace_dragging_canCarry = TRUE;
        ace_dragging_carryPosition[] = {0, 1.2, 0};

        model = "\3AS\3AS_Static\Mortar\model\RepublicMortar.p3d";
        hiddenSelections[] = {"Camo_1", "Camo_2"};
        hiddenSelectionsMaterials[] =
        {
            "\3AS\3AS_Static\Mortar\data\base.rvmat",
            "\3AS\3AS_Static\Mortar\data\tube.rvmat"
        };
        icon = "\3AS\3AS_Static\Mortar\data\ui\Mortar_top_ca.paa";

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                magazines[] = {};
                weapons[] = {};

                // Maximum and minimum angles for mortar turret
                maxElev = 25.762;
                maxOutElev = 20;

                minElev = -30;
                minOutElev = -4;
            };
        };

        class HitPoints: HitPoints
        {
            class HitBody: HitBody
            {
                armor = 5;
                armorStructural = 0.25;
            };
        };

        class ace_csw: ace_csw
        {
            ammoLoadTime = 5;
            ammoUnloadTime = 5;
            desiredAmmo = 3;

            magazineLocation = QUOTE(_target selectionPosition 'usti hlavne');
        };
        delete assembleInfo; // Removes base game disassemble option

        class UserActions: UserActions
        {
            class GVAR(CSW_PickUp)
            {
                displayName = "Disassemble Mortar";
                displayNameDefault = "";

                position = "pilotView";
                radius = 1.5;
                onlyForPlayer = FALSE;

                hideOnUse = TRUE;
                priority = 5;

                condition = QUOTE([ARR_2(this,ace_player)] call ace_csw_fnc_assemble_canPickupTripod);
                statement = QUOTE([ARR_2(this,ace_player)] call ace_csw_fnc_assemble_pickupTripod);
            };
        };

        class Damage
        {
            tex[] = {};
            mat[] =
            {
                "\3AS\3AS_Static\mortar\data\base.rvmat",
                "\A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
                "\A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
                "\3AS\3AS_Static\mortar\data\tube.rvmat",
                "\A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
                "\A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
            };
        };
    };
    class CLASS(Mortar_M190): CLASS(Mortar_Base)
    {
        SCOPE_PUBLIC;

        faction = QCLASS(Faction_KC);
        editorPreview = EEDITOR_PREVIEW(vehicles\static\SUBCOMPONENT,Mortar_M190);

        displayName = "M-190 Mortar System";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] =
        {
            "\3AS\3AS_Static\Mortar\data\base.001_co.paa",
            "\3AS\3AS_Static\Mortar\data\tube.001_co.paa"
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                magazines[] =
                {
                    QCLASS(Mag_3Rnd_Mortar_82mm_HE),
                    QCLASS(Mag_3Rnd_Mortar_SmokeWhite),
                    QCLASS(Mag_3Rnd_Mortar_SmokeBlue),
                    QCLASS(Mag_3Rnd_Mortar_SmokeRed)
                };
                weapons[] = {QCLASS(Mortar_M190_Turret)};
            };
        };

        class ace_csw: ace_csw
        {
            enabled = TRUE;
            disassembleTo = QCLASS(Mortar_M190_Carry);
            proxyWeapon = QCLASS(Mortar_M190_ProxyWeapon);
            displayName = "M-190 Mortar";
        };
    };
};