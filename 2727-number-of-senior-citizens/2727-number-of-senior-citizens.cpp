class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto i:details){
            int age;
            string s,s1;
            s=i[11];
            s1=i[12];
            s+=s1;
            cout<<s;
            age=stoi(s);
            if(age>60){
                ans+=1;
            }
        }
        return ans;
        
    }
};