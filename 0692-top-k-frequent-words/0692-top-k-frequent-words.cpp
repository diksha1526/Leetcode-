class Solution {
     struct compare{
        bool operator()(pair<int,string>& a,pair<int,string>& b){
            if(a.first==b.first)
                return a.second > b.second;  
            return a.first<b.first;  
        }
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>map;
        vector<string>ans;
        priority_queue<pair<int,string>,vector<pair<int,string>>,compare>pq;
        for(auto i:words){
            map[i]++;
        }
        for(auto i:map){
            pq.push({i.second,i.first});

        }
        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;

        
    }
};