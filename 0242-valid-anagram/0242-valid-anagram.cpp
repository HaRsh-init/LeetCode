class Solution {
public:
    bool isAnagram(string s, string t) {
        /*
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s==t)
            return true;
        else return false; */
        if(s.length() != t.length()) return false;
        
        unordered_map<char, int> pair;

        for(int i=0; i< s.length(); i++){
            pair[s[i]]++;
        }

        for(int i=0; i<t.length(); i++){
            if(pair.find(t[i]) == pair.end() || pair[t[i]] == 0) return false;
            pair[t[i]]--;
        }
        return true;
        
    }
};