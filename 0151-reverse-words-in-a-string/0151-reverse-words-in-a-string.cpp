
class Solution {
public:
    string reverseWords(string s) {
       stack<string>st;
       string s1;
       for(int i=0;i<s.size();i++){
        string ans;
        if(s[i]==' '){
            continue;
        }
        while(i<s.size() && s[i]!=' '){
            ans+=s[i];
            i++;

        }
        st.push(ans);
       }
       while(!st.empty()){
        string res;
        res=st.top();
        s1+=res;
        st.pop();
        if(!st.empty()){
            s1+=" ";
        }

       }
       return s1;
        
        
    }
};