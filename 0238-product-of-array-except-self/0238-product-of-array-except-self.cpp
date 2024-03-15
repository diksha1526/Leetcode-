class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result(nums.size(),1);
        int pro=1,p=1;
        for(int i=0;i<nums.size();i++){
            result[i]=p;
            p*=nums[i];
            
        }
        for(int i=nums.size()-1;i>=0;i--){
            result[i]*=pro;
            pro*=nums[i];
            
        }
        return result;

        
    }
};