// 38_Count_and_Say.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string countAndSay(int n);

int main()
{
    std::cout << countAndSay(1) << endl;
    std::cout << countAndSay(2) << endl;
    std::cout << countAndSay(3) << endl;
    std::cout << countAndSay(4) << endl;
    std::cout << countAndSay(5) << endl;
    std::cout << countAndSay(6) << endl;
    std::cout << countAndSay(7) << endl;
}

string countAndSay(int n)
{
    if (n == 1)
    {
        return "1";
    }
    else
    {
        string before = countAndSay(n - 1);

        string result;
        int count = 0;
        char prev = before[0];
        for (int i = 0; i < before.length(); i++)
        {
            if (prev == before[i])
            {
                count++;
            }
            else
            {
                result.append(to_string(count) + before[i-1]);
                count = 1;
            }
            prev = before[i];
        }

        result.append(to_string(count) + before.back());

        return result;
    }
}