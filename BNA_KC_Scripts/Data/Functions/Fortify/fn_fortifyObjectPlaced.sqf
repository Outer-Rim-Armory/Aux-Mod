[
    "acex_fortify_objectPlaced",
    {
        params ["_player", "_side", "_obj"];
        private ["_pos"];

        // Ladder
        if (typeOf _obj == "Land_PierLadder_F") then
        {
            _pos = getPosASL _obj;
            _pos set [2, _pos#2 + 2];
            _obj setPosASL _pos;
        };
    }
] call CBA_fnc_addEventHandler;