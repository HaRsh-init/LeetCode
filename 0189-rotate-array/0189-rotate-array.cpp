class Solution {
public:
    void rk(vector<int>& nums, int k){
        int n = nums.size();
        k = k%n;

        if(n==0 || n==1 || k==0) return;
        int temp[k];
        for(int i=n; i>n-k; i--){
            temp[n-i]= nums[i-1];
        }

        for(int i=n-1; i>=k; i--){
            nums[i] = nums[i-k];
        }
        for(int i=0; i<k; i++){
            nums[i] = temp[k-i-1];
        }
    }
    void rotate(vector<int>& nums, int k) {

        rk(nums, k);
        
        
    }
};