class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        unordered_map<int,int>mp1,mp2;
        vector<int>v;
        for(int i=0;i<matrix.size();i++){
            int mini=INT_MAX;
            for(int j=0;j<matrix[0].size();j++){
                mini=min(mini,matrix[i][j]);
            }
            mp1[mini]=1;
        }
        for(int i=0;i<matrix[0].size();i++){
            int maxi=INT_MIN;
            for(int j=0;j<matrix.size();j++){
                maxi=max(maxi,matrix[j][i]);
            }
            mp2[maxi]=1;
        }
        for(auto i:mp1){
            if(mp2.find(i.first)!=mp2.end()){
                v.push_back(i.first);
                break;
            }
        }
        return v;

        
    }
};