/*
A travel agency is conducting a Survey for two different cities for their
favourite travel destinations in Mumbai from 5 Users.

Travel destination of names of 5 countries already given. Find the most preferred favourite destination.

Display the report at the end showing the highly ranked Travel destination by the  residents as Preferred Travel Destination.

Criteria for deciding a highly ranked destination is by computing the destination being ranked as  ‘1’ by most of the residents. Travel Destination already provided are ‘Malaysia’, ‘Australia’, ‘Germany’, ‘Dubai’, ‘France’ Rank ‘R’,

1<=R<=5

Input is integers values from range 1 to 5 representing ranking should be taken from each of 5 residents of each of 5 Travel destinations.

Output should be in format-

<String-Name of Destination>

In case of more than one preferred destinations output should be-

<String-Name of Destination>
<String-Name of Destination>

Rank should be between 1 to 5, if not “INVALID INPUT”.

Note: Do not print any input message. Directly accept the input values one below the
other for all 5 users. For each user accept 5 inputs representing ranks 1 to 5 for Countries in order ‘Malaysia’, ‘Australia’, ‘Germany’, ‘Dubai’, ‘France’.

Example 1: Input Values
1
2
3
1
2
3
5
2
1
3
1
2
3
1
1
1
1
1
1
1
1
2
2
2
2

Output Values:
Dubai
France

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}
	vector<string>city = {"Malaysia", "Australia", "Germany", "Dubai", "France"};
	vector<int>res;
	int maxi = INT_MIN, sum = 0;
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] == 1)
				sum += arr[j][i];
		}
		maxi = max(maxi, sum);
		res.push_back(sum);
	}
	for (int i = 0; i < res.size(); i++) {
		if (res[i] == maxi)
			cout << city[i] << endl;
	}


	return 0;
}