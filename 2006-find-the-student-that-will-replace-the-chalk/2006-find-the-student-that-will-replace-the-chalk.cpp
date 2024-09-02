class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum=0;
        for(auto i:chalk){
            sum+=i;
        }
        while(k>=sum){
            k-=sum;
        }
        for(int i=0;i<chalk.size();i++){
            if(k>=chalk[i]){
                k-=chalk[i];
            }
            else
            return i;
        }
        return 0;

        
    }
};