#include <vector>
#include <functional>
#include <algorithm>
//https://leetcode.com/problems/array-partition-i/description/

using namespace std;
class Solution561 {
public:
	int arrayPairSum(vector<int>& nums) {
		std::sort(nums.begin(), nums.end());

		int sum = 0;
		for (size_t i = 0; i < nums.size()-1; i=i+2)
		{
			 sum = sum + min(nums[i], nums[i + 1]);
		}
		return sum;
	}
};