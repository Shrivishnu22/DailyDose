/*
Decimal to binary

Given a decimal number N, compute its binary equivalent.

Example 1:

Input: N = 7
Output: 111
 

Example 2:

Input: N = 33
Output: 100001
Your Task:
You don't need to read input or print anything. Complete the function toBinary() which takes the decimal number N as the input parameter and prints its binary equivalent.
Note: Print the output in a single line, the next line character is printed by the Driver Code.
*/

//{ Driver Code Starts
//Initial Template for C


#include <stdio.h>

// } Driver Code Ends
//User function Template for C

void toBinary(int N)
{
    // your code here
    int res=0,mul=1;
    while(N>0){
        res+=(N%2)*mul;
        mul*=10;
        N/=2;
    }
    printf("%d",res);
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    toBinary(n);
	    printf("\n");
	}
	return 0;
}
// } Driver Code Ends
