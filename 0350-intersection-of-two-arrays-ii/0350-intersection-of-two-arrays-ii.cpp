class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        unordered_map<int,int>mp1,mp2;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(auto i:nums2){
            mp2[i]++;
        }
        for(auto i:nums1){
            if(mp2[i]-->0){
                v.push_back(i);
            }
        }
        return v;
        
    }
};