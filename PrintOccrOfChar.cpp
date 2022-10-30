/*
Print the occurance of a character

I/p: a2b3
O/P: aabbb
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string ip;
	cin >> ip;
	int num = 0;
	for (int i = 0; i <= ip.size(); i++) {
		int temp = ip[i] - '0';
		char ch = ip[i - 2];
		if (temp >= 0 && temp <= 9) {
			num = num * 10 + temp;
		} else {
			while (num > 0) {
				cout << ch;
				num--;
			}
		}
	}
	return 0;
}