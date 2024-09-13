class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>st(allowed.begin(),allowed.end());
       int ans=0;
        for(auto i:words){
            bool flag=true;
            for(auto word:i){
                if(st.find(word)==st.end()){
                    flag=false;
                    break;
                }
            }
            ans+=flag;
            
            
        }
        return ans;
        
    }
};