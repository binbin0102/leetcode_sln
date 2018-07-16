
#include <string>

//https://leetcode.com/problems/reverse-string/description/

using namespace std;
class Solution461 {
public:
	string reverseString(string s) {
		std::reverse(s.begin(), s.end());
		return s;
	}
};