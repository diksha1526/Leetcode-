class Solution {
 
public:

    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int ans=0;
        for(auto i:chars){
            mp[i]+=1;
        }
        for(int i=0;i<words.size();i++){
            int k;
            k=check(words[i],mp);
        
            ans+=k;}
        
        return ans;
    }
    int check(string &s,unordered_map<char,int>mp){
        int n=s.size();
            for(int j=0;j<n;j++){
                if(mp.find(s[j])!=mp.end() && mp[s[j]]>0){
                    mp[s[j]]--;
                    
                    
                }
                else{
                   return 0;
                }
            }
            return n;

    }
   
};
