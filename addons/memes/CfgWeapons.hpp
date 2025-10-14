#define FLAG_ITEM(type,name,color) \
    class TRIPLES(BNA_KC_carrierFlag,type,item): ace_flags_white { \
        author = AUTHOR; \
        displayName = QUOTE(Flag (name)); \
        picture = QUOTE(\z\ace\addons\flags\data\pictures\DOUBLES(color,item.paa)); \
        ace_flags_texture = QPATHTOF(data\flags\TRIPLES(flag,type,ca.paa)); \
        ace_flags_carrier = QUOTE(DOUBLES(BNA_KC_carrierFlag,type)); \
        ace_flags_actionIconPlace = QUOTE(\z\ace\addons\flags\data\icons\place\DOUBLES(color,place_icon.paa)); \
        ace_flags_actionIconCarry = QUOTE(\z\ace\addons\flags\data\icons\carry\DOUBLES(color,carry_icon.paa)); \
    }

class CfgWeapons {


    class ace_flags_white;
    FLAG_ITEM(kc,Keeli Company Flag,red);
    FLAG_ITEM(kcmed,Keeli Medics Flag,red);


    #ifdef APRIL_FOOL
    class 3AS_DC15L_F;
    class CLASS(DC15L_Base): 3AS_DC15L_F {
        displayName = "[KC] DC-15W (Base)";
        descriptionShort = "DC-15W, because we don't take L's.<br />Automatic Blaster Rifle";
    };

    class CLASS(DC15L): CLASS(DC15L_Base) {
        displayName = "[KC] DC-15W";
    };
    class CLASS(DC15L_Fried): CLASS(DC15L) {
        displayName = "[KC] DC-15W (Fried)";
        descriptionShort = "DC-15W, because we don't take L's.<br />The circuits of the weapon have<br/>been fried by an EMP blast.";
    };
    #endif



};
