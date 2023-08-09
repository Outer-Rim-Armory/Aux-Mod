/*
 * Author: DartRuffian
 * Returns a config property from a given class. The expected type can optionally be passed to skip determining the type.
 * Use "Text" if trying to get a classname from a config property.
 * Note: If a wrong expected data type is passed, the default value (if present) will be returned.
 *
 * Arguments:
 * config: Config - Config path to the class
 * defaultValue: Anything - Default value if getX returns nil.
 * dataType: String - (Optional, default "") One of "Number", "Text", or "Array". Not case sensitive.
 *
 * Return Value:
 * Number, Text, Array, or nil - The requested config value / default value, or nil if no property is found
 *
 * Examples:
 * (configFile >> "CfgVehicles" >> typeOf heli >> "displayName") call BNAKC_fnc_getConfigProperty;
 */


params ["_config", ["_defaultValue", nil]["_dataType", ""]];

private _propertyValue = switch (toLowerANSI _dataType) do
{
    case "number":
    {
        getNumber (_config);
    };
    case "text":
    {
        getText (_config);
    };
    case "array":
    {
        getArray (_config);
    };
    default
    {
        // Data type not passed or passed incorrectly
        if (isNumber _config) exitWith { getNumber (_config); };
        if (isText _config) exitWith { getText (_config); };
        if (isArray _config) exitWith { getArray (_config); };
        _defaultValue;
    };
};

_propertyValue;