class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string ,int>mp,mp1;
        string s;
        vector<string>ans;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' '){
                mp[s]+=1;
                cout<<s;
                s="";
                

            }
            else{
                s+=s1[i];
            }

            
        }
        if (!s.empty()) { 
            mp[s]++;
        }
        s="";
        for(int i=0;i<s2.size();i++){
            if(s2[i]==' '){
                mp1[s]+=1;
                s="";

            }
            else{
                s+=s2[i];
            }

            
        }
        if (!s.empty()) { 
            mp[s]++;
        }
        for(auto i:mp){
            if(mp1.find(i.first)==mp1.end() && mp[i.first]==1){
                ans.push_back(i.first);
            }
            
            

        }
        for(auto i:mp1){
            if(mp.find(i.first)==mp.end() && mp1[i.first]==1){
                ans.push_back(i.first);
            }  

        }
        return ans;
        
    }
};