/*

Four Equidistant Points on a Grid

The manhattan distance between two points P1(x1,y1) and P2(x2,y2) is given by d(P1,P2)=|x2−x1|+|y2−y1|.

In other words, manhattan distance is the minimum number of moves required to reach P2 from P1 if, in each move, you are allowed to travel one unit along the X-axis or one unit along the Y-axis.

You are given an integer D. Find four points (P1,P2,P3,P4) with integer coordinates, such that:

The absolute value of both X and Y coordinates of all points is at most 109.
The manhattan distance between any pair of points is D . More formally, d(Pi,Pj)=D for all 1≤i<j≤4.
If such set of points do not exist, print -1. If there are multiple solutions, you may print any.

Note: It is guaranteed that whenever there exists a solution, there exists one in which all points have coordinates with absolute values not more than 109.

Input Format

The first line contains a single integer, D - as per the problem statement.
Output Format

If there is no solution, print in a single line the integer -1.
Otherwise print 4 lines. The ith line, should contain two space separated integers, XiYi, the
coordinates of the point Pi, such that 0≤|Xi|,|Yi|≤109.

Constraints

1≤D≤105
Subtasks
Subtask #1 (100 points): original constraints

Sample Input 1
2

Sample Output 1
0 1
1 2
2 3
3 4

Explanation
The following sample output for this testcase is not correct, but is only provided to clarify the output format

The points in the solution are P1(0,1),P2(1,2),P3(2,3) and P4(3,4). d(P1,P2)=|0−1|+|1−2|=2 but d(P1,P3)=|0−2|+|1−3|=4. As d(P1,P2)≠d(P1,P3), the solution is incorrect.

A correct solution will satisfy d(P1,P2)=d(P1,P3)=d(P1,P4)=d(P2,P3)=d(P2,P4)=d(P3,P4).

A correct sample output is not provided so as to not reveal any hints about the solution.


Sample Input 2
1

Sample Output 2
-1

Explanation
You may verify that for D=1, there are no set of points P1,P2,P3,P4 as per the problem statement. This output is correct.

*/

#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2 != 0)
		cout << -1 << endl;
	else {
		cout << 0 << " " << n / 2 << endl;
		cout << n / 2 << " " << 0 << endl;
		cout << 0 << " " << -(n / 2) << endl;
		cout << -(n / 2) << " " << 0 << endl;
	}
}