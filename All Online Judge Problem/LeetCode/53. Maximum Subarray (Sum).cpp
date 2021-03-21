class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int dp[nums.size()+1];
        int mx=nums[0];
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            dp[i]=max(nums[i],nums[i]+dp[i-1]);
        }
        for(int i=0;i<nums.size();i++){
            mx=max(mx,dp[i]);
        }
        return mx;
    }
};