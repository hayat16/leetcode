#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>nums)
{
    set<int>st;
    set<int>:: iterator it;
    int maximun=0;
    for(int i=0; i<nums.size(); i++)
    {
        st.insert(nums[i]);
    }
    for(it=st.begin(); it!=st.end(); it++)
    {
        int c=1;
        int n=*it;
        if(st.find(n-1) == st.end()) //st.find(n-1) == st.end() means n-1 value is not found
        {
            int key=n;
            c=0;
            while(st.find(key) != st.end())
            {
                c++;
                key++;
            }
        }
        if(c>maximun)
        {
            maximun=c;
        }
    }
    return maximun;
}
int main()
{
    int n,x;
    vector<int>v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int result=longestConsecutive(v);
    cout<<result<<endl;
}

