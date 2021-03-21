class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ret;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)ret.push_back(nums[i]);
            else zero++;
        }
        for(int i=0;i<zero;i++)
            ret.push_back(0);
        for(int i=0;i<ret.size();i++)
           nums[i]=ret[i];
    }
};