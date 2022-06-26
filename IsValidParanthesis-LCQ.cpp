/*
Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.


Example 1:

Input: s = "()"
Output: true

Example 2:

Input: s = "()[]{}"
Output: true

Example 3:

Input: s = "(]"
Output: false


Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/


class Solution {
public:
	bool isValid(string s) {
		stack<char>p;
		for (auto itr : s) {
			if (itr == '(' || itr == '{' || itr == '[') p.push(itr);
			else {
				if (p.empty() || (p.top() == '(' && itr != ')') || (p.top() == '{' && itr != '}') || (p.top() == '[' && itr != ']'))  return false;
				p.pop();
			}
		}
		return p.empty();
	}
};