class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int j=0;
        sort(nums.begin(), nums.end());
        for(int i: nums){
            if(nums[i]==nums[i-1])
                j=nums[i];
        }
        return j;
    }
};