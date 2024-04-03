#include "script_component.hpp"

GVAR(loadouts) = createHashmap;
GVAR(rankLoadouts) = createHashmap;
GVAR(weapons) = createHashmap;

call FUNC(scanConfig);

call FUNC(registerRankLoadouts);