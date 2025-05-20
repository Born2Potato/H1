// Enable to live edit functions
//#define DISABLE_COMPILE_CACHE

#include "script_macros_common.hpp"

#undef ADDON
#define ADDON H1

#undef PATHTO_SYS
#define PATHTO_SYS(var1,var2,var3) \ADDON\var3.sqf

#undef PREP
#ifdef DISABLE_COMPILE_CACHE
    #define PREP(var1) TRIPLES(ADDON,fnc,var1) = { call compile preProcessFileLineNumbers '\ADDON\functions\DOUBLES(fnc,var1).sqf' }
#else
    #define PREP(var1) ['\ADDON\functions\DOUBLES(fnc,var1).sqf', 'TRIPLES(ADDON,fnc,var1)'] call SLX_XEH_COMPILE_NEW
#endif
