class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>mp;
        for(auto i:words[0]){
            mp[i]++;
        }
        for(int i=1;i<words.size();i++){
            string word=words[i];
            unordered_map<char,int>mp2;
            for(auto ch:word){
                mp2[ch]++;
            }
            unordered_map<char,int>res;
            for(auto i:mp){
                if(mp2.find(i.first)!=mp2.end()){
                    res[i.first]=min(i.second,mp2[i.first]);
                }
            }
            mp=res;
        }
        vector<string>ans;
        for(pair<char,int>p:mp){
            for(int i=0;i<p.second;i++){
                string s="";
                s+=p.first;
                ans.push_back(s);
            }
            
        }
        return ans;
        
        
    }
};