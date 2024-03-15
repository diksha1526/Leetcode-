class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>v;
        int count=0;
        for(int i=0;i<queries.size();i++){
            int radius=queries[i][2]*queries[i][2];
            for(int j=0;j<points.size();j++){
                int x=(points[j][0]-queries[i][0]);
                int y=(points[j][1]-queries[i][1]);
                if((x*x+y*y)<=radius){
                    count++;
                }
            }
            v.push_back(count);
            count=0;
        }
        return v;
        
    }
};