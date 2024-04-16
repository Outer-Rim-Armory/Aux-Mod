class CfgVehicles {
    class Plane_Fighter_03_dynamicLoadout_base_F;
    class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class ACE_Actions;
        class ACE_SelfActions;
        class Turrets {
            class BubbleGun;
        };
        class Components: Components {
            class TransportPylonsComponent {
                class Pylons {
                    class pylons1;
                };
            };
        };
        class PilotCamera;
    };
    class CLASS(BTLB_YWing): BTL_Base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,BTLB_YWing);

        displayName = "BTL-B Y-Wing";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {QCLASS(Cannon_YWing), "ls_weapon_CMFlareLauncher", "Laserdesignator_pilotCamera"};
        magazines[] = {
            "3AS_BTLB_450Rnd_Heavy_Shells",
            "3AS_BTLB_450Rnd_Heavy_Shells",
            "ls_mag_240Rnd_CMFlareChaff_blue",
            "ls_mag_240Rnd_CMFlareChaff_blue",
            "Laserbatteries"
        };

        hiddenselectionstextures[] = {
            "\3as\3AS_btlb\textures\chasis_shadow_co.paa",
            "\3as\3AS_btlb\data\detail_co.paa",
            "\3as\3AS_btlb\data\interior_co.paa"
        };

        textureList[] = {"Standard", 1, "StandardLeader", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3as\3AS_btlb\textures\chasis_shadow_co.paa",
                    "\3as\3AS_btlb\data\detail_co.paa",
                    "\3as\3AS_btlb\data\interior_co.paa"
                };
            };
            class StandardLeader: Standard {
                displayName = "Standard Leader";
                textures[] = {
                    "\3as\3AS_btlb\textures\chasis_shadowleader_co.paa",
                    "\3as\3AS_btlb\data\detail_co.paa",
                    "\3as\3AS_btlb\data\interior_co.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;

            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };

        class Turrets: Turrets {
            class BubbleGun: BubbleGun {
                gunnerName = "Gunner";
            };
        };

        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                uiPicture = QPATHTOF(air\ywing\data\ui\BTLB_YWing_pylons_ca.paa);

                class Pylons: Pylons {
                    class pylons1: pylons1 {
                        // attachment = "PylonRack_Missile_AMRAAM_D_x1";
                        hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "B_AMRAAM_D", "B_AMRAAM_D_RAIL", "DAR", "DAGR", "B_GBU12", "B_AGM65_RAIL", "20MM_TWIN_CANNON", "B_MISSILE_PYLON", "B_BOMB_PYLON", "ARC_EMP_RAIL", "B_SDB_QUAD_RAIL", "B_BIM9X_RAIL", "B_AGM65_DUAL_RAIL", "B_HARM_RAIL", "ARC_AGM_PYLON"};
                        maxweight = 5000;
                        uiPosition[] = {0.15, 0.25};
                    };
                    class pylons2: pylons1 {
                        mirroredMissilePos = 1;
                        uiPosition[] = {0.5, 0.25};
                    };
                    class pylons3: pylons1 {
                        uiPosition[] = {0.1, 0.35};
                    };
                    class pylons4: pylons3 {
                        mirroredMissilePos = 3;
                        uiPosition[] = {0.55, 0.35};
                    };
                    class pylons5: pylons1 {
                        uiPosition[] = {0.05, 0.45};
                    };
                    class pylons6: pylons5 {
                        mirroredMissilePos = 3;
                        uiPosition[] = {0.6, 0.45};
                    };
                    class pylons7: pylons1 {
                        uiPosition[] = {0.2, 0.4};
                    };
                    class pylons8: pylons7 {
                        mirroredMissilePos = 7;
                        uiPosition[] = {0.45, 0.4};
                    };
                };
            };
        };

        INVENTORY_VEHICLE_BASE(2);

        class PilotCamera: PilotCamera {
            initTurn = 0;
            initElev = -10;
            maxTurn = 180;
            minTurn = -180;
            maxElev = 90;
            minElev = -10;
        };
    };
};