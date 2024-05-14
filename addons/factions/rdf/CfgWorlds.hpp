class CfgWorlds {
    class GenericNames {
        class CLASS(rdfSoldier) {
            class FirstNames {
                RDF = "RDF";
            };
            class LastNames {
                Soldier = "Soldier";
            };
        };
        class CLASS(rdfSwat): CLASS(rdfSoldier) {
            class LastNames {
                SWAT = "SWAT";
            };
        };
    };
};