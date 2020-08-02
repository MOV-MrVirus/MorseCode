#include <stdio.h>
#include <windows.h>

#define dot 200
#define dash 3*dot
#define f 1000
#define space_letter 3*dot
#define space_code dot

int main()
{
	printf("\a");

	/*int f = 0;
	while (f < 20000)
	{
		f++;
		Beep(f, 100);
	}*/
	//Hello²âÊÔ
	//text: Hello morse code: .... . .-.. .-.. ---
	printf("µ÷ÒôÖÐ~~~");
	Sleep(2000);
	system("cls");
	Beep(f, dot);	//H
	Sleep(space_code);
	Beep(f, dot);
	Sleep(space_code);
	Beep(f, dot);
	Sleep(space_code);
	Beep(f, dot);
	printf("H");
	Sleep(space_letter);
	Beep(f, dot);	//e
	printf("e");
	Sleep(space_letter);
	Beep(f, dot);	//l
	Beep(f, dash);
	Beep(f, dot);
	Beep(f, dot);
	printf("l");
	Sleep(space_letter);
	Beep(f, dot);	//l
	Beep(f, dash);
	Beep(f, dot);
	Beep(f, dot);
	printf("l");
	Sleep(space_letter);
	Beep(f, dash);	//o
	Beep(f, dash); 
	Beep(f, dash);
	printf("o");
	printf("²âÊÔÍê±Ï£¡\n");

	system("pause");
	
	return 0;
} 