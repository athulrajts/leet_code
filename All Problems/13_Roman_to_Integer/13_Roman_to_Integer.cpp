// 13_Roman_to_Integer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int romanToInt(string);

int main()
{
	cout << romanToInt("III") << endl;
	cout << romanToInt("IV") << endl;
	cout << romanToInt("IX") << endl;
	cout << romanToInt("LVIII") << endl;
	cout << romanToInt("MCMXCIV") << endl;
}

int result = 0;
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
int getValue(char symbol)
{
	switch (symbol)
	{
	case 'M': return 1000;
	case 'D': return 500;
	case 'C': return 100;
	case 'L': return 50;
	case 'X': return 10;
	case 'V': return 5;
	case 'I': return 1;
	default: return 0;
	}
}
int romanToInt(string s)
{
	int result = 0;
		
	for (int i = 0; i < s.length(); i++)
	{
		int current = getValue(s[i]);
		int next = getValue(s[i + 1]);
		if (current >= next)
		{
			result += current;
		}
		else
		{
			result = result + next - current;
			i++;
		}
	}

	return result;
}