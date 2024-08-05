class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        string ans;
        int count=0;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto i:arr){
            if(mp[i]==1){
                count++;
            }
            if(count==k){
                return i;
            }
        }
        return("");
        
    }
};