class Solution {
public:

    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> cur;
        backtrack(candidates, cur, target, 0);
        return res;
    }

    void backtrack(vector<int>& nums, vector<int>& cur, int target, int i){

        if( target == 0){
            res.push_back(cur);
            return;
        }
        if( target < 0 || i >= nums.size()){
            return;
        }

        cur.push_back(nums[i]);
        backtrack(nums, cur, target-nums[i], i);
        cur.pop_back();
        backtrack(nums, cur, target, i+1);
    }
};