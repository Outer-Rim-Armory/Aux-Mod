{
    private ["_oldPlatform", "_newPlatformClass"];
    _oldPlatform = _x;
    _newPlatformClass = switch (typeOf _x) do
    {
        case "3AS_Prop_Concrete_Platform_20x20": {"3AS_Prop_Baseplate_20_Dirt"};
        case "3AS_Prop_Concrete_Platform_50x50": {"3AS_Prop_Baseplate_50_Dirt"};
        case "3AS_Prop_platform_50x50_rep": {"3AS_Prop_Baseplate_50_GAR"};
        default {typeOf _oldPlatform};
    };

    if !(typeOf _oldPlatform isEqualTo _newPlatformClass) then
    {
        private ["_vectorDir", "_vectorUp", "_newPlatform"];
        _vectorDir = vectorNormalized (vectorDir _oldPlatform);
        _vectorUp = vectorNormalized (vectorUp _oldPlatform);
        _newPlatform = create3DENEntity ["Object", _newPlatformClass, getPosATL _oldPlatform];
        _newPlatform setVectorDirAndUp [_vectorDir, _vectorUp];
        delete3DENEntities [_oldPlatform];
    };
} forEach (all3DENEntities select 0);