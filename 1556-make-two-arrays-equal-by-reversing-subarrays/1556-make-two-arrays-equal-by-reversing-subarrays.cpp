class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mp,mp1;
        for(auto i:target){
            mp[i]+=1;
        }
        // for(auto i:arr){
        //     mp1[i]+=1;
        // }
        for(auto i:arr){
            if(mp.find(i)==mp.end()||mp[i]==0){
                return false;
            }
            else{
                mp[i]-=1;
            }
        }
        return true;
        
    }
};