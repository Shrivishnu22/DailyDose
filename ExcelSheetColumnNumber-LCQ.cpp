/*
Excel Sheet Column Number

Given a string columnTitle that represents the column title as appear in an Excel sheet, return its corresponding column number.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28
...


Example 1:

Input: columnTitle = "A"
Output: 1
Example 2:

Input: columnTitle = "AB"
Output: 28
Example 3:

Input: columnTitle = "ZY"
Output: 701


Constraints:

1 <= columnTitle.length <= 7
columnTitle consists only of uppercase English letters.
columnTitle is in the range ["A", "FXSHRXW"].


------------------Explanation------------------
1. There are 26 letters in our alphabet and we start counting from 1, not zero.
   So 'Z' is 26.
2. The rest of the combinations start from a base 26
AA --> 26*1+ 1 = 27 (A == 1)
AB --> 26*1+ 2 = 28 (B == 2)
AC -->26*1 + 3 = 29 (C == 3)


"B" = 2
"BC" = (2)26 + 3
"BCM" = (2(26) + 3)26 + 13

*/

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin >> a;
	int result = 0;
	for (char c : a) {
		int character = c - 'A' + 1;
		result = result * 26 + character;
	}
	cout << result << endl;

}
