class Solution {
public:

    long long gcd(int a, int b){
        if(b==0) return a;
        else return gcd(b, a%b);
    }

    long long gcdSum(vector<int>& nums) {

        vector<int> temp;

        int l=0, r=nums.size()-1;
        long long count =0;

        int maxi = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]> maxi) maxi = nums[i];
            temp.push_back(gcd(nums[i],maxi));
        }
        sort(temp.begin(), temp.end());

        for(int i=0; i<nums.size()/2; i++){
            if(l==r) break;
            count += gcd(temp[l], temp[r]);
            l++;
            r--;
            
        }

        return count;
    }
};