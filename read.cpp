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
	//���"."����Dot�� 
	if (c == '.') 
	{
		Beep(F, Dot);

	}
	//���"-"
	if (c == '_')
	{
		Beep(F, Dash);
	}
	//���"/" 
	if (c == '/')
	{
		Sleep(Wspace);
	}
}