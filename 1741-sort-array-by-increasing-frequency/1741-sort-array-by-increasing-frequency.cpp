class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        map<int,vector<int>>mp1;
        for(auto i:mp){
            mp1[i.second].push_back(i.first);
        }
        vector<int>ans;
        for(auto i:mp1){
            int n=i.second.size();
            for(int j=n-1;j>=0;j--){
                int x=i.second[j];
                int y=i.first;
                while(y--){
                    ans.push_back(x);
                }
            }
        }
        return ans;
        
    }
};