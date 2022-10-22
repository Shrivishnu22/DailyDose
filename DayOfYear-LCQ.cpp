/*
Day of the Year

Given a string date representing a Gregorian calendar date formatted as YYYY-MM-DD, return the day number of the year.

 

Example 1:

Input: date = "2019-01-09"
Output: 9
Explanation: Given date is the 9th day of the year in 2019.

Example 2:

Input: date = "2019-02-10"
Output: 41
 

Constraints:

date.length == 10
date[4] == date[7] == '-', and all other date[i]'s are digits
date represents a calendar date between Jan 1st, 1900 and Dec 31th, 2019.
*/

class Solution {
public:
    bool isLeap(int n){
        if(n%400==0)    return true;
        else if(n%100==0)   return false;
        else if(n%4==0) return true;
        else    return false;
    }
    int dayOfYear(string date) {
        vector<int>days={31,28,31,30,31,30,31,31,30,31,30,31};
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,7));
        int day=stoi(date.substr(8,10));
        int res=0;
        if(isLeap(year))    days[1]=29;
        for(int i=0;i<month;i++){
            if(i==month-1)    res+=day;
            else    res+=days[i];            
        }
        return res;
    }
};
