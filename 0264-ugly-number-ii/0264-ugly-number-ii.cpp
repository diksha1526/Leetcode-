class Solution {
public:
    int nthUglyNumber(int n) {
        set<int>st;
        st.insert(1);
        while(n>1){
            int num=*st.begin();
            st.erase(num);
            if(num<=INT_MAX/2 && st.find(num*2)==st.end()){
                st.insert(num*2);
            }
            if(num<=INT_MAX/3 && st.find(num*3)==st.end()){
                st.insert(num*3);
            }
            if(num<=INT_MAX/5 && st.find(num*5)==st.end()){
                st.insert(num*5);
            }
            n--;

        }
        return (*st.begin());
        

        
    }
};