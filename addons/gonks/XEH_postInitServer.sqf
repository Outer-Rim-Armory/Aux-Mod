#include "script_component.hpp"

GVAR(loadouts) = createHashmap;
GVAR(rankLoadouts) = createHashmap;
GVAR(weapons) = createHashmap;

call FUNC(scanConfig);

// call FUNC(registerLoadouts);
call FUNC(registerWeapons);
call FUNC(registerRankLoadouts);