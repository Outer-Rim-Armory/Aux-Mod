class CBA_Extended_EventHandlers;

class CfgVehicles {
    class ls_flag_base;
    class CLASS(Flag_KC_Pole): ls_flag_base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Flags);

        displayName = "KC Flag (Pole)";

        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\flags\KC_co.paa));
        };
    };

    class ls_staticFlag_base;
    class CLASS(Flag_KC_Vertical): ls_staticFlag_base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Flags);

        displayName = "KC Flag (Vertical)";

        model = "\ls\core\addons\props\flags\ls_vertical_flag.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Vertical_co.paa)};
    };
    class CLASS(Flag_KC_Horizontal): CLASS(Flag_KC_Vertical) {
        displayName = "KC Flag (Horizontal)";

        model = "\ls\core\addons\props\flags\ls_horizontal_flag.p3d";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_co.paa)};
    };

    class CLASS(Flag_KC_Damaged_Pole): CLASS(Flag_KC_Pole) {
        displayName = "KC Damaged Flag (Pole)";
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\flags\KC_Damaged_co.paa));
        };
    };
    class CLASS(Flag_KC_Damaged_Vertical): CLASS(Flag_KC_Vertical) {
        displayName = "KC Damaged Flag (Vertical)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_Vertical_co.paa)};
    };
    class CLASS(Flag_KC_Damaged_Horizontal): CLASS(Flag_KC_Horizontal) {
        displayName = "KC Damaged Flag (Horizontal, Mirrored)";

        model = "\ls\core\addons\props\flags\ls_horizontal_flag.p3d";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_co.paa)};
    };
    class CLASS(Flag_KC_Damaged_Horizontal_Mirrored): CLASS(Flag_KC_Horizontal) {
        displayName = "KC Damaged Flag (Horizontal)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_Mirrored_co.paa)};
    };

    class 3AS_GNK;
    class CLASS(Gonk_Base): 3AS_GNK {
        SCOPE_PRIVATE;
        author = AUTHOR;

        // Editor Attributes
        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Utility);
        editorPreview = EDITOR_PREVIEW(Gonk_Base);

        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
        };
    };

    class CLASS(Gonk_Permissions): CLASS(Gonk_Base) {
        SCOPE_PUBLIC;
        displayName = "Permissions Gonk";

        class UserActions {
            class Assign_Medic {
                displayName = QUOTE(<t color='#c40000'><img image=QQPATHTOEF(core,data\ui\Medic_White_ca.paa)/> Assign Medic Permissions</t>);

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = TRUE;
                priority = 100;

                condition = QUOTE(!(ace_player call EFUNC(core,isMedic)));
                statement = QUOTE([ARR_2(ace_player,1)] call EFUNC(core,setMedic));
            };
            class Unassign_Medic: Assign_Medic {
                displayName = QUOTE(<t color='#c40000'><img image=QQPATHTOEF(core,data\ui\Medic_White_ca.paa)/> Unassign Medic Permissions</t>);
                condition = QUOTE(ace_player call EFUNC(core,isMedic));
                statement = QUOTE([ARR_2(ace_player,0)] call EFUNC(core,setMedic));
            };
            class Assign_Engineer: Assign_Medic {
                displayName = QUOTE(<t color='#f0be00'><img image=QQPATHTOEF(core,data\ui\EOD_White_ca.paa)/> Assign Engineer Permissions</t>);
                condition = QUOTE(!(ace_player call EFUNC(core,isEngineer)));
                statement = QUOTE([ARR_2(ace_player,2)] call EFUNC(core,setEngineer));
            };
            class Unassign_Engineer: Assign_Engineer {
                displayName = QUOTE(<t color='#f0be00'><img image=QQPATHTOEF(core,data\ui\EOD_White_ca.paa)/> Unassign Engineer Permissions</t>);
                condition = QUOTE(ace_player call EFUNC(core,isEngineer));
                statement = QUOTE([ARR_2(ace_player,0)] call EFUNC(core,setEngineer));
            };
            class AssignPilot: Assign_Engineer {
                displayName = QUOTE(<t color='#2ed9ca'><img image=QQPATHTOEF(core,data\ui\logo_kc_ca.paa)/> Assign Pilot Permissions</t>);
                condition = "!([ace_player, 'pilot'] call ls_common_fnc_getSkill)"; // Check that player does not have the skill
                statement = "[ace_player, 'pilot', 1] call ls_common_fnc_setSkill"; // Set skill level to 1
            };
            class AssignAdvPilot: Assign_Engineer {
                displayName = QUOTE(<t color='#2ed9ca'><img image=QQPATHTOEF(core,data\ui\logo_kc_ca.paa)/> Assign Advanced Pilot Permissions</t>);
                condition = "!([ace_player, 'pilot'] call ls_common_fnc_getSkill)"; // Check that player does not have the skill
                statement = "[ace_player, 'pilot', 2] call ls_common_fnc_setSkill"; // Set skill level to 1
            };
            class UnassignPilot: Assign_Engineer {
                displayName = QUOTE(<t color='#2ed9ca'><img image=QQPATHTOEF(core,data\ui\logo_kc_ca.paa)/> Unassign Pilot Permissions</t>);
                condition = "[ace_player, 'pilot'] call ls_common_fnc_getSkill";
                statement = "[ace_player, 'pilot', 0] call ls_common_fnc_setSkill";
            };
        };
    };

    class CLASS(Utility_Arsenal): CLASS(Gonk_Base) {
        SCOPE_PUBLIC;
        displayName = "Arsenal Terminal";
        model = "\3AS\3AS_Props\Terminals\Terminal_short.p3d";
        editorPreview = EDITOR_PREVIEW(Utility_Arsenal);

        class UserActions {
            class Arsenal_ACE {
                displayName = QUOTE(<t color='#a02116'><img image=QQPATHTOEF(core,data\ui\ACE_logo_small_ca.paa)/> Open ACE Arsenal</t>);

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = TRUE;
                priority = 100;

                condition = "true";
                statement = QUOTE([ARR_3(ace_player,ace_player,true)] call ace_arsenal_fnc_openBox;);
            };

            class Arsenal_BIS: Arsenal_ACE {
                // Bohemia Green, looks weird: #6BA539
                displayName = QUOTE(<t color='#E6E6E6'><img image=QQPATHTOEF(core,data\ui\BIS_logo_small_ca.paa)/> Open BIS Arsenal</t>);
                statement = QUOTE([ARR_2('Open',[true])] call BIS_fnc_arsenal;);
            };

            class Add_Radio: Arsenal_ACE {
                displayName = "<t color='#E6E6E6'><img image='\a3\modules_f_curator\data\portraitradio_ca.paa'/> Add Radio</t>";
                statement = QUOTE(ace_player linkItem 'ls_radios_cwp8');
            };
        };
    };

    class CLASS(Utility_FullHeal): CLASS(Gonk_Base) {
        SCOPE_PUBLIC;
        displayName = "Full Heal Droid";
        model = "\3AS\3AS_props\droids\models\3AS_medical_droid.p3d";
        editorPreview = EDITOR_PREVIEW(Utility_FullHeal);

        class UserActions {
            class FullHeal {
                displayName = "<t color='#c40000'><img image='z\ace\addons\zeus\ui\icon_module_zeus_heal_ca.paa'/> Recieve Treatment</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = FALSE;
                priority = 100;

                condition = "true";
                statement = QUOTE([ARR_2(ace_player,ace_player)] call ace_medical_treatment_fnc_fullHeal; playSound3D [ARR_2(QQPATHTOEF(medical,data\audio\MedicalDroid_Treat.wss),ARR_8(objNull,false,getPosASL this,3,1,10,0,true))];);
            };
        };
    };

    class 3AS_T_Screen;
    class CLASS(AIRSpawer): 3AS_T_Screen{
    SCOPE_PUBLIC;
    author = AUTHOR;

    editorCategory = QEDCAT(Objects);
    editorSubcategory = QEDSUBCAT(Utility);

    displayName = "KC Aircraft Terminal";
        class Useractions{

            // helicopter heliocopter *helicopter sounds*
            class Spawn_KC_LAAT_MK1
            {
                displayName = "Spawn [KC] LAAT/MK1";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot'] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_LAATi_MK1')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_LAAT_MK2
            {
                displayName = "Spawn [KC] LAAT/MK2";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot'] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_LAATi_MK2')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_LAAT_C
            {
                displayName = "Spawn [KC] LAAT/c";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot'] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_LAATc_new')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            // basic fighters
            class Spawn_KC_V19
            {
                displayName = "Spawn [KC] V-19 Torrent";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot'] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_V19')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_Vwing
            {
                displayName = "Spawn [KC] V-Wing";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot'] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_Vwing')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };

            // advanced heli stuffs
            class Spawn_KC_NUclass
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Nu-Class Shuttle </t>";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot', 2] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_Nu')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_RHOclass
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Rho-Class Shuttle </t>";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot', 2] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_Rho')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };

        // advanced non heli also known as birds but not those birds just planes
        class Spawn_KC_ARC170
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] ARC-170 </t>";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot', 2] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_ARc170')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_Ywing
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Y-wing </t>";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot', 2] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_BLTB_Ywing')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_Gozanti
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Gozanti </t>";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot', 2] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_Gozanti')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_Z95
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Z-95 Headhunter </t>";
				position = "pos cano";
				radius = 15;
                condition = "[ace_player, 'pilot', 2] call ls_common_fnc_getSkill";
				statement = QUOTE([ARR_2(this,'BNA_KC_Z95')] call FUNC(VicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
        };
    };
};
