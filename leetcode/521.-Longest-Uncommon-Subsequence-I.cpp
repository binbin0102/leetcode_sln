#include <string>

//https://leetcode.com/problems/longest-uncommon-subsequence-i/description/

using namespace std;
class Solution521 {
public:
	int findLUSlength(string a, string b) {
		if (b == a)
		{
			return -1;
		}
		return a.length() > b.length() ? a.length() : b.length();
	}
};