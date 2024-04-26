#include "script_component.hpp"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

call FUNC(registerLoadouts);
call FUNC(registerWeapons);
call FUNC(registerRankLoadouts);

ADDON = true;