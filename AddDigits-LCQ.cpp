/*
Add Digits

Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.


Example 1:

Input: num = 38
Output: 2

Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2
Since 2 has only one digit, return it.

Example 2:

Input: num = 0
Output: 0


Constraints:

0 <= num <= 231 - 1
*/

class Solution {
public:
	int addDigits(int num) {
		int n = num, sum = 0, rem = 0, temp = 0;
		while (n > 9) {
			temp = n;
			sum = 0;
			while (temp != 0) {
				rem = temp % 10;
				sum += rem;
				temp /= 10;
			}
			n = sum;
		}
		if (n >= 0 && n <= 9)  return n;
		else return sum;
	}
};