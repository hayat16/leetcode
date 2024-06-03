class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int c=0;
    if(nums.size()==0 || nums.size()==1)
    {
        return nums.size();
    }
    for(int i=0; i<nums.size()-1; i++)
    {
        if(nums[i]!=nums[i+1])
        {
            nums[c++]=nums[i];
        }
    }
    nums[c++]=nums[nums.size()-1];
    return c;
    }
};
