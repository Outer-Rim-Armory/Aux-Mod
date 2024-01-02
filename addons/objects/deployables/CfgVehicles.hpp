class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class GVAR(DeployObject)
            {
                displayName = "Deploy";

                condition = "true";
                statement = "";
                insertChildren = QUOTE(_this call FUNC(deployInsertChildren));
            };
        };
    };
};