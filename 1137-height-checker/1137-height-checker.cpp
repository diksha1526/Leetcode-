class Solution {
public:
    int heightChecker(vector<int>& heights) {
        priority_queue<int>pq;
        int ans=0;
        for(int i:heights){
            pq.push(i);
        }
        for(int j=heights.size()-1;j>=0;j--){
            if(heights[j]!=pq.top()){
                ans+=1;
            }
            pq.pop();
        }
        return ans;

        
    }
};