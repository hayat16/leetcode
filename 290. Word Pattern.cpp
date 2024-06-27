#include<bits/stdc++.h>
using namespace std;
bool wordPattern(string pattern, string s)
{
    map<char,string>mp_1;
    map<string,char>mp_2;

    stringstream ss(s);// for extracting word from sentence
    string word;
    int i=0;
    while (ss >> word)
    {
        if(mp_1.find(pattern[i])!= mp_1.end() && mp_1[pattern[i]] != word)
        {
            return false;
        }
        if(mp_2.find(word) != mp_2.end() && mp_2[word] != pattern[i])
        {
            return false;
        }
        mp_1[pattern[i]]=word;
        mp_2[word]=pattern[i];

        i++;
    }
    return i== pattern.size();
}

int main()
{
    string s1,s2;
    cin>>s1;
    cin.ignore();
    getline(cin, s2);
    bool result=wordPattern(s1,s2);
    cout << (result ? "true" : "false") << endl;
}
