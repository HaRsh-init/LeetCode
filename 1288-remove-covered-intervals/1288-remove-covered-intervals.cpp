class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
         if (a[0] == b[0])
             return a[1] > b[1];
         return a[0] < b[0];
        });
        int count = 0;

        for(int i=n-1; i>0; i--){

            for(int j=i-1; j>=0; j--){

            if( intervals[i][0] >= intervals[j][0] && intervals[i][1] <= intervals[j][1]){

                count += 1;
                break;
            }
            }
        }
        return n-count;

        
    }
};