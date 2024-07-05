#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    int i=0,j=0;
    while(i<s.size() && j<t.size())
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    if(i== s.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s,t;
    cin>>s>>t;
    int result=isSubsequence(s,t);
    cout<<(result?"true":"false");
    return 0;
}
