class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char c;
        for(auto i:letters){
            if(int(i)>int(target))
            return i;
        }
        return letters[0];
        
    }
};