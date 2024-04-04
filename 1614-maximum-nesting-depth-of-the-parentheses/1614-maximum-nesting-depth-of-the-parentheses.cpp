class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ans++;
            }
            else if(s[i]==')'){
                ans--;
            }
            res=max(res,ans);
        }
        return res;
        
    }
};