class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(auto i:logs){
            if(i=="../" && count){
                 count--;
            }
            else if(i!="./" && i!="../"){
                count+=1;
            }
        }
        return count;
        
    }
};