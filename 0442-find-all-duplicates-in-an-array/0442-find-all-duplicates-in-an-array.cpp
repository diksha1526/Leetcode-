class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>map;
        vector<int>v;
        for(auto i:nums){
            map[i]++;
        }
        for(auto i:map){
            if(i.second>1){
                v.push_back(i.first);
            }
        }
        return v;
    }
};