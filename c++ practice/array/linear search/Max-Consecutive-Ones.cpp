class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,count=0,ans=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count=0;
            }
            else
                count++;
                ans=max(ans,count);
        }
        return ans;
    }
};