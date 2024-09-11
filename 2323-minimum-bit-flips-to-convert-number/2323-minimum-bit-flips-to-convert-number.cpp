class Solution {
public:
    int minBitFlips(int start, int goal) {
        stack<int>s1,s2;
        int ans=0;
        while(start>0){
            s1.push(start%2);
            start/=2;

        }
        while(goal>0){
            s2.push(goal%2);
            goal/=2;
            
        }
        if(s1.size()>s2.size()){
            int x=s1.size()-s2.size();
            while(x--)
            s2.push(0);
        }
        else if(s1.size()<s2.size()){
             int y=s2.size()-s1.size();
            while(y--)
            s1.push(0);
        }
        while(!s1.empty() && !s2.empty()){
            if(s1.top()!=s2.top()){
                ans+=1;
                
            }
            s1.pop();s2.pop();
        }
        return ans;
        
    }
};