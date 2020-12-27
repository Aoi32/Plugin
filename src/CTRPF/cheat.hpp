#ifndef CHEATS_H
#define CHEATS_H
#define ADDTOFLOAT(addr, add_value) *(float *)addr += (float)add_value
#include "CTRPluginFramework.hpp"

namespace CTRPluginFramework
{
	void	test(MenuEntry *entry);
}
#endif