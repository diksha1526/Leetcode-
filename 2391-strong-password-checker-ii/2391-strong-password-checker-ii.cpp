class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8){
            return false;
        }
        bool digit=0,uchar=0,lchar=0,sp=0;
        char prev='\0';
        for(int i=0;i<password.size();i++){
            if(password[i]>='0' && password[i]<='9'){
                digit=1;
            }
            else if(password[i]>='A' && password[i]<='Z'){
                uchar=1;
            }
            else if(password[i]>='a' && password[i]<='z'){
                lchar=1;
            }
            else if(password[i]=='!' ||password[i]=='@' || password[i]=='#'|| password[i]=='$'||password[i]=='%'||password[i]=='^'||password[i]=='&'||password[i]=='*'||password[i]=='(' ||password[i]==')'||password[i]=='-'||password[i]=='+'){
                sp=1;
            }
            if(prev==password[i])
            return false;
            else{
                prev=password[i];
            }
        }
        if(digit && uchar && lchar && sp){
            return true;
        }
        return false;
    }
};