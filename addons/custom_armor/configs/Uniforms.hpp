class ls_gar_phase2_uniform;
class CLASS(Uniform_Base): ls_gar_phase2_uniform
{
    class ItemInfo;
};
class CLASS(Uniform_Axel): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Axel')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Axel);
    };
};

class CLASS(Uniform_Burnt): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Burnt')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Burnt);
    };
};

class CLASS(Uniform_Dexus): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Dexus')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Dexus);
    };
};

class CLASS(Uniform_Drake): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Drake')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Drake);
    };
};

class CLASS(Uniform_Fil): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Fil')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Fil);
    };
};

class CLASS(Uniform_FilSquad): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Fil's Squad')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_FilSquad);
    };
};

class CLASS(Uniform_HowzerBlue): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Howzer') [Blue]";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Phase2_HowzerBlue);
    };
};

class CLASS(Uniform_HowzerBrown): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Howzer') [Brown]";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Phase2_HowzerBrown);
    };
};

class CLASS(Uniform_Joe): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Joe')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Joe);
    };
};

class CLASS(Uniform_Keeli): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Keeli')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Keeli);
    };
};
class CLASS(Uniform_Keeli_CamoBrown): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Keeli') - Brown Camo";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Keeli_CamoBrown);
    };
};
class CLASS(Uniform_Keeli_CamoGrey): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Keeli') - Grey Camo";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Keeli_CamoGrey);
    };
};

class CLASS(Uniform_Ponds): CLASS(Uniform_Base)
{
    displayName = "[187th] INF Armor ('Ponds')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Ponds);
    };
};

class CLASS(Uniform_Trooper187): CLASS(Uniform_Base)
{
    displayName = "[187th] INF Armor";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Trooper187);
    };
};

class CLASS(Uniform_Rat): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Rat')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Rat);
    };
};

class CLASS(Uniform_Sin): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Sin')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Sin);
    };
};

class CLASS(Uniform_Stone): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Stone')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Stone);
    };
};

class CLASS(Uniform_Tyrant): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Tyrant')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Tyrant);
    };
};

class CLASS(Uniform_Phase2_Insulated_Base): CLASS(Uniform_Base)
{
    class ItemInfo;
};
class CLASS(Uniform_Phase2_Insulated_Dexus): CLASS(Uniform_Phase2_Insulated_Base)
{
    displayName = "[KC] INF P2 Snow Armor ('Dexus')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Phase2_Insulated_Dexus);
    };
};

class CLASS(Uniform_Phase2_Insulated_Joe): CLASS(Uniform_Phase2_Insulated_Base)
{
    displayName = "[KC] INF P2 Snow Armor ('Joe')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Phase2_Insulated_Joe);
    };
};

class CLASS(Uniform_Phase2_Insulated_Keeli): CLASS(Uniform_Phase2_Insulated_Base)
{
    displayName = "[KC] INF P2 Snow Armor ('Keeli')";
    GVAR(isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Phase2_Insulated_Keeli);
    };
};