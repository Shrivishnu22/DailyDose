/*
You are given a binary string str of length N.

In one operation you can either remove the substring '10' or '11'
such that the size of str reduces by 2.

Find the minimum length of string you can obtain by doing the operation
any number of times.

Input Format
The first line contains a string str, Denoting the given binary string.

Constraints
1 <= len(str) <= 10^5.

Sample Input 1
00

Sample Output 1
2

Explanation
str='00' We cannot perform any operation on this string so the minimum
length of string possible is 2.

Sample Input 2
010

Sample Output 2
1

Explanation
str='010' we can remove the substring str[1.2]='10' to obtain new string '0'
and this is optimal Hence the minimum length of the string obtained is 1.

Sample Input 3
1110

sample Output 3
0

Explanation
str="010" we can remove the substring str[0.1]='11' to obtain new string '10'
we can further remove '10' from the string to obtain '0'.Hence the minimum length of the string is 0.
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int front = 0, back = s.size(), count = 0;
	while (front <= back) {
		if ((s[front] == '1' && s[back] == '0') || (s[front] == '1' && s[back] == '1')) {
			count += 2;
		}
		front++;
		back--;
	}
	cout << s.size() - count << endl;

}
