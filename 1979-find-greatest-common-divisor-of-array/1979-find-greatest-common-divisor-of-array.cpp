class Solution {
public:
    int gcd(int a, int b){
        if( b==0) return a;
        else return gcd(b, a%b);
    }
    int findGCD(vector<int>& nums) {
        int n= nums.size();

        int max = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]>max) max = nums[i];
        }
        int min = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]<min) min = nums[i];
        }

        return gcd(min, max);
        
    }
};