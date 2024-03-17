class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans=0,x;
       for(auto i:nums){
           if(i<10){
               ans+=i;
           }
           else{
              x=helper(i);
              string s=to_string(i);
               string s1;
               int size=s.size();
               while(size--){
                   s1+=to_string(x);
               }
               ans+=stoi(s1);
           }
       }
        return ans;
        
    }
    int helper(int i){
        int maxi=-99999;
        while(i>0){
            int r=i%10;
            if(r>maxi){
                maxi=r;
            }
            i=i/10;
        }
        return maxi;
    }
};