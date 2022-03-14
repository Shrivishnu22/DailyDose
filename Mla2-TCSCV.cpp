/*
Help MLA 2

- Problem Description

Imagine you are an MLA of a district and there are N number of villages in your constituency.
Your job is to vaccinate all the people in your constituency in minimum amount of time. There are two centres where vaccination is going on. First centre takes m1 minutes as average time for vaccinating one person and second centre takes m2 minutes as average time.
Population of every village is known to you prior to the vaccination drive. Schedule all the villagers to any centre such that overall time for vaccinating all the people of all the villages will be minimum.
Assume that there is no wait time in between vaccinating two people. Also, people belonging to the same village will need to be vaccinated in the same centre.

For example:

First centre takes 2 min as average time
Second centre takes 4 min as average time
Population data of 3 villages is known: 10 30 20

Number of people in 3 villages is given:
v1 = 10, v2 = 30, v3 = 20

Consider if schedule is drawn by distributing equal number of people to both centres, then

First centre: 1 O 20 total time = (1 O + 20) * 2 = 60 min
Second centre: 30 total time = (30) * 4 = 120 min

Hence, minimum time required to vaccinate all the people will be = 120 min. i.e., Maximum of time taken in first centre or second centre.

But if it is scheduled like this:

First centre: 1 O 30 total time = (1 O + 30) * 2 = 80 min
Second centre: 20 total time = (20) * 4 = 8

Second line contains an integer m2 which is average time in minutes taken for vaccination by the second centre
Third line contains an integer N which is number of villages in the constituency 0 min

Minimum time required to vaccinate all the people will be = 80 min

Your job is to schedule these villages such that vaccination time should be minimum.

- Constraints

O < ml, m2 <= 20
0 < N < 100
O < Population of village<= 100

- Input

First line contains an integer ml which is average time in minutes taken for vaccination by the first centre
Second line contains an integer m2 which is average time in minutes taken for vaccination by the second centre
Third line contains an integer N which is number of villages in the constituency
Fourth line contains N space delimited integers denoting the population of villages

- Output

Print the villages which are scheduled at centre1 on first line and the villages which are scheduled at centre2 on second line. For better understanding refer Examples sections.
NOTE: -There are multiple answers possible for a given input. As long as your output meets all the conditions, any answer is acceptable.

- Time Limit (secs)
1

- Examples
Input
2
3
5
10 50 20 30 40

Output
10 50 30
40 20

Explanation

Given the data of room1 and room2:

First room takes 2 min as average time. Second room takes 3 min as average time. Number of villages in your constituency are 5.
Number of people in each of the 5 villages is given: 50 10 20 30 40

v1 = 50, v2 = 10, v3 = 20, v4 = 30, v5 = 40

If the schedule looks like this:

First room: 1 O 50 total time = (1 O + 50) * 2 = 120 min
Second room: 30 40 20 total time = (20 + 40 + 20) * 3 = 240 min

Minimum time required to vaccinate all the people will be = 240 min

But if the schedule is drawn like this:

First room: 10 50 30 total time = (10+50+30)*2=180 min
Second room: 40 20 total time = (40 + 20) * 3 = 180 min

Minimum time required to vaccinate all the people will be = 180 min
And output will be

10 50 30
40 20

Other possible outputs are

Solution 1 -  30 10 50
			  20 40
Solution 2 -  10 50 30
			  40 20

There could possibly be more solutions.

In all these cases time required to vaccinate the villagers is same and is the minimum.

Example 2

Input
1
2
3
100 90 70

Output
100 70
90

Explanation

Given the data of centre1 and centre2:

First room takes 1 min as average time. Second room takes 2 min as average time. There are 3 villages in your constituency.
Number of people in each of the 3 villages is given: 100 90 70

v1 = 100, v2 = 90, v3 = 70

If the schedule looks like this:

First room: 100 90 total time = (100 + 90) * 1 = 190 min
Second room: 70 total time = (70) * 2 = 140 min

Minimum time required to vaccinate all the people will be = 190 min

But if the schedule can be drawn like this:

First room: 100 70 total time = (100 + 70) * 1 = 170 min
Second room: 90 total time = (90) * 2 = 180 min

Minimum time required to vaccinate all the people will be = 180 min

And the output is:
100 70
90

Other possible output is
70 100
90

In both cases time required to vaccinate the villagers is minimum.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int room1, room2, element, count1 = 0, count2 = 0, r1, r2;
	int num;
	cin >> room1;
	cin >> room2;
	cin >> num;
	vector<int>villages;
	for (int it = 0; it < num; it++) {
		cin >> element;
		villages.push_back(element);

	}
	sort(villages.begin(), villages.end());
	vector<int>group1, group2;
	int g1prod = room1 * villages[num - 1], g2prod = 0;
	group1.push_back(villages[num - 1]);
	count1++;
	for (int itr = num - 2; itr >= 0; itr--) {
		r1 = g1prod + (room1 * villages[itr]);
		r2 = g2prod + (room2 * villages[itr]);

		if (r1 < r2) {
			group1.push_back(villages[itr]);
			count1++;
			r2 = r2 - (room2 * villages[itr]);
			if (r1 < r2) {
				g1prod = 0;
				g2prod = r2 - r1;
			}
			else {
				g2prod = 0;
				g1prod = r1 - r2;
			}

		}
		else {
			r1 = r1 - (room1 * villages[itr]);
			group2.push_back(villages[itr]);
			count2++;
			if (r1 < r2) {
				g1prod = 0;
				g2prod = r2 - r1;
			}
			else {
				g2prod = 0;
				g1prod = r1 - r2;
			}
		}


	}
	for (auto item : group1)
		cout << item << " ";
	cout << endl;
	for (auto item : group2)
		cout << item << " ";
}
