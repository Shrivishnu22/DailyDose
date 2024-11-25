/*
Stone Removal Game

Alice and Bob are playing a game where they take turns removing stones from a pile, with Alice going first.

Alice starts by removing exactly 10 stones on her first turn.
For each subsequent turn, each player removes exactly 1 fewer stone than the previous opponent.
The player who cannot make a move loses the game.

Given a positive integer n, return true if Alice wins the game and false otherwise.

Example 1:

Input: n = 12

Output: true

Explanation:

Alice removes 10 stones on her first turn, leaving 2 stones for Bob.
Bob cannot remove 9 stones, so Alice wins.

Example 2:

Input: n = 1

Output: false

Explanation:

Alice cannot remove 10 stones, so Alice loses.
 

Constraints:

1 <= n <= 50
*/

class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int cnt=0,curr=9;
        n-=10;
        while(n>=curr){
            n-=curr;
            curr--;
            cnt++;
        }
        if(cnt%2==0) return true;
        else return false;        
    }
};
