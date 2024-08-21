class Solution {
public:
    string getEncryptedString(string s, int k) {
        int i=0;
        string ans;
        for(int i=0;i<s.size();i++){
            int x=(k+i)%s.size();
            ans+=s[x];
        }
        return ans;
        
    }
};