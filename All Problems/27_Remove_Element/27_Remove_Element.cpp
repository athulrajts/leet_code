// 27_Remove_Element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int removeElement(vector<int>& nums, int val);

int main()
{
	vector<int> vec = { 3,2,2,3 };
	cout << removeElement(vec, 3) << endl;

	vec = { 0,1,2,2,3,0,4,2 };
	cout << removeElement(vec, 2) << endl;

	vec = {};
	cout << removeElement(vec, 3) << endl;
}


int removeElement(vector<int>& nums, int val) 
{
	if (nums.size() == 0)
	{
		return 0;
	}

	auto it = find(nums.begin(), nums.end(), val);
	while (it != nums.end())
	{
		nums.erase(it);
		it = find(nums.begin(), nums.end(), val);
	}

	return nums.size();
}
