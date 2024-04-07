/*
** $Id: luausrlib.h $
** Lua standard libraries
** See Copyright Notice in lua.h
*/


#ifndef luausrlib_h
#define luausrlib_h

#include "lua.h"


/* version suffix for environment variable names */
#define LUA_VERSUFFIX          "_" LUA_VERSION_MAJOR "_" LUA_VERSION_MINOR


#define LUA_INJECTOR	"injector"
LUAMOD_API int (luaopen_injector) (lua_State *L);

/* open all previous libraries */
LUALIB_API void (luaL_openusrlibs) (lua_State *L);


#endif
