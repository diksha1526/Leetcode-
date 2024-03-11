class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>result;
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            pq.push(make_pair(i.second,i.first));
        }
        while(k>0){
            result.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return result;
        
    }
};