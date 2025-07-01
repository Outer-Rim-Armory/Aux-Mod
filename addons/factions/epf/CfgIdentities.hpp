class CfgIdentities {
    class CLASS(ElPresidente) {
        face = "PersianHead_A3_02";
        glasses = "None";
        name = "El Presidente";
        nameSound = "El Presidente";
        pitch = 1;
        speaker = "Male01ENG";
    };

    class CLASS(ElGeneral): CLASS(ElPresidente) {
        face = "GreekHead_A3_04";
        name = "El General";
        nameSound = "El General";
    };
};
