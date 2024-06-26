#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    if(s.size()!=t.size())
    {
        return false;
    }
    map<char,int>mp;
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    for(int i=0; i<t.size(); i++)
    {
        if(mp.find(t[i])==mp.end() || mp[t[i]]==0) //mp.find(t[i])==mp.end() means not found
        {
            return false;
        }
        mp[t[i]]--;
    }
    /*map<char,int>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }*/
    return true;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    bool result=isAnagram(s1,s2);
    if(result==false)
    {
        cout<<"Not Anagram"<<endl;
    }
    else
    {
        cout<<"Anagram"<<endl;
    }
}
