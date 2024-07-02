#include<bits/stdc++.h>
using namespace std;
bool isAlphnumaric(char c)
{
    if(c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c<='9')
    {
        return true;
    }
    else
    {
        return false;
    }
}
char lower(char c)
{
    if(c>='a' && c<='z' || c>='0' && c<='9')
    {
        return c;
    }
    else
    {
        return char(int(c)+32);
    }
}
bool isPalindrome(string s)
{
    if(s.empty())
    {
        return false;
    }
    int l=0;
    int r=s.size()-1;
    while(l<r)
    {
        if(!isAlphnumaric(s[l]))
        {
            l++;
        }
        else if(!isAlphnumaric(s[r]))
        {
            r--;
        }
        else if(lower(s[l]) != lower(s[r]))
        {
            return false;
        }
        else
        {
            l++;
            r--;
        }
    }
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    int result=isPalindrome(s);
    cout<<(result?"true":"false");
    return 0;
}
