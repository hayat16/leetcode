#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    long long int r=0,n=x;
    while(n>0)
    {
        r=r*10 + n%10;
        n=n/10;
    }
    if(r==x)
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
    int n;
    cin>>n;
    bool result=isPalindrome(n);
    cout<<(result? "true":"false")<<endl;;
}
