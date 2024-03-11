class Solution {
public:
    string triangleType(vector<int>& nums) {
       unordered_set<int>st(nums.begin(),nums.end());
        
        if(st.size()==3){
            if((nums[0]+nums[1]>nums[2])&&(nums[0]+nums[2]>nums[1])&&(nums[1]+nums[2]>nums[0])){
                return("scalene");
            }
            else{
                return("none");
            }
        }
        else if(st.size()==2){
            if((nums[0]+nums[1]>nums[2])&&(nums[0]+nums[2]>nums[1])&&(nums[1]+nums[2]>nums[0]))
            return("isosceles");
            else{
                return("none");
            }
        }
        else
            return("equilateral");
        
        
    }
};