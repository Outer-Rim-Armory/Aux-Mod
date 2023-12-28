#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Creates a CBA per-frame handler as long as a given condition is true.
 *
 * Arguments:
 * 0: Function to run when condition is true <CODE>
 * 1: Condition to check <CODE>
 * 2: Code to run after removing PFH <CODE>
 * 3: The delay between each execution (optional, default: 0) <NUMBER>
 * 4: Parameters to pass to the PFH (optional) <ANY>
 *
 * Return Value:
 * The PFH id, or -1 if error <NUMBER>
 *
 * Example:
 * call Aux193_Core_fnc_createTempPFH;
 */

params
[
    ["_function", {}, [{}]],
    ["_condition", {true}, [{}]],
    ["_exitCode", {}, [{}]],
    ["_delay", 0, [0]],
    ["_parameters", []]
];
private ["_pfhHandler"];
TRACE_5("fnc_tempPFH", _function, _condition, _exitCode, _delay, _parameters);

_pfhHandler = [{
        params ["_args", "_handle"];
        _args params ["_function", "_condition", "_exitCode", "_parameters"];
        _parameters = [_handle] + _parameters;

        if (_parameters call _condition) then {
            _parameters call _function;
        } else {
            _handle call CBA_fnc_removePerFrameHandler;
            _parameters call _exitCode;
        };
    },
    _delay,
    [_function, _condition, _exitCode, _parameters]
] call CBA_fnc_addPerFrameHandler;

_pfhHandler;