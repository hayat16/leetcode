#include<bits/stdc++.h>
using namespace std;
bool canConstruct(string ransomNote, string magazine)
{
    map<char,int>mp_1;
    for(int i=0; i<magazine.size(); i++)
    {
        mp_1[magazine[i]]++;
    }
    for(int i=0; i<ransomNote.size(); i++)
    {
        if(mp_1[ransomNote[i]]>0)
        {
            mp_1[ransomNote[i]]--;
        }
        else
        {
            return false;
        }
    }
    /*map<char,int>::iterator it;
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
    bool result=canConstruct(s1,s2);
    cout<<(result ? "true" : "false")<<" "<<endl;
}
