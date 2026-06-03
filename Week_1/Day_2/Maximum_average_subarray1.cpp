class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int n=nums.size();
     int  curr_sum=0;
    int maxsum=0;
      
      for(int i=0;i<k; i++)
      {
        curr_sum=curr_sum+nums[i];
      } 
     maxsum=curr_sum;
     for(int i=k;i<n;i++)
     {
        curr_sum+=nums[i]-nums[i-k];
     
     maxsum=max(maxsum,curr_sum);
     }
     return double(maxsum)/k;
    }
};