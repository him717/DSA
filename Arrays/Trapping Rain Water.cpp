class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
            long long total = 0;
           int left[n],right[n];
           left[0] = arr[0];
           for(int i=1; i<n; i++) {
               left[i] = max(left[i-1], arr[i]);
           }
           right[n-1] = arr[n-1];
           for(int i=n-2; i>=0; i--) {
               right[i] = max(right[i+1], arr[i]);
           }
           for(int i=1; i<n-1; i++) {
               int calc = min(left[i-1], right[i+1]);
               if(calc > arr[i]) {
                   total = total + calc - arr[i];
               }
           }
           return total;
    }
};
