
#include <string>
#include <sstream>

//https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

class Solution557 {
public:
	std::string reverseWords(std::string s) {
		std::string r;

		std::stringstream ss(s);

		std::string item;
		while (std::getline(ss, item, ' '))
		{
			std::reverse(item.begin(), item.end());
			r.append(item);
			r.append(" ");
		}
		r.erase(s.find_last_not_of(" ") + 1);
		return r;
	}
};