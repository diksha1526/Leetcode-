class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
       int ans=0,res=0;
       for(int i=0;i<grumpy.size();i++){
        if(grumpy[i]==0){
            ans+=customers[i];

        }
        
       }
       for(int i=0;i<minutes;i++){
        if(grumpy[i]==1)
         res+=customers[i];
       }
       int maxi=res;
       for(int i=minutes;i<customers.size();i++){
        if(grumpy[i-minutes]){
            res-=customers[i-minutes];
        }
        if(grumpy[i]==1){
            res+=customers[i];
        }
        maxi=max(maxi,res);

       }
       ans+=maxi;
       return ans;
        
        
    }
};