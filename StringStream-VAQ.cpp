/*
Reverse the words in the sentence without changing its position 

I/p : vimal vishnu 
O/p : lamiv unhsiv

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string ip, word, op, fi;
	getline(cin, ip);
	stringstream str(ip);
	while (str >> word) {
		for (int i = word.size() - 1; i >= 0; i--) {
			op += word[i];
		}
		op += " ";
	}
	for (int i = 0; i < op.size() - 1; i++) {         //To eliminate the last space
		fi += op[i];
	}
	cout << fi << endl;

	return 0;
}
