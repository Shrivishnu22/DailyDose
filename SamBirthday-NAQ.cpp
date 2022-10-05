/*
Its Sam's birthday and he is celebrating it with full joy.

His brother has brought a circular cake for him. Meanwhile Sam's is waiting for other friends to join the party, he thought to decorate the cake with K candles on the boundary of the cake in a circular pattern at equal distance. Just to test that the candles are working fine, he lit 2 candles and left.

After few minutes his younger brotherh Harry arrives and sees 2 candles (consider their positions as A and B) on cake which are lightened (with orange). Rest of the candles were left unlit.

Harry is an astrologer and believes that 2 candles are not very auspicious, rather, 3 candles will be a lucky thing to be on the cake.
But there is a condition The third candle (let us say C) among all the K-2 unlit candles has to be lit in such a way that the angle ACB is more degrees. This will be more auspicious.

You have to find the number of all those possible candles C which can be lit up to make the decoration as auspicious.

Let us try to understand it with and example. Consider total number of candles are K = 6 and the candles which are lit are A = 1 and B = 3 So, now total of 6 candles placed at equal distance in a circular pattern. And candle 1 and candle 3 are lit.

In the above scenario, all orange color-colored candles are lit up and Black colored candles are not lit. We can clearly see that the candles 4,5 and 6 cannot make an angle greater than 90 degrees.

Hence the combination 1-4-3, 1-5-3, 1-6-3 will not have angle greater than 90 degrees.

Only 1-2-3 can give more than 90, which is 120 degrees.
As 360/6=60
So, the answer is only 1 hence there is only 1 candle which can satisfy the condition of making an angle 241 greater than 90 degrees.

Hence the answer is 1.

Example 1:

Input:
6      -> Input integer, K
1 4    -> Input Integer, A, B
Output:
0

Explanation:
In the above scenario, the two candles are present equally opposite at 180 degrees each. All the angles with 1-2-4 or 1-3-4 or 1-6-4 or 1-5-4 are of same values, which is definitely not greater than 90 degrees. Hence there is no such candle that can be placed to make this as an auspicious candle's setup.

Example 2:
Input:
6      -> Input integer, K
1      -> Input integer, A, B
Output:
1

Explanation:

In the above scenario, all orange color colored candles are lit up and Black colored candles are not lit. We can clearly see that the candles 4,5 and 6 cannot make an angle greater than 90 degrees. Hence the combination 14-3, 1-5-3, 1-6-3 will not have angle greater than 90 degrees.

Only 1-2-3 can give more than 90, which is 120 degrees. As 360/6=60
So, the answer is only 1. Hence there only 1 candle (candle #2) which can satisfy the condition of making an angle greater than 90 degree.

Hence the answer is 1.

Constraints:

1<=A, B, <=K,
3< K <=100
A not equal to B.
K, A, B only Integers.

The input format for testing
Input - Accept value of Integer K
Second Input - Accept value of Integer, A (Next Line).
Third Input - Accept value of Integer, B (Next Line).

The Output format for testing
The output is an integer as per above logic. (Check the output in Example 1, Example 2). Additional messages in output will cause the failure of test cases.

Instructions:
System doesn't allow any kind of hard coded input value/values.
Written program code by the candidate will be verified against the inputs which are supplied from the system.

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int total, element1, element2;
	cin >> total >> element1 >> element2;
	int res = abs(element1 - element2);
	int div = floor(total / 2);
	if (res == div)	cout << 0 << endl;
	else if (element1 <= div && element2 <= div)	cout << res - 1 << endl;
	else	cout << total - res - 1 << endl;
	return 0;
}