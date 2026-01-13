class CfgVehicles {
    class Aux212_Bantha_C_Unarmed;
    class Aux212_Bantha_T_Assault;
    class Aux212_Bantha_C_IFV;
    class Aux212_Bantha_E_MSV;
    class Aux212_Bantha_T_Cargo;
    class Aux212_Bantha_C_AA;
    class Aux212_Bantha_C_Mortar;
    class CLASS(Bantha_Unarmed): Aux212_Bantha_C_Unarmed {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "HAVw A2 Bantha (Unarmed)";
        crew = QCLASS(Unit_Phase2_CT);
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        ace_cargo_space = 4;
        INVENTORY_VEHICLE_GAMTRANS(2);
        class UserActions {
            VS_SQUADSHIELD
        };
    };

    class CLASS(Bantha_Assault): Aux212_Bantha_T_Assault {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "HAVw A2 Bantha (Assault)";
        crew = QCLASS(Unit_Phase2_CT);
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        ace_cargo_space = 4;
        INVENTORY_VEHICLE_GAMTRANS(2);
        class UserActions {
            VS_ASSAULTSHIELD
        };
    };

    class CLASS(Bantha_IFV): Aux212_Bantha_C_IFV {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "HAVw A2 Bantha (IFV)";
        crew = QCLASS(Unit_Phase2_CT);
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        ace_cargo_space = 4;
        INVENTORY_VEHICLE_GAMTRANS(2);
        class UserActions {
            VS_SQUADSHIELD
            VS_ASSAULTSHIELD
        };
    };

    class CLASS(Bantha_MSV): Aux212_Bantha_E_MSV {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "HAVw A2 Bantha (MSV)";
        crew = QCLASS(Unit_Phase2_CT);
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        ace_cargo_space = 10;
        ace_repair_canRepair = 1;
        supplyRadius = 10;
        INVENTORY_VEHICLE_GAMTRANS(2);
        class UserActions {
            VS_REPAIRMODE
        };
    };

    class CLASS(Bantha_Cargo): Aux212_Bantha_T_Cargo {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "HAVw A2 Bantha (Cargo)";
        crew = QCLASS(Unit_Phase2_CT);
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        ace_cargo_space = 10;
        INVENTORY_VEHICLE_GAMTRANS(2);
    };

    class CLASS(Bantha_AA): Aux212_Bantha_C_AA {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "HAVw A2 Bantha (AA)";
        crew = QCLASS(Unit_Phase2_CT);
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        ace_cargo_space = 4;
        INVENTORY_VEHICLE_GAMTRANS(2);
        class UserActions {
            VS_ASSAULTSHIELD
        };
    };

    class CLASS(Bantha_Mortar): Aux212_Bantha_C_Mortar {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "HAVw A2 Bantha (Mortar)";
        crew = QCLASS(Unit_Phase2_CT);
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        ace_cargo_space = 4;
        INVENTORY_VEHICLE_GAMTRANS(2);
        class UserActions {
            VS_ASSAULTSHIELD
        };
    };
};
