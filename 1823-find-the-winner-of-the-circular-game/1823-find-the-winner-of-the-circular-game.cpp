class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>nums;
        int j=0;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        while(nums.size()>1){
            j+=k-1;
            j=j%nums.size();
            nums.erase(nums.begin()+j);
            
            
        }
        return nums[0];
        
    }
};