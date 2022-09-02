/*
Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 
Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int Rstart=0,Rend=matrix.size()-1,Cstart=0,Cend=matrix[0].size()-1,flag=1;
    while(Rstart<=Rend && Cstart<=Cend){
        if(flag==1){
            for(int i=Cstart;i<=Cend;i++){
                res.push_back(matrix[Rstart][i]);
            }
            Rstart++;
            flag=2;
        }
        else if(flag==2){
            for(int i=Rstart;i<=Rend;i++){
                res.push_back(matrix[i][Cend]);
            }
            Cend--;
            flag=3;
        }
        else if(flag==3){
            for(int i=Cend;i>=Cstart;i--){
           res.push_back(matrix[Rend][i]);
        }
        Rend--;
            flag=4;
        }
        else if(flag==4){
            for(int i=Rend;i>=Rstart;i--){
           res.push_back(matrix[i][Cstart]);
        }
        Cstart++;
            flag=1;
        }
        
    }
        return res;
    }
};
