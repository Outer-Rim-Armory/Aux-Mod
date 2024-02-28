class Extended_PreStart_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers
{
    class ADDON
    {
        clientInit = QUOTE(call COMPILE_SCRIPT(XEH_postInitClient));
        serverInit = QUOTE(call COMPILE_SCRIPT(XEH_postInitServer));
    };
};

class Extended_GetIn_EventHandlers
{
    class All
    {
        class GVAR(setIntercomChannel)
        {
            getIn = QUOTE(_this call FUNC(setIntercomChannel));
        };
    };
};

class Extended_Killed_EventHandlers
{
    class All
    {
        class GVAR(autoEject)
        {
            killedServer = QUOTE(_this call FUNC(autoEject));
        };
    };
};