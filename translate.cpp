#include <iostream>
#include <string>
#include <windows.h>
#include "read.h" 
using namespace std;
#define Dot 200
#define Dod Dot
#define Lspace Dot*3

int main()
{
	string code[] = {
    "._",   //A
    "_...", //B
    "_._.", //C
    "_..",  //D
    ".",    //E
    ".._.", //F
    "__.",  //G
    "....", //H
    "..",   //I
    ".___", //J
    "_._",  //K
    "._..", //L
    "__",   //M
    "_.",   //N
    "___",  //O
    ".__.", //P
    "__._", //Q
    "._.",  //R
    "...",  //S
    "_",    //T
    ".._",  //U
    "..._", //V
    ".__",  //W
    "_.._", //X
    "_.__", //Y
    "__.."  //Z
    };
    string num_code[] = {
    "_____",//0
    ".____",//1
    "..___",//2
    "...__",//3
    "...._",//4
    ".....",//5
    "_....",//6
    "__...",//7
    "___..",//8
    "____." //9
};
	
	// 第一步：字符串大小写转换
	string letter_str;
	getline(cin, letter_str);
	int length = letter_str.length();
	for (int i = 0; i < length; i++)
	{
		if (letter_str[i] >= 97 && letter_str[i]<122)
			letter_str[i] -= 32;
	}
	cout << letter_str << endl;
	/*char c = 'a';
	if (c >= 97 && c<122)
		cout << char(c - 32) << endl;*/
	
	// 第二步：每个字符对应的摩尔斯电码，放入字符串数组中 
	string code_str[length];
	
	for (int i = 0; i < length; i++)
	{
		//字母的操作
		if (letter_str[i] >= 65 && letter_str[i] <= 90)
			code_str[i] = code[letter_str[i] - 65];
		//数字的操作
		else if (letter_str[i] >= 48 && letter_str[i] <= 57)
			code_str[i] = num_code[letter_str[i] - 48];
		//空格的操作
		else if (letter_str[i] == ' ')
			code_str[i] = "/";
	}
	
	//向read函数传送摩尔斯电码，并输出 
	//所用数组：code_str[i] 
	//传输字符变量：c 
	for (int i = 0; i< length; i++)
	{
		int length2 = code_str[i].length();
		string word = code_str[i];
		for (int j = 0; j< length; j++)
		{
			char c = word[j];
			read(c);
			cout << word[j];
			Sleep(Dod);
		}
		Sleep(Lspace - Dod);
		cout << "";	
	}

	
	
	return 0;
} 