class Solution {
public:
    int sumBase(int n, int k) {
        string s="";
        int sum=0;
        while(n>=k){
            int x=n%k;
            s+=to_string(x);
            n/=k;

            

        }
        s+=to_string(n);
        cout<<s;
        int y=stoi(s);
        while(y>0){
            int x=y%10;
            sum+=x;
            y/=10;
        }
        return sum;
        
    }
};