class Solution
{
public:
    int majorityElement(vector<int>& nums)
    {
        map<int,int>mp;
        int max=0,x;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[nums[i]]==0)
            {
                mp[nums[i]]=1;
            }
            else
            {
                mp[nums[i]]=mp[nums[i]]+1;
            }
        }
        map<int,int>::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second >max)
            {
                max=it->second;
                x=it->first;
            }
        }
        return x;
    }
};
