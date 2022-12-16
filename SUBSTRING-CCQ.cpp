/*
Substring of a Substring

Shefin gives you a string S and you have to find a non-empty string P such that:

P is a substring of S.
No non-empty substring of P is a prefix of S.
No non-empty substring of P is a suffix of S.

For all such possible strings, find the length of the longest string satisfying all the conditions. If no such string is possible, print −1.

A string A is a substring of a string B if A can be obtained from B by deleting several (possibly zero) characters from the beginning and several (possibly zero) characters from the end.

A prefix of a string A, is a substring of A that occurs at the beginning of A. For example, "code" is a prefix of "codechef", but "ode" is not.

A suffix of a string A, is a substring of A that occurs at the end of A. For example, "chef" is a suffix of "codechef", but "he" is not.

Input Format
The first line of the input contains an integer T - denoting number of test cases.
Each test case contains a string S consisting of lowercase english alphabets only.

Output Format
For each test case, print a single integer. If a string P exists based on the given conditions, print the maximum length of the possible string. Otherwise, print −1.

Constraints
1≤T≤104
1≤|S|≤106
Sum of |S| over all test cases does not exceed 106.
S consists of lowercase english alphabets only.

Sample Input 1
2
abcdab
aaa

Sample Output 1
2
-1

Explanation

Test Case 1: The maximum length of the string satisfying all required conditions is 2. The string cd satisfies all the conditions. It can be proven that no string of length greater than 2 exists which can satisfy all the conditions.

Test Case 2: There is no string possible which satisfies all the required conditions. Thus, the answer is −1.

*/

#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--) {
		string m;
		cin >> m;
		int temp = 0, j = m.size() - 1, cnt = 0;
		for (int i = 0; i < m.size(); i++) {
			if (m[i] != m[0] && m[i] != m[j]) {
				cnt++;
			} else {
				cnt = 0;
			}
			temp = max(temp, cnt);
		}
		if (temp == 0) cout << -1 << endl;
		else cout << temp << endl;
	}

}
