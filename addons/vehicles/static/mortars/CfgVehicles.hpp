class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class HitPoints {
            class HitBody;
        };
    };
    class StaticMortar: StaticWeapon {};
    class Mortar_01_base_F: StaticMortar {
        class Turrets;
    };
    class B_Mortar_01_F: Mortar_01_base_F {};
    class 3AS_Republic_Mortar: B_Mortar_01_F {
        class ace_csw;
        class UserActions;
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class CLASS(Mortar_Base): 3AS_Republic_Mortar {
        SCOPE_PRIVATE;
        author = AUTHOR;

        editorSubcategory = QEDSUBCAT(Turrets);

        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};

        armor = 40;
        armorStructural = 0.5;

        ace_cargo_noRename = TRUE;
        ace_dragging_canDrag = TRUE;
        ace_dragging_dragPosition[] = {0, 1.2, 0};
        ace_dragging_canCarry = TRUE;
        ace_dragging_carryPosition[] = {0, 1.2, 0};
        ace_dragging_dragDirection = 0;

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {};
                weapons[] = {};
            };
        };

        class HitPoints: HitPoints {
            class HitBody: HitBody {
                armor = 5;
                armorStructural = 0.25;
            };
        };

        class ace_csw {
            ammoLoadTime = 5;
            ammoUnloadTime = 5;
            desiredAmmo = 6;
        };

        class assembleInfo {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = {};
            primary = 0;
        };

        class UserActions: UserActions {
            class GVAR(CSW_PickUp) {
                displayName = "Disassemble Mortar";
                displayNameDefault = "";

                position = "pilotView";
                radius = 1.5;
                onlyForPlayer = FALSE;

                hideOnUse = TRUE;
                priority = 5;

                condition = QUOTE(GVAR(csw_showDeployAction) and {[ARR_2(ace_player,this)] call FUNC(csw_canPickup)});
                statement = QUOTE([ARR_2(this,ace_player)] call ace_csw_fnc_assemble_pickupWeapon);
            };
        };
    };
    class CLASS(Mortar_M190): CLASS(Mortar_Base) {
        SCOPE_PUBLIC;

        faction = QFACTION(KC);
        editorPreview = EEDITOR_PREVIEW(vehicles\static\SUBCOMPONENT,Mortar_M190);

        displayName = "M-190 Mortar System";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] = {
            "\3AS\3AS_Static\Mortar\data\base.001_co.paa",
            "\3AS\3AS_Static\Mortar\data\tube.001_co.paa"
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Mortar_M190_Turret)};
                magazines[] = {
                    QCLASS(Mag_6Rnd_Mortar_82mm_HE),
                    QCLASS(Mag_6Rnd_Mortar_SmokeWhite),
                    QCLASS(Mag_6Rnd_Mortar_SmokeBlue),
                    QCLASS(Mag_6Rnd_Mortar_SmokeRed)
                };

                maxElev = 38.56; // Increasing lowers mininum range
                minElev = -30;
            };
        };

        class ace_csw: ace_csw {
            enabled = TRUE;
            disassembleTurret = "";
            disassembleWeapon = QCLASS(Mortar_M190_Carry);
            proxyWeapon = QCLASS(Mortar_M190_ProxyWeapon);
            displayName = "M-190 Mortar";
            magazineLocation = QUOTE(_target selectionPosition 'usti hlavne');
        };
    };
};