class CfgVehicles {
    class 3AS_HAGM_CIS;
    class CLASS(HAG_Base): 3AS_HAGM_CIS {
        SCOPE_HIDDEN;
        displayName = "HAG (Base)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Crew);

        hiddenSelectionsTextures[] = {
            "3AS\3AS_HAGM\data\CISArty_CIS_CO.paa"
        };

        textureList[] = {
            "CIS", 1,
            "TradeFederation", 0,
        };
        class TextureSources {
            class CIS {
                displayName = "CIS";
                author = "$STR_3AS_Studio";
                factions[] = {QFACTION(CIS)};
                textures[] = {"3AS\3AS_HAGM\data\CISArty_CIS_CO.paa"};
            };
            class TradeFederation: CIS {
                displayName = "Trade Federation";
                factions[] = {QFACTION(TU)};
                textures[] = {"3AS\3AS_HAGM\data\CISArty_Tan_CO.paa"};
            };
        };
    };
};
