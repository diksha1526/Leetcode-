class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int>ans;
         
        for(int i=0;i<n;i++){
            ans.push_back(1);
        }
        while(k>0){
            for(int j=1;j<n;j++){
                ans[j]=(ans[j]+ans[j-1])%1000000007;
            }
            k--;
        }
        return ans[n-1];
        
    }
};