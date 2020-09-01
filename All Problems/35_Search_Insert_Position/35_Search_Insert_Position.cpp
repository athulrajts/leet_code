// 35_Search_Insert_Position.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target);

int main()
{
    vector<int> vec = { 1,3,5,6 };
    cout << searchInsert(vec, 5) << endl;

    vec = { 1,3,5,6 };
    cout << searchInsert(vec, 2) << endl;

    vec = { 1,3,5,6 };
    cout << searchInsert(vec, 7) << endl;

    vec = { 1,3,5,6 };
    cout << searchInsert(vec, 0) << endl;
}

int searchInsert(vector<int>& nums, int target)
{
    auto it = find_if(nums.begin(), nums.end(), [&](int i) {return i >= target;});

    if (it != nums.end())
    {
        return it - nums.begin();
    }
    else
    {
        return nums.size();
    }

    return 0;
}