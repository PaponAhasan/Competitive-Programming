class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2){
            if(nums[i]!=nums[i+1])return nums[i];
        }
        return nums[n];
    }
};

/*-------------------------------------------*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int r=0;
        for(int i=0;i<nums.size();i++){
            r^=nums[i];
        }
        return r;
    }
};