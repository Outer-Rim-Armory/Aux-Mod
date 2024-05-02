class CfgMovesBasic {
    class Default;
    class StandBase;
    class BlendAnims;
    class Actions {
        class NoActions;
        class GVAR(moveset_B2): NoActions {
            stop = QGVAR(B2_idle);
            default = QGVAR(B2_idle);
            stopRelaxed = QGVAR(B2_idle);
            TurnL = QGVAR(B2_walk);
            TurnR = QGVAR(B2_walk);
            TurnLRelaxed = QGVAR(B2_walk);
            TurnRRelaxed = QGVAR(B2_walk);
            WalkF = QGVAR(B2_walk);
            PlayerWalkF = QGVAR(B2_walk);
            WalkLF = QGVAR(B2_walk);
            PlayerWalkLF = QGVAR(B2_walk);
            WalkRF = QGVAR(B2_walk);
            PlayerWalkRF = QGVAR(B2_walk);
            WalkL = QGVAR(B2_walk);
            PlayerWalkL = QGVAR(B2_walk);
            WalkR = QGVAR(B2_walk);
            PlayerWalkR = QGVAR(B2_walk);
            WalkB = QGVAR(B2_walk);
            PlayerWalkB = QGVAR(B2_walk);
            WalkLB = QGVAR(B2_walk);
            PlayerWalkLB = QGVAR(B2_walk);
            WalkRB = QGVAR(B2_walk);
            PlayerWalkRB = QGVAR(B2_walk);
            SlowF = QGVAR(B2_walk);
            PlayerSlowF = QGVAR(B2_walk);
            SlowB = QGVAR(B2_walk);
            PlayerSlowB = QGVAR(B2_walk);
            PlayerFastF = QGVAR(B2_walk);
            combat = QGVAR(B2_walk);
            up = QGVAR(B2_walk);
            down = QGVAR(B2_walk);
            gear = QGVAR(B2_walk);
            upDegree = "ManPosNoWeapon";
            PlayerSlowLF = QGVAR(B2_walk);
            PlayerSlowRF = QGVAR(B2_walk);
            PlayerSlowL = QGVAR(B2_walk);
            PlayerSlowR = QGVAR(B2_walk);
            PlayerSlowLB = QGVAR(B2_walk);
            PlayerSlowRB = QGVAR(B2_walk);
            FastF = QGVAR(B2_walk);
            FastLF = QGVAR(B2_walk);
            FastRF = QGVAR(B2_walk);
            FastL = QGVAR(B2_walk);
            FastR = QGVAR(B2_walk);
            FastLB = QGVAR(B2_walk);
            FastRB = QGVAR(B2_walk);
            TactF = QGVAR(B2_walk);
            TactLF = QGVAR(B2_walk);
            TactRF = QGVAR(B2_walk);
            TactL = QGVAR(B2_walk);
            TactR = QGVAR(B2_walk);
            TactLB = QGVAR(B2_walk);
            TactRB = QGVAR(B2_walk);
            TactB = QGVAR(B2_walk);
            PlayerTactF = QGVAR(B2_walk);
            PlayerTactLF = QGVAR(B2_walk);
            PlayerTactRF = QGVAR(B2_walk);
            PlayerTactL = QGVAR(B2_walk);
            PlayerTactR = QGVAR(B2_walk);
            PlayerTactLB = QGVAR(B2_walk);
            PlayerTactRB = QGVAR(B2_walk);
            PlayerTactB = QGVAR(B2_walk);
        };
        class GVAR(moveset_B2_walkFwr): GVAR(moveset_B2) {
            turnSpeed = 4.5;
            PlayerCrouch = QGVAR(B2_walk);
            Up = QGVAR(B2_walk);
            Crouch = QGVAR(B2_walk);
            AdjustB = "";
            Stand = QGVAR(B2_walk);
        };
        class Acts_CarFixingWheel_actions;
        class GVAR(moveset_B2_hit): Acts_CarFixingWheel_actions {
            Default = QGVAR(B2_hit);
        };
        class GVAR(moveset_B2_die): Acts_CarFixingWheel_actions {
            Default = QGVAR(B2_die);
        };
        class GVAR(moveset_B2_melee): Acts_CarFixingWheel_actions {
            Default = QGVAR(B2_melee);
        };
        class GVAR(moveset_B1_die_1): Acts_CarFixingWheel_actions {
            Default = QGVAR(B1_die_1);
        };
        class GVAR(moveset_B1_die_2): Acts_CarFixingWheel_actions {
            Default = QGVAR(B1_die_2);
        };
        class GVAR(moveset_B1_die_3): Acts_CarFixingWheel_actions {
            Default = QGVAR(B1_die_3);
        };
        class GVAR(moveset_B1_hit_1): Acts_CarFixingWheel_actions {
            Default = QGVAR(B1_hit_1);
        };
        class GVAR(moveset_B1_hit_2): Acts_CarFixingWheel_actions {
            Default = QGVAR(B1_hit_2);
        };
        class GVAR(moveset_B1_execution_main): Acts_CarFixingWheel_actions {
            Default = QGVAR(B1_execution_main);
        };
        class GVAR(B1_execution_victim): Acts_CarFixingWheel_actions {
            Default = QGVAR(B1_execution_victim);
        };
        class GVAR(moveset_B1_execution_victim_ragdoll): Acts_CarFixingWheel_actions {
            Default = QGVAR(B1_execution_victim_ragdoll);
        };
    };
};