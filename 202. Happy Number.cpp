#include<bits/stdc++.h>
using namespace std;
bool isHappy(int n)
{
    vector<int>v;
    vector<int>:: iterator it;
    int sum=0,r;
    while(sum!=1)
    {
        sum=0,r=0;
        while(n>0)
        {
            r=n%10;
            sum=sum+pow(r,2);
            n=n/10;
        }
        n=sum;
        it=find(v.begin(),v.end(),n);
        if (it != v.end()) //it != v.end() means found
        {
            return false;
        }
        else
        {
            v.push_back(sum);
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    bool result=isHappy(n);
    cout<<result<<endl;
}
