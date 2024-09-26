class MyCalendar {
public:
     vector<vector<int>>v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
       
            for(auto &i:v){
                if((i[0]<=start && i[1]>start )||(i[0]<end && i[1]>=end)||(start<i[0] && end>i[1])){
                    return false;
                }
            
        }
        v.push_back({start,end});
        return true;
       
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */