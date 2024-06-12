class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>freq(3,0);
        int j=0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<freq.size();i++){
            while(freq[i]--){
                nums[j]=i;
                j+=1;
            }

        }

        
    }
};