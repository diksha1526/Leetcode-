class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       vector<vector<int>>v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        for(int i=0;i<v.size();i++){
            int k,l,j,m;
            k=0,l=0;
            j=v[i][1];
            m=v[i][0];
            while(k<matrix[0].size()){
                matrix[m][k]=0;
                k++;
                
            }
            while(l<matrix.size()){
                matrix[l][j]=0;
                l++;
            }
        }


        
    }
};