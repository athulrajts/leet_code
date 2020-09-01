// 58_Length_of_Last_Word.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s);

int main()
{
	cout << lengthOfLastWord("Hello World") << endl;
	cout << lengthOfLastWord("a ") << endl;
	cout << lengthOfLastWord("b   a    ") << endl;
}

int lengthOfLastWord(string s) 
{
	int length = 0;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] != ' ')
		{
			length++;
		}
		else if(length > 0)
		{
			break;
		}
	}
	return length;
}
