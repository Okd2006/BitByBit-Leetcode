
#include<string>
class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance=0;
        string result="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(balance>0){
                    result+="(";
                }
                balance++;
            }
            else if(s[i]==')'){
                balance--;
                if(balance>0){
                    result+=')';
                }
            }
            








        }
        return result;
    }
};
