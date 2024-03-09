#define B1_UNIFORM(var1) class CLASS(DOUBLES(CIS_Uniform_Droid_B1,var1)): CLASS(CIS_Uniform_Droid_Base) \
{ \
    SCOPE_PUBLIC; \
    displayName = QUOTE([CIS] B1 var1 Droid); \
    class ItemInfo: ItemInfo \
    { \
        uniformClass = QCLASS(DOUBLES(CIS_Unit_Droid_B1,var1)); \
    }; \
    class XtdGearInfo \
    { \
        model = QCLASS(CIS_Uniforms_B1); \
        camo = QUOTE(var1); \
    }; \
}