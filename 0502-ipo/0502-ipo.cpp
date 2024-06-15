class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<int>pq;
        vector<pair<int,int>>ans;
        for(int i=0;i<capital.size();i++){
            ans.push_back({capital[i],profits[i]});
        }
       int i=0;
       sort(ans.begin(),ans.end());
       while(k--){
        while(i<capital.size() && ans[i].first<=w){
            pq.push(ans[i].second);
            i++;
        }
        if(pq.empty()){
            break;
        }
            w+=pq.top();
            pq.pop();
        
       }
       return w;


    }
};