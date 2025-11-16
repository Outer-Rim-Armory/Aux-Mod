class CfgWeapons {
    class Uniform_Base;
    class UniformItem;
    class CLASS(Uniform_Rancor): Uniform_Base {
        SCOPE_HIDDEN;
        displayname = "Rancor Hide";
        model = QPATHTOF(data\rancor\CLASS(Rancor.p3d));
        picture = "";

        class ItemInfo: UniformItem {
            containerclass = "Supply200";
            uniformClass = QCLASS(Creature_Rancor);
            uniformModel = "-";
            mass = 30;
        };
    };
};
