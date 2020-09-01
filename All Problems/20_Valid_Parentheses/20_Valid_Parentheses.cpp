// 20_Valid_Parentheses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isValid(string s);

int main()
{
	std::cout << isValid("()") << endl;
	std::cout << isValid("()[]{}") << endl;
	std::cout << isValid("(]") << endl;
	std::cout << isValid("([)]") << endl;
	std::cout << isValid("{[]}") << endl;
}

int getBracketType(char symbol)
{
	switch (symbol)
	{
		case '(':
		case '[':
		case '{': return 1;
		default: return 0;
	}
}

bool isValidClosing(char o, char b)
{
	if (o == '(')
	{
		return b == ')';
	}
	else if (o == '[')
	{
		return b == ']';
	}
	else if (o == '{')
	{
		return b == '}';
	}
	else
	{
		return false;
	}
}

bool isValid(string s)
{
	if (s.length() == 0) return true;
	
	vector<char> stack;
	for (int i = 0; i < s.length(); i++)
	{
		if (stack.size() == 0)
		{
			stack.push_back(s[i]);
			continue;
		}
		
		char back = stack.back();
		char next = s[i];
		
		if (getBracketType(back) != getBracketType(next))
		{
			if (isValidClosing(back, next) == false)
			{
				return false;
			}
			else
			{
				stack.pop_back();
			}
		}
		else
		{
			stack.push_back(next);
		}
	}

	return stack.size() == 0 ? true : false;
}
