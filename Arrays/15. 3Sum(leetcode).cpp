class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int i, j, lo, hi, n=nums.size(), sum;
        sort(nums.begin(), nums.end());
        for(i=0; i<n-1; i++) {
            if(i == 0 || i > 0 && nums[i] != nums[i-1]) {
                lo = i+1, hi = n-1, sum = 0 - nums[i];
                while(lo < hi) {
                    if(nums[lo] + nums[hi] == sum) {
                        ans.push_back({nums[i], nums[lo], nums[hi]});
                        while(lo < hi && nums[lo] == nums[lo+1]) lo++;
                        while(lo < hi && nums[hi] == nums[hi-1]) hi--;
                        lo++; hi--;
                    }
                    else if(nums[lo] + nums[hi] < sum) lo++;
                    else hi--;
                }
            }
        }
        return ans;
    }
};
