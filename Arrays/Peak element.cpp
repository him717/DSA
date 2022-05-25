class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
        if(n==1||arr[0]>arr[1]){
              return 0;
          }
          if(arr[n-1]>arr[n-2])
           return n-1;
          for(int i=1;i<n-1;){
              if(arr[i]>arr[i+1]){
                  if(arr[i-1]<arr[i])
                      return i;
                  else
                      i+=2;
               }
              else
                  i++;
              
          }
          return -1;
    }
};
