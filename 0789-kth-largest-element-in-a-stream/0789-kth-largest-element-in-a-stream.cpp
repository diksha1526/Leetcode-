class KthLargest {
public:

    priority_queue<int,vector<int>,greater<int>>pq;
    int ans;
    KthLargest(int k, vector<int>& nums) {
        for(auto i:nums){
            pq.push(i);
            if(pq.size()>k){
                pq.pop();
            }
        }
        ans=k;
        
    }
    
    int add(int val) {
        int y=ans;
        pq.push(val);
        int res;
        if(pq.size()>y){
            pq.pop();
        }
        return pq.top();
        

        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */