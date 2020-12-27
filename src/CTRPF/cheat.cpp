#include "types.h"
#include "cheat.hpp"
namespace CTRPluginFramework
{
void	test(MenuEntry *entry)
{
	if(Controller::IsKeysDown(B+DPadRight)) ADDTOFLOAT(0xXXXXXXXX, Y.Y);	//B+十字右
	if(Controller::IsKeysDown(B+DPadLeft)) ADDTOFLOAT(0xXXXXXXXX, -Y.Y);	//B+十字左
	if(Controller::IsKeysDown(B+DPadUp)) ADDTOFLOAT(0xXXXXXXXX, Y.Y);		//B+十字上
	if(Controller::IsKeysDown(B+DPadDown)) ADDTOFLOAT(0xXXXXXXXX, -Y.Y);	//B+十字下
}
}