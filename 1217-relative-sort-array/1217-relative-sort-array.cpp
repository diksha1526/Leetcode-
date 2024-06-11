class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        map<int,int>mp1;
        for(int i:arr1){
            mp1[i]++;
        }
        
        for(int i=0;i<arr2.size();i++){
            while(mp1[arr2[i]]){
                ans.push_back(arr2[i]);
                mp1[arr2[i]]--;
            }
        }
        for(auto i:mp1){
            while(i.second--){
                ans.push_back(i.first);
            }
        }
        return ans;
         
        
    }
};