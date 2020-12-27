#include "cheats.h"
#include "hid.h"
typedef char* String;

String builder_name = "User";

void	test(void)
{
	if(is_pressed(B+DR)) ADDTOFLOAT(0xXXXXXXXX, Y.Y);	//B+十字右
	if(is_pressed(B+DL)) ADDTOFLOAT(0xXXXXXXXX, Y.Y);	//B+十字左
	if(is_pressed(B+DU)) ADDTOFLOAT(0xXXXXXXXX, Y.Y);	//B+十字上
	if(is_pressed(B+DD)) ADDTOFLOAT(0xXXXXXXXX, Y.Y);	//B+十字下
}
