class Solution {
public:
    int minAddToMakeValid(string s) {
        int paren1=0,paren2=0;
        stack<char>st;
        for(auto i:s){
            if(i==')'){
                if(!st.empty()){
                    st.pop();
                }
                else{
                    paren1+=1;
                }
            }
            else{
                st.push(i);
            }
        }
        return paren1+st.size();
        
    }
};