/*
Expression Checker 

I/p: (a+b)
O/p: Correct

I/p: (a+b}
O/p: Wrong
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>s;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if((str[i]==')' && s.top()=='(') || (str[i]==']' && s.top()=='[') || (str[i]=='}' && s.top()=='{')) s.pop();
        else if(str[i]=='(' || str[i]=='{' || str[i]=='[') s.push(str[i]);
    }
    if(s.size()>0)  cout<<"Wrong";
    else    cout<<"Correct";
    return 0;
}
