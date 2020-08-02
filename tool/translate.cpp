#include <iostream>
#include <string>
using namespace std;

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
	
	// 第一步：字符串大小写转换
	string letter_str = "helloworld";
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
	/*char c = 'b';
	if (c >= 97 && c<122)
		c -= 32;*/
	//开始转换摩尔string* code_str= new string[]斯电码
	//cout << code[c - 65] << endl;
	
	string code_str[length];
	for (int i = 0; i < length; i++)
	{
		code_str[i] = code[letter_str[i] - 65];
	}
	
	for (int i = 0; i< length; i++)
	{
		cout << code_str[i] << "  ";
	}
	
	//string str[] = {"hello world", "hello boy"};
	//transform(str.begin(),str.end(),str.begin(),::toupper);
	//cout << str[1] << endl;
	
	return 0;
} 