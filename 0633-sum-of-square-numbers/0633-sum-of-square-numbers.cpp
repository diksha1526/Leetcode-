class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0,j=pow(c,0.5);
        if(c==1){
            return true;
        }
        while(i<=j){
            long int x=pow(i,2)+pow(j,2);
            if(x==c){
                return true;
            }
            else if(x>c)
            j--;
            else{
                i++;
            }
        }
        return false;
        
    }
};