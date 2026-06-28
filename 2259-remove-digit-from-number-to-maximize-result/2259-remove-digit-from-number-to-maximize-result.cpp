class Solution {
public:
    string removeDigit(string number, char digit) {
        
        string s= "";

        for(int i=0; i<number.length(); i++){

            if(number[i] == digit){
                string newS = number.substr(0, i) + number.substr(i+1, number.length()-1);
                s = max(s, newS);
            } 
        }
        return s;
    }
};