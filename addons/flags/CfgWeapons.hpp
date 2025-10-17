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

};
