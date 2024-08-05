class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        priority_queue<int>p;
        const int MOD=1e9+7;
        long ans=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                
                p.push(sum);
            }
        }
        while(p.size()>right){
            p.pop();
        }
        for(int i=right;i>=left;i--){
            int tp=p.top();
            p.pop();
            ans=+(ans+tp)%MOD;
        }
        return ans;
        
    }
};