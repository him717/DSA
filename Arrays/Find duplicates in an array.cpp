class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int> mapp;
        sort(arr,arr+n);
        vector<int>ans;
        for(int i=0; i<n;i++){
            mapp[arr[i]]++;
            if(mapp[arr[i]]==2){
                ans.push_back(arr[i]);
            }
                
        }
        if(ans.empty())
            ans.push_back(-1);
            
        return ans;
    }
};
