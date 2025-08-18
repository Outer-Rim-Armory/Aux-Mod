class ls_sob_commando_uniform;
class CLASS(Commando_Uniform_Base): ls_sob_commando_uniform {
    class ItemInfo;
};
UNIFORM_RC_CUSTOM(Tugz);
UNIFORM_RC_CUSTOM(Jaws);
class CLASS(Uniform_RC_Jaws_Worn): CLASS(Commando_Uniform_Base) {
    displayName = "[KC] Custom Armor ('Jaws') - Worn";

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_RC_Jaws_Worn);
    };
};
UNIFORM_RC_CUSTOM(Cutthroat);
