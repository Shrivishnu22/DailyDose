/*
Candice, Alice and Banta are 3 school friends, and they play most often.

Today they have decided to play a new game. The game will have the following rules: There will be 2 boxes, each full of different numbers of bowls filled with marbles stacked up one on top of the other.

Alice and Banta will each be assigned boxes, and Candice will be the referee for the match. Candice is a referee here so she will play first, followed by Alice and Banta. And this goes on in rotation basis. from the bowl which is top-most in the box. At each turn, each player has to remove some marbles
a player can remove marbles only from one bowl. After each turn of respective players (Alice and Banta), the turn for Candice will come and she will decide whether to swap the boxes or not. So, if Candice says to swap the boxes, then Alice's box will go to Banta and Banta's box will go to Alice.
The player who is not able to remove any number of marbles from the box, loses the game. There is a secret that Banta didn't know, that, Alice and Candice are very good friends and Candice will try all efforts to make sure Alice wins.

Given N & M, which are the number of bowls in Box 1 and Box-2, respectively.
B[10] Array giving number of marbles in each bowl in Box-1.
B[20]: Array giving number of marbles in each bowl Box-2.

In the beginning B1 is given to Alice and B2 is given to Banta. Find out who will be winner if all the players play optimally. And most importantly if candice takes the decision to make sure Alice wins.

Output Alice or Banta based on the winner.

Let us try to understand it with and example.

N= 3, number of bowls in Box-1
M = 1, number of bowls in Box-2
B1 - 1 1 1 Number of marbles in each bowl of Box
1
B2 - 1   Number of marbles in each bowl of Box
2

We have the find the optimum way to make sure Alice wins.


Step 1: Candice chance: She will decide to keep things as it is, No swap.

Step 2: Alice's chance: She will remove 1 element from the box, so A[1] is removed from Box-1. We can mark it as 'X'

Step 3: Banta's chance: He will remove 1 element from the box, so A[1] is removed from Box-2. We can mark it as 'X'

Step 4: Candice chance: She want to make sure Alice wins, for this Alice needs to have more number of marbles to remove than Banta. Hence again she will decide to keep things as it is, No swap.

Step 5: Alice's chance: She will remove 1 more element from the box, so A[2] is removed from Box-1. We can mark it as 'x'

Step 6: Banta's chance: As there is no more elements in his box, he will not be able to make a move, hence he loses the game.

So, the winner is Alice.

Example 1:

Input:
4 2
1 1 1 1
1 1

Output
Alice

Example 2:

Input:
1 1
1
2

Output:
Alice

Example 3:

Input:
1 1
1
1

Output:
Banta

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int arr[n], arr1[m];
	for (int i = 0; i < n; i++)	cin >> arr[i];
	for (int i = 0; i < m; i++)	cin >> arr1[i];
	int cnt = 0;
	if (n == m) {
		for (int l = 0; l < n; l++) {
			if (arr[l] == arr1[l]) {
				cnt++;
			}
		}
	}
	if (n == m && cnt == n)	cout << "Banta" << endl;
	else 		cout << "Alice" << endl;
	return 0;
}