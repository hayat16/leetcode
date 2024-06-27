#include<bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int> nums, int k)
{
    map<int,int>mp;
    int diff;
    for(int i=0; i<nums.size(); i++)
    {
        if(mp.find(nums[i]) == mp.end()) //mp.find(v[i]) == v.end() means not found
        {
            mp[nums[i]]=i;
        }
        else
        {
            diff=abs(i-mp[nums[i]]);
            if(diff<=k)
            {
                return true;
            }
            mp[nums[i]]=i;
        }
    }
    return false;
}
int main()
{
    int n,x,k;
    vector<int>v;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    bool result=containsNearbyDuplicate(v,k);
    cout<<(result?"true":"false")<<endl;

}
