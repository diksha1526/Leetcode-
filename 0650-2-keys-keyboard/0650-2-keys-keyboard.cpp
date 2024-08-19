class Solution {
public:
    int minSteps(int n) {
        if(n==1){
            return 0;
        }
        int ans=0;
        int prime=2;
        while(n>1){
            while(n%prime==0){
                ans+=prime;
                n=n/prime;
            }
            prime+=1;
        }
        return ans;
       
        
    }
};