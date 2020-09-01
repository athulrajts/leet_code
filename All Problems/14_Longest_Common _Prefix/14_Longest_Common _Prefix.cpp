// 14_Longest_Common _Prefix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>&);
int smallestLength(vector<string>&);

int main()
{
    vector<string> vec = { "flower", "flow", "flight" };
    std::cout << longestCommonPrefix(vec) << endl;
    vec = { "dog","racecar","car" };
    std::cout << longestCommonPrefix(vec) << endl;
}

int smallestLength(vector<string>& strs)
{
    if (strs.size() == 0)
    {
        return 0;
    }

    int length = strs[0].length();

    for (string& s : strs)
    {
        if (length > s.length())
        {
            length = s.length();
        }
    }

    return length;
}

string longestCommonPrefix(vector<string>& strs)
{
    if (strs.size() == 0)
    {
        return "";
    }

    bool is_match = true;
    int smallest_length = smallestLength(strs);
    
    int i = 0;
    for (; i < smallest_length; i++)
    {
        for (int k = 0; k < strs.size() - 1; k++)
        {
            if (strs[k][i] != strs[k + 1][i])
            {
                is_match = false;
                break;
            }
        }

        if (is_match == false)
        {
            break;
        }
    }
    
    return i ? strs[0].substr(0, i) : "";
}

