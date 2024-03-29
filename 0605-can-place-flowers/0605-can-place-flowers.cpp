class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int c = 0;
        int i;
        for (int i = 0; i < f.size(); i++) {
            if (f[i] == 0) {
                int x = -1, y = -1;
                if (i == 0 || f[i - 1] == 0) {
                    x = 0;
                }
                if (i == f.size() - 1 || f[i + 1] == 0) {
                    y = 0;
                }
                if (x == 0 && y == 0) {
                    c++;
                    f[i] = 1;
                }

            }
            if(c>=n){
                return true;
            }
        }

        return false;
    }
};