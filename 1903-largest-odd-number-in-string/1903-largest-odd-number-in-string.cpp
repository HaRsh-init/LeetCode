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
        // if there would have been leading zeroes:

        i=0;
        for(int i; i<ind; i++){
            if(num[i]-'0' == 0) continue;
            else break;
        }
        return num.substr(i, ind-i+1);
    }
};