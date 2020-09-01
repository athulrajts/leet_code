// Largest_Time_for_Given_Digits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string largestTimeFromDigits(vector<int>& A);

int main()
{
    vector<int> vec = { 1,2,3,4 };
    std::cout << largestTimeFromDigits(vec) << endl;

    vec = { 5,5,5,5 };
    std::cout << largestTimeFromDigits(vec) << endl;

    vec = { 0,0,0,0 };
    std::cout << largestTimeFromDigits(vec) << endl;

    vec = { 4,1,0,0 };
    std::cout << largestTimeFromDigits(vec) << endl;
}

string largestTimeFromDigits(vector<int>& A) 
{
    string result;
    int max_time = -1;

    sort(A.begin(), A.end());

    do
    {
        int hours = A[0] * 10 + A[1];
        int minutes = A[2] * 10 + A[3];

        if (hours < 24 && minutes < 60)
        {
            int total_minutes = hours * 60 + minutes;
            if (total_minutes > max_time)
            {
                max_time = total_minutes;
                string hour_string = hours < 10 ? "0" + to_string(hours) : to_string(hours);
                string minute_string = minutes < 10 ? "0" + to_string(minutes) : to_string(minutes);
                result = hour_string + ":" + minute_string;
            }
        }

    } while (next_permutation(A.begin(), A.end()));

    return result;
}