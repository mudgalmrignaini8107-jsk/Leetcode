class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0;
        int max_ending=nums[0];
        int min_ending=nums[0];
        int answer=nums[0];
        int n=nums.size();

        for(int i=1; i<n; i++)
        {
            int v1=nums[i];
            int v2=max_ending*nums[i];
            int v3=min_ending*nums[i];

            max_ending=max(v1,max(v2,v3));
            min_ending=min(v1,min(v2,v3));

            answer=max(answer,max_ending);
        }
        return answer;
    }
};
