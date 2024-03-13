class Solution {
public:
    int pivotInteger(int n) {
        int i=1,j=n;
        if(n==1)
            return 1;
        while(i<j){
            int mid=(i+j)/2;
            int sum1=mid*(mid+1)/2;
            int sum2=(n*(n+1)/2)-sum1+mid;
            if(sum1==sum2){
                return mid;
            }
            else if(sum1<sum2){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return -1;
    }
};