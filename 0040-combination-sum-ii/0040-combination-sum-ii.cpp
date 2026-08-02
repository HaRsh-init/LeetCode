class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(int i, int n, vector<int>& v, int sm, int target, vector<int>& res){
        if(i==n){
            if(sm == target) ans.push_back(res);
            return;
        }

        if(sm > target) return;

        res.push_back(v[i]);
        backtrack(i+1, n, v, sm+v[i], target, res);
        res.pop_back();
        int strt = i;
        i++;
        while( i<n && v[i] == v[strt]) i++;
        backtrack(i, n, v, sm, target, res);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> res;
        sort(candidates.begin(), candidates.end());
        backtrack(0, candidates.size(), candidates, 0, target, res);
        return ans;
    }
};