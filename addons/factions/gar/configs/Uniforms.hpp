class ls_gar_phase2_uniform;
class CLASS(Uniform_Base): ls_gar_phase2_uniform
{
    class ItemInfo;
};
class CLASS(Uniform_CG): CLASS(Uniform_Base)
{
    displayName = "[CG] INF Armor";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_CG);
    };
};

class CLASS(Uniform_CG_Stone): CLASS(Uniform_CG)
{
    displayName = "[CG] INF Armor ('Stone')";

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_CG_Stone);
    };
};

class CLASS(Uniform_Fil): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Fil')";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Fil);
    };
};

class CLASS(Uniform_FilSquad): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Fil's Squad')";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_FilSquad);
    };
};

class CLASS(Uniform_HowzerBlue): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Howzer') [Blue]";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Phase2_HowzerBlue);
    };
};

class CLASS(Uniform_HowzerBrown): CLASS(Uniform_Base)
{
    displayName = "[KC] INF Armor ('Howzer') [Brown]";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_Phase2_HowzerBrown);
    };
};

class CLASS(Uniform_187th): CLASS(Uniform_Base)
{
    displayName = "[187th] INF Armor";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_187th_Trooper);
    };
};

class CLASS(Uniform_91st_Ponds): CLASS(Uniform_Base)
{
    displayName = "[91st] INF Armor ('Ponds')";
    EGVAR(custom_armor,isCustom) = TRUE;

    class ItemInfo: ItemInfo
    {
        uniformClass = QCLASS(Unit_91st_Ponds);
    };
};