/*
Write a program to find the frequency of vowels(A, E, I, O, U) in a sentence and print in descending order.

Test Case 1:

Input

Welcome to ZOHO.

Output

0-4
E-2

Test Case 2:

Input rhythms......

Output

No vowels found
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string in;
	getline(cin, in);
	vector<int>arr(5, 0);
	int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
	bool flag = false, check = true;
	for (int i = 0; i < in.size(); i++) {
		char ch = towlower(in[i]);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			flag = true;
		}
		if (ch == 'a')     arr[0] = ++acnt;
		if (ch == 'e')     arr[1] = ++ecnt;
		if (ch == 'i')     arr[2] = ++icnt;
		if (ch == 'o')     arr[3] = ++ocnt;
		if (ch == 'u')     arr[4] = ++ucnt;
	}
	if (flag) {
		sort(arr.rbegin(), arr.rend());
		for (int i = 0; i < 5; i++) {
			if (arr[i] == acnt && acnt != 0) {
				cout << 'a' << " " << acnt << endl;
				acnt = 0;
			}
			if (arr[i] == ecnt && ecnt != 0) {
				cout << 'e' << " " << ecnt << endl;
				ecnt = 0;
			}
			if (arr[i] == icnt && icnt != 0) {
				cout << 'i' << " " << icnt << endl;
				icnt = 0;
			}
			if (arr[i] == ocnt && ocnt != 0) {
				cout << 'o' << " " << ocnt << endl;
				ocnt = 0;
			}
			if (arr[i] == ucnt && ucnt != 0) {
				cout << 'u' << " " << ucnt << endl;
				ucnt = 0;
			}
		}
	} else {
		cout << "No vowels found" << endl;
	}
	return 0;
}