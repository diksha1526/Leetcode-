class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1;
        int result=0;
        for(int j=people.size()-1;j>=0 && i<=j ;j--){
            if(people[i]+people[j]<=limit){
                i++;

            }
            result+=1;
        }
        
        return result;
        
        
    }
};