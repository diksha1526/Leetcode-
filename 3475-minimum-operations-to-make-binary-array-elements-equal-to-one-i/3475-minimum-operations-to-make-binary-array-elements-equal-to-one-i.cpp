class Solution {
public:
    int minOperations(vector<int>& nums) {
        int vec_ans=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(i>=nums.size()-2){
                    return -1;
                }
                vec_ans+=1;
                int j=i;
                
                while(j<i+3 && j<nums.size()){
                    if(nums[j]==0){
                        nums[j]=1;
                        
                            
                    }
                    else{
                        nums[j]=0;
                    }
                    j+=1;

                }
                
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return -1;
            }
        }
        return vec_ans;
        
        
        
        
        
    }
};