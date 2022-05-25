class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int mini=arr[0],maxi=arr[n-1];
        int diff = maxi-mini;
        for(int i=1; i<n; i++){
            if(arr[i]<k)
                continue;
            mini = min(arr[0]+k, arr[i]-k);
            maxi = max(arr[n-1]-k, arr[i-1]+k);
            diff = min((maxi-mini),diff);
        }
        return diff;
    }
};
