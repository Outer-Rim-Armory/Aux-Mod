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
    class CLASS(AIRSpawner): 3AS_T_Screen{
        SCOPE_PUBLIC;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Utility);

        displayName = "Aircraft Terminal";
        class Useractions{

            // helicopter heliocopter *helicopter sounds*
            class Spawn_KC_LAAT_MK1
            {
                displayName = "Spawn [KC] LAAT/MK1";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_LAATi_MK1')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_LAAT_MK2
            {
                displayName = "Spawn [KC] LAAT/MK2";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_LAATi_MK2')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_LAAT_C
            {
                displayName = "Spawn [KC] LAAT/c";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_LAATc')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_LAAT_Med
            {
                displayName = "Spawn [KC] LAAT/Med";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_LAATi_Med')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            // basic fighters
            class Spawn_KC_V19
            {
                displayName = "Spawn [KC] V-19 Torrent";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_V19')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_Vwing
            {
                displayName = "Spawn [KC] V-Wing";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_Vwing')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };

            // advanced heli stuffs
            class Spawn_KC_NUclass
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Nu-Class Shuttle </t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_Nu')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_RHOclass
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Rho-Class Shuttle </t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_Rho')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_RHOclass_Med
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Rho Shuttle (Medical) </t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_Rho_medical')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };

        // advanced non heli also known as birds but not those birds just planes
        class Spawn_KC_ARC170
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] ARC-170 </t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_ARc170')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_Ywing
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Y-wing </t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_BTLB_Ywing')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_Gozanti
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Gozanti </t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_Gozanti')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Spawn_KC_Z95
            {
                displayName = "<t color='#2ed9ca'> Spawn [KC] Z-95 Headhunter </t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_2(this,'BNA_KC_Z95')] call FUNC(vicSpawner));
				onlyforplayer = "false";
				hideOnUse = 0;
            };
        };
    };

    class CLASS(LandSpawner): 3AS_T_Screen{
        SCOPE_PUBLIC;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Utility);
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\terminals\LandTerminal_screen_CO.paa)
        };

        displayName = "Ground Vehicle Terminal";
        class Useractions{
            // inf VICSPAWNINF
            VICSPAWNINF(CLASS(Bantha_Unarmed),Bantha (Unarmed))
            VICSPAWNINF(CLASS(Bantha_Assault),Bantha (Assault))
            VICSPAWNINF(CLASS(Bantha_AA),Bantha (AA))
            VICSPAWNINF(CLASS(Bantha_Cargo),Bantha (Cargo))
            VICSPAWNINF(CLASS(Bantha_IFV),Bantha (IFV))
            VICSPAWNINF(CLASS(Bantha_Mortar),Bantha (Mortar))
            VICSPAWNINF(CLASS(Hermitaur_class_I),Hermitaur (Infantry))
            VICSPAWNINF(CLASS(Hydra),Hydra)
            VICSPAWNINF(CLASS(Reek),Reek IFV)
            VICSPAWNINF(CLASS(Gammoth_Transport),Gammoth Transport)
            VICSPAWNINF(CLASS(Gammoth_Covered),Gammoth Trannsport (Coverd)) //
            VICSPAWNINF(CLASS(Glavenus_HMG),Glavenus Armed)
            VICSPAWNINF(CLASS(Glavenus_GMG),Glavenus Grenade)
            VICSPAWNINF(CLASS(Glavenus_Unarmed),Glavenus Transport)
            VICSPAWNINF(CLASS(Hornet_unarmed),Hornet Unarmed)
            VICSPAWNINF(CLASS(Hornet_AT),Hornet (AT))
            VICSPAWNINF(CLASS(Hornet_MG),Hornet (MG))
            // logistics VICSPAWNLOG
            VICSPAWNLOG(CLASS(Bantha_MSV),Bantha (Engineer))
            VICSPAWNLOG(CLASS(Hermitaur_class_E),Hermitaur (Engineer))
            VICSPAWNLOG(CLASS(Gammoth_Ammo),Gammoth Ammo)
            VICSPAWNLOG(CLASS(Gammoth_Refuel),Gammoth Refuel)
            VICSPAWNLOG(CLASS(Gammoth_Repair),Gammoth Repair)
            VICSPAWNLOG(CLASS(Gammoth_Device),Gammoth Device)
            VICSPAWNLOG(CLASS(Khezu_Unarmed),Khezu (Unarmed))
            VICSPAWNLOG(CLASS(Khezu_Armed),Khezu (Armed))
            // reeker VICSPAWNTNK
            VICSPAWNTNK(CLASS(Juggernaut),Juggernaut)
            VICSPAWNTNK(CLASS(ATTE),AT-TE)
            VICSPAWNTNK(CLASS(ATTE_Command),AT-TE (Command))
            VICSPAWNTNK(CLASS(TX130_M1),TX-130) //
            VICSPAWNTNK(CLASS(TX130_M1_Recon),TX-130 Recon) //
            VICSPAWNTNK(CLASS(TX130_M1_GL),TX-130 GL) //
            VICSPAWNTNK(CLASS(TX130_Super),TX-130 Super) //
            VICSPAWNTNK(CLASS(RX200_AA),RX200 (AA))
            VICSPAWNTNK(CLASS(RX200_Artillery),RX200 (Artillery))
            VICSPAWNTNK(CLASS(UTAT),UT-AT)
            VICSPAWNTNK(CLASS(ATAP),AT-AP)
            // medical VICSPAWNMED
            VICSPAWNMED(CLASS(Hermitaur_class_M),Hermitaur (Medic))
            VICSPAWNMED(CLASS(Gammoth_Medical),Gammoth Medic)
            VICSPAWNMED(CLASS(Glavenus_Medic),Glavenus Medic)
            // raptor VICSPAWNRAP
            VICSPAWNRAP(CLASS(BARC),BARC Speeder)

            //
        };
    };

    class 3as_Terminal_1_Prop;
    class CLASS(SideSwapper): 3as_Terminal_1_Prop {
        SCOPE_PUBLIC;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Utility);

        displayName = "Side Swap Terminal";
        class UserActions {
            class Swap_Bluefor
            {
                displayName = "<t color='#003cff'> Swap to BluFor</t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_1(player)] joinSilent (createGroup [ARR_2(west,true)]); hint 'Swapped to BluFor';);
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Swap_Redfor
            {
                displayName = "<t color='#ff2600'> Swap to OpFor</t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_1(player)] joinSilent (createGroup [ARR_2(east,true)]); hint 'Swapped to OpFor';);
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Side_Indie
            {
                displayName = "<t color='#009919'> Swap to Independant</t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_1(player)] joinSilent (createGroup [ARR_2(resistance,true)]); hint 'Swapped to Independant';);
				onlyforplayer = "false";
				hideOnUse = 0;
            };
            class Side_Civ
            {
                displayName = "<t color='#8200ba'> Swap to Civilian</t>";
				position = "pos cano";
				radius = 15;
                condition = "True";
				statement = QUOTE([ARR_1(player)] joinSilent (createGroup [ARR_2(civilian,true)]); hint 'Swapped to Civilian';);
				onlyforplayer = "false";
				hideOnUse = 0;
            };
        };
    };
};
