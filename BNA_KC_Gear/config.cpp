/*
This is the root config for the mod.
Mod contents are split into "sub-addons" based on detachment.
Infantry, Armored, Aviation, etc.


Scope Values and their Meaning:
scope =
    0: Class is unavailable (and used for inheritance only)
    1: Class is unavailable in the editor (can be accessed with a macro)
    2: Class is available in the editor
scopeCurator =
    0: Class is unavailable in Zeus.
    2: Class is available in Zeus.
scopeArsenal =
    0: Class is unavailable in the Arsenal.
    2: Class is available in the Arsenal.


All class names should follow the style of:
BNA_KC_<type>_<name>_<optional: extra info>

For example, BNA_KC_Helmet_Phase2_CT and BNA_KC_Helmet_Phase2_CT_Legacy
That way, the class name of any item gives you all of the info about what it is.
These two items are phase 2 helmets for the CT rank, the second being
the legacy texture.
"_Base" should also be added for main item that all classes of that item should inherit from.
*/

class CfgMods
{
    class Mod_Base;
    class BNA_KC: Mod_Base
    {
        logo = "BNA_KC_Gear\Data\UI\BNA_KC_Logo.paa";
        logoOver = "BNA_KC_Gear\Data\UI\BNA_KC_Logo.paa";
        picture = "BNA_KC_Gear\Data\UI\BNA_KC_Logo.paa";
        name = "[KC] Keeli Company Aux Mod";
        dlcColor[] = {0,0,0,1};
    };
};

class CfgPatches
{
    class BNA_KC_Gear
    {
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
    };
};

class CfgFactionClasses
{
    class BNA_KC_Faction
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        scope = 2;
        scopeCurator = 2;
        displayName = "[KC] Keeli Company";
    };
};

class CfgEditorCategories
{
    class BNA_KC_Objects
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] Objects";
    };
};