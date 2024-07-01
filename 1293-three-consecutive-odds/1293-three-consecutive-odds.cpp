class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int q=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                q+=1;
                if(q==3){
                return true;
            }
            
            
            }
            else{
                q=0;
            }
            

        }
        return false;
        
    }
};