class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans=0;
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]=i;
           
        }
        for(int j=0;j<t.size();j++){
            mp2[t[j]]=j;
         

        }
        for(auto k:mp1){
            ans+=abs(k.second-mp2[k.first]);
        }
        return ans;
        
    }
};