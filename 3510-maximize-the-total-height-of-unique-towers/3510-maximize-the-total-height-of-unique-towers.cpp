class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        unordered_set<int>st;
        long long ans=0;
        int lh=INT_MAX;
        sort(maximumHeight.rbegin(),maximumHeight.rend());
        for(int i=0;i<maximumHeight.size();i++){
              int curr=min(lh-1,maximumHeight[i]);
               if(curr<=0){
                return -1;
               }
               ans+=curr;
               lh=curr;
               
            
            
        }
        // auto x=st.begin();
        // for(int i=0;i<st.size();i++){
         
        //     ans+=*x;
        //     x++;
        // }
        return ans;
    }
};