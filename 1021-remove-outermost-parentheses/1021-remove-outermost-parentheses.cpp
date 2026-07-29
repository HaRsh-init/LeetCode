class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string result= "";
        int length = 0;

        for(char c: s){
            if(c == '('){
                if(length > 0) result += c;
                length++;
            } 
            else if(c == ')'){
                length--;
                if(length > 0) result += c;
            }
        }
        return result;
    }
};