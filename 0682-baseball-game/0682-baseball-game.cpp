class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int ans=0;
        for(auto i:operations){
            if(i=="D"){
                int x=st.top();
                st.push(2*x);
            }
            else if(i=="C"){
                st.pop();
            }
            else if(i=="+"){
                int y=st.top();
                ans+=st.top();
                st.pop();
                int z=st.top();
                ans+=z;
                st.push(y);
                st.push(ans);
                ans=0;
            }
            else{
                int x=stoi(i);
                st.push(x);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
        
    }
};