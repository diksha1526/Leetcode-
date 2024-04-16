class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        int mid,c=0;
        for(auto i:nums){
            if(i>=k){
                return c;
            }
            else{
                c++;
            }
        }
        return c;
    }
};