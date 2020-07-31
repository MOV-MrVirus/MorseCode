#include <stdio.h>
#include <windows.h>

#define dot 250
#define dash 750
#define f 500
#define space_letter 500
#define space_code 150

int main()
{
	printf("\a");

	/*int f = 0;
	while (f < 20000)
	{
		f++;
		Beep(f, 100);
	}*/
	//Hello测试
	//text: Hello morse code: .... . .-.. .-.. ---
	printf("调音中~~~");
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
	printf("测试完毕！\n");

	system("pause");
	
	return 0;
} 
