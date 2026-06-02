class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int n=nums.size();
        for(int i=0; i<n;i++){
            for(int result=1+1; resukt<n; result ++){
                if (nums[i]+nums[result]==target){
                    return {i, result};
                }
            }
            return {};
        }
    };
           