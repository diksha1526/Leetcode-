class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>mp;
        bool flag=false;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                mp[5]+=1;
                flag=true;
            }
            else if(bills[i]==10){
                if(mp[5]>=1){
                    mp[10]+=1;
                    mp[5]-=1;
                    flag=true;
                }
                else{
                    return false;
                }
            }
            else{
                
                if(mp[5]>=1 && mp[10]>=1){
                    // flag=true;
                    mp[20]+=1;
                    mp[5]-=1;
                    mp[10]-=1;
                    flag=true;
                }
                else if(mp[5]>=3){
                    mp[5]-=3;
                    mp[20]+=1;
                }
                else{
                    return false;
                }
            }
            cout<<mp[5]<<" "<<mp[10]<<" "<<mp[20]<<" ";
        }
        return flag;
        
    }
};