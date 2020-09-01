// 26_Remove_Duplicates_from_Sorted_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums);

int main()
{
    vector<int> vec = { 1,1,2 };
    //std::cout << removeDuplicates(vec);
    cout << removeDuplicates(vec) << endl;
    vec = { 0,0,1,1,1,2,2,3,3,4 };
    cout << removeDuplicates(vec) << endl;
    vec = { 1,2,2 };
    cout << removeDuplicates(vec) << endl;
}

int removeDuplicates(vector<int>& nums) 
{
    if (nums.size() == 0)
    {
        return 0;
    }

    int index = 0;
    auto upper = upper_bound(nums.begin(), nums.end(), nums[index]);
    auto lower = lower_bound(nums.begin(), nums.end(), nums[index]);
    while (index < nums.size())
    {
        if (upper - lower > 1)
        {
            nums.erase(lower, upper - 1);
        }

        index++;
        if (index < nums.size())
        {
            upper = upper_bound(nums.begin(), nums.end(), nums[index]);
            lower = lower_bound(nums.begin(), nums.end(), nums[index]);
        }
    }

    return nums.size();
}
