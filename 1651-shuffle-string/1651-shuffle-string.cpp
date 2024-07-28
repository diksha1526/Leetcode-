class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char>v(s.size());
        for(int i=0;i<s.size();i++){
            v[indices[i]]=s[i];
        }
        string ans;
        for(auto i:v){
            ans+=i;
        }
        return ans;
    }
};