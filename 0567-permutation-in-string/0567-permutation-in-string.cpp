class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.length();
        int m = s2.length();

        if( m<n ) return false;

        vector<int> s1Freq(26, 0);
        vector<int> freqMap(26, 0);

        for(auto it: s1) s1Freq[it-'a']++;
        for(int i=0; i<m; i++){
            freqMap[s2[i]-'a']++;

            if(i >= n) freqMap[s2[i-n]-'a']--;
            if(i >= n-1 && freqMap == s1Freq) return true;
        }
        
        return false;

    }
};