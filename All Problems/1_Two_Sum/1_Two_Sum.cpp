// 1_Two_Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& , int);
void print_vec(vector<int>);

int main()
{
    vector<int> vec = { 2,7,11,15 };
    print_vec(twoSum(vec, 9));

    vec = { 3,2,4 };
    print_vec(twoSum(vec, 6));

    vec = { 3,3 };
    print_vec(twoSum(vec, 6));
}

void print_vec(vector<int> nums)
{
    for (auto& num : nums)
    {
        cout << num << '\t';
    }
    cout << endl;
}

vector<int> twoSum(vector<int>& nums, int target) 
{
    for (int i = 0; i < nums.size() -1; i++)
    {
        for (int k = i + 1; k < nums.size(); k++)
        {
            if (nums[i] + nums[k] == target)
            {
                return { i, k };
            }
        }
    }

    return { -1, -1 };
}
