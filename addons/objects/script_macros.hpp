#define DEPLOYABLES_DEPLOY_ANIMATION_DURATION 0.925

#define VICSPAWNINF(classname,dispn) class classname { \
displayName = QUOTE(<t color='#ffb0b5'> Spawn [KC] dispn </t>); \
position = "pos cano"; \
radius = 15; \
condition = "True"; \
statement = QUOTE([ARR_2(this,'classname')] call FUNC(vicSpawner)); \
onlyforplayer = "false"; \
hideOnUse = 0; \
};
 // only diffrence is the colour for display name
#define VICSPAWNMED(classname,dispn) class classname { \
displayName = QUOTE(<t color='#ff0000'> Spawn [KC] dispn </t>); \
position = "pos cano"; \
radius = 15; \
condition = "True"; \
statement = QUOTE([ARR_2(this,'classname')] call FUNC(vicSpawner)); \
onlyforplayer = "false"; \
hideOnUse = 0; \
};
#define VICSPAWNRAP(classname,dispn) class classname { \
displayName = QUOTE(<t color='#D47F00'> Spawn [KC] dispn </t>); \
position = "pos cano"; \
radius = 15; \
condition = "True"; \
statement = QUOTE([ARR_2(this,'classname')] call FUNC(vicSpawner)); \
onlyforplayer = "false"; \
hideOnUse = 0; \
};
#define VICSPAWNTNK(classname,dispn) class classname { \
displayName = QUOTE(<t color='#00AAFF'> Spawn [KC] dispn </t>); \
position = "pos cano"; \
radius = 15; \
condition = "True"; \
statement = QUOTE([ARR_2(this,'classname')] call FUNC(vicSpawner)); \
onlyforplayer = "false"; \
hideOnUse = 0; \
};
#define VICSPAWNLOG(classname,dispn) class classname { \
displayName = QUOTE(<t color='#00c9a8'> Spawn [KC] dispn </t>); \
position = "pos cano"; \
radius = 15; \
condition = "True"; \
statement = QUOTE([ARR_2(this,'classname')] call FUNC(vicSpawner)); \
onlyforplayer = "false"; \
hideOnUse = 0; \
};
#define BCNAME(var1) class var1 \
{ \
    displayName = QUOTE(<t color='#00c9a8'>Crate Type: var1</t>); \
    position = "pos cano"; \
    radius = 15; \
    condition = "True"; \
    statement = QUOTE(hint 'Crate Type: var1';); \
    onlyforplayer = "false"; \
    hideOnUse = 0; \
}
#define VICSPAWNHELI(classname,dispn) class classname { \
displayName = QUOTE(<t color='#A2675A'> Spawn [KC] dispn </t>); \
position = "pos cano"; \
radius = 15; \
condition = "True"; \
statement = QUOTE([ARR_2(this,'classname')] call FUNC(vicSpawner)); \
onlyforplayer = "false"; \
hideOnUse = 0; \
};
#define VICSPAWNPLANE(classname,dispn) class classname { \
displayName = QUOTE(<t color='#3A3A3A'> Spawn [KC] dispn </t>); \
position = "pos cano"; \
radius = 15; \
condition = "True"; \
statement = QUOTE([ARR_2(this,'classname')] call FUNC(vicSpawner)); \
onlyforplayer = "false"; \
hideOnUse = 0; \
};
#define TERMINALSWAP(classname,dispn,colour) class DOUBLES(swap,classname) { \
displayName = QUOTE(<t color='colour'> Swap to dispn </t>); \
    position = "pos cano"; \
    radius = 15; \
    prority = 20; \
    condition = "True"; \
    statement = QUOTE([ARR_2(this,'classname')] call FUNC(terminalswap)); \
    onlyforplayer = "false"; \
    hideOnUse = 0; \
};
