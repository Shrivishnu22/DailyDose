/*
The function is expected to find all the possible words from input2 that can replace the incomplete word input1, and 
return the result in the format suggested below.
Example1
input1="Fi er"
input2 = "Fever.filer:Filter: Fixer:fiber:fibre:tailor:offer" output string should be returned as "FILER:FIXER:FIBER"
Note that
•The output string should contain the set of all possible words that can replace the incomplete word in input1
• all words in the output string should be stored in UPPER-CASE
• all words in the output string should appear in the order in which they appeared in input2 ie in the above example we have FILER followed by FIXER followed by FIBER
• While searching for input1 in input2 the case of the letters are ignored Le Fer matches with "filer as well as "Fixer" as well as fiber
• IMPORTANT: If none of the words in input2 are possible candidates to replace input the output string should contain the string ERROR-009
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string key="Fi_er",s="Fever:filer:Filter:Fixer:fiber:fibre:tailor:offer";
    std::vector<string>v;
    string word;
    for(int i=0;i<s.size();i++){
        if(s[i]==':'){
            v.push_back(word);
            word="";
            i++;
        }
        word+=s[i];
    }
    int index=key.find('_');
    transform(key.begin(), key.end(), key.begin(), ::toupper);;
    for(int i=0;i<v.size();i++){
        transform(v[i].begin(), v[i].end(), v[i].begin(), ::toupper);
        string org=v[i];
        if(v[i].size()>key.size())  continue;
        string res = org.replace(index,1,"_");
        if(res==key)    cout<<v[i]<<endl;
    }
    return 0;
}


//Output
FILER
FIXER
FIBER
