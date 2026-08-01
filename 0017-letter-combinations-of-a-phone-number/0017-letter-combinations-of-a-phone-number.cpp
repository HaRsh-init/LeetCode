class Solution {
public:
    vector<string> ans;
    vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void func(string &digits, string& temp, int ind ){
        int n= digits.length();

        if(ind == n) {
            ans.push_back(temp);
            return;
        }

        for(auto &key: keys[digits[ind]-'0']){
            temp.push_back(key);
            func(digits, temp, ind+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return ans;
        string temp;
        func(digits, temp, 0);
        return ans;
    }
};