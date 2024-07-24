class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        map<int,vector<int>>mp;
        int sum=0,j=1;
        vector<int>ans;
        for(auto i:nums){
            int num=i;
            sum=0;
            j=1;
            if(num==0){
                mp[mapping[0]].push_back(num);
            }
            else{
            while(num>0){
                int r=num%10;
                sum=sum+j*mapping[r];
                j*=10;
                num/=10;
                
            }

            mp[sum].push_back(i);}
        }
        int m=0;
        for(auto i:mp){
            for(int k=0;k<i.second.size();k++){
                nums[m]=i.second[k];
                m++;
            }
        }
        return nums;
    }
};