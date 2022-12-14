/*
Determine Color of a Chessboard Square

You are given coordinates, a string that represents the coordinates of a square of the chessboard.

Return true if the square is white, and false if the square is black.

The coordinate will always represent a valid chessboard square. The coordinate will always have the letter first, and the number second.


Example 1:

Input: coordinates = "a1"
Output: false
Explanation: From the chessboard above, the square with coordinates "a1" is black, so return false.

Example 2:

Input: coordinates = "h3"
Output: true
Explanation: From the chessboard above, the square with coordinates "h3" is white, so return true.

Example 3:

Input: coordinates = "c7"
Output: false


Constraints:

coordinates.length == 2
'a' <= coordinates[0] <= 'h'
'1' <= coordinates[1] <= '8'
*/

class Solution {
public:
	bool squareIsWhite(string coordinates) {
		char first = coordinates[0];
		int second = coordinates[1];
		int value = (first - 'a') + 1;
		if ((value % 2 != 0 && second % 2 != 0) || (value % 2 == 0 && second % 2 == 0))
			return false;
		else
			return true;
	}
};