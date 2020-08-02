#include <iostream>
#include <windows.h>
#include "read.h"
using namespace std;

#define F 1000
#define Dot 200
#define Dash Dot*3
#define Wspace Dot*7

void read(char c)
{
	//¼ì²â"."£¬·¢DotÉù 
	if (c == '.') 
	{
		Beep(F, Dot);

	}
	//¼ì²â"-"
	if (c == '_')
	{
		Beep(F, Dash);
	}
	//¼ì²â"/" 
	if (c == '/')
	{
		Sleep(Wspace);
	}
}