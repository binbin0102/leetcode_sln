#include <string>

//https://leetcode.com/problems/judge-route-circle/description/

class Solution657 {
public:
	bool judgeCircle(std::string moves) {
		if (moves.length() % 2 != 0) return false;

		int w = 0, l = 0;
		for (size_t i = 0; i < moves.length(); i++)
		{
			switch (moves[i])
			{
			case 'U':
				l++;
				break;
			case 'D':
				l--;
				break;
			case 'L':
				w--;
				break;
			case 'R':
				w++;
				break;
			default:
				break;
			}
		}
		return l == 0 && w == 0;
	}
};