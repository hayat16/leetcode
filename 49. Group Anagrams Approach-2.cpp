//without using sorting
#include<bits/stdc++.h>
using namespace std;
string generate(string s)
{
    map<char,int>mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    string str="";

    map<char,int>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        str=str+ string (it->second, it->first); //adding character according to frequency number
    }
    return str;
}
vector<vector<string> > groupAnagrams(vector<string> strs)
{
    map<string,vector<string> >mp;
    string s,newstr;
    for(int i=0; i<strs.size(); i++)
    {
        s=strs[i];
        newstr=generate(s);
        mp[newstr].push_back(strs[i]);
    }

    map<string, vector<string> >::iterator it;
    vector<vector<string> >result;//2D vector

    for (it = mp.begin(); it != mp.end(); it++)
    {
        result.push_back(it->second);
    }
    return result;
}
int main()
{
    int n;
    string s;
    vector<string>v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    vector<vector<string> >result=groupAnagrams(v);

    for(int i=0; i<result.size(); i++)
    {
        for(int j=0; j<result[i].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

