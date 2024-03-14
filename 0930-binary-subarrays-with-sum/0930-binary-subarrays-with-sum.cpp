class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int result=0,prefix=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            result+=mp[prefix-goal];
            mp[prefix]++;
        }
        return result;
        
    }
};