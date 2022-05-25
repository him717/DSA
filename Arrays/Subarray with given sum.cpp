class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        long long totalsum = 0;
        int idx=0;
        for(int i=0; i<n; i++){
            totalsum+=arr[i];
            if(totalsum>s){
                while(totalsum>s){
                    totalsum-=arr[idx];
                    idx++;
                }
            }
            if(totalsum==s)
                return {idx+1,i+1};
        }
        return {-1};
        
        
    }
};
