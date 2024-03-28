class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>map;
        for(auto i:edges){
            map[i[0]]++;
            map[i[1]]++;
        }
        int n=edges.size();
        for(auto i:map){
            if(i.second==n){
                return i.first;
            }
        }
        return 0;
        
    }
};