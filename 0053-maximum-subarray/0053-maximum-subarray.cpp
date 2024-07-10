class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>pr;
        pr.push_back(nums[0]);
        int sum=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
            res=pr[i-1]+nums[i];
            sum=max(res,nums[i]);
            pr.push_back(sum);
        }
        int m= *max_element(pr.begin(),pr.end());
        return m;
        
    }
};