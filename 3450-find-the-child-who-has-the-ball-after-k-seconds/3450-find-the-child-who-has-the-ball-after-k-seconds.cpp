class Solution {
public:
    int numberOfChild(int n, int k) {
        n-=1;
        int div=k/n;
        int ans=k%n;
        if(div%2==0){
            return k%n;
        }
        return (n-ans);
    }
};