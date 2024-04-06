class Solution {
public:
    bool isHappy(int n) {
        int x;
        while(n>9){
            int sum=0;
            x=n;
            while(x){
                int rem=x%10;
                sum+=rem*rem;
                x=x/10;
            }
            n=sum;
        }
        if(n==1 || n==7){
            return true;
        }
        return false;
        
        

        
    }
};