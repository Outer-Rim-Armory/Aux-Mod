class ls_gar_phase2_uniform;
class CLASS(Uniform_Base): ls_gar_phase2_uniform
{
    class ItemInfo;
};
UNIFORM_CUSTOM(Axel);
UNIFORM_CUSTOM(Bob);
UNIFORM_CUSTOM(Burnt);
UNIFORM_CUSTOM(Catholic);
UNIFORM_CUSTOM(Defter);
UNIFORM_CUSTOM(Dexus);
UNIFORM_CUSTOM(Drake);
UNIFORM_CUSTOM(Hagrid);
UNIFORM_CUSTOM(Joe);
UNIFORM_CUSTOM(Keeli);

class CLASS(Uniform_Keeli_CamoBrown): CLASS(Uniform_Base)
{
    displayName = "[KC] Custom Armor ('Keeli') - Brown Camo";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Keeli_CamoBrown);
    };
    class XtdGearInfo
    {
        model = QCLASS(Uniforms_Custom);
        camo = "Keeli_CamoBrown";
    };
};
class CLASS(Uniform_Keeli_CamoGrey): CLASS(Uniform_Base)
{
    displayName = "[KC] Custom Armor ('Keeli') - Grey Camo";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Keeli_CamoGrey);
    };
    class XtdGearInfo
    {
        model = QCLASS(Uniforms_Custom);
        camo = "Keeli_CamoGrey";
    };
};

UNIFORM_CUSTOM(Rat);
UNIFORM_CUSTOM(Rev);
UNIFORM_CUSTOM(Sin);
UNIFORM_CUSTOM(Sogi);
UNIFORM_CUSTOM(Splashdown);
UNIFORM_CUSTOM(Tugz);
UNIFORM_CUSTOM(Tyrant);

class CLASS(Uniform_Phase2_Insulated_Base): CLASS(Uniform_Base)
{
    class ItemInfo;
};
UNIFORM_INSULATED_P2_CUSTOM(Dexus);
UNIFORM_INSULATED_P2_CUSTOM(Joe);
UNIFORM_INSULATED_P2_CUSTOM(Keeli);