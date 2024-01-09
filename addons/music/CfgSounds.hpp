class CfgSounds
{
    class BNA_KC_Ambient_Restaurant
    {
        name = "Restaurant Ambience";
        sound[] = {QPATHTOF(data\ambient\Restaurant_Ambience.ogg), db+10, 1};
        titles[] = {2, "Restaurant"};
    };
    class BNA_KC_Ambient_Incoming
    {
        name = "Incoming Alarm";
        sound[] = {QPATHTOF(data\ambient\incoming_incoming.ogg), db+50, 1};
        titles[] = {2, "Incoming Alarm"};
    };
    class BNA_KC_Ambient_Disturbance
    {
        name = "Disturbance in the force";
        sound[] = {QPATHTOF(data\ambient\Disturbance.ogg), db+10, 1};
        titles[] = {2, "Disturbance in the force"};
    };
    class BNA_KC_Ambient_JediWarning
    {
        name = "Jedi Warning";
        sound[] = {QPATHTOF(data\ambient\Jedi_Warning.ogg), db+10, 1};
        titles[] = {2, "Jedi Warning"};
    };
    class BNA_KC_Ambient_ATTE_Alarm
    {
        name = "ATTE Alarm";
        sound[] = {QPATHTOF(data\ambient\ATTE_Alarm.ogg), db+10, 1};
        titles[] = {2, "ATTE Alarm"};
    };
    class BNA_KC_Ambient_Radio_DK
    {
        name = "DK Radio Chatter";
        sound[] = {QPATHTOF(data\ambient\DK_Radio_Radio_SFX.ogg), db+10, 1};
        titles[] = {2, "DK Radio Chatter"};
    };
    class BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar";
        sound[] = {QPATHTOF(data\ambient\Carnage_Roar.ogg), db+50, 1, 500, 1, 2, 3, 4};
        titles[] = {2, "Roaring"};
    };
    class BNA_KC_Ambient_Carnage_Roar_2: BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar 2";
        sound[] = {QPATHTOF(data\ambient\Carnage_Roar_2.ogg), db+50, 1, 500, 1, 2, 3, 4};
    };
    class BNA_KC_Ambient_Carnage_Roar_3: BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar 3";
        sound[] = {QPATHTOF(data\ambient\Carnage_Roar_3.ogg), db+50, 1, 500, 1, 2, 3, 4};
    };
    class BNA_KC_Ambient_Carnage_Roar_4: BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar 4";
        sound[] = {QPATHTOF(data\ambient\Carnage_Roar_4.ogg), db+50, 1, 500, 1, 2, 3, 4};
    };
    class BNA_KC_Ambient_Let_There_Be_Carnage
    {
        name = "Let There Be Carnage";
        sound[] = {QPATHTOF(data\ambient\Let_There_Be_Carnage.ogg), db+50, 1, 500, 1, 2, 3, 4};
        titles[] = {2, "'Let there be carnage!'"};
    };
    class BNA_KC_Ambient_Holonet
    {
        name = "Holonet News";
        sound[] = {QPATHTOF(data\ambient\EPF_Radio_1.ogg), db+20, 1, 500, 1};
        titles[] = {2, "'Holonet News'"};
    };
    class BNA_KC_Ambient_Holonet_2
    {
        name = "Holonet News 2";
        sound[] = {QPATHTOF(data\ambient\EPF_Radio_2.ogg), db+20, 1, 500, 1};
        titles[] = {2, "'Holonet News 2'"};
    };
    class BNA_KC_Ambient_Holonet_3
    {
        name = "Holonet News 3";
        sound[] = {QPATHTOF(data\ambient\EPF_Radio_3.ogg), db+20, 1, 500, 1};
        titles[] = {2, "'Holonet News 3'"};
    };
};