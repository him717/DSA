class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
        // your code here
        int n=size;
        unordered_map<int,int> mapp;
        sort(arr,arr+n);
        // vector<int>ans;
        for(int i=0; i<n;i++){
            mapp[arr[i]]++;
            if(mapp[arr[i]]>(n/2)){
                return arr[i];
            }
                
        }
        
            
        return -1;
    }
        
    
};
