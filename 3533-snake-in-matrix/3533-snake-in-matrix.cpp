class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>>grid(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int r=(i*n)+j;
                grid[i][j]=r;
            }
        }
        int result=grid[0][0];
        int k=0,l=0;
        for(auto i:commands){
            if(i=="RIGHT"){
                result=grid[k][l+1];
                l=l+1;
            }
            else if(i=="LEFT"){
                result=grid[k][l-1];
                l=l-1;

            }
            else if(i=="UP"){
                result=grid[k-1][l];
                k=k-1;
            }
            else{
                result=grid[k+1][l];
                k+=1;
            }
        }
        return  result;
    }
};