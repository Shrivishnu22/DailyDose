/*
Base 7

Given an integer num, return a string of its base 7 representation.

Example 1:

Input: num = 100
Output: "202"

Example 2:

Input: num = -7
Output: "-10"


Constraints:

-107 <= num <= 107
*/

class Solution {
public:
	string convertToBase7(int num) {
		if (num == 0)
			return "0";
		string out;
		int flag = 0;
		if (num < 0)
			flag = 1;
		num = abs(num);
		while (num > 0) {
			out += to_string(num % 7);
			num /= 7;
		}
		reverse(out.begin(), out.end());
		if (flag)
			out = '-' + out;
		return out;
	}
};