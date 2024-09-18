bool compare(int a,int b){
    string s=to_string(a);
    string s1=to_string(b);
    if(s+s1>s1+s){
        return 1;
    }
    return 0;
}

class Solution {
public:

    string largestNumber(vector<int>& nums) {
        string ans="";
        sort(nums.begin(),nums.end(),compare);
        for(auto i:nums){
            ans+=to_string(i);
            
        }
        if(ans[0]=='0'){
                return "0";
            }
        return ans;
    }
};