class Solution {
public:
    string largestOddNumber(string num) {
        
        int ind=-1;

        int i=0;
        for(int i= num.length()-1; i>=0; i--){
            if((num[i]-'0')%2 == 1){
                ind = i;
                break;
            }
        }
        return num.substr(0, ind+1);
    }
};