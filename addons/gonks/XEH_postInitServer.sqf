#include "script_component.hpp"

GVAR(loadouts) = createHashmap;
GVAR(ranks) = createHashmap;
GVAR(weapons) = createHashmap;

call FUNC(scanConfig);