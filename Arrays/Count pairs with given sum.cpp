class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>mapp;
        int count=0;
        for(int i=0; i<n; i++){
            if(mapp.count(k-arr[i])){
                count+=mapp[k-arr[i]];
            }
            mapp[arr[i]]++;
        }
        return count;
    }
};
