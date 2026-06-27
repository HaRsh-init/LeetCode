class Solution {
public:
    // Helper function with recursion
    void generateSubsets(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
        // BASE CASE: We've processed all elements
        if (index == nums.size()) {
            result.push_back(current);  // Add the current subset to result
            return;
        }
        
        // CHOICE 1: EXCLUDE nums[index]
        generateSubsets(nums, index + 1, current, result);
        
        // CHOICE 2: INCLUDE nums[index]
        current.push_back(nums[index]);  // Add it to current subset
        generateSubsets(nums, index + 1, current, result);
        current.pop_back();  // BACKTRACK: Remove it for other branches
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        generateSubsets(nums, 0, current, result);
        return result;
    }
};