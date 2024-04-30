class CfgVehicles {
    class WBK_SpecialZombie_Smasher_1;
    class CLASS(Creature_Rancor): WBK_SpecialZombie_Smasher_1 {
        displayName = "Rancor";
        uniformClass = QCLASS(Uniform_Rancor);
        nakedUniform = QCLASS(Uniform_Rancor);

        model = QPATHTOF(data\rancor\CLASS(Rancor.p3d));
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};

        faction = QFACTION(Creatures);
        editorSubcategory = QEDSUBCAT(Special);
    };
};