class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        priority_queue<pair<int,int>>pq;
        int ans=0;
       for(int i=0;i<profit.size();i++){
          pq.push({profit[i],difficulty[i]});
       } 
       sort(worker.rbegin(),worker.rend());
       for(int i=0;i<worker.size();i++){
         
         while(!pq.empty()){
             if(pq.top().second>worker[i]){
                pq.pop();
             }
             else{
                ans+=pq.top().first;
                break;
             }
             

         }
         
         if(pq.empty()){
            break;
         }
         

       }
        return ans;
        
    }
};