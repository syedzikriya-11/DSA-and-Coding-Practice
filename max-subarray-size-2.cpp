class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum=0;
        int high=1,low =0;
        int n=arr.size();
        for(int i=0;i<=high;i++){
            sum+=arr[i];
        }
      
      int res=0;
      
      while(high<n){
          res=max(sum,res);
          
          high++;
          low++;
          
          if(high==n){
              break;
          }
          sum-=arr[low-1];
          sum+=arr[high];
          
          
      }
       return res;

    }
    
};