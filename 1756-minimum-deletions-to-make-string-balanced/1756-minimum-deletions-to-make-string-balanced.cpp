class Solution {
public:
    int minimumDeletions(string s) {
        stack<char>st;
        int count=0,ans=0;
        for(auto i:s){
            st.push(i);
        }
        while(!st.empty()){
            char t=st.top();
            st.pop();
            if(t=='b'){
                if(count>0){
                    count-=1;
                    ans+=1;
                }
            }
            else{
                count+=1;
            }
            }
        
        return ans;

        
    }
};