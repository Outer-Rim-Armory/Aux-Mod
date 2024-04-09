class CfgWorlds {
    class GenericNames {
        class CLASS(RDF_Soldier) {
            class FirstNames {
                RDF = "RDF";
            };
            class LastNames {
                Soldier = "Soldier";
            };
        };
        class CLASS(RDF_Swat): CLASS(RDF_Soldier) {
            class LastNames {
                SWAT = "SWAT";
            };
        };
    };
};