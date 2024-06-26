#include<bits/stdc++.h>
using namespace std;
bool match(char a,char b)
{
    if( (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']') )
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isValid(string s)
{
    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' ||s[i]=='[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else if(match(st.top(), s[i]))
            {
                st.pop();
            }
            else
                return false;

        }
    }
    if(st.empty())
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
    string s;
    cin>>s;
    cout<<isValid(s)<<endl;
}
