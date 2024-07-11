class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1,k=0;
        while(i<=j){
            if(nums[i]==2){
                int x;
                x=nums[i];
                nums[i]=nums[j];
                nums[j]=x;
                j--;
                
            }
            else if(nums[i]==0){
                swap(nums[i],nums[k]);
                k++;
                i++;
                
            }
            else{
                i++;
            }
        
        }

        
    }
};