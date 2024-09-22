class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        set<string>s(bannedWords.begin(),bannedWords.end());
        int count=0;
        for(auto i:message){
            if(s.find(i)!=s.end()){
                count++;
                if(count>=2){
                    return true;
                }
            }
        }
        return false;
        
    }
};