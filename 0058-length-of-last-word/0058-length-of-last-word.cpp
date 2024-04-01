class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<string>ans;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' ){
                continue;
            }
            string temp="";
            while(i<s.size() && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            ans.push(temp);
        }
        return ans.top().size();
        
    }
};