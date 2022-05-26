// Basic Algorithm
/*
iterate from the last.
1. a[i] < a[i+1];
2. a[j] > a[i];
3. swap( a[i], a[j]);
4. reverse ( from index i+1 to last);

*/






class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),i,j;
        for(i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1])
                break;
            
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(j=n-1; j>=0; j--){
                if(nums[j]>nums[i])
                    break;
            }
            swap(nums[j], nums[i]);
            reverse(nums.begin()+i+1, nums.end());
        }
        
        
    }
};
