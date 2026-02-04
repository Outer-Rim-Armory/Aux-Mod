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
