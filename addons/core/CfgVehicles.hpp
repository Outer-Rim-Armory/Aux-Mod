class CfgVehicles {
    class Headgear_Base_F;
    class DOUBLES(Ground,CLASS(Holder_Base)): Headgear_Base_F {
        SCOPE_PRIVATE;
        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Helmets);

        class TransportItems {};
    };

    class Bag_Base;
    class CLASS(backpack_base): Bag_Base {
        SCOPE_PRIVATE;
        author = AUTHOR;
        picture = QPATHTOF(ui\logo_kc_ca.paa);
    };
};