class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n= nums.size();
        long long left=0, right= n-1;

        long long mid = 0;
        while(right>=left){

            mid = left + (right-left)/2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid+1;
            else right = mid-1;
        }

        return left;
        
    }
};