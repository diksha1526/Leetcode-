class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_map<int,int>map;
        for(auto i:nums){
            map[i]++;
        }
        for(int i=0;i<nums.size()+1;i++){
            if(map.find(i+1)==map.end()){
                return i+1;
            }
            
        }
        return 0;
    }
};