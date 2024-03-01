class CfgVehicles
{
    class BARC_Base;
    class 3AS_BARC_Base: BARC_Base
    {
        // class Sounds
        // {
        //     class Engine;
        //     class EngineThrust_Int;
        //     class Engine_Int;
        //     class Engine1_Thrust_ext;
        //     class Engine2_Thrust_ext;
        //     class Engine3_Thrust_ext;
        //     class Engine4_Thrust_ext;
        //     class Engine1_Thrust_int;
        //     class Engine2_Thrust_int;
        //     class Engine3_Thrust_int;
        //     class Engine4_Thrust_int;
        //     class Idle_Int;
        //     class Idle_Ext;
        //     class IdleThrust_Int;
        // };
    };
    class CLASS(BARC): 3AS_BARC_Base
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = EDSUBCAT(Speeders);
        // editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,BARC);

        displayName = "BARC Speeder";
        crew = QCLASS(Unit_ARF_CT);
        typicalCargo[] = {QCLASS(Unit_ARF_CT)};

        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_LightVics\3AS_BARC\data\barc_rep_co.paa"};

        weapons[] = {"3AS_BARC_repeater", "ls_speeder_AP"};
        magazines[] =
        {
            "3AS_BARC_Mag",
            "ls_50Rnd_speederHE_belt",
            "ls_50Rnd_speederHE_belt",
            "ls_50Rnd_speederHE_belt"
        };

        textureList[] = {"Standard", 1, "KeeliCompany", 0};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {"\3AS\3AS_LightVics\3AS_BARC\data\barc_rep_co.paa"};
            };

            // Temporary textures
            class KeeliCompany: Standard
            {
                displayName = "Keeli Company";
                author = "Keeli Company Aux Team";
                textures[] = {"\3AS\3AS_LightVics\3AS_BARC\data\barc_212_co.paa"};
            };
        };

        soundEngineOnInt[] = {QPATHTOF(sounds\data\audio\barc\Engine_On.wss), 1, 1, 200};
        soundEngineOnExt[] = {QPATHTOF(sounds\data\audio\barc\Engine_On.wss), 1, 1, 200};
        soundEngineOffInt[] = {QPATHTOF(sounds\data\audio\barc\Engine_Off.wss), 1, 1, 200};
        soundEngineOffExt[] = {QPATHTOF(sounds\data\audio\barc\Engine_Off.wss), 1, 1, 200};

        // TODO: WIP
        /*
        class Sounds: Sounds
        {
            class Engine: Engine
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Engine_Idle.wss), 0.65, 1, 200};
            };

            class EngineThrust_Int: EngineThrust_Int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 0.75, 1, 200};
            };

            class Engine_Int: Engine_Int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 0.65, 1, 200};
            };

            class Engine1_Thrust_Ext: Engine1_Thrust_Ext
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 0.85, 1, 250};
            };
            class Engine2_Thrust_Ext: Engine2_Thrust_Ext
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 1, 1, 300};
            };
            class Engine3_Thrust_Ext: Engine3_Thrust_Ext
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 1, 1, 350};
            };
            class Engine4_Thrust_Ext: Engine4_Thrust_Ext
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_High.wss), 1, 1, 350};
            };

            class Engine1_Thrust_Int: Engine1_Thrust_Int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 1, 100};
            };
            class Engine2_Thrust_Int: Engine2_Thrust_Int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 1, 100};
            };
            class Engine3_Thrust_Int: Engine3_Thrust_Int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 1, 100};
            };
            class Engine4_Thrust_Int: Engine4_Thrust_Int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_High.wss), 1, 1, 100};
            };

            class Idle_Int: Idle_Int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 1, 1, 100};
            };

            class Idle_Ext: Idle_Ext
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 1, 1, 100};
            };

            class IdleThrust_Int: IdleThrust_Int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 0.64999998, 1};
            };
        };
        */
    };
};