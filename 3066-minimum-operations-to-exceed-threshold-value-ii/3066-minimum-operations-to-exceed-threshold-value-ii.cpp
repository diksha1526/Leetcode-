class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>, greater<long long>>q;
        int c=0;
        for(auto i :nums){
            q.push(i);
        }
        while(q.top()<k){
           long long x=q.top();
            q.pop();
            long int y=q.top();
            q.pop();
            long long z=x*2+y;
            q.push(z);
            c++;
        }
        return c;
        
    }
};