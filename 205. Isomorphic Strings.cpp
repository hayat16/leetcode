#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    map<char,char>mp_1;
    map<char,char>mp_2;
    if(s.size()!=t.size())
    {
        return false;
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(mp_1.find(s[i])!=mp_1.end() && mp_1[s[i]] != t[i])
            {
                return false;
            }
            else if(mp_2.find(t[i])!=mp_2.end() && mp_2[t[i]] != s[i])
            {
                return false;
            }
            mp_1[s[i]]=t[i];
            mp_2[t[i]]=s[i];
        }
    }
    /*map<char,char>::iterator it;
    for(it=mp_1.begin(); it!=mp_1.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }*/
    return true;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    bool result=isIsomorphic(s1,s2);
    cout<<(result ? "true" : "false")<<" "<<endl;
}
