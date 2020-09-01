// 9_Palindrome_Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isPalindrome(int);

using namespace std;

int main()
{
    std::cout << isPalindrome(121) << endl;
    std::cout << isPalindrome(-121) << endl;
    std::cout << isPalindrome(10) << endl;
    std::cout << isPalindrome(2147483647) << endl;
    getchar();
}

//Input: 121
//Output : true

//Input: -121
//Output : false
//Explanation : From left to right, it reads - 121. From right to left, it becomes 121 - .
//Therefore it is not a palindrome.

//Input: 10
//Output : false
//Explanation : Reads 01 from right to left.Therefore it is not a palindrome.
bool isPalindrome(int x) 
{
    if (x < 0)
    {
        return false;
    }
    else if (x < 10)
    {
        return true;
    }
    else
    {
        int reverse = 0;
        int input = x;
        while (x)
        {
            int digit = x % 10;
            if (reverse > UINT32_MAX / 10 - digit)
            {
                return false;
            }
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        return reverse == input;
    }
}
