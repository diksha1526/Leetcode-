class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ans;
      
       
       ans.push_back({1});

       for(int i=1;i<numRows;i++){
        vector<int>v;
        for(int j=0;j<=i;j++){
            if(j==0 ||j==i){
                v.push_back(1);
            }
            else{
                int res;
                res=ans[i-1][j-1]+ans[i-1][j];
                v.push_back(res);
            }

        }
        ans.push_back(v);
       }
    return ans;
    }
};