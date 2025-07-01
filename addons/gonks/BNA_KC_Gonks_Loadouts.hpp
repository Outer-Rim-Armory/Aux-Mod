#define BASE_MAGAZINES {QCLASS(Mag_20Rnd_DC17), 3}, \
{"ls_mag_classC_thermalDet", 2}, \
{"3AS_SmokeWhite", 2}, \
{"3AS_SmokeBlue", 2}, \
{"3AS_SmokeGreen", 2}, \
{"ShieldGrenade_Mag", 3}, \
{"Chemlight_blue", 5}

#define BASE_ITEMS {"ACE_CableTie", 5}, \
{"ACE_EntrenchingTool", 1}, \
{"ACE_Flashlight_XL50", 1}, \
{"ACE_MapTools", 1}, \
{"JLTS_ids_gar_army", 1}, \
{"ACE_IR_Strobe_Item", 2}, \
{"ACE_elasticBandage", 20}, \
{"ACE_tourniquet", 4}, \
{"ItemcTabHCam", 1}

class GVAR(loadouts) {
    // Detachment
    class Infantry {
        label = "Nightfall";
        order = 0;
        // Squad role
        class Security {
            label = "Security";
            order = 0;
            class Rifleman {
                label = "Rifleman";
                order = __COUNTER__;
                handgun = QCLASS(DC17);
                launcher = "";
                binoculars = "";
                vest = "";
                backpack = QCLASS(Backpack_Invis);
                weapons[] = {"DC15A", "DC15S", "DC15C"};
                magazines[] = {
                    BASE_MAGAZINES
                };
                items[] = {
                    BASE_ITEMS
                };
            };

            class SquadLeader: Rifleman {
                label = "Squad Leader";
                order = __COUNTER__;
                binoculars = "JLTS_CloneBinocular";
                magazines[] = {
                    BASE_MAGAZINES,
                    {"ls_mag_classC_thermalDet", 2},
                    {"3AS_SmokeWhite", 3},
                    {"3AS_SmokeBlue", 1},
                    {"3AS_SmokeGreen", 1},
                    {"3AS_SmokeRed", 3},
                    {"3AS_SmokePurple", 3},
                    {"SquadShieldMagazine", 5},
                    {QCLASS(Grenade_EMP), 3},
                    {QCLASS(Mag_UGL_FlareBlue), 3},
                    {"Laserbatteries", 2}
                };
                items[] = {
                    BASE_ITEMS,
                    {"ACE_surgicalKit", 1},
                    {QEGVAR(medical,Painkiller), 3},
                    {"ItemcTab", 1}
                };
            };
            __COUNTER_RESET__
        };
        class Assault {
            label = "Assault";
            order = 1;
        };
        class Weapons {
            label = "Weapons";
            order = 2;
        };
    };
    class Engineer {
        label = "Leviathan";
        order = 1;
    };
    class Crewmen {
        label = "Reeker";
        order = 2;
    };
    class Aviation {
        label = "Blurrg";
        order = 3;
    };
    class ARF {
        label = "Raptor";
        order = 4;
    };
    class ARC {
        label = "Spartan";
        order = 5;
    };
};
