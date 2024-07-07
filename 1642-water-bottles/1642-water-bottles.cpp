class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res=numBottles;
        while(numBottles>=numExchange){
            res+=numBottles/ numExchange;
            if(numBottles%numExchange==0)
            numBottles/=numExchange;
            else{
                numBottles=(numBottles/numExchange)+(numBottles%numExchange);
            }
        }
        return res;
        
        
    }
};