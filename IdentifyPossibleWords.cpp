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
