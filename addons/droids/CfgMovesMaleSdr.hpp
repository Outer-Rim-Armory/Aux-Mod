class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class AmovPercMstpSlowWpstDnon;
        class GVAR(B2_idle): AmovPercMstpSlowWpstDnon {
            actions = QGVAR(moveset_B2);
            file = QPATHTOF(animations\GVAR(B2_idle.rtm));
            speed = -4;
            duty = 0;
            mask = "BodyFull";
            weaponIK = FALSE;
            enableOptics = FALSE;
            showWeaponAim = FALSE;
            disableWeapons = FALSE;
            disableWeaponsLong = FALSE;
            canPullTrigger = FALSE;
            showHandGun = FALSE;
            showItemInHand = FALSE;
            minPlayTime = 0;
            variantsPlayer[] = {};
            variantsAI[] = {};
            ignoreMinPlayTime[]  = {};
            ConnectTo[] = {};
            ConnectFrom[] = {};
            InterpolateTo[] = {
                QGVAR(B2_idle),
                0.0099999998,
                QGVAR(B2_walk),
                0.0099999998,
                "Unconscious",
                0.1
            };
            InterpolateFrom[] = {};
        };
        class GVAR(B2_walk): GVAR(B2_idle) {
            actions = QGVAR(moveset_B2_walkFwr);
            file = QPATHTOF(animations\GVAR(B2_walk.rtm));
            speed = -1.5;
            soundOverride = "walk";
            soundEdge[] = {0.4, 0.8};
            soundEnabled = 1;
        };
        class GVAR(B2_hit): GVAR(B2_idle) {
            actions = QGVAR(moveset_B2_hit);
            file = QPATHTOF(animations\GVAR(B2_hit.rtm));
            looped = FALSE;
            speed = -1.2;
            InterpolateTo[] = {};
        };

        class HubShootingRangeKneel_move1;
        class GVAR(B2_die): HubShootingRangeKneel_move1 {
            actions = QGVAR(moveset_B2_die);
            file = QPATHTOF(animations\GVAR(B2_die.rtm));
            leaning = "empty";
            aimingBody = "empty";
            aiming = "empty";
            speed = -1.2;
            duty = 0;
            looped = FALSE;
            weaponIK = FALSE;
            showHandGun = TRUE;
            disableWeapons = TRUE;
            disableWeaponsLong = TRUE;
            minPlayTime = 0;
            ignoreMinPlayTime[] = {};
            ConnectTo[] = {
                "prone_burn_ragdoll",
                0.0099999998
            };
            ConnectFrom[] = {};
            interpolateFrom[] = {};
            interpolateTo[] = {};
        };
        class GVAR(B2_melee): GVAR(B2_idle) {
            actions = QGVAR(moveset_B2_melee);
            file = QPATHTOF(animations\GVAR(B2_melee.rtm));
            looped = FALSE;
            speed = -1.1;
            InterpolateTo[] = {};
        };


        class GVAR(B1_die_1): GVAR(B2_die) {
            actions = QGVAR(moveset_B1_die_1);
            file = QPATHTOF(animations\GVAR(B1_die_1.rtm));
            speed = -0.5;
            leftHandIKBeg = 0;
            leftHandIKCurve[]= {0};
            leftHandIKEnd = 0;
            rightHandIKBeg = 1;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = 1;
            weaponIK = 1;
        };
        class GVAR(B1_die_2): GVAR(B2_die) {
            actions = QGVAR(moveset_B1_die_2);
            file = QPATHTOF(animations\GVAR(B1_die_2.rtm));
            speed = -0.5;
            leftHandIKBeg = 0;
            leftHandIKCurve[]= {0};
            leftHandIKEnd = 0;
            rightHandIKBeg = 1;
            rightHandIKCurve[]= {1};
            rightHandIKEnd = 1;
            weaponIK = 1;
        };
        class GVAR(B1_die_3): GVAR(B2_die) {
            actions = QGVAR(moveset_B1_die_3);
            file = QPATHTOF(animations\GVAR(B1_die_3.rtm));
            speed = -0.5;
            leftHandIKBeg = 0;
            leftHandIKCurve[]= {0};
            leftHandIKEnd = 0;
            rightHandIKBeg = 1;
            rightHandIKCurve[]= {1};
            rightHandIKEnd = 1;
            weaponIK = 1;
        };
        class GVAR(B1_hit_1): GVAR(B2_die) {
            actions = QGVAR(moveset_B1_hit_1);
            file = QPATHTOF(animations\GVAR(B1_hit_1.rtm));
            speed = -1.2;
            ConnectTo[] = {};
            leftHandIKBeg = 0;
            leftHandIKCurve[] = {0};
            leftHandIKEnd = 0;
            rightHandIKBeg = 1;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = 1;
            weaponIK = 1;
        };
        class GVAR(B1_hit_2): GVAR(B2_die) {
            actions = QGVAR(moveset_B1_hit_2);
            file = QPATHTOF(animations\GVAR(B1_hit_2.rtm));
            speed = -1.2;
            ConnectTo[] = {};
            leftHandIKBeg = 0;
            leftHandIKCurve[]= {0};
            leftHandIKEnd = 0;
            rightHandIKBeg = 1;
            rightHandIKCurve[]= {1};
            rightHandIKEnd = 1;
            weaponIK = 1;
        };
        class GVAR(B1_execution_main): GVAR(B2_die) {
            actions = QGVAR(moveset_B1_execution_main);
            file = QPATHTOF(animations\GVAR(B1_execution_main.rtm));
            leftHandIKBeg = 1;
            leftHandIKCurve[]= {1};
            leftHandIKEnd = 1;
            rightHandIKBeg = 1;
            rightHandIKCurve[]= {1};
            rightHandIKEnd = 1;
            weaponIK = TRUE;
            disableWeapons = FALSE;
            disableWeaponsLong = FALSE;
            speed = -2.6;
            ConnectTo[] = {};
        };
        class GVAR(B1_execution_victim): GVAR(B2_die) {
            actions = QGVAR(moveset_B1_execution_victim);
            file = QPATHTOF(animations\GVAR(B1_execution_victim.rtm));
            headBobMode = 1;
            headBobStrength = -1;
            showHandGun = FALSE;
            speed = -2;
            ConnectTo[] = {
                QGVAR(B1_execution_victim_ragdoll),
                0.0099999998
            };
        };
        class prone_burn_ragdoll;
        class GVAR(B1_execution_victim_ragdoll): prone_burn_ragdoll {
            actions = QGVAR(moveset_B1_execution_victim_ragdoll);
            file = QPATHTOF(animations\GVAR(B1_execution_victim_ragdoll.rtm));
        };
    };
};