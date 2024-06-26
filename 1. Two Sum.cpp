#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>nums, int target)
{
    int r;
    vector<int> v1;
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        r = target - nums[i];
        if (mp.find(r)!=mp.end()&& mp.find(r)->second != i) // mp.find(r)!=mp.end() means found
        {
            v1.push_back(mp.find(r)->second);
            v1.push_back(i);
            return v1;
        }
        mp[nums[i]] = i;
    }
    return v1;
}
int main()
{
    int n, x, target;
    vector<int> v;
    cin >> n >> target;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    vector<int> p = twoSum(v, target);
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}

