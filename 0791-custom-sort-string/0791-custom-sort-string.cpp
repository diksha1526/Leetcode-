class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp1,mp2;
        string s1;
        for(auto i:s){
            mp1[i]++;
        }
        for(auto i:order){
            if(mp1.find(i)!=mp1.end()){
                int x=mp1[i];
                while(x>0){
                    s1+=i;
                    mp2[i]++;
                    x--;
                }
            }
            
        }
        for(auto i:s){
            if(mp2.find(i)==mp2.end()){
                s1+=i;
            }
        }
        return s1;
        
        
        
    }
};