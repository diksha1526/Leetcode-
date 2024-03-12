class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i=0,j=0;
        vector<int>v(arr.begin(),arr.end());
        while(i<arr.size()){
            if(v[j]==0){
                arr[i++]=0;
                if(i<arr.size()){
                    arr[i++]=0;
                }
                j++;

            }
            else{
                arr[i++]=v[j++];
            }
        }
        
        
    }
};