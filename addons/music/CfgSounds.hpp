class CfgSounds
{
    class CLASS(Sound_Restaurant)
    {
        name = "Restaurant Ambience";
        sound[] = {QPATHTOF(data\ambient\Restaurant_Ambience.ogg), db+10, 1};
        titles[] = {2, "Restaurant"};
    };
    class CLASS(Sound_Incoming)
    {
        name = "Incoming Alarm";
        sound[] = {QPATHTOF(data\ambient\incoming_incoming.ogg), db+50, 1};
        titles[] = {2, "Incoming Alarm"};
    };
    class CLASS(Sound_Disturbance)
    {
        name = "Disturbance in the force";
        sound[] = {QPATHTOF(data\ambient\Disturbance.ogg), db+10, 1};
        titles[] = {2, "Disturbance in the force"};
    };
    class CLASS(Sound_JediWarning)
    {
        name = "Jedi Warning";
        sound[] = {QPATHTOF(data\ambient\Jedi_Warning.ogg), db+10, 1};
        titles[] = {2, "Jedi Warning"};
    };
    class CLASS(Sound_ATTE_Alarm)
    {
        name = "ATTE Alarm";
        sound[] = {QPATHTOF(data\ambient\ATTE_Alarm.ogg), db+10, 1};
        titles[] = {2, "ATTE Alarm"};
    };
    class CLASS(Sound_Radio_DK)
    {
        name = "DK Radio Chatter";
        sound[] = {QPATHTOF(data\ambient\DK_Radio_Radio_SFX.ogg), db+10, 1};
        titles[] = {2, "DK Radio Chatter"};
    };
    class CLASS(Sound_Carnage_Roar)
    {
        name = "Carnage Roar";
        sound[] = {QPATHTOF(data\ambient\Carnage_Roar.ogg), db+50, 1, 500, 1, 2, 3, 4};
        titles[] = {2, "Roaring"};
    };
    class CLASS(Sound_Carnage_Roar_2): BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar 2";
        sound[] = {QPATHTOF(data\ambient\Carnage_Roar_2.ogg), db+50, 1, 500, 1, 2, 3, 4};
    };
    class CLASS(Sound_Carnage_Roar_3): BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar 3";
        sound[] = {QPATHTOF(data\ambient\Carnage_Roar_3.ogg), db+50, 1, 500, 1, 2, 3, 4};
    };
    class CLASS(Sound_Carnage_Roar_4): BNA_KC_Ambient_Carnage_Roar
    {
        name = "Carnage Roar 4";
        sound[] = {QPATHTOF(data\ambient\Carnage_Roar_4.ogg), db+50, 1, 500, 1, 2, 3, 4};
    };
    class CLASS(Sound_Let_There_Be_Carnage)
    {
        name = "Let There Be Carnage";
        sound[] = {QPATHTOF(data\ambient\Let_There_Be_Carnage.ogg), db+50, 1, 500, 1, 2, 3, 4};
        titles[] = {2, "'Let there be carnage!'"};
    };
    class CLASS(Sound_Holonet)
    {
        name = "Holonet News";
        sound[] = {QPATHTOF(data\ambient\EPF_Radio_1.ogg), db+20, 1, 500, 1};
        titles[] = {2, "'Holonet News'"};
    };
    class CLASS(Sound_Holonet_2)
    {
        name = "Holonet News 2";
        sound[] = {QPATHTOF(data\ambient\EPF_Radio_2.ogg), db+20, 1, 500, 1};
        titles[] = {2, "'Holonet News 2'"};
    };
    class CLASS(Sound_Holonet_3)
    {
        name = "Holonet News 3";
        sound[] = {QPATHTOF(data\ambient\EPF_Radio_3.ogg), db+20, 1, 500, 1};
        titles[] = {2, "'Holonet News 3'"};
    };
};