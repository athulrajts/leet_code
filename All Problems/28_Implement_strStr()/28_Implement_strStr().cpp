// 28_Implement_strStr().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle);

int main()
{
	cout << strStr("hello", "ll") << endl;
	cout << strStr("aaaaa", "bba") << endl;
}

int strStr(string haystack, string needle)
{
	int hay_length = haystack.length();
	int needle_length = needle.length();

	if (needle_length > hay_length)
	{
		return -1;
	}
    
    if(needle_length == 0)
    {
        return 0;
    }

	int index = 0;
	while (index < hay_length - needle_length + 1)
	{
		for (int i = 0; i < needle_length; i++)
		{
			if (haystack[index + i] != needle[i])
			{
				break;
			}
			else if (i == needle_length - 1)
			{
				return index;
			}
		}

		index++;
	}

	return -1;
}
