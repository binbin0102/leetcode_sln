
#include <vector>

//https://leetcode.com/problems/self-dividing-numbers/description/

class Solution728 {
public:
	std::vector<int> selfDividingNumbers(int left, int right) 
	{
		std::vector<int> list = std::vector<int>();

		for (int i = left; i <= right; i++) 
		{
			int j = i;
			for (; j > 0; j = j / 10) 
			{
				if ((j % 10 == 0) || (i % (j % 10)) != 0) break;
			}
			if (j == 0) 
			{
				list.push_back(i);
			}
		}
		return list;
	}
};