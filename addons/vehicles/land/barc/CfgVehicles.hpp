class CfgVehicles
{
    class BARC_Base;
    class 3AS_BARC_Base: BARC_Base
    {
        class Sounds
        {
            class Engine;
            class Engine_int;
            class EngineThrust_int;
            class Engine3_Thrust_int;
            class Engine3_Thrust_ext;
            class Engine4_Thrust_int;
            class Engine4_Thrust_ext;
            class Idle_int;
            class Idle_ext;
            class IdleThrust_int;
        };
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

        weapons[] = {QCLASS(Turret_BARC), "ls_speeder_AP"};
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

        // Some sounds just refuse to convert to .wss
        soundEngineOnInt[] = {QPATHTOF(sounds\data\audio\barc\Engine_On.ogg), 1, 1};
        soundEngineOffInt[] = {QPATHTOF(sounds\data\audio\barc\Engine_Off.wss), 1, 1};
        soundEngineOnExt[] = {QPATHTOF(sounds\data\audio\barc\Engine_On.ogg), 1, 1, 100};
        soundEngineOffExt[] = {QPATHTOF(sounds\data\audio\barc\Engine_Off.wss), 1, 1, 100};

        // TODO: WIP
        /*
        class Sounds: Sounds
        {
            class Engine: Engine
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Engine_Idle.ogg), 0.45, 1, 200};
            };
            class Engine_int: Engine_int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Engine_Idle.ogg), 0.45, 1};
            };
            // class EngineThrust_int: EngineThrust_int
            // {
            //     sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_High.wss), 0.65, 1};
            // };
            // class Engine3_Thrust_int: Engine3_Thrust_int
            // {
            //     sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_High.wss), 1, 1};
            // };
            // class Engine3_Thrust_ext: Engine3_Thrust_ext
            // {
            //     sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_High.wss), 1, 1, 350};
            // };
            // class Engine4_Thrust_int: Engine4_Thrust_int
            // {
            //     sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 1, 1};
            // };
            // class Engine4_Thrust_ext: Engine4_Thrust_ext
            // {
            //     sound[] = {QPATHTOF(sounds\data\audio\barc\Thrust_Medium.wss), 1, 1, 350};
            // };

            class Idle_int: Idle_int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Engine_Idle.ogg), 0.45, 1};
            };
            class Idle_ext: Idle_ext
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Engine_Idle.ogg), 0.65, 1, 100};
            };

            class IdleThrust_int: Idle_int
            {
                sound[] = {QPATHTOF(sounds\data\audio\barc\Engine_Idle.ogg), 0.45, 1};
            };
        };
        */
    };
};